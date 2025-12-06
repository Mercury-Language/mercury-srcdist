/*
** Automatically generated from `compute_grade.m'
** by the Mercury compiler,
** version rotd-2025-12-06
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module libs.compute_grade.
// :- implementation.

/*
INIT mercury__libs__compute_grade__init
ENDINIT
*/

#include "libs.compute_grade.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.compiler_util.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "mdbcomp.feedback.feedback_info.mih"



struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0_s {
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__Options_3;
  MR_Word * libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__LambdaHeadVar__1_16;
  MR_Cont libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__cont;
  void * libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__cont_env_ptr;
  MR_bool libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__succeeded;
  MR_String libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__Name_6;
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__Comp_7;
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__CompOpts_8;
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__MaybeTargets_9;
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__IncludeInGradeString_10;
  jmp_buf libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__commit_1;
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__Opt_11;
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__Value_12;
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__Var_17;
  MR_Box libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__conv0_Var_17;
  jmp_buf libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__commit_2;
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__TypeCtorInfo_23_23;
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__TypeCtorInfo_24_24;
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__Target_14;
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__Var_18;
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__Var_27;
  MR_Box libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__conv2_Target_14;
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

struct libs__compute_grade__compute_grade_2_p_0_2_env_0_s {
  MR_Box * libs__compute_grade__compute_grade_2_p_0_2_env_0__wrapper_arg_1;
  MR_Cont libs__compute_grade__compute_grade_2_p_0_2_env_0__cont;
  void * libs__compute_grade__compute_grade_2_p_0_2_env_0__cont_env_ptr;
  MR_Word libs__compute_grade__compute_grade_2_p_0_2_env_0__conv0_LambdaHeadVar__1_16;
};

struct libs__compute_grade__convert_grade_option_3_p_0_2_env_0_s {
  MR_Box * libs__compute_grade__convert_grade_option_3_p_0_2_env_0__wrapper_arg_1;
  MR_Cont libs__compute_grade__convert_grade_option_3_p_0_2_env_0__cont;
  void * libs__compute_grade__convert_grade_option_3_p_0_2_env_0__cont_env_ptr;
  MR_Word libs__compute_grade__convert_grade_option_3_p_0_2_env_0__conv0_HeadVar__1_1;
};


static const MR_FA_PseudoTypeInfo_Struct1 libs__compute_grade__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 libs__compute_grade__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 libs__compute_grade__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct2 libs__compute_grade____vpti_pred_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 libs__compute_grade__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0;

static const MR_FA_PseudoTypeInfo_Struct2 libs__compute_grade__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0;

static const MR_FA_PseudoTypeInfo_Struct1 libs__compute_grade__set_ordlist__pti_set_ordlist_1__plain_libs__compute_grade__type_ctor_info_grade_component_0;

static const MR_FA_PseudoTypeInfo_Struct2 libs__compute_grade__pair__pti_pair_2__plain_libs__compute_grade__type_ctor_info_grade_component_0__plain_builtin__type_ctor_info_string_0;

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

static const MR_EnumFunctorDescPtr libs__compute_grade__libs__compute_grade__enum_ordinal_ordered_grade_component_0[13];

static const MR_EnumFunctorDescPtr libs__compute_grade__libs__compute_grade__enum_name_ordered_grade_component_0[13];

static const MR_Integer libs__compute_grade__libs__compute_grade__functor_number_map_grade_component_0[13];

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__reset_grade_options__717__1_3_p_0(
  MR_Word LambdaHeadVar__1_12,
  MR_Word LambdaHeadVar__2_13,
  MR_Word * LambdaHeadVar__3_14);

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_8(
  void * env_ptr_arg);

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_9(
  void * env_ptr_arg);

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0(
  MR_Word Options_3,
  MR_Word * LambdaHeadVar__1_16,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__add_option_list__466__1_3_p_0(
  MR_Word LambdaHeadVar__1_13,
  MR_Word LambdaHeadVar__2_14,
  MR_Word * LambdaHeadVar__3_15);

static MR_bool MR_CALL 
libs__compute_grade__IntroducedFrom__pred__grade_string_to_comp_strings__370__1_1_p_0(
  MR_String LambdaHeadVar__1_23);

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__convert_grade_option__442__1_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__convert_grade_option__442__1_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
libs__compute_grade__IntroducedFrom__pred__convert_grade_option__442__1_5_p_0(
  MR_String LambdaHeadVar__1_23,
  MR_Word LambdaHeadVar__2_24,
  MR_Word * LambdaHeadVar__3_25,
  MR_Word LambdaHeadVar__4_26,
  MR_Word * LambdaHeadVar__5_27);

static void MR_CALL 
libs__compute_grade____Compare____grade_component_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__compute_grade____Unify____grade_component_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__compute_grade__grade_start_values_1_p_0(
  MR_Word * HeadVar__1_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
libs__compute_grade__must_not_contain_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
libs__compute_grade__must_not_contain_2_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
libs__compute_grade__must_not_contain_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
libs__compute_grade__must_not_contain_2_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
libs__compute_grade__must_not_contain_2_p_0(
  MR_Word OmitComponents_3,
  MR_Word GradeComponents_4);

static void MR_CALL 
libs__compute_grade__must_contain_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
libs__compute_grade__must_contain_2_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
libs__compute_grade__must_contain_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
libs__compute_grade__must_contain_2_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
libs__compute_grade__must_contain_2_p_0(
  MR_Word IncludeComponents_3,
  MR_Word GradeComponents_4);

static MR_bool MR_CALL 
libs__compute_grade__filter_grade_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
libs__compute_grade__filter_grade_7_p_0(
  MR_Word FilterPred_8,
  MR_Word CondComponents_9,
  MR_String GradeString_10,
  MR_Word STATE_VARIABLE_Grades_0_15,
  MR_Word * STATE_VARIABLE_Grades_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static void MR_CALL 
libs__compute_grade__string_to_grade_component_6_p_0(
  MR_String FilterDesc_7,
  MR_String Comp_8,
  MR_Word STATE_VARIABLE_Comps_0_16,
  MR_Word * STATE_VARIABLE_Comps_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static MR_bool MR_CALL 
libs__compute_grade__grade_component_table_5_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
libs__compute_grade__compute_grade_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
libs__compute_grade__compute_grade_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
libs__compute_grade__convert_grade_option_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
libs__compute_grade__convert_grade_option_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__compute_grade__convert_grade_option_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
libs__compute_grade__convert_grade_option_3_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
libs__compute_grade__handle_libgrade_component_incl_excl_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
libs__compute_grade__handle_libgrade_component_incl_excl_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__compute_grade__handle_libgrade_component_incl_excl_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
libs__compute_grade__handle_libgrade_component_incl_excl_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__compute_grade__handle_libgrade_component_incl_excl_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
libs__compute_grade__handle_libgrade_component_incl_excl_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
libs__compute_grade____Unify____grade_component_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__compute_grade____Compare____grade_component_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box libs__compute_grade_scalar_common_1[172][2];

static /* final */ const MR_Box libs__compute_grade_scalar_common_2[11][3];

static /* final */ const MR_Box libs__compute_grade_scalar_common_3[5][1];

static /* final */ const MR_Box libs__compute_grade_scalar_common_4[1][9];

static /* final */ const MR_Box libs__compute_grade_scalar_common_5[4][4];

static /* final */ const MR_Box libs__compute_grade_scalar_common_6[2][5];

static /* final */ const MR_Box libs__compute_grade_scalar_common_7[1][10];

static /* final */ const MR_Box libs__compute_grade_scalar_common_8[1][6];

static /* final */ const MR_Box libs__compute_grade_scalar_common_9[1][8];


struct libs__compute_grade__vector_common_type_10_0_s {
  const MR_Word libs__compute_grade__vector_common_type_10_0__vct_10_f_0;
  const MR_Word libs__compute_grade__vector_common_type_10_0__vct_10_f_1;
  const MR_Word libs__compute_grade__vector_common_type_10_0__vct_10_f_2;
  const MR_Word libs__compute_grade__vector_common_type_10_0__vct_10_f_3;
};

static /* final */ const struct libs__compute_grade__vector_common_type_10_0_s libs__compute_grade_vector_common_10[42];

struct libs__compute_grade__vector_common_type_11_0_s {
  const MR_Word libs__compute_grade__vector_common_type_11_0__vct_11_f_0;
};

static /* final */ const struct libs__compute_grade__vector_common_type_11_0_s libs__compute_grade_vector_common_11[26];

struct libs__compute_grade__vector_common_type_12_0_s {
  const MR_String libs__compute_grade__vector_common_type_12_0__vct_12_f_0;
  const MR_Word libs__compute_grade__vector_common_type_12_0__vct_12_f_1;
  const MR_Word libs__compute_grade__vector_common_type_12_0__vct_12_f_2;
  const MR_Word libs__compute_grade__vector_common_type_12_0__vct_12_f_3;
  const MR_Word libs__compute_grade__vector_common_type_12_0__vct_12_f_4;
};

static /* final */ const struct libs__compute_grade__vector_common_type_12_0_s libs__compute_grade_vector_common_12[42];



static /* final */ const MR_Box libs__compute_grade_scalar_common_1[172][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__compute_grade__libs__compute_grade__type_ctor_info_grade_component_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Use of accurate GC is incompatible with"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "target language"))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &libs__compute_grade_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[5])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Use of Boehm GC is incompatible with"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Use of HGC is incompatible with"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Time profiling is incompatible with"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Memory profiling is incompatible with"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Trailing is incompatible with"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the high-level C backend."))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &libs__compute_grade_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[5])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Stack segments are incompatible with"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &libs__compute_grade_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[14])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Single precision floats are incompatible with"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the low level C backend."))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &libs__compute_grade_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[5])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The target_debug grade modifier is incompatible with"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &libs__compute_grade_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Unknown"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "library grade component:"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Invalid library grade:"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "accurate"))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_Integer) 87)),
    ((MR_Box) (MR_mkword(3, &libs__compute_grade_scalar_common_1[25])))
  },
  /* row  27 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[26])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) ((MR_Integer) 55)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[0])))
  },
  /* row  29 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[28])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) ((MR_Integer) 51)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[1])))
  },
  /* row  31 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[30])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[29])))
  },
  /* row  32 */
  {
    ((MR_Box) ((MR_Integer) 52)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[1])))
  },
  /* row  33 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[32])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[31])))
  },
  /* row  34 */
  {
    ((MR_Box) ((MR_Integer) 53)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[1])))
  },
  /* row  35 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[34])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[33])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "c"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &libs__compute_grade_scalar_common_1[36]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  38 */
  {
    ((MR_Box) ((MR_Integer) 51)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[0])))
  },
  /* row  39 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[38])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[29])))
  },
  /* row  40 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[32])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[39])))
  },
  /* row  41 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[34])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[40])))
  },
  /* row  42 */
  {
    ((MR_Box) ((MR_Integer) 55)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[1])))
  },
  /* row  43 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[42])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  44 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[38])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[43])))
  },
  /* row  45 */
  {
    ((MR_Box) ((MR_Integer) 52)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[0])))
  },
  /* row  46 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[45])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[44])))
  },
  /* row  47 */
  {
    ((MR_Box) ((MR_Integer) 53)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[0])))
  },
  /* row  48 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[47])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[46])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "csharp"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &libs__compute_grade_scalar_common_1[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  51 */
  {
    ((MR_Box) ((MR_Integer) 58)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[0])))
  },
  /* row  52 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[51])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) ((MR_Integer) 57)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[1])))
  },
  /* row  54 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[53])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[52])))
  },
  /* row  55 */
  {
    ((MR_Box) ((MR_Integer) 58)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[1])))
  },
  /* row  56 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[55])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[53])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[56])))
  },
  /* row  58 */
  {
    ((MR_Box) ((MR_Integer) 96)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[1])))
  },
  /* row  59 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[58])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  60 */
  {
    ((MR_Box) ((MR_Integer) 95)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[0])))
  },
  /* row  61 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[60])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[59])))
  },
  /* row  62 */
  {
    ((MR_Box) ((MR_Integer) 94)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[1])))
  },
  /* row  63 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[62])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[61])))
  },
  /* row  64 */
  {
    ((MR_Box) ((MR_Integer) 95)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[1])))
  },
  /* row  65 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[64])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[59])))
  },
  /* row  66 */
  {
    ((MR_Box) ((MR_Integer) 94)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[0])))
  },
  /* row  67 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[66])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[65])))
  },
  /* row  68 */
  {
    ((MR_Box) ((MR_Integer) 88)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[0])))
  },
  /* row  69 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[68])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  70 */
  {
    ((MR_Box) ((MR_Integer) 89)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[1])))
  },
  /* row  71 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[70])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[69])))
  },
  /* row  72 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[47])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[33])))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "boehm"))
  },
  /* row  74 */
  {
    ((MR_Box) ((MR_Integer) 87)),
    ((MR_Box) (MR_mkword(3, &libs__compute_grade_scalar_common_1[73])))
  },
  /* row  75 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[74])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "boehm_debug"))
  },
  /* row  77 */
  {
    ((MR_Box) ((MR_Integer) 87)),
    ((MR_Box) (MR_mkword(3, &libs__compute_grade_scalar_common_1[76])))
  },
  /* row  78 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[77])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "hgc"))
  },
  /* row  80 */
  {
    ((MR_Box) ((MR_Integer) 87)),
    ((MR_Box) (MR_mkword(3, &libs__compute_grade_scalar_common_1[79])))
  },
  /* row  81 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[80])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "java"))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &libs__compute_grade_scalar_common_1[82]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  84 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[47])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[40])))
  },
  /* row  85 */
  {
    ((MR_Box) ((MR_Integer) 67)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[0])))
  },
  /* row  86 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[85])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  87 */
  {
    ((MR_Box) ((MR_Integer) 65)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[1])))
  },
  /* row  88 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[87])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[86])))
  },
  /* row  89 */
  {
    ((MR_Box) ((MR_Integer) 63)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[1])))
  },
  /* row  90 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[89])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[88])))
  },
  /* row  91 */
  {
    ((MR_Box) ((MR_Integer) 64)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[0])))
  },
  /* row  92 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[91])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[90])))
  },
  /* row  93 */
  {
    ((MR_Box) ((MR_Integer) 96)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[0])))
  },
  /* row  94 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[93])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  95 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[60])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[94])))
  },
  /* row  96 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[62])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[95])))
  },
  /* row  97 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[64])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[94])))
  },
  /* row  98 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[66])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[97])))
  },
  /* row  99 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[45])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[39])))
  },
  /* row 100 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[47])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[99])))
  },
  /* row 101 */
  {
    ((MR_Box) ((MR_Integer) 92)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 102 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[101])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_Integer) 86)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 104 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[103])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 105 */
  {
    ((MR_Box) ((MR_Integer) 65)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 106 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[105])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[86])))
  },
  /* row 107 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[89])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[106])))
  },
  /* row 108 */
  {
    ((MR_Box) ((MR_Integer) 64)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 109 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[108])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[107])))
  },
  /* row 110 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[108])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[90])))
  },
  /* row 111 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[91])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[107])))
  },
  /* row 112 */
  {
    ((MR_Box) ((MR_Integer) 67)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 113 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[112])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 114 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[105])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[113])))
  },
  /* row 115 */
  {
    ((MR_Box) ((MR_Integer) 63)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 116 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[115])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[114])))
  },
  /* row 117 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[91])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[116])))
  },
  /* row 118 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[115])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[106])))
  },
  /* row 119 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[108])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[118])))
  },
  /* row 120 */
  {
    ((MR_Box) ((MR_Integer) 100)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 121 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[120])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 122 */
  {
    ((MR_Box) ((MR_Integer) 99)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 123 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[122])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[121])))
  },
  /* row 124 */
  {
    ((MR_Box) ((MR_Integer) 97)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 125 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[124])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[123])))
  },
  /* row 126 */
  {
    ((MR_Box) ((MR_Integer) 99)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 127 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[126])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[121])))
  },
  /* row 128 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[124])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[127])))
  },
  /* row 129 */
  {
    ((MR_Box) ((MR_Integer) 100)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 130 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[129])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 131 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[126])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[130])))
  },
  /* row 132 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[124])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[131])))
  },
  /* row 133 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[122])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[130])))
  },
  /* row 134 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[124])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[133])))
  },
  /* row 135 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[45])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[31])))
  },
  /* row 136 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[47])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[135])))
  },
  /* row 137 */
  {
    ((MR_Box) ((MR_Integer) 104)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 138 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[137])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 139 */
  {
    ((MR_Box) ((MR_Integer) 91)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 140 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[139])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[138])))
  },
  /* row 141 */
  {
    ((MR_Box) ((MR_Integer) 59)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 142 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[141])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 143 */
  {
    ((MR_Box) ((MR_Integer) 88)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 144 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[143])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 145 */
  {
    ((MR_Box) ((MR_Integer) 89)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 146 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[145])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[144])))
  },
  /* row 147 */
  {
    ((MR_Box) ((MR_Integer) 56)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 148 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[147])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 149 */
  {
    ((MR_Box) ((MR_Integer) 85)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 150 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[149])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 151 */
  {
    ((MR_Box) ((MR_Integer) 90)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 152 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[151])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 153 */
  {
    ((MR_Box) ((MR_Integer) 84)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 154 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[153])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 155 */
  {
    ((MR_Box) ((MR_Integer) 83)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 156 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[155])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[154])))
  },
  /* row 157 */
  {
    ((MR_Box) ((MR_Integer) 84)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 158 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[157])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 159 */
  {
    ((MR_Box) ((MR_Integer) 83)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 160 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[159])),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[158])))
  },
  /* row 161 */
  {
    ((MR_Box) ((MR_Integer) 92)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 162 */
  {
    ((MR_Box) ((MR_Integer) 85)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "none"))
  },
  /* row 164 */
  {
    ((MR_Box) ((MR_Integer) 87)),
    ((MR_Box) (MR_mkword(3, &libs__compute_grade_scalar_common_1[163])))
  },
  /* row 165 */
  {
    ((MR_Box) ((MR_Integer) 90)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 166 */
  {
    ((MR_Box) ((MR_Integer) 86)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 167 */
  {
    ((MR_Box) ((MR_Integer) 91)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 168 */
  {
    ((MR_Box) ((MR_Integer) 57)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 169 */
  {
    ((MR_Box) ((MR_Integer) 59)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 170 */
  {
    ((MR_Box) ((MR_Integer) 97)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 171 */
  {
    ((MR_Box) ((MR_Integer) 56)),
    ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_3[0])))
  },
};

static /* final */ const MR_Box libs__compute_grade_scalar_common_2[11][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&libs__compute_grade__libs__compute_grade__type_ctor_info_grade_component_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_6[0])),
    ((MR_Box) (libs__compute_grade__handle_libgrade_component_incl_excl_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_6[0])),
    ((MR_Box) (libs__compute_grade__handle_libgrade_component_incl_excl_4_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_5[2])),
    ((MR_Box) (libs__compute_grade__convert_grade_option_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_8[0])),
    ((MR_Box) (libs__compute_grade__convert_grade_option_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_9[0])),
    ((MR_Box) (libs__compute_grade__convert_grade_option_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_5[3])),
    ((MR_Box) (libs__compute_grade__filter_grade_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_8[0])),
    ((MR_Box) (libs__compute_grade__IntroducedFrom__pred__convert_grade_option__442__1_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_8[0])),
    ((MR_Box) (libs__compute_grade__IntroducedFrom__pred__convert_grade_option__442__1_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box libs__compute_grade_scalar_common_3[5][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   2 */
  { ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[37]))) },
  /* row   3 */
  { ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[50]))) },
  /* row   4 */
  { ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[83]))) },
};

static /* final */ const MR_Box libs__compute_grade_scalar_common_4[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__compute_grade__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__compute_grade__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__compute_grade__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&libs__compute_grade__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box libs__compute_grade_scalar_common_5[4][4] = {
  /* row   0 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_4[0])),
    ((MR_Box) (libs__compute_grade__handle_libgrade_component_incl_excl_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "included"))
  },
  /* row   1 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_4[0])),
    ((MR_Box) (libs__compute_grade__handle_libgrade_component_incl_excl_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "excluded"))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&libs__compute_grade__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box libs__compute_grade_scalar_common_6[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__compute_grade__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__compute_grade__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__compute_grade__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0)),
    ((MR_Box) (&libs__compute_grade__pair__pti_pair_2__plain_libs__compute_grade__type_ctor_info_grade_component_0__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box libs__compute_grade_scalar_common_7[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__compute_grade____vpti_pred_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__compute_grade__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__compute_grade__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__compute_grade__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__compute_grade__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&libs__compute_grade__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box libs__compute_grade_scalar_common_8[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&libs__compute_grade__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0)),
    ((MR_Box) (&libs__compute_grade__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0)),
    ((MR_Box) (&libs__compute_grade__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0))
  },
};

static /* final */ const MR_Box libs__compute_grade_scalar_common_9[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__compute_grade__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0)),
    ((MR_Box) (&libs__compute_grade__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0)),
    ((MR_Box) (&libs__compute_grade__set_ordlist__pti_set_ordlist_1__plain_libs__compute_grade__type_ctor_info_grade_component_0)),
    ((MR_Box) (&libs__compute_grade__set_ordlist__pti_set_ordlist_1__plain_libs__compute_grade__type_ctor_info_grade_component_0))
  },
};


static /* final */ const struct libs__compute_grade__vector_common_type_10_0_s libs__compute_grade_vector_common_10[42] = {
  /* row   0 */
  {
    (MR_Integer) 3,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[27])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row   1 */
  {
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[35])),
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_3[2])),
    (MR_Integer) 1
  },
  /* row   2 */
  {
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[41])),
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_3[2])),
    (MR_Integer) 1
  },
  /* row   3 */
  {
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[48])),
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_3[3])),
    (MR_Integer) 1
  },
  /* row   4 */
  {
    (MR_Integer) 10,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[54])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row   5 */
  {
    (MR_Integer) 10,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[57])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row   6 */
  {
    (MR_Integer) 7,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[63])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 0
  },
  /* row   7 */
  {
    (MR_Integer) 7,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[67])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row   8 */
  {
    (MR_Integer) 7,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[63])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row   9 */
  {
    (MR_Integer) 11,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[71])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  10 */
  {
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[72])),
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_3[2])),
    (MR_Integer) 1
  },
  /* row  11 */
  {
    (MR_Integer) 3,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[75])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  12 */
  {
    (MR_Integer) 3,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[78])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  13 */
  {
    (MR_Integer) 3,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[81])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  14 */
  {
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[48])),
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_3[2])),
    (MR_Integer) 1
  },
  /* row  15 */
  {
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[48])),
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_3[4])),
    (MR_Integer) 1
  },
  /* row  16 */
  {
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[84])),
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_3[2])),
    (MR_Integer) 1
  },
  /* row  17 */
  {
    (MR_Integer) 4,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[92])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  18 */
  {
    (MR_Integer) 7,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[96])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 0
  },
  /* row  19 */
  {
    (MR_Integer) 7,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[98])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  20 */
  {
    (MR_Integer) 7,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[96])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  21 */
  {
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[100])),
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_3[2])),
    (MR_Integer) 1
  },
  /* row  22 */
  {
    (MR_Integer) 1,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[102])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  23 */
  {
    (MR_Integer) 8,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[104])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  24 */
  {
    (MR_Integer) 4,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[109])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  25 */
  {
    (MR_Integer) 4,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[110])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  26 */
  {
    (MR_Integer) 4,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[111])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  27 */
  {
    (MR_Integer) 4,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[117])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  28 */
  {
    (MR_Integer) 4,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[119])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  29 */
  {
    (MR_Integer) 12,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[125])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  30 */
  {
    (MR_Integer) 12,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[128])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  31 */
  {
    (MR_Integer) 12,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[132])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  32 */
  {
    (MR_Integer) 12,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[134])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  33 */
  {
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[136])),
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_3[2])),
    (MR_Integer) 1
  },
  /* row  34 */
  {
    (MR_Integer) 8,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[140])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  35 */
  {
    (MR_Integer) 10,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[142])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  36 */
  {
    (MR_Integer) 11,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[146])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  37 */
  {
    (MR_Integer) 9,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[148])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  38 */
  {
    (MR_Integer) 2,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[150])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  39 */
  {
    (MR_Integer) 6,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[152])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  40 */
  {
    (MR_Integer) 5,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[156])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  41 */
  {
    (MR_Integer) 5,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[160])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
};

static /* final */ const struct libs__compute_grade__vector_common_type_11_0_s libs__compute_grade_vector_common_11[26] = {
  /* row   0 */   { (MR_Word) (&libs__compute_grade_scalar_common_1[47]) },
  /* row   1 */   { (MR_Word) (&libs__compute_grade_scalar_common_1[45]) },
  /* row   2 */   { (MR_Word) (&libs__compute_grade_scalar_common_1[38]) },
  /* row   3 */   { (MR_Word) (&libs__compute_grade_scalar_common_1[28]) },
  /* row   4 */   { (MR_Word) (&libs__compute_grade_scalar_common_1[161]) },
  /* row   5 */   { (MR_Word) (&libs__compute_grade_scalar_common_1[162]) },
  /* row   6 */   { (MR_Word) (&libs__compute_grade_scalar_common_1[164]) },
  /* row   7 */   { (MR_Word) (&libs__compute_grade_scalar_common_1[85]) },
  /* row   8 */   { (MR_Word) (&libs__compute_grade_scalar_common_1[91]) },
  /* row   9 */   { (MR_Word) (&libs__compute_grade_scalar_common_1[115]) },
  /* row  10 */   { (MR_Word) (&libs__compute_grade_scalar_common_1[105]) },
  /* row  11 */   { (MR_Word) (&libs__compute_grade_scalar_common_1[165]) },
  /* row  12 */   { (MR_Word) (&libs__compute_grade_scalar_common_1[66]) },
  /* row  13 */   { (MR_Word) (&libs__compute_grade_scalar_common_1[60]) },
  /* row  14 */   { (MR_Word) (&libs__compute_grade_scalar_common_1[93]) },
  /* row  15 */   { (MR_Word) (&libs__compute_grade_scalar_common_1[166]) },
  /* row  16 */   { (MR_Word) (&libs__compute_grade_scalar_common_1[167]) },
  /* row  17 */   { (MR_Word) (&libs__compute_grade_scalar_common_1[168]) },
  /* row  18 */   { (MR_Word) (&libs__compute_grade_scalar_common_1[51]) },
  /* row  19 */   { (MR_Word) (&libs__compute_grade_scalar_common_1[169]) },
  /* row  20 */   { (MR_Word) (&libs__compute_grade_scalar_common_1[145]) },
  /* row  21 */   { (MR_Word) (&libs__compute_grade_scalar_common_1[68]) },
  /* row  22 */   { (MR_Word) (&libs__compute_grade_scalar_common_1[170]) },
  /* row  23 */   { (MR_Word) (&libs__compute_grade_scalar_common_1[122]) },
  /* row  24 */   { (MR_Word) (&libs__compute_grade_scalar_common_1[120]) },
  /* row  25 */   { (MR_Word) (&libs__compute_grade_scalar_common_1[171]) },
};

static /* final */ const struct libs__compute_grade__vector_common_type_12_0_s libs__compute_grade_vector_common_12[42] = {
  /* row   0 */
  {
    (MR_String) "none",
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[100])),
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_3[2])),
    (MR_Integer) 1
  },
  /* row   1 */
  {
    (MR_String) "reg",
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[136])),
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_3[2])),
    (MR_Integer) 1
  },
  /* row   2 */
  {
    (MR_String) "jump",
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[84])),
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_3[2])),
    (MR_Integer) 1
  },
  /* row   3 */
  {
    (MR_String) "asm_jump",
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[41])),
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_3[2])),
    (MR_Integer) 1
  },
  /* row   4 */
  {
    (MR_String) "fast",
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[72])),
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_3[2])),
    (MR_Integer) 1
  },
  /* row   5 */
  {
    (MR_String) "asm_fast",
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[35])),
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_3[2])),
    (MR_Integer) 1
  },
  /* row   6 */
  {
    (MR_String) "hlc",
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[48])),
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_3[2])),
    (MR_Integer) 1
  },
  /* row   7 */
  {
    (MR_String) "java",
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[48])),
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_3[4])),
    (MR_Integer) 1
  },
  /* row   8 */
  {
    (MR_String) "csharp",
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[48])),
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_3[3])),
    (MR_Integer) 1
  },
  /* row   9 */
  {
    (MR_String) "par",
    (MR_Integer) 1,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[102])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  10 */
  {
    (MR_String) "threadscope",
    (MR_Integer) 2,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[150])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  11 */
  {
    (MR_String) "gc",
    (MR_Integer) 3,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[75])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  12 */
  {
    (MR_String) "gcd",
    (MR_Integer) 3,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[78])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  13 */
  {
    (MR_String) "hgc",
    (MR_Integer) 3,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[81])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  14 */
  {
    (MR_String) "agc",
    (MR_Integer) 3,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[27])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  15 */
  {
    (MR_String) "prof",
    (MR_Integer) 4,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[109])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  16 */
  {
    (MR_String) "proftime",
    (MR_Integer) 4,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[119])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  17 */
  {
    (MR_String) "profcalls",
    (MR_Integer) 4,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[111])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  18 */
  {
    (MR_String) "memprof",
    (MR_Integer) 4,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[92])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  19 */
  {
    (MR_String) "profall",
    (MR_Integer) 4,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[110])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  20 */
  {
    (MR_String) "profdeep",
    (MR_Integer) 4,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[117])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  21 */
  {
    (MR_String) "tsw",
    (MR_Integer) 5,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[160])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  22 */
  {
    (MR_String) "tsc",
    (MR_Integer) 5,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[156])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  23 */
  {
    (MR_String) "tr",
    (MR_Integer) 6,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[152])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  24 */
  {
    (MR_String) "mm",
    (MR_Integer) 7,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[96])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 0
  },
  /* row  25 */
  {
    (MR_String) "dmm",
    (MR_Integer) 7,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[63])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 0
  },
  /* row  26 */
  {
    (MR_String) "mmsc",
    (MR_Integer) 7,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[96])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  27 */
  {
    (MR_String) "dmmsc",
    (MR_Integer) 7,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[63])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  28 */
  {
    (MR_String) "mmos",
    (MR_Integer) 7,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[98])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  29 */
  {
    (MR_String) "dmmos",
    (MR_Integer) 7,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[67])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  30 */
  {
    (MR_String) "pregen",
    (MR_Integer) 8,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[104])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  31 */
  {
    (MR_String) "spf",
    (MR_Integer) 8,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[140])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  32 */
  {
    (MR_String) "decldebug",
    (MR_Integer) 10,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[57])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  33 */
  {
    (MR_String) "debug",
    (MR_Integer) 10,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[54])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  34 */
  {
    (MR_String) "ssdebug",
    (MR_Integer) 10,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[142])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  35 */
  {
    (MR_String) "target_debug",
    (MR_Integer) 9,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[148])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  36 */
  {
    (MR_String) "exts",
    (MR_Integer) 11,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[71])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  37 */
  {
    (MR_String) "stseg",
    (MR_Integer) 11,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[146])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  38 */
  {
    (MR_String) "rbmm",
    (MR_Integer) 12,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[125])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  39 */
  {
    (MR_String) "rbmmd",
    (MR_Integer) 12,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[128])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  40 */
  {
    (MR_String) "rbmmp",
    (MR_Integer) 12,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[134])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
  /* row  41 */
  {
    (MR_String) "rbmmdp",
    (MR_Integer) 12,
    (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[132])),
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Integer) 1
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 libs__compute_grade__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__compute_grade__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_TypeInfo_Struct1 libs__compute_grade__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_VA_PseudoTypeInfo_Struct2 libs__compute_grade____vpti_pred_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&libs__compute_grade__list__ti_list_1builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&libs__compute_grade__list__ti_list_1builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 libs__compute_grade__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&libs__options__libs__options__type_ctor_info_option_0),
    (MR_PseudoTypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 libs__compute_grade__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&libs__options__libs__options__type_ctor_info_option_0),
    (MR_PseudoTypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__compute_grade__set_ordlist__pti_set_ordlist_1__plain_libs__compute_grade__type_ctor_info_grade_component_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&libs__compute_grade__libs__compute_grade__type_ctor_info_grade_component_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 libs__compute_grade__pair__pti_pair_2__plain_libs__compute_grade__type_ctor_info_grade_component_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&libs__compute_grade__libs__compute_grade__type_ctor_info_grade_component_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_0 = {
  (MR_String) "comp_gcc_ext",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_1 = {
  (MR_String) "comp_par",
  INT32_C(1)
};

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_2 = {
  (MR_String) "comp_par_threadscope",
  INT32_C(2)
};

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_3 = {
  (MR_String) "comp_gc",
  INT32_C(3)
};

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_4 = {
  (MR_String) "comp_prof",
  INT32_C(4)
};

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_5 = {
  (MR_String) "comp_term_size",
  INT32_C(5)
};

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_6 = {
  (MR_String) "comp_trail",
  INT32_C(6)
};

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_7 = {
  (MR_String) "comp_minimal_model",
  INT32_C(7)
};

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_8 = {
  (MR_String) "comp_pregen_spf",
  INT32_C(8)
};

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_9 = {
  (MR_String) "comp_lowlevel",
  INT32_C(9)
};

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_10 = {
  (MR_String) "comp_trace",
  INT32_C(10)
};

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_11 = {
  (MR_String) "comp_stack_extend",
  INT32_C(11)
};

static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_12 = {
  (MR_String) "comp_regions",
  INT32_C(12)
};

static const MR_EnumFunctorDescPtr libs__compute_grade__libs__compute_grade__enum_ordinal_ordered_grade_component_0[13] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__compute_grade____Unify____grade_component_0_0_10001)),
  ((MR_Box) (libs__compute_grade____Compare____grade_component_0_0_10001)),
  (MR_String) "libs.compute_grade",
  (MR_String) "grade_component",
  { libs__compute_grade__libs__compute_grade__enum_name_ordered_grade_component_0 },
  { libs__compute_grade__libs__compute_grade__enum_ordinal_ordered_grade_component_0 },
  (MR_Integer) 13,
  UINT16_C(12),
  libs__compute_grade__libs__compute_grade__functor_number_map_grade_component_0,

};

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__reset_grade_options__717__1_3_p_0(
  MR_Word LambdaHeadVar__1_12,
  MR_Word LambdaHeadVar__2_13,
  MR_Word * LambdaHeadVar__3_14)
{
  MR_Word Option_8 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_12, 0))));
  MR_Word Value_9 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_12, 1))));

  mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) (Option_8)), ((MR_Box) (Value_9)), LambdaHeadVar__2_13, LambdaHeadVar__3_14);
}

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_2(
  void * env_ptr_arg)
{
  struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0_s * env_ptr = (struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__commit_1, 1);
}

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_4(
  void * env_ptr_arg)
{
  struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0_s * env_ptr = (struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__Var_17 = ((MR_Word) ((env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__conv0_Var_17));
  libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_3(env_ptr);
}

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_3(
  void * env_ptr_arg)
{
  struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0_s * env_ptr = (struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_26;
    MR_Box conv1_Var_26;

    (env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__Opt_11 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__Var_17, 0))));
    (env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__Value_12 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__Var_17, 1))));
    (env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), (env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__Options_3, ((MR_Box) ((env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__Opt_11)), &conv1_Var_26);
    if ((env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__succeeded)
    {
      Var_26 = ((MR_Word) (conv1_Var_26));
      (env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__succeeded = MR_TRUE;
    }
    if ((env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__succeeded)
      (env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__succeeded = mercury__getopt____Unify____option_data_0_0((env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__Value_12, Var_26);
    (env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__succeeded = !((env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__succeeded);
    if ((env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__succeeded)
      libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_2(env_ptr);
  }
}

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_5(
  void * env_ptr_arg)
{
  struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0_s * env_ptr = (struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__commit_1) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&libs__compute_grade_scalar_common_2[1]), &(env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__conv0_Var_17, (env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__CompOpts_8, libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_4, env_ptr);
      (env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_6(
  void * env_ptr_arg)
{
  struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0_s * env_ptr = (struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__commit_2, 1);
}

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_8(
  void * env_ptr_arg)
{
  struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0_s * env_ptr = (struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__Target_14 = ((MR_Word) ((env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__conv2_Target_14));
  libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_7(env_ptr);
}

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_7(
  void * env_ptr_arg)
{
  struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0_s * env_ptr = (struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Box conv3_Var_27;

    (env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__Var_18 = (MR_Integer) 45;
    (env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__TypeCtorInfo_24_24 = (MR_Word) (&libs__options__libs__options__type_ctor_info_option_0);
    (env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__TypeCtorInfo_24_24, (env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__TypeCtorInfo_23_23, (env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__Options_3, ((MR_Box) ((env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__Var_18)), &conv3_Var_27);
    if ((env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__succeeded)
    {
      (env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__Var_27 = ((MR_Word) (conv3_Var_27));
      (env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__succeeded = MR_TRUE;
    }
    if ((env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__succeeded)
    {
      (env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__succeeded = mercury__getopt____Unify____option_data_0_0((env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__Target_14, (env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__Var_27);
      if ((env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__succeeded)
        libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_6(env_ptr);
    }
  }
}

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_9(
  void * env_ptr_arg)
{
  struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0_s * env_ptr = (struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__commit_2) == 0)
    {
      {
        MR_Word Targets_13 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__MaybeTargets_9, 0))));

        (env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__TypeCtorInfo_23_23 = (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0);
        mercury__list__member_2_p_1((env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__TypeCtorInfo_23_23, &(env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__conv2_Target_14, Targets_13, libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_8, env_ptr);
      }
      (env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_1(
  void * env_ptr_arg)
{
  struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0_s * env_ptr = (struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0_s *) (env_ptr_arg);

  libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_5(env_ptr);
  (env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__succeeded = !((env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__succeeded);
  if ((env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__succeeded)
  {
    (env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__succeeded = ((env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__IncludeInGradeString_10 == (MR_Integer) 1);
    if ((env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__succeeded)
    {
      if (((env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__MaybeTargets_9 == (MR_Word) ((MR_Unsigned) 0U)))
        (env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__succeeded = MR_TRUE;
      else
        libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_9(env_ptr);
      if ((env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *((env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__LambdaHeadVar__1_16) = base;
          MR_hl_field(0, base, 0) = ((MR_Box) ((env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__Comp_7));
          MR_hl_field(0, base, 1) = ((MR_Box) ((env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__Name_6));
        }
        ((env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__cont)((env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__cont_env_ptr);
      }
    }
  }
}

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0(
  MR_Word Options_3,
  MR_Word * LambdaHeadVar__1_16,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0_s env;

  (env).libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__Options_3 = Options_3;
  (env).libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__LambdaHeadVar__1_16 = LambdaHeadVar__1_16;
  (env).libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__cont = cont;
  (env).libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Integer slot_0 = (MR_Integer) 0;

    do
    {
      (env).libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__Name_6 = ((&libs__compute_grade_vector_common_12[0 + slot_0]))->libs__compute_grade__vector_common_type_12_0__vct_12_f_0;
      (env).libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__Comp_7 = ((&libs__compute_grade_vector_common_12[0 + slot_0]))->libs__compute_grade__vector_common_type_12_0__vct_12_f_1;
      (env).libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__CompOpts_8 = ((&libs__compute_grade_vector_common_12[0 + slot_0]))->libs__compute_grade__vector_common_type_12_0__vct_12_f_2;
      (env).libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__MaybeTargets_9 = ((&libs__compute_grade_vector_common_12[0 + slot_0]))->libs__compute_grade__vector_common_type_12_0__vct_12_f_3;
      (env).libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_env_0__IncludeInGradeString_10 = ((&libs__compute_grade_vector_common_12[0 + slot_0]))->libs__compute_grade__vector_common_type_12_0__vct_12_f_4;
      libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0_1(&env);
      slot_0 = (MR_Integer) ((MR_Unsigned) slot_0 + (MR_Unsigned) 1);
    }
    while ((slot_0 < (MR_Integer) 42));
  }
}

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__add_option_list__466__1_3_p_0(
  MR_Word LambdaHeadVar__1_13,
  MR_Word LambdaHeadVar__2_14,
  MR_Word * LambdaHeadVar__3_15)
{
  MR_Word Option_10 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_13, 0))));
  MR_Word Data_11 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_13, 1))));

  mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) (Option_10)), ((MR_Box) (Data_11)), LambdaHeadVar__2_14, LambdaHeadVar__3_15);
}

static MR_bool MR_CALL 
libs__compute_grade__IntroducedFrom__pred__grade_string_to_comp_strings__370__1_1_p_0(
  MR_String LambdaHeadVar__1_23)
{
  MR_bool succeeded;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;

  succeeded = libs__compute_grade__grade_component_table_5_p_0(LambdaHeadVar__1_23, &Var_11, &Var_12, &Var_13, &Var_14);
  return succeeded;
}

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__convert_grade_option__442__1_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__3_15;

  libs__compute_grade__IntroducedFrom__pred__add_option_list__466__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_LambdaHeadVar__3_15);
  *wrapper_arg_3 = ((MR_Box) (conv2_LambdaHeadVar__3_15));
}

static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__convert_grade_option__442__1_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_15;

  libs__compute_grade__IntroducedFrom__pred__add_option_list__466__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_15);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_15));
}

static MR_bool MR_CALL 
libs__compute_grade__IntroducedFrom__pred__convert_grade_option__442__1_5_p_0(
  MR_String LambdaHeadVar__1_23,
  MR_Word LambdaHeadVar__2_24,
  MR_Word * LambdaHeadVar__3_25,
  MR_Word LambdaHeadVar__4_26,
  MR_Word * LambdaHeadVar__5_27)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_41_41;
  MR_Word TypeInfo_21_43;
  MR_Word TypeInfo_22_44;
  MR_Word Comp_15;
  MR_Word CompOpts_16;
  MR_Word MaybeTargets_17;
  MR_Word Opts1_19;
  MR_Word Var_42;
  MR_Word Var_18;
  MR_Word TypeCtorInfo_40_40;
  MR_Box conv1_Opts1_19;
  MR_Word Target_20;
  MR_Word Var_29;
  MR_Word Var_28;

  succeeded = libs__compute_grade__grade_component_table_5_p_0(LambdaHeadVar__1_23, &Comp_15, &CompOpts_16, &MaybeTargets_17, &Var_18);
  if (succeeded)
  {
    TypeCtorInfo_40_40 = (MR_Word) (&libs__compute_grade__libs__compute_grade__type_ctor_info_grade_component_0);
    succeeded = mercury__set__member_2_p_0(TypeCtorInfo_40_40, ((MR_Box) (Comp_15)), LambdaHeadVar__4_26);
    succeeded = !(succeeded);
    if (succeeded)
    {
      TypeCtorInfo_41_41 = (MR_Word) (&libs__compute_grade__libs__compute_grade__type_ctor_info_grade_component_0);
      mercury__set__insert_3_p_0(TypeCtorInfo_41_41, ((MR_Box) (Comp_15)), LambdaHeadVar__4_26, LambdaHeadVar__5_27);
      Var_42 = (MR_Word) (&libs__compute_grade_scalar_common_2[9]);
      TypeInfo_21_43 = (MR_Word) (&libs__compute_grade_scalar_common_2[1]);
      TypeInfo_22_44 = (MR_Word) (&libs__compute_grade_scalar_common_2[0]);
      mercury__list__foldl_4_p_0(TypeInfo_21_43, TypeInfo_22_44, Var_42, CompOpts_16, ((MR_Box) (LambdaHeadVar__2_24)), &conv1_Opts1_19);
      Opts1_19 = ((MR_Word) (conv1_Opts1_19));
      succeeded = (MaybeTargets_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_28 = ((MR_Word) ((MR_hl_field(1, MaybeTargets_17, 0))));
        succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Target_20 = ((MR_Word) ((MR_hl_field(1, Var_28, 0))));
          Var_29 = ((MR_Word) ((MR_hl_field(1, Var_28, 1))));
          succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
      if (succeeded)
      {
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Box conv3_LambdaHeadVar__3_25;

        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_31, 0) = ((MR_Box) ((MR_Integer) 45));
          MR_hl_field(0, Var_31, 1) = ((MR_Box) (Target_20));
        }
        {
          Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
          MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_29));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&libs__compute_grade_scalar_common_2[1]), (MR_Word) (&libs__compute_grade_scalar_common_2[0]), (MR_Word) (&libs__compute_grade_scalar_common_2[10]), Var_30, ((MR_Box) (Opts1_19)), &conv3_LambdaHeadVar__3_25);
        *LambdaHeadVar__3_25 = ((MR_Word) (conv3_LambdaHeadVar__3_25));
      }
      else
        *LambdaHeadVar__3_25 = Opts1_19;
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static void MR_CALL 
libs__compute_grade____Compare____grade_component_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
libs__compute_grade____Unify____grade_component_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
libs__compute_grade__grade_start_values_1_p_0(
  MR_Word * HeadVar__1_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Integer slot_0 = (MR_Integer) 0;

  do
  {
    *HeadVar__1_1 = ((&libs__compute_grade_vector_common_11[0 + slot_0]))->libs__compute_grade__vector_common_type_11_0__vct_11_f_0;
    cont(cont_env_ptr);
    slot_0 = (MR_Integer) ((MR_Unsigned) slot_0 + (MR_Unsigned) 1);
  }
  while ((slot_0 < (MR_Integer) 26));
}

static void MR_CALL 
libs__compute_grade__must_not_contain_2_p_0_1(
  void * env_ptr_arg)
{
  struct libs__compute_grade__must_not_contain_2_p_0_env_0_s * env_ptr = (struct libs__compute_grade__must_not_contain_2_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
libs__compute_grade__must_not_contain_2_p_0_3(
  void * env_ptr_arg)
{
  struct libs__compute_grade__must_not_contain_2_p_0_env_0_s * env_ptr = (struct libs__compute_grade__must_not_contain_2_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__Component_5 = ((MR_String) ((env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__conv0_Component_5));
  libs__compute_grade__must_not_contain_2_p_0_2(env_ptr);
}

static void MR_CALL 
libs__compute_grade__must_not_contain_2_p_0_2(
  void * env_ptr_arg)
{
  struct libs__compute_grade__must_not_contain_2_p_0_env_0_s * env_ptr = (struct libs__compute_grade__must_not_contain_2_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6, ((MR_Box) ((env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__Component_5)), (env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__GradeComponents_4);
  if ((env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__succeeded)
    libs__compute_grade__must_not_contain_2_p_0_1(env_ptr);
}

static void MR_CALL 
libs__compute_grade__must_not_contain_2_p_0_4(
  void * env_ptr_arg)
{
  struct libs__compute_grade__must_not_contain_2_p_0_env_0_s * env_ptr = (struct libs__compute_grade__must_not_contain_2_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__commit_0) == 0)
    {
      (env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
      mercury__list__member_2_p_1((env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6, &(env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__conv0_Component_5, (env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__OmitComponents_3, libs__compute_grade__must_not_contain_2_p_0_3, env_ptr);
      (env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__succeeded = MR_TRUE;
}

static MR_bool MR_CALL 
libs__compute_grade__must_not_contain_2_p_0(
  MR_Word OmitComponents_3,
  MR_Word GradeComponents_4)
{
  struct libs__compute_grade__must_not_contain_2_p_0_env_0_s env;

  (env).libs__compute_grade__must_not_contain_2_p_0_env_0__OmitComponents_3 = OmitComponents_3;
  (env).libs__compute_grade__must_not_contain_2_p_0_env_0__GradeComponents_4 = GradeComponents_4;
  libs__compute_grade__must_not_contain_2_p_0_4(&env);
  (env).libs__compute_grade__must_not_contain_2_p_0_env_0__succeeded = !((env).libs__compute_grade__must_not_contain_2_p_0_env_0__succeeded);
  return (env).libs__compute_grade__must_not_contain_2_p_0_env_0__succeeded;
}

static void MR_CALL 
libs__compute_grade__must_contain_2_p_0_1(
  void * env_ptr_arg)
{
  struct libs__compute_grade__must_contain_2_p_0_env_0_s * env_ptr = (struct libs__compute_grade__must_contain_2_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
libs__compute_grade__must_contain_2_p_0_3(
  void * env_ptr_arg)
{
  struct libs__compute_grade__must_contain_2_p_0_env_0_s * env_ptr = (struct libs__compute_grade__must_contain_2_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__Component_5 = ((MR_String) ((env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__conv0_Component_5));
  libs__compute_grade__must_contain_2_p_0_2(env_ptr);
}

static void MR_CALL 
libs__compute_grade__must_contain_2_p_0_2(
  void * env_ptr_arg)
{
  struct libs__compute_grade__must_contain_2_p_0_env_0_s * env_ptr = (struct libs__compute_grade__must_contain_2_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__TypeCtorInfo_6_6, ((MR_Box) ((env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__Component_5)), (env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__GradeComponents_4);
  (env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__succeeded = !((env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__succeeded);
  if ((env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__succeeded)
    libs__compute_grade__must_contain_2_p_0_1(env_ptr);
}

static void MR_CALL 
libs__compute_grade__must_contain_2_p_0_4(
  void * env_ptr_arg)
{
  struct libs__compute_grade__must_contain_2_p_0_env_0_s * env_ptr = (struct libs__compute_grade__must_contain_2_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__commit_0) == 0)
    {
      (env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__TypeCtorInfo_6_6 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
      mercury__list__member_2_p_1((env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__TypeCtorInfo_6_6, &(env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__conv0_Component_5, (env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__IncludeComponents_3, libs__compute_grade__must_contain_2_p_0_3, env_ptr);
      (env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__succeeded = MR_TRUE;
}

static MR_bool MR_CALL 
libs__compute_grade__must_contain_2_p_0(
  MR_Word IncludeComponents_3,
  MR_Word GradeComponents_4)
{
  struct libs__compute_grade__must_contain_2_p_0_env_0_s env;

  (env).libs__compute_grade__must_contain_2_p_0_env_0__IncludeComponents_3 = IncludeComponents_3;
  (env).libs__compute_grade__must_contain_2_p_0_env_0__GradeComponents_4 = GradeComponents_4;
  libs__compute_grade__must_contain_2_p_0_4(&env);
  (env).libs__compute_grade__must_contain_2_p_0_env_0__succeeded = !((env).libs__compute_grade__must_contain_2_p_0_env_0__succeeded);
  return (env).libs__compute_grade__must_contain_2_p_0_env_0__succeeded;
}

static MR_bool MR_CALL 
libs__compute_grade__filter_grade_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = libs__compute_grade__IntroducedFrom__pred__grade_string_to_comp_strings__370__1_1_p_0(((MR_String) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
libs__compute_grade__filter_grade_7_p_0(
  MR_Word FilterPred_8,
  MR_Word CondComponents_9,
  MR_String GradeString_10,
  MR_Word STATE_VARIABLE_Grades_0_15,
  MR_Word * STATE_VARIABLE_Grades_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  MR_bool succeeded;
  MR_Word Components_19;
  MR_Word ValidComponents0_21;
  MR_Word InvalidComponents_22;

  Components_19 = mercury__string__split_at_char_2_f_0((MR_Char) 46, GradeString_10);
  mercury__list__filter_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__compute_grade_scalar_common_2[8]), Components_19, &ValidComponents0_21, &InvalidComponents_22);
  if ((InvalidComponents_22 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ValidComponents_23;
    MR_Integer Var_25;
    MR_Integer Var_26;

    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ValidComponents0_21, &ValidComponents_23);
    Var_25 = mercury__list__length_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ValidComponents0_21);
    Var_26 = mercury__list__length_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ValidComponents_23);
    succeeded = (Var_25 > Var_26);
    if (succeeded)
    {
      MR_Word GradeSpec_24;
      MR_Word Var_28;
      MR_Word Var_29;

      {
        Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_29, 1) = ((MR_Box) (GradeString_10));
      }
      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[5])));
      }
      {
        GradeSpec_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, GradeSpec_24, 0) = ((MR_Box) (MR_mkword(3, &libs__compute_grade_scalar_common_1[24])));
        MR_hl_field(1, GradeSpec_24, 1) = ((MR_Box) (Var_28));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), GradeSpec_24, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
      *STATE_VARIABLE_Grades_16 = STATE_VARIABLE_Grades_0_15;
    }
    else
    {
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

      *STATE_VARIABLE_Specs_18 = STATE_VARIABLE_Specs_0_17;
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, FilterPred_8, 1))));
      succeeded = func_0(((MR_Box) (FilterPred_8)), ((MR_Box) (CondComponents_9)), ((MR_Box) (ValidComponents_23)));
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Grades_16 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (GradeString_10));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Grades_0_15));
        }
      else
        *STATE_VARIABLE_Grades_16 = STATE_VARIABLE_Grades_0_15;
    }
  }
  else
  {
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word GradeSpec_37;

    {
      Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_34, 1) = ((MR_Box) (GradeString_10));
    }
    {
      Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(1, Var_33, 1) = ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[5])));
    }
    {
      GradeSpec_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, GradeSpec_37, 0) = ((MR_Box) (MR_mkword(3, &libs__compute_grade_scalar_common_1[24])));
      MR_hl_field(1, GradeSpec_37, 1) = ((MR_Box) (Var_33));
    }
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), GradeSpec_37, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
    *STATE_VARIABLE_Grades_16 = STATE_VARIABLE_Grades_0_15;
  }
}

static void MR_CALL 
libs__compute_grade__string_to_grade_component_6_p_0(
  MR_String FilterDesc_7,
  MR_String Comp_8,
  MR_Word STATE_VARIABLE_Comps_0_16,
  MR_Word * STATE_VARIABLE_Comps_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  MR_bool succeeded;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;

  succeeded = libs__compute_grade__grade_component_table_5_p_0(Comp_8, &Var_11, &Var_12, &Var_13, &Var_14);
  if (succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Comps_17 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Comp_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Comps_0_16));
    }
    *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
  }
  else
  {
    MR_Word Pieces_15;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_28;
    MR_Word Var_29;

    {
      Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_24, 1) = ((MR_Box) (FilterDesc_7));
    }
    {
      Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_29, 1) = ((MR_Box) (Comp_8));
    }
    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(1, Var_28, 1) = ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[7])));
    }
    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) (MR_mkword(3, &libs__compute_grade_scalar_common_1[23])));
      MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_25));
    }
    {
      Pieces_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_15, 0) = ((MR_Box) (MR_mkword(3, &libs__compute_grade_scalar_common_1[22])));
      MR_hl_field(1, Pieces_15, 1) = ((MR_Box) (Var_23));
    }
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), Pieces_15, STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19);
    *STATE_VARIABLE_Comps_17 = STATE_VARIABLE_Comps_0_16;
  }
}

static MR_bool MR_CALL 
libs__compute_grade__grade_component_table_5_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;

  {
    MR_Integer case_num_0 = (MR_Integer) -1;

    switch (MR_nth_code_unit(HeadVar__1_1, 0)) {
      case (MR_Integer) 97:
        switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
          case (MR_Integer) 103:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "agc"))
              case_num_0 = (MR_Integer) 0;
            break;
          case (MR_Integer) 115:
            if (MR_offset_strn_eq(2, 2, HeadVar__1_1, (MR_String) "asm_"))
              switch (MR_nth_code_unit(HeadVar__1_1, 4)) {
                case (MR_Integer) 102:
                  if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "asm_fast"))
                    case_num_0 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 106:
                  if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "asm_jump"))
                    case_num_0 = (MR_Integer) 2;
                  break;
              }
            break;
        }
        break;
      case (MR_Integer) 99:
        if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "csharp"))
          case_num_0 = (MR_Integer) 3;
        break;
      case (MR_Integer) 100:
        switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
          case (MR_Integer) 101:
            switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
              case (MR_Integer) 98:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "debug"))
                  case_num_0 = (MR_Integer) 4;
                break;
              case (MR_Integer) 99:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "decldebug"))
                  case_num_0 = (MR_Integer) 5;
                break;
            }
            break;
          case (MR_Integer) 109:
            switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
              case (MR_Integer) 109:
                switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 6;
                    break;
                  case (MR_Integer) 111:
                    if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "dmmos"))
                      case_num_0 = (MR_Integer) 7;
                    break;
                  case (MR_Integer) 115:
                    if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "dmmsc"))
                      case_num_0 = (MR_Integer) 8;
                    break;
                }
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 101:
        if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "exts"))
          case_num_0 = (MR_Integer) 9;
        break;
      case (MR_Integer) 102:
        if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "fast"))
          case_num_0 = (MR_Integer) 10;
        break;
      case (MR_Integer) 103:
        switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
          case (MR_Integer) 99:
            switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 11;
                break;
              case (MR_Integer) 100:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "gcd"))
                  case_num_0 = (MR_Integer) 12;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 104:
        switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
          case (MR_Integer) 103:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "hgc"))
              case_num_0 = (MR_Integer) 13;
            break;
          case (MR_Integer) 108:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "hlc"))
              case_num_0 = (MR_Integer) 14;
            break;
        }
        break;
      case (MR_Integer) 106:
        switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
          case (MR_Integer) 97:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "java"))
              case_num_0 = (MR_Integer) 15;
            break;
          case (MR_Integer) 117:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "jump"))
              case_num_0 = (MR_Integer) 16;
            break;
        }
        break;
      case (MR_Integer) 109:
        switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
          case (MR_Integer) 101:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "memprof"))
              case_num_0 = (MR_Integer) 17;
            break;
          case (MR_Integer) 109:
            switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 18;
                break;
              case (MR_Integer) 111:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "mmos"))
                  case_num_0 = (MR_Integer) 19;
                break;
              case (MR_Integer) 115:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "mmsc"))
                  case_num_0 = (MR_Integer) 20;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 110:
        if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "none"))
          case_num_0 = (MR_Integer) 21;
        break;
      case (MR_Integer) 112:
        switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
          case (MR_Integer) 97:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "par"))
              case_num_0 = (MR_Integer) 22;
            break;
          case (MR_Integer) 114:
            switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
              case (MR_Integer) 101:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "pregen"))
                  case_num_0 = (MR_Integer) 23;
                break;
              case (MR_Integer) 111:
                switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                  case (MR_Integer) 102:
                    switch (MR_nth_code_unit(HeadVar__1_1, 4)) {
                      case (MR_Integer) 0:
                        case_num_0 = (MR_Integer) 24;
                        break;
                      case (MR_Integer) 97:
                        if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "profall"))
                          case_num_0 = (MR_Integer) 25;
                        break;
                      case (MR_Integer) 99:
                        if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "profcalls"))
                          case_num_0 = (MR_Integer) 26;
                        break;
                      case (MR_Integer) 100:
                        if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "profdeep"))
                          case_num_0 = (MR_Integer) 27;
                        break;
                      case (MR_Integer) 116:
                        if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "proftime"))
                          case_num_0 = (MR_Integer) 28;
                        break;
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 114:
        switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
          case (MR_Integer) 98:
            if (MR_offset_strn_eq(2, 2, HeadVar__1_1, (MR_String) "rbmm"))
              switch (MR_nth_code_unit(HeadVar__1_1, 4)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 29;
                  break;
                case (MR_Integer) 100:
                  switch (MR_nth_code_unit(HeadVar__1_1, 5)) {
                    case (MR_Integer) 0:
                      case_num_0 = (MR_Integer) 30;
                      break;
                    case (MR_Integer) 112:
                      if (MR_offset_streq(6, HeadVar__1_1, (MR_String) "rbmmdp"))
                        case_num_0 = (MR_Integer) 31;
                      break;
                  }
                  break;
                case (MR_Integer) 112:
                  if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "rbmmp"))
                    case_num_0 = (MR_Integer) 32;
                  break;
              }
            break;
          case (MR_Integer) 101:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "reg"))
              case_num_0 = (MR_Integer) 33;
            break;
        }
        break;
      case (MR_Integer) 115:
        switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
          case (MR_Integer) 112:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "spf"))
              case_num_0 = (MR_Integer) 34;
            break;
          case (MR_Integer) 115:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "ssdebug"))
              case_num_0 = (MR_Integer) 35;
            break;
          case (MR_Integer) 116:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "stseg"))
              case_num_0 = (MR_Integer) 36;
            break;
        }
        break;
      case (MR_Integer) 116:
        switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
          case (MR_Integer) 97:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "target_debug"))
              case_num_0 = (MR_Integer) 37;
            break;
          case (MR_Integer) 104:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "threadscope"))
              case_num_0 = (MR_Integer) 38;
            break;
          case (MR_Integer) 114:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "tr"))
              case_num_0 = (MR_Integer) 39;
            break;
          case (MR_Integer) 115:
            switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
              case (MR_Integer) 99:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "tsc"))
                  case_num_0 = (MR_Integer) 40;
                break;
              case (MR_Integer) 119:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "tsw"))
                  case_num_0 = (MR_Integer) 41;
                break;
            }
            break;
        }
        break;
    }
    if ((case_num_0 < (MR_Integer) 0))
      succeeded = MR_FALSE;
    else
    {
      // we found a match; look up the results
      ;
      *HeadVar__2_2 = ((&libs__compute_grade_vector_common_10[0 + case_num_0]))->libs__compute_grade__vector_common_type_10_0__vct_10_f_0;
      *HeadVar__3_3 = ((&libs__compute_grade_vector_common_10[0 + case_num_0]))->libs__compute_grade__vector_common_type_10_0__vct_10_f_1;
      *HeadVar__4_4 = ((&libs__compute_grade_vector_common_10[0 + case_num_0]))->libs__compute_grade__vector_common_type_10_0__vct_10_f_2;
      *HeadVar__5_5 = ((&libs__compute_grade_vector_common_10[0 + case_num_0]))->libs__compute_grade__vector_common_type_10_0__vct_10_f_3;
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static void MR_CALL 
libs__compute_grade__compute_grade_2_p_0_1(
  void * env_ptr_arg)
{
  struct libs__compute_grade__compute_grade_2_p_0_2_env_0_s * env_ptr = (struct libs__compute_grade__compute_grade_2_p_0_2_env_0_s *) (env_ptr_arg);

  *((env_ptr)->libs__compute_grade__compute_grade_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->libs__compute_grade__compute_grade_2_p_0_2_env_0__conv0_LambdaHeadVar__1_16));
  ((env_ptr)->libs__compute_grade__compute_grade_2_p_0_2_env_0__cont)((env_ptr)->libs__compute_grade__compute_grade_2_p_0_2_env_0__cont_env_ptr);
}

static void MR_CALL 
libs__compute_grade__compute_grade_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct libs__compute_grade__compute_grade_2_p_0_2_env_0_s env;

  (env).libs__compute_grade__compute_grade_2_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).libs__compute_grade__compute_grade_2_p_0_2_env_0__cont = cont;
  (env).libs__compute_grade__compute_grade_2_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    libs__compute_grade__IntroducedFrom__pred__compute_grade_components__490__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), &(env).libs__compute_grade__compute_grade_2_p_0_2_env_0__conv0_LambdaHeadVar__1_16, libs__compute_grade__compute_grade_2_p_0_1, &env);
  }
}

void MR_CALL 
libs__compute_grade__compute_grade_2_p_0(
  MR_Word Globals_3,
  MR_String * GradeStr_4)
{
  MR_Word Options_5;
  MR_Word Components_6;
  MR_Word Var_13;

  libs__globals__get_options_2_p_0(Globals_3, &Options_5);
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&libs__compute_grade_scalar_common_6[1]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (libs__compute_grade__compute_grade_2_p_0_2));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (Options_5));
  }
  mercury__solutions__solutions_2_p_1((MR_Word) (&libs__compute_grade_scalar_common_2[2]), Var_13, &Components_6);
  if ((Components_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *GradeStr_4 = (MR_String) "none";
  else
  {
    MR_Word ComponentNames_9;

    ComponentNames_9 = mercury__assoc_list__values_1_f_0((MR_Word) (&libs__compute_grade__libs__compute_grade__type_ctor_info_grade_component_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Components_6);
    *GradeStr_4 = mercury__string__join_list_2_f_0((MR_String) ".", ComponentNames_9);
  }
}

static MR_bool MR_CALL 
libs__compute_grade__convert_grade_option_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv4_LambdaHeadVar__3_25;
  MR_Word conv3_LambdaHeadVar__5_27;

  succeeded = libs__compute_grade__IntroducedFrom__pred__convert_grade_option__442__1_5_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_LambdaHeadVar__3_25, ((MR_Word) (wrapper_arg_4)), &conv3_LambdaHeadVar__5_27);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv4_LambdaHeadVar__3_25));
    *wrapper_arg_5 = ((MR_Box) (conv3_LambdaHeadVar__5_27));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
libs__compute_grade__convert_grade_option_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__3_14;

  libs__compute_grade__IntroducedFrom__pred__reset_grade_options__717__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_LambdaHeadVar__3_14);
  *wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_14));
}

static void MR_CALL 
libs__compute_grade__convert_grade_option_3_p_0_1(
  void * env_ptr_arg)
{
  struct libs__compute_grade__convert_grade_option_3_p_0_2_env_0_s * env_ptr = (struct libs__compute_grade__convert_grade_option_3_p_0_2_env_0_s *) (env_ptr_arg);

  *((env_ptr)->libs__compute_grade__convert_grade_option_3_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->libs__compute_grade__convert_grade_option_3_p_0_2_env_0__conv0_HeadVar__1_1));
  ((env_ptr)->libs__compute_grade__convert_grade_option_3_p_0_2_env_0__cont)((env_ptr)->libs__compute_grade__convert_grade_option_3_p_0_2_env_0__cont_env_ptr);
}

static void MR_CALL 
libs__compute_grade__convert_grade_option_3_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct libs__compute_grade__convert_grade_option_3_p_0_2_env_0_s env;

  (env).libs__compute_grade__convert_grade_option_3_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).libs__compute_grade__convert_grade_option_3_p_0_2_env_0__cont = cont;
  (env).libs__compute_grade__convert_grade_option_3_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    libs__compute_grade__grade_start_values_1_p_0(&(env).libs__compute_grade__convert_grade_option_3_p_0_2_env_0__conv0_HeadVar__1_1, libs__compute_grade__convert_grade_option_3_p_0_1, &env);
  }
}

MR_bool MR_CALL 
libs__compute_grade__convert_grade_option_3_p_0(
  MR_String GradeString_4,
  MR_Word Options0_5,
  MR_Word * Options_6)
{
  MR_bool succeeded;
  MR_Word Options1_7;
  MR_Word Components_8;
  MR_Word NoComps_9;
  MR_Box conv2_Options1_7;
  MR_Box conv6_Options_6;
  MR_Box conv5__FinalComps_21;

  mercury__solutions__aggregate_4_p_0((MR_Word) (&libs__compute_grade_scalar_common_2[1]), (MR_Word) (&libs__compute_grade_scalar_common_2[0]), (MR_Word) (&libs__compute_grade_scalar_common_2[5]), (MR_Word) (&libs__compute_grade_scalar_common_2[6]), ((MR_Box) (Options0_5)), &conv2_Options1_7);
  Options1_7 = ((MR_Word) (conv2_Options1_7));
  Components_8 = mercury__string__split_at_char_2_f_0((MR_Char) 46, GradeString_4);
  mercury__set__init_1_p_0((MR_Word) (&libs__compute_grade__libs__compute_grade__type_ctor_info_grade_component_0), &NoComps_9);
  succeeded = mercury__list__foldl2_6_p_4((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__compute_grade_scalar_common_2[0]), (MR_Word) (&libs__compute_grade_scalar_common_1[2]), (MR_Word) (&libs__compute_grade_scalar_common_2[7]), Components_8, ((MR_Box) (Options1_7)), &conv6_Options_6, ((MR_Box) (NoComps_9)), &conv5__FinalComps_21);
  if (succeeded)
  {
    *Options_6 = ((MR_Word) (conv6_Options_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
libs__compute_grade__handle_libgrade_component_incl_excl_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv13_STATE_VARIABLE_Grades_16;
  MR_Word conv12_STATE_VARIABLE_Specs_18;

  libs__compute_grade__filter_grade_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv13_STATE_VARIABLE_Grades_16, ((MR_Word) (wrapper_arg_4)), &conv12_STATE_VARIABLE_Specs_18);
  *wrapper_arg_3 = ((MR_Box) (conv13_STATE_VARIABLE_Grades_16));
  *wrapper_arg_5 = ((MR_Box) (conv12_STATE_VARIABLE_Specs_18));
}

static MR_bool MR_CALL 
libs__compute_grade__handle_libgrade_component_incl_excl_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = libs__compute_grade__must_not_contain_2_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__compute_grade__handle_libgrade_component_incl_excl_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_STATE_VARIABLE_Grades_16;
  MR_Word conv8_STATE_VARIABLE_Specs_18;

  libs__compute_grade__filter_grade_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_STATE_VARIABLE_Grades_16, ((MR_Word) (wrapper_arg_4)), &conv8_STATE_VARIABLE_Specs_18);
  *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_Grades_16));
  *wrapper_arg_5 = ((MR_Box) (conv8_STATE_VARIABLE_Specs_18));
}

static MR_bool MR_CALL 
libs__compute_grade__handle_libgrade_component_incl_excl_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = libs__compute_grade__must_contain_2_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__compute_grade__handle_libgrade_component_incl_excl_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_Comps_17;
  MR_Word conv4_STATE_VARIABLE_Specs_19;

  libs__compute_grade__string_to_grade_component_6_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_Comps_17, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_Specs_19);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_Comps_17));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_Specs_19));
}

static void MR_CALL 
libs__compute_grade__handle_libgrade_component_incl_excl_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Comps_17;
  MR_Word conv0_STATE_VARIABLE_Specs_19;

  libs__compute_grade__string_to_grade_component_6_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Comps_17, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_19);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Comps_17));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_19));
}

void MR_CALL 
libs__compute_grade__handle_libgrade_component_incl_excl_4_p_0(
  MR_Word STATE_VARIABLE_Globals_0_12,
  MR_Word * STATE_VARIABLE_Globals_13,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  MR_bool succeeded;
  MR_Word IncludeComponentStrs_7;
  MR_Word OmitComponentStrs_8;
  MR_Word IncludeComponents_9;
  MR_Word OmitComponents_10;
  MR_Word STATE_VARIABLE_Specs_1_20;
  MR_Word STATE_VARIABLE_Specs_2_24;
  MR_Word STATE_VARIABLE_LibGrades_1_27;
  MR_Word Var_28;
  MR_Word STATE_VARIABLE_LibGrades_2_30;
  MR_Word STATE_VARIABLE_Specs_3_31;
  MR_Word Var_33;
  MR_Word STATE_VARIABLE_LibGrades_3_35;
  MR_Word Var_39;
  MR_Box conv3_IncludeComponents_9;
  MR_Box conv2_STATE_VARIABLE_Specs_1_20;
  MR_Box conv7_OmitComponents_10;
  MR_Box conv6_STATE_VARIABLE_Specs_2_24;
  MR_Box conv11_STATE_VARIABLE_LibGrades_2_30;
  MR_Box conv10_STATE_VARIABLE_Specs_3_31;
  MR_Box conv15_STATE_VARIABLE_LibGrades_3_35;
  MR_Box conv14_STATE_VARIABLE_Specs_15;

  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_0_12, (MR_Integer) 574, &IncludeComponentStrs_7);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_0_12, (MR_Integer) 575, &OmitComponentStrs_8);
  mercury__list__foldl2_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__compute_grade_scalar_common_1[0]), (MR_Word) (&libs__compute_grade_scalar_common_1[1]), (MR_Word) (&libs__compute_grade_scalar_common_5[0]), IncludeComponentStrs_7, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_IncludeComponents_9, ((MR_Box) (STATE_VARIABLE_Specs_0_14)), &conv2_STATE_VARIABLE_Specs_1_20);
  IncludeComponents_9 = ((MR_Word) (conv3_IncludeComponents_9));
  STATE_VARIABLE_Specs_1_20 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_1_20));
  mercury__list__foldl2_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__compute_grade_scalar_common_1[0]), (MR_Word) (&libs__compute_grade_scalar_common_1[1]), (MR_Word) (&libs__compute_grade_scalar_common_5[1]), OmitComponentStrs_8, ((MR_Box) ((MR_Unsigned) 0U)), &conv7_OmitComponents_10, ((MR_Box) (STATE_VARIABLE_Specs_1_20)), &conv6_STATE_VARIABLE_Specs_2_24);
  OmitComponents_10 = ((MR_Word) (conv7_OmitComponents_10));
  STATE_VARIABLE_Specs_2_24 = ((MR_Word) (conv6_STATE_VARIABLE_Specs_2_24));
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_0_12, (MR_Integer) 573, &STATE_VARIABLE_LibGrades_1_27);
  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (&libs__compute_grade_scalar_common_7[0]));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) (libs__compute_grade__handle_libgrade_component_incl_excl_4_p_0_4));
    MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_28, 3) = ((MR_Box) (&libs__compute_grade_scalar_common_2[3]));
    MR_hl_field(0, Var_28, 4) = ((MR_Box) (IncludeComponents_9));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__compute_grade_scalar_common_1[0]), (MR_Word) (&libs__compute_grade_scalar_common_1[1]), Var_28, STATE_VARIABLE_LibGrades_1_27, ((MR_Box) ((MR_Unsigned) 0U)), &conv11_STATE_VARIABLE_LibGrades_2_30, ((MR_Box) (STATE_VARIABLE_Specs_2_24)), &conv10_STATE_VARIABLE_Specs_3_31);
  STATE_VARIABLE_LibGrades_2_30 = ((MR_Word) (conv11_STATE_VARIABLE_LibGrades_2_30));
  STATE_VARIABLE_Specs_3_31 = ((MR_Word) (conv10_STATE_VARIABLE_Specs_3_31));
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) (&libs__compute_grade_scalar_common_7[0]));
    MR_hl_field(0, Var_33, 1) = ((MR_Box) (libs__compute_grade__handle_libgrade_component_incl_excl_4_p_0_6));
    MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_33, 3) = ((MR_Box) (&libs__compute_grade_scalar_common_2[4]));
    MR_hl_field(0, Var_33, 4) = ((MR_Box) (OmitComponents_10));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__compute_grade_scalar_common_1[0]), (MR_Word) (&libs__compute_grade_scalar_common_1[1]), Var_33, STATE_VARIABLE_LibGrades_2_30, ((MR_Box) ((MR_Unsigned) 0U)), &conv15_STATE_VARIABLE_LibGrades_3_35, ((MR_Box) (STATE_VARIABLE_Specs_3_31)), &conv14_STATE_VARIABLE_Specs_15);
  STATE_VARIABLE_LibGrades_3_35 = ((MR_Word) (conv15_STATE_VARIABLE_LibGrades_3_35));
  *STATE_VARIABLE_Specs_15 = ((MR_Word) (conv14_STATE_VARIABLE_Specs_15));
  {
    Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, Var_39, 1) = ((MR_Box) (STATE_VARIABLE_LibGrades_3_35));
  }
  libs__globals__set_option_4_p_0((MR_Integer) 573, Var_39, STATE_VARIABLE_Globals_0_12, STATE_VARIABLE_Globals_13);
}

void MR_CALL 
libs__compute_grade__check_grade_component_compatibility_5_p_0(
  MR_Word Globals_6,
  MR_Word Target_7,
  MR_Word GC_Method_8,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  MR_String TargetStr_10;
  MR_Word ProfileTime_14;
  MR_Word ProfileMemory_16;
  MR_Word UseTrail_18;
  MR_Word StackSegments_20;
  MR_Word HighLevelCode_21;
  MR_Word SinglePrecFloat_23;
  MR_Word TargetDebugGrade_25;
  MR_Word STATE_VARIABLE_Specs_1_43;
  MR_Word STATE_VARIABLE_Specs_4_89;
  MR_Word STATE_VARIABLE_Specs_5_105;
  MR_Word STATE_VARIABLE_Specs_6_121;
  MR_Word STATE_VARIABLE_Specs_7_133;
  MR_Word STATE_VARIABLE_Specs_9_164;

  TargetStr_10 = libs__globals__compilation_target_string_1_f_0(Target_7);
  switch (Target_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Specs_1_43 = STATE_VARIABLE_Specs_0_27;
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      switch (GC_Method_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 5:
          {
            MR_Word AGCSpec_13;
            MR_Word Var_61;
            MR_Word Var_64;
            MR_Word Var_65;

            {
              Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, Var_65, 1) = ((MR_Box) (TargetStr_10));
            }
            {
              Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
              MR_hl_field(1, Var_64, 1) = ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[7])));
            }
            {
              Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_61, 0) = ((MR_Box) (MR_mkword(3, &libs__compute_grade_scalar_common_1[4])));
              MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_64));
            }
            {
              AGCSpec_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, AGCSpec_13, 0) = ((MR_Box) (MR_mkword(3, &libs__compute_grade_scalar_common_1[3])));
              MR_hl_field(1, AGCSpec_13, 1) = ((MR_Box) (Var_61));
            }
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), AGCSpec_13, STATE_VARIABLE_Specs_0_27, &STATE_VARIABLE_Specs_1_43);
          }
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_Specs_1_43 = STATE_VARIABLE_Specs_0_27;
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
          {
            MR_Word BoehmSpec_11;
            MR_Word Var_31;
            MR_Word Var_34;
            MR_Word Var_35;

            {
              Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, Var_35, 1) = ((MR_Box) (TargetStr_10));
            }
            {
              Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
              MR_hl_field(1, Var_34, 1) = ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[7])));
            }
            {
              Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_31, 0) = ((MR_Box) (MR_mkword(3, &libs__compute_grade_scalar_common_1[4])));
              MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_34));
            }
            {
              BoehmSpec_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, BoehmSpec_11, 0) = ((MR_Box) (MR_mkword(3, &libs__compute_grade_scalar_common_1[8])));
              MR_hl_field(1, BoehmSpec_11, 1) = ((MR_Box) (Var_31));
            }
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), BoehmSpec_11, STATE_VARIABLE_Specs_0_27, &STATE_VARIABLE_Specs_1_43);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word HGCSpec_12;
            MR_Word Var_46;
            MR_Word Var_49;
            MR_Word Var_50;

            {
              Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, Var_50, 1) = ((MR_Box) (TargetStr_10));
            }
            {
              Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
              MR_hl_field(1, Var_49, 1) = ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[7])));
            }
            {
              Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_46, 0) = ((MR_Box) (MR_mkword(3, &libs__compute_grade_scalar_common_1[4])));
              MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_49));
            }
            {
              HGCSpec_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, HGCSpec_12, 0) = ((MR_Box) (MR_mkword(3, &libs__compute_grade_scalar_common_1[9])));
              MR_hl_field(1, HGCSpec_12, 1) = ((MR_Box) (Var_46));
            }
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), HGCSpec_12, STATE_VARIABLE_Specs_0_27, &STATE_VARIABLE_Specs_1_43);
          }
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_Specs_1_43 = STATE_VARIABLE_Specs_0_27;
          break;
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 64, &ProfileTime_14);
  switch (ProfileTime_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Specs_4_89 = STATE_VARIABLE_Specs_1_43;
      break;
    case (MR_Integer) 1:
      switch (Target_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Specs_4_89 = STATE_VARIABLE_Specs_1_43;
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word TimeProfpec_15;
            MR_Word Var_77;
            MR_Word Var_80;
            MR_Word Var_81;

            {
              Var_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_81, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, Var_81, 1) = ((MR_Box) (TargetStr_10));
            }
            {
              Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_80, 0) = ((MR_Box) (Var_81));
              MR_hl_field(1, Var_80, 1) = ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[7])));
            }
            {
              Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_77, 0) = ((MR_Box) (MR_mkword(3, &libs__compute_grade_scalar_common_1[4])));
              MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_80));
            }
            {
              TimeProfpec_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, TimeProfpec_15, 0) = ((MR_Box) (MR_mkword(3, &libs__compute_grade_scalar_common_1[10])));
              MR_hl_field(1, TimeProfpec_15, 1) = ((MR_Box) (Var_77));
            }
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TimeProfpec_15, STATE_VARIABLE_Specs_1_43, &STATE_VARIABLE_Specs_4_89);
          }
          break;
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 65, &ProfileMemory_16);
  switch (ProfileMemory_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Specs_5_105 = STATE_VARIABLE_Specs_4_89;
      break;
    case (MR_Integer) 1:
      switch (Target_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Specs_5_105 = STATE_VARIABLE_Specs_4_89;
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word MemProfpec_17;
            MR_Word Var_93;
            MR_Word Var_96;
            MR_Word Var_97;

            {
              Var_97 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_97, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, Var_97, 1) = ((MR_Box) (TargetStr_10));
            }
            {
              Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_96, 0) = ((MR_Box) (Var_97));
              MR_hl_field(1, Var_96, 1) = ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[7])));
            }
            {
              Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_93, 0) = ((MR_Box) (MR_mkword(3, &libs__compute_grade_scalar_common_1[4])));
              MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_96));
            }
            {
              MemProfpec_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MemProfpec_17, 0) = ((MR_Box) (MR_mkword(3, &libs__compute_grade_scalar_common_1[11])));
              MR_hl_field(1, MemProfpec_17, 1) = ((MR_Box) (Var_93));
            }
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), MemProfpec_17, STATE_VARIABLE_Specs_4_89, &STATE_VARIABLE_Specs_5_105);
          }
          break;
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 90, &UseTrail_18);
  switch (UseTrail_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Specs_6_121 = STATE_VARIABLE_Specs_5_105;
      break;
    case (MR_Integer) 1:
      switch (Target_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Specs_6_121 = STATE_VARIABLE_Specs_5_105;
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word TrailSpec_19;
            MR_Word Var_109;
            MR_Word Var_112;
            MR_Word Var_113;

            {
              Var_113 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_113, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, Var_113, 1) = ((MR_Box) (TargetStr_10));
            }
            {
              Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_112, 0) = ((MR_Box) (Var_113));
              MR_hl_field(1, Var_112, 1) = ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[7])));
            }
            {
              Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_109, 0) = ((MR_Box) (MR_mkword(3, &libs__compute_grade_scalar_common_1[4])));
              MR_hl_field(1, Var_109, 1) = ((MR_Box) (Var_112));
            }
            {
              TrailSpec_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, TrailSpec_19, 0) = ((MR_Box) (MR_mkword(3, &libs__compute_grade_scalar_common_1[12])));
              MR_hl_field(1, TrailSpec_19, 1) = ((MR_Box) (Var_109));
            }
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TrailSpec_19, STATE_VARIABLE_Specs_5_105, &STATE_VARIABLE_Specs_6_121);
          }
          break;
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 88, &StackSegments_20);
  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 55, &HighLevelCode_21);
  switch (StackSegments_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Specs_7_133 = STATE_VARIABLE_Specs_6_121;
      break;
    case (MR_Integer) 1:
      switch (Target_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (HighLevelCode_21) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Specs_7_133 = STATE_VARIABLE_Specs_6_121;
              break;
            case (MR_Integer) 1:
              libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[16])), STATE_VARIABLE_Specs_6_121, &STATE_VARIABLE_Specs_7_133);
              break;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word Var_136;
            MR_Word Var_139;
            MR_Word Var_140;
            MR_Word StackSegmentpec_176;

            {
              Var_140 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_140, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, Var_140, 1) = ((MR_Box) (TargetStr_10));
            }
            {
              Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_139, 0) = ((MR_Box) (Var_140));
              MR_hl_field(1, Var_139, 1) = ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[7])));
            }
            {
              Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_136, 0) = ((MR_Box) (MR_mkword(3, &libs__compute_grade_scalar_common_1[4])));
              MR_hl_field(1, Var_136, 1) = ((MR_Box) (Var_139));
            }
            {
              StackSegmentpec_176 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, StackSegmentpec_176, 0) = ((MR_Box) (MR_mkword(3, &libs__compute_grade_scalar_common_1[15])));
              MR_hl_field(1, StackSegmentpec_176, 1) = ((MR_Box) (Var_136));
            }
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), StackSegmentpec_176, STATE_VARIABLE_Specs_6_121, &STATE_VARIABLE_Specs_7_133);
          }
          break;
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 91, &SinglePrecFloat_23);
  switch (SinglePrecFloat_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Specs_9_164 = STATE_VARIABLE_Specs_7_133;
      break;
    case (MR_Integer) 1:
      switch (Target_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Specs_9_164 = STATE_VARIABLE_Specs_7_133;
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word SPFSpec_24;
            MR_Word Var_152;
            MR_Word Var_155;
            MR_Word Var_156;

            {
              Var_156 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_156, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, Var_156, 1) = ((MR_Box) (TargetStr_10));
            }
            {
              Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_155, 0) = ((MR_Box) (Var_156));
              MR_hl_field(1, Var_155, 1) = ((MR_Box) (MR_mkword(1, &libs__compute_grade_scalar_common_1[7])));
            }
            {
              Var_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_152, 0) = ((MR_Box) (MR_mkword(3, &libs__compute_grade_scalar_common_1[4])));
              MR_hl_field(1, Var_152, 1) = ((MR_Box) (Var_155));
            }
            {
              SPFSpec_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, SPFSpec_24, 0) = ((MR_Box) (MR_mkword(3, &libs__compute_grade_scalar_common_1[17])));
              MR_hl_field(1, SPFSpec_24, 1) = ((MR_Box) (Var_152));
            }
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), SPFSpec_24, STATE_VARIABLE_Specs_7_133, &STATE_VARIABLE_Specs_9_164);
          }
          break;
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 56, &TargetDebugGrade_25);
  switch (TargetDebugGrade_25) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_9_164;
      break;
    case (MR_Integer) 1:
      switch (HighLevelCode_21) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__compute_grade_scalar_common_1[21])), STATE_VARIABLE_Specs_9_164, STATE_VARIABLE_Specs_28);
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_9_164;
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
libs__compute_grade____Unify____grade_component_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__compute_grade____Unify____grade_component_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__compute_grade____Compare____grade_component_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__compute_grade____Compare____grade_component_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module libs.compute_grade.
