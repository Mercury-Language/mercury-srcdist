/*
** Automatically generated from `handle_options.m'
** by the Mercury compiler,
** version rotd-2015-03-24
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
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 2857 "handle_options.m"
struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0_s {
#line 2857 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__Options_3;
#line 2857 "handle_options.m"
  MR_Word * libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__HeadVar__2_16;
#line 2857 "handle_options.m"
  MR_Cont libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__cont;
#line 2857 "handle_options.m"
  void * libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__cont_env_ptr;
#line 2857 "handle_options.m"
  MR_bool libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__succeeded;
#line 2857 "handle_options.m"
  MR_String libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__Name_6;
#line 2857 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__Comp_7;
#line 2857 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__CompOpts_8;
#line 2857 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__MaybeTargets_9;
#line 2857 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__IncludeInGradeString_10;
#line 2864 "handle_options.m"
  jmp_buf libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__commit_0;
#line 2864 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__Opt_11;
#line 2864 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__Value_12;
#line 2864 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__V_17_17;
#line 2865 "handle_options.m"
  MR_Box libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__conv0_V_17_17;
#line 2878 "handle_options.m"
  jmp_buf libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__commit_1;
#line 2878 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__TypeCtorInfo_23_23;
#line 2878 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__TypeCtorInfo_24_24;
#line 2878 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__Target_14;
#line 2878 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__V_18_18;
#line 2878 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__V_27_27;
#line 2879 "handle_options.m"
  MR_Box libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__conv2_Target_14;
#line 2857 "handle_options.m"
};

#line 2699 "handle_options.m"
struct libs__handle_options__must_not_contain_2_p_0_env_0_s {
#line 2699 "handle_options.m"
  MR_Word libs__handle_options__must_not_contain_2_p_0_env_0__OmitComponents_3;
#line 2699 "handle_options.m"
  MR_Word libs__handle_options__must_not_contain_2_p_0_env_0__GradeComponents_4;
#line 2702 "handle_options.m"
  MR_bool libs__handle_options__must_not_contain_2_p_0_env_0__succeeded;
#line 2702 "handle_options.m"
  jmp_buf libs__handle_options__must_not_contain_2_p_0_env_0__commit_0;
#line 2702 "handle_options.m"
  MR_Word libs__handle_options__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6;
#line 2702 "handle_options.m"
  MR_String libs__handle_options__must_not_contain_2_p_0_env_0__Component_5;
#line 2703 "handle_options.m"
  MR_Box libs__handle_options__must_not_contain_2_p_0_env_0__conv0_Component_5;
#line 2699 "handle_options.m"
};

#line 2690 "handle_options.m"
struct libs__handle_options__must_contain_2_p_0_env_0_s {
#line 2690 "handle_options.m"
  MR_Word libs__handle_options__must_contain_2_p_0_env_0__IncludeComponents_3;
#line 2690 "handle_options.m"
  MR_Word libs__handle_options__must_contain_2_p_0_env_0__GradeComponents_4;
#line 2693 "handle_options.m"
  MR_bool libs__handle_options__must_contain_2_p_0_env_0__succeeded;
#line 2693 "handle_options.m"
  jmp_buf libs__handle_options__must_contain_2_p_0_env_0__commit_0;
#line 2693 "handle_options.m"
  MR_Word libs__handle_options__must_contain_2_p_0_env_0__TypeCtorInfo_6_6;
#line 2693 "handle_options.m"
  MR_String libs__handle_options__must_contain_2_p_0_env_0__Component_5;
#line 2694 "handle_options.m"
  MR_Box libs__handle_options__must_contain_2_p_0_env_0__conv0_Component_5;
#line 2690 "handle_options.m"
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

#line 2857 "handle_options.m"
struct libs__handle_options__grade_directory_component_2_p_0_2_env_0_s {
#line 2857 "handle_options.m"
  MR_Box * libs__handle_options__grade_directory_component_2_p_0_2_env_0__wrapper_arg_1;
#line 2857 "handle_options.m"
  MR_Cont libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont;
#line 2857 "handle_options.m"
  void * libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont_env_ptr;
#line 2857 "handle_options.m"
  MR_Word libs__handle_options__grade_directory_component_2_p_0_2_env_0__conv0_HeadVar__2_16;
#line 2857 "handle_options.m"
};

#line 3155 "handle_options.m"
struct libs__handle_options__convert_grade_option_3_p_0_2_env_0_s {
#line 3155 "handle_options.m"
  MR_Box * libs__handle_options__convert_grade_option_3_p_0_2_env_0__wrapper_arg_1;
#line 3155 "handle_options.m"
  MR_Cont libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont;
#line 3155 "handle_options.m"
  void * libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont_env_ptr;
#line 3155 "handle_options.m"
  MR_Word libs__handle_options__convert_grade_option_3_p_0_2_env_0__conv0_HeadVar__1_1;
#line 3155 "handle_options.m"
};

#line 2857 "handle_options.m"
struct libs__handle_options__compute_grade_2_p_0_2_env_0_s {
#line 2857 "handle_options.m"
  MR_Box * libs__handle_options__compute_grade_2_p_0_2_env_0__wrapper_arg_1;
#line 2857 "handle_options.m"
  MR_Cont libs__handle_options__compute_grade_2_p_0_2_env_0__cont;
#line 2857 "handle_options.m"
  void * libs__handle_options__compute_grade_2_p_0_2_env_0__cont_env_ptr;
#line 2857 "handle_options.m"
  MR_Word libs__handle_options__compute_grade_2_p_0_2_env_0__conv0_HeadVar__2_16;
#line 2857 "handle_options.m"
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


#line 302 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0;

#line 305 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__getopt_io__pti_maybe_option_table_1__plain_libs__options__type_ctor_info_option_0;

#line 308 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__pair__pti_pair_2__plain_libs__handle_options__type_ctor_info_grade_component_0__plain_builtin__type_ctor_info_string_0;

#line 311 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0;

#line 314 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__set_ordlist__pti_set_ordlist_1__plain_libs__handle_options__type_ctor_info_grade_component_0;

#line 317 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct1 libs__handle_options____vpti_pred_1__plain_builtin__type_ctor_info_string_0;

#line 320 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct2 libs__handle_options____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

#line 323 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 326 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0;

#line 329 "libs.handle_options.c"
static const MR_FA_TypeInfo_Struct1 libs__handle_options__list__ti_list_1builtin__type_ctor_info_string_0;

#line 332 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct2 libs__handle_options____vpti_pred_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0;

#line 335 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_0;

#line 338 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_1;

#line 341 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_2;

#line 344 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_3;

#line 347 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_4;

#line 350 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_5;

#line 353 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_6;

#line 356 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_7;

#line 359 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_8;

#line 362 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_9;

#line 365 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_10;

#line 368 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_11;

#line 371 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_12;

#line 374 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_13;

#line 377 "libs.handle_options.c"
static const MR_EnumFunctorDescPtr libs__handle_options__libs__handle_options__enum_value_ordered_grade_component_0[14];

#line 380 "libs.handle_options.c"
static const MR_EnumFunctorDescPtr libs__handle_options__libs__handle_options__enum_name_ordered_grade_component_0[14];

#line 383 "libs.handle_options.c"
static const MR_Integer libs__handle_options__libs__handle_options__functor_number_map_grade_component_0[14];

#line 386 "libs.handle_options.c"
static MR_bool MR_CALL 
libs__handle_options____Unify____grade_component_0_0_10001(
#line 389 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 391 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_2);

#line 394 "libs.handle_options.c"
static void MR_CALL 
libs__handle_options____Compare____grade_component_0_0_10001(
#line 397 "libs.handle_options.c"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 399 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 401 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_3);

#line 3155 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__reset_grade_options__3155__1_3_p_0(
#line 3155 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_12,
#line 3155 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_13,
#line 3155 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_14);

#line 2864 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_2(
#line 2864 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2865 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_4(
#line 2865 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2864 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_3(
#line 2864 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2864 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_5(
#line 2864 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2878 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_6(
#line 2878 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2879 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_8(
#line 2879 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2878 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_7(
#line 2878 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2878 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_9(
#line 2878 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2857 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_1(
#line 2857 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2857 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0(
#line 2857 "handle_options.m"
  MR_Word libs__handle_options__Options_3,
#line 2857 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_16,
#line 2857 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2857 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 2808 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__add_option_list__2808__1_3_p_0(
#line 2808 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_13,
#line 2808 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_14,
#line 2808 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_15);

#line 2717 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2717__1_2_p_0(
#line 2717 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_19,
#line 2717 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_20);

#line 2236 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2236__1_2_f_0(
#line 2236 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_161,
#line 2236 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1534);

#line 2234 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2234__1_2_f_0(
#line 2234 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_161,
#line 2234 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1528);

#line 2243 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2243__1_1_f_0(
#line 2243 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1523);

#line 2242 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2242__1_1_f_0(
#line 2242 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1518);

#line 2212 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2212__1_2_f_0(
#line 2212 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_161,
#line 2212 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1505);

#line 2208 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2208__1_2_f_0(
#line 2208 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_161,
#line 2208 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1499);

#line 2190 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2190__2_2_p_0(
#line 2190 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1492,
#line 2190 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1646);

#line 2190 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2190__1_2_p_0(
#line 2190 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1493,
#line 2190 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1648);

#line 2172 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2172__1_3_f_0(
#line 2172 "handle_options.m"
  MR_String libs__handle_options__TargetArch_129,
#line 2172 "handle_options.m"
  MR_String libs__handle_options__GradeString_141,
#line 2172 "handle_options.m"
  MR_String libs__handle_options__HeadVar__3_1480);

#line 2136 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2136__1_2_f_0(
#line 2136 "handle_options.m"
  MR_String libs__handle_options__GradeString_141,
#line 2136 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1461);

#line 2126 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2126__1_2_f_0(
#line 2126 "handle_options.m"
  MR_String libs__handle_options__GradeString_141,
#line 2126 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1451);

#line 2113 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2113__1_2_f_0(
#line 2113 "handle_options.m"
  MR_String libs__handle_options__GradeString_141,
#line 2113 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1434);

#line 2098 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2098__1_2_f_0(
#line 2098 "handle_options.m"
  MR_String libs__handle_options__GradeString_141,
#line 2098 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1419);

#line 530 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__check_option_values__530__1_1_p_0(
#line 530 "handle_options.m"
  MR_Char libs__handle_options__HeadVar__1_267);

#line 2808 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2785__1_5_p_0_2(
#line 2808 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2808 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2808 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2808 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3);

#line 2808 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2785__1_5_p_0_1(
#line 2808 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2808 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2808 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2808 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3);

#line 2785 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2785__1_5_p_0(
#line 2785 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_23,
#line 2785 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_24,
#line 2785 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_25,
#line 2785 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__4_26,
#line 2785 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_27);

#line 2757 "handle_options.m"
static void MR_CALL 
libs__handle_options____Compare____grade_component_0_0(
#line 2757 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__1_1,
#line 2757 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_2,
#line 2757 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__3_3);

#line 2757 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options____Unify____grade_component_0_0(
#line 2757 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_1,
#line 2757 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_2);

#line 3231 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_dump_alias_2_p_0(
#line 3231 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1,
#line 3231 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_2);

#line 3216 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__char_is_not_2_p_0(
#line 3216 "handle_options.m"
  MR_Char libs__handle_options__A_3,
#line 3216 "handle_options.m"
  MR_Char libs__handle_options__B_4);

#line 3205 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__split_grade_string_2_2_p_0_1(
#line 3205 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3205 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 3200 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__split_grade_string_2_2_p_0(
#line 3200 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1,
#line 3200 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2);

#line 3161 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_start_values_1_p_0(
#line 3161 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__1_1,
#line 3161 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 3161 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 2901 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_component_table_5_p_2(
#line 2901 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__1_1,
#line 2901 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2,
#line 2901 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_3,
#line 2901 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__4_4,
#line 2901 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_5,
#line 2901 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2901 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 2899 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__grade_component_table_5_p_0(
#line 2899 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1,
#line 2899 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2,
#line 2899 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_3,
#line 2899 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__4_4,
#line 2899 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_5);

#line 2839 "handle_options.m"
static void MR_CALL 
libs__handle_options__construct_string_2_p_0(
#line 2839 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1,
#line 2839 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_2);

#line 2702 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_1(
#line 2702 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2703 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_3(
#line 2703 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2702 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_2(
#line 2702 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2702 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_4(
#line 2702 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2699 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__must_not_contain_2_p_0(
#line 2699 "handle_options.m"
  MR_Word libs__handle_options__OmitComponents_3,
#line 2699 "handle_options.m"
  MR_Word libs__handle_options__GradeComponents_4);

#line 2693 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_1(
#line 2693 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2694 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_3(
#line 2694 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2693 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_2(
#line 2693 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2693 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_4(
#line 2693 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2690 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__must_contain_2_p_0(
#line 2690 "handle_options.m"
  MR_Word libs__handle_options__IncludeComponents_3,
#line 2690 "handle_options.m"
  MR_Word libs__handle_options__GradeComponents_4);

#line 2717 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__filter_grade_7_p_0_1(
#line 2717 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2717 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2717 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2);

#line 2672 "handle_options.m"
static void MR_CALL 
libs__handle_options__filter_grade_7_p_0(
#line 2672 "handle_options.m"
  MR_Word libs__handle_options__FilterPred_8,
#line 2672 "handle_options.m"
  MR_Word libs__handle_options__CondComponents_9,
#line 2672 "handle_options.m"
  MR_String libs__handle_options__GradeString_10,
#line 2672 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Grades_0_15,
#line 2672 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Grades_16,
#line 2672 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_17,
#line 2672 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_18);

#line 2649 "handle_options.m"
static void MR_CALL 
libs__handle_options__string_to_grade_component_6_p_0(
#line 2649 "handle_options.m"
  MR_String libs__handle_options__FilterDesc_7,
#line 2649 "handle_options.m"
  MR_String libs__handle_options__Comp_8,
#line 2649 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Comps_0_15,
#line 2649 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Comps_16,
#line 2649 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_17,
#line 2649 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_18);

#line 2637 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_6(
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
libs__handle_options__postprocess_options_libgrades_4_p_0_5(
#line 2637 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2637 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2637 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2);

#line 2635 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_4(
#line 2635 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2635 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2635 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2635 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2635 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2635 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5);

#line 2635 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_3(
#line 2635 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2635 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2635 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2);

#line 2627 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_2(
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

#line 2625 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_1(
#line 2625 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2625 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2625 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2625 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2625 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2625 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5);

#line 2617 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0(
#line 2617 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_12,
#line 2617 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_13,
#line 2617 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_14,
#line 2617 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_15);

#line 2564 "handle_options.m"
static void MR_CALL 
libs__handle_options__unsafe_set_already_printed_usage_1_p_0(
#line 2564 "handle_options.m"
  MR_Word libs__handle_options__X_1);

#line 2564 "handle_options.m"
static void MR_CALL 
libs__handle_options__unsafe_get_already_printed_usage_1_p_0(
#line 2564 "handle_options.m"
  MR_Word * libs__handle_options__X_1);

#line 2564 "handle_options.m"
static void MR_CALL 
libs__handle_options__unlock_already_printed_usage_0_p_0(void);

#line 2564 "handle_options.m"
static void MR_CALL 
libs__handle_options__lock_already_printed_usage_0_p_0(void);

#line 2564 "handle_options.m"
static void MR_CALL 
libs__handle_options__initialise_mutable_already_printed_usage_0_p_0(void);

#line 2564 "handle_options.m"
static void MR_CALL 
libs__handle_options__pre_initialise_mutable_already_printed_usage_0_p_0(void);

#line 2526 "handle_options.m"
static void MR_CALL 
libs__handle_options__disable_smart_recompilation_5_p_0(
#line 2526 "handle_options.m"
  MR_String libs__handle_options__OptionDescr_6,
#line 2526 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2526 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12);

#line 2511 "handle_options.m"
static void MR_CALL 
libs__handle_options__maybe_disable_smart_recompilation_8_p_0(
#line 2511 "handle_options.m"
  MR_Word libs__handle_options__Smart_9,
#line 2511 "handle_options.m"
  MR_Word libs__handle_options__ConflictingOption_10,
#line 2511 "handle_options.m"
  MR_Word libs__handle_options__ValueToDisableSmart_11,
#line 2511 "handle_options.m"
  MR_String libs__handle_options__OptionDescr_12,
#line 2511 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_16,
#line 2511 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_17);

#line 2491 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_requires_7_p_0(
#line 2491 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_8,
#line 2491 "handle_options.m"
  MR_Word libs__handle_options__RequiredOption_9,
#line 2491 "handle_options.m"
  MR_Word libs__handle_options__RequiredOptionValue_10,
#line 2491 "handle_options.m"
  MR_String libs__handle_options__ErrorMessage_11,
#line 2491 "handle_options.m"
  MR_Word libs__handle_options__Globals_12,
#line 2491 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_16,
#line 2491 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_17);

#line 2473 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_neg_implies_5_p_0(
#line 2473 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_6,
#line 2473 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOption_7,
#line 2473 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOptionValue_8,
#line 2473 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2473 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12);

#line 2457 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_implies_5_p_0(
#line 2457 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_6,
#line 2457 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOption_7,
#line 2457 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOptionValue_8,
#line 2457 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2457 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12);

#line 2377 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_lowlevel_2_p_0(
#line 2377 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_12,
#line 2377 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_13);

#line 2236 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_13(
#line 2236 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2236 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2234 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_12(
#line 2234 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2234 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2243 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_11(
#line 2243 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2243 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2242 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_10(
#line 2242 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2242 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2212 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_9(
#line 2212 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2212 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2208 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_8(
#line 2208 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2208 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2190 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_7(
#line 2190 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2190 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2190 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_6(
#line 2190 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2190 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2172 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_5(
#line 2172 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2172 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2136 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_4(
#line 2136 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2136 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2126 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_3(
#line 2126 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2126 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2113 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_2(
#line 2113 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2113 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2098 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_1(
#line 2098 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2098 "handle_options.m"
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

#line 2857 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_directory_component_2_p_0_1(
#line 2857 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2857 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_directory_component_2_p_0_2(
#line 2857 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2857 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 2857 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2857 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 2785 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_4(
#line 2785 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2785 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2785 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2785 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2785 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2785 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5);

#line 3155 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_3(
#line 3155 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3155 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 3155 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 3155 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3);

#line 3155 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_1(
#line 3155 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 3155 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_2(
#line 3155 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3155 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 3155 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 3155 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 2857 "handle_options.m"
static void MR_CALL 
libs__handle_options__compute_grade_2_p_0_1(
#line 2857 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2857 "handle_options.m"
static void MR_CALL 
libs__handle_options__compute_grade_2_p_0_2(
#line 2857 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2857 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 2857 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2857 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 2552 "handle_options.m"
static void MR_CALL 
libs__handle_options__usage_errors_3_p_0_1(
#line 2552 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2552 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2552 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2552 "handle_options.m"
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


#line 2906 "handle_options.m"
/* sealed */ struct libs__handle_options__vector_common_type_11_0_s {
#line 2906 "handle_options.m"
  const MR_String libs__handle_options__vector_common_type_11_0__vct_11_f_0;
#line 2906 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_11_0__vct_11_f_1;
#line 2906 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_11_0__vct_11_f_2;
#line 2906 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_11_0__vct_11_f_3;
#line 2906 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_11_0__vct_11_f_4;
#line 2906 "handle_options.m"
};

static /* final */ const struct libs__handle_options__vector_common_type_11_0_s libs__handle_options_vector_common_11[50];

#line 3163 "handle_options.m"
/* sealed */ struct libs__handle_options__vector_common_type_12_0_s {
#line 3163 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_12_0__vct_12_f_0;
#line 3163 "handle_options.m"
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
    ((MR_Box) (libs__handle_options__IntroducedFrom__pred__convert_grade_option__2785__1_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_7[0])),
    ((MR_Box) (libs__handle_options__IntroducedFrom__pred__convert_grade_option__2785__1_5_p_0_2)),
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
    ((MR_Box) ((MR_Integer) 215)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[14])))
  },
  /* row 16 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[15])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Integer) 255)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 18 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[17])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Integer) 256)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 20 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[19])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[18])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Integer) 254)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 22 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[21])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[20])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_Integer) 250)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 24 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[23])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[22])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_Integer) 249)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 26 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[25])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[24])))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_Integer) 251)),
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
    ((MR_Box) ((MR_Integer) 250)),
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
    ((MR_Box) ((MR_Integer) 255)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 36 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[35])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_Integer) 254)),
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
    ((MR_Box) ((MR_Integer) 249)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 42 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[41])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[40])))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_Integer) 251)),
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
    ((MR_Box) ((MR_Integer) 187)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 48 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[47])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_Integer) 186)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 50 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[49])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[48])))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_Integer) 187)),
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
    ((MR_Box) ((MR_Integer) 222)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 55 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[54])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_Integer) 221)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 57 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[56])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[55])))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_Integer) 220)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 59 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[58])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[57])))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_Integer) 221)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 61 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[60])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[55])))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_Integer) 220)),
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
    ((MR_Box) ((MR_Integer) 228)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 72 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[71])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 73 */
  {
    ((MR_Box) ((MR_Integer) 227)),
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
    ((MR_Box) ((MR_Integer) 215)),
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
    ((MR_Box) ((MR_Integer) 215)),
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
    ((MR_Box) ((MR_Integer) 215)),
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
    ((MR_Box) ((MR_Integer) 256)),
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
    ((MR_Box) ((MR_Integer) 487)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 111 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[110])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 112 */
  {
    ((MR_Box) ((MR_Integer) 301)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 113 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[112])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[111])))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_Integer) 195)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 115 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[114])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 116 */
  {
    ((MR_Box) ((MR_Integer) 194)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 117 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[116])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[115])))
  },
  /* row 118 */
  {
    ((MR_Box) ((MR_Integer) 192)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 119 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[118])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[117])))
  },
  /* row 120 */
  {
    ((MR_Box) ((MR_Integer) 193)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 121 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[120])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[119])))
  },
  /* row 122 */
  {
    ((MR_Box) ((MR_Integer) 222)),
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
    ((MR_Box) ((MR_Integer) 216)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 131 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[130])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 132 */
  {
    ((MR_Box) ((MR_Integer) 252)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 133 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[132])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 134 */
  {
    ((MR_Box) ((MR_Integer) 223)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 135 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[134])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 136 */
  {
    ((MR_Box) ((MR_Integer) 194)),
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
    ((MR_Box) ((MR_Integer) 193)),
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
    ((MR_Box) ((MR_Integer) 195)),
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
    ((MR_Box) ((MR_Integer) 192)),
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
    ((MR_Box) ((MR_Integer) 232)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 152 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[151])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 153 */
  {
    ((MR_Box) ((MR_Integer) 231)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 154 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[153])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[152])))
  },
  /* row 155 */
  {
    ((MR_Box) ((MR_Integer) 229)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 156 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[155])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[154])))
  },
  /* row 157 */
  {
    ((MR_Box) ((MR_Integer) 231)),
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
    ((MR_Box) ((MR_Integer) 232)),
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
    ((MR_Box) ((MR_Integer) 243)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 169 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[168])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 170 */
  {
    ((MR_Box) ((MR_Integer) 224)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 171 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[170])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[169])))
  },
  /* row 172 */
  {
    ((MR_Box) ((MR_Integer) 233)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 173 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[172])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 174 */
  {
    ((MR_Box) ((MR_Integer) 228)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 175 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[174])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 176 */
  {
    ((MR_Box) ((MR_Integer) 227)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 177 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[176])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[175])))
  },
  /* row 178 */
  {
    ((MR_Box) ((MR_Integer) 217)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 179 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[178])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 180 */
  {
    ((MR_Box) ((MR_Integer) 219)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 181 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[180])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 182 */
  {
    ((MR_Box) ((MR_Integer) 218)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 183 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[182])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[181])))
  },
  /* row 184 */
  {
    ((MR_Box) ((MR_Integer) 219)),
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
    ((MR_Box) ((MR_Integer) 213)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 188 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[187])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 189 */
  {
    ((MR_Box) ((MR_Integer) 212)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 190 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[189])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[188])))
  },
  /* row 191 */
  {
    ((MR_Box) ((MR_Integer) 213)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 192 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[191])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 193 */
  {
    ((MR_Box) ((MR_Integer) 212)),
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
    ((MR_Box) ((MR_Integer) 216)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 204 */
  {
    ((MR_Box) ((MR_Integer) 217)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "none"))
  },
  /* row 206 */
  {
    ((MR_Box) ((MR_Integer) 215)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[205])))
  },
  /* row 207 */
  {
    ((MR_Box) ((MR_Integer) 218)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 208 */
  {
    ((MR_Box) ((MR_Integer) 223)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 209 */
  {
    ((MR_Box) ((MR_Integer) 224)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 210 */
  {
    ((MR_Box) ((MR_Integer) 252)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 211 */
  {
    ((MR_Box) ((MR_Integer) 186)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 212 */
  {
    ((MR_Box) ((MR_Integer) 233)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 213 */
  {
    ((MR_Box) ((MR_Integer) 229)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 214 */
  {
    ((MR_Box) ((MR_Integer) 301)),
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

static /* final */ const struct libs__handle_options__vector_common_type_12_0_s libs__handle_options_vector_common_12[30] = {
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
#line 2564 "handle_options.m"
MR_Word libs__handle_options__mutable_variable_already_printed_usage;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__handle_options__mutable_variable_already_printed_usage_lock;
#endif

#line 2564 "handle_options.m"
void 
libs__handle_options__user_init_pred_0(void)
#line 2564 "handle_options.m"
{
#line 2564 "handle_options.m"
	libs__handle_options__initialise_mutable_already_printed_usage_0_p_0();
}


#line 3520 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 3529 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__getopt_io__pti_maybe_option_table_1__plain_libs__options__type_ctor_info_option_0 = {
  &mercury__getopt_io__getopt_io__type_ctor_info_maybe_option_table_1,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0
  }
};

#line 3537 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__pair__pti_pair_2__plain_libs__handle_options__type_ctor_info_grade_component_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 3546 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 3555 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__set_ordlist__pti_set_ordlist_1__plain_libs__handle_options__type_ctor_info_grade_component_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0
  }
};

#line 3563 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct1 libs__handle_options____vpti_pred_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 3572 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct2 libs__handle_options____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 3582 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 3590 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 3598 "libs.handle_options.c"
static const MR_FA_TypeInfo_Struct1 libs__handle_options__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 3606 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct2 libs__handle_options____vpti_pred_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &libs__handle_options__list__ti_list_1builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &libs__handle_options__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 3616 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_0 = {
  (MR_String) "comp_gcc_ext",
  (MR_Integer) 0
};

#line 3622 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_1 = {
  (MR_String) "comp_par",
  (MR_Integer) 1
};

#line 3628 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_2 = {
  (MR_String) "comp_par_threadscope",
  (MR_Integer) 2
};

#line 3634 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_3 = {
  (MR_String) "comp_gc",
  (MR_Integer) 3
};

#line 3640 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_4 = {
  (MR_String) "comp_prof",
  (MR_Integer) 4
};

#line 3646 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_5 = {
  (MR_String) "comp_term_size",
  (MR_Integer) 5
};

#line 3652 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_6 = {
  (MR_String) "comp_trail",
  (MR_Integer) 6
};

#line 3658 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_7 = {
  (MR_String) "comp_minimal_model",
  (MR_Integer) 7
};

#line 3664 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_8 = {
  (MR_String) "comp_pregen_spf",
  (MR_Integer) 8
};

#line 3670 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_9 = {
  (MR_String) "comp_pic",
  (MR_Integer) 9
};

#line 3676 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_10 = {
  (MR_String) "comp_lowlevel",
  (MR_Integer) 10
};

#line 3682 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_11 = {
  (MR_String) "comp_trace",
  (MR_Integer) 11
};

#line 3688 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_12 = {
  (MR_String) "comp_stack_extend",
  (MR_Integer) 12
};

#line 3694 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_13 = {
  (MR_String) "comp_regions",
  (MR_Integer) 13
};

#line 3700 "libs.handle_options.c"
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

#line 3718 "libs.handle_options.c"
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

#line 3736 "libs.handle_options.c"
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

#line 3754 "libs.handle_options.c"
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

#line 3771 "libs.handle_options.c"
static MR_bool MR_CALL 
libs__handle_options____Unify____grade_component_0_0_10001(
#line 3774 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 3776 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_2)
#line 3778 "libs.handle_options.c"
{
#line 3780 "libs.handle_options.c"
  {
#line 3782 "libs.handle_options.c"
    MR_bool libs__handle_options__succeeded;

#line 3785 "libs.handle_options.c"
    {
#line 3787 "libs.handle_options.c"
      libs__handle_options__succeeded = libs__handle_options____Unify____grade_component_0_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2));
    }
#line 3790 "libs.handle_options.c"
    return libs__handle_options__succeeded;
#line 3792 "libs.handle_options.c"
  }
#line 3794 "libs.handle_options.c"
}

#line 3797 "libs.handle_options.c"
static void MR_CALL 
libs__handle_options____Compare____grade_component_0_0_10001(
#line 3800 "libs.handle_options.c"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 3802 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 3804 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_3)
#line 3806 "libs.handle_options.c"
{
#line 3808 "libs.handle_options.c"
  {
#line 3810 "libs.handle_options.c"
    MR_Word libs__handle_options__conv0_HeadVar__1_1;

#line 3813 "libs.handle_options.c"
    {
#line 3815 "libs.handle_options.c"
      libs__handle_options____Compare____grade_component_0_0(&libs__handle_options__conv0_HeadVar__1_1, ((MR_Word) libs__handle_options__wrapper_arg_2), ((MR_Word) libs__handle_options__wrapper_arg_3));
    }
#line 3818 "libs.handle_options.c"
    *libs__handle_options__wrapper_arg_1 = ((MR_Box) (libs__handle_options__conv0_HeadVar__1_1));
#line 3820 "libs.handle_options.c"
  }
#line 3822 "libs.handle_options.c"
}

#line 3155 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__reset_grade_options__3155__1_3_p_0(
#line 3155 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_12,
#line 3155 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_13,
#line 3155 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_14)
#line 3155 "handle_options.m"
{
#line 3155 "handle_options.m"
  {
#line 3155 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 3155 "handle_options.m"
    MR_Word libs__handle_options__Option_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__HeadVar__1_12, (MR_Integer) 0)));
#line 3155 "handle_options.m"
    MR_Word libs__handle_options__Value_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__HeadVar__1_12, (MR_Integer) 1)));

#line 3158 "handle_options.m"
    {
#line 3158 "handle_options.m"
      mercury__map__set_4_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (libs__handle_options__Option_8)), ((MR_Box) (libs__handle_options__Value_9)), libs__handle_options__HeadVar__2_13, libs__handle_options__HeadVar__3_14);
#line 3158 "handle_options.m"
      return;
    }
#line 3155 "handle_options.m"
  }
#line 3155 "handle_options.m"
}

#line 2864 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_2(
#line 2864 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2864 "handle_options.m"
{
#line 2864 "handle_options.m"
  {
#line 2864 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2864 "handle_options.m"
    MR_builtin_longjmp((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__commit_0, 1);
#line 2864 "handle_options.m"
  }
#line 2864 "handle_options.m"
}

#line 2865 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_4(
#line 2865 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2865 "handle_options.m"
{
#line 2865 "handle_options.m"
  {
#line 2865 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2865 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__V_17_17 = ((MR_Word) (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__conv0_V_17_17);
#line 2865 "handle_options.m"
    {
#line 2865 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_3(libs__handle_options__env_ptr);
#line 2865 "handle_options.m"
      return;
    }
#line 2865 "handle_options.m"
  }
#line 2865 "handle_options.m"
}

#line 2864 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_3(
#line 2864 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2864 "handle_options.m"
{
#line 2864 "handle_options.m"
  {
#line 2864 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2864 "handle_options.m"
    {
#line 2867 "handle_options.m"
      MR_Word libs__handle_options__V_26_26;
#line 2867 "handle_options.m"
      MR_Box libs__handle_options__conv1_V_26_26;

#line 2865 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__Opt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__V_17_17, (MR_Integer) 0)));
#line 2865 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__Value_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__V_17_17, (MR_Integer) 1)));
#line 2867 "handle_options.m"
      {
#line 2867 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__Options_3, ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__Opt_11)), &libs__handle_options__conv1_V_26_26);
      }
#line 2867 "handle_options.m"
      if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__succeeded)
#line 2867 "handle_options.m"
        {
#line 2867 "handle_options.m"
          libs__handle_options__V_26_26 = ((MR_Word) libs__handle_options__conv1_V_26_26);
#line 2867 "handle_options.m"
          (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 2867 "handle_options.m"
        }
#line 2867 "handle_options.m"
      if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__succeeded)
#line 2867 "handle_options.m"
        {
#line 2867 "handle_options.m"
          (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__succeeded = mercury__getopt_io____Unify____option_data_0_0((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__Value_12, libs__handle_options__V_26_26);
        }
#line 2866 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__succeeded = !((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__succeeded);
#line 2866 "handle_options.m"
      if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__succeeded)
#line 2866 "handle_options.m"
        {
#line 2866 "handle_options.m"
          libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_2(libs__handle_options__env_ptr);
#line 2866 "handle_options.m"
          return;
        }
#line 2864 "handle_options.m"
    }
#line 2864 "handle_options.m"
  }
#line 2864 "handle_options.m"
}

#line 2864 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_5(
#line 2864 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2864 "handle_options.m"
{
#line 2864 "handle_options.m"
  {
#line 2864 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2864 "handle_options.m"
    if (MR_builtin_setjmp((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__commit_0) == 0)
#line 2864 "handle_options.m"
      {
#line 2864 "handle_options.m"
        {
#line 2865 "handle_options.m"
          {
#line 2865 "handle_options.m"
            mercury__list__member_2_p_1((MR_Word) &libs__handle_options_scalar_common_1[1], &(libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__conv0_V_17_17, (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__CompOpts_8, libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_4, libs__handle_options__env_ptr);
          }
#line 2864 "handle_options.m"
        }
#line 2864 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__succeeded = MR_FALSE;
#line 2864 "handle_options.m"
      }
#line 2864 "handle_options.m"
    else
#line 2864 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 2864 "handle_options.m"
  }
#line 2864 "handle_options.m"
}

#line 2878 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_6(
#line 2878 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2878 "handle_options.m"
{
#line 2878 "handle_options.m"
  {
#line 2878 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2878 "handle_options.m"
    MR_builtin_longjmp((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__commit_1, 1);
#line 2878 "handle_options.m"
  }
#line 2878 "handle_options.m"
}

#line 2879 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_8(
#line 2879 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2879 "handle_options.m"
{
#line 2879 "handle_options.m"
  {
#line 2879 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2879 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__Target_14 = ((MR_Word) (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__conv2_Target_14);
#line 2879 "handle_options.m"
    {
#line 2879 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_7(libs__handle_options__env_ptr);
#line 2879 "handle_options.m"
      return;
    }
#line 2879 "handle_options.m"
  }
#line 2879 "handle_options.m"
}

#line 2878 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_7(
#line 2878 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2878 "handle_options.m"
{
#line 2878 "handle_options.m"
  {
#line 2878 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2878 "handle_options.m"
    {
#line 2880 "handle_options.m"
      MR_Box libs__handle_options__conv3_V_27_27;

#line 2880 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__V_18_18 = (MR_Integer) 176;
#line 4067 "libs.handle_options.c"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__TypeCtorInfo_24_24 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
#line 2880 "handle_options.m"
      {
#line 2880 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__TypeCtorInfo_24_24, (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__TypeCtorInfo_23_23, (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__Options_3, ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__V_18_18)), &libs__handle_options__conv3_V_27_27);
      }
#line 2880 "handle_options.m"
      if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__succeeded)
#line 2880 "handle_options.m"
        {
#line 2880 "handle_options.m"
          (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__V_27_27 = ((MR_Word) libs__handle_options__conv3_V_27_27);
#line 2880 "handle_options.m"
          (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 2880 "handle_options.m"
        }
#line 2878 "handle_options.m"
      if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__succeeded)
#line 2878 "handle_options.m"
        {
#line 2880 "handle_options.m"
          {
#line 2880 "handle_options.m"
            (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__succeeded = mercury__getopt_io____Unify____option_data_0_0((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__Target_14, (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__V_27_27);
          }
#line 2880 "handle_options.m"
          if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__succeeded)
#line 2880 "handle_options.m"
            {
#line 2880 "handle_options.m"
              libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_6(libs__handle_options__env_ptr);
#line 2880 "handle_options.m"
              return;
            }
#line 2878 "handle_options.m"
        }
#line 2878 "handle_options.m"
    }
#line 2878 "handle_options.m"
  }
#line 2878 "handle_options.m"
}

#line 2878 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_9(
#line 2878 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2878 "handle_options.m"
{
#line 2878 "handle_options.m"
  {
#line 2878 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2878 "handle_options.m"
    if (MR_builtin_setjmp((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__commit_1) == 0)
#line 2878 "handle_options.m"
      {
#line 2878 "handle_options.m"
        {
#line 2878 "handle_options.m"
          MR_Word libs__handle_options__Targets_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__MaybeTargets_9, (MR_Integer) 0)));

#line 4132 "libs.handle_options.c"
          (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__TypeCtorInfo_23_23 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 2879 "handle_options.m"
          {
#line 2879 "handle_options.m"
            mercury__list__member_2_p_1((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__TypeCtorInfo_23_23, &(libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__conv2_Target_14, libs__handle_options__Targets_13, libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_8, libs__handle_options__env_ptr);
          }
#line 2878 "handle_options.m"
        }
#line 2878 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__succeeded = MR_FALSE;
#line 2878 "handle_options.m"
      }
#line 2878 "handle_options.m"
    else
#line 2878 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 2878 "handle_options.m"
  }
#line 2878 "handle_options.m"
}

#line 2857 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_1(
#line 2857 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2857 "handle_options.m"
{
#line 2857 "handle_options.m"
  {
#line 2857 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2864 "handle_options.m"
    {
#line 2864 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_5(libs__handle_options__env_ptr);
    }
#line 2864 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__succeeded = !((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__succeeded);
#line 2857 "handle_options.m"
    if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__succeeded)
#line 2857 "handle_options.m"
      {
#line 2872 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__succeeded = ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__IncludeInGradeString_10 == (MR_Integer) 1);
#line 2857 "handle_options.m"
        if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__succeeded)
#line 2857 "handle_options.m"
          {
#line 2881 "handle_options.m"
            if (((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__MaybeTargets_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2882 "handle_options.m"
              (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 2881 "handle_options.m"
            else
#line 2878 "handle_options.m"
              {
#line 2878 "handle_options.m"
                {
#line 2878 "handle_options.m"
                  libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_9(libs__handle_options__env_ptr);
                }
#line 2878 "handle_options.m"
              }
#line 2857 "handle_options.m"
            if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__succeeded)
#line 2857 "handle_options.m"
              {
#line 2884 "handle_options.m"
                {
#line 2884 "handle_options.m"
                  MR_Word base;
#line 2884 "handle_options.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2884 "handle_options.m"
                  *((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__HeadVar__2_16) = base;
#line 2884 "handle_options.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__Comp_7));
#line 2884 "handle_options.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__Name_6));
#line 2884 "handle_options.m"
                }
#line 2884 "handle_options.m"
                {
#line 2884 "handle_options.m"
                  ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__cont_env_ptr);
#line 2884 "handle_options.m"
                  return;
                }
#line 2857 "handle_options.m"
              }
#line 2857 "handle_options.m"
          }
#line 2857 "handle_options.m"
      }
#line 2857 "handle_options.m"
  }
#line 2857 "handle_options.m"
}

#line 2857 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0(
#line 2857 "handle_options.m"
  MR_Word libs__handle_options__Options_3,
#line 2857 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_16,
#line 2857 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2857 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 2857 "handle_options.m"
{
#line 2857 "handle_options.m"
  {
#line 2857 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0_s libs__handle_options__env;

#line 2857 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__Options_3 = libs__handle_options__Options_3;
#line 2857 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__HeadVar__2_16 = libs__handle_options__HeadVar__2_16;
#line 2857 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__cont = libs__handle_options__cont;
#line 2857 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
#line 2858 "handle_options.m"
    {
#line 2858 "handle_options.m"
      libs__handle_options__grade_component_table_5_p_2(&(libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__Name_6, &(libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__Comp_7, &(libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__CompOpts_8, &(libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__MaybeTargets_9, &(libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_env_0__IncludeInGradeString_10, libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0_1, &libs__handle_options__env);
    }
#line 2857 "handle_options.m"
  }
#line 2857 "handle_options.m"
}

#line 2808 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__add_option_list__2808__1_3_p_0(
#line 2808 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_13,
#line 2808 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_14,
#line 2808 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_15)
#line 2808 "handle_options.m"
{
#line 2808 "handle_options.m"
  {
#line 2808 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2808 "handle_options.m"
    MR_Word libs__handle_options__Option_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__HeadVar__1_13, (MR_Integer) 0)));
#line 2808 "handle_options.m"
    MR_Word libs__handle_options__Data_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__HeadVar__1_13, (MR_Integer) 1)));

#line 2810 "handle_options.m"
    {
#line 2810 "handle_options.m"
      mercury__map__set_4_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (libs__handle_options__Option_10)), ((MR_Box) (libs__handle_options__Data_11)), libs__handle_options__HeadVar__2_14, libs__handle_options__HeadVar__3_15);
#line 2810 "handle_options.m"
      return;
    }
#line 2808 "handle_options.m"
  }
#line 2808 "handle_options.m"
}

#line 2717 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2717__1_2_p_0(
#line 2717 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_19,
#line 2717 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_20)
#line 2717 "handle_options.m"
{
#line 2717 "handle_options.m"
  {
#line 2717 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2718 "handle_options.m"
    MR_Word libs__handle_options__V_11_11;
#line 2718 "handle_options.m"
    MR_Word libs__handle_options__V_12_12;
#line 2718 "handle_options.m"
    MR_Word libs__handle_options__V_13_13;
#line 2718 "handle_options.m"
    MR_Word libs__handle_options__V_14_14;

#line 2718 "handle_options.m"
    {
#line 2718 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__grade_component_table_5_p_0(libs__handle_options__HeadVar__1_19, &libs__handle_options__V_11_11, &libs__handle_options__V_12_12, &libs__handle_options__V_13_13, &libs__handle_options__V_14_14);
    }
#line 2717 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2717 "handle_options.m"
      {
#line 2717 "handle_options.m"
        *libs__handle_options__HeadVar__2_20 = libs__handle_options__HeadVar__1_19;
#line 2717 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2717 "handle_options.m"
      }
#line 2717 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2717 "handle_options.m"
  }
#line 2717 "handle_options.m"
}

#line 2236 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2236__1_2_f_0(
#line 2236 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_161,
#line 2236 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1534)
#line 2236 "handle_options.m"
{
#line 2236 "handle_options.m"
  {
#line 2236 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2236 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1535;
#line 2236 "handle_options.m"
    MR_String libs__handle_options__V_1536_1536;
#line 2236 "handle_options.m"
    MR_String libs__handle_options__V_1537_1537;
#line 2237 "handle_options.m"
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_161, (MR_Integer) 1)));
#line 2237 "handle_options.m"
    MR_Box libs__handle_options__conv1_V_1537_1537;

#line 2237 "handle_options.m"
    {
#line 2237 "handle_options.m"
      libs__handle_options__conv1_V_1537_1537 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_161), ((MR_Box) (libs__handle_options__HeadVar__2_1534)));
    }
#line 2237 "handle_options.m"
    libs__handle_options__V_1537_1537 = ((MR_String) libs__handle_options__conv1_V_1537_1537);
#line 2237 "handle_options.m"
    {
#line 2237 "handle_options.m"
      libs__handle_options__V_1536_1536 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1537_1537, (MR_String) "Mercury");
    }
#line 2237 "handle_options.m"
    {
#line 2237 "handle_options.m"
      return libs__handle_options__HeadVar__3_1535 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1536_1536, (MR_String) "hrls");
    }
#line 2236 "handle_options.m"
    return libs__handle_options__HeadVar__3_1535;
#line 2236 "handle_options.m"
  }
#line 2236 "handle_options.m"
}

#line 2234 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2234__1_2_f_0(
#line 2234 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_161,
#line 2234 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1528)
#line 2234 "handle_options.m"
{
#line 2234 "handle_options.m"
  {
#line 2234 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2234 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1529;
#line 2234 "handle_options.m"
    MR_String libs__handle_options__V_1530_1530;
#line 2234 "handle_options.m"
    MR_String libs__handle_options__V_1531_1531;
#line 2235 "handle_options.m"
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_161, (MR_Integer) 1)));
#line 2235 "handle_options.m"
    MR_Box libs__handle_options__conv1_V_1531_1531;

#line 2235 "handle_options.m"
    {
#line 2235 "handle_options.m"
      libs__handle_options__conv1_V_1531_1531 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_161), ((MR_Box) (libs__handle_options__HeadVar__2_1528)));
    }
#line 2235 "handle_options.m"
    libs__handle_options__V_1531_1531 = ((MR_String) libs__handle_options__conv1_V_1531_1531);
#line 2235 "handle_options.m"
    {
#line 2235 "handle_options.m"
      libs__handle_options__V_1530_1530 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1531_1531, (MR_String) "Mercury");
    }
#line 2235 "handle_options.m"
    {
#line 2235 "handle_options.m"
      return libs__handle_options__HeadVar__3_1529 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1530_1530, (MR_String) "mihs");
    }
#line 2234 "handle_options.m"
    return libs__handle_options__HeadVar__3_1529;
#line 2234 "handle_options.m"
  }
#line 2234 "handle_options.m"
}

#line 2243 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2243__1_1_f_0(
#line 2243 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1523)
#line 2243 "handle_options.m"
{
#line 2243 "handle_options.m"
  {
#line 2243 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2243 "handle_options.m"
    MR_String libs__handle_options__HeadVar__2_1524;
#line 2243 "handle_options.m"
    MR_String libs__handle_options__V_1525_1525;

#line 2243 "handle_options.m"
    {
#line 2243 "handle_options.m"
      libs__handle_options__V_1525_1525 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__1_1523, (MR_String) "Mercury");
    }
#line 2243 "handle_options.m"
    {
#line 2243 "handle_options.m"
      return libs__handle_options__HeadVar__2_1524 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1525_1525, (MR_String) "hrls");
    }
#line 2243 "handle_options.m"
    return libs__handle_options__HeadVar__2_1524;
#line 2243 "handle_options.m"
  }
#line 2243 "handle_options.m"
}

#line 2242 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2242__1_1_f_0(
#line 2242 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1518)
#line 2242 "handle_options.m"
{
#line 2242 "handle_options.m"
  {
#line 2242 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2242 "handle_options.m"
    MR_String libs__handle_options__HeadVar__2_1519;
#line 2242 "handle_options.m"
    MR_String libs__handle_options__V_1520_1520;

#line 2242 "handle_options.m"
    {
#line 2242 "handle_options.m"
      libs__handle_options__V_1520_1520 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__1_1518, (MR_String) "Mercury");
    }
#line 2242 "handle_options.m"
    {
#line 2242 "handle_options.m"
      return libs__handle_options__HeadVar__2_1519 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1520_1520, (MR_String) "mihs");
    }
#line 2242 "handle_options.m"
    return libs__handle_options__HeadVar__2_1519;
#line 2242 "handle_options.m"
  }
#line 2242 "handle_options.m"
}

#line 2212 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2212__1_2_f_0(
#line 2212 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_161,
#line 2212 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1505)
#line 2212 "handle_options.m"
{
#line 2212 "handle_options.m"
  {
#line 2212 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2212 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1506;
#line 2212 "handle_options.m"
    MR_String libs__handle_options__V_1507_1507;
#line 2212 "handle_options.m"
    MR_String libs__handle_options__V_1508_1508;
#line 2213 "handle_options.m"
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_161, (MR_Integer) 1)));
#line 2213 "handle_options.m"
    MR_Box libs__handle_options__conv1_V_1508_1508;

#line 2213 "handle_options.m"
    {
#line 2213 "handle_options.m"
      libs__handle_options__conv1_V_1508_1508 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_161), ((MR_Box) (libs__handle_options__HeadVar__2_1505)));
    }
#line 2213 "handle_options.m"
    libs__handle_options__V_1508_1508 = ((MR_String) libs__handle_options__conv1_V_1508_1508);
#line 2213 "handle_options.m"
    {
#line 2213 "handle_options.m"
      libs__handle_options__V_1507_1507 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1508_1508, (MR_String) "Mercury");
    }
#line 2213 "handle_options.m"
    {
#line 2213 "handle_options.m"
      return libs__handle_options__HeadVar__3_1506 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1507_1507, (MR_String) "inits");
    }
#line 2212 "handle_options.m"
    return libs__handle_options__HeadVar__3_1506;
#line 2212 "handle_options.m"
  }
#line 2212 "handle_options.m"
}

#line 2208 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2208__1_2_f_0(
#line 2208 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_161,
#line 2208 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1499)
#line 2208 "handle_options.m"
{
#line 2208 "handle_options.m"
  {
#line 2208 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2208 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1500;
#line 2208 "handle_options.m"
    MR_String libs__handle_options__V_1501_1501;
#line 2208 "handle_options.m"
    MR_String libs__handle_options__V_1502_1502;
#line 2208 "handle_options.m"
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_161, (MR_Integer) 1)));
#line 2208 "handle_options.m"
    MR_Box libs__handle_options__conv1_V_1502_1502;

#line 2208 "handle_options.m"
    {
#line 2208 "handle_options.m"
      libs__handle_options__conv1_V_1502_1502 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_161), ((MR_Box) (libs__handle_options__HeadVar__2_1499)));
    }
#line 2208 "handle_options.m"
    libs__handle_options__V_1502_1502 = ((MR_String) libs__handle_options__conv1_V_1502_1502);
#line 2208 "handle_options.m"
    {
#line 2208 "handle_options.m"
      libs__handle_options__V_1501_1501 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1502_1502, (MR_String) "Mercury");
    }
#line 2208 "handle_options.m"
    {
#line 2208 "handle_options.m"
      return libs__handle_options__HeadVar__3_1500 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1501_1501, (MR_String) "lib");
    }
#line 2208 "handle_options.m"
    return libs__handle_options__HeadVar__3_1500;
#line 2208 "handle_options.m"
  }
#line 2208 "handle_options.m"
}

#line 2190 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2190__2_2_p_0(
#line 2190 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1492,
#line 2190 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1646)
#line 2190 "handle_options.m"
{
#line 2190 "handle_options.m"
  {
#line 2190 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2190 "handle_options.m"
    {
#line 2190 "handle_options.m"
      return libs__handle_options__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__HeadVar__1_1492, ((MR_Box) (libs__handle_options__HeadVar__2_1646)));
    }
#line 2190 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2190 "handle_options.m"
  }
#line 2190 "handle_options.m"
}

#line 2190 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2190__1_2_p_0(
#line 2190 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1493,
#line 2190 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1648)
#line 2190 "handle_options.m"
{
#line 2190 "handle_options.m"
  {
#line 2190 "handle_options.m"
    MR_bool libs__handle_options__succeeded = (strcmp(libs__handle_options__HeadVar__1_1493, libs__handle_options__HeadVar__2_1648) == 0);

#line 2190 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2190 "handle_options.m"
  }
#line 2190 "handle_options.m"
}

#line 2172 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2172__1_3_f_0(
#line 2172 "handle_options.m"
  MR_String libs__handle_options__TargetArch_129,
#line 2172 "handle_options.m"
  MR_String libs__handle_options__GradeString_141,
#line 2172 "handle_options.m"
  MR_String libs__handle_options__HeadVar__3_1480)
#line 2172 "handle_options.m"
{
#line 2172 "handle_options.m"
  {
#line 2172 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2172 "handle_options.m"
    MR_String libs__handle_options__HeadVar__4_1481;
#line 2172 "handle_options.m"
    MR_String libs__handle_options__V_1482_1482;
#line 2172 "handle_options.m"
    MR_String libs__handle_options__V_1483_1483;

#line 2172 "handle_options.m"
    {
#line 2172 "handle_options.m"
      libs__handle_options__V_1483_1483 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__3_1480, (MR_String) "Mercury");
    }
#line 2172 "handle_options.m"
    {
#line 2172 "handle_options.m"
      libs__handle_options__V_1482_1482 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1483_1483, libs__handle_options__GradeString_141);
    }
#line 2172 "handle_options.m"
    {
#line 2172 "handle_options.m"
      return libs__handle_options__HeadVar__4_1481 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1482_1482, libs__handle_options__TargetArch_129);
    }
#line 2172 "handle_options.m"
    return libs__handle_options__HeadVar__4_1481;
#line 2172 "handle_options.m"
  }
#line 2172 "handle_options.m"
}

#line 2136 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2136__1_2_f_0(
#line 2136 "handle_options.m"
  MR_String libs__handle_options__GradeString_141,
#line 2136 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1461)
#line 2136 "handle_options.m"
{
#line 2136 "handle_options.m"
  {
#line 2136 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2136 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1462;
#line 2136 "handle_options.m"
    MR_String libs__handle_options__V_1463_1463;

#line 2138 "handle_options.m"
    {
#line 2138 "handle_options.m"
      libs__handle_options__V_1463_1463 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__2_1461, (MR_String) "modules");
    }
#line 2138 "handle_options.m"
    {
#line 2138 "handle_options.m"
      return libs__handle_options__HeadVar__3_1462 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1463_1463, libs__handle_options__GradeString_141);
    }
#line 2136 "handle_options.m"
    return libs__handle_options__HeadVar__3_1462;
#line 2136 "handle_options.m"
  }
#line 2136 "handle_options.m"
}

#line 2126 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2126__1_2_f_0(
#line 2126 "handle_options.m"
  MR_String libs__handle_options__GradeString_141,
#line 2126 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1451)
#line 2126 "handle_options.m"
{
#line 2126 "handle_options.m"
  {
#line 2126 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2126 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1452;
#line 2126 "handle_options.m"
    MR_String libs__handle_options__V_1453_1453;

#line 2129 "handle_options.m"
    {
#line 2129 "handle_options.m"
      libs__handle_options__V_1453_1453 = mercury__dir__make_path_name_2_f_0((MR_String) "ints", libs__handle_options__GradeString_141);
    }
#line 2128 "handle_options.m"
    {
#line 2128 "handle_options.m"
      return libs__handle_options__HeadVar__3_1452 = mercury__dir__make_path_name_2_f_0(libs__handle_options__HeadVar__2_1451, libs__handle_options__V_1453_1453);
    }
#line 2126 "handle_options.m"
    return libs__handle_options__HeadVar__3_1452;
#line 2126 "handle_options.m"
  }
#line 2126 "handle_options.m"
}

#line 2113 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2113__1_2_f_0(
#line 2113 "handle_options.m"
  MR_String libs__handle_options__GradeString_141,
#line 2113 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1434)
#line 2113 "handle_options.m"
{
#line 2113 "handle_options.m"
  {
#line 2113 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2113 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1435;
#line 2113 "handle_options.m"
    MR_String libs__handle_options__V_1436_1436;
#line 2113 "handle_options.m"
    MR_String libs__handle_options__V_1437_1437;

#line 2115 "handle_options.m"
    {
#line 2115 "handle_options.m"
      libs__handle_options__V_1437_1437 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__2_1434, (MR_String) "lib");
    }
#line 2115 "handle_options.m"
    {
#line 2115 "handle_options.m"
      libs__handle_options__V_1436_1436 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1437_1437, libs__handle_options__GradeString_141);
    }
#line 2115 "handle_options.m"
    {
#line 2115 "handle_options.m"
      return libs__handle_options__HeadVar__3_1435 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1436_1436, (MR_String) "inc");
    }
#line 2113 "handle_options.m"
    return libs__handle_options__HeadVar__3_1435;
#line 2113 "handle_options.m"
  }
#line 2113 "handle_options.m"
}

#line 2098 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2098__1_2_f_0(
#line 2098 "handle_options.m"
  MR_String libs__handle_options__GradeString_141,
#line 2098 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1419)
#line 2098 "handle_options.m"
{
#line 2098 "handle_options.m"
  {
#line 2098 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2098 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1420;
#line 2098 "handle_options.m"
    MR_String libs__handle_options__V_1421_1421;

#line 2100 "handle_options.m"
    {
#line 2100 "handle_options.m"
      libs__handle_options__V_1421_1421 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__2_1419, (MR_String) "lib");
    }
#line 2100 "handle_options.m"
    {
#line 2100 "handle_options.m"
      return libs__handle_options__HeadVar__3_1420 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1421_1421, libs__handle_options__GradeString_141);
    }
#line 2098 "handle_options.m"
    return libs__handle_options__HeadVar__3_1420;
#line 2098 "handle_options.m"
  }
#line 2098 "handle_options.m"
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

#line 2808 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2785__1_5_p_0_2(
#line 2808 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2808 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2808 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2808 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3)
#line 2808 "handle_options.m"
{
#line 2808 "handle_options.m"
  {
#line 2808 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2808 "handle_options.m"
    MR_Word libs__handle_options__conv2_HeadVar__3_15;

#line 2808 "handle_options.m"
    {
#line 2808 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__add_option_list__2808__1_3_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv2_HeadVar__3_15);
    }
#line 2808 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv2_HeadVar__3_15));
#line 2808 "handle_options.m"
  }
#line 2808 "handle_options.m"
}

#line 2808 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2785__1_5_p_0_1(
#line 2808 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2808 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2808 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2808 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3)
#line 2808 "handle_options.m"
{
#line 2808 "handle_options.m"
  {
#line 2808 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2808 "handle_options.m"
    MR_Word libs__handle_options__conv0_HeadVar__3_15;

#line 2808 "handle_options.m"
    {
#line 2808 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__add_option_list__2808__1_3_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv0_HeadVar__3_15);
    }
#line 2808 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv0_HeadVar__3_15));
#line 2808 "handle_options.m"
  }
#line 2808 "handle_options.m"
}

#line 2785 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2785__1_5_p_0(
#line 2785 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_23,
#line 2785 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_24,
#line 2785 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_25,
#line 2785 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__4_26,
#line 2785 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_27)
#line 2785 "handle_options.m"
{
#line 2785 "handle_options.m"
  {
#line 2785 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2785 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_41_41;
#line 2785 "handle_options.m"
    MR_Word libs__handle_options__TypeInfo_21_62;
#line 2785 "handle_options.m"
    MR_Word libs__handle_options__TypeInfo_22_63;
#line 2785 "handle_options.m"
    MR_Word libs__handle_options__Comp_15;
#line 2785 "handle_options.m"
    MR_Word libs__handle_options__CompOpts_16;
#line 2785 "handle_options.m"
    MR_Word libs__handle_options__MaybeTargets_17;
#line 2785 "handle_options.m"
    MR_Word libs__handle_options__Opts1_19;
#line 2785 "handle_options.m"
    MR_Word libs__handle_options__V_53_53;
#line 2787 "handle_options.m"
    MR_Word libs__handle_options__V_18_18;
#line 2790 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_40_40;
#line 2808 "handle_options.m"
    MR_Box libs__handle_options__conv1_Opts1_19;
#line 2799 "handle_options.m"
    MR_Word libs__handle_options__Target_20;
#line 2797 "handle_options.m"
    MR_Word libs__handle_options__V_28_28;
#line 2797 "handle_options.m"
    MR_Word libs__handle_options__V_29_29;

#line 2787 "handle_options.m"
    {
#line 2787 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__grade_component_table_5_p_0(libs__handle_options__HeadVar__1_23, &libs__handle_options__Comp_15, &libs__handle_options__CompOpts_16, &libs__handle_options__MaybeTargets_17, &libs__handle_options__V_18_18);
    }
#line 2785 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2785 "handle_options.m"
      {
#line 4982 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_40_40 = (MR_Word) &libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0;
#line 2790 "handle_options.m"
        {
#line 2790 "handle_options.m"
          libs__handle_options__succeeded = mercury__set__member_2_p_0(libs__handle_options__TypeCtorInfo_40_40, ((MR_Box) (libs__handle_options__Comp_15)), libs__handle_options__HeadVar__4_26);
        }
#line 2790 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 2785 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 2785 "handle_options.m"
          {
#line 4995 "libs.handle_options.c"
            libs__handle_options__TypeCtorInfo_41_41 = (MR_Word) &libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0;
#line 2791 "handle_options.m"
            {
#line 2791 "handle_options.m"
              mercury__set__insert_3_p_0(libs__handle_options__TypeCtorInfo_41_41, ((MR_Box) (libs__handle_options__Comp_15)), libs__handle_options__HeadVar__4_26, libs__handle_options__HeadVar__5_27);
            }
#line 2808 "handle_options.m"
            libs__handle_options__V_53_53 = (MR_Word) &libs__handle_options_scalar_common_1[20];
#line 5004 "libs.handle_options.c"
            libs__handle_options__TypeInfo_21_62 = (MR_Word) &libs__handle_options_scalar_common_1[1];
#line 5006 "libs.handle_options.c"
            libs__handle_options__TypeInfo_22_63 = (MR_Word) &libs__handle_options_scalar_common_1[0];
#line 2808 "handle_options.m"
            {
#line 2808 "handle_options.m"
              mercury__list__foldl_4_p_0(libs__handle_options__TypeInfo_21_62, libs__handle_options__TypeInfo_22_63, libs__handle_options__V_53_53, libs__handle_options__CompOpts_16, ((MR_Box) (libs__handle_options__HeadVar__2_24)), &libs__handle_options__conv1_Opts1_19);
            }
#line 2808 "handle_options.m"
            libs__handle_options__Opts1_19 = ((MR_Word) libs__handle_options__conv1_Opts1_19);
#line 2797 "handle_options.m"
            libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__MaybeTargets_17)) == (MR_mktag((MR_Integer) 1)));
#line 2797 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 2797 "handle_options.m"
              {
#line 2797 "handle_options.m"
                libs__handle_options__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeTargets_17, (MR_Integer) 0)));
#line 2797 "handle_options.m"
                libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 2797 "handle_options.m"
                if (libs__handle_options__succeeded)
#line 2797 "handle_options.m"
                  {
#line 2797 "handle_options.m"
                    libs__handle_options__Target_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_28_28, (MR_Integer) 0)));
#line 2797 "handle_options.m"
                    libs__handle_options__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_28_28, (MR_Integer) 1)));
#line 2797 "handle_options.m"
                    libs__handle_options__succeeded = (libs__handle_options__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2797 "handle_options.m"
                  }
#line 2797 "handle_options.m"
              }
#line 2799 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 2798 "handle_options.m"
              {
#line 2798 "handle_options.m"
                MR_Word libs__handle_options__V_30_30;
#line 2798 "handle_options.m"
                MR_Word libs__handle_options__V_31_31;
#line 2808 "handle_options.m"
                MR_Box libs__handle_options__conv3_HeadVar__3_25;

#line 2798 "handle_options.m"
                {
#line 2798 "handle_options.m"
                  libs__handle_options__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2798 "handle_options.m"
                  MR_hl_field(MR_mktag(0), libs__handle_options__V_31_31, 0) = ((MR_Box) ((MR_Integer) 176));
#line 2798 "handle_options.m"
                  MR_hl_field(MR_mktag(0), libs__handle_options__V_31_31, 1) = ((MR_Box) (libs__handle_options__Target_20));
#line 2798 "handle_options.m"
                }
#line 2798 "handle_options.m"
                {
#line 2798 "handle_options.m"
                  libs__handle_options__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2798 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_30_30, 0) = ((MR_Box) (libs__handle_options__V_31_31));
#line 2798 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2798 "handle_options.m"
                }
#line 2808 "handle_options.m"
                {
#line 2808 "handle_options.m"
                  mercury__list__foldl_4_p_0((MR_Word) &libs__handle_options_scalar_common_1[1], (MR_Word) &libs__handle_options_scalar_common_1[0], (MR_Word) &libs__handle_options_scalar_common_1[21], libs__handle_options__V_30_30, ((MR_Box) (libs__handle_options__Opts1_19)), &libs__handle_options__conv3_HeadVar__3_25);
                }
#line 2808 "handle_options.m"
                *libs__handle_options__HeadVar__3_25 = ((MR_Word) libs__handle_options__conv3_HeadVar__3_25);
#line 2798 "handle_options.m"
              }
#line 2799 "handle_options.m"
            else
#line 2800 "handle_options.m"
              *libs__handle_options__HeadVar__3_25 = libs__handle_options__Opts1_19;
#line 2799 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 2785 "handle_options.m"
          }
#line 2785 "handle_options.m"
      }
#line 2785 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2785 "handle_options.m"
  }
#line 2785 "handle_options.m"
}

#line 2757 "handle_options.m"
static void MR_CALL 
libs__handle_options____Compare____grade_component_0_0(
#line 2757 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__1_1,
#line 2757 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_2,
#line 2757 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__3_3)
#line 2757 "handle_options.m"
{
#line 2757 "handle_options.m"
  {
#line 2757 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2757 "handle_options.m"
    MR_Integer libs__handle_options__Cast_HeadVar1_4 = (MR_Integer) libs__handle_options__HeadVar__2_2;
#line 2757 "handle_options.m"
    MR_Integer libs__handle_options__Cast_HeadVar2_5 = (MR_Integer) libs__handle_options__HeadVar__3_3;

#line 2757 "handle_options.m"
    {
#line 2757 "handle_options.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__handle_options__HeadVar__1_1, libs__handle_options__Cast_HeadVar1_4, libs__handle_options__Cast_HeadVar2_5);
#line 2757 "handle_options.m"
      return;
    }
#line 2757 "handle_options.m"
  }
#line 2757 "handle_options.m"
}

#line 2757 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options____Unify____grade_component_0_0(
#line 2757 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_1,
#line 2757 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_2)
#line 2757 "handle_options.m"
{
#line 5137 "libs.handle_options.c"
  {
#line 5139 "libs.handle_options.c"
    MR_bool libs__handle_options__succeeded = (libs__handle_options__HeadVar__2_1 == libs__handle_options__HeadVar__2_2);

#line 5142 "libs.handle_options.c"
    return libs__handle_options__succeeded;
#line 5144 "libs.handle_options.c"
  }
#line 2757 "handle_options.m"
}

#line 3231 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_dump_alias_2_p_0(
#line 3231 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1,
#line 3231 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_2)
#line 3231 "handle_options.m"
{
#line 3234 "handle_options.m"
  {
#line 3234 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 3234 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "mm") == 0))
#line 3247 "handle_options.m"
      {
#line 3247 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_String) "bdgvP";
#line 3247 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3247 "handle_options.m"
      }
#line 3234 "handle_options.m"
    else
#line 3234 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "ALL") == 0))
#line 3234 "handle_options.m"
      {
#line 3234 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_String) "abcdEfgilmnprstuvzBCDIMPRSTUZ";
#line 3234 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3234 "handle_options.m"
      }
#line 3234 "handle_options.m"
    else
#line 3234 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "all") == 0))
#line 3236 "handle_options.m"
      {
#line 3236 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_String) "abcdEfgilmnprstuvzBCMPSTZ";
#line 3236 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3236 "handle_options.m"
      }
#line 3234 "handle_options.m"
    else
#line 3234 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "cmp") == 0))
#line 3238 "handle_options.m"
      {
#line 3238 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_String) "bdfgilmnprstuvzP";
#line 3238 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3238 "handle_options.m"
      }
#line 3234 "handle_options.m"
    else
#line 3234 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "lco") == 0))
#line 3253 "handle_options.m"
      {
#line 3253 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_String) "agiuvzD";
#line 3253 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3253 "handle_options.m"
      }
#line 3234 "handle_options.m"
    else
#line 3234 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "min") == 0))
#line 3243 "handle_options.m"
      {
#line 3243 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_String) "ilv";
#line 3243 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3243 "handle_options.m"
      }
#line 3234 "handle_options.m"
    else
#line 3234 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "osv") == 0))
#line 3248 "handle_options.m"
      {
#line 3248 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_String) "bcdglmnpruvP";
#line 3248 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3248 "handle_options.m"
      }
#line 3234 "handle_options.m"
    else
#line 3234 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "allD") == 0))
#line 3235 "handle_options.m"
      {
#line 3235 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_String) "abcdEfgilmnprstuvzBCDMPT";
#line 3235 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3235 "handle_options.m"
      }
#line 3234 "handle_options.m"
    else
#line 3234 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "ctgc") == 0))
#line 3250 "handle_options.m"
      {
#line 3250 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_String) "cdinpGDRS";
#line 3250 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3250 "handle_options.m"
      }
#line 3234 "handle_options.m"
    else
#line 3234 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "most") == 0))
#line 3237 "handle_options.m"
      {
#line 3237 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_String) "bcdfgilmnprstvzP";
#line 3237 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3237 "handle_options.m"
      }
#line 3234 "handle_options.m"
    else
#line 3234 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "poly") == 0))
#line 3254 "handle_options.m"
      {
#line 3254 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_String) "vxX";
#line 3254 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3254 "handle_options.m"
      }
#line 3234 "handle_options.m"
    else
#line 3234 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "vars") == 0))
#line 3251 "handle_options.m"
      {
#line 3251 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_String) "npBis";
#line 3251 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3251 "handle_options.m"
      }
#line 3234 "handle_options.m"
    else
#line 3234 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "paths") == 0))
#line 3244 "handle_options.m"
      {
#line 3244 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_String) "cP";
#line 3244 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3244 "handle_options.m"
      }
#line 3234 "handle_options.m"
    else
#line 3234 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "petdr") == 0))
#line 3245 "handle_options.m"
      {
#line 3245 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_String) "din";
#line 3245 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3245 "handle_options.m"
      }
#line 3234 "handle_options.m"
    else
#line 3234 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "trans") == 0))
#line 3239 "handle_options.m"
      {
#line 3239 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_String) "bcdglmnstuvz";
#line 3239 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3239 "handle_options.m"
      }
#line 3234 "handle_options.m"
    else
#line 3234 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "detism") == 0))
#line 3246 "handle_options.m"
      {
#line 3246 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_String) "divM";
#line 3246 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3246 "handle_options.m"
      }
#line 3234 "handle_options.m"
    else
#line 3234 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "codegen") == 0))
#line 3241 "handle_options.m"
      {
#line 3241 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_String) "dfnprsu";
#line 3241 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3241 "handle_options.m"
      }
#line 3234 "handle_options.m"
    else
#line 3234 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "vanessa") == 0))
#line 3242 "handle_options.m"
      {
#line 3242 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_String) "ltuCIU";
#line 3242 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3242 "handle_options.m"
      }
#line 3234 "handle_options.m"
    else
#line 3234 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "mintrans") == 0))
#line 3240 "handle_options.m"
      {
#line 3240 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_String) "bcdglmnstvz";
#line 3240 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3240 "handle_options.m"
      }
#line 3234 "handle_options.m"
    else
#line 3234 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "statevar") == 0))
#line 3252 "handle_options.m"
      {
#line 3252 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_String) "gvCP";
#line 3252 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3252 "handle_options.m"
      }
#line 3234 "handle_options.m"
    else
#line 3234 "handle_options.m"
      libs__handle_options__succeeded = MR_FALSE;
#line 3234 "handle_options.m"
    return libs__handle_options__succeeded;
#line 3234 "handle_options.m"
  }
#line 3231 "handle_options.m"
}

#line 3216 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__char_is_not_2_p_0(
#line 3216 "handle_options.m"
  MR_Char libs__handle_options__A_3,
#line 3216 "handle_options.m"
  MR_Char libs__handle_options__B_4)
#line 3216 "handle_options.m"
{
#line 3219 "handle_options.m"
  {
#line 3219 "handle_options.m"
    MR_bool libs__handle_options__succeeded = (libs__handle_options__A_3 == libs__handle_options__B_4);

#line 3219 "handle_options.m"
    libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 3219 "handle_options.m"
    return libs__handle_options__succeeded;
#line 3219 "handle_options.m"
  }
#line 3216 "handle_options.m"
}

#line 3205 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__split_grade_string_2_2_p_0_1(
#line 3205 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3205 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 3205 "handle_options.m"
{
#line 3205 "handle_options.m"
  {
#line 3205 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 3205 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 3205 "handle_options.m"
    {
#line 3205 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__char_is_not_2_p_0(((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) libs__handle_options__wrapper_arg_1));
    }
#line 3205 "handle_options.m"
    return libs__handle_options__succeeded;
#line 3205 "handle_options.m"
  }
#line 3205 "handle_options.m"
}

#line 3200 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__split_grade_string_2_2_p_0(
#line 3200 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1,
#line 3200 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2)
#line 3200 "handle_options.m"
{
#line 3202 "handle_options.m"
  {
#line 3202 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 3202 "handle_options.m"
    if ((libs__handle_options__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3202 "handle_options.m"
      {
#line 3202 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3202 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3202 "handle_options.m"
      }
#line 3202 "handle_options.m"
    else
#line 3203 "handle_options.m"
      {
#line 3203 "handle_options.m"
        MR_Word libs__handle_options__ThisChars_7;
#line 3203 "handle_options.m"
        MR_Word libs__handle_options__RestChars0_8;
#line 3203 "handle_options.m"
        MR_String libs__handle_options__ThisComponent_9;
#line 3203 "handle_options.m"
        MR_Word libs__handle_options__RestComponents_10;

#line 3205 "handle_options.m"
        {
#line 3205 "handle_options.m"
          mercury__list__takewhile_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &libs__handle_options_scalar_common_6[6], libs__handle_options__HeadVar__1_1, &libs__handle_options__ThisChars_7, &libs__handle_options__RestChars0_8);
        }
#line 3206 "handle_options.m"
        {
#line 3206 "handle_options.m"
          mercury__string__from_char_list_2_p_0(libs__handle_options__ThisChars_7, &libs__handle_options__ThisComponent_9);
        }
#line 3211 "handle_options.m"
        if ((libs__handle_options__RestChars0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3213 "handle_options.m"
          {
#line 3213 "handle_options.m"
            libs__handle_options__RestComponents_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3213 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 3213 "handle_options.m"
          }
#line 3211 "handle_options.m"
        else
#line 3209 "handle_options.m"
          {
#line 3209 "handle_options.m"
            MR_Word libs__handle_options__RestChars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__RestChars0_8, (MR_Integer) 1)));
#line 3209 "handle_options.m"
            MR_Char libs__handle_options__V_11_11 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__RestChars0_8, (MR_Integer) 0)));

#line 3210 "handle_options.m"
            {
#line 3210 "handle_options.m"
              libs__handle_options__succeeded = libs__handle_options__split_grade_string_2_2_p_0(libs__handle_options__RestChars_12, &libs__handle_options__RestComponents_10);
            }
#line 3209 "handle_options.m"
          }
#line 3203 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 3203 "handle_options.m"
          {
#line 3207 "handle_options.m"
            {
#line 3207 "handle_options.m"
              MR_Word base;
#line 3207 "handle_options.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3207 "handle_options.m"
              *libs__handle_options__HeadVar__2_2 = base;
#line 3207 "handle_options.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__ThisComponent_9));
#line 3207 "handle_options.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__handle_options__RestComponents_10));
#line 3207 "handle_options.m"
            }
#line 3207 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 3203 "handle_options.m"
          }
#line 3203 "handle_options.m"
      }
#line 3202 "handle_options.m"
    return libs__handle_options__succeeded;
#line 3202 "handle_options.m"
  }
#line 3200 "handle_options.m"
}

#line 3161 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_start_values_1_p_0(
#line 3161 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__1_1,
#line 3161 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 3161 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 3161 "handle_options.m"
{
#line 3163 "handle_options.m"
  {
#line 3163 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 3163 "handle_options.m"
    {
#line 3163 "handle_options.m"
      MR_Integer libs__handle_options__slot_0 = (MR_Integer) 0;

#line 3163 "handle_options.m"
      do
#line 3163 "handle_options.m"
        {
#line 3163 "handle_options.m"
          *libs__handle_options__HeadVar__1_1 = ((&libs__handle_options_vector_common_12[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_12_0__vct_12_f_0;
#line 3163 "handle_options.m"
          {
#line 3163 "handle_options.m"
            libs__handle_options__cont(libs__handle_options__cont_env_ptr);
          }
#line 3163 "handle_options.m"
          libs__handle_options__slot_0 = (libs__handle_options__slot_0 + (MR_Integer) 1);
#line 3163 "handle_options.m"
        }
#line 3163 "handle_options.m"
      while ((libs__handle_options__slot_0 < (MR_Integer) 30));
#line 3163 "handle_options.m"
    }
#line 3163 "handle_options.m"
  }
#line 3161 "handle_options.m"
}

#line 2901 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_component_table_5_p_2(
#line 2901 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__1_1,
#line 2901 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2,
#line 2901 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_3,
#line 2901 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__4_4,
#line 2901 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_5,
#line 2901 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2901 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 2901 "handle_options.m"
{
#line 2906 "handle_options.m"
  {
#line 2906 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2906 "handle_options.m"
    {
#line 2906 "handle_options.m"
      MR_Integer libs__handle_options__slot_0 = (MR_Integer) 0;

#line 2906 "handle_options.m"
      do
#line 2906 "handle_options.m"
        {
#line 2906 "handle_options.m"
          *libs__handle_options__HeadVar__1_1 = ((&libs__handle_options_vector_common_11[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_11_0__vct_11_f_0;
#line 2906 "handle_options.m"
          *libs__handle_options__HeadVar__2_2 = ((&libs__handle_options_vector_common_11[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_11_0__vct_11_f_1;
#line 2906 "handle_options.m"
          *libs__handle_options__HeadVar__3_3 = ((&libs__handle_options_vector_common_11[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_11_0__vct_11_f_2;
#line 2906 "handle_options.m"
          *libs__handle_options__HeadVar__4_4 = ((&libs__handle_options_vector_common_11[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_11_0__vct_11_f_3;
#line 2906 "handle_options.m"
          *libs__handle_options__HeadVar__5_5 = ((&libs__handle_options_vector_common_11[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_11_0__vct_11_f_4;
#line 2906 "handle_options.m"
          {
#line 2906 "handle_options.m"
            libs__handle_options__cont(libs__handle_options__cont_env_ptr);
          }
#line 2906 "handle_options.m"
          libs__handle_options__slot_0 = (libs__handle_options__slot_0 + (MR_Integer) 1);
#line 2906 "handle_options.m"
        }
#line 2906 "handle_options.m"
      while ((libs__handle_options__slot_0 < (MR_Integer) 50));
#line 2906 "handle_options.m"
    }
#line 2906 "handle_options.m"
  }
#line 2901 "handle_options.m"
}

#line 2899 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__grade_component_table_5_p_0(
#line 2899 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1,
#line 2899 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2,
#line 2899 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_3,
#line 2899 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__4_4,
#line 2899 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_5)
#line 2899 "handle_options.m"
{
#line 2906 "handle_options.m"
  {
#line 2906 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "gc") == 0))
#line 3035 "handle_options.m"
      {
#line 3035 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 3;
#line 3035 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[78]);
#line 3035 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3035 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3035 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3035 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "hl") == 0))
#line 2954 "handle_options.m"
      {
#line 2954 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2954 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[89]);
#line 2954 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
#line 2961 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2954 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2954 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "il") == 0))
#line 2986 "handle_options.m"
      {
#line 2986 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2986 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[89]);
#line 2986 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[5]);
#line 2993 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2986 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2986 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "mm") == 0))
#line 3078 "handle_options.m"
      {
#line 3078 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 7;
#line 3078 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[125]);
#line 3081 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3081 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 0;
#line 3078 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3078 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "tr") == 0))
#line 3069 "handle_options.m"
      {
#line 3069 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 6;
#line 3069 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[183]);
#line 3070 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3070 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3069 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3069 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "agc") == 0))
#line 3038 "handle_options.m"
      {
#line 3038 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 3;
#line 3038 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[16]);
#line 3038 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3038 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3038 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3038 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "dmm") == 0))
#line 3082 "handle_options.m"
      {
#line 3082 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 7;
#line 3082 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[59]);
#line 3085 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3085 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 0;
#line 3082 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3082 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "gcd") == 0))
#line 3036 "handle_options.m"
      {
#line 3036 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 3;
#line 3036 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[81]);
#line 3036 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3036 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3036 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3036 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "hgc") == 0))
#line 3037 "handle_options.m"
      {
#line 3037 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 3;
#line 3037 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[84]);
#line 3037 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3037 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3037 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3037 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "hlc") == 0))
#line 2962 "handle_options.m"
      {
#line 2962 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2962 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[99]);
#line 2962 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
#line 2969 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2962 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2962 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "ilc") == 0))
#line 2994 "handle_options.m"
      {
#line 2994 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2994 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[99]);
#line 2994 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[5]);
#line 3001 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2994 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2994 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "par") == 0))
#line 3028 "handle_options.m"
      {
#line 3028 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 1;
#line 3028 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[131]);
#line 3028 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3028 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3028 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3028 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "reg") == 0))
#line 2914 "handle_options.m"
      {
#line 2914 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2914 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[167]);
#line 2914 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
#line 2921 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2914 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2914 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "spf") == 0))
#line 3107 "handle_options.m"
      {
#line 3107 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 8;
#line 3107 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[171]);
#line 3109 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3109 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3107 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3107 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "tsc") == 0))
#line 3064 "handle_options.m"
      {
#line 3064 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 5;
#line 3064 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[190]);
#line 3066 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3066 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3064 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3064 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "tsw") == 0))
#line 3061 "handle_options.m"
      {
#line 3061 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 5;
#line 3061 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[194]);
#line 3063 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3063 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3061 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3061 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "exts") == 0))
#line 3127 "handle_options.m"
      {
#line 3127 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 12;
#line 3127 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[74]);
#line 3129 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3129 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3127 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3127 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "fast") == 0))
#line 2938 "handle_options.m"
      {
#line 2938 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2938 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[75]);
#line 2938 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
#line 2945 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2938 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2938 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "java") == 0))
#line 3002 "handle_options.m"
      {
#line 3002 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 3002 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[44]);
#line 3002 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[6]);
#line 3009 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3002 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3002 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "jump") == 0))
#line 2922 "handle_options.m"
      {
#line 2922 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2922 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[109]);
#line 2922 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
#line 2929 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2922 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2922 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "mmos") == 0))
#line 3094 "handle_options.m"
      {
#line 3094 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 7;
#line 3094 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[127]);
#line 3097 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3097 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3094 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3094 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "mmsc") == 0))
#line 3086 "handle_options.m"
      {
#line 3086 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 7;
#line 3086 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[125]);
#line 3089 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3089 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3086 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3086 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "none") == 0))
#line 2906 "handle_options.m"
      {
#line 2906 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2906 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[129]);
#line 2906 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
#line 2913 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2906 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2906 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "prof") == 0))
#line 3041 "handle_options.m"
      {
#line 3041 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 4;
#line 3041 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[140]);
#line 3043 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3043 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3041 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3041 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "rbmm") == 0))
#line 3135 "handle_options.m"
      {
#line 3135 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 13;
#line 3135 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[156]);
#line 3138 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3138 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3135 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3135 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "debug") == 0))
#line 3117 "handle_options.m"
      {
#line 3117 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 11;
#line 3117 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[50]);
#line 3118 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3118 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3117 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3117 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "dmmos") == 0))
#line 3098 "handle_options.m"
      {
#line 3098 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 7;
#line 3098 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[63]);
#line 3101 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3101 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3098 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3098 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "dmmsc") == 0))
#line 3090 "handle_options.m"
      {
#line 3090 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 7;
#line 3090 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[59]);
#line 3093 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3093 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3090 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3090 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "rbmmd") == 0))
#line 3139 "handle_options.m"
      {
#line 3139 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 13;
#line 3139 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[159]);
#line 3142 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3142 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3139 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3139 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "rbmmp") == 0))
#line 3143 "handle_options.m"
      {
#line 3143 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 13;
#line 3143 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[165]);
#line 3146 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3146 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3143 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3143 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "stseg") == 0))
#line 3130 "handle_options.m"
      {
#line 3130 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 12;
#line 3130 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[177]);
#line 3132 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3132 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3130 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3130 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "trseg") == 0))
#line 3071 "handle_options.m"
      {
#line 3071 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 6;
#line 3071 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[186]);
#line 3072 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3072 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3071 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3071 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "csharp") == 0))
#line 3010 "handle_options.m"
      {
#line 3010 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 3010 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[44]);
#line 3010 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[3]);
#line 3017 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3010 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3010 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "erlang") == 0))
#line 3018 "handle_options.m"
      {
#line 3018 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 3018 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[68]);
#line 3018 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[4]);
#line 3025 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3018 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3018 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "picreg") == 0))
#line 3112 "handle_options.m"
      {
#line 3112 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 9;
#line 3112 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[133]);
#line 3112 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3112 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3112 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3112 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "pregen") == 0))
#line 3105 "handle_options.m"
      {
#line 3105 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 8;
#line 3105 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[135]);
#line 3106 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3106 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3105 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3105 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "rbmmdp") == 0))
#line 3147 "handle_options.m"
      {
#line 3147 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 13;
#line 3147 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[163]);
#line 3150 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3150 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3147 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3147 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "hl_nest") == 0))
#line 2970 "handle_options.m"
      {
#line 2970 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2970 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[95]);
#line 2970 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
#line 2977 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2970 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2970 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "memprof") == 0))
#line 3050 "handle_options.m"
      {
#line 3050 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 4;
#line 3050 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[121]);
#line 3052 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3052 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3050 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3050 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "profall") == 0))
#line 3053 "handle_options.m"
      {
#line 3053 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 4;
#line 3053 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[141]);
#line 3055 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3055 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3053 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3053 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "ssdebug") == 0))
#line 3119 "handle_options.m"
      {
#line 3119 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 11;
#line 3119 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[173]);
#line 3120 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3120 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3119 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3119 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "asm_fast") == 0))
#line 2946 "handle_options.m"
      {
#line 2946 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2946 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[28]);
#line 2946 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
#line 2953 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2946 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2946 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "asm_jump") == 0))
#line 2930 "handle_options.m"
      {
#line 2930 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2930 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[34]);
#line 2930 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
#line 2937 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2930 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2930 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "hlc_nest") == 0))
#line 2978 "handle_options.m"
      {
#line 2978 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2978 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[104]);
#line 2978 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
#line 2985 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2978 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2978 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "ll_debug") == 0))
#line 3123 "handle_options.m"
      {
#line 3123 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 10;
#line 3123 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[113]);
#line 3124 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3124 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3123 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3123 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "profdeep") == 0))
#line 3056 "handle_options.m"
      {
#line 3056 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 4;
#line 3056 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[148]);
#line 3058 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3058 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3056 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3056 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "proftime") == 0))
#line 3044 "handle_options.m"
      {
#line 3044 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 4;
#line 3044 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[150]);
#line 3046 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3046 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3044 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3044 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "decldebug") == 0))
#line 3115 "handle_options.m"
      {
#line 3115 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 11;
#line 3115 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[53]);
#line 3116 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3116 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3115 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3115 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "profcalls") == 0))
#line 3047 "handle_options.m"
      {
#line 3047 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 4;
#line 3047 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[142]);
#line 3049 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3049 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3047 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3047 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "threadscope") == 0))
#line 3031 "handle_options.m"
      {
#line 3031 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 2;
#line 3031 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[179]);
#line 3032 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3032 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3031 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3031 "handle_options.m"
      }
#line 2906 "handle_options.m"
    else
#line 2906 "handle_options.m"
      libs__handle_options__succeeded = MR_FALSE;
#line 2906 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2906 "handle_options.m"
  }
#line 2899 "handle_options.m"
}

#line 2839 "handle_options.m"
static void MR_CALL 
libs__handle_options__construct_string_2_p_0(
#line 2839 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1,
#line 2839 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_2)
#line 2839 "handle_options.m"
{
#line 2842 "handle_options.m"
  {
#line 2842 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2842 "handle_options.m"
    if ((libs__handle_options__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2842 "handle_options.m"
      *libs__handle_options__HeadVar__2_2 = (MR_String) "";
#line 2842 "handle_options.m"
    else
#line 2843 "handle_options.m"
      {
#line 2843 "handle_options.m"
        MR_String libs__handle_options__Bit_4;
#line 2843 "handle_options.m"
        MR_Word libs__handle_options__Bits_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__HeadVar__1_1, (MR_Integer) 1)));
#line 2843 "handle_options.m"
        MR_Word libs__handle_options__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__HeadVar__1_1, (MR_Integer) 0)));
#line 2843 "handle_options.m"
        MR_Word libs__handle_options__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__V_10_10, (MR_Integer) 0)));

#line 2843 "handle_options.m"
        libs__handle_options__Bit_4 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__V_10_10, (MR_Integer) 1)));
#line 2848 "handle_options.m"
        if ((libs__handle_options__Bits_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2850 "handle_options.m"
          *libs__handle_options__HeadVar__2_2 = libs__handle_options__Bit_4;
#line 2848 "handle_options.m"
        else
#line 2845 "handle_options.m"
          {
#line 2845 "handle_options.m"
            MR_String libs__handle_options__Grade0_9;
#line 2845 "handle_options.m"
            MR_Word libs__handle_options__V_11_11;
#line 2845 "handle_options.m"
            MR_Word libs__handle_options__V_12_12;
#line 2845 "handle_options.m"
            MR_Word libs__handle_options__V_14_14;
#line 2845 "handle_options.m"
            MR_String libs__handle_options__Bit_17;
#line 2845 "handle_options.m"
            MR_Word libs__handle_options__Bits_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__Bits_5, (MR_Integer) 1)));
#line 2845 "handle_options.m"
            MR_Word libs__handle_options__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__Bits_5, (MR_Integer) 0)));
#line 2843 "handle_options.m"
            MR_Word libs__handle_options__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__V_23_23, (MR_Integer) 0)));

#line 2843 "handle_options.m"
            libs__handle_options__Bit_17 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__V_23_23, (MR_Integer) 1)));
#line 2848 "handle_options.m"
            if ((libs__handle_options__Bits_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2850 "handle_options.m"
              libs__handle_options__Grade0_9 = libs__handle_options__Bit_17;
#line 2848 "handle_options.m"
            else
#line 2845 "handle_options.m"
              {
#line 2845 "handle_options.m"
                MR_String libs__handle_options__Grade0_22;
#line 2845 "handle_options.m"
                MR_Word libs__handle_options__V_24_24;
#line 2845 "handle_options.m"
                MR_Word libs__handle_options__V_25_25;
#line 2845 "handle_options.m"
                MR_Word libs__handle_options__V_27_27;

#line 2846 "handle_options.m"
                {
#line 2846 "handle_options.m"
                  libs__handle_options__construct_string_2_p_0(libs__handle_options__Bits_18, &libs__handle_options__Grade0_22);
                }
#line 2847 "handle_options.m"
                {
#line 2847 "handle_options.m"
                  libs__handle_options__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2847 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_27_27, 0) = ((MR_Box) (libs__handle_options__Grade0_22));
#line 2847 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2847 "handle_options.m"
                }
#line 2847 "handle_options.m"
                {
#line 2847 "handle_options.m"
                  libs__handle_options__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2847 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_25_25, 0) = ((MR_Box) ((MR_String) "."));
#line 2847 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_25_25, 1) = ((MR_Box) (libs__handle_options__V_27_27));
#line 2847 "handle_options.m"
                }
#line 2847 "handle_options.m"
                {
#line 2847 "handle_options.m"
                  libs__handle_options__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2847 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_24_24, 0) = ((MR_Box) (libs__handle_options__Bit_17));
#line 2847 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_24_24, 1) = ((MR_Box) (libs__handle_options__V_25_25));
#line 2847 "handle_options.m"
                }
#line 2847 "handle_options.m"
                {
#line 2847 "handle_options.m"
                  mercury__string__append_list_2_p_0(libs__handle_options__V_24_24, &libs__handle_options__Grade0_9);
                }
#line 2845 "handle_options.m"
              }
#line 2847 "handle_options.m"
            {
#line 2847 "handle_options.m"
              libs__handle_options__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2847 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 0) = ((MR_Box) (libs__handle_options__Grade0_9));
#line 2847 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2847 "handle_options.m"
            }
#line 2847 "handle_options.m"
            {
#line 2847 "handle_options.m"
              libs__handle_options__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2847 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 0) = ((MR_Box) ((MR_String) "."));
#line 2847 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 1) = ((MR_Box) (libs__handle_options__V_14_14));
#line 2847 "handle_options.m"
            }
#line 2847 "handle_options.m"
            {
#line 2847 "handle_options.m"
              libs__handle_options__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2847 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 0) = ((MR_Box) (libs__handle_options__Bit_4));
#line 2847 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 1) = ((MR_Box) (libs__handle_options__V_12_12));
#line 2847 "handle_options.m"
            }
#line 2847 "handle_options.m"
            {
#line 2847 "handle_options.m"
              mercury__string__append_list_2_p_0(libs__handle_options__V_11_11, libs__handle_options__HeadVar__2_2);
#line 2847 "handle_options.m"
              return;
            }
#line 2845 "handle_options.m"
          }
#line 2843 "handle_options.m"
      }
#line 2842 "handle_options.m"
  }
#line 2839 "handle_options.m"
}

#line 2702 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_1(
#line 2702 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2702 "handle_options.m"
{
#line 2702 "handle_options.m"
  {
#line 2702 "handle_options.m"
    struct libs__handle_options__must_not_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_not_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2702 "handle_options.m"
    MR_builtin_longjmp((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__commit_0, 1);
#line 2702 "handle_options.m"
  }
#line 2702 "handle_options.m"
}

#line 2703 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_3(
#line 2703 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2703 "handle_options.m"
{
#line 2703 "handle_options.m"
  {
#line 2703 "handle_options.m"
    struct libs__handle_options__must_not_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_not_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2703 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__Component_5 = ((MR_String) (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__conv0_Component_5);
#line 2703 "handle_options.m"
    {
#line 2703 "handle_options.m"
      libs__handle_options__must_not_contain_2_p_0_2(libs__handle_options__env_ptr);
#line 2703 "handle_options.m"
      return;
    }
#line 2703 "handle_options.m"
  }
#line 2703 "handle_options.m"
}

#line 2702 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_2(
#line 2702 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2702 "handle_options.m"
{
#line 2702 "handle_options.m"
  {
#line 2702 "handle_options.m"
    struct libs__handle_options__must_not_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_not_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2704 "handle_options.m"
    {
#line 2704 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6, ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__Component_5)), (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__GradeComponents_4);
    }
#line 2704 "handle_options.m"
    if ((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__succeeded)
#line 2704 "handle_options.m"
      {
#line 2704 "handle_options.m"
        libs__handle_options__must_not_contain_2_p_0_1(libs__handle_options__env_ptr);
#line 2704 "handle_options.m"
        return;
      }
#line 2702 "handle_options.m"
  }
#line 2702 "handle_options.m"
}

#line 2702 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_4(
#line 2702 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2702 "handle_options.m"
{
#line 2702 "handle_options.m"
  {
#line 2702 "handle_options.m"
    struct libs__handle_options__must_not_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_not_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2702 "handle_options.m"
    if (MR_builtin_setjmp((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__commit_0) == 0)
#line 2702 "handle_options.m"
      {
#line 6859 "libs.handle_options.c"
        (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2703 "handle_options.m"
        {
#line 2703 "handle_options.m"
          mercury__list__member_2_p_1((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6, &(libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__conv0_Component_5, (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__OmitComponents_3, libs__handle_options__must_not_contain_2_p_0_3, libs__handle_options__env_ptr);
        }
#line 2702 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__succeeded = MR_FALSE;
#line 2702 "handle_options.m"
      }
#line 2702 "handle_options.m"
    else
#line 2702 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__succeeded = MR_TRUE;
#line 2702 "handle_options.m"
  }
#line 2702 "handle_options.m"
}

#line 2699 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__must_not_contain_2_p_0(
#line 2699 "handle_options.m"
  MR_Word libs__handle_options__OmitComponents_3,
#line 2699 "handle_options.m"
  MR_Word libs__handle_options__GradeComponents_4)
#line 2699 "handle_options.m"
{
#line 2699 "handle_options.m"
  {
#line 2699 "handle_options.m"
    struct libs__handle_options__must_not_contain_2_p_0_env_0_s libs__handle_options__env;

#line 2699 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_not_contain_2_p_0_env_0__OmitComponents_3 = libs__handle_options__OmitComponents_3;
#line 2699 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_not_contain_2_p_0_env_0__GradeComponents_4 = libs__handle_options__GradeComponents_4;
#line 2702 "handle_options.m"
    {
#line 2702 "handle_options.m"
      libs__handle_options__must_not_contain_2_p_0_4(&libs__handle_options__env);
    }
#line 2702 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_not_contain_2_p_0_env_0__succeeded = !((libs__handle_options__env).libs__handle_options__must_not_contain_2_p_0_env_0__succeeded);
#line 2702 "handle_options.m"
    return (libs__handle_options__env).libs__handle_options__must_not_contain_2_p_0_env_0__succeeded;
#line 2699 "handle_options.m"
  }
#line 2699 "handle_options.m"
}

#line 2693 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_1(
#line 2693 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2693 "handle_options.m"
{
#line 2693 "handle_options.m"
  {
#line 2693 "handle_options.m"
    struct libs__handle_options__must_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2693 "handle_options.m"
    MR_builtin_longjmp((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__commit_0, 1);
#line 2693 "handle_options.m"
  }
#line 2693 "handle_options.m"
}

#line 2694 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_3(
#line 2694 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2694 "handle_options.m"
{
#line 2694 "handle_options.m"
  {
#line 2694 "handle_options.m"
    struct libs__handle_options__must_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2694 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__Component_5 = ((MR_String) (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__conv0_Component_5);
#line 2694 "handle_options.m"
    {
#line 2694 "handle_options.m"
      libs__handle_options__must_contain_2_p_0_2(libs__handle_options__env_ptr);
#line 2694 "handle_options.m"
      return;
    }
#line 2694 "handle_options.m"
  }
#line 2694 "handle_options.m"
}

#line 2693 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_2(
#line 2693 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2693 "handle_options.m"
{
#line 2693 "handle_options.m"
  {
#line 2693 "handle_options.m"
    struct libs__handle_options__must_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2696 "handle_options.m"
    {
#line 2696 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__TypeCtorInfo_6_6, ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__Component_5)), (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__GradeComponents_4);
    }
#line 2695 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded = !((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded);
#line 2695 "handle_options.m"
    if ((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded)
#line 2695 "handle_options.m"
      {
#line 2695 "handle_options.m"
        libs__handle_options__must_contain_2_p_0_1(libs__handle_options__env_ptr);
#line 2695 "handle_options.m"
        return;
      }
#line 2693 "handle_options.m"
  }
#line 2693 "handle_options.m"
}

#line 2693 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_4(
#line 2693 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2693 "handle_options.m"
{
#line 2693 "handle_options.m"
  {
#line 2693 "handle_options.m"
    struct libs__handle_options__must_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2693 "handle_options.m"
    if (MR_builtin_setjmp((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__commit_0) == 0)
#line 2693 "handle_options.m"
      {
#line 7005 "libs.handle_options.c"
        (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2694 "handle_options.m"
        {
#line 2694 "handle_options.m"
          mercury__list__member_2_p_1((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__TypeCtorInfo_6_6, &(libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__conv0_Component_5, (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__IncludeComponents_3, libs__handle_options__must_contain_2_p_0_3, libs__handle_options__env_ptr);
        }
#line 2693 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded = MR_FALSE;
#line 2693 "handle_options.m"
      }
#line 2693 "handle_options.m"
    else
#line 2693 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded = MR_TRUE;
#line 2693 "handle_options.m"
  }
#line 2693 "handle_options.m"
}

#line 2690 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__must_contain_2_p_0(
#line 2690 "handle_options.m"
  MR_Word libs__handle_options__IncludeComponents_3,
#line 2690 "handle_options.m"
  MR_Word libs__handle_options__GradeComponents_4)
#line 2690 "handle_options.m"
{
#line 2690 "handle_options.m"
  {
#line 2690 "handle_options.m"
    struct libs__handle_options__must_contain_2_p_0_env_0_s libs__handle_options__env;

#line 2690 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_contain_2_p_0_env_0__IncludeComponents_3 = libs__handle_options__IncludeComponents_3;
#line 2690 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_contain_2_p_0_env_0__GradeComponents_4 = libs__handle_options__GradeComponents_4;
#line 2693 "handle_options.m"
    {
#line 2693 "handle_options.m"
      libs__handle_options__must_contain_2_p_0_4(&libs__handle_options__env);
    }
#line 2693 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_contain_2_p_0_env_0__succeeded = !((libs__handle_options__env).libs__handle_options__must_contain_2_p_0_env_0__succeeded);
#line 2693 "handle_options.m"
    return (libs__handle_options__env).libs__handle_options__must_contain_2_p_0_env_0__succeeded;
#line 2690 "handle_options.m"
  }
#line 2690 "handle_options.m"
}

#line 2717 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__filter_grade_7_p_0_1(
#line 2717 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2717 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2717 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2)
#line 2717 "handle_options.m"
{
#line 2717 "handle_options.m"
  {
#line 2717 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2717 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2717 "handle_options.m"
    MR_String libs__handle_options__conv0_HeadVar__2_20;

#line 2717 "handle_options.m"
    {
#line 2717 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2717__1_2_p_0(((MR_String) libs__handle_options__wrapper_arg_1), &libs__handle_options__conv0_HeadVar__2_20);
    }
#line 2717 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2717 "handle_options.m"
      {
#line 2717 "handle_options.m"
        *libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv0_HeadVar__2_20));
#line 2717 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2717 "handle_options.m"
      }
#line 2717 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2717 "handle_options.m"
  }
#line 2717 "handle_options.m"
}

#line 2672 "handle_options.m"
static void MR_CALL 
libs__handle_options__filter_grade_7_p_0(
#line 2672 "handle_options.m"
  MR_Word libs__handle_options__FilterPred_8,
#line 2672 "handle_options.m"
  MR_Word libs__handle_options__CondComponents_9,
#line 2672 "handle_options.m"
  MR_String libs__handle_options__GradeString_10,
#line 2672 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Grades_0_15,
#line 2672 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Grades_16,
#line 2672 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_17,
#line 2672 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_18)
#line 2672 "handle_options.m"
{
#line 7118 "libs.handle_options.c"
  {
#line 7120 "libs.handle_options.c"
    MR_bool libs__handle_options__succeeded;
#line 7122 "libs.handle_options.c"
    MR_Word libs__handle_options__Components0_33;
#line 2716 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_30_46;
#line 2716 "handle_options.m"
    MR_Word libs__handle_options__ComponentStrs_26;
#line 2716 "handle_options.m"
    MR_Word libs__handle_options__StrToComp_27;
#line 2716 "handle_options.m"
    MR_Word libs__handle_options__Chars_50;

#line 3197 "handle_options.m"
    {
#line 3197 "handle_options.m"
      mercury__string__to_char_list_2_p_0(libs__handle_options__GradeString_10, &libs__handle_options__Chars_50);
    }
#line 3198 "handle_options.m"
    {
#line 3198 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__split_grade_string_2_2_p_0(libs__handle_options__Chars_50, &libs__handle_options__ComponentStrs_26);
    }
#line 2716 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2716 "handle_options.m"
      {
#line 2717 "handle_options.m"
        libs__handle_options__StrToComp_27 = (MR_Word) &libs__handle_options_scalar_common_1[19];
#line 7149 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_30_46 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2720 "handle_options.m"
        {
#line 2720 "handle_options.m"
          libs__handle_options__succeeded = mercury__list__map_3_p_2(libs__handle_options__TypeCtorInfo_30_46, libs__handle_options__TypeCtorInfo_30_46, libs__handle_options__StrToComp_27, libs__handle_options__ComponentStrs_26, &libs__handle_options__Components0_33);
        }
#line 2716 "handle_options.m"
      }
#line 7158 "libs.handle_options.c"
    if (libs__handle_options__succeeded)
#line 7160 "libs.handle_options.c"
      {
#line 7162 "libs.handle_options.c"
        MR_Word libs__handle_options__TypeCtorInfo_31_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 7164 "libs.handle_options.c"
        MR_Word libs__handle_options__Components_34;
#line 2723 "handle_options.m"
        MR_Integer libs__handle_options__V_37_37;
#line 2723 "handle_options.m"
        MR_Integer libs__handle_options__V_38_38;

#line 2722 "handle_options.m"
        {
#line 2722 "handle_options.m"
          mercury__list__sort_and_remove_dups_2_p_0(libs__handle_options__TypeCtorInfo_31_47, libs__handle_options__Components0_33, &libs__handle_options__Components_34);
        }
#line 2723 "handle_options.m"
        {
#line 2723 "handle_options.m"
          libs__handle_options__V_37_37 = mercury__list__length_1_f_0(libs__handle_options__TypeCtorInfo_31_47, libs__handle_options__Components0_33);
        }
#line 2723 "handle_options.m"
        {
#line 2723 "handle_options.m"
          libs__handle_options__V_38_38 = mercury__list__length_1_f_0(libs__handle_options__TypeCtorInfo_31_47, libs__handle_options__Components_34);
        }
#line 2723 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__V_37_37 > libs__handle_options__V_38_38);
#line 7188 "libs.handle_options.c"
        if (libs__handle_options__succeeded)
#line 7190 "libs.handle_options.c"
          {
#line 7192 "libs.handle_options.c"
            MR_String libs__handle_options__V_39_39;

#line 2724 "handle_options.m"
            {
#line 2724 "handle_options.m"
              libs__handle_options__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) "invalid library grade: ", libs__handle_options__GradeString_10);
            }
#line 657 "handle_options.m"
            {
#line 657 "handle_options.m"
              *libs__handle_options__STATE_VARIABLE_Errors_18 = mercury__cord__snoc_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__STATE_VARIABLE_Errors_0_17, ((MR_Box) (libs__handle_options__V_39_39)));
            }
#line 2687 "handle_options.m"
            *libs__handle_options__STATE_VARIABLE_Grades_16 = libs__handle_options__STATE_VARIABLE_Grades_0_15;
#line 7207 "libs.handle_options.c"
          }
#line 7209 "libs.handle_options.c"
        else
#line 7211 "libs.handle_options.c"
          {
#line 2681 "handle_options.m"
            MR_bool MR_CALL (* libs__handle_options__func_1)(MR_Box, MR_Box, MR_Box);

#line 2727 "handle_options.m"
            *libs__handle_options__STATE_VARIABLE_Errors_18 = libs__handle_options__STATE_VARIABLE_Errors_0_17;
#line 2681 "handle_options.m"
            libs__handle_options__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__FilterPred_8, (MR_Integer) 1)));
#line 2681 "handle_options.m"
            {
#line 2681 "handle_options.m"
              libs__handle_options__succeeded = libs__handle_options__func_1(((MR_Box) libs__handle_options__FilterPred_8), ((MR_Box) (libs__handle_options__CondComponents_9)), ((MR_Box) (libs__handle_options__Components_34)));
            }
#line 2683 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 2682 "handle_options.m"
              {
#line 2682 "handle_options.m"
                MR_Word base;
#line 2682 "handle_options.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2682 "handle_options.m"
                *libs__handle_options__STATE_VARIABLE_Grades_16 = base;
#line 2682 "handle_options.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__GradeString_10));
#line 2682 "handle_options.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__handle_options__STATE_VARIABLE_Grades_0_15));
#line 2682 "handle_options.m"
              }
#line 2683 "handle_options.m"
            else
#line 2683 "handle_options.m"
              *libs__handle_options__STATE_VARIABLE_Grades_16 = libs__handle_options__STATE_VARIABLE_Grades_0_15;
#line 7245 "libs.handle_options.c"
          }
#line 7247 "libs.handle_options.c"
      }
#line 7249 "libs.handle_options.c"
    else
#line 7251 "libs.handle_options.c"
      {
#line 7253 "libs.handle_options.c"
        MR_String libs__handle_options__V_42_42;

#line 2730 "handle_options.m"
        {
#line 2730 "handle_options.m"
          libs__handle_options__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) "invalid library grade: ", libs__handle_options__GradeString_10);
        }
#line 657 "handle_options.m"
        {
#line 657 "handle_options.m"
          *libs__handle_options__STATE_VARIABLE_Errors_18 = mercury__cord__snoc_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__STATE_VARIABLE_Errors_0_17, ((MR_Box) (libs__handle_options__V_42_42)));
        }
#line 2687 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_Grades_16 = libs__handle_options__STATE_VARIABLE_Grades_0_15;
#line 7268 "libs.handle_options.c"
      }
#line 7270 "libs.handle_options.c"
  }
#line 2672 "handle_options.m"
}

#line 2649 "handle_options.m"
static void MR_CALL 
libs__handle_options__string_to_grade_component_6_p_0(
#line 2649 "handle_options.m"
  MR_String libs__handle_options__FilterDesc_7,
#line 2649 "handle_options.m"
  MR_String libs__handle_options__Comp_8,
#line 2649 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Comps_0_15,
#line 2649 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Comps_16,
#line 2649 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_17,
#line 2649 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_18)
#line 2649 "handle_options.m"
{
#line 2656 "handle_options.m"
  {
#line 2656 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2654 "handle_options.m"
    MR_Word libs__handle_options__V_11_11;
#line 2654 "handle_options.m"
    MR_Word libs__handle_options__V_12_12;
#line 2654 "handle_options.m"
    MR_Word libs__handle_options__V_13_13;
#line 2654 "handle_options.m"
    MR_Word libs__handle_options__V_14_14;

#line 2654 "handle_options.m"
    {
#line 2654 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__grade_component_table_5_p_0(libs__handle_options__Comp_8, &libs__handle_options__V_11_11, &libs__handle_options__V_12_12, &libs__handle_options__V_13_13, &libs__handle_options__V_14_14);
    }
#line 2656 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2655 "handle_options.m"
      {
#line 2655 "handle_options.m"
        {
#line 2655 "handle_options.m"
          MR_Word base;
#line 2655 "handle_options.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2655 "handle_options.m"
          *libs__handle_options__STATE_VARIABLE_Comps_16 = base;
#line 2655 "handle_options.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__Comp_8));
#line 2655 "handle_options.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__handle_options__STATE_VARIABLE_Comps_0_15));
#line 2655 "handle_options.m"
        }
#line 2655 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_Errors_18 = libs__handle_options__STATE_VARIABLE_Errors_0_17;
#line 2655 "handle_options.m"
      }
#line 2656 "handle_options.m"
    else
#line 2657 "handle_options.m"
      {
#line 2657 "handle_options.m"
        MR_String libs__handle_options__V_20_20;
#line 2657 "handle_options.m"
        MR_String libs__handle_options__V_23_23;
#line 2657 "handle_options.m"
        MR_String libs__handle_options__V_24_24;

#line 2658 "handle_options.m"
        {
#line 2658 "handle_options.m"
          libs__handle_options__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) " library grade component: ", libs__handle_options__Comp_8);
        }
#line 2657 "handle_options.m"
        {
#line 2657 "handle_options.m"
          libs__handle_options__V_23_23 = mercury__string__f_43_43_2_f_0(libs__handle_options__FilterDesc_7, libs__handle_options__V_24_24);
        }
#line 2657 "handle_options.m"
        {
#line 2657 "handle_options.m"
          libs__handle_options__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "unknown ", libs__handle_options__V_23_23);
        }
#line 657 "handle_options.m"
        {
#line 657 "handle_options.m"
          *libs__handle_options__STATE_VARIABLE_Errors_18 = mercury__cord__snoc_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__STATE_VARIABLE_Errors_0_17, ((MR_Box) (libs__handle_options__V_20_20)));
        }
#line 2657 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_Comps_16 = libs__handle_options__STATE_VARIABLE_Comps_0_15;
#line 2657 "handle_options.m"
      }
#line 2656 "handle_options.m"
  }
#line 2649 "handle_options.m"
}

#line 2637 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_6(
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
    MR_Word libs__handle_options__conv13_STATE_VARIABLE_Grades_16;
#line 2637 "handle_options.m"
    MR_Word libs__handle_options__conv12_STATE_VARIABLE_Errors_18;

#line 2637 "handle_options.m"
    {
#line 2637 "handle_options.m"
      libs__handle_options__filter_grade_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 4))), ((MR_String) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv13_STATE_VARIABLE_Grades_16, ((MR_Word) libs__handle_options__wrapper_arg_4), &libs__handle_options__conv12_STATE_VARIABLE_Errors_18);
    }
#line 2637 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv13_STATE_VARIABLE_Grades_16));
#line 2637 "handle_options.m"
    *libs__handle_options__wrapper_arg_5 = ((MR_Box) (libs__handle_options__conv12_STATE_VARIABLE_Errors_18));
#line 2637 "handle_options.m"
  }
#line 2637 "handle_options.m"
}

#line 2637 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_5(
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
      return libs__handle_options__succeeded = libs__handle_options__must_not_contain_2_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2));
    }
#line 2637 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2637 "handle_options.m"
  }
#line 2637 "handle_options.m"
}

#line 2635 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_4(
#line 2635 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2635 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2635 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2635 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2635 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2635 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5)
#line 2635 "handle_options.m"
{
#line 2635 "handle_options.m"
  {
#line 2635 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2635 "handle_options.m"
    MR_Word libs__handle_options__conv9_STATE_VARIABLE_Grades_16;
#line 2635 "handle_options.m"
    MR_Word libs__handle_options__conv8_STATE_VARIABLE_Errors_18;

#line 2635 "handle_options.m"
    {
#line 2635 "handle_options.m"
      libs__handle_options__filter_grade_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 4))), ((MR_String) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv9_STATE_VARIABLE_Grades_16, ((MR_Word) libs__handle_options__wrapper_arg_4), &libs__handle_options__conv8_STATE_VARIABLE_Errors_18);
    }
#line 2635 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv9_STATE_VARIABLE_Grades_16));
#line 2635 "handle_options.m"
    *libs__handle_options__wrapper_arg_5 = ((MR_Box) (libs__handle_options__conv8_STATE_VARIABLE_Errors_18));
#line 2635 "handle_options.m"
  }
#line 2635 "handle_options.m"
}

#line 2635 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_3(
#line 2635 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2635 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2635 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2)
#line 2635 "handle_options.m"
{
#line 2635 "handle_options.m"
  {
#line 2635 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2635 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2635 "handle_options.m"
    {
#line 2635 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__must_contain_2_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2));
    }
#line 2635 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2635 "handle_options.m"
  }
#line 2635 "handle_options.m"
}

#line 2627 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_2(
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
    MR_Word libs__handle_options__conv5_STATE_VARIABLE_Comps_16;
#line 2627 "handle_options.m"
    MR_Word libs__handle_options__conv4_STATE_VARIABLE_Errors_18;

#line 2627 "handle_options.m"
    {
#line 2627 "handle_options.m"
      libs__handle_options__string_to_grade_component_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv5_STATE_VARIABLE_Comps_16, ((MR_Word) libs__handle_options__wrapper_arg_4), &libs__handle_options__conv4_STATE_VARIABLE_Errors_18);
    }
#line 2627 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv5_STATE_VARIABLE_Comps_16));
#line 2627 "handle_options.m"
    *libs__handle_options__wrapper_arg_5 = ((MR_Box) (libs__handle_options__conv4_STATE_VARIABLE_Errors_18));
#line 2627 "handle_options.m"
  }
#line 2627 "handle_options.m"
}

#line 2625 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_1(
#line 2625 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2625 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2625 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2625 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2625 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2625 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5)
#line 2625 "handle_options.m"
{
#line 2625 "handle_options.m"
  {
#line 2625 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2625 "handle_options.m"
    MR_Word libs__handle_options__conv1_STATE_VARIABLE_Comps_16;
#line 2625 "handle_options.m"
    MR_Word libs__handle_options__conv0_STATE_VARIABLE_Errors_18;

#line 2625 "handle_options.m"
    {
#line 2625 "handle_options.m"
      libs__handle_options__string_to_grade_component_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv1_STATE_VARIABLE_Comps_16, ((MR_Word) libs__handle_options__wrapper_arg_4), &libs__handle_options__conv0_STATE_VARIABLE_Errors_18);
    }
#line 2625 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv1_STATE_VARIABLE_Comps_16));
#line 2625 "handle_options.m"
    *libs__handle_options__wrapper_arg_5 = ((MR_Box) (libs__handle_options__conv0_STATE_VARIABLE_Errors_18));
#line 2625 "handle_options.m"
  }
#line 2625 "handle_options.m"
}

#line 2617 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0(
#line 2617 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_12,
#line 2617 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_13,
#line 2617 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_14,
#line 2617 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_15)
#line 2617 "handle_options.m"
{
#line 2620 "handle_options.m"
  {
#line 2620 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2620 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_46_46;
#line 2620 "handle_options.m"
    MR_Word libs__handle_options__TypeInfo_47_47;
#line 2620 "handle_options.m"
    MR_Word libs__handle_options__TypeInfo_48_48;
#line 2620 "handle_options.m"
    MR_Word libs__handle_options__IncludeComponentStrs_7;
#line 2620 "handle_options.m"
    MR_Word libs__handle_options__OmitComponentStrs_8;
#line 2620 "handle_options.m"
    MR_Word libs__handle_options__IncludeComponents_9;
#line 2620 "handle_options.m"
    MR_Word libs__handle_options__OmitComponents_10;
#line 2620 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_20_20;
#line 2620 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_24_24;
#line 2620 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_LibGrades_27_27;
#line 2620 "handle_options.m"
    MR_Word libs__handle_options__V_28_28;
#line 2620 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_LibGrades_30_30;
#line 2620 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_31_31;
#line 2620 "handle_options.m"
    MR_Word libs__handle_options__V_33_33;
#line 2620 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_LibGrades_35_35;
#line 2620 "handle_options.m"
    MR_Word libs__handle_options__V_39_39;
#line 2625 "handle_options.m"
    MR_Box libs__handle_options__conv3_IncludeComponents_9;
#line 2625 "handle_options.m"
    MR_Box libs__handle_options__conv2_STATE_VARIABLE_Errors_20_20;
#line 2627 "handle_options.m"
    MR_Box libs__handle_options__conv7_OmitComponents_10;
#line 2627 "handle_options.m"
    MR_Box libs__handle_options__conv6_STATE_VARIABLE_Errors_24_24;
#line 2635 "handle_options.m"
    MR_Box libs__handle_options__conv11_STATE_VARIABLE_LibGrades_30_30;
#line 2635 "handle_options.m"
    MR_Box libs__handle_options__conv10_STATE_VARIABLE_Errors_31_31;
#line 2637 "handle_options.m"
    MR_Box libs__handle_options__conv15_STATE_VARIABLE_LibGrades_35_35;
#line 2637 "handle_options.m"
    MR_Box libs__handle_options__conv14_STATE_VARIABLE_Errors_15;

#line 2621 "handle_options.m"
    {
#line 2621 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_12, (MR_Integer) 639, &libs__handle_options__IncludeComponentStrs_7);
    }
#line 2623 "handle_options.m"
    {
#line 2623 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_12, (MR_Integer) 640, &libs__handle_options__OmitComponentStrs_8);
    }
#line 7668 "libs.handle_options.c"
    libs__handle_options__TypeCtorInfo_46_46 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 7670 "libs.handle_options.c"
    libs__handle_options__TypeInfo_47_47 = (MR_Word) &libs__handle_options_scalar_common_2[2];
#line 7672 "libs.handle_options.c"
    libs__handle_options__TypeInfo_48_48 = (MR_Word) &libs__handle_options_scalar_common_2[3];
#line 2625 "handle_options.m"
    {
#line 2625 "handle_options.m"
      mercury__list__foldl2_6_p_0(libs__handle_options__TypeCtorInfo_46_46, libs__handle_options__TypeInfo_47_47, libs__handle_options__TypeInfo_48_48, (MR_Word) &libs__handle_options_scalar_common_6[4], libs__handle_options__IncludeComponentStrs_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__handle_options__conv3_IncludeComponents_9, ((MR_Box) (libs__handle_options__STATE_VARIABLE_Errors_0_14)), &libs__handle_options__conv2_STATE_VARIABLE_Errors_20_20);
    }
#line 2625 "handle_options.m"
    libs__handle_options__IncludeComponents_9 = ((MR_Word) libs__handle_options__conv3_IncludeComponents_9);
#line 2625 "handle_options.m"
    libs__handle_options__STATE_VARIABLE_Errors_20_20 = ((MR_Word) libs__handle_options__conv2_STATE_VARIABLE_Errors_20_20);
#line 2627 "handle_options.m"
    {
#line 2627 "handle_options.m"
      mercury__list__foldl2_6_p_0(libs__handle_options__TypeCtorInfo_46_46, libs__handle_options__TypeInfo_47_47, libs__handle_options__TypeInfo_48_48, (MR_Word) &libs__handle_options_scalar_common_6[5], libs__handle_options__OmitComponentStrs_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__handle_options__conv7_OmitComponents_10, ((MR_Box) (libs__handle_options__STATE_VARIABLE_Errors_20_20)), &libs__handle_options__conv6_STATE_VARIABLE_Errors_24_24);
    }
#line 2627 "handle_options.m"
    libs__handle_options__OmitComponents_10 = ((MR_Word) libs__handle_options__conv7_OmitComponents_10);
#line 2627 "handle_options.m"
    libs__handle_options__STATE_VARIABLE_Errors_24_24 = ((MR_Word) libs__handle_options__conv6_STATE_VARIABLE_Errors_24_24);
#line 2630 "handle_options.m"
    {
#line 2630 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_12, (MR_Integer) 638, &libs__handle_options__STATE_VARIABLE_LibGrades_27_27);
    }
#line 2635 "handle_options.m"
    {
#line 2635 "handle_options.m"
      libs__handle_options__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2635 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_28_28, 0) = ((MR_Box) (&libs__handle_options_scalar_common_10[0]));
#line 2635 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_28_28, 1) = ((MR_Box) (libs__handle_options__postprocess_options_libgrades_4_p_0_4));
#line 2635 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2635 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_28_28, 3) = ((MR_Box) (&libs__handle_options_scalar_common_1[17]));
#line 2635 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_28_28, 4) = ((MR_Box) (libs__handle_options__IncludeComponents_9));
#line 2635 "handle_options.m"
    }
#line 2635 "handle_options.m"
    {
#line 2635 "handle_options.m"
      mercury__list__foldl2_6_p_0(libs__handle_options__TypeCtorInfo_46_46, libs__handle_options__TypeInfo_47_47, libs__handle_options__TypeInfo_48_48, libs__handle_options__V_28_28, libs__handle_options__STATE_VARIABLE_LibGrades_27_27, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__handle_options__conv11_STATE_VARIABLE_LibGrades_30_30, ((MR_Box) (libs__handle_options__STATE_VARIABLE_Errors_24_24)), &libs__handle_options__conv10_STATE_VARIABLE_Errors_31_31);
    }
#line 2635 "handle_options.m"
    libs__handle_options__STATE_VARIABLE_LibGrades_30_30 = ((MR_Word) libs__handle_options__conv11_STATE_VARIABLE_LibGrades_30_30);
#line 2635 "handle_options.m"
    libs__handle_options__STATE_VARIABLE_Errors_31_31 = ((MR_Word) libs__handle_options__conv10_STATE_VARIABLE_Errors_31_31);
#line 2637 "handle_options.m"
    {
#line 2637 "handle_options.m"
      libs__handle_options__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2637 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_33_33, 0) = ((MR_Box) (&libs__handle_options_scalar_common_10[0]));
#line 2637 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_33_33, 1) = ((MR_Box) (libs__handle_options__postprocess_options_libgrades_4_p_0_6));
#line 2637 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2637 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_33_33, 3) = ((MR_Box) (&libs__handle_options_scalar_common_1[18]));
#line 2637 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_33_33, 4) = ((MR_Box) (libs__handle_options__OmitComponents_10));
#line 2637 "handle_options.m"
    }
#line 2637 "handle_options.m"
    {
#line 2637 "handle_options.m"
      mercury__list__foldl2_6_p_0(libs__handle_options__TypeCtorInfo_46_46, libs__handle_options__TypeInfo_47_47, libs__handle_options__TypeInfo_48_48, libs__handle_options__V_33_33, libs__handle_options__STATE_VARIABLE_LibGrades_30_30, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__handle_options__conv15_STATE_VARIABLE_LibGrades_35_35, ((MR_Box) (libs__handle_options__STATE_VARIABLE_Errors_31_31)), &libs__handle_options__conv14_STATE_VARIABLE_Errors_15);
    }
#line 2637 "handle_options.m"
    libs__handle_options__STATE_VARIABLE_LibGrades_35_35 = ((MR_Word) libs__handle_options__conv15_STATE_VARIABLE_LibGrades_35_35);
#line 2637 "handle_options.m"
    *libs__handle_options__STATE_VARIABLE_Errors_15 = ((MR_Word) libs__handle_options__conv14_STATE_VARIABLE_Errors_15);
#line 2639 "handle_options.m"
    {
#line 2639 "handle_options.m"
      libs__handle_options__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2639 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2639 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_39_39, 1) = ((MR_Box) (libs__handle_options__STATE_VARIABLE_LibGrades_35_35));
#line 2639 "handle_options.m"
    }
#line 2639 "handle_options.m"
    {
#line 2639 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 638, libs__handle_options__V_39_39, libs__handle_options__STATE_VARIABLE_Globals_0_12, libs__handle_options__STATE_VARIABLE_Globals_13);
#line 2639 "handle_options.m"
      return;
    }
#line 2620 "handle_options.m"
  }
#line 2617 "handle_options.m"
}

#line 2564 "handle_options.m"
static void MR_CALL 
libs__handle_options__unsafe_set_already_printed_usage_1_p_0(
#line 2564 "handle_options.m"
  MR_Word libs__handle_options__X_1)
#line 2564 "handle_options.m"
{
#line 2564 "handle_options.m"
  {
#line 2564 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2564 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__unsafe_set_already_printed_usage_1_p_0

	MR_Word X;

	X =  libs__handle_options__X_1 ;
		{
#line 2564 "handle_options.m"
libs__handle_options__mutable_variable_already_printed_usage = X;

#line 7792 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2564 "handle_options.m"
}
#line 2564 "handle_options.m"
  }
#line 2564 "handle_options.m"
}

#line 2564 "handle_options.m"
static void MR_CALL 
libs__handle_options__unsafe_get_already_printed_usage_1_p_0(
#line 2564 "handle_options.m"
  MR_Word * libs__handle_options__X_1)
#line 2564 "handle_options.m"
{
#line 2564 "handle_options.m"
  {
#line 2564 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2564 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__unsafe_get_already_printed_usage_1_p_0

	MR_Word X;

		{
#line 2564 "handle_options.m"
X = libs__handle_options__mutable_variable_already_printed_usage;

#line 7825 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
	 *libs__handle_options__X_1  = X;
#line 2564 "handle_options.m"
}
#line 2564 "handle_options.m"
  }
#line 2564 "handle_options.m"
}

#line 2564 "handle_options.m"
static void MR_CALL 
libs__handle_options__unlock_already_printed_usage_0_p_0(void)
#line 2564 "handle_options.m"
{
#line 2564 "handle_options.m"
  {
#line 2564 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2564 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__unlock_already_printed_usage_0_p_0


		{
#line 2564 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 7859 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2564 "handle_options.m"
}
#line 2564 "handle_options.m"
  }
#line 2564 "handle_options.m"
}

#line 2564 "handle_options.m"
static void MR_CALL 
libs__handle_options__lock_already_printed_usage_0_p_0(void)
#line 2564 "handle_options.m"
{
#line 2564 "handle_options.m"
  {
#line 2564 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2564 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__lock_already_printed_usage_0_p_0


		{
#line 2564 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 7892 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2564 "handle_options.m"
}
#line 2564 "handle_options.m"
  }
#line 2564 "handle_options.m"
}

#line 2564 "handle_options.m"
static void MR_CALL 
libs__handle_options__initialise_mutable_already_printed_usage_0_p_0(void)
#line 2564 "handle_options.m"
{
#line 2564 "handle_options.m"
  {
#line 2564 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2564 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0


		{
#line 2564 "handle_options.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__handle_options__mutable_variable_already_printed_usage_lock, MR_MUTEX_ATTR);
#endif

#line 7924 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2564 "handle_options.m"
}
#line 2564 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0


		{
#line 2564 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 7942 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2564 "handle_options.m"
}
#line 2564 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 2564 "handle_options.m"
libs__handle_options__mutable_variable_already_printed_usage = X;

#line 7959 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2564 "handle_options.m"
}
#line 2564 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0


		{
#line 2564 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 7977 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2564 "handle_options.m"
}
#line 2564 "handle_options.m"
  }
#line 2564 "handle_options.m"
}

#line 2564 "handle_options.m"
static void MR_CALL 
libs__handle_options__pre_initialise_mutable_already_printed_usage_0_p_0(void)
#line 2564 "handle_options.m"
{
#line 2564 "handle_options.m"
  {
#line 2564 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2564 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__pre_initialise_mutable_already_printed_usage_0_p_0


		{
#line 2564 "handle_options.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__handle_options__mutable_variable_already_printed_usage_lock, MR_MUTEX_ATTR);
#endif

#line 8009 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2564 "handle_options.m"
}
#line 2564 "handle_options.m"
  }
#line 2564 "handle_options.m"
}

#line 2526 "handle_options.m"
static void MR_CALL 
libs__handle_options__disable_smart_recompilation_5_p_0(
#line 2526 "handle_options.m"
  MR_String libs__handle_options__OptionDescr_6,
#line 2526 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2526 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12)
#line 2526 "handle_options.m"
{
#line 2529 "handle_options.m"
  {
#line 2529 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2529 "handle_options.m"
    MR_Word libs__handle_options__WarnSmart_9;

#line 2530 "handle_options.m"
    {
#line 2530 "handle_options.m"
      libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
    }
#line 2531 "handle_options.m"
    {
#line 2531 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 115, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__STATE_VARIABLE_Globals_12);
    }
#line 2532 "handle_options.m"
    {
#line 2532 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_12, (MR_Integer) 23, &libs__handle_options__WarnSmart_9);
    }
#line 2546 "handle_options.m"
    if ((libs__handle_options__WarnSmart_9 == (MR_Integer) 0))
#line 2547 "handle_options.m"
      {
#line 2547 "handle_options.m"
      }
#line 2546 "handle_options.m"
    else
#line 2534 "handle_options.m"
      {
#line 2534 "handle_options.m"
        MR_Word libs__handle_options__Halt_10;

#line 2535 "handle_options.m"
        {
#line 2535 "handle_options.m"
          mercury__io__write_string_3_p_0((MR_String) "Warning: smart recompilation does not yet work with ");
        }
#line 2537 "handle_options.m"
        {
#line 2537 "handle_options.m"
          mercury__io__write_string_3_p_0(libs__handle_options__OptionDescr_6);
        }
#line 2538 "handle_options.m"
        {
#line 2538 "handle_options.m"
          mercury__io__write_string_3_p_0((MR_String) ".\n");
        }
#line 2539 "handle_options.m"
        {
#line 2539 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_12, (MR_Integer) 2, &libs__handle_options__Halt_10);
        }
#line 2543 "handle_options.m"
        if ((libs__handle_options__Halt_10 == (MR_Integer) 0))
#line 2544 "handle_options.m"
          {
#line 2544 "handle_options.m"
          }
#line 2543 "handle_options.m"
        else
#line 2541 "handle_options.m"
          {
#line 2542 "handle_options.m"
            {
#line 2542 "handle_options.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 2542 "handle_options.m"
              return;
            }
#line 2541 "handle_options.m"
          }
#line 2534 "handle_options.m"
      }
#line 2529 "handle_options.m"
  }
#line 2526 "handle_options.m"
}

#line 2511 "handle_options.m"
static void MR_CALL 
libs__handle_options__maybe_disable_smart_recompilation_8_p_0(
#line 2511 "handle_options.m"
  MR_Word libs__handle_options__Smart_9,
#line 2511 "handle_options.m"
  MR_Word libs__handle_options__ConflictingOption_10,
#line 2511 "handle_options.m"
  MR_Word libs__handle_options__ValueToDisableSmart_11,
#line 2511 "handle_options.m"
  MR_String libs__handle_options__OptionDescr_12,
#line 2511 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_16,
#line 2511 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_17)
#line 2511 "handle_options.m"
{
#line 2515 "handle_options.m"
  {
#line 2515 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2515 "handle_options.m"
    MR_Word libs__handle_options__Value_15;

#line 2516 "handle_options.m"
    {
#line 2516 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_16, libs__handle_options__ConflictingOption_10, &libs__handle_options__Value_15);
    }
#line 2518 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__Smart_9 == (MR_Integer) 1);
#line 2518 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2519 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__Value_15 == libs__handle_options__ValueToDisableSmart_11);
#line 2522 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2529 "handle_options.m"
      {
#line 2529 "handle_options.m"
        MR_Word libs__handle_options__WarnSmart_29;

#line 2530 "handle_options.m"
        {
#line 2530 "handle_options.m"
          libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
        }
#line 2531 "handle_options.m"
        {
#line 2531 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 115, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), libs__handle_options__STATE_VARIABLE_Globals_0_16, libs__handle_options__STATE_VARIABLE_Globals_17);
        }
#line 2532 "handle_options.m"
        {
#line 2532 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_17, (MR_Integer) 23, &libs__handle_options__WarnSmart_29);
        }
#line 2546 "handle_options.m"
        if ((libs__handle_options__WarnSmart_29 == (MR_Integer) 0))
#line 2547 "handle_options.m"
          {
#line 2547 "handle_options.m"
          }
#line 2546 "handle_options.m"
        else
#line 2534 "handle_options.m"
          {
#line 2534 "handle_options.m"
            MR_Word libs__handle_options__Halt_30;

#line 2535 "handle_options.m"
            {
#line 2535 "handle_options.m"
              mercury__io__write_string_3_p_0((MR_String) "Warning: smart recompilation does not yet work with ");
            }
#line 2537 "handle_options.m"
            {
#line 2537 "handle_options.m"
              mercury__io__write_string_3_p_0(libs__handle_options__OptionDescr_12);
            }
#line 2538 "handle_options.m"
            {
#line 2538 "handle_options.m"
              mercury__io__write_string_3_p_0((MR_String) ".\n");
            }
#line 2539 "handle_options.m"
            {
#line 2539 "handle_options.m"
              libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_17, (MR_Integer) 2, &libs__handle_options__Halt_30);
            }
#line 2543 "handle_options.m"
            if ((libs__handle_options__Halt_30 == (MR_Integer) 0))
#line 2544 "handle_options.m"
              {
#line 2544 "handle_options.m"
              }
#line 2543 "handle_options.m"
            else
#line 2541 "handle_options.m"
              {
#line 2542 "handle_options.m"
                {
#line 2542 "handle_options.m"
                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 2542 "handle_options.m"
                  return;
                }
#line 2541 "handle_options.m"
              }
#line 2534 "handle_options.m"
          }
#line 2529 "handle_options.m"
      }
#line 2522 "handle_options.m"
    else
#line 2523 "handle_options.m"
      *libs__handle_options__STATE_VARIABLE_Globals_17 = libs__handle_options__STATE_VARIABLE_Globals_0_16;
#line 2515 "handle_options.m"
  }
#line 2511 "handle_options.m"
}

#line 2491 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_requires_7_p_0(
#line 2491 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_8,
#line 2491 "handle_options.m"
  MR_Word libs__handle_options__RequiredOption_9,
#line 2491 "handle_options.m"
  MR_Word libs__handle_options__RequiredOptionValue_10,
#line 2491 "handle_options.m"
  MR_String libs__handle_options__ErrorMessage_11,
#line 2491 "handle_options.m"
  MR_Word libs__handle_options__Globals_12,
#line 2491 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_16,
#line 2491 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_17)
#line 2491 "handle_options.m"
{
#line 2495 "handle_options.m"
  {
#line 2495 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2495 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_14;
#line 2495 "handle_options.m"
    MR_Word libs__handle_options__OptionValue_15;

#line 2496 "handle_options.m"
    {
#line 2496 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__Globals_12, libs__handle_options__SourceOption_8, &libs__handle_options__SourceOptionValue_14);
    }
#line 2497 "handle_options.m"
    {
#line 2497 "handle_options.m"
      libs__globals__lookup_option_3_p_0(libs__handle_options__Globals_12, libs__handle_options__RequiredOption_9, &libs__handle_options__OptionValue_15);
    }
#line 2499 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__SourceOptionValue_14 == (MR_Integer) 1);
#line 2499 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2499 "handle_options.m"
      {
#line 2500 "handle_options.m"
        {
#line 2500 "handle_options.m"
          libs__handle_options__succeeded = mercury__getopt_io____Unify____option_data_0_0(libs__handle_options__OptionValue_15, libs__handle_options__RequiredOptionValue_10);
        }
#line 2500 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 2499 "handle_options.m"
      }
#line 2503 "handle_options.m"
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
#line 2503 "handle_options.m"
    else
#line 2503 "handle_options.m"
      *libs__handle_options__STATE_VARIABLE_Errors_17 = libs__handle_options__STATE_VARIABLE_Errors_0_16;
#line 2495 "handle_options.m"
  }
#line 2491 "handle_options.m"
}

#line 2473 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_neg_implies_5_p_0(
#line 2473 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_6,
#line 2473 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOption_7,
#line 2473 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOptionValue_8,
#line 2473 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2473 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12)
#line 2473 "handle_options.m"
{
#line 2477 "handle_options.m"
  {
#line 2477 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2477 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_10;

#line 2478 "handle_options.m"
    {
#line 2478 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__SourceOption_6, &libs__handle_options__SourceOptionValue_10);
    }
#line 2481 "handle_options.m"
    if ((libs__handle_options__SourceOptionValue_10 == (MR_Integer) 0))
#line 2483 "handle_options.m"
      {
#line 2483 "handle_options.m"
        libs__globals__set_option_4_p_0(libs__handle_options__ImpliedOption_7, libs__handle_options__ImpliedOptionValue_8, libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__STATE_VARIABLE_Globals_12);
#line 2483 "handle_options.m"
        return;
      }
#line 2481 "handle_options.m"
    else
#line 2480 "handle_options.m"
      *libs__handle_options__STATE_VARIABLE_Globals_12 = libs__handle_options__STATE_VARIABLE_Globals_0_11;
#line 2477 "handle_options.m"
  }
#line 2473 "handle_options.m"
}

#line 2457 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_implies_5_p_0(
#line 2457 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_6,
#line 2457 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOption_7,
#line 2457 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOptionValue_8,
#line 2457 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2457 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12)
#line 2457 "handle_options.m"
{
#line 2460 "handle_options.m"
  {
#line 2460 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2460 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_10;

#line 2461 "handle_options.m"
    {
#line 2461 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__SourceOption_6, &libs__handle_options__SourceOptionValue_10);
    }
#line 2465 "handle_options.m"
    if ((libs__handle_options__SourceOptionValue_10 == (MR_Integer) 0))
#line 2466 "handle_options.m"
      *libs__handle_options__STATE_VARIABLE_Globals_12 = libs__handle_options__STATE_VARIABLE_Globals_0_11;
#line 2465 "handle_options.m"
    else
#line 2464 "handle_options.m"
      {
#line 2464 "handle_options.m"
        libs__globals__set_option_4_p_0(libs__handle_options__ImpliedOption_7, libs__handle_options__ImpliedOptionValue_8, libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__STATE_VARIABLE_Globals_12);
#line 2464 "handle_options.m"
        return;
      }
#line 2460 "handle_options.m"
  }
#line 2457 "handle_options.m"
}

#line 2377 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_lowlevel_2_p_0(
#line 2377 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_12,
#line 2377 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_13)
#line 2377 "handle_options.m"
{
#line 2379 "handle_options.m"
  {
#line 2379 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2379 "handle_options.m"
    MR_Word libs__handle_options__OptFrames_4;
#line 2379 "handle_options.m"
    MR_Word libs__handle_options__OptLocalVars_5;
#line 2379 "handle_options.m"
    MR_Integer libs__handle_options__OptRepeat_6;
#line 2379 "handle_options.m"
    MR_Word libs__handle_options__UnboxedFloat_7;
#line 2379 "handle_options.m"
    MR_Word libs__handle_options__StaticGroundFloats_8;
#line 2379 "handle_options.m"
    MR_Word libs__handle_options__NonLocalGotos_9;
#line 2379 "handle_options.m"
    MR_Word libs__handle_options__AsmLabels_10;
#line 2379 "handle_options.m"
    MR_Word libs__handle_options__StaticCodeAddrs_11;
#line 2379 "handle_options.m"
    MR_Word libs__handle_options__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]);
#line 2379 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_17_17;
#line 2379 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_22_22;
#line 2379 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_27_27;
#line 2379 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_32_32;
#line 2379 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_40_40;
#line 2379 "handle_options.m"
    MR_Word libs__handle_options__V_44_44;
#line 2379 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_45_45;
#line 2379 "handle_options.m"
    MR_Word libs__handle_options__V_49_49;
#line 2379 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_57;
#line 2379 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_65;
#line 2379 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_73;
#line 2379 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_81;
#line 2399 "handle_options.m"
    MR_Integer libs__handle_options__V_37_37;

#line 2461 "handle_options.m"
    {
#line 2461 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_12, (MR_Integer) 372, &libs__handle_options__SourceOptionValue_57);
    }
#line 2465 "handle_options.m"
    if ((libs__handle_options__SourceOptionValue_57 == (MR_Integer) 0))
#line 2466 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_17_17 = libs__handle_options__STATE_VARIABLE_Globals_0_12;
#line 2465 "handle_options.m"
    else
#line 2464 "handle_options.m"
      {
#line 2464 "handle_options.m"
        libs__globals__set_option_4_p_0((MR_Integer) 470, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_0_12, &libs__handle_options__STATE_VARIABLE_Globals_17_17);
      }
#line 2461 "handle_options.m"
    {
#line 2461 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_17_17, (MR_Integer) 476, &libs__handle_options__SourceOptionValue_65);
    }
#line 2465 "handle_options.m"
    if ((libs__handle_options__SourceOptionValue_65 == (MR_Integer) 0))
#line 2466 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_22_22 = libs__handle_options__STATE_VARIABLE_Globals_17_17;
#line 2465 "handle_options.m"
    else
#line 2464 "handle_options.m"
      {
#line 2464 "handle_options.m"
        libs__globals__set_option_4_p_0((MR_Integer) 473, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_17_17, &libs__handle_options__STATE_VARIABLE_Globals_22_22);
      }
#line 2461 "handle_options.m"
    {
#line 2461 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_22_22, (MR_Integer) 476, &libs__handle_options__SourceOptionValue_73);
    }
#line 2465 "handle_options.m"
    if ((libs__handle_options__SourceOptionValue_73 == (MR_Integer) 0))
#line 2466 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_27_27 = libs__handle_options__STATE_VARIABLE_Globals_22_22;
#line 2465 "handle_options.m"
    else
#line 2464 "handle_options.m"
      {
#line 2464 "handle_options.m"
        libs__globals__set_option_4_p_0((MR_Integer) 466, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_22_22, &libs__handle_options__STATE_VARIABLE_Globals_27_27);
      }
#line 2461 "handle_options.m"
    {
#line 2461 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_27_27, (MR_Integer) 475, &libs__handle_options__SourceOptionValue_81);
    }
#line 2465 "handle_options.m"
    if ((libs__handle_options__SourceOptionValue_81 == (MR_Integer) 0))
#line 2466 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_32_32 = libs__handle_options__STATE_VARIABLE_Globals_27_27;
#line 2465 "handle_options.m"
    else
#line 2464 "handle_options.m"
      {
#line 2464 "handle_options.m"
        libs__globals__set_option_4_p_0((MR_Integer) 303, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_27_27, &libs__handle_options__STATE_VARIABLE_Globals_32_32);
      }
#line 2393 "handle_options.m"
    {
#line 2393 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_32_32, (MR_Integer) 476, &libs__handle_options__OptFrames_4);
    }
#line 2394 "handle_options.m"
    {
#line 2394 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_32_32, (MR_Integer) 470, &libs__handle_options__OptLocalVars_5);
    }
#line 2395 "handle_options.m"
    {
#line 2395 "handle_options.m"
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_32_32, (MR_Integer) 479, &libs__handle_options__OptRepeat_6);
    }
#line 2397 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__OptFrames_4 == (MR_Integer) 1);
#line 2398 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 2398 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__OptLocalVars_5 == (MR_Integer) 1);
#line 2399 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2399 "handle_options.m"
      {
#line 2400 "handle_options.m"
        libs__handle_options__V_37_37 = (MR_Integer) 1;
#line 2400 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__OptRepeat_6 < libs__handle_options__V_37_37);
#line 2399 "handle_options.m"
      }
#line 2407 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2406 "handle_options.m"
      {
#line 2406 "handle_options.m"
        {
#line 2406 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 479, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[14]), libs__handle_options__STATE_VARIABLE_Globals_32_32, &libs__handle_options__STATE_VARIABLE_Globals_40_40);
        }
#line 2406 "handle_options.m"
      }
#line 2407 "handle_options.m"
    else
#line 2407 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_40_40 = libs__handle_options__STATE_VARIABLE_Globals_32_32;
#line 2413 "handle_options.m"
    {
#line 2413 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_40_40, (MR_Integer) 243, &libs__handle_options__UnboxedFloat_7);
    }
#line 2419 "handle_options.m"
    if ((libs__handle_options__UnboxedFloat_7 == (MR_Integer) 0))
#line 2428 "handle_options.m"
      libs__handle_options__StaticGroundFloats_8 = (MR_Integer) 1;
#line 2419 "handle_options.m"
    else
#line 2418 "handle_options.m"
      libs__handle_options__StaticGroundFloats_8 = (MR_Integer) 1;
#line 2430 "handle_options.m"
    {
#line 2430 "handle_options.m"
      libs__handle_options__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2430 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_44_44, 0) = ((MR_Box) (libs__handle_options__StaticGroundFloats_8));
#line 2430 "handle_options.m"
    }
#line 2430 "handle_options.m"
    {
#line 2430 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 451, libs__handle_options__V_44_44, libs__handle_options__STATE_VARIABLE_Globals_40_40, &libs__handle_options__STATE_VARIABLE_Globals_45_45);
    }
#line 2435 "handle_options.m"
    {
#line 2435 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_45_45, (MR_Integer) 249, &libs__handle_options__NonLocalGotos_9);
    }
#line 2436 "handle_options.m"
    {
#line 2436 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_45_45, (MR_Integer) 251, &libs__handle_options__AsmLabels_10);
    }
#line 2438 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__NonLocalGotos_9 == (MR_Integer) 1);
#line 2438 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2439 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__AsmLabels_10 == (MR_Integer) 0);
#line 2447 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2446 "handle_options.m"
      libs__handle_options__StaticCodeAddrs_11 = (MR_Integer) 0;
#line 2447 "handle_options.m"
    else
#line 2448 "handle_options.m"
      libs__handle_options__StaticCodeAddrs_11 = (MR_Integer) 1;
#line 2450 "handle_options.m"
    {
#line 2450 "handle_options.m"
      libs__handle_options__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2450 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_49_49, 0) = ((MR_Box) (libs__handle_options__StaticCodeAddrs_11));
#line 2450 "handle_options.m"
    }
#line 2450 "handle_options.m"
    {
#line 2450 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 452, libs__handle_options__V_49_49, libs__handle_options__STATE_VARIABLE_Globals_45_45, libs__handle_options__STATE_VARIABLE_Globals_13);
#line 2450 "handle_options.m"
      return;
    }
#line 2379 "handle_options.m"
  }
#line 2377 "handle_options.m"
}

#line 2236 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_13(
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
    MR_String libs__handle_options__conv10_HeadVar__3_1535;

#line 2236 "handle_options.m"
    {
#line 2236 "handle_options.m"
      libs__handle_options__conv10_HeadVar__3_1535 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2236__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2236 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv10_HeadVar__3_1535));
#line 2236 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2236 "handle_options.m"
  }
#line 2236 "handle_options.m"
}

#line 2234 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_12(
#line 2234 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2234 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2234 "handle_options.m"
{
#line 2234 "handle_options.m"
  {
#line 2234 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2234 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2234 "handle_options.m"
    MR_String libs__handle_options__conv9_HeadVar__3_1529;

#line 2234 "handle_options.m"
    {
#line 2234 "handle_options.m"
      libs__handle_options__conv9_HeadVar__3_1529 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2234__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2234 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv9_HeadVar__3_1529));
#line 2234 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2234 "handle_options.m"
  }
#line 2234 "handle_options.m"
}

#line 2243 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_11(
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
    MR_String libs__handle_options__conv8_HeadVar__2_1524;

#line 2243 "handle_options.m"
    {
#line 2243 "handle_options.m"
      libs__handle_options__conv8_HeadVar__2_1524 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2243__1_1_f_0(((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2243 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv8_HeadVar__2_1524));
#line 2243 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2243 "handle_options.m"
  }
#line 2243 "handle_options.m"
}

#line 2242 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_10(
#line 2242 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2242 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2242 "handle_options.m"
{
#line 2242 "handle_options.m"
  {
#line 2242 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2242 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2242 "handle_options.m"
    MR_String libs__handle_options__conv7_HeadVar__2_1519;

#line 2242 "handle_options.m"
    {
#line 2242 "handle_options.m"
      libs__handle_options__conv7_HeadVar__2_1519 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2242__1_1_f_0(((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2242 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv7_HeadVar__2_1519));
#line 2242 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2242 "handle_options.m"
  }
#line 2242 "handle_options.m"
}

#line 2212 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_9(
#line 2212 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2212 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2212 "handle_options.m"
{
#line 2212 "handle_options.m"
  {
#line 2212 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2212 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2212 "handle_options.m"
    MR_String libs__handle_options__conv6_HeadVar__3_1506;

#line 2212 "handle_options.m"
    {
#line 2212 "handle_options.m"
      libs__handle_options__conv6_HeadVar__3_1506 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2212__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2212 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv6_HeadVar__3_1506));
#line 2212 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2212 "handle_options.m"
  }
#line 2212 "handle_options.m"
}

#line 2208 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_8(
#line 2208 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2208 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2208 "handle_options.m"
{
#line 2208 "handle_options.m"
  {
#line 2208 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2208 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2208 "handle_options.m"
    MR_String libs__handle_options__conv5_HeadVar__3_1500;

#line 2208 "handle_options.m"
    {
#line 2208 "handle_options.m"
      libs__handle_options__conv5_HeadVar__3_1500 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2208__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2208 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv5_HeadVar__3_1500));
#line 2208 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2208 "handle_options.m"
  }
#line 2208 "handle_options.m"
}

#line 2190 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_7(
#line 2190 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2190 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2190 "handle_options.m"
{
#line 2190 "handle_options.m"
  {
#line 2190 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2190 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2190 "handle_options.m"
    {
#line 2190 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2190__2_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2190 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2190 "handle_options.m"
  }
#line 2190 "handle_options.m"
}

#line 2190 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_6(
#line 2190 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2190 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2190 "handle_options.m"
{
#line 2190 "handle_options.m"
  {
#line 2190 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2190 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2190 "handle_options.m"
    {
#line 2190 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2190__1_2_p_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2190 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2190 "handle_options.m"
  }
#line 2190 "handle_options.m"
}

#line 2172 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_5(
#line 2172 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2172 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2172 "handle_options.m"
{
#line 2172 "handle_options.m"
  {
#line 2172 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2172 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2172 "handle_options.m"
    MR_String libs__handle_options__conv4_HeadVar__4_1481;

#line 2172 "handle_options.m"
    {
#line 2172 "handle_options.m"
      libs__handle_options__conv4_HeadVar__4_1481 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2172__1_3_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 4))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2172 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv4_HeadVar__4_1481));
#line 2172 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2172 "handle_options.m"
  }
#line 2172 "handle_options.m"
}

#line 2136 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_4(
#line 2136 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2136 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2136 "handle_options.m"
{
#line 2136 "handle_options.m"
  {
#line 2136 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2136 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2136 "handle_options.m"
    MR_String libs__handle_options__conv3_HeadVar__3_1462;

#line 2136 "handle_options.m"
    {
#line 2136 "handle_options.m"
      libs__handle_options__conv3_HeadVar__3_1462 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2136__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2136 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv3_HeadVar__3_1462));
#line 2136 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2136 "handle_options.m"
  }
#line 2136 "handle_options.m"
}

#line 2126 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_3(
#line 2126 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2126 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2126 "handle_options.m"
{
#line 2126 "handle_options.m"
  {
#line 2126 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2126 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2126 "handle_options.m"
    MR_String libs__handle_options__conv2_HeadVar__3_1452;

#line 2126 "handle_options.m"
    {
#line 2126 "handle_options.m"
      libs__handle_options__conv2_HeadVar__3_1452 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2126__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2126 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv2_HeadVar__3_1452));
#line 2126 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2126 "handle_options.m"
  }
#line 2126 "handle_options.m"
}

#line 2113 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_2(
#line 2113 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2113 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2113 "handle_options.m"
{
#line 2113 "handle_options.m"
  {
#line 2113 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2113 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2113 "handle_options.m"
    MR_String libs__handle_options__conv1_HeadVar__3_1435;

#line 2113 "handle_options.m"
    {
#line 2113 "handle_options.m"
      libs__handle_options__conv1_HeadVar__3_1435 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2113__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2113 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv1_HeadVar__3_1435));
#line 2113 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2113 "handle_options.m"
  }
#line 2113 "handle_options.m"
}

#line 2098 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_1(
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
    MR_String libs__handle_options__conv0_HeadVar__3_1420;

#line 2098 "handle_options.m"
    {
#line 2098 "handle_options.m"
      libs__handle_options__conv0_HeadVar__3_1420 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2098__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2098 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv0_HeadVar__3_1420));
#line 2098 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2098 "handle_options.m"
  }
#line 2098 "handle_options.m"
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
    MR_Word libs__handle_options__TypeCtorInfo_1642_1642 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
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
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_202_202;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_210_210;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_231_231;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__V_250_250;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_251_251;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_252_252;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_256_256;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_266_266;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_270_270;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__V_273_273;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_274_274;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_278_278;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_333_333;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_340_340;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_460_460;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_465_465;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_470_470;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__V_474_474;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_475_475;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_480_480;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__V_484_484;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_485_485;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_490_490;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_495_495;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_500_500;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_505_505;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_510_510;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_515_515;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_524_524;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_529_529;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_534_534;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_539_539;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_544_544;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_549_549;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_554_554;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_561_561;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_567_567;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_572_572;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_577_577;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_583_583;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_588_588;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_593_593;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_598_598;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_603_603;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_608_608;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_613_613;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_618_618;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_623_623;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_628_628;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_633_633;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_638_638;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_642_642;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_647_647;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_652_652;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_657_657;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_662_662;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_667_667;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_672_672;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_677_677;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_682_682;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_687_687;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_692_692;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_697_697;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_702_702;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_707_707;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_712_712;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_717_717;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_722_722;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_727_727;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_732_732;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_737_737;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_742_742;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_747_747;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_752_752;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_757_757;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_763_763;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_768_768;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_773_773;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_778_778;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_783_783;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_788_788;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_794_794;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_799_799;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_804_804;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_809_809;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_817_817;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_821_821;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_827_827;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_832_832;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_838_838;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_850_850;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_854_854;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_859_859;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_864_864;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_869_869;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_876_876;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__V_889_889;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_890_890;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_913_913;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_917_917;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_922_922;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_927_927;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_931_931;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_935_935;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_940_940;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_945_945;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_950_950;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_955_955;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_961_961;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_966_966;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_971_971;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_976_976;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_981_981;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_986_986;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_991_991;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_996_996;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1001_1001;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1006_1006;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1011_1011;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1016_1016;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1021_1021;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1116_1116;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1125_1125;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_1129_1129;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1142_1142;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_1147_1147;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1156_1156;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_1164_1164;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1168_1168;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1173_1173;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1178_1178;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1183_1183;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1188_1188;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1193_1193;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1198_1198;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1203_1203;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1247_1247;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1257_1257;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1262_1262;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1267_1267;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1272_1272;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1277_1277;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1282_1282;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1287_1287;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1292_1292;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1297_1297;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1302_1302;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1308_1308;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1312_1312;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1320_1320;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1325_1325;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1330_1330;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1335_1335;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1340_1340;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1345_1345;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1350_1350;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1355_1355;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1360_1360;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1365_1365;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1370_1370;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1375_1375;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1391_1391;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1399_1399;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1411_1411;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1468_1468;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1475_1475;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1496_1496;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__V_1512_1512;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1513_1513;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__V_1515_1515;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1516_1516;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1552_1552;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1556_1556;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_1568_1568;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_1576_1576;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1600_1600;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1607_1607;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1616_1616;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1621_1621;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1627_1627;
#line 712 "handle_options.m"
    MR_Word libs__handle_options__V_203_203;
#line 1177 "handle_options.m"
    MR_String libs__handle_options__V_76_76;
#line 1338 "handle_options.m"
    MR_String libs__handle_options__AllDumpOptions_81;
#line 1326 "handle_options.m"
    MR_String libs__handle_options__V_813_813;
#line 1589 "handle_options.m"
    MR_Word libs__handle_options__V_1024_1024;
#line 2077 "handle_options.m"
    MR_String libs__handle_options__V_1404_1404;
#line 2265 "handle_options.m"
    MR_Word libs__handle_options__ToMihsSubdir_175;
#line 2265 "handle_options.m"
    MR_Word libs__handle_options__ToHrlsSubdir_176;
#line 2346 "handle_options.m"
    MR_Integer libs__handle_options__V_1618_1618;

#line 678 "handle_options.m"
    {
#line 678 "handle_options.m"
      mercury__getopt_io__lookup_string_option_3_p_0(libs__handle_options__TypeCtorInfo_1642_1642, libs__handle_options__OptionTable0_25, ((MR_Box) ((MR_Integer) 635)), &libs__handle_options__InstallCmd_47);
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
          mercury__getopt_io__lookup_string_option_3_p_0(libs__handle_options__TypeCtorInfo_1642_1642, libs__handle_options__OptionTable0_25, ((MR_Box) ((MR_Integer) 636)), &libs__handle_options__InstallCmdDirOption_49);
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
#line 695 "handle_options.m"
    {
#line 695 "handle_options.m"
      libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_196_196, (MR_Integer) 174, &libs__handle_options__EventSetFileName0_50);
    }
#line 697 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__EventSetFileName0_50, (MR_String) "") == 0);
#line 707 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 699 "handle_options.m"
      {
#line 699 "handle_options.m"
        MR_Word libs__handle_options__MaybeEventSetFileName_51;

#line 698 "handle_options.m"
        {
#line 698 "handle_options.m"
          mercury__io__get_environment_var_4_p_0((MR_String) "MERCURY_EVENT_SET_FILE_NAME", &libs__handle_options__MaybeEventSetFileName_51);
        }
#line 704 "handle_options.m"
        if ((libs__handle_options__MaybeEventSetFileName_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_202_202 = libs__handle_options__STATE_VARIABLE_Globals_196_196;
#line 704 "handle_options.m"
        else
#line 701 "handle_options.m"
          {
#line 701 "handle_options.m"
            MR_String libs__handle_options__EventSetFileName_52 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeEventSetFileName_51, (MR_Integer) 0)));
#line 701 "handle_options.m"
            MR_Word libs__handle_options__V_201_201;

#line 703 "handle_options.m"
            {
#line 703 "handle_options.m"
              libs__handle_options__V_201_201 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 703 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_201_201, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 703 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_201_201, 1) = ((MR_Box) (libs__handle_options__EventSetFileName_52));
#line 703 "handle_options.m"
            }
#line 702 "handle_options.m"
            {
#line 702 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 174, libs__handle_options__V_201_201, libs__handle_options__STATE_VARIABLE_Globals_196_196, &libs__handle_options__STATE_VARIABLE_Globals_202_202);
            }
#line 701 "handle_options.m"
          }
#line 699 "handle_options.m"
      }
#line 707 "handle_options.m"
    else
#line 708 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_202_202 = libs__handle_options__STATE_VARIABLE_Globals_196_196;
#line 712 "handle_options.m"
    {
#line 712 "handle_options.m"
      libs__handle_options__V_203_203 = libs__globals__gc_is_conservative_1_f_0(libs__handle_options__GC_Method_27);
    }
#line 712 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__V_203_203 == (MR_Integer) 1);
#line 717 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 714 "handle_options.m"
      {
#line 714 "handle_options.m"
        MR_Word libs__handle_options__V_205_205 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 714 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_206_206;

#line 713 "handle_options.m"
        {
#line 713 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 308, libs__handle_options__V_205_205, libs__handle_options__STATE_VARIABLE_Globals_202_202, &libs__handle_options__STATE_VARIABLE_Globals_206_206);
        }
#line 715 "handle_options.m"
        {
#line 715 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 309, libs__handle_options__V_205_205, libs__handle_options__STATE_VARIABLE_Globals_206_206, &libs__handle_options__STATE_VARIABLE_Globals_210_210);
        }
#line 714 "handle_options.m"
      }
#line 717 "handle_options.m"
    else
#line 717 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_210_210 = libs__handle_options__STATE_VARIABLE_Globals_202_202;
#line 723 "handle_options.m"
    {
#line 723 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_210_210, (MR_Integer) 223, &libs__handle_options__PregeneratedDist_53);
    }
#line 731 "handle_options.m"
    if ((libs__handle_options__PregeneratedDist_53 == (MR_Integer) 0))
#line 732 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_231_231 = libs__handle_options__STATE_VARIABLE_Globals_210_210;
#line 731 "handle_options.m"
    else
#line 725 "handle_options.m"
      {
#line 725 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_215_215;
#line 725 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_219_219;
#line 725 "handle_options.m"
        MR_Word libs__handle_options__V_222_222;
#line 725 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_223_223;
#line 725 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_227_227;

#line 726 "handle_options.m"
        {
#line 726 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 237, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[7]), libs__handle_options__STATE_VARIABLE_Globals_210_210, &libs__handle_options__STATE_VARIABLE_Globals_215_215);
        }
#line 727 "handle_options.m"
        {
#line 727 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 246, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[8]), libs__handle_options__STATE_VARIABLE_Globals_215_215, &libs__handle_options__STATE_VARIABLE_Globals_219_219);
        }
#line 728 "handle_options.m"
        libs__handle_options__V_222_222 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 728 "handle_options.m"
        {
#line 728 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 243, libs__handle_options__V_222_222, libs__handle_options__STATE_VARIABLE_Globals_219_219, &libs__handle_options__STATE_VARIABLE_Globals_223_223);
        }
#line 729 "handle_options.m"
        {
#line 729 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 224, libs__handle_options__V_222_222, libs__handle_options__STATE_VARIABLE_Globals_223_223, &libs__handle_options__STATE_VARIABLE_Globals_227_227);
        }
#line 730 "handle_options.m"
        {
#line 730 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 247, libs__handle_options__V_222_222, libs__handle_options__STATE_VARIABLE_Globals_227_227, &libs__handle_options__STATE_VARIABLE_Globals_231_231);
        }
#line 725 "handle_options.m"
      }
#line 739 "handle_options.m"
    if ((libs__handle_options__TagsMethod0_28 == (MR_Integer) 0))
#line 738 "handle_options.m"
      libs__handle_options__NumTagBits0_54 = (MR_Integer) 0;
#line 739 "handle_options.m"
    else
#line 742 "handle_options.m"
      {
#line 743 "handle_options.m"
        {
#line 743 "handle_options.m"
          libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_231_231, (MR_Integer) 237, &libs__handle_options__NumTagBits0_54);
        }
#line 742 "handle_options.m"
      }
#line 751 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__TagsMethod0_28 == (MR_Integer) 1);
#line 751 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 752 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__NumTagBits0_54 == (MR_Integer) -1);
#line 756 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 754 "handle_options.m"
      {
#line 754 "handle_options.m"
        {
#line 754 "handle_options.m"
          libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_231_231, (MR_Integer) 242, &libs__handle_options__NumTagBits1_55);
        }
#line 754 "handle_options.m"
      }
#line 756 "handle_options.m"
    else
#line 757 "handle_options.m"
      libs__handle_options__NumTagBits1_55 = libs__handle_options__NumTagBits0_54;
#line 762 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__NumTagBits1_55 < (MR_Integer) 0);
#line 770 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 763 "handle_options.m"
      {
#line 763 "handle_options.m"
        MR_String libs__handle_options__ProgName_56;
#line 763 "handle_options.m"
        MR_String libs__handle_options__V_1655_1655;
#line 763 "handle_options.m"
        MR_Word libs__handle_options__V_1661_1661;
#line 763 "handle_options.m"
        MR_String libs__handle_options__V_1664_1664;

#line 763 "handle_options.m"
        {
#line 763 "handle_options.m"
          mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &libs__handle_options__ProgName_56);
        }
#line 9845 "libs.handle_options.c"
        libs__handle_options__V_1661_1661 = (MR_Word) &libs__handle_options_scalar_common_3[9];
#line 765 "handle_options.m"
        {
#line 765 "handle_options.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(libs__handle_options__V_1661_1661, libs__handle_options__ProgName_56, &libs__handle_options__V_1655_1655);
        }
#line 765 "handle_options.m"
        {
#line 765 "handle_options.m"
          mercury__io__write_string_3_p_0(libs__handle_options__V_1655_1655);
        }
#line 764 "handle_options.m"
        {
#line 764 "handle_options.m"
          mercury__io__write_string_3_p_0((MR_String) ": warning: --num-tag-bits invalid or unspecified\n");
        }
#line 767 "handle_options.m"
        {
#line 767 "handle_options.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(libs__handle_options__V_1661_1661, libs__handle_options__ProgName_56, &libs__handle_options__V_1664_1664);
        }
#line 767 "handle_options.m"
        {
#line 767 "handle_options.m"
          mercury__io__write_string_3_p_0(libs__handle_options__V_1664_1664);
        }
#line 766 "handle_options.m"
        {
#line 766 "handle_options.m"
          mercury__io__write_string_3_p_0((MR_String) ": using --num-tag-bits 0 (tags disabled)\n");
        }
#line 768 "handle_options.m"
        {
#line 768 "handle_options.m"
          libs__compiler_util__record_warning_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_231_231);
        }
#line 769 "handle_options.m"
        libs__handle_options__NumTagBits_57 = (MR_Integer) 0;
#line 763 "handle_options.m"
      }
#line 770 "handle_options.m"
    else
#line 771 "handle_options.m"
      libs__handle_options__NumTagBits_57 = libs__handle_options__NumTagBits1_55;
#line 774 "handle_options.m"
    {
#line 774 "handle_options.m"
      libs__handle_options__V_250_250 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 774 "handle_options.m"
      MR_hl_field(MR_mktag(2), libs__handle_options__V_250_250, 0) = ((MR_Box) (libs__handle_options__NumTagBits_57));
#line 774 "handle_options.m"
    }
#line 774 "handle_options.m"
    {
#line 774 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 237, libs__handle_options__V_250_250, libs__handle_options__STATE_VARIABLE_Globals_231_231, &libs__handle_options__STATE_VARIABLE_Globals_251_251);
    }
#line 775 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__NumTagBits_57 == (MR_Integer) 0);
#line 778 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 776 "handle_options.m"
      {
#line 776 "handle_options.m"
        libs__handle_options__TagsMethod_58 = (MR_Integer) 0;
#line 777 "handle_options.m"
        {
#line 777 "handle_options.m"
          libs__globals__set_tags_method_3_p_0(libs__handle_options__TagsMethod_58, libs__handle_options__STATE_VARIABLE_Globals_251_251, &libs__handle_options__STATE_VARIABLE_Globals_252_252);
        }
#line 776 "handle_options.m"
      }
#line 778 "handle_options.m"
    else
#line 779 "handle_options.m"
      {
#line 779 "handle_options.m"
        libs__handle_options__TagsMethod_58 = libs__handle_options__TagsMethod0_28;
#line 779 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_252_252 = libs__handle_options__STATE_VARIABLE_Globals_251_251;
#line 779 "handle_options.m"
      }
#line 782 "handle_options.m"
    {
#line 782 "handle_options.m"
      libs__globals__current_grade_supports_par_conj_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_252_252, &libs__handle_options__GradeSupportsParConj_59);
    }
#line 783 "handle_options.m"
    {
#line 783 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_252_252, (MR_Integer) 216, &libs__handle_options__Parallel_60);
    }
#line 784 "handle_options.m"
    {
#line 784 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_252_252, (MR_Integer) 217, &libs__handle_options__Threadscope_61);
    }
#line 786 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__GradeSupportsParConj_59 == (MR_Integer) 0);
#line 786 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 787 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__Threadscope_61 == (MR_Integer) 1);
#line 791 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 789 "handle_options.m"
      {
#line 789 "handle_options.m"
        {
#line 789 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "\'threadscope\' grade component requires a parallel grade", libs__handle_options__STATE_VARIABLE_Errors_0_189, &libs__handle_options__STATE_VARIABLE_Errors_256_256);
        }
#line 789 "handle_options.m"
      }
#line 791 "handle_options.m"
    else
#line 791 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_256_256 = libs__handle_options__STATE_VARIABLE_Errors_0_189;
#line 798 "handle_options.m"
    {
#line 798 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_252_252, (MR_Integer) 674, &libs__handle_options__ImplicitParallelism_62);
    }
#line 832 "handle_options.m"
    if ((libs__handle_options__ImplicitParallelism_62 == (MR_Integer) 0))
#line 833 "handle_options.m"
      {
#line 833 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_270_270 = libs__handle_options__STATE_VARIABLE_Errors_256_256;
#line 833 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_266_266 = libs__handle_options__STATE_VARIABLE_Globals_252_252;
#line 833 "handle_options.m"
      }
#line 832 "handle_options.m"
    else
#line 815 "handle_options.m"
    if ((libs__handle_options__GradeSupportsParConj_59 == (MR_Integer) 0))
#line 819 "handle_options.m"
      {
#line 827 "handle_options.m"
        if ((libs__handle_options__Parallel_60 == (MR_Integer) 0))
#line 828 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Errors_270_270 = libs__handle_options__STATE_VARIABLE_Errors_256_256;
#line 827 "handle_options.m"
        else
#line 821 "handle_options.m"
          {
#line 822 "handle_options.m"
            {
#line 822 "handle_options.m"
              libs__handle_options__add_error_3_p_0((MR_String) "\'--implicit-parallelism\' requires a grade that supports parallel conjunctions, use a low-level C grade without trailing.", libs__handle_options__STATE_VARIABLE_Errors_256_256, &libs__handle_options__STATE_VARIABLE_Errors_270_270);
            }
#line 821 "handle_options.m"
          }
#line 830 "handle_options.m"
        {
#line 830 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 674, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), libs__handle_options__STATE_VARIABLE_Globals_252_252, &libs__handle_options__STATE_VARIABLE_Globals_266_266);
        }
#line 819 "handle_options.m"
      }
#line 815 "handle_options.m"
    else
#line 803 "handle_options.m"
      {
#line 803 "handle_options.m"
        MR_String libs__handle_options__FeedbackFile_63;

#line 804 "handle_options.m"
        {
#line 804 "handle_options.m"
          libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_252_252, (MR_Integer) 675, &libs__handle_options__FeedbackFile_63);
        }
#line 807 "handle_options.m"
        libs__handle_options__succeeded = (strcmp(libs__handle_options__FeedbackFile_63, (MR_String) "") == 0);
#line 812 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 809 "handle_options.m"
          {
#line 809 "handle_options.m"
            {
#line 809 "handle_options.m"
              libs__handle_options__add_error_3_p_0((MR_String) "\'--implicit-parallelism\' requires \'--feedback-file\'", libs__handle_options__STATE_VARIABLE_Errors_256_256, &libs__handle_options__STATE_VARIABLE_Errors_270_270);
            }
#line 809 "handle_options.m"
          }
#line 812 "handle_options.m"
        else
#line 812 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Errors_270_270 = libs__handle_options__STATE_VARIABLE_Errors_256_256;
#line 803 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_266_266 = libs__handle_options__STATE_VARIABLE_Globals_252_252;
#line 803 "handle_options.m"
      }
#line 838 "handle_options.m"
    libs__handle_options__V_273_273 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]);
#line 837 "handle_options.m"
    {
#line 837 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 674, (MR_Integer) 198, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_266_266, &libs__handle_options__STATE_VARIABLE_Globals_274_274);
    }
#line 843 "handle_options.m"
    if ((libs__handle_options__GradeSupportsParConj_59 == (MR_Integer) 0))
#line 844 "handle_options.m"
      {
#line 845 "handle_options.m"
        {
#line 845 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 676, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), libs__handle_options__STATE_VARIABLE_Globals_274_274, &libs__handle_options__STATE_VARIABLE_Globals_278_278);
        }
#line 844 "handle_options.m"
      }
#line 843 "handle_options.m"
    else
#line 842 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_278_278 = libs__handle_options__STATE_VARIABLE_Globals_274_274;
#line 915 "handle_options.m"
    if ((libs__handle_options__Target_26 == (MR_Integer) 0))
#line 916 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_333_333 = libs__handle_options__STATE_VARIABLE_Globals_278_278;
#line 915 "handle_options.m"
    else
#line 915 "handle_options.m"
    if ((libs__handle_options__Target_26 == (MR_Integer) 2))
#line 917 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_333_333 = libs__handle_options__STATE_VARIABLE_Globals_278_278;
#line 915 "handle_options.m"
    else
#line 915 "handle_options.m"
    if ((libs__handle_options__Target_26 == (MR_Integer) 4))
#line 919 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_333_333 = libs__handle_options__STATE_VARIABLE_Globals_278_278;
#line 915 "handle_options.m"
    else
#line 915 "handle_options.m"
    if ((libs__handle_options__Target_26 == (MR_Integer) 1))
#line 890 "handle_options.m"
      {
#line 890 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_281_281;
#line 890 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_284_284;
#line 890 "handle_options.m"
        MR_Word libs__handle_options__V_287_287;
#line 890 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_288_288;
#line 890 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_292_292;
#line 890 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_296_296;
#line 890 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_300_300;
#line 890 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_304_304;
#line 890 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_308_308;
#line 890 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_312_312;
#line 890 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_316_316;
#line 890 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_320_320;
#line 890 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_324_324;
#line 890 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_328_328;
#line 910 "handle_options.m"
        MR_Word libs__handle_options__V_330_330;

#line 891 "handle_options.m"
        {
#line 891 "handle_options.m"
          libs__globals__set_gc_method_3_p_0((MR_Integer) 0, libs__handle_options__STATE_VARIABLE_Globals_278_278, &libs__handle_options__STATE_VARIABLE_Globals_281_281);
        }
#line 892 "handle_options.m"
        {
#line 892 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 215, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[196]), libs__handle_options__STATE_VARIABLE_Globals_281_281, &libs__handle_options__STATE_VARIABLE_Globals_284_284);
        }
#line 893 "handle_options.m"
        libs__handle_options__V_287_287 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 893 "handle_options.m"
        {
#line 893 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 309, libs__handle_options__V_287_287, libs__handle_options__STATE_VARIABLE_Globals_284_284, &libs__handle_options__STATE_VARIABLE_Globals_288_288);
        }
#line 895 "handle_options.m"
        {
#line 895 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 308, libs__handle_options__V_287_287, libs__handle_options__STATE_VARIABLE_Globals_288_288, &libs__handle_options__STATE_VARIABLE_Globals_292_292);
        }
#line 897 "handle_options.m"
        {
#line 897 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 254, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_292_292, &libs__handle_options__STATE_VARIABLE_Globals_296_296);
        }
#line 898 "handle_options.m"
        {
#line 898 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 255, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_296_296, &libs__handle_options__STATE_VARIABLE_Globals_300_300);
        }
#line 899 "handle_options.m"
        {
#line 899 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 256, libs__handle_options__V_287_287, libs__handle_options__STATE_VARIABLE_Globals_300_300, &libs__handle_options__STATE_VARIABLE_Globals_304_304);
        }
#line 900 "handle_options.m"
        {
#line 900 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 258, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_304_304, &libs__handle_options__STATE_VARIABLE_Globals_308_308);
        }
#line 901 "handle_options.m"
        {
#line 901 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 237, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[10]), libs__handle_options__STATE_VARIABLE_Globals_308_308, &libs__handle_options__STATE_VARIABLE_Globals_312_312);
        }
#line 902 "handle_options.m"
        {
#line 902 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 244, libs__handle_options__V_287_287, libs__handle_options__STATE_VARIABLE_Globals_312_312, &libs__handle_options__STATE_VARIABLE_Globals_316_316);
        }
#line 903 "handle_options.m"
        {
#line 903 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 245, libs__handle_options__V_287_287, libs__handle_options__STATE_VARIABLE_Globals_316_316, &libs__handle_options__STATE_VARIABLE_Globals_320_320);
        }
#line 905 "handle_options.m"
        {
#line 905 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 450, libs__handle_options__V_287_287, libs__handle_options__STATE_VARIABLE_Globals_320_320, &libs__handle_options__STATE_VARIABLE_Globals_324_324);
        }
#line 906 "handle_options.m"
        {
#line 906 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 651, libs__handle_options__V_287_287, libs__handle_options__STATE_VARIABLE_Globals_324_324, &libs__handle_options__STATE_VARIABLE_Globals_328_328);
        }
#line 910 "handle_options.m"
        {
#line 910 "handle_options.m"
          libs__handle_options__V_330_330 = libs__trace_params__given_trace_level_is_none_1_f_0(libs__handle_options__TraceLevel_31);
        }
#line 910 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__V_330_330 == (MR_Integer) 0);
#line 912 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 911 "handle_options.m"
          {
#line 911 "handle_options.m"
            {
#line 911 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 487, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_328_328, &libs__handle_options__STATE_VARIABLE_Globals_333_333);
            }
#line 911 "handle_options.m"
          }
#line 912 "handle_options.m"
        else
#line 912 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_333_333 = libs__handle_options__STATE_VARIABLE_Globals_328_328;
#line 890 "handle_options.m"
      }
#line 915 "handle_options.m"
    else
#line 918 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_333_333 = libs__handle_options__STATE_VARIABLE_Globals_278_278;
#line 926 "handle_options.m"
    {
#line 926 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_333_333, (MR_Integer) 263, &libs__handle_options__ILFuncPtrTypes_64);
    }
#line 928 "handle_options.m"
    {
#line 928 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_333_333, (MR_Integer) 262, &libs__handle_options__ILRefAnyFields_65);
    }
#line 931 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__ILFuncPtrTypes_64 == (MR_Integer) 1);
#line 931 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 932 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__ILRefAnyFields_65 == (MR_Integer) 1);
#line 935 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 935 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_340_340 = libs__handle_options__STATE_VARIABLE_Globals_333_333;
#line 935 "handle_options.m"
    else
#line 936 "handle_options.m"
      {
#line 936 "handle_options.m"
        {
#line 936 "handle_options.m"
          libs__handle_options__option_implies_5_p_0((MR_Integer) 261, (MR_Integer) 260, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_333_333, &libs__handle_options__STATE_VARIABLE_Globals_340_340);
        }
#line 936 "handle_options.m"
      }
#line 10241 "libs.handle_options.c"
    if ((libs__handle_options__Target_26 == (MR_Integer) 0))
#line 1049 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_460_460 = libs__handle_options__STATE_VARIABLE_Globals_340_340;
#line 10245 "libs.handle_options.c"
    else
#line 10247 "libs.handle_options.c"
    if ((libs__handle_options__Target_26 == (MR_Integer) 4))
#line 10249 "libs.handle_options.c"
      {
#line 10251 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_405_405;
#line 10253 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_408_408;
#line 10255 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_412_412;
#line 10257 "libs.handle_options.c"
        MR_Word libs__handle_options__V_415_415;
#line 10259 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_416_416;
#line 10261 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_420_420;
#line 10263 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_424_424;
#line 10265 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_428_428;
#line 10267 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_432_432;
#line 10269 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_436_436;
#line 10271 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_440_440;
#line 10273 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_444_444;
#line 10275 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_448_448;
#line 10277 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_452_452;
#line 10279 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_456_456;

#line 1022 "handle_options.m"
        {
#line 1022 "handle_options.m"
          libs__globals__set_gc_method_3_p_0((MR_Integer) 0, libs__handle_options__STATE_VARIABLE_Globals_340_340, &libs__handle_options__STATE_VARIABLE_Globals_405_405);
        }
#line 1023 "handle_options.m"
        {
#line 1023 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 215, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[196]), libs__handle_options__STATE_VARIABLE_Globals_405_405, &libs__handle_options__STATE_VARIABLE_Globals_408_408);
        }
#line 1024 "handle_options.m"
        {
#line 1024 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 243, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_408_408, &libs__handle_options__STATE_VARIABLE_Globals_412_412);
        }
#line 1025 "handle_options.m"
        libs__handle_options__V_415_415 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 1025 "handle_options.m"
        {
#line 1025 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 309, libs__handle_options__V_415_415, libs__handle_options__STATE_VARIABLE_Globals_412_412, &libs__handle_options__STATE_VARIABLE_Globals_416_416);
        }
#line 1027 "handle_options.m"
        {
#line 1027 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 308, libs__handle_options__V_415_415, libs__handle_options__STATE_VARIABLE_Globals_416_416, &libs__handle_options__STATE_VARIABLE_Globals_420_420);
        }
#line 1029 "handle_options.m"
        {
#line 1029 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 276, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_420_420, &libs__handle_options__STATE_VARIABLE_Globals_424_424);
        }
#line 1031 "handle_options.m"
        {
#line 1031 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 272, libs__handle_options__V_415_415, libs__handle_options__STATE_VARIABLE_Globals_424_424, &libs__handle_options__STATE_VARIABLE_Globals_428_428);
        }
#line 1033 "handle_options.m"
        {
#line 1033 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 274, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_428_428, &libs__handle_options__STATE_VARIABLE_Globals_432_432);
        }
#line 1035 "handle_options.m"
        {
#line 1035 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 275, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_432_432, &libs__handle_options__STATE_VARIABLE_Globals_436_436);
        }
#line 1037 "handle_options.m"
        {
#line 1037 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 651, libs__handle_options__V_415_415, libs__handle_options__STATE_VARIABLE_Globals_436_436, &libs__handle_options__STATE_VARIABLE_Globals_440_440);
        }
#line 1043 "handle_options.m"
        {
#line 1043 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 249, libs__handle_options__V_415_415, libs__handle_options__STATE_VARIABLE_Globals_440_440, &libs__handle_options__STATE_VARIABLE_Globals_444_444);
        }
#line 1044 "handle_options.m"
        {
#line 1044 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 250, libs__handle_options__V_415_415, libs__handle_options__STATE_VARIABLE_Globals_444_444, &libs__handle_options__STATE_VARIABLE_Globals_448_448);
        }
#line 1045 "handle_options.m"
        {
#line 1045 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 251, libs__handle_options__V_415_415, libs__handle_options__STATE_VARIABLE_Globals_448_448, &libs__handle_options__STATE_VARIABLE_Globals_452_452);
        }
#line 1046 "handle_options.m"
        {
#line 1046 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 254, libs__handle_options__V_415_415, libs__handle_options__STATE_VARIABLE_Globals_452_452, &libs__handle_options__STATE_VARIABLE_Globals_456_456);
        }
#line 1047 "handle_options.m"
        {
#line 1047 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 255, libs__handle_options__V_415_415, libs__handle_options__STATE_VARIABLE_Globals_456_456, &libs__handle_options__STATE_VARIABLE_Globals_460_460);
        }
#line 10359 "libs.handle_options.c"
      }
#line 10361 "libs.handle_options.c"
    else
#line 10363 "libs.handle_options.c"
    if ((libs__handle_options__Target_26 == (MR_Integer) 1))
#line 1050 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_460_460 = libs__handle_options__STATE_VARIABLE_Globals_340_340;
#line 10367 "libs.handle_options.c"
    else
#line 10369 "libs.handle_options.c"
      {
#line 10371 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_343_343;
#line 10373 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_346_346;
#line 10375 "libs.handle_options.c"
        MR_Word libs__handle_options__V_349_349;
#line 10377 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_350_350;
#line 10379 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_354_354;
#line 10381 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_358_358;
#line 10383 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_362_362;
#line 10385 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_366_366;
#line 10387 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_370_370;
#line 10389 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_374_374;
#line 10391 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_378_378;
#line 10393 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_382_382;
#line 10395 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_386_386;
#line 10397 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_390_390;
#line 10399 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_394_394;
#line 10401 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_398_398;

#line 977 "handle_options.m"
        {
#line 977 "handle_options.m"
          libs__globals__set_gc_method_3_p_0((MR_Integer) 0, libs__handle_options__STATE_VARIABLE_Globals_340_340, &libs__handle_options__STATE_VARIABLE_Globals_343_343);
        }
#line 978 "handle_options.m"
        {
#line 978 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 215, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[196]), libs__handle_options__STATE_VARIABLE_Globals_343_343, &libs__handle_options__STATE_VARIABLE_Globals_346_346);
        }
#line 979 "handle_options.m"
        libs__handle_options__V_349_349 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 979 "handle_options.m"
        {
#line 979 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 309, libs__handle_options__V_349_349, libs__handle_options__STATE_VARIABLE_Globals_346_346, &libs__handle_options__STATE_VARIABLE_Globals_350_350);
        }
#line 981 "handle_options.m"
        {
#line 981 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 308, libs__handle_options__V_349_349, libs__handle_options__STATE_VARIABLE_Globals_350_350, &libs__handle_options__STATE_VARIABLE_Globals_354_354);
        }
#line 983 "handle_options.m"
        {
#line 983 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 254, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_354_354, &libs__handle_options__STATE_VARIABLE_Globals_358_358);
        }
#line 984 "handle_options.m"
        {
#line 984 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 255, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_358_358, &libs__handle_options__STATE_VARIABLE_Globals_362_362);
        }
#line 985 "handle_options.m"
        {
#line 985 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 243, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_362_362, &libs__handle_options__STATE_VARIABLE_Globals_366_366);
        }
#line 986 "handle_options.m"
        {
#line 986 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 256, libs__handle_options__V_349_349, libs__handle_options__STATE_VARIABLE_Globals_366_366, &libs__handle_options__STATE_VARIABLE_Globals_370_370);
        }
#line 987 "handle_options.m"
        {
#line 987 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 258, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_370_370, &libs__handle_options__STATE_VARIABLE_Globals_374_374);
        }
#line 988 "handle_options.m"
        {
#line 988 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 257, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_374_374, &libs__handle_options__STATE_VARIABLE_Globals_378_378);
        }
#line 989 "handle_options.m"
        {
#line 989 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 237, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[10]), libs__handle_options__STATE_VARIABLE_Globals_378_378, &libs__handle_options__STATE_VARIABLE_Globals_382_382);
        }
#line 990 "handle_options.m"
        {
#line 990 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 245, libs__handle_options__V_349_349, libs__handle_options__STATE_VARIABLE_Globals_382_382, &libs__handle_options__STATE_VARIABLE_Globals_386_386);
        }
#line 991 "handle_options.m"
        {
#line 991 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 260, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_386_386, &libs__handle_options__STATE_VARIABLE_Globals_390_390);
        }
#line 992 "handle_options.m"
        {
#line 992 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 273, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_390_390, &libs__handle_options__STATE_VARIABLE_Globals_394_394);
        }
#line 994 "handle_options.m"
        {
#line 994 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 651, libs__handle_options__V_349_349, libs__handle_options__STATE_VARIABLE_Globals_394_394, &libs__handle_options__STATE_VARIABLE_Globals_398_398);
        }
#line 10481 "libs.handle_options.c"
        if ((libs__handle_options__Target_26 == (MR_Integer) 2))
#line 10483 "libs.handle_options.c"
          {
#line 997 "handle_options.m"
            {
#line 997 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 576, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[197]), libs__handle_options__STATE_VARIABLE_Globals_398_398, &libs__handle_options__STATE_VARIABLE_Globals_460_460);
            }
#line 10490 "libs.handle_options.c"
          }
#line 10492 "libs.handle_options.c"
        else
#line 1051 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_460_460 = libs__handle_options__STATE_VARIABLE_Globals_398_398;
#line 10496 "libs.handle_options.c"
      }
#line 1059 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__Target_26 == (MR_Integer) 0);
#line 1062 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1060 "handle_options.m"
      {
#line 1060 "handle_options.m"
        {
#line 1060 "handle_options.m"
          libs__handle_options__option_implies_5_p_0((MR_Integer) 254, (MR_Integer) 259, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_460_460, &libs__handle_options__STATE_VARIABLE_Globals_465_465);
        }
#line 1060 "handle_options.m"
      }
#line 1062 "handle_options.m"
    else
#line 1062 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_465_465 = libs__handle_options__STATE_VARIABLE_Globals_460_460;
#line 1067 "handle_options.m"
    {
#line 1067 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 219, (MR_Integer) 218, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_465_465, &libs__handle_options__STATE_VARIABLE_Globals_470_470);
    }
#line 1074 "handle_options.m"
    libs__handle_options__V_474_474 = (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[198]);
#line 1074 "handle_options.m"
    {
#line 1074 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 101, (MR_Integer) 559, libs__handle_options__V_474_474, libs__handle_options__STATE_VARIABLE_Globals_470_470, &libs__handle_options__STATE_VARIABLE_Globals_475_475);
    }
#line 1076 "handle_options.m"
    {
#line 1076 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 101, (MR_Integer) 561, libs__handle_options__V_474_474, libs__handle_options__STATE_VARIABLE_Globals_475_475, &libs__handle_options__STATE_VARIABLE_Globals_480_480);
    }
#line 1080 "handle_options.m"
    libs__handle_options__V_484_484 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 1080 "handle_options.m"
    {
#line 1080 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 254, (MR_Integer) 249, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_480_480, &libs__handle_options__STATE_VARIABLE_Globals_485_485);
    }
#line 1082 "handle_options.m"
    {
#line 1082 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 254, (MR_Integer) 250, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_485_485, &libs__handle_options__STATE_VARIABLE_Globals_490_490);
    }
#line 1084 "handle_options.m"
    {
#line 1084 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 254, (MR_Integer) 251, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_490_490, &libs__handle_options__STATE_VARIABLE_Globals_495_495);
    }
#line 1087 "handle_options.m"
    {
#line 1087 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 256, (MR_Integer) 322, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_495_495, &libs__handle_options__STATE_VARIABLE_Globals_500_500);
    }
#line 1091 "handle_options.m"
    {
#line 1091 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 463, (MR_Integer) 457, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_500_500, &libs__handle_options__STATE_VARIABLE_Globals_505_505);
    }
#line 1095 "handle_options.m"
    {
#line 1095 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 625, (MR_Integer) 623, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_505_505, &libs__handle_options__STATE_VARIABLE_Globals_510_510);
    }
#line 1099 "handle_options.m"
    {
#line 1099 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_510_510, (MR_Integer) 641, &libs__handle_options__LibLinkages0_66);
    }
#line 1105 "handle_options.m"
    if ((libs__handle_options__LibLinkages0_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1102 "handle_options.m"
      {
#line 1103 "handle_options.m"
        {
#line 1103 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 641, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[11]), libs__handle_options__STATE_VARIABLE_Globals_510_510, &libs__handle_options__STATE_VARIABLE_Globals_515_515);
        }
#line 1102 "handle_options.m"
      }
#line 1105 "handle_options.m"
    else
#line 1106 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_515_515 = libs__handle_options__STATE_VARIABLE_Globals_510_510;
#line 1112 "handle_options.m"
    {
#line 1112 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 623, (MR_Integer) 100, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_515_515, &libs__handle_options__STATE_VARIABLE_Globals_524_524);
    }
#line 1113 "handle_options.m"
    {
#line 1113 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 623, (MR_Integer) 99, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_524_524, &libs__handle_options__STATE_VARIABLE_Globals_529_529);
    }
#line 1118 "handle_options.m"
    {
#line 1118 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 623, (MR_Integer) 646, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_529_529, &libs__handle_options__STATE_VARIABLE_Globals_534_534);
    }
#line 1119 "handle_options.m"
    {
#line 1119 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 628, (MR_Integer) 646, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_534_534, &libs__handle_options__STATE_VARIABLE_Globals_539_539);
    }
#line 1120 "handle_options.m"
    {
#line 1120 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 628, (MR_Integer) 623, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_539_539, &libs__handle_options__STATE_VARIABLE_Globals_544_544);
    }
#line 1124 "handle_options.m"
    {
#line 1124 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 628, (MR_Integer) 117, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_544_544, &libs__handle_options__STATE_VARIABLE_Globals_549_549);
    }
#line 1128 "handle_options.m"
    {
#line 1128 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 623, (MR_Integer) 651, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_549_549, &libs__handle_options__STATE_VARIABLE_Globals_554_554);
    }
#line 1133 "handle_options.m"
    {
#line 1133 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_554_554, (MR_Integer) 332, &libs__handle_options__TransOpt_69);
    }
#line 1146 "handle_options.m"
    if ((libs__handle_options__TransOpt_69 == (MR_Integer) 0))
#line 1147 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_561_561 = libs__handle_options__STATE_VARIABLE_Errors_270_270;
#line 1146 "handle_options.m"
    else
#line 1136 "handle_options.m"
      {
#line 1136 "handle_options.m"
        MR_Word libs__handle_options__UsingMMC_Make_70;
#line 1136 "handle_options.m"
        MR_Word libs__handle_options__InvokedByMMC_Make_71;
#line 1140 "handle_options.m"
        MR_Word libs__handle_options__V_559_559;

#line 1137 "handle_options.m"
        {
#line 1137 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_554_554, (MR_Integer) 623, &libs__handle_options__UsingMMC_Make_70);
        }
#line 1138 "handle_options.m"
        {
#line 1138 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_554_554, (MR_Integer) 628, &libs__handle_options__InvokedByMMC_Make_71);
        }
#line 1140 "handle_options.m"
        {
#line 1140 "handle_options.m"
          libs__handle_options__V_559_559 = mercury__bool__or_2_f_0(libs__handle_options__UsingMMC_Make_70, libs__handle_options__InvokedByMMC_Make_71);
        }
#line 1140 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__V_559_559 == (MR_Integer) 1);
#line 1143 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1141 "handle_options.m"
          {
#line 1141 "handle_options.m"
            {
#line 1141 "handle_options.m"
              libs__handle_options__add_error_3_p_0((MR_String) "\140--transitive-intermodule-optimization\' is incompatible with \140mmc --make\'.", libs__handle_options__STATE_VARIABLE_Errors_270_270, &libs__handle_options__STATE_VARIABLE_Errors_561_561);
            }
#line 1141 "handle_options.m"
          }
#line 1143 "handle_options.m"
        else
#line 1143 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Errors_561_561 = libs__handle_options__STATE_VARIABLE_Errors_270_270;
#line 1136 "handle_options.m"
      }
#line 1152 "handle_options.m"
    {
#line 1152 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_554_554, (MR_Integer) 328, &libs__handle_options__InterModOpt_72);
    }
#line 1154 "handle_options.m"
    {
#line 1154 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_554_554, (MR_Integer) 333, &libs__handle_options__InterModAnalysis_73);
    }
#line 1157 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__InterModOpt_72 == (MR_Integer) 1);
#line 1157 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1158 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__InterModAnalysis_73 == (MR_Integer) 1);
#line 1162 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1160 "handle_options.m"
      {
#line 1160 "handle_options.m"
        {
#line 1160 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "\140--intermodule-optimization\' is incompatible with \140--intermodule-analysis\'.", libs__handle_options__STATE_VARIABLE_Errors_561_561, &libs__handle_options__STATE_VARIABLE_Errors_567_567);
        }
#line 1160 "handle_options.m"
      }
#line 1162 "handle_options.m"
    else
#line 1162 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_567_567 = libs__handle_options__STATE_VARIABLE_Errors_561_561;
#line 1166 "handle_options.m"
    {
#line 1166 "handle_options.m"
      libs__handle_options__succeeded = mercury__io__have_symlinks_0_p_0();
    }
#line 1168 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1168 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_572_572 = libs__handle_options__STATE_VARIABLE_Globals_554_554;
#line 1168 "handle_options.m"
    else
#line 1169 "handle_options.m"
      {
#line 1169 "handle_options.m"
        {
#line 1169 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 632, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_554_554, &libs__handle_options__STATE_VARIABLE_Globals_572_572);
        }
#line 1169 "handle_options.m"
      }
#line 1172 "handle_options.m"
    {
#line 1172 "handle_options.m"
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_572_572, (MR_Integer) 95, &libs__handle_options__MaybeStandaloneInt_74);
    }
#line 1174 "handle_options.m"
    {
#line 1174 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_572_572, (MR_Integer) 569, &libs__handle_options__ExtraInitFunctions_75);
    }
#line 1177 "handle_options.m"
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__MaybeStandaloneInt_74)) == (MR_mktag((MR_Integer) 1)));
#line 1177 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1177 "handle_options.m"
      {
#line 1177 "handle_options.m"
        libs__handle_options__V_76_76 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeStandaloneInt_74, (MR_Integer) 0)));
#line 1178 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__ExtraInitFunctions_75 == (MR_Integer) 1);
#line 1177 "handle_options.m"
      }
#line 1183 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1180 "handle_options.m"
      {
#line 1180 "handle_options.m"
        {
#line 1180 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "\140--generate-standalone-interface\' is incompatible with \140--extra-initialization-functions\'.", libs__handle_options__STATE_VARIABLE_Errors_567_567, &libs__handle_options__STATE_VARIABLE_Errors_577_577);
        }
#line 1180 "handle_options.m"
      }
#line 1183 "handle_options.m"
    else
#line 1183 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_577_577 = libs__handle_options__STATE_VARIABLE_Errors_567_567;
#line 1187 "handle_options.m"
    {
#line 1187 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 410, (MR_Integer) 408, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_572_572, &libs__handle_options__STATE_VARIABLE_Globals_583_583);
    }
#line 1189 "handle_options.m"
    {
#line 1189 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 418, (MR_Integer) 417, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_583_583, &libs__handle_options__STATE_VARIABLE_Globals_588_588);
    }
#line 1191 "handle_options.m"
    {
#line 1191 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 417, (MR_Integer) 416, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_588_588, &libs__handle_options__STATE_VARIABLE_Globals_593_593);
    }
#line 1192 "handle_options.m"
    {
#line 1192 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 417, (MR_Integer) 13, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_593_593, &libs__handle_options__STATE_VARIABLE_Globals_598_598);
    }
#line 1194 "handle_options.m"
    {
#line 1194 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 425, (MR_Integer) 424, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_598_598, &libs__handle_options__STATE_VARIABLE_Globals_603_603);
    }
#line 1196 "handle_options.m"
    {
#line 1196 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 424, (MR_Integer) 423, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_603_603, &libs__handle_options__STATE_VARIABLE_Globals_608_608);
    }
#line 1197 "handle_options.m"
    {
#line 1197 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 424, (MR_Integer) 13, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_608_608, &libs__handle_options__STATE_VARIABLE_Globals_613_613);
    }
#line 1199 "handle_options.m"
    {
#line 1199 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 88, (MR_Integer) 332, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_613_613, &libs__handle_options__STATE_VARIABLE_Globals_618_618);
    }
#line 1201 "handle_options.m"
    {
#line 1201 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 332, (MR_Integer) 328, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_618_618, &libs__handle_options__STATE_VARIABLE_Globals_623_623);
    }
#line 1203 "handle_options.m"
    {
#line 1203 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 331, (MR_Integer) 330, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_623_623, &libs__handle_options__STATE_VARIABLE_Globals_628_628);
    }
#line 1208 "handle_options.m"
    {
#line 1208 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 328, (MR_Integer) 330, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_628_628, &libs__handle_options__STATE_VARIABLE_Globals_633_633);
    }
#line 1210 "handle_options.m"
    {
#line 1210 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 332, (MR_Integer) 331, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_633_633, &libs__handle_options__STATE_VARIABLE_Globals_638_638);
    }
#line 1218 "handle_options.m"
    {
#line 1218 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 330, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_638_638, &libs__handle_options__STATE_VARIABLE_Globals_642_642);
    }
#line 1220 "handle_options.m"
    {
#line 1220 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 115, (MR_Integer) 116, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_642_642, &libs__handle_options__STATE_VARIABLE_Globals_647_647);
    }
#line 1222 "handle_options.m"
    {
#line 1222 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 49, (MR_Integer) 48, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_647_647, &libs__handle_options__STATE_VARIABLE_Globals_652_652);
    }
#line 1229 "handle_options.m"
    {
#line 1229 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 91, (MR_Integer) 115, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_652_652, &libs__handle_options__STATE_VARIABLE_Globals_657_657);
    }
#line 1231 "handle_options.m"
    {
#line 1231 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 93, (MR_Integer) 115, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_657_657, &libs__handle_options__STATE_VARIABLE_Globals_662_662);
    }
#line 1233 "handle_options.m"
    {
#line 1233 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 92, (MR_Integer) 115, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_662_662, &libs__handle_options__STATE_VARIABLE_Globals_667_667);
    }
#line 1235 "handle_options.m"
    {
#line 1235 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 96, (MR_Integer) 115, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_667_667, &libs__handle_options__STATE_VARIABLE_Globals_672_672);
    }
#line 1237 "handle_options.m"
    {
#line 1237 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 86, (MR_Integer) 115, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_672_672, &libs__handle_options__STATE_VARIABLE_Globals_677_677);
    }
#line 1239 "handle_options.m"
    {
#line 1239 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 85, (MR_Integer) 115, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_677_677, &libs__handle_options__STATE_VARIABLE_Globals_682_682);
    }
#line 1241 "handle_options.m"
    {
#line 1241 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 84, (MR_Integer) 115, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_682_682, &libs__handle_options__STATE_VARIABLE_Globals_687_687);
    }
#line 1243 "handle_options.m"
    {
#line 1243 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 90, (MR_Integer) 115, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_687_687, &libs__handle_options__STATE_VARIABLE_Globals_692_692);
    }
#line 1245 "handle_options.m"
    {
#line 1245 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 102, (MR_Integer) 115, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_692_692, &libs__handle_options__STATE_VARIABLE_Globals_697_697);
    }
#line 1247 "handle_options.m"
    {
#line 1247 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 87, (MR_Integer) 115, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_697_697, &libs__handle_options__STATE_VARIABLE_Globals_702_702);
    }
#line 1249 "handle_options.m"
    {
#line 1249 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 88, (MR_Integer) 115, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_702_702, &libs__handle_options__STATE_VARIABLE_Globals_707_707);
    }
#line 1251 "handle_options.m"
    {
#line 1251 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 89, (MR_Integer) 115, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_707_707, &libs__handle_options__STATE_VARIABLE_Globals_712_712);
    }
#line 1253 "handle_options.m"
    {
#line 1253 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 98, (MR_Integer) 115, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_712_712, &libs__handle_options__STATE_VARIABLE_Globals_717_717);
    }
#line 1255 "handle_options.m"
    {
#line 1255 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 97, (MR_Integer) 115, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_717_717, &libs__handle_options__STATE_VARIABLE_Globals_722_722);
    }
#line 1261 "handle_options.m"
    {
#line 1261 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 86, (MR_Integer) 137, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_722_722, &libs__handle_options__STATE_VARIABLE_Globals_727_727);
    }
#line 1263 "handle_options.m"
    {
#line 1263 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 85, (MR_Integer) 137, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_727_727, &libs__handle_options__STATE_VARIABLE_Globals_732_732);
    }
#line 1265 "handle_options.m"
    {
#line 1265 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 84, (MR_Integer) 137, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_732_732, &libs__handle_options__STATE_VARIABLE_Globals_737_737);
    }
#line 1267 "handle_options.m"
    {
#line 1267 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 87, (MR_Integer) 137, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_737_737, &libs__handle_options__STATE_VARIABLE_Globals_742_742);
    }
#line 1269 "handle_options.m"
    {
#line 1269 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 88, (MR_Integer) 137, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_742_742, &libs__handle_options__STATE_VARIABLE_Globals_747_747);
    }
#line 1274 "handle_options.m"
    {
#line 1274 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 84, (MR_Integer) 116, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_747_747, &libs__handle_options__STATE_VARIABLE_Globals_752_752);
    }
#line 1281 "handle_options.m"
    {
#line 1281 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 90, (MR_Integer) 328, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_752_752, &libs__handle_options__STATE_VARIABLE_Globals_757_757);
    }
#line 1289 "handle_options.m"
    {
#line 1289 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_757_757, (MR_Integer) 115, &libs__handle_options__Smart_77);
    }
#line 1290 "handle_options.m"
    {
#line 1290 "handle_options.m"
      libs__handle_options__maybe_disable_smart_recompilation_8_p_0(libs__handle_options__Smart_77, (MR_Integer) 328, (MR_Integer) 1, (MR_String) "\140--intermodule-optimization\'", libs__handle_options__STATE_VARIABLE_Globals_757_757, &libs__handle_options__STATE_VARIABLE_Globals_763_763);
    }
#line 1292 "handle_options.m"
    {
#line 1292 "handle_options.m"
      libs__handle_options__maybe_disable_smart_recompilation_8_p_0(libs__handle_options__Smart_77, (MR_Integer) 330, (MR_Integer) 1, (MR_String) "\140--use-opt-files\'", libs__handle_options__STATE_VARIABLE_Globals_763_763, &libs__handle_options__STATE_VARIABLE_Globals_768_768);
    }
#line 1301 "handle_options.m"
    {
#line 1301 "handle_options.m"
      libs__handle_options__maybe_disable_smart_recompilation_8_p_0(libs__handle_options__Smart_77, (MR_Integer) 99, (MR_Integer) 0, (MR_String) "\140--no-target-code-only\'", libs__handle_options__STATE_VARIABLE_Globals_768_768, &libs__handle_options__STATE_VARIABLE_Globals_773_773);
    }
#line 1304 "handle_options.m"
    {
#line 1304 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 647, (MR_Integer) 646, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_773_773, &libs__handle_options__STATE_VARIABLE_Globals_778_778);
    }
#line 1306 "handle_options.m"
    {
#line 1306 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 46, (MR_Integer) 45, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_778_778, &libs__handle_options__STATE_VARIABLE_Globals_783_783);
    }
#line 1307 "handle_options.m"
    {
#line 1307 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 45, (MR_Integer) 51, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_783_783, &libs__handle_options__STATE_VARIABLE_Globals_788_788);
    }
#line 1308 "handle_options.m"
    {
#line 1308 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_788_788, (MR_Integer) 46, &libs__handle_options__VeryVerbose_78);
    }
#line 1309 "handle_options.m"
    {
#line 1309 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_788_788, (MR_Integer) 55, &libs__handle_options__Statistics_79);
    }
#line 1311 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__VeryVerbose_78 == (MR_Integer) 1);
#line 1311 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1312 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__Statistics_79 == (MR_Integer) 1);
#line 1315 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1314 "handle_options.m"
      {
#line 1314 "handle_options.m"
        {
#line 1314 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 56, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]), libs__handle_options__STATE_VARIABLE_Globals_788_788, &libs__handle_options__STATE_VARIABLE_Globals_794_794);
        }
#line 1314 "handle_options.m"
      }
#line 1315 "handle_options.m"
    else
#line 1315 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_794_794 = libs__handle_options__STATE_VARIABLE_Globals_788_788;
#line 1319 "handle_options.m"
    {
#line 1319 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 62, (MR_Integer) 60, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_794_794, &libs__handle_options__STATE_VARIABLE_Globals_799_799);
    }
#line 1320 "handle_options.m"
    {
#line 1320 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 63, (MR_Integer) 60, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_799_799, &libs__handle_options__STATE_VARIABLE_Globals_804_804);
    }
#line 1321 "handle_options.m"
    {
#line 1321 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 61, (MR_Integer) 60, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_804_804, &libs__handle_options__STATE_VARIABLE_Globals_809_809);
    }
#line 1324 "handle_options.m"
    {
#line 1324 "handle_options.m"
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_809_809, (MR_Integer) 74, &libs__handle_options__DebugLiveness_80);
    }
#line 1326 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__DebugLiveness_80 >= (MR_Integer) 0);
#line 1326 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1326 "handle_options.m"
      {
#line 1327 "handle_options.m"
        libs__handle_options__V_813_813 = (MR_String) "all";
#line 1327 "handle_options.m"
        {
#line 1327 "handle_options.m"
          libs__handle_options__succeeded = libs__handle_options__convert_dump_alias_2_p_0(libs__handle_options__V_813_813, &libs__handle_options__AllDumpOptions_81);
        }
#line 1326 "handle_options.m"
      }
#line 1338 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1334 "handle_options.m"
      {
#line 1334 "handle_options.m"
        MR_String libs__handle_options__DumpOptions0_82;
#line 1334 "handle_options.m"
        MR_String libs__handle_options__DumpOptions1_83;
#line 1334 "handle_options.m"
        MR_Word libs__handle_options__V_816_816;

#line 1333 "handle_options.m"
        {
#line 1333 "handle_options.m"
          libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_809_809, (MR_Integer) 150, &libs__handle_options__DumpOptions0_82);
        }
#line 1335 "handle_options.m"
        {
#line 1335 "handle_options.m"
          mercury__string__append_3_p_2(libs__handle_options__DumpOptions0_82, libs__handle_options__AllDumpOptions_81, &libs__handle_options__DumpOptions1_83);
        }
#line 1336 "handle_options.m"
        {
#line 1336 "handle_options.m"
          libs__handle_options__V_816_816 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1336 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_816_816, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1336 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_816_816, 1) = ((MR_Box) (libs__handle_options__DumpOptions1_83));
#line 1336 "handle_options.m"
        }
#line 1336 "handle_options.m"
        {
#line 1336 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 150, libs__handle_options__V_816_816, libs__handle_options__STATE_VARIABLE_Globals_809_809, &libs__handle_options__STATE_VARIABLE_Globals_817_817);
        }
#line 1334 "handle_options.m"
      }
#line 1338 "handle_options.m"
    else
#line 1338 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_817_817 = libs__handle_options__STATE_VARIABLE_Globals_809_809;
#line 1342 "handle_options.m"
    {
#line 1342 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 63, (MR_Integer) 60, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_817_817, &libs__handle_options__STATE_VARIABLE_Globals_821_821);
    }
#line 1343 "handle_options.m"
    {
#line 1343 "handle_options.m"
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_821_821, (MR_Integer) 64, &libs__handle_options__DebugModesPredId_84);
    }
#line 1345 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__DebugModesPredId_84 > (MR_Integer) 0);
#line 1347 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1346 "handle_options.m"
      {
#line 1346 "handle_options.m"
        {
#line 1346 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 60, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_821_821, &libs__handle_options__STATE_VARIABLE_Globals_827_827);
        }
#line 1346 "handle_options.m"
      }
#line 1347 "handle_options.m"
    else
#line 1347 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_827_827 = libs__handle_options__STATE_VARIABLE_Globals_821_821;
#line 1351 "handle_options.m"
    {
#line 1351 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_827_827, (MR_Integer) 360, &libs__handle_options__DebugUnneededCodePredNames_85);
    }
#line 1355 "handle_options.m"
    if ((libs__handle_options__DebugUnneededCodePredNames_85 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1354 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_832_832 = libs__handle_options__STATE_VARIABLE_Globals_827_827;
#line 1355 "handle_options.m"
    else
#line 1356 "handle_options.m"
      {
#line 1357 "handle_options.m"
        {
#line 1357 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 359, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_827_827, &libs__handle_options__STATE_VARIABLE_Globals_832_832);
        }
#line 1356 "handle_options.m"
      }
#line 1360 "handle_options.m"
    {
#line 1360 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_832_832, (MR_Integer) 70, &libs__handle_options__DebugOptPredIdStrs_88);
    }
#line 1362 "handle_options.m"
    {
#line 1362 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_832_832, (MR_Integer) 71, &libs__handle_options__DebugOptPredNames_89);
    }
#line 1365 "handle_options.m"
    {
#line 1365 "handle_options.m"
      MR_String libs__handle_options__V_90_90;
#line 1365 "handle_options.m"
      MR_Word libs__handle_options__V_91_91;

#line 1365 "handle_options.m"
      libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DebugOptPredIdStrs_88)) == (MR_mktag((MR_Integer) 1)));
#line 1365 "handle_options.m"
      if (libs__handle_options__succeeded)
#line 1365 "handle_options.m"
        {
#line 1365 "handle_options.m"
          libs__handle_options__V_90_90 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredIdStrs_88, (MR_Integer) 0)));
#line 1365 "handle_options.m"
          libs__handle_options__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredIdStrs_88, (MR_Integer) 1)));
#line 1365 "handle_options.m"
        }
#line 1365 "handle_options.m"
    }
#line 1366 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 1366 "handle_options.m"
      {
#line 1366 "handle_options.m"
        MR_String libs__handle_options__V_92_92;
#line 1366 "handle_options.m"
        MR_Word libs__handle_options__V_93_93;

#line 1366 "handle_options.m"
        libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DebugOptPredNames_89)) == (MR_mktag((MR_Integer) 1)));
#line 1366 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1366 "handle_options.m"
          {
#line 1366 "handle_options.m"
            libs__handle_options__V_92_92 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredNames_89, (MR_Integer) 0)));
#line 1366 "handle_options.m"
            libs__handle_options__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredNames_89, (MR_Integer) 1)));
#line 1366 "handle_options.m"
          }
#line 1366 "handle_options.m"
      }
#line 1370 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1369 "handle_options.m"
      {
#line 1369 "handle_options.m"
        {
#line 1369 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 68, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_832_832, &libs__handle_options__STATE_VARIABLE_Globals_838_838);
        }
#line 1369 "handle_options.m"
      }
#line 1370 "handle_options.m"
    else
#line 1370 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_838_838 = libs__handle_options__STATE_VARIABLE_Globals_832_832;
#line 1374 "handle_options.m"
    {
#line 1374 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_838_838, (MR_Integer) 80, &libs__handle_options__DebugIntermoduleAnalysis_94);
    }
#line 1376 "handle_options.m"
    {
#line 1376 "handle_options.m"
      analysis__enable_debug_messages_3_p_0(libs__handle_options__DebugIntermoduleAnalysis_94);
    }
#line 1378 "handle_options.m"
    {
#line 1378 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_838_838, (MR_Integer) 146, &libs__handle_options__DumpHLDSPredIds_95);
    }
#line 1389 "handle_options.m"
    if ((libs__handle_options__DumpHLDSPredIds_95 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1390 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_850_850 = libs__handle_options__STATE_VARIABLE_Globals_838_838;
#line 1389 "handle_options.m"
    else
#line 1381 "handle_options.m"
      {
#line 1381 "handle_options.m"
        MR_String libs__handle_options__DumpOptions2_98;
#line 1381 "handle_options.m"
        MR_String libs__handle_options__DumpOptions3_99;
#line 1381 "handle_options.m"
        MR_String libs__handle_options__DumpOptions_100;
#line 1381 "handle_options.m"
        MR_Word libs__handle_options__V_849_849;

#line 1382 "handle_options.m"
        {
#line 1382 "handle_options.m"
          libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_838_838, (MR_Integer) 150, &libs__handle_options__DumpOptions2_98);
        }
#line 1385 "handle_options.m"
        {
#line 1385 "handle_options.m"
          mercury__string__replace_all_4_p_0(libs__handle_options__DumpOptions2_98, (MR_String) "M", (MR_String) "", &libs__handle_options__DumpOptions3_99);
        }
#line 1386 "handle_options.m"
        {
#line 1386 "handle_options.m"
          mercury__string__replace_all_4_p_0(libs__handle_options__DumpOptions3_99, (MR_String) "T", (MR_String) "", &libs__handle_options__DumpOptions_100);
        }
#line 1387 "handle_options.m"
        {
#line 1387 "handle_options.m"
          libs__handle_options__V_849_849 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1387 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_849_849, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1387 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_849_849, 1) = ((MR_Box) (libs__handle_options__DumpOptions_100));
#line 1387 "handle_options.m"
        }
#line 1387 "handle_options.m"
        {
#line 1387 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 150, libs__handle_options__V_849_849, libs__handle_options__STATE_VARIABLE_Globals_838_838, &libs__handle_options__STATE_VARIABLE_Globals_850_850);
        }
#line 1381 "handle_options.m"
      }
#line 1393 "handle_options.m"
    {
#line 1393 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 79, (MR_Integer) 158, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_850_850, &libs__handle_options__STATE_VARIABLE_Globals_854_854);
    }
#line 1395 "handle_options.m"
    {
#line 1395 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 158, (MR_Integer) 156, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_854_854, &libs__handle_options__STATE_VARIABLE_Globals_859_859);
    }
#line 1397 "handle_options.m"
    {
#line 1397 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 157, (MR_Integer) 156, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_859_859, &libs__handle_options__STATE_VARIABLE_Globals_864_864);
    }
#line 1400 "handle_options.m"
    {
#line 1400 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 140, (MR_Integer) 139, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_864_864, &libs__handle_options__STATE_VARIABLE_Globals_869_869);
    }
#line 1405 "handle_options.m"
    {
#line 1405 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_869_869, (MR_Integer) 218, &libs__handle_options__UseTrail_101);
    }
#line 1406 "handle_options.m"
    {
#line 1406 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_869_869, (MR_Integer) 254, &libs__handle_options__HighLevelCode_102);
    }
#line 1407 "handle_options.m"
    {
#line 1407 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_869_869, (MR_Integer) 220, &libs__handle_options__UseMinimalModelStackCopy_103);
    }
#line 1409 "handle_options.m"
    {
#line 1409 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_869_869, (MR_Integer) 221, &libs__handle_options__UseMinimalModelOwnStacks_104);
    }
#line 1411 "handle_options.m"
    {
#line 1411 "handle_options.m"
      mercury__bool__or_3_p_0(libs__handle_options__UseMinimalModelStackCopy_103, libs__handle_options__UseMinimalModelOwnStacks_104, &libs__handle_options__UseMinimalModel_105);
    }
#line 1414 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelStackCopy_103 == (MR_Integer) 1);
#line 1414 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1415 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelOwnStacks_104 == (MR_Integer) 1);
#line 1419 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1417 "handle_options.m"
      {
#line 1417 "handle_options.m"
        {
#line 1417 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "can\'t use both forms of minimal model tabling at once", libs__handle_options__STATE_VARIABLE_Errors_577_577, &libs__handle_options__STATE_VARIABLE_Errors_876_876);
        }
#line 1417 "handle_options.m"
      }
#line 1419 "handle_options.m"
    else
#line 1425 "handle_options.m"
      {
#line 1420 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__UseMinimalModel_105 == (MR_Integer) 1);
#line 1420 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1421 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_102 == (MR_Integer) 1);
#line 1425 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1423 "handle_options.m"
          {
#line 1423 "handle_options.m"
            {
#line 1423 "handle_options.m"
              libs__handle_options__add_error_3_p_0((MR_String) "minimal model tabling is incompatible with high level code", libs__handle_options__STATE_VARIABLE_Errors_577_577, &libs__handle_options__STATE_VARIABLE_Errors_876_876);
            }
#line 1423 "handle_options.m"
          }
#line 1425 "handle_options.m"
        else
#line 1431 "handle_options.m"
          {
#line 1426 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__UseMinimalModel_105 == (MR_Integer) 1);
#line 1426 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 1427 "handle_options.m"
              libs__handle_options__succeeded = (libs__handle_options__UseTrail_101 == (MR_Integer) 1);
#line 1431 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 1429 "handle_options.m"
              {
#line 1429 "handle_options.m"
                {
#line 1429 "handle_options.m"
                  libs__handle_options__add_error_3_p_0((MR_String) "minimal model tabling is incompatible with trailing", libs__handle_options__STATE_VARIABLE_Errors_577_577, &libs__handle_options__STATE_VARIABLE_Errors_876_876);
                }
#line 1429 "handle_options.m"
              }
#line 1431 "handle_options.m"
            else
#line 1431 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Errors_876_876 = libs__handle_options__STATE_VARIABLE_Errors_577_577;
#line 1431 "handle_options.m"
          }
#line 1425 "handle_options.m"
      }
#line 1441 "handle_options.m"
    libs__handle_options__V_889_889 = (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[10]);
#line 1441 "handle_options.m"
    {
#line 1441 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 255, (MR_Integer) 246, libs__handle_options__V_889_889, libs__handle_options__STATE_VARIABLE_Globals_869_869, &libs__handle_options__STATE_VARIABLE_Globals_890_890);
    }
#line 1459 "handle_options.m"
    if ((libs__handle_options__Target_26 == (MR_Integer) 0))
#line 1443 "handle_options.m"
      {
#line 1443 "handle_options.m"
        MR_Integer libs__handle_options__ArgPackBits0_106;
#line 1443 "handle_options.m"
        MR_Integer libs__handle_options__BitsPerWord_107;
#line 1443 "handle_options.m"
        MR_Integer libs__handle_options__ArgPackBits_108;
#line 1443 "handle_options.m"
        MR_Word libs__handle_options__V_912_912;

#line 1444 "handle_options.m"
        {
#line 1444 "handle_options.m"
          libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_890_890, (MR_Integer) 246, &libs__handle_options__ArgPackBits0_106);
        }
#line 1445 "handle_options.m"
        {
#line 1445 "handle_options.m"
          libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_890_890, (MR_Integer) 240, &libs__handle_options__BitsPerWord_107);
        }
#line 1447 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__ArgPackBits0_106 < (MR_Integer) 0);
#line 1449 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1448 "handle_options.m"
          libs__handle_options__ArgPackBits_108 = libs__handle_options__BitsPerWord_107;
#line 1449 "handle_options.m"
        else
#line 1455 "handle_options.m"
          {
#line 1449 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__ArgPackBits0_106 > libs__handle_options__BitsPerWord_107);
#line 1455 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 1450 "handle_options.m"
              {
#line 1450 "handle_options.m"
                MR_String libs__handle_options__ProgNameB_109;
#line 1450 "handle_options.m"
                MR_String libs__handle_options__V_1673_1673;

#line 1450 "handle_options.m"
                {
#line 1450 "handle_options.m"
                  mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &libs__handle_options__ProgNameB_109);
                }
#line 1452 "handle_options.m"
                {
#line 1452 "handle_options.m"
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &libs__handle_options_scalar_common_3[9], libs__handle_options__ProgNameB_109, &libs__handle_options__V_1673_1673);
                }
#line 1452 "handle_options.m"
                {
#line 1452 "handle_options.m"
                  mercury__io__write_string_3_p_0(libs__handle_options__V_1673_1673);
                }
#line 1451 "handle_options.m"
                {
#line 1451 "handle_options.m"
                  mercury__io__write_string_3_p_0((MR_String) ": warning: --arg-pack-bits invalid\n");
                }
#line 1453 "handle_options.m"
                {
#line 1453 "handle_options.m"
                  libs__compiler_util__record_warning_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_890_890);
                }
#line 1454 "handle_options.m"
                libs__handle_options__ArgPackBits_108 = libs__handle_options__BitsPerWord_107;
#line 1450 "handle_options.m"
              }
#line 1455 "handle_options.m"
            else
#line 1456 "handle_options.m"
              libs__handle_options__ArgPackBits_108 = libs__handle_options__ArgPackBits0_106;
#line 1455 "handle_options.m"
          }
#line 1458 "handle_options.m"
        {
#line 1458 "handle_options.m"
          libs__handle_options__V_912_912 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1458 "handle_options.m"
          MR_hl_field(MR_mktag(2), libs__handle_options__V_912_912, 0) = ((MR_Box) (libs__handle_options__ArgPackBits_108));
#line 1458 "handle_options.m"
        }
#line 1458 "handle_options.m"
        {
#line 1458 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 246, libs__handle_options__V_912_912, libs__handle_options__STATE_VARIABLE_Globals_890_890, &libs__handle_options__STATE_VARIABLE_Globals_913_913);
        }
#line 1443 "handle_options.m"
      }
#line 1459 "handle_options.m"
    else
#line 1464 "handle_options.m"
      {
#line 1464 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_894_894;

#line 1465 "handle_options.m"
        {
#line 1465 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 246, libs__handle_options__V_889_889, libs__handle_options__STATE_VARIABLE_Globals_890_890, &libs__handle_options__STATE_VARIABLE_Globals_894_894);
        }
#line 1466 "handle_options.m"
        {
#line 1466 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 247, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_894_894, &libs__handle_options__STATE_VARIABLE_Globals_913_913);
        }
#line 1464 "handle_options.m"
      }
#line 1470 "handle_options.m"
    {
#line 1470 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 224, (MR_Integer) 243, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_913_913, &libs__handle_options__STATE_VARIABLE_Globals_917_917);
    }
#line 1475 "handle_options.m"
    {
#line 1475 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 254, (MR_Integer) 253, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_917_917, &libs__handle_options__STATE_VARIABLE_Globals_922_922);
    }
#line 1476 "handle_options.m"
    {
#line 1476 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 243, (MR_Integer) 253, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_922_922, &libs__handle_options__STATE_VARIABLE_Globals_927_927);
    }
#line 1486 "handle_options.m"
    if ((libs__handle_options__Target_26 == (MR_Integer) 0))
#line 1482 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_931_931 = libs__handle_options__STATE_VARIABLE_Globals_927_927;
#line 1486 "handle_options.m"
    else
#line 1486 "handle_options.m"
    if ((libs__handle_options__Target_26 == (MR_Integer) 2))
#line 1483 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_931_931 = libs__handle_options__STATE_VARIABLE_Globals_927_927;
#line 1486 "handle_options.m"
    else
#line 1486 "handle_options.m"
    if ((libs__handle_options__Target_26 == (MR_Integer) 3))
#line 1484 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_931_931 = libs__handle_options__STATE_VARIABLE_Globals_927_927;
#line 1486 "handle_options.m"
    else
#line 1489 "handle_options.m"
      {
#line 1490 "handle_options.m"
        {
#line 1490 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 299, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_927_927, &libs__handle_options__STATE_VARIABLE_Globals_931_931);
        }
#line 1489 "handle_options.m"
      }
#line 1495 "handle_options.m"
    if ((libs__handle_options__Target_26 == (MR_Integer) 2))
#line 1494 "handle_options.m"
      libs__handle_options__succeeded = MR_TRUE;
#line 1495 "handle_options.m"
    else
#line 1495 "handle_options.m"
    if ((libs__handle_options__Target_26 == (MR_Integer) 3))
#line 1495 "handle_options.m"
      libs__handle_options__succeeded = MR_TRUE;
#line 1495 "handle_options.m"
    else
#line 1495 "handle_options.m"
      libs__handle_options__succeeded = MR_FALSE;
#line 1501 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1500 "handle_options.m"
      {
#line 1500 "handle_options.m"
        {
#line 1500 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 439, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[11]), libs__handle_options__STATE_VARIABLE_Globals_931_931, &libs__handle_options__STATE_VARIABLE_Globals_935_935);
        }
#line 1500 "handle_options.m"
      }
#line 1501 "handle_options.m"
    else
#line 1501 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_935_935 = libs__handle_options__STATE_VARIABLE_Globals_931_931;
#line 1505 "handle_options.m"
    {
#line 1505 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 487, (MR_Integer) 563, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_935_935, &libs__handle_options__STATE_VARIABLE_Globals_940_940);
    }
#line 1508 "handle_options.m"
    {
#line 1508 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 208, (MR_Integer) 199, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_940_940, &libs__handle_options__STATE_VARIABLE_Globals_945_945);
    }
#line 1513 "handle_options.m"
    {
#line 1513 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 199, (MR_Integer) 211, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_945_945, &libs__handle_options__STATE_VARIABLE_Globals_950_950);
    }
#line 1523 "handle_options.m"
    {
#line 1523 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 208, (MR_Integer) 128, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_950_950, &libs__handle_options__STATE_VARIABLE_Globals_955_955);
    }
#line 1524 "handle_options.m"
    {
#line 1524 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_955_955, (MR_Integer) 128, &libs__handle_options__ProfOptimized_110);
    }
#line 1528 "handle_options.m"
    if ((libs__handle_options__ProfOptimized_110 == (MR_Integer) 0))
#line 1526 "handle_options.m"
      {
#line 1527 "handle_options.m"
        {
#line 1527 "handle_options.m"
          libs__handle_options__option_implies_5_p_0((MR_Integer) 195, (MR_Integer) 336, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_955_955, &libs__handle_options__STATE_VARIABLE_Globals_961_961);
        }
#line 1526 "handle_options.m"
      }
#line 1528 "handle_options.m"
    else
#line 1529 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_961_961 = libs__handle_options__STATE_VARIABLE_Globals_955_955;
#line 1534 "handle_options.m"
    {
#line 1534 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 195, (MR_Integer) 197, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_961_961, &libs__handle_options__STATE_VARIABLE_Globals_966_966);
    }
#line 1536 "handle_options.m"
    {
#line 1536 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 212, (MR_Integer) 197, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_966_966, &libs__handle_options__STATE_VARIABLE_Globals_971_971);
    }
#line 1538 "handle_options.m"
    {
#line 1538 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 213, (MR_Integer) 197, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_971_971, &libs__handle_options__STATE_VARIABLE_Globals_976_976);
    }
#line 1541 "handle_options.m"
    {
#line 1541 "handle_options.m"
      libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_976_976, (MR_Integer) 214, &libs__handle_options__ExpComp_111);
    }
#line 1543 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__ExpComp_111, (MR_String) "") == 0);
#line 1545 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1545 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_981_981 = libs__handle_options__STATE_VARIABLE_Globals_976_976;
#line 1545 "handle_options.m"
    else
#line 1546 "handle_options.m"
      {
#line 1546 "handle_options.m"
        {
#line 1546 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 336, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_976_976, &libs__handle_options__STATE_VARIABLE_Globals_981_981);
        }
#line 1546 "handle_options.m"
      }
#line 1550 "handle_options.m"
    {
#line 1550 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 187, (MR_Integer) 186, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_981_981, &libs__handle_options__STATE_VARIABLE_Globals_986_986);
    }
#line 1553 "handle_options.m"
    {
#line 1553 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 233, (MR_Integer) 235, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_986_986, &libs__handle_options__STATE_VARIABLE_Globals_991_991);
    }
#line 1559 "handle_options.m"
    {
#line 1559 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 186, (MR_Integer) 266, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_991_991, &libs__handle_options__STATE_VARIABLE_Globals_996_996);
    }
#line 1560 "handle_options.m"
    {
#line 1560 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 195, (MR_Integer) 266, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_996_996, &libs__handle_options__STATE_VARIABLE_Globals_1001_1001);
    }
#line 1566 "handle_options.m"
    {
#line 1566 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 195, (MR_Integer) 319, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1001_1001, &libs__handle_options__STATE_VARIABLE_Globals_1006_1006);
    }
#line 1571 "handle_options.m"
    {
#line 1571 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 186, (MR_Integer) 126, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1006_1006, &libs__handle_options__STATE_VARIABLE_Globals_1011_1011);
    }
#line 1574 "handle_options.m"
    {
#line 1574 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 126, (MR_Integer) 122, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1011_1011, &libs__handle_options__STATE_VARIABLE_Globals_1016_1016);
    }
#line 1578 "handle_options.m"
    {
#line 1578 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 125, (MR_Integer) 122, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1016_1016, &libs__handle_options__STATE_VARIABLE_Globals_1021_1021);
    }
#line 1588 "handle_options.m"
    {
#line 1588 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1021_1021, (MR_Integer) 120, &libs__handle_options__TraceOptimized_112);
    }
#line 1589 "handle_options.m"
    {
#line 1589 "handle_options.m"
      libs__handle_options__V_1024_1024 = libs__trace_params__given_trace_level_is_none_1_f_0(libs__handle_options__TraceLevel_31);
    }
#line 1589 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__V_1024_1024 == (MR_Integer) 0);
#line 1683 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1632 "handle_options.m"
      {
#line 1632 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1083_1083;
#line 1632 "handle_options.m"
        MR_Word libs__handle_options__V_1086_1086;
#line 1632 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1087_1087;
#line 1632 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1091_1091;
#line 1632 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1095_1095;
#line 1632 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1099_1099;
#line 1632 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1103_1103;
#line 1632 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1107_1107;
#line 1632 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1111_1111;
#line 1678 "handle_options.m"
        MR_Word libs__handle_options__V_1113_1113;

#line 1630 "handle_options.m"
        if ((libs__handle_options__TraceOptimized_112 == (MR_Integer) 0))
#line 1591 "handle_options.m"
          {
#line 1591 "handle_options.m"
            MR_Word libs__handle_options__V_1026_1026 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 1591 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1027_1027;
#line 1591 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1031_1031;
#line 1591 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1035_1035;
#line 1591 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1039_1039;
#line 1591 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1043_1043;
#line 1591 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1047_1047;
#line 1591 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1051_1051;
#line 1591 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1055_1055;
#line 1591 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1059_1059;
#line 1591 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1063_1063;
#line 1591 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1067_1067;
#line 1591 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1071_1071;
#line 1591 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1075_1075;
#line 1591 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1079_1079;

#line 1596 "handle_options.m"
            {
#line 1596 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 336, libs__handle_options__V_1026_1026, libs__handle_options__STATE_VARIABLE_Globals_1021_1021, &libs__handle_options__STATE_VARIABLE_Globals_1027_1027);
            }
#line 1597 "handle_options.m"
            {
#line 1597 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 352, libs__handle_options__V_1026_1026, libs__handle_options__STATE_VARIABLE_Globals_1027_1027, &libs__handle_options__STATE_VARIABLE_Globals_1031_1031);
            }
#line 1598 "handle_options.m"
            {
#line 1598 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 354, libs__handle_options__V_1026_1026, libs__handle_options__STATE_VARIABLE_Globals_1031_1031, &libs__handle_options__STATE_VARIABLE_Globals_1035_1035);
            }
#line 1599 "handle_options.m"
            {
#line 1599 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 361, libs__handle_options__V_1026_1026, libs__handle_options__STATE_VARIABLE_Globals_1035_1035, &libs__handle_options__STATE_VARIABLE_Globals_1039_1039);
            }
#line 1600 "handle_options.m"
            {
#line 1600 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 362, libs__handle_options__V_1026_1026, libs__handle_options__STATE_VARIABLE_Globals_1039_1039, &libs__handle_options__STATE_VARIABLE_Globals_1043_1043);
            }
#line 1602 "handle_options.m"
            {
#line 1602 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 390, libs__handle_options__V_1026_1026, libs__handle_options__STATE_VARIABLE_Globals_1043_1043, &libs__handle_options__STATE_VARIABLE_Globals_1047_1047);
            }
#line 1603 "handle_options.m"
            {
#line 1603 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 350, libs__handle_options__V_1026_1026, libs__handle_options__STATE_VARIABLE_Globals_1047_1047, &libs__handle_options__STATE_VARIABLE_Globals_1051_1051);
            }
#line 1605 "handle_options.m"
            {
#line 1605 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 351, libs__handle_options__V_1026_1026, libs__handle_options__STATE_VARIABLE_Globals_1051_1051, &libs__handle_options__STATE_VARIABLE_Globals_1055_1055);
            }
#line 1607 "handle_options.m"
            {
#line 1607 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 367, libs__handle_options__V_1026_1026, libs__handle_options__STATE_VARIABLE_Globals_1055_1055, &libs__handle_options__STATE_VARIABLE_Globals_1059_1059);
            }
#line 1609 "handle_options.m"
            {
#line 1609 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 366, libs__handle_options__V_1026_1026, libs__handle_options__STATE_VARIABLE_Globals_1059_1059, &libs__handle_options__STATE_VARIABLE_Globals_1063_1063);
            }
#line 1611 "handle_options.m"
            {
#line 1611 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 372, libs__handle_options__V_1026_1026, libs__handle_options__STATE_VARIABLE_Globals_1063_1063, &libs__handle_options__STATE_VARIABLE_Globals_1067_1067);
            }
#line 1613 "handle_options.m"
            {
#line 1613 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 386, libs__handle_options__V_1026_1026, libs__handle_options__STATE_VARIABLE_Globals_1067_1067, &libs__handle_options__STATE_VARIABLE_Globals_1071_1071);
            }
#line 1614 "handle_options.m"
            {
#line 1614 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 399, libs__handle_options__V_1026_1026, libs__handle_options__STATE_VARIABLE_Globals_1071_1071, &libs__handle_options__STATE_VARIABLE_Globals_1075_1075);
            }
#line 1615 "handle_options.m"
            {
#line 1615 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 400, libs__handle_options__V_1026_1026, libs__handle_options__STATE_VARIABLE_Globals_1075_1075, &libs__handle_options__STATE_VARIABLE_Globals_1079_1079);
            }
#line 1623 "handle_options.m"
            if ((libs__handle_options__Target_26 == (MR_Integer) 0))
#line 1624 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_1083_1083 = libs__handle_options__STATE_VARIABLE_Globals_1079_1079;
#line 1623 "handle_options.m"
            else
#line 1623 "handle_options.m"
            if ((libs__handle_options__Target_26 == (MR_Integer) 2))
#line 1625 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_1083_1083 = libs__handle_options__STATE_VARIABLE_Globals_1079_1079;
#line 1623 "handle_options.m"
            else
#line 1623 "handle_options.m"
            if ((libs__handle_options__Target_26 == (MR_Integer) 4))
#line 1627 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_1083_1083 = libs__handle_options__STATE_VARIABLE_Globals_1079_1079;
#line 1623 "handle_options.m"
            else
#line 1623 "handle_options.m"
            if ((libs__handle_options__Target_26 == (MR_Integer) 1))
#line 1621 "handle_options.m"
              {
#line 1622 "handle_options.m"
                {
#line 1622 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 464, libs__handle_options__V_1026_1026, libs__handle_options__STATE_VARIABLE_Globals_1079_1079, &libs__handle_options__STATE_VARIABLE_Globals_1083_1083);
                }
#line 1621 "handle_options.m"
              }
#line 1623 "handle_options.m"
            else
#line 1626 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_1083_1083 = libs__handle_options__STATE_VARIABLE_Globals_1079_1079;
#line 1591 "handle_options.m"
          }
#line 1630 "handle_options.m"
        else
#line 1631 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1083_1083 = libs__handle_options__STATE_VARIABLE_Globals_1021_1021;
#line 1653 "handle_options.m"
        libs__handle_options__V_1086_1086 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 1653 "handle_options.m"
        {
#line 1653 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 456, libs__handle_options__V_1086_1086, libs__handle_options__STATE_VARIABLE_Globals_1083_1083, &libs__handle_options__STATE_VARIABLE_Globals_1087_1087);
        }
#line 1658 "handle_options.m"
        {
#line 1658 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 369, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1087_1087, &libs__handle_options__STATE_VARIABLE_Globals_1091_1091);
        }
#line 1662 "handle_options.m"
        {
#line 1662 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 388, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1091_1091, &libs__handle_options__STATE_VARIABLE_Globals_1095_1095);
        }
#line 1666 "handle_options.m"
        {
#line 1666 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 454, libs__handle_options__V_1086_1086, libs__handle_options__STATE_VARIABLE_Globals_1095_1095, &libs__handle_options__STATE_VARIABLE_Globals_1099_1099);
        }
#line 1670 "handle_options.m"
        {
#line 1670 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 270, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1099_1099, &libs__handle_options__STATE_VARIABLE_Globals_1103_1103);
        }
#line 1671 "handle_options.m"
        {
#line 1671 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 271, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1103_1103, &libs__handle_options__STATE_VARIABLE_Globals_1107_1107);
        }
#line 1675 "handle_options.m"
        {
#line 1675 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 324, libs__handle_options__V_1086_1086, libs__handle_options__STATE_VARIABLE_Globals_1107_1107, &libs__handle_options__STATE_VARIABLE_Globals_1111_1111);
        }
#line 1678 "handle_options.m"
        {
#line 1678 "handle_options.m"
          libs__handle_options__V_1113_1113 = libs__trace_params__trace_level_allows_tail_rec_1_f_0(libs__handle_options__TraceLevel_31);
        }
#line 1678 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__V_1113_1113 == (MR_Integer) 0);
#line 1680 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1679 "handle_options.m"
          {
#line 1679 "handle_options.m"
            {
#line 1679 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 129, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), libs__handle_options__STATE_VARIABLE_Globals_1111_1111, &libs__handle_options__STATE_VARIABLE_Globals_1116_1116);
            }
#line 1679 "handle_options.m"
          }
#line 1680 "handle_options.m"
        else
#line 1680 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1116_1116 = libs__handle_options__STATE_VARIABLE_Globals_1111_1111;
#line 1632 "handle_options.m"
      }
#line 1683 "handle_options.m"
    else
#line 1686 "handle_options.m"
      {
#line 1686 "handle_options.m"
        {
#line 1686 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 129, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1021_1021, &libs__handle_options__STATE_VARIABLE_Globals_1116_1116);
        }
#line 1686 "handle_options.m"
      }
#line 1689 "handle_options.m"
    {
#line 1689 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 195, (MR_Integer) 269, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1116_1116, &libs__handle_options__STATE_VARIABLE_Globals_1125_1125);
    }
#line 1690 "handle_options.m"
    {
#line 1690 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1125_1125, (MR_Integer) 195, &libs__handle_options__ProfileDeep_113);
    }
#line 1715 "handle_options.m"
    if ((libs__handle_options__ProfileDeep_113 == (MR_Integer) 0))
#line 1716 "handle_options.m"
      {
#line 1716 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_1129_1129 = libs__handle_options__STATE_VARIABLE_Errors_876_876;
#line 1716 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1142_1142 = libs__handle_options__STATE_VARIABLE_Globals_1125_1125;
#line 1716 "handle_options.m"
      }
#line 1715 "handle_options.m"
    else
#line 1692 "handle_options.m"
      {
#line 1692 "handle_options.m"
        MR_Word libs__handle_options__LotsOfHOSpec_114;
#line 1692 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1134_1134;

#line 1694 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_102 == (MR_Integer) 0);
#line 1694 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1695 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__Target_26 == (MR_Integer) 0);
#line 1698 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1698 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Errors_1129_1129 = libs__handle_options__STATE_VARIABLE_Errors_876_876;
#line 1698 "handle_options.m"
        else
#line 1699 "handle_options.m"
          {
#line 1699 "handle_options.m"
            {
#line 1699 "handle_options.m"
              libs__handle_options__add_error_3_p_0((MR_String) "deep profiling is incompatible with high level code", libs__handle_options__STATE_VARIABLE_Errors_876_876, &libs__handle_options__STATE_VARIABLE_Errors_1129_1129);
            }
#line 1699 "handle_options.m"
          }
#line 1702 "handle_options.m"
        {
#line 1702 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 366, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1125_1125, &libs__handle_options__STATE_VARIABLE_Globals_1134_1134);
        }
#line 1704 "handle_options.m"
        {
#line 1704 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1134_1134, (MR_Integer) 210, &libs__handle_options__LotsOfHOSpec_114);
        }
#line 1712 "handle_options.m"
        if ((libs__handle_options__LotsOfHOSpec_114 == (MR_Integer) 0))
#line 1713 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1142_1142 = libs__handle_options__STATE_VARIABLE_Globals_1134_1134;
#line 1712 "handle_options.m"
        else
#line 1707 "handle_options.m"
          {
#line 1707 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1139_1139;

#line 1709 "handle_options.m"
            {
#line 1709 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 354, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1134_1134, &libs__handle_options__STATE_VARIABLE_Globals_1139_1139);
            }
#line 1710 "handle_options.m"
            {
#line 1710 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 355, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[11]), libs__handle_options__STATE_VARIABLE_Globals_1139_1139, &libs__handle_options__STATE_VARIABLE_Globals_1142_1142);
            }
#line 1707 "handle_options.m"
          }
#line 1692 "handle_options.m"
      }
#line 1719 "handle_options.m"
    {
#line 1719 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1142_1142, (MR_Integer) 212, &libs__handle_options__RecordTermSizesAsWords_116);
    }
#line 1721 "handle_options.m"
    {
#line 1721 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1142_1142, (MR_Integer) 213, &libs__handle_options__RecordTermSizesAsCells_117);
    }
#line 1724 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsWords_116 == (MR_Integer) 1);
#line 1724 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1725 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsCells_117 == (MR_Integer) 1);
#line 1729 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1727 "handle_options.m"
      {
#line 1727 "handle_options.m"
        {
#line 1727 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "we can\'t record term size as both words and cells", libs__handle_options__STATE_VARIABLE_Errors_1129_1129, &libs__handle_options__STATE_VARIABLE_Errors_1147_1147);
        }
#line 1727 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1156_1156 = libs__handle_options__STATE_VARIABLE_Globals_1142_1142;
#line 1727 "handle_options.m"
      }
#line 1729 "handle_options.m"
    else
#line 1747 "handle_options.m"
      {
#line 1730 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsWords_116 == (MR_Integer) 1);
#line 1731 "handle_options.m"
        if (!(libs__handle_options__succeeded))
#line 1731 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsCells_117 == (MR_Integer) 1);
#line 1747 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1735 "handle_options.m"
          {
#line 1735 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1152_1152;

#line 1734 "handle_options.m"
            {
#line 1734 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 366, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1142_1142, &libs__handle_options__STATE_VARIABLE_Globals_1152_1152);
            }
#line 1738 "handle_options.m"
            {
#line 1738 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 247, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1152_1152, &libs__handle_options__STATE_VARIABLE_Globals_1156_1156);
            }
#line 1744 "handle_options.m"
            if ((libs__handle_options__HighLevelCode_102 == (MR_Integer) 0))
#line 1745 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Errors_1147_1147 = libs__handle_options__STATE_VARIABLE_Errors_1129_1129;
#line 1744 "handle_options.m"
            else
#line 1741 "handle_options.m"
              {
#line 1742 "handle_options.m"
                {
#line 1742 "handle_options.m"
                  libs__handle_options__add_error_3_p_0((MR_String) "term size profiling is incompatible with high level code", libs__handle_options__STATE_VARIABLE_Errors_1129_1129, &libs__handle_options__STATE_VARIABLE_Errors_1147_1147);
                }
#line 1741 "handle_options.m"
              }
#line 1735 "handle_options.m"
          }
#line 1747 "handle_options.m"
        else
#line 1748 "handle_options.m"
          {
#line 1748 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Globals_1156_1156 = libs__handle_options__STATE_VARIABLE_Globals_1142_1142;
#line 1748 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_1147_1147 = libs__handle_options__STATE_VARIABLE_Errors_1129_1129;
#line 1748 "handle_options.m"
          }
#line 1747 "handle_options.m"
      }
#line 1753 "handle_options.m"
    if ((libs__handle_options__Target_26 == (MR_Integer) 0))
#line 1753 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_102 == (MR_Integer) 0);
#line 1753 "handle_options.m"
    else
#line 1753 "handle_options.m"
    if ((libs__handle_options__Target_26 == (MR_Integer) 1))
#line 1754 "handle_options.m"
      libs__handle_options__succeeded = MR_TRUE;
#line 1753 "handle_options.m"
    else
#line 1753 "handle_options.m"
      libs__handle_options__succeeded = MR_FALSE;
#line 1753 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 1752 "handle_options.m"
      {
#line 1752 "handle_options.m"
        MR_Word libs__handle_options__V_1162_1162;

#line 1752 "handle_options.m"
        {
#line 1752 "handle_options.m"
          libs__handle_options__V_1162_1162 = libs__trace_params__given_trace_level_is_none_1_f_0(libs__handle_options__TraceLevel_31);
        }
#line 1752 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__V_1162_1162 == (MR_Integer) 1);
#line 1752 "handle_options.m"
      }
#line 1758 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1758 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_1164_1164 = libs__handle_options__STATE_VARIABLE_Errors_1147_1147;
#line 1758 "handle_options.m"
    else
#line 1759 "handle_options.m"
      {
#line 1759 "handle_options.m"
        {
#line 1759 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "debugging is available only in low level C grades", libs__handle_options__STATE_VARIABLE_Errors_1147_1147, &libs__handle_options__STATE_VARIABLE_Errors_1164_1164);
        }
#line 1759 "handle_options.m"
      }
#line 1765 "handle_options.m"
    {
#line 1765 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 216, (MR_Integer) 493, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1156_1156, &libs__handle_options__STATE_VARIABLE_Globals_1168_1168);
    }
#line 1767 "handle_options.m"
    {
#line 1767 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 339, (MR_Integer) 368, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1168_1168, &libs__handle_options__STATE_VARIABLE_Globals_1173_1173);
    }
#line 1784 "handle_options.m"
    if ((libs__handle_options__ProfileDeep_113 == (MR_Integer) 0))
#line 1781 "handle_options.m"
      {
#line 1782 "handle_options.m"
        {
#line 1782 "handle_options.m"
          libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 336, (MR_Integer) 368, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1173_1173, &libs__handle_options__STATE_VARIABLE_Globals_1178_1178);
        }
#line 1781 "handle_options.m"
      }
#line 1784 "handle_options.m"
    else
#line 1785 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1178_1178 = libs__handle_options__STATE_VARIABLE_Globals_1173_1173;
#line 1790 "handle_options.m"
    {
#line 1790 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 163, (MR_Integer) 390, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1178_1178, &libs__handle_options__STATE_VARIABLE_Globals_1183_1183);
    }
#line 1791 "handle_options.m"
    {
#line 1791 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 163, (MR_Integer) 350, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1183_1183, &libs__handle_options__STATE_VARIABLE_Globals_1188_1188);
    }
#line 1793 "handle_options.m"
    {
#line 1793 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 163, (MR_Integer) 351, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1188_1188, &libs__handle_options__STATE_VARIABLE_Globals_1193_1193);
    }
#line 1797 "handle_options.m"
    {
#line 1797 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 266, (MR_Integer) 269, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1193_1193, &libs__handle_options__STATE_VARIABLE_Globals_1198_1198);
    }
#line 1800 "handle_options.m"
    {
#line 1800 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 270, (MR_Integer) 269, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1198_1198, &libs__handle_options__STATE_VARIABLE_Globals_1203_1203);
    }
#line 1855 "handle_options.m"
    if ((libs__handle_options__GC_Method_27 == (MR_Integer) 5))
#line 1839 "handle_options.m"
      {
#line 1839 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1207_1207;
#line 1839 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1211_1211;
#line 1839 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1215_1215;
#line 1839 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1219_1219;
#line 1839 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1223_1223;
#line 1839 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1227_1227;
#line 1839 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1231_1231;
#line 1839 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1235_1235;
#line 1839 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1239_1239;
#line 1839 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1243_1243;

#line 1840 "handle_options.m"
        {
#line 1840 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 268, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1203_1203, &libs__handle_options__STATE_VARIABLE_Globals_1207_1207);
        }
#line 1841 "handle_options.m"
        {
#line 1841 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 271, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1207_1207, &libs__handle_options__STATE_VARIABLE_Globals_1211_1211);
        }
#line 1842 "handle_options.m"
        {
#line 1842 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 456, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1211_1211, &libs__handle_options__STATE_VARIABLE_Globals_1215_1215);
        }
#line 1843 "handle_options.m"
        {
#line 1843 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 476, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1215_1215, &libs__handle_options__STATE_VARIABLE_Globals_1219_1219);
        }
#line 1844 "handle_options.m"
        {
#line 1844 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 324, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1219_1219, &libs__handle_options__STATE_VARIABLE_Globals_1223_1223);
        }
#line 1845 "handle_options.m"
        {
#line 1845 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 454, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1223_1223, &libs__handle_options__STATE_VARIABLE_Globals_1227_1227);
        }
#line 1846 "handle_options.m"
        {
#line 1846 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 308, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1227_1227, &libs__handle_options__STATE_VARIABLE_Globals_1231_1231);
        }
#line 1848 "handle_options.m"
        {
#line 1848 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 309, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1231_1231, &libs__handle_options__STATE_VARIABLE_Globals_1235_1235);
        }
#line 1850 "handle_options.m"
        {
#line 1850 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 366, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1235_1235, &libs__handle_options__STATE_VARIABLE_Globals_1239_1239);
        }
#line 1852 "handle_options.m"
        {
#line 1852 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 361, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1239_1239, &libs__handle_options__STATE_VARIABLE_Globals_1243_1243);
        }
#line 1853 "handle_options.m"
        {
#line 1853 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 362, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1243_1243, &libs__handle_options__STATE_VARIABLE_Globals_1247_1247);
        }
#line 1839 "handle_options.m"
      }
#line 1855 "handle_options.m"
    else
#line 1855 "handle_options.m"
    if ((libs__handle_options__GC_Method_27 == (MR_Integer) 0))
#line 1856 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1247_1247 = libs__handle_options__STATE_VARIABLE_Globals_1203_1203;
#line 1855 "handle_options.m"
    else
#line 1855 "handle_options.m"
    if ((libs__handle_options__GC_Method_27 == (MR_Integer) 2))
#line 1858 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1247_1247 = libs__handle_options__STATE_VARIABLE_Globals_1203_1203;
#line 1855 "handle_options.m"
    else
#line 1855 "handle_options.m"
    if ((libs__handle_options__GC_Method_27 == (MR_Integer) 3))
#line 1859 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1247_1247 = libs__handle_options__STATE_VARIABLE_Globals_1203_1203;
#line 1855 "handle_options.m"
    else
#line 1855 "handle_options.m"
    if ((libs__handle_options__GC_Method_27 == (MR_Integer) 4))
#line 1860 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1247_1247 = libs__handle_options__STATE_VARIABLE_Globals_1203_1203;
#line 1855 "handle_options.m"
    else
#line 1857 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1247_1247 = libs__handle_options__STATE_VARIABLE_Globals_1203_1203;
#line 1868 "handle_options.m"
    {
#line 1868 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1247_1247, (MR_Integer) 260, &libs__handle_options__PutNondetEnvOnHeap_118);
    }
#line 1882 "handle_options.m"
    {
#line 1882 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 269, (MR_Integer) 267, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1247_1247, &libs__handle_options__STATE_VARIABLE_Globals_1257_1257);
    }
#line 1884 "handle_options.m"
    {
#line 1884 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 268, (MR_Integer) 267, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1257_1257, &libs__handle_options__STATE_VARIABLE_Globals_1262_1262);
    }
#line 1891 "handle_options.m"
    {
#line 1891 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 269, (MR_Integer) 474, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1262_1262, &libs__handle_options__STATE_VARIABLE_Globals_1267_1267);
    }
#line 1893 "handle_options.m"
    {
#line 1893 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 268, (MR_Integer) 474, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1267_1267, &libs__handle_options__STATE_VARIABLE_Globals_1272_1272);
    }
#line 1897 "handle_options.m"
    {
#line 1897 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 267, (MR_Integer) 472, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1272_1272, &libs__handle_options__STATE_VARIABLE_Globals_1277_1277);
    }
#line 1903 "handle_options.m"
    {
#line 1903 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 271, (MR_Integer) 390, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1277_1277, &libs__handle_options__STATE_VARIABLE_Globals_1282_1282);
    }
#line 1905 "handle_options.m"
    {
#line 1905 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 271, (MR_Integer) 350, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1282_1282, &libs__handle_options__STATE_VARIABLE_Globals_1287_1287);
    }
#line 1914 "handle_options.m"
    {
#line 1914 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 218, (MR_Integer) 454, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1287_1287, &libs__handle_options__STATE_VARIABLE_Globals_1292_1292);
    }
#line 1921 "handle_options.m"
    {
#line 1921 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 228, (MR_Integer) 454, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1292_1292, &libs__handle_options__STATE_VARIABLE_Globals_1297_1297);
    }
#line 1930 "handle_options.m"
    {
#line 1930 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 220, (MR_Integer) 456, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1297_1297, &libs__handle_options__STATE_VARIABLE_Globals_1302_1302);
    }
#line 1939 "handle_options.m"
    {
#line 1939 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1302_1302, (MR_Integer) 284, &libs__handle_options__DisablePneg_119);
    }
#line 1941 "handle_options.m"
    {
#line 1941 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1302_1302, (MR_Integer) 285, &libs__handle_options__DisableCut_120);
    }
#line 1944 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelStackCopy_103 == (MR_Integer) 1);
#line 1944 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1945 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__DisablePneg_119 == (MR_Integer) 0);
#line 1949 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1947 "handle_options.m"
      {
#line 1947 "handle_options.m"
        {
#line 1947 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 286, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]), libs__handle_options__STATE_VARIABLE_Globals_1302_1302, &libs__handle_options__STATE_VARIABLE_Globals_1308_1308);
        }
#line 1947 "handle_options.m"
      }
#line 1949 "handle_options.m"
    else
#line 1949 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1308_1308 = libs__handle_options__STATE_VARIABLE_Globals_1302_1302;
#line 1953 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelStackCopy_103 == (MR_Integer) 1);
#line 1953 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1954 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__DisableCut_120 == (MR_Integer) 0);
#line 1958 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1956 "handle_options.m"
      {
#line 1956 "handle_options.m"
        {
#line 1956 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 287, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]), libs__handle_options__STATE_VARIABLE_Globals_1308_1308, &libs__handle_options__STATE_VARIABLE_Globals_1312_1312);
        }
#line 1956 "handle_options.m"
      }
#line 1958 "handle_options.m"
    else
#line 1958 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1312_1312 = libs__handle_options__STATE_VARIABLE_Globals_1308_1308;
#line 1964 "handle_options.m"
    {
#line 1964 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1312_1312, (MR_Integer) 145, &libs__handle_options__DumpHLDSStages_121);
    }
#line 1966 "handle_options.m"
    {
#line 1966 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1312_1312, (MR_Integer) 144, &libs__handle_options__DumpTraceStages_122);
    }
#line 1968 "handle_options.m"
    {
#line 1968 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1312_1312, (MR_Integer) 304, &libs__handle_options__ParallelLiveness_123);
    }
#line 1970 "handle_options.m"
    {
#line 1970 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1312_1312, (MR_Integer) 305, &libs__handle_options__ParallelCodeGen_124);
    }
#line 1973 "handle_options.m"
    {
#line 1973 "handle_options.m"
      MR_String libs__handle_options__V_125_125;
#line 1973 "handle_options.m"
      MR_Word libs__handle_options__V_126_126;

#line 1973 "handle_options.m"
      libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DumpHLDSStages_121)) == (MR_mktag((MR_Integer) 1)));
#line 1973 "handle_options.m"
      if (libs__handle_options__succeeded)
#line 1973 "handle_options.m"
        {
#line 1973 "handle_options.m"
          libs__handle_options__V_125_125 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpHLDSStages_121, (MR_Integer) 0)));
#line 1973 "handle_options.m"
          libs__handle_options__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpHLDSStages_121, (MR_Integer) 1)));
#line 1973 "handle_options.m"
        }
#line 1973 "handle_options.m"
    }
#line 1974 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 1974 "handle_options.m"
      {
#line 1974 "handle_options.m"
        {
#line 1974 "handle_options.m"
          MR_String libs__handle_options__V_127_127;
#line 1974 "handle_options.m"
          MR_Word libs__handle_options__V_128_128;

#line 1974 "handle_options.m"
          libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DumpTraceStages_122)) == (MR_mktag((MR_Integer) 1)));
#line 1974 "handle_options.m"
          if (libs__handle_options__succeeded)
#line 1974 "handle_options.m"
            {
#line 1974 "handle_options.m"
              libs__handle_options__V_127_127 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpTraceStages_122, (MR_Integer) 0)));
#line 1974 "handle_options.m"
              libs__handle_options__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpTraceStages_122, (MR_Integer) 1)));
#line 1974 "handle_options.m"
            }
#line 1974 "handle_options.m"
        }
#line 1974 "handle_options.m"
        if (!(libs__handle_options__succeeded))
#line 1974 "handle_options.m"
          {
#line 1975 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__Statistics_79 == (MR_Integer) 1);
#line 1974 "handle_options.m"
            if (!(libs__handle_options__succeeded))
#line 1974 "handle_options.m"
              {
#line 1976 "handle_options.m"
                libs__handle_options__succeeded = (libs__handle_options__ParallelLiveness_123 == (MR_Integer) 1);
#line 1974 "handle_options.m"
                if (!(libs__handle_options__succeeded))
#line 1977 "handle_options.m"
                  libs__handle_options__succeeded = (libs__handle_options__ParallelCodeGen_124 == (MR_Integer) 1);
#line 1974 "handle_options.m"
              }
#line 1974 "handle_options.m"
          }
#line 1974 "handle_options.m"
      }
#line 1981 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1980 "handle_options.m"
      {
#line 1980 "handle_options.m"
        {
#line 1980 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 303, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1312_1312, &libs__handle_options__STATE_VARIABLE_Globals_1320_1320);
        }
#line 1980 "handle_options.m"
      }
#line 1981 "handle_options.m"
    else
#line 1981 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1320_1320 = libs__handle_options__STATE_VARIABLE_Globals_1312_1312;
#line 1987 "handle_options.m"
    {
#line 1987 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 361, (MR_Integer) 362, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1320_1320, &libs__handle_options__STATE_VARIABLE_Globals_1325_1325);
    }
#line 1993 "handle_options.m"
    {
#line 1993 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 350, (MR_Integer) 351, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1325_1325, &libs__handle_options__STATE_VARIABLE_Globals_1330_1330);
    }
#line 1998 "handle_options.m"
    {
#line 1998 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 353, (MR_Integer) 328, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1330_1330, &libs__handle_options__STATE_VARIABLE_Globals_1335_1335);
    }
#line 2000 "handle_options.m"
    {
#line 2000 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 353, (MR_Integer) 352, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1335_1335, &libs__handle_options__STATE_VARIABLE_Globals_1340_1340);
    }
#line 2005 "handle_options.m"
    {
#line 2005 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 363, (MR_Integer) 369, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1340_1340, &libs__handle_options__STATE_VARIABLE_Globals_1345_1345);
    }
#line 2007 "handle_options.m"
    {
#line 2007 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 363, (MR_Integer) 348, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1345_1345, &libs__handle_options__STATE_VARIABLE_Globals_1350_1350);
    }
#line 2012 "handle_options.m"
    {
#line 2012 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 87, (MR_Integer) 352, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1350_1350, &libs__handle_options__STATE_VARIABLE_Globals_1355_1355);
    }
#line 2018 "handle_options.m"
    {
#line 2018 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 395, (MR_Integer) 396, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1355_1355, &libs__handle_options__STATE_VARIABLE_Globals_1360_1360);
    }
#line 2023 "handle_options.m"
    {
#line 2023 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 94, (MR_Integer) 93, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1360_1360, &libs__handle_options__STATE_VARIABLE_Globals_1365_1365);
    }
#line 2028 "handle_options.m"
    {
#line 2028 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 143, (MR_Integer) 93, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1365_1365, &libs__handle_options__STATE_VARIABLE_Globals_1370_1370);
    }
#line 2032 "handle_options.m"
    {
#line 2032 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 91, (MR_Integer) 22, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1370_1370, &libs__handle_options__STATE_VARIABLE_Globals_1375_1375);
    }
#line 2035 "handle_options.m"
    {
#line 2035 "handle_options.m"
      libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1375_1375, (MR_Integer) 665, &libs__handle_options__TargetArch_129);
    }
#line 2038 "handle_options.m"
    {
#line 2038 "handle_options.m"
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1375_1375, (MR_Integer) 554, &libs__handle_options__MaybeStdLibDir_130);
    }
#line 2056 "handle_options.m"
    if ((libs__handle_options__MaybeStdLibDir_130 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2057 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1391_1391 = libs__handle_options__STATE_VARIABLE_Globals_1375_1375;
#line 2056 "handle_options.m"
    else
#line 2041 "handle_options.m"
      {
#line 2041 "handle_options.m"
        MR_String libs__handle_options__StdLibDir_131 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeStdLibDir_130, (MR_Integer) 0)));
#line 2041 "handle_options.m"
        MR_Word libs__handle_options__OptionTable2_132;
#line 2041 "handle_options.m"
        MR_Word libs__handle_options__LinkLibDirs0_133;
#line 2041 "handle_options.m"
        MR_Word libs__handle_options__Rpath0_134;
#line 2041 "handle_options.m"
        MR_Word libs__handle_options__V_1379_1379;
#line 2041 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1380_1380;
#line 2041 "handle_options.m"
        MR_Word libs__handle_options__V_1383_1383;
#line 2041 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1384_1384;
#line 2041 "handle_options.m"
        MR_Word libs__handle_options__V_1385_1385;
#line 2041 "handle_options.m"
        MR_String libs__handle_options__V_1386_1386;
#line 2041 "handle_options.m"
        MR_Word libs__handle_options__V_1390_1390;
#line 2041 "handle_options.m"
        MR_Word libs__handle_options__V_1392_1392;
#line 2041 "handle_options.m"
        MR_String libs__handle_options__V_1393_1393;

#line 2042 "handle_options.m"
        {
#line 2042 "handle_options.m"
          libs__globals__get_options_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_1375_1375, &libs__handle_options__OptionTable2_132);
        }
#line 2043 "handle_options.m"
        {
#line 2043 "handle_options.m"
          libs__handle_options__V_1379_1379 = libs__options__option_table_add_mercury_library_directory_2_f_0(libs__handle_options__OptionTable2_132, libs__handle_options__StdLibDir_131);
        }
#line 2043 "handle_options.m"
        {
#line 2043 "handle_options.m"
          libs__globals__set_options_3_p_0(libs__handle_options__V_1379_1379, libs__handle_options__STATE_VARIABLE_Globals_1375_1375, &libs__handle_options__STATE_VARIABLE_Globals_1380_1380);
        }
#line 2047 "handle_options.m"
        {
#line 2047 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1380_1380, (MR_Integer) 544, &libs__handle_options__LinkLibDirs0_133);
        }
#line 2050 "handle_options.m"
        {
#line 2050 "handle_options.m"
          libs__handle_options__V_1386_1386 = mercury__dir__f_slash_2_f_0(libs__handle_options__StdLibDir_131, (MR_String) "lib");
        }
#line 2050 "handle_options.m"
        {
#line 2050 "handle_options.m"
          libs__handle_options__V_1385_1385 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2050 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1385_1385, 0) = ((MR_Box) (libs__handle_options__V_1386_1386));
#line 2050 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1385_1385, 1) = ((MR_Box) (libs__handle_options__LinkLibDirs0_133));
#line 2050 "handle_options.m"
        }
#line 2050 "handle_options.m"
        {
#line 2050 "handle_options.m"
          libs__handle_options__V_1383_1383 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2050 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1383_1383, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2050 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1383_1383, 1) = ((MR_Box) (libs__handle_options__V_1385_1385));
#line 2050 "handle_options.m"
        }
#line 2049 "handle_options.m"
        {
#line 2049 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 544, libs__handle_options__V_1383_1383, libs__handle_options__STATE_VARIABLE_Globals_1380_1380, &libs__handle_options__STATE_VARIABLE_Globals_1384_1384);
        }
#line 2052 "handle_options.m"
        {
#line 2052 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1384_1384, (MR_Integer) 545, &libs__handle_options__Rpath0_134);
        }
#line 2055 "handle_options.m"
        {
#line 2055 "handle_options.m"
          libs__handle_options__V_1393_1393 = mercury__dir__f_slash_2_f_0(libs__handle_options__StdLibDir_131, (MR_String) "lib");
        }
#line 2055 "handle_options.m"
        {
#line 2055 "handle_options.m"
          libs__handle_options__V_1392_1392 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2055 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1392_1392, 0) = ((MR_Box) (libs__handle_options__V_1393_1393));
#line 2055 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1392_1392, 1) = ((MR_Box) (libs__handle_options__Rpath0_134));
#line 2055 "handle_options.m"
        }
#line 2055 "handle_options.m"
        {
#line 2055 "handle_options.m"
          libs__handle_options__V_1390_1390 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2055 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1390_1390, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2055 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1390_1390, 1) = ((MR_Box) (libs__handle_options__V_1392_1392));
#line 2055 "handle_options.m"
        }
#line 2054 "handle_options.m"
        {
#line 2054 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 545, libs__handle_options__V_1390_1390, libs__handle_options__STATE_VARIABLE_Globals_1384_1384, &libs__handle_options__STATE_VARIABLE_Globals_1391_1391);
        }
#line 2041 "handle_options.m"
      }
#line 2061 "handle_options.m"
    {
#line 2061 "handle_options.m"
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1391_1391, (MR_Integer) 633, &libs__handle_options__MaybeConfDir_135);
    }
#line 2069 "handle_options.m"
    if ((libs__handle_options__MaybeConfDir_135 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2070 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1399_1399 = libs__handle_options__STATE_VARIABLE_Globals_1391_1391;
#line 2069 "handle_options.m"
    else
#line 2064 "handle_options.m"
      {
#line 2064 "handle_options.m"
        MR_String libs__handle_options__ConfDir_136 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeConfDir_135, (MR_Integer) 0)));
#line 2064 "handle_options.m"
        MR_Word libs__handle_options__CIncludeDirs0_137;
#line 2064 "handle_options.m"
        MR_Word libs__handle_options__V_1398_1398;
#line 2064 "handle_options.m"
        MR_Word libs__handle_options__V_1400_1400;
#line 2064 "handle_options.m"
        MR_String libs__handle_options__V_1401_1401;

#line 2065 "handle_options.m"
        {
#line 2065 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1391_1391, (MR_Integer) 491, &libs__handle_options__CIncludeDirs0_137);
        }
#line 2068 "handle_options.m"
        {
#line 2068 "handle_options.m"
          libs__handle_options__V_1401_1401 = mercury__dir__f_slash_2_f_0(libs__handle_options__ConfDir_136, (MR_String) "conf");
        }
#line 2068 "handle_options.m"
        {
#line 2068 "handle_options.m"
          libs__handle_options__V_1400_1400 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2068 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1400_1400, 0) = ((MR_Box) (libs__handle_options__V_1401_1401));
#line 2068 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1400_1400, 1) = ((MR_Box) (libs__handle_options__CIncludeDirs0_137));
#line 2068 "handle_options.m"
        }
#line 2068 "handle_options.m"
        {
#line 2068 "handle_options.m"
          libs__handle_options__V_1398_1398 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2068 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1398_1398, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2068 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1398_1398, 1) = ((MR_Box) (libs__handle_options__V_1400_1400));
#line 2068 "handle_options.m"
        }
#line 2067 "handle_options.m"
        {
#line 2067 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 491, libs__handle_options__V_1398_1398, libs__handle_options__STATE_VARIABLE_Globals_1391_1391, &libs__handle_options__STATE_VARIABLE_Globals_1399_1399);
        }
#line 2064 "handle_options.m"
      }
#line 2074 "handle_options.m"
    {
#line 2074 "handle_options.m"
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1399_1399, (MR_Integer) 644, &libs__handle_options__ConfigFile_138);
    }
#line 2077 "handle_options.m"
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__ConfigFile_138)) == (MR_mktag((MR_Integer) 1)));
#line 2077 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2077 "handle_options.m"
      {
#line 2077 "handle_options.m"
        libs__handle_options__V_1404_1404 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__ConfigFile_138, (MR_Integer) 0)));
#line 2077 "handle_options.m"
        libs__handle_options__succeeded = (strcmp(libs__handle_options__V_1404_1404, (MR_String) "") == 0);
#line 2077 "handle_options.m"
      }
#line 2086 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2082 "handle_options.m"
      if ((libs__handle_options__MaybeConfDir_135 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2083 "handle_options.m"
        {
#line 2084 "handle_options.m"
          {
#line 2084 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 644, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[199]), libs__handle_options__STATE_VARIABLE_Globals_1399_1399, &libs__handle_options__STATE_VARIABLE_Globals_1411_1411);
          }
#line 2083 "handle_options.m"
        }
#line 2082 "handle_options.m"
      else
#line 2079 "handle_options.m"
        {
#line 2079 "handle_options.m"
          MR_String libs__handle_options__ConfDir1_139 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeConfDir_135, (MR_Integer) 0)));
#line 2079 "handle_options.m"
          MR_Word libs__handle_options__V_1410_1410;
#line 2079 "handle_options.m"
          MR_Word libs__handle_options__V_1412_1412;
#line 2079 "handle_options.m"
          MR_String libs__handle_options__V_1413_1413;
#line 2079 "handle_options.m"
          MR_String libs__handle_options__V_1414_1414;

#line 2081 "handle_options.m"
          {
#line 2081 "handle_options.m"
            libs__handle_options__V_1414_1414 = mercury__dir__f_slash_2_f_0(libs__handle_options__ConfDir1_139, (MR_String) "conf");
          }
#line 2081 "handle_options.m"
          {
#line 2081 "handle_options.m"
            libs__handle_options__V_1413_1413 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1414_1414, (MR_String) "Mercury.config");
          }
#line 2080 "handle_options.m"
          {
#line 2080 "handle_options.m"
            libs__handle_options__V_1412_1412 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2080 "handle_options.m"
            MR_hl_field(MR_mktag(1), libs__handle_options__V_1412_1412, 0) = ((MR_Box) (libs__handle_options__V_1413_1413));
#line 2080 "handle_options.m"
          }
#line 2080 "handle_options.m"
          {
#line 2080 "handle_options.m"
            libs__handle_options__V_1410_1410 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2080 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1410_1410, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2080 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1410_1410, 1) = ((MR_Box) (libs__handle_options__V_1412_1412));
#line 2080 "handle_options.m"
          }
#line 2080 "handle_options.m"
          {
#line 2080 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 644, libs__handle_options__V_1410_1410, libs__handle_options__STATE_VARIABLE_Globals_1399_1399, &libs__handle_options__STATE_VARIABLE_Globals_1411_1411);
          }
#line 2079 "handle_options.m"
        }
#line 2086 "handle_options.m"
    else
#line 2086 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1411_1411 = libs__handle_options__STATE_VARIABLE_Globals_1399_1399;
#line 2093 "handle_options.m"
    {
#line 2093 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1411_1411, (MR_Integer) 548, &libs__handle_options__MercuryLibDirs_140);
    }
#line 2095 "handle_options.m"
    {
#line 2095 "handle_options.m"
      libs__handle_options__grade_directory_component_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_1411_1411, &libs__handle_options__GradeString_141);
    }
#line 2145 "handle_options.m"
    if ((libs__handle_options__MercuryLibDirs_140 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2146 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1468_1468 = libs__handle_options__STATE_VARIABLE_Globals_1411_1411;
#line 2145 "handle_options.m"
    else
#line 2097 "handle_options.m"
      {
#line 2097 "handle_options.m"
        MR_Word libs__handle_options__TypeCtorInfo_1643_1643 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2097 "handle_options.m"
        MR_Word libs__handle_options__ExtraLinkLibDirs_144;
#line 2097 "handle_options.m"
        MR_Word libs__handle_options__LinkLibDirs1_146;
#line 2097 "handle_options.m"
        MR_Word libs__handle_options__Rpath_147;
#line 2097 "handle_options.m"
        MR_Word libs__handle_options__ExtraIncludeDirs_148;
#line 2097 "handle_options.m"
        MR_Word libs__handle_options__CIncludeDirs_149;
#line 2097 "handle_options.m"
        MR_Word libs__handle_options__ErlangIncludeDirs_150;
#line 2097 "handle_options.m"
        MR_Word libs__handle_options__ExtraIntermodDirs_151;
#line 2097 "handle_options.m"
        MR_Word libs__handle_options__IntermodDirs0_152;
#line 2097 "handle_options.m"
        MR_Word libs__handle_options__ExtraInitDirs_153;
#line 2097 "handle_options.m"
        MR_Word libs__handle_options__InitDirs1_154;
#line 2097 "handle_options.m"
        MR_Word libs__handle_options__V_1418_1418;
#line 2097 "handle_options.m"
        MR_Word libs__handle_options__V_1425_1425;
#line 2097 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1426_1426;
#line 2097 "handle_options.m"
        MR_Word libs__handle_options__V_1427_1427;
#line 2097 "handle_options.m"
        MR_Word libs__handle_options__V_1430_1430;
#line 2097 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1431_1431;
#line 2097 "handle_options.m"
        MR_Word libs__handle_options__V_1432_1432;
#line 2097 "handle_options.m"
        MR_Word libs__handle_options__V_1433_1433;
#line 2097 "handle_options.m"
        MR_Word libs__handle_options__V_1442_1442;
#line 2097 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1443_1443;
#line 2097 "handle_options.m"
        MR_Word libs__handle_options__V_1444_1444;
#line 2097 "handle_options.m"
        MR_Word libs__handle_options__V_1447_1447;
#line 2097 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1448_1448;
#line 2097 "handle_options.m"
        MR_Word libs__handle_options__V_1449_1449;
#line 2097 "handle_options.m"
        MR_Word libs__handle_options__V_1450_1450;
#line 2097 "handle_options.m"
        MR_Word libs__handle_options__V_1457_1457;
#line 2097 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1458_1458;
#line 2097 "handle_options.m"
        MR_Word libs__handle_options__V_1459_1459;
#line 2097 "handle_options.m"
        MR_Word libs__handle_options__V_1460_1460;
#line 2097 "handle_options.m"
        MR_Word libs__handle_options__V_1467_1467;
#line 2097 "handle_options.m"
        MR_Word libs__handle_options__V_1469_1469;

#line 2098 "handle_options.m"
        {
#line 2098 "handle_options.m"
          libs__handle_options__V_1418_1418 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2098 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1418_1418, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
#line 2098 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1418_1418, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_1));
#line 2098 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1418_1418, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2098 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1418_1418, 3) = ((MR_Box) (libs__handle_options__GradeString_141));
#line 2098 "handle_options.m"
        }
#line 2098 "handle_options.m"
        {
#line 2098 "handle_options.m"
          libs__handle_options__ExtraLinkLibDirs_144 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1643_1643, libs__handle_options__TypeCtorInfo_1643_1643, libs__handle_options__V_1418_1418, libs__handle_options__MercuryLibDirs_140);
        }
#line 2103 "handle_options.m"
        {
#line 2103 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1411_1411, (MR_Integer) 544, &libs__handle_options__LinkLibDirs1_146);
        }
#line 2106 "handle_options.m"
        {
#line 2106 "handle_options.m"
          libs__handle_options__V_1427_1427 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1643_1643, libs__handle_options__LinkLibDirs1_146, libs__handle_options__ExtraLinkLibDirs_144);
        }
#line 2106 "handle_options.m"
        {
#line 2106 "handle_options.m"
          libs__handle_options__V_1425_1425 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2106 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1425_1425, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2106 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1425_1425, 1) = ((MR_Box) (libs__handle_options__V_1427_1427));
#line 2106 "handle_options.m"
        }
#line 2105 "handle_options.m"
        {
#line 2105 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 544, libs__handle_options__V_1425_1425, libs__handle_options__STATE_VARIABLE_Globals_1411_1411, &libs__handle_options__STATE_VARIABLE_Globals_1426_1426);
        }
#line 2108 "handle_options.m"
        {
#line 2108 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1426_1426, (MR_Integer) 545, &libs__handle_options__Rpath_147);
        }
#line 2111 "handle_options.m"
        {
#line 2111 "handle_options.m"
          libs__handle_options__V_1432_1432 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1643_1643, libs__handle_options__Rpath_147, libs__handle_options__ExtraLinkLibDirs_144);
        }
#line 2111 "handle_options.m"
        {
#line 2111 "handle_options.m"
          libs__handle_options__V_1430_1430 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2111 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1430_1430, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2111 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1430_1430, 1) = ((MR_Box) (libs__handle_options__V_1432_1432));
#line 2111 "handle_options.m"
        }
#line 2110 "handle_options.m"
        {
#line 2110 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 545, libs__handle_options__V_1430_1430, libs__handle_options__STATE_VARIABLE_Globals_1426_1426, &libs__handle_options__STATE_VARIABLE_Globals_1431_1431);
        }
#line 2113 "handle_options.m"
        {
#line 2113 "handle_options.m"
          libs__handle_options__V_1433_1433 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2113 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1433_1433, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
#line 2113 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1433_1433, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_2));
#line 2113 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1433_1433, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2113 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1433_1433, 3) = ((MR_Box) (libs__handle_options__GradeString_141));
#line 2113 "handle_options.m"
        }
#line 2113 "handle_options.m"
        {
#line 2113 "handle_options.m"
          libs__handle_options__ExtraIncludeDirs_148 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1643_1643, libs__handle_options__TypeCtorInfo_1643_1643, libs__handle_options__V_1433_1433, libs__handle_options__MercuryLibDirs_140);
        }
#line 2117 "handle_options.m"
        {
#line 2117 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1431_1431, (MR_Integer) 491, &libs__handle_options__CIncludeDirs_149);
        }
#line 2120 "handle_options.m"
        {
#line 2120 "handle_options.m"
          libs__handle_options__V_1444_1444 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1643_1643, libs__handle_options__ExtraIncludeDirs_148, libs__handle_options__CIncludeDirs_149);
        }
#line 2120 "handle_options.m"
        {
#line 2120 "handle_options.m"
          libs__handle_options__V_1442_1442 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2120 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1442_1442, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2120 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1442_1442, 1) = ((MR_Box) (libs__handle_options__V_1444_1444));
#line 2120 "handle_options.m"
        }
#line 2119 "handle_options.m"
        {
#line 2119 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 491, libs__handle_options__V_1442_1442, libs__handle_options__STATE_VARIABLE_Globals_1431_1431, &libs__handle_options__STATE_VARIABLE_Globals_1443_1443);
        }
#line 2121 "handle_options.m"
        {
#line 2121 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1443_1443, (MR_Integer) 535, &libs__handle_options__ErlangIncludeDirs_150);
        }
#line 2124 "handle_options.m"
        {
#line 2124 "handle_options.m"
          libs__handle_options__V_1449_1449 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1643_1643, libs__handle_options__ExtraIncludeDirs_148, libs__handle_options__ErlangIncludeDirs_150);
        }
#line 2124 "handle_options.m"
        {
#line 2124 "handle_options.m"
          libs__handle_options__V_1447_1447 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2124 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1447_1447, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2124 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1447_1447, 1) = ((MR_Box) (libs__handle_options__V_1449_1449));
#line 2124 "handle_options.m"
        }
#line 2123 "handle_options.m"
        {
#line 2123 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 535, libs__handle_options__V_1447_1447, libs__handle_options__STATE_VARIABLE_Globals_1443_1443, &libs__handle_options__STATE_VARIABLE_Globals_1448_1448);
        }
#line 2126 "handle_options.m"
        {
#line 2126 "handle_options.m"
          libs__handle_options__V_1450_1450 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2126 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1450_1450, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
#line 2126 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1450_1450, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_3));
#line 2126 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1450_1450, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2126 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1450_1450, 3) = ((MR_Box) (libs__handle_options__GradeString_141));
#line 2126 "handle_options.m"
        }
#line 2126 "handle_options.m"
        {
#line 2126 "handle_options.m"
          libs__handle_options__ExtraIntermodDirs_151 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1643_1643, libs__handle_options__TypeCtorInfo_1643_1643, libs__handle_options__V_1450_1450, libs__handle_options__MercuryLibDirs_140);
        }
#line 2131 "handle_options.m"
        {
#line 2131 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1448_1448, (MR_Integer) 649, &libs__handle_options__IntermodDirs0_152);
        }
#line 2134 "handle_options.m"
        {
#line 2134 "handle_options.m"
          libs__handle_options__V_1459_1459 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1643_1643, libs__handle_options__ExtraIntermodDirs_151, libs__handle_options__IntermodDirs0_152);
        }
#line 2134 "handle_options.m"
        {
#line 2134 "handle_options.m"
          libs__handle_options__V_1457_1457 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2134 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1457_1457, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2134 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1457_1457, 1) = ((MR_Box) (libs__handle_options__V_1459_1459));
#line 2134 "handle_options.m"
        }
#line 2133 "handle_options.m"
        {
#line 2133 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 649, libs__handle_options__V_1457_1457, libs__handle_options__STATE_VARIABLE_Globals_1448_1448, &libs__handle_options__STATE_VARIABLE_Globals_1458_1458);
        }
#line 2136 "handle_options.m"
        {
#line 2136 "handle_options.m"
          libs__handle_options__V_1460_1460 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2136 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1460_1460, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
#line 2136 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1460_1460, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_4));
#line 2136 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1460_1460, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2136 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1460_1460, 3) = ((MR_Box) (libs__handle_options__GradeString_141));
#line 2136 "handle_options.m"
        }
#line 2136 "handle_options.m"
        {
#line 2136 "handle_options.m"
          libs__handle_options__ExtraInitDirs_153 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1643_1643, libs__handle_options__TypeCtorInfo_1643_1643, libs__handle_options__V_1460_1460, libs__handle_options__MercuryLibDirs_140);
        }
#line 2141 "handle_options.m"
        {
#line 2141 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1458_1458, (MR_Integer) 556, &libs__handle_options__InitDirs1_154);
        }
#line 2144 "handle_options.m"
        {
#line 2144 "handle_options.m"
          libs__handle_options__V_1469_1469 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1643_1643, libs__handle_options__InitDirs1_154, libs__handle_options__ExtraInitDirs_153);
        }
#line 2144 "handle_options.m"
        {
#line 2144 "handle_options.m"
          libs__handle_options__V_1467_1467 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2144 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1467_1467, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2144 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1467_1467, 1) = ((MR_Box) (libs__handle_options__V_1469_1469));
#line 2144 "handle_options.m"
        }
#line 2143 "handle_options.m"
        {
#line 2143 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 556, libs__handle_options__V_1467_1467, libs__handle_options__STATE_VARIABLE_Globals_1458_1458, &libs__handle_options__STATE_VARIABLE_Globals_1468_1468);
        }
#line 2097 "handle_options.m"
      }
#line 2152 "handle_options.m"
    {
#line 2152 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1468_1468, (MR_Integer) 650, &libs__handle_options__UseSearchDirs_155);
    }
#line 2162 "handle_options.m"
    if ((libs__handle_options__UseSearchDirs_155 == (MR_Integer) 0))
#line 2163 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1475_1475 = libs__handle_options__STATE_VARIABLE_Globals_1468_1468;
#line 2162 "handle_options.m"
    else
#line 2155 "handle_options.m"
      {
#line 2155 "handle_options.m"
        MR_Word libs__handle_options__IntermodDirs1_156;
#line 2155 "handle_options.m"
        MR_Word libs__handle_options__SearchDirs_157;
#line 2155 "handle_options.m"
        MR_Word libs__handle_options__V_1474_1474;
#line 2155 "handle_options.m"
        MR_Word libs__handle_options__V_1476_1476;

#line 2156 "handle_options.m"
        {
#line 2156 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1468_1468, (MR_Integer) 649, &libs__handle_options__IntermodDirs1_156);
        }
#line 2158 "handle_options.m"
        {
#line 2158 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1468_1468, (MR_Integer) 648, &libs__handle_options__SearchDirs_157);
        }
#line 2161 "handle_options.m"
        {
#line 2161 "handle_options.m"
          libs__handle_options__V_1476_1476 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__IntermodDirs1_156, libs__handle_options__SearchDirs_157);
        }
#line 2161 "handle_options.m"
        {
#line 2161 "handle_options.m"
          libs__handle_options__V_1474_1474 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2161 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1474_1474, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2161 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1474_1474, 1) = ((MR_Box) (libs__handle_options__V_1476_1476));
#line 2161 "handle_options.m"
        }
#line 2160 "handle_options.m"
        {
#line 2160 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 649, libs__handle_options__V_1474_1474, libs__handle_options__STATE_VARIABLE_Globals_1468_1468, &libs__handle_options__STATE_VARIABLE_Globals_1475_1475);
        }
#line 2155 "handle_options.m"
      }
#line 2166 "handle_options.m"
    {
#line 2166 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1475_1475, (MR_Integer) 647, &libs__handle_options__UseGradeSubdirs_158);
    }
#line 2168 "handle_options.m"
    {
#line 2168 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1475_1475, (MR_Integer) 550, &libs__handle_options__SearchLibFilesDirs_159);
    }
#line 2170 "handle_options.m"
    {
#line 2170 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1475_1475, (MR_Integer) 649, &libs__handle_options__IntermodDirs2_160);
    }
#line 2172 "handle_options.m"
    {
#line 2172 "handle_options.m"
      libs__handle_options__ToGradeSubdir_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2172 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_161, 0) = ((MR_Box) (&libs__handle_options_scalar_common_5[2]));
#line 2172 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_161, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_5));
#line 2172 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_161, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2172 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_161, 3) = ((MR_Box) (libs__handle_options__TargetArch_129));
#line 2172 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_161, 4) = ((MR_Box) (libs__handle_options__GradeString_141));
#line 2172 "handle_options.m"
    }
#line 13250 "libs.handle_options.c"
    if ((libs__handle_options__UseGradeSubdirs_158 == (MR_Integer) 0))
#line 13252 "libs.handle_options.c"
      {
#line 13254 "libs.handle_options.c"
        MR_Word libs__handle_options__TypeCtorInfo_1652_1652;
#line 13256 "libs.handle_options.c"
        MR_Word libs__handle_options__IntermodDirs3_165;
#line 13258 "libs.handle_options.c"
        MR_Word libs__handle_options__LinkLibDirs2_166;
#line 13260 "libs.handle_options.c"
        MR_Word libs__handle_options__InitDirs2_167;
#line 13262 "libs.handle_options.c"
        MR_Word libs__handle_options__V_1495_1495;

#line 2193 "handle_options.m"
        {
#line 2193 "handle_options.m"
          libs__handle_options__IntermodDirs3_165 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__SearchLibFilesDirs_159, libs__handle_options__IntermodDirs2_160);
        }
#line 2196 "handle_options.m"
        {
#line 2196 "handle_options.m"
          libs__handle_options__V_1495_1495 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2196 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1495_1495, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2196 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1495_1495, 1) = ((MR_Box) (libs__handle_options__IntermodDirs3_165));
#line 2196 "handle_options.m"
        }
#line 2195 "handle_options.m"
        {
#line 2195 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 649, libs__handle_options__V_1495_1495, libs__handle_options__STATE_VARIABLE_Globals_1475_1475, &libs__handle_options__STATE_VARIABLE_Globals_1496_1496);
        }
#line 2198 "handle_options.m"
        {
#line 2198 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1496_1496, (MR_Integer) 544, &libs__handle_options__LinkLibDirs2_166);
        }
#line 2200 "handle_options.m"
        {
#line 2200 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1496_1496, (MR_Integer) 556, &libs__handle_options__InitDirs2_167);
        }
#line 13295 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_1652_1652 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2218 "handle_options.m"
        {
#line 2218 "handle_options.m"
          libs__handle_options__LinkLibDirs_170 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1652_1652, libs__handle_options__SearchLibFilesDirs_159, libs__handle_options__LinkLibDirs2_166);
        }
#line 2219 "handle_options.m"
        {
#line 2219 "handle_options.m"
          libs__handle_options__InitDirs_173 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1652_1652, libs__handle_options__SearchLibFilesDirs_159, libs__handle_options__InitDirs2_167);
        }
#line 13307 "libs.handle_options.c"
      }
#line 13309 "libs.handle_options.c"
    else
#line 13311 "libs.handle_options.c"
      {
#line 13313 "libs.handle_options.c"
        MR_Word libs__handle_options__TypeCtorInfo_1645_1645;
#line 13315 "libs.handle_options.c"
        MR_Word libs__handle_options__TypeCtorInfo_1651_1651;
#line 13317 "libs.handle_options.c"
        MR_String libs__handle_options__GradeSubdir_163;
#line 13319 "libs.handle_options.c"
        MR_Word libs__handle_options__SearchLibFilesGradeSubdirs_164;
#line 13321 "libs.handle_options.c"
        MR_Word libs__handle_options__ToGradeLibDir_168;
#line 13323 "libs.handle_options.c"
        MR_Word libs__handle_options__SearchGradeLibDirs_169;
#line 13325 "libs.handle_options.c"
        MR_Word libs__handle_options__ToGradeInitDir_171;
#line 13327 "libs.handle_options.c"
        MR_Word libs__handle_options__SearchGradeInitDirs_172;
#line 13329 "libs.handle_options.c"
        MR_String libs__handle_options__V_1485_1485;
#line 13331 "libs.handle_options.c"
        MR_Word libs__handle_options__V_1487_1487;
#line 13333 "libs.handle_options.c"
        MR_Word libs__handle_options__V_1489_1489;
#line 13335 "libs.handle_options.c"
        MR_Word libs__handle_options__V_1490_1490;
#line 13337 "libs.handle_options.c"
        MR_Word libs__handle_options__V_1491_1491;
#line 13339 "libs.handle_options.c"
        MR_Word libs__handle_options__V_1492_1492;
#line 13341 "libs.handle_options.c"
        MR_String libs__handle_options__V_1493_1493;
#line 13343 "libs.handle_options.c"
        MR_Word libs__handle_options__IntermodDirs3_6216;
#line 13345 "libs.handle_options.c"
        MR_Word libs__handle_options__LinkLibDirs2_6217;
#line 13347 "libs.handle_options.c"
        MR_Word libs__handle_options__InitDirs2_6218;
#line 13349 "libs.handle_options.c"
        MR_Word libs__handle_options__V_6219_6219;

#line 2183 "handle_options.m"
        {
#line 2183 "handle_options.m"
          libs__handle_options__V_1485_1485 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", libs__handle_options__GradeString_141);
        }
#line 2183 "handle_options.m"
        {
#line 2183 "handle_options.m"
          libs__handle_options__GradeSubdir_163 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1485_1485, libs__handle_options__TargetArch_129);
        }
#line 13362 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_1645_1645 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2187 "handle_options.m"
        {
#line 2187 "handle_options.m"
          libs__handle_options__SearchLibFilesGradeSubdirs_164 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1645_1645, libs__handle_options__TypeCtorInfo_1645_1645, libs__handle_options__ToGradeSubdir_161, libs__handle_options__SearchLibFilesDirs_159);
        }
#line 2189 "handle_options.m"
        {
#line 2189 "handle_options.m"
          libs__handle_options__V_1487_1487 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2189 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1487_1487, 0) = ((MR_Box) (libs__handle_options__GradeSubdir_163));
#line 2189 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1487_1487, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2189 "handle_options.m"
        }
#line 2190 "handle_options.m"
        {
#line 2190 "handle_options.m"
          libs__handle_options__V_1493_1493 = mercury__dir__this_directory_0_f_0();
        }
#line 2190 "handle_options.m"
        {
#line 2190 "handle_options.m"
          libs__handle_options__V_1492_1492 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2190 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1492_1492, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[4]));
#line 2190 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1492_1492, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_6));
#line 2190 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1492_1492, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2190 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1492_1492, 3) = ((MR_Box) (libs__handle_options__V_1493_1493));
#line 2190 "handle_options.m"
        }
#line 2190 "handle_options.m"
        {
#line 2190 "handle_options.m"
          libs__handle_options__V_1491_1491 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2190 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1491_1491, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[5]));
#line 2190 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1491_1491, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_7));
#line 2190 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1491_1491, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2190 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1491_1491, 3) = ((MR_Box) (libs__handle_options__V_1492_1492));
#line 2190 "handle_options.m"
        }
#line 2190 "handle_options.m"
        {
#line 2190 "handle_options.m"
          libs__handle_options__V_1490_1490 = mercury__list__filter_2_f_0(libs__handle_options__TypeCtorInfo_1645_1645, libs__handle_options__V_1491_1491, libs__handle_options__IntermodDirs2_160);
        }
#line 2189 "handle_options.m"
        {
#line 2189 "handle_options.m"
          libs__handle_options__V_1489_1489 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1645_1645, libs__handle_options__SearchLibFilesGradeSubdirs_164, libs__handle_options__V_1490_1490);
        }
#line 2189 "handle_options.m"
        {
#line 2189 "handle_options.m"
          libs__handle_options__IntermodDirs3_6216 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1645_1645, libs__handle_options__V_1487_1487, libs__handle_options__V_1489_1489);
        }
#line 2196 "handle_options.m"
        {
#line 2196 "handle_options.m"
          libs__handle_options__V_6219_6219 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2196 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_6219_6219, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2196 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_6219_6219, 1) = ((MR_Box) (libs__handle_options__IntermodDirs3_6216));
#line 2196 "handle_options.m"
        }
#line 2195 "handle_options.m"
        {
#line 2195 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 649, libs__handle_options__V_6219_6219, libs__handle_options__STATE_VARIABLE_Globals_1475_1475, &libs__handle_options__STATE_VARIABLE_Globals_1496_1496);
        }
#line 2198 "handle_options.m"
        {
#line 2198 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1496_1496, (MR_Integer) 544, &libs__handle_options__LinkLibDirs2_6217);
        }
#line 2200 "handle_options.m"
        {
#line 2200 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1496_1496, (MR_Integer) 556, &libs__handle_options__InitDirs2_6218);
        }
#line 2208 "handle_options.m"
        {
#line 2208 "handle_options.m"
          libs__handle_options__ToGradeLibDir_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2208 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_168, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[2]));
#line 2208 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_168, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_8));
#line 2208 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_168, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2208 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_168, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_161));
#line 2208 "handle_options.m"
        }
#line 13466 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_1651_1651 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2209 "handle_options.m"
        {
#line 2209 "handle_options.m"
          libs__handle_options__SearchGradeLibDirs_169 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1651_1651, libs__handle_options__TypeCtorInfo_1651_1651, libs__handle_options__ToGradeLibDir_168, libs__handle_options__SearchLibFilesDirs_159);
        }
#line 2210 "handle_options.m"
        {
#line 2210 "handle_options.m"
          libs__handle_options__LinkLibDirs_170 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1651_1651, libs__handle_options__SearchGradeLibDirs_169, libs__handle_options__LinkLibDirs2_6217);
        }
#line 2212 "handle_options.m"
        {
#line 2212 "handle_options.m"
          libs__handle_options__ToGradeInitDir_171 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2212 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_171, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[2]));
#line 2212 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_171, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_9));
#line 2212 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_171, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2212 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_171, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_161));
#line 2212 "handle_options.m"
        }
#line 2214 "handle_options.m"
        {
#line 2214 "handle_options.m"
          libs__handle_options__SearchGradeInitDirs_172 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1651_1651, libs__handle_options__TypeCtorInfo_1651_1651, libs__handle_options__ToGradeInitDir_171, libs__handle_options__SearchLibFilesDirs_159);
        }
#line 2215 "handle_options.m"
        {
#line 2215 "handle_options.m"
          libs__handle_options__InitDirs_173 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1651_1651, libs__handle_options__SearchGradeInitDirs_172, libs__handle_options__InitDirs2_6218);
        }
#line 13502 "libs.handle_options.c"
      }
#line 2222 "handle_options.m"
    {
#line 2222 "handle_options.m"
      libs__handle_options__V_1512_1512 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2222 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1512_1512, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2222 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1512_1512, 1) = ((MR_Box) (libs__handle_options__LinkLibDirs_170));
#line 2222 "handle_options.m"
    }
#line 2221 "handle_options.m"
    {
#line 2221 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 544, libs__handle_options__V_1512_1512, libs__handle_options__STATE_VARIABLE_Globals_1496_1496, &libs__handle_options__STATE_VARIABLE_Globals_1513_1513);
    }
#line 2224 "handle_options.m"
    {
#line 2224 "handle_options.m"
      libs__handle_options__V_1515_1515 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2224 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1515_1515, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2224 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1515_1515, 1) = ((MR_Box) (libs__handle_options__InitDirs_173));
#line 2224 "handle_options.m"
    }
#line 2223 "handle_options.m"
    {
#line 2223 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 556, libs__handle_options__V_1515_1515, libs__handle_options__STATE_VARIABLE_Globals_1513_1513, &libs__handle_options__STATE_VARIABLE_Globals_1516_1516);
    }
#line 2230 "handle_options.m"
    {
#line 2230 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1516_1516, (MR_Integer) 646, &libs__handle_options__UseSubdirs_174);
    }
#line 2238 "handle_options.m"
    if ((libs__handle_options__UseGradeSubdirs_158 == (MR_Integer) 0))
#line 2239 "handle_options.m"
      {
#line 13543 "libs.handle_options.c"
        libs__handle_options__succeeded = (libs__handle_options__UseSubdirs_174 == (MR_Integer) 1);
#line 2239 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 2239 "handle_options.m"
          {
#line 2242 "handle_options.m"
            libs__handle_options__ToMihsSubdir_175 = (MR_Word) &libs__handle_options_scalar_common_1[15];
#line 2243 "handle_options.m"
            libs__handle_options__ToHrlsSubdir_176 = (MR_Word) &libs__handle_options_scalar_common_1[16];
#line 2243 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 2239 "handle_options.m"
          }
#line 2239 "handle_options.m"
      }
#line 2238 "handle_options.m"
    else
#line 2233 "handle_options.m"
      {
#line 2234 "handle_options.m"
        {
#line 2234 "handle_options.m"
          libs__handle_options__ToMihsSubdir_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2234 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_175, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[2]));
#line 2234 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_175, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_12));
#line 2234 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_175, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2234 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_175, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_161));
#line 2234 "handle_options.m"
        }
#line 2236 "handle_options.m"
        {
#line 2236 "handle_options.m"
          libs__handle_options__ToHrlsSubdir_176 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2236 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_176, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[2]));
#line 2236 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_176, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_13));
#line 2236 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_176, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2236 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_176, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_161));
#line 2236 "handle_options.m"
        }
#line 2233 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2233 "handle_options.m"
      }
#line 2265 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2251 "handle_options.m"
      {
#line 2251 "handle_options.m"
        MR_Word libs__handle_options__TypeCtorInfo_1653_1653;
#line 2251 "handle_options.m"
        MR_Word libs__handle_options__CIncludeDirs1_177;
#line 2251 "handle_options.m"
        MR_String libs__handle_options__MihsSubdir_178;
#line 2251 "handle_options.m"
        MR_Word libs__handle_options__SearchLibMihsSubdirs_179;
#line 2251 "handle_options.m"
        MR_Word libs__handle_options__SubdirCIncludeDirs_180;
#line 2251 "handle_options.m"
        MR_Word libs__handle_options__ErlangIncludeDirs1_181;
#line 2251 "handle_options.m"
        MR_String libs__handle_options__HrlsSubdir_182;
#line 2251 "handle_options.m"
        MR_Word libs__handle_options__SubdirErlangIncludeDirs_183;
#line 2251 "handle_options.m"
        MR_String libs__handle_options__V_1541_1541;
#line 2251 "handle_options.m"
        MR_String libs__handle_options__V_1542_1542;
#line 2251 "handle_options.m"
        MR_Word libs__handle_options__V_1543_1543;
#line 2251 "handle_options.m"
        MR_Word libs__handle_options__V_1544_1544;
#line 2251 "handle_options.m"
        MR_Word libs__handle_options__V_1546_1546;
#line 2251 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1547_1547;
#line 2251 "handle_options.m"
        MR_String libs__handle_options__V_1549_1549;
#line 2251 "handle_options.m"
        MR_Word libs__handle_options__V_1551_1551;
#line 2252 "handle_options.m"
        MR_Box MR_CALL (* libs__handle_options__func_11)(MR_Box, MR_Box);
#line 2252 "handle_options.m"
        MR_Box libs__handle_options__conv12_MihsSubdir_178;
#line 2261 "handle_options.m"
        MR_Box MR_CALL (* libs__handle_options__func_13)(MR_Box, MR_Box);
#line 2261 "handle_options.m"
        MR_Box libs__handle_options__conv14_HrlsSubdir_182;

#line 2250 "handle_options.m"
        {
#line 2250 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1516_1516, (MR_Integer) 491, &libs__handle_options__CIncludeDirs1_177);
        }
#line 2252 "handle_options.m"
        {
#line 2252 "handle_options.m"
          libs__handle_options__V_1541_1541 = mercury__dir__this_directory_0_f_0();
        }
#line 2252 "handle_options.m"
        libs__handle_options__func_11 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_175, (MR_Integer) 1)));
#line 2252 "handle_options.m"
        {
#line 2252 "handle_options.m"
          libs__handle_options__conv12_MihsSubdir_178 = libs__handle_options__func_11(((MR_Box) libs__handle_options__ToMihsSubdir_175), ((MR_Box) (libs__handle_options__V_1541_1541)));
        }
#line 2252 "handle_options.m"
        libs__handle_options__MihsSubdir_178 = ((MR_String) libs__handle_options__conv12_MihsSubdir_178);
#line 13659 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_1653_1653 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2253 "handle_options.m"
        {
#line 2253 "handle_options.m"
          libs__handle_options__SearchLibMihsSubdirs_179 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1653_1653, libs__handle_options__TypeCtorInfo_1653_1653, libs__handle_options__ToMihsSubdir_175, libs__handle_options__SearchLibFilesDirs_159);
        }
#line 2254 "handle_options.m"
        {
#line 2254 "handle_options.m"
          libs__handle_options__V_1542_1542 = mercury__dir__this_directory_0_f_0();
        }
#line 2255 "handle_options.m"
        {
#line 2255 "handle_options.m"
          libs__handle_options__V_1544_1544 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1653_1653, libs__handle_options__SearchLibMihsSubdirs_179, libs__handle_options__CIncludeDirs1_177);
        }
#line 2254 "handle_options.m"
        {
#line 2254 "handle_options.m"
          libs__handle_options__V_1543_1543 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2254 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1543_1543, 0) = ((MR_Box) (libs__handle_options__MihsSubdir_178));
#line 2254 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1543_1543, 1) = ((MR_Box) (libs__handle_options__V_1544_1544));
#line 2254 "handle_options.m"
        }
#line 2254 "handle_options.m"
        {
#line 2254 "handle_options.m"
          libs__handle_options__SubdirCIncludeDirs_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2254 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirCIncludeDirs_180, 0) = ((MR_Box) (libs__handle_options__V_1542_1542));
#line 2254 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirCIncludeDirs_180, 1) = ((MR_Box) (libs__handle_options__V_1543_1543));
#line 2254 "handle_options.m"
        }
#line 2257 "handle_options.m"
        {
#line 2257 "handle_options.m"
          libs__handle_options__V_1546_1546 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2257 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1546_1546, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2257 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1546_1546, 1) = ((MR_Box) (libs__handle_options__SubdirCIncludeDirs_180));
#line 2257 "handle_options.m"
        }
#line 2256 "handle_options.m"
        {
#line 2256 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 491, libs__handle_options__V_1546_1546, libs__handle_options__STATE_VARIABLE_Globals_1516_1516, &libs__handle_options__STATE_VARIABLE_Globals_1547_1547);
        }
#line 2259 "handle_options.m"
        {
#line 2259 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1547_1547, (MR_Integer) 535, &libs__handle_options__ErlangIncludeDirs1_181);
        }
#line 2261 "handle_options.m"
        {
#line 2261 "handle_options.m"
          libs__handle_options__V_1549_1549 = mercury__dir__this_directory_0_f_0();
        }
#line 2261 "handle_options.m"
        libs__handle_options__func_13 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_176, (MR_Integer) 1)));
#line 2261 "handle_options.m"
        {
#line 2261 "handle_options.m"
          libs__handle_options__conv14_HrlsSubdir_182 = libs__handle_options__func_13(((MR_Box) libs__handle_options__ToHrlsSubdir_176), ((MR_Box) (libs__handle_options__V_1549_1549)));
        }
#line 2261 "handle_options.m"
        libs__handle_options__HrlsSubdir_182 = ((MR_String) libs__handle_options__conv14_HrlsSubdir_182);
#line 2262 "handle_options.m"
        {
#line 2262 "handle_options.m"
          libs__handle_options__SubdirErlangIncludeDirs_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2262 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirErlangIncludeDirs_183, 0) = ((MR_Box) (libs__handle_options__HrlsSubdir_182));
#line 2262 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirErlangIncludeDirs_183, 1) = ((MR_Box) (libs__handle_options__ErlangIncludeDirs1_181));
#line 2262 "handle_options.m"
        }
#line 2264 "handle_options.m"
        {
#line 2264 "handle_options.m"
          libs__handle_options__V_1551_1551 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2264 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1551_1551, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2264 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1551_1551, 1) = ((MR_Box) (libs__handle_options__SubdirErlangIncludeDirs_183));
#line 2264 "handle_options.m"
        }
#line 2263 "handle_options.m"
        {
#line 2263 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 535, libs__handle_options__V_1551_1551, libs__handle_options__STATE_VARIABLE_Globals_1547_1547, &libs__handle_options__STATE_VARIABLE_Globals_1552_1552);
        }
#line 2251 "handle_options.m"
      }
#line 2265 "handle_options.m"
    else
#line 2265 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1552_1552 = libs__handle_options__STATE_VARIABLE_Globals_1516_1516;
#line 2271 "handle_options.m"
    {
#line 2271 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 330, (MR_Integer) 12, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1552_1552, &libs__handle_options__STATE_VARIABLE_Globals_1556_1556);
    }
#line 1871 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_102 == (MR_Integer) 1);
#line 1871 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1871 "handle_options.m"
      {
#line 1872 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__GC_Method_27 == (MR_Integer) 5);
#line 1871 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1873 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__PutNondetEnvOnHeap_118 == (MR_Integer) 1);
#line 1871 "handle_options.m"
      }
#line 13780 "libs.handle_options.c"
    if (libs__handle_options__succeeded)
#line 13782 "libs.handle_options.c"
      {
#line 13784 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Errors_1251_1251;

#line 1875 "handle_options.m"
        {
#line 1875 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "--gc accurate is incompatible with --put-nondet-env-on-heap", libs__handle_options__STATE_VARIABLE_Errors_1164_1164, &libs__handle_options__STATE_VARIABLE_Errors_1251_1251);
        }
#line 2284 "handle_options.m"
        {
#line 2284 "handle_options.m"
          libs__handle_options__option_requires_7_p_0((MR_Integer) 25, (MR_Integer) 457, libs__handle_options__V_273_273, (MR_String) "--warn-non-tail-recursion requires --optimize-tailcalls", libs__handle_options__STATE_VARIABLE_Globals_1556_1556, libs__handle_options__STATE_VARIABLE_Errors_1251_1251, &libs__handle_options__STATE_VARIABLE_Errors_1568_1568);
        }
#line 13797 "libs.handle_options.c"
      }
#line 13799 "libs.handle_options.c"
    else
#line 2282 "handle_options.m"
    if ((libs__handle_options__HighLevelCode_102 == (MR_Integer) 0))
#line 2277 "handle_options.m"
      {
#line 2278 "handle_options.m"
        {
#line 2278 "handle_options.m"
          libs__handle_options__option_requires_7_p_0((MR_Integer) 25, (MR_Integer) 468, libs__handle_options__V_484_484, (MR_String) "--warn-non-tail-recursion is incompatible with --pessimize-tailcalls", libs__handle_options__STATE_VARIABLE_Globals_1556_1556, libs__handle_options__STATE_VARIABLE_Errors_1164_1164, &libs__handle_options__STATE_VARIABLE_Errors_1568_1568);
        }
#line 2277 "handle_options.m"
      }
#line 2282 "handle_options.m"
    else
#line 2283 "handle_options.m"
      {
#line 2284 "handle_options.m"
        {
#line 2284 "handle_options.m"
          libs__handle_options__option_requires_7_p_0((MR_Integer) 25, (MR_Integer) 457, libs__handle_options__V_273_273, (MR_String) "--warn-non-tail-recursion requires --optimize-tailcalls", libs__handle_options__STATE_VARIABLE_Globals_1556_1556, libs__handle_options__STATE_VARIABLE_Errors_1164_1164, &libs__handle_options__STATE_VARIABLE_Errors_1568_1568);
        }
#line 2283 "handle_options.m"
      }
#line 2288 "handle_options.m"
    {
#line 2288 "handle_options.m"
      libs__handle_options__option_requires_7_p_0((MR_Integer) 25, (MR_Integer) 98, libs__handle_options__V_484_484, (MR_String) "--warn-non-tail-recursion is incompatible with --errorcheck-only", libs__handle_options__STATE_VARIABLE_Globals_1556_1556, libs__handle_options__STATE_VARIABLE_Errors_1568_1568, &libs__handle_options__STATE_VARIABLE_Errors_1576_1576);
    }
#line 2297 "handle_options.m"
    if ((libs__handle_options__Target_26 == (MR_Integer) 0))
#line 2295 "handle_options.m"
      {
#line 2296 "handle_options.m"
        libs__handle_options__BackendForeignLanguages_184 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[200]);
#line 2295 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1600_1600 = libs__handle_options__STATE_VARIABLE_Globals_1556_1556;
#line 2295 "handle_options.m"
      }
#line 2297 "handle_options.m"
    else
#line 2297 "handle_options.m"
    if ((libs__handle_options__Target_26 == (MR_Integer) 2))
#line 2302 "handle_options.m"
      {
#line 2303 "handle_options.m"
        libs__handle_options__BackendForeignLanguages_184 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[12]);
#line 2302 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1600_1600 = libs__handle_options__STATE_VARIABLE_Globals_1556_1556;
#line 2302 "handle_options.m"
      }
#line 2297 "handle_options.m"
    else
#line 2297 "handle_options.m"
    if ((libs__handle_options__Target_26 == (MR_Integer) 4))
#line 2308 "handle_options.m"
      {
#line 2308 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1584_1584;

#line 2309 "handle_options.m"
        libs__handle_options__BackendForeignLanguages_184 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[201]);
#line 2310 "handle_options.m"
        {
#line 2310 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 366, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1556_1556, &libs__handle_options__STATE_VARIABLE_Globals_1584_1584);
        }
#line 2311 "handle_options.m"
        {
#line 2311 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 299, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1584_1584, &libs__handle_options__STATE_VARIABLE_Globals_1600_1600);
        }
#line 2308 "handle_options.m"
      }
#line 2297 "handle_options.m"
    else
#line 2297 "handle_options.m"
    if ((libs__handle_options__Target_26 == (MR_Integer) 1))
#line 2298 "handle_options.m"
      {
#line 2299 "handle_options.m"
        libs__handle_options__BackendForeignLanguages_184 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[13]);
#line 2300 "handle_options.m"
        {
#line 2300 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 366, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1556_1556, &libs__handle_options__STATE_VARIABLE_Globals_1600_1600);
        }
#line 2298 "handle_options.m"
      }
#line 2297 "handle_options.m"
    else
#line 2305 "handle_options.m"
      {
#line 2306 "handle_options.m"
        libs__handle_options__BackendForeignLanguages_184 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[202]);
#line 2305 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1600_1600 = libs__handle_options__STATE_VARIABLE_Globals_1556_1556;
#line 2305 "handle_options.m"
      }
#line 2315 "handle_options.m"
    {
#line 2315 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1600_1600, (MR_Integer) 265, &libs__handle_options__CurrentBackendForeignLanguage_185);
    }
#line 2321 "handle_options.m"
    if ((libs__handle_options__CurrentBackendForeignLanguage_185 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2318 "handle_options.m"
      {
#line 2318 "handle_options.m"
        MR_Word libs__handle_options__V_1606_1606;

#line 2320 "handle_options.m"
        {
#line 2320 "handle_options.m"
          libs__handle_options__V_1606_1606 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2320 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1606_1606, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2320 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1606_1606, 1) = ((MR_Box) (libs__handle_options__BackendForeignLanguages_184));
#line 2320 "handle_options.m"
        }
#line 2319 "handle_options.m"
        {
#line 2319 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 265, libs__handle_options__V_1606_1606, libs__handle_options__STATE_VARIABLE_Globals_1600_1600, &libs__handle_options__STATE_VARIABLE_Globals_1607_1607);
        }
#line 2318 "handle_options.m"
      }
#line 2321 "handle_options.m"
    else
#line 2322 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1607_1607 = libs__handle_options__STATE_VARIABLE_Globals_1600_1600;
#line 2325 "handle_options.m"
    {
#line 2325 "handle_options.m"
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1607_1607, (MR_Integer) 318, &libs__handle_options__CompareSpec_188);
    }
#line 2327 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__CompareSpec_188 < (MR_Integer) 0);
#line 2339 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2335 "handle_options.m"
      if ((libs__handle_options__HighLevelCode_102 == (MR_Integer) 0))
#line 2333 "handle_options.m"
        {
#line 2334 "handle_options.m"
          {
#line 2334 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 318, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[12]), libs__handle_options__STATE_VARIABLE_Globals_1607_1607, &libs__handle_options__STATE_VARIABLE_Globals_1616_1616);
          }
#line 2333 "handle_options.m"
        }
#line 2335 "handle_options.m"
      else
#line 2336 "handle_options.m"
        {
#line 2337 "handle_options.m"
          {
#line 2337 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 318, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[13]), libs__handle_options__STATE_VARIABLE_Globals_1607_1607, &libs__handle_options__STATE_VARIABLE_Globals_1616_1616);
          }
#line 2336 "handle_options.m"
        }
#line 2339 "handle_options.m"
    else
#line 2339 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1616_1616 = libs__handle_options__STATE_VARIABLE_Globals_1607_1607;
#line 2346 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__Target_26 == (MR_Integer) 0);
#line 2346 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2346 "handle_options.m"
      {
#line 2352 "handle_options.m"
        if ((libs__handle_options__TagsMethod_58 == (MR_Integer) 2))
#line 2352 "handle_options.m"
          libs__handle_options__succeeded = MR_TRUE;
#line 2352 "handle_options.m"
        else
#line 2352 "handle_options.m"
        if ((libs__handle_options__TagsMethod_58 == (MR_Integer) 1))
#line 2351 "handle_options.m"
          libs__handle_options__succeeded = MR_TRUE;
#line 2352 "handle_options.m"
        else
#line 2352 "handle_options.m"
          libs__handle_options__succeeded = MR_FALSE;
#line 2346 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 2346 "handle_options.m"
          {
#line 2354 "handle_options.m"
            libs__handle_options__V_1618_1618 = (MR_Integer) 2;
#line 2354 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__NumTagBits_57 >= libs__handle_options__V_1618_1618);
#line 2346 "handle_options.m"
          }
#line 2346 "handle_options.m"
      }
#line 2358 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2356 "handle_options.m"
      {
#line 2356 "handle_options.m"
        {
#line 2356 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 272, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1616_1616, &libs__handle_options__STATE_VARIABLE_Globals_1621_1621);
        }
#line 2356 "handle_options.m"
      }
#line 2358 "handle_options.m"
    else
#line 2359 "handle_options.m"
      {
#line 2359 "handle_options.m"
        {
#line 2359 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 272, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_1616_1616, &libs__handle_options__STATE_VARIABLE_Globals_1621_1621);
        }
#line 2359 "handle_options.m"
      }
#line 2366 "handle_options.m"
    if ((libs__handle_options__HighLevelCode_102 == (MR_Integer) 0))
#line 2365 "handle_options.m"
      {
#line 2365 "handle_options.m"
        libs__handle_options__postprocess_options_lowlevel_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_1621_1621, &libs__handle_options__STATE_VARIABLE_Globals_1627_1627);
      }
#line 2366 "handle_options.m"
    else
#line 2367 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1627_1627 = libs__handle_options__STATE_VARIABLE_Globals_1621_1621;
#line 2369 "handle_options.m"
    {
#line 2369 "handle_options.m"
      libs__handle_options__postprocess_options_libgrades_4_p_0(libs__handle_options__STATE_VARIABLE_Globals_1627_1627, libs__handle_options__STATE_VARIABLE_Globals_191, libs__handle_options__STATE_VARIABLE_Errors_1576_1576, libs__handle_options__STATE_VARIABLE_Errors_190);
    }
#line 2370 "handle_options.m"
    {
#line 2370 "handle_options.m"
      libs__globals__globals_init_mutables_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_191);
#line 2370 "handle_options.m"
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
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_0_133, ((MR_Box) ((MR_Integer) 176)), &libs__handle_options__conv0_Target0_46);
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
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_0_133, ((MR_Box) ((MR_Integer) 215)), &libs__handle_options__conv1_GC_Method0_49);
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
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_0_133, ((MR_Box) ((MR_Integer) 236)), &libs__handle_options__conv2_TagsMethod0_52);
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
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_0_133, ((MR_Box) ((MR_Integer) 321)), &libs__handle_options__conv3_PercentFull_55);
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
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_0_133, ((MR_Box) ((MR_Integer) 420)), &libs__handle_options__conv4_TermNorm0_57);
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
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_0_133, ((MR_Box) ((MR_Integer) 426)), &libs__handle_options__conv5_Term2Norm0_60);
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
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_0_133, ((MR_Box) ((MR_Integer) 131)), &libs__handle_options__conv6_ForceDisableTracing_63);
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
          mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_0_133, ((MR_Box) ((MR_Integer) 119)), &libs__handle_options__conv7_Trace_64);
        }
#line 337 "handle_options.m"
        libs__handle_options__Trace_64 = ((MR_Word) libs__handle_options__conv7_Trace_64);
#line 338 "handle_options.m"
        {
#line 338 "handle_options.m"
          mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_0_133, ((MR_Box) ((MR_Integer) 186)), &libs__handle_options__conv8_ExecTraceOpt_65);
        }
#line 338 "handle_options.m"
        libs__handle_options__ExecTraceOpt_65 = ((MR_Word) libs__handle_options__conv8_ExecTraceOpt_65);
#line 339 "handle_options.m"
        {
#line 339 "handle_options.m"
          mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_0_133, ((MR_Box) ((MR_Integer) 187)), &libs__handle_options__conv9_DeclDebugOpt_66);
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
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_0_133, ((MR_Box) ((MR_Integer) 130)), &libs__handle_options__conv10_Suppress_71);
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
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_0_133, ((MR_Box) ((MR_Integer) 135)), &libs__handle_options__conv11_ForceDisableSSDB_74);
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
          mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_0_133, ((MR_Box) ((MR_Integer) 234)), &libs__handle_options__conv12_SSTrace_75);
        }
#line 378 "handle_options.m"
        libs__handle_options__SSTrace_75 = ((MR_Word) libs__handle_options__conv12_SSTrace_75);
#line 379 "handle_options.m"
        {
#line 379 "handle_options.m"
          mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_0_133, ((MR_Box) ((MR_Integer) 233)), &libs__handle_options__conv13_SSDB_76);
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
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_0_133, ((MR_Box) ((MR_Integer) 226)), &libs__handle_options__conv14_MaybeThreadSafeOption_80);
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
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_0_133, ((MR_Box) ((MR_Integer) 149)), &libs__handle_options__conv15_DumpAliasOption_83);
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
              mercury__map__set_4_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, ((MR_Box) ((MR_Integer) 150)), ((MR_Box) (libs__handle_options__V_208_208)), libs__handle_options__STATE_VARIABLE_OptionTable_0_133, &libs__handle_options__STATE_VARIABLE_OptionTable_209_209);
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
      mercury__getopt_io__lookup_string_option_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__STATE_VARIABLE_OptionTable_209_209, ((MR_Box) ((MR_Integer) 150)), &libs__handle_options__STATE_VARIABLE_DumpOptions_213_213);
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
      mercury__map__set_4_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, ((MR_Box) ((MR_Integer) 150)), ((MR_Box) (libs__handle_options__V_248_248)), libs__handle_options__STATE_VARIABLE_OptionTable_209_209, &libs__handle_options__STATE_VARIABLE_OptionTable_249_249);
    }
#line 481 "handle_options.m"
    {
#line 481 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_249_249, ((MR_Box) ((MR_Integer) 513)), &libs__handle_options__conv16_C_CompilerType0_87);
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
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_249_249, ((MR_Box) ((MR_Integer) 514)), &libs__handle_options__conv17_CSharp_CompilerType0_90);
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
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_249_249, ((MR_Box) ((MR_Integer) 411)), &libs__handle_options__conv18_ReuseConstraint0_93);
    }
#line 509 "handle_options.m"
    libs__handle_options__ReuseConstraint0_93 = ((MR_Word) libs__handle_options__conv18_ReuseConstraint0_93);
#line 510 "handle_options.m"
    {
#line 510 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_249_249, ((MR_Box) ((MR_Integer) 412)), &libs__handle_options__conv19_ReuseConstraintArg0_94);
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
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_249_249, ((MR_Box) ((MR_Integer) 524)), &libs__handle_options__conv20_DotNetLibVersionOpt_98);
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
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, *libs__handle_options__STATE_VARIABLE_OptionTable_134, ((MR_Box) ((MR_Integer) 675)), &libs__handle_options__conv21_FeedbackFile0_110);
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
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, *libs__handle_options__STATE_VARIABLE_OptionTable_134, ((MR_Box) ((MR_Integer) 657)), &libs__handle_options__conv22_HostEnvType0_117);
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
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, *libs__handle_options__STATE_VARIABLE_OptionTable_134, ((MR_Box) ((MR_Integer) 658)), &libs__handle_options__conv23_SystemEnvType0_120);
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
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, *libs__handle_options__STATE_VARIABLE_OptionTable_134, ((MR_Box) ((MR_Integer) 659)), &libs__handle_options__conv24_TargetEnvType0_123);
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

#line 2857 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_directory_component_2_p_0_1(
#line 2857 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2857 "handle_options.m"
{
#line 2857 "handle_options.m"
  {
#line 2857 "handle_options.m"
    struct libs__handle_options__grade_directory_component_2_p_0_2_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__grade_directory_component_2_p_0_2_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2857 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__grade_directory_component_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__grade_directory_component_2_p_0_2_env_0__conv0_HeadVar__2_16));
#line 2857 "handle_options.m"
    {
#line 2857 "handle_options.m"
      ((libs__handle_options__env_ptr)->libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont_env_ptr);
#line 2857 "handle_options.m"
      return;
    }
#line 2857 "handle_options.m"
  }
#line 2857 "handle_options.m"
}

#line 2857 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_directory_component_2_p_0_2(
#line 2857 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2857 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 2857 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2857 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 2857 "handle_options.m"
{
#line 2857 "handle_options.m"
  {
#line 2857 "handle_options.m"
    struct libs__handle_options__grade_directory_component_2_p_0_2_env_0_s libs__handle_options__env;

#line 2857 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__grade_directory_component_2_p_0_2_env_0__wrapper_arg_1 = libs__handle_options__wrapper_arg_1;
#line 2857 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont = libs__handle_options__cont;
#line 2857 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
#line 2857 "handle_options.m"
    {
#line 2857 "handle_options.m"
      MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2857 "handle_options.m"
      {
#line 2857 "handle_options.m"
        libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), &(libs__handle_options__env).libs__handle_options__grade_directory_component_2_p_0_2_env_0__conv0_HeadVar__2_16, libs__handle_options__grade_directory_component_2_p_0_1, &libs__handle_options__env);
      }
#line 2857 "handle_options.m"
    }
#line 2857 "handle_options.m"
  }
#line 2857 "handle_options.m"
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
#line 2813 "handle_options.m"
  {
#line 2813 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2813 "handle_options.m"
    MR_String libs__handle_options__Grade0_5;
#line 2813 "handle_options.m"
    MR_Word libs__handle_options__Options_14;
#line 2813 "handle_options.m"
    MR_Word libs__handle_options__Components_15;
#line 2813 "handle_options.m"
    MR_Word libs__handle_options__V_30_30;
#line 2824 "handle_options.m"
    MR_String libs__handle_options__LeftPart_7;
#line 2824 "handle_options.m"
    MR_String libs__handle_options__RightPart_9;
#line 2819 "handle_options.m"
    MR_Integer libs__handle_options__PicRegIndex_6;
#line 2819 "handle_options.m"
    MR_String libs__handle_options__RightPart0_8;
#line 2819 "handle_options.m"
    MR_String libs__handle_options__V_11_11;

#line 2829 "handle_options.m"
    {
#line 2829 "handle_options.m"
      libs__globals__get_options_2_p_0(libs__handle_options__Globals_3, &libs__handle_options__Options_14);
    }
#line 2857 "handle_options.m"
    {
#line 2857 "handle_options.m"
      libs__handle_options__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2857 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_30_30, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[3]));
#line 2857 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_30_30, 1) = ((MR_Box) (libs__handle_options__grade_directory_component_2_p_0_2));
#line 2857 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2857 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_30_30, 3) = ((MR_Box) (libs__handle_options__Options_14));
#line 2857 "handle_options.m"
    }
#line 2857 "handle_options.m"
    {
#line 2857 "handle_options.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &libs__handle_options_scalar_common_1[2], libs__handle_options__V_30_30, &libs__handle_options__Components_15);
    }
#line 2834 "handle_options.m"
    if ((libs__handle_options__Components_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2833 "handle_options.m"
      libs__handle_options__Grade0_5 = (MR_String) "none";
#line 2834 "handle_options.m"
    else
#line 2836 "handle_options.m"
      {
#line 2836 "handle_options.m"
        libs__handle_options__construct_string_2_p_0(libs__handle_options__Components_15, &libs__handle_options__Grade0_5);
      }
#line 2819 "handle_options.m"
    {
#line 2819 "handle_options.m"
      libs__handle_options__succeeded = mercury__string__sub_string_search_3_p_0(libs__handle_options__Grade0_5, (MR_String) ".picreg", &libs__handle_options__PicRegIndex_6);
    }
#line 2819 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2819 "handle_options.m"
      {
#line 2820 "handle_options.m"
        {
#line 2820 "handle_options.m"
          mercury__string__split_4_p_0(libs__handle_options__Grade0_5, libs__handle_options__PicRegIndex_6, &libs__handle_options__LeftPart_7, &libs__handle_options__RightPart0_8);
        }
#line 2821 "handle_options.m"
        libs__handle_options__V_11_11 = (MR_String) ".picreg";
#line 2821 "handle_options.m"
        {
#line 2821 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__append_3_p_1(libs__handle_options__V_11_11, &libs__handle_options__RightPart_9, libs__handle_options__RightPart0_8);
        }
#line 2819 "handle_options.m"
      }
#line 2824 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2823 "handle_options.m"
      {
#line 2823 "handle_options.m"
        *libs__handle_options__Grade_4 = mercury__string__f_43_43_2_f_0(libs__handle_options__LeftPart_7, libs__handle_options__RightPart_9);
      }
#line 2824 "handle_options.m"
    else
#line 2825 "handle_options.m"
      *libs__handle_options__Grade_4 = libs__handle_options__Grade0_5;
#line 2813 "handle_options.m"
  }
#line 80 "handle_options.m"
}

#line 2785 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_4(
#line 2785 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2785 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2785 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2785 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2785 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2785 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5)
#line 2785 "handle_options.m"
{
#line 2785 "handle_options.m"
  {
#line 2785 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2785 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2785 "handle_options.m"
    MR_Word libs__handle_options__conv4_HeadVar__3_25;
#line 2785 "handle_options.m"
    MR_Word libs__handle_options__conv3_HeadVar__5_27;

#line 2785 "handle_options.m"
    {
#line 2785 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__convert_grade_option__2785__1_5_p_0(((MR_String) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv4_HeadVar__3_25, ((MR_Word) libs__handle_options__wrapper_arg_4), &libs__handle_options__conv3_HeadVar__5_27);
    }
#line 2785 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2785 "handle_options.m"
      {
#line 2785 "handle_options.m"
        *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv4_HeadVar__3_25));
#line 2785 "handle_options.m"
        *libs__handle_options__wrapper_arg_5 = ((MR_Box) (libs__handle_options__conv3_HeadVar__5_27));
#line 2785 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2785 "handle_options.m"
      }
#line 2785 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2785 "handle_options.m"
  }
#line 2785 "handle_options.m"
}

#line 3155 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_3(
#line 3155 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3155 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 3155 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 3155 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3)
#line 3155 "handle_options.m"
{
#line 3155 "handle_options.m"
  {
#line 3155 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 3155 "handle_options.m"
    MR_Word libs__handle_options__conv1_HeadVar__3_14;

#line 3155 "handle_options.m"
    {
#line 3155 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__reset_grade_options__3155__1_3_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv1_HeadVar__3_14);
    }
#line 3155 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv1_HeadVar__3_14));
#line 3155 "handle_options.m"
  }
#line 3155 "handle_options.m"
}

#line 3155 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_1(
#line 3155 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 3155 "handle_options.m"
{
#line 3155 "handle_options.m"
  {
#line 3155 "handle_options.m"
    struct libs__handle_options__convert_grade_option_3_p_0_2_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__convert_grade_option_3_p_0_2_env_0_s *) libs__handle_options__env_ptr_arg;

#line 3155 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__convert_grade_option_3_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__convert_grade_option_3_p_0_2_env_0__conv0_HeadVar__1_1));
#line 3155 "handle_options.m"
    {
#line 3155 "handle_options.m"
      ((libs__handle_options__env_ptr)->libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont_env_ptr);
#line 3155 "handle_options.m"
      return;
    }
#line 3155 "handle_options.m"
  }
#line 3155 "handle_options.m"
}

#line 3155 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_2(
#line 3155 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3155 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 3155 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 3155 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 3155 "handle_options.m"
{
#line 3155 "handle_options.m"
  {
#line 3155 "handle_options.m"
    struct libs__handle_options__convert_grade_option_3_p_0_2_env_0_s libs__handle_options__env;

#line 3155 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__convert_grade_option_3_p_0_2_env_0__wrapper_arg_1 = libs__handle_options__wrapper_arg_1;
#line 3155 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont = libs__handle_options__cont;
#line 3155 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
#line 3155 "handle_options.m"
    {
#line 3155 "handle_options.m"
      MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 3155 "handle_options.m"
      {
#line 3155 "handle_options.m"
        libs__handle_options__grade_start_values_1_p_0(&(libs__handle_options__env).libs__handle_options__convert_grade_option_3_p_0_2_env_0__conv0_HeadVar__1_1, libs__handle_options__convert_grade_option_3_p_0_1, &libs__handle_options__env);
      }
#line 3155 "handle_options.m"
    }
#line 3155 "handle_options.m"
  }
#line 3155 "handle_options.m"
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
#line 2781 "handle_options.m"
  {
#line 2781 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2781 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_39_39;
#line 2781 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_42_42;
#line 2781 "handle_options.m"
    MR_Word libs__handle_options__TypeInfo_43_43;
#line 2781 "handle_options.m"
    MR_Word libs__handle_options__TypeInfo_44_44;
#line 2781 "handle_options.m"
    MR_Word libs__handle_options__Options1_7;
#line 2781 "handle_options.m"
    MR_Word libs__handle_options__Components_8;
#line 2781 "handle_options.m"
    MR_Word libs__handle_options__NoComps_9;
#line 2781 "handle_options.m"
    MR_Word libs__handle_options__V_22_22;
#line 2781 "handle_options.m"
    MR_Word libs__handle_options__Chars_67;
#line 3155 "handle_options.m"
    MR_Box libs__handle_options__conv2_Options1_7;
#line 2785 "handle_options.m"
    MR_Word libs__handle_options___FinalComps_21;
#line 2785 "handle_options.m"
    MR_Box libs__handle_options__conv6_Options_6;
#line 2785 "handle_options.m"
    MR_Box libs__handle_options__conv5__FinalComps_21;

#line 3155 "handle_options.m"
    {
#line 3155 "handle_options.m"
      mercury__solutions__aggregate_4_p_0((MR_Word) &libs__handle_options_scalar_common_1[1], (MR_Word) &libs__handle_options_scalar_common_1[0], (MR_Word) &libs__handle_options_scalar_common_1[7], (MR_Word) &libs__handle_options_scalar_common_1[8], ((MR_Box) (libs__handle_options__Options0_5)), &libs__handle_options__conv2_Options1_7);
    }
#line 3155 "handle_options.m"
    libs__handle_options__Options1_7 = ((MR_Word) libs__handle_options__conv2_Options1_7);
#line 3197 "handle_options.m"
    {
#line 3197 "handle_options.m"
      mercury__string__to_char_list_2_p_0(libs__handle_options__GradeString_4, &libs__handle_options__Chars_67);
    }
#line 3198 "handle_options.m"
    {
#line 3198 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__split_grade_string_2_2_p_0(libs__handle_options__Chars_67, &libs__handle_options__Components_8);
    }
#line 2781 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2781 "handle_options.m"
      {
#line 16971 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_39_39 = (MR_Word) &libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0;
#line 2784 "handle_options.m"
        {
#line 2784 "handle_options.m"
          mercury__set__init_1_p_0(libs__handle_options__TypeCtorInfo_39_39, &libs__handle_options__NoComps_9);
        }
#line 2785 "handle_options.m"
        libs__handle_options__V_22_22 = (MR_Word) &libs__handle_options_scalar_common_1[9];
#line 16980 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 16982 "libs.handle_options.c"
        libs__handle_options__TypeInfo_43_43 = (MR_Word) &libs__handle_options_scalar_common_1[0];
#line 16984 "libs.handle_options.c"
        libs__handle_options__TypeInfo_44_44 = (MR_Word) &libs__handle_options_scalar_common_2[0];
#line 2785 "handle_options.m"
        {
#line 2785 "handle_options.m"
          libs__handle_options__succeeded = mercury__list__foldl2_6_p_4(libs__handle_options__TypeCtorInfo_42_42, libs__handle_options__TypeInfo_43_43, libs__handle_options__TypeInfo_44_44, libs__handle_options__V_22_22, libs__handle_options__Components_8, ((MR_Box) (libs__handle_options__Options1_7)), &libs__handle_options__conv6_Options_6, ((MR_Box) (libs__handle_options__NoComps_9)), &libs__handle_options__conv5__FinalComps_21);
        }
#line 2785 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 2785 "handle_options.m"
          {
#line 2785 "handle_options.m"
            *libs__handle_options__Options_6 = ((MR_Word) libs__handle_options__conv6_Options_6);
#line 2785 "handle_options.m"
            libs__handle_options___FinalComps_21 = ((MR_Word) libs__handle_options__conv5__FinalComps_21);
#line 2785 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 2785 "handle_options.m"
          }
#line 2781 "handle_options.m"
      }
#line 2781 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2781 "handle_options.m"
  }
#line 75 "handle_options.m"
}

#line 2857 "handle_options.m"
static void MR_CALL 
libs__handle_options__compute_grade_2_p_0_1(
#line 2857 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2857 "handle_options.m"
{
#line 2857 "handle_options.m"
  {
#line 2857 "handle_options.m"
    struct libs__handle_options__compute_grade_2_p_0_2_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__compute_grade_2_p_0_2_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2857 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__compute_grade_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__compute_grade_2_p_0_2_env_0__conv0_HeadVar__2_16));
#line 2857 "handle_options.m"
    {
#line 2857 "handle_options.m"
      ((libs__handle_options__env_ptr)->libs__handle_options__compute_grade_2_p_0_2_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__compute_grade_2_p_0_2_env_0__cont_env_ptr);
#line 2857 "handle_options.m"
      return;
    }
#line 2857 "handle_options.m"
  }
#line 2857 "handle_options.m"
}

#line 2857 "handle_options.m"
static void MR_CALL 
libs__handle_options__compute_grade_2_p_0_2(
#line 2857 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2857 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 2857 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2857 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 2857 "handle_options.m"
{
#line 2857 "handle_options.m"
  {
#line 2857 "handle_options.m"
    struct libs__handle_options__compute_grade_2_p_0_2_env_0_s libs__handle_options__env;

#line 2857 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__compute_grade_2_p_0_2_env_0__wrapper_arg_1 = libs__handle_options__wrapper_arg_1;
#line 2857 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__compute_grade_2_p_0_2_env_0__cont = libs__handle_options__cont;
#line 2857 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__compute_grade_2_p_0_2_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
#line 2857 "handle_options.m"
    {
#line 2857 "handle_options.m"
      MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2857 "handle_options.m"
      {
#line 2857 "handle_options.m"
        libs__handle_options__IntroducedFrom__pred__compute_grade_components__2857__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), &(libs__handle_options__env).libs__handle_options__compute_grade_2_p_0_2_env_0__conv0_HeadVar__2_16, libs__handle_options__compute_grade_2_p_0_1, &libs__handle_options__env);
      }
#line 2857 "handle_options.m"
    }
#line 2857 "handle_options.m"
  }
#line 2857 "handle_options.m"
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
#line 2828 "handle_options.m"
  {
#line 2828 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2828 "handle_options.m"
    MR_Word libs__handle_options__Options_5;
#line 2828 "handle_options.m"
    MR_Word libs__handle_options__Components_6;
#line 2828 "handle_options.m"
    MR_Word libs__handle_options__V_21_21;

#line 2829 "handle_options.m"
    {
#line 2829 "handle_options.m"
      libs__globals__get_options_2_p_0(libs__handle_options__Globals_3, &libs__handle_options__Options_5);
    }
#line 2857 "handle_options.m"
    {
#line 2857 "handle_options.m"
      libs__handle_options__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2857 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_21_21, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[3]));
#line 2857 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_21_21, 1) = ((MR_Box) (libs__handle_options__compute_grade_2_p_0_2));
#line 2857 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2857 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_21_21, 3) = ((MR_Box) (libs__handle_options__Options_5));
#line 2857 "handle_options.m"
    }
#line 2857 "handle_options.m"
    {
#line 2857 "handle_options.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &libs__handle_options_scalar_common_1[2], libs__handle_options__V_21_21, &libs__handle_options__Components_6);
    }
#line 2834 "handle_options.m"
    if ((libs__handle_options__Components_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2833 "handle_options.m"
      *libs__handle_options__Grade_4 = (MR_String) "none";
#line 2834 "handle_options.m"
    else
#line 2836 "handle_options.m"
      {
#line 2836 "handle_options.m"
        libs__handle_options__construct_string_2_p_0(libs__handle_options__Components_6, libs__handle_options__Grade_4);
#line 2836 "handle_options.m"
        return;
      }
#line 2828 "handle_options.m"
  }
#line 71 "handle_options.m"
}

#line 67 "handle_options.m"
void MR_CALL 
libs__handle_options__long_usage_2_p_0(void)
#line 67 "handle_options.m"
{
#line 2583 "handle_options.m"
  {
#line 2583 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2583 "handle_options.m"
    MR_String libs__handle_options__Version_4;
#line 2583 "handle_options.m"
    MR_String libs__handle_options__Fullarch_5;
#line 2583 "handle_options.m"
    MR_Word libs__handle_options__V_8_8;
#line 2583 "handle_options.m"
    MR_Word libs__handle_options__V_11_11;
#line 2583 "handle_options.m"
    MR_Word libs__handle_options__V_12_12;
#line 2583 "handle_options.m"
    MR_Word libs__handle_options__V_14_14;

#line 2587 "handle_options.m"
    {
#line 2587 "handle_options.m"
      mercury__library__version_2_p_0(&libs__handle_options__Version_4, &libs__handle_options__Fullarch_5);
    }
#line 2589 "handle_options.m"
    {
#line 2589 "handle_options.m"
      libs__handle_options__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2589 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 0) = ((MR_Box) (libs__handle_options__Fullarch_5));
#line 2589 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[195])));
#line 2589 "handle_options.m"
    }
#line 2589 "handle_options.m"
    {
#line 2589 "handle_options.m"
      libs__handle_options__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2589 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 0) = ((MR_Box) ((MR_String) ", on "));
#line 2589 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 1) = ((MR_Box) (libs__handle_options__V_14_14));
#line 2589 "handle_options.m"
    }
#line 2589 "handle_options.m"
    {
#line 2589 "handle_options.m"
      libs__handle_options__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2589 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 0) = ((MR_Box) (libs__handle_options__Version_4));
#line 2589 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 1) = ((MR_Box) (libs__handle_options__V_12_12));
#line 2589 "handle_options.m"
    }
#line 2588 "handle_options.m"
    {
#line 2588 "handle_options.m"
      libs__handle_options__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2588 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_8_8, 0) = ((MR_Box) ((MR_String) "Name: mmc -- Melbourne Mercury Compiler, version "));
#line 2588 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_8_8, 1) = ((MR_Box) (libs__handle_options__V_11_11));
#line 2588 "handle_options.m"
    }
#line 2588 "handle_options.m"
    {
#line 2588 "handle_options.m"
      mercury__io__write_strings_3_p_0(libs__handle_options__V_8_8);
    }
#line 2590 "handle_options.m"
    {
#line 2590 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "Copyright: Copyright (C) 1993-2012 The University of Melbourne\n");
    }
#line 2592 "handle_options.m"
    {
#line 2592 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "           Copyright (C) 2013-2015 The Mercury team\n");
    }
#line 2594 "handle_options.m"
    {
#line 2594 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "Usage: mmc [<options>] <arguments>\n");
    }
#line 2595 "handle_options.m"
    {
#line 2595 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "Arguments:\n");
    }
#line 2596 "handle_options.m"
    {
#line 2596 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "\tArguments ending in \140.m\' are assumed to be source file names.\n");
    }
#line 2598 "handle_options.m"
    {
#line 2598 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "\tArguments that do not end in \140.m\' are assumed to be module names.\n");
    }
#line 2600 "handle_options.m"
    {
#line 2600 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "\tArguments in the form \100file are replaced with the contents of the file.\n");
    }
#line 2602 "handle_options.m"
    {
#line 2602 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "Options:\n");
    }
#line 2603 "handle_options.m"
    {
#line 2603 "handle_options.m"
      libs__options__options_help_2_p_0();
#line 2603 "handle_options.m"
      return;
    }
#line 2583 "handle_options.m"
  }
#line 67 "handle_options.m"
}

#line 63 "handle_options.m"
void MR_CALL 
libs__handle_options__usage_2_p_0(void)
#line 63 "handle_options.m"
{
#line 2567 "handle_options.m"
  {
#line 2567 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2567 "handle_options.m"
    MR_Word libs__handle_options__AlreadyPrinted_4;

#line 2564 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#line 2564 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 17289 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2564 "handle_options.m"
}
#line 2564 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0

	MR_Word X;

		{
#line 2564 "handle_options.m"
X = libs__handle_options__mutable_variable_already_printed_usage;

#line 17305 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
	 libs__handle_options__AlreadyPrinted_4  = X;
#line 2564 "handle_options.m"
}
#line 2564 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#line 2564 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 17324 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2564 "handle_options.m"
}
#line 2579 "handle_options.m"
    if ((libs__handle_options__AlreadyPrinted_4 == (MR_Integer) 0))
#line 2572 "handle_options.m"
      {
#line 2573 "handle_options.m"
        {
#line 2573 "handle_options.m"
          libs__handle_options__display_compiler_version_2_p_0();
        }
#line 2574 "handle_options.m"
        {
#line 2574 "handle_options.m"
          mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[8]));
        }
#line 2564 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#line 2564 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 17356 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2564 "handle_options.m"
}
#line 2564 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0

	MR_Word X;

	X =  (MR_Integer) 1 ;
		{
#line 2564 "handle_options.m"
libs__handle_options__mutable_variable_already_printed_usage = X;

#line 17373 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2564 "handle_options.m"
}
#line 2564 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#line 2564 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 17391 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2564 "handle_options.m"
}
#line 2572 "handle_options.m"
      }
#line 2579 "handle_options.m"
    else
#line 2580 "handle_options.m"
      {
#line 2580 "handle_options.m"
      }
#line 2567 "handle_options.m"
  }
#line 63 "handle_options.m"
}

#line 2552 "handle_options.m"
static void MR_CALL 
libs__handle_options__usage_errors_3_p_0_1(
#line 2552 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2552 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2552 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2552 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3)
#line 2552 "handle_options.m"
{
#line 2552 "handle_options.m"
  {
#line 2552 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2552 "handle_options.m"
    {
#line 2552 "handle_options.m"
      parse_tree__error_util__write_error_plain_with_progname_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
#line 2552 "handle_options.m"
      return;
    }
#line 2552 "handle_options.m"
  }
#line 2552 "handle_options.m"
}

#line 59 "handle_options.m"
void MR_CALL 
libs__handle_options__usage_errors_3_p_0(
#line 59 "handle_options.m"
  MR_Word libs__handle_options__Errors_4)
#line 59 "handle_options.m"
{
#line 2550 "handle_options.m"
  {
#line 2550 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2550 "handle_options.m"
    MR_String libs__handle_options__ProgName_6;
#line 2550 "handle_options.m"
    MR_Word libs__handle_options__V_11_11;
#line 2552 "handle_options.m"
    MR_Box libs__handle_options__conv0_STATE_VARIABLE_IO_12_12;

#line 2551 "handle_options.m"
    {
#line 2551 "handle_options.m"
      mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &libs__handle_options__ProgName_6);
    }
#line 2552 "handle_options.m"
    {
#line 2552 "handle_options.m"
      libs__handle_options__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2552 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_11_11, 0) = ((MR_Box) (&libs__handle_options_scalar_common_5[1]));
#line 2552 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_11_11, 1) = ((MR_Box) (libs__handle_options__usage_errors_3_p_0_1));
#line 2552 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2552 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_11_11, 3) = ((MR_Box) (libs__handle_options__ProgName_6));
#line 2552 "handle_options.m"
    }
#line 2552 "handle_options.m"
    {
#line 2552 "handle_options.m"
      mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, libs__handle_options__V_11_11, libs__handle_options__Errors_4, ((MR_Box) ((MR_Integer) 0)), &libs__handle_options__conv0_STATE_VARIABLE_IO_12_12);
    }
#line 2553 "handle_options.m"
    {
#line 2553 "handle_options.m"
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
#line 2554 "handle_options.m"
    {
#line 2554 "handle_options.m"
      libs__handle_options__usage_2_p_0();
#line 2554 "handle_options.m"
      return;
    }
#line 2550 "handle_options.m"
  }
#line 59 "handle_options.m"
}

#line 54 "handle_options.m"
void MR_CALL 
libs__handle_options__display_compiler_version_2_p_0(void)
#line 54 "handle_options.m"
{
#line 2556 "handle_options.m"
  {
#line 2556 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2556 "handle_options.m"
    MR_String libs__handle_options__Version_4;
#line 2556 "handle_options.m"
    MR_String libs__handle_options__Fullarch_5;
#line 2556 "handle_options.m"
    MR_Word libs__handle_options__V_8_8;
#line 2556 "handle_options.m"
    MR_Word libs__handle_options__V_11_11;
#line 2556 "handle_options.m"
    MR_Word libs__handle_options__V_12_12;
#line 2556 "handle_options.m"
    MR_Word libs__handle_options__V_14_14;

#line 2557 "handle_options.m"
    {
#line 2557 "handle_options.m"
      mercury__library__version_2_p_0(&libs__handle_options__Version_4, &libs__handle_options__Fullarch_5);
    }
#line 2559 "handle_options.m"
    {
#line 2559 "handle_options.m"
      libs__handle_options__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2559 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 0) = ((MR_Box) (libs__handle_options__Fullarch_5));
#line 2559 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[6])));
#line 2559 "handle_options.m"
    }
#line 2559 "handle_options.m"
    {
#line 2559 "handle_options.m"
      libs__handle_options__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2559 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 0) = ((MR_Box) ((MR_String) ", on "));
#line 2559 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 1) = ((MR_Box) (libs__handle_options__V_14_14));
#line 2559 "handle_options.m"
    }
#line 2559 "handle_options.m"
    {
#line 2559 "handle_options.m"
      libs__handle_options__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2559 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 0) = ((MR_Box) (libs__handle_options__Version_4));
#line 2559 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 1) = ((MR_Box) (libs__handle_options__V_12_12));
#line 2559 "handle_options.m"
    }
#line 2559 "handle_options.m"
    {
#line 2559 "handle_options.m"
      libs__handle_options__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2559 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_8_8, 0) = ((MR_Box) ((MR_String) "Mercury Compiler, version "));
#line 2559 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_8_8, 1) = ((MR_Box) (libs__handle_options__V_11_11));
#line 2559 "handle_options.m"
    }
#line 2558 "handle_options.m"
    {
#line 2558 "handle_options.m"
      mercury__io__write_strings_3_p_0(libs__handle_options__V_8_8);
#line 2558 "handle_options.m"
      return;
    }
#line 2556 "handle_options.m"
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
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 115, &libs__handle_options__Smart_36);
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
