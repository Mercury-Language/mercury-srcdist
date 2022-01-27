/*
** Automatically generated from `handle_options.m'
** by the Mercury compiler,
** version 13.05.1, configured for x86_64-apple-darwin12.3.0.
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



#line 2827 "handle_options.m"
struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0_s {
#line 2827 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__Options_3;
#line 2827 "handle_options.m"
  MR_Word * libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__HeadVar__2_16;
#line 2827 "handle_options.m"
  MR_Cont libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__cont;
#line 2827 "handle_options.m"
  void * libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__cont_env_ptr;
#line 2827 "handle_options.m"
  MR_bool libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__succeeded;
#line 2827 "handle_options.m"
  MR_String libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__Name_6;
#line 2827 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__Comp_7;
#line 2827 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__CompOpts_8;
#line 2827 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__MaybeTargets_9;
#line 2827 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__IncludeInGradeString_10;
#line 2834 "handle_options.m"
  jmp_buf libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__commit_0;
#line 2834 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__Opt_11;
#line 2834 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__Value_12;
#line 2834 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__V_17_17;
#line 2835 "handle_options.m"
  MR_Box libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__conv0_V_17_17;
#line 2848 "handle_options.m"
  jmp_buf libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__commit_1;
#line 2848 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__TypeCtorInfo_23_23;
#line 2848 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__TypeCtorInfo_24_24;
#line 2848 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__Target_14;
#line 2848 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__V_18_18;
#line 2848 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__V_27_27;
#line 2849 "handle_options.m"
  MR_Box libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__conv2_Target_14;
#line 2827 "handle_options.m"
};

#line 2668 "handle_options.m"
struct libs__handle_options__must_not_contain_2_p_0_env_0_s {
#line 2668 "handle_options.m"
  MR_Word libs__handle_options__must_not_contain_2_p_0_env_0__OmitComponents_3;
#line 2668 "handle_options.m"
  MR_Word libs__handle_options__must_not_contain_2_p_0_env_0__GradeComponents_4;
#line 2671 "handle_options.m"
  MR_bool libs__handle_options__must_not_contain_2_p_0_env_0__succeeded;
#line 2671 "handle_options.m"
  jmp_buf libs__handle_options__must_not_contain_2_p_0_env_0__commit_0;
#line 2671 "handle_options.m"
  MR_Word libs__handle_options__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6;
#line 2671 "handle_options.m"
  MR_String libs__handle_options__must_not_contain_2_p_0_env_0__Component_5;
#line 2672 "handle_options.m"
  MR_Box libs__handle_options__must_not_contain_2_p_0_env_0__conv0_Component_5;
#line 2668 "handle_options.m"
};

#line 2659 "handle_options.m"
struct libs__handle_options__must_contain_2_p_0_env_0_s {
#line 2659 "handle_options.m"
  MR_Word libs__handle_options__must_contain_2_p_0_env_0__IncludeComponents_3;
#line 2659 "handle_options.m"
  MR_Word libs__handle_options__must_contain_2_p_0_env_0__GradeComponents_4;
#line 2662 "handle_options.m"
  MR_bool libs__handle_options__must_contain_2_p_0_env_0__succeeded;
#line 2662 "handle_options.m"
  jmp_buf libs__handle_options__must_contain_2_p_0_env_0__commit_0;
#line 2662 "handle_options.m"
  MR_Word libs__handle_options__must_contain_2_p_0_env_0__TypeCtorInfo_6_6;
#line 2662 "handle_options.m"
  MR_String libs__handle_options__must_contain_2_p_0_env_0__Component_5;
#line 2663 "handle_options.m"
  MR_Box libs__handle_options__must_contain_2_p_0_env_0__conv0_Component_5;
#line 2659 "handle_options.m"
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

#line 2827 "handle_options.m"
struct libs__handle_options__grade_directory_component_2_p_0_2_env_0_s {
#line 2827 "handle_options.m"
  MR_Box * libs__handle_options__grade_directory_component_2_p_0_2_env_0__wrapper_arg_1;
#line 2827 "handle_options.m"
  MR_Cont libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont;
#line 2827 "handle_options.m"
  void * libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont_env_ptr;
#line 2827 "handle_options.m"
  MR_Word libs__handle_options__grade_directory_component_2_p_0_2_env_0__conv0_HeadVar__2_16;
#line 2827 "handle_options.m"
};

#line 3126 "handle_options.m"
struct libs__handle_options__convert_grade_option_3_p_0_2_env_0_s {
#line 3126 "handle_options.m"
  MR_Box * libs__handle_options__convert_grade_option_3_p_0_2_env_0__wrapper_arg_1;
#line 3126 "handle_options.m"
  MR_Cont libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont;
#line 3126 "handle_options.m"
  void * libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont_env_ptr;
#line 3126 "handle_options.m"
  MR_Word libs__handle_options__convert_grade_option_3_p_0_2_env_0__conv0_HeadVar__1_1;
#line 3126 "handle_options.m"
};

#line 2827 "handle_options.m"
struct libs__handle_options__compute_grade_2_p_0_2_env_0_s {
#line 2827 "handle_options.m"
  MR_Box * libs__handle_options__compute_grade_2_p_0_2_env_0__wrapper_arg_1;
#line 2827 "handle_options.m"
  MR_Cont libs__handle_options__compute_grade_2_p_0_2_env_0__cont;
#line 2827 "handle_options.m"
  void * libs__handle_options__compute_grade_2_p_0_2_env_0__cont_env_ptr;
#line 2827 "handle_options.m"
  MR_Word libs__handle_options__compute_grade_2_p_0_2_env_0__conv0_HeadVar__2_16;
#line 2827 "handle_options.m"
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

#line 3126 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__reset_grade_options__3126__1_3_p_0(
#line 3126 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_12,
#line 3126 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_13,
#line 3126 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_14);

#line 2834 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_2(
#line 2834 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2835 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_4(
#line 2835 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2834 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_3(
#line 2834 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2834 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_5(
#line 2834 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2848 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_6(
#line 2848 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2849 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_8(
#line 2849 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2848 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_7(
#line 2848 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2848 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_9(
#line 2848 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2827 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_1(
#line 2827 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2827 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0(
#line 2827 "handle_options.m"
  MR_Word libs__handle_options__Options_3,
#line 2827 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_16,
#line 2827 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2827 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 2778 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__add_option_list__2778__1_3_p_0(
#line 2778 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_13,
#line 2778 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_14,
#line 2778 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_15);

#line 2687 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2687__1_2_p_0(
#line 2687 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_19,
#line 2687 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_20);

#line 2205 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2205__1_2_f_0(
#line 2205 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_154,
#line 2205 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1542);

#line 2203 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2203__1_2_f_0(
#line 2203 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_154,
#line 2203 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1536);

#line 2212 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2212__1_1_f_0(
#line 2212 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1531);

#line 2211 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2211__1_1_f_0(
#line 2211 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1526);

#line 2181 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2181__1_2_f_0(
#line 2181 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_154,
#line 2181 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1513);

#line 2177 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2177__1_2_f_0(
#line 2177 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_154,
#line 2177 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1507);

#line 2159 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2159__2_2_p_0(
#line 2159 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1500,
#line 2159 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1655);

#line 2159 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2159__1_2_p_0(
#line 2159 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1501,
#line 2159 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1657);

#line 2141 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2141__1_3_f_0(
#line 2141 "handle_options.m"
  MR_String libs__handle_options__FullArch_122,
#line 2141 "handle_options.m"
  MR_String libs__handle_options__GradeString_134,
#line 2141 "handle_options.m"
  MR_String libs__handle_options__HeadVar__3_1488);

#line 2105 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2105__1_2_f_0(
#line 2105 "handle_options.m"
  MR_String libs__handle_options__GradeString_134,
#line 2105 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1469);

#line 2095 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2095__1_2_f_0(
#line 2095 "handle_options.m"
  MR_String libs__handle_options__GradeString_134,
#line 2095 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1459);

#line 2082 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2082__1_2_f_0(
#line 2082 "handle_options.m"
  MR_String libs__handle_options__GradeString_134,
#line 2082 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1442);

#line 2067 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2067__1_2_f_0(
#line 2067 "handle_options.m"
  MR_String libs__handle_options__GradeString_134,
#line 2067 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1427);

#line 526 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__check_option_values__526__1_1_p_0(
#line 526 "handle_options.m"
  MR_Char libs__handle_options__HeadVar__1_252);

#line 2778 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2755__1_5_p_0_2(
#line 2778 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2778 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2778 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2778 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3);

#line 2778 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2755__1_5_p_0_1(
#line 2778 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2778 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2778 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2778 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3);

#line 2755 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2755__1_5_p_0(
#line 2755 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_23,
#line 2755 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_24,
#line 2755 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_25,
#line 2755 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__4_26,
#line 2755 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_27);

#line 2727 "handle_options.m"
static void MR_CALL 
libs__handle_options____Compare____grade_component_0_0(
#line 2727 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__1_1,
#line 2727 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_2,
#line 2727 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__3_3);

#line 2727 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options____Unify____grade_component_0_0(
#line 2727 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_1,
#line 2727 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_2);

#line 3202 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_dump_alias_2_p_0(
#line 3202 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1,
#line 3202 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_2);

#line 3187 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__char_is_not_2_p_0(
#line 3187 "handle_options.m"
  MR_Char libs__handle_options__A_3,
#line 3187 "handle_options.m"
  MR_Char libs__handle_options__B_4);

#line 3176 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__split_grade_string_2_2_p_0_1(
#line 3176 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3176 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 3171 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__split_grade_string_2_2_p_0(
#line 3171 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1,
#line 3171 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2);

#line 3132 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_start_values_1_p_0(
#line 3132 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__1_1,
#line 3132 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 3132 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 2871 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_component_table_5_p_2(
#line 2871 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__1_1,
#line 2871 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2,
#line 2871 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_3,
#line 2871 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__4_4,
#line 2871 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_5,
#line 2871 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2871 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 2869 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__grade_component_table_5_p_0(
#line 2869 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1,
#line 2869 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2,
#line 2869 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_3,
#line 2869 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__4_4,
#line 2869 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_5);

#line 2809 "handle_options.m"
static void MR_CALL 
libs__handle_options__construct_string_2_p_0(
#line 2809 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1,
#line 2809 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_2);

#line 2671 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_1(
#line 2671 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2672 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_3(
#line 2672 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2671 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_2(
#line 2671 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2671 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_4(
#line 2671 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2668 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__must_not_contain_2_p_0(
#line 2668 "handle_options.m"
  MR_Word libs__handle_options__OmitComponents_3,
#line 2668 "handle_options.m"
  MR_Word libs__handle_options__GradeComponents_4);

#line 2662 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_1(
#line 2662 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2663 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_3(
#line 2663 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2662 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_2(
#line 2662 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2662 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_4(
#line 2662 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2659 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__must_contain_2_p_0(
#line 2659 "handle_options.m"
  MR_Word libs__handle_options__IncludeComponents_3,
#line 2659 "handle_options.m"
  MR_Word libs__handle_options__GradeComponents_4);

#line 2687 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__filter_grade_7_p_0_1(
#line 2687 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2687 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2687 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2);

#line 2641 "handle_options.m"
static void MR_CALL 
libs__handle_options__filter_grade_7_p_0(
#line 2641 "handle_options.m"
  MR_Word libs__handle_options__FilterPred_8,
#line 2641 "handle_options.m"
  MR_Word libs__handle_options__CondComponents_9,
#line 2641 "handle_options.m"
  MR_String libs__handle_options__GradeString_10,
#line 2641 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Grades_0_15,
#line 2641 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Grades_16,
#line 2641 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_17,
#line 2641 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_18);

#line 2618 "handle_options.m"
static void MR_CALL 
libs__handle_options__string_to_grade_component_6_p_0(
#line 2618 "handle_options.m"
  MR_String libs__handle_options__FilterDesc_7,
#line 2618 "handle_options.m"
  MR_String libs__handle_options__Comp_8,
#line 2618 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Comps_0_15,
#line 2618 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Comps_16,
#line 2618 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_17,
#line 2618 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_18);

#line 2606 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_6(
#line 2606 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2606 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2606 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2606 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2606 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2606 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5);

#line 2606 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_5(
#line 2606 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2606 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2606 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2);

#line 2604 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_4(
#line 2604 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2604 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2604 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2604 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2604 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2604 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5);

#line 2604 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_3(
#line 2604 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2604 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2604 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2);

#line 2596 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_2(
#line 2596 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2596 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2596 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2596 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2596 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2596 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5);

#line 2594 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_1(
#line 2594 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2594 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2594 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2594 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2594 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2594 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5);

#line 2586 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0(
#line 2586 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_12,
#line 2586 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_13,
#line 2586 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_14,
#line 2586 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_15);

#line 2535 "handle_options.m"
static void MR_CALL 
libs__handle_options__unsafe_set_already_printed_usage_1_p_0(
#line 2535 "handle_options.m"
  MR_Word libs__handle_options__X_1);

#line 2535 "handle_options.m"
static void MR_CALL 
libs__handle_options__unsafe_get_already_printed_usage_1_p_0(
#line 2535 "handle_options.m"
  MR_Word * libs__handle_options__X_1);

#line 2535 "handle_options.m"
static void MR_CALL 
libs__handle_options__unlock_already_printed_usage_0_p_0(void);

#line 2535 "handle_options.m"
static void MR_CALL 
libs__handle_options__lock_already_printed_usage_0_p_0(void);

#line 2535 "handle_options.m"
static void MR_CALL 
libs__handle_options__pre_initialise_mutable_already_printed_usage_0_p_0(void);

#line 2535 "handle_options.m"
static void MR_CALL 
libs__handle_options__initialise_mutable_already_printed_usage_0_p_0(void);

#line 2498 "handle_options.m"
static void MR_CALL 
libs__handle_options__disable_smart_recompilation_5_p_0(
#line 2498 "handle_options.m"
  MR_String libs__handle_options__OptionDescr_6,
#line 2498 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2498 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12);

#line 2483 "handle_options.m"
static void MR_CALL 
libs__handle_options__maybe_disable_smart_recompilation_8_p_0(
#line 2483 "handle_options.m"
  MR_Word libs__handle_options__Smart_9,
#line 2483 "handle_options.m"
  MR_Word libs__handle_options__ConflictingOption_10,
#line 2483 "handle_options.m"
  MR_Word libs__handle_options__ValueToDisableSmart_11,
#line 2483 "handle_options.m"
  MR_String libs__handle_options__OptionDescr_12,
#line 2483 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_16,
#line 2483 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_17);

#line 2463 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_requires_7_p_0(
#line 2463 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_8,
#line 2463 "handle_options.m"
  MR_Word libs__handle_options__RequiredOption_9,
#line 2463 "handle_options.m"
  MR_Word libs__handle_options__RequiredOptionValue_10,
#line 2463 "handle_options.m"
  MR_String libs__handle_options__ErrorMessage_11,
#line 2463 "handle_options.m"
  MR_Word libs__handle_options__Globals_12,
#line 2463 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_16,
#line 2463 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_17);

#line 2445 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_neg_implies_5_p_0(
#line 2445 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_6,
#line 2445 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOption_7,
#line 2445 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOptionValue_8,
#line 2445 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2445 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12);

#line 2429 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_implies_5_p_0(
#line 2429 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_6,
#line 2429 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOption_7,
#line 2429 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOptionValue_8,
#line 2429 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2429 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12);

#line 2349 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_lowlevel_2_p_0(
#line 2349 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_12,
#line 2349 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_13);

#line 2205 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_22_p_0_13(
#line 2205 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2205 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2203 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_22_p_0_12(
#line 2203 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2203 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2212 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_22_p_0_11(
#line 2212 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2212 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2211 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_22_p_0_10(
#line 2211 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2211 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2181 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_22_p_0_9(
#line 2181 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2181 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2177 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_22_p_0_8(
#line 2177 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2177 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2159 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_22_p_0_7(
#line 2159 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2159 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2159 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_22_p_0_6(
#line 2159 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2159 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2141 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_22_p_0_5(
#line 2141 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2141 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2105 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_22_p_0_4(
#line 2105 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2105 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2095 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_22_p_0_3(
#line 2095 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2095 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2082 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_22_p_0_2(
#line 2082 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2082 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2067 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_22_p_0_1(
#line 2067 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2067 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 610 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_options_to_globals_22_p_0(
#line 610 "handle_options.m"
  MR_Word libs__handle_options__OptionTable0_23,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__Target_24,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__GC_Method_25,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__TagsMethod0_26,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__TermNorm_27,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__Term2Norm_28,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__TraceLevel_29,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__TraceSuppress_30,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__SSTraceLevel_31,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__MaybeThreadSafe_32,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__C_CompilerType_33,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__CSharp_CompilerType_34,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__ReuseStrategy_35,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__MaybeILVersion_36,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__MaybeFeedbackInfo_37,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__HostEnvType_38,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__TargetEnvType_39,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_182,
#line 610 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_183,
#line 610 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_184);

#line 601 "handle_options.m"
static void MR_CALL 
libs__handle_options__add_error_3_p_0(
#line 601 "handle_options.m"
  MR_String libs__handle_options__Error_4,
#line 601 "handle_options.m"
  MR_Word libs__handle_options__Errors0_5,
#line 601 "handle_options.m"
  MR_Word * libs__handle_options__Errors_6);

#line 526 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__check_option_values_22_p_0_1(
#line 526 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 526 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 236 "handle_options.m"
static void MR_CALL 
libs__handle_options__check_option_values_22_p_0(
#line 236 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_OptionTable_0_118,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_OptionTable_119,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__Target_24,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__GC_Method_25,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__TagsMethod_26,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__TermNorm_27,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__Term2Norm_28,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__TraceLevel_29,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__TraceSuppress_30,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__SSTraceLevel_31,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__MaybeThreadSafe_32,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__C_CompilerType_33,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__CSharp_CompilerType_34,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__ReuseStrategy_35,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__MaybeILVersion_36,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__MaybeFeedbackInfo_37,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__HostEnvType_38,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__TargetEnvType_39,
#line 236 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_120,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_121);

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

#line 2827 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_directory_component_2_p_0_1(
#line 2827 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2827 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_directory_component_2_p_0_2(
#line 2827 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2827 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 2827 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2827 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 2755 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_4(
#line 2755 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2755 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2755 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2755 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2755 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2755 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5);

#line 3126 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_3(
#line 3126 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3126 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 3126 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 3126 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3);

#line 3126 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_1(
#line 3126 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 3126 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_2(
#line 3126 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3126 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 3126 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 3126 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 2827 "handle_options.m"
static void MR_CALL 
libs__handle_options__compute_grade_2_p_0_1(
#line 2827 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2827 "handle_options.m"
static void MR_CALL 
libs__handle_options__compute_grade_2_p_0_2(
#line 2827 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2827 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 2827 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2827 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 2524 "handle_options.m"
static void MR_CALL 
libs__handle_options__usage_errors_3_p_0_1(
#line 2524 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2524 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2524 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2524 "handle_options.m"
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


#line 2876 "handle_options.m"
/* sealed */ struct libs__handle_options__vector_common_type_11_0_s {
#line 2876 "handle_options.m"
  const MR_String libs__handle_options__vector_common_type_11_0__vct_11_f_0;
#line 2876 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_11_0__vct_11_f_1;
#line 2876 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_11_0__vct_11_f_2;
#line 2876 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_11_0__vct_11_f_3;
#line 2876 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_11_0__vct_11_f_4;
#line 2876 "handle_options.m"
};

static /* final */ const struct libs__handle_options__vector_common_type_11_0_s libs__handle_options_vector_common_11[51];

#line 3134 "handle_options.m"
/* sealed */ struct libs__handle_options__vector_common_type_12_0_s {
#line 3134 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_12_0__vct_12_f_0;
#line 3134 "handle_options.m"
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
    ((MR_Box) (libs__handle_options__check_option_values_22_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_4[4])),
    ((MR_Box) (libs__handle_options__convert_options_to_globals_22_p_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_4[4])),
    ((MR_Box) (libs__handle_options__convert_options_to_globals_22_p_0_11)),
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
    ((MR_Box) (libs__handle_options__IntroducedFrom__pred__convert_grade_option__2755__1_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_7[0])),
    ((MR_Box) (libs__handle_options__IntroducedFrom__pred__convert_grade_option__2755__1_5_p_0_2)),
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
#line 2535 "handle_options.m"
MR_Word libs__handle_options__mutable_variable_already_printed_usage;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__handle_options__mutable_variable_already_printed_usage_lock;
#endif

#line 2535 "handle_options.m"
void 
libs__handle_options__user_init_pred_0(void)
#line 2535 "handle_options.m"
{
#line 2535 "handle_options.m"
	libs__handle_options__initialise_mutable_already_printed_usage_0_p_0();
}


#line 3616 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 3625 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__getopt_io__pti_maybe_option_table_1__plain_libs__options__type_ctor_info_option_0 = {
  &mercury__getopt_io__getopt_io__type_ctor_info_maybe_option_table_1,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0
  }
};

#line 3633 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__pair__pti_pair_2__plain_libs__handle_options__type_ctor_info_grade_component_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 3642 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 3651 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__set_ordlist__pti_set_ordlist_1__plain_libs__handle_options__type_ctor_info_grade_component_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0
  }
};

#line 3659 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct1 libs__handle_options____vpti_pred_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 3668 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct2 libs__handle_options____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 3678 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 3686 "libs.handle_options.c"
static const MR_FA_TypeInfo_Struct1 libs__handle_options__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 3694 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct2 libs__handle_options____vpti_pred_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &libs__handle_options__list__ti_list_1builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &libs__handle_options__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 3704 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_0 = {
  (MR_String) "comp_gcc_ext",
  (MR_Integer) 0
};

#line 3710 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_1 = {
  (MR_String) "comp_par",
  (MR_Integer) 1
};

#line 3716 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_2 = {
  (MR_String) "comp_par_threadscope",
  (MR_Integer) 2
};

#line 3722 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_3 = {
  (MR_String) "comp_gc",
  (MR_Integer) 3
};

#line 3728 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_4 = {
  (MR_String) "comp_prof",
  (MR_Integer) 4
};

#line 3734 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_5 = {
  (MR_String) "comp_term_size",
  (MR_Integer) 5
};

#line 3740 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_6 = {
  (MR_String) "comp_trail",
  (MR_Integer) 6
};

#line 3746 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_7 = {
  (MR_String) "comp_minimal_model",
  (MR_Integer) 7
};

#line 3752 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_8 = {
  (MR_String) "comp_pregen_spf",
  (MR_Integer) 8
};

#line 3758 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_9 = {
  (MR_String) "comp_pic",
  (MR_Integer) 9
};

#line 3764 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_10 = {
  (MR_String) "comp_lowlevel",
  (MR_Integer) 10
};

#line 3770 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_11 = {
  (MR_String) "comp_trace",
  (MR_Integer) 11
};

#line 3776 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_12 = {
  (MR_String) "comp_stack_extend",
  (MR_Integer) 12
};

#line 3782 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_13 = {
  (MR_String) "comp_regions",
  (MR_Integer) 13
};

#line 3788 "libs.handle_options.c"
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

#line 3806 "libs.handle_options.c"
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

#line 3824 "libs.handle_options.c"
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

#line 3842 "libs.handle_options.c"
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

#line 3863 "libs.handle_options.c"
static MR_bool MR_CALL 
libs__handle_options____Unify____grade_component_0_0_10001(
#line 3866 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 3868 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_2)
#line 3870 "libs.handle_options.c"
{
#line 3872 "libs.handle_options.c"
  {
#line 3874 "libs.handle_options.c"
    MR_bool libs__handle_options__succeeded;

#line 3877 "libs.handle_options.c"
    {
#line 3879 "libs.handle_options.c"
      libs__handle_options__succeeded = libs__handle_options____Unify____grade_component_0_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2));
    }
#line 3882 "libs.handle_options.c"
    return libs__handle_options__succeeded;
#line 3884 "libs.handle_options.c"
  }
#line 3886 "libs.handle_options.c"
}

#line 3889 "libs.handle_options.c"
static void MR_CALL 
libs__handle_options____Compare____grade_component_0_0_10001(
#line 3892 "libs.handle_options.c"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 3894 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 3896 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_3)
#line 3898 "libs.handle_options.c"
{
#line 3900 "libs.handle_options.c"
  {
#line 3902 "libs.handle_options.c"
    MR_Word libs__handle_options__conv0_HeadVar__1_1;

#line 3905 "libs.handle_options.c"
    {
#line 3907 "libs.handle_options.c"
      libs__handle_options____Compare____grade_component_0_0(&libs__handle_options__conv0_HeadVar__1_1, ((MR_Word) libs__handle_options__wrapper_arg_2), ((MR_Word) libs__handle_options__wrapper_arg_3));
    }
#line 3910 "libs.handle_options.c"
    *libs__handle_options__wrapper_arg_1 = ((MR_Box) (libs__handle_options__conv0_HeadVar__1_1));
#line 3912 "libs.handle_options.c"
  }
#line 3914 "libs.handle_options.c"
}

#line 3126 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__reset_grade_options__3126__1_3_p_0(
#line 3126 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_12,
#line 3126 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_13,
#line 3126 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_14)
#line 3126 "handle_options.m"
{
#line 3126 "handle_options.m"
  {
#line 3126 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 3126 "handle_options.m"
    MR_Word libs__handle_options__Option_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__HeadVar__1_12, (MR_Integer) 0)));
#line 3126 "handle_options.m"
    MR_Word libs__handle_options__Value_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__HeadVar__1_12, (MR_Integer) 1)));

#line 3129 "handle_options.m"
    {
#line 3129 "handle_options.m"
      mercury__map__set_4_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (libs__handle_options__Option_8)), ((MR_Box) (libs__handle_options__Value_9)), libs__handle_options__HeadVar__2_13, libs__handle_options__HeadVar__3_14);
#line 3129 "handle_options.m"
      return;
    }
#line 3126 "handle_options.m"
  }
#line 3126 "handle_options.m"
}

#line 2834 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_2(
#line 2834 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2834 "handle_options.m"
{
#line 2834 "handle_options.m"
  {
#line 2834 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2834 "handle_options.m"
    MR_builtin_longjmp((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__commit_0, 1);
#line 2834 "handle_options.m"
  }
#line 2834 "handle_options.m"
}

#line 2835 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_4(
#line 2835 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2835 "handle_options.m"
{
#line 2835 "handle_options.m"
  {
#line 2835 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2835 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__V_17_17 = ((MR_Word) (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__conv0_V_17_17);
#line 2835 "handle_options.m"
    {
#line 2835 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_3(libs__handle_options__env_ptr);
#line 2835 "handle_options.m"
      return;
    }
#line 2835 "handle_options.m"
  }
#line 2835 "handle_options.m"
}

#line 2834 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_3(
#line 2834 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2834 "handle_options.m"
{
#line 2834 "handle_options.m"
  {
#line 2834 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2834 "handle_options.m"
    {
#line 2837 "handle_options.m"
      MR_Word libs__handle_options__V_26_26;
#line 2837 "handle_options.m"
      MR_Box libs__handle_options__conv1_V_26_26;

#line 2835 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__Opt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__V_17_17, (MR_Integer) 0)));
#line 2835 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__Value_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__V_17_17, (MR_Integer) 1)));
#line 2837 "handle_options.m"
      {
#line 2837 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__Options_3, ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__Opt_11)), &libs__handle_options__conv1_V_26_26);
      }
#line 2837 "handle_options.m"
      if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__succeeded)
#line 2837 "handle_options.m"
        {
#line 2837 "handle_options.m"
          libs__handle_options__V_26_26 = ((MR_Word) libs__handle_options__conv1_V_26_26);
#line 2837 "handle_options.m"
          (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 2837 "handle_options.m"
        }
#line 2837 "handle_options.m"
      if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__succeeded)
#line 2837 "handle_options.m"
        {
#line 2837 "handle_options.m"
          (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__succeeded = mercury__getopt_io____Unify____option_data_0_0((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__Value_12, libs__handle_options__V_26_26);
        }
#line 2836 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__succeeded = !((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__succeeded);
#line 2836 "handle_options.m"
      if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__succeeded)
#line 2836 "handle_options.m"
        {
#line 2836 "handle_options.m"
          libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_2(libs__handle_options__env_ptr);
#line 2836 "handle_options.m"
          return;
        }
#line 2834 "handle_options.m"
    }
#line 2834 "handle_options.m"
  }
#line 2834 "handle_options.m"
}

#line 2834 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_5(
#line 2834 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2834 "handle_options.m"
{
#line 2834 "handle_options.m"
  {
#line 2834 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2834 "handle_options.m"
    if (MR_builtin_setjmp((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__commit_0) == 0)
#line 2834 "handle_options.m"
      {
#line 2834 "handle_options.m"
        {
#line 2835 "handle_options.m"
          {
#line 2835 "handle_options.m"
            mercury__list__member_2_p_1((MR_Word) &libs__handle_options_scalar_common_1[1], &(libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__conv0_V_17_17, (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__CompOpts_8, libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_4, libs__handle_options__env_ptr);
          }
#line 2834 "handle_options.m"
        }
#line 2834 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__succeeded = MR_FALSE;
#line 2834 "handle_options.m"
      }
#line 2834 "handle_options.m"
    else
#line 2834 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 2834 "handle_options.m"
  }
#line 2834 "handle_options.m"
}

#line 2848 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_6(
#line 2848 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2848 "handle_options.m"
{
#line 2848 "handle_options.m"
  {
#line 2848 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2848 "handle_options.m"
    MR_builtin_longjmp((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__commit_1, 1);
#line 2848 "handle_options.m"
  }
#line 2848 "handle_options.m"
}

#line 2849 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_8(
#line 2849 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2849 "handle_options.m"
{
#line 2849 "handle_options.m"
  {
#line 2849 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2849 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__Target_14 = ((MR_Word) (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__conv2_Target_14);
#line 2849 "handle_options.m"
    {
#line 2849 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_7(libs__handle_options__env_ptr);
#line 2849 "handle_options.m"
      return;
    }
#line 2849 "handle_options.m"
  }
#line 2849 "handle_options.m"
}

#line 2848 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_7(
#line 2848 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2848 "handle_options.m"
{
#line 2848 "handle_options.m"
  {
#line 2848 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2848 "handle_options.m"
    {
#line 2850 "handle_options.m"
      MR_Box libs__handle_options__conv3_V_27_27;

#line 2850 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__V_18_18 = (MR_Integer) 170;
#line 4159 "libs.handle_options.c"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__TypeCtorInfo_24_24 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
#line 2850 "handle_options.m"
      {
#line 2850 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__TypeCtorInfo_24_24, (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__TypeCtorInfo_23_23, (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__Options_3, ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__V_18_18)), &libs__handle_options__conv3_V_27_27);
      }
#line 2850 "handle_options.m"
      if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__succeeded)
#line 2850 "handle_options.m"
        {
#line 2850 "handle_options.m"
          (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__V_27_27 = ((MR_Word) libs__handle_options__conv3_V_27_27);
#line 2850 "handle_options.m"
          (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 2850 "handle_options.m"
        }
#line 2848 "handle_options.m"
      if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__succeeded)
#line 2848 "handle_options.m"
        {
#line 2850 "handle_options.m"
          {
#line 2850 "handle_options.m"
            (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__succeeded = mercury__getopt_io____Unify____option_data_0_0((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__Target_14, (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__V_27_27);
          }
#line 2850 "handle_options.m"
          if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__succeeded)
#line 2850 "handle_options.m"
            {
#line 2850 "handle_options.m"
              libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_6(libs__handle_options__env_ptr);
#line 2850 "handle_options.m"
              return;
            }
#line 2848 "handle_options.m"
        }
#line 2848 "handle_options.m"
    }
#line 2848 "handle_options.m"
  }
#line 2848 "handle_options.m"
}

#line 2848 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_9(
#line 2848 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2848 "handle_options.m"
{
#line 2848 "handle_options.m"
  {
#line 2848 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2848 "handle_options.m"
    if (MR_builtin_setjmp((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__commit_1) == 0)
#line 2848 "handle_options.m"
      {
#line 2848 "handle_options.m"
        {
#line 2848 "handle_options.m"
          MR_Word libs__handle_options__Targets_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__MaybeTargets_9, (MR_Integer) 0)));

#line 4224 "libs.handle_options.c"
          (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__TypeCtorInfo_23_23 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 2849 "handle_options.m"
          {
#line 2849 "handle_options.m"
            mercury__list__member_2_p_1((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__TypeCtorInfo_23_23, &(libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__conv2_Target_14, libs__handle_options__Targets_13, libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_8, libs__handle_options__env_ptr);
          }
#line 2848 "handle_options.m"
        }
#line 2848 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__succeeded = MR_FALSE;
#line 2848 "handle_options.m"
      }
#line 2848 "handle_options.m"
    else
#line 2848 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 2848 "handle_options.m"
  }
#line 2848 "handle_options.m"
}

#line 2827 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_1(
#line 2827 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2827 "handle_options.m"
{
#line 2827 "handle_options.m"
  {
#line 2827 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2834 "handle_options.m"
    {
#line 2834 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_5(libs__handle_options__env_ptr);
    }
#line 2834 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__succeeded = !((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__succeeded);
#line 2827 "handle_options.m"
    if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__succeeded)
#line 2827 "handle_options.m"
      {
#line 2842 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__succeeded = ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__IncludeInGradeString_10 == (MR_Integer) 1);
#line 2827 "handle_options.m"
        if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__succeeded)
#line 2827 "handle_options.m"
          {
#line 2851 "handle_options.m"
            if (((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__MaybeTargets_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2852 "handle_options.m"
              (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 2851 "handle_options.m"
            else
#line 2848 "handle_options.m"
              {
#line 2848 "handle_options.m"
                {
#line 2848 "handle_options.m"
                  libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_9(libs__handle_options__env_ptr);
                }
#line 2848 "handle_options.m"
              }
#line 2827 "handle_options.m"
            if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__succeeded)
#line 2827 "handle_options.m"
              {
#line 2854 "handle_options.m"
                {
#line 2854 "handle_options.m"
                  MR_Word base;
#line 2854 "handle_options.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2854 "handle_options.m"
                  *((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__HeadVar__2_16) = base;
#line 2854 "handle_options.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__Comp_7));
#line 2854 "handle_options.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__Name_6));
#line 2854 "handle_options.m"
                }
#line 2854 "handle_options.m"
                {
#line 2854 "handle_options.m"
                  ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__cont_env_ptr);
#line 2854 "handle_options.m"
                  return;
                }
#line 2827 "handle_options.m"
              }
#line 2827 "handle_options.m"
          }
#line 2827 "handle_options.m"
      }
#line 2827 "handle_options.m"
  }
#line 2827 "handle_options.m"
}

#line 2827 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0(
#line 2827 "handle_options.m"
  MR_Word libs__handle_options__Options_3,
#line 2827 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_16,
#line 2827 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2827 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 2827 "handle_options.m"
{
#line 2827 "handle_options.m"
  {
#line 2827 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0_s libs__handle_options__env;

#line 2827 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__Options_3 = libs__handle_options__Options_3;
#line 2827 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__HeadVar__2_16 = libs__handle_options__HeadVar__2_16;
#line 2827 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__cont = libs__handle_options__cont;
#line 2827 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
#line 2828 "handle_options.m"
    {
#line 2828 "handle_options.m"
      libs__handle_options__grade_component_table_5_p_2(&(libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__Name_6, &(libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__Comp_7, &(libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__CompOpts_8, &(libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__MaybeTargets_9, &(libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_env_0__IncludeInGradeString_10, libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0_1, &libs__handle_options__env);
    }
#line 2827 "handle_options.m"
  }
#line 2827 "handle_options.m"
}

#line 2778 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__add_option_list__2778__1_3_p_0(
#line 2778 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_13,
#line 2778 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_14,
#line 2778 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_15)
#line 2778 "handle_options.m"
{
#line 2778 "handle_options.m"
  {
#line 2778 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2778 "handle_options.m"
    MR_Word libs__handle_options__Option_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__HeadVar__1_13, (MR_Integer) 0)));
#line 2778 "handle_options.m"
    MR_Word libs__handle_options__Data_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__HeadVar__1_13, (MR_Integer) 1)));

#line 2780 "handle_options.m"
    {
#line 2780 "handle_options.m"
      mercury__map__set_4_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (libs__handle_options__Option_10)), ((MR_Box) (libs__handle_options__Data_11)), libs__handle_options__HeadVar__2_14, libs__handle_options__HeadVar__3_15);
#line 2780 "handle_options.m"
      return;
    }
#line 2778 "handle_options.m"
  }
#line 2778 "handle_options.m"
}

#line 2687 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2687__1_2_p_0(
#line 2687 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_19,
#line 2687 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_20)
#line 2687 "handle_options.m"
{
#line 2687 "handle_options.m"
  {
#line 2687 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2688 "handle_options.m"
    MR_Word libs__handle_options__V_11_11;
#line 2688 "handle_options.m"
    MR_Word libs__handle_options__V_12_12;
#line 2688 "handle_options.m"
    MR_Word libs__handle_options__V_13_13;
#line 2688 "handle_options.m"
    MR_Word libs__handle_options__V_14_14;

#line 2688 "handle_options.m"
    {
#line 2688 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__grade_component_table_5_p_0(libs__handle_options__HeadVar__1_19, &libs__handle_options__V_11_11, &libs__handle_options__V_12_12, &libs__handle_options__V_13_13, &libs__handle_options__V_14_14);
    }
#line 2687 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2687 "handle_options.m"
      {
#line 2687 "handle_options.m"
        *libs__handle_options__HeadVar__2_20 = libs__handle_options__HeadVar__1_19;
#line 2687 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2687 "handle_options.m"
      }
#line 2687 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2687 "handle_options.m"
  }
#line 2687 "handle_options.m"
}

#line 2205 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2205__1_2_f_0(
#line 2205 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_154,
#line 2205 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1542)
#line 2205 "handle_options.m"
{
#line 2205 "handle_options.m"
  {
#line 2205 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2205 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1543;
#line 2205 "handle_options.m"
    MR_String libs__handle_options__V_1544_1544;
#line 2205 "handle_options.m"
    MR_String libs__handle_options__V_1545_1545;
#line 2206 "handle_options.m"
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_154, (MR_Integer) 1)));
#line 2206 "handle_options.m"
    MR_Box libs__handle_options__conv1_V_1545_1545;

#line 2206 "handle_options.m"
    {
#line 2206 "handle_options.m"
      libs__handle_options__conv1_V_1545_1545 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_154), ((MR_Box) (libs__handle_options__HeadVar__2_1542)));
    }
#line 2206 "handle_options.m"
    libs__handle_options__V_1545_1545 = ((MR_String) libs__handle_options__conv1_V_1545_1545);
#line 2206 "handle_options.m"
    {
#line 2206 "handle_options.m"
      libs__handle_options__V_1544_1544 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1545_1545, (MR_String) "Mercury");
    }
#line 2205 "handle_options.m"
    {
#line 2205 "handle_options.m"
      return libs__handle_options__HeadVar__3_1543 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1544_1544, (MR_String) "hrls");
    }
#line 2205 "handle_options.m"
    return libs__handle_options__HeadVar__3_1543;
#line 2205 "handle_options.m"
  }
#line 2205 "handle_options.m"
}

#line 2203 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2203__1_2_f_0(
#line 2203 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_154,
#line 2203 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1536)
#line 2203 "handle_options.m"
{
#line 2203 "handle_options.m"
  {
#line 2203 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2203 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1537;
#line 2203 "handle_options.m"
    MR_String libs__handle_options__V_1538_1538;
#line 2203 "handle_options.m"
    MR_String libs__handle_options__V_1539_1539;
#line 2204 "handle_options.m"
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_154, (MR_Integer) 1)));
#line 2204 "handle_options.m"
    MR_Box libs__handle_options__conv1_V_1539_1539;

#line 2204 "handle_options.m"
    {
#line 2204 "handle_options.m"
      libs__handle_options__conv1_V_1539_1539 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_154), ((MR_Box) (libs__handle_options__HeadVar__2_1536)));
    }
#line 2204 "handle_options.m"
    libs__handle_options__V_1539_1539 = ((MR_String) libs__handle_options__conv1_V_1539_1539);
#line 2204 "handle_options.m"
    {
#line 2204 "handle_options.m"
      libs__handle_options__V_1538_1538 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1539_1539, (MR_String) "Mercury");
    }
#line 2203 "handle_options.m"
    {
#line 2203 "handle_options.m"
      return libs__handle_options__HeadVar__3_1537 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1538_1538, (MR_String) "mihs");
    }
#line 2203 "handle_options.m"
    return libs__handle_options__HeadVar__3_1537;
#line 2203 "handle_options.m"
  }
#line 2203 "handle_options.m"
}

#line 2212 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2212__1_1_f_0(
#line 2212 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1531)
#line 2212 "handle_options.m"
{
#line 2212 "handle_options.m"
  {
#line 2212 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2212 "handle_options.m"
    MR_String libs__handle_options__HeadVar__2_1532;
#line 2212 "handle_options.m"
    MR_String libs__handle_options__V_1533_1533;

#line 2212 "handle_options.m"
    {
#line 2212 "handle_options.m"
      libs__handle_options__V_1533_1533 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__1_1531, (MR_String) "Mercury");
    }
#line 2212 "handle_options.m"
    {
#line 2212 "handle_options.m"
      return libs__handle_options__HeadVar__2_1532 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1533_1533, (MR_String) "hrls");
    }
#line 2212 "handle_options.m"
    return libs__handle_options__HeadVar__2_1532;
#line 2212 "handle_options.m"
  }
#line 2212 "handle_options.m"
}

#line 2211 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2211__1_1_f_0(
#line 2211 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1526)
#line 2211 "handle_options.m"
{
#line 2211 "handle_options.m"
  {
#line 2211 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2211 "handle_options.m"
    MR_String libs__handle_options__HeadVar__2_1527;
#line 2211 "handle_options.m"
    MR_String libs__handle_options__V_1528_1528;

#line 2211 "handle_options.m"
    {
#line 2211 "handle_options.m"
      libs__handle_options__V_1528_1528 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__1_1526, (MR_String) "Mercury");
    }
#line 2211 "handle_options.m"
    {
#line 2211 "handle_options.m"
      return libs__handle_options__HeadVar__2_1527 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1528_1528, (MR_String) "mihs");
    }
#line 2211 "handle_options.m"
    return libs__handle_options__HeadVar__2_1527;
#line 2211 "handle_options.m"
  }
#line 2211 "handle_options.m"
}

#line 2181 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2181__1_2_f_0(
#line 2181 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_154,
#line 2181 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1513)
#line 2181 "handle_options.m"
{
#line 2181 "handle_options.m"
  {
#line 2181 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2181 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1514;
#line 2181 "handle_options.m"
    MR_String libs__handle_options__V_1515_1515;
#line 2181 "handle_options.m"
    MR_String libs__handle_options__V_1516_1516;
#line 2182 "handle_options.m"
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_154, (MR_Integer) 1)));
#line 2182 "handle_options.m"
    MR_Box libs__handle_options__conv1_V_1516_1516;

#line 2182 "handle_options.m"
    {
#line 2182 "handle_options.m"
      libs__handle_options__conv1_V_1516_1516 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_154), ((MR_Box) (libs__handle_options__HeadVar__2_1513)));
    }
#line 2182 "handle_options.m"
    libs__handle_options__V_1516_1516 = ((MR_String) libs__handle_options__conv1_V_1516_1516);
#line 2182 "handle_options.m"
    {
#line 2182 "handle_options.m"
      libs__handle_options__V_1515_1515 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1516_1516, (MR_String) "Mercury");
    }
#line 2181 "handle_options.m"
    {
#line 2181 "handle_options.m"
      return libs__handle_options__HeadVar__3_1514 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1515_1515, (MR_String) "inits");
    }
#line 2181 "handle_options.m"
    return libs__handle_options__HeadVar__3_1514;
#line 2181 "handle_options.m"
  }
#line 2181 "handle_options.m"
}

#line 2177 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2177__1_2_f_0(
#line 2177 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_154,
#line 2177 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1507)
#line 2177 "handle_options.m"
{
#line 2177 "handle_options.m"
  {
#line 2177 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2177 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1508;
#line 2177 "handle_options.m"
    MR_String libs__handle_options__V_1509_1509;
#line 2177 "handle_options.m"
    MR_String libs__handle_options__V_1510_1510;
#line 2177 "handle_options.m"
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_154, (MR_Integer) 1)));
#line 2177 "handle_options.m"
    MR_Box libs__handle_options__conv1_V_1510_1510;

#line 2177 "handle_options.m"
    {
#line 2177 "handle_options.m"
      libs__handle_options__conv1_V_1510_1510 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_154), ((MR_Box) (libs__handle_options__HeadVar__2_1507)));
    }
#line 2177 "handle_options.m"
    libs__handle_options__V_1510_1510 = ((MR_String) libs__handle_options__conv1_V_1510_1510);
#line 2177 "handle_options.m"
    {
#line 2177 "handle_options.m"
      libs__handle_options__V_1509_1509 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1510_1510, (MR_String) "Mercury");
    }
#line 2177 "handle_options.m"
    {
#line 2177 "handle_options.m"
      return libs__handle_options__HeadVar__3_1508 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1509_1509, (MR_String) "lib");
    }
#line 2177 "handle_options.m"
    return libs__handle_options__HeadVar__3_1508;
#line 2177 "handle_options.m"
  }
#line 2177 "handle_options.m"
}

#line 2159 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2159__2_2_p_0(
#line 2159 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1500,
#line 2159 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1655)
#line 2159 "handle_options.m"
{
#line 2159 "handle_options.m"
  {
#line 2159 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2159 "handle_options.m"
    {
#line 2159 "handle_options.m"
      return libs__handle_options__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__HeadVar__1_1500, ((MR_Box) (libs__handle_options__HeadVar__2_1655)));
    }
#line 2159 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2159 "handle_options.m"
  }
#line 2159 "handle_options.m"
}

#line 2159 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2159__1_2_p_0(
#line 2159 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1501,
#line 2159 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1657)
#line 2159 "handle_options.m"
{
#line 2159 "handle_options.m"
  {
#line 2159 "handle_options.m"
    MR_bool libs__handle_options__succeeded = (strcmp(libs__handle_options__HeadVar__1_1501, libs__handle_options__HeadVar__2_1657) == 0);

#line 2159 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2159 "handle_options.m"
  }
#line 2159 "handle_options.m"
}

#line 2141 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2141__1_3_f_0(
#line 2141 "handle_options.m"
  MR_String libs__handle_options__FullArch_122,
#line 2141 "handle_options.m"
  MR_String libs__handle_options__GradeString_134,
#line 2141 "handle_options.m"
  MR_String libs__handle_options__HeadVar__3_1488)
#line 2141 "handle_options.m"
{
#line 2141 "handle_options.m"
  {
#line 2141 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2141 "handle_options.m"
    MR_String libs__handle_options__HeadVar__4_1489;
#line 2141 "handle_options.m"
    MR_String libs__handle_options__V_1490_1490;
#line 2141 "handle_options.m"
    MR_String libs__handle_options__V_1491_1491;

#line 2141 "handle_options.m"
    {
#line 2141 "handle_options.m"
      libs__handle_options__V_1491_1491 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__3_1488, (MR_String) "Mercury");
    }
#line 2141 "handle_options.m"
    {
#line 2141 "handle_options.m"
      libs__handle_options__V_1490_1490 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1491_1491, libs__handle_options__GradeString_134);
    }
#line 2141 "handle_options.m"
    {
#line 2141 "handle_options.m"
      return libs__handle_options__HeadVar__4_1489 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1490_1490, libs__handle_options__FullArch_122);
    }
#line 2141 "handle_options.m"
    return libs__handle_options__HeadVar__4_1489;
#line 2141 "handle_options.m"
  }
#line 2141 "handle_options.m"
}

#line 2105 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2105__1_2_f_0(
#line 2105 "handle_options.m"
  MR_String libs__handle_options__GradeString_134,
#line 2105 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1469)
#line 2105 "handle_options.m"
{
#line 2105 "handle_options.m"
  {
#line 2105 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2105 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1470;
#line 2105 "handle_options.m"
    MR_String libs__handle_options__V_1471_1471;

#line 2107 "handle_options.m"
    {
#line 2107 "handle_options.m"
      libs__handle_options__V_1471_1471 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__2_1469, (MR_String) "modules");
    }
#line 2105 "handle_options.m"
    {
#line 2105 "handle_options.m"
      return libs__handle_options__HeadVar__3_1470 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1471_1471, libs__handle_options__GradeString_134);
    }
#line 2105 "handle_options.m"
    return libs__handle_options__HeadVar__3_1470;
#line 2105 "handle_options.m"
  }
#line 2105 "handle_options.m"
}

#line 2095 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2095__1_2_f_0(
#line 2095 "handle_options.m"
  MR_String libs__handle_options__GradeString_134,
#line 2095 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1459)
#line 2095 "handle_options.m"
{
#line 2095 "handle_options.m"
  {
#line 2095 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2095 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1460;
#line 2095 "handle_options.m"
    MR_String libs__handle_options__V_1461_1461;

#line 2097 "handle_options.m"
    {
#line 2097 "handle_options.m"
      libs__handle_options__V_1461_1461 = mercury__dir__make_path_name_2_f_0((MR_String) "ints", libs__handle_options__GradeString_134);
    }
#line 2095 "handle_options.m"
    {
#line 2095 "handle_options.m"
      return libs__handle_options__HeadVar__3_1460 = mercury__dir__make_path_name_2_f_0(libs__handle_options__HeadVar__2_1459, libs__handle_options__V_1461_1461);
    }
#line 2095 "handle_options.m"
    return libs__handle_options__HeadVar__3_1460;
#line 2095 "handle_options.m"
  }
#line 2095 "handle_options.m"
}

#line 2082 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2082__1_2_f_0(
#line 2082 "handle_options.m"
  MR_String libs__handle_options__GradeString_134,
#line 2082 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1442)
#line 2082 "handle_options.m"
{
#line 2082 "handle_options.m"
  {
#line 2082 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2082 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1443;
#line 2082 "handle_options.m"
    MR_String libs__handle_options__V_1444_1444;
#line 2082 "handle_options.m"
    MR_String libs__handle_options__V_1445_1445;

#line 2084 "handle_options.m"
    {
#line 2084 "handle_options.m"
      libs__handle_options__V_1445_1445 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__2_1442, (MR_String) "lib");
    }
#line 2084 "handle_options.m"
    {
#line 2084 "handle_options.m"
      libs__handle_options__V_1444_1444 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1445_1445, libs__handle_options__GradeString_134);
    }
#line 2082 "handle_options.m"
    {
#line 2082 "handle_options.m"
      return libs__handle_options__HeadVar__3_1443 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1444_1444, (MR_String) "inc");
    }
#line 2082 "handle_options.m"
    return libs__handle_options__HeadVar__3_1443;
#line 2082 "handle_options.m"
  }
#line 2082 "handle_options.m"
}

#line 2067 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2067__1_2_f_0(
#line 2067 "handle_options.m"
  MR_String libs__handle_options__GradeString_134,
#line 2067 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1427)
#line 2067 "handle_options.m"
{
#line 2067 "handle_options.m"
  {
#line 2067 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2067 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1428;
#line 2067 "handle_options.m"
    MR_String libs__handle_options__V_1429_1429;

#line 2069 "handle_options.m"
    {
#line 2069 "handle_options.m"
      libs__handle_options__V_1429_1429 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__2_1427, (MR_String) "lib");
    }
#line 2067 "handle_options.m"
    {
#line 2067 "handle_options.m"
      return libs__handle_options__HeadVar__3_1428 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1429_1429, libs__handle_options__GradeString_134);
    }
#line 2067 "handle_options.m"
    return libs__handle_options__HeadVar__3_1428;
#line 2067 "handle_options.m"
  }
#line 2067 "handle_options.m"
}

#line 526 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__check_option_values__526__1_1_p_0(
#line 526 "handle_options.m"
  MR_Char libs__handle_options__HeadVar__1_252)
#line 526 "handle_options.m"
{
#line 526 "handle_options.m"
  {
#line 526 "handle_options.m"
    MR_bool libs__handle_options__succeeded = (libs__handle_options__HeadVar__1_252 == (MR_Char) 46);

#line 526 "handle_options.m"
    return libs__handle_options__succeeded;
#line 526 "handle_options.m"
  }
#line 526 "handle_options.m"
}

#line 2778 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2755__1_5_p_0_2(
#line 2778 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2778 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2778 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2778 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3)
#line 2778 "handle_options.m"
{
#line 2778 "handle_options.m"
  {
#line 2778 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2778 "handle_options.m"
    MR_Word libs__handle_options__conv2_HeadVar__3_15;

#line 2778 "handle_options.m"
    {
#line 2778 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__add_option_list__2778__1_3_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv2_HeadVar__3_15);
    }
#line 2778 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv2_HeadVar__3_15));
#line 2778 "handle_options.m"
  }
#line 2778 "handle_options.m"
}

#line 2778 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2755__1_5_p_0_1(
#line 2778 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2778 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2778 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2778 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3)
#line 2778 "handle_options.m"
{
#line 2778 "handle_options.m"
  {
#line 2778 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2778 "handle_options.m"
    MR_Word libs__handle_options__conv0_HeadVar__3_15;

#line 2778 "handle_options.m"
    {
#line 2778 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__add_option_list__2778__1_3_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv0_HeadVar__3_15);
    }
#line 2778 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv0_HeadVar__3_15));
#line 2778 "handle_options.m"
  }
#line 2778 "handle_options.m"
}

#line 2755 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2755__1_5_p_0(
#line 2755 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_23,
#line 2755 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_24,
#line 2755 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_25,
#line 2755 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__4_26,
#line 2755 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_27)
#line 2755 "handle_options.m"
{
#line 2755 "handle_options.m"
  {
#line 2755 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2755 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_41_41;
#line 2755 "handle_options.m"
    MR_Word libs__handle_options__TypeInfo_21_62;
#line 2755 "handle_options.m"
    MR_Word libs__handle_options__TypeInfo_22_63;
#line 2755 "handle_options.m"
    MR_Word libs__handle_options__Comp_15;
#line 2755 "handle_options.m"
    MR_Word libs__handle_options__CompOpts_16;
#line 2755 "handle_options.m"
    MR_Word libs__handle_options__MaybeTargets_17;
#line 2755 "handle_options.m"
    MR_Word libs__handle_options__Opts1_19;
#line 2755 "handle_options.m"
    MR_Word libs__handle_options__V_53_53;
#line 2757 "handle_options.m"
    MR_Word libs__handle_options__V_18_18;
#line 2760 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_40_40;
#line 2778 "handle_options.m"
    MR_Box libs__handle_options__conv1_Opts1_19;
#line 2769 "handle_options.m"
    MR_Word libs__handle_options__Target_20;
#line 2767 "handle_options.m"
    MR_Word libs__handle_options__V_28_28;
#line 2767 "handle_options.m"
    MR_Word libs__handle_options__V_29_29;

#line 2757 "handle_options.m"
    {
#line 2757 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__grade_component_table_5_p_0(libs__handle_options__HeadVar__1_23, &libs__handle_options__Comp_15, &libs__handle_options__CompOpts_16, &libs__handle_options__MaybeTargets_17, &libs__handle_options__V_18_18);
    }
#line 2755 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2755 "handle_options.m"
      {
#line 5074 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_40_40 = (MR_Word) &libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0;
#line 2760 "handle_options.m"
        {
#line 2760 "handle_options.m"
          libs__handle_options__succeeded = mercury__set__member_2_p_0(libs__handle_options__TypeCtorInfo_40_40, ((MR_Box) (libs__handle_options__Comp_15)), libs__handle_options__HeadVar__4_26);
        }
#line 2760 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 2755 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 2755 "handle_options.m"
          {
#line 5087 "libs.handle_options.c"
            libs__handle_options__TypeCtorInfo_41_41 = (MR_Word) &libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0;
#line 2761 "handle_options.m"
            {
#line 2761 "handle_options.m"
              mercury__set__insert_3_p_0(libs__handle_options__TypeCtorInfo_41_41, ((MR_Box) (libs__handle_options__Comp_15)), libs__handle_options__HeadVar__4_26, libs__handle_options__HeadVar__5_27);
            }
#line 2778 "handle_options.m"
            libs__handle_options__V_53_53 = (MR_Word) &libs__handle_options_scalar_common_1[20];
#line 5096 "libs.handle_options.c"
            libs__handle_options__TypeInfo_21_62 = (MR_Word) &libs__handle_options_scalar_common_1[1];
#line 5098 "libs.handle_options.c"
            libs__handle_options__TypeInfo_22_63 = (MR_Word) &libs__handle_options_scalar_common_1[0];
#line 2778 "handle_options.m"
            {
#line 2778 "handle_options.m"
              mercury__list__foldl_4_p_0(libs__handle_options__TypeInfo_21_62, libs__handle_options__TypeInfo_22_63, libs__handle_options__V_53_53, libs__handle_options__CompOpts_16, ((MR_Box) (libs__handle_options__HeadVar__2_24)), &libs__handle_options__conv1_Opts1_19);
            }
#line 2778 "handle_options.m"
            libs__handle_options__Opts1_19 = ((MR_Word) libs__handle_options__conv1_Opts1_19);
#line 2767 "handle_options.m"
            libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__MaybeTargets_17)) == (MR_mktag((MR_Integer) 1)));
#line 2767 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 2767 "handle_options.m"
              {
#line 2767 "handle_options.m"
                libs__handle_options__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeTargets_17, (MR_Integer) 0)));
#line 2767 "handle_options.m"
                libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 2767 "handle_options.m"
                if (libs__handle_options__succeeded)
#line 2767 "handle_options.m"
                  {
#line 2767 "handle_options.m"
                    libs__handle_options__Target_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_28_28, (MR_Integer) 0)));
#line 2767 "handle_options.m"
                    libs__handle_options__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_28_28, (MR_Integer) 1)));
#line 2767 "handle_options.m"
                    libs__handle_options__succeeded = (libs__handle_options__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2767 "handle_options.m"
                  }
#line 2767 "handle_options.m"
              }
#line 2769 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 2768 "handle_options.m"
              {
#line 2768 "handle_options.m"
                MR_Word libs__handle_options__V_30_30;
#line 2768 "handle_options.m"
                MR_Word libs__handle_options__V_31_31;
#line 2778 "handle_options.m"
                MR_Box libs__handle_options__conv3_HeadVar__3_25;

#line 2768 "handle_options.m"
                {
#line 2768 "handle_options.m"
                  libs__handle_options__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2768 "handle_options.m"
                  MR_hl_field(MR_mktag(0), libs__handle_options__V_31_31, 0) = ((MR_Box) ((MR_Integer) 170));
#line 2768 "handle_options.m"
                  MR_hl_field(MR_mktag(0), libs__handle_options__V_31_31, 1) = ((MR_Box) (libs__handle_options__Target_20));
#line 2768 "handle_options.m"
                }
#line 2768 "handle_options.m"
                {
#line 2768 "handle_options.m"
                  libs__handle_options__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2768 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_30_30, 0) = ((MR_Box) (libs__handle_options__V_31_31));
#line 2768 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2768 "handle_options.m"
                }
#line 2778 "handle_options.m"
                {
#line 2778 "handle_options.m"
                  mercury__list__foldl_4_p_0((MR_Word) &libs__handle_options_scalar_common_1[1], (MR_Word) &libs__handle_options_scalar_common_1[0], (MR_Word) &libs__handle_options_scalar_common_1[21], libs__handle_options__V_30_30, ((MR_Box) (libs__handle_options__Opts1_19)), &libs__handle_options__conv3_HeadVar__3_25);
                }
#line 2778 "handle_options.m"
                *libs__handle_options__HeadVar__3_25 = ((MR_Word) libs__handle_options__conv3_HeadVar__3_25);
#line 2768 "handle_options.m"
              }
#line 2769 "handle_options.m"
            else
#line 2770 "handle_options.m"
              *libs__handle_options__HeadVar__3_25 = libs__handle_options__Opts1_19;
#line 2769 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 2755 "handle_options.m"
          }
#line 2755 "handle_options.m"
      }
#line 2755 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2755 "handle_options.m"
  }
#line 2755 "handle_options.m"
}

#line 2727 "handle_options.m"
static void MR_CALL 
libs__handle_options____Compare____grade_component_0_0(
#line 2727 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__1_1,
#line 2727 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_2,
#line 2727 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__3_3)
#line 2727 "handle_options.m"
{
#line 2727 "handle_options.m"
  {
#line 2727 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2727 "handle_options.m"
    MR_Integer libs__handle_options__Cast_HeadVar1_4 = (MR_Integer) libs__handle_options__HeadVar__2_2;
#line 2727 "handle_options.m"
    MR_Integer libs__handle_options__Cast_HeadVar2_5 = (MR_Integer) libs__handle_options__HeadVar__3_3;

#line 2727 "handle_options.m"
    {
#line 2727 "handle_options.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__handle_options__HeadVar__1_1, libs__handle_options__Cast_HeadVar1_4, libs__handle_options__Cast_HeadVar2_5);
#line 2727 "handle_options.m"
      return;
    }
#line 2727 "handle_options.m"
  }
#line 2727 "handle_options.m"
}

#line 2727 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options____Unify____grade_component_0_0(
#line 2727 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_1,
#line 2727 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_2)
#line 2727 "handle_options.m"
{
#line 5229 "libs.handle_options.c"
  {
#line 5231 "libs.handle_options.c"
    MR_bool libs__handle_options__succeeded = (libs__handle_options__HeadVar__2_1 == libs__handle_options__HeadVar__2_2);

#line 5234 "libs.handle_options.c"
    return libs__handle_options__succeeded;
#line 5236 "libs.handle_options.c"
  }
#line 2727 "handle_options.m"
}

#line 3202 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_dump_alias_2_p_0(
#line 3202 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1,
#line 3202 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_2)
#line 3202 "handle_options.m"
{
#line 3205 "handle_options.m"
  {
#line 3205 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 3205 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "mm") == 0))
#line 3218 "handle_options.m"
      {
#line 3218 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_String) "bdgvP";
#line 3218 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3218 "handle_options.m"
      }
#line 3205 "handle_options.m"
    else
#line 3205 "handle_options.m"
      if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "ALL") == 0))
#line 3205 "handle_options.m"
        {
#line 3205 "handle_options.m"
          *libs__handle_options__HeadVar__2_2 = (MR_String) "abcdEfgilmnprstuvzBCDIMPRSTUZ";
#line 3205 "handle_options.m"
          libs__handle_options__succeeded = MR_TRUE;
#line 3205 "handle_options.m"
        }
#line 3205 "handle_options.m"
      else
#line 3205 "handle_options.m"
        if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "all") == 0))
#line 3207 "handle_options.m"
          {
#line 3207 "handle_options.m"
            *libs__handle_options__HeadVar__2_2 = (MR_String) "abcdEfgilmnprstuvzBCMPSTZ";
#line 3207 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 3207 "handle_options.m"
          }
#line 3205 "handle_options.m"
        else
#line 3205 "handle_options.m"
          if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "cmp") == 0))
#line 3209 "handle_options.m"
            {
#line 3209 "handle_options.m"
              *libs__handle_options__HeadVar__2_2 = (MR_String) "bdfgilmnprstuvzP";
#line 3209 "handle_options.m"
              libs__handle_options__succeeded = MR_TRUE;
#line 3209 "handle_options.m"
            }
#line 3205 "handle_options.m"
          else
#line 3205 "handle_options.m"
            if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "lco") == 0))
#line 3224 "handle_options.m"
              {
#line 3224 "handle_options.m"
                *libs__handle_options__HeadVar__2_2 = (MR_String) "agiuvzD";
#line 3224 "handle_options.m"
                libs__handle_options__succeeded = MR_TRUE;
#line 3224 "handle_options.m"
              }
#line 3205 "handle_options.m"
            else
#line 3205 "handle_options.m"
              if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "min") == 0))
#line 3214 "handle_options.m"
                {
#line 3214 "handle_options.m"
                  *libs__handle_options__HeadVar__2_2 = (MR_String) "ilv";
#line 3214 "handle_options.m"
                  libs__handle_options__succeeded = MR_TRUE;
#line 3214 "handle_options.m"
                }
#line 3205 "handle_options.m"
              else
#line 3205 "handle_options.m"
                if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "osv") == 0))
#line 3219 "handle_options.m"
                  {
#line 3219 "handle_options.m"
                    *libs__handle_options__HeadVar__2_2 = (MR_String) "bcdglmnpruvP";
#line 3219 "handle_options.m"
                    libs__handle_options__succeeded = MR_TRUE;
#line 3219 "handle_options.m"
                  }
#line 3205 "handle_options.m"
                else
#line 3205 "handle_options.m"
                  if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "allD") == 0))
#line 3206 "handle_options.m"
                    {
#line 3206 "handle_options.m"
                      *libs__handle_options__HeadVar__2_2 = (MR_String) "abcdEfgilmnprstuvzBCDMPT";
#line 3206 "handle_options.m"
                      libs__handle_options__succeeded = MR_TRUE;
#line 3206 "handle_options.m"
                    }
#line 3205 "handle_options.m"
                  else
#line 3205 "handle_options.m"
                    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "ctgc") == 0))
#line 3221 "handle_options.m"
                      {
#line 3221 "handle_options.m"
                        *libs__handle_options__HeadVar__2_2 = (MR_String) "cdinpGDRS";
#line 3221 "handle_options.m"
                        libs__handle_options__succeeded = MR_TRUE;
#line 3221 "handle_options.m"
                      }
#line 3205 "handle_options.m"
                    else
#line 3205 "handle_options.m"
                      if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "most") == 0))
#line 3208 "handle_options.m"
                        {
#line 3208 "handle_options.m"
                          *libs__handle_options__HeadVar__2_2 = (MR_String) "bcdfgilmnprstvzP";
#line 3208 "handle_options.m"
                          libs__handle_options__succeeded = MR_TRUE;
#line 3208 "handle_options.m"
                        }
#line 3205 "handle_options.m"
                      else
#line 3205 "handle_options.m"
                        if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "poly") == 0))
#line 3225 "handle_options.m"
                          {
#line 3225 "handle_options.m"
                            *libs__handle_options__HeadVar__2_2 = (MR_String) "vxX";
#line 3225 "handle_options.m"
                            libs__handle_options__succeeded = MR_TRUE;
#line 3225 "handle_options.m"
                          }
#line 3205 "handle_options.m"
                        else
#line 3205 "handle_options.m"
                          if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "vars") == 0))
#line 3222 "handle_options.m"
                            {
#line 3222 "handle_options.m"
                              *libs__handle_options__HeadVar__2_2 = (MR_String) "npBis";
#line 3222 "handle_options.m"
                              libs__handle_options__succeeded = MR_TRUE;
#line 3222 "handle_options.m"
                            }
#line 3205 "handle_options.m"
                          else
#line 3205 "handle_options.m"
                            if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "paths") == 0))
#line 3215 "handle_options.m"
                              {
#line 3215 "handle_options.m"
                                *libs__handle_options__HeadVar__2_2 = (MR_String) "cP";
#line 3215 "handle_options.m"
                                libs__handle_options__succeeded = MR_TRUE;
#line 3215 "handle_options.m"
                              }
#line 3205 "handle_options.m"
                            else
#line 3205 "handle_options.m"
                              if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "petdr") == 0))
#line 3216 "handle_options.m"
                                {
#line 3216 "handle_options.m"
                                  *libs__handle_options__HeadVar__2_2 = (MR_String) "din";
#line 3216 "handle_options.m"
                                  libs__handle_options__succeeded = MR_TRUE;
#line 3216 "handle_options.m"
                                }
#line 3205 "handle_options.m"
                              else
#line 3205 "handle_options.m"
                                if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "trans") == 0))
#line 3210 "handle_options.m"
                                  {
#line 3210 "handle_options.m"
                                    *libs__handle_options__HeadVar__2_2 = (MR_String) "bcdglmnstuvz";
#line 3210 "handle_options.m"
                                    libs__handle_options__succeeded = MR_TRUE;
#line 3210 "handle_options.m"
                                  }
#line 3205 "handle_options.m"
                                else
#line 3205 "handle_options.m"
                                  if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "detism") == 0))
#line 3217 "handle_options.m"
                                    {
#line 3217 "handle_options.m"
                                      *libs__handle_options__HeadVar__2_2 = (MR_String) "divM";
#line 3217 "handle_options.m"
                                      libs__handle_options__succeeded = MR_TRUE;
#line 3217 "handle_options.m"
                                    }
#line 3205 "handle_options.m"
                                  else
#line 3205 "handle_options.m"
                                    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "codegen") == 0))
#line 3212 "handle_options.m"
                                      {
#line 3212 "handle_options.m"
                                        *libs__handle_options__HeadVar__2_2 = (MR_String) "dfnprsu";
#line 3212 "handle_options.m"
                                        libs__handle_options__succeeded = MR_TRUE;
#line 3212 "handle_options.m"
                                      }
#line 3205 "handle_options.m"
                                    else
#line 3205 "handle_options.m"
                                      if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "vanessa") == 0))
#line 3213 "handle_options.m"
                                        {
#line 3213 "handle_options.m"
                                          *libs__handle_options__HeadVar__2_2 = (MR_String) "ltuCIU";
#line 3213 "handle_options.m"
                                          libs__handle_options__succeeded = MR_TRUE;
#line 3213 "handle_options.m"
                                        }
#line 3205 "handle_options.m"
                                      else
#line 3205 "handle_options.m"
                                        if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "mintrans") == 0))
#line 3211 "handle_options.m"
                                          {
#line 3211 "handle_options.m"
                                            *libs__handle_options__HeadVar__2_2 = (MR_String) "bcdglmnstvz";
#line 3211 "handle_options.m"
                                            libs__handle_options__succeeded = MR_TRUE;
#line 3211 "handle_options.m"
                                          }
#line 3205 "handle_options.m"
                                        else
#line 3205 "handle_options.m"
                                          if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "statevar") == 0))
#line 3223 "handle_options.m"
                                            {
#line 3223 "handle_options.m"
                                              *libs__handle_options__HeadVar__2_2 = (MR_String) "gvCP";
#line 3223 "handle_options.m"
                                              libs__handle_options__succeeded = MR_TRUE;
#line 3223 "handle_options.m"
                                            }
#line 3205 "handle_options.m"
                                          else
#line 3205 "handle_options.m"
                                            libs__handle_options__succeeded = MR_FALSE;
#line 3205 "handle_options.m"
    return libs__handle_options__succeeded;
#line 3205 "handle_options.m"
  }
#line 3202 "handle_options.m"
}

#line 3187 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__char_is_not_2_p_0(
#line 3187 "handle_options.m"
  MR_Char libs__handle_options__A_3,
#line 3187 "handle_options.m"
  MR_Char libs__handle_options__B_4)
#line 3187 "handle_options.m"
{
#line 3190 "handle_options.m"
  {
#line 3190 "handle_options.m"
    MR_bool libs__handle_options__succeeded = (libs__handle_options__A_3 == libs__handle_options__B_4);

#line 3190 "handle_options.m"
    libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 3190 "handle_options.m"
    return libs__handle_options__succeeded;
#line 3190 "handle_options.m"
  }
#line 3187 "handle_options.m"
}

#line 3176 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__split_grade_string_2_2_p_0_1(
#line 3176 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3176 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 3176 "handle_options.m"
{
#line 3176 "handle_options.m"
  {
#line 3176 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 3176 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 3176 "handle_options.m"
    {
#line 3176 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__char_is_not_2_p_0(((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) libs__handle_options__wrapper_arg_1));
    }
#line 3176 "handle_options.m"
    return libs__handle_options__succeeded;
#line 3176 "handle_options.m"
  }
#line 3176 "handle_options.m"
}

#line 3171 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__split_grade_string_2_2_p_0(
#line 3171 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1,
#line 3171 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2)
#line 3171 "handle_options.m"
{
#line 3173 "handle_options.m"
  {
#line 3173 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 3173 "handle_options.m"
    if ((libs__handle_options__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3173 "handle_options.m"
      {
#line 3173 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3173 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3173 "handle_options.m"
      }
#line 3173 "handle_options.m"
    else
#line 3174 "handle_options.m"
      {
#line 3174 "handle_options.m"
        MR_Word libs__handle_options__ThisChars_7;
#line 3174 "handle_options.m"
        MR_Word libs__handle_options__RestChars0_8;
#line 3174 "handle_options.m"
        MR_String libs__handle_options__ThisComponent_9;
#line 3174 "handle_options.m"
        MR_Word libs__handle_options__RestComponents_10;

#line 3176 "handle_options.m"
        {
#line 3176 "handle_options.m"
          mercury__list__takewhile_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &libs__handle_options_scalar_common_6[6], libs__handle_options__HeadVar__1_1, &libs__handle_options__ThisChars_7, &libs__handle_options__RestChars0_8);
        }
#line 3177 "handle_options.m"
        {
#line 3177 "handle_options.m"
          mercury__string__from_char_list_2_p_0(libs__handle_options__ThisChars_7, &libs__handle_options__ThisComponent_9);
        }
#line 3182 "handle_options.m"
        if ((libs__handle_options__RestChars0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3184 "handle_options.m"
          {
#line 3184 "handle_options.m"
            libs__handle_options__RestComponents_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3184 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 3184 "handle_options.m"
          }
#line 3182 "handle_options.m"
        else
#line 3180 "handle_options.m"
          {
#line 3180 "handle_options.m"
            MR_Word libs__handle_options__RestChars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__RestChars0_8, (MR_Integer) 1)));
#line 3180 "handle_options.m"
            MR_Char libs__handle_options__V_11_11 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__RestChars0_8, (MR_Integer) 0)));

#line 3181 "handle_options.m"
            {
#line 3181 "handle_options.m"
              libs__handle_options__succeeded = libs__handle_options__split_grade_string_2_2_p_0(libs__handle_options__RestChars_12, &libs__handle_options__RestComponents_10);
            }
#line 3180 "handle_options.m"
          }
#line 3174 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 3174 "handle_options.m"
          {
#line 3178 "handle_options.m"
            {
#line 3178 "handle_options.m"
              MR_Word base;
#line 3178 "handle_options.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3178 "handle_options.m"
              *libs__handle_options__HeadVar__2_2 = base;
#line 3178 "handle_options.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__ThisComponent_9));
#line 3178 "handle_options.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__handle_options__RestComponents_10));
#line 3178 "handle_options.m"
            }
#line 3178 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 3174 "handle_options.m"
          }
#line 3174 "handle_options.m"
      }
#line 3173 "handle_options.m"
    return libs__handle_options__succeeded;
#line 3173 "handle_options.m"
  }
#line 3171 "handle_options.m"
}

#line 3132 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_start_values_1_p_0(
#line 3132 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__1_1,
#line 3132 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 3132 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 3132 "handle_options.m"
{
#line 3134 "handle_options.m"
  {
#line 3134 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 3134 "handle_options.m"
    {
#line 3134 "handle_options.m"
      MR_Integer libs__handle_options__slot_0 = (MR_Integer) 0;

#line 3134 "handle_options.m"
      do
#line 3134 "handle_options.m"
        {
#line 3134 "handle_options.m"
          *libs__handle_options__HeadVar__1_1 = ((&libs__handle_options_vector_common_12[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_12_0__vct_12_f_0;
#line 3134 "handle_options.m"
          {
#line 3134 "handle_options.m"
            libs__handle_options__cont(libs__handle_options__cont_env_ptr);
          }
#line 3134 "handle_options.m"
          libs__handle_options__slot_0 = (libs__handle_options__slot_0 + (MR_Integer) 1);
#line 3134 "handle_options.m"
        }
#line 3134 "handle_options.m"
      while ((libs__handle_options__slot_0 < (MR_Integer) 30));
#line 3134 "handle_options.m"
    }
#line 3134 "handle_options.m"
  }
#line 3132 "handle_options.m"
}

#line 2871 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_component_table_5_p_2(
#line 2871 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__1_1,
#line 2871 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2,
#line 2871 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_3,
#line 2871 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__4_4,
#line 2871 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_5,
#line 2871 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2871 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 2871 "handle_options.m"
{
#line 2876 "handle_options.m"
  {
#line 2876 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2876 "handle_options.m"
    {
#line 2876 "handle_options.m"
      MR_Integer libs__handle_options__slot_0 = (MR_Integer) 0;

#line 2876 "handle_options.m"
      do
#line 2876 "handle_options.m"
        {
#line 2876 "handle_options.m"
          *libs__handle_options__HeadVar__1_1 = ((&libs__handle_options_vector_common_11[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_11_0__vct_11_f_0;
#line 2876 "handle_options.m"
          *libs__handle_options__HeadVar__2_2 = ((&libs__handle_options_vector_common_11[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_11_0__vct_11_f_1;
#line 2876 "handle_options.m"
          *libs__handle_options__HeadVar__3_3 = ((&libs__handle_options_vector_common_11[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_11_0__vct_11_f_2;
#line 2876 "handle_options.m"
          *libs__handle_options__HeadVar__4_4 = ((&libs__handle_options_vector_common_11[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_11_0__vct_11_f_3;
#line 2876 "handle_options.m"
          *libs__handle_options__HeadVar__5_5 = ((&libs__handle_options_vector_common_11[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_11_0__vct_11_f_4;
#line 2876 "handle_options.m"
          {
#line 2876 "handle_options.m"
            libs__handle_options__cont(libs__handle_options__cont_env_ptr);
          }
#line 2876 "handle_options.m"
          libs__handle_options__slot_0 = (libs__handle_options__slot_0 + (MR_Integer) 1);
#line 2876 "handle_options.m"
        }
#line 2876 "handle_options.m"
      while ((libs__handle_options__slot_0 < (MR_Integer) 51));
#line 2876 "handle_options.m"
    }
#line 2876 "handle_options.m"
  }
#line 2871 "handle_options.m"
}

#line 2869 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__grade_component_table_5_p_0(
#line 2869 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1,
#line 2869 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2,
#line 2869 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_3,
#line 2869 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__4_4,
#line 2869 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_5)
#line 2869 "handle_options.m"
{
#line 2876 "handle_options.m"
  {
#line 2876 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2876 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "gc") == 0))
#line 3005 "handle_options.m"
      {
#line 3005 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 3;
#line 3005 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[75]);
#line 3005 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3005 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3005 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3005 "handle_options.m"
      }
#line 2876 "handle_options.m"
    else
#line 2876 "handle_options.m"
      if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "hl") == 0))
#line 2924 "handle_options.m"
        {
#line 2924 "handle_options.m"
          *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2924 "handle_options.m"
          *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[86]);
#line 2930 "handle_options.m"
          *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[5]);
#line 2924 "handle_options.m"
          *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2924 "handle_options.m"
          libs__handle_options__succeeded = MR_TRUE;
#line 2924 "handle_options.m"
        }
#line 2876 "handle_options.m"
      else
#line 2876 "handle_options.m"
        if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "il") == 0))
#line 2956 "handle_options.m"
          {
#line 2956 "handle_options.m"
            *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2956 "handle_options.m"
            *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[86]);
#line 2962 "handle_options.m"
            *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[6]);
#line 2956 "handle_options.m"
            *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2956 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 2956 "handle_options.m"
          }
#line 2876 "handle_options.m"
        else
#line 2876 "handle_options.m"
          if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "mm") == 0))
#line 3049 "handle_options.m"
            {
#line 3049 "handle_options.m"
              *libs__handle_options__HeadVar__2_2 = (MR_Integer) 7;
#line 3049 "handle_options.m"
              *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[125]);
#line 3049 "handle_options.m"
              *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3049 "handle_options.m"
              *libs__handle_options__HeadVar__5_5 = (MR_Integer) 0;
#line 3049 "handle_options.m"
              libs__handle_options__succeeded = MR_TRUE;
#line 3049 "handle_options.m"
            }
#line 2876 "handle_options.m"
          else
#line 2876 "handle_options.m"
            if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "tr") == 0))
#line 3040 "handle_options.m"
              {
#line 3040 "handle_options.m"
                *libs__handle_options__HeadVar__2_2 = (MR_Integer) 6;
#line 3040 "handle_options.m"
                *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[186]);
#line 3040 "handle_options.m"
                *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3040 "handle_options.m"
                *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3040 "handle_options.m"
                libs__handle_options__succeeded = MR_TRUE;
#line 3040 "handle_options.m"
              }
#line 2876 "handle_options.m"
            else
#line 2876 "handle_options.m"
              if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "agc") == 0))
#line 3009 "handle_options.m"
                {
#line 3009 "handle_options.m"
                  *libs__handle_options__HeadVar__2_2 = (MR_Integer) 3;
#line 3009 "handle_options.m"
                  *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[13]);
#line 3009 "handle_options.m"
                  *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3009 "handle_options.m"
                  *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3009 "handle_options.m"
                  libs__handle_options__succeeded = MR_TRUE;
#line 3009 "handle_options.m"
                }
#line 2876 "handle_options.m"
              else
#line 2876 "handle_options.m"
                if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "dmm") == 0))
#line 3053 "handle_options.m"
                  {
#line 3053 "handle_options.m"
                    *libs__handle_options__HeadVar__2_2 = (MR_Integer) 7;
#line 3053 "handle_options.m"
                    *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[56]);
#line 3053 "handle_options.m"
                    *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3053 "handle_options.m"
                    *libs__handle_options__HeadVar__5_5 = (MR_Integer) 0;
#line 3053 "handle_options.m"
                    libs__handle_options__succeeded = MR_TRUE;
#line 3053 "handle_options.m"
                  }
#line 2876 "handle_options.m"
                else
#line 2876 "handle_options.m"
                  if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "gcd") == 0))
#line 3006 "handle_options.m"
                    {
#line 3006 "handle_options.m"
                      *libs__handle_options__HeadVar__2_2 = (MR_Integer) 3;
#line 3006 "handle_options.m"
                      *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[78]);
#line 3006 "handle_options.m"
                      *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3006 "handle_options.m"
                      *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3006 "handle_options.m"
                      libs__handle_options__succeeded = MR_TRUE;
#line 3006 "handle_options.m"
                    }
#line 2876 "handle_options.m"
                  else
#line 2876 "handle_options.m"
                    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "hgc") == 0))
#line 3007 "handle_options.m"
                      {
#line 3007 "handle_options.m"
                        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 3;
#line 3007 "handle_options.m"
                        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[81]);
#line 3007 "handle_options.m"
                        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3007 "handle_options.m"
                        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3007 "handle_options.m"
                        libs__handle_options__succeeded = MR_TRUE;
#line 3007 "handle_options.m"
                      }
#line 2876 "handle_options.m"
                    else
#line 2876 "handle_options.m"
                      if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "hlc") == 0))
#line 2932 "handle_options.m"
                        {
#line 2932 "handle_options.m"
                          *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2932 "handle_options.m"
                          *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[99]);
#line 2938 "handle_options.m"
                          *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[5]);
#line 2932 "handle_options.m"
                          *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2932 "handle_options.m"
                          libs__handle_options__succeeded = MR_TRUE;
#line 2932 "handle_options.m"
                        }
#line 2876 "handle_options.m"
                      else
#line 2876 "handle_options.m"
                        if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "ilc") == 0))
#line 2964 "handle_options.m"
                          {
#line 2964 "handle_options.m"
                            *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2964 "handle_options.m"
                            *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[99]);
#line 2970 "handle_options.m"
                            *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[6]);
#line 2964 "handle_options.m"
                            *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2964 "handle_options.m"
                            libs__handle_options__succeeded = MR_TRUE;
#line 2964 "handle_options.m"
                          }
#line 2876 "handle_options.m"
                        else
#line 2876 "handle_options.m"
                          if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "mps") == 0))
#line 3008 "handle_options.m"
                            {
#line 3008 "handle_options.m"
                              *libs__handle_options__HeadVar__2_2 = (MR_Integer) 3;
#line 3008 "handle_options.m"
                              *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[130]);
#line 3008 "handle_options.m"
                              *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3008 "handle_options.m"
                              *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3008 "handle_options.m"
                              libs__handle_options__succeeded = MR_TRUE;
#line 3008 "handle_options.m"
                            }
#line 2876 "handle_options.m"
                          else
#line 2876 "handle_options.m"
                            if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "par") == 0))
#line 2998 "handle_options.m"
                              {
#line 2998 "handle_options.m"
                                *libs__handle_options__HeadVar__2_2 = (MR_Integer) 1;
#line 2998 "handle_options.m"
                                *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[134]);
#line 2998 "handle_options.m"
                                *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2998 "handle_options.m"
                                *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2998 "handle_options.m"
                                libs__handle_options__succeeded = MR_TRUE;
#line 2998 "handle_options.m"
                              }
#line 2876 "handle_options.m"
                            else
#line 2876 "handle_options.m"
                              if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "reg") == 0))
#line 2884 "handle_options.m"
                                {
#line 2884 "handle_options.m"
                                  *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2884 "handle_options.m"
                                  *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[170]);
#line 2890 "handle_options.m"
                                  *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
#line 2884 "handle_options.m"
                                  *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2884 "handle_options.m"
                                  libs__handle_options__succeeded = MR_TRUE;
#line 2884 "handle_options.m"
                                }
#line 2876 "handle_options.m"
                              else
#line 2876 "handle_options.m"
                                if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "spf") == 0))
#line 3078 "handle_options.m"
                                  {
#line 3078 "handle_options.m"
                                    *libs__handle_options__HeadVar__2_2 = (MR_Integer) 8;
#line 3078 "handle_options.m"
                                    *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[174]);
#line 3078 "handle_options.m"
                                    *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3078 "handle_options.m"
                                    *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3078 "handle_options.m"
                                    libs__handle_options__succeeded = MR_TRUE;
#line 3078 "handle_options.m"
                                  }
#line 2876 "handle_options.m"
                                else
#line 2876 "handle_options.m"
                                  if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "tsc") == 0))
#line 3035 "handle_options.m"
                                    {
#line 3035 "handle_options.m"
                                      *libs__handle_options__HeadVar__2_2 = (MR_Integer) 5;
#line 3035 "handle_options.m"
                                      *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[193]);
#line 3035 "handle_options.m"
                                      *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3035 "handle_options.m"
                                      *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3035 "handle_options.m"
                                      libs__handle_options__succeeded = MR_TRUE;
#line 3035 "handle_options.m"
                                    }
#line 2876 "handle_options.m"
                                  else
#line 2876 "handle_options.m"
                                    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "tsw") == 0))
#line 3032 "handle_options.m"
                                      {
#line 3032 "handle_options.m"
                                        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 5;
#line 3032 "handle_options.m"
                                        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[197]);
#line 3032 "handle_options.m"
                                        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3032 "handle_options.m"
                                        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3032 "handle_options.m"
                                        libs__handle_options__succeeded = MR_TRUE;
#line 3032 "handle_options.m"
                                      }
#line 2876 "handle_options.m"
                                    else
#line 2876 "handle_options.m"
                                      if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "exts") == 0))
#line 3098 "handle_options.m"
                                        {
#line 3098 "handle_options.m"
                                          *libs__handle_options__HeadVar__2_2 = (MR_Integer) 12;
#line 3098 "handle_options.m"
                                          *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[71]);
#line 3098 "handle_options.m"
                                          *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3098 "handle_options.m"
                                          *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3098 "handle_options.m"
                                          libs__handle_options__succeeded = MR_TRUE;
#line 3098 "handle_options.m"
                                        }
#line 2876 "handle_options.m"
                                      else
#line 2876 "handle_options.m"
                                        if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "fast") == 0))
#line 2908 "handle_options.m"
                                          {
#line 2908 "handle_options.m"
                                            *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2908 "handle_options.m"
                                            *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[72]);
#line 2914 "handle_options.m"
                                            *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
#line 2908 "handle_options.m"
                                            *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2908 "handle_options.m"
                                            libs__handle_options__succeeded = MR_TRUE;
#line 2908 "handle_options.m"
                                          }
#line 2876 "handle_options.m"
                                        else
#line 2876 "handle_options.m"
                                          if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "java") == 0))
#line 2972 "handle_options.m"
                                            {
#line 2972 "handle_options.m"
                                              *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2972 "handle_options.m"
                                              *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[41]);
#line 2978 "handle_options.m"
                                              *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[7]);
#line 2972 "handle_options.m"
                                              *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2972 "handle_options.m"
                                              libs__handle_options__succeeded = MR_TRUE;
#line 2972 "handle_options.m"
                                            }
#line 2876 "handle_options.m"
                                          else
#line 2876 "handle_options.m"
                                            if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "jump") == 0))
#line 2892 "handle_options.m"
                                              {
#line 2892 "handle_options.m"
                                                *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2892 "handle_options.m"
                                                *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[109]);
#line 2898 "handle_options.m"
                                                *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
#line 2892 "handle_options.m"
                                                *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2892 "handle_options.m"
                                                libs__handle_options__succeeded = MR_TRUE;
#line 2892 "handle_options.m"
                                              }
#line 2876 "handle_options.m"
                                            else
#line 2876 "handle_options.m"
                                              if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "mmos") == 0))
#line 3065 "handle_options.m"
                                                {
#line 3065 "handle_options.m"
                                                  *libs__handle_options__HeadVar__2_2 = (MR_Integer) 7;
#line 3065 "handle_options.m"
                                                  *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[127]);
#line 3065 "handle_options.m"
                                                  *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3065 "handle_options.m"
                                                  *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3065 "handle_options.m"
                                                  libs__handle_options__succeeded = MR_TRUE;
#line 3065 "handle_options.m"
                                                }
#line 2876 "handle_options.m"
                                              else
#line 2876 "handle_options.m"
                                                if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "mmsc") == 0))
#line 3057 "handle_options.m"
                                                  {
#line 3057 "handle_options.m"
                                                    *libs__handle_options__HeadVar__2_2 = (MR_Integer) 7;
#line 3057 "handle_options.m"
                                                    *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[125]);
#line 3057 "handle_options.m"
                                                    *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3057 "handle_options.m"
                                                    *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3057 "handle_options.m"
                                                    libs__handle_options__succeeded = MR_TRUE;
#line 3057 "handle_options.m"
                                                  }
#line 2876 "handle_options.m"
                                                else
#line 2876 "handle_options.m"
                                                  if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "none") == 0))
#line 2876 "handle_options.m"
                                                    {
#line 2876 "handle_options.m"
                                                      *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2876 "handle_options.m"
                                                      *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[132]);
#line 2882 "handle_options.m"
                                                      *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
#line 2876 "handle_options.m"
                                                      *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2876 "handle_options.m"
                                                      libs__handle_options__succeeded = MR_TRUE;
#line 2876 "handle_options.m"
                                                    }
#line 2876 "handle_options.m"
                                                  else
#line 2876 "handle_options.m"
                                                    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "prof") == 0))
#line 3012 "handle_options.m"
                                                      {
#line 3012 "handle_options.m"
                                                        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 4;
#line 3012 "handle_options.m"
                                                        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[143]);
#line 3012 "handle_options.m"
                                                        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3012 "handle_options.m"
                                                        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3012 "handle_options.m"
                                                        libs__handle_options__succeeded = MR_TRUE;
#line 3012 "handle_options.m"
                                                      }
#line 2876 "handle_options.m"
                                                    else
#line 2876 "handle_options.m"
                                                      if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "rbmm") == 0))
#line 3106 "handle_options.m"
                                                        {
#line 3106 "handle_options.m"
                                                          *libs__handle_options__HeadVar__2_2 = (MR_Integer) 13;
#line 3106 "handle_options.m"
                                                          *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[159]);
#line 3106 "handle_options.m"
                                                          *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3106 "handle_options.m"
                                                          *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3106 "handle_options.m"
                                                          libs__handle_options__succeeded = MR_TRUE;
#line 3106 "handle_options.m"
                                                        }
#line 2876 "handle_options.m"
                                                      else
#line 2876 "handle_options.m"
                                                        if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "debug") == 0))
#line 3088 "handle_options.m"
                                                          {
#line 3088 "handle_options.m"
                                                            *libs__handle_options__HeadVar__2_2 = (MR_Integer) 11;
#line 3088 "handle_options.m"
                                                            *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[47]);
#line 3088 "handle_options.m"
                                                            *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3088 "handle_options.m"
                                                            *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3088 "handle_options.m"
                                                            libs__handle_options__succeeded = MR_TRUE;
#line 3088 "handle_options.m"
                                                          }
#line 2876 "handle_options.m"
                                                        else
#line 2876 "handle_options.m"
                                                          if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "dmmos") == 0))
#line 3069 "handle_options.m"
                                                            {
#line 3069 "handle_options.m"
                                                              *libs__handle_options__HeadVar__2_2 = (MR_Integer) 7;
#line 3069 "handle_options.m"
                                                              *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[60]);
#line 3069 "handle_options.m"
                                                              *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3069 "handle_options.m"
                                                              *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3069 "handle_options.m"
                                                              libs__handle_options__succeeded = MR_TRUE;
#line 3069 "handle_options.m"
                                                            }
#line 2876 "handle_options.m"
                                                          else
#line 2876 "handle_options.m"
                                                            if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "dmmsc") == 0))
#line 3061 "handle_options.m"
                                                              {
#line 3061 "handle_options.m"
                                                                *libs__handle_options__HeadVar__2_2 = (MR_Integer) 7;
#line 3061 "handle_options.m"
                                                                *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[56]);
#line 3061 "handle_options.m"
                                                                *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3061 "handle_options.m"
                                                                *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3061 "handle_options.m"
                                                                libs__handle_options__succeeded = MR_TRUE;
#line 3061 "handle_options.m"
                                                              }
#line 2876 "handle_options.m"
                                                            else
#line 2876 "handle_options.m"
                                                              if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "rbmmd") == 0))
#line 3110 "handle_options.m"
                                                                {
#line 3110 "handle_options.m"
                                                                  *libs__handle_options__HeadVar__2_2 = (MR_Integer) 13;
#line 3110 "handle_options.m"
                                                                  *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[162]);
#line 3110 "handle_options.m"
                                                                  *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3110 "handle_options.m"
                                                                  *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3110 "handle_options.m"
                                                                  libs__handle_options__succeeded = MR_TRUE;
#line 3110 "handle_options.m"
                                                                }
#line 2876 "handle_options.m"
                                                              else
#line 2876 "handle_options.m"
                                                                if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "rbmmp") == 0))
#line 3114 "handle_options.m"
                                                                  {
#line 3114 "handle_options.m"
                                                                    *libs__handle_options__HeadVar__2_2 = (MR_Integer) 13;
#line 3114 "handle_options.m"
                                                                    *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[168]);
#line 3114 "handle_options.m"
                                                                    *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3114 "handle_options.m"
                                                                    *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3114 "handle_options.m"
                                                                    libs__handle_options__succeeded = MR_TRUE;
#line 3114 "handle_options.m"
                                                                  }
#line 2876 "handle_options.m"
                                                                else
#line 2876 "handle_options.m"
                                                                  if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "stseg") == 0))
#line 3101 "handle_options.m"
                                                                    {
#line 3101 "handle_options.m"
                                                                      *libs__handle_options__HeadVar__2_2 = (MR_Integer) 12;
#line 3101 "handle_options.m"
                                                                      *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[180]);
#line 3101 "handle_options.m"
                                                                      *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3101 "handle_options.m"
                                                                      *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3101 "handle_options.m"
                                                                      libs__handle_options__succeeded = MR_TRUE;
#line 3101 "handle_options.m"
                                                                    }
#line 2876 "handle_options.m"
                                                                  else
#line 2876 "handle_options.m"
                                                                    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "trseg") == 0))
#line 3042 "handle_options.m"
                                                                      {
#line 3042 "handle_options.m"
                                                                        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 6;
#line 3042 "handle_options.m"
                                                                        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[189]);
#line 3042 "handle_options.m"
                                                                        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3042 "handle_options.m"
                                                                        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3042 "handle_options.m"
                                                                        libs__handle_options__succeeded = MR_TRUE;
#line 3042 "handle_options.m"
                                                                      }
#line 2876 "handle_options.m"
                                                                    else
#line 2876 "handle_options.m"
                                                                      if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "csharp") == 0))
#line 2980 "handle_options.m"
                                                                        {
#line 2980 "handle_options.m"
                                                                          *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2980 "handle_options.m"
                                                                          *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[41]);
#line 2986 "handle_options.m"
                                                                          *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[3]);
#line 2980 "handle_options.m"
                                                                          *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2980 "handle_options.m"
                                                                          libs__handle_options__succeeded = MR_TRUE;
#line 2980 "handle_options.m"
                                                                        }
#line 2876 "handle_options.m"
                                                                      else
#line 2876 "handle_options.m"
                                                                        if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "erlang") == 0))
#line 2988 "handle_options.m"
                                                                          {
#line 2988 "handle_options.m"
                                                                            *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2988 "handle_options.m"
                                                                            *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[65]);
#line 2994 "handle_options.m"
                                                                            *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[4]);
#line 2988 "handle_options.m"
                                                                            *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2988 "handle_options.m"
                                                                            libs__handle_options__succeeded = MR_TRUE;
#line 2988 "handle_options.m"
                                                                          }
#line 2876 "handle_options.m"
                                                                        else
#line 2876 "handle_options.m"
                                                                          if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "picreg") == 0))
#line 3083 "handle_options.m"
                                                                            {
#line 3083 "handle_options.m"
                                                                              *libs__handle_options__HeadVar__2_2 = (MR_Integer) 9;
#line 3083 "handle_options.m"
                                                                              *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[136]);
#line 3083 "handle_options.m"
                                                                              *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3083 "handle_options.m"
                                                                              *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3083 "handle_options.m"
                                                                              libs__handle_options__succeeded = MR_TRUE;
#line 3083 "handle_options.m"
                                                                            }
#line 2876 "handle_options.m"
                                                                          else
#line 2876 "handle_options.m"
                                                                            if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "pregen") == 0))
#line 3076 "handle_options.m"
                                                                              {
#line 3076 "handle_options.m"
                                                                                *libs__handle_options__HeadVar__2_2 = (MR_Integer) 8;
#line 3076 "handle_options.m"
                                                                                *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[138]);
#line 3076 "handle_options.m"
                                                                                *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3076 "handle_options.m"
                                                                                *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3076 "handle_options.m"
                                                                                libs__handle_options__succeeded = MR_TRUE;
#line 3076 "handle_options.m"
                                                                              }
#line 2876 "handle_options.m"
                                                                            else
#line 2876 "handle_options.m"
                                                                              if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "rbmmdp") == 0))
#line 3118 "handle_options.m"
                                                                                {
#line 3118 "handle_options.m"
                                                                                  *libs__handle_options__HeadVar__2_2 = (MR_Integer) 13;
#line 3118 "handle_options.m"
                                                                                  *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[166]);
#line 3118 "handle_options.m"
                                                                                  *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3118 "handle_options.m"
                                                                                  *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3118 "handle_options.m"
                                                                                  libs__handle_options__succeeded = MR_TRUE;
#line 3118 "handle_options.m"
                                                                                }
#line 2876 "handle_options.m"
                                                                              else
#line 2876 "handle_options.m"
                                                                                if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "hl_nest") == 0))
#line 2940 "handle_options.m"
                                                                                  {
#line 2940 "handle_options.m"
                                                                                    *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2940 "handle_options.m"
                                                                                    *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[95]);
#line 2946 "handle_options.m"
                                                                                    *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[5]);
#line 2940 "handle_options.m"
                                                                                    *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2940 "handle_options.m"
                                                                                    libs__handle_options__succeeded = MR_TRUE;
#line 2940 "handle_options.m"
                                                                                  }
#line 2876 "handle_options.m"
                                                                                else
#line 2876 "handle_options.m"
                                                                                  if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "memprof") == 0))
#line 3021 "handle_options.m"
                                                                                    {
#line 3021 "handle_options.m"
                                                                                      *libs__handle_options__HeadVar__2_2 = (MR_Integer) 4;
#line 3021 "handle_options.m"
                                                                                      *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[121]);
#line 3021 "handle_options.m"
                                                                                      *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3021 "handle_options.m"
                                                                                      *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3021 "handle_options.m"
                                                                                      libs__handle_options__succeeded = MR_TRUE;
#line 3021 "handle_options.m"
                                                                                    }
#line 2876 "handle_options.m"
                                                                                  else
#line 2876 "handle_options.m"
                                                                                    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "profall") == 0))
#line 3024 "handle_options.m"
                                                                                      {
#line 3024 "handle_options.m"
                                                                                        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 4;
#line 3024 "handle_options.m"
                                                                                        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[144]);
#line 3024 "handle_options.m"
                                                                                        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3024 "handle_options.m"
                                                                                        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3024 "handle_options.m"
                                                                                        libs__handle_options__succeeded = MR_TRUE;
#line 3024 "handle_options.m"
                                                                                      }
#line 2876 "handle_options.m"
                                                                                    else
#line 2876 "handle_options.m"
                                                                                      if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "ssdebug") == 0))
#line 3090 "handle_options.m"
                                                                                        {
#line 3090 "handle_options.m"
                                                                                          *libs__handle_options__HeadVar__2_2 = (MR_Integer) 11;
#line 3090 "handle_options.m"
                                                                                          *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[176]);
#line 3090 "handle_options.m"
                                                                                          *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3090 "handle_options.m"
                                                                                          *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3090 "handle_options.m"
                                                                                          libs__handle_options__succeeded = MR_TRUE;
#line 3090 "handle_options.m"
                                                                                        }
#line 2876 "handle_options.m"
                                                                                      else
#line 2876 "handle_options.m"
                                                                                        if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "asm_fast") == 0))
#line 2916 "handle_options.m"
                                                                                          {
#line 2916 "handle_options.m"
                                                                                            *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2916 "handle_options.m"
                                                                                            *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[25]);
#line 2922 "handle_options.m"
                                                                                            *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
#line 2916 "handle_options.m"
                                                                                            *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2916 "handle_options.m"
                                                                                            libs__handle_options__succeeded = MR_TRUE;
#line 2916 "handle_options.m"
                                                                                          }
#line 2876 "handle_options.m"
                                                                                        else
#line 2876 "handle_options.m"
                                                                                          if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "asm_jump") == 0))
#line 2900 "handle_options.m"
                                                                                            {
#line 2900 "handle_options.m"
                                                                                              *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2900 "handle_options.m"
                                                                                              *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[31]);
#line 2906 "handle_options.m"
                                                                                              *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
#line 2900 "handle_options.m"
                                                                                              *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2900 "handle_options.m"
                                                                                              libs__handle_options__succeeded = MR_TRUE;
#line 2900 "handle_options.m"
                                                                                            }
#line 2876 "handle_options.m"
                                                                                          else
#line 2876 "handle_options.m"
                                                                                            if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "hlc_nest") == 0))
#line 2948 "handle_options.m"
                                                                                              {
#line 2948 "handle_options.m"
                                                                                                *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2948 "handle_options.m"
                                                                                                *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[104]);
#line 2954 "handle_options.m"
                                                                                                *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[5]);
#line 2948 "handle_options.m"
                                                                                                *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2948 "handle_options.m"
                                                                                                libs__handle_options__succeeded = MR_TRUE;
#line 2948 "handle_options.m"
                                                                                              }
#line 2876 "handle_options.m"
                                                                                            else
#line 2876 "handle_options.m"
                                                                                              if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "ll_debug") == 0))
#line 3094 "handle_options.m"
                                                                                                {
#line 3094 "handle_options.m"
                                                                                                  *libs__handle_options__HeadVar__2_2 = (MR_Integer) 10;
#line 3094 "handle_options.m"
                                                                                                  *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[113]);
#line 3094 "handle_options.m"
                                                                                                  *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3094 "handle_options.m"
                                                                                                  *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3094 "handle_options.m"
                                                                                                  libs__handle_options__succeeded = MR_TRUE;
#line 3094 "handle_options.m"
                                                                                                }
#line 2876 "handle_options.m"
                                                                                              else
#line 2876 "handle_options.m"
                                                                                                if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "profdeep") == 0))
#line 3027 "handle_options.m"
                                                                                                  {
#line 3027 "handle_options.m"
                                                                                                    *libs__handle_options__HeadVar__2_2 = (MR_Integer) 4;
#line 3027 "handle_options.m"
                                                                                                    *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[151]);
#line 3027 "handle_options.m"
                                                                                                    *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3027 "handle_options.m"
                                                                                                    *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3027 "handle_options.m"
                                                                                                    libs__handle_options__succeeded = MR_TRUE;
#line 3027 "handle_options.m"
                                                                                                  }
#line 2876 "handle_options.m"
                                                                                                else
#line 2876 "handle_options.m"
                                                                                                  if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "proftime") == 0))
#line 3015 "handle_options.m"
                                                                                                    {
#line 3015 "handle_options.m"
                                                                                                      *libs__handle_options__HeadVar__2_2 = (MR_Integer) 4;
#line 3015 "handle_options.m"
                                                                                                      *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[153]);
#line 3015 "handle_options.m"
                                                                                                      *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3015 "handle_options.m"
                                                                                                      *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3015 "handle_options.m"
                                                                                                      libs__handle_options__succeeded = MR_TRUE;
#line 3015 "handle_options.m"
                                                                                                    }
#line 2876 "handle_options.m"
                                                                                                  else
#line 2876 "handle_options.m"
                                                                                                    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "decldebug") == 0))
#line 3086 "handle_options.m"
                                                                                                      {
#line 3086 "handle_options.m"
                                                                                                        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 11;
#line 3086 "handle_options.m"
                                                                                                        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[50]);
#line 3086 "handle_options.m"
                                                                                                        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3086 "handle_options.m"
                                                                                                        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3086 "handle_options.m"
                                                                                                        libs__handle_options__succeeded = MR_TRUE;
#line 3086 "handle_options.m"
                                                                                                      }
#line 2876 "handle_options.m"
                                                                                                    else
#line 2876 "handle_options.m"
                                                                                                      if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "profcalls") == 0))
#line 3018 "handle_options.m"
                                                                                                        {
#line 3018 "handle_options.m"
                                                                                                          *libs__handle_options__HeadVar__2_2 = (MR_Integer) 4;
#line 3018 "handle_options.m"
                                                                                                          *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[145]);
#line 3018 "handle_options.m"
                                                                                                          *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3018 "handle_options.m"
                                                                                                          *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3018 "handle_options.m"
                                                                                                          libs__handle_options__succeeded = MR_TRUE;
#line 3018 "handle_options.m"
                                                                                                        }
#line 2876 "handle_options.m"
                                                                                                      else
#line 2876 "handle_options.m"
                                                                                                        if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "threadscope") == 0))
#line 3001 "handle_options.m"
                                                                                                          {
#line 3001 "handle_options.m"
                                                                                                            *libs__handle_options__HeadVar__2_2 = (MR_Integer) 2;
#line 3001 "handle_options.m"
                                                                                                            *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[182]);
#line 3001 "handle_options.m"
                                                                                                            *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3001 "handle_options.m"
                                                                                                            *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3001 "handle_options.m"
                                                                                                            libs__handle_options__succeeded = MR_TRUE;
#line 3001 "handle_options.m"
                                                                                                          }
#line 2876 "handle_options.m"
                                                                                                        else
#line 2876 "handle_options.m"
                                                                                                          libs__handle_options__succeeded = MR_FALSE;
#line 2876 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2876 "handle_options.m"
  }
#line 2869 "handle_options.m"
}

#line 2809 "handle_options.m"
static void MR_CALL 
libs__handle_options__construct_string_2_p_0(
#line 2809 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1,
#line 2809 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_2)
#line 2809 "handle_options.m"
{
#line 2812 "handle_options.m"
  {
#line 2812 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2812 "handle_options.m"
    if ((libs__handle_options__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2812 "handle_options.m"
      *libs__handle_options__HeadVar__2_2 = (MR_String) "";
#line 2812 "handle_options.m"
    else
#line 2813 "handle_options.m"
      {
#line 2813 "handle_options.m"
        MR_String libs__handle_options__Bit_4;
#line 2813 "handle_options.m"
        MR_Word libs__handle_options__Bits_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__HeadVar__1_1, (MR_Integer) 1)));
#line 2813 "handle_options.m"
        MR_Word libs__handle_options__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__HeadVar__1_1, (MR_Integer) 0)));
#line 2813 "handle_options.m"
        MR_Word libs__handle_options__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__V_10_10, (MR_Integer) 0)));

#line 2813 "handle_options.m"
        libs__handle_options__Bit_4 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__V_10_10, (MR_Integer) 1)));
#line 2818 "handle_options.m"
        if ((libs__handle_options__Bits_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2820 "handle_options.m"
          *libs__handle_options__HeadVar__2_2 = libs__handle_options__Bit_4;
#line 2818 "handle_options.m"
        else
#line 2815 "handle_options.m"
          {
#line 2815 "handle_options.m"
            MR_String libs__handle_options__Grade0_9;
#line 2815 "handle_options.m"
            MR_Word libs__handle_options__V_11_11;
#line 2815 "handle_options.m"
            MR_Word libs__handle_options__V_12_12;
#line 2815 "handle_options.m"
            MR_Word libs__handle_options__V_14_14;
#line 2815 "handle_options.m"
            MR_String libs__handle_options__Bit_17;
#line 2815 "handle_options.m"
            MR_Word libs__handle_options__Bits_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__Bits_5, (MR_Integer) 1)));
#line 2815 "handle_options.m"
            MR_Word libs__handle_options__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__Bits_5, (MR_Integer) 0)));
#line 2813 "handle_options.m"
            MR_Word libs__handle_options__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__V_23_23, (MR_Integer) 0)));

#line 2813 "handle_options.m"
            libs__handle_options__Bit_17 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__V_23_23, (MR_Integer) 1)));
#line 2818 "handle_options.m"
            if ((libs__handle_options__Bits_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2820 "handle_options.m"
              libs__handle_options__Grade0_9 = libs__handle_options__Bit_17;
#line 2818 "handle_options.m"
            else
#line 2815 "handle_options.m"
              {
#line 2815 "handle_options.m"
                MR_String libs__handle_options__Grade0_22;
#line 2815 "handle_options.m"
                MR_Word libs__handle_options__V_24_24;
#line 2815 "handle_options.m"
                MR_Word libs__handle_options__V_25_25;
#line 2815 "handle_options.m"
                MR_Word libs__handle_options__V_27_27;

#line 2816 "handle_options.m"
                {
#line 2816 "handle_options.m"
                  libs__handle_options__construct_string_2_p_0(libs__handle_options__Bits_18, &libs__handle_options__Grade0_22);
                }
#line 2817 "handle_options.m"
                {
#line 2817 "handle_options.m"
                  libs__handle_options__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2817 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_27_27, 0) = ((MR_Box) (libs__handle_options__Grade0_22));
#line 2817 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2817 "handle_options.m"
                }
#line 2817 "handle_options.m"
                {
#line 2817 "handle_options.m"
                  libs__handle_options__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2817 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_25_25, 0) = ((MR_Box) ((MR_String) "."));
#line 2817 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_25_25, 1) = ((MR_Box) (libs__handle_options__V_27_27));
#line 2817 "handle_options.m"
                }
#line 2817 "handle_options.m"
                {
#line 2817 "handle_options.m"
                  libs__handle_options__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2817 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_24_24, 0) = ((MR_Box) (libs__handle_options__Bit_17));
#line 2817 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_24_24, 1) = ((MR_Box) (libs__handle_options__V_25_25));
#line 2817 "handle_options.m"
                }
#line 2817 "handle_options.m"
                {
#line 2817 "handle_options.m"
                  mercury__string__append_list_2_p_0(libs__handle_options__V_24_24, &libs__handle_options__Grade0_9);
                }
#line 2815 "handle_options.m"
              }
#line 2817 "handle_options.m"
            {
#line 2817 "handle_options.m"
              libs__handle_options__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2817 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 0) = ((MR_Box) (libs__handle_options__Grade0_9));
#line 2817 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2817 "handle_options.m"
            }
#line 2817 "handle_options.m"
            {
#line 2817 "handle_options.m"
              libs__handle_options__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2817 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 0) = ((MR_Box) ((MR_String) "."));
#line 2817 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 1) = ((MR_Box) (libs__handle_options__V_14_14));
#line 2817 "handle_options.m"
            }
#line 2817 "handle_options.m"
            {
#line 2817 "handle_options.m"
              libs__handle_options__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2817 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 0) = ((MR_Box) (libs__handle_options__Bit_4));
#line 2817 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 1) = ((MR_Box) (libs__handle_options__V_12_12));
#line 2817 "handle_options.m"
            }
#line 2817 "handle_options.m"
            {
#line 2817 "handle_options.m"
              mercury__string__append_list_2_p_0(libs__handle_options__V_11_11, libs__handle_options__HeadVar__2_2);
#line 2817 "handle_options.m"
              return;
            }
#line 2815 "handle_options.m"
          }
#line 2813 "handle_options.m"
      }
#line 2812 "handle_options.m"
  }
#line 2809 "handle_options.m"
}

#line 2671 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_1(
#line 2671 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2671 "handle_options.m"
{
#line 2671 "handle_options.m"
  {
#line 2671 "handle_options.m"
    struct libs__handle_options__must_not_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_not_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2671 "handle_options.m"
    MR_builtin_longjmp((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__commit_0, 1);
#line 2671 "handle_options.m"
  }
#line 2671 "handle_options.m"
}

#line 2672 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_3(
#line 2672 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2672 "handle_options.m"
{
#line 2672 "handle_options.m"
  {
#line 2672 "handle_options.m"
    struct libs__handle_options__must_not_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_not_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2672 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__Component_5 = ((MR_String) (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__conv0_Component_5);
#line 2672 "handle_options.m"
    {
#line 2672 "handle_options.m"
      libs__handle_options__must_not_contain_2_p_0_2(libs__handle_options__env_ptr);
#line 2672 "handle_options.m"
      return;
    }
#line 2672 "handle_options.m"
  }
#line 2672 "handle_options.m"
}

#line 2671 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_2(
#line 2671 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2671 "handle_options.m"
{
#line 2671 "handle_options.m"
  {
#line 2671 "handle_options.m"
    struct libs__handle_options__must_not_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_not_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2673 "handle_options.m"
    {
#line 2673 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6, ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__Component_5)), (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__GradeComponents_4);
    }
#line 2673 "handle_options.m"
    if ((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__succeeded)
#line 2673 "handle_options.m"
      {
#line 2673 "handle_options.m"
        libs__handle_options__must_not_contain_2_p_0_1(libs__handle_options__env_ptr);
#line 2673 "handle_options.m"
        return;
      }
#line 2671 "handle_options.m"
  }
#line 2671 "handle_options.m"
}

#line 2671 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_4(
#line 2671 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2671 "handle_options.m"
{
#line 2671 "handle_options.m"
  {
#line 2671 "handle_options.m"
    struct libs__handle_options__must_not_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_not_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2671 "handle_options.m"
    if (MR_builtin_setjmp((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__commit_0) == 0)
#line 2671 "handle_options.m"
      {
#line 6969 "libs.handle_options.c"
        (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2672 "handle_options.m"
        {
#line 2672 "handle_options.m"
          mercury__list__member_2_p_1((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6, &(libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__conv0_Component_5, (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__OmitComponents_3, libs__handle_options__must_not_contain_2_p_0_3, libs__handle_options__env_ptr);
        }
#line 2671 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__succeeded = MR_FALSE;
#line 2671 "handle_options.m"
      }
#line 2671 "handle_options.m"
    else
#line 2671 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__succeeded = MR_TRUE;
#line 2671 "handle_options.m"
  }
#line 2671 "handle_options.m"
}

#line 2668 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__must_not_contain_2_p_0(
#line 2668 "handle_options.m"
  MR_Word libs__handle_options__OmitComponents_3,
#line 2668 "handle_options.m"
  MR_Word libs__handle_options__GradeComponents_4)
#line 2668 "handle_options.m"
{
#line 2668 "handle_options.m"
  {
#line 2668 "handle_options.m"
    struct libs__handle_options__must_not_contain_2_p_0_env_0_s libs__handle_options__env;

#line 2668 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_not_contain_2_p_0_env_0__OmitComponents_3 = libs__handle_options__OmitComponents_3;
#line 2668 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_not_contain_2_p_0_env_0__GradeComponents_4 = libs__handle_options__GradeComponents_4;
#line 2671 "handle_options.m"
    {
#line 2671 "handle_options.m"
      libs__handle_options__must_not_contain_2_p_0_4(&libs__handle_options__env);
    }
#line 2671 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_not_contain_2_p_0_env_0__succeeded = !((libs__handle_options__env).libs__handle_options__must_not_contain_2_p_0_env_0__succeeded);
#line 2671 "handle_options.m"
    return (libs__handle_options__env).libs__handle_options__must_not_contain_2_p_0_env_0__succeeded;
#line 2668 "handle_options.m"
  }
#line 2668 "handle_options.m"
}

#line 2662 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_1(
#line 2662 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2662 "handle_options.m"
{
#line 2662 "handle_options.m"
  {
#line 2662 "handle_options.m"
    struct libs__handle_options__must_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2662 "handle_options.m"
    MR_builtin_longjmp((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__commit_0, 1);
#line 2662 "handle_options.m"
  }
#line 2662 "handle_options.m"
}

#line 2663 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_3(
#line 2663 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2663 "handle_options.m"
{
#line 2663 "handle_options.m"
  {
#line 2663 "handle_options.m"
    struct libs__handle_options__must_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2663 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__Component_5 = ((MR_String) (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__conv0_Component_5);
#line 2663 "handle_options.m"
    {
#line 2663 "handle_options.m"
      libs__handle_options__must_contain_2_p_0_2(libs__handle_options__env_ptr);
#line 2663 "handle_options.m"
      return;
    }
#line 2663 "handle_options.m"
  }
#line 2663 "handle_options.m"
}

#line 2662 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_2(
#line 2662 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2662 "handle_options.m"
{
#line 2662 "handle_options.m"
  {
#line 2662 "handle_options.m"
    struct libs__handle_options__must_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2665 "handle_options.m"
    {
#line 2665 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__TypeCtorInfo_6_6, ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__Component_5)), (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__GradeComponents_4);
    }
#line 2664 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded = !((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded);
#line 2664 "handle_options.m"
    if ((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded)
#line 2664 "handle_options.m"
      {
#line 2664 "handle_options.m"
        libs__handle_options__must_contain_2_p_0_1(libs__handle_options__env_ptr);
#line 2664 "handle_options.m"
        return;
      }
#line 2662 "handle_options.m"
  }
#line 2662 "handle_options.m"
}

#line 2662 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_4(
#line 2662 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2662 "handle_options.m"
{
#line 2662 "handle_options.m"
  {
#line 2662 "handle_options.m"
    struct libs__handle_options__must_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2662 "handle_options.m"
    if (MR_builtin_setjmp((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__commit_0) == 0)
#line 2662 "handle_options.m"
      {
#line 7115 "libs.handle_options.c"
        (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2663 "handle_options.m"
        {
#line 2663 "handle_options.m"
          mercury__list__member_2_p_1((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__TypeCtorInfo_6_6, &(libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__conv0_Component_5, (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__IncludeComponents_3, libs__handle_options__must_contain_2_p_0_3, libs__handle_options__env_ptr);
        }
#line 2662 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded = MR_FALSE;
#line 2662 "handle_options.m"
      }
#line 2662 "handle_options.m"
    else
#line 2662 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded = MR_TRUE;
#line 2662 "handle_options.m"
  }
#line 2662 "handle_options.m"
}

#line 2659 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__must_contain_2_p_0(
#line 2659 "handle_options.m"
  MR_Word libs__handle_options__IncludeComponents_3,
#line 2659 "handle_options.m"
  MR_Word libs__handle_options__GradeComponents_4)
#line 2659 "handle_options.m"
{
#line 2659 "handle_options.m"
  {
#line 2659 "handle_options.m"
    struct libs__handle_options__must_contain_2_p_0_env_0_s libs__handle_options__env;

#line 2659 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_contain_2_p_0_env_0__IncludeComponents_3 = libs__handle_options__IncludeComponents_3;
#line 2659 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_contain_2_p_0_env_0__GradeComponents_4 = libs__handle_options__GradeComponents_4;
#line 2662 "handle_options.m"
    {
#line 2662 "handle_options.m"
      libs__handle_options__must_contain_2_p_0_4(&libs__handle_options__env);
    }
#line 2662 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_contain_2_p_0_env_0__succeeded = !((libs__handle_options__env).libs__handle_options__must_contain_2_p_0_env_0__succeeded);
#line 2662 "handle_options.m"
    return (libs__handle_options__env).libs__handle_options__must_contain_2_p_0_env_0__succeeded;
#line 2659 "handle_options.m"
  }
#line 2659 "handle_options.m"
}

#line 2687 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__filter_grade_7_p_0_1(
#line 2687 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2687 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2687 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2)
#line 2687 "handle_options.m"
{
#line 2687 "handle_options.m"
  {
#line 2687 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2687 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2687 "handle_options.m"
    MR_String libs__handle_options__conv0_HeadVar__2_20;

#line 2687 "handle_options.m"
    {
#line 2687 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2687__1_2_p_0(((MR_String) libs__handle_options__wrapper_arg_1), &libs__handle_options__conv0_HeadVar__2_20);
    }
#line 2687 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2687 "handle_options.m"
      {
#line 2687 "handle_options.m"
        *libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv0_HeadVar__2_20));
#line 2687 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2687 "handle_options.m"
      }
#line 2687 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2687 "handle_options.m"
  }
#line 2687 "handle_options.m"
}

#line 2641 "handle_options.m"
static void MR_CALL 
libs__handle_options__filter_grade_7_p_0(
#line 2641 "handle_options.m"
  MR_Word libs__handle_options__FilterPred_8,
#line 2641 "handle_options.m"
  MR_Word libs__handle_options__CondComponents_9,
#line 2641 "handle_options.m"
  MR_String libs__handle_options__GradeString_10,
#line 2641 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Grades_0_15,
#line 2641 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Grades_16,
#line 2641 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_17,
#line 2641 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_18)
#line 2641 "handle_options.m"
{
#line 7228 "libs.handle_options.c"
  {
#line 7230 "libs.handle_options.c"
    MR_bool libs__handle_options__succeeded;
#line 7232 "libs.handle_options.c"
    MR_Word libs__handle_options__Components0_33;
#line 2686 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_30_46;
#line 2686 "handle_options.m"
    MR_Word libs__handle_options__ComponentStrs_26;
#line 2686 "handle_options.m"
    MR_Word libs__handle_options__StrToComp_27;
#line 2686 "handle_options.m"
    MR_Word libs__handle_options__Chars_50;

#line 3168 "handle_options.m"
    {
#line 3168 "handle_options.m"
      mercury__string__to_char_list_2_p_0(libs__handle_options__GradeString_10, &libs__handle_options__Chars_50);
    }
#line 3169 "handle_options.m"
    {
#line 3169 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__split_grade_string_2_2_p_0(libs__handle_options__Chars_50, &libs__handle_options__ComponentStrs_26);
    }
#line 2686 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2686 "handle_options.m"
      {
#line 2687 "handle_options.m"
        libs__handle_options__StrToComp_27 = (MR_Word) &libs__handle_options_scalar_common_1[19];
#line 7259 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_30_46 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2690 "handle_options.m"
        {
#line 2690 "handle_options.m"
          libs__handle_options__succeeded = mercury__list__map_3_p_2(libs__handle_options__TypeCtorInfo_30_46, libs__handle_options__TypeCtorInfo_30_46, libs__handle_options__StrToComp_27, libs__handle_options__ComponentStrs_26, &libs__handle_options__Components0_33);
        }
#line 2686 "handle_options.m"
      }
#line 7268 "libs.handle_options.c"
    if (libs__handle_options__succeeded)
#line 7270 "libs.handle_options.c"
      {
#line 7272 "libs.handle_options.c"
        MR_Word libs__handle_options__TypeCtorInfo_31_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 7274 "libs.handle_options.c"
        MR_Word libs__handle_options__Components_34;
#line 2693 "handle_options.m"
        MR_Integer libs__handle_options__V_37_37;
#line 2693 "handle_options.m"
        MR_Integer libs__handle_options__V_38_38;

#line 2692 "handle_options.m"
        {
#line 2692 "handle_options.m"
          mercury__list__sort_and_remove_dups_2_p_0(libs__handle_options__TypeCtorInfo_31_47, libs__handle_options__Components0_33, &libs__handle_options__Components_34);
        }
#line 2693 "handle_options.m"
        {
#line 2693 "handle_options.m"
          libs__handle_options__V_37_37 = mercury__list__length_1_f_0(libs__handle_options__TypeCtorInfo_31_47, libs__handle_options__Components0_33);
        }
#line 2693 "handle_options.m"
        {
#line 2693 "handle_options.m"
          libs__handle_options__V_38_38 = mercury__list__length_1_f_0(libs__handle_options__TypeCtorInfo_31_47, libs__handle_options__Components_34);
        }
#line 2693 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__V_37_37 > libs__handle_options__V_38_38);
#line 7298 "libs.handle_options.c"
        if (libs__handle_options__succeeded)
#line 7300 "libs.handle_options.c"
          {
#line 7302 "libs.handle_options.c"
            MR_String libs__handle_options__V_39_39;
#line 7304 "libs.handle_options.c"
            MR_Word libs__handle_options__V_54_54;

#line 2694 "handle_options.m"
            {
#line 2694 "handle_options.m"
              libs__handle_options__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) "invalid library grade: ", libs__handle_options__GradeString_10);
            }
#line 606 "handle_options.m"
            {
#line 606 "handle_options.m"
              libs__handle_options__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 606 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_54_54, 0) = ((MR_Box) (libs__handle_options__V_39_39));
#line 606 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 606 "handle_options.m"
            }
#line 606 "handle_options.m"
            {
#line 606 "handle_options.m"
              mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__STATE_VARIABLE_Errors_0_17, libs__handle_options__V_54_54, libs__handle_options__STATE_VARIABLE_Errors_18);
            }
#line 2656 "handle_options.m"
            *libs__handle_options__STATE_VARIABLE_Grades_16 = libs__handle_options__STATE_VARIABLE_Grades_0_15;
#line 7329 "libs.handle_options.c"
          }
#line 7331 "libs.handle_options.c"
        else
#line 7333 "libs.handle_options.c"
          {
#line 2650 "handle_options.m"
            MR_bool MR_CALL (* libs__handle_options__func_1)(MR_Box, MR_Box, MR_Box);

#line 2697 "handle_options.m"
            *libs__handle_options__STATE_VARIABLE_Errors_18 = libs__handle_options__STATE_VARIABLE_Errors_0_17;
#line 2650 "handle_options.m"
            libs__handle_options__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__FilterPred_8, (MR_Integer) 1)));
#line 2650 "handle_options.m"
            {
#line 2650 "handle_options.m"
              libs__handle_options__succeeded = libs__handle_options__func_1(((MR_Box) libs__handle_options__FilterPred_8), ((MR_Box) (libs__handle_options__CondComponents_9)), ((MR_Box) (libs__handle_options__Components_34)));
            }
#line 2652 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 2651 "handle_options.m"
              {
#line 2651 "handle_options.m"
                MR_Word base;
#line 2651 "handle_options.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2651 "handle_options.m"
                *libs__handle_options__STATE_VARIABLE_Grades_16 = base;
#line 2651 "handle_options.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__GradeString_10));
#line 2651 "handle_options.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__handle_options__STATE_VARIABLE_Grades_0_15));
#line 2651 "handle_options.m"
              }
#line 2652 "handle_options.m"
            else
#line 2651 "handle_options.m"
              *libs__handle_options__STATE_VARIABLE_Grades_16 = libs__handle_options__STATE_VARIABLE_Grades_0_15;
#line 7367 "libs.handle_options.c"
          }
#line 7369 "libs.handle_options.c"
      }
#line 7371 "libs.handle_options.c"
    else
#line 7373 "libs.handle_options.c"
      {
#line 7375 "libs.handle_options.c"
        MR_String libs__handle_options__V_42_42;
#line 7377 "libs.handle_options.c"
        MR_Word libs__handle_options__V_60_60;

#line 2700 "handle_options.m"
        {
#line 2700 "handle_options.m"
          libs__handle_options__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) "invalid library grade: ", libs__handle_options__GradeString_10);
        }
#line 606 "handle_options.m"
        {
#line 606 "handle_options.m"
          libs__handle_options__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 606 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_60_60, 0) = ((MR_Box) (libs__handle_options__V_42_42));
#line 606 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 606 "handle_options.m"
        }
#line 606 "handle_options.m"
        {
#line 606 "handle_options.m"
          mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__STATE_VARIABLE_Errors_0_17, libs__handle_options__V_60_60, libs__handle_options__STATE_VARIABLE_Errors_18);
        }
#line 2656 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_Grades_16 = libs__handle_options__STATE_VARIABLE_Grades_0_15;
#line 7402 "libs.handle_options.c"
      }
#line 7404 "libs.handle_options.c"
  }
#line 2641 "handle_options.m"
}

#line 2618 "handle_options.m"
static void MR_CALL 
libs__handle_options__string_to_grade_component_6_p_0(
#line 2618 "handle_options.m"
  MR_String libs__handle_options__FilterDesc_7,
#line 2618 "handle_options.m"
  MR_String libs__handle_options__Comp_8,
#line 2618 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Comps_0_15,
#line 2618 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Comps_16,
#line 2618 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_17,
#line 2618 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_18)
#line 2618 "handle_options.m"
{
#line 2625 "handle_options.m"
  {
#line 2625 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2623 "handle_options.m"
    MR_Word libs__handle_options__V_11_11;
#line 2623 "handle_options.m"
    MR_Word libs__handle_options__V_12_12;
#line 2623 "handle_options.m"
    MR_Word libs__handle_options__V_13_13;
#line 2623 "handle_options.m"
    MR_Word libs__handle_options__V_14_14;

#line 2623 "handle_options.m"
    {
#line 2623 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__grade_component_table_5_p_0(libs__handle_options__Comp_8, &libs__handle_options__V_11_11, &libs__handle_options__V_12_12, &libs__handle_options__V_13_13, &libs__handle_options__V_14_14);
    }
#line 2625 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2624 "handle_options.m"
      {
#line 2624 "handle_options.m"
        {
#line 2624 "handle_options.m"
          MR_Word base;
#line 2624 "handle_options.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2624 "handle_options.m"
          *libs__handle_options__STATE_VARIABLE_Comps_16 = base;
#line 2624 "handle_options.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__Comp_8));
#line 2624 "handle_options.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__handle_options__STATE_VARIABLE_Comps_0_15));
#line 2624 "handle_options.m"
        }
#line 2624 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_Errors_18 = libs__handle_options__STATE_VARIABLE_Errors_0_17;
#line 2624 "handle_options.m"
      }
#line 2625 "handle_options.m"
    else
#line 2626 "handle_options.m"
      {
#line 2626 "handle_options.m"
        MR_String libs__handle_options__V_20_20;
#line 2626 "handle_options.m"
        MR_String libs__handle_options__V_23_23;
#line 2626 "handle_options.m"
        MR_String libs__handle_options__V_24_24;
#line 2626 "handle_options.m"
        MR_Word libs__handle_options__V_29_29;

#line 2626 "handle_options.m"
        {
#line 2626 "handle_options.m"
          libs__handle_options__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) " library grade component: ", libs__handle_options__Comp_8);
        }
#line 2626 "handle_options.m"
        {
#line 2626 "handle_options.m"
          libs__handle_options__V_23_23 = mercury__string__f_43_43_2_f_0(libs__handle_options__FilterDesc_7, libs__handle_options__V_24_24);
        }
#line 2626 "handle_options.m"
        {
#line 2626 "handle_options.m"
          libs__handle_options__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "unknown ", libs__handle_options__V_23_23);
        }
#line 606 "handle_options.m"
        {
#line 606 "handle_options.m"
          libs__handle_options__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 606 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_29_29, 0) = ((MR_Box) (libs__handle_options__V_20_20));
#line 606 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 606 "handle_options.m"
        }
#line 606 "handle_options.m"
        {
#line 606 "handle_options.m"
          mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__STATE_VARIABLE_Errors_0_17, libs__handle_options__V_29_29, libs__handle_options__STATE_VARIABLE_Errors_18);
        }
#line 2626 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_Comps_16 = libs__handle_options__STATE_VARIABLE_Comps_0_15;
#line 2626 "handle_options.m"
      }
#line 2625 "handle_options.m"
  }
#line 2618 "handle_options.m"
}

#line 2606 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_6(
#line 2606 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2606 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2606 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2606 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2606 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2606 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5)
#line 2606 "handle_options.m"
{
#line 2606 "handle_options.m"
  {
#line 2606 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2606 "handle_options.m"
    MR_Word libs__handle_options__conv13_STATE_VARIABLE_Grades_16;
#line 2606 "handle_options.m"
    MR_Word libs__handle_options__conv12_STATE_VARIABLE_Errors_18;

#line 2606 "handle_options.m"
    {
#line 2606 "handle_options.m"
      libs__handle_options__filter_grade_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 4))), ((MR_String) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv13_STATE_VARIABLE_Grades_16, ((MR_Word) libs__handle_options__wrapper_arg_4), &libs__handle_options__conv12_STATE_VARIABLE_Errors_18);
    }
#line 2606 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv13_STATE_VARIABLE_Grades_16));
#line 2606 "handle_options.m"
    *libs__handle_options__wrapper_arg_5 = ((MR_Box) (libs__handle_options__conv12_STATE_VARIABLE_Errors_18));
#line 2606 "handle_options.m"
  }
#line 2606 "handle_options.m"
}

#line 2606 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_5(
#line 2606 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2606 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2606 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2)
#line 2606 "handle_options.m"
{
#line 2606 "handle_options.m"
  {
#line 2606 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2606 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2606 "handle_options.m"
    {
#line 2606 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__must_not_contain_2_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2));
    }
#line 2606 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2606 "handle_options.m"
  }
#line 2606 "handle_options.m"
}

#line 2604 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_4(
#line 2604 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2604 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2604 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2604 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2604 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2604 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5)
#line 2604 "handle_options.m"
{
#line 2604 "handle_options.m"
  {
#line 2604 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2604 "handle_options.m"
    MR_Word libs__handle_options__conv9_STATE_VARIABLE_Grades_16;
#line 2604 "handle_options.m"
    MR_Word libs__handle_options__conv8_STATE_VARIABLE_Errors_18;

#line 2604 "handle_options.m"
    {
#line 2604 "handle_options.m"
      libs__handle_options__filter_grade_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 4))), ((MR_String) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv9_STATE_VARIABLE_Grades_16, ((MR_Word) libs__handle_options__wrapper_arg_4), &libs__handle_options__conv8_STATE_VARIABLE_Errors_18);
    }
#line 2604 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv9_STATE_VARIABLE_Grades_16));
#line 2604 "handle_options.m"
    *libs__handle_options__wrapper_arg_5 = ((MR_Box) (libs__handle_options__conv8_STATE_VARIABLE_Errors_18));
#line 2604 "handle_options.m"
  }
#line 2604 "handle_options.m"
}

#line 2604 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_3(
#line 2604 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2604 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2604 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2)
#line 2604 "handle_options.m"
{
#line 2604 "handle_options.m"
  {
#line 2604 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2604 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2604 "handle_options.m"
    {
#line 2604 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__must_contain_2_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2));
    }
#line 2604 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2604 "handle_options.m"
  }
#line 2604 "handle_options.m"
}

#line 2596 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_2(
#line 2596 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2596 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2596 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2596 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2596 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2596 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5)
#line 2596 "handle_options.m"
{
#line 2596 "handle_options.m"
  {
#line 2596 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2596 "handle_options.m"
    MR_Word libs__handle_options__conv5_STATE_VARIABLE_Comps_16;
#line 2596 "handle_options.m"
    MR_Word libs__handle_options__conv4_STATE_VARIABLE_Errors_18;

#line 2596 "handle_options.m"
    {
#line 2596 "handle_options.m"
      libs__handle_options__string_to_grade_component_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv5_STATE_VARIABLE_Comps_16, ((MR_Word) libs__handle_options__wrapper_arg_4), &libs__handle_options__conv4_STATE_VARIABLE_Errors_18);
    }
#line 2596 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv5_STATE_VARIABLE_Comps_16));
#line 2596 "handle_options.m"
    *libs__handle_options__wrapper_arg_5 = ((MR_Box) (libs__handle_options__conv4_STATE_VARIABLE_Errors_18));
#line 2596 "handle_options.m"
  }
#line 2596 "handle_options.m"
}

#line 2594 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_1(
#line 2594 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2594 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2594 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2594 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2594 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2594 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5)
#line 2594 "handle_options.m"
{
#line 2594 "handle_options.m"
  {
#line 2594 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2594 "handle_options.m"
    MR_Word libs__handle_options__conv1_STATE_VARIABLE_Comps_16;
#line 2594 "handle_options.m"
    MR_Word libs__handle_options__conv0_STATE_VARIABLE_Errors_18;

#line 2594 "handle_options.m"
    {
#line 2594 "handle_options.m"
      libs__handle_options__string_to_grade_component_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv1_STATE_VARIABLE_Comps_16, ((MR_Word) libs__handle_options__wrapper_arg_4), &libs__handle_options__conv0_STATE_VARIABLE_Errors_18);
    }
#line 2594 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv1_STATE_VARIABLE_Comps_16));
#line 2594 "handle_options.m"
    *libs__handle_options__wrapper_arg_5 = ((MR_Box) (libs__handle_options__conv0_STATE_VARIABLE_Errors_18));
#line 2594 "handle_options.m"
  }
#line 2594 "handle_options.m"
}

#line 2586 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0(
#line 2586 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_12,
#line 2586 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_13,
#line 2586 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_14,
#line 2586 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_15)
#line 2586 "handle_options.m"
{
#line 2589 "handle_options.m"
  {
#line 2589 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2589 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_46_46;
#line 2589 "handle_options.m"
    MR_Word libs__handle_options__TypeInfo_47_47;
#line 2589 "handle_options.m"
    MR_Word libs__handle_options__IncludeComponentStrs_7;
#line 2589 "handle_options.m"
    MR_Word libs__handle_options__OmitComponentStrs_8;
#line 2589 "handle_options.m"
    MR_Word libs__handle_options__IncludeComponents_9;
#line 2589 "handle_options.m"
    MR_Word libs__handle_options__OmitComponents_10;
#line 2589 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_20_20;
#line 2589 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_24_24;
#line 2589 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_LibGrades_27_27;
#line 2589 "handle_options.m"
    MR_Word libs__handle_options__V_28_28;
#line 2589 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_LibGrades_30_30;
#line 2589 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_31_31;
#line 2589 "handle_options.m"
    MR_Word libs__handle_options__V_33_33;
#line 2589 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_LibGrades_35_35;
#line 2589 "handle_options.m"
    MR_Word libs__handle_options__V_39_39;
#line 2594 "handle_options.m"
    MR_Box libs__handle_options__conv3_IncludeComponents_9;
#line 2594 "handle_options.m"
    MR_Box libs__handle_options__conv2_STATE_VARIABLE_Errors_20_20;
#line 2596 "handle_options.m"
    MR_Box libs__handle_options__conv7_OmitComponents_10;
#line 2596 "handle_options.m"
    MR_Box libs__handle_options__conv6_STATE_VARIABLE_Errors_24_24;
#line 2604 "handle_options.m"
    MR_Box libs__handle_options__conv11_STATE_VARIABLE_LibGrades_30_30;
#line 2604 "handle_options.m"
    MR_Box libs__handle_options__conv10_STATE_VARIABLE_Errors_31_31;
#line 2606 "handle_options.m"
    MR_Box libs__handle_options__conv15_STATE_VARIABLE_LibGrades_35_35;
#line 2606 "handle_options.m"
    MR_Box libs__handle_options__conv14_STATE_VARIABLE_Errors_15;

#line 2590 "handle_options.m"
    {
#line 2590 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_12, (MR_Integer) 632, &libs__handle_options__IncludeComponentStrs_7);
    }
#line 2592 "handle_options.m"
    {
#line 2592 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_12, (MR_Integer) 633, &libs__handle_options__OmitComponentStrs_8);
    }
#line 7812 "libs.handle_options.c"
    libs__handle_options__TypeCtorInfo_46_46 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 7814 "libs.handle_options.c"
    libs__handle_options__TypeInfo_47_47 = (MR_Word) &libs__handle_options_scalar_common_2[1];
#line 2594 "handle_options.m"
    {
#line 2594 "handle_options.m"
      mercury__list__foldl2_6_p_0(libs__handle_options__TypeCtorInfo_46_46, libs__handle_options__TypeInfo_47_47, libs__handle_options__TypeInfo_47_47, (MR_Word) &libs__handle_options_scalar_common_6[4], libs__handle_options__IncludeComponentStrs_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__handle_options__conv3_IncludeComponents_9, ((MR_Box) (libs__handle_options__STATE_VARIABLE_Errors_0_14)), &libs__handle_options__conv2_STATE_VARIABLE_Errors_20_20);
    }
#line 2594 "handle_options.m"
    libs__handle_options__IncludeComponents_9 = ((MR_Word) libs__handle_options__conv3_IncludeComponents_9);
#line 2594 "handle_options.m"
    libs__handle_options__STATE_VARIABLE_Errors_20_20 = ((MR_Word) libs__handle_options__conv2_STATE_VARIABLE_Errors_20_20);
#line 2596 "handle_options.m"
    {
#line 2596 "handle_options.m"
      mercury__list__foldl2_6_p_0(libs__handle_options__TypeCtorInfo_46_46, libs__handle_options__TypeInfo_47_47, libs__handle_options__TypeInfo_47_47, (MR_Word) &libs__handle_options_scalar_common_6[5], libs__handle_options__OmitComponentStrs_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__handle_options__conv7_OmitComponents_10, ((MR_Box) (libs__handle_options__STATE_VARIABLE_Errors_20_20)), &libs__handle_options__conv6_STATE_VARIABLE_Errors_24_24);
    }
#line 2596 "handle_options.m"
    libs__handle_options__OmitComponents_10 = ((MR_Word) libs__handle_options__conv7_OmitComponents_10);
#line 2596 "handle_options.m"
    libs__handle_options__STATE_VARIABLE_Errors_24_24 = ((MR_Word) libs__handle_options__conv6_STATE_VARIABLE_Errors_24_24);
#line 2599 "handle_options.m"
    {
#line 2599 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_12, (MR_Integer) 631, &libs__handle_options__STATE_VARIABLE_LibGrades_27_27);
    }
#line 2604 "handle_options.m"
    {
#line 2604 "handle_options.m"
      libs__handle_options__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2604 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_28_28, 0) = ((MR_Box) (&libs__handle_options_scalar_common_10[0]));
#line 2604 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_28_28, 1) = ((MR_Box) (libs__handle_options__postprocess_options_libgrades_4_p_0_4));
#line 2604 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2604 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_28_28, 3) = ((MR_Box) (&libs__handle_options_scalar_common_1[17]));
#line 2604 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_28_28, 4) = ((MR_Box) (libs__handle_options__IncludeComponents_9));
#line 2604 "handle_options.m"
    }
#line 2604 "handle_options.m"
    {
#line 2604 "handle_options.m"
      mercury__list__foldl2_6_p_0(libs__handle_options__TypeCtorInfo_46_46, libs__handle_options__TypeInfo_47_47, libs__handle_options__TypeInfo_47_47, libs__handle_options__V_28_28, libs__handle_options__STATE_VARIABLE_LibGrades_27_27, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__handle_options__conv11_STATE_VARIABLE_LibGrades_30_30, ((MR_Box) (libs__handle_options__STATE_VARIABLE_Errors_24_24)), &libs__handle_options__conv10_STATE_VARIABLE_Errors_31_31);
    }
#line 2604 "handle_options.m"
    libs__handle_options__STATE_VARIABLE_LibGrades_30_30 = ((MR_Word) libs__handle_options__conv11_STATE_VARIABLE_LibGrades_30_30);
#line 2604 "handle_options.m"
    libs__handle_options__STATE_VARIABLE_Errors_31_31 = ((MR_Word) libs__handle_options__conv10_STATE_VARIABLE_Errors_31_31);
#line 2606 "handle_options.m"
    {
#line 2606 "handle_options.m"
      libs__handle_options__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2606 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_33_33, 0) = ((MR_Box) (&libs__handle_options_scalar_common_10[0]));
#line 2606 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_33_33, 1) = ((MR_Box) (libs__handle_options__postprocess_options_libgrades_4_p_0_6));
#line 2606 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2606 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_33_33, 3) = ((MR_Box) (&libs__handle_options_scalar_common_1[18]));
#line 2606 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_33_33, 4) = ((MR_Box) (libs__handle_options__OmitComponents_10));
#line 2606 "handle_options.m"
    }
#line 2606 "handle_options.m"
    {
#line 2606 "handle_options.m"
      mercury__list__foldl2_6_p_0(libs__handle_options__TypeCtorInfo_46_46, libs__handle_options__TypeInfo_47_47, libs__handle_options__TypeInfo_47_47, libs__handle_options__V_33_33, libs__handle_options__STATE_VARIABLE_LibGrades_30_30, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__handle_options__conv15_STATE_VARIABLE_LibGrades_35_35, ((MR_Box) (libs__handle_options__STATE_VARIABLE_Errors_31_31)), &libs__handle_options__conv14_STATE_VARIABLE_Errors_15);
    }
#line 2606 "handle_options.m"
    libs__handle_options__STATE_VARIABLE_LibGrades_35_35 = ((MR_Word) libs__handle_options__conv15_STATE_VARIABLE_LibGrades_35_35);
#line 2606 "handle_options.m"
    *libs__handle_options__STATE_VARIABLE_Errors_15 = ((MR_Word) libs__handle_options__conv14_STATE_VARIABLE_Errors_15);
#line 2608 "handle_options.m"
    {
#line 2608 "handle_options.m"
      libs__handle_options__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2608 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2608 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_39_39, 1) = ((MR_Box) (libs__handle_options__STATE_VARIABLE_LibGrades_35_35));
#line 2608 "handle_options.m"
    }
#line 2608 "handle_options.m"
    {
#line 2608 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 631, libs__handle_options__V_39_39, libs__handle_options__STATE_VARIABLE_Globals_0_12, libs__handle_options__STATE_VARIABLE_Globals_13);
#line 2608 "handle_options.m"
      return;
    }
#line 2589 "handle_options.m"
  }
#line 2586 "handle_options.m"
}

#line 2535 "handle_options.m"
static void MR_CALL 
libs__handle_options__unsafe_set_already_printed_usage_1_p_0(
#line 2535 "handle_options.m"
  MR_Word libs__handle_options__X_1)
#line 2535 "handle_options.m"
{
#line 2535 "handle_options.m"
  {
#line 2535 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2535 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__unsafe_set_already_printed_usage_1_p_0

	MR_Word X;

	X =  libs__handle_options__X_1 ;
		{
#line 2535 "handle_options.m"
libs__handle_options__mutable_variable_already_printed_usage = X;

#line 7934 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2535 "handle_options.m"
}
#line 2535 "handle_options.m"
  }
#line 2535 "handle_options.m"
}

#line 2535 "handle_options.m"
static void MR_CALL 
libs__handle_options__unsafe_get_already_printed_usage_1_p_0(
#line 2535 "handle_options.m"
  MR_Word * libs__handle_options__X_1)
#line 2535 "handle_options.m"
{
#line 2535 "handle_options.m"
  {
#line 2535 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2535 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__unsafe_get_already_printed_usage_1_p_0

	MR_Word X;

		{
#line 2535 "handle_options.m"
X = libs__handle_options__mutable_variable_already_printed_usage;

#line 7967 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
	 *libs__handle_options__X_1  = X;
#line 2535 "handle_options.m"
}
#line 2535 "handle_options.m"
  }
#line 2535 "handle_options.m"
}

#line 2535 "handle_options.m"
static void MR_CALL 
libs__handle_options__unlock_already_printed_usage_0_p_0(void)
#line 2535 "handle_options.m"
{
#line 2535 "handle_options.m"
  {
#line 2535 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2535 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__unlock_already_printed_usage_0_p_0


		{
#line 2535 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 8001 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2535 "handle_options.m"
}
#line 2535 "handle_options.m"
  }
#line 2535 "handle_options.m"
}

#line 2535 "handle_options.m"
static void MR_CALL 
libs__handle_options__lock_already_printed_usage_0_p_0(void)
#line 2535 "handle_options.m"
{
#line 2535 "handle_options.m"
  {
#line 2535 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2535 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__lock_already_printed_usage_0_p_0


		{
#line 2535 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 8034 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2535 "handle_options.m"
}
#line 2535 "handle_options.m"
  }
#line 2535 "handle_options.m"
}

#line 2535 "handle_options.m"
static void MR_CALL 
libs__handle_options__pre_initialise_mutable_already_printed_usage_0_p_0(void)
#line 2535 "handle_options.m"
{
#line 2535 "handle_options.m"
  {
#line 2535 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2535 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__pre_initialise_mutable_already_printed_usage_0_p_0


		{
#line 2535 "handle_options.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__handle_options__mutable_variable_already_printed_usage_lock, MR_MUTEX_ATTR);
#endif

#line 8066 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2535 "handle_options.m"
}
#line 2535 "handle_options.m"
  }
#line 2535 "handle_options.m"
}

#line 2535 "handle_options.m"
static void MR_CALL 
libs__handle_options__initialise_mutable_already_printed_usage_0_p_0(void)
#line 2535 "handle_options.m"
{
#line 2535 "handle_options.m"
  {
#line 2535 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2535 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0


		{
#line 2535 "handle_options.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__handle_options__mutable_variable_already_printed_usage_lock, MR_MUTEX_ATTR);
#endif

#line 8098 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2535 "handle_options.m"
}
#line 2535 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0


		{
#line 2535 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 8116 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2535 "handle_options.m"
}
#line 2535 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 2535 "handle_options.m"
libs__handle_options__mutable_variable_already_printed_usage = X;

#line 8133 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2535 "handle_options.m"
}
#line 2535 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0


		{
#line 2535 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 8151 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2535 "handle_options.m"
}
#line 2535 "handle_options.m"
  }
#line 2535 "handle_options.m"
}

#line 2498 "handle_options.m"
static void MR_CALL 
libs__handle_options__disable_smart_recompilation_5_p_0(
#line 2498 "handle_options.m"
  MR_String libs__handle_options__OptionDescr_6,
#line 2498 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2498 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12)
#line 2498 "handle_options.m"
{
#line 2501 "handle_options.m"
  {
#line 2501 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2501 "handle_options.m"
    MR_Word libs__handle_options__WarnSmart_9;

#line 2502 "handle_options.m"
    {
#line 2502 "handle_options.m"
      libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
    }
#line 2503 "handle_options.m"
    {
#line 2503 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 111, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__STATE_VARIABLE_Globals_12);
    }
#line 2504 "handle_options.m"
    {
#line 2504 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_12, (MR_Integer) 23, &libs__handle_options__WarnSmart_9);
    }
#line 2518 "handle_options.m"
    if ((libs__handle_options__WarnSmart_9 == (MR_Integer) 0))
#line 2519 "handle_options.m"
      {
#line 2519 "handle_options.m"
      }
#line 2518 "handle_options.m"
    else
#line 2506 "handle_options.m"
      {
#line 2506 "handle_options.m"
        MR_Word libs__handle_options__Halt_10;

#line 2507 "handle_options.m"
        {
#line 2507 "handle_options.m"
          mercury__io__write_string_3_p_0((MR_String) "Warning: smart recompilation does not yet work with ");
        }
#line 2509 "handle_options.m"
        {
#line 2509 "handle_options.m"
          mercury__io__write_string_3_p_0(libs__handle_options__OptionDescr_6);
        }
#line 2510 "handle_options.m"
        {
#line 2510 "handle_options.m"
          mercury__io__write_string_3_p_0((MR_String) ".\n");
        }
#line 2511 "handle_options.m"
        {
#line 2511 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_12, (MR_Integer) 2, &libs__handle_options__Halt_10);
        }
#line 2515 "handle_options.m"
        if ((libs__handle_options__Halt_10 == (MR_Integer) 0))
#line 2516 "handle_options.m"
          {
#line 2516 "handle_options.m"
          }
#line 2515 "handle_options.m"
        else
#line 2513 "handle_options.m"
          {
#line 2514 "handle_options.m"
            {
#line 2514 "handle_options.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 2514 "handle_options.m"
              return;
            }
#line 2513 "handle_options.m"
          }
#line 2506 "handle_options.m"
      }
#line 2501 "handle_options.m"
  }
#line 2498 "handle_options.m"
}

#line 2483 "handle_options.m"
static void MR_CALL 
libs__handle_options__maybe_disable_smart_recompilation_8_p_0(
#line 2483 "handle_options.m"
  MR_Word libs__handle_options__Smart_9,
#line 2483 "handle_options.m"
  MR_Word libs__handle_options__ConflictingOption_10,
#line 2483 "handle_options.m"
  MR_Word libs__handle_options__ValueToDisableSmart_11,
#line 2483 "handle_options.m"
  MR_String libs__handle_options__OptionDescr_12,
#line 2483 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_16,
#line 2483 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_17)
#line 2483 "handle_options.m"
{
#line 2487 "handle_options.m"
  {
#line 2487 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2487 "handle_options.m"
    MR_Word libs__handle_options__Value_15;

#line 2488 "handle_options.m"
    {
#line 2488 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_16, libs__handle_options__ConflictingOption_10, &libs__handle_options__Value_15);
    }
#line 2490 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__Smart_9 == (MR_Integer) 1);
#line 2490 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2491 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__Value_15 == libs__handle_options__ValueToDisableSmart_11);
#line 2494 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2501 "handle_options.m"
      {
#line 2501 "handle_options.m"
        MR_Word libs__handle_options__WarnSmart_29;

#line 2502 "handle_options.m"
        {
#line 2502 "handle_options.m"
          libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
        }
#line 2503 "handle_options.m"
        {
#line 2503 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 111, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), libs__handle_options__STATE_VARIABLE_Globals_0_16, libs__handle_options__STATE_VARIABLE_Globals_17);
        }
#line 2504 "handle_options.m"
        {
#line 2504 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_17, (MR_Integer) 23, &libs__handle_options__WarnSmart_29);
        }
#line 2518 "handle_options.m"
        if ((libs__handle_options__WarnSmart_29 == (MR_Integer) 0))
#line 2519 "handle_options.m"
          {
#line 2519 "handle_options.m"
          }
#line 2518 "handle_options.m"
        else
#line 2506 "handle_options.m"
          {
#line 2506 "handle_options.m"
            MR_Word libs__handle_options__Halt_30;

#line 2507 "handle_options.m"
            {
#line 2507 "handle_options.m"
              mercury__io__write_string_3_p_0((MR_String) "Warning: smart recompilation does not yet work with ");
            }
#line 2509 "handle_options.m"
            {
#line 2509 "handle_options.m"
              mercury__io__write_string_3_p_0(libs__handle_options__OptionDescr_12);
            }
#line 2510 "handle_options.m"
            {
#line 2510 "handle_options.m"
              mercury__io__write_string_3_p_0((MR_String) ".\n");
            }
#line 2511 "handle_options.m"
            {
#line 2511 "handle_options.m"
              libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_17, (MR_Integer) 2, &libs__handle_options__Halt_30);
            }
#line 2515 "handle_options.m"
            if ((libs__handle_options__Halt_30 == (MR_Integer) 0))
#line 2516 "handle_options.m"
              {
#line 2516 "handle_options.m"
              }
#line 2515 "handle_options.m"
            else
#line 2513 "handle_options.m"
              {
#line 2514 "handle_options.m"
                {
#line 2514 "handle_options.m"
                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 2514 "handle_options.m"
                  return;
                }
#line 2513 "handle_options.m"
              }
#line 2506 "handle_options.m"
          }
#line 2501 "handle_options.m"
      }
#line 2494 "handle_options.m"
    else
#line 2495 "handle_options.m"
      *libs__handle_options__STATE_VARIABLE_Globals_17 = libs__handle_options__STATE_VARIABLE_Globals_0_16;
#line 2487 "handle_options.m"
  }
#line 2483 "handle_options.m"
}

#line 2463 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_requires_7_p_0(
#line 2463 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_8,
#line 2463 "handle_options.m"
  MR_Word libs__handle_options__RequiredOption_9,
#line 2463 "handle_options.m"
  MR_Word libs__handle_options__RequiredOptionValue_10,
#line 2463 "handle_options.m"
  MR_String libs__handle_options__ErrorMessage_11,
#line 2463 "handle_options.m"
  MR_Word libs__handle_options__Globals_12,
#line 2463 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_16,
#line 2463 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_17)
#line 2463 "handle_options.m"
{
#line 2467 "handle_options.m"
  {
#line 2467 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2467 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_14;
#line 2467 "handle_options.m"
    MR_Word libs__handle_options__OptionValue_15;

#line 2468 "handle_options.m"
    {
#line 2468 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__Globals_12, libs__handle_options__SourceOption_8, &libs__handle_options__SourceOptionValue_14);
    }
#line 2469 "handle_options.m"
    {
#line 2469 "handle_options.m"
      libs__globals__lookup_option_3_p_0(libs__handle_options__Globals_12, libs__handle_options__RequiredOption_9, &libs__handle_options__OptionValue_15);
    }
#line 2471 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__SourceOptionValue_14 == (MR_Integer) 1);
#line 2471 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2471 "handle_options.m"
      {
#line 2472 "handle_options.m"
        {
#line 2472 "handle_options.m"
          libs__handle_options__succeeded = mercury__getopt_io____Unify____option_data_0_0(libs__handle_options__OptionValue_15, libs__handle_options__RequiredOptionValue_10);
        }
#line 2472 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 2471 "handle_options.m"
      }
#line 2475 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 603 "handle_options.m"
      {
#line 603 "handle_options.m"
        MR_Word libs__handle_options__V_23_23;

#line 606 "handle_options.m"
        {
#line 606 "handle_options.m"
          libs__handle_options__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 606 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_23_23, 0) = ((MR_Box) (libs__handle_options__ErrorMessage_11));
#line 606 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 606 "handle_options.m"
        }
#line 606 "handle_options.m"
        {
#line 606 "handle_options.m"
          mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__STATE_VARIABLE_Errors_0_16, libs__handle_options__V_23_23, libs__handle_options__STATE_VARIABLE_Errors_17);
#line 606 "handle_options.m"
          return;
        }
#line 603 "handle_options.m"
      }
#line 2475 "handle_options.m"
    else
#line 2474 "handle_options.m"
      *libs__handle_options__STATE_VARIABLE_Errors_17 = libs__handle_options__STATE_VARIABLE_Errors_0_16;
#line 2467 "handle_options.m"
  }
#line 2463 "handle_options.m"
}

#line 2445 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_neg_implies_5_p_0(
#line 2445 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_6,
#line 2445 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOption_7,
#line 2445 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOptionValue_8,
#line 2445 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2445 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12)
#line 2445 "handle_options.m"
{
#line 2449 "handle_options.m"
  {
#line 2449 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2449 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_10;

#line 2450 "handle_options.m"
    {
#line 2450 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__SourceOption_6, &libs__handle_options__SourceOptionValue_10);
    }
#line 2453 "handle_options.m"
    if ((libs__handle_options__SourceOptionValue_10 == (MR_Integer) 0))
#line 2455 "handle_options.m"
      {
#line 2455 "handle_options.m"
        libs__globals__set_option_4_p_0(libs__handle_options__ImpliedOption_7, libs__handle_options__ImpliedOptionValue_8, libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__STATE_VARIABLE_Globals_12);
#line 2455 "handle_options.m"
        return;
      }
#line 2453 "handle_options.m"
    else
#line 2452 "handle_options.m"
      *libs__handle_options__STATE_VARIABLE_Globals_12 = libs__handle_options__STATE_VARIABLE_Globals_0_11;
#line 2449 "handle_options.m"
  }
#line 2445 "handle_options.m"
}

#line 2429 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_implies_5_p_0(
#line 2429 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_6,
#line 2429 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOption_7,
#line 2429 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOptionValue_8,
#line 2429 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2429 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12)
#line 2429 "handle_options.m"
{
#line 2432 "handle_options.m"
  {
#line 2432 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2432 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_10;

#line 2433 "handle_options.m"
    {
#line 2433 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__SourceOption_6, &libs__handle_options__SourceOptionValue_10);
    }
#line 2437 "handle_options.m"
    if ((libs__handle_options__SourceOptionValue_10 == (MR_Integer) 0))
#line 2438 "handle_options.m"
      *libs__handle_options__STATE_VARIABLE_Globals_12 = libs__handle_options__STATE_VARIABLE_Globals_0_11;
#line 2437 "handle_options.m"
    else
#line 2436 "handle_options.m"
      {
#line 2436 "handle_options.m"
        libs__globals__set_option_4_p_0(libs__handle_options__ImpliedOption_7, libs__handle_options__ImpliedOptionValue_8, libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__STATE_VARIABLE_Globals_12);
#line 2436 "handle_options.m"
        return;
      }
#line 2432 "handle_options.m"
  }
#line 2429 "handle_options.m"
}

#line 2349 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_lowlevel_2_p_0(
#line 2349 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_12,
#line 2349 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_13)
#line 2349 "handle_options.m"
{
#line 2351 "handle_options.m"
  {
#line 2351 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2351 "handle_options.m"
    MR_Word libs__handle_options__OptFrames_4;
#line 2351 "handle_options.m"
    MR_Word libs__handle_options__OptLocalVars_5;
#line 2351 "handle_options.m"
    MR_Integer libs__handle_options__OptRepeat_6;
#line 2351 "handle_options.m"
    MR_Word libs__handle_options__UnboxedFloat_7;
#line 2351 "handle_options.m"
    MR_Word libs__handle_options__StaticGroundFloats_8;
#line 2351 "handle_options.m"
    MR_Word libs__handle_options__NonLocalGotos_9;
#line 2351 "handle_options.m"
    MR_Word libs__handle_options__AsmLabels_10;
#line 2351 "handle_options.m"
    MR_Word libs__handle_options__StaticCodeAddrs_11;
#line 2351 "handle_options.m"
    MR_Word libs__handle_options__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]);
#line 2351 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_17_17;
#line 2351 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_22_22;
#line 2351 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_27_27;
#line 2351 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_32_32;
#line 2351 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_40_40;
#line 2351 "handle_options.m"
    MR_Word libs__handle_options__V_44_44;
#line 2351 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_45_45;
#line 2351 "handle_options.m"
    MR_Word libs__handle_options__V_49_49;
#line 2351 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_57;
#line 2351 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_65;
#line 2351 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_73;
#line 2351 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_81;
#line 2371 "handle_options.m"
    MR_Integer libs__handle_options__V_37_37;

#line 2433 "handle_options.m"
    {
#line 2433 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_12, (MR_Integer) 370, &libs__handle_options__SourceOptionValue_57);
    }
#line 2437 "handle_options.m"
    if ((libs__handle_options__SourceOptionValue_57 == (MR_Integer) 0))
#line 2438 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_17_17 = libs__handle_options__STATE_VARIABLE_Globals_0_12;
#line 2437 "handle_options.m"
    else
#line 2436 "handle_options.m"
      {
#line 2436 "handle_options.m"
        libs__globals__set_option_4_p_0((MR_Integer) 467, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_0_12, &libs__handle_options__STATE_VARIABLE_Globals_17_17);
      }
#line 2433 "handle_options.m"
    {
#line 2433 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_17_17, (MR_Integer) 473, &libs__handle_options__SourceOptionValue_65);
    }
#line 2437 "handle_options.m"
    if ((libs__handle_options__SourceOptionValue_65 == (MR_Integer) 0))
#line 2438 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_22_22 = libs__handle_options__STATE_VARIABLE_Globals_17_17;
#line 2437 "handle_options.m"
    else
#line 2436 "handle_options.m"
      {
#line 2436 "handle_options.m"
        libs__globals__set_option_4_p_0((MR_Integer) 470, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_17_17, &libs__handle_options__STATE_VARIABLE_Globals_22_22);
      }
#line 2433 "handle_options.m"
    {
#line 2433 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_22_22, (MR_Integer) 473, &libs__handle_options__SourceOptionValue_73);
    }
#line 2437 "handle_options.m"
    if ((libs__handle_options__SourceOptionValue_73 == (MR_Integer) 0))
#line 2438 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_27_27 = libs__handle_options__STATE_VARIABLE_Globals_22_22;
#line 2437 "handle_options.m"
    else
#line 2436 "handle_options.m"
      {
#line 2436 "handle_options.m"
        libs__globals__set_option_4_p_0((MR_Integer) 463, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_22_22, &libs__handle_options__STATE_VARIABLE_Globals_27_27);
      }
#line 2433 "handle_options.m"
    {
#line 2433 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_27_27, (MR_Integer) 472, &libs__handle_options__SourceOptionValue_81);
    }
#line 2437 "handle_options.m"
    if ((libs__handle_options__SourceOptionValue_81 == (MR_Integer) 0))
#line 2438 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_32_32 = libs__handle_options__STATE_VARIABLE_Globals_27_27;
#line 2437 "handle_options.m"
    else
#line 2436 "handle_options.m"
      {
#line 2436 "handle_options.m"
        libs__globals__set_option_4_p_0((MR_Integer) 300, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_27_27, &libs__handle_options__STATE_VARIABLE_Globals_32_32);
      }
#line 2365 "handle_options.m"
    {
#line 2365 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_32_32, (MR_Integer) 473, &libs__handle_options__OptFrames_4);
    }
#line 2366 "handle_options.m"
    {
#line 2366 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_32_32, (MR_Integer) 467, &libs__handle_options__OptLocalVars_5);
    }
#line 2367 "handle_options.m"
    {
#line 2367 "handle_options.m"
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_32_32, (MR_Integer) 476, &libs__handle_options__OptRepeat_6);
    }
#line 2369 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__OptFrames_4 == (MR_Integer) 1);
#line 2370 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 2370 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__OptLocalVars_5 == (MR_Integer) 1);
#line 2371 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2371 "handle_options.m"
      {
#line 2372 "handle_options.m"
        libs__handle_options__V_37_37 = (MR_Integer) 1;
#line 2372 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__OptRepeat_6 < libs__handle_options__V_37_37);
#line 2371 "handle_options.m"
      }
#line 2379 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2378 "handle_options.m"
      {
#line 2378 "handle_options.m"
        {
#line 2378 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 476, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[14]), libs__handle_options__STATE_VARIABLE_Globals_32_32, &libs__handle_options__STATE_VARIABLE_Globals_40_40);
        }
#line 2378 "handle_options.m"
      }
#line 2379 "handle_options.m"
    else
#line 2378 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_40_40 = libs__handle_options__STATE_VARIABLE_Globals_32_32;
#line 2385 "handle_options.m"
    {
#line 2385 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_40_40, (MR_Integer) 239, &libs__handle_options__UnboxedFloat_7);
    }
#line 2391 "handle_options.m"
    if ((libs__handle_options__UnboxedFloat_7 == (MR_Integer) 0))
#line 2400 "handle_options.m"
      libs__handle_options__StaticGroundFloats_8 = (MR_Integer) 1;
#line 2391 "handle_options.m"
    else
#line 2390 "handle_options.m"
      libs__handle_options__StaticGroundFloats_8 = (MR_Integer) 1;
#line 2402 "handle_options.m"
    {
#line 2402 "handle_options.m"
      libs__handle_options__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2402 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_44_44, 0) = ((MR_Box) (libs__handle_options__StaticGroundFloats_8));
#line 2402 "handle_options.m"
    }
#line 2402 "handle_options.m"
    {
#line 2402 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 448, libs__handle_options__V_44_44, libs__handle_options__STATE_VARIABLE_Globals_40_40, &libs__handle_options__STATE_VARIABLE_Globals_45_45);
    }
#line 2407 "handle_options.m"
    {
#line 2407 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_45_45, (MR_Integer) 245, &libs__handle_options__NonLocalGotos_9);
    }
#line 2408 "handle_options.m"
    {
#line 2408 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_45_45, (MR_Integer) 247, &libs__handle_options__AsmLabels_10);
    }
#line 2410 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__NonLocalGotos_9 == (MR_Integer) 1);
#line 2410 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2411 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__AsmLabels_10 == (MR_Integer) 0);
#line 2419 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2418 "handle_options.m"
      libs__handle_options__StaticCodeAddrs_11 = (MR_Integer) 0;
#line 2419 "handle_options.m"
    else
#line 2420 "handle_options.m"
      libs__handle_options__StaticCodeAddrs_11 = (MR_Integer) 1;
#line 2422 "handle_options.m"
    {
#line 2422 "handle_options.m"
      libs__handle_options__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2422 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_49_49, 0) = ((MR_Box) (libs__handle_options__StaticCodeAddrs_11));
#line 2422 "handle_options.m"
    }
#line 2422 "handle_options.m"
    {
#line 2422 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 449, libs__handle_options__V_49_49, libs__handle_options__STATE_VARIABLE_Globals_45_45, libs__handle_options__STATE_VARIABLE_Globals_13);
#line 2422 "handle_options.m"
      return;
    }
#line 2351 "handle_options.m"
  }
#line 2349 "handle_options.m"
}

#line 2205 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_22_p_0_13(
#line 2205 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2205 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2205 "handle_options.m"
{
#line 2205 "handle_options.m"
  {
#line 2205 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2205 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2205 "handle_options.m"
    MR_String libs__handle_options__conv10_HeadVar__3_1543;

#line 2205 "handle_options.m"
    {
#line 2205 "handle_options.m"
      libs__handle_options__conv10_HeadVar__3_1543 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2205__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2205 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv10_HeadVar__3_1543));
#line 2205 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2205 "handle_options.m"
  }
#line 2205 "handle_options.m"
}

#line 2203 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_22_p_0_12(
#line 2203 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2203 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2203 "handle_options.m"
{
#line 2203 "handle_options.m"
  {
#line 2203 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2203 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2203 "handle_options.m"
    MR_String libs__handle_options__conv9_HeadVar__3_1537;

#line 2203 "handle_options.m"
    {
#line 2203 "handle_options.m"
      libs__handle_options__conv9_HeadVar__3_1537 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2203__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2203 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv9_HeadVar__3_1537));
#line 2203 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2203 "handle_options.m"
  }
#line 2203 "handle_options.m"
}

#line 2212 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_22_p_0_11(
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
    MR_String libs__handle_options__conv8_HeadVar__2_1532;

#line 2212 "handle_options.m"
    {
#line 2212 "handle_options.m"
      libs__handle_options__conv8_HeadVar__2_1532 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2212__1_1_f_0(((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2212 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv8_HeadVar__2_1532));
#line 2212 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2212 "handle_options.m"
  }
#line 2212 "handle_options.m"
}

#line 2211 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_22_p_0_10(
#line 2211 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2211 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2211 "handle_options.m"
{
#line 2211 "handle_options.m"
  {
#line 2211 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2211 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2211 "handle_options.m"
    MR_String libs__handle_options__conv7_HeadVar__2_1527;

#line 2211 "handle_options.m"
    {
#line 2211 "handle_options.m"
      libs__handle_options__conv7_HeadVar__2_1527 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2211__1_1_f_0(((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2211 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv7_HeadVar__2_1527));
#line 2211 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2211 "handle_options.m"
  }
#line 2211 "handle_options.m"
}

#line 2181 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_22_p_0_9(
#line 2181 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2181 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2181 "handle_options.m"
{
#line 2181 "handle_options.m"
  {
#line 2181 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2181 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2181 "handle_options.m"
    MR_String libs__handle_options__conv6_HeadVar__3_1514;

#line 2181 "handle_options.m"
    {
#line 2181 "handle_options.m"
      libs__handle_options__conv6_HeadVar__3_1514 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2181__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2181 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv6_HeadVar__3_1514));
#line 2181 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2181 "handle_options.m"
  }
#line 2181 "handle_options.m"
}

#line 2177 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_22_p_0_8(
#line 2177 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2177 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2177 "handle_options.m"
{
#line 2177 "handle_options.m"
  {
#line 2177 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2177 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2177 "handle_options.m"
    MR_String libs__handle_options__conv5_HeadVar__3_1508;

#line 2177 "handle_options.m"
    {
#line 2177 "handle_options.m"
      libs__handle_options__conv5_HeadVar__3_1508 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2177__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2177 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv5_HeadVar__3_1508));
#line 2177 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2177 "handle_options.m"
  }
#line 2177 "handle_options.m"
}

#line 2159 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_22_p_0_7(
#line 2159 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2159 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2159 "handle_options.m"
{
#line 2159 "handle_options.m"
  {
#line 2159 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2159 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2159 "handle_options.m"
    {
#line 2159 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2159__2_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2159 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2159 "handle_options.m"
  }
#line 2159 "handle_options.m"
}

#line 2159 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_22_p_0_6(
#line 2159 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2159 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2159 "handle_options.m"
{
#line 2159 "handle_options.m"
  {
#line 2159 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2159 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2159 "handle_options.m"
    {
#line 2159 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2159__1_2_p_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2159 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2159 "handle_options.m"
  }
#line 2159 "handle_options.m"
}

#line 2141 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_22_p_0_5(
#line 2141 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2141 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2141 "handle_options.m"
{
#line 2141 "handle_options.m"
  {
#line 2141 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2141 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2141 "handle_options.m"
    MR_String libs__handle_options__conv4_HeadVar__4_1489;

#line 2141 "handle_options.m"
    {
#line 2141 "handle_options.m"
      libs__handle_options__conv4_HeadVar__4_1489 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2141__1_3_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 4))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2141 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv4_HeadVar__4_1489));
#line 2141 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2141 "handle_options.m"
  }
#line 2141 "handle_options.m"
}

#line 2105 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_22_p_0_4(
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
    MR_String libs__handle_options__conv3_HeadVar__3_1470;

#line 2105 "handle_options.m"
    {
#line 2105 "handle_options.m"
      libs__handle_options__conv3_HeadVar__3_1470 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2105__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2105 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv3_HeadVar__3_1470));
#line 2105 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2105 "handle_options.m"
  }
#line 2105 "handle_options.m"
}

#line 2095 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_22_p_0_3(
#line 2095 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2095 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2095 "handle_options.m"
{
#line 2095 "handle_options.m"
  {
#line 2095 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2095 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2095 "handle_options.m"
    MR_String libs__handle_options__conv2_HeadVar__3_1460;

#line 2095 "handle_options.m"
    {
#line 2095 "handle_options.m"
      libs__handle_options__conv2_HeadVar__3_1460 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2095__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2095 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv2_HeadVar__3_1460));
#line 2095 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2095 "handle_options.m"
  }
#line 2095 "handle_options.m"
}

#line 2082 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_22_p_0_2(
#line 2082 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2082 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2082 "handle_options.m"
{
#line 2082 "handle_options.m"
  {
#line 2082 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2082 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2082 "handle_options.m"
    MR_String libs__handle_options__conv1_HeadVar__3_1443;

#line 2082 "handle_options.m"
    {
#line 2082 "handle_options.m"
      libs__handle_options__conv1_HeadVar__3_1443 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2082__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2082 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv1_HeadVar__3_1443));
#line 2082 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2082 "handle_options.m"
  }
#line 2082 "handle_options.m"
}

#line 2067 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_22_p_0_1(
#line 2067 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2067 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2067 "handle_options.m"
{
#line 2067 "handle_options.m"
  {
#line 2067 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2067 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2067 "handle_options.m"
    MR_String libs__handle_options__conv0_HeadVar__3_1428;

#line 2067 "handle_options.m"
    {
#line 2067 "handle_options.m"
      libs__handle_options__conv0_HeadVar__3_1428 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2067__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2067 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv0_HeadVar__3_1428));
#line 2067 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2067 "handle_options.m"
  }
#line 2067 "handle_options.m"
}

#line 610 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_options_to_globals_22_p_0(
#line 610 "handle_options.m"
  MR_Word libs__handle_options__OptionTable0_23,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__Target_24,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__GC_Method_25,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__TagsMethod0_26,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__TermNorm_27,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__Term2Norm_28,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__TraceLevel_29,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__TraceSuppress_30,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__SSTraceLevel_31,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__MaybeThreadSafe_32,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__C_CompilerType_33,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__CSharp_CompilerType_34,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__ReuseStrategy_35,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__MaybeILVersion_36,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__MaybeFeedbackInfo_37,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__HostEnvType_38,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__TargetEnvType_39,
#line 610 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_182,
#line 610 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_183,
#line 610 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_184)
#line 610 "handle_options.m"
{
#line 623 "handle_options.m"
  {
#line 623 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 623 "handle_options.m"
    MR_String libs__handle_options__EventSetFileName0_43;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__PregeneratedDist_46;
#line 623 "handle_options.m"
    MR_Integer libs__handle_options__NumTagBits0_47;
#line 623 "handle_options.m"
    MR_Integer libs__handle_options__NumTagBits1_48;
#line 623 "handle_options.m"
    MR_Integer libs__handle_options__NumTagBits_50;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__TagsMethod_51;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__GradeSupportsParConj_52;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__Parallel_53;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__Threadscope_54;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__ImplicitParallelism_55;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__ILFuncPtrTypes_57;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__ILRefAnyFields_58;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__LibLinkages0_59;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__TransOpt_62;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__InterModOpt_65;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__InterModAnalysis_66;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__MaybeStandaloneInt_67;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__ExtraInitFunctions_68;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__Smart_70;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__VeryVerbose_71;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__Statistics_72;
#line 623 "handle_options.m"
    MR_Integer libs__handle_options__DebugLiveness_73;
#line 623 "handle_options.m"
    MR_Integer libs__handle_options__DebugModesPredId_77;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__DebugUnneededCodePredNames_78;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__DebugOptPredIdStrs_81;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__DebugOptPredNames_82;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__DebugIntermoduleAnalysis_87;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__DumpHLDSPredIds_88;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__UseTrail_94;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__HighLevelCode_95;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__UseMinimalModelStackCopy_96;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__UseMinimalModelOwnStacks_97;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__UseMinimalModel_98;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__ProfOptimized_103;
#line 623 "handle_options.m"
    MR_String libs__handle_options__ExpComp_104;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__TraceOptimized_105;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__ProfileDeep_106;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__RecordTermSizesAsWords_109;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__RecordTermSizesAsCells_110;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__PutNondetEnvOnHeap_111;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__DisablePneg_112;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__DisableCut_113;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__DumpHLDSStages_114;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__DumpTraceStages_115;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__ParallelLiveness_116;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__ParallelCodeGen_117;
#line 623 "handle_options.m"
    MR_String libs__handle_options__FullArch_122;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__MaybeStdLibDir_123;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__MaybeConfDir_128;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__ConfigFile_131;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__MercuryLibDirs_133;
#line 623 "handle_options.m"
    MR_String libs__handle_options__GradeString_134;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__UseSearchDirs_148;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__UseGradeSubdirs_151;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__SearchLibFilesDirs_152;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__IntermodDirs2_153;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__ToGradeSubdir_154;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__LinkLibDirs_163;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__InitDirs_166;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__UseSubdirs_167;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__BackendForeignLanguages_177;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__CurrentBackendForeignLanguage_178;
#line 623 "handle_options.m"
    MR_Integer libs__handle_options__CompareSpec_181;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_187_187;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_193_193;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_201_201;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_222_222;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__V_241_241;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_242_242;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_243_243;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_247_247;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_257_257;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_261_261;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__V_264_264;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_265_265;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_269_269;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_328_328;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_335_335;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_472_472;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_477_477;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__V_481_481;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_482_482;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_487_487;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__V_491_491;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_492_492;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_497_497;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_502_502;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_507_507;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_512_512;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_517_517;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_522_522;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_531_531;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_536_536;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_541_541;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_546_546;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_551_551;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_556_556;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_561_561;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_568_568;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_574_574;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_579_579;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_584_584;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_590_590;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_595_595;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_600_600;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_605_605;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_610_610;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_615_615;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_620_620;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_625_625;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_630_630;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_635_635;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_640_640;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_645_645;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_649_649;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_654_654;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_659_659;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_664_664;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_669_669;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_674_674;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_679_679;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_684_684;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_689_689;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_694_694;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_699_699;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_704_704;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_709_709;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_714_714;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_719_719;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_724_724;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_729_729;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_734_734;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_739_739;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_744_744;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_749_749;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_754_754;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_759_759;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_764_764;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_770_770;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_775_775;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_780_780;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_785_785;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_790_790;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_795_795;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_801_801;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_806_806;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_811_811;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_816_816;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_824_824;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_828_828;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_834_834;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_839_839;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_845_845;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_857_857;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_861_861;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_866_866;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_871_871;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_876_876;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_883_883;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__V_896_896;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_897_897;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_920_920;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_924_924;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_929_929;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_934_934;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_939_939;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_943_943;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_947_947;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_952_952;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_957_957;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_962_962;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_967_967;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_973_973;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_978_978;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_983_983;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_988_988;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_993_993;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_998_998;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1003_1003;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1008_1008;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1013_1013;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1018_1018;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1023_1023;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1028_1028;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1033_1033;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1128_1128;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1137_1137;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_1141_1141;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1154_1154;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_1159_1159;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1164_1164;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_1172_1172;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1176_1176;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1181_1181;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1186_1186;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1191_1191;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1196_1196;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1201_1201;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1206_1206;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1211_1211;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1255_1255;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1265_1265;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1270_1270;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1275_1275;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1280_1280;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1285_1285;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1290_1290;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1295_1295;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1300_1300;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1305_1305;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1310_1310;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1316_1316;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1320_1320;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1328_1328;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1333_1333;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1338_1338;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1343_1343;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1348_1348;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1353_1353;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1358_1358;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1363_1363;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1368_1368;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1373_1373;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1378_1378;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1383_1383;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1399_1399;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1407_1407;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1419_1419;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1476_1476;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1483_1483;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1504_1504;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__V_1520_1520;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1521_1521;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__V_1523_1523;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1524_1524;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1560_1560;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1564_1564;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_1576_1576;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_1584_1584;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1610_1610;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1617_1617;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1626_1626;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1631_1631;
#line 623 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1637_1637;
#line 647 "handle_options.m"
    MR_Word libs__handle_options__V_194_194;
#line 1140 "handle_options.m"
    MR_String libs__handle_options__V_69_69;
#line 1301 "handle_options.m"
    MR_String libs__handle_options__AllDumpOptions_74;
#line 1289 "handle_options.m"
    MR_String libs__handle_options__V_820_820;
#line 1560 "handle_options.m"
    MR_Word libs__handle_options__V_1036_1036;
#line 2046 "handle_options.m"
    MR_String libs__handle_options__V_1412_1412;
#line 2234 "handle_options.m"
    MR_Word libs__handle_options__ToMihsSubdir_168;
#line 2234 "handle_options.m"
    MR_Word libs__handle_options__ToHrlsSubdir_169;
#line 2318 "handle_options.m"
    MR_Integer libs__handle_options__V_1628_1628;

#line 624 "handle_options.m"
    {
#line 624 "handle_options.m"
      libs__globals__globals_init_18_p_0(libs__handle_options__OptionTable0_23, libs__handle_options__Target_24, libs__handle_options__GC_Method_25, libs__handle_options__TagsMethod0_26, libs__handle_options__TermNorm_27, libs__handle_options__Term2Norm_28, libs__handle_options__TraceLevel_29, libs__handle_options__TraceSuppress_30, libs__handle_options__SSTraceLevel_31, libs__handle_options__MaybeThreadSafe_32, libs__handle_options__C_CompilerType_33, libs__handle_options__CSharp_CompilerType_34, libs__handle_options__ReuseStrategy_35, libs__handle_options__MaybeILVersion_36, libs__handle_options__MaybeFeedbackInfo_37, libs__handle_options__HostEnvType_38, libs__handle_options__TargetEnvType_39, &libs__handle_options__STATE_VARIABLE_Globals_187_187);
    }
#line 630 "handle_options.m"
    {
#line 630 "handle_options.m"
      libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_187_187, (MR_Integer) 168, &libs__handle_options__EventSetFileName0_43);
    }
#line 632 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__EventSetFileName0_43, (MR_String) "") == 0);
#line 642 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 634 "handle_options.m"
      {
#line 634 "handle_options.m"
        MR_Word libs__handle_options__MaybeEventSetFileName_44;

#line 633 "handle_options.m"
        {
#line 633 "handle_options.m"
          mercury__io__get_environment_var_4_p_0((MR_String) "MERCURY_EVENT_SET_FILE_NAME", &libs__handle_options__MaybeEventSetFileName_44);
        }
#line 639 "handle_options.m"
        if ((libs__handle_options__MaybeEventSetFileName_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 640 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_193_193 = libs__handle_options__STATE_VARIABLE_Globals_187_187;
#line 639 "handle_options.m"
        else
#line 636 "handle_options.m"
          {
#line 636 "handle_options.m"
            MR_String libs__handle_options__EventSetFileName_45 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeEventSetFileName_44, (MR_Integer) 0)));
#line 636 "handle_options.m"
            MR_Word libs__handle_options__V_192_192;

#line 637 "handle_options.m"
            {
#line 637 "handle_options.m"
              libs__handle_options__V_192_192 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 637 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_192_192, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 637 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_192_192, 1) = ((MR_Box) (libs__handle_options__EventSetFileName_45));
#line 637 "handle_options.m"
            }
#line 637 "handle_options.m"
            {
#line 637 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 168, libs__handle_options__V_192_192, libs__handle_options__STATE_VARIABLE_Globals_187_187, &libs__handle_options__STATE_VARIABLE_Globals_193_193);
            }
#line 636 "handle_options.m"
          }
#line 634 "handle_options.m"
      }
#line 642 "handle_options.m"
    else
#line 643 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_193_193 = libs__handle_options__STATE_VARIABLE_Globals_187_187;
#line 647 "handle_options.m"
    {
#line 647 "handle_options.m"
      libs__handle_options__V_194_194 = libs__globals__gc_is_conservative_1_f_0(libs__handle_options__GC_Method_25);
    }
#line 647 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__V_194_194 == (MR_Integer) 1);
#line 652 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 649 "handle_options.m"
      {
#line 649 "handle_options.m"
        MR_Word libs__handle_options__V_196_196 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 649 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_197_197;

#line 648 "handle_options.m"
        {
#line 648 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 305, libs__handle_options__V_196_196, libs__handle_options__STATE_VARIABLE_Globals_193_193, &libs__handle_options__STATE_VARIABLE_Globals_197_197);
        }
#line 650 "handle_options.m"
        {
#line 650 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 306, libs__handle_options__V_196_196, libs__handle_options__STATE_VARIABLE_Globals_197_197, &libs__handle_options__STATE_VARIABLE_Globals_201_201);
        }
#line 649 "handle_options.m"
      }
#line 652 "handle_options.m"
    else
#line 650 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_201_201 = libs__handle_options__STATE_VARIABLE_Globals_193_193;
#line 658 "handle_options.m"
    {
#line 658 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_201_201, (MR_Integer) 219, &libs__handle_options__PregeneratedDist_46);
    }
#line 666 "handle_options.m"
    if ((libs__handle_options__PregeneratedDist_46 == (MR_Integer) 0))
#line 667 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_222_222 = libs__handle_options__STATE_VARIABLE_Globals_201_201;
#line 666 "handle_options.m"
    else
#line 660 "handle_options.m"
      {
#line 660 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_206_206;
#line 660 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_210_210;
#line 660 "handle_options.m"
        MR_Word libs__handle_options__V_213_213;
#line 660 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_214_214;
#line 660 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_218_218;

#line 661 "handle_options.m"
        {
#line 661 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 233, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[8]), libs__handle_options__STATE_VARIABLE_Globals_201_201, &libs__handle_options__STATE_VARIABLE_Globals_206_206);
        }
#line 662 "handle_options.m"
        {
#line 662 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 242, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[9]), libs__handle_options__STATE_VARIABLE_Globals_206_206, &libs__handle_options__STATE_VARIABLE_Globals_210_210);
        }
#line 663 "handle_options.m"
        libs__handle_options__V_213_213 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 663 "handle_options.m"
        {
#line 663 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 239, libs__handle_options__V_213_213, libs__handle_options__STATE_VARIABLE_Globals_210_210, &libs__handle_options__STATE_VARIABLE_Globals_214_214);
        }
#line 664 "handle_options.m"
        {
#line 664 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 220, libs__handle_options__V_213_213, libs__handle_options__STATE_VARIABLE_Globals_214_214, &libs__handle_options__STATE_VARIABLE_Globals_218_218);
        }
#line 665 "handle_options.m"
        {
#line 665 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 243, libs__handle_options__V_213_213, libs__handle_options__STATE_VARIABLE_Globals_218_218, &libs__handle_options__STATE_VARIABLE_Globals_222_222);
        }
#line 660 "handle_options.m"
      }
#line 674 "handle_options.m"
    if ((libs__handle_options__TagsMethod0_26 == (MR_Integer) 0))
#line 673 "handle_options.m"
      libs__handle_options__NumTagBits0_47 = (MR_Integer) 0;
#line 674 "handle_options.m"
    else
#line 677 "handle_options.m"
      {
#line 678 "handle_options.m"
        {
#line 678 "handle_options.m"
          libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_222_222, (MR_Integer) 233, &libs__handle_options__NumTagBits0_47);
        }
#line 677 "handle_options.m"
      }
#line 686 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__TagsMethod0_26 == (MR_Integer) 1);
#line 686 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 687 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__NumTagBits0_47 == (MR_Integer) -1);
#line 691 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 689 "handle_options.m"
      {
#line 689 "handle_options.m"
        {
#line 689 "handle_options.m"
          libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_222_222, (MR_Integer) 238, &libs__handle_options__NumTagBits1_48);
        }
#line 689 "handle_options.m"
      }
#line 691 "handle_options.m"
    else
#line 692 "handle_options.m"
      libs__handle_options__NumTagBits1_48 = libs__handle_options__NumTagBits0_47;
#line 697 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__NumTagBits1_48 < (MR_Integer) 0);
#line 705 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 698 "handle_options.m"
      {
#line 698 "handle_options.m"
        MR_String libs__handle_options__ProgName_49;
#line 698 "handle_options.m"
        MR_String libs__handle_options__V_1664_1664;
#line 698 "handle_options.m"
        MR_String libs__handle_options__V_1666_1666;

#line 698 "handle_options.m"
        {
#line 698 "handle_options.m"
          mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &libs__handle_options__ProgName_49);
        }
#line 9955 "libs.handle_options.c"
        {
#line 9957 "libs.handle_options.c"
          libs__handle_options__V_1664_1664 = mercury__string__f_43_43_2_f_0(libs__handle_options__ProgName_49, (MR_String) ": warning: --num-tag-bits invalid or unspecified\n");
        }
#line 9960 "libs.handle_options.c"
        {
#line 9962 "libs.handle_options.c"
          mercury__io__write_string_3_p_0(libs__handle_options__V_1664_1664);
        }
#line 9965 "libs.handle_options.c"
        {
#line 9967 "libs.handle_options.c"
          libs__handle_options__V_1666_1666 = mercury__string__f_43_43_2_f_0(libs__handle_options__ProgName_49, (MR_String) ": using --num-tag-bits 0 (tags disabled)\n");
        }
#line 9970 "libs.handle_options.c"
        {
#line 9972 "libs.handle_options.c"
          mercury__io__write_string_3_p_0(libs__handle_options__V_1666_1666);
        }
#line 703 "handle_options.m"
        {
#line 703 "handle_options.m"
          libs__compiler_util__record_warning_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_222_222);
        }
#line 704 "handle_options.m"
        libs__handle_options__NumTagBits_50 = (MR_Integer) 0;
#line 698 "handle_options.m"
      }
#line 705 "handle_options.m"
    else
#line 706 "handle_options.m"
      libs__handle_options__NumTagBits_50 = libs__handle_options__NumTagBits1_48;
#line 709 "handle_options.m"
    {
#line 709 "handle_options.m"
      libs__handle_options__V_241_241 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 709 "handle_options.m"
      MR_hl_field(MR_mktag(2), libs__handle_options__V_241_241, 0) = ((MR_Box) (libs__handle_options__NumTagBits_50));
#line 709 "handle_options.m"
    }
#line 709 "handle_options.m"
    {
#line 709 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 233, libs__handle_options__V_241_241, libs__handle_options__STATE_VARIABLE_Globals_222_222, &libs__handle_options__STATE_VARIABLE_Globals_242_242);
    }
#line 710 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__NumTagBits_50 == (MR_Integer) 0);
#line 713 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 711 "handle_options.m"
      {
#line 711 "handle_options.m"
        libs__handle_options__TagsMethod_51 = (MR_Integer) 0;
#line 712 "handle_options.m"
        {
#line 712 "handle_options.m"
          libs__globals__set_tags_method_3_p_0(libs__handle_options__TagsMethod_51, libs__handle_options__STATE_VARIABLE_Globals_242_242, &libs__handle_options__STATE_VARIABLE_Globals_243_243);
        }
#line 711 "handle_options.m"
      }
#line 713 "handle_options.m"
    else
#line 714 "handle_options.m"
      {
#line 714 "handle_options.m"
        libs__handle_options__TagsMethod_51 = libs__handle_options__TagsMethod0_26;
#line 714 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_243_243 = libs__handle_options__STATE_VARIABLE_Globals_242_242;
#line 714 "handle_options.m"
      }
#line 717 "handle_options.m"
    {
#line 717 "handle_options.m"
      libs__globals__current_grade_supports_par_conj_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_243_243, &libs__handle_options__GradeSupportsParConj_52);
    }
#line 718 "handle_options.m"
    {
#line 718 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_243_243, (MR_Integer) 212, &libs__handle_options__Parallel_53);
    }
#line 719 "handle_options.m"
    {
#line 719 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_243_243, (MR_Integer) 213, &libs__handle_options__Threadscope_54);
    }
#line 721 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__GradeSupportsParConj_52 == (MR_Integer) 0);
#line 721 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 722 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__Threadscope_54 == (MR_Integer) 1);
#line 726 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 724 "handle_options.m"
      {
#line 724 "handle_options.m"
        {
#line 724 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "\'threadscope\' grade component requires a parallel grade", libs__handle_options__STATE_VARIABLE_Errors_0_182, &libs__handle_options__STATE_VARIABLE_Errors_247_247);
        }
#line 724 "handle_options.m"
      }
#line 726 "handle_options.m"
    else
#line 724 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_247_247 = libs__handle_options__STATE_VARIABLE_Errors_0_182;
#line 733 "handle_options.m"
    {
#line 733 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_243_243, (MR_Integer) 666, &libs__handle_options__ImplicitParallelism_55);
    }
#line 767 "handle_options.m"
    if ((libs__handle_options__ImplicitParallelism_55 == (MR_Integer) 0))
#line 768 "handle_options.m"
      {
#line 768 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_261_261 = libs__handle_options__STATE_VARIABLE_Errors_247_247;
#line 768 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_257_257 = libs__handle_options__STATE_VARIABLE_Globals_243_243;
#line 768 "handle_options.m"
      }
#line 767 "handle_options.m"
    else
#line 750 "handle_options.m"
      if ((libs__handle_options__GradeSupportsParConj_52 == (MR_Integer) 0))
#line 754 "handle_options.m"
        {
#line 762 "handle_options.m"
          if ((libs__handle_options__Parallel_53 == (MR_Integer) 0))
#line 763 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_261_261 = libs__handle_options__STATE_VARIABLE_Errors_247_247;
#line 762 "handle_options.m"
          else
#line 756 "handle_options.m"
            {
#line 757 "handle_options.m"
              {
#line 757 "handle_options.m"
                libs__handle_options__add_error_3_p_0((MR_String) "\'--implicit-parallelism\' requires a grade that supports parallel conjunctions, use a low-level C grade without trailing.", libs__handle_options__STATE_VARIABLE_Errors_247_247, &libs__handle_options__STATE_VARIABLE_Errors_261_261);
              }
#line 756 "handle_options.m"
            }
#line 765 "handle_options.m"
          {
#line 765 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 666, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), libs__handle_options__STATE_VARIABLE_Globals_243_243, &libs__handle_options__STATE_VARIABLE_Globals_257_257);
          }
#line 754 "handle_options.m"
        }
#line 750 "handle_options.m"
      else
#line 738 "handle_options.m"
        {
#line 738 "handle_options.m"
          MR_String libs__handle_options__FeedbackFile_56;

#line 739 "handle_options.m"
          {
#line 739 "handle_options.m"
            libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_243_243, (MR_Integer) 667, &libs__handle_options__FeedbackFile_56);
          }
#line 742 "handle_options.m"
          libs__handle_options__succeeded = (strcmp(libs__handle_options__FeedbackFile_56, (MR_String) "") == 0);
#line 747 "handle_options.m"
          if (libs__handle_options__succeeded)
#line 744 "handle_options.m"
            {
#line 744 "handle_options.m"
              {
#line 744 "handle_options.m"
                libs__handle_options__add_error_3_p_0((MR_String) "\'--implicit-parallelism\' requires \'--feedback-file\'", libs__handle_options__STATE_VARIABLE_Errors_247_247, &libs__handle_options__STATE_VARIABLE_Errors_261_261);
              }
#line 744 "handle_options.m"
            }
#line 747 "handle_options.m"
          else
#line 744 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_261_261 = libs__handle_options__STATE_VARIABLE_Errors_247_247;
#line 744 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_257_257 = libs__handle_options__STATE_VARIABLE_Globals_243_243;
#line 738 "handle_options.m"
        }
#line 772 "handle_options.m"
    libs__handle_options__V_264_264 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]);
#line 772 "handle_options.m"
    {
#line 772 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 666, (MR_Integer) 194, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_257_257, &libs__handle_options__STATE_VARIABLE_Globals_265_265);
    }
#line 778 "handle_options.m"
    if ((libs__handle_options__GradeSupportsParConj_52 == (MR_Integer) 0))
#line 779 "handle_options.m"
      {
#line 780 "handle_options.m"
        {
#line 780 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 668, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), libs__handle_options__STATE_VARIABLE_Globals_265_265, &libs__handle_options__STATE_VARIABLE_Globals_269_269);
        }
#line 779 "handle_options.m"
      }
#line 778 "handle_options.m"
    else
#line 777 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_269_269 = libs__handle_options__STATE_VARIABLE_Globals_265_265;
#line 854 "handle_options.m"
    if ((libs__handle_options__Target_24 == (MR_Integer) 0))
#line 855 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_328_328 = libs__handle_options__STATE_VARIABLE_Globals_269_269;
#line 854 "handle_options.m"
    else
#line 854 "handle_options.m"
      if ((libs__handle_options__Target_24 == (MR_Integer) 2))
#line 856 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_328_328 = libs__handle_options__STATE_VARIABLE_Globals_269_269;
#line 854 "handle_options.m"
      else
#line 854 "handle_options.m"
        if ((libs__handle_options__Target_24 == (MR_Integer) 5))
#line 859 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_328_328 = libs__handle_options__STATE_VARIABLE_Globals_269_269;
#line 854 "handle_options.m"
        else
#line 854 "handle_options.m"
          if ((libs__handle_options__Target_24 == (MR_Integer) 1))
#line 828 "handle_options.m"
            {
#line 828 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_272_272;
#line 828 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_275_275;
#line 828 "handle_options.m"
              MR_Word libs__handle_options__V_278_278;
#line 828 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_279_279;
#line 828 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_283_283;
#line 828 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_287_287;
#line 828 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_291_291;
#line 828 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_295_295;
#line 828 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_299_299;
#line 828 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_303_303;
#line 828 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_307_307;
#line 828 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_311_311;
#line 828 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_315_315;
#line 828 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_319_319;
#line 828 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_323_323;
#line 849 "handle_options.m"
              MR_Word libs__handle_options__V_325_325;

#line 829 "handle_options.m"
              {
#line 829 "handle_options.m"
                libs__globals__set_gc_method_3_p_0((MR_Integer) 0, libs__handle_options__STATE_VARIABLE_Globals_269_269, &libs__handle_options__STATE_VARIABLE_Globals_272_272);
              }
#line 830 "handle_options.m"
              {
#line 830 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 211, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[199]), libs__handle_options__STATE_VARIABLE_Globals_272_272, &libs__handle_options__STATE_VARIABLE_Globals_275_275);
              }
#line 831 "handle_options.m"
              libs__handle_options__V_278_278 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 831 "handle_options.m"
              {
#line 831 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 306, libs__handle_options__V_278_278, libs__handle_options__STATE_VARIABLE_Globals_275_275, &libs__handle_options__STATE_VARIABLE_Globals_279_279);
              }
#line 833 "handle_options.m"
              {
#line 833 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 305, libs__handle_options__V_278_278, libs__handle_options__STATE_VARIABLE_Globals_279_279, &libs__handle_options__STATE_VARIABLE_Globals_283_283);
              }
#line 835 "handle_options.m"
              {
#line 835 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 250, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_283_283, &libs__handle_options__STATE_VARIABLE_Globals_287_287);
              }
#line 836 "handle_options.m"
              {
#line 836 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 251, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_287_287, &libs__handle_options__STATE_VARIABLE_Globals_291_291);
              }
#line 837 "handle_options.m"
              {
#line 837 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 252, libs__handle_options__V_278_278, libs__handle_options__STATE_VARIABLE_Globals_291_291, &libs__handle_options__STATE_VARIABLE_Globals_295_295);
              }
#line 838 "handle_options.m"
              {
#line 838 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 254, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_295_295, &libs__handle_options__STATE_VARIABLE_Globals_299_299);
              }
#line 839 "handle_options.m"
              {
#line 839 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 233, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[10]), libs__handle_options__STATE_VARIABLE_Globals_299_299, &libs__handle_options__STATE_VARIABLE_Globals_303_303);
              }
#line 840 "handle_options.m"
              {
#line 840 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 240, libs__handle_options__V_278_278, libs__handle_options__STATE_VARIABLE_Globals_303_303, &libs__handle_options__STATE_VARIABLE_Globals_307_307);
              }
#line 841 "handle_options.m"
              {
#line 841 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 241, libs__handle_options__V_278_278, libs__handle_options__STATE_VARIABLE_Globals_307_307, &libs__handle_options__STATE_VARIABLE_Globals_311_311);
              }
#line 843 "handle_options.m"
              {
#line 843 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 447, libs__handle_options__V_278_278, libs__handle_options__STATE_VARIABLE_Globals_311_311, &libs__handle_options__STATE_VARIABLE_Globals_315_315);
              }
#line 844 "handle_options.m"
              {
#line 844 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 644, libs__handle_options__V_278_278, libs__handle_options__STATE_VARIABLE_Globals_315_315, &libs__handle_options__STATE_VARIABLE_Globals_319_319);
              }
#line 845 "handle_options.m"
              {
#line 845 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 658, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_319_319, &libs__handle_options__STATE_VARIABLE_Globals_323_323);
              }
#line 849 "handle_options.m"
              {
#line 849 "handle_options.m"
                libs__handle_options__V_325_325 = libs__trace_params__given_trace_level_is_none_1_f_0(libs__handle_options__TraceLevel_29);
              }
#line 849 "handle_options.m"
              libs__handle_options__succeeded = (libs__handle_options__V_325_325 == (MR_Integer) 0);
#line 851 "handle_options.m"
              if (libs__handle_options__succeeded)
#line 850 "handle_options.m"
                {
#line 850 "handle_options.m"
                  {
#line 850 "handle_options.m"
                    libs__globals__set_option_4_p_0((MR_Integer) 484, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_323_323, &libs__handle_options__STATE_VARIABLE_Globals_328_328);
                  }
#line 850 "handle_options.m"
                }
#line 851 "handle_options.m"
              else
#line 850 "handle_options.m"
                libs__handle_options__STATE_VARIABLE_Globals_328_328 = libs__handle_options__STATE_VARIABLE_Globals_323_323;
#line 828 "handle_options.m"
            }
#line 854 "handle_options.m"
          else
#line 854 "handle_options.m"
            if ((libs__handle_options__Target_24 == (MR_Integer) 3))
#line 857 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_328_328 = libs__handle_options__STATE_VARIABLE_Globals_269_269;
#line 854 "handle_options.m"
            else
#line 858 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_328_328 = libs__handle_options__STATE_VARIABLE_Globals_269_269;
#line 866 "handle_options.m"
    {
#line 866 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_328_328, (MR_Integer) 259, &libs__handle_options__ILFuncPtrTypes_57);
    }
#line 868 "handle_options.m"
    {
#line 868 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_328_328, (MR_Integer) 258, &libs__handle_options__ILRefAnyFields_58);
    }
#line 871 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__ILFuncPtrTypes_57 == (MR_Integer) 1);
#line 871 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 872 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__ILRefAnyFields_58 == (MR_Integer) 1);
#line 875 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 872 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_335_335 = libs__handle_options__STATE_VARIABLE_Globals_328_328;
#line 875 "handle_options.m"
    else
#line 876 "handle_options.m"
      {
#line 876 "handle_options.m"
        {
#line 876 "handle_options.m"
          libs__handle_options__option_implies_5_p_0((MR_Integer) 257, (MR_Integer) 256, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_328_328, &libs__handle_options__STATE_VARIABLE_Globals_335_335);
        }
#line 876 "handle_options.m"
      }
#line 10352 "libs.handle_options.c"
    if ((libs__handle_options__Target_24 == (MR_Integer) 0))
#line 1012 "handle_options.m"
      {
#line 1009 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__Target_24 == (MR_Integer) 0);
#line 1012 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1010 "handle_options.m"
          {
#line 1010 "handle_options.m"
            {
#line 1010 "handle_options.m"
              libs__handle_options__option_implies_5_p_0((MR_Integer) 250, (MR_Integer) 255, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_335_335, &libs__handle_options__STATE_VARIABLE_Globals_472_472);
            }
#line 1010 "handle_options.m"
          }
#line 1012 "handle_options.m"
        else
#line 1010 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_472_472 = libs__handle_options__STATE_VARIABLE_Globals_335_335;
#line 1012 "handle_options.m"
      }
#line 10375 "libs.handle_options.c"
    else
#line 10377 "libs.handle_options.c"
      if ((libs__handle_options__Target_24 == (MR_Integer) 5))
#line 10379 "libs.handle_options.c"
        {
#line 10381 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_404_404;
#line 10383 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_407_407;
#line 10385 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_411_411;
#line 10387 "libs.handle_options.c"
          MR_Word libs__handle_options__V_414_414;
#line 10389 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_415_415;
#line 10391 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_419_419;
#line 10393 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_423_423;
#line 10395 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_427_427;
#line 10397 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_431_431;
#line 10399 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_435_435;
#line 10401 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_439_439;
#line 10403 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_443_443;
#line 10405 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_447_447;
#line 10407 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_451_451;
#line 10409 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_455_455;
#line 10411 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_459_459;

#line 970 "handle_options.m"
          {
#line 970 "handle_options.m"
            libs__globals__set_gc_method_3_p_0((MR_Integer) 0, libs__handle_options__STATE_VARIABLE_Globals_335_335, &libs__handle_options__STATE_VARIABLE_Globals_404_404);
          }
#line 971 "handle_options.m"
          {
#line 971 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 211, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[199]), libs__handle_options__STATE_VARIABLE_Globals_404_404, &libs__handle_options__STATE_VARIABLE_Globals_407_407);
          }
#line 972 "handle_options.m"
          {
#line 972 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 239, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_407_407, &libs__handle_options__STATE_VARIABLE_Globals_411_411);
          }
#line 973 "handle_options.m"
          libs__handle_options__V_414_414 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 973 "handle_options.m"
          {
#line 973 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 306, libs__handle_options__V_414_414, libs__handle_options__STATE_VARIABLE_Globals_411_411, &libs__handle_options__STATE_VARIABLE_Globals_415_415);
          }
#line 975 "handle_options.m"
          {
#line 975 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 305, libs__handle_options__V_414_414, libs__handle_options__STATE_VARIABLE_Globals_415_415, &libs__handle_options__STATE_VARIABLE_Globals_419_419);
          }
#line 977 "handle_options.m"
          {
#line 977 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 273, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_419_419, &libs__handle_options__STATE_VARIABLE_Globals_423_423);
          }
#line 979 "handle_options.m"
          {
#line 979 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 268, libs__handle_options__V_414_414, libs__handle_options__STATE_VARIABLE_Globals_423_423, &libs__handle_options__STATE_VARIABLE_Globals_427_427);
          }
#line 981 "handle_options.m"
          {
#line 981 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 270, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_427_427, &libs__handle_options__STATE_VARIABLE_Globals_431_431);
          }
#line 983 "handle_options.m"
          {
#line 983 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 271, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_431_431, &libs__handle_options__STATE_VARIABLE_Globals_435_435);
          }
#line 985 "handle_options.m"
          {
#line 985 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 644, libs__handle_options__V_414_414, libs__handle_options__STATE_VARIABLE_Globals_435_435, &libs__handle_options__STATE_VARIABLE_Globals_439_439);
          }
#line 986 "handle_options.m"
          {
#line 986 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 658, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_439_439, &libs__handle_options__STATE_VARIABLE_Globals_443_443);
          }
#line 992 "handle_options.m"
          {
#line 992 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 245, libs__handle_options__V_414_414, libs__handle_options__STATE_VARIABLE_Globals_443_443, &libs__handle_options__STATE_VARIABLE_Globals_447_447);
          }
#line 993 "handle_options.m"
          {
#line 993 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 246, libs__handle_options__V_414_414, libs__handle_options__STATE_VARIABLE_Globals_447_447, &libs__handle_options__STATE_VARIABLE_Globals_451_451);
          }
#line 994 "handle_options.m"
          {
#line 994 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 247, libs__handle_options__V_414_414, libs__handle_options__STATE_VARIABLE_Globals_451_451, &libs__handle_options__STATE_VARIABLE_Globals_455_455);
          }
#line 995 "handle_options.m"
          {
#line 995 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 250, libs__handle_options__V_414_414, libs__handle_options__STATE_VARIABLE_Globals_455_455, &libs__handle_options__STATE_VARIABLE_Globals_459_459);
          }
#line 996 "handle_options.m"
          {
#line 996 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 251, libs__handle_options__V_414_414, libs__handle_options__STATE_VARIABLE_Globals_459_459, &libs__handle_options__STATE_VARIABLE_Globals_472_472);
          }
#line 10496 "libs.handle_options.c"
        }
#line 10498 "libs.handle_options.c"
      else
#line 10500 "libs.handle_options.c"
        if ((libs__handle_options__Target_24 == (MR_Integer) 1))
#line 1022 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_472_472 = libs__handle_options__STATE_VARIABLE_Globals_335_335;
#line 10504 "libs.handle_options.c"
        else
#line 10506 "libs.handle_options.c"
          if ((libs__handle_options__Target_24 == (MR_Integer) 4))
#line 10508 "libs.handle_options.c"
            {
#line 1019 "handle_options.m"
              {
#line 1019 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 467, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), libs__handle_options__STATE_VARIABLE_Globals_335_335, &libs__handle_options__STATE_VARIABLE_Globals_472_472);
              }
#line 10515 "libs.handle_options.c"
            }
#line 10517 "libs.handle_options.c"
          else
#line 10519 "libs.handle_options.c"
            {
#line 10521 "libs.handle_options.c"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_338_338;
#line 10523 "libs.handle_options.c"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_341_341;
#line 10525 "libs.handle_options.c"
              MR_Word libs__handle_options__V_344_344;
#line 10527 "libs.handle_options.c"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_345_345;
#line 10529 "libs.handle_options.c"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_349_349;
#line 10531 "libs.handle_options.c"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_353_353;
#line 10533 "libs.handle_options.c"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_357_357;
#line 10535 "libs.handle_options.c"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_361_361;
#line 10537 "libs.handle_options.c"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_365_365;
#line 10539 "libs.handle_options.c"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_369_369;
#line 10541 "libs.handle_options.c"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_373_373;
#line 10543 "libs.handle_options.c"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_377_377;
#line 10545 "libs.handle_options.c"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_381_381;
#line 10547 "libs.handle_options.c"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_385_385;
#line 10549 "libs.handle_options.c"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_389_389;
#line 10551 "libs.handle_options.c"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_393_393;
#line 10553 "libs.handle_options.c"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_397_397;

#line 920 "handle_options.m"
              {
#line 920 "handle_options.m"
                libs__globals__set_gc_method_3_p_0((MR_Integer) 0, libs__handle_options__STATE_VARIABLE_Globals_335_335, &libs__handle_options__STATE_VARIABLE_Globals_338_338);
              }
#line 921 "handle_options.m"
              {
#line 921 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 211, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[199]), libs__handle_options__STATE_VARIABLE_Globals_338_338, &libs__handle_options__STATE_VARIABLE_Globals_341_341);
              }
#line 922 "handle_options.m"
              libs__handle_options__V_344_344 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 922 "handle_options.m"
              {
#line 922 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 306, libs__handle_options__V_344_344, libs__handle_options__STATE_VARIABLE_Globals_341_341, &libs__handle_options__STATE_VARIABLE_Globals_345_345);
              }
#line 924 "handle_options.m"
              {
#line 924 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 305, libs__handle_options__V_344_344, libs__handle_options__STATE_VARIABLE_Globals_345_345, &libs__handle_options__STATE_VARIABLE_Globals_349_349);
              }
#line 926 "handle_options.m"
              {
#line 926 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 250, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_349_349, &libs__handle_options__STATE_VARIABLE_Globals_353_353);
              }
#line 927 "handle_options.m"
              {
#line 927 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 251, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_353_353, &libs__handle_options__STATE_VARIABLE_Globals_357_357);
              }
#line 928 "handle_options.m"
              {
#line 928 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 239, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_357_357, &libs__handle_options__STATE_VARIABLE_Globals_361_361);
              }
#line 929 "handle_options.m"
              {
#line 929 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 252, libs__handle_options__V_344_344, libs__handle_options__STATE_VARIABLE_Globals_361_361, &libs__handle_options__STATE_VARIABLE_Globals_365_365);
              }
#line 930 "handle_options.m"
              {
#line 930 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 254, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_365_365, &libs__handle_options__STATE_VARIABLE_Globals_369_369);
              }
#line 931 "handle_options.m"
              {
#line 931 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 253, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_369_369, &libs__handle_options__STATE_VARIABLE_Globals_373_373);
              }
#line 932 "handle_options.m"
              {
#line 932 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 233, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[10]), libs__handle_options__STATE_VARIABLE_Globals_373_373, &libs__handle_options__STATE_VARIABLE_Globals_377_377);
              }
#line 933 "handle_options.m"
              {
#line 933 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 241, libs__handle_options__V_344_344, libs__handle_options__STATE_VARIABLE_Globals_377_377, &libs__handle_options__STATE_VARIABLE_Globals_381_381);
              }
#line 934 "handle_options.m"
              {
#line 934 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 256, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_381_381, &libs__handle_options__STATE_VARIABLE_Globals_385_385);
              }
#line 935 "handle_options.m"
              {
#line 935 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 269, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_385_385, &libs__handle_options__STATE_VARIABLE_Globals_389_389);
              }
#line 937 "handle_options.m"
              {
#line 937 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 644, libs__handle_options__V_344_344, libs__handle_options__STATE_VARIABLE_Globals_389_389, &libs__handle_options__STATE_VARIABLE_Globals_393_393);
              }
#line 938 "handle_options.m"
              {
#line 938 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 658, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_393_393, &libs__handle_options__STATE_VARIABLE_Globals_397_397);
              }
#line 10638 "libs.handle_options.c"
              if ((libs__handle_options__Target_24 == (MR_Integer) 2))
#line 10640 "libs.handle_options.c"
                {
#line 941 "handle_options.m"
                  {
#line 941 "handle_options.m"
                    libs__globals__set_option_4_p_0((MR_Integer) 573, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[200]), libs__handle_options__STATE_VARIABLE_Globals_397_397, &libs__handle_options__STATE_VARIABLE_Globals_472_472);
                  }
#line 10647 "libs.handle_options.c"
                }
#line 10649 "libs.handle_options.c"
              else
#line 1024 "handle_options.m"
                libs__handle_options__STATE_VARIABLE_Globals_472_472 = libs__handle_options__STATE_VARIABLE_Globals_397_397;
#line 10653 "libs.handle_options.c"
            }
#line 1030 "handle_options.m"
    {
#line 1030 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 215, (MR_Integer) 214, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_472_472, &libs__handle_options__STATE_VARIABLE_Globals_477_477);
    }
#line 1037 "handle_options.m"
    libs__handle_options__V_481_481 = (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[201]);
#line 1037 "handle_options.m"
    {
#line 1037 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 99, (MR_Integer) 556, libs__handle_options__V_481_481, libs__handle_options__STATE_VARIABLE_Globals_477_477, &libs__handle_options__STATE_VARIABLE_Globals_482_482);
    }
#line 1039 "handle_options.m"
    {
#line 1039 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 99, (MR_Integer) 558, libs__handle_options__V_481_481, libs__handle_options__STATE_VARIABLE_Globals_482_482, &libs__handle_options__STATE_VARIABLE_Globals_487_487);
    }
#line 1043 "handle_options.m"
    libs__handle_options__V_491_491 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 1043 "handle_options.m"
    {
#line 1043 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 250, (MR_Integer) 245, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_487_487, &libs__handle_options__STATE_VARIABLE_Globals_492_492);
    }
#line 1045 "handle_options.m"
    {
#line 1045 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 250, (MR_Integer) 246, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_492_492, &libs__handle_options__STATE_VARIABLE_Globals_497_497);
    }
#line 1047 "handle_options.m"
    {
#line 1047 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 250, (MR_Integer) 247, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_497_497, &libs__handle_options__STATE_VARIABLE_Globals_502_502);
    }
#line 1050 "handle_options.m"
    {
#line 1050 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 252, (MR_Integer) 319, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_502_502, &libs__handle_options__STATE_VARIABLE_Globals_507_507);
    }
#line 1054 "handle_options.m"
    {
#line 1054 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 460, (MR_Integer) 454, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_507_507, &libs__handle_options__STATE_VARIABLE_Globals_512_512);
    }
#line 1058 "handle_options.m"
    {
#line 1058 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 619, (MR_Integer) 617, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_512_512, &libs__handle_options__STATE_VARIABLE_Globals_517_517);
    }
#line 1062 "handle_options.m"
    {
#line 1062 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_517_517, (MR_Integer) 634, &libs__handle_options__LibLinkages0_59);
    }
#line 1068 "handle_options.m"
    if ((libs__handle_options__LibLinkages0_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1065 "handle_options.m"
      {
#line 1066 "handle_options.m"
        {
#line 1066 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 634, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[8]), libs__handle_options__STATE_VARIABLE_Globals_517_517, &libs__handle_options__STATE_VARIABLE_Globals_522_522);
        }
#line 1065 "handle_options.m"
      }
#line 1068 "handle_options.m"
    else
#line 1069 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_522_522 = libs__handle_options__STATE_VARIABLE_Globals_517_517;
#line 1075 "handle_options.m"
    {
#line 1075 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 617, (MR_Integer) 98, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_522_522, &libs__handle_options__STATE_VARIABLE_Globals_531_531);
    }
#line 1076 "handle_options.m"
    {
#line 1076 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 617, (MR_Integer) 97, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_531_531, &libs__handle_options__STATE_VARIABLE_Globals_536_536);
    }
#line 1081 "handle_options.m"
    {
#line 1081 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 617, (MR_Integer) 639, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_536_536, &libs__handle_options__STATE_VARIABLE_Globals_541_541);
    }
#line 1082 "handle_options.m"
    {
#line 1082 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 622, (MR_Integer) 639, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_541_541, &libs__handle_options__STATE_VARIABLE_Globals_546_546);
    }
#line 1083 "handle_options.m"
    {
#line 1083 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 622, (MR_Integer) 617, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_546_546, &libs__handle_options__STATE_VARIABLE_Globals_551_551);
    }
#line 1087 "handle_options.m"
    {
#line 1087 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 622, (MR_Integer) 113, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_551_551, &libs__handle_options__STATE_VARIABLE_Globals_556_556);
    }
#line 1091 "handle_options.m"
    {
#line 1091 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 617, (MR_Integer) 644, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_556_556, &libs__handle_options__STATE_VARIABLE_Globals_561_561);
    }
#line 1096 "handle_options.m"
    {
#line 1096 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_561_561, (MR_Integer) 329, &libs__handle_options__TransOpt_62);
    }
#line 1109 "handle_options.m"
    if ((libs__handle_options__TransOpt_62 == (MR_Integer) 0))
#line 1110 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_568_568 = libs__handle_options__STATE_VARIABLE_Errors_261_261;
#line 1109 "handle_options.m"
    else
#line 1099 "handle_options.m"
      {
#line 1099 "handle_options.m"
        MR_Word libs__handle_options__UsingMMC_Make_63;
#line 1099 "handle_options.m"
        MR_Word libs__handle_options__InvokedByMMC_Make_64;
#line 1103 "handle_options.m"
        MR_Word libs__handle_options__V_566_566;

#line 1100 "handle_options.m"
        {
#line 1100 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_561_561, (MR_Integer) 617, &libs__handle_options__UsingMMC_Make_63);
        }
#line 1101 "handle_options.m"
        {
#line 1101 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_561_561, (MR_Integer) 622, &libs__handle_options__InvokedByMMC_Make_64);
        }
#line 1103 "handle_options.m"
        {
#line 1103 "handle_options.m"
          libs__handle_options__V_566_566 = mercury__bool__or_2_f_0(libs__handle_options__UsingMMC_Make_63, libs__handle_options__InvokedByMMC_Make_64);
        }
#line 1103 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__V_566_566 == (MR_Integer) 1);
#line 1106 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1104 "handle_options.m"
          {
#line 1104 "handle_options.m"
            {
#line 1104 "handle_options.m"
              libs__handle_options__add_error_3_p_0((MR_String) "\140--transitive-intermodule-optimization\' is incompatible with \140mmc --make\'.", libs__handle_options__STATE_VARIABLE_Errors_261_261, &libs__handle_options__STATE_VARIABLE_Errors_568_568);
            }
#line 1104 "handle_options.m"
          }
#line 1106 "handle_options.m"
        else
#line 1104 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Errors_568_568 = libs__handle_options__STATE_VARIABLE_Errors_261_261;
#line 1099 "handle_options.m"
      }
#line 1115 "handle_options.m"
    {
#line 1115 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_561_561, (MR_Integer) 325, &libs__handle_options__InterModOpt_65);
    }
#line 1117 "handle_options.m"
    {
#line 1117 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_561_561, (MR_Integer) 330, &libs__handle_options__InterModAnalysis_66);
    }
#line 1120 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__InterModOpt_65 == (MR_Integer) 1);
#line 1120 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1121 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__InterModAnalysis_66 == (MR_Integer) 1);
#line 1125 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1123 "handle_options.m"
      {
#line 1123 "handle_options.m"
        {
#line 1123 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "\140--intermodule-optimization\' is incompatible with \140--intermodule-analysis\'.", libs__handle_options__STATE_VARIABLE_Errors_568_568, &libs__handle_options__STATE_VARIABLE_Errors_574_574);
        }
#line 1123 "handle_options.m"
      }
#line 1125 "handle_options.m"
    else
#line 1123 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_574_574 = libs__handle_options__STATE_VARIABLE_Errors_568_568;
#line 1129 "handle_options.m"
    {
#line 1129 "handle_options.m"
      libs__handle_options__succeeded = mercury__io__have_symlinks_0_p_0();
    }
#line 1131 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1129 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_579_579 = libs__handle_options__STATE_VARIABLE_Globals_561_561;
#line 1131 "handle_options.m"
    else
#line 1132 "handle_options.m"
      {
#line 1132 "handle_options.m"
        {
#line 1132 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 626, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_561_561, &libs__handle_options__STATE_VARIABLE_Globals_579_579);
        }
#line 1132 "handle_options.m"
      }
#line 1135 "handle_options.m"
    {
#line 1135 "handle_options.m"
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_579_579, (MR_Integer) 93, &libs__handle_options__MaybeStandaloneInt_67);
    }
#line 1137 "handle_options.m"
    {
#line 1137 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_579_579, (MR_Integer) 566, &libs__handle_options__ExtraInitFunctions_68);
    }
#line 1140 "handle_options.m"
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__MaybeStandaloneInt_67)) == (MR_mktag((MR_Integer) 1)));
#line 1140 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1140 "handle_options.m"
      {
#line 1140 "handle_options.m"
        libs__handle_options__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeStandaloneInt_67, (MR_Integer) 0)));
#line 1141 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__ExtraInitFunctions_68 == (MR_Integer) 1);
#line 1140 "handle_options.m"
      }
#line 1146 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1143 "handle_options.m"
      {
#line 1143 "handle_options.m"
        {
#line 1143 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "\140--generate-standalone-interface\' is incompatible with \140--extra-initialization-functions\'.", libs__handle_options__STATE_VARIABLE_Errors_574_574, &libs__handle_options__STATE_VARIABLE_Errors_584_584);
        }
#line 1143 "handle_options.m"
      }
#line 1146 "handle_options.m"
    else
#line 1143 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_584_584 = libs__handle_options__STATE_VARIABLE_Errors_574_574;
#line 1150 "handle_options.m"
    {
#line 1150 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 408, (MR_Integer) 406, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_579_579, &libs__handle_options__STATE_VARIABLE_Globals_590_590);
    }
#line 1152 "handle_options.m"
    {
#line 1152 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 416, (MR_Integer) 415, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_590_590, &libs__handle_options__STATE_VARIABLE_Globals_595_595);
    }
#line 1154 "handle_options.m"
    {
#line 1154 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 415, (MR_Integer) 414, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_595_595, &libs__handle_options__STATE_VARIABLE_Globals_600_600);
    }
#line 1155 "handle_options.m"
    {
#line 1155 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 415, (MR_Integer) 13, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_600_600, &libs__handle_options__STATE_VARIABLE_Globals_605_605);
    }
#line 1157 "handle_options.m"
    {
#line 1157 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 423, (MR_Integer) 422, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_605_605, &libs__handle_options__STATE_VARIABLE_Globals_610_610);
    }
#line 1159 "handle_options.m"
    {
#line 1159 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 422, (MR_Integer) 421, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_610_610, &libs__handle_options__STATE_VARIABLE_Globals_615_615);
    }
#line 1160 "handle_options.m"
    {
#line 1160 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 422, (MR_Integer) 13, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_615_615, &libs__handle_options__STATE_VARIABLE_Globals_620_620);
    }
#line 1162 "handle_options.m"
    {
#line 1162 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 86, (MR_Integer) 329, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_620_620, &libs__handle_options__STATE_VARIABLE_Globals_625_625);
    }
#line 1164 "handle_options.m"
    {
#line 1164 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 329, (MR_Integer) 325, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_625_625, &libs__handle_options__STATE_VARIABLE_Globals_630_630);
    }
#line 1166 "handle_options.m"
    {
#line 1166 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 328, (MR_Integer) 327, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_630_630, &libs__handle_options__STATE_VARIABLE_Globals_635_635);
    }
#line 1171 "handle_options.m"
    {
#line 1171 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 325, (MR_Integer) 327, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_635_635, &libs__handle_options__STATE_VARIABLE_Globals_640_640);
    }
#line 1173 "handle_options.m"
    {
#line 1173 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 329, (MR_Integer) 328, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_640_640, &libs__handle_options__STATE_VARIABLE_Globals_645_645);
    }
#line 1181 "handle_options.m"
    {
#line 1181 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 327, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_645_645, &libs__handle_options__STATE_VARIABLE_Globals_649_649);
    }
#line 1183 "handle_options.m"
    {
#line 1183 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 111, (MR_Integer) 112, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_649_649, &libs__handle_options__STATE_VARIABLE_Globals_654_654);
    }
#line 1185 "handle_options.m"
    {
#line 1185 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 48, (MR_Integer) 47, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_654_654, &libs__handle_options__STATE_VARIABLE_Globals_659_659);
    }
#line 1192 "handle_options.m"
    {
#line 1192 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 89, (MR_Integer) 111, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_659_659, &libs__handle_options__STATE_VARIABLE_Globals_664_664);
    }
#line 1194 "handle_options.m"
    {
#line 1194 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 91, (MR_Integer) 111, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_664_664, &libs__handle_options__STATE_VARIABLE_Globals_669_669);
    }
#line 1196 "handle_options.m"
    {
#line 1196 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 90, (MR_Integer) 111, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_669_669, &libs__handle_options__STATE_VARIABLE_Globals_674_674);
    }
#line 1198 "handle_options.m"
    {
#line 1198 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 94, (MR_Integer) 111, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_674_674, &libs__handle_options__STATE_VARIABLE_Globals_679_679);
    }
#line 1200 "handle_options.m"
    {
#line 1200 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 84, (MR_Integer) 111, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_679_679, &libs__handle_options__STATE_VARIABLE_Globals_684_684);
    }
#line 1202 "handle_options.m"
    {
#line 1202 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 83, (MR_Integer) 111, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_684_684, &libs__handle_options__STATE_VARIABLE_Globals_689_689);
    }
#line 1204 "handle_options.m"
    {
#line 1204 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 82, (MR_Integer) 111, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_689_689, &libs__handle_options__STATE_VARIABLE_Globals_694_694);
    }
#line 1206 "handle_options.m"
    {
#line 1206 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 88, (MR_Integer) 111, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_694_694, &libs__handle_options__STATE_VARIABLE_Globals_699_699);
    }
#line 1208 "handle_options.m"
    {
#line 1208 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 100, (MR_Integer) 111, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_699_699, &libs__handle_options__STATE_VARIABLE_Globals_704_704);
    }
#line 1210 "handle_options.m"
    {
#line 1210 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 85, (MR_Integer) 111, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_704_704, &libs__handle_options__STATE_VARIABLE_Globals_709_709);
    }
#line 1212 "handle_options.m"
    {
#line 1212 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 86, (MR_Integer) 111, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_709_709, &libs__handle_options__STATE_VARIABLE_Globals_714_714);
    }
#line 1214 "handle_options.m"
    {
#line 1214 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 87, (MR_Integer) 111, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_714_714, &libs__handle_options__STATE_VARIABLE_Globals_719_719);
    }
#line 1216 "handle_options.m"
    {
#line 1216 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 96, (MR_Integer) 111, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_719_719, &libs__handle_options__STATE_VARIABLE_Globals_724_724);
    }
#line 1218 "handle_options.m"
    {
#line 1218 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 95, (MR_Integer) 111, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_724_724, &libs__handle_options__STATE_VARIABLE_Globals_729_729);
    }
#line 1224 "handle_options.m"
    {
#line 1224 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 84, (MR_Integer) 133, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_729_729, &libs__handle_options__STATE_VARIABLE_Globals_734_734);
    }
#line 1226 "handle_options.m"
    {
#line 1226 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 83, (MR_Integer) 133, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_734_734, &libs__handle_options__STATE_VARIABLE_Globals_739_739);
    }
#line 1228 "handle_options.m"
    {
#line 1228 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 82, (MR_Integer) 133, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_739_739, &libs__handle_options__STATE_VARIABLE_Globals_744_744);
    }
#line 1230 "handle_options.m"
    {
#line 1230 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 85, (MR_Integer) 133, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_744_744, &libs__handle_options__STATE_VARIABLE_Globals_749_749);
    }
#line 1232 "handle_options.m"
    {
#line 1232 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 86, (MR_Integer) 133, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_749_749, &libs__handle_options__STATE_VARIABLE_Globals_754_754);
    }
#line 1237 "handle_options.m"
    {
#line 1237 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 82, (MR_Integer) 112, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_754_754, &libs__handle_options__STATE_VARIABLE_Globals_759_759);
    }
#line 1244 "handle_options.m"
    {
#line 1244 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 88, (MR_Integer) 325, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_759_759, &libs__handle_options__STATE_VARIABLE_Globals_764_764);
    }
#line 1252 "handle_options.m"
    {
#line 1252 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_764_764, (MR_Integer) 111, &libs__handle_options__Smart_70);
    }
#line 1253 "handle_options.m"
    {
#line 1253 "handle_options.m"
      libs__handle_options__maybe_disable_smart_recompilation_8_p_0(libs__handle_options__Smart_70, (MR_Integer) 325, (MR_Integer) 1, (MR_String) "\140--intermodule-optimization\'", libs__handle_options__STATE_VARIABLE_Globals_764_764, &libs__handle_options__STATE_VARIABLE_Globals_770_770);
    }
#line 1255 "handle_options.m"
    {
#line 1255 "handle_options.m"
      libs__handle_options__maybe_disable_smart_recompilation_8_p_0(libs__handle_options__Smart_70, (MR_Integer) 327, (MR_Integer) 1, (MR_String) "\140--use-opt-files\'", libs__handle_options__STATE_VARIABLE_Globals_770_770, &libs__handle_options__STATE_VARIABLE_Globals_775_775);
    }
#line 1264 "handle_options.m"
    {
#line 1264 "handle_options.m"
      libs__handle_options__maybe_disable_smart_recompilation_8_p_0(libs__handle_options__Smart_70, (MR_Integer) 97, (MR_Integer) 0, (MR_String) "\140--no-target-code-only\'", libs__handle_options__STATE_VARIABLE_Globals_775_775, &libs__handle_options__STATE_VARIABLE_Globals_780_780);
    }
#line 1267 "handle_options.m"
    {
#line 1267 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 640, (MR_Integer) 639, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_780_780, &libs__handle_options__STATE_VARIABLE_Globals_785_785);
    }
#line 1269 "handle_options.m"
    {
#line 1269 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 45, (MR_Integer) 44, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_785_785, &libs__handle_options__STATE_VARIABLE_Globals_790_790);
    }
#line 1270 "handle_options.m"
    {
#line 1270 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 44, (MR_Integer) 50, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_790_790, &libs__handle_options__STATE_VARIABLE_Globals_795_795);
    }
#line 1271 "handle_options.m"
    {
#line 1271 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_795_795, (MR_Integer) 45, &libs__handle_options__VeryVerbose_71);
    }
#line 1272 "handle_options.m"
    {
#line 1272 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_795_795, (MR_Integer) 54, &libs__handle_options__Statistics_72);
    }
#line 1274 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__VeryVerbose_71 == (MR_Integer) 1);
#line 1274 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1275 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__Statistics_72 == (MR_Integer) 1);
#line 1278 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1277 "handle_options.m"
      {
#line 1277 "handle_options.m"
        {
#line 1277 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 55, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]), libs__handle_options__STATE_VARIABLE_Globals_795_795, &libs__handle_options__STATE_VARIABLE_Globals_801_801);
        }
#line 1277 "handle_options.m"
      }
#line 1278 "handle_options.m"
    else
#line 1277 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_801_801 = libs__handle_options__STATE_VARIABLE_Globals_795_795;
#line 1282 "handle_options.m"
    {
#line 1282 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 60, (MR_Integer) 58, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_801_801, &libs__handle_options__STATE_VARIABLE_Globals_806_806);
    }
#line 1283 "handle_options.m"
    {
#line 1283 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 61, (MR_Integer) 58, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_806_806, &libs__handle_options__STATE_VARIABLE_Globals_811_811);
    }
#line 1284 "handle_options.m"
    {
#line 1284 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 59, (MR_Integer) 58, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_811_811, &libs__handle_options__STATE_VARIABLE_Globals_816_816);
    }
#line 1287 "handle_options.m"
    {
#line 1287 "handle_options.m"
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_816_816, (MR_Integer) 72, &libs__handle_options__DebugLiveness_73);
    }
#line 1289 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__DebugLiveness_73 >= (MR_Integer) 0);
#line 1289 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1289 "handle_options.m"
      {
#line 1290 "handle_options.m"
        libs__handle_options__V_820_820 = (MR_String) "all";
#line 1290 "handle_options.m"
        {
#line 1290 "handle_options.m"
          libs__handle_options__succeeded = libs__handle_options__convert_dump_alias_2_p_0(libs__handle_options__V_820_820, &libs__handle_options__AllDumpOptions_74);
        }
#line 1289 "handle_options.m"
      }
#line 1301 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1297 "handle_options.m"
      {
#line 1297 "handle_options.m"
        MR_String libs__handle_options__DumpOptions0_75;
#line 1297 "handle_options.m"
        MR_String libs__handle_options__DumpOptions1_76;
#line 1297 "handle_options.m"
        MR_Word libs__handle_options__V_823_823;

#line 1296 "handle_options.m"
        {
#line 1296 "handle_options.m"
          libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_816_816, (MR_Integer) 144, &libs__handle_options__DumpOptions0_75);
        }
#line 1298 "handle_options.m"
        {
#line 1298 "handle_options.m"
          mercury__string__append_3_p_2(libs__handle_options__DumpOptions0_75, libs__handle_options__AllDumpOptions_74, &libs__handle_options__DumpOptions1_76);
        }
#line 1299 "handle_options.m"
        {
#line 1299 "handle_options.m"
          libs__handle_options__V_823_823 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1299 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_823_823, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1299 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_823_823, 1) = ((MR_Box) (libs__handle_options__DumpOptions1_76));
#line 1299 "handle_options.m"
        }
#line 1299 "handle_options.m"
        {
#line 1299 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 144, libs__handle_options__V_823_823, libs__handle_options__STATE_VARIABLE_Globals_816_816, &libs__handle_options__STATE_VARIABLE_Globals_824_824);
        }
#line 1297 "handle_options.m"
      }
#line 1301 "handle_options.m"
    else
#line 1299 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_824_824 = libs__handle_options__STATE_VARIABLE_Globals_816_816;
#line 1305 "handle_options.m"
    {
#line 1305 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 61, (MR_Integer) 58, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_824_824, &libs__handle_options__STATE_VARIABLE_Globals_828_828);
    }
#line 1306 "handle_options.m"
    {
#line 1306 "handle_options.m"
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_828_828, (MR_Integer) 62, &libs__handle_options__DebugModesPredId_77);
    }
#line 1308 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__DebugModesPredId_77 > (MR_Integer) 0);
#line 1310 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1309 "handle_options.m"
      {
#line 1309 "handle_options.m"
        {
#line 1309 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 58, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_828_828, &libs__handle_options__STATE_VARIABLE_Globals_834_834);
        }
#line 1309 "handle_options.m"
      }
#line 1310 "handle_options.m"
    else
#line 1309 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_834_834 = libs__handle_options__STATE_VARIABLE_Globals_828_828;
#line 1314 "handle_options.m"
    {
#line 1314 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_834_834, (MR_Integer) 358, &libs__handle_options__DebugUnneededCodePredNames_78);
    }
#line 1318 "handle_options.m"
    if ((libs__handle_options__DebugUnneededCodePredNames_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1317 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_839_839 = libs__handle_options__STATE_VARIABLE_Globals_834_834;
#line 1318 "handle_options.m"
    else
#line 1319 "handle_options.m"
      {
#line 1320 "handle_options.m"
        {
#line 1320 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 357, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_834_834, &libs__handle_options__STATE_VARIABLE_Globals_839_839);
        }
#line 1319 "handle_options.m"
      }
#line 1323 "handle_options.m"
    {
#line 1323 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_839_839, (MR_Integer) 68, &libs__handle_options__DebugOptPredIdStrs_81);
    }
#line 1325 "handle_options.m"
    {
#line 1325 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_839_839, (MR_Integer) 69, &libs__handle_options__DebugOptPredNames_82);
    }
#line 1328 "handle_options.m"
    {
#line 1328 "handle_options.m"
      MR_String libs__handle_options__V_83_83;
#line 1328 "handle_options.m"
      MR_Word libs__handle_options__V_84_84;

#line 1328 "handle_options.m"
      libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DebugOptPredIdStrs_81)) == (MR_mktag((MR_Integer) 1)));
#line 1328 "handle_options.m"
      if (libs__handle_options__succeeded)
#line 1328 "handle_options.m"
        {
#line 1328 "handle_options.m"
          libs__handle_options__V_83_83 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredIdStrs_81, (MR_Integer) 0)));
#line 1328 "handle_options.m"
          libs__handle_options__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredIdStrs_81, (MR_Integer) 1)));
#line 1328 "handle_options.m"
        }
#line 1328 "handle_options.m"
    }
#line 1329 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 1329 "handle_options.m"
      {
#line 1329 "handle_options.m"
        MR_String libs__handle_options__V_85_85;
#line 1329 "handle_options.m"
        MR_Word libs__handle_options__V_86_86;

#line 1329 "handle_options.m"
        libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DebugOptPredNames_82)) == (MR_mktag((MR_Integer) 1)));
#line 1329 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1329 "handle_options.m"
          {
#line 1329 "handle_options.m"
            libs__handle_options__V_85_85 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredNames_82, (MR_Integer) 0)));
#line 1329 "handle_options.m"
            libs__handle_options__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredNames_82, (MR_Integer) 1)));
#line 1329 "handle_options.m"
          }
#line 1329 "handle_options.m"
      }
#line 1333 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1332 "handle_options.m"
      {
#line 1332 "handle_options.m"
        {
#line 1332 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 66, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_839_839, &libs__handle_options__STATE_VARIABLE_Globals_845_845);
        }
#line 1332 "handle_options.m"
      }
#line 1333 "handle_options.m"
    else
#line 1332 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_845_845 = libs__handle_options__STATE_VARIABLE_Globals_839_839;
#line 1337 "handle_options.m"
    {
#line 1337 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_845_845, (MR_Integer) 78, &libs__handle_options__DebugIntermoduleAnalysis_87);
    }
#line 1339 "handle_options.m"
    {
#line 1339 "handle_options.m"
      analysis__enable_debug_messages_3_p_0(libs__handle_options__DebugIntermoduleAnalysis_87);
    }
#line 1341 "handle_options.m"
    {
#line 1341 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_845_845, (MR_Integer) 141, &libs__handle_options__DumpHLDSPredIds_88);
    }
#line 1352 "handle_options.m"
    if ((libs__handle_options__DumpHLDSPredIds_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1353 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_857_857 = libs__handle_options__STATE_VARIABLE_Globals_845_845;
#line 1352 "handle_options.m"
    else
#line 1344 "handle_options.m"
      {
#line 1344 "handle_options.m"
        MR_String libs__handle_options__DumpOptions2_91;
#line 1344 "handle_options.m"
        MR_String libs__handle_options__DumpOptions3_92;
#line 1344 "handle_options.m"
        MR_String libs__handle_options__DumpOptions_93;
#line 1344 "handle_options.m"
        MR_Word libs__handle_options__V_856_856;

#line 1345 "handle_options.m"
        {
#line 1345 "handle_options.m"
          libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_845_845, (MR_Integer) 144, &libs__handle_options__DumpOptions2_91);
        }
#line 1348 "handle_options.m"
        {
#line 1348 "handle_options.m"
          mercury__string__replace_all_4_p_0(libs__handle_options__DumpOptions2_91, (MR_String) "M", (MR_String) "", &libs__handle_options__DumpOptions3_92);
        }
#line 1349 "handle_options.m"
        {
#line 1349 "handle_options.m"
          mercury__string__replace_all_4_p_0(libs__handle_options__DumpOptions3_92, (MR_String) "T", (MR_String) "", &libs__handle_options__DumpOptions_93);
        }
#line 1350 "handle_options.m"
        {
#line 1350 "handle_options.m"
          libs__handle_options__V_856_856 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1350 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_856_856, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1350 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_856_856, 1) = ((MR_Box) (libs__handle_options__DumpOptions_93));
#line 1350 "handle_options.m"
        }
#line 1350 "handle_options.m"
        {
#line 1350 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 144, libs__handle_options__V_856_856, libs__handle_options__STATE_VARIABLE_Globals_845_845, &libs__handle_options__STATE_VARIABLE_Globals_857_857);
        }
#line 1344 "handle_options.m"
      }
#line 1356 "handle_options.m"
    {
#line 1356 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 77, (MR_Integer) 152, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_857_857, &libs__handle_options__STATE_VARIABLE_Globals_861_861);
    }
#line 1358 "handle_options.m"
    {
#line 1358 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 152, (MR_Integer) 150, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_861_861, &libs__handle_options__STATE_VARIABLE_Globals_866_866);
    }
#line 1360 "handle_options.m"
    {
#line 1360 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 151, (MR_Integer) 150, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_866_866, &libs__handle_options__STATE_VARIABLE_Globals_871_871);
    }
#line 1363 "handle_options.m"
    {
#line 1363 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 135, (MR_Integer) 134, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_871_871, &libs__handle_options__STATE_VARIABLE_Globals_876_876);
    }
#line 1368 "handle_options.m"
    {
#line 1368 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_876_876, (MR_Integer) 214, &libs__handle_options__UseTrail_94);
    }
#line 1369 "handle_options.m"
    {
#line 1369 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_876_876, (MR_Integer) 250, &libs__handle_options__HighLevelCode_95);
    }
#line 1370 "handle_options.m"
    {
#line 1370 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_876_876, (MR_Integer) 216, &libs__handle_options__UseMinimalModelStackCopy_96);
    }
#line 1372 "handle_options.m"
    {
#line 1372 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_876_876, (MR_Integer) 217, &libs__handle_options__UseMinimalModelOwnStacks_97);
    }
#line 1374 "handle_options.m"
    {
#line 1374 "handle_options.m"
      mercury__bool__or_3_p_0(libs__handle_options__UseMinimalModelStackCopy_96, libs__handle_options__UseMinimalModelOwnStacks_97, &libs__handle_options__UseMinimalModel_98);
    }
#line 1377 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelStackCopy_96 == (MR_Integer) 1);
#line 1377 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1378 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelOwnStacks_97 == (MR_Integer) 1);
#line 1382 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1380 "handle_options.m"
      {
#line 1380 "handle_options.m"
        {
#line 1380 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "can\'t use both forms of minimal model tabling at once", libs__handle_options__STATE_VARIABLE_Errors_584_584, &libs__handle_options__STATE_VARIABLE_Errors_883_883);
        }
#line 1380 "handle_options.m"
      }
#line 1382 "handle_options.m"
    else
#line 1388 "handle_options.m"
      {
#line 1383 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__UseMinimalModel_98 == (MR_Integer) 1);
#line 1383 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1384 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_95 == (MR_Integer) 1);
#line 1388 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1386 "handle_options.m"
          {
#line 1386 "handle_options.m"
            {
#line 1386 "handle_options.m"
              libs__handle_options__add_error_3_p_0((MR_String) "minimal model tabling is incompatible with high level code", libs__handle_options__STATE_VARIABLE_Errors_584_584, &libs__handle_options__STATE_VARIABLE_Errors_883_883);
            }
#line 1386 "handle_options.m"
          }
#line 1388 "handle_options.m"
        else
#line 1394 "handle_options.m"
          {
#line 1389 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__UseMinimalModel_98 == (MR_Integer) 1);
#line 1389 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 1390 "handle_options.m"
              libs__handle_options__succeeded = (libs__handle_options__UseTrail_94 == (MR_Integer) 1);
#line 1394 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 1392 "handle_options.m"
              {
#line 1392 "handle_options.m"
                {
#line 1392 "handle_options.m"
                  libs__handle_options__add_error_3_p_0((MR_String) "minimal model tabling is incompatible with trailing", libs__handle_options__STATE_VARIABLE_Errors_584_584, &libs__handle_options__STATE_VARIABLE_Errors_883_883);
                }
#line 1392 "handle_options.m"
              }
#line 1394 "handle_options.m"
            else
#line 1392 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Errors_883_883 = libs__handle_options__STATE_VARIABLE_Errors_584_584;
#line 1394 "handle_options.m"
          }
#line 1388 "handle_options.m"
      }
#line 1404 "handle_options.m"
    libs__handle_options__V_896_896 = (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[10]);
#line 1404 "handle_options.m"
    {
#line 1404 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 251, (MR_Integer) 242, libs__handle_options__V_896_896, libs__handle_options__STATE_VARIABLE_Globals_876_876, &libs__handle_options__STATE_VARIABLE_Globals_897_897);
    }
#line 1422 "handle_options.m"
    if ((libs__handle_options__Target_24 == (MR_Integer) 0))
#line 1406 "handle_options.m"
      {
#line 1406 "handle_options.m"
        MR_Integer libs__handle_options__ArgPackBits0_99;
#line 1406 "handle_options.m"
        MR_Integer libs__handle_options__BitsPerWord_100;
#line 1406 "handle_options.m"
        MR_Integer libs__handle_options__ArgPackBits_101;
#line 1406 "handle_options.m"
        MR_Word libs__handle_options__V_919_919;

#line 1407 "handle_options.m"
        {
#line 1407 "handle_options.m"
          libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_897_897, (MR_Integer) 242, &libs__handle_options__ArgPackBits0_99);
        }
#line 1408 "handle_options.m"
        {
#line 1408 "handle_options.m"
          libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_897_897, (MR_Integer) 236, &libs__handle_options__BitsPerWord_100);
        }
#line 1410 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__ArgPackBits0_99 < (MR_Integer) 0);
#line 1412 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1411 "handle_options.m"
          libs__handle_options__ArgPackBits_101 = libs__handle_options__BitsPerWord_100;
#line 1412 "handle_options.m"
        else
#line 1418 "handle_options.m"
          {
#line 1412 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__ArgPackBits0_99 > libs__handle_options__BitsPerWord_100);
#line 1418 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 1413 "handle_options.m"
              {
#line 1413 "handle_options.m"
                MR_String libs__handle_options__ProgNameB_102;
#line 1413 "handle_options.m"
                MR_String libs__handle_options__V_1668_1668;

#line 1413 "handle_options.m"
                {
#line 1413 "handle_options.m"
                  mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &libs__handle_options__ProgNameB_102);
                }
#line 11572 "libs.handle_options.c"
                {
#line 11574 "libs.handle_options.c"
                  libs__handle_options__V_1668_1668 = mercury__string__f_43_43_2_f_0(libs__handle_options__ProgNameB_102, (MR_String) ": warning: --arg-pack-bits invalid\n");
                }
#line 11577 "libs.handle_options.c"
                {
#line 11579 "libs.handle_options.c"
                  mercury__io__write_string_3_p_0(libs__handle_options__V_1668_1668);
                }
#line 1416 "handle_options.m"
                {
#line 1416 "handle_options.m"
                  libs__compiler_util__record_warning_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_897_897);
                }
#line 1417 "handle_options.m"
                libs__handle_options__ArgPackBits_101 = libs__handle_options__BitsPerWord_100;
#line 1413 "handle_options.m"
              }
#line 1418 "handle_options.m"
            else
#line 1419 "handle_options.m"
              libs__handle_options__ArgPackBits_101 = libs__handle_options__ArgPackBits0_99;
#line 1418 "handle_options.m"
          }
#line 1421 "handle_options.m"
        {
#line 1421 "handle_options.m"
          libs__handle_options__V_919_919 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1421 "handle_options.m"
          MR_hl_field(MR_mktag(2), libs__handle_options__V_919_919, 0) = ((MR_Box) (libs__handle_options__ArgPackBits_101));
#line 1421 "handle_options.m"
        }
#line 1421 "handle_options.m"
        {
#line 1421 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 242, libs__handle_options__V_919_919, libs__handle_options__STATE_VARIABLE_Globals_897_897, &libs__handle_options__STATE_VARIABLE_Globals_920_920);
        }
#line 1406 "handle_options.m"
      }
#line 1422 "handle_options.m"
    else
#line 1428 "handle_options.m"
      {
#line 1428 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_901_901;

#line 1429 "handle_options.m"
        {
#line 1429 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 242, libs__handle_options__V_896_896, libs__handle_options__STATE_VARIABLE_Globals_897_897, &libs__handle_options__STATE_VARIABLE_Globals_901_901);
        }
#line 1430 "handle_options.m"
        {
#line 1430 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 243, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_901_901, &libs__handle_options__STATE_VARIABLE_Globals_920_920);
        }
#line 1428 "handle_options.m"
      }
#line 1434 "handle_options.m"
    {
#line 1434 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 220, (MR_Integer) 239, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_920_920, &libs__handle_options__STATE_VARIABLE_Globals_924_924);
    }
#line 1439 "handle_options.m"
    {
#line 1439 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 250, (MR_Integer) 249, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_924_924, &libs__handle_options__STATE_VARIABLE_Globals_929_929);
    }
#line 1440 "handle_options.m"
    {
#line 1440 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 239, (MR_Integer) 249, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_929_929, &libs__handle_options__STATE_VARIABLE_Globals_934_934);
    }
#line 1445 "handle_options.m"
    {
#line 1445 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 250, (MR_Integer) 272, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_934_934, &libs__handle_options__STATE_VARIABLE_Globals_939_939);
    }
#line 1456 "handle_options.m"
    if ((libs__handle_options__Target_24 == (MR_Integer) 0))
#line 1452 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_943_943 = libs__handle_options__STATE_VARIABLE_Globals_939_939;
#line 1456 "handle_options.m"
    else
#line 1456 "handle_options.m"
      if ((libs__handle_options__Target_24 == (MR_Integer) 2))
#line 1453 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_943_943 = libs__handle_options__STATE_VARIABLE_Globals_939_939;
#line 1456 "handle_options.m"
      else
#line 1456 "handle_options.m"
        if ((libs__handle_options__Target_24 == (MR_Integer) 3))
#line 1454 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_943_943 = libs__handle_options__STATE_VARIABLE_Globals_939_939;
#line 1456 "handle_options.m"
        else
#line 1460 "handle_options.m"
          {
#line 1461 "handle_options.m"
            {
#line 1461 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 296, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_939_939, &libs__handle_options__STATE_VARIABLE_Globals_943_943);
            }
#line 1460 "handle_options.m"
          }
#line 1466 "handle_options.m"
    if ((libs__handle_options__Target_24 == (MR_Integer) 2))
#line 1465 "handle_options.m"
      libs__handle_options__succeeded = MR_TRUE;
#line 1466 "handle_options.m"
    else
#line 1466 "handle_options.m"
      if ((libs__handle_options__Target_24 == (MR_Integer) 3))
#line 1466 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 1466 "handle_options.m"
      else
#line 1466 "handle_options.m"
        libs__handle_options__succeeded = MR_FALSE;
#line 1472 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1471 "handle_options.m"
      {
#line 1471 "handle_options.m"
        {
#line 1471 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 436, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[11]), libs__handle_options__STATE_VARIABLE_Globals_943_943, &libs__handle_options__STATE_VARIABLE_Globals_947_947);
        }
#line 1471 "handle_options.m"
      }
#line 1472 "handle_options.m"
    else
#line 1471 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_947_947 = libs__handle_options__STATE_VARIABLE_Globals_943_943;
#line 1476 "handle_options.m"
    {
#line 1476 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 484, (MR_Integer) 560, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_947_947, &libs__handle_options__STATE_VARIABLE_Globals_952_952);
    }
#line 1479 "handle_options.m"
    {
#line 1479 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 204, (MR_Integer) 195, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_952_952, &libs__handle_options__STATE_VARIABLE_Globals_957_957);
    }
#line 1484 "handle_options.m"
    {
#line 1484 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 195, (MR_Integer) 207, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_957_957, &libs__handle_options__STATE_VARIABLE_Globals_962_962);
    }
#line 1494 "handle_options.m"
    {
#line 1494 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 204, (MR_Integer) 124, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_962_962, &libs__handle_options__STATE_VARIABLE_Globals_967_967);
    }
#line 1495 "handle_options.m"
    {
#line 1495 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_967_967, (MR_Integer) 124, &libs__handle_options__ProfOptimized_103);
    }
#line 1499 "handle_options.m"
    if ((libs__handle_options__ProfOptimized_103 == (MR_Integer) 0))
#line 1497 "handle_options.m"
      {
#line 1498 "handle_options.m"
        {
#line 1498 "handle_options.m"
          libs__handle_options__option_implies_5_p_0((MR_Integer) 191, (MR_Integer) 333, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_967_967, &libs__handle_options__STATE_VARIABLE_Globals_973_973);
        }
#line 1497 "handle_options.m"
      }
#line 1499 "handle_options.m"
    else
#line 1500 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_973_973 = libs__handle_options__STATE_VARIABLE_Globals_967_967;
#line 1505 "handle_options.m"
    {
#line 1505 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 191, (MR_Integer) 193, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_973_973, &libs__handle_options__STATE_VARIABLE_Globals_978_978);
    }
#line 1507 "handle_options.m"
    {
#line 1507 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 208, (MR_Integer) 193, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_978_978, &libs__handle_options__STATE_VARIABLE_Globals_983_983);
    }
#line 1509 "handle_options.m"
    {
#line 1509 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 209, (MR_Integer) 193, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_983_983, &libs__handle_options__STATE_VARIABLE_Globals_988_988);
    }
#line 1512 "handle_options.m"
    {
#line 1512 "handle_options.m"
      libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_988_988, (MR_Integer) 210, &libs__handle_options__ExpComp_104);
    }
#line 1514 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__ExpComp_104, (MR_String) "") == 0);
#line 1516 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1514 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_993_993 = libs__handle_options__STATE_VARIABLE_Globals_988_988;
#line 1516 "handle_options.m"
    else
#line 1517 "handle_options.m"
      {
#line 1517 "handle_options.m"
        {
#line 1517 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 333, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_988_988, &libs__handle_options__STATE_VARIABLE_Globals_993_993);
        }
#line 1517 "handle_options.m"
      }
#line 1521 "handle_options.m"
    {
#line 1521 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 183, (MR_Integer) 182, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_993_993, &libs__handle_options__STATE_VARIABLE_Globals_998_998);
    }
#line 1524 "handle_options.m"
    {
#line 1524 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 229, (MR_Integer) 231, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_998_998, &libs__handle_options__STATE_VARIABLE_Globals_1003_1003);
    }
#line 1530 "handle_options.m"
    {
#line 1530 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 182, (MR_Integer) 262, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_1003_1003, &libs__handle_options__STATE_VARIABLE_Globals_1008_1008);
    }
#line 1531 "handle_options.m"
    {
#line 1531 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 191, (MR_Integer) 262, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_1008_1008, &libs__handle_options__STATE_VARIABLE_Globals_1013_1013);
    }
#line 1537 "handle_options.m"
    {
#line 1537 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 191, (MR_Integer) 316, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_1013_1013, &libs__handle_options__STATE_VARIABLE_Globals_1018_1018);
    }
#line 1542 "handle_options.m"
    {
#line 1542 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 182, (MR_Integer) 122, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_1018_1018, &libs__handle_options__STATE_VARIABLE_Globals_1023_1023);
    }
#line 1545 "handle_options.m"
    {
#line 1545 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 122, (MR_Integer) 118, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_1023_1023, &libs__handle_options__STATE_VARIABLE_Globals_1028_1028);
    }
#line 1549 "handle_options.m"
    {
#line 1549 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 121, (MR_Integer) 118, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_1028_1028, &libs__handle_options__STATE_VARIABLE_Globals_1033_1033);
    }
#line 1559 "handle_options.m"
    {
#line 1559 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1033_1033, (MR_Integer) 116, &libs__handle_options__TraceOptimized_105);
    }
#line 1560 "handle_options.m"
    {
#line 1560 "handle_options.m"
      libs__handle_options__V_1036_1036 = libs__trace_params__given_trace_level_is_none_1_f_0(libs__handle_options__TraceLevel_29);
    }
#line 1560 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__V_1036_1036 == (MR_Integer) 0);
#line 1655 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1604 "handle_options.m"
      {
#line 1604 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1095_1095;
#line 1604 "handle_options.m"
        MR_Word libs__handle_options__V_1098_1098;
#line 1604 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1099_1099;
#line 1604 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1103_1103;
#line 1604 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1107_1107;
#line 1604 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1111_1111;
#line 1604 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1115_1115;
#line 1604 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1119_1119;
#line 1604 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1123_1123;
#line 1650 "handle_options.m"
        MR_Word libs__handle_options__V_1125_1125;

#line 1602 "handle_options.m"
        if ((libs__handle_options__TraceOptimized_105 == (MR_Integer) 0))
#line 1562 "handle_options.m"
          {
#line 1562 "handle_options.m"
            MR_Word libs__handle_options__V_1038_1038 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 1562 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1039_1039;
#line 1562 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1043_1043;
#line 1562 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1047_1047;
#line 1562 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1051_1051;
#line 1562 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1055_1055;
#line 1562 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1059_1059;
#line 1562 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1063_1063;
#line 1562 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1067_1067;
#line 1562 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1071_1071;
#line 1562 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1075_1075;
#line 1562 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1079_1079;
#line 1562 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1083_1083;
#line 1562 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1087_1087;
#line 1562 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1091_1091;

#line 1567 "handle_options.m"
            {
#line 1567 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 333, libs__handle_options__V_1038_1038, libs__handle_options__STATE_VARIABLE_Globals_1033_1033, &libs__handle_options__STATE_VARIABLE_Globals_1039_1039);
            }
#line 1568 "handle_options.m"
            {
#line 1568 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 350, libs__handle_options__V_1038_1038, libs__handle_options__STATE_VARIABLE_Globals_1039_1039, &libs__handle_options__STATE_VARIABLE_Globals_1043_1043);
            }
#line 1569 "handle_options.m"
            {
#line 1569 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 352, libs__handle_options__V_1038_1038, libs__handle_options__STATE_VARIABLE_Globals_1043_1043, &libs__handle_options__STATE_VARIABLE_Globals_1047_1047);
            }
#line 1570 "handle_options.m"
            {
#line 1570 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 359, libs__handle_options__V_1038_1038, libs__handle_options__STATE_VARIABLE_Globals_1047_1047, &libs__handle_options__STATE_VARIABLE_Globals_1051_1051);
            }
#line 1571 "handle_options.m"
            {
#line 1571 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 360, libs__handle_options__V_1038_1038, libs__handle_options__STATE_VARIABLE_Globals_1051_1051, &libs__handle_options__STATE_VARIABLE_Globals_1055_1055);
            }
#line 1573 "handle_options.m"
            {
#line 1573 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 388, libs__handle_options__V_1038_1038, libs__handle_options__STATE_VARIABLE_Globals_1055_1055, &libs__handle_options__STATE_VARIABLE_Globals_1059_1059);
            }
#line 1574 "handle_options.m"
            {
#line 1574 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 348, libs__handle_options__V_1038_1038, libs__handle_options__STATE_VARIABLE_Globals_1059_1059, &libs__handle_options__STATE_VARIABLE_Globals_1063_1063);
            }
#line 1576 "handle_options.m"
            {
#line 1576 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 349, libs__handle_options__V_1038_1038, libs__handle_options__STATE_VARIABLE_Globals_1063_1063, &libs__handle_options__STATE_VARIABLE_Globals_1067_1067);
            }
#line 1578 "handle_options.m"
            {
#line 1578 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 365, libs__handle_options__V_1038_1038, libs__handle_options__STATE_VARIABLE_Globals_1067_1067, &libs__handle_options__STATE_VARIABLE_Globals_1071_1071);
            }
#line 1580 "handle_options.m"
            {
#line 1580 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 364, libs__handle_options__V_1038_1038, libs__handle_options__STATE_VARIABLE_Globals_1071_1071, &libs__handle_options__STATE_VARIABLE_Globals_1075_1075);
            }
#line 1582 "handle_options.m"
            {
#line 1582 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 370, libs__handle_options__V_1038_1038, libs__handle_options__STATE_VARIABLE_Globals_1075_1075, &libs__handle_options__STATE_VARIABLE_Globals_1079_1079);
            }
#line 1584 "handle_options.m"
            {
#line 1584 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 384, libs__handle_options__V_1038_1038, libs__handle_options__STATE_VARIABLE_Globals_1079_1079, &libs__handle_options__STATE_VARIABLE_Globals_1083_1083);
            }
#line 1585 "handle_options.m"
            {
#line 1585 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 397, libs__handle_options__V_1038_1038, libs__handle_options__STATE_VARIABLE_Globals_1083_1083, &libs__handle_options__STATE_VARIABLE_Globals_1087_1087);
            }
#line 1586 "handle_options.m"
            {
#line 1586 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 398, libs__handle_options__V_1038_1038, libs__handle_options__STATE_VARIABLE_Globals_1087_1087, &libs__handle_options__STATE_VARIABLE_Globals_1091_1091);
            }
#line 1594 "handle_options.m"
            if ((libs__handle_options__Target_24 == (MR_Integer) 0))
#line 1595 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_1095_1095 = libs__handle_options__STATE_VARIABLE_Globals_1091_1091;
#line 1594 "handle_options.m"
            else
#line 1594 "handle_options.m"
              if ((libs__handle_options__Target_24 == (MR_Integer) 2))
#line 1596 "handle_options.m"
                libs__handle_options__STATE_VARIABLE_Globals_1095_1095 = libs__handle_options__STATE_VARIABLE_Globals_1091_1091;
#line 1594 "handle_options.m"
              else
#line 1594 "handle_options.m"
                if ((libs__handle_options__Target_24 == (MR_Integer) 5))
#line 1599 "handle_options.m"
                  libs__handle_options__STATE_VARIABLE_Globals_1095_1095 = libs__handle_options__STATE_VARIABLE_Globals_1091_1091;
#line 1594 "handle_options.m"
                else
#line 1594 "handle_options.m"
                  if ((libs__handle_options__Target_24 == (MR_Integer) 1))
#line 1592 "handle_options.m"
                    {
#line 1593 "handle_options.m"
                      {
#line 1593 "handle_options.m"
                        libs__globals__set_option_4_p_0((MR_Integer) 461, libs__handle_options__V_1038_1038, libs__handle_options__STATE_VARIABLE_Globals_1091_1091, &libs__handle_options__STATE_VARIABLE_Globals_1095_1095);
                      }
#line 1592 "handle_options.m"
                    }
#line 1594 "handle_options.m"
                  else
#line 1594 "handle_options.m"
                    if ((libs__handle_options__Target_24 == (MR_Integer) 3))
#line 1597 "handle_options.m"
                      libs__handle_options__STATE_VARIABLE_Globals_1095_1095 = libs__handle_options__STATE_VARIABLE_Globals_1091_1091;
#line 1594 "handle_options.m"
                    else
#line 1598 "handle_options.m"
                      libs__handle_options__STATE_VARIABLE_Globals_1095_1095 = libs__handle_options__STATE_VARIABLE_Globals_1091_1091;
#line 1562 "handle_options.m"
          }
#line 1602 "handle_options.m"
        else
#line 1603 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1095_1095 = libs__handle_options__STATE_VARIABLE_Globals_1033_1033;
#line 1625 "handle_options.m"
        libs__handle_options__V_1098_1098 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 1625 "handle_options.m"
        {
#line 1625 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 453, libs__handle_options__V_1098_1098, libs__handle_options__STATE_VARIABLE_Globals_1095_1095, &libs__handle_options__STATE_VARIABLE_Globals_1099_1099);
        }
#line 1630 "handle_options.m"
        {
#line 1630 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 367, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_1099_1099, &libs__handle_options__STATE_VARIABLE_Globals_1103_1103);
        }
#line 1634 "handle_options.m"
        {
#line 1634 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 386, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_1103_1103, &libs__handle_options__STATE_VARIABLE_Globals_1107_1107);
        }
#line 1638 "handle_options.m"
        {
#line 1638 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 451, libs__handle_options__V_1098_1098, libs__handle_options__STATE_VARIABLE_Globals_1107_1107, &libs__handle_options__STATE_VARIABLE_Globals_1111_1111);
        }
#line 1642 "handle_options.m"
        {
#line 1642 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 266, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_1111_1111, &libs__handle_options__STATE_VARIABLE_Globals_1115_1115);
        }
#line 1643 "handle_options.m"
        {
#line 1643 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 267, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_1115_1115, &libs__handle_options__STATE_VARIABLE_Globals_1119_1119);
        }
#line 1647 "handle_options.m"
        {
#line 1647 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 321, libs__handle_options__V_1098_1098, libs__handle_options__STATE_VARIABLE_Globals_1119_1119, &libs__handle_options__STATE_VARIABLE_Globals_1123_1123);
        }
#line 1650 "handle_options.m"
        {
#line 1650 "handle_options.m"
          libs__handle_options__V_1125_1125 = libs__trace_params__trace_level_allows_tail_rec_1_f_0(libs__handle_options__TraceLevel_29);
        }
#line 1650 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__V_1125_1125 == (MR_Integer) 0);
#line 1652 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1651 "handle_options.m"
          {
#line 1651 "handle_options.m"
            {
#line 1651 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 125, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), libs__handle_options__STATE_VARIABLE_Globals_1123_1123, &libs__handle_options__STATE_VARIABLE_Globals_1128_1128);
            }
#line 1651 "handle_options.m"
          }
#line 1652 "handle_options.m"
        else
#line 1651 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1128_1128 = libs__handle_options__STATE_VARIABLE_Globals_1123_1123;
#line 1604 "handle_options.m"
      }
#line 1655 "handle_options.m"
    else
#line 1658 "handle_options.m"
      {
#line 1658 "handle_options.m"
        {
#line 1658 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 125, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1033_1033, &libs__handle_options__STATE_VARIABLE_Globals_1128_1128);
        }
#line 1658 "handle_options.m"
      }
#line 1661 "handle_options.m"
    {
#line 1661 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 191, (MR_Integer) 265, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_1128_1128, &libs__handle_options__STATE_VARIABLE_Globals_1137_1137);
    }
#line 1662 "handle_options.m"
    {
#line 1662 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1137_1137, (MR_Integer) 191, &libs__handle_options__ProfileDeep_106);
    }
#line 1687 "handle_options.m"
    if ((libs__handle_options__ProfileDeep_106 == (MR_Integer) 0))
#line 1688 "handle_options.m"
      {
#line 1688 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_1141_1141 = libs__handle_options__STATE_VARIABLE_Errors_883_883;
#line 1688 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1154_1154 = libs__handle_options__STATE_VARIABLE_Globals_1137_1137;
#line 1688 "handle_options.m"
      }
#line 1687 "handle_options.m"
    else
#line 1664 "handle_options.m"
      {
#line 1664 "handle_options.m"
        MR_Word libs__handle_options__LotsOfHOSpec_107;
#line 1664 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1146_1146;

#line 1666 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_95 == (MR_Integer) 0);
#line 1666 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1667 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__Target_24 == (MR_Integer) 0);
#line 1670 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1667 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Errors_1141_1141 = libs__handle_options__STATE_VARIABLE_Errors_883_883;
#line 1670 "handle_options.m"
        else
#line 1671 "handle_options.m"
          {
#line 1671 "handle_options.m"
            {
#line 1671 "handle_options.m"
              libs__handle_options__add_error_3_p_0((MR_String) "deep profiling is incompatible with high level code", libs__handle_options__STATE_VARIABLE_Errors_883_883, &libs__handle_options__STATE_VARIABLE_Errors_1141_1141);
            }
#line 1671 "handle_options.m"
          }
#line 1674 "handle_options.m"
        {
#line 1674 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 364, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1137_1137, &libs__handle_options__STATE_VARIABLE_Globals_1146_1146);
        }
#line 1676 "handle_options.m"
        {
#line 1676 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1146_1146, (MR_Integer) 206, &libs__handle_options__LotsOfHOSpec_107);
        }
#line 1684 "handle_options.m"
        if ((libs__handle_options__LotsOfHOSpec_107 == (MR_Integer) 0))
#line 1685 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1154_1154 = libs__handle_options__STATE_VARIABLE_Globals_1146_1146;
#line 1684 "handle_options.m"
        else
#line 1679 "handle_options.m"
          {
#line 1679 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1151_1151;

#line 1681 "handle_options.m"
            {
#line 1681 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 352, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_1146_1146, &libs__handle_options__STATE_VARIABLE_Globals_1151_1151);
            }
#line 1682 "handle_options.m"
            {
#line 1682 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 353, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[11]), libs__handle_options__STATE_VARIABLE_Globals_1151_1151, &libs__handle_options__STATE_VARIABLE_Globals_1154_1154);
            }
#line 1679 "handle_options.m"
          }
#line 1664 "handle_options.m"
      }
#line 1691 "handle_options.m"
    {
#line 1691 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1154_1154, (MR_Integer) 208, &libs__handle_options__RecordTermSizesAsWords_109);
    }
#line 1693 "handle_options.m"
    {
#line 1693 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1154_1154, (MR_Integer) 209, &libs__handle_options__RecordTermSizesAsCells_110);
    }
#line 1696 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsWords_109 == (MR_Integer) 1);
#line 1696 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1697 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsCells_110 == (MR_Integer) 1);
#line 1701 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1699 "handle_options.m"
      {
#line 1699 "handle_options.m"
        {
#line 1699 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "we can\'t record term size as both words and cells", libs__handle_options__STATE_VARIABLE_Errors_1141_1141, &libs__handle_options__STATE_VARIABLE_Errors_1159_1159);
        }
#line 1699 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1164_1164 = libs__handle_options__STATE_VARIABLE_Globals_1154_1154;
#line 1699 "handle_options.m"
      }
#line 1701 "handle_options.m"
    else
#line 1715 "handle_options.m"
      {
#line 1702 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsWords_109 == (MR_Integer) 1);
#line 1703 "handle_options.m"
        if (!(libs__handle_options__succeeded))
#line 1703 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsCells_110 == (MR_Integer) 1);
#line 1715 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1707 "handle_options.m"
          {
#line 1706 "handle_options.m"
            {
#line 1706 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 364, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1154_1154, &libs__handle_options__STATE_VARIABLE_Globals_1164_1164);
            }
#line 1712 "handle_options.m"
            if ((libs__handle_options__HighLevelCode_95 == (MR_Integer) 0))
#line 1713 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Errors_1159_1159 = libs__handle_options__STATE_VARIABLE_Errors_1141_1141;
#line 1712 "handle_options.m"
            else
#line 1709 "handle_options.m"
              {
#line 1710 "handle_options.m"
                {
#line 1710 "handle_options.m"
                  libs__handle_options__add_error_3_p_0((MR_String) "term size profiling is incompatible with high level code", libs__handle_options__STATE_VARIABLE_Errors_1141_1141, &libs__handle_options__STATE_VARIABLE_Errors_1159_1159);
                }
#line 1709 "handle_options.m"
              }
#line 1707 "handle_options.m"
          }
#line 1715 "handle_options.m"
        else
#line 1716 "handle_options.m"
          {
#line 1716 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Globals_1164_1164 = libs__handle_options__STATE_VARIABLE_Globals_1154_1154;
#line 1716 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_1159_1159 = libs__handle_options__STATE_VARIABLE_Errors_1141_1141;
#line 1716 "handle_options.m"
          }
#line 1715 "handle_options.m"
      }
#line 1721 "handle_options.m"
    if ((libs__handle_options__Target_24 == (MR_Integer) 0))
#line 1721 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_95 == (MR_Integer) 0);
#line 1721 "handle_options.m"
    else
#line 1721 "handle_options.m"
      if ((libs__handle_options__Target_24 == (MR_Integer) 1))
#line 1722 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 1721 "handle_options.m"
      else
#line 1721 "handle_options.m"
        libs__handle_options__succeeded = MR_FALSE;
#line 1721 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 1720 "handle_options.m"
      {
#line 1720 "handle_options.m"
        MR_Word libs__handle_options__V_1170_1170;

#line 1720 "handle_options.m"
        {
#line 1720 "handle_options.m"
          libs__handle_options__V_1170_1170 = libs__trace_params__given_trace_level_is_none_1_f_0(libs__handle_options__TraceLevel_29);
        }
#line 1720 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__V_1170_1170 == (MR_Integer) 1);
#line 1720 "handle_options.m"
      }
#line 1726 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1722 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_1172_1172 = libs__handle_options__STATE_VARIABLE_Errors_1159_1159;
#line 1726 "handle_options.m"
    else
#line 1727 "handle_options.m"
      {
#line 1727 "handle_options.m"
        {
#line 1727 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "debugging is available only in low level C grades", libs__handle_options__STATE_VARIABLE_Errors_1159_1159, &libs__handle_options__STATE_VARIABLE_Errors_1172_1172);
        }
#line 1727 "handle_options.m"
      }
#line 1733 "handle_options.m"
    {
#line 1733 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 212, (MR_Integer) 490, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1164_1164, &libs__handle_options__STATE_VARIABLE_Globals_1176_1176);
    }
#line 1735 "handle_options.m"
    {
#line 1735 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 336, (MR_Integer) 366, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1176_1176, &libs__handle_options__STATE_VARIABLE_Globals_1181_1181);
    }
#line 1752 "handle_options.m"
    if ((libs__handle_options__ProfileDeep_106 == (MR_Integer) 0))
#line 1749 "handle_options.m"
      {
#line 1750 "handle_options.m"
        {
#line 1750 "handle_options.m"
          libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 333, (MR_Integer) 366, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1181_1181, &libs__handle_options__STATE_VARIABLE_Globals_1186_1186);
        }
#line 1749 "handle_options.m"
      }
#line 1752 "handle_options.m"
    else
#line 1753 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1186_1186 = libs__handle_options__STATE_VARIABLE_Globals_1181_1181;
#line 1758 "handle_options.m"
    {
#line 1758 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 157, (MR_Integer) 388, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1186_1186, &libs__handle_options__STATE_VARIABLE_Globals_1191_1191);
    }
#line 1759 "handle_options.m"
    {
#line 1759 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 157, (MR_Integer) 348, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1191_1191, &libs__handle_options__STATE_VARIABLE_Globals_1196_1196);
    }
#line 1761 "handle_options.m"
    {
#line 1761 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 157, (MR_Integer) 349, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1196_1196, &libs__handle_options__STATE_VARIABLE_Globals_1201_1201);
    }
#line 1765 "handle_options.m"
    {
#line 1765 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 262, (MR_Integer) 265, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_1201_1201, &libs__handle_options__STATE_VARIABLE_Globals_1206_1206);
    }
#line 1768 "handle_options.m"
    {
#line 1768 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 266, (MR_Integer) 265, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_1206_1206, &libs__handle_options__STATE_VARIABLE_Globals_1211_1211);
    }
#line 1823 "handle_options.m"
    if ((libs__handle_options__GC_Method_25 == (MR_Integer) 6))
#line 1807 "handle_options.m"
      {
#line 1807 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1215_1215;
#line 1807 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1219_1219;
#line 1807 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1223_1223;
#line 1807 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1227_1227;
#line 1807 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1231_1231;
#line 1807 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1235_1235;
#line 1807 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1239_1239;
#line 1807 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1243_1243;
#line 1807 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1247_1247;
#line 1807 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1251_1251;

#line 1808 "handle_options.m"
        {
#line 1808 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 264, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_1211_1211, &libs__handle_options__STATE_VARIABLE_Globals_1215_1215);
        }
#line 1809 "handle_options.m"
        {
#line 1809 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 267, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_1215_1215, &libs__handle_options__STATE_VARIABLE_Globals_1219_1219);
        }
#line 1810 "handle_options.m"
        {
#line 1810 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 453, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1219_1219, &libs__handle_options__STATE_VARIABLE_Globals_1223_1223);
        }
#line 1811 "handle_options.m"
        {
#line 1811 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 473, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1223_1223, &libs__handle_options__STATE_VARIABLE_Globals_1227_1227);
        }
#line 1812 "handle_options.m"
        {
#line 1812 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 321, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1227_1227, &libs__handle_options__STATE_VARIABLE_Globals_1231_1231);
        }
#line 1813 "handle_options.m"
        {
#line 1813 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 451, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1231_1231, &libs__handle_options__STATE_VARIABLE_Globals_1235_1235);
        }
#line 1814 "handle_options.m"
        {
#line 1814 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 305, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1235_1235, &libs__handle_options__STATE_VARIABLE_Globals_1239_1239);
        }
#line 1816 "handle_options.m"
        {
#line 1816 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 306, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1239_1239, &libs__handle_options__STATE_VARIABLE_Globals_1243_1243);
        }
#line 1818 "handle_options.m"
        {
#line 1818 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 364, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1243_1243, &libs__handle_options__STATE_VARIABLE_Globals_1247_1247);
        }
#line 1820 "handle_options.m"
        {
#line 1820 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 359, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1247_1247, &libs__handle_options__STATE_VARIABLE_Globals_1251_1251);
        }
#line 1821 "handle_options.m"
        {
#line 1821 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 360, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1251_1251, &libs__handle_options__STATE_VARIABLE_Globals_1255_1255);
        }
#line 1807 "handle_options.m"
      }
#line 1823 "handle_options.m"
    else
#line 1823 "handle_options.m"
      if ((libs__handle_options__GC_Method_25 == (MR_Integer) 0))
#line 1824 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1255_1255 = libs__handle_options__STATE_VARIABLE_Globals_1211_1211;
#line 1823 "handle_options.m"
      else
#line 1823 "handle_options.m"
        if ((libs__handle_options__GC_Method_25 == (MR_Integer) 2))
#line 1826 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1255_1255 = libs__handle_options__STATE_VARIABLE_Globals_1211_1211;
#line 1823 "handle_options.m"
        else
#line 1823 "handle_options.m"
          if ((libs__handle_options__GC_Method_25 == (MR_Integer) 3))
#line 1827 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Globals_1255_1255 = libs__handle_options__STATE_VARIABLE_Globals_1211_1211;
#line 1823 "handle_options.m"
          else
#line 1823 "handle_options.m"
            if ((libs__handle_options__GC_Method_25 == (MR_Integer) 4))
#line 1828 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_1255_1255 = libs__handle_options__STATE_VARIABLE_Globals_1211_1211;
#line 1823 "handle_options.m"
            else
#line 1823 "handle_options.m"
              if ((libs__handle_options__GC_Method_25 == (MR_Integer) 5))
#line 1829 "handle_options.m"
                libs__handle_options__STATE_VARIABLE_Globals_1255_1255 = libs__handle_options__STATE_VARIABLE_Globals_1211_1211;
#line 1823 "handle_options.m"
              else
#line 1825 "handle_options.m"
                libs__handle_options__STATE_VARIABLE_Globals_1255_1255 = libs__handle_options__STATE_VARIABLE_Globals_1211_1211;
#line 1837 "handle_options.m"
    {
#line 1837 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1255_1255, (MR_Integer) 256, &libs__handle_options__PutNondetEnvOnHeap_111);
    }
#line 1851 "handle_options.m"
    {
#line 1851 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 265, (MR_Integer) 263, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_1255_1255, &libs__handle_options__STATE_VARIABLE_Globals_1265_1265);
    }
#line 1853 "handle_options.m"
    {
#line 1853 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 264, (MR_Integer) 263, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_1265_1265, &libs__handle_options__STATE_VARIABLE_Globals_1270_1270);
    }
#line 1860 "handle_options.m"
    {
#line 1860 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 265, (MR_Integer) 471, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1270_1270, &libs__handle_options__STATE_VARIABLE_Globals_1275_1275);
    }
#line 1862 "handle_options.m"
    {
#line 1862 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 264, (MR_Integer) 471, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1275_1275, &libs__handle_options__STATE_VARIABLE_Globals_1280_1280);
    }
#line 1866 "handle_options.m"
    {
#line 1866 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 263, (MR_Integer) 469, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1280_1280, &libs__handle_options__STATE_VARIABLE_Globals_1285_1285);
    }
#line 1872 "handle_options.m"
    {
#line 1872 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 267, (MR_Integer) 388, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1285_1285, &libs__handle_options__STATE_VARIABLE_Globals_1290_1290);
    }
#line 1874 "handle_options.m"
    {
#line 1874 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 267, (MR_Integer) 348, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1290_1290, &libs__handle_options__STATE_VARIABLE_Globals_1295_1295);
    }
#line 1883 "handle_options.m"
    {
#line 1883 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 214, (MR_Integer) 451, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1295_1295, &libs__handle_options__STATE_VARIABLE_Globals_1300_1300);
    }
#line 1890 "handle_options.m"
    {
#line 1890 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 224, (MR_Integer) 451, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1300_1300, &libs__handle_options__STATE_VARIABLE_Globals_1305_1305);
    }
#line 1899 "handle_options.m"
    {
#line 1899 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 216, (MR_Integer) 453, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1305_1305, &libs__handle_options__STATE_VARIABLE_Globals_1310_1310);
    }
#line 1908 "handle_options.m"
    {
#line 1908 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1310_1310, (MR_Integer) 281, &libs__handle_options__DisablePneg_112);
    }
#line 1910 "handle_options.m"
    {
#line 1910 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1310_1310, (MR_Integer) 282, &libs__handle_options__DisableCut_113);
    }
#line 1913 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelStackCopy_96 == (MR_Integer) 1);
#line 1913 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1914 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__DisablePneg_112 == (MR_Integer) 0);
#line 1918 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1916 "handle_options.m"
      {
#line 1916 "handle_options.m"
        {
#line 1916 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 283, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]), libs__handle_options__STATE_VARIABLE_Globals_1310_1310, &libs__handle_options__STATE_VARIABLE_Globals_1316_1316);
        }
#line 1916 "handle_options.m"
      }
#line 1918 "handle_options.m"
    else
#line 1916 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1316_1316 = libs__handle_options__STATE_VARIABLE_Globals_1310_1310;
#line 1922 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelStackCopy_96 == (MR_Integer) 1);
#line 1922 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1923 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__DisableCut_113 == (MR_Integer) 0);
#line 1927 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1925 "handle_options.m"
      {
#line 1925 "handle_options.m"
        {
#line 1925 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 284, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]), libs__handle_options__STATE_VARIABLE_Globals_1316_1316, &libs__handle_options__STATE_VARIABLE_Globals_1320_1320);
        }
#line 1925 "handle_options.m"
      }
#line 1927 "handle_options.m"
    else
#line 1925 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1320_1320 = libs__handle_options__STATE_VARIABLE_Globals_1316_1316;
#line 1933 "handle_options.m"
    {
#line 1933 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1320_1320, (MR_Integer) 140, &libs__handle_options__DumpHLDSStages_114);
    }
#line 1935 "handle_options.m"
    {
#line 1935 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1320_1320, (MR_Integer) 139, &libs__handle_options__DumpTraceStages_115);
    }
#line 1937 "handle_options.m"
    {
#line 1937 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1320_1320, (MR_Integer) 301, &libs__handle_options__ParallelLiveness_116);
    }
#line 1939 "handle_options.m"
    {
#line 1939 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1320_1320, (MR_Integer) 302, &libs__handle_options__ParallelCodeGen_117);
    }
#line 1942 "handle_options.m"
    {
#line 1942 "handle_options.m"
      MR_String libs__handle_options__V_118_118;
#line 1942 "handle_options.m"
      MR_Word libs__handle_options__V_119_119;

#line 1942 "handle_options.m"
      libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DumpHLDSStages_114)) == (MR_mktag((MR_Integer) 1)));
#line 1942 "handle_options.m"
      if (libs__handle_options__succeeded)
#line 1942 "handle_options.m"
        {
#line 1942 "handle_options.m"
          libs__handle_options__V_118_118 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpHLDSStages_114, (MR_Integer) 0)));
#line 1942 "handle_options.m"
          libs__handle_options__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpHLDSStages_114, (MR_Integer) 1)));
#line 1942 "handle_options.m"
        }
#line 1942 "handle_options.m"
    }
#line 1943 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 1943 "handle_options.m"
      {
#line 1943 "handle_options.m"
        {
#line 1943 "handle_options.m"
          MR_String libs__handle_options__V_120_120;
#line 1943 "handle_options.m"
          MR_Word libs__handle_options__V_121_121;

#line 1943 "handle_options.m"
          libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DumpTraceStages_115)) == (MR_mktag((MR_Integer) 1)));
#line 1943 "handle_options.m"
          if (libs__handle_options__succeeded)
#line 1943 "handle_options.m"
            {
#line 1943 "handle_options.m"
              libs__handle_options__V_120_120 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpTraceStages_115, (MR_Integer) 0)));
#line 1943 "handle_options.m"
              libs__handle_options__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpTraceStages_115, (MR_Integer) 1)));
#line 1943 "handle_options.m"
            }
#line 1943 "handle_options.m"
        }
#line 1943 "handle_options.m"
        if (!(libs__handle_options__succeeded))
#line 1943 "handle_options.m"
          {
#line 1944 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__Statistics_72 == (MR_Integer) 1);
#line 1943 "handle_options.m"
            if (!(libs__handle_options__succeeded))
#line 1943 "handle_options.m"
              {
#line 1945 "handle_options.m"
                libs__handle_options__succeeded = (libs__handle_options__ParallelLiveness_116 == (MR_Integer) 1);
#line 1943 "handle_options.m"
                if (!(libs__handle_options__succeeded))
#line 1946 "handle_options.m"
                  libs__handle_options__succeeded = (libs__handle_options__ParallelCodeGen_117 == (MR_Integer) 1);
#line 1943 "handle_options.m"
              }
#line 1943 "handle_options.m"
          }
#line 1943 "handle_options.m"
      }
#line 1950 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1949 "handle_options.m"
      {
#line 1949 "handle_options.m"
        {
#line 1949 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 300, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1320_1320, &libs__handle_options__STATE_VARIABLE_Globals_1328_1328);
        }
#line 1949 "handle_options.m"
      }
#line 1950 "handle_options.m"
    else
#line 1949 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1328_1328 = libs__handle_options__STATE_VARIABLE_Globals_1320_1320;
#line 1956 "handle_options.m"
    {
#line 1956 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 359, (MR_Integer) 360, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_1328_1328, &libs__handle_options__STATE_VARIABLE_Globals_1333_1333);
    }
#line 1962 "handle_options.m"
    {
#line 1962 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 348, (MR_Integer) 349, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_1333_1333, &libs__handle_options__STATE_VARIABLE_Globals_1338_1338);
    }
#line 1967 "handle_options.m"
    {
#line 1967 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 351, (MR_Integer) 325, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_1338_1338, &libs__handle_options__STATE_VARIABLE_Globals_1343_1343);
    }
#line 1969 "handle_options.m"
    {
#line 1969 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 351, (MR_Integer) 350, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_1343_1343, &libs__handle_options__STATE_VARIABLE_Globals_1348_1348);
    }
#line 1974 "handle_options.m"
    {
#line 1974 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 361, (MR_Integer) 367, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_1348_1348, &libs__handle_options__STATE_VARIABLE_Globals_1353_1353);
    }
#line 1976 "handle_options.m"
    {
#line 1976 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 361, (MR_Integer) 345, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_1353_1353, &libs__handle_options__STATE_VARIABLE_Globals_1358_1358);
    }
#line 1981 "handle_options.m"
    {
#line 1981 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 85, (MR_Integer) 350, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1358_1358, &libs__handle_options__STATE_VARIABLE_Globals_1363_1363);
    }
#line 1987 "handle_options.m"
    {
#line 1987 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 393, (MR_Integer) 394, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_1363_1363, &libs__handle_options__STATE_VARIABLE_Globals_1368_1368);
    }
#line 1992 "handle_options.m"
    {
#line 1992 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 92, (MR_Integer) 91, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_1368_1368, &libs__handle_options__STATE_VARIABLE_Globals_1373_1373);
    }
#line 1997 "handle_options.m"
    {
#line 1997 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 138, (MR_Integer) 91, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_1373_1373, &libs__handle_options__STATE_VARIABLE_Globals_1378_1378);
    }
#line 2001 "handle_options.m"
    {
#line 2001 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 89, (MR_Integer) 22, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1378_1378, &libs__handle_options__STATE_VARIABLE_Globals_1383_1383);
    }
#line 2004 "handle_options.m"
    {
#line 2004 "handle_options.m"
      libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1383_1383, (MR_Integer) 657, &libs__handle_options__FullArch_122);
    }
#line 2007 "handle_options.m"
    {
#line 2007 "handle_options.m"
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1383_1383, (MR_Integer) 551, &libs__handle_options__MaybeStdLibDir_123);
    }
#line 2025 "handle_options.m"
    if ((libs__handle_options__MaybeStdLibDir_123 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2026 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1399_1399 = libs__handle_options__STATE_VARIABLE_Globals_1383_1383;
#line 2025 "handle_options.m"
    else
#line 2010 "handle_options.m"
      {
#line 2010 "handle_options.m"
        MR_String libs__handle_options__StdLibDir_124 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeStdLibDir_123, (MR_Integer) 0)));
#line 2010 "handle_options.m"
        MR_Word libs__handle_options__OptionTable2_125;
#line 2010 "handle_options.m"
        MR_Word libs__handle_options__LinkLibDirs0_126;
#line 2010 "handle_options.m"
        MR_Word libs__handle_options__Rpath0_127;
#line 2010 "handle_options.m"
        MR_Word libs__handle_options__V_1387_1387;
#line 2010 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1388_1388;
#line 2010 "handle_options.m"
        MR_Word libs__handle_options__V_1391_1391;
#line 2010 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1392_1392;
#line 2010 "handle_options.m"
        MR_Word libs__handle_options__V_1393_1393;
#line 2010 "handle_options.m"
        MR_String libs__handle_options__V_1394_1394;
#line 2010 "handle_options.m"
        MR_Word libs__handle_options__V_1398_1398;
#line 2010 "handle_options.m"
        MR_Word libs__handle_options__V_1400_1400;
#line 2010 "handle_options.m"
        MR_String libs__handle_options__V_1401_1401;

#line 2011 "handle_options.m"
        {
#line 2011 "handle_options.m"
          libs__globals__get_options_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_1383_1383, &libs__handle_options__OptionTable2_125);
        }
#line 2012 "handle_options.m"
        {
#line 2012 "handle_options.m"
          libs__handle_options__V_1387_1387 = libs__options__option_table_add_mercury_library_directory_2_f_0(libs__handle_options__OptionTable2_125, libs__handle_options__StdLibDir_124);
        }
#line 2012 "handle_options.m"
        {
#line 2012 "handle_options.m"
          libs__globals__set_options_3_p_0(libs__handle_options__V_1387_1387, libs__handle_options__STATE_VARIABLE_Globals_1383_1383, &libs__handle_options__STATE_VARIABLE_Globals_1388_1388);
        }
#line 2016 "handle_options.m"
        {
#line 2016 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1388_1388, (MR_Integer) 541, &libs__handle_options__LinkLibDirs0_126);
        }
#line 2019 "handle_options.m"
        {
#line 2019 "handle_options.m"
          libs__handle_options__V_1394_1394 = mercury__dir__f_slash_2_f_0(libs__handle_options__StdLibDir_124, (MR_String) "lib");
        }
#line 2019 "handle_options.m"
        {
#line 2019 "handle_options.m"
          libs__handle_options__V_1393_1393 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2019 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1393_1393, 0) = ((MR_Box) (libs__handle_options__V_1394_1394));
#line 2019 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1393_1393, 1) = ((MR_Box) (libs__handle_options__LinkLibDirs0_126));
#line 2019 "handle_options.m"
        }
#line 2018 "handle_options.m"
        {
#line 2018 "handle_options.m"
          libs__handle_options__V_1391_1391 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2018 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1391_1391, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2018 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1391_1391, 1) = ((MR_Box) (libs__handle_options__V_1393_1393));
#line 2018 "handle_options.m"
        }
#line 2018 "handle_options.m"
        {
#line 2018 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 541, libs__handle_options__V_1391_1391, libs__handle_options__STATE_VARIABLE_Globals_1388_1388, &libs__handle_options__STATE_VARIABLE_Globals_1392_1392);
        }
#line 2021 "handle_options.m"
        {
#line 2021 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1392_1392, (MR_Integer) 542, &libs__handle_options__Rpath0_127);
        }
#line 2024 "handle_options.m"
        {
#line 2024 "handle_options.m"
          libs__handle_options__V_1401_1401 = mercury__dir__f_slash_2_f_0(libs__handle_options__StdLibDir_124, (MR_String) "lib");
        }
#line 2024 "handle_options.m"
        {
#line 2024 "handle_options.m"
          libs__handle_options__V_1400_1400 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2024 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1400_1400, 0) = ((MR_Box) (libs__handle_options__V_1401_1401));
#line 2024 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1400_1400, 1) = ((MR_Box) (libs__handle_options__Rpath0_127));
#line 2024 "handle_options.m"
        }
#line 2023 "handle_options.m"
        {
#line 2023 "handle_options.m"
          libs__handle_options__V_1398_1398 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2023 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1398_1398, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2023 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1398_1398, 1) = ((MR_Box) (libs__handle_options__V_1400_1400));
#line 2023 "handle_options.m"
        }
#line 2023 "handle_options.m"
        {
#line 2023 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 542, libs__handle_options__V_1398_1398, libs__handle_options__STATE_VARIABLE_Globals_1392_1392, &libs__handle_options__STATE_VARIABLE_Globals_1399_1399);
        }
#line 2010 "handle_options.m"
      }
#line 2030 "handle_options.m"
    {
#line 2030 "handle_options.m"
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1399_1399, (MR_Integer) 627, &libs__handle_options__MaybeConfDir_128);
    }
#line 2038 "handle_options.m"
    if ((libs__handle_options__MaybeConfDir_128 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2039 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1407_1407 = libs__handle_options__STATE_VARIABLE_Globals_1399_1399;
#line 2038 "handle_options.m"
    else
#line 2033 "handle_options.m"
      {
#line 2033 "handle_options.m"
        MR_String libs__handle_options__ConfDir_129 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeConfDir_128, (MR_Integer) 0)));
#line 2033 "handle_options.m"
        MR_Word libs__handle_options__CIncludeDirs0_130;
#line 2033 "handle_options.m"
        MR_Word libs__handle_options__V_1406_1406;
#line 2033 "handle_options.m"
        MR_Word libs__handle_options__V_1408_1408;
#line 2033 "handle_options.m"
        MR_String libs__handle_options__V_1409_1409;

#line 2034 "handle_options.m"
        {
#line 2034 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1399_1399, (MR_Integer) 488, &libs__handle_options__CIncludeDirs0_130);
        }
#line 2037 "handle_options.m"
        {
#line 2037 "handle_options.m"
          libs__handle_options__V_1409_1409 = mercury__dir__f_slash_2_f_0(libs__handle_options__ConfDir_129, (MR_String) "conf");
        }
#line 2037 "handle_options.m"
        {
#line 2037 "handle_options.m"
          libs__handle_options__V_1408_1408 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2037 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1408_1408, 0) = ((MR_Box) (libs__handle_options__V_1409_1409));
#line 2037 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1408_1408, 1) = ((MR_Box) (libs__handle_options__CIncludeDirs0_130));
#line 2037 "handle_options.m"
        }
#line 2036 "handle_options.m"
        {
#line 2036 "handle_options.m"
          libs__handle_options__V_1406_1406 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2036 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1406_1406, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2036 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1406_1406, 1) = ((MR_Box) (libs__handle_options__V_1408_1408));
#line 2036 "handle_options.m"
        }
#line 2036 "handle_options.m"
        {
#line 2036 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 488, libs__handle_options__V_1406_1406, libs__handle_options__STATE_VARIABLE_Globals_1399_1399, &libs__handle_options__STATE_VARIABLE_Globals_1407_1407);
        }
#line 2033 "handle_options.m"
      }
#line 2043 "handle_options.m"
    {
#line 2043 "handle_options.m"
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1407_1407, (MR_Integer) 637, &libs__handle_options__ConfigFile_131);
    }
#line 2046 "handle_options.m"
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__ConfigFile_131)) == (MR_mktag((MR_Integer) 1)));
#line 2046 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2046 "handle_options.m"
      {
#line 2046 "handle_options.m"
        libs__handle_options__V_1412_1412 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__ConfigFile_131, (MR_Integer) 0)));
#line 2046 "handle_options.m"
        libs__handle_options__succeeded = (strcmp(libs__handle_options__V_1412_1412, (MR_String) "") == 0);
#line 2046 "handle_options.m"
      }
#line 2055 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2051 "handle_options.m"
      if ((libs__handle_options__MaybeConfDir_128 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2052 "handle_options.m"
        {
#line 2053 "handle_options.m"
          {
#line 2053 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 637, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[202]), libs__handle_options__STATE_VARIABLE_Globals_1407_1407, &libs__handle_options__STATE_VARIABLE_Globals_1419_1419);
          }
#line 2052 "handle_options.m"
        }
#line 2051 "handle_options.m"
      else
#line 2048 "handle_options.m"
        {
#line 2048 "handle_options.m"
          MR_String libs__handle_options__ConfDir1_132 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeConfDir_128, (MR_Integer) 0)));
#line 2048 "handle_options.m"
          MR_Word libs__handle_options__V_1418_1418;
#line 2048 "handle_options.m"
          MR_Word libs__handle_options__V_1420_1420;
#line 2048 "handle_options.m"
          MR_String libs__handle_options__V_1421_1421;
#line 2048 "handle_options.m"
          MR_String libs__handle_options__V_1422_1422;

#line 2050 "handle_options.m"
          {
#line 2050 "handle_options.m"
            libs__handle_options__V_1422_1422 = mercury__dir__f_slash_2_f_0(libs__handle_options__ConfDir1_132, (MR_String) "conf");
          }
#line 2049 "handle_options.m"
          {
#line 2049 "handle_options.m"
            libs__handle_options__V_1421_1421 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1422_1422, (MR_String) "Mercury.config");
          }
#line 2049 "handle_options.m"
          {
#line 2049 "handle_options.m"
            libs__handle_options__V_1420_1420 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2049 "handle_options.m"
            MR_hl_field(MR_mktag(1), libs__handle_options__V_1420_1420, 0) = ((MR_Box) (libs__handle_options__V_1421_1421));
#line 2049 "handle_options.m"
          }
#line 2049 "handle_options.m"
          {
#line 2049 "handle_options.m"
            libs__handle_options__V_1418_1418 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2049 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1418_1418, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2049 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1418_1418, 1) = ((MR_Box) (libs__handle_options__V_1420_1420));
#line 2049 "handle_options.m"
          }
#line 2049 "handle_options.m"
          {
#line 2049 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 637, libs__handle_options__V_1418_1418, libs__handle_options__STATE_VARIABLE_Globals_1407_1407, &libs__handle_options__STATE_VARIABLE_Globals_1419_1419);
          }
#line 2048 "handle_options.m"
        }
#line 2055 "handle_options.m"
    else
#line 2053 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1419_1419 = libs__handle_options__STATE_VARIABLE_Globals_1407_1407;
#line 2062 "handle_options.m"
    {
#line 2062 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1419_1419, (MR_Integer) 545, &libs__handle_options__MercuryLibDirs_133);
    }
#line 2064 "handle_options.m"
    {
#line 2064 "handle_options.m"
      libs__handle_options__grade_directory_component_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_1419_1419, &libs__handle_options__GradeString_134);
    }
#line 2114 "handle_options.m"
    if ((libs__handle_options__MercuryLibDirs_133 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2115 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1476_1476 = libs__handle_options__STATE_VARIABLE_Globals_1419_1419;
#line 2114 "handle_options.m"
    else
#line 2066 "handle_options.m"
      {
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__TypeCtorInfo_1652_1652 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__ExtraLinkLibDirs_137;
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__LinkLibDirs1_139;
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__Rpath_140;
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__ExtraIncludeDirs_141;
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__CIncludeDirs_142;
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__ErlangIncludeDirs_143;
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__ExtraIntermodDirs_144;
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__IntermodDirs0_145;
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__ExtraInitDirs_146;
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__InitDirs1_147;
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__V_1426_1426;
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__V_1433_1433;
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1434_1434;
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__V_1435_1435;
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__V_1438_1438;
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1439_1439;
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__V_1440_1440;
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__V_1441_1441;
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__V_1450_1450;
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1451_1451;
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__V_1452_1452;
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__V_1455_1455;
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1456_1456;
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__V_1457_1457;
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__V_1458_1458;
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__V_1465_1465;
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1466_1466;
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__V_1467_1467;
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__V_1468_1468;
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__V_1475_1475;
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__V_1477_1477;

#line 2067 "handle_options.m"
        {
#line 2067 "handle_options.m"
          libs__handle_options__V_1426_1426 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2067 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1426_1426, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
#line 2067 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1426_1426, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_22_p_0_1));
#line 2067 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1426_1426, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2067 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1426_1426, 3) = ((MR_Box) (libs__handle_options__GradeString_134));
#line 2067 "handle_options.m"
        }
#line 2067 "handle_options.m"
        {
#line 2067 "handle_options.m"
          libs__handle_options__ExtraLinkLibDirs_137 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1652_1652, libs__handle_options__TypeCtorInfo_1652_1652, libs__handle_options__V_1426_1426, libs__handle_options__MercuryLibDirs_133);
        }
#line 2072 "handle_options.m"
        {
#line 2072 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1419_1419, (MR_Integer) 541, &libs__handle_options__LinkLibDirs1_139);
        }
#line 2075 "handle_options.m"
        {
#line 2075 "handle_options.m"
          libs__handle_options__V_1435_1435 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1652_1652, libs__handle_options__LinkLibDirs1_139, libs__handle_options__ExtraLinkLibDirs_137);
        }
#line 2074 "handle_options.m"
        {
#line 2074 "handle_options.m"
          libs__handle_options__V_1433_1433 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2074 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1433_1433, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2074 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1433_1433, 1) = ((MR_Box) (libs__handle_options__V_1435_1435));
#line 2074 "handle_options.m"
        }
#line 2074 "handle_options.m"
        {
#line 2074 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 541, libs__handle_options__V_1433_1433, libs__handle_options__STATE_VARIABLE_Globals_1419_1419, &libs__handle_options__STATE_VARIABLE_Globals_1434_1434);
        }
#line 2077 "handle_options.m"
        {
#line 2077 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1434_1434, (MR_Integer) 542, &libs__handle_options__Rpath_140);
        }
#line 2080 "handle_options.m"
        {
#line 2080 "handle_options.m"
          libs__handle_options__V_1440_1440 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1652_1652, libs__handle_options__Rpath_140, libs__handle_options__ExtraLinkLibDirs_137);
        }
#line 2079 "handle_options.m"
        {
#line 2079 "handle_options.m"
          libs__handle_options__V_1438_1438 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2079 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1438_1438, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2079 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1438_1438, 1) = ((MR_Box) (libs__handle_options__V_1440_1440));
#line 2079 "handle_options.m"
        }
#line 2079 "handle_options.m"
        {
#line 2079 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 542, libs__handle_options__V_1438_1438, libs__handle_options__STATE_VARIABLE_Globals_1434_1434, &libs__handle_options__STATE_VARIABLE_Globals_1439_1439);
        }
#line 2082 "handle_options.m"
        {
#line 2082 "handle_options.m"
          libs__handle_options__V_1441_1441 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2082 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1441_1441, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
#line 2082 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1441_1441, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_22_p_0_2));
#line 2082 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1441_1441, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2082 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1441_1441, 3) = ((MR_Box) (libs__handle_options__GradeString_134));
#line 2082 "handle_options.m"
        }
#line 2082 "handle_options.m"
        {
#line 2082 "handle_options.m"
          libs__handle_options__ExtraIncludeDirs_141 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1652_1652, libs__handle_options__TypeCtorInfo_1652_1652, libs__handle_options__V_1441_1441, libs__handle_options__MercuryLibDirs_133);
        }
#line 2086 "handle_options.m"
        {
#line 2086 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1439_1439, (MR_Integer) 488, &libs__handle_options__CIncludeDirs_142);
        }
#line 2089 "handle_options.m"
        {
#line 2089 "handle_options.m"
          libs__handle_options__V_1452_1452 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1652_1652, libs__handle_options__ExtraIncludeDirs_141, libs__handle_options__CIncludeDirs_142);
        }
#line 2088 "handle_options.m"
        {
#line 2088 "handle_options.m"
          libs__handle_options__V_1450_1450 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2088 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1450_1450, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2088 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1450_1450, 1) = ((MR_Box) (libs__handle_options__V_1452_1452));
#line 2088 "handle_options.m"
        }
#line 2088 "handle_options.m"
        {
#line 2088 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 488, libs__handle_options__V_1450_1450, libs__handle_options__STATE_VARIABLE_Globals_1439_1439, &libs__handle_options__STATE_VARIABLE_Globals_1451_1451);
        }
#line 2090 "handle_options.m"
        {
#line 2090 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1451_1451, (MR_Integer) 532, &libs__handle_options__ErlangIncludeDirs_143);
        }
#line 2093 "handle_options.m"
        {
#line 2093 "handle_options.m"
          libs__handle_options__V_1457_1457 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1652_1652, libs__handle_options__ExtraIncludeDirs_141, libs__handle_options__ErlangIncludeDirs_143);
        }
#line 2092 "handle_options.m"
        {
#line 2092 "handle_options.m"
          libs__handle_options__V_1455_1455 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2092 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1455_1455, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2092 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1455_1455, 1) = ((MR_Box) (libs__handle_options__V_1457_1457));
#line 2092 "handle_options.m"
        }
#line 2092 "handle_options.m"
        {
#line 2092 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 532, libs__handle_options__V_1455_1455, libs__handle_options__STATE_VARIABLE_Globals_1451_1451, &libs__handle_options__STATE_VARIABLE_Globals_1456_1456);
        }
#line 2095 "handle_options.m"
        {
#line 2095 "handle_options.m"
          libs__handle_options__V_1458_1458 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2095 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1458_1458, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
#line 2095 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1458_1458, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_22_p_0_3));
#line 2095 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1458_1458, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2095 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1458_1458, 3) = ((MR_Box) (libs__handle_options__GradeString_134));
#line 2095 "handle_options.m"
        }
#line 2095 "handle_options.m"
        {
#line 2095 "handle_options.m"
          libs__handle_options__ExtraIntermodDirs_144 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1652_1652, libs__handle_options__TypeCtorInfo_1652_1652, libs__handle_options__V_1458_1458, libs__handle_options__MercuryLibDirs_133);
        }
#line 2100 "handle_options.m"
        {
#line 2100 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1456_1456, (MR_Integer) 642, &libs__handle_options__IntermodDirs0_145);
        }
#line 2103 "handle_options.m"
        {
#line 2103 "handle_options.m"
          libs__handle_options__V_1467_1467 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1652_1652, libs__handle_options__ExtraIntermodDirs_144, libs__handle_options__IntermodDirs0_145);
        }
#line 2102 "handle_options.m"
        {
#line 2102 "handle_options.m"
          libs__handle_options__V_1465_1465 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2102 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1465_1465, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2102 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1465_1465, 1) = ((MR_Box) (libs__handle_options__V_1467_1467));
#line 2102 "handle_options.m"
        }
#line 2102 "handle_options.m"
        {
#line 2102 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 642, libs__handle_options__V_1465_1465, libs__handle_options__STATE_VARIABLE_Globals_1456_1456, &libs__handle_options__STATE_VARIABLE_Globals_1466_1466);
        }
#line 2105 "handle_options.m"
        {
#line 2105 "handle_options.m"
          libs__handle_options__V_1468_1468 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2105 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1468_1468, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
#line 2105 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1468_1468, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_22_p_0_4));
#line 2105 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1468_1468, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2105 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1468_1468, 3) = ((MR_Box) (libs__handle_options__GradeString_134));
#line 2105 "handle_options.m"
        }
#line 2105 "handle_options.m"
        {
#line 2105 "handle_options.m"
          libs__handle_options__ExtraInitDirs_146 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1652_1652, libs__handle_options__TypeCtorInfo_1652_1652, libs__handle_options__V_1468_1468, libs__handle_options__MercuryLibDirs_133);
        }
#line 2110 "handle_options.m"
        {
#line 2110 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1466_1466, (MR_Integer) 553, &libs__handle_options__InitDirs1_147);
        }
#line 2113 "handle_options.m"
        {
#line 2113 "handle_options.m"
          libs__handle_options__V_1477_1477 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1652_1652, libs__handle_options__InitDirs1_147, libs__handle_options__ExtraInitDirs_146);
        }
#line 2112 "handle_options.m"
        {
#line 2112 "handle_options.m"
          libs__handle_options__V_1475_1475 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2112 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1475_1475, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2112 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1475_1475, 1) = ((MR_Box) (libs__handle_options__V_1477_1477));
#line 2112 "handle_options.m"
        }
#line 2112 "handle_options.m"
        {
#line 2112 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 553, libs__handle_options__V_1475_1475, libs__handle_options__STATE_VARIABLE_Globals_1466_1466, &libs__handle_options__STATE_VARIABLE_Globals_1476_1476);
        }
#line 2066 "handle_options.m"
      }
#line 2121 "handle_options.m"
    {
#line 2121 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1476_1476, (MR_Integer) 643, &libs__handle_options__UseSearchDirs_148);
    }
#line 2131 "handle_options.m"
    if ((libs__handle_options__UseSearchDirs_148 == (MR_Integer) 0))
#line 2132 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1483_1483 = libs__handle_options__STATE_VARIABLE_Globals_1476_1476;
#line 2131 "handle_options.m"
    else
#line 2124 "handle_options.m"
      {
#line 2124 "handle_options.m"
        MR_Word libs__handle_options__IntermodDirs1_149;
#line 2124 "handle_options.m"
        MR_Word libs__handle_options__SearchDirs_150;
#line 2124 "handle_options.m"
        MR_Word libs__handle_options__V_1482_1482;
#line 2124 "handle_options.m"
        MR_Word libs__handle_options__V_1484_1484;

#line 2125 "handle_options.m"
        {
#line 2125 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1476_1476, (MR_Integer) 642, &libs__handle_options__IntermodDirs1_149);
        }
#line 2127 "handle_options.m"
        {
#line 2127 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1476_1476, (MR_Integer) 641, &libs__handle_options__SearchDirs_150);
        }
#line 2130 "handle_options.m"
        {
#line 2130 "handle_options.m"
          libs__handle_options__V_1484_1484 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__IntermodDirs1_149, libs__handle_options__SearchDirs_150);
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
#line 2129 "handle_options.m"
        {
#line 2129 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 642, libs__handle_options__V_1482_1482, libs__handle_options__STATE_VARIABLE_Globals_1476_1476, &libs__handle_options__STATE_VARIABLE_Globals_1483_1483);
        }
#line 2124 "handle_options.m"
      }
#line 2135 "handle_options.m"
    {
#line 2135 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1483_1483, (MR_Integer) 640, &libs__handle_options__UseGradeSubdirs_151);
    }
#line 2137 "handle_options.m"
    {
#line 2137 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1483_1483, (MR_Integer) 547, &libs__handle_options__SearchLibFilesDirs_152);
    }
#line 2139 "handle_options.m"
    {
#line 2139 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1483_1483, (MR_Integer) 642, &libs__handle_options__IntermodDirs2_153);
    }
#line 2141 "handle_options.m"
    {
#line 2141 "handle_options.m"
      libs__handle_options__ToGradeSubdir_154 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2141 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_154, 0) = ((MR_Box) (&libs__handle_options_scalar_common_5[2]));
#line 2141 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_154, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_22_p_0_5));
#line 2141 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_154, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2141 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_154, 3) = ((MR_Box) (libs__handle_options__FullArch_122));
#line 2141 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_154, 4) = ((MR_Box) (libs__handle_options__GradeString_134));
#line 2141 "handle_options.m"
    }
#line 13394 "libs.handle_options.c"
    if ((libs__handle_options__UseGradeSubdirs_151 == (MR_Integer) 0))
#line 13396 "libs.handle_options.c"
      {
#line 13398 "libs.handle_options.c"
        MR_Word libs__handle_options__TypeCtorInfo_1661_1661;
#line 13400 "libs.handle_options.c"
        MR_Word libs__handle_options__IntermodDirs3_158;
#line 13402 "libs.handle_options.c"
        MR_Word libs__handle_options__LinkLibDirs2_159;
#line 13404 "libs.handle_options.c"
        MR_Word libs__handle_options__InitDirs2_160;
#line 13406 "libs.handle_options.c"
        MR_Word libs__handle_options__V_1503_1503;

#line 2162 "handle_options.m"
        {
#line 2162 "handle_options.m"
          libs__handle_options__IntermodDirs3_158 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__SearchLibFilesDirs_152, libs__handle_options__IntermodDirs2_153);
        }
#line 2164 "handle_options.m"
        {
#line 2164 "handle_options.m"
          libs__handle_options__V_1503_1503 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2164 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1503_1503, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2164 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1503_1503, 1) = ((MR_Box) (libs__handle_options__IntermodDirs3_158));
#line 2164 "handle_options.m"
        }
#line 2164 "handle_options.m"
        {
#line 2164 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 642, libs__handle_options__V_1503_1503, libs__handle_options__STATE_VARIABLE_Globals_1483_1483, &libs__handle_options__STATE_VARIABLE_Globals_1504_1504);
        }
#line 2167 "handle_options.m"
        {
#line 2167 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1504_1504, (MR_Integer) 541, &libs__handle_options__LinkLibDirs2_159);
        }
#line 2169 "handle_options.m"
        {
#line 2169 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1504_1504, (MR_Integer) 553, &libs__handle_options__InitDirs2_160);
        }
#line 13439 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_1661_1661 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2187 "handle_options.m"
        {
#line 2187 "handle_options.m"
          libs__handle_options__LinkLibDirs_163 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1661_1661, libs__handle_options__SearchLibFilesDirs_152, libs__handle_options__LinkLibDirs2_159);
        }
#line 2188 "handle_options.m"
        {
#line 2188 "handle_options.m"
          libs__handle_options__InitDirs_166 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1661_1661, libs__handle_options__SearchLibFilesDirs_152, libs__handle_options__InitDirs2_160);
        }
#line 13451 "libs.handle_options.c"
      }
#line 13453 "libs.handle_options.c"
    else
#line 13455 "libs.handle_options.c"
      {
#line 13457 "libs.handle_options.c"
        MR_Word libs__handle_options__TypeCtorInfo_1654_1654;
#line 13459 "libs.handle_options.c"
        MR_Word libs__handle_options__TypeCtorInfo_1660_1660;
#line 13461 "libs.handle_options.c"
        MR_String libs__handle_options__GradeSubdir_156;
#line 13463 "libs.handle_options.c"
        MR_Word libs__handle_options__SearchLibFilesGradeSubdirs_157;
#line 13465 "libs.handle_options.c"
        MR_Word libs__handle_options__ToGradeLibDir_161;
#line 13467 "libs.handle_options.c"
        MR_Word libs__handle_options__SearchGradeLibDirs_162;
#line 13469 "libs.handle_options.c"
        MR_Word libs__handle_options__ToGradeInitDir_164;
#line 13471 "libs.handle_options.c"
        MR_Word libs__handle_options__SearchGradeInitDirs_165;
#line 13473 "libs.handle_options.c"
        MR_String libs__handle_options__V_1493_1493;
#line 13475 "libs.handle_options.c"
        MR_Word libs__handle_options__V_1495_1495;
#line 13477 "libs.handle_options.c"
        MR_Word libs__handle_options__V_1497_1497;
#line 13479 "libs.handle_options.c"
        MR_Word libs__handle_options__V_1498_1498;
#line 13481 "libs.handle_options.c"
        MR_Word libs__handle_options__V_1499_1499;
#line 13483 "libs.handle_options.c"
        MR_Word libs__handle_options__V_1500_1500;
#line 13485 "libs.handle_options.c"
        MR_String libs__handle_options__V_1501_1501;
#line 13487 "libs.handle_options.c"
        MR_Word libs__handle_options__IntermodDirs3_6069;
#line 13489 "libs.handle_options.c"
        MR_Word libs__handle_options__LinkLibDirs2_6070;
#line 13491 "libs.handle_options.c"
        MR_Word libs__handle_options__InitDirs2_6071;
#line 13493 "libs.handle_options.c"
        MR_Word libs__handle_options__V_6072_6072;

#line 2152 "handle_options.m"
        {
#line 2152 "handle_options.m"
          libs__handle_options__V_1493_1493 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", libs__handle_options__GradeString_134);
        }
#line 2152 "handle_options.m"
        {
#line 2152 "handle_options.m"
          libs__handle_options__GradeSubdir_156 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1493_1493, libs__handle_options__FullArch_122);
        }
#line 13506 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_1654_1654 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2156 "handle_options.m"
        {
#line 2156 "handle_options.m"
          libs__handle_options__SearchLibFilesGradeSubdirs_157 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1654_1654, libs__handle_options__TypeCtorInfo_1654_1654, libs__handle_options__ToGradeSubdir_154, libs__handle_options__SearchLibFilesDirs_152);
        }
#line 2158 "handle_options.m"
        {
#line 2158 "handle_options.m"
          libs__handle_options__V_1495_1495 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2158 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1495_1495, 0) = ((MR_Box) (libs__handle_options__GradeSubdir_156));
#line 2158 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1495_1495, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2158 "handle_options.m"
        }
#line 2159 "handle_options.m"
        {
#line 2159 "handle_options.m"
          libs__handle_options__V_1501_1501 = mercury__dir__this_directory_0_f_0();
        }
#line 2159 "handle_options.m"
        {
#line 2159 "handle_options.m"
          libs__handle_options__V_1500_1500 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2159 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1500_1500, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[4]));
#line 2159 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1500_1500, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_22_p_0_6));
#line 2159 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1500_1500, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2159 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1500_1500, 3) = ((MR_Box) (libs__handle_options__V_1501_1501));
#line 2159 "handle_options.m"
        }
#line 2159 "handle_options.m"
        {
#line 2159 "handle_options.m"
          libs__handle_options__V_1499_1499 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2159 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1499_1499, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[5]));
#line 2159 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1499_1499, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_22_p_0_7));
#line 2159 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1499_1499, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2159 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1499_1499, 3) = ((MR_Box) (libs__handle_options__V_1500_1500));
#line 2159 "handle_options.m"
        }
#line 2158 "handle_options.m"
        {
#line 2158 "handle_options.m"
          libs__handle_options__V_1498_1498 = mercury__list__filter_2_f_0(libs__handle_options__TypeCtorInfo_1654_1654, libs__handle_options__V_1499_1499, libs__handle_options__IntermodDirs2_153);
        }
#line 2158 "handle_options.m"
        {
#line 2158 "handle_options.m"
          libs__handle_options__V_1497_1497 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1654_1654, libs__handle_options__SearchLibFilesGradeSubdirs_157, libs__handle_options__V_1498_1498);
        }
#line 2158 "handle_options.m"
        {
#line 2158 "handle_options.m"
          libs__handle_options__IntermodDirs3_6069 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1654_1654, libs__handle_options__V_1495_1495, libs__handle_options__V_1497_1497);
        }
#line 2164 "handle_options.m"
        {
#line 2164 "handle_options.m"
          libs__handle_options__V_6072_6072 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2164 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_6072_6072, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2164 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_6072_6072, 1) = ((MR_Box) (libs__handle_options__IntermodDirs3_6069));
#line 2164 "handle_options.m"
        }
#line 2164 "handle_options.m"
        {
#line 2164 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 642, libs__handle_options__V_6072_6072, libs__handle_options__STATE_VARIABLE_Globals_1483_1483, &libs__handle_options__STATE_VARIABLE_Globals_1504_1504);
        }
#line 2167 "handle_options.m"
        {
#line 2167 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1504_1504, (MR_Integer) 541, &libs__handle_options__LinkLibDirs2_6070);
        }
#line 2169 "handle_options.m"
        {
#line 2169 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1504_1504, (MR_Integer) 553, &libs__handle_options__InitDirs2_6071);
        }
#line 2177 "handle_options.m"
        {
#line 2177 "handle_options.m"
          libs__handle_options__ToGradeLibDir_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2177 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_161, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[2]));
#line 2177 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_161, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_22_p_0_8));
#line 2177 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_161, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2177 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_161, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_154));
#line 2177 "handle_options.m"
        }
#line 13610 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_1660_1660 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2178 "handle_options.m"
        {
#line 2178 "handle_options.m"
          libs__handle_options__SearchGradeLibDirs_162 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1660_1660, libs__handle_options__TypeCtorInfo_1660_1660, libs__handle_options__ToGradeLibDir_161, libs__handle_options__SearchLibFilesDirs_152);
        }
#line 2179 "handle_options.m"
        {
#line 2179 "handle_options.m"
          libs__handle_options__LinkLibDirs_163 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1660_1660, libs__handle_options__SearchGradeLibDirs_162, libs__handle_options__LinkLibDirs2_6070);
        }
#line 2181 "handle_options.m"
        {
#line 2181 "handle_options.m"
          libs__handle_options__ToGradeInitDir_164 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2181 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_164, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[2]));
#line 2181 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_164, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_22_p_0_9));
#line 2181 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_164, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2181 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_164, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_154));
#line 2181 "handle_options.m"
        }
#line 2183 "handle_options.m"
        {
#line 2183 "handle_options.m"
          libs__handle_options__SearchGradeInitDirs_165 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1660_1660, libs__handle_options__TypeCtorInfo_1660_1660, libs__handle_options__ToGradeInitDir_164, libs__handle_options__SearchLibFilesDirs_152);
        }
#line 2184 "handle_options.m"
        {
#line 2184 "handle_options.m"
          libs__handle_options__InitDirs_166 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1660_1660, libs__handle_options__SearchGradeInitDirs_165, libs__handle_options__InitDirs2_6071);
        }
#line 13646 "libs.handle_options.c"
      }
#line 2190 "handle_options.m"
    {
#line 2190 "handle_options.m"
      libs__handle_options__V_1520_1520 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2190 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1520_1520, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2190 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1520_1520, 1) = ((MR_Box) (libs__handle_options__LinkLibDirs_163));
#line 2190 "handle_options.m"
    }
#line 2190 "handle_options.m"
    {
#line 2190 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 541, libs__handle_options__V_1520_1520, libs__handle_options__STATE_VARIABLE_Globals_1504_1504, &libs__handle_options__STATE_VARIABLE_Globals_1521_1521);
    }
#line 2192 "handle_options.m"
    {
#line 2192 "handle_options.m"
      libs__handle_options__V_1523_1523 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2192 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1523_1523, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2192 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1523_1523, 1) = ((MR_Box) (libs__handle_options__InitDirs_166));
#line 2192 "handle_options.m"
    }
#line 2192 "handle_options.m"
    {
#line 2192 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 553, libs__handle_options__V_1523_1523, libs__handle_options__STATE_VARIABLE_Globals_1521_1521, &libs__handle_options__STATE_VARIABLE_Globals_1524_1524);
    }
#line 2199 "handle_options.m"
    {
#line 2199 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1524_1524, (MR_Integer) 639, &libs__handle_options__UseSubdirs_167);
    }
#line 2207 "handle_options.m"
    if ((libs__handle_options__UseGradeSubdirs_151 == (MR_Integer) 0))
#line 2208 "handle_options.m"
      {
#line 13687 "libs.handle_options.c"
        libs__handle_options__succeeded = (libs__handle_options__UseSubdirs_167 == (MR_Integer) 1);
#line 2208 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 2208 "handle_options.m"
          {
#line 2211 "handle_options.m"
            libs__handle_options__ToMihsSubdir_168 = (MR_Word) &libs__handle_options_scalar_common_1[15];
#line 2212 "handle_options.m"
            libs__handle_options__ToHrlsSubdir_169 = (MR_Word) &libs__handle_options_scalar_common_1[16];
#line 2212 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 2208 "handle_options.m"
          }
#line 2208 "handle_options.m"
      }
#line 2207 "handle_options.m"
    else
#line 2202 "handle_options.m"
      {
#line 2203 "handle_options.m"
        {
#line 2203 "handle_options.m"
          libs__handle_options__ToMihsSubdir_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2203 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_168, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[2]));
#line 2203 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_168, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_22_p_0_12));
#line 2203 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_168, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2203 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_168, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_154));
#line 2203 "handle_options.m"
        }
#line 2205 "handle_options.m"
        {
#line 2205 "handle_options.m"
          libs__handle_options__ToHrlsSubdir_169 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2205 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_169, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[2]));
#line 2205 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_169, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_22_p_0_13));
#line 2205 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_169, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2205 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_169, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_154));
#line 2205 "handle_options.m"
        }
#line 2202 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2202 "handle_options.m"
      }
#line 2234 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2220 "handle_options.m"
      {
#line 2220 "handle_options.m"
        MR_Word libs__handle_options__TypeCtorInfo_1662_1662;
#line 2220 "handle_options.m"
        MR_Word libs__handle_options__CIncludeDirs1_170;
#line 2220 "handle_options.m"
        MR_String libs__handle_options__MihsSubdir_171;
#line 2220 "handle_options.m"
        MR_Word libs__handle_options__SearchLibMihsSubdirs_172;
#line 2220 "handle_options.m"
        MR_Word libs__handle_options__SubdirCIncludeDirs_173;
#line 2220 "handle_options.m"
        MR_Word libs__handle_options__ErlangIncludeDirs1_174;
#line 2220 "handle_options.m"
        MR_String libs__handle_options__HrlsSubdir_175;
#line 2220 "handle_options.m"
        MR_Word libs__handle_options__SubdirErlangIncludeDirs_176;
#line 2220 "handle_options.m"
        MR_String libs__handle_options__V_1549_1549;
#line 2220 "handle_options.m"
        MR_String libs__handle_options__V_1550_1550;
#line 2220 "handle_options.m"
        MR_Word libs__handle_options__V_1551_1551;
#line 2220 "handle_options.m"
        MR_Word libs__handle_options__V_1552_1552;
#line 2220 "handle_options.m"
        MR_Word libs__handle_options__V_1554_1554;
#line 2220 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1555_1555;
#line 2220 "handle_options.m"
        MR_String libs__handle_options__V_1557_1557;
#line 2220 "handle_options.m"
        MR_Word libs__handle_options__V_1559_1559;
#line 2221 "handle_options.m"
        MR_Box MR_CALL (* libs__handle_options__func_11)(MR_Box, MR_Box);
#line 2221 "handle_options.m"
        MR_Box libs__handle_options__conv12_MihsSubdir_171;
#line 2230 "handle_options.m"
        MR_Box MR_CALL (* libs__handle_options__func_13)(MR_Box, MR_Box);
#line 2230 "handle_options.m"
        MR_Box libs__handle_options__conv14_HrlsSubdir_175;

#line 2219 "handle_options.m"
        {
#line 2219 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1524_1524, (MR_Integer) 488, &libs__handle_options__CIncludeDirs1_170);
        }
#line 2221 "handle_options.m"
        {
#line 2221 "handle_options.m"
          libs__handle_options__V_1549_1549 = mercury__dir__this_directory_0_f_0();
        }
#line 2221 "handle_options.m"
        libs__handle_options__func_11 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_168, (MR_Integer) 1)));
#line 2221 "handle_options.m"
        {
#line 2221 "handle_options.m"
          libs__handle_options__conv12_MihsSubdir_171 = libs__handle_options__func_11(((MR_Box) libs__handle_options__ToMihsSubdir_168), ((MR_Box) (libs__handle_options__V_1549_1549)));
        }
#line 2221 "handle_options.m"
        libs__handle_options__MihsSubdir_171 = ((MR_String) libs__handle_options__conv12_MihsSubdir_171);
#line 13803 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_1662_1662 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2222 "handle_options.m"
        {
#line 2222 "handle_options.m"
          libs__handle_options__SearchLibMihsSubdirs_172 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1662_1662, libs__handle_options__TypeCtorInfo_1662_1662, libs__handle_options__ToMihsSubdir_168, libs__handle_options__SearchLibFilesDirs_152);
        }
#line 2223 "handle_options.m"
        {
#line 2223 "handle_options.m"
          libs__handle_options__V_1550_1550 = mercury__dir__this_directory_0_f_0();
        }
#line 2223 "handle_options.m"
        {
#line 2223 "handle_options.m"
          libs__handle_options__V_1552_1552 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1662_1662, libs__handle_options__SearchLibMihsSubdirs_172, libs__handle_options__CIncludeDirs1_170);
        }
#line 2223 "handle_options.m"
        {
#line 2223 "handle_options.m"
          libs__handle_options__V_1551_1551 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2223 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1551_1551, 0) = ((MR_Box) (libs__handle_options__MihsSubdir_171));
#line 2223 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1551_1551, 1) = ((MR_Box) (libs__handle_options__V_1552_1552));
#line 2223 "handle_options.m"
        }
#line 2223 "handle_options.m"
        {
#line 2223 "handle_options.m"
          libs__handle_options__SubdirCIncludeDirs_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2223 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirCIncludeDirs_173, 0) = ((MR_Box) (libs__handle_options__V_1550_1550));
#line 2223 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirCIncludeDirs_173, 1) = ((MR_Box) (libs__handle_options__V_1551_1551));
#line 2223 "handle_options.m"
        }
#line 2225 "handle_options.m"
        {
#line 2225 "handle_options.m"
          libs__handle_options__V_1554_1554 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2225 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1554_1554, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2225 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1554_1554, 1) = ((MR_Box) (libs__handle_options__SubdirCIncludeDirs_173));
#line 2225 "handle_options.m"
        }
#line 2225 "handle_options.m"
        {
#line 2225 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 488, libs__handle_options__V_1554_1554, libs__handle_options__STATE_VARIABLE_Globals_1524_1524, &libs__handle_options__STATE_VARIABLE_Globals_1555_1555);
        }
#line 2228 "handle_options.m"
        {
#line 2228 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1555_1555, (MR_Integer) 532, &libs__handle_options__ErlangIncludeDirs1_174);
        }
#line 2230 "handle_options.m"
        {
#line 2230 "handle_options.m"
          libs__handle_options__V_1557_1557 = mercury__dir__this_directory_0_f_0();
        }
#line 2230 "handle_options.m"
        libs__handle_options__func_13 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_169, (MR_Integer) 1)));
#line 2230 "handle_options.m"
        {
#line 2230 "handle_options.m"
          libs__handle_options__conv14_HrlsSubdir_175 = libs__handle_options__func_13(((MR_Box) libs__handle_options__ToHrlsSubdir_169), ((MR_Box) (libs__handle_options__V_1557_1557)));
        }
#line 2230 "handle_options.m"
        libs__handle_options__HrlsSubdir_175 = ((MR_String) libs__handle_options__conv14_HrlsSubdir_175);
#line 2231 "handle_options.m"
        {
#line 2231 "handle_options.m"
          libs__handle_options__SubdirErlangIncludeDirs_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2231 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirErlangIncludeDirs_176, 0) = ((MR_Box) (libs__handle_options__HrlsSubdir_175));
#line 2231 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirErlangIncludeDirs_176, 1) = ((MR_Box) (libs__handle_options__ErlangIncludeDirs1_174));
#line 2231 "handle_options.m"
        }
#line 2232 "handle_options.m"
        {
#line 2232 "handle_options.m"
          libs__handle_options__V_1559_1559 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2232 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1559_1559, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2232 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1559_1559, 1) = ((MR_Box) (libs__handle_options__SubdirErlangIncludeDirs_176));
#line 2232 "handle_options.m"
        }
#line 2232 "handle_options.m"
        {
#line 2232 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 532, libs__handle_options__V_1559_1559, libs__handle_options__STATE_VARIABLE_Globals_1555_1555, &libs__handle_options__STATE_VARIABLE_Globals_1560_1560);
        }
#line 2220 "handle_options.m"
      }
#line 2234 "handle_options.m"
    else
#line 2232 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1560_1560 = libs__handle_options__STATE_VARIABLE_Globals_1524_1524;
#line 2240 "handle_options.m"
    {
#line 2240 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 327, (MR_Integer) 12, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1560_1560, &libs__handle_options__STATE_VARIABLE_Globals_1564_1564);
    }
#line 1840 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_95 == (MR_Integer) 1);
#line 1840 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1840 "handle_options.m"
      {
#line 1841 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__GC_Method_25 == (MR_Integer) 6);
#line 1840 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1842 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__PutNondetEnvOnHeap_111 == (MR_Integer) 1);
#line 1840 "handle_options.m"
      }
#line 13924 "libs.handle_options.c"
    if (libs__handle_options__succeeded)
#line 13926 "libs.handle_options.c"
      {
#line 13928 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Errors_1259_1259;

#line 1844 "handle_options.m"
        {
#line 1844 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "--gc accurate is incompatible with --put-nondet-env-on-heap", libs__handle_options__STATE_VARIABLE_Errors_1172_1172, &libs__handle_options__STATE_VARIABLE_Errors_1259_1259);
        }
#line 2253 "handle_options.m"
        {
#line 2253 "handle_options.m"
          libs__handle_options__option_requires_7_p_0((MR_Integer) 25, (MR_Integer) 454, libs__handle_options__V_264_264, (MR_String) "--warn-non-tail-recursion requires --optimize-tailcalls", libs__handle_options__STATE_VARIABLE_Globals_1564_1564, libs__handle_options__STATE_VARIABLE_Errors_1259_1259, &libs__handle_options__STATE_VARIABLE_Errors_1576_1576);
        }
#line 13941 "libs.handle_options.c"
      }
#line 13943 "libs.handle_options.c"
    else
#line 2251 "handle_options.m"
      if ((libs__handle_options__HighLevelCode_95 == (MR_Integer) 0))
#line 2246 "handle_options.m"
        {
#line 2247 "handle_options.m"
          {
#line 2247 "handle_options.m"
            libs__handle_options__option_requires_7_p_0((MR_Integer) 25, (MR_Integer) 465, libs__handle_options__V_491_491, (MR_String) "--warn-non-tail-recursion is incompatible with --pessimize-tailcalls", libs__handle_options__STATE_VARIABLE_Globals_1564_1564, libs__handle_options__STATE_VARIABLE_Errors_1172_1172, &libs__handle_options__STATE_VARIABLE_Errors_1576_1576);
          }
#line 2246 "handle_options.m"
        }
#line 2251 "handle_options.m"
      else
#line 2252 "handle_options.m"
        {
#line 2253 "handle_options.m"
          {
#line 2253 "handle_options.m"
            libs__handle_options__option_requires_7_p_0((MR_Integer) 25, (MR_Integer) 454, libs__handle_options__V_264_264, (MR_String) "--warn-non-tail-recursion requires --optimize-tailcalls", libs__handle_options__STATE_VARIABLE_Globals_1564_1564, libs__handle_options__STATE_VARIABLE_Errors_1172_1172, &libs__handle_options__STATE_VARIABLE_Errors_1576_1576);
          }
#line 2252 "handle_options.m"
        }
#line 2257 "handle_options.m"
    {
#line 2257 "handle_options.m"
      libs__handle_options__option_requires_7_p_0((MR_Integer) 25, (MR_Integer) 96, libs__handle_options__V_491_491, (MR_String) "--warn-non-tail-recursion is incompatible with --errorcheck-only", libs__handle_options__STATE_VARIABLE_Globals_1564_1564, libs__handle_options__STATE_VARIABLE_Errors_1576_1576, &libs__handle_options__STATE_VARIABLE_Errors_1584_1584);
    }
#line 2266 "handle_options.m"
    if ((libs__handle_options__Target_24 == (MR_Integer) 0))
#line 2264 "handle_options.m"
      {
#line 2265 "handle_options.m"
        libs__handle_options__BackendForeignLanguages_177 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[203]);
#line 2265 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1610_1610 = libs__handle_options__STATE_VARIABLE_Globals_1564_1564;
#line 2264 "handle_options.m"
      }
#line 2266 "handle_options.m"
    else
#line 2266 "handle_options.m"
      if ((libs__handle_options__Target_24 == (MR_Integer) 2))
#line 2271 "handle_options.m"
        {
#line 2272 "handle_options.m"
          libs__handle_options__BackendForeignLanguages_177 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[9]);
#line 2272 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1610_1610 = libs__handle_options__STATE_VARIABLE_Globals_1564_1564;
#line 2271 "handle_options.m"
        }
#line 2266 "handle_options.m"
      else
#line 2266 "handle_options.m"
        if ((libs__handle_options__Target_24 == (MR_Integer) 5))
#line 2280 "handle_options.m"
          {
#line 2280 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1592_1592;

#line 2281 "handle_options.m"
            libs__handle_options__BackendForeignLanguages_177 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[204]);
#line 2282 "handle_options.m"
            {
#line 2282 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 364, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1564_1564, &libs__handle_options__STATE_VARIABLE_Globals_1592_1592);
            }
#line 2283 "handle_options.m"
            {
#line 2283 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 296, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1592_1592, &libs__handle_options__STATE_VARIABLE_Globals_1610_1610);
            }
#line 2280 "handle_options.m"
          }
#line 2266 "handle_options.m"
        else
#line 2266 "handle_options.m"
          if ((libs__handle_options__Target_24 == (MR_Integer) 1))
#line 2267 "handle_options.m"
            {
#line 2268 "handle_options.m"
              libs__handle_options__BackendForeignLanguages_177 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[10]);
#line 2269 "handle_options.m"
              {
#line 2269 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 364, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1564_1564, &libs__handle_options__STATE_VARIABLE_Globals_1610_1610);
              }
#line 2267 "handle_options.m"
            }
#line 2266 "handle_options.m"
          else
#line 2266 "handle_options.m"
            if ((libs__handle_options__Target_24 == (MR_Integer) 3))
#line 2274 "handle_options.m"
              {
#line 2275 "handle_options.m"
                libs__handle_options__BackendForeignLanguages_177 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[205]);
#line 2275 "handle_options.m"
                libs__handle_options__STATE_VARIABLE_Globals_1610_1610 = libs__handle_options__STATE_VARIABLE_Globals_1564_1564;
#line 2274 "handle_options.m"
              }
#line 2266 "handle_options.m"
            else
#line 2277 "handle_options.m"
              {
#line 2278 "handle_options.m"
                libs__handle_options__BackendForeignLanguages_177 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[203]);
#line 2278 "handle_options.m"
                libs__handle_options__STATE_VARIABLE_Globals_1610_1610 = libs__handle_options__STATE_VARIABLE_Globals_1564_1564;
#line 2277 "handle_options.m"
              }
#line 2287 "handle_options.m"
    {
#line 2287 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1610_1610, (MR_Integer) 261, &libs__handle_options__CurrentBackendForeignLanguage_178);
    }
#line 2293 "handle_options.m"
    if ((libs__handle_options__CurrentBackendForeignLanguage_178 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2290 "handle_options.m"
      {
#line 2290 "handle_options.m"
        MR_Word libs__handle_options__V_1616_1616;

#line 2291 "handle_options.m"
        {
#line 2291 "handle_options.m"
          libs__handle_options__V_1616_1616 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2291 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1616_1616, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2291 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1616_1616, 1) = ((MR_Box) (libs__handle_options__BackendForeignLanguages_177));
#line 2291 "handle_options.m"
        }
#line 2291 "handle_options.m"
        {
#line 2291 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 261, libs__handle_options__V_1616_1616, libs__handle_options__STATE_VARIABLE_Globals_1610_1610, &libs__handle_options__STATE_VARIABLE_Globals_1617_1617);
        }
#line 2290 "handle_options.m"
      }
#line 2293 "handle_options.m"
    else
#line 2294 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1617_1617 = libs__handle_options__STATE_VARIABLE_Globals_1610_1610;
#line 2297 "handle_options.m"
    {
#line 2297 "handle_options.m"
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1617_1617, (MR_Integer) 315, &libs__handle_options__CompareSpec_181);
    }
#line 2299 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__CompareSpec_181 < (MR_Integer) 0);
#line 2311 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2307 "handle_options.m"
      if ((libs__handle_options__HighLevelCode_95 == (MR_Integer) 0))
#line 2305 "handle_options.m"
        {
#line 2306 "handle_options.m"
          {
#line 2306 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 315, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[12]), libs__handle_options__STATE_VARIABLE_Globals_1617_1617, &libs__handle_options__STATE_VARIABLE_Globals_1626_1626);
          }
#line 2305 "handle_options.m"
        }
#line 2307 "handle_options.m"
      else
#line 2308 "handle_options.m"
        {
#line 2309 "handle_options.m"
          {
#line 2309 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 315, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[13]), libs__handle_options__STATE_VARIABLE_Globals_1617_1617, &libs__handle_options__STATE_VARIABLE_Globals_1626_1626);
          }
#line 2308 "handle_options.m"
        }
#line 2311 "handle_options.m"
    else
#line 2309 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1626_1626 = libs__handle_options__STATE_VARIABLE_Globals_1617_1617;
#line 2318 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__Target_24 == (MR_Integer) 0);
#line 2318 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2318 "handle_options.m"
      {
#line 2324 "handle_options.m"
        if ((libs__handle_options__TagsMethod_51 == (MR_Integer) 2))
#line 2324 "handle_options.m"
          libs__handle_options__succeeded = MR_TRUE;
#line 2324 "handle_options.m"
        else
#line 2324 "handle_options.m"
          if ((libs__handle_options__TagsMethod_51 == (MR_Integer) 1))
#line 2323 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 2324 "handle_options.m"
          else
#line 2324 "handle_options.m"
            libs__handle_options__succeeded = MR_FALSE;
#line 2318 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 2318 "handle_options.m"
          {
#line 2326 "handle_options.m"
            libs__handle_options__V_1628_1628 = (MR_Integer) 2;
#line 2326 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__NumTagBits_50 >= libs__handle_options__V_1628_1628);
#line 2318 "handle_options.m"
          }
#line 2318 "handle_options.m"
      }
#line 2330 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2328 "handle_options.m"
      {
#line 2328 "handle_options.m"
        {
#line 2328 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 268, libs__handle_options__V_264_264, libs__handle_options__STATE_VARIABLE_Globals_1626_1626, &libs__handle_options__STATE_VARIABLE_Globals_1631_1631);
        }
#line 2328 "handle_options.m"
      }
#line 2330 "handle_options.m"
    else
#line 2331 "handle_options.m"
      {
#line 2331 "handle_options.m"
        {
#line 2331 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 268, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_1626_1626, &libs__handle_options__STATE_VARIABLE_Globals_1631_1631);
        }
#line 2331 "handle_options.m"
      }
#line 2338 "handle_options.m"
    if ((libs__handle_options__HighLevelCode_95 == (MR_Integer) 0))
#line 2337 "handle_options.m"
      {
#line 2337 "handle_options.m"
        libs__handle_options__postprocess_options_lowlevel_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_1631_1631, &libs__handle_options__STATE_VARIABLE_Globals_1637_1637);
      }
#line 2338 "handle_options.m"
    else
#line 2339 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1637_1637 = libs__handle_options__STATE_VARIABLE_Globals_1631_1631;
#line 2341 "handle_options.m"
    {
#line 2341 "handle_options.m"
      libs__handle_options__postprocess_options_libgrades_4_p_0(libs__handle_options__STATE_VARIABLE_Globals_1637_1637, libs__handle_options__STATE_VARIABLE_Globals_184, libs__handle_options__STATE_VARIABLE_Errors_1584_1584, libs__handle_options__STATE_VARIABLE_Errors_183);
    }
#line 2342 "handle_options.m"
    {
#line 2342 "handle_options.m"
      libs__globals__globals_init_mutables_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_184);
#line 2342 "handle_options.m"
      return;
    }
#line 623 "handle_options.m"
  }
#line 610 "handle_options.m"
}

#line 601 "handle_options.m"
static void MR_CALL 
libs__handle_options__add_error_3_p_0(
#line 601 "handle_options.m"
  MR_String libs__handle_options__Error_4,
#line 601 "handle_options.m"
  MR_Word libs__handle_options__Errors0_5,
#line 601 "handle_options.m"
  MR_Word * libs__handle_options__Errors_6)
#line 601 "handle_options.m"
{
#line 603 "handle_options.m"
  {
#line 603 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 603 "handle_options.m"
    MR_Word libs__handle_options__V_7_7;

#line 606 "handle_options.m"
    {
#line 606 "handle_options.m"
      libs__handle_options__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 606 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_7_7, 0) = ((MR_Box) (libs__handle_options__Error_4));
#line 606 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_7_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 606 "handle_options.m"
    }
#line 606 "handle_options.m"
    {
#line 606 "handle_options.m"
      mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__Errors0_5, libs__handle_options__V_7_7, libs__handle_options__Errors_6);
#line 606 "handle_options.m"
      return;
    }
#line 603 "handle_options.m"
  }
#line 601 "handle_options.m"
}

#line 526 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__check_option_values_22_p_0_1(
#line 526 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 526 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 526 "handle_options.m"
{
#line 526 "handle_options.m"
  {
#line 526 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 526 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 526 "handle_options.m"
    {
#line 526 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__check_option_values__526__1_1_p_0(((MR_Char) (MR_Word) libs__handle_options__wrapper_arg_1));
    }
#line 526 "handle_options.m"
    return libs__handle_options__succeeded;
#line 526 "handle_options.m"
  }
#line 526 "handle_options.m"
}

#line 236 "handle_options.m"
static void MR_CALL 
libs__handle_options__check_option_values_22_p_0(
#line 236 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_OptionTable_0_118,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_OptionTable_119,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__Target_24,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__GC_Method_25,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__TagsMethod_26,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__TermNorm_27,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__Term2Norm_28,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__TraceLevel_29,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__TraceSuppress_30,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__SSTraceLevel_31,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__MaybeThreadSafe_32,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__C_CompilerType_33,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__CSharp_CompilerType_34,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__ReuseStrategy_35,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__MaybeILVersion_36,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__MaybeFeedbackInfo_37,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__HostEnvType_38,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__TargetEnvType_39,
#line 236 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_120,
#line 236 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_121)
#line 236 "handle_options.m"
{
#line 249 "handle_options.m"
  {
#line 249 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_289_289 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_290_290 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__Target0_42;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__GC_Method0_45;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__TagsMethod0_48;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__PercentFull_51;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__TermNorm0_53;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__Term2Norm0_56;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__ForceDisableTracing_59;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__Suppress_67;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__ForceDisableSSDB_70;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__MaybeThreadSafeOption_76;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__DumpAliasOption_79;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__C_CompilerType0_83;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__CSharp_CompilerType0_86;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__ReuseConstraint0_89;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__ReuseConstraintArg0_90;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__DotNetLibVersionOpt_94;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__FeedbackFile0_106;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__HostEnvType0_112;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__TargetEnvType0_115;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_126_126;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_131_131;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_138_138;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_145_145;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_152_152;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_159_159;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_170_170;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_181_181;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_187_187;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_190_190;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_OptionTable_194_194;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_196_196;
#line 249 "handle_options.m"
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_198_198;
#line 249 "handle_options.m"
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_199_199;
#line 249 "handle_options.m"
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_202_202;
#line 249 "handle_options.m"
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_206_206;
#line 249 "handle_options.m"
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_230_230;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__V_233_233;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_OptionTable_234_234;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_237_237;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_242_242;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_248_248;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_259_259;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_272_272;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_275_275;
#line 249 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_280_280;
#line 250 "handle_options.m"
    MR_Box libs__handle_options__conv0_Target0_42;
#line 256 "handle_options.m"
    MR_Word libs__handle_options__TargetPrime_44;
#line 252 "handle_options.m"
    MR_String libs__handle_options__TargetStr_43;
#line 264 "handle_options.m"
    MR_Box libs__handle_options__conv1_GC_Method0_45;
#line 270 "handle_options.m"
    MR_Word libs__handle_options__GC_MethodPrime_47;
#line 266 "handle_options.m"
    MR_String libs__handle_options__GC_MethodStr_46;
#line 278 "handle_options.m"
    MR_Box libs__handle_options__conv2_TagsMethod0_48;
#line 284 "handle_options.m"
    MR_Word libs__handle_options__TagsMethodPrime_50;
#line 280 "handle_options.m"
    MR_String libs__handle_options__TagsMethodStr_49;
#line 290 "handle_options.m"
    MR_Box libs__handle_options__conv3_PercentFull_51;
#line 292 "handle_options.m"
    MR_Integer libs__handle_options__Percent_52;
#line 292 "handle_options.m"
    MR_Integer libs__handle_options__V_142_142;
#line 292 "handle_options.m"
    MR_Integer libs__handle_options__V_143_143;
#line 303 "handle_options.m"
    MR_Box libs__handle_options__conv4_TermNorm0_53;
#line 309 "handle_options.m"
    MR_Word libs__handle_options__TermNormPrime_55;
#line 305 "handle_options.m"
    MR_String libs__handle_options__TermNormStr_54;
#line 316 "handle_options.m"
    MR_Box libs__handle_options__conv5_Term2Norm0_56;
#line 322 "handle_options.m"
    MR_Word libs__handle_options__Term2NormPrime_58;
#line 318 "handle_options.m"
    MR_String libs__handle_options__Term2NormStr_57;
#line 329 "handle_options.m"
    MR_Box libs__handle_options__conv6_ForceDisableTracing_59;
#line 330 "handle_options.m"
    MR_Word libs__handle_options__V_165_165;
#line 359 "handle_options.m"
    MR_Box libs__handle_options__conv10_Suppress_67;
#line 365 "handle_options.m"
    MR_Word libs__handle_options__TraceSuppressPrime_69;
#line 361 "handle_options.m"
    MR_String libs__handle_options__SuppressStr_68;
#line 370 "handle_options.m"
    MR_Box libs__handle_options__conv11_ForceDisableSSDB_70;
#line 371 "handle_options.m"
    MR_Word libs__handle_options__V_183_183;
#line 388 "handle_options.m"
    MR_Box libs__handle_options__conv14_MaybeThreadSafeOption_76;
#line 394 "handle_options.m"
    MR_Word libs__handle_options__MaybeThreadSafe0_78;
#line 390 "handle_options.m"
    MR_String libs__handle_options__MaybeThreadSafeString_77;
#line 399 "handle_options.m"
    MR_Box libs__handle_options__conv15_DumpAliasOption_79;
#line 401 "handle_options.m"
    MR_String libs__handle_options__DumpAlias_80;
#line 428 "handle_options.m"
    MR_Char libs__handle_options__V_201_201;
#line 437 "handle_options.m"
    MR_Char libs__handle_options__V_205_205;
#line 468 "handle_options.m"
    MR_Char libs__handle_options__V_229_229;
#line 477 "handle_options.m"
    MR_Box libs__handle_options__conv16_C_CompilerType0_83;
#line 483 "handle_options.m"
    MR_Word libs__handle_options__C_CompilerTypePrime_85;
#line 479 "handle_options.m"
    MR_String libs__handle_options__C_CompilerTypeStr_84;
#line 490 "handle_options.m"
    MR_Box libs__handle_options__conv17_CSharp_CompilerType0_86;
#line 497 "handle_options.m"
    MR_Word libs__handle_options__CSharp_CompilerTypePrime_88;
#line 492 "handle_options.m"
    MR_String libs__handle_options__CSharp_CompilerTypeStr_87;
#line 505 "handle_options.m"
    MR_Box libs__handle_options__conv18_ReuseConstraint0_89;
#line 506 "handle_options.m"
    MR_Box libs__handle_options__conv19_ReuseConstraintArg0_90;
#line 515 "handle_options.m"
    MR_Word libs__handle_options__ReuseStrategyPrime_93;
#line 509 "handle_options.m"
    MR_String libs__handle_options__ReuseConstraintStr_91;
#line 509 "handle_options.m"
    MR_Integer libs__handle_options__ReuseConstraintArgNum_92;
#line 523 "handle_options.m"
    MR_Box libs__handle_options__conv20_DotNetLibVersionOpt_94;
#line 535 "handle_options.m"
    MR_Integer libs__handle_options__Major_101;
#line 535 "handle_options.m"
    MR_Integer libs__handle_options__Minor_102;
#line 535 "handle_options.m"
    MR_Integer libs__handle_options__Build_103;
#line 535 "handle_options.m"
    MR_Integer libs__handle_options__Revision_104;
#line 525 "handle_options.m"
    MR_String libs__handle_options__DotNetLibVersionStr_95;
#line 525 "handle_options.m"
    MR_Word libs__handle_options__IsSep_96;
#line 525 "handle_options.m"
    MR_String libs__handle_options__Mj_97;
#line 525 "handle_options.m"
    MR_String libs__handle_options__Mn_98;
#line 525 "handle_options.m"
    MR_String libs__handle_options__Bu_99;
#line 525 "handle_options.m"
    MR_String libs__handle_options__Rv_100;
#line 525 "handle_options.m"
    MR_Word libs__handle_options__V_253_253;
#line 525 "handle_options.m"
    MR_Word libs__handle_options__V_254_254;
#line 525 "handle_options.m"
    MR_Word libs__handle_options__V_255_255;
#line 525 "handle_options.m"
    MR_Word libs__handle_options__V_256_256;
#line 525 "handle_options.m"
    MR_Word libs__handle_options__V_257_257;
#line 546 "handle_options.m"
    MR_Box libs__handle_options__conv21_FeedbackFile0_106;
#line 561 "handle_options.m"
    MR_String libs__handle_options__FeedbackFile_107;
#line 565 "handle_options.m"
    MR_Box libs__handle_options__conv22_HostEnvType0_112;
#line 571 "handle_options.m"
    MR_Word libs__handle_options__HostEnvTypePrime_114;
#line 567 "handle_options.m"
    MR_String libs__handle_options__HostEnvTypeStr_113;
#line 578 "handle_options.m"
    MR_Box libs__handle_options__conv23_TargetEnvType0_115;
#line 584 "handle_options.m"
    MR_Word libs__handle_options__TargetEnvTypePrime_117;
#line 580 "handle_options.m"
    MR_String libs__handle_options__TargetEnvTypeStr_116;

#line 250 "handle_options.m"
    {
#line 250 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_0_118, ((MR_Box) ((MR_Integer) 170)), &libs__handle_options__conv0_Target0_42);
    }
#line 250 "handle_options.m"
    libs__handle_options__Target0_42 = ((MR_Word) libs__handle_options__conv0_Target0_42);
#line 252 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__Target0_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__Target0_42, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 252 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 252 "handle_options.m"
      {
#line 252 "handle_options.m"
        libs__handle_options__TargetStr_43 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__Target0_42, (MR_Integer) 1)));
#line 253 "handle_options.m"
        {
#line 253 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_target_2_p_0(libs__handle_options__TargetStr_43, &libs__handle_options__TargetPrime_44);
        }
#line 252 "handle_options.m"
      }
#line 256 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 255 "handle_options.m"
      {
#line 255 "handle_options.m"
        *libs__handle_options__Target_24 = libs__handle_options__TargetPrime_44;
#line 255 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_126_126 = libs__handle_options__STATE_VARIABLE_Errors_0_120;
#line 255 "handle_options.m"
      }
#line 256 "handle_options.m"
    else
#line 257 "handle_options.m"
      {
#line 257 "handle_options.m"
        *libs__handle_options__Target_24 = (MR_Integer) 0;
#line 259 "handle_options.m"
        {
#line 259 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid target option (must be \140c\', \140il\', \140java\', \'csharp\', or \140erlang\')", libs__handle_options__STATE_VARIABLE_Errors_0_120, &libs__handle_options__STATE_VARIABLE_Errors_126_126);
        }
#line 257 "handle_options.m"
      }
#line 264 "handle_options.m"
    {
#line 264 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_0_118, ((MR_Box) ((MR_Integer) 211)), &libs__handle_options__conv1_GC_Method0_45);
    }
#line 264 "handle_options.m"
    libs__handle_options__GC_Method0_45 = ((MR_Word) libs__handle_options__conv1_GC_Method0_45);
#line 266 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__GC_Method0_45)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__GC_Method0_45, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 266 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 266 "handle_options.m"
      {
#line 266 "handle_options.m"
        libs__handle_options__GC_MethodStr_46 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__GC_Method0_45, (MR_Integer) 1)));
#line 267 "handle_options.m"
        {
#line 267 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_gc_method_2_p_0(libs__handle_options__GC_MethodStr_46, &libs__handle_options__GC_MethodPrime_47);
        }
#line 266 "handle_options.m"
      }
#line 270 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 269 "handle_options.m"
      {
#line 269 "handle_options.m"
        *libs__handle_options__GC_Method_25 = libs__handle_options__GC_MethodPrime_47;
#line 269 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_131_131 = libs__handle_options__STATE_VARIABLE_Errors_126_126;
#line 269 "handle_options.m"
      }
#line 270 "handle_options.m"
    else
#line 271 "handle_options.m"
      {
#line 271 "handle_options.m"
        *libs__handle_options__GC_Method_25 = (MR_Integer) 1;
#line 272 "handle_options.m"
        {
#line 272 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid GC option (must be \140none\', \140conservative\', \140boehm\', \140hgc\', \140mps\', \140accurate\', or \140automatic\')", libs__handle_options__STATE_VARIABLE_Errors_126_126, &libs__handle_options__STATE_VARIABLE_Errors_131_131);
        }
#line 271 "handle_options.m"
      }
#line 278 "handle_options.m"
    {
#line 278 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_0_118, ((MR_Box) ((MR_Integer) 232)), &libs__handle_options__conv2_TagsMethod0_48);
    }
#line 278 "handle_options.m"
    libs__handle_options__TagsMethod0_48 = ((MR_Word) libs__handle_options__conv2_TagsMethod0_48);
#line 280 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__TagsMethod0_48)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__TagsMethod0_48, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 280 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 280 "handle_options.m"
      {
#line 280 "handle_options.m"
        libs__handle_options__TagsMethodStr_49 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__TagsMethod0_48, (MR_Integer) 1)));
#line 281 "handle_options.m"
        {
#line 281 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_tags_method_2_p_0(libs__handle_options__TagsMethodStr_49, &libs__handle_options__TagsMethodPrime_50);
        }
#line 280 "handle_options.m"
      }
#line 284 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 283 "handle_options.m"
      {
#line 283 "handle_options.m"
        *libs__handle_options__TagsMethod_26 = libs__handle_options__TagsMethodPrime_50;
#line 283 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_138_138 = libs__handle_options__STATE_VARIABLE_Errors_131_131;
#line 283 "handle_options.m"
      }
#line 284 "handle_options.m"
    else
#line 285 "handle_options.m"
      {
#line 285 "handle_options.m"
        *libs__handle_options__TagsMethod_26 = (MR_Integer) 0;
#line 286 "handle_options.m"
        {
#line 286 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid tags option (must be \140none\', \140low\' or \140high\')", libs__handle_options__STATE_VARIABLE_Errors_131_131, &libs__handle_options__STATE_VARIABLE_Errors_138_138);
        }
#line 285 "handle_options.m"
      }
#line 290 "handle_options.m"
    {
#line 290 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_0_118, ((MR_Box) ((MR_Integer) 318)), &libs__handle_options__conv3_PercentFull_51);
    }
#line 290 "handle_options.m"
    libs__handle_options__PercentFull_51 = ((MR_Word) libs__handle_options__conv3_PercentFull_51);
#line 292 "handle_options.m"
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__PercentFull_51)) == (MR_mktag((MR_Integer) 2)));
#line 292 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 292 "handle_options.m"
      {
#line 292 "handle_options.m"
        libs__handle_options__Percent_52 = ((MR_Integer) (MR_hl_field(MR_mktag(2), libs__handle_options__PercentFull_51, (MR_Integer) 0)));
#line 293 "handle_options.m"
        libs__handle_options__V_142_142 = (MR_Integer) 1;
#line 293 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__Percent_52 >= libs__handle_options__V_142_142);
#line 292 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 292 "handle_options.m"
          {
#line 294 "handle_options.m"
            libs__handle_options__V_143_143 = (MR_Integer) 100;
#line 294 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__Percent_52 <= libs__handle_options__V_143_143);
#line 292 "handle_options.m"
          }
#line 292 "handle_options.m"
      }
#line 297 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 294 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_145_145 = libs__handle_options__STATE_VARIABLE_Errors_138_138;
#line 297 "handle_options.m"
    else
#line 298 "handle_options.m"
      {
#line 298 "handle_options.m"
        {
#line 298 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--fact-table-hash-percent-full\'\n\t(must be an integer between 1 and 100)", libs__handle_options__STATE_VARIABLE_Errors_138_138, &libs__handle_options__STATE_VARIABLE_Errors_145_145);
        }
#line 298 "handle_options.m"
      }
#line 303 "handle_options.m"
    {
#line 303 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_0_118, ((MR_Box) ((MR_Integer) 418)), &libs__handle_options__conv4_TermNorm0_53);
    }
#line 303 "handle_options.m"
    libs__handle_options__TermNorm0_53 = ((MR_Word) libs__handle_options__conv4_TermNorm0_53);
#line 305 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__TermNorm0_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__TermNorm0_53, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 305 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 305 "handle_options.m"
      {
#line 305 "handle_options.m"
        libs__handle_options__TermNormStr_54 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__TermNorm0_53, (MR_Integer) 1)));
#line 306 "handle_options.m"
        {
#line 306 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_termination_norm_2_p_0(libs__handle_options__TermNormStr_54, &libs__handle_options__TermNormPrime_55);
        }
#line 305 "handle_options.m"
      }
#line 309 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 308 "handle_options.m"
      {
#line 308 "handle_options.m"
        *libs__handle_options__TermNorm_27 = libs__handle_options__TermNormPrime_55;
#line 308 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_152_152 = libs__handle_options__STATE_VARIABLE_Errors_145_145;
#line 308 "handle_options.m"
      }
#line 309 "handle_options.m"
    else
#line 310 "handle_options.m"
      {
#line 310 "handle_options.m"
        *libs__handle_options__TermNorm_27 = (MR_Integer) 0;
#line 311 "handle_options.m"
        {
#line 311 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--termination-norm\'\n\t(must be \140simple\', \140total\' or \140num-data-elems\').", libs__handle_options__STATE_VARIABLE_Errors_145_145, &libs__handle_options__STATE_VARIABLE_Errors_152_152);
        }
#line 310 "handle_options.m"
      }
#line 316 "handle_options.m"
    {
#line 316 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_0_118, ((MR_Box) ((MR_Integer) 424)), &libs__handle_options__conv5_Term2Norm0_56);
    }
#line 316 "handle_options.m"
    libs__handle_options__Term2Norm0_56 = ((MR_Word) libs__handle_options__conv5_Term2Norm0_56);
#line 318 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__Term2Norm0_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__Term2Norm0_56, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 318 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 318 "handle_options.m"
      {
#line 318 "handle_options.m"
        libs__handle_options__Term2NormStr_57 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__Term2Norm0_56, (MR_Integer) 1)));
#line 319 "handle_options.m"
        {
#line 319 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_termination_norm_2_p_0(libs__handle_options__Term2NormStr_57, &libs__handle_options__Term2NormPrime_58);
        }
#line 318 "handle_options.m"
      }
#line 322 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 321 "handle_options.m"
      {
#line 321 "handle_options.m"
        *libs__handle_options__Term2Norm_28 = libs__handle_options__Term2NormPrime_58;
#line 321 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_159_159 = libs__handle_options__STATE_VARIABLE_Errors_152_152;
#line 321 "handle_options.m"
      }
#line 322 "handle_options.m"
    else
#line 323 "handle_options.m"
      {
#line 323 "handle_options.m"
        *libs__handle_options__Term2Norm_28 = (MR_Integer) 0;
#line 324 "handle_options.m"
        {
#line 324 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--termination2-norm\'\n\t(must be\140simple\', \140total\' or \140num-data-elems\').", libs__handle_options__STATE_VARIABLE_Errors_152_152, &libs__handle_options__STATE_VARIABLE_Errors_159_159);
        }
#line 323 "handle_options.m"
      }
#line 329 "handle_options.m"
    {
#line 329 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_0_118, ((MR_Box) ((MR_Integer) 127)), &libs__handle_options__conv6_ForceDisableTracing_59);
    }
#line 329 "handle_options.m"
    libs__handle_options__ForceDisableTracing_59 = ((MR_Word) libs__handle_options__conv6_ForceDisableTracing_59);
#line 330 "handle_options.m"
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__ForceDisableTracing_59)) == (MR_mktag((MR_Integer) 1)));
#line 330 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 330 "handle_options.m"
      {
#line 330 "handle_options.m"
        libs__handle_options__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__ForceDisableTracing_59, (MR_Integer) 0)));
#line 330 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__V_165_165 == (MR_Integer) 1);
#line 330 "handle_options.m"
      }
#line 332 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 331 "handle_options.m"
      {
#line 331 "handle_options.m"
        {
#line 331 "handle_options.m"
          *libs__handle_options__TraceLevel_29 = libs__trace_params__trace_level_none_0_f_0();
        }
#line 331 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_170_170 = libs__handle_options__STATE_VARIABLE_Errors_159_159;
#line 331 "handle_options.m"
      }
#line 332 "handle_options.m"
    else
#line 333 "handle_options.m"
      {
#line 333 "handle_options.m"
        MR_Word libs__handle_options__Trace_60;
#line 333 "handle_options.m"
        MR_Word libs__handle_options__ExecTraceOpt_61;
#line 333 "handle_options.m"
        MR_Word libs__handle_options__DeclDebugOpt_62;
#line 333 "handle_options.m"
        MR_Box libs__handle_options__conv7_Trace_60;
#line 334 "handle_options.m"
        MR_Box libs__handle_options__conv8_ExecTraceOpt_61;
#line 335 "handle_options.m"
        MR_Box libs__handle_options__conv9_DeclDebugOpt_62;
#line 351 "handle_options.m"
        MR_Word libs__handle_options__MaybeTraceLevel_66;
#line 337 "handle_options.m"
        MR_String libs__handle_options__TraceStr_63;
#line 337 "handle_options.m"
        MR_Word libs__handle_options__ExecTrace_64;
#line 337 "handle_options.m"
        MR_Word libs__handle_options__DeclDebug_65;

#line 333 "handle_options.m"
        {
#line 333 "handle_options.m"
          mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_0_118, ((MR_Box) ((MR_Integer) 115)), &libs__handle_options__conv7_Trace_60);
        }
#line 333 "handle_options.m"
        libs__handle_options__Trace_60 = ((MR_Word) libs__handle_options__conv7_Trace_60);
#line 334 "handle_options.m"
        {
#line 334 "handle_options.m"
          mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_0_118, ((MR_Box) ((MR_Integer) 182)), &libs__handle_options__conv8_ExecTraceOpt_61);
        }
#line 334 "handle_options.m"
        libs__handle_options__ExecTraceOpt_61 = ((MR_Word) libs__handle_options__conv8_ExecTraceOpt_61);
#line 335 "handle_options.m"
        {
#line 335 "handle_options.m"
          mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_0_118, ((MR_Box) ((MR_Integer) 183)), &libs__handle_options__conv9_DeclDebugOpt_62);
        }
#line 335 "handle_options.m"
        libs__handle_options__DeclDebugOpt_62 = ((MR_Word) libs__handle_options__conv9_DeclDebugOpt_62);
#line 337 "handle_options.m"
        libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__Trace_60)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__Trace_60, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 337 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 337 "handle_options.m"
          {
#line 337 "handle_options.m"
            libs__handle_options__TraceStr_63 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__Trace_60, (MR_Integer) 1)));
#line 338 "handle_options.m"
            libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__ExecTraceOpt_61)) == (MR_mktag((MR_Integer) 1)));
#line 338 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 338 "handle_options.m"
              {
#line 338 "handle_options.m"
                libs__handle_options__ExecTrace_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__ExecTraceOpt_61, (MR_Integer) 0)));
#line 339 "handle_options.m"
                libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DeclDebugOpt_62)) == (MR_mktag((MR_Integer) 1)));
#line 339 "handle_options.m"
                if (libs__handle_options__succeeded)
#line 339 "handle_options.m"
                  {
#line 339 "handle_options.m"
                    libs__handle_options__DeclDebug_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DeclDebugOpt_62, (MR_Integer) 0)));
#line 340 "handle_options.m"
                    {
#line 340 "handle_options.m"
                      libs__handle_options__succeeded = libs__trace_params__convert_trace_level_4_p_0(libs__handle_options__TraceStr_63, libs__handle_options__ExecTrace_64, libs__handle_options__DeclDebug_65, &libs__handle_options__MaybeTraceLevel_66);
                    }
#line 339 "handle_options.m"
                  }
#line 338 "handle_options.m"
              }
#line 337 "handle_options.m"
          }
#line 351 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 345 "handle_options.m"
          if ((libs__handle_options__MaybeTraceLevel_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 346 "handle_options.m"
            {
#line 347 "handle_options.m"
              {
#line 347 "handle_options.m"
                *libs__handle_options__TraceLevel_29 = libs__trace_params__trace_level_none_0_f_0();
              }
#line 348 "handle_options.m"
              {
#line 348 "handle_options.m"
                libs__handle_options__add_error_3_p_0((MR_String) "Specified trace level is not compatible with grade", libs__handle_options__STATE_VARIABLE_Errors_159_159, &libs__handle_options__STATE_VARIABLE_Errors_170_170);
              }
#line 346 "handle_options.m"
            }
#line 345 "handle_options.m"
          else
#line 344 "handle_options.m"
            {
#line 344 "handle_options.m"
              *libs__handle_options__TraceLevel_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeTraceLevel_66, (MR_Integer) 0)));
#line 344 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Errors_170_170 = libs__handle_options__STATE_VARIABLE_Errors_159_159;
#line 344 "handle_options.m"
            }
#line 351 "handle_options.m"
        else
#line 352 "handle_options.m"
          {
#line 352 "handle_options.m"
            {
#line 352 "handle_options.m"
              *libs__handle_options__TraceLevel_29 = libs__trace_params__trace_level_none_0_f_0();
            }
#line 353 "handle_options.m"
            {
#line 353 "handle_options.m"
              libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--trace\'\n\t(must be \140minimum\', \140shallow\', \140deep\', \140decl\', \140rep\' or \140default\').", libs__handle_options__STATE_VARIABLE_Errors_159_159, &libs__handle_options__STATE_VARIABLE_Errors_170_170);
            }
#line 352 "handle_options.m"
          }
#line 333 "handle_options.m"
      }
#line 359 "handle_options.m"
    {
#line 359 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_0_118, ((MR_Box) ((MR_Integer) 126)), &libs__handle_options__conv10_Suppress_67);
    }
#line 359 "handle_options.m"
    libs__handle_options__Suppress_67 = ((MR_Word) libs__handle_options__conv10_Suppress_67);
#line 361 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__Suppress_67)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__Suppress_67, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 361 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 361 "handle_options.m"
      {
#line 361 "handle_options.m"
        libs__handle_options__SuppressStr_68 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__Suppress_67, (MR_Integer) 1)));
#line 362 "handle_options.m"
        {
#line 362 "handle_options.m"
          libs__handle_options__succeeded = libs__trace_params__convert_trace_suppress_2_p_0(libs__handle_options__SuppressStr_68, &libs__handle_options__TraceSuppressPrime_69);
        }
#line 361 "handle_options.m"
      }
#line 365 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 364 "handle_options.m"
      {
#line 364 "handle_options.m"
        *libs__handle_options__TraceSuppress_30 = libs__handle_options__TraceSuppressPrime_69;
#line 364 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_181_181 = libs__handle_options__STATE_VARIABLE_Errors_170_170;
#line 364 "handle_options.m"
      }
#line 365 "handle_options.m"
    else
#line 366 "handle_options.m"
      {
#line 366 "handle_options.m"
        {
#line 366 "handle_options.m"
          *libs__handle_options__TraceSuppress_30 = libs__trace_params__default_trace_suppress_0_f_0();
        }
#line 367 "handle_options.m"
        {
#line 367 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--suppress-trace\'.", libs__handle_options__STATE_VARIABLE_Errors_170_170, &libs__handle_options__STATE_VARIABLE_Errors_181_181);
        }
#line 366 "handle_options.m"
      }
#line 370 "handle_options.m"
    {
#line 370 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_0_118, ((MR_Box) ((MR_Integer) 131)), &libs__handle_options__conv11_ForceDisableSSDB_70);
    }
#line 370 "handle_options.m"
    libs__handle_options__ForceDisableSSDB_70 = ((MR_Word) libs__handle_options__conv11_ForceDisableSSDB_70);
#line 371 "handle_options.m"
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__ForceDisableSSDB_70)) == (MR_mktag((MR_Integer) 1)));
#line 371 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 371 "handle_options.m"
      {
#line 371 "handle_options.m"
        libs__handle_options__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__ForceDisableSSDB_70, (MR_Integer) 0)));
#line 371 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__V_183_183 == (MR_Integer) 1);
#line 371 "handle_options.m"
      }
#line 373 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 372 "handle_options.m"
      {
#line 372 "handle_options.m"
        *libs__handle_options__SSTraceLevel_31 = (MR_Integer) 0;
#line 372 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_187_187 = libs__handle_options__STATE_VARIABLE_Errors_181_181;
#line 372 "handle_options.m"
      }
#line 373 "handle_options.m"
    else
#line 374 "handle_options.m"
      {
#line 374 "handle_options.m"
        MR_Word libs__handle_options__SSTrace_71;
#line 374 "handle_options.m"
        MR_Word libs__handle_options__SSDB_72;
#line 374 "handle_options.m"
        MR_Box libs__handle_options__conv12_SSTrace_71;
#line 375 "handle_options.m"
        MR_Box libs__handle_options__conv13_SSDB_72;
#line 382 "handle_options.m"
        MR_Word libs__handle_options__SSTL_75;
#line 377 "handle_options.m"
        MR_String libs__handle_options__SSTraceStr_73;
#line 377 "handle_options.m"
        MR_Word libs__handle_options__IsInSSDebugGrade_74;

#line 374 "handle_options.m"
        {
#line 374 "handle_options.m"
          mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_0_118, ((MR_Box) ((MR_Integer) 230)), &libs__handle_options__conv12_SSTrace_71);
        }
#line 374 "handle_options.m"
        libs__handle_options__SSTrace_71 = ((MR_Word) libs__handle_options__conv12_SSTrace_71);
#line 375 "handle_options.m"
        {
#line 375 "handle_options.m"
          mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_0_118, ((MR_Box) ((MR_Integer) 229)), &libs__handle_options__conv13_SSDB_72);
        }
#line 375 "handle_options.m"
        libs__handle_options__SSDB_72 = ((MR_Word) libs__handle_options__conv13_SSDB_72);
#line 377 "handle_options.m"
        libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__SSTrace_71)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__SSTrace_71, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 377 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 377 "handle_options.m"
          {
#line 377 "handle_options.m"
            libs__handle_options__SSTraceStr_73 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__SSTrace_71, (MR_Integer) 1)));
#line 378 "handle_options.m"
            libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__SSDB_72)) == (MR_mktag((MR_Integer) 1)));
#line 378 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 378 "handle_options.m"
              {
#line 378 "handle_options.m"
                libs__handle_options__IsInSSDebugGrade_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__SSDB_72, (MR_Integer) 0)));
#line 379 "handle_options.m"
                {
#line 379 "handle_options.m"
                  libs__handle_options__succeeded = libs__globals__convert_ssdb_trace_level_3_p_0(libs__handle_options__SSTraceStr_73, libs__handle_options__IsInSSDebugGrade_74, &libs__handle_options__SSTL_75);
                }
#line 378 "handle_options.m"
              }
#line 377 "handle_options.m"
          }
#line 382 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 381 "handle_options.m"
          {
#line 381 "handle_options.m"
            *libs__handle_options__SSTraceLevel_31 = libs__handle_options__SSTL_75;
#line 381 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_187_187 = libs__handle_options__STATE_VARIABLE_Errors_181_181;
#line 381 "handle_options.m"
          }
#line 382 "handle_options.m"
        else
#line 383 "handle_options.m"
          {
#line 383 "handle_options.m"
            *libs__handle_options__SSTraceLevel_31 = (MR_Integer) 0;
#line 384 "handle_options.m"
            {
#line 384 "handle_options.m"
              libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--ssdb-trace\'.", libs__handle_options__STATE_VARIABLE_Errors_181_181, &libs__handle_options__STATE_VARIABLE_Errors_187_187);
            }
#line 383 "handle_options.m"
          }
#line 374 "handle_options.m"
      }
#line 388 "handle_options.m"
    {
#line 388 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_0_118, ((MR_Box) ((MR_Integer) 222)), &libs__handle_options__conv14_MaybeThreadSafeOption_76);
    }
#line 388 "handle_options.m"
    libs__handle_options__MaybeThreadSafeOption_76 = ((MR_Word) libs__handle_options__conv14_MaybeThreadSafeOption_76);
#line 390 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__MaybeThreadSafeOption_76)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__MaybeThreadSafeOption_76, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 390 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 390 "handle_options.m"
      {
#line 390 "handle_options.m"
        libs__handle_options__MaybeThreadSafeString_77 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__MaybeThreadSafeOption_76, (MR_Integer) 1)));
#line 391 "handle_options.m"
        {
#line 391 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_maybe_thread_safe_2_p_0(libs__handle_options__MaybeThreadSafeString_77, &libs__handle_options__MaybeThreadSafe0_78);
        }
#line 390 "handle_options.m"
      }
#line 394 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 393 "handle_options.m"
      {
#line 393 "handle_options.m"
        *libs__handle_options__MaybeThreadSafe_32 = libs__handle_options__MaybeThreadSafe0_78;
#line 393 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_190_190 = libs__handle_options__STATE_VARIABLE_Errors_187_187;
#line 393 "handle_options.m"
      }
#line 394 "handle_options.m"
    else
#line 395 "handle_options.m"
      {
#line 395 "handle_options.m"
        *libs__handle_options__MaybeThreadSafe_32 = (MR_Integer) 0;
#line 396 "handle_options.m"
        {
#line 396 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--maybe-thread-safe\'.", libs__handle_options__STATE_VARIABLE_Errors_187_187, &libs__handle_options__STATE_VARIABLE_Errors_190_190);
        }
#line 395 "handle_options.m"
      }
#line 399 "handle_options.m"
    {
#line 399 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_0_118, ((MR_Box) ((MR_Integer) 143)), &libs__handle_options__conv15_DumpAliasOption_79);
    }
#line 399 "handle_options.m"
    libs__handle_options__DumpAliasOption_79 = ((MR_Word) libs__handle_options__conv15_DumpAliasOption_79);
#line 401 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__DumpAliasOption_79)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__DumpAliasOption_79, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 401 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 401 "handle_options.m"
      {
#line 401 "handle_options.m"
        libs__handle_options__DumpAlias_80 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__DumpAliasOption_79, (MR_Integer) 1)));
#line 402 "handle_options.m"
        libs__handle_options__succeeded = (strcmp(libs__handle_options__DumpAlias_80, (MR_String) "") == 0);
#line 401 "handle_options.m"
      }
#line 405 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 404 "handle_options.m"
      {
#line 404 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_196_196 = libs__handle_options__STATE_VARIABLE_Errors_190_190;
#line 404 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_OptionTable_194_194 = libs__handle_options__STATE_VARIABLE_OptionTable_0_118;
#line 404 "handle_options.m"
      }
#line 405 "handle_options.m"
    else
#line 410 "handle_options.m"
      {
#line 410 "handle_options.m"
        MR_String libs__handle_options__AliasDumpOptions_81;
#line 406 "handle_options.m"
        MR_String libs__handle_options__DumpAlias_287;

#line 406 "handle_options.m"
        libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__DumpAliasOption_79)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__DumpAliasOption_79, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 406 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 406 "handle_options.m"
          {
#line 406 "handle_options.m"
            libs__handle_options__DumpAlias_287 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__DumpAliasOption_79, (MR_Integer) 1)));
#line 407 "handle_options.m"
            {
#line 407 "handle_options.m"
              libs__handle_options__succeeded = libs__handle_options__convert_dump_alias_2_p_0(libs__handle_options__DumpAlias_287, &libs__handle_options__AliasDumpOptions_81);
            }
#line 406 "handle_options.m"
          }
#line 410 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 409 "handle_options.m"
          {
#line 409 "handle_options.m"
            MR_Word libs__handle_options__V_193_193;

#line 409 "handle_options.m"
            {
#line 409 "handle_options.m"
              libs__handle_options__V_193_193 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_193_193, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 409 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_193_193, 1) = ((MR_Box) (libs__handle_options__AliasDumpOptions_81));
#line 409 "handle_options.m"
            }
#line 409 "handle_options.m"
            {
#line 409 "handle_options.m"
              mercury__map__set_4_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, ((MR_Box) ((MR_Integer) 144)), ((MR_Box) (libs__handle_options__V_193_193)), libs__handle_options__STATE_VARIABLE_OptionTable_0_118, &libs__handle_options__STATE_VARIABLE_OptionTable_194_194);
            }
#line 409 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_196_196 = libs__handle_options__STATE_VARIABLE_Errors_190_190;
#line 409 "handle_options.m"
          }
#line 410 "handle_options.m"
        else
#line 411 "handle_options.m"
          {
#line 411 "handle_options.m"
            {
#line 411 "handle_options.m"
              libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--hlds-dump-alias\'.", libs__handle_options__STATE_VARIABLE_Errors_190_190, &libs__handle_options__STATE_VARIABLE_Errors_196_196);
            }
#line 411 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_OptionTable_194_194 = libs__handle_options__STATE_VARIABLE_OptionTable_0_118;
#line 411 "handle_options.m"
          }
#line 410 "handle_options.m"
      }
#line 415 "handle_options.m"
    {
#line 415 "handle_options.m"
      mercury__getopt_io__lookup_string_option_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__STATE_VARIABLE_OptionTable_194_194, ((MR_Box) ((MR_Integer) 144)), &libs__handle_options__STATE_VARIABLE_DumpOptions_198_198);
    }
#line 419 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__STATE_VARIABLE_DumpOptions_198_198, (MR_String) "") == 0);
#line 421 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 420 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_199_199 = (MR_String) "x";
#line 421 "handle_options.m"
    else
#line 420 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_199_199 = libs__handle_options__STATE_VARIABLE_DumpOptions_198_198;
#line 427 "handle_options.m"
    {
#line 427 "handle_options.m"
      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_199_199, (MR_Char) 121);
    }
#line 427 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 427 "handle_options.m"
      {
#line 428 "handle_options.m"
        libs__handle_options__V_201_201 = (MR_Char) 97;
#line 428 "handle_options.m"
        {
#line 428 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_199_199, libs__handle_options__V_201_201);
        }
#line 428 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 427 "handle_options.m"
      }
#line 431 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 430 "handle_options.m"
      {
#line 430 "handle_options.m"
        {
#line 430 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_DumpOptions_202_202 = mercury__string__f_43_43_2_f_0((MR_String) "a", libs__handle_options__STATE_VARIABLE_DumpOptions_199_199);
        }
#line 430 "handle_options.m"
      }
#line 431 "handle_options.m"
    else
#line 430 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_202_202 = libs__handle_options__STATE_VARIABLE_DumpOptions_199_199;
#line 436 "handle_options.m"
    {
#line 436 "handle_options.m"
      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_202_202, (MR_Char) 97);
    }
#line 436 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 436 "handle_options.m"
      {
#line 437 "handle_options.m"
        libs__handle_options__V_205_205 = (MR_Char) 117;
#line 437 "handle_options.m"
        {
#line 437 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_202_202, libs__handle_options__V_205_205);
        }
#line 437 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 436 "handle_options.m"
      }
#line 440 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 439 "handle_options.m"
      {
#line 439 "handle_options.m"
        {
#line 439 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_DumpOptions_206_206 = mercury__string__f_43_43_2_f_0((MR_String) "u", libs__handle_options__STATE_VARIABLE_DumpOptions_202_202);
        }
#line 439 "handle_options.m"
      }
#line 440 "handle_options.m"
    else
#line 439 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_206_206 = libs__handle_options__STATE_VARIABLE_DumpOptions_202_202;
#line 446 "handle_options.m"
    {
#line 446 "handle_options.m"
      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_206_206, (MR_Char) 65);
    }
#line 447 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 447 "handle_options.m"
      {
#line 447 "handle_options.m"
        {
#line 447 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_206_206, (MR_Char) 66);
        }
#line 447 "handle_options.m"
        if (!(libs__handle_options__succeeded))
#line 447 "handle_options.m"
          {
#line 448 "handle_options.m"
            {
#line 448 "handle_options.m"
              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_206_206, (MR_Char) 68);
            }
#line 447 "handle_options.m"
            if (!(libs__handle_options__succeeded))
#line 447 "handle_options.m"
              {
#line 449 "handle_options.m"
                {
#line 449 "handle_options.m"
                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_206_206, (MR_Char) 71);
                }
#line 447 "handle_options.m"
                if (!(libs__handle_options__succeeded))
#line 447 "handle_options.m"
                  {
#line 450 "handle_options.m"
                    {
#line 450 "handle_options.m"
                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_206_206, (MR_Char) 80);
                    }
#line 447 "handle_options.m"
                    if (!(libs__handle_options__succeeded))
#line 447 "handle_options.m"
                      {
#line 451 "handle_options.m"
                        {
#line 451 "handle_options.m"
                          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_206_206, (MR_Char) 82);
                        }
#line 447 "handle_options.m"
                        if (!(libs__handle_options__succeeded))
#line 447 "handle_options.m"
                          {
#line 452 "handle_options.m"
                            {
#line 452 "handle_options.m"
                              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_206_206, (MR_Char) 83);
                            }
#line 447 "handle_options.m"
                            if (!(libs__handle_options__succeeded))
#line 447 "handle_options.m"
                              {
#line 453 "handle_options.m"
                                {
#line 453 "handle_options.m"
                                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_206_206, (MR_Char) 98);
                                }
#line 447 "handle_options.m"
                                if (!(libs__handle_options__succeeded))
#line 447 "handle_options.m"
                                  {
#line 454 "handle_options.m"
                                    {
#line 454 "handle_options.m"
                                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_206_206, (MR_Char) 99);
                                    }
#line 447 "handle_options.m"
                                    if (!(libs__handle_options__succeeded))
#line 447 "handle_options.m"
                                      {
#line 455 "handle_options.m"
                                        {
#line 455 "handle_options.m"
                                          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_206_206, (MR_Char) 100);
                                        }
#line 447 "handle_options.m"
                                        if (!(libs__handle_options__succeeded))
#line 447 "handle_options.m"
                                          {
#line 456 "handle_options.m"
                                            {
#line 456 "handle_options.m"
                                              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_206_206, (MR_Char) 102);
                                            }
#line 447 "handle_options.m"
                                            if (!(libs__handle_options__succeeded))
#line 447 "handle_options.m"
                                              {
#line 457 "handle_options.m"
                                                {
#line 457 "handle_options.m"
                                                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_206_206, (MR_Char) 103);
                                                }
#line 447 "handle_options.m"
                                                if (!(libs__handle_options__succeeded))
#line 447 "handle_options.m"
                                                  {
#line 458 "handle_options.m"
                                                    {
#line 458 "handle_options.m"
                                                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_206_206, (MR_Char) 105);
                                                    }
#line 447 "handle_options.m"
                                                    if (!(libs__handle_options__succeeded))
#line 447 "handle_options.m"
                                                      {
#line 459 "handle_options.m"
                                                        {
#line 459 "handle_options.m"
                                                          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_206_206, (MR_Char) 108);
                                                        }
#line 447 "handle_options.m"
                                                        if (!(libs__handle_options__succeeded))
#line 447 "handle_options.m"
                                                          {
#line 460 "handle_options.m"
                                                            {
#line 460 "handle_options.m"
                                                              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_206_206, (MR_Char) 109);
                                                            }
#line 447 "handle_options.m"
                                                            if (!(libs__handle_options__succeeded))
#line 447 "handle_options.m"
                                                              {
#line 461 "handle_options.m"
                                                                {
#line 461 "handle_options.m"
                                                                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_206_206, (MR_Char) 110);
                                                                }
#line 447 "handle_options.m"
                                                                if (!(libs__handle_options__succeeded))
#line 447 "handle_options.m"
                                                                  {
#line 462 "handle_options.m"
                                                                    {
#line 462 "handle_options.m"
                                                                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_206_206, (MR_Char) 112);
                                                                    }
#line 447 "handle_options.m"
                                                                    if (!(libs__handle_options__succeeded))
#line 447 "handle_options.m"
                                                                      {
#line 463 "handle_options.m"
                                                                        {
#line 463 "handle_options.m"
                                                                          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_206_206, (MR_Char) 115);
                                                                        }
#line 447 "handle_options.m"
                                                                        if (!(libs__handle_options__succeeded))
#line 447 "handle_options.m"
                                                                          {
#line 464 "handle_options.m"
                                                                            {
#line 464 "handle_options.m"
                                                                              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_206_206, (MR_Char) 116);
                                                                            }
#line 447 "handle_options.m"
                                                                            if (!(libs__handle_options__succeeded))
#line 447 "handle_options.m"
                                                                              {
#line 465 "handle_options.m"
                                                                                {
#line 465 "handle_options.m"
                                                                                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_206_206, (MR_Char) 117);
                                                                                }
#line 447 "handle_options.m"
                                                                                if (!(libs__handle_options__succeeded))
#line 466 "handle_options.m"
                                                                                  {
#line 466 "handle_options.m"
                                                                                    {
#line 466 "handle_options.m"
                                                                                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_206_206, (MR_Char) 122);
                                                                                    }
#line 466 "handle_options.m"
                                                                                  }
#line 447 "handle_options.m"
                                                                              }
#line 447 "handle_options.m"
                                                                          }
#line 447 "handle_options.m"
                                                                      }
#line 447 "handle_options.m"
                                                                  }
#line 447 "handle_options.m"
                                                              }
#line 447 "handle_options.m"
                                                          }
#line 447 "handle_options.m"
                                                      }
#line 447 "handle_options.m"
                                                  }
#line 447 "handle_options.m"
                                              }
#line 447 "handle_options.m"
                                          }
#line 447 "handle_options.m"
                                      }
#line 447 "handle_options.m"
                                  }
#line 447 "handle_options.m"
                              }
#line 447 "handle_options.m"
                          }
#line 447 "handle_options.m"
                      }
#line 447 "handle_options.m"
                  }
#line 447 "handle_options.m"
              }
#line 447 "handle_options.m"
          }
#line 447 "handle_options.m"
      }
#line 467 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 467 "handle_options.m"
      {
#line 468 "handle_options.m"
        libs__handle_options__V_229_229 = (MR_Char) 120;
#line 468 "handle_options.m"
        {
#line 468 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_206_206, libs__handle_options__V_229_229);
        }
#line 468 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 467 "handle_options.m"
      }
#line 471 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 470 "handle_options.m"
      {
#line 470 "handle_options.m"
        {
#line 470 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_DumpOptions_230_230 = mercury__string__f_43_43_2_f_0((MR_String) "x", libs__handle_options__STATE_VARIABLE_DumpOptions_206_206);
        }
#line 470 "handle_options.m"
      }
#line 471 "handle_options.m"
    else
#line 470 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_230_230 = libs__handle_options__STATE_VARIABLE_DumpOptions_206_206;
#line 474 "handle_options.m"
    {
#line 474 "handle_options.m"
      libs__handle_options__V_233_233 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 474 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_233_233, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 474 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_233_233, 1) = ((MR_Box) (libs__handle_options__STATE_VARIABLE_DumpOptions_230_230));
#line 474 "handle_options.m"
    }
#line 474 "handle_options.m"
    {
#line 474 "handle_options.m"
      mercury__map__set_4_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, ((MR_Box) ((MR_Integer) 144)), ((MR_Box) (libs__handle_options__V_233_233)), libs__handle_options__STATE_VARIABLE_OptionTable_194_194, &libs__handle_options__STATE_VARIABLE_OptionTable_234_234);
    }
#line 477 "handle_options.m"
    {
#line 477 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_234_234, ((MR_Box) ((MR_Integer) 510)), &libs__handle_options__conv16_C_CompilerType0_83);
    }
#line 477 "handle_options.m"
    libs__handle_options__C_CompilerType0_83 = ((MR_Word) libs__handle_options__conv16_C_CompilerType0_83);
#line 479 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__C_CompilerType0_83)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__C_CompilerType0_83, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 479 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 479 "handle_options.m"
      {
#line 479 "handle_options.m"
        libs__handle_options__C_CompilerTypeStr_84 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__C_CompilerType0_83, (MR_Integer) 1)));
#line 480 "handle_options.m"
        {
#line 480 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_c_compiler_type_2_p_0(libs__handle_options__C_CompilerTypeStr_84, &libs__handle_options__C_CompilerTypePrime_85);
        }
#line 479 "handle_options.m"
      }
#line 483 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 482 "handle_options.m"
      {
#line 482 "handle_options.m"
        *libs__handle_options__C_CompilerType_33 = libs__handle_options__C_CompilerTypePrime_85;
#line 482 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_237_237 = libs__handle_options__STATE_VARIABLE_Errors_196_196;
#line 482 "handle_options.m"
      }
#line 483 "handle_options.m"
    else
#line 484 "handle_options.m"
      {
#line 484 "handle_options.m"
        *libs__handle_options__C_CompilerType_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 485 "handle_options.m"
        {
#line 485 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--c-compiler-type\'\n\t(must be \140gcc\', \140lcc\', \140clang\', \'msvc\', or \140unknown\').", libs__handle_options__STATE_VARIABLE_Errors_196_196, &libs__handle_options__STATE_VARIABLE_Errors_237_237);
        }
#line 484 "handle_options.m"
      }
#line 490 "handle_options.m"
    {
#line 490 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_234_234, ((MR_Box) ((MR_Integer) 511)), &libs__handle_options__conv17_CSharp_CompilerType0_86);
    }
#line 490 "handle_options.m"
    libs__handle_options__CSharp_CompilerType0_86 = ((MR_Word) libs__handle_options__conv17_CSharp_CompilerType0_86);
#line 492 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__CSharp_CompilerType0_86)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__CSharp_CompilerType0_86, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 492 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 492 "handle_options.m"
      {
#line 492 "handle_options.m"
        libs__handle_options__CSharp_CompilerTypeStr_87 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__CSharp_CompilerType0_86, (MR_Integer) 1)));
#line 493 "handle_options.m"
        {
#line 493 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_csharp_compiler_type_2_p_0(libs__handle_options__CSharp_CompilerTypeStr_87, &libs__handle_options__CSharp_CompilerTypePrime_88);
        }
#line 492 "handle_options.m"
      }
#line 497 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 496 "handle_options.m"
      {
#line 496 "handle_options.m"
        *libs__handle_options__CSharp_CompilerType_34 = libs__handle_options__CSharp_CompilerTypePrime_88;
#line 496 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_242_242 = libs__handle_options__STATE_VARIABLE_Errors_237_237;
#line 496 "handle_options.m"
      }
#line 497 "handle_options.m"
    else
#line 498 "handle_options.m"
      {
#line 498 "handle_options.m"
        *libs__handle_options__CSharp_CompilerType_34 = (MR_Integer) 2;
#line 499 "handle_options.m"
        {
#line 499 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--csharp-compiler-type\'\n\t(must be \140microsoft\', \140mono\', or \140unknown\').", libs__handle_options__STATE_VARIABLE_Errors_237_237, &libs__handle_options__STATE_VARIABLE_Errors_242_242);
        }
#line 498 "handle_options.m"
      }
#line 505 "handle_options.m"
    {
#line 505 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_234_234, ((MR_Box) ((MR_Integer) 409)), &libs__handle_options__conv18_ReuseConstraint0_89);
    }
#line 505 "handle_options.m"
    libs__handle_options__ReuseConstraint0_89 = ((MR_Word) libs__handle_options__conv18_ReuseConstraint0_89);
#line 506 "handle_options.m"
    {
#line 506 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_234_234, ((MR_Box) ((MR_Integer) 410)), &libs__handle_options__conv19_ReuseConstraintArg0_90);
    }
#line 506 "handle_options.m"
    libs__handle_options__ReuseConstraintArg0_90 = ((MR_Word) libs__handle_options__conv19_ReuseConstraintArg0_90);
#line 509 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__ReuseConstraint0_89)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__ReuseConstraint0_89, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 509 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 509 "handle_options.m"
      {
#line 509 "handle_options.m"
        libs__handle_options__ReuseConstraintStr_91 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__ReuseConstraint0_89, (MR_Integer) 1)));
#line 510 "handle_options.m"
        libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__ReuseConstraintArg0_90)) == (MR_mktag((MR_Integer) 2)));
#line 510 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 510 "handle_options.m"
          {
#line 510 "handle_options.m"
            libs__handle_options__ReuseConstraintArgNum_92 = ((MR_Integer) (MR_hl_field(MR_mktag(2), libs__handle_options__ReuseConstraintArg0_90, (MR_Integer) 0)));
#line 511 "handle_options.m"
            {
#line 511 "handle_options.m"
              libs__handle_options__succeeded = libs__globals__convert_reuse_strategy_3_p_0(libs__handle_options__ReuseConstraintStr_91, libs__handle_options__ReuseConstraintArgNum_92, &libs__handle_options__ReuseStrategyPrime_93);
            }
#line 510 "handle_options.m"
          }
#line 509 "handle_options.m"
      }
#line 515 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 514 "handle_options.m"
      {
#line 514 "handle_options.m"
        *libs__handle_options__ReuseStrategy_35 = libs__handle_options__ReuseStrategyPrime_93;
#line 514 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_248_248 = libs__handle_options__STATE_VARIABLE_Errors_242_242;
#line 514 "handle_options.m"
      }
#line 515 "handle_options.m"
    else
#line 516 "handle_options.m"
      {
#line 516 "handle_options.m"
        *libs__handle_options__ReuseStrategy_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 517 "handle_options.m"
        {
#line 517 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--structure-reuse-constraint\'\n\t(must be \140same_cons_id\' or \140within_n_cells_difference\').", libs__handle_options__STATE_VARIABLE_Errors_242_242, &libs__handle_options__STATE_VARIABLE_Errors_248_248);
        }
#line 516 "handle_options.m"
      }
#line 523 "handle_options.m"
    {
#line 523 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_234_234, ((MR_Box) ((MR_Integer) 521)), &libs__handle_options__conv20_DotNetLibVersionOpt_94);
    }
#line 523 "handle_options.m"
    libs__handle_options__DotNetLibVersionOpt_94 = ((MR_Word) libs__handle_options__conv20_DotNetLibVersionOpt_94);
#line 525 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__DotNetLibVersionOpt_94)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__DotNetLibVersionOpt_94, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 525 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 525 "handle_options.m"
      {
#line 525 "handle_options.m"
        libs__handle_options__DotNetLibVersionStr_95 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__DotNetLibVersionOpt_94, (MR_Integer) 1)));
#line 526 "handle_options.m"
        libs__handle_options__IsSep_96 = (MR_Word) &libs__handle_options_scalar_common_1[14];
#line 527 "handle_options.m"
        {
#line 527 "handle_options.m"
          libs__handle_options__V_253_253 = mercury__string__words_separator_2_f_0(libs__handle_options__IsSep_96, libs__handle_options__DotNetLibVersionStr_95);
        }
#line 527 "handle_options.m"
        libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__V_253_253)) == (MR_mktag((MR_Integer) 1)));
#line 527 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 527 "handle_options.m"
          {
#line 527 "handle_options.m"
            libs__handle_options__Mj_97 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__V_253_253, (MR_Integer) 0)));
#line 527 "handle_options.m"
            libs__handle_options__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_253_253, (MR_Integer) 1)));
#line 527 "handle_options.m"
            libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__V_254_254)) == (MR_mktag((MR_Integer) 1)));
#line 527 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 527 "handle_options.m"
              {
#line 527 "handle_options.m"
                libs__handle_options__Mn_98 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__V_254_254, (MR_Integer) 0)));
#line 527 "handle_options.m"
                libs__handle_options__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_254_254, (MR_Integer) 1)));
#line 527 "handle_options.m"
                libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__V_255_255)) == (MR_mktag((MR_Integer) 1)));
#line 527 "handle_options.m"
                if (libs__handle_options__succeeded)
#line 527 "handle_options.m"
                  {
#line 527 "handle_options.m"
                    libs__handle_options__Bu_99 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__V_255_255, (MR_Integer) 0)));
#line 527 "handle_options.m"
                    libs__handle_options__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_255_255, (MR_Integer) 1)));
#line 527 "handle_options.m"
                    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__V_256_256)) == (MR_mktag((MR_Integer) 1)));
#line 527 "handle_options.m"
                    if (libs__handle_options__succeeded)
#line 527 "handle_options.m"
                      {
#line 527 "handle_options.m"
                        libs__handle_options__Rv_100 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__V_256_256, (MR_Integer) 0)));
#line 527 "handle_options.m"
                        libs__handle_options__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_256_256, (MR_Integer) 1)));
#line 527 "handle_options.m"
                        libs__handle_options__succeeded = (libs__handle_options__V_257_257 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 525 "handle_options.m"
                        if (libs__handle_options__succeeded)
#line 525 "handle_options.m"
                          {
#line 528 "handle_options.m"
                            {
#line 528 "handle_options.m"
                              libs__handle_options__succeeded = mercury__string__to_int_2_p_0(libs__handle_options__Mj_97, &libs__handle_options__Major_101);
                            }
#line 525 "handle_options.m"
                            if (libs__handle_options__succeeded)
#line 525 "handle_options.m"
                              {
#line 529 "handle_options.m"
                                {
#line 529 "handle_options.m"
                                  libs__handle_options__succeeded = mercury__string__to_int_2_p_0(libs__handle_options__Mn_98, &libs__handle_options__Minor_102);
                                }
#line 525 "handle_options.m"
                                if (libs__handle_options__succeeded)
#line 525 "handle_options.m"
                                  {
#line 530 "handle_options.m"
                                    {
#line 530 "handle_options.m"
                                      libs__handle_options__succeeded = mercury__string__to_int_2_p_0(libs__handle_options__Bu_99, &libs__handle_options__Build_103);
                                    }
#line 525 "handle_options.m"
                                    if (libs__handle_options__succeeded)
#line 531 "handle_options.m"
                                      {
#line 531 "handle_options.m"
                                        libs__handle_options__succeeded = mercury__string__to_int_2_p_0(libs__handle_options__Rv_100, &libs__handle_options__Revision_104);
                                      }
#line 525 "handle_options.m"
                                  }
#line 525 "handle_options.m"
                              }
#line 525 "handle_options.m"
                          }
#line 527 "handle_options.m"
                      }
#line 527 "handle_options.m"
                  }
#line 527 "handle_options.m"
              }
#line 527 "handle_options.m"
          }
#line 525 "handle_options.m"
      }
#line 535 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 533 "handle_options.m"
      {
#line 533 "handle_options.m"
        MR_Word libs__handle_options__ILVersion_105;

#line 533 "handle_options.m"
        {
#line 533 "handle_options.m"
          libs__handle_options__ILVersion_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 533 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ILVersion_105, 0) = ((MR_Box) (libs__handle_options__Major_101));
#line 533 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ILVersion_105, 1) = ((MR_Box) (libs__handle_options__Minor_102));
#line 533 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ILVersion_105, 2) = ((MR_Box) (libs__handle_options__Build_103));
#line 533 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ILVersion_105, 3) = ((MR_Box) (libs__handle_options__Revision_104));
#line 533 "handle_options.m"
        }
#line 534 "handle_options.m"
        {
#line 534 "handle_options.m"
          MR_Word base;
#line 534 "handle_options.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 534 "handle_options.m"
          *libs__handle_options__MaybeILVersion_36 = base;
#line 534 "handle_options.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__ILVersion_105));
#line 534 "handle_options.m"
        }
#line 534 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_259_259 = libs__handle_options__STATE_VARIABLE_Errors_248_248;
#line 534 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_OptionTable_119 = libs__handle_options__STATE_VARIABLE_OptionTable_234_234;
#line 533 "handle_options.m"
      }
#line 535 "handle_options.m"
    else
#line 536 "handle_options.m"
      {
#line 536 "handle_options.m"
        *libs__handle_options__MaybeILVersion_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 537 "handle_options.m"
        {
#line 537 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--dotnet-library-version\'\n\t(must be of the form \140MajorNum.MinorNum.BuildNum.RevisionNum\').", libs__handle_options__STATE_VARIABLE_Errors_248_248, &libs__handle_options__STATE_VARIABLE_Errors_259_259);
        }
#line 543 "handle_options.m"
        {
#line 543 "handle_options.m"
          mercury__map__det_update_4_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, ((MR_Box) ((MR_Integer) 96)), ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]))), libs__handle_options__STATE_VARIABLE_OptionTable_234_234, libs__handle_options__STATE_VARIABLE_OptionTable_119);
        }
#line 536 "handle_options.m"
      }
#line 546 "handle_options.m"
    {
#line 546 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, *libs__handle_options__STATE_VARIABLE_OptionTable_119, ((MR_Box) ((MR_Integer) 667)), &libs__handle_options__conv21_FeedbackFile0_106);
    }
#line 546 "handle_options.m"
    libs__handle_options__FeedbackFile0_106 = ((MR_Word) libs__handle_options__conv21_FeedbackFile0_106);
#line 548 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__FeedbackFile0_106)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__FeedbackFile0_106, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 548 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 548 "handle_options.m"
      {
#line 548 "handle_options.m"
        libs__handle_options__FeedbackFile_107 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__FeedbackFile0_106, (MR_Integer) 1)));
#line 549 "handle_options.m"
        libs__handle_options__succeeded = (strcmp(libs__handle_options__FeedbackFile_107, (MR_String) "") == 0);
#line 549 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 548 "handle_options.m"
      }
#line 561 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 551 "handle_options.m"
      {
#line 551 "handle_options.m"
        MR_Word libs__handle_options__FeedbackReadResult_108;

#line 551 "handle_options.m"
        {
#line 551 "handle_options.m"
          mdbcomp__feedback__read_feedback_file_4_p_0(libs__handle_options__FeedbackFile_107, &libs__handle_options__FeedbackReadResult_108);
        }
#line 555 "handle_options.m"
        if (((MR_tag((MR_Word) libs__handle_options__FeedbackReadResult_108)) == (MR_mktag((MR_Integer) 1))))
#line 556 "handle_options.m"
          {
#line 556 "handle_options.m"
            MR_Word libs__handle_options__Error_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__FeedbackReadResult_108, (MR_Integer) 0)));
#line 556 "handle_options.m"
            MR_String libs__handle_options__ErrorMessage_111;

#line 557 "handle_options.m"
            {
#line 557 "handle_options.m"
              mdbcomp__feedback__read_error_message_string_3_p_0(libs__handle_options__FeedbackFile_107, libs__handle_options__Error_110, &libs__handle_options__ErrorMessage_111);
            }
#line 558 "handle_options.m"
            {
#line 558 "handle_options.m"
              libs__handle_options__add_error_3_p_0(libs__handle_options__ErrorMessage_111, libs__handle_options__STATE_VARIABLE_Errors_259_259, &libs__handle_options__STATE_VARIABLE_Errors_272_272);
            }
#line 559 "handle_options.m"
            *libs__handle_options__MaybeFeedbackInfo_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 556 "handle_options.m"
          }
#line 555 "handle_options.m"
        else
#line 553 "handle_options.m"
          {
#line 553 "handle_options.m"
            MR_Word libs__handle_options__FeedbackInfo_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__FeedbackReadResult_108, (MR_Integer) 0)));

#line 554 "handle_options.m"
            {
#line 554 "handle_options.m"
              MR_Word base;
#line 554 "handle_options.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 554 "handle_options.m"
              *libs__handle_options__MaybeFeedbackInfo_37 = base;
#line 554 "handle_options.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__FeedbackInfo_109));
#line 554 "handle_options.m"
            }
#line 554 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_272_272 = libs__handle_options__STATE_VARIABLE_Errors_259_259;
#line 553 "handle_options.m"
          }
#line 551 "handle_options.m"
      }
#line 561 "handle_options.m"
    else
#line 563 "handle_options.m"
      {
#line 563 "handle_options.m"
        *libs__handle_options__MaybeFeedbackInfo_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 563 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_272_272 = libs__handle_options__STATE_VARIABLE_Errors_259_259;
#line 563 "handle_options.m"
      }
#line 565 "handle_options.m"
    {
#line 565 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, *libs__handle_options__STATE_VARIABLE_OptionTable_119, ((MR_Box) ((MR_Integer) 650)), &libs__handle_options__conv22_HostEnvType0_112);
    }
#line 565 "handle_options.m"
    libs__handle_options__HostEnvType0_112 = ((MR_Word) libs__handle_options__conv22_HostEnvType0_112);
#line 567 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__HostEnvType0_112)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__HostEnvType0_112, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 567 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 567 "handle_options.m"
      {
#line 567 "handle_options.m"
        libs__handle_options__HostEnvTypeStr_113 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__HostEnvType0_112, (MR_Integer) 1)));
#line 568 "handle_options.m"
        {
#line 568 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_env_type_2_p_0(libs__handle_options__HostEnvTypeStr_113, &libs__handle_options__HostEnvTypePrime_114);
        }
#line 567 "handle_options.m"
      }
#line 571 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 570 "handle_options.m"
      {
#line 570 "handle_options.m"
        *libs__handle_options__HostEnvType_38 = libs__handle_options__HostEnvTypePrime_114;
#line 570 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_275_275 = libs__handle_options__STATE_VARIABLE_Errors_272_272;
#line 570 "handle_options.m"
      }
#line 571 "handle_options.m"
    else
#line 572 "handle_options.m"
      {
#line 572 "handle_options.m"
        *libs__handle_options__HostEnvType_38 = (MR_Integer) 0;
#line 573 "handle_options.m"
        {
#line 573 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--host-env-type\'\n\t(must be \140posix\', \140cygwin\', \140msys\' or \140windows\').", libs__handle_options__STATE_VARIABLE_Errors_272_272, &libs__handle_options__STATE_VARIABLE_Errors_275_275);
        }
#line 572 "handle_options.m"
      }
#line 578 "handle_options.m"
    {
#line 578 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, *libs__handle_options__STATE_VARIABLE_OptionTable_119, ((MR_Box) ((MR_Integer) 651)), &libs__handle_options__conv23_TargetEnvType0_115);
    }
#line 578 "handle_options.m"
    libs__handle_options__TargetEnvType0_115 = ((MR_Word) libs__handle_options__conv23_TargetEnvType0_115);
#line 580 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__TargetEnvType0_115)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__TargetEnvType0_115, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 580 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 580 "handle_options.m"
      {
#line 580 "handle_options.m"
        libs__handle_options__TargetEnvTypeStr_116 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__TargetEnvType0_115, (MR_Integer) 1)));
#line 581 "handle_options.m"
        {
#line 581 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_env_type_2_p_0(libs__handle_options__TargetEnvTypeStr_116, &libs__handle_options__TargetEnvTypePrime_117);
        }
#line 580 "handle_options.m"
      }
#line 584 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 583 "handle_options.m"
      {
#line 583 "handle_options.m"
        *libs__handle_options__TargetEnvType_39 = libs__handle_options__TargetEnvTypePrime_117;
#line 583 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_280_280 = libs__handle_options__STATE_VARIABLE_Errors_275_275;
#line 583 "handle_options.m"
      }
#line 584 "handle_options.m"
    else
#line 585 "handle_options.m"
      {
#line 585 "handle_options.m"
        *libs__handle_options__TargetEnvType_39 = (MR_Integer) 0;
#line 586 "handle_options.m"
        {
#line 586 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--target-env-type\'\n\t(must be \140posix\', \140cygwin\', \140msys\' or \140windows\').", libs__handle_options__STATE_VARIABLE_Errors_275_275, &libs__handle_options__STATE_VARIABLE_Errors_280_280);
        }
#line 585 "handle_options.m"
      }
#line 592 "handle_options.m"
    libs__handle_options__succeeded = (*libs__handle_options__HostEnvType_38 == (MR_Integer) 0);
#line 592 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 592 "handle_options.m"
      libs__handle_options__succeeded = (*libs__handle_options__CSharp_CompilerType_34 == (MR_Integer) 0);
#line 597 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 593 "handle_options.m"
      {
#line 593 "handle_options.m"
        {
#line 593 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "\140--host-env-type posix\140 is incompatible with\n\140--csharp-compiler-type microsoft\'.", libs__handle_options__STATE_VARIABLE_Errors_280_280, libs__handle_options__STATE_VARIABLE_Errors_121);
#line 593 "handle_options.m"
          return;
        }
#line 593 "handle_options.m"
      }
#line 597 "handle_options.m"
    else
#line 593 "handle_options.m"
      *libs__handle_options__STATE_VARIABLE_Errors_121 = libs__handle_options__STATE_VARIABLE_Errors_280_280;
#line 249 "handle_options.m"
  }
#line 236 "handle_options.m"
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
        MR_Word libs__handle_options__V_48_48;
#line 111 "handle_options.m"
        MR_Word libs__handle_options__V_49_49;
#line 111 "handle_options.m"
        MR_Word libs__handle_options__V_50_50;
#line 111 "handle_options.m"
        MR_Word libs__handle_options__V_51_51;

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
          libs__handle_options__handle_given_options_8_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__handle_options__V_48_48, &libs__handle_options__V_49_49, &libs__handle_options__V_50_50, &libs__handle_options__V_51_51, libs__handle_options__Globals_3);
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
        MR_Word libs__handle_options__TargetEnvType_33;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__CheckErrors_34;

#line 217 "handle_options.m"
        {
#line 217 "handle_options.m"
          libs__handle_options__check_option_values_22_p_0(libs__handle_options__OptionTable0_13, &libs__handle_options__OptionTable_17, &libs__handle_options__Target_18, &libs__handle_options__GC_Method_19, &libs__handle_options__TagsMethod_20, &libs__handle_options__TermNorm_21, &libs__handle_options__Term2Norm_22, &libs__handle_options__TraceLevel_23, &libs__handle_options__TraceSuppress_24, &libs__handle_options__SSTraceLevel_25, &libs__handle_options__MaybeThreadSafe_26, &libs__handle_options__C_CompilerType_27, &libs__handle_options__CSharp_CompilerType_28, &libs__handle_options__ReuseStrategy_29, &libs__handle_options__MaybeILVersion_30, &libs__handle_options__MaybeFeedbackInfo_31, &libs__handle_options__HostEnvType_32, &libs__handle_options__TargetEnvType_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__handle_options__CheckErrors_34);
        }
#line 230 "handle_options.m"
        if ((libs__handle_options__CheckErrors_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 223 "handle_options.m"
          {
#line 224 "handle_options.m"
            {
#line 224 "handle_options.m"
              libs__handle_options__convert_options_to_globals_22_p_0(libs__handle_options__OptionTable_17, libs__handle_options__Target_18, libs__handle_options__GC_Method_19, libs__handle_options__TagsMethod_20, libs__handle_options__TermNorm_21, libs__handle_options__Term2Norm_22, libs__handle_options__TraceLevel_23, libs__handle_options__TraceSuppress_24, libs__handle_options__SSTraceLevel_25, libs__handle_options__MaybeThreadSafe_26, libs__handle_options__C_CompilerType_27, libs__handle_options__CSharp_CompilerType_28, libs__handle_options__ReuseStrategy_29, libs__handle_options__MaybeILVersion_30, libs__handle_options__MaybeFeedbackInfo_31, libs__handle_options__HostEnvType_32, libs__handle_options__TargetEnvType_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__HeadVar__2_2, libs__handle_options__Globals_3);
#line 224 "handle_options.m"
              return;
            }
#line 223 "handle_options.m"
          }
#line 230 "handle_options.m"
        else
#line 231 "handle_options.m"
          {
#line 111 "handle_options.m"
            MR_Word libs__handle_options__V_58_58;
#line 111 "handle_options.m"
            MR_Word libs__handle_options__V_59_59;
#line 111 "handle_options.m"
            MR_Word libs__handle_options__V_60_60;
#line 111 "handle_options.m"
            MR_Word libs__handle_options__V_61_61;

#line 232 "handle_options.m"
            *libs__handle_options__HeadVar__2_2 = libs__handle_options__CheckErrors_34;
#line 111 "handle_options.m"
            {
#line 111 "handle_options.m"
              libs__handle_options__handle_given_options_8_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__handle_options__V_58_58, &libs__handle_options__V_59_59, &libs__handle_options__V_60_60, &libs__handle_options__V_61_61, libs__handle_options__Globals_3);
            }
#line 231 "handle_options.m"
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

#line 2827 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_directory_component_2_p_0_1(
#line 2827 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2827 "handle_options.m"
{
#line 2827 "handle_options.m"
  {
#line 2827 "handle_options.m"
    struct libs__handle_options__grade_directory_component_2_p_0_2_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__grade_directory_component_2_p_0_2_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2827 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__grade_directory_component_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__grade_directory_component_2_p_0_2_env_0__conv0_HeadVar__2_16));
#line 2827 "handle_options.m"
    {
#line 2827 "handle_options.m"
      ((libs__handle_options__env_ptr)->libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont_env_ptr);
#line 2827 "handle_options.m"
      return;
    }
#line 2827 "handle_options.m"
  }
#line 2827 "handle_options.m"
}

#line 2827 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_directory_component_2_p_0_2(
#line 2827 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2827 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 2827 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2827 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 2827 "handle_options.m"
{
#line 2827 "handle_options.m"
  {
#line 2827 "handle_options.m"
    struct libs__handle_options__grade_directory_component_2_p_0_2_env_0_s libs__handle_options__env;

#line 2827 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__grade_directory_component_2_p_0_2_env_0__wrapper_arg_1 = libs__handle_options__wrapper_arg_1;
#line 2827 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont = libs__handle_options__cont;
#line 2827 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
#line 2827 "handle_options.m"
    {
#line 2827 "handle_options.m"
      MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2827 "handle_options.m"
      {
#line 2827 "handle_options.m"
        libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), &(libs__handle_options__env).libs__handle_options__grade_directory_component_2_p_0_2_env_0__conv0_HeadVar__2_16, libs__handle_options__grade_directory_component_2_p_0_1, &libs__handle_options__env);
      }
#line 2827 "handle_options.m"
    }
#line 2827 "handle_options.m"
  }
#line 2827 "handle_options.m"
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
#line 2783 "handle_options.m"
  {
#line 2783 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2783 "handle_options.m"
    MR_String libs__handle_options__Grade0_5;
#line 2783 "handle_options.m"
    MR_Word libs__handle_options__Options_14;
#line 2783 "handle_options.m"
    MR_Word libs__handle_options__Components_15;
#line 2783 "handle_options.m"
    MR_Word libs__handle_options__V_30_30;
#line 2794 "handle_options.m"
    MR_String libs__handle_options__LeftPart_7;
#line 2794 "handle_options.m"
    MR_String libs__handle_options__RightPart_9;
#line 2789 "handle_options.m"
    MR_Integer libs__handle_options__PicRegIndex_6;
#line 2789 "handle_options.m"
    MR_String libs__handle_options__RightPart0_8;
#line 2789 "handle_options.m"
    MR_String libs__handle_options__V_11_11;

#line 2799 "handle_options.m"
    {
#line 2799 "handle_options.m"
      libs__globals__get_options_2_p_0(libs__handle_options__Globals_3, &libs__handle_options__Options_14);
    }
#line 2827 "handle_options.m"
    {
#line 2827 "handle_options.m"
      libs__handle_options__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2827 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_30_30, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[3]));
#line 2827 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_30_30, 1) = ((MR_Box) (libs__handle_options__grade_directory_component_2_p_0_2));
#line 2827 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2827 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_30_30, 3) = ((MR_Box) (libs__handle_options__Options_14));
#line 2827 "handle_options.m"
    }
#line 2827 "handle_options.m"
    {
#line 2827 "handle_options.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &libs__handle_options_scalar_common_1[2], libs__handle_options__V_30_30, &libs__handle_options__Components_15);
    }
#line 2804 "handle_options.m"
    if ((libs__handle_options__Components_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2803 "handle_options.m"
      libs__handle_options__Grade0_5 = (MR_String) "none";
#line 2804 "handle_options.m"
    else
#line 2806 "handle_options.m"
      {
#line 2806 "handle_options.m"
        libs__handle_options__construct_string_2_p_0(libs__handle_options__Components_15, &libs__handle_options__Grade0_5);
      }
#line 2789 "handle_options.m"
    {
#line 2789 "handle_options.m"
      libs__handle_options__succeeded = mercury__string__sub_string_search_3_p_0(libs__handle_options__Grade0_5, (MR_String) ".picreg", &libs__handle_options__PicRegIndex_6);
    }
#line 2789 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2789 "handle_options.m"
      {
#line 2790 "handle_options.m"
        {
#line 2790 "handle_options.m"
          mercury__string__split_4_p_0(libs__handle_options__Grade0_5, libs__handle_options__PicRegIndex_6, &libs__handle_options__LeftPart_7, &libs__handle_options__RightPart0_8);
        }
#line 2791 "handle_options.m"
        libs__handle_options__V_11_11 = (MR_String) ".picreg";
#line 2791 "handle_options.m"
        {
#line 2791 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__append_3_p_1(libs__handle_options__V_11_11, &libs__handle_options__RightPart_9, libs__handle_options__RightPart0_8);
        }
#line 2789 "handle_options.m"
      }
#line 2794 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2793 "handle_options.m"
      {
#line 2793 "handle_options.m"
        *libs__handle_options__Grade_4 = mercury__string__f_43_43_2_f_0(libs__handle_options__LeftPart_7, libs__handle_options__RightPart_9);
      }
#line 2794 "handle_options.m"
    else
#line 2795 "handle_options.m"
      *libs__handle_options__Grade_4 = libs__handle_options__Grade0_5;
#line 2783 "handle_options.m"
  }
#line 80 "handle_options.m"
}

#line 2755 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_4(
#line 2755 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2755 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2755 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2755 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2755 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2755 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5)
#line 2755 "handle_options.m"
{
#line 2755 "handle_options.m"
  {
#line 2755 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2755 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2755 "handle_options.m"
    MR_Word libs__handle_options__conv4_HeadVar__3_25;
#line 2755 "handle_options.m"
    MR_Word libs__handle_options__conv3_HeadVar__5_27;

#line 2755 "handle_options.m"
    {
#line 2755 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__convert_grade_option__2755__1_5_p_0(((MR_String) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv4_HeadVar__3_25, ((MR_Word) libs__handle_options__wrapper_arg_4), &libs__handle_options__conv3_HeadVar__5_27);
    }
#line 2755 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2755 "handle_options.m"
      {
#line 2755 "handle_options.m"
        *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv4_HeadVar__3_25));
#line 2755 "handle_options.m"
        *libs__handle_options__wrapper_arg_5 = ((MR_Box) (libs__handle_options__conv3_HeadVar__5_27));
#line 2755 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2755 "handle_options.m"
      }
#line 2755 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2755 "handle_options.m"
  }
#line 2755 "handle_options.m"
}

#line 3126 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_3(
#line 3126 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3126 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 3126 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 3126 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3)
#line 3126 "handle_options.m"
{
#line 3126 "handle_options.m"
  {
#line 3126 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 3126 "handle_options.m"
    MR_Word libs__handle_options__conv1_HeadVar__3_14;

#line 3126 "handle_options.m"
    {
#line 3126 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__reset_grade_options__3126__1_3_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv1_HeadVar__3_14);
    }
#line 3126 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv1_HeadVar__3_14));
#line 3126 "handle_options.m"
  }
#line 3126 "handle_options.m"
}

#line 3126 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_1(
#line 3126 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 3126 "handle_options.m"
{
#line 3126 "handle_options.m"
  {
#line 3126 "handle_options.m"
    struct libs__handle_options__convert_grade_option_3_p_0_2_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__convert_grade_option_3_p_0_2_env_0_s *) libs__handle_options__env_ptr_arg;

#line 3126 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__convert_grade_option_3_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__convert_grade_option_3_p_0_2_env_0__conv0_HeadVar__1_1));
#line 3126 "handle_options.m"
    {
#line 3126 "handle_options.m"
      ((libs__handle_options__env_ptr)->libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont_env_ptr);
#line 3126 "handle_options.m"
      return;
    }
#line 3126 "handle_options.m"
  }
#line 3126 "handle_options.m"
}

#line 3126 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_2(
#line 3126 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3126 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 3126 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 3126 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 3126 "handle_options.m"
{
#line 3126 "handle_options.m"
  {
#line 3126 "handle_options.m"
    struct libs__handle_options__convert_grade_option_3_p_0_2_env_0_s libs__handle_options__env;

#line 3126 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__convert_grade_option_3_p_0_2_env_0__wrapper_arg_1 = libs__handle_options__wrapper_arg_1;
#line 3126 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont = libs__handle_options__cont;
#line 3126 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
#line 3126 "handle_options.m"
    {
#line 3126 "handle_options.m"
      MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 3126 "handle_options.m"
      {
#line 3126 "handle_options.m"
        libs__handle_options__grade_start_values_1_p_0(&(libs__handle_options__env).libs__handle_options__convert_grade_option_3_p_0_2_env_0__conv0_HeadVar__1_1, libs__handle_options__convert_grade_option_3_p_0_1, &libs__handle_options__env);
      }
#line 3126 "handle_options.m"
    }
#line 3126 "handle_options.m"
  }
#line 3126 "handle_options.m"
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
#line 2751 "handle_options.m"
  {
#line 2751 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2751 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_39_39;
#line 2751 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_42_42;
#line 2751 "handle_options.m"
    MR_Word libs__handle_options__TypeInfo_43_43;
#line 2751 "handle_options.m"
    MR_Word libs__handle_options__TypeInfo_44_44;
#line 2751 "handle_options.m"
    MR_Word libs__handle_options__Options1_7;
#line 2751 "handle_options.m"
    MR_Word libs__handle_options__Components_8;
#line 2751 "handle_options.m"
    MR_Word libs__handle_options__NoComps_9;
#line 2751 "handle_options.m"
    MR_Word libs__handle_options__V_22_22;
#line 2751 "handle_options.m"
    MR_Word libs__handle_options__Chars_67;
#line 3126 "handle_options.m"
    MR_Box libs__handle_options__conv2_Options1_7;
#line 2755 "handle_options.m"
    MR_Word libs__handle_options___FinalComps_21;
#line 2755 "handle_options.m"
    MR_Box libs__handle_options__conv6_Options_6;
#line 2755 "handle_options.m"
    MR_Box libs__handle_options__conv5__FinalComps_21;

#line 3126 "handle_options.m"
    {
#line 3126 "handle_options.m"
      mercury__solutions__aggregate_4_p_0((MR_Word) &libs__handle_options_scalar_common_1[1], (MR_Word) &libs__handle_options_scalar_common_1[0], (MR_Word) &libs__handle_options_scalar_common_1[7], (MR_Word) &libs__handle_options_scalar_common_1[8], ((MR_Box) (libs__handle_options__Options0_5)), &libs__handle_options__conv2_Options1_7);
    }
#line 3126 "handle_options.m"
    libs__handle_options__Options1_7 = ((MR_Word) libs__handle_options__conv2_Options1_7);
#line 3168 "handle_options.m"
    {
#line 3168 "handle_options.m"
      mercury__string__to_char_list_2_p_0(libs__handle_options__GradeString_4, &libs__handle_options__Chars_67);
    }
#line 3169 "handle_options.m"
    {
#line 3169 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__split_grade_string_2_2_p_0(libs__handle_options__Chars_67, &libs__handle_options__Components_8);
    }
#line 2751 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2751 "handle_options.m"
      {
#line 16932 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_39_39 = (MR_Word) &libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0;
#line 2754 "handle_options.m"
        {
#line 2754 "handle_options.m"
          mercury__set__init_1_p_0(libs__handle_options__TypeCtorInfo_39_39, &libs__handle_options__NoComps_9);
        }
#line 2755 "handle_options.m"
        libs__handle_options__V_22_22 = (MR_Word) &libs__handle_options_scalar_common_1[9];
#line 16941 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 16943 "libs.handle_options.c"
        libs__handle_options__TypeInfo_43_43 = (MR_Word) &libs__handle_options_scalar_common_1[0];
#line 16945 "libs.handle_options.c"
        libs__handle_options__TypeInfo_44_44 = (MR_Word) &libs__handle_options_scalar_common_2[0];
#line 2755 "handle_options.m"
        {
#line 2755 "handle_options.m"
          libs__handle_options__succeeded = mercury__list__foldl2_6_p_4(libs__handle_options__TypeCtorInfo_42_42, libs__handle_options__TypeInfo_43_43, libs__handle_options__TypeInfo_44_44, libs__handle_options__V_22_22, libs__handle_options__Components_8, ((MR_Box) (libs__handle_options__Options1_7)), &libs__handle_options__conv6_Options_6, ((MR_Box) (libs__handle_options__NoComps_9)), &libs__handle_options__conv5__FinalComps_21);
        }
#line 2755 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 2755 "handle_options.m"
          {
#line 2755 "handle_options.m"
            *libs__handle_options__Options_6 = ((MR_Word) libs__handle_options__conv6_Options_6);
#line 2755 "handle_options.m"
            libs__handle_options___FinalComps_21 = ((MR_Word) libs__handle_options__conv5__FinalComps_21);
#line 2755 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 2755 "handle_options.m"
          }
#line 2751 "handle_options.m"
      }
#line 2751 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2751 "handle_options.m"
  }
#line 75 "handle_options.m"
}

#line 2827 "handle_options.m"
static void MR_CALL 
libs__handle_options__compute_grade_2_p_0_1(
#line 2827 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2827 "handle_options.m"
{
#line 2827 "handle_options.m"
  {
#line 2827 "handle_options.m"
    struct libs__handle_options__compute_grade_2_p_0_2_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__compute_grade_2_p_0_2_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2827 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__compute_grade_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__compute_grade_2_p_0_2_env_0__conv0_HeadVar__2_16));
#line 2827 "handle_options.m"
    {
#line 2827 "handle_options.m"
      ((libs__handle_options__env_ptr)->libs__handle_options__compute_grade_2_p_0_2_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__compute_grade_2_p_0_2_env_0__cont_env_ptr);
#line 2827 "handle_options.m"
      return;
    }
#line 2827 "handle_options.m"
  }
#line 2827 "handle_options.m"
}

#line 2827 "handle_options.m"
static void MR_CALL 
libs__handle_options__compute_grade_2_p_0_2(
#line 2827 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2827 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 2827 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2827 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 2827 "handle_options.m"
{
#line 2827 "handle_options.m"
  {
#line 2827 "handle_options.m"
    struct libs__handle_options__compute_grade_2_p_0_2_env_0_s libs__handle_options__env;

#line 2827 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__compute_grade_2_p_0_2_env_0__wrapper_arg_1 = libs__handle_options__wrapper_arg_1;
#line 2827 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__compute_grade_2_p_0_2_env_0__cont = libs__handle_options__cont;
#line 2827 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__compute_grade_2_p_0_2_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
#line 2827 "handle_options.m"
    {
#line 2827 "handle_options.m"
      MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2827 "handle_options.m"
      {
#line 2827 "handle_options.m"
        libs__handle_options__IntroducedFrom__pred__compute_grade_components__2827__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), &(libs__handle_options__env).libs__handle_options__compute_grade_2_p_0_2_env_0__conv0_HeadVar__2_16, libs__handle_options__compute_grade_2_p_0_1, &libs__handle_options__env);
      }
#line 2827 "handle_options.m"
    }
#line 2827 "handle_options.m"
  }
#line 2827 "handle_options.m"
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
#line 2798 "handle_options.m"
  {
#line 2798 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2798 "handle_options.m"
    MR_Word libs__handle_options__Options_5;
#line 2798 "handle_options.m"
    MR_Word libs__handle_options__Components_6;
#line 2798 "handle_options.m"
    MR_Word libs__handle_options__V_21_21;

#line 2799 "handle_options.m"
    {
#line 2799 "handle_options.m"
      libs__globals__get_options_2_p_0(libs__handle_options__Globals_3, &libs__handle_options__Options_5);
    }
#line 2827 "handle_options.m"
    {
#line 2827 "handle_options.m"
      libs__handle_options__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2827 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_21_21, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[3]));
#line 2827 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_21_21, 1) = ((MR_Box) (libs__handle_options__compute_grade_2_p_0_2));
#line 2827 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2827 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_21_21, 3) = ((MR_Box) (libs__handle_options__Options_5));
#line 2827 "handle_options.m"
    }
#line 2827 "handle_options.m"
    {
#line 2827 "handle_options.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &libs__handle_options_scalar_common_1[2], libs__handle_options__V_21_21, &libs__handle_options__Components_6);
    }
#line 2804 "handle_options.m"
    if ((libs__handle_options__Components_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2803 "handle_options.m"
      *libs__handle_options__Grade_4 = (MR_String) "none";
#line 2804 "handle_options.m"
    else
#line 2806 "handle_options.m"
      {
#line 2806 "handle_options.m"
        libs__handle_options__construct_string_2_p_0(libs__handle_options__Components_6, libs__handle_options__Grade_4);
#line 2806 "handle_options.m"
        return;
      }
#line 2798 "handle_options.m"
  }
#line 71 "handle_options.m"
}

#line 67 "handle_options.m"
void MR_CALL 
libs__handle_options__long_usage_2_p_0(void)
#line 67 "handle_options.m"
{
#line 2554 "handle_options.m"
  {
#line 2554 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2554 "handle_options.m"
    MR_String libs__handle_options__Version_4;
#line 2554 "handle_options.m"
    MR_Word libs__handle_options__V_7_7;
#line 2554 "handle_options.m"
    MR_Word libs__handle_options__V_10_10;

#line 2558 "handle_options.m"
    {
#line 2558 "handle_options.m"
      mercury__library__version_1_p_0(&libs__handle_options__Version_4);
    }
#line 2559 "handle_options.m"
    {
#line 2559 "handle_options.m"
      libs__handle_options__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2559 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_10_10, 0) = ((MR_Box) (libs__handle_options__Version_4));
#line 2559 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[198])));
#line 2559 "handle_options.m"
    }
#line 2559 "handle_options.m"
    {
#line 2559 "handle_options.m"
      libs__handle_options__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2559 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_7_7, 0) = ((MR_Box) ((MR_String) "Name: mmc -- Melbourne Mercury Compiler, version "));
#line 2559 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_7_7, 1) = ((MR_Box) (libs__handle_options__V_10_10));
#line 2559 "handle_options.m"
    }
#line 2559 "handle_options.m"
    {
#line 2559 "handle_options.m"
      mercury__io__write_strings_3_p_0(libs__handle_options__V_7_7);
    }
#line 2561 "handle_options.m"
    {
#line 2561 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "Copyright: Copyright (C) 1993-2013 The University of Melbourne\n");
    }
#line 2563 "handle_options.m"
    {
#line 2563 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "Usage: mmc [<options>] <arguments>\n");
    }
#line 2564 "handle_options.m"
    {
#line 2564 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "Arguments:\n");
    }
#line 2565 "handle_options.m"
    {
#line 2565 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "\tArguments ending in \140.m\' are assumed to be source file names.\n");
    }
#line 2567 "handle_options.m"
    {
#line 2567 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "\tArguments that do not end in \140.m\' are assumed to be module names.\n");
    }
#line 2569 "handle_options.m"
    {
#line 2569 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "\tArguments in the form \100file are replaced with the contents of the file.\n");
    }
#line 2571 "handle_options.m"
    {
#line 2571 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "Options:\n");
    }
#line 2572 "handle_options.m"
    {
#line 2572 "handle_options.m"
      libs__options__options_help_2_p_0();
#line 2572 "handle_options.m"
      return;
    }
#line 2554 "handle_options.m"
  }
#line 67 "handle_options.m"
}

#line 63 "handle_options.m"
void MR_CALL 
libs__handle_options__usage_2_p_0(void)
#line 63 "handle_options.m"
{
#line 2538 "handle_options.m"
  {
#line 2538 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2538 "handle_options.m"
    MR_Word libs__handle_options__AlreadyPrinted_4;

#line 2535 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#line 2535 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 17219 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2535 "handle_options.m"
}
#line 2535 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0

	MR_Word X;

		{
#line 2535 "handle_options.m"
X = libs__handle_options__mutable_variable_already_printed_usage;

#line 17235 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
	 libs__handle_options__AlreadyPrinted_4  = X;
#line 2535 "handle_options.m"
}
#line 2535 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#line 2535 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 17254 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2535 "handle_options.m"
}
#line 2550 "handle_options.m"
    if ((libs__handle_options__AlreadyPrinted_4 == (MR_Integer) 0))
#line 2543 "handle_options.m"
      {
#line 2543 "handle_options.m"
        MR_String libs__handle_options__Version_22;
#line 2543 "handle_options.m"
        MR_Word libs__handle_options__V_23_23;
#line 2543 "handle_options.m"
        MR_Word libs__handle_options__V_26_26;

#line 2529 "handle_options.m"
        {
#line 2529 "handle_options.m"
          mercury__library__version_1_p_0(&libs__handle_options__Version_22);
        }
#line 2531 "handle_options.m"
        {
#line 2531 "handle_options.m"
          libs__handle_options__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2531 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_26_26, 0) = ((MR_Box) (libs__handle_options__Version_22));
#line 2531 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[3])));
#line 2531 "handle_options.m"
        }
#line 2530 "handle_options.m"
        {
#line 2530 "handle_options.m"
          libs__handle_options__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2530 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_23_23, 0) = ((MR_Box) ((MR_String) "Mercury Compiler, version "));
#line 2530 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_23_23, 1) = ((MR_Box) (libs__handle_options__V_26_26));
#line 2530 "handle_options.m"
        }
#line 2530 "handle_options.m"
        {
#line 2530 "handle_options.m"
          mercury__io__write_strings_3_p_0(libs__handle_options__V_23_23);
        }
#line 2545 "handle_options.m"
        {
#line 2545 "handle_options.m"
          mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[5]));
        }
#line 2535 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#line 2535 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 17318 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2535 "handle_options.m"
}
#line 2535 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0

	MR_Word X;

	X =  (MR_Integer) 1 ;
		{
#line 2535 "handle_options.m"
libs__handle_options__mutable_variable_already_printed_usage = X;

#line 17335 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2535 "handle_options.m"
}
#line 2535 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#line 2535 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 17353 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2535 "handle_options.m"
}
#line 2543 "handle_options.m"
      }
#line 2550 "handle_options.m"
    else
#line 2551 "handle_options.m"
      {
#line 2551 "handle_options.m"
      }
#line 2538 "handle_options.m"
  }
#line 63 "handle_options.m"
}

#line 2524 "handle_options.m"
static void MR_CALL 
libs__handle_options__usage_errors_3_p_0_1(
#line 2524 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2524 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2524 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2524 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3)
#line 2524 "handle_options.m"
{
#line 2524 "handle_options.m"
  {
#line 2524 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2524 "handle_options.m"
    {
#line 2524 "handle_options.m"
      parse_tree__error_util__write_error_plain_with_progname_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
#line 2524 "handle_options.m"
      return;
    }
#line 2524 "handle_options.m"
  }
#line 2524 "handle_options.m"
}

#line 59 "handle_options.m"
void MR_CALL 
libs__handle_options__usage_errors_3_p_0(
#line 59 "handle_options.m"
  MR_Word libs__handle_options__Errors_4)
#line 59 "handle_options.m"
{
#line 2522 "handle_options.m"
  {
#line 2522 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2522 "handle_options.m"
    MR_String libs__handle_options__ProgName_6;
#line 2522 "handle_options.m"
    MR_Word libs__handle_options__V_11_11;
#line 2524 "handle_options.m"
    MR_Box libs__handle_options__conv0_STATE_VARIABLE_IO_12_12;

#line 2523 "handle_options.m"
    {
#line 2523 "handle_options.m"
      mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &libs__handle_options__ProgName_6);
    }
#line 2524 "handle_options.m"
    {
#line 2524 "handle_options.m"
      libs__handle_options__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2524 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_11_11, 0) = ((MR_Box) (&libs__handle_options_scalar_common_5[1]));
#line 2524 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_11_11, 1) = ((MR_Box) (libs__handle_options__usage_errors_3_p_0_1));
#line 2524 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2524 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_11_11, 3) = ((MR_Box) (libs__handle_options__ProgName_6));
#line 2524 "handle_options.m"
    }
#line 2524 "handle_options.m"
    {
#line 2524 "handle_options.m"
      mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, libs__handle_options__V_11_11, libs__handle_options__Errors_4, ((MR_Box) ((MR_Integer) 0)), &libs__handle_options__conv0_STATE_VARIABLE_IO_12_12);
    }
#line 2525 "handle_options.m"
    {
#line 2525 "handle_options.m"
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
#line 2526 "handle_options.m"
    {
#line 2526 "handle_options.m"
      libs__handle_options__usage_2_p_0();
#line 2526 "handle_options.m"
      return;
    }
#line 2522 "handle_options.m"
  }
#line 59 "handle_options.m"
}

#line 54 "handle_options.m"
void MR_CALL 
libs__handle_options__display_compiler_version_2_p_0(void)
#line 54 "handle_options.m"
{
#line 2528 "handle_options.m"
  {
#line 2528 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2528 "handle_options.m"
    MR_String libs__handle_options__Version_4;
#line 2528 "handle_options.m"
    MR_Word libs__handle_options__V_7_7;
#line 2528 "handle_options.m"
    MR_Word libs__handle_options__V_10_10;

#line 2529 "handle_options.m"
    {
#line 2529 "handle_options.m"
      mercury__library__version_1_p_0(&libs__handle_options__Version_4);
    }
#line 2531 "handle_options.m"
    {
#line 2531 "handle_options.m"
      libs__handle_options__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2531 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_10_10, 0) = ((MR_Box) (libs__handle_options__Version_4));
#line 2531 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[3])));
#line 2531 "handle_options.m"
    }
#line 2530 "handle_options.m"
    {
#line 2530 "handle_options.m"
      libs__handle_options__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2530 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_7_7, 0) = ((MR_Box) ((MR_String) "Mercury Compiler, version "));
#line 2530 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_7_7, 1) = ((MR_Box) (libs__handle_options__V_10_10));
#line 2530 "handle_options.m"
    }
#line 2530 "handle_options.m"
    {
#line 2530 "handle_options.m"
      mercury__io__write_strings_3_p_0(libs__handle_options__V_7_7);
#line 2530 "handle_options.m"
      return;
    }
#line 2528 "handle_options.m"
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
