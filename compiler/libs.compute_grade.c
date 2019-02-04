/*
** Automatically generated from `compute_grade.m'
** by the Mercury compiler,
** version DEV
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
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0_s {
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__Options_3;
  MR_Word * libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__LambdaHeadVar__1_16;
  MR_Cont libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__cont;
  void * libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__cont_env_ptr;
  MR_bool libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__succeeded;
  MR_String libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__Name_6;
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__Comp_7;
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__CompOpts_8;
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__MaybeTargets_9;
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__IncludeInGradeString_10;
  jmp_buf libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__commit_0;
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__Opt_11;
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__Value_12;
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__Var_17;
  MR_Box libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__conv0_Var_17;
  jmp_buf libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__commit_1;
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__TypeCtorInfo_23_23;
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__TypeCtorInfo_24_24;
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__Target_14;
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__Var_18;
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__Var_27;
  MR_Box libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__conv2_Target_14;
};

struct libs__compute_grade__must_not_contain_2_p_0_env_0_s {
  MR_Word libs__compute_grade__must_not_contain_2_p_0_env_0__OmitComponents_3;
  MR_Word libs__compute_grade__must_not_contain_2_p_0_env_0__GradeComponents_4;
  MR_bool libs__compute_grade__must_not_contain_2_p_0_env_0__succeeded;
  jmp_buf libs__compute_grade__must_not_contain_2_p_0_env_0__commit_0;
  MR_Word libs__compute_grade__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6;
  MR_String libs__compute_grade__must_not_contain_2_p_0_env_0__Component_5;
  MR_Box libs__compute_grade__must_not_contain_2_p_0_env_0__conv0_Component_5;
};

struct libs__compute_grade__must_contain_2_p_0_env_0_s {
  MR_Word libs__compute_grade__must_contain_2_p_0_env_0__IncludeComponents_3;
  MR_Word libs__compute_grade__must_contain_2_p_0_env_0__GradeComponents_4;
  MR_bool libs__compute_grade__must_contain_2_p_0_env_0__succeeded;
  jmp_buf libs__compute_grade__must_contain_2_p_0_env_0__commit_0;
  MR_Word libs__compute_grade__must_contain_2_p_0_env_0__TypeCtorInfo_6_6;
  MR_String libs__compute_grade__must_contain_2_p_0_env_0__Component_5;
  MR_Box libs__compute_grade__must_contain_2_p_0_env_0__conv0_Component_5;
};

struct libs__compute_grade__grade_directory_component_2_p_0_2_env_0_s {
  MR_Box * libs__compute_grade__grade_directory_component_2_p_0_2_env_0__wrapper_arg_1;
  MR_Cont libs__compute_grade__grade_directory_component_2_p_0_2_env_0__cont;
  void * libs__compute_grade__grade_directory_component_2_p_0_2_env_0__cont_env_ptr;
  MR_Word libs__compute_grade__grade_directory_component_2_p_0_2_env_0__conv0_LambdaHeadVar__1_16;
};

struct libs__compute_grade__convert_grade_option_3_p_0_2_env_0_s {
  MR_Box * libs__compute_grade__convert_grade_option_3_p_0_2_env_0__wrapper_arg_1;
  MR_Cont libs__compute_grade__convert_grade_option_3_p_0_2_env_0__cont;
  void * libs__compute_grade__convert_grade_option_3_p_0_2_env_0__cont_env_ptr;
  MR_Word libs__compute_grade__convert_grade_option_3_p_0_2_env_0__conv0_HeadVar__1_1;
};

struct libs__compute_grade__compute_grade_2_p_0_2_env_0_s {
  MR_Box * libs__compute_grade__compute_grade_2_p_0_2_env_0__wrapper_arg_1;
  MR_Cont libs__compute_grade__compute_grade_2_p_0_2_env_0__cont;
  void * libs__compute_grade__compute_grade_2_p_0_2_env_0__cont_env_ptr;
  MR_Word libs__compute_grade__compute_grade_2_p_0_2_env_0__conv0_LambdaHeadVar__1_16;
};


static const MR_FA_PseudoTypeInfo_Struct1 libs__compute_grade__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 libs__compute_grade__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 libs__compute_grade__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct2 libs__compute_grade____vpti_pred_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 libs__compute_grade__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0;

static const MR_FA_PseudoTypeInfo_Struct2 libs__compute_grade__pair__pti_pair_2__plain_libs__compute_grade__type_ctor_info_grade_component_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 libs__compute_grade__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0;

static const MR_FA_PseudoTypeInfo_Struct1 libs__compute_grade__set_ordlist__pti_set_ordlist_1__plain_libs__compute_grade__type_ctor_info_grade_component_0;

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_0;

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_1;

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_2;

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_3;

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_4;

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_5;

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_6;

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_7;

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_8;

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_9;

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_10;

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_11;

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_12;

static const MR_EnumFunctorDescPtr libs__compute_grade__libs__compute_grade__enum_value_ordered_grade_component_0[13];

static const MR_EnumFunctorDescPtr libs__compute_grade__libs__compute_grade__enum_name_ordered_grade_component_0[13];

static const MR_Integer libs__compute_grade__libs__compute_grade__functor_number_map_grade_component_0[13];

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__reset_grade_options__763__1_3_p_0(
  MR_Word libs__compute_grade__LambdaHeadVar__1_12,
  MR_Word libs__compute_grade__LambdaHeadVar__2_13,
  MR_Word * libs__compute_grade__LambdaHeadVar__3_14);

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_2(
  void * libs__compute_grade__env_ptr_arg);

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_4(
  void * libs__compute_grade__env_ptr_arg);

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_3(
  void * libs__compute_grade__env_ptr_arg);

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_5(
  void * libs__compute_grade__env_ptr_arg);

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_6(
  void * libs__compute_grade__env_ptr_arg);

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_8(
  void * libs__compute_grade__env_ptr_arg);

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_7(
  void * libs__compute_grade__env_ptr_arg);

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_9(
  void * libs__compute_grade__env_ptr_arg);

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_1(
  void * libs__compute_grade__env_ptr_arg);

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0(
  MR_Word libs__compute_grade__Options_3,
  MR_Word * libs__compute_grade__LambdaHeadVar__1_16,
  MR_Cont libs__compute_grade__cont,
  void * libs__compute_grade__cont_env_ptr);

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__add_option_list__447__1_3_p_0(
  MR_Word libs__compute_grade__LambdaHeadVar__1_13,
  MR_Word libs__compute_grade__LambdaHeadVar__2_14,
  MR_Word * libs__compute_grade__LambdaHeadVar__3_15);

static MR_bool MR_CALL 
libs__compute_grade__IntroducedFrom__pred__grade_string_to_comp_strings__353__1_2_p_0(
  MR_String libs__compute_grade__LambdaHeadVar__1_20,
  MR_String * libs__compute_grade__LambdaHeadVar__2_21);

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__convert_grade_option__423__1_5_p_0_2(
  MR_Box libs__compute_grade__closure_arg,
  MR_Box libs__compute_grade__wrapper_arg_1,
  MR_Box libs__compute_grade__wrapper_arg_2,
  MR_Box * libs__compute_grade__wrapper_arg_3);

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__convert_grade_option__423__1_5_p_0_1(
  MR_Box libs__compute_grade__closure_arg,
  MR_Box libs__compute_grade__wrapper_arg_1,
  MR_Box libs__compute_grade__wrapper_arg_2,
  MR_Box * libs__compute_grade__wrapper_arg_3);

static MR_bool MR_CALL 
libs__compute_grade__IntroducedFrom__pred__convert_grade_option__423__1_5_p_0(
  MR_String libs__compute_grade__LambdaHeadVar__1_23,
  MR_Word libs__compute_grade__LambdaHeadVar__2_24,
  MR_Word * libs__compute_grade__LambdaHeadVar__3_25,
  MR_Word libs__compute_grade__LambdaHeadVar__4_26,
  MR_Word * libs__compute_grade__LambdaHeadVar__5_27);

static void MR_CALL 
libs__compute_grade____Compare____grade_component_0_0(
  MR_Word * libs__compute_grade__HeadVar__1_1,
  MR_Word libs__compute_grade__HeadVar__2_2,
  MR_Word libs__compute_grade__HeadVar__3_3);

static MR_bool MR_CALL 
libs__compute_grade____Unify____grade_component_0_0(
  MR_Word libs__compute_grade__HeadVar__2_1,
  MR_Word libs__compute_grade__HeadVar__2_2);

static MR_bool MR_CALL 
libs__compute_grade__char_is_not_2_p_0(
  MR_Char libs__compute_grade__A_3,
  MR_Char libs__compute_grade__B_4);

static void MR_CALL 
libs__compute_grade__grade_start_values_1_p_0(
  MR_Word * libs__compute_grade__HeadVar__1_1,
  MR_Cont libs__compute_grade__cont,
  void * libs__compute_grade__cont_env_ptr);

static void MR_CALL 
libs__compute_grade__grade_component_table_5_p_2(
  MR_String * libs__compute_grade__HeadVar__1_1,
  MR_Word * libs__compute_grade__HeadVar__2_2,
  MR_Word * libs__compute_grade__HeadVar__3_3,
  MR_Word * libs__compute_grade__HeadVar__4_4,
  MR_Word * libs__compute_grade__HeadVar__5_5,
  MR_Cont libs__compute_grade__cont,
  void * libs__compute_grade__cont_env_ptr);

static void MR_CALL 
libs__compute_grade__must_not_contain_2_p_0_1(
  void * libs__compute_grade__env_ptr_arg);

static void MR_CALL 
libs__compute_grade__must_not_contain_2_p_0_3(
  void * libs__compute_grade__env_ptr_arg);

static void MR_CALL 
libs__compute_grade__must_not_contain_2_p_0_2(
  void * libs__compute_grade__env_ptr_arg);

static void MR_CALL 
libs__compute_grade__must_not_contain_2_p_0_4(
  void * libs__compute_grade__env_ptr_arg);

static MR_bool MR_CALL 
libs__compute_grade__must_not_contain_2_p_0(
  MR_Word libs__compute_grade__OmitComponents_3,
  MR_Word libs__compute_grade__GradeComponents_4);

static void MR_CALL 
libs__compute_grade__must_contain_2_p_0_1(
  void * libs__compute_grade__env_ptr_arg);

static void MR_CALL 
libs__compute_grade__must_contain_2_p_0_3(
  void * libs__compute_grade__env_ptr_arg);

static void MR_CALL 
libs__compute_grade__must_contain_2_p_0_2(
  void * libs__compute_grade__env_ptr_arg);

static void MR_CALL 
libs__compute_grade__must_contain_2_p_0_4(
  void * libs__compute_grade__env_ptr_arg);

static MR_bool MR_CALL 
libs__compute_grade__must_contain_2_p_0(
  MR_Word libs__compute_grade__IncludeComponents_3,
  MR_Word libs__compute_grade__GradeComponents_4);

static MR_bool MR_CALL 
libs__compute_grade__filter_grade_7_p_0_1(
  MR_Box libs__compute_grade__closure_arg,
  MR_Box libs__compute_grade__wrapper_arg_1,
  MR_Box * libs__compute_grade__wrapper_arg_2);

static void MR_CALL 
libs__compute_grade__filter_grade_7_p_0(
  MR_Word libs__compute_grade__FilterPred_8,
  MR_Word libs__compute_grade__CondComponents_9,
  MR_String libs__compute_grade__GradeString_10,
  MR_Word libs__compute_grade__STATE_VARIABLE_Grades_0_15,
  MR_Word * libs__compute_grade__STATE_VARIABLE_Grades_16,
  MR_Word libs__compute_grade__STATE_VARIABLE_Specs_0_17,
  MR_Word * libs__compute_grade__STATE_VARIABLE_Specs_18);

static void MR_CALL 
libs__compute_grade__string_to_grade_component_6_p_0(
  MR_String libs__compute_grade__FilterDesc_7,
  MR_String libs__compute_grade__Comp_8,
  MR_Word libs__compute_grade__STATE_VARIABLE_Comps_0_16,
  MR_Word * libs__compute_grade__STATE_VARIABLE_Comps_17,
  MR_Word libs__compute_grade__STATE_VARIABLE_Specs_0_18,
  MR_Word * libs__compute_grade__STATE_VARIABLE_Specs_19);

static MR_bool MR_CALL 
libs__compute_grade__grade_component_table_5_p_0(
  MR_String libs__compute_grade__HeadVar__1_1,
  MR_Word * libs__compute_grade__HeadVar__2_2,
  MR_Word * libs__compute_grade__HeadVar__3_3,
  MR_Word * libs__compute_grade__HeadVar__4_4,
  MR_Word * libs__compute_grade__HeadVar__5_5);

static void MR_CALL 
libs__compute_grade__grade_directory_component_2_p_0_1(
  void * libs__compute_grade__env_ptr_arg);

static void MR_CALL 
libs__compute_grade__grade_directory_component_2_p_0_2(
  MR_Box libs__compute_grade__closure_arg,
  MR_Box * libs__compute_grade__wrapper_arg_1,
  MR_Cont libs__compute_grade__cont,
  void * libs__compute_grade__cont_env_ptr);

static MR_bool MR_CALL 
libs__compute_grade__convert_grade_option_3_p_0_4(
  MR_Box libs__compute_grade__closure_arg,
  MR_Box libs__compute_grade__wrapper_arg_1,
  MR_Box libs__compute_grade__wrapper_arg_2,
  MR_Box * libs__compute_grade__wrapper_arg_3,
  MR_Box libs__compute_grade__wrapper_arg_4,
  MR_Box * libs__compute_grade__wrapper_arg_5);

static void MR_CALL 
libs__compute_grade__convert_grade_option_3_p_0_3(
  MR_Box libs__compute_grade__closure_arg,
  MR_Box libs__compute_grade__wrapper_arg_1,
  MR_Box libs__compute_grade__wrapper_arg_2,
  MR_Box * libs__compute_grade__wrapper_arg_3);

static void MR_CALL 
libs__compute_grade__convert_grade_option_3_p_0_1(
  void * libs__compute_grade__env_ptr_arg);

static void MR_CALL 
libs__compute_grade__convert_grade_option_3_p_0_2(
  MR_Box libs__compute_grade__closure_arg,
  MR_Box * libs__compute_grade__wrapper_arg_1,
  MR_Cont libs__compute_grade__cont,
  void * libs__compute_grade__cont_env_ptr);

static MR_bool MR_CALL 
libs__compute_grade__split_grade_string_2_2_p_0_1(
  MR_Box libs__compute_grade__closure_arg,
  MR_Box libs__compute_grade__wrapper_arg_1);

static MR_bool MR_CALL 
libs__compute_grade__split_grade_string_2_2_p_0(
  MR_Word libs__compute_grade__HeadVar__1_1,
  MR_Word * libs__compute_grade__HeadVar__2_2);

static void MR_CALL 
libs__compute_grade__compute_grade_2_p_0_1(
  void * libs__compute_grade__env_ptr_arg);

static void MR_CALL 
libs__compute_grade__compute_grade_2_p_0_2(
  MR_Box libs__compute_grade__closure_arg,
  MR_Box * libs__compute_grade__wrapper_arg_1,
  MR_Cont libs__compute_grade__cont,
  void * libs__compute_grade__cont_env_ptr);

static void MR_CALL 
libs__compute_grade__construct_string_2_p_0(
  MR_Word libs__compute_grade__HeadVar__1_1,
  MR_String * libs__compute_grade__HeadVar__2_2);

static void MR_CALL 
libs__compute_grade__postprocess_options_libgrades_4_p_0_6(
  MR_Box libs__compute_grade__closure_arg,
  MR_Box libs__compute_grade__wrapper_arg_1,
  MR_Box libs__compute_grade__wrapper_arg_2,
  MR_Box * libs__compute_grade__wrapper_arg_3,
  MR_Box libs__compute_grade__wrapper_arg_4,
  MR_Box * libs__compute_grade__wrapper_arg_5);

static MR_bool MR_CALL 
libs__compute_grade__postprocess_options_libgrades_4_p_0_5(
  MR_Box libs__compute_grade__closure_arg,
  MR_Box libs__compute_grade__wrapper_arg_1,
  MR_Box libs__compute_grade__wrapper_arg_2);

static void MR_CALL 
libs__compute_grade__postprocess_options_libgrades_4_p_0_4(
  MR_Box libs__compute_grade__closure_arg,
  MR_Box libs__compute_grade__wrapper_arg_1,
  MR_Box libs__compute_grade__wrapper_arg_2,
  MR_Box * libs__compute_grade__wrapper_arg_3,
  MR_Box libs__compute_grade__wrapper_arg_4,
  MR_Box * libs__compute_grade__wrapper_arg_5);

static MR_bool MR_CALL 
libs__compute_grade__postprocess_options_libgrades_4_p_0_3(
  MR_Box libs__compute_grade__closure_arg,
  MR_Box libs__compute_grade__wrapper_arg_1,
  MR_Box libs__compute_grade__wrapper_arg_2);

static void MR_CALL 
libs__compute_grade__postprocess_options_libgrades_4_p_0_2(
  MR_Box libs__compute_grade__closure_arg,
  MR_Box libs__compute_grade__wrapper_arg_1,
  MR_Box libs__compute_grade__wrapper_arg_2,
  MR_Box * libs__compute_grade__wrapper_arg_3,
  MR_Box libs__compute_grade__wrapper_arg_4,
  MR_Box * libs__compute_grade__wrapper_arg_5);

static void MR_CALL 
libs__compute_grade__postprocess_options_libgrades_4_p_0_1(
  MR_Box libs__compute_grade__closure_arg,
  MR_Box libs__compute_grade__wrapper_arg_1,
  MR_Box libs__compute_grade__wrapper_arg_2,
  MR_Box * libs__compute_grade__wrapper_arg_3,
  MR_Box libs__compute_grade__wrapper_arg_4,
  MR_Box * libs__compute_grade__wrapper_arg_5);

static MR_bool MR_CALL 
libs__compute_grade____Unify____grade_component_0_0_10001(
  MR_Box libs__compute_grade__wrapper_arg_1,
  MR_Box libs__compute_grade__wrapper_arg_2);

static void MR_CALL 
libs__compute_grade____Compare____grade_component_0_0_10001(
  MR_Box * libs__compute_grade__wrapper_arg_1,
  MR_Box libs__compute_grade__wrapper_arg_2,
  MR_Box libs__compute_grade__wrapper_arg_3);


static /* final */ const MR_Box libs__compute_grade_scalar_common_1[210][2];

static /* final */ const MR_Box libs__compute_grade_scalar_common_2[11][3];

static /* final */ const MR_Box libs__compute_grade_scalar_common_3[6][1];

static /* final */ const MR_Box libs__compute_grade_scalar_common_4[1][9];

static /* final */ const MR_Box libs__compute_grade_scalar_common_5[4][4];

static /* final */ const MR_Box libs__compute_grade_scalar_common_6[4][5];

static /* final */ const MR_Box libs__compute_grade_scalar_common_7[1][10];

static /* final */ const MR_Box libs__compute_grade_scalar_common_8[1][6];

static /* final */ const MR_Box libs__compute_grade_scalar_common_9[1][8];


/* sealed */ struct libs__compute_grade__vector_common_type_10_0_s {
  const MR_Word libs__compute_grade__vector_common_type_10_0__vct_10_f_0;
  const MR_Word libs__compute_grade__vector_common_type_10_0__vct_10_f_1;
  const MR_Word libs__compute_grade__vector_common_type_10_0__vct_10_f_2;
  const MR_Word libs__compute_grade__vector_common_type_10_0__vct_10_f_3;
};

static /* final */ const struct libs__compute_grade__vector_common_type_10_0_s libs__compute_grade_vector_common_10[47];

/* sealed */ struct libs__compute_grade__vector_common_type_11_0_s {
  const MR_String libs__compute_grade__vector_common_type_11_0__vct_11_f_0;
  const MR_Word libs__compute_grade__vector_common_type_11_0__vct_11_f_1;
  const MR_Word libs__compute_grade__vector_common_type_11_0__vct_11_f_2;
  const MR_Word libs__compute_grade__vector_common_type_11_0__vct_11_f_3;
  const MR_Word libs__compute_grade__vector_common_type_11_0__vct_11_f_4;
};

static /* final */ const struct libs__compute_grade__vector_common_type_11_0_s libs__compute_grade_vector_common_11[47];

/* sealed */ struct libs__compute_grade__vector_common_type_12_0_s {
  const MR_Word libs__compute_grade__vector_common_type_12_0__vct_12_f_0;
};

static /* final */ const struct libs__compute_grade__vector_common_type_12_0_s libs__compute_grade_vector_common_12[29];



static /* final */ const MR_Box libs__compute_grade_scalar_common_1[210][2] = {
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
    ((MR_Box) ((MR_Integer) 226)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[11])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 265)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 14 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[13])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Integer) 266)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 16 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[15])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Integer) 264)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 18 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[17])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Integer) 261)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 20 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[19])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Integer) 260)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 22 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[21])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_Integer) 262)),
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
    ((MR_Box) ((MR_Integer) 261)),
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
    ((MR_Box) ((MR_Integer) 265)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 32 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[31])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_Integer) 264)),
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
    ((MR_Box) ((MR_Integer) 260)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 38 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[37])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_Integer) 262)),
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
    ((MR_Box) ((MR_Integer) 198)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 44 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[43])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_Integer) 197)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 46 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[45])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_Integer) 198)),
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
    ((MR_Box) ((MR_Integer) 233)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 51 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[50])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_Integer) 232)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 53 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[52])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[51])))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_Integer) 231)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 55 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[54])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[53])))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_Integer) 232)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 57 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[56])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[51])))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_Integer) 231)),
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
    ((MR_Box) ((MR_Integer) 239)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 68 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[67])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 69 */
  {
    ((MR_Box) ((MR_Integer) 238)),
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
    ((MR_Box) ((MR_Integer) 226)),
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
    ((MR_Box) ((MR_Integer) 226)),
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
    ((MR_Box) ((MR_Integer) 226)),
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
    ((MR_Box) ((MR_Integer) 266)),
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
    ((MR_Box) ((MR_Integer) 494)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 105 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[104])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 106 */
  {
    ((MR_Box) ((MR_Integer) 306)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 107 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[106])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[105])))
  },
  /* row 108 */
  {
    ((MR_Box) ((MR_Integer) 206)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 109 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[108])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_Integer) 205)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 111 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[110])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[109])))
  },
  /* row 112 */
  {
    ((MR_Box) ((MR_Integer) 203)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 113 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[112])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[111])))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_Integer) 204)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 115 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[114])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[113])))
  },
  /* row 116 */
  {
    ((MR_Box) ((MR_Integer) 233)),
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
    ((MR_Box) ((MR_Integer) 227)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 125 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[124])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 126 */
  {
    ((MR_Box) ((MR_Integer) 234)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 127 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[126])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 128 */
  {
    ((MR_Box) ((MR_Integer) 205)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 129 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[128])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[109])))
  },
  /* row 130 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[112])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[129])))
  },
  /* row 131 */
  {
    ((MR_Box) ((MR_Integer) 204)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 132 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[131])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[130])))
  },
  /* row 133 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[131])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[113])))
  },
  /* row 134 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[114])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[130])))
  },
  /* row 135 */
  {
    ((MR_Box) ((MR_Integer) 206)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 136 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[135])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 137 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[128])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[136])))
  },
  /* row 138 */
  {
    ((MR_Box) ((MR_Integer) 203)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 139 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[138])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[137])))
  },
  /* row 140 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[114])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[139])))
  },
  /* row 141 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[138])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[129])))
  },
  /* row 142 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[131])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[141])))
  },
  /* row 143 */
  {
    ((MR_Box) ((MR_Integer) 243)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 144 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[143])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 145 */
  {
    ((MR_Box) ((MR_Integer) 242)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 146 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[145])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[144])))
  },
  /* row 147 */
  {
    ((MR_Box) ((MR_Integer) 240)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 148 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[147])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[146])))
  },
  /* row 149 */
  {
    ((MR_Box) ((MR_Integer) 242)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 150 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[149])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[144])))
  },
  /* row 151 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[147])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[150])))
  },
  /* row 152 */
  {
    ((MR_Box) ((MR_Integer) 243)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 153 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[152])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 154 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[149])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[153])))
  },
  /* row 155 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[147])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[154])))
  },
  /* row 156 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[145])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[153])))
  },
  /* row 157 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[147])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[156])))
  },
  /* row 158 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[37])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[20])))
  },
  /* row 159 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[39])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[158])))
  },
  /* row 160 */
  {
    ((MR_Box) ((MR_Integer) 254)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 161 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[160])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 162 */
  {
    ((MR_Box) ((MR_Integer) 235)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 163 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[162])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[161])))
  },
  /* row 164 */
  {
    ((MR_Box) ((MR_Integer) 244)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 165 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[164])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 166 */
  {
    ((MR_Box) ((MR_Integer) 239)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 167 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[166])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 168 */
  {
    ((MR_Box) ((MR_Integer) 238)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 169 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[168])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[167])))
  },
  /* row 170 */
  {
    ((MR_Box) ((MR_Integer) 228)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 171 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[170])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 172 */
  {
    ((MR_Box) ((MR_Integer) 230)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 173 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[172])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 174 */
  {
    ((MR_Box) ((MR_Integer) 229)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 175 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[174])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[173])))
  },
  /* row 176 */
  {
    ((MR_Box) ((MR_Integer) 230)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 177 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[176])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 178 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[174])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[177])))
  },
  /* row 179 */
  {
    ((MR_Box) ((MR_Integer) 224)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 180 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[179])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 181 */
  {
    ((MR_Box) ((MR_Integer) 223)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 182 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[181])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[180])))
  },
  /* row 183 */
  {
    ((MR_Box) ((MR_Integer) 224)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 184 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[183])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 185 */
  {
    ((MR_Box) ((MR_Integer) 223)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 186 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[185])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[184])))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Use of accurate GC is incompatible with"))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "target language"))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Use of Boehm GC is incompatible with"))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Use of HGC is incompatible with"))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Time profiling is incompatible with"))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Memory profiling is incompatible with"))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Trailing is incompatible with"))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Stack segments are incompatible with"))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Single precision floats are incompatible with"))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Unknown"))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "library grade component:"))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Invalid library grade:"))
  },
  /* row 199 */
  {
    ((MR_Box) ((MR_Integer) 227)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 200 */
  {
    ((MR_Box) ((MR_Integer) 228)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "none"))
  },
  /* row 202 */
  {
    ((MR_Box) ((MR_Integer) 226)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[201])))
  },
  /* row 203 */
  {
    ((MR_Box) ((MR_Integer) 229)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 204 */
  {
    ((MR_Box) ((MR_Integer) 234)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 205 */
  {
    ((MR_Box) ((MR_Integer) 235)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 206 */
  {
    ((MR_Box) ((MR_Integer) 197)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 207 */
  {
    ((MR_Box) ((MR_Integer) 244)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 208 */
  {
    ((MR_Box) ((MR_Integer) 240)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 209 */
  {
    ((MR_Box) ((MR_Integer) 306)),
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
    ((MR_Box) (&libs__compute_grade_scalar_common_5[3])),
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
    ((MR_Box) (&libs__compute_grade_scalar_common_6[3])),
    ((MR_Box) (libs__compute_grade__filter_grade_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_8[0])),
    ((MR_Box) (libs__compute_grade__IntroducedFrom__pred__convert_grade_option__423__1_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_8[0])),
    ((MR_Box) (libs__compute_grade__IntroducedFrom__pred__convert_grade_option__423__1_5_p_0_2)),
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
    ((MR_Box) (&libs__compute_grade_scalar_common_6[2])),
    ((MR_Box) (libs__compute_grade__split_grade_string_2_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Char) 46))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&libs__compute_grade__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0))
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
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


static /* final */ const struct libs__compute_grade__vector_common_type_10_0_s libs__compute_grade_vector_common_10[47] = {
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
    (MR_Integer) 10,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[46]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 5 */
  {
    (MR_Integer) 10,
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
    (MR_Integer) 11,
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
    (MR_Integer) 9,
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
    (MR_Integer) 8,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[127]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 29 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[132]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 30 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[133]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 31 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[134]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 32 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[140]),
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
    (MR_Integer) 12,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[148]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 35 */
  {
    (MR_Integer) 12,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[151]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 36 */
  {
    (MR_Integer) 12,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[155]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 37 */
  {
    (MR_Integer) 12,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[157]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 38 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[159]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 39 */
  {
    (MR_Integer) 8,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[163]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 40 */
  {
    (MR_Integer) 10,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[165]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 41 */
  {
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[169]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 42 */
  {
    (MR_Integer) 2,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[171]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 43 */
  {
    (MR_Integer) 6,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[175]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 44 */
  {
    (MR_Integer) 6,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[178]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 45 */
  {
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[182]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 46 */
  {
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[186]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
};

static /* final */ const struct libs__compute_grade__vector_common_type_11_0_s libs__compute_grade_vector_common_11[47] = {
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
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[159]),
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
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[171]),
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
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[132]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 20 */
  {
    (MR_String) "proftime",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[142]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 21 */
  {
    (MR_String) "profcalls",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[134]),
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
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[133]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 24 */
  {
    (MR_String) "profdeep",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[140]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 25 */
  {
    (MR_String) "tsw",
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[186]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 26 */
  {
    (MR_String) "tsc",
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[182]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 27 */
  {
    (MR_String) "tr",
    (MR_Integer) 6,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[175]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 28 */
  {
    (MR_String) "trseg",
    (MR_Integer) 6,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[178]),
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
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[127]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 36 */
  {
    (MR_String) "spf",
    (MR_Integer) 8,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[163]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 37 */
  {
    (MR_String) "decldebug",
    (MR_Integer) 10,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[49]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 38 */
  {
    (MR_String) "debug",
    (MR_Integer) 10,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[46]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 39 */
  {
    (MR_String) "ssdebug",
    (MR_Integer) 10,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[165]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 40 */
  {
    (MR_String) "ll_debug",
    (MR_Integer) 9,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[107]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 41 */
  {
    (MR_String) "exts",
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[70]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 42 */
  {
    (MR_String) "stseg",
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[169]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 43 */
  {
    (MR_String) "rbmm",
    (MR_Integer) 12,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[148]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 44 */
  {
    (MR_String) "rbmmd",
    (MR_Integer) 12,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[151]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 45 */
  {
    (MR_String) "rbmmp",
    (MR_Integer) 12,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[157]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 46 */
  {
    (MR_String) "rbmmdp",
    (MR_Integer) 12,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[155]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
};

static /* final */ const struct libs__compute_grade__vector_common_type_12_0_s libs__compute_grade_vector_common_12[29] = {
  /* row 0 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[39] },
  /* row 1 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[37] },
  /* row 2 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[27] },
  /* row 3 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[17] },
  /* row 4 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[13] },
  /* row 5 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[15] },
  /* row 6 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[199] },
  /* row 7 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[200] },
  /* row 8 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[202] },
  /* row 9 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[108] },
  /* row 10 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[114] },
  /* row 11 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[138] },
  /* row 12 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[128] },
  /* row 13 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[203] },
  /* row 14 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[172] },
  /* row 15 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[58] },
  /* row 16 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[52] },
  /* row 17 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[116] },
  /* row 18 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[204] },
  /* row 19 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[205] },
  /* row 20 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[206] },
  /* row 21 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[43] },
  /* row 22 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[207] },
  /* row 23 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[168] },
  /* row 24 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[67] },
  /* row 25 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[208] },
  /* row 26 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[145] },
  /* row 27 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[143] },
  /* row 28 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[209] },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 libs__compute_grade__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__compute_grade__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_TypeInfo_Struct1 libs__compute_grade__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 libs__compute_grade____vpti_pred_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &libs__compute_grade__list__ti_list_1builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &libs__compute_grade__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 libs__compute_grade__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 libs__compute_grade__pair__pti_pair_2__plain_libs__compute_grade__type_ctor_info_grade_component_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &libs__compute_grade__libs__compute_grade__type_ctor_info_grade_component_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 libs__compute_grade__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__compute_grade__set_ordlist__pti_set_ordlist_1__plain_libs__compute_grade__type_ctor_info_grade_component_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &libs__compute_grade__libs__compute_grade__type_ctor_info_grade_component_0
  }
};

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_0 = {
  (MR_String) "comp_gcc_ext",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_1 = {
  (MR_String) "comp_par",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_2 = {
  (MR_String) "comp_par_threadscope",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_3 = {
  (MR_String) "comp_gc",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_4 = {
  (MR_String) "comp_prof",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_5 = {
  (MR_String) "comp_term_size",
  (MR_Integer) 5
};

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_6 = {
  (MR_String) "comp_trail",
  (MR_Integer) 6
};

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_7 = {
  (MR_String) "comp_minimal_model",
  (MR_Integer) 7
};

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_8 = {
  (MR_String) "comp_pregen_spf",
  (MR_Integer) 8
};

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_9 = {
  (MR_String) "comp_lowlevel",
  (MR_Integer) 9
};

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_10 = {
  (MR_String) "comp_trace",
  (MR_Integer) 10
};

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_11 = {
  (MR_String) "comp_stack_extend",
  (MR_Integer) 11
};

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_12 = {
  (MR_String) "comp_regions",
  (MR_Integer) 12
};

static const MR_EnumFunctorDescPtr libs__compute_grade__libs__compute_grade__enum_value_ordered_grade_component_0[13] = {
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
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_12
};

static const MR_EnumFunctorDescPtr libs__compute_grade__libs__compute_grade__enum_name_ordered_grade_component_0[13] = {
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_3,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_0,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_9,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_7,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_1,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_2,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_8,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_4,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_12,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_11,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_5,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_10,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_6
};

static const MR_Integer libs__compute_grade__libs__compute_grade__functor_number_map_grade_component_0[13] = {
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 10,
  (MR_Integer) 12,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 2,
  (MR_Integer) 11,
  (MR_Integer) 9,
  (MR_Integer) 8
};

const MR_TypeCtorInfo_Struct libs__compute_grade__libs__compute_grade__type_ctor_info_grade_component_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__compute_grade____Unify____grade_component_0_0_10001)),
  ((MR_Box) (libs__compute_grade____Compare____grade_component_0_0_10001)),
  (MR_String) "libs.compute_grade",
  (MR_String) "grade_component",
  {     libs__compute_grade__libs__compute_grade__enum_name_ordered_grade_component_0 },
  {     libs__compute_grade__libs__compute_grade__enum_value_ordered_grade_component_0 },
  (MR_Integer) 13,
  (MR_Integer) 4,
  libs__compute_grade__libs__compute_grade__functor_number_map_grade_component_0
};

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__reset_grade_options__763__1_3_p_0(
  MR_Word libs__compute_grade__LambdaHeadVar__1_12,
  MR_Word libs__compute_grade__LambdaHeadVar__2_13,
  MR_Word * libs__compute_grade__LambdaHeadVar__3_14)
{
  {
    MR_Word libs__compute_grade__Option_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__compute_grade__LambdaHeadVar__1_12, (MR_Integer) 0)));
    MR_Word libs__compute_grade__Value_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__compute_grade__LambdaHeadVar__1_12, (MR_Integer) 1)));

    {
      mercury__map__set_4_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (libs__compute_grade__Option_8)), ((MR_Box) (libs__compute_grade__Value_9)), libs__compute_grade__LambdaHeadVar__2_13, libs__compute_grade__LambdaHeadVar__3_14);
    }
  }
}

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_2(
  void * libs__compute_grade__env_ptr_arg)
{
  {
    struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

    MR_builtin_longjmp((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_4(
  void * libs__compute_grade__env_ptr_arg)
{
  {
    struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

    (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__Var_17 = ((MR_Word) (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__conv0_Var_17);
    {
      libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_3(libs__compute_grade__env_ptr);
    }
  }
}

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_3(
  void * libs__compute_grade__env_ptr_arg)
{
  {
    struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

    {
      MR_Word libs__compute_grade__Var_26;
      MR_Box libs__compute_grade__conv1_Var_26;

      (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__Opt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__Var_17, (MR_Integer) 0)));
      (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__Value_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__Var_17, (MR_Integer) 1)));
      {
        (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__Options_3, ((MR_Box) ((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__Opt_11)), &libs__compute_grade__conv1_Var_26);
      }
      if ((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__succeeded)
        {
          libs__compute_grade__Var_26 = ((MR_Word) libs__compute_grade__conv1_Var_26);
          (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__succeeded = MR_TRUE;
        }
      if ((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__succeeded)
        {
          (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__succeeded = mercury__getopt_io____Unify____option_data_0_0((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__Value_12, libs__compute_grade__Var_26);
        }
      (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__succeeded = !((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__succeeded);
      if ((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__succeeded)
        {
          libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_2(libs__compute_grade__env_ptr);
        }
    }
  }
}

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_5(
  void * libs__compute_grade__env_ptr_arg)
{
  {
    struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

    if (MR_builtin_setjmp((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &libs__compute_grade_scalar_common_2[1], &(libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__conv0_Var_17, (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__CompOpts_8, libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_4, libs__compute_grade__env_ptr);
          }
        }
        (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_6(
  void * libs__compute_grade__env_ptr_arg)
{
  {
    struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

    MR_builtin_longjmp((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_8(
  void * libs__compute_grade__env_ptr_arg)
{
  {
    struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

    (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__Target_14 = ((MR_Word) (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__conv2_Target_14);
    {
      libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_7(libs__compute_grade__env_ptr);
    }
  }
}

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_7(
  void * libs__compute_grade__env_ptr_arg)
{
  {
    struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

    {
      MR_Box libs__compute_grade__conv3_Var_27;

      (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__Var_18 = (MR_Integer) 189;
      (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__TypeCtorInfo_24_24 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
      {
        (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__TypeCtorInfo_24_24, (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__TypeCtorInfo_23_23, (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__Options_3, ((MR_Box) ((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__Var_18)), &libs__compute_grade__conv3_Var_27);
      }
      if ((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__succeeded)
        {
          (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__Var_27 = ((MR_Word) libs__compute_grade__conv3_Var_27);
          (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__succeeded = MR_TRUE;
        }
      if ((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__succeeded)
        {
          {
            (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__succeeded = mercury__getopt_io____Unify____option_data_0_0((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__Target_14, (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__Var_27);
          }
          if ((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__succeeded)
            {
              libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_6(libs__compute_grade__env_ptr);
            }
        }
    }
  }
}

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_9(
  void * libs__compute_grade__env_ptr_arg)
{
  {
    struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

    if (MR_builtin_setjmp((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__commit_1) == 0)
      {
        {
          MR_Word libs__compute_grade__Targets_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__MaybeTargets_9, (MR_Integer) 0)));

          (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__TypeCtorInfo_23_23 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
          {
            mercury__list__member_2_p_1((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__TypeCtorInfo_23_23, &(libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__conv2_Target_14, libs__compute_grade__Targets_13, libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_8, libs__compute_grade__env_ptr);
          }
        }
        (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_1(
  void * libs__compute_grade__env_ptr_arg)
{
  {
    struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

    {
      libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_5(libs__compute_grade__env_ptr);
    }
    (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__succeeded = !((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__succeeded);
    if ((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__succeeded)
      {
        (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__succeeded = ((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__IncludeInGradeString_10 == (MR_Integer) 1);
        if ((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__succeeded)
          {
            if (((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__MaybeTargets_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__succeeded = MR_TRUE;
            else
              {
                {
                  libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_9(libs__compute_grade__env_ptr);
                }
              }
            if ((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__LambdaHeadVar__1_16) = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__Comp_7));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__Name_6));
                }
                {
                  ((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__cont)((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__cont_env_ptr);
                }
              }
          }
      }
  }
}

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0(
  MR_Word libs__compute_grade__Options_3,
  MR_Word * libs__compute_grade__LambdaHeadVar__1_16,
  MR_Cont libs__compute_grade__cont,
  void * libs__compute_grade__cont_env_ptr)
{
  {
    struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0_s libs__compute_grade__env;

    (libs__compute_grade__env).libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__Options_3 = libs__compute_grade__Options_3;
    (libs__compute_grade__env).libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__LambdaHeadVar__1_16 = libs__compute_grade__LambdaHeadVar__1_16;
    (libs__compute_grade__env).libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__cont = libs__compute_grade__cont;
    (libs__compute_grade__env).libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__cont_env_ptr = libs__compute_grade__cont_env_ptr;
    {
      libs__compute_grade__grade_component_table_5_p_2(&(libs__compute_grade__env).libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__Name_6, &(libs__compute_grade__env).libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__Comp_7, &(libs__compute_grade__env).libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__CompOpts_8, &(libs__compute_grade__env).libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__MaybeTargets_9, &(libs__compute_grade__env).libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_env_0__IncludeInGradeString_10, libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0_1, &libs__compute_grade__env);
    }
  }
}

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__add_option_list__447__1_3_p_0(
  MR_Word libs__compute_grade__LambdaHeadVar__1_13,
  MR_Word libs__compute_grade__LambdaHeadVar__2_14,
  MR_Word * libs__compute_grade__LambdaHeadVar__3_15)
{
  {
    MR_Word libs__compute_grade__Option_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__compute_grade__LambdaHeadVar__1_13, (MR_Integer) 0)));
    MR_Word libs__compute_grade__Data_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__compute_grade__LambdaHeadVar__1_13, (MR_Integer) 1)));

    {
      mercury__map__set_4_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (libs__compute_grade__Option_10)), ((MR_Box) (libs__compute_grade__Data_11)), libs__compute_grade__LambdaHeadVar__2_14, libs__compute_grade__LambdaHeadVar__3_15);
    }
  }
}

static MR_bool MR_CALL 
libs__compute_grade__IntroducedFrom__pred__grade_string_to_comp_strings__353__1_2_p_0(
  MR_String libs__compute_grade__LambdaHeadVar__1_20,
  MR_String * libs__compute_grade__LambdaHeadVar__2_21)
{
  {
    MR_bool libs__compute_grade__succeeded;
    MR_Word libs__compute_grade__Var_11;
    MR_Word libs__compute_grade__Var_12;
    MR_Word libs__compute_grade__Var_13;
    MR_Word libs__compute_grade__Var_14;

    {
      libs__compute_grade__succeeded = libs__compute_grade__grade_component_table_5_p_0(libs__compute_grade__LambdaHeadVar__1_20, &libs__compute_grade__Var_11, &libs__compute_grade__Var_12, &libs__compute_grade__Var_13, &libs__compute_grade__Var_14);
    }
    if (libs__compute_grade__succeeded)
      {
        *libs__compute_grade__LambdaHeadVar__2_21 = libs__compute_grade__LambdaHeadVar__1_20;
        libs__compute_grade__succeeded = MR_TRUE;
      }
    return libs__compute_grade__succeeded;
  }
}

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__convert_grade_option__423__1_5_p_0_2(
  MR_Box libs__compute_grade__closure_arg,
  MR_Box libs__compute_grade__wrapper_arg_1,
  MR_Box libs__compute_grade__wrapper_arg_2,
  MR_Box * libs__compute_grade__wrapper_arg_3)
{
  {
    MR_Box libs__compute_grade__closure = libs__compute_grade__closure_arg;
    MR_Word libs__compute_grade__conv2_LambdaHeadVar__3_15;

    {
      libs__compute_grade__IntroducedFrom__pred__add_option_list__447__1_3_p_0(((MR_Word) libs__compute_grade__wrapper_arg_1), ((MR_Word) libs__compute_grade__wrapper_arg_2), &libs__compute_grade__conv2_LambdaHeadVar__3_15);
    }
    *libs__compute_grade__wrapper_arg_3 = ((MR_Box) (libs__compute_grade__conv2_LambdaHeadVar__3_15));
  }
}

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__convert_grade_option__423__1_5_p_0_1(
  MR_Box libs__compute_grade__closure_arg,
  MR_Box libs__compute_grade__wrapper_arg_1,
  MR_Box libs__compute_grade__wrapper_arg_2,
  MR_Box * libs__compute_grade__wrapper_arg_3)
{
  {
    MR_Box libs__compute_grade__closure = libs__compute_grade__closure_arg;
    MR_Word libs__compute_grade__conv0_LambdaHeadVar__3_15;

    {
      libs__compute_grade__IntroducedFrom__pred__add_option_list__447__1_3_p_0(((MR_Word) libs__compute_grade__wrapper_arg_1), ((MR_Word) libs__compute_grade__wrapper_arg_2), &libs__compute_grade__conv0_LambdaHeadVar__3_15);
    }
    *libs__compute_grade__wrapper_arg_3 = ((MR_Box) (libs__compute_grade__conv0_LambdaHeadVar__3_15));
  }
}

static MR_bool MR_CALL 
libs__compute_grade__IntroducedFrom__pred__convert_grade_option__423__1_5_p_0(
  MR_String libs__compute_grade__LambdaHeadVar__1_23,
  MR_Word libs__compute_grade__LambdaHeadVar__2_24,
  MR_Word * libs__compute_grade__LambdaHeadVar__3_25,
  MR_Word libs__compute_grade__LambdaHeadVar__4_26,
  MR_Word * libs__compute_grade__LambdaHeadVar__5_27)
{
  {
    MR_bool libs__compute_grade__succeeded;
    MR_Word libs__compute_grade__TypeCtorInfo_41_41;
    MR_Word libs__compute_grade__TypeInfo_21_62;
    MR_Word libs__compute_grade__TypeInfo_22_63;
    MR_Word libs__compute_grade__Comp_15;
    MR_Word libs__compute_grade__CompOpts_16;
    MR_Word libs__compute_grade__MaybeTargets_17;
    MR_Word libs__compute_grade__Opts1_19;
    MR_Word libs__compute_grade__Var_53;
    MR_Word libs__compute_grade__Var_18;
    MR_Word libs__compute_grade__TypeCtorInfo_40_40;
    MR_Box libs__compute_grade__conv1_Opts1_19;
    MR_Word libs__compute_grade__Target_20;
    MR_Word libs__compute_grade__Var_28;
    MR_Word libs__compute_grade__Var_29;

    {
      libs__compute_grade__succeeded = libs__compute_grade__grade_component_table_5_p_0(libs__compute_grade__LambdaHeadVar__1_23, &libs__compute_grade__Comp_15, &libs__compute_grade__CompOpts_16, &libs__compute_grade__MaybeTargets_17, &libs__compute_grade__Var_18);
    }
    if (libs__compute_grade__succeeded)
      {
        libs__compute_grade__TypeCtorInfo_40_40 = (MR_Word) &libs__compute_grade__libs__compute_grade__type_ctor_info_grade_component_0;
        {
          libs__compute_grade__succeeded = mercury__set__member_2_p_0(libs__compute_grade__TypeCtorInfo_40_40, ((MR_Box) (libs__compute_grade__Comp_15)), libs__compute_grade__LambdaHeadVar__4_26);
        }
        libs__compute_grade__succeeded = !(libs__compute_grade__succeeded);
        if (libs__compute_grade__succeeded)
          {
            libs__compute_grade__TypeCtorInfo_41_41 = (MR_Word) &libs__compute_grade__libs__compute_grade__type_ctor_info_grade_component_0;
            {
              mercury__set__insert_3_p_0(libs__compute_grade__TypeCtorInfo_41_41, ((MR_Box) (libs__compute_grade__Comp_15)), libs__compute_grade__LambdaHeadVar__4_26, libs__compute_grade__LambdaHeadVar__5_27);
            }
            libs__compute_grade__Var_53 = (MR_Word) &libs__compute_grade_scalar_common_2[9];
            libs__compute_grade__TypeInfo_21_62 = (MR_Word) &libs__compute_grade_scalar_common_2[1];
            libs__compute_grade__TypeInfo_22_63 = (MR_Word) &libs__compute_grade_scalar_common_2[0];
            {
              mercury__list__foldl_4_p_0(libs__compute_grade__TypeInfo_21_62, libs__compute_grade__TypeInfo_22_63, libs__compute_grade__Var_53, libs__compute_grade__CompOpts_16, ((MR_Box) (libs__compute_grade__LambdaHeadVar__2_24)), &libs__compute_grade__conv1_Opts1_19);
            }
            libs__compute_grade__Opts1_19 = ((MR_Word) libs__compute_grade__conv1_Opts1_19);
            libs__compute_grade__succeeded = ((MR_tag((MR_Word) libs__compute_grade__MaybeTargets_17)) == (MR_mktag((MR_Integer) 1)));
            if (libs__compute_grade__succeeded)
              {
                libs__compute_grade__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__compute_grade__MaybeTargets_17, (MR_Integer) 0)));
                libs__compute_grade__succeeded = ((MR_tag((MR_Word) libs__compute_grade__Var_28)) == (MR_mktag((MR_Integer) 1)));
                if (libs__compute_grade__succeeded)
                  {
                    libs__compute_grade__Target_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__compute_grade__Var_28, (MR_Integer) 0)));
                    libs__compute_grade__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__compute_grade__Var_28, (MR_Integer) 1)));
                    libs__compute_grade__succeeded = (libs__compute_grade__Var_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
              }
            if (libs__compute_grade__succeeded)
              {
                MR_Word libs__compute_grade__Var_30;
                MR_Word libs__compute_grade__Var_31;
                MR_Box libs__compute_grade__conv3_LambdaHeadVar__3_25;

                {
                  libs__compute_grade__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), libs__compute_grade__Var_31, 0) = ((MR_Box) ((MR_Integer) 189));
                  MR_hl_field(MR_mktag(0), libs__compute_grade__Var_31, 1) = ((MR_Box) (libs__compute_grade__Target_20));
                }
                {
                  libs__compute_grade__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), libs__compute_grade__Var_30, 0) = ((MR_Box) (libs__compute_grade__Var_31));
                  MR_hl_field(MR_mktag(1), libs__compute_grade__Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  mercury__list__foldl_4_p_0((MR_Word) &libs__compute_grade_scalar_common_2[1], (MR_Word) &libs__compute_grade_scalar_common_2[0], (MR_Word) &libs__compute_grade_scalar_common_2[10], libs__compute_grade__Var_30, ((MR_Box) (libs__compute_grade__Opts1_19)), &libs__compute_grade__conv3_LambdaHeadVar__3_25);
                }
                *libs__compute_grade__LambdaHeadVar__3_25 = ((MR_Word) libs__compute_grade__conv3_LambdaHeadVar__3_25);
              }
            else
              *libs__compute_grade__LambdaHeadVar__3_25 = libs__compute_grade__Opts1_19;
            libs__compute_grade__succeeded = MR_TRUE;
          }
      }
    return libs__compute_grade__succeeded;
  }
}

static void MR_CALL 
libs__compute_grade____Compare____grade_component_0_0(
  MR_Word * libs__compute_grade__HeadVar__1_1,
  MR_Word libs__compute_grade__HeadVar__2_2,
  MR_Word libs__compute_grade__HeadVar__3_3)
{
  {
    MR_Integer libs__compute_grade__Cast_HeadVar1_4 = (MR_Integer) libs__compute_grade__HeadVar__2_2;
    MR_Integer libs__compute_grade__Cast_HeadVar2_5 = (MR_Integer) libs__compute_grade__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__compute_grade__HeadVar__1_1, libs__compute_grade__Cast_HeadVar1_4, libs__compute_grade__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
libs__compute_grade____Unify____grade_component_0_0(
  MR_Word libs__compute_grade__HeadVar__2_1,
  MR_Word libs__compute_grade__HeadVar__2_2)
{
  {
    MR_bool libs__compute_grade__succeeded = (libs__compute_grade__HeadVar__2_1 == libs__compute_grade__HeadVar__2_2);

    return libs__compute_grade__succeeded;
  }
}

static MR_bool MR_CALL 
libs__compute_grade__char_is_not_2_p_0(
  MR_Char libs__compute_grade__A_3,
  MR_Char libs__compute_grade__B_4)
{
  {
    MR_bool libs__compute_grade__succeeded = (libs__compute_grade__A_3 == libs__compute_grade__B_4);

    libs__compute_grade__succeeded = !(libs__compute_grade__succeeded);
    return libs__compute_grade__succeeded;
  }
}

static void MR_CALL 
libs__compute_grade__grade_start_values_1_p_0(
  MR_Word * libs__compute_grade__HeadVar__1_1,
  MR_Cont libs__compute_grade__cont,
  void * libs__compute_grade__cont_env_ptr)
{
  {
    MR_Integer libs__compute_grade__slot_0 = (MR_Integer) 0;

    do
      {
        *libs__compute_grade__HeadVar__1_1 = ((&libs__compute_grade_vector_common_12[0 + libs__compute_grade__slot_0]))->libs__compute_grade__vector_common_type_12_0__vct_12_f_0;
        {
          libs__compute_grade__cont(libs__compute_grade__cont_env_ptr);
        }
        libs__compute_grade__slot_0 = (libs__compute_grade__slot_0 + (MR_Integer) 1);
      }
    while ((libs__compute_grade__slot_0 < (MR_Integer) 29));
  }
}

static void MR_CALL 
libs__compute_grade__grade_component_table_5_p_2(
  MR_String * libs__compute_grade__HeadVar__1_1,
  MR_Word * libs__compute_grade__HeadVar__2_2,
  MR_Word * libs__compute_grade__HeadVar__3_3,
  MR_Word * libs__compute_grade__HeadVar__4_4,
  MR_Word * libs__compute_grade__HeadVar__5_5,
  MR_Cont libs__compute_grade__cont,
  void * libs__compute_grade__cont_env_ptr)
{
  {
    MR_Integer libs__compute_grade__slot_0 = (MR_Integer) 0;

    do
      {
        *libs__compute_grade__HeadVar__1_1 = ((&libs__compute_grade_vector_common_11[0 + libs__compute_grade__slot_0]))->libs__compute_grade__vector_common_type_11_0__vct_11_f_0;
        *libs__compute_grade__HeadVar__2_2 = ((&libs__compute_grade_vector_common_11[0 + libs__compute_grade__slot_0]))->libs__compute_grade__vector_common_type_11_0__vct_11_f_1;
        *libs__compute_grade__HeadVar__3_3 = ((&libs__compute_grade_vector_common_11[0 + libs__compute_grade__slot_0]))->libs__compute_grade__vector_common_type_11_0__vct_11_f_2;
        *libs__compute_grade__HeadVar__4_4 = ((&libs__compute_grade_vector_common_11[0 + libs__compute_grade__slot_0]))->libs__compute_grade__vector_common_type_11_0__vct_11_f_3;
        *libs__compute_grade__HeadVar__5_5 = ((&libs__compute_grade_vector_common_11[0 + libs__compute_grade__slot_0]))->libs__compute_grade__vector_common_type_11_0__vct_11_f_4;
        {
          libs__compute_grade__cont(libs__compute_grade__cont_env_ptr);
        }
        libs__compute_grade__slot_0 = (libs__compute_grade__slot_0 + (MR_Integer) 1);
      }
    while ((libs__compute_grade__slot_0 < (MR_Integer) 47));
  }
}

static void MR_CALL 
libs__compute_grade__must_not_contain_2_p_0_1(
  void * libs__compute_grade__env_ptr_arg)
{
  {
    struct libs__compute_grade__must_not_contain_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__must_not_contain_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

    MR_builtin_longjmp((libs__compute_grade__env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
libs__compute_grade__must_not_contain_2_p_0_3(
  void * libs__compute_grade__env_ptr_arg)
{
  {
    struct libs__compute_grade__must_not_contain_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__must_not_contain_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

    (libs__compute_grade__env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__Component_5 = ((MR_String) (libs__compute_grade__env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__conv0_Component_5);
    {
      libs__compute_grade__must_not_contain_2_p_0_2(libs__compute_grade__env_ptr);
    }
  }
}

static void MR_CALL 
libs__compute_grade__must_not_contain_2_p_0_2(
  void * libs__compute_grade__env_ptr_arg)
{
  {
    struct libs__compute_grade__must_not_contain_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__must_not_contain_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

    {
      (libs__compute_grade__env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((libs__compute_grade__env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6, ((MR_Box) ((libs__compute_grade__env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__Component_5)), (libs__compute_grade__env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__GradeComponents_4);
    }
    if ((libs__compute_grade__env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__succeeded)
      {
        libs__compute_grade__must_not_contain_2_p_0_1(libs__compute_grade__env_ptr);
      }
  }
}

static void MR_CALL 
libs__compute_grade__must_not_contain_2_p_0_4(
  void * libs__compute_grade__env_ptr_arg)
{
  {
    struct libs__compute_grade__must_not_contain_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__must_not_contain_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

    if (MR_builtin_setjmp((libs__compute_grade__env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__commit_0) == 0)
      {
        (libs__compute_grade__env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          mercury__list__member_2_p_1((libs__compute_grade__env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6, &(libs__compute_grade__env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__conv0_Component_5, (libs__compute_grade__env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__OmitComponents_3, libs__compute_grade__must_not_contain_2_p_0_3, libs__compute_grade__env_ptr);
        }
        (libs__compute_grade__env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (libs__compute_grade__env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
libs__compute_grade__must_not_contain_2_p_0(
  MR_Word libs__compute_grade__OmitComponents_3,
  MR_Word libs__compute_grade__GradeComponents_4)
{
  {
    struct libs__compute_grade__must_not_contain_2_p_0_env_0_s libs__compute_grade__env;

    (libs__compute_grade__env).libs__compute_grade__must_not_contain_2_p_0_env_0__OmitComponents_3 = libs__compute_grade__OmitComponents_3;
    (libs__compute_grade__env).libs__compute_grade__must_not_contain_2_p_0_env_0__GradeComponents_4 = libs__compute_grade__GradeComponents_4;
    {
      libs__compute_grade__must_not_contain_2_p_0_4(&libs__compute_grade__env);
    }
    (libs__compute_grade__env).libs__compute_grade__must_not_contain_2_p_0_env_0__succeeded = !((libs__compute_grade__env).libs__compute_grade__must_not_contain_2_p_0_env_0__succeeded);
    return (libs__compute_grade__env).libs__compute_grade__must_not_contain_2_p_0_env_0__succeeded;
  }
}

static void MR_CALL 
libs__compute_grade__must_contain_2_p_0_1(
  void * libs__compute_grade__env_ptr_arg)
{
  {
    struct libs__compute_grade__must_contain_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__must_contain_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

    MR_builtin_longjmp((libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
libs__compute_grade__must_contain_2_p_0_3(
  void * libs__compute_grade__env_ptr_arg)
{
  {
    struct libs__compute_grade__must_contain_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__must_contain_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

    (libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__Component_5 = ((MR_String) (libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__conv0_Component_5);
    {
      libs__compute_grade__must_contain_2_p_0_2(libs__compute_grade__env_ptr);
    }
  }
}

static void MR_CALL 
libs__compute_grade__must_contain_2_p_0_2(
  void * libs__compute_grade__env_ptr_arg)
{
  {
    struct libs__compute_grade__must_contain_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__must_contain_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

    {
      (libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__TypeCtorInfo_6_6, ((MR_Box) ((libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__Component_5)), (libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__GradeComponents_4);
    }
    (libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__succeeded = !((libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__succeeded);
    if ((libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__succeeded)
      {
        libs__compute_grade__must_contain_2_p_0_1(libs__compute_grade__env_ptr);
      }
  }
}

static void MR_CALL 
libs__compute_grade__must_contain_2_p_0_4(
  void * libs__compute_grade__env_ptr_arg)
{
  {
    struct libs__compute_grade__must_contain_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__must_contain_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

    if (MR_builtin_setjmp((libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__commit_0) == 0)
      {
        (libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          mercury__list__member_2_p_1((libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__TypeCtorInfo_6_6, &(libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__conv0_Component_5, (libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__IncludeComponents_3, libs__compute_grade__must_contain_2_p_0_3, libs__compute_grade__env_ptr);
        }
        (libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
libs__compute_grade__must_contain_2_p_0(
  MR_Word libs__compute_grade__IncludeComponents_3,
  MR_Word libs__compute_grade__GradeComponents_4)
{
  {
    struct libs__compute_grade__must_contain_2_p_0_env_0_s libs__compute_grade__env;

    (libs__compute_grade__env).libs__compute_grade__must_contain_2_p_0_env_0__IncludeComponents_3 = libs__compute_grade__IncludeComponents_3;
    (libs__compute_grade__env).libs__compute_grade__must_contain_2_p_0_env_0__GradeComponents_4 = libs__compute_grade__GradeComponents_4;
    {
      libs__compute_grade__must_contain_2_p_0_4(&libs__compute_grade__env);
    }
    (libs__compute_grade__env).libs__compute_grade__must_contain_2_p_0_env_0__succeeded = !((libs__compute_grade__env).libs__compute_grade__must_contain_2_p_0_env_0__succeeded);
    return (libs__compute_grade__env).libs__compute_grade__must_contain_2_p_0_env_0__succeeded;
  }
}

static MR_bool MR_CALL 
libs__compute_grade__filter_grade_7_p_0_1(
  MR_Box libs__compute_grade__closure_arg,
  MR_Box libs__compute_grade__wrapper_arg_1,
  MR_Box * libs__compute_grade__wrapper_arg_2)
{
  {
    MR_bool libs__compute_grade__succeeded;
    MR_Box libs__compute_grade__closure = libs__compute_grade__closure_arg;
    MR_String libs__compute_grade__conv0_LambdaHeadVar__2_21;

    {
      libs__compute_grade__succeeded = libs__compute_grade__IntroducedFrom__pred__grade_string_to_comp_strings__353__1_2_p_0(((MR_String) libs__compute_grade__wrapper_arg_1), &libs__compute_grade__conv0_LambdaHeadVar__2_21);
    }
    if (libs__compute_grade__succeeded)
      {
        *libs__compute_grade__wrapper_arg_2 = ((MR_Box) (libs__compute_grade__conv0_LambdaHeadVar__2_21));
        libs__compute_grade__succeeded = MR_TRUE;
      }
    return libs__compute_grade__succeeded;
  }
}

static void MR_CALL 
libs__compute_grade__filter_grade_7_p_0(
  MR_Word libs__compute_grade__FilterPred_8,
  MR_Word libs__compute_grade__CondComponents_9,
  MR_String libs__compute_grade__GradeString_10,
  MR_Word libs__compute_grade__STATE_VARIABLE_Grades_0_15,
  MR_Word * libs__compute_grade__STATE_VARIABLE_Grades_16,
  MR_Word libs__compute_grade__STATE_VARIABLE_Specs_0_17,
  MR_Word * libs__compute_grade__STATE_VARIABLE_Specs_18)
{
  {
    MR_bool libs__compute_grade__succeeded;
    MR_Word libs__compute_grade__Components0_33;
    MR_Word libs__compute_grade__TypeCtorInfo_44_60;
    MR_Word libs__compute_grade__ComponentStrs_26;
    MR_Word libs__compute_grade__StrToComp_27;
    MR_Word libs__compute_grade__Chars_64;

    {
      mercury__string__to_char_list_2_p_0(libs__compute_grade__GradeString_10, &libs__compute_grade__Chars_64);
    }
    {
      libs__compute_grade__succeeded = libs__compute_grade__split_grade_string_2_2_p_0(libs__compute_grade__Chars_64, &libs__compute_grade__ComponentStrs_26);
    }
    if (libs__compute_grade__succeeded)
      {
        libs__compute_grade__StrToComp_27 = (MR_Word) &libs__compute_grade_scalar_common_2[8];
        libs__compute_grade__TypeCtorInfo_44_60 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          libs__compute_grade__succeeded = mercury__list__map_3_p_2(libs__compute_grade__TypeCtorInfo_44_60, libs__compute_grade__TypeCtorInfo_44_60, libs__compute_grade__StrToComp_27, libs__compute_grade__ComponentStrs_26, &libs__compute_grade__Components0_33);
        }
      }
    if (libs__compute_grade__succeeded)
      {
        MR_Word libs__compute_grade__TypeCtorInfo_45_61 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        MR_Word libs__compute_grade__Components_34;
        MR_Integer libs__compute_grade__Var_38;
        MR_Integer libs__compute_grade__Var_39;

        {
          mercury__list__sort_and_remove_dups_2_p_0(libs__compute_grade__TypeCtorInfo_45_61, libs__compute_grade__Components0_33, &libs__compute_grade__Components_34);
        }
        {
          libs__compute_grade__Var_38 = mercury__list__length_1_f_0(libs__compute_grade__TypeCtorInfo_45_61, libs__compute_grade__Components0_33);
        }
        {
          libs__compute_grade__Var_39 = mercury__list__length_1_f_0(libs__compute_grade__TypeCtorInfo_45_61, libs__compute_grade__Components_34);
        }
        libs__compute_grade__succeeded = (libs__compute_grade__Var_38 > libs__compute_grade__Var_39);
        if (libs__compute_grade__succeeded)
          {
            MR_Word libs__compute_grade__GradeSpec_35;
            MR_Word libs__compute_grade__Var_42;
            MR_Word libs__compute_grade__Var_43;

            {
              libs__compute_grade__Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), libs__compute_grade__Var_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), libs__compute_grade__Var_43, 1) = ((MR_Box) (libs__compute_grade__GradeString_10));
            }
            {
              libs__compute_grade__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), libs__compute_grade__Var_42, 0) = ((MR_Box) (libs__compute_grade__Var_43));
              MR_hl_field(MR_mktag(1), libs__compute_grade__Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[3])));
            }
            {
              libs__compute_grade__GradeSpec_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), libs__compute_grade__GradeSpec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[198])));
              MR_hl_field(MR_mktag(1), libs__compute_grade__GradeSpec_35, 1) = ((MR_Box) (libs__compute_grade__Var_42));
            }
            {
              libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__compute_grade__GradeSpec_35, libs__compute_grade__STATE_VARIABLE_Specs_0_17, libs__compute_grade__STATE_VARIABLE_Specs_18);
            }
            *libs__compute_grade__STATE_VARIABLE_Grades_16 = libs__compute_grade__STATE_VARIABLE_Grades_0_15;
          }
        else
          {
            MR_bool MR_CALL (* libs__compute_grade__func_1)(MR_Box, MR_Box, MR_Box);

            *libs__compute_grade__STATE_VARIABLE_Specs_18 = libs__compute_grade__STATE_VARIABLE_Specs_0_17;
            libs__compute_grade__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__compute_grade__FilterPred_8, (MR_Integer) 1)));
            {
              libs__compute_grade__succeeded = libs__compute_grade__func_1(((MR_Box) libs__compute_grade__FilterPred_8), ((MR_Box) (libs__compute_grade__CondComponents_9)), ((MR_Box) (libs__compute_grade__Components_34)));
            }
            if (libs__compute_grade__succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *libs__compute_grade__STATE_VARIABLE_Grades_16 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__compute_grade__GradeString_10));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__compute_grade__STATE_VARIABLE_Grades_0_15));
              }
            else
              *libs__compute_grade__STATE_VARIABLE_Grades_16 = libs__compute_grade__STATE_VARIABLE_Grades_0_15;
          }
      }
    else
      {
        MR_Word libs__compute_grade__Var_51;
        MR_Word libs__compute_grade__Var_52;
        MR_Word libs__compute_grade__GradeSpec_59;

        {
          libs__compute_grade__Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__compute_grade__Var_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), libs__compute_grade__Var_52, 1) = ((MR_Box) (libs__compute_grade__GradeString_10));
        }
        {
          libs__compute_grade__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__compute_grade__Var_51, 0) = ((MR_Box) (libs__compute_grade__Var_52));
          MR_hl_field(MR_mktag(1), libs__compute_grade__Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[3])));
        }
        {
          libs__compute_grade__GradeSpec_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__compute_grade__GradeSpec_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[198])));
          MR_hl_field(MR_mktag(1), libs__compute_grade__GradeSpec_59, 1) = ((MR_Box) (libs__compute_grade__Var_51));
        }
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__compute_grade__GradeSpec_59, libs__compute_grade__STATE_VARIABLE_Specs_0_17, libs__compute_grade__STATE_VARIABLE_Specs_18);
        }
        *libs__compute_grade__STATE_VARIABLE_Grades_16 = libs__compute_grade__STATE_VARIABLE_Grades_0_15;
      }
  }
}

static void MR_CALL 
libs__compute_grade__string_to_grade_component_6_p_0(
  MR_String libs__compute_grade__FilterDesc_7,
  MR_String libs__compute_grade__Comp_8,
  MR_Word libs__compute_grade__STATE_VARIABLE_Comps_0_16,
  MR_Word * libs__compute_grade__STATE_VARIABLE_Comps_17,
  MR_Word libs__compute_grade__STATE_VARIABLE_Specs_0_18,
  MR_Word * libs__compute_grade__STATE_VARIABLE_Specs_19)
{
  {
    MR_bool libs__compute_grade__succeeded;
    MR_Word libs__compute_grade__Var_11;
    MR_Word libs__compute_grade__Var_12;
    MR_Word libs__compute_grade__Var_13;
    MR_Word libs__compute_grade__Var_14;

    {
      libs__compute_grade__succeeded = libs__compute_grade__grade_component_table_5_p_0(libs__compute_grade__Comp_8, &libs__compute_grade__Var_11, &libs__compute_grade__Var_12, &libs__compute_grade__Var_13, &libs__compute_grade__Var_14);
    }
    if (libs__compute_grade__succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *libs__compute_grade__STATE_VARIABLE_Comps_17 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__compute_grade__Comp_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__compute_grade__STATE_VARIABLE_Comps_0_16));
        }
        *libs__compute_grade__STATE_VARIABLE_Specs_19 = libs__compute_grade__STATE_VARIABLE_Specs_0_18;
      }
    else
      {
        MR_Word libs__compute_grade__GradeCompSpec_15;
        MR_Word libs__compute_grade__Var_23;
        MR_Word libs__compute_grade__Var_24;
        MR_Word libs__compute_grade__Var_25;
        MR_Word libs__compute_grade__Var_28;
        MR_Word libs__compute_grade__Var_29;

        {
          libs__compute_grade__Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__compute_grade__Var_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), libs__compute_grade__Var_24, 1) = ((MR_Box) (libs__compute_grade__FilterDesc_7));
        }
        {
          libs__compute_grade__Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__compute_grade__Var_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), libs__compute_grade__Var_29, 1) = ((MR_Box) (libs__compute_grade__Comp_8));
        }
        {
          libs__compute_grade__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__compute_grade__Var_28, 0) = ((MR_Box) (libs__compute_grade__Var_29));
          MR_hl_field(MR_mktag(1), libs__compute_grade__Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[5])));
        }
        {
          libs__compute_grade__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__compute_grade__Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[197])));
          MR_hl_field(MR_mktag(1), libs__compute_grade__Var_25, 1) = ((MR_Box) (libs__compute_grade__Var_28));
        }
        {
          libs__compute_grade__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__compute_grade__Var_23, 0) = ((MR_Box) (libs__compute_grade__Var_24));
          MR_hl_field(MR_mktag(1), libs__compute_grade__Var_23, 1) = ((MR_Box) (libs__compute_grade__Var_25));
        }
        {
          libs__compute_grade__GradeCompSpec_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__compute_grade__GradeCompSpec_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[196])));
          MR_hl_field(MR_mktag(1), libs__compute_grade__GradeCompSpec_15, 1) = ((MR_Box) (libs__compute_grade__Var_23));
        }
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__compute_grade__GradeCompSpec_15, libs__compute_grade__STATE_VARIABLE_Specs_0_18, libs__compute_grade__STATE_VARIABLE_Specs_19);
        }
        *libs__compute_grade__STATE_VARIABLE_Comps_17 = libs__compute_grade__STATE_VARIABLE_Comps_0_16;
      }
  }
}

static MR_bool MR_CALL 
libs__compute_grade__grade_component_table_5_p_0(
  MR_String libs__compute_grade__HeadVar__1_1,
  MR_Word * libs__compute_grade__HeadVar__2_2,
  MR_Word * libs__compute_grade__HeadVar__3_3,
  MR_Word * libs__compute_grade__HeadVar__4_4,
  MR_Word * libs__compute_grade__HeadVar__5_5)
{
  {
    MR_bool libs__compute_grade__succeeded;

    {
      MR_Integer libs__compute_grade__case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 0)) {
        case (MR_Integer) 97:
          switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 1)) {
            case (MR_Integer) 103:
              if (MR_offset_streq(2, libs__compute_grade__HeadVar__1_1, (MR_String) "agc"))
                libs__compute_grade__case_num_0 = (MR_Integer) 0;
              break;
            case (MR_Integer) 115:
              if (((((MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 2)) == (MR_Integer) 109)) && (((MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 3)) == (MR_Integer) 95))))
                switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 4)) {
                  case (MR_Integer) 102:
                    if (MR_offset_streq(5, libs__compute_grade__HeadVar__1_1, (MR_String) "asm_fast"))
                      libs__compute_grade__case_num_0 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 106:
                    if (MR_offset_streq(5, libs__compute_grade__HeadVar__1_1, (MR_String) "asm_jump"))
                      libs__compute_grade__case_num_0 = (MR_Integer) 2;
                    break;
                }
              break;
          }
          break;
        case (MR_Integer) 99:
          if (MR_offset_streq(1, libs__compute_grade__HeadVar__1_1, (MR_String) "csharp"))
            libs__compute_grade__case_num_0 = (MR_Integer) 3;
          break;
        case (MR_Integer) 100:
          switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 1)) {
            case (MR_Integer) 101:
              switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 2)) {
                case (MR_Integer) 98:
                  if (MR_offset_streq(3, libs__compute_grade__HeadVar__1_1, (MR_String) "debug"))
                    libs__compute_grade__case_num_0 = (MR_Integer) 4;
                  break;
                case (MR_Integer) 99:
                  if (MR_offset_streq(3, libs__compute_grade__HeadVar__1_1, (MR_String) "decldebug"))
                    libs__compute_grade__case_num_0 = (MR_Integer) 5;
                  break;
              }
              break;
            case (MR_Integer) 109:
              if (((MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 2)) == (MR_Integer) 109))
                switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 3)) {
                  case (MR_Integer) 0:
                    libs__compute_grade__case_num_0 = (MR_Integer) 6;
                    break;
                  case (MR_Integer) 111:
                    if (MR_offset_streq(4, libs__compute_grade__HeadVar__1_1, (MR_String) "dmmos"))
                      libs__compute_grade__case_num_0 = (MR_Integer) 7;
                    break;
                  case (MR_Integer) 115:
                    if (MR_offset_streq(4, libs__compute_grade__HeadVar__1_1, (MR_String) "dmmsc"))
                      libs__compute_grade__case_num_0 = (MR_Integer) 8;
                    break;
                }
              break;
          }
          break;
        case (MR_Integer) 101:
          switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 1)) {
            case (MR_Integer) 114:
              if (MR_offset_streq(2, libs__compute_grade__HeadVar__1_1, (MR_String) "erlang"))
                libs__compute_grade__case_num_0 = (MR_Integer) 9;
              break;
            case (MR_Integer) 120:
              if (MR_offset_streq(2, libs__compute_grade__HeadVar__1_1, (MR_String) "exts"))
                libs__compute_grade__case_num_0 = (MR_Integer) 10;
              break;
          }
          break;
        case (MR_Integer) 102:
          if (MR_offset_streq(1, libs__compute_grade__HeadVar__1_1, (MR_String) "fast"))
            libs__compute_grade__case_num_0 = (MR_Integer) 11;
          break;
        case (MR_Integer) 103:
          if (((MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 1)) == (MR_Integer) 99))
            switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 2)) {
              case (MR_Integer) 0:
                libs__compute_grade__case_num_0 = (MR_Integer) 12;
                break;
              case (MR_Integer) 100:
                if (MR_offset_streq(3, libs__compute_grade__HeadVar__1_1, (MR_String) "gcd"))
                  libs__compute_grade__case_num_0 = (MR_Integer) 13;
                break;
            }
          break;
        case (MR_Integer) 104:
          switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 1)) {
            case (MR_Integer) 103:
              if (MR_offset_streq(2, libs__compute_grade__HeadVar__1_1, (MR_String) "hgc"))
                libs__compute_grade__case_num_0 = (MR_Integer) 14;
              break;
            case (MR_Integer) 108:
              switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 2)) {
                case (MR_Integer) 0:
                  libs__compute_grade__case_num_0 = (MR_Integer) 15;
                  break;
                case (MR_Integer) 95:
                  if (MR_offset_streq(3, libs__compute_grade__HeadVar__1_1, (MR_String) "hl_nest"))
                    libs__compute_grade__case_num_0 = (MR_Integer) 16;
                  break;
                case (MR_Integer) 99:
                  switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 3)) {
                    case (MR_Integer) 0:
                      libs__compute_grade__case_num_0 = (MR_Integer) 17;
                      break;
                    case (MR_Integer) 95:
                      if (MR_offset_streq(4, libs__compute_grade__HeadVar__1_1, (MR_String) "hlc_nest"))
                        libs__compute_grade__case_num_0 = (MR_Integer) 18;
                      break;
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 106:
          switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, libs__compute_grade__HeadVar__1_1, (MR_String) "java"))
                libs__compute_grade__case_num_0 = (MR_Integer) 19;
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, libs__compute_grade__HeadVar__1_1, (MR_String) "jump"))
                libs__compute_grade__case_num_0 = (MR_Integer) 20;
              break;
          }
          break;
        case (MR_Integer) 108:
          if (MR_offset_streq(1, libs__compute_grade__HeadVar__1_1, (MR_String) "ll_debug"))
            libs__compute_grade__case_num_0 = (MR_Integer) 21;
          break;
        case (MR_Integer) 109:
          switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 1)) {
            case (MR_Integer) 101:
              if (MR_offset_streq(2, libs__compute_grade__HeadVar__1_1, (MR_String) "memprof"))
                libs__compute_grade__case_num_0 = (MR_Integer) 22;
              break;
            case (MR_Integer) 109:
              switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 2)) {
                case (MR_Integer) 0:
                  libs__compute_grade__case_num_0 = (MR_Integer) 23;
                  break;
                case (MR_Integer) 111:
                  if (MR_offset_streq(3, libs__compute_grade__HeadVar__1_1, (MR_String) "mmos"))
                    libs__compute_grade__case_num_0 = (MR_Integer) 24;
                  break;
                case (MR_Integer) 115:
                  if (MR_offset_streq(3, libs__compute_grade__HeadVar__1_1, (MR_String) "mmsc"))
                    libs__compute_grade__case_num_0 = (MR_Integer) 25;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 110:
          if (MR_offset_streq(1, libs__compute_grade__HeadVar__1_1, (MR_String) "none"))
            libs__compute_grade__case_num_0 = (MR_Integer) 26;
          break;
        case (MR_Integer) 112:
          switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, libs__compute_grade__HeadVar__1_1, (MR_String) "par"))
                libs__compute_grade__case_num_0 = (MR_Integer) 27;
              break;
            case (MR_Integer) 114:
              switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 2)) {
                case (MR_Integer) 101:
                  if (MR_offset_streq(3, libs__compute_grade__HeadVar__1_1, (MR_String) "pregen"))
                    libs__compute_grade__case_num_0 = (MR_Integer) 28;
                  break;
                case (MR_Integer) 111:
                  if (((MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 3)) == (MR_Integer) 102))
                    switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 4)) {
                      case (MR_Integer) 0:
                        libs__compute_grade__case_num_0 = (MR_Integer) 29;
                        break;
                      case (MR_Integer) 97:
                        if (MR_offset_streq(5, libs__compute_grade__HeadVar__1_1, (MR_String) "profall"))
                          libs__compute_grade__case_num_0 = (MR_Integer) 30;
                        break;
                      case (MR_Integer) 99:
                        if (MR_offset_streq(5, libs__compute_grade__HeadVar__1_1, (MR_String) "profcalls"))
                          libs__compute_grade__case_num_0 = (MR_Integer) 31;
                        break;
                      case (MR_Integer) 100:
                        if (MR_offset_streq(5, libs__compute_grade__HeadVar__1_1, (MR_String) "profdeep"))
                          libs__compute_grade__case_num_0 = (MR_Integer) 32;
                        break;
                      case (MR_Integer) 116:
                        if (MR_offset_streq(5, libs__compute_grade__HeadVar__1_1, (MR_String) "proftime"))
                          libs__compute_grade__case_num_0 = (MR_Integer) 33;
                        break;
                    }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 114:
          switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 1)) {
            case (MR_Integer) 98:
              if (((((MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 2)) == (MR_Integer) 109)) && (((MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 3)) == (MR_Integer) 109))))
                switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 4)) {
                  case (MR_Integer) 0:
                    libs__compute_grade__case_num_0 = (MR_Integer) 34;
                    break;
                  case (MR_Integer) 100:
                    switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 5)) {
                      case (MR_Integer) 0:
                        libs__compute_grade__case_num_0 = (MR_Integer) 35;
                        break;
                      case (MR_Integer) 112:
                        if (MR_offset_streq(6, libs__compute_grade__HeadVar__1_1, (MR_String) "rbmmdp"))
                          libs__compute_grade__case_num_0 = (MR_Integer) 36;
                        break;
                    }
                    break;
                  case (MR_Integer) 112:
                    if (MR_offset_streq(5, libs__compute_grade__HeadVar__1_1, (MR_String) "rbmmp"))
                      libs__compute_grade__case_num_0 = (MR_Integer) 37;
                    break;
                }
              break;
            case (MR_Integer) 101:
              if (MR_offset_streq(2, libs__compute_grade__HeadVar__1_1, (MR_String) "reg"))
                libs__compute_grade__case_num_0 = (MR_Integer) 38;
              break;
          }
          break;
        case (MR_Integer) 115:
          switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 1)) {
            case (MR_Integer) 112:
              if (MR_offset_streq(2, libs__compute_grade__HeadVar__1_1, (MR_String) "spf"))
                libs__compute_grade__case_num_0 = (MR_Integer) 39;
              break;
            case (MR_Integer) 115:
              if (MR_offset_streq(2, libs__compute_grade__HeadVar__1_1, (MR_String) "ssdebug"))
                libs__compute_grade__case_num_0 = (MR_Integer) 40;
              break;
            case (MR_Integer) 116:
              if (MR_offset_streq(2, libs__compute_grade__HeadVar__1_1, (MR_String) "stseg"))
                libs__compute_grade__case_num_0 = (MR_Integer) 41;
              break;
          }
          break;
        case (MR_Integer) 116:
          switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 1)) {
            case (MR_Integer) 104:
              if (MR_offset_streq(2, libs__compute_grade__HeadVar__1_1, (MR_String) "threadscope"))
                libs__compute_grade__case_num_0 = (MR_Integer) 42;
              break;
            case (MR_Integer) 114:
              switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 2)) {
                case (MR_Integer) 0:
                  libs__compute_grade__case_num_0 = (MR_Integer) 43;
                  break;
                case (MR_Integer) 115:
                  if (MR_offset_streq(3, libs__compute_grade__HeadVar__1_1, (MR_String) "trseg"))
                    libs__compute_grade__case_num_0 = (MR_Integer) 44;
                  break;
              }
              break;
            case (MR_Integer) 115:
              switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 2)) {
                case (MR_Integer) 99:
                  if (MR_offset_streq(3, libs__compute_grade__HeadVar__1_1, (MR_String) "tsc"))
                    libs__compute_grade__case_num_0 = (MR_Integer) 45;
                  break;
                case (MR_Integer) 119:
                  if (MR_offset_streq(3, libs__compute_grade__HeadVar__1_1, (MR_String) "tsw"))
                    libs__compute_grade__case_num_0 = (MR_Integer) 46;
                  break;
              }
              break;
          }
          break;
      }
      if ((libs__compute_grade__case_num_0 < (MR_Integer) 0))
        libs__compute_grade__succeeded = MR_FALSE;
      else
        {
          /* we found a match; look up the results */
          *libs__compute_grade__HeadVar__2_2 = ((&libs__compute_grade_vector_common_10[0 + libs__compute_grade__case_num_0]))->libs__compute_grade__vector_common_type_10_0__vct_10_f_0;
          *libs__compute_grade__HeadVar__3_3 = ((&libs__compute_grade_vector_common_10[0 + libs__compute_grade__case_num_0]))->libs__compute_grade__vector_common_type_10_0__vct_10_f_1;
          *libs__compute_grade__HeadVar__4_4 = ((&libs__compute_grade_vector_common_10[0 + libs__compute_grade__case_num_0]))->libs__compute_grade__vector_common_type_10_0__vct_10_f_2;
          *libs__compute_grade__HeadVar__5_5 = ((&libs__compute_grade_vector_common_10[0 + libs__compute_grade__case_num_0]))->libs__compute_grade__vector_common_type_10_0__vct_10_f_3;
          libs__compute_grade__succeeded = MR_TRUE;
        }
    }
    return libs__compute_grade__succeeded;
  }
}

static void MR_CALL 
libs__compute_grade__grade_directory_component_2_p_0_1(
  void * libs__compute_grade__env_ptr_arg)
{
  {
    struct libs__compute_grade__grade_directory_component_2_p_0_2_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__grade_directory_component_2_p_0_2_env_0_s *) libs__compute_grade__env_ptr_arg;

    *((libs__compute_grade__env_ptr)->libs__compute_grade__grade_directory_component_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((libs__compute_grade__env_ptr)->libs__compute_grade__grade_directory_component_2_p_0_2_env_0__conv0_LambdaHeadVar__1_16));
    {
      ((libs__compute_grade__env_ptr)->libs__compute_grade__grade_directory_component_2_p_0_2_env_0__cont)((libs__compute_grade__env_ptr)->libs__compute_grade__grade_directory_component_2_p_0_2_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
libs__compute_grade__grade_directory_component_2_p_0_2(
  MR_Box libs__compute_grade__closure_arg,
  MR_Box * libs__compute_grade__wrapper_arg_1,
  MR_Cont libs__compute_grade__cont,
  void * libs__compute_grade__cont_env_ptr)
{
  {
    struct libs__compute_grade__grade_directory_component_2_p_0_2_env_0_s libs__compute_grade__env;

    (libs__compute_grade__env).libs__compute_grade__grade_directory_component_2_p_0_2_env_0__wrapper_arg_1 = libs__compute_grade__wrapper_arg_1;
    (libs__compute_grade__env).libs__compute_grade__grade_directory_component_2_p_0_2_env_0__cont = libs__compute_grade__cont;
    (libs__compute_grade__env).libs__compute_grade__grade_directory_component_2_p_0_2_env_0__cont_env_ptr = libs__compute_grade__cont_env_ptr;
    {
      MR_Box libs__compute_grade__closure = libs__compute_grade__closure_arg;

      {
        libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__compute_grade__closure, (MR_Integer) 3))), &(libs__compute_grade__env).libs__compute_grade__grade_directory_component_2_p_0_2_env_0__conv0_LambdaHeadVar__1_16, libs__compute_grade__grade_directory_component_2_p_0_1, &libs__compute_grade__env);
      }
    }
  }
}

void MR_CALL 
libs__compute_grade__grade_directory_component_2_p_0(
  MR_Word libs__compute_grade__Globals_3,
  MR_String * libs__compute_grade__Grade_4)
{
  {
    MR_Word libs__compute_grade__Options_7;
    MR_Word libs__compute_grade__Components_8;
    MR_Word libs__compute_grade__Var_23;

    {
      libs__globals__get_options_2_p_0(libs__compute_grade__Globals_3, &libs__compute_grade__Options_7);
    }
    {
      libs__compute_grade__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), libs__compute_grade__Var_23, 0) = ((MR_Box) (&libs__compute_grade_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), libs__compute_grade__Var_23, 1) = ((MR_Box) (libs__compute_grade__grade_directory_component_2_p_0_2));
      MR_hl_field(MR_mktag(0), libs__compute_grade__Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), libs__compute_grade__Var_23, 3) = ((MR_Box) (libs__compute_grade__Options_7));
    }
    {
      mercury__solutions__solutions_2_p_1((MR_Word) &libs__compute_grade_scalar_common_2[2], libs__compute_grade__Var_23, &libs__compute_grade__Components_8);
    }
    if ((libs__compute_grade__Components_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *libs__compute_grade__Grade_4 = (MR_String) "none";
    else
      {
        libs__compute_grade__construct_string_2_p_0(libs__compute_grade__Components_8, libs__compute_grade__Grade_4);
      }
  }
}

static MR_bool MR_CALL 
libs__compute_grade__convert_grade_option_3_p_0_4(
  MR_Box libs__compute_grade__closure_arg,
  MR_Box libs__compute_grade__wrapper_arg_1,
  MR_Box libs__compute_grade__wrapper_arg_2,
  MR_Box * libs__compute_grade__wrapper_arg_3,
  MR_Box libs__compute_grade__wrapper_arg_4,
  MR_Box * libs__compute_grade__wrapper_arg_5)
{
  {
    MR_bool libs__compute_grade__succeeded;
    MR_Box libs__compute_grade__closure = libs__compute_grade__closure_arg;
    MR_Word libs__compute_grade__conv4_LambdaHeadVar__3_25;
    MR_Word libs__compute_grade__conv3_LambdaHeadVar__5_27;

    {
      libs__compute_grade__succeeded = libs__compute_grade__IntroducedFrom__pred__convert_grade_option__423__1_5_p_0(((MR_String) libs__compute_grade__wrapper_arg_1), ((MR_Word) libs__compute_grade__wrapper_arg_2), &libs__compute_grade__conv4_LambdaHeadVar__3_25, ((MR_Word) libs__compute_grade__wrapper_arg_4), &libs__compute_grade__conv3_LambdaHeadVar__5_27);
    }
    if (libs__compute_grade__succeeded)
      {
        *libs__compute_grade__wrapper_arg_3 = ((MR_Box) (libs__compute_grade__conv4_LambdaHeadVar__3_25));
        *libs__compute_grade__wrapper_arg_5 = ((MR_Box) (libs__compute_grade__conv3_LambdaHeadVar__5_27));
        libs__compute_grade__succeeded = MR_TRUE;
      }
    return libs__compute_grade__succeeded;
  }
}

static void MR_CALL 
libs__compute_grade__convert_grade_option_3_p_0_3(
  MR_Box libs__compute_grade__closure_arg,
  MR_Box libs__compute_grade__wrapper_arg_1,
  MR_Box libs__compute_grade__wrapper_arg_2,
  MR_Box * libs__compute_grade__wrapper_arg_3)
{
  {
    MR_Box libs__compute_grade__closure = libs__compute_grade__closure_arg;
    MR_Word libs__compute_grade__conv1_LambdaHeadVar__3_14;

    {
      libs__compute_grade__IntroducedFrom__pred__reset_grade_options__763__1_3_p_0(((MR_Word) libs__compute_grade__wrapper_arg_1), ((MR_Word) libs__compute_grade__wrapper_arg_2), &libs__compute_grade__conv1_LambdaHeadVar__3_14);
    }
    *libs__compute_grade__wrapper_arg_3 = ((MR_Box) (libs__compute_grade__conv1_LambdaHeadVar__3_14));
  }
}

static void MR_CALL 
libs__compute_grade__convert_grade_option_3_p_0_1(
  void * libs__compute_grade__env_ptr_arg)
{
  {
    struct libs__compute_grade__convert_grade_option_3_p_0_2_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__convert_grade_option_3_p_0_2_env_0_s *) libs__compute_grade__env_ptr_arg;

    *((libs__compute_grade__env_ptr)->libs__compute_grade__convert_grade_option_3_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((libs__compute_grade__env_ptr)->libs__compute_grade__convert_grade_option_3_p_0_2_env_0__conv0_HeadVar__1_1));
    {
      ((libs__compute_grade__env_ptr)->libs__compute_grade__convert_grade_option_3_p_0_2_env_0__cont)((libs__compute_grade__env_ptr)->libs__compute_grade__convert_grade_option_3_p_0_2_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
libs__compute_grade__convert_grade_option_3_p_0_2(
  MR_Box libs__compute_grade__closure_arg,
  MR_Box * libs__compute_grade__wrapper_arg_1,
  MR_Cont libs__compute_grade__cont,
  void * libs__compute_grade__cont_env_ptr)
{
  {
    struct libs__compute_grade__convert_grade_option_3_p_0_2_env_0_s libs__compute_grade__env;

    (libs__compute_grade__env).libs__compute_grade__convert_grade_option_3_p_0_2_env_0__wrapper_arg_1 = libs__compute_grade__wrapper_arg_1;
    (libs__compute_grade__env).libs__compute_grade__convert_grade_option_3_p_0_2_env_0__cont = libs__compute_grade__cont;
    (libs__compute_grade__env).libs__compute_grade__convert_grade_option_3_p_0_2_env_0__cont_env_ptr = libs__compute_grade__cont_env_ptr;
    {
      MR_Box libs__compute_grade__closure = libs__compute_grade__closure_arg;

      {
        libs__compute_grade__grade_start_values_1_p_0(&(libs__compute_grade__env).libs__compute_grade__convert_grade_option_3_p_0_2_env_0__conv0_HeadVar__1_1, libs__compute_grade__convert_grade_option_3_p_0_1, &libs__compute_grade__env);
      }
    }
  }
}

MR_bool MR_CALL 
libs__compute_grade__convert_grade_option_3_p_0(
  MR_String libs__compute_grade__GradeString_4,
  MR_Word libs__compute_grade__Options0_5,
  MR_Word * libs__compute_grade__Options_6)
{
  {
    MR_bool libs__compute_grade__succeeded;
    MR_Word libs__compute_grade__TypeCtorInfo_39_39;
    MR_Word libs__compute_grade__TypeCtorInfo_42_42;
    MR_Word libs__compute_grade__TypeInfo_43_43;
    MR_Word libs__compute_grade__TypeInfo_44_44;
    MR_Word libs__compute_grade__Options1_7;
    MR_Word libs__compute_grade__Components_8;
    MR_Word libs__compute_grade__NoComps_9;
    MR_Word libs__compute_grade__Var_22;
    MR_Word libs__compute_grade__Chars_67;
    MR_Box libs__compute_grade__conv2_Options1_7;
    MR_Word libs__compute_grade___FinalComps_21;
    MR_Box libs__compute_grade__conv6_Options_6;
    MR_Box libs__compute_grade__conv5__FinalComps_21;

    {
      mercury__solutions__aggregate_4_p_0((MR_Word) &libs__compute_grade_scalar_common_2[1], (MR_Word) &libs__compute_grade_scalar_common_2[0], (MR_Word) &libs__compute_grade_scalar_common_2[5], (MR_Word) &libs__compute_grade_scalar_common_2[6], ((MR_Box) (libs__compute_grade__Options0_5)), &libs__compute_grade__conv2_Options1_7);
    }
    libs__compute_grade__Options1_7 = ((MR_Word) libs__compute_grade__conv2_Options1_7);
    {
      mercury__string__to_char_list_2_p_0(libs__compute_grade__GradeString_4, &libs__compute_grade__Chars_67);
    }
    {
      libs__compute_grade__succeeded = libs__compute_grade__split_grade_string_2_2_p_0(libs__compute_grade__Chars_67, &libs__compute_grade__Components_8);
    }
    if (libs__compute_grade__succeeded)
      {
        libs__compute_grade__TypeCtorInfo_39_39 = (MR_Word) &libs__compute_grade__libs__compute_grade__type_ctor_info_grade_component_0;
        {
          mercury__set__init_1_p_0(libs__compute_grade__TypeCtorInfo_39_39, &libs__compute_grade__NoComps_9);
        }
        libs__compute_grade__Var_22 = (MR_Word) &libs__compute_grade_scalar_common_2[7];
        libs__compute_grade__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        libs__compute_grade__TypeInfo_43_43 = (MR_Word) &libs__compute_grade_scalar_common_2[0];
        libs__compute_grade__TypeInfo_44_44 = (MR_Word) &libs__compute_grade_scalar_common_1[2];
        {
          libs__compute_grade__succeeded = mercury__list__foldl2_6_p_4(libs__compute_grade__TypeCtorInfo_42_42, libs__compute_grade__TypeInfo_43_43, libs__compute_grade__TypeInfo_44_44, libs__compute_grade__Var_22, libs__compute_grade__Components_8, ((MR_Box) (libs__compute_grade__Options1_7)), &libs__compute_grade__conv6_Options_6, ((MR_Box) (libs__compute_grade__NoComps_9)), &libs__compute_grade__conv5__FinalComps_21);
        }
        if (libs__compute_grade__succeeded)
          {
            *libs__compute_grade__Options_6 = ((MR_Word) libs__compute_grade__conv6_Options_6);
            libs__compute_grade___FinalComps_21 = ((MR_Word) libs__compute_grade__conv5__FinalComps_21);
            libs__compute_grade__succeeded = MR_TRUE;
          }
      }
    return libs__compute_grade__succeeded;
  }
}

static MR_bool MR_CALL 
libs__compute_grade__split_grade_string_2_2_p_0_1(
  MR_Box libs__compute_grade__closure_arg,
  MR_Box libs__compute_grade__wrapper_arg_1)
{
  {
    MR_bool libs__compute_grade__succeeded;
    MR_Box libs__compute_grade__closure = libs__compute_grade__closure_arg;

    {
      libs__compute_grade__succeeded = libs__compute_grade__char_is_not_2_p_0(((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(0), libs__compute_grade__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) libs__compute_grade__wrapper_arg_1));
    }
    return libs__compute_grade__succeeded;
  }
}

static MR_bool MR_CALL 
libs__compute_grade__split_grade_string_2_2_p_0(
  MR_Word libs__compute_grade__HeadVar__1_1,
  MR_Word * libs__compute_grade__HeadVar__2_2)
{
  {
    MR_bool libs__compute_grade__succeeded;

    if ((libs__compute_grade__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *libs__compute_grade__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        libs__compute_grade__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word libs__compute_grade__ThisChars_7;
        MR_Word libs__compute_grade__RestChars0_8;
        MR_String libs__compute_grade__ThisComponent_9;
        MR_Word libs__compute_grade__RestComponents_10;

        {
          mercury__list__take_while_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &libs__compute_grade_scalar_common_5[2], libs__compute_grade__HeadVar__1_1, &libs__compute_grade__ThisChars_7, &libs__compute_grade__RestChars0_8);
        }
        {
          mercury__string__from_char_list_2_p_0(libs__compute_grade__ThisChars_7, &libs__compute_grade__ThisComponent_9);
        }
        if ((libs__compute_grade__RestChars0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            libs__compute_grade__RestComponents_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            libs__compute_grade__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word libs__compute_grade__RestChars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__compute_grade__RestChars0_8, (MR_Integer) 1)));
            MR_Char libs__compute_grade__Var_11 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), libs__compute_grade__RestChars0_8, (MR_Integer) 0)));

            {
              libs__compute_grade__succeeded = libs__compute_grade__split_grade_string_2_2_p_0(libs__compute_grade__RestChars_12, &libs__compute_grade__RestComponents_10);
            }
          }
        if (libs__compute_grade__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *libs__compute_grade__HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__compute_grade__ThisComponent_9));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__compute_grade__RestComponents_10));
            }
            libs__compute_grade__succeeded = MR_TRUE;
          }
      }
    return libs__compute_grade__succeeded;
  }
}

static void MR_CALL 
libs__compute_grade__compute_grade_2_p_0_1(
  void * libs__compute_grade__env_ptr_arg)
{
  {
    struct libs__compute_grade__compute_grade_2_p_0_2_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__compute_grade_2_p_0_2_env_0_s *) libs__compute_grade__env_ptr_arg;

    *((libs__compute_grade__env_ptr)->libs__compute_grade__compute_grade_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((libs__compute_grade__env_ptr)->libs__compute_grade__compute_grade_2_p_0_2_env_0__conv0_LambdaHeadVar__1_16));
    {
      ((libs__compute_grade__env_ptr)->libs__compute_grade__compute_grade_2_p_0_2_env_0__cont)((libs__compute_grade__env_ptr)->libs__compute_grade__compute_grade_2_p_0_2_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
libs__compute_grade__compute_grade_2_p_0_2(
  MR_Box libs__compute_grade__closure_arg,
  MR_Box * libs__compute_grade__wrapper_arg_1,
  MR_Cont libs__compute_grade__cont,
  void * libs__compute_grade__cont_env_ptr)
{
  {
    struct libs__compute_grade__compute_grade_2_p_0_2_env_0_s libs__compute_grade__env;

    (libs__compute_grade__env).libs__compute_grade__compute_grade_2_p_0_2_env_0__wrapper_arg_1 = libs__compute_grade__wrapper_arg_1;
    (libs__compute_grade__env).libs__compute_grade__compute_grade_2_p_0_2_env_0__cont = libs__compute_grade__cont;
    (libs__compute_grade__env).libs__compute_grade__compute_grade_2_p_0_2_env_0__cont_env_ptr = libs__compute_grade__cont_env_ptr;
    {
      MR_Box libs__compute_grade__closure = libs__compute_grade__closure_arg;

      {
        libs__compute_grade__IntroducedFrom__pred__compute_grade_components__487__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__compute_grade__closure, (MR_Integer) 3))), &(libs__compute_grade__env).libs__compute_grade__compute_grade_2_p_0_2_env_0__conv0_LambdaHeadVar__1_16, libs__compute_grade__compute_grade_2_p_0_1, &libs__compute_grade__env);
      }
    }
  }
}

void MR_CALL 
libs__compute_grade__compute_grade_2_p_0(
  MR_Word libs__compute_grade__Globals_3,
  MR_String * libs__compute_grade__Grade_4)
{
  {
    MR_Word libs__compute_grade__Options_5;
    MR_Word libs__compute_grade__Components_6;
    MR_Word libs__compute_grade__Var_21;

    {
      libs__globals__get_options_2_p_0(libs__compute_grade__Globals_3, &libs__compute_grade__Options_5);
    }
    {
      libs__compute_grade__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), libs__compute_grade__Var_21, 0) = ((MR_Box) (&libs__compute_grade_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), libs__compute_grade__Var_21, 1) = ((MR_Box) (libs__compute_grade__compute_grade_2_p_0_2));
      MR_hl_field(MR_mktag(0), libs__compute_grade__Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), libs__compute_grade__Var_21, 3) = ((MR_Box) (libs__compute_grade__Options_5));
    }
    {
      mercury__solutions__solutions_2_p_1((MR_Word) &libs__compute_grade_scalar_common_2[2], libs__compute_grade__Var_21, &libs__compute_grade__Components_6);
    }
    if ((libs__compute_grade__Components_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *libs__compute_grade__Grade_4 = (MR_String) "none";
    else
      {
        libs__compute_grade__construct_string_2_p_0(libs__compute_grade__Components_6, libs__compute_grade__Grade_4);
      }
  }
}

static void MR_CALL 
libs__compute_grade__construct_string_2_p_0(
  MR_Word libs__compute_grade__HeadVar__1_1,
  MR_String * libs__compute_grade__HeadVar__2_2)
{
  if ((libs__compute_grade__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *libs__compute_grade__HeadVar__2_2 = (MR_String) "";
  else
    {
      MR_String libs__compute_grade__Bit_4;
      MR_Word libs__compute_grade__Bits_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__compute_grade__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word libs__compute_grade__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__compute_grade__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word libs__compute_grade__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__compute_grade__Var_10, (MR_Integer) 0)));

      libs__compute_grade__Bit_4 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__compute_grade__Var_10, (MR_Integer) 1)));
      if ((libs__compute_grade__Bits_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *libs__compute_grade__HeadVar__2_2 = libs__compute_grade__Bit_4;
      else
        {
          MR_String libs__compute_grade__Grade0_9;
          MR_Word libs__compute_grade__Var_11;
          MR_Word libs__compute_grade__Var_12;
          MR_Word libs__compute_grade__Var_14;
          MR_String libs__compute_grade__Bit_17;
          MR_Word libs__compute_grade__Bits_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__compute_grade__Bits_5, (MR_Integer) 1)));
          MR_Word libs__compute_grade__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__compute_grade__Bits_5, (MR_Integer) 0)));
          MR_Word libs__compute_grade__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__compute_grade__Var_23, (MR_Integer) 0)));

          libs__compute_grade__Bit_17 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__compute_grade__Var_23, (MR_Integer) 1)));
          if ((libs__compute_grade__Bits_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            libs__compute_grade__Grade0_9 = libs__compute_grade__Bit_17;
          else
            {
              MR_String libs__compute_grade__Grade0_22;
              MR_Word libs__compute_grade__Var_24;
              MR_Word libs__compute_grade__Var_25;
              MR_Word libs__compute_grade__Var_27;

              {
                libs__compute_grade__construct_string_2_p_0(libs__compute_grade__Bits_18, &libs__compute_grade__Grade0_22);
              }
              {
                libs__compute_grade__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_27, 0) = ((MR_Box) (libs__compute_grade__Grade0_22));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                libs__compute_grade__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_25, 0) = ((MR_Box) ((MR_String) "."));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_25, 1) = ((MR_Box) (libs__compute_grade__Var_27));
              }
              {
                libs__compute_grade__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_24, 0) = ((MR_Box) (libs__compute_grade__Bit_17));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_24, 1) = ((MR_Box) (libs__compute_grade__Var_25));
              }
              {
                mercury__string__append_list_2_p_0(libs__compute_grade__Var_24, &libs__compute_grade__Grade0_9);
              }
            }
          {
            libs__compute_grade__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), libs__compute_grade__Var_14, 0) = ((MR_Box) (libs__compute_grade__Grade0_9));
            MR_hl_field(MR_mktag(1), libs__compute_grade__Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            libs__compute_grade__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), libs__compute_grade__Var_12, 0) = ((MR_Box) ((MR_String) "."));
            MR_hl_field(MR_mktag(1), libs__compute_grade__Var_12, 1) = ((MR_Box) (libs__compute_grade__Var_14));
          }
          {
            libs__compute_grade__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), libs__compute_grade__Var_11, 0) = ((MR_Box) (libs__compute_grade__Bit_4));
            MR_hl_field(MR_mktag(1), libs__compute_grade__Var_11, 1) = ((MR_Box) (libs__compute_grade__Var_12));
          }
          {
            mercury__string__append_list_2_p_0(libs__compute_grade__Var_11, libs__compute_grade__HeadVar__2_2);
          }
        }
    }
}

static void MR_CALL 
libs__compute_grade__postprocess_options_libgrades_4_p_0_6(
  MR_Box libs__compute_grade__closure_arg,
  MR_Box libs__compute_grade__wrapper_arg_1,
  MR_Box libs__compute_grade__wrapper_arg_2,
  MR_Box * libs__compute_grade__wrapper_arg_3,
  MR_Box libs__compute_grade__wrapper_arg_4,
  MR_Box * libs__compute_grade__wrapper_arg_5)
{
  {
    MR_Box libs__compute_grade__closure = libs__compute_grade__closure_arg;
    MR_Word libs__compute_grade__conv13_STATE_VARIABLE_Grades_16;
    MR_Word libs__compute_grade__conv12_STATE_VARIABLE_Specs_18;

    {
      libs__compute_grade__filter_grade_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__compute_grade__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), libs__compute_grade__closure, (MR_Integer) 4))), ((MR_String) libs__compute_grade__wrapper_arg_1), ((MR_Word) libs__compute_grade__wrapper_arg_2), &libs__compute_grade__conv13_STATE_VARIABLE_Grades_16, ((MR_Word) libs__compute_grade__wrapper_arg_4), &libs__compute_grade__conv12_STATE_VARIABLE_Specs_18);
    }
    *libs__compute_grade__wrapper_arg_3 = ((MR_Box) (libs__compute_grade__conv13_STATE_VARIABLE_Grades_16));
    *libs__compute_grade__wrapper_arg_5 = ((MR_Box) (libs__compute_grade__conv12_STATE_VARIABLE_Specs_18));
  }
}

static MR_bool MR_CALL 
libs__compute_grade__postprocess_options_libgrades_4_p_0_5(
  MR_Box libs__compute_grade__closure_arg,
  MR_Box libs__compute_grade__wrapper_arg_1,
  MR_Box libs__compute_grade__wrapper_arg_2)
{
  {
    MR_bool libs__compute_grade__succeeded;
    MR_Box libs__compute_grade__closure = libs__compute_grade__closure_arg;

    {
      libs__compute_grade__succeeded = libs__compute_grade__must_not_contain_2_p_0(((MR_Word) libs__compute_grade__wrapper_arg_1), ((MR_Word) libs__compute_grade__wrapper_arg_2));
    }
    return libs__compute_grade__succeeded;
  }
}

static void MR_CALL 
libs__compute_grade__postprocess_options_libgrades_4_p_0_4(
  MR_Box libs__compute_grade__closure_arg,
  MR_Box libs__compute_grade__wrapper_arg_1,
  MR_Box libs__compute_grade__wrapper_arg_2,
  MR_Box * libs__compute_grade__wrapper_arg_3,
  MR_Box libs__compute_grade__wrapper_arg_4,
  MR_Box * libs__compute_grade__wrapper_arg_5)
{
  {
    MR_Box libs__compute_grade__closure = libs__compute_grade__closure_arg;
    MR_Word libs__compute_grade__conv9_STATE_VARIABLE_Grades_16;
    MR_Word libs__compute_grade__conv8_STATE_VARIABLE_Specs_18;

    {
      libs__compute_grade__filter_grade_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__compute_grade__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), libs__compute_grade__closure, (MR_Integer) 4))), ((MR_String) libs__compute_grade__wrapper_arg_1), ((MR_Word) libs__compute_grade__wrapper_arg_2), &libs__compute_grade__conv9_STATE_VARIABLE_Grades_16, ((MR_Word) libs__compute_grade__wrapper_arg_4), &libs__compute_grade__conv8_STATE_VARIABLE_Specs_18);
    }
    *libs__compute_grade__wrapper_arg_3 = ((MR_Box) (libs__compute_grade__conv9_STATE_VARIABLE_Grades_16));
    *libs__compute_grade__wrapper_arg_5 = ((MR_Box) (libs__compute_grade__conv8_STATE_VARIABLE_Specs_18));
  }
}

static MR_bool MR_CALL 
libs__compute_grade__postprocess_options_libgrades_4_p_0_3(
  MR_Box libs__compute_grade__closure_arg,
  MR_Box libs__compute_grade__wrapper_arg_1,
  MR_Box libs__compute_grade__wrapper_arg_2)
{
  {
    MR_bool libs__compute_grade__succeeded;
    MR_Box libs__compute_grade__closure = libs__compute_grade__closure_arg;

    {
      libs__compute_grade__succeeded = libs__compute_grade__must_contain_2_p_0(((MR_Word) libs__compute_grade__wrapper_arg_1), ((MR_Word) libs__compute_grade__wrapper_arg_2));
    }
    return libs__compute_grade__succeeded;
  }
}

static void MR_CALL 
libs__compute_grade__postprocess_options_libgrades_4_p_0_2(
  MR_Box libs__compute_grade__closure_arg,
  MR_Box libs__compute_grade__wrapper_arg_1,
  MR_Box libs__compute_grade__wrapper_arg_2,
  MR_Box * libs__compute_grade__wrapper_arg_3,
  MR_Box libs__compute_grade__wrapper_arg_4,
  MR_Box * libs__compute_grade__wrapper_arg_5)
{
  {
    MR_Box libs__compute_grade__closure = libs__compute_grade__closure_arg;
    MR_Word libs__compute_grade__conv5_STATE_VARIABLE_Comps_17;
    MR_Word libs__compute_grade__conv4_STATE_VARIABLE_Specs_19;

    {
      libs__compute_grade__string_to_grade_component_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__compute_grade__closure, (MR_Integer) 3))), ((MR_String) libs__compute_grade__wrapper_arg_1), ((MR_Word) libs__compute_grade__wrapper_arg_2), &libs__compute_grade__conv5_STATE_VARIABLE_Comps_17, ((MR_Word) libs__compute_grade__wrapper_arg_4), &libs__compute_grade__conv4_STATE_VARIABLE_Specs_19);
    }
    *libs__compute_grade__wrapper_arg_3 = ((MR_Box) (libs__compute_grade__conv5_STATE_VARIABLE_Comps_17));
    *libs__compute_grade__wrapper_arg_5 = ((MR_Box) (libs__compute_grade__conv4_STATE_VARIABLE_Specs_19));
  }
}

static void MR_CALL 
libs__compute_grade__postprocess_options_libgrades_4_p_0_1(
  MR_Box libs__compute_grade__closure_arg,
  MR_Box libs__compute_grade__wrapper_arg_1,
  MR_Box libs__compute_grade__wrapper_arg_2,
  MR_Box * libs__compute_grade__wrapper_arg_3,
  MR_Box libs__compute_grade__wrapper_arg_4,
  MR_Box * libs__compute_grade__wrapper_arg_5)
{
  {
    MR_Box libs__compute_grade__closure = libs__compute_grade__closure_arg;
    MR_Word libs__compute_grade__conv1_STATE_VARIABLE_Comps_17;
    MR_Word libs__compute_grade__conv0_STATE_VARIABLE_Specs_19;

    {
      libs__compute_grade__string_to_grade_component_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__compute_grade__closure, (MR_Integer) 3))), ((MR_String) libs__compute_grade__wrapper_arg_1), ((MR_Word) libs__compute_grade__wrapper_arg_2), &libs__compute_grade__conv1_STATE_VARIABLE_Comps_17, ((MR_Word) libs__compute_grade__wrapper_arg_4), &libs__compute_grade__conv0_STATE_VARIABLE_Specs_19);
    }
    *libs__compute_grade__wrapper_arg_3 = ((MR_Box) (libs__compute_grade__conv1_STATE_VARIABLE_Comps_17));
    *libs__compute_grade__wrapper_arg_5 = ((MR_Box) (libs__compute_grade__conv0_STATE_VARIABLE_Specs_19));
  }
}

void MR_CALL 
libs__compute_grade__postprocess_options_libgrades_4_p_0(
  MR_Word libs__compute_grade__STATE_VARIABLE_Globals_0_12,
  MR_Word * libs__compute_grade__STATE_VARIABLE_Globals_13,
  MR_Word libs__compute_grade__STATE_VARIABLE_Specs_0_14,
  MR_Word * libs__compute_grade__STATE_VARIABLE_Specs_15)
{
  {
    MR_bool libs__compute_grade__succeeded;
    MR_Word libs__compute_grade__TypeCtorInfo_46_46;
    MR_Word libs__compute_grade__TypeInfo_47_47;
    MR_Word libs__compute_grade__TypeInfo_48_48;
    MR_Word libs__compute_grade__IncludeComponentStrs_7;
    MR_Word libs__compute_grade__OmitComponentStrs_8;
    MR_Word libs__compute_grade__IncludeComponents_9;
    MR_Word libs__compute_grade__OmitComponents_10;
    MR_Word libs__compute_grade__STATE_VARIABLE_Specs_20_20;
    MR_Word libs__compute_grade__STATE_VARIABLE_Specs_24_24;
    MR_Word libs__compute_grade__STATE_VARIABLE_LibGrades_27_27;
    MR_Word libs__compute_grade__Var_28;
    MR_Word libs__compute_grade__STATE_VARIABLE_LibGrades_30_30;
    MR_Word libs__compute_grade__STATE_VARIABLE_Specs_31_31;
    MR_Word libs__compute_grade__Var_33;
    MR_Word libs__compute_grade__STATE_VARIABLE_LibGrades_35_35;
    MR_Word libs__compute_grade__Var_39;
    MR_Box libs__compute_grade__conv3_IncludeComponents_9;
    MR_Box libs__compute_grade__conv2_STATE_VARIABLE_Specs_20_20;
    MR_Box libs__compute_grade__conv7_OmitComponents_10;
    MR_Box libs__compute_grade__conv6_STATE_VARIABLE_Specs_24_24;
    MR_Box libs__compute_grade__conv11_STATE_VARIABLE_LibGrades_30_30;
    MR_Box libs__compute_grade__conv10_STATE_VARIABLE_Specs_31_31;
    MR_Box libs__compute_grade__conv15_STATE_VARIABLE_LibGrades_35_35;
    MR_Box libs__compute_grade__conv14_STATE_VARIABLE_Specs_15;

    {
      libs__globals__lookup_accumulating_option_3_p_0(libs__compute_grade__STATE_VARIABLE_Globals_0_12, (MR_Integer) 642, &libs__compute_grade__IncludeComponentStrs_7);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(libs__compute_grade__STATE_VARIABLE_Globals_0_12, (MR_Integer) 643, &libs__compute_grade__OmitComponentStrs_8);
    }
    libs__compute_grade__TypeCtorInfo_46_46 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    libs__compute_grade__TypeInfo_47_47 = (MR_Word) &libs__compute_grade_scalar_common_1[0];
    libs__compute_grade__TypeInfo_48_48 = (MR_Word) &libs__compute_grade_scalar_common_1[1];
    {
      mercury__list__foldl2_6_p_0(libs__compute_grade__TypeCtorInfo_46_46, libs__compute_grade__TypeInfo_47_47, libs__compute_grade__TypeInfo_48_48, (MR_Word) &libs__compute_grade_scalar_common_5[0], libs__compute_grade__IncludeComponentStrs_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__compute_grade__conv3_IncludeComponents_9, ((MR_Box) (libs__compute_grade__STATE_VARIABLE_Specs_0_14)), &libs__compute_grade__conv2_STATE_VARIABLE_Specs_20_20);
    }
    libs__compute_grade__IncludeComponents_9 = ((MR_Word) libs__compute_grade__conv3_IncludeComponents_9);
    libs__compute_grade__STATE_VARIABLE_Specs_20_20 = ((MR_Word) libs__compute_grade__conv2_STATE_VARIABLE_Specs_20_20);
    {
      mercury__list__foldl2_6_p_0(libs__compute_grade__TypeCtorInfo_46_46, libs__compute_grade__TypeInfo_47_47, libs__compute_grade__TypeInfo_48_48, (MR_Word) &libs__compute_grade_scalar_common_5[1], libs__compute_grade__OmitComponentStrs_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__compute_grade__conv7_OmitComponents_10, ((MR_Box) (libs__compute_grade__STATE_VARIABLE_Specs_20_20)), &libs__compute_grade__conv6_STATE_VARIABLE_Specs_24_24);
    }
    libs__compute_grade__OmitComponents_10 = ((MR_Word) libs__compute_grade__conv7_OmitComponents_10);
    libs__compute_grade__STATE_VARIABLE_Specs_24_24 = ((MR_Word) libs__compute_grade__conv6_STATE_VARIABLE_Specs_24_24);
    {
      libs__globals__lookup_accumulating_option_3_p_0(libs__compute_grade__STATE_VARIABLE_Globals_0_12, (MR_Integer) 641, &libs__compute_grade__STATE_VARIABLE_LibGrades_27_27);
    }
    {
      libs__compute_grade__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), libs__compute_grade__Var_28, 0) = ((MR_Box) (&libs__compute_grade_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), libs__compute_grade__Var_28, 1) = ((MR_Box) (libs__compute_grade__postprocess_options_libgrades_4_p_0_4));
      MR_hl_field(MR_mktag(0), libs__compute_grade__Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), libs__compute_grade__Var_28, 3) = ((MR_Box) (&libs__compute_grade_scalar_common_2[3]));
      MR_hl_field(MR_mktag(0), libs__compute_grade__Var_28, 4) = ((MR_Box) (libs__compute_grade__IncludeComponents_9));
    }
    {
      mercury__list__foldl2_6_p_0(libs__compute_grade__TypeCtorInfo_46_46, libs__compute_grade__TypeInfo_47_47, libs__compute_grade__TypeInfo_48_48, libs__compute_grade__Var_28, libs__compute_grade__STATE_VARIABLE_LibGrades_27_27, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__compute_grade__conv11_STATE_VARIABLE_LibGrades_30_30, ((MR_Box) (libs__compute_grade__STATE_VARIABLE_Specs_24_24)), &libs__compute_grade__conv10_STATE_VARIABLE_Specs_31_31);
    }
    libs__compute_grade__STATE_VARIABLE_LibGrades_30_30 = ((MR_Word) libs__compute_grade__conv11_STATE_VARIABLE_LibGrades_30_30);
    libs__compute_grade__STATE_VARIABLE_Specs_31_31 = ((MR_Word) libs__compute_grade__conv10_STATE_VARIABLE_Specs_31_31);
    {
      libs__compute_grade__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), libs__compute_grade__Var_33, 0) = ((MR_Box) (&libs__compute_grade_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), libs__compute_grade__Var_33, 1) = ((MR_Box) (libs__compute_grade__postprocess_options_libgrades_4_p_0_6));
      MR_hl_field(MR_mktag(0), libs__compute_grade__Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), libs__compute_grade__Var_33, 3) = ((MR_Box) (&libs__compute_grade_scalar_common_2[4]));
      MR_hl_field(MR_mktag(0), libs__compute_grade__Var_33, 4) = ((MR_Box) (libs__compute_grade__OmitComponents_10));
    }
    {
      mercury__list__foldl2_6_p_0(libs__compute_grade__TypeCtorInfo_46_46, libs__compute_grade__TypeInfo_47_47, libs__compute_grade__TypeInfo_48_48, libs__compute_grade__Var_33, libs__compute_grade__STATE_VARIABLE_LibGrades_30_30, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__compute_grade__conv15_STATE_VARIABLE_LibGrades_35_35, ((MR_Box) (libs__compute_grade__STATE_VARIABLE_Specs_31_31)), &libs__compute_grade__conv14_STATE_VARIABLE_Specs_15);
    }
    libs__compute_grade__STATE_VARIABLE_LibGrades_35_35 = ((MR_Word) libs__compute_grade__conv15_STATE_VARIABLE_LibGrades_35_35);
    *libs__compute_grade__STATE_VARIABLE_Specs_15 = ((MR_Word) libs__compute_grade__conv14_STATE_VARIABLE_Specs_15);
    {
      libs__compute_grade__Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), libs__compute_grade__Var_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), libs__compute_grade__Var_39, 1) = ((MR_Box) (libs__compute_grade__STATE_VARIABLE_LibGrades_35_35));
    }
    {
      libs__globals__set_option_4_p_0((MR_Integer) 641, libs__compute_grade__Var_39, libs__compute_grade__STATE_VARIABLE_Globals_0_12, libs__compute_grade__STATE_VARIABLE_Globals_13);
    }
  }
}

void MR_CALL 
libs__compute_grade__check_grade_component_compatibility_5_p_0(
  MR_Word libs__compute_grade__Globals_6,
  MR_Word libs__compute_grade__Target_7,
  MR_Word libs__compute_grade__GC_Method_8,
  MR_Word libs__compute_grade__STATE_VARIABLE_Specs_0_26,
  MR_Word * libs__compute_grade__STATE_VARIABLE_Specs_27)
{
  {
    MR_bool libs__compute_grade__succeeded;
    MR_String libs__compute_grade__TargetStr_10;
    MR_Word libs__compute_grade__ProfileTime_14;
    MR_Word libs__compute_grade__ProfileMemory_16;
    MR_Word libs__compute_grade__UseTrail_18;
    MR_Word libs__compute_grade__TrailSegments_19;
    MR_Word libs__compute_grade__StackSegments_21;
    MR_Word libs__compute_grade__SinglePrecFloat_24;
    MR_Word libs__compute_grade__STATE_VARIABLE_Specs_72_72;
    MR_Word libs__compute_grade__STATE_VARIABLE_Specs_88_88;
    MR_Word libs__compute_grade__STATE_VARIABLE_Specs_104_104;
    MR_Word libs__compute_grade__STATE_VARIABLE_Specs_121_121;
    MR_Word libs__compute_grade__STATE_VARIABLE_Specs_148_148;

    {
      libs__compute_grade__TargetStr_10 = libs__globals__compilation_target_string_1_f_0(libs__compute_grade__Target_7);
    }
    switch (libs__compute_grade__Target_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__compute_grade__STATE_VARIABLE_Specs_72_72 = libs__compute_grade__STATE_VARIABLE_Specs_0_26;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        switch (libs__compute_grade__GC_Method_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 5:
            {
              MR_Word libs__compute_grade__AGCSpec_13;
              MR_Word libs__compute_grade__Var_30;
              MR_Word libs__compute_grade__Var_33;
              MR_Word libs__compute_grade__Var_34;

              {
                libs__compute_grade__Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), libs__compute_grade__Var_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), libs__compute_grade__Var_34, 1) = ((MR_Box) (libs__compute_grade__TargetStr_10));
              }
              {
                libs__compute_grade__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_33, 0) = ((MR_Box) (libs__compute_grade__Var_34));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[5])));
              }
              {
                libs__compute_grade__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[188])));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_30, 1) = ((MR_Box) (libs__compute_grade__Var_33));
              }
              {
                libs__compute_grade__AGCSpec_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__compute_grade__AGCSpec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[187])));
                MR_hl_field(MR_mktag(1), libs__compute_grade__AGCSpec_13, 1) = ((MR_Box) (libs__compute_grade__Var_30));
              }
              {
                libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__compute_grade__AGCSpec_13, libs__compute_grade__STATE_VARIABLE_Specs_0_26, &libs__compute_grade__STATE_VARIABLE_Specs_72_72);
              }
            }
            break;
          case (MR_Integer) 0:
            libs__compute_grade__STATE_VARIABLE_Specs_72_72 = libs__compute_grade__STATE_VARIABLE_Specs_0_26;
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            {
              MR_Word libs__compute_grade__BoehmSpec_11;
              MR_Word libs__compute_grade__Var_60;
              MR_Word libs__compute_grade__Var_63;
              MR_Word libs__compute_grade__Var_64;

              {
                libs__compute_grade__Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), libs__compute_grade__Var_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), libs__compute_grade__Var_64, 1) = ((MR_Box) (libs__compute_grade__TargetStr_10));
              }
              {
                libs__compute_grade__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_63, 0) = ((MR_Box) (libs__compute_grade__Var_64));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[5])));
              }
              {
                libs__compute_grade__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[188])));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_60, 1) = ((MR_Box) (libs__compute_grade__Var_63));
              }
              {
                libs__compute_grade__BoehmSpec_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__compute_grade__BoehmSpec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[189])));
                MR_hl_field(MR_mktag(1), libs__compute_grade__BoehmSpec_11, 1) = ((MR_Box) (libs__compute_grade__Var_60));
              }
              {
                libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__compute_grade__BoehmSpec_11, libs__compute_grade__STATE_VARIABLE_Specs_0_26, &libs__compute_grade__STATE_VARIABLE_Specs_72_72);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word libs__compute_grade__HGCSpec_12;
              MR_Word libs__compute_grade__Var_45;
              MR_Word libs__compute_grade__Var_48;
              MR_Word libs__compute_grade__Var_49;

              {
                libs__compute_grade__Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), libs__compute_grade__Var_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), libs__compute_grade__Var_49, 1) = ((MR_Box) (libs__compute_grade__TargetStr_10));
              }
              {
                libs__compute_grade__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_48, 0) = ((MR_Box) (libs__compute_grade__Var_49));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[5])));
              }
              {
                libs__compute_grade__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[188])));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_45, 1) = ((MR_Box) (libs__compute_grade__Var_48));
              }
              {
                libs__compute_grade__HGCSpec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__compute_grade__HGCSpec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[190])));
                MR_hl_field(MR_mktag(1), libs__compute_grade__HGCSpec_12, 1) = ((MR_Box) (libs__compute_grade__Var_45));
              }
              {
                libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__compute_grade__HGCSpec_12, libs__compute_grade__STATE_VARIABLE_Specs_0_26, &libs__compute_grade__STATE_VARIABLE_Specs_72_72);
              }
            }
            break;
          case (MR_Integer) 1:
            libs__compute_grade__STATE_VARIABLE_Specs_72_72 = libs__compute_grade__STATE_VARIABLE_Specs_0_26;
            break;
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__compute_grade__Globals_6, (MR_Integer) 204, &libs__compute_grade__ProfileTime_14);
    }
    switch (libs__compute_grade__ProfileTime_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__compute_grade__STATE_VARIABLE_Specs_88_88 = libs__compute_grade__STATE_VARIABLE_Specs_72_72;
        break;
      case (MR_Integer) 1:
        switch (libs__compute_grade__Target_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            libs__compute_grade__STATE_VARIABLE_Specs_88_88 = libs__compute_grade__STATE_VARIABLE_Specs_72_72;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 2:
            {
              MR_Word libs__compute_grade__TimeProfpec_15;
              MR_Word libs__compute_grade__Var_76;
              MR_Word libs__compute_grade__Var_79;
              MR_Word libs__compute_grade__Var_80;

              {
                libs__compute_grade__Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), libs__compute_grade__Var_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), libs__compute_grade__Var_80, 1) = ((MR_Box) (libs__compute_grade__TargetStr_10));
              }
              {
                libs__compute_grade__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_79, 0) = ((MR_Box) (libs__compute_grade__Var_80));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[5])));
              }
              {
                libs__compute_grade__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[188])));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_76, 1) = ((MR_Box) (libs__compute_grade__Var_79));
              }
              {
                libs__compute_grade__TimeProfpec_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__compute_grade__TimeProfpec_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[191])));
                MR_hl_field(MR_mktag(1), libs__compute_grade__TimeProfpec_15, 1) = ((MR_Box) (libs__compute_grade__Var_76));
              }
              {
                libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__compute_grade__TimeProfpec_15, libs__compute_grade__STATE_VARIABLE_Specs_72_72, &libs__compute_grade__STATE_VARIABLE_Specs_88_88);
              }
            }
            break;
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__compute_grade__Globals_6, (MR_Integer) 205, &libs__compute_grade__ProfileMemory_16);
    }
    switch (libs__compute_grade__ProfileMemory_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__compute_grade__STATE_VARIABLE_Specs_104_104 = libs__compute_grade__STATE_VARIABLE_Specs_88_88;
        break;
      case (MR_Integer) 1:
        switch (libs__compute_grade__Target_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            libs__compute_grade__STATE_VARIABLE_Specs_104_104 = libs__compute_grade__STATE_VARIABLE_Specs_88_88;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 2:
            {
              MR_Word libs__compute_grade__MemProfpec_17;
              MR_Word libs__compute_grade__Var_92;
              MR_Word libs__compute_grade__Var_95;
              MR_Word libs__compute_grade__Var_96;

              {
                libs__compute_grade__Var_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), libs__compute_grade__Var_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), libs__compute_grade__Var_96, 1) = ((MR_Box) (libs__compute_grade__TargetStr_10));
              }
              {
                libs__compute_grade__Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_95, 0) = ((MR_Box) (libs__compute_grade__Var_96));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[5])));
              }
              {
                libs__compute_grade__Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_92, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[188])));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_92, 1) = ((MR_Box) (libs__compute_grade__Var_95));
              }
              {
                libs__compute_grade__MemProfpec_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__compute_grade__MemProfpec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[192])));
                MR_hl_field(MR_mktag(1), libs__compute_grade__MemProfpec_17, 1) = ((MR_Box) (libs__compute_grade__Var_92));
              }
              {
                libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__compute_grade__MemProfpec_17, libs__compute_grade__STATE_VARIABLE_Specs_88_88, &libs__compute_grade__STATE_VARIABLE_Specs_104_104);
              }
            }
            break;
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__compute_grade__Globals_6, (MR_Integer) 229, &libs__compute_grade__UseTrail_18);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__compute_grade__Globals_6, (MR_Integer) 230, &libs__compute_grade__TrailSegments_19);
    }
    libs__compute_grade__succeeded = (libs__compute_grade__UseTrail_18 == (MR_Integer) 1);
    if (!(libs__compute_grade__succeeded))
      libs__compute_grade__succeeded = (libs__compute_grade__TrailSegments_19 == (MR_Integer) 1);
    if (libs__compute_grade__succeeded)
      switch (libs__compute_grade__Target_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          libs__compute_grade__STATE_VARIABLE_Specs_121_121 = libs__compute_grade__STATE_VARIABLE_Specs_104_104;
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 3:
        case (MR_Integer) 2:
          {
            MR_Word libs__compute_grade__Trailpec_20;
            MR_Word libs__compute_grade__Var_109;
            MR_Word libs__compute_grade__Var_112;
            MR_Word libs__compute_grade__Var_113;

            {
              libs__compute_grade__Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), libs__compute_grade__Var_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), libs__compute_grade__Var_113, 1) = ((MR_Box) (libs__compute_grade__TargetStr_10));
            }
            {
              libs__compute_grade__Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), libs__compute_grade__Var_112, 0) = ((MR_Box) (libs__compute_grade__Var_113));
              MR_hl_field(MR_mktag(1), libs__compute_grade__Var_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[5])));
            }
            {
              libs__compute_grade__Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), libs__compute_grade__Var_109, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[188])));
              MR_hl_field(MR_mktag(1), libs__compute_grade__Var_109, 1) = ((MR_Box) (libs__compute_grade__Var_112));
            }
            {
              libs__compute_grade__Trailpec_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), libs__compute_grade__Trailpec_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[193])));
              MR_hl_field(MR_mktag(1), libs__compute_grade__Trailpec_20, 1) = ((MR_Box) (libs__compute_grade__Var_109));
            }
            {
              libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__compute_grade__Trailpec_20, libs__compute_grade__STATE_VARIABLE_Specs_104_104, &libs__compute_grade__STATE_VARIABLE_Specs_121_121);
            }
          }
          break;
      }
    else
      libs__compute_grade__STATE_VARIABLE_Specs_121_121 = libs__compute_grade__STATE_VARIABLE_Specs_104_104;
    {
      libs__globals__lookup_bool_option_3_p_0(libs__compute_grade__Globals_6, (MR_Integer) 239, &libs__compute_grade__StackSegments_21);
    }
    switch (libs__compute_grade__StackSegments_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__compute_grade__STATE_VARIABLE_Specs_148_148 = libs__compute_grade__STATE_VARIABLE_Specs_121_121;
        break;
      case (MR_Integer) 1:
        switch (libs__compute_grade__Target_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word libs__compute_grade__HighLevelCode_22;

              {
                libs__globals__lookup_bool_option_3_p_0(libs__compute_grade__Globals_6, (MR_Integer) 264, &libs__compute_grade__HighLevelCode_22);
              }
              switch (libs__compute_grade__HighLevelCode_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  libs__compute_grade__STATE_VARIABLE_Specs_148_148 = libs__compute_grade__STATE_VARIABLE_Specs_121_121;
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[9]), libs__compute_grade__STATE_VARIABLE_Specs_121_121, &libs__compute_grade__STATE_VARIABLE_Specs_148_148);
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 2:
            {
              MR_Word libs__compute_grade__Var_125;
              MR_Word libs__compute_grade__Var_128;
              MR_Word libs__compute_grade__Var_129;
              MR_Word libs__compute_grade__StackSegmentpec_165;

              {
                libs__compute_grade__Var_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), libs__compute_grade__Var_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), libs__compute_grade__Var_129, 1) = ((MR_Box) (libs__compute_grade__TargetStr_10));
              }
              {
                libs__compute_grade__Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_128, 0) = ((MR_Box) (libs__compute_grade__Var_129));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[5])));
              }
              {
                libs__compute_grade__Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[188])));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_125, 1) = ((MR_Box) (libs__compute_grade__Var_128));
              }
              {
                libs__compute_grade__StackSegmentpec_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__compute_grade__StackSegmentpec_165, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[194])));
                MR_hl_field(MR_mktag(1), libs__compute_grade__StackSegmentpec_165, 1) = ((MR_Box) (libs__compute_grade__Var_125));
              }
              {
                libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__compute_grade__StackSegmentpec_165, libs__compute_grade__STATE_VARIABLE_Specs_121_121, &libs__compute_grade__STATE_VARIABLE_Specs_148_148);
              }
            }
            break;
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__compute_grade__Globals_6, (MR_Integer) 235, &libs__compute_grade__SinglePrecFloat_24);
    }
    switch (libs__compute_grade__SinglePrecFloat_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *libs__compute_grade__STATE_VARIABLE_Specs_27 = libs__compute_grade__STATE_VARIABLE_Specs_148_148;
        break;
      case (MR_Integer) 1:
        switch (libs__compute_grade__Target_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *libs__compute_grade__STATE_VARIABLE_Specs_27 = libs__compute_grade__STATE_VARIABLE_Specs_148_148;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 2:
            {
              MR_Word libs__compute_grade__SPFSpec_25;
              MR_Word libs__compute_grade__Var_152;
              MR_Word libs__compute_grade__Var_155;
              MR_Word libs__compute_grade__Var_156;

              {
                libs__compute_grade__Var_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), libs__compute_grade__Var_156, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), libs__compute_grade__Var_156, 1) = ((MR_Box) (libs__compute_grade__TargetStr_10));
              }
              {
                libs__compute_grade__Var_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_155, 0) = ((MR_Box) (libs__compute_grade__Var_156));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_155, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[5])));
              }
              {
                libs__compute_grade__Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_152, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[188])));
                MR_hl_field(MR_mktag(1), libs__compute_grade__Var_152, 1) = ((MR_Box) (libs__compute_grade__Var_155));
              }
              {
                libs__compute_grade__SPFSpec_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__compute_grade__SPFSpec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[195])));
                MR_hl_field(MR_mktag(1), libs__compute_grade__SPFSpec_25, 1) = ((MR_Box) (libs__compute_grade__Var_152));
              }
              {
                libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__compute_grade__SPFSpec_25, libs__compute_grade__STATE_VARIABLE_Specs_148_148, libs__compute_grade__STATE_VARIABLE_Specs_27);
              }
            }
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
libs__compute_grade____Unify____grade_component_0_0_10001(
  MR_Box libs__compute_grade__wrapper_arg_1,
  MR_Box libs__compute_grade__wrapper_arg_2)
{
  {
    MR_bool libs__compute_grade__succeeded;

    {
      libs__compute_grade__succeeded = libs__compute_grade____Unify____grade_component_0_0(((MR_Word) libs__compute_grade__wrapper_arg_1), ((MR_Word) libs__compute_grade__wrapper_arg_2));
    }
    return libs__compute_grade__succeeded;
  }
}

static void MR_CALL 
libs__compute_grade____Compare____grade_component_0_0_10001(
  MR_Box * libs__compute_grade__wrapper_arg_1,
  MR_Box libs__compute_grade__wrapper_arg_2,
  MR_Box libs__compute_grade__wrapper_arg_3)
{
  {
    MR_Word libs__compute_grade__conv0_HeadVar__1_1;

    {
      libs__compute_grade____Compare____grade_component_0_0(&libs__compute_grade__conv0_HeadVar__1_1, ((MR_Word) libs__compute_grade__wrapper_arg_2), ((MR_Word) libs__compute_grade__wrapper_arg_3));
    }
    *libs__compute_grade__wrapper_arg_1 = ((MR_Box) (libs__compute_grade__conv0_HeadVar__1_1));
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__libs__compute_grade__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module libs.compute_grade. */
