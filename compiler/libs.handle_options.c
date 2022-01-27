/*
** Automatically generated from `handle_options.m'
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
#include "transform_hlds.mih"
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
#include "libs.compute_grade.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
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
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
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
#include "parse_tree.maybe_error.mih"
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



#line 155 "handle_options.m"
struct libs__handle_options__separate_option_args_5_p_0_4_env_0_s {
#line 155 "handle_options.m"
  MR_Box * libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_1;
#line 155 "handle_options.m"
  MR_Box * libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_2;
#line 155 "handle_options.m"
  MR_Cont libs__handle_options__separate_option_args_5_p_0_4_env_0__cont;
#line 155 "handle_options.m"
  void * libs__handle_options__separate_option_args_5_p_0_4_env_0__cont_env_ptr;
#line 155 "handle_options.m"
  MR_Word libs__handle_options__separate_option_args_5_p_0_4_env_0__conv3_HeadVar__1_1;
#line 155 "handle_options.m"
  MR_Word libs__handle_options__separate_option_args_5_p_0_4_env_0__conv2_HeadVar__2_2;
#line 155 "handle_options.m"
};

#line 155 "handle_options.m"
struct libs__handle_options__handle_given_options_7_p_0_4_env_0_s {
#line 155 "handle_options.m"
  MR_Box * libs__handle_options__handle_given_options_7_p_0_4_env_0__wrapper_arg_1;
#line 155 "handle_options.m"
  MR_Box * libs__handle_options__handle_given_options_7_p_0_4_env_0__wrapper_arg_2;
#line 155 "handle_options.m"
  MR_Cont libs__handle_options__handle_given_options_7_p_0_4_env_0__cont;
#line 155 "handle_options.m"
  void * libs__handle_options__handle_given_options_7_p_0_4_env_0__cont_env_ptr;
#line 155 "handle_options.m"
  MR_Word libs__handle_options__handle_given_options_7_p_0_4_env_0__conv3_HeadVar__1_1;
#line 155 "handle_options.m"
  MR_Word libs__handle_options__handle_given_options_7_p_0_4_env_0__conv2_HeadVar__2_2;
#line 155 "handle_options.m"
};


#line 182 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0;

#line 185 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__getopt_io__pti_maybe_option_table_1__plain_libs__options__type_ctor_info_option_0;

#line 188 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct1 libs__handle_options____vpti_pred_1__plain_builtin__type_ctor_info_string_0;

#line 191 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct2 libs__handle_options____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

#line 2122 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2122__1_2_f_0(
#line 2122 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_178,
#line 2122 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1653);

#line 2120 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2120__1_2_f_0(
#line 2120 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_178,
#line 2120 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1647);

#line 2129 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2129__1_1_f_0(
#line 2129 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1642);

#line 2128 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2128__1_1_f_0(
#line 2128 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1637);

#line 2098 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2098__1_2_f_0(
#line 2098 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_178,
#line 2098 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1624);

#line 2094 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2094__1_2_f_0(
#line 2094 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_178,
#line 2094 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1618);

#line 2076 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2076__2_2_p_0(
#line 2076 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1611,
#line 2076 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1757);

#line 2076 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2076__1_2_p_0(
#line 2076 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1612,
#line 2076 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1759);

#line 2058 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2058__1_3_f_0(
#line 2058 "handle_options.m"
  MR_String libs__handle_options__TargetArch_145,
#line 2058 "handle_options.m"
  MR_String libs__handle_options__GradeString_158,
#line 2058 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1599);

#line 2022 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2022__1_2_f_0(
#line 2022 "handle_options.m"
  MR_String libs__handle_options__GradeString_158,
#line 2022 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1580);

#line 2012 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2012__1_2_f_0(
#line 2012 "handle_options.m"
  MR_String libs__handle_options__GradeString_158,
#line 2012 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1570);

#line 1999 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1999__1_2_f_0(
#line 1999 "handle_options.m"
  MR_String libs__handle_options__GradeString_158,
#line 1999 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1553);

#line 1984 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1984__1_2_f_0(
#line 1984 "handle_options.m"
  MR_String libs__handle_options__GradeString_158,
#line 1984 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1538);

#line 2453 "handle_options.m"
static void MR_CALL 
libs__handle_options__unsafe_set_already_printed_usage_1_p_0(
#line 2453 "handle_options.m"
  MR_Word libs__handle_options__X_1);

#line 2453 "handle_options.m"
static void MR_CALL 
libs__handle_options__unsafe_get_already_printed_usage_1_p_0(
#line 2453 "handle_options.m"
  MR_Word * libs__handle_options__X_1);

#line 2453 "handle_options.m"
static void MR_CALL 
libs__handle_options__unlock_already_printed_usage_0_p_0(void);

#line 2453 "handle_options.m"
static void MR_CALL 
libs__handle_options__lock_already_printed_usage_0_p_0(void);

#line 2453 "handle_options.m"
static void MR_CALL 
libs__handle_options__initialise_mutable_already_printed_usage_0_p_0(void);

#line 2453 "handle_options.m"
static void MR_CALL 
libs__handle_options__pre_initialise_mutable_already_printed_usage_0_p_0(void);

#line 2565 "handle_options.m"
static void MR_CALL 
libs__handle_options__raw_lookup_accumulating_option_3_p_0(
#line 2565 "handle_options.m"
  MR_Word libs__handle_options__OptionTable_4,
#line 2565 "handle_options.m"
  MR_Word libs__handle_options__Option_5,
#line 2565 "handle_options.m"
  MR_Word * libs__handle_options__AccumulatingValue_6);

#line 2553 "handle_options.m"
static void MR_CALL 
libs__handle_options__raw_lookup_string_option_3_p_0(
#line 2553 "handle_options.m"
  MR_Word libs__handle_options__OptionTable_4,
#line 2553 "handle_options.m"
  MR_Word libs__handle_options__Option_5,
#line 2553 "handle_options.m"
  MR_String * libs__handle_options__StringValue_6);

#line 2542 "handle_options.m"
static void MR_CALL 
libs__handle_options__raw_lookup_int_option_3_p_0(
#line 2542 "handle_options.m"
  MR_Word libs__handle_options__OptionTable_4,
#line 2542 "handle_options.m"
  MR_Word libs__handle_options__Option_5,
#line 2542 "handle_options.m"
  MR_Integer * libs__handle_options__IntValue_6);

#line 2531 "handle_options.m"
static void MR_CALL 
libs__handle_options__raw_lookup_bool_option_3_p_0(
#line 2531 "handle_options.m"
  MR_Word libs__handle_options__OptionTable_4,
#line 2531 "handle_options.m"
  MR_Word libs__handle_options__Option_5,
#line 2531 "handle_options.m"
  MR_Word * libs__handle_options__BoolValue_6);

#line 2504 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_dump_alias_2_p_0(
#line 2504 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1,
#line 2504 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_2);

#line 2409 "handle_options.m"
static void MR_CALL 
libs__handle_options__disable_smart_recompilation_5_p_0(
#line 2409 "handle_options.m"
  MR_String libs__handle_options__OptionDescr_6,
#line 2409 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2409 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12);

#line 2394 "handle_options.m"
static void MR_CALL 
libs__handle_options__maybe_disable_smart_recompilation_8_p_0(
#line 2394 "handle_options.m"
  MR_Word libs__handle_options__Smart_9,
#line 2394 "handle_options.m"
  MR_Word libs__handle_options__ConflictingOption_10,
#line 2394 "handle_options.m"
  MR_Word libs__handle_options__ValueToDisableSmart_11,
#line 2394 "handle_options.m"
  MR_String libs__handle_options__OptionDescr_12,
#line 2394 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_16,
#line 2394 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_17);

#line 2374 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_requires_7_p_0(
#line 2374 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_8,
#line 2374 "handle_options.m"
  MR_Word libs__handle_options__RequiredOption_9,
#line 2374 "handle_options.m"
  MR_Word libs__handle_options__RequiredOptionValue_10,
#line 2374 "handle_options.m"
  MR_String libs__handle_options__ErrorMessage_11,
#line 2374 "handle_options.m"
  MR_Word libs__handle_options__Globals_12,
#line 2374 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Specs_0_16,
#line 2374 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Specs_17);

#line 2355 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_neg_implies_5_p_0(
#line 2355 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_6,
#line 2355 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOption_7,
#line 2355 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOptionValue_8,
#line 2355 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2355 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12);

#line 2339 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_implies_5_p_0(
#line 2339 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_6,
#line 2339 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOption_7,
#line 2339 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOptionValue_8,
#line 2339 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2339 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12);

#line 2259 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_lowlevel_2_p_0(
#line 2259 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_12,
#line 2259 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_13);

#line 2122 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_13(
#line 2122 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2122 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2120 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_12(
#line 2120 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2120 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2129 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_11(
#line 2129 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2129 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2128 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_10(
#line 2128 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2128 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2098 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_9(
#line 2098 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2098 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2094 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_8(
#line 2094 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2094 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2076 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_7(
#line 2076 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2076 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2076 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_6(
#line 2076 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2076 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2058 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_5(
#line 2058 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2058 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2022 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_4(
#line 2022 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2022 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2012 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_3(
#line 2012 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2012 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 1999 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_2(
#line 1999 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 1999 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 1984 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_1(
#line 1984 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 1984 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 646 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0(
#line 646 "handle_options.m"
  MR_Word libs__handle_options__OptionTable0_25,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__OpMode_26,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__Target_27,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__GC_Method_28,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__TagsMethod0_29,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__TermNorm_30,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__Term2Norm_31,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__TraceLevel_32,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__TraceSuppress_33,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__SSTraceLevel_34,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__MaybeThreadSafe_35,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__C_CompilerType_36,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__CSharp_CompilerType_37,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__ReuseStrategy_38,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__MaybeFeedbackInfo_39,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__HostEnvType_40,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__SystemEnvType_41,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__TargetEnvType_42,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__LimitErrorContextsMap_43,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Specs_0_206,
#line 646 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Specs_207,
#line 646 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_208);

#line 222 "handle_options.m"
static void MR_CALL 
libs__handle_options__check_option_values_22_p_0(
#line 222 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_OptionTable_0_116,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_OptionTable_117,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__Target_24,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__GC_Method_25,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__TagsMethod_26,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__TermNorm_27,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__Term2Norm_28,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__TraceLevel_29,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__TraceSuppress_30,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__SSTraceLevel_31,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__MaybeThreadSafe_32,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__C_CompilerType_33,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__CSharp_CompilerType_34,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__ReuseStrategy_35,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__MaybeFeedbackInfo_36,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__HostEnvType_37,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__SystemEnvType_38,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__TargetEnvType_39,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__LimitErrorContextsMap_40,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Specs_118);

#line 200 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_option_table_result_to_globals_5_p_0_1(
#line 200 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 200 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 173 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_option_table_result_to_globals_5_p_0(
#line 173 "handle_options.m"
  MR_Word libs__handle_options__MaybeOptionTable0_6,
#line 173 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Specs_41,
#line 173 "handle_options.m"
  MR_Word * libs__handle_options__Globals_8);

#line 155 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_5(
#line 155 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 155 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 155 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 155 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_3,
#line 155 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_4);

#line 155 "handle_options.m"
static void MR_CALL 
libs__handle_options__separate_option_args_5_p_0_3(
#line 155 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 155 "handle_options.m"
static void MR_CALL 
libs__handle_options__separate_option_args_5_p_0_4(
#line 155 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 155 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 155 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2,
#line 155 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 155 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 154 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_2(
#line 154 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 154 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 154 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2);

#line 154 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_1(
#line 154 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 154 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 154 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2);

#line 155 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__handle_given_options_7_p_0_5(
#line 155 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 155 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 155 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 155 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_3,
#line 155 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_4);

#line 155 "handle_options.m"
static void MR_CALL 
libs__handle_options__handle_given_options_7_p_0_3(
#line 155 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 155 "handle_options.m"
static void MR_CALL 
libs__handle_options__handle_given_options_7_p_0_4(
#line 155 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 155 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 155 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2,
#line 155 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 155 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 154 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__handle_given_options_7_p_0_2(
#line 154 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 154 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 154 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2);

#line 154 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__handle_given_options_7_p_0_1(
#line 154 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 154 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 154 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2);


static /* final */ const MR_Box libs__handle_options_scalar_common_1[236][2];

static /* final */ const MR_Box libs__handle_options_scalar_common_2[6][5];

static /* final */ const MR_Box libs__handle_options_scalar_common_3[11][3];

static /* final */ const MR_Box libs__handle_options_scalar_common_4[2][7];

static /* final */ const MR_Box libs__handle_options_scalar_common_5[2][4];

static /* final */ const MR_Box libs__handle_options_scalar_common_6[9][1];

static /* final */ const MR_Box libs__handle_options_scalar_common_7[2][6];


#line 2507 "handle_options.m"
/* sealed */ struct libs__handle_options__vector_common_type_8_0_s {
#line 2507 "handle_options.m"
  const MR_String libs__handle_options__vector_common_type_8_0__vct_8_f_0;
#line 2507 "handle_options.m"
};

static /* final */ const struct libs__handle_options__vector_common_type_8_0_s libs__handle_options_vector_common_8[20];



static /* final */ const MR_Box libs__handle_options_scalar_common_1[236][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "Copyright (C) 2013-2015 The Mercury team\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "Copyright (C) 1993-2012 The University of Melbourne\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[0])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[1])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "Use \140mmc --help\' for more information.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "Usage: mmc [<options>] <arguments>\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "may be given:"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: only one of the following options"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option; must be"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--target"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to the"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "erlang")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "csharp")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "java")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "c")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--gc"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "automatic")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "accurate")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[25])))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) "hgc")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_String) "boehm")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[27])))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_String) "conservative")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[28])))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_String) "none")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--tags"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[32])))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_String) "high")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_String) "low")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[34])))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_String) "none")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[35])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option; must be an integer between 1 and 100."))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--fact-table-hash-percent-full"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[40])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--termination-norm"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[43])))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_String) "num-data-elems")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_String) "total")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[45])))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_String) "simple")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[46])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--termination2-norm"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[49])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option."))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--decl_debug"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[52])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not compatible with the value of the"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[54])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--trace"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[58])))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_String) "default")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 61 */
  {
    ((MR_Box) ((MR_String) "rep")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[60])))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_String) "decl")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[61])))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_String) "deep")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[62])))
  },
  /* row 64 */
  {
    ((MR_Box) ((MR_String) "shallow")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[63])))
  },
  /* row 65 */
  {
    ((MR_Box) ((MR_String) "minimum")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[64])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--suppress-trace"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[52])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[67])))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--ssdb-trace"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[70])))
  },
  /* row 72 */
  {
    ((MR_Box) ((MR_String) "deep")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 73 */
  {
    ((MR_Box) ((MR_String) "shallow")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[72])))
  },
  /* row 74 */
  {
    ((MR_Box) ((MR_String) "none")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[73])))
  },
  /* row 75 */
  {
    ((MR_Box) ((MR_String) "default")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[74])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option;"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[77])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--maybe-thread-safe"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[79])))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[81])))
  },
  /* row 83 */
  {
    ((MR_Box) ((MR_String) "yes")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 84 */
  {
    ((MR_Box) ((MR_String) "no")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[83])))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[52])))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--dump-hlds-alias"))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[86])))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(also known as"))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[88])))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "D"))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[90])))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[92])))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--c-compiler-type"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[79])))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[95])))
  },
  /* row 97 */
  {
    ((MR_Box) ((MR_String) "unknown")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 98 */
  {
    ((MR_Box) ((MR_String) "msvc")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[97])))
  },
  /* row 99 */
  {
    ((MR_Box) ((MR_String) "clang")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[98])))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_String) "gcc")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[99])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--csharp-compiler-type"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[79])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[102])))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_String) "mono")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[97])))
  },
  /* row 105 */
  {
    ((MR_Box) ((MR_String) "microsoft")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[104])))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--structure-reuse-constraint"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[107])))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_String) "within_n_cells_difference")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_String) "same_cons_id")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[109])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--host-env-type"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[112])))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_String) "windows")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 115 */
  {
    ((MR_Box) ((MR_String) "msys")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[114])))
  },
  /* row 116 */
  {
    ((MR_Box) ((MR_String) "cygwin")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[115])))
  },
  /* row 117 */
  {
    ((MR_Box) ((MR_String) "posix")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[116])))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--system-env-type"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[79])))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[119])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--target-env-type"))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[79])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[122])))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "--csharp-compiler-type microsoft"))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[124]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is incompatible with"))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[126]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[125])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "--host-env-type posix"))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[128]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[127])))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--limit-error-contexts"))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[130]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[52])))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[131])))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which disables tags."))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[133]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[134])))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--num-tag-bits 0"))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[137]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[136])))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Using"))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[139]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[138])))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[140])))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option is either unspecified or invalid."))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[142]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[141])))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--num-tag-bits"))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[144]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[143])))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: the value of the"))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[146]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[145])))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "requires a parallel grade."))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[148]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "grade component"))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[150]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[149])))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "threadscope"))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[152]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[151])))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[154]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[153])))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Use a low-level C grade without trailing."))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[156]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "supports parallel conjunctions."))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[158]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[157])))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option requires a grade that"))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[160]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[159])))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--implicit-parallelism"))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[162]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[161])))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[154]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[163])))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--feedback-file"))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[165]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option requires the use of"))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[167]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[166])))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[162]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[168])))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[154]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[169])))
  },
  /* row 171 */
  {
    ((MR_Box) ((MR_String) "shared")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 172 */
  {
    ((MR_Box) ((MR_String) "static")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[171])))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[172])))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--make"))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[174]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[52])))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option is incompatible with the"))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[176]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[175])))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--transitive-intermodule-optimization"))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[178]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[177])))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[154]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[179])))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--intermodule-analysis"))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[181]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[52])))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[176]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[182])))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--intermodule-optimization"))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[184]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[183])))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[154]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[185])))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--extra-initialization-functions"))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[187]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[52])))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[176]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[188])))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--generate-standalone-interface"))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[190]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[189])))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[154]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[191])))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "at once."))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[193]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "You cannot use both forms of minimal model tabling"))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[195]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[194])))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "high level code."))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[197]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Minimal model tabling is incompatible with"))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[199]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[198])))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "trailing."))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[201]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[199]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[202])))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Deep profiling is incompatible with"))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[204]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[198])))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Cannot record term size as both words and cells."))
  },
  /* row 207 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[206]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Term size profiling is incompatible with"))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[208]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[198])))
  },
  /* row 210 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Debugging is available only in low level C grades."))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[210]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "--put-nondet-env-on-heap"))
  },
  /* row 213 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[212]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])))
  },
  /* row 214 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[126]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[213])))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "--gc accurate"))
  },
  /* row 216 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[215]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[214])))
  },
  /* row 217 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 218 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Invalid argument"))
  },
  /* row 219 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The specified trace level"))
  },
  /* row 220 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Invalid arguments"))
  },
  /* row 221 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[220]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 222 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "automatic"))
  },
  /* row 223 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ".exe"))
  },
  /* row 224 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "shared"))
  },
  /* row 225 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: cannot set the value of"))
  },
  /* row 226 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--arg-pack-bits"))
  },
  /* row 227 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to value higher than the value of"))
  },
  /* row 228 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--bits-per-word"))
  },
  /* row 229 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 230 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Reducing the effective value of"))
  },
  /* row 231 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to the maximum allowable value, which is"))
  },
  /* row 232 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 233 */
  {
    ((MR_Box) ((MR_String) "c")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 234 */
  {
    ((MR_Box) ((MR_String) "csharp")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 235 */
  {
    ((MR_Box) ((MR_String) "java")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_2[6][5] = {
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
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
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
};

static /* final */ const MR_Box libs__handle_options_scalar_common_3[11][3] = {
  /* row 0 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[0])),
    ((MR_Box) (libs__handle_options__handle_given_options_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[1])),
    ((MR_Box) (libs__handle_options__handle_given_options_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[2])),
    ((MR_Box) (libs__handle_options__handle_given_options_7_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_4[0])),
    ((MR_Box) (libs__handle_options__handle_given_options_7_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[0])),
    ((MR_Box) (libs__handle_options__separate_option_args_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[1])),
    ((MR_Box) (libs__handle_options__separate_option_args_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[2])),
    ((MR_Box) (libs__handle_options__separate_option_args_5_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_4[0])),
    ((MR_Box) (libs__handle_options__separate_option_args_5_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[3])),
    ((MR_Box) (libs__handle_options__convert_option_table_result_to_globals_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[4])),
    ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[4])),
    ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_11)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_4[2][7] = {
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_5[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_3[0])),
    ((MR_Box) (&libs__handle_options_scalar_common_3[1])),
    ((MR_Box) (&libs__handle_options_scalar_common_3[2])),
    ((MR_Box) (&libs__handle_options_scalar_common_3[3]))
  },
  /* row 1 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_3[4])),
    ((MR_Box) (&libs__handle_options_scalar_common_3[5])),
    ((MR_Box) (&libs__handle_options_scalar_common_3[6])),
    ((MR_Box) (&libs__handle_options_scalar_common_3[7]))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_6[9][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 32))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 999999))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 13))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 14))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_7[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__handle_options____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};


static /* final */ const struct libs__handle_options__vector_common_type_8_0_s libs__handle_options_vector_common_8[20] = {
  /* row 0 */   {     (MR_String) "abcdEfgilmnprstuvzBCDIMPRSTUZ" },
  /* row 1 */   {     (MR_String) "abcdEfgilmnprstuvzBCMPTZ" },
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
#line 2453 "handle_options.m"
MR_Word libs__handle_options__mutable_variable_already_printed_usage;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__handle_options__mutable_variable_already_printed_usage_lock;
#endif

#line 2453 "handle_options.m"
void 
libs__handle_options__user_init_pred_0(void)
#line 2453 "handle_options.m"
{
#line 2453 "handle_options.m"
	libs__handle_options__initialise_mutable_already_printed_usage_0_p_0();
}


#line 2251 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 2260 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__getopt_io__pti_maybe_option_table_1__plain_libs__options__type_ctor_info_option_0 = {
  &mercury__getopt_io__getopt_io__type_ctor_info_maybe_option_table_1,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0
  }
};

#line 2268 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct1 libs__handle_options____vpti_pred_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2277 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct2 libs__handle_options____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2122 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2122__1_2_f_0(
#line 2122 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_178,
#line 2122 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1653)
#line 2122 "handle_options.m"
{
#line 2122 "handle_options.m"
  {
#line 2122 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2122 "handle_options.m"
    MR_String libs__handle_options__LambdaHeadVar__2_1654;
#line 2122 "handle_options.m"
    MR_String libs__handle_options__V_1655_1655;
#line 2122 "handle_options.m"
    MR_String libs__handle_options__V_1656_1656;
#line 2123 "handle_options.m"
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_178, (MR_Integer) 1)));
#line 2123 "handle_options.m"
    MR_Box libs__handle_options__conv1_V_1656_1656;

#line 2123 "handle_options.m"
    {
#line 2123 "handle_options.m"
      libs__handle_options__conv1_V_1656_1656 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_178), ((MR_Box) (libs__handle_options__LambdaHeadVar__1_1653)));
    }
#line 2123 "handle_options.m"
    libs__handle_options__V_1656_1656 = ((MR_String) libs__handle_options__conv1_V_1656_1656);
#line 2123 "handle_options.m"
    {
#line 2123 "handle_options.m"
      libs__handle_options__V_1655_1655 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1656_1656, (MR_String) "Mercury");
    }
#line 2123 "handle_options.m"
    {
#line 2123 "handle_options.m"
      libs__handle_options__LambdaHeadVar__2_1654 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1655_1655, (MR_String) "hrls");
    }
#line 2122 "handle_options.m"
    return libs__handle_options__LambdaHeadVar__2_1654;
#line 2122 "handle_options.m"
  }
#line 2122 "handle_options.m"
}

#line 2120 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2120__1_2_f_0(
#line 2120 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_178,
#line 2120 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1647)
#line 2120 "handle_options.m"
{
#line 2120 "handle_options.m"
  {
#line 2120 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2120 "handle_options.m"
    MR_String libs__handle_options__LambdaHeadVar__2_1648;
#line 2120 "handle_options.m"
    MR_String libs__handle_options__V_1649_1649;
#line 2120 "handle_options.m"
    MR_String libs__handle_options__V_1650_1650;
#line 2121 "handle_options.m"
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_178, (MR_Integer) 1)));
#line 2121 "handle_options.m"
    MR_Box libs__handle_options__conv1_V_1650_1650;

#line 2121 "handle_options.m"
    {
#line 2121 "handle_options.m"
      libs__handle_options__conv1_V_1650_1650 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_178), ((MR_Box) (libs__handle_options__LambdaHeadVar__1_1647)));
    }
#line 2121 "handle_options.m"
    libs__handle_options__V_1650_1650 = ((MR_String) libs__handle_options__conv1_V_1650_1650);
#line 2121 "handle_options.m"
    {
#line 2121 "handle_options.m"
      libs__handle_options__V_1649_1649 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1650_1650, (MR_String) "Mercury");
    }
#line 2121 "handle_options.m"
    {
#line 2121 "handle_options.m"
      libs__handle_options__LambdaHeadVar__2_1648 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1649_1649, (MR_String) "mihs");
    }
#line 2120 "handle_options.m"
    return libs__handle_options__LambdaHeadVar__2_1648;
#line 2120 "handle_options.m"
  }
#line 2120 "handle_options.m"
}

#line 2129 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2129__1_1_f_0(
#line 2129 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1642)
#line 2129 "handle_options.m"
{
#line 2129 "handle_options.m"
  {
#line 2129 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2129 "handle_options.m"
    MR_String libs__handle_options__LambdaHeadVar__2_1643;
#line 2129 "handle_options.m"
    MR_String libs__handle_options__V_1644_1644;

#line 2129 "handle_options.m"
    {
#line 2129 "handle_options.m"
      libs__handle_options__V_1644_1644 = mercury__dir__f_slash_2_f_0(libs__handle_options__LambdaHeadVar__1_1642, (MR_String) "Mercury");
    }
#line 2129 "handle_options.m"
    {
#line 2129 "handle_options.m"
      libs__handle_options__LambdaHeadVar__2_1643 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1644_1644, (MR_String) "hrls");
    }
#line 2129 "handle_options.m"
    return libs__handle_options__LambdaHeadVar__2_1643;
#line 2129 "handle_options.m"
  }
#line 2129 "handle_options.m"
}

#line 2128 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2128__1_1_f_0(
#line 2128 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1637)
#line 2128 "handle_options.m"
{
#line 2128 "handle_options.m"
  {
#line 2128 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2128 "handle_options.m"
    MR_String libs__handle_options__LambdaHeadVar__2_1638;
#line 2128 "handle_options.m"
    MR_String libs__handle_options__V_1639_1639;

#line 2128 "handle_options.m"
    {
#line 2128 "handle_options.m"
      libs__handle_options__V_1639_1639 = mercury__dir__f_slash_2_f_0(libs__handle_options__LambdaHeadVar__1_1637, (MR_String) "Mercury");
    }
#line 2128 "handle_options.m"
    {
#line 2128 "handle_options.m"
      libs__handle_options__LambdaHeadVar__2_1638 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1639_1639, (MR_String) "mihs");
    }
#line 2128 "handle_options.m"
    return libs__handle_options__LambdaHeadVar__2_1638;
#line 2128 "handle_options.m"
  }
#line 2128 "handle_options.m"
}

#line 2098 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2098__1_2_f_0(
#line 2098 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_178,
#line 2098 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1624)
#line 2098 "handle_options.m"
{
#line 2098 "handle_options.m"
  {
#line 2098 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2098 "handle_options.m"
    MR_String libs__handle_options__LambdaHeadVar__2_1625;
#line 2098 "handle_options.m"
    MR_String libs__handle_options__V_1626_1626;
#line 2098 "handle_options.m"
    MR_String libs__handle_options__V_1627_1627;
#line 2099 "handle_options.m"
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_178, (MR_Integer) 1)));
#line 2099 "handle_options.m"
    MR_Box libs__handle_options__conv1_V_1627_1627;

#line 2099 "handle_options.m"
    {
#line 2099 "handle_options.m"
      libs__handle_options__conv1_V_1627_1627 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_178), ((MR_Box) (libs__handle_options__LambdaHeadVar__1_1624)));
    }
#line 2099 "handle_options.m"
    libs__handle_options__V_1627_1627 = ((MR_String) libs__handle_options__conv1_V_1627_1627);
#line 2099 "handle_options.m"
    {
#line 2099 "handle_options.m"
      libs__handle_options__V_1626_1626 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1627_1627, (MR_String) "Mercury");
    }
#line 2099 "handle_options.m"
    {
#line 2099 "handle_options.m"
      libs__handle_options__LambdaHeadVar__2_1625 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1626_1626, (MR_String) "inits");
    }
#line 2098 "handle_options.m"
    return libs__handle_options__LambdaHeadVar__2_1625;
#line 2098 "handle_options.m"
  }
#line 2098 "handle_options.m"
}

#line 2094 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2094__1_2_f_0(
#line 2094 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_178,
#line 2094 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1618)
#line 2094 "handle_options.m"
{
#line 2094 "handle_options.m"
  {
#line 2094 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2094 "handle_options.m"
    MR_String libs__handle_options__LambdaHeadVar__2_1619;
#line 2094 "handle_options.m"
    MR_String libs__handle_options__V_1620_1620;
#line 2094 "handle_options.m"
    MR_String libs__handle_options__V_1621_1621;
#line 2094 "handle_options.m"
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_178, (MR_Integer) 1)));
#line 2094 "handle_options.m"
    MR_Box libs__handle_options__conv1_V_1621_1621;

#line 2094 "handle_options.m"
    {
#line 2094 "handle_options.m"
      libs__handle_options__conv1_V_1621_1621 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_178), ((MR_Box) (libs__handle_options__LambdaHeadVar__1_1618)));
    }
#line 2094 "handle_options.m"
    libs__handle_options__V_1621_1621 = ((MR_String) libs__handle_options__conv1_V_1621_1621);
#line 2094 "handle_options.m"
    {
#line 2094 "handle_options.m"
      libs__handle_options__V_1620_1620 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1621_1621, (MR_String) "Mercury");
    }
#line 2094 "handle_options.m"
    {
#line 2094 "handle_options.m"
      libs__handle_options__LambdaHeadVar__2_1619 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1620_1620, (MR_String) "lib");
    }
#line 2094 "handle_options.m"
    return libs__handle_options__LambdaHeadVar__2_1619;
#line 2094 "handle_options.m"
  }
#line 2094 "handle_options.m"
}

#line 2076 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2076__2_2_p_0(
#line 2076 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1611,
#line 2076 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1757)
#line 2076 "handle_options.m"
{
#line 2076 "handle_options.m"
  {
#line 2076 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2076 "handle_options.m"
    {
#line 2076 "handle_options.m"
      libs__handle_options__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__HeadVar__1_1611, ((MR_Box) (libs__handle_options__HeadVar__2_1757)));
    }
#line 2076 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2076 "handle_options.m"
  }
#line 2076 "handle_options.m"
}

#line 2076 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2076__1_2_p_0(
#line 2076 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1612,
#line 2076 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1759)
#line 2076 "handle_options.m"
{
#line 2076 "handle_options.m"
  {
#line 2076 "handle_options.m"
    MR_bool libs__handle_options__succeeded = (strcmp(libs__handle_options__HeadVar__1_1612, libs__handle_options__HeadVar__2_1759) == 0);

#line 2076 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2076 "handle_options.m"
  }
#line 2076 "handle_options.m"
}

#line 2058 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2058__1_3_f_0(
#line 2058 "handle_options.m"
  MR_String libs__handle_options__TargetArch_145,
#line 2058 "handle_options.m"
  MR_String libs__handle_options__GradeString_158,
#line 2058 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1599)
#line 2058 "handle_options.m"
{
#line 2058 "handle_options.m"
  {
#line 2058 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2058 "handle_options.m"
    MR_String libs__handle_options__LambdaHeadVar__2_1600;
#line 2058 "handle_options.m"
    MR_String libs__handle_options__V_1601_1601;
#line 2058 "handle_options.m"
    MR_String libs__handle_options__V_1602_1602;

#line 2058 "handle_options.m"
    {
#line 2058 "handle_options.m"
      libs__handle_options__V_1602_1602 = mercury__dir__f_slash_2_f_0(libs__handle_options__LambdaHeadVar__1_1599, (MR_String) "Mercury");
    }
#line 2058 "handle_options.m"
    {
#line 2058 "handle_options.m"
      libs__handle_options__V_1601_1601 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1602_1602, libs__handle_options__GradeString_158);
    }
#line 2058 "handle_options.m"
    {
#line 2058 "handle_options.m"
      libs__handle_options__LambdaHeadVar__2_1600 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1601_1601, libs__handle_options__TargetArch_145);
    }
#line 2058 "handle_options.m"
    return libs__handle_options__LambdaHeadVar__2_1600;
#line 2058 "handle_options.m"
  }
#line 2058 "handle_options.m"
}

#line 2022 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2022__1_2_f_0(
#line 2022 "handle_options.m"
  MR_String libs__handle_options__GradeString_158,
#line 2022 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1580)
#line 2022 "handle_options.m"
{
#line 2022 "handle_options.m"
  {
#line 2022 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2022 "handle_options.m"
    MR_String libs__handle_options__LambdaHeadVar__2_1581;
#line 2022 "handle_options.m"
    MR_String libs__handle_options__V_1582_1582;

#line 2024 "handle_options.m"
    {
#line 2024 "handle_options.m"
      libs__handle_options__V_1582_1582 = mercury__dir__f_slash_2_f_0(libs__handle_options__LambdaHeadVar__1_1580, (MR_String) "modules");
    }
#line 2024 "handle_options.m"
    {
#line 2024 "handle_options.m"
      libs__handle_options__LambdaHeadVar__2_1581 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1582_1582, libs__handle_options__GradeString_158);
    }
#line 2022 "handle_options.m"
    return libs__handle_options__LambdaHeadVar__2_1581;
#line 2022 "handle_options.m"
  }
#line 2022 "handle_options.m"
}

#line 2012 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2012__1_2_f_0(
#line 2012 "handle_options.m"
  MR_String libs__handle_options__GradeString_158,
#line 2012 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1570)
#line 2012 "handle_options.m"
{
#line 2012 "handle_options.m"
  {
#line 2012 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2012 "handle_options.m"
    MR_String libs__handle_options__LambdaHeadVar__2_1571;
#line 2012 "handle_options.m"
    MR_String libs__handle_options__V_1572_1572;

#line 2015 "handle_options.m"
    {
#line 2015 "handle_options.m"
      libs__handle_options__V_1572_1572 = mercury__dir__make_path_name_2_f_0((MR_String) "ints", libs__handle_options__GradeString_158);
    }
#line 2014 "handle_options.m"
    {
#line 2014 "handle_options.m"
      libs__handle_options__LambdaHeadVar__2_1571 = mercury__dir__make_path_name_2_f_0(libs__handle_options__LambdaHeadVar__1_1570, libs__handle_options__V_1572_1572);
    }
#line 2012 "handle_options.m"
    return libs__handle_options__LambdaHeadVar__2_1571;
#line 2012 "handle_options.m"
  }
#line 2012 "handle_options.m"
}

#line 1999 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1999__1_2_f_0(
#line 1999 "handle_options.m"
  MR_String libs__handle_options__GradeString_158,
#line 1999 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1553)
#line 1999 "handle_options.m"
{
#line 1999 "handle_options.m"
  {
#line 1999 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 1999 "handle_options.m"
    MR_String libs__handle_options__LambdaHeadVar__2_1554;
#line 1999 "handle_options.m"
    MR_String libs__handle_options__V_1555_1555;
#line 1999 "handle_options.m"
    MR_String libs__handle_options__V_1556_1556;

#line 2001 "handle_options.m"
    {
#line 2001 "handle_options.m"
      libs__handle_options__V_1556_1556 = mercury__dir__f_slash_2_f_0(libs__handle_options__LambdaHeadVar__1_1553, (MR_String) "lib");
    }
#line 2001 "handle_options.m"
    {
#line 2001 "handle_options.m"
      libs__handle_options__V_1555_1555 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1556_1556, libs__handle_options__GradeString_158);
    }
#line 2001 "handle_options.m"
    {
#line 2001 "handle_options.m"
      libs__handle_options__LambdaHeadVar__2_1554 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1555_1555, (MR_String) "inc");
    }
#line 1999 "handle_options.m"
    return libs__handle_options__LambdaHeadVar__2_1554;
#line 1999 "handle_options.m"
  }
#line 1999 "handle_options.m"
}

#line 1984 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1984__1_2_f_0(
#line 1984 "handle_options.m"
  MR_String libs__handle_options__GradeString_158,
#line 1984 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1538)
#line 1984 "handle_options.m"
{
#line 1984 "handle_options.m"
  {
#line 1984 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 1984 "handle_options.m"
    MR_String libs__handle_options__LambdaHeadVar__2_1539;
#line 1984 "handle_options.m"
    MR_String libs__handle_options__V_1540_1540;

#line 1986 "handle_options.m"
    {
#line 1986 "handle_options.m"
      libs__handle_options__V_1540_1540 = mercury__dir__f_slash_2_f_0(libs__handle_options__LambdaHeadVar__1_1538, (MR_String) "lib");
    }
#line 1986 "handle_options.m"
    {
#line 1986 "handle_options.m"
      libs__handle_options__LambdaHeadVar__2_1539 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1540_1540, libs__handle_options__GradeString_158);
    }
#line 1984 "handle_options.m"
    return libs__handle_options__LambdaHeadVar__2_1539;
#line 1984 "handle_options.m"
  }
#line 1984 "handle_options.m"
}

#line 2453 "handle_options.m"
static void MR_CALL 
libs__handle_options__unsafe_set_already_printed_usage_1_p_0(
#line 2453 "handle_options.m"
  MR_Word libs__handle_options__X_1)
#line 2453 "handle_options.m"
{
#line 2453 "handle_options.m"
  {
#line 2453 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2453 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__unsafe_set_already_printed_usage_1_p_0

	MR_Word X;

	X =  libs__handle_options__X_1 ;
		{
#line 2453 "handle_options.m"
libs__handle_options__mutable_variable_already_printed_usage = X;

#line 2806 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2453 "handle_options.m"
}
#line 2453 "handle_options.m"
  }
#line 2453 "handle_options.m"
}

#line 2453 "handle_options.m"
static void MR_CALL 
libs__handle_options__unsafe_get_already_printed_usage_1_p_0(
#line 2453 "handle_options.m"
  MR_Word * libs__handle_options__X_1)
#line 2453 "handle_options.m"
{
#line 2453 "handle_options.m"
  {
#line 2453 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2453 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__unsafe_get_already_printed_usage_1_p_0

	MR_Word X;

		{
#line 2453 "handle_options.m"
X = libs__handle_options__mutable_variable_already_printed_usage;

#line 2839 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
	 *libs__handle_options__X_1  = X;
#line 2453 "handle_options.m"
}
#line 2453 "handle_options.m"
  }
#line 2453 "handle_options.m"
}

#line 2453 "handle_options.m"
static void MR_CALL 
libs__handle_options__unlock_already_printed_usage_0_p_0(void)
#line 2453 "handle_options.m"
{
#line 2453 "handle_options.m"
  {
#line 2453 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2453 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__unlock_already_printed_usage_0_p_0


		{
#line 2453 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 2873 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2453 "handle_options.m"
}
#line 2453 "handle_options.m"
  }
#line 2453 "handle_options.m"
}

#line 2453 "handle_options.m"
static void MR_CALL 
libs__handle_options__lock_already_printed_usage_0_p_0(void)
#line 2453 "handle_options.m"
{
#line 2453 "handle_options.m"
  {
#line 2453 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2453 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__lock_already_printed_usage_0_p_0


		{
#line 2453 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 2906 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2453 "handle_options.m"
}
#line 2453 "handle_options.m"
  }
#line 2453 "handle_options.m"
}

#line 2453 "handle_options.m"
static void MR_CALL 
libs__handle_options__initialise_mutable_already_printed_usage_0_p_0(void)
#line 2453 "handle_options.m"
{
#line 2453 "handle_options.m"
  {
#line 2453 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2453 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0


		{
#line 2453 "handle_options.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__handle_options__mutable_variable_already_printed_usage_lock, MR_MUTEX_ATTR);
#endif

#line 2938 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2453 "handle_options.m"
}
#line 2453 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0


		{
#line 2453 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 2956 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2453 "handle_options.m"
}
#line 2453 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 2453 "handle_options.m"
libs__handle_options__mutable_variable_already_printed_usage = X;

#line 2973 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2453 "handle_options.m"
}
#line 2453 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0


		{
#line 2453 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 2991 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2453 "handle_options.m"
}
#line 2453 "handle_options.m"
  }
#line 2453 "handle_options.m"
}

#line 2453 "handle_options.m"
static void MR_CALL 
libs__handle_options__pre_initialise_mutable_already_printed_usage_0_p_0(void)
#line 2453 "handle_options.m"
{
#line 2453 "handle_options.m"
  {
#line 2453 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2453 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__pre_initialise_mutable_already_printed_usage_0_p_0


		{
#line 2453 "handle_options.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__handle_options__mutable_variable_already_printed_usage_lock, MR_MUTEX_ATTR);
#endif

#line 3023 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2453 "handle_options.m"
}
#line 2453 "handle_options.m"
  }
#line 2453 "handle_options.m"
}

#line 2565 "handle_options.m"
static void MR_CALL 
libs__handle_options__raw_lookup_accumulating_option_3_p_0(
#line 2565 "handle_options.m"
  MR_Word libs__handle_options__OptionTable_4,
#line 2565 "handle_options.m"
  MR_Word libs__handle_options__Option_5,
#line 2565 "handle_options.m"
  MR_Word * libs__handle_options__AccumulatingValue_6)
#line 2565 "handle_options.m"
{
#line 2568 "handle_options.m"
  {
#line 2568 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2568 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_14_14 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
#line 2568 "handle_options.m"
    MR_Word libs__handle_options__OptionValue_7;
#line 2569 "handle_options.m"
    MR_Box libs__handle_options__conv0_OptionValue_7;
#line 2570 "handle_options.m"
    MR_Word libs__handle_options__AccumulatingValuePrime_8;

#line 2569 "handle_options.m"
    {
#line 2569 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_14_14, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__handle_options__OptionTable_4, ((MR_Box) (libs__handle_options__Option_5)), &libs__handle_options__conv0_OptionValue_7);
    }
#line 2569 "handle_options.m"
    libs__handle_options__OptionValue_7 = ((MR_Word) libs__handle_options__conv0_OptionValue_7);
#line 2570 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__OptionValue_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__OptionValue_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 2570 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2570 "handle_options.m"
      {
#line 2570 "handle_options.m"
        libs__handle_options__AccumulatingValuePrime_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__OptionValue_7, (MR_Integer) 1)));
#line 2571 "handle_options.m"
        *libs__handle_options__AccumulatingValue_6 = libs__handle_options__AccumulatingValuePrime_8;
#line 2570 "handle_options.m"
      }
#line 2570 "handle_options.m"
    else
#line 2573 "handle_options.m"
      {
#line 2573 "handle_options.m"
        MR_String libs__handle_options__OptionStr_9;
#line 2573 "handle_options.m"
        MR_String libs__handle_options__V_12_12;

#line 2573 "handle_options.m"
        {
#line 2573 "handle_options.m"
          libs__handle_options__OptionStr_9 = mercury__string__string_1_f_0(libs__handle_options__TypeCtorInfo_14_14, ((MR_Box) (libs__handle_options__Option_5)));
        }
#line 2574 "handle_options.m"
        {
#line 2574 "handle_options.m"
          libs__handle_options__V_12_12 = mercury__string__f_43_43_2_f_0(libs__handle_options__OptionStr_9, (MR_String) "is not accumulating");
        }
#line 2574 "handle_options.m"
        {
#line 2574 "handle_options.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.handle_options", (MR_String) "predicate \140libs.handle_options.raw_lookup_accumulating_option\'/3", libs__handle_options__V_12_12);
#line 2574 "handle_options.m"
          return;
        }
#line 2573 "handle_options.m"
      }
#line 2568 "handle_options.m"
  }
#line 2565 "handle_options.m"
}

#line 2553 "handle_options.m"
static void MR_CALL 
libs__handle_options__raw_lookup_string_option_3_p_0(
#line 2553 "handle_options.m"
  MR_Word libs__handle_options__OptionTable_4,
#line 2553 "handle_options.m"
  MR_Word libs__handle_options__Option_5,
#line 2553 "handle_options.m"
  MR_String * libs__handle_options__StringValue_6)
#line 2553 "handle_options.m"
{
#line 2556 "handle_options.m"
  {
#line 2556 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2556 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_14_14 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
#line 2556 "handle_options.m"
    MR_Word libs__handle_options__OptionValue_7;
#line 2557 "handle_options.m"
    MR_Box libs__handle_options__conv0_OptionValue_7;
#line 2558 "handle_options.m"
    MR_String libs__handle_options__StringValuePrime_8;

#line 2557 "handle_options.m"
    {
#line 2557 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_14_14, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__handle_options__OptionTable_4, ((MR_Box) (libs__handle_options__Option_5)), &libs__handle_options__conv0_OptionValue_7);
    }
#line 2557 "handle_options.m"
    libs__handle_options__OptionValue_7 = ((MR_Word) libs__handle_options__conv0_OptionValue_7);
#line 2558 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__OptionValue_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__OptionValue_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 2558 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2558 "handle_options.m"
      {
#line 2558 "handle_options.m"
        libs__handle_options__StringValuePrime_8 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__OptionValue_7, (MR_Integer) 1)));
#line 2559 "handle_options.m"
        *libs__handle_options__StringValue_6 = libs__handle_options__StringValuePrime_8;
#line 2558 "handle_options.m"
      }
#line 2558 "handle_options.m"
    else
#line 2561 "handle_options.m"
      {
#line 2561 "handle_options.m"
        MR_String libs__handle_options__OptionStr_9;
#line 2561 "handle_options.m"
        MR_String libs__handle_options__V_12_12;

#line 2561 "handle_options.m"
        {
#line 2561 "handle_options.m"
          libs__handle_options__OptionStr_9 = mercury__string__string_1_f_0(libs__handle_options__TypeCtorInfo_14_14, ((MR_Box) (libs__handle_options__Option_5)));
        }
#line 2562 "handle_options.m"
        {
#line 2562 "handle_options.m"
          libs__handle_options__V_12_12 = mercury__string__f_43_43_2_f_0(libs__handle_options__OptionStr_9, (MR_String) "is not a string");
        }
#line 2562 "handle_options.m"
        {
#line 2562 "handle_options.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.handle_options", (MR_String) "predicate \140libs.handle_options.raw_lookup_string_option\'/3", libs__handle_options__V_12_12);
#line 2562 "handle_options.m"
          return;
        }
#line 2561 "handle_options.m"
      }
#line 2556 "handle_options.m"
  }
#line 2553 "handle_options.m"
}

#line 2542 "handle_options.m"
static void MR_CALL 
libs__handle_options__raw_lookup_int_option_3_p_0(
#line 2542 "handle_options.m"
  MR_Word libs__handle_options__OptionTable_4,
#line 2542 "handle_options.m"
  MR_Word libs__handle_options__Option_5,
#line 2542 "handle_options.m"
  MR_Integer * libs__handle_options__IntValue_6)
#line 2542 "handle_options.m"
{
#line 2544 "handle_options.m"
  {
#line 2544 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2544 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_14_14 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
#line 2544 "handle_options.m"
    MR_Word libs__handle_options__OptionValue_7;
#line 2545 "handle_options.m"
    MR_Box libs__handle_options__conv0_OptionValue_7;
#line 2546 "handle_options.m"
    MR_Integer libs__handle_options__IntValuePrime_8;

#line 2545 "handle_options.m"
    {
#line 2545 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_14_14, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__handle_options__OptionTable_4, ((MR_Box) (libs__handle_options__Option_5)), &libs__handle_options__conv0_OptionValue_7);
    }
#line 2545 "handle_options.m"
    libs__handle_options__OptionValue_7 = ((MR_Word) libs__handle_options__conv0_OptionValue_7);
#line 2546 "handle_options.m"
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__OptionValue_7)) == (MR_mktag((MR_Integer) 2)));
#line 2546 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2546 "handle_options.m"
      {
#line 2546 "handle_options.m"
        libs__handle_options__IntValuePrime_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), libs__handle_options__OptionValue_7, (MR_Integer) 0)));
#line 2547 "handle_options.m"
        *libs__handle_options__IntValue_6 = libs__handle_options__IntValuePrime_8;
#line 2546 "handle_options.m"
      }
#line 2546 "handle_options.m"
    else
#line 2549 "handle_options.m"
      {
#line 2549 "handle_options.m"
        MR_String libs__handle_options__OptionStr_9;
#line 2549 "handle_options.m"
        MR_String libs__handle_options__V_12_12;

#line 2549 "handle_options.m"
        {
#line 2549 "handle_options.m"
          libs__handle_options__OptionStr_9 = mercury__string__string_1_f_0(libs__handle_options__TypeCtorInfo_14_14, ((MR_Box) (libs__handle_options__Option_5)));
        }
#line 2550 "handle_options.m"
        {
#line 2550 "handle_options.m"
          libs__handle_options__V_12_12 = mercury__string__f_43_43_2_f_0(libs__handle_options__OptionStr_9, (MR_String) "is not an int");
        }
#line 2550 "handle_options.m"
        {
#line 2550 "handle_options.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.handle_options", (MR_String) "predicate \140libs.handle_options.raw_lookup_int_option\'/3", libs__handle_options__V_12_12);
#line 2550 "handle_options.m"
          return;
        }
#line 2549 "handle_options.m"
      }
#line 2544 "handle_options.m"
  }
#line 2542 "handle_options.m"
}

#line 2531 "handle_options.m"
static void MR_CALL 
libs__handle_options__raw_lookup_bool_option_3_p_0(
#line 2531 "handle_options.m"
  MR_Word libs__handle_options__OptionTable_4,
#line 2531 "handle_options.m"
  MR_Word libs__handle_options__Option_5,
#line 2531 "handle_options.m"
  MR_Word * libs__handle_options__BoolValue_6)
#line 2531 "handle_options.m"
{
#line 2533 "handle_options.m"
  {
#line 2533 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2533 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_14_14 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
#line 2533 "handle_options.m"
    MR_Word libs__handle_options__OptionValue_7;
#line 2534 "handle_options.m"
    MR_Box libs__handle_options__conv0_OptionValue_7;
#line 2535 "handle_options.m"
    MR_Word libs__handle_options__BoolValuePrime_8;

#line 2534 "handle_options.m"
    {
#line 2534 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_14_14, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__handle_options__OptionTable_4, ((MR_Box) (libs__handle_options__Option_5)), &libs__handle_options__conv0_OptionValue_7);
    }
#line 2534 "handle_options.m"
    libs__handle_options__OptionValue_7 = ((MR_Word) libs__handle_options__conv0_OptionValue_7);
#line 2535 "handle_options.m"
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__OptionValue_7)) == (MR_mktag((MR_Integer) 1)));
#line 2535 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2535 "handle_options.m"
      {
#line 2535 "handle_options.m"
        libs__handle_options__BoolValuePrime_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__OptionValue_7, (MR_Integer) 0)));
#line 2536 "handle_options.m"
        *libs__handle_options__BoolValue_6 = libs__handle_options__BoolValuePrime_8;
#line 2535 "handle_options.m"
      }
#line 2535 "handle_options.m"
    else
#line 2538 "handle_options.m"
      {
#line 2538 "handle_options.m"
        MR_String libs__handle_options__OptionStr_9;
#line 2538 "handle_options.m"
        MR_String libs__handle_options__V_12_12;

#line 2538 "handle_options.m"
        {
#line 2538 "handle_options.m"
          libs__handle_options__OptionStr_9 = mercury__string__string_1_f_0(libs__handle_options__TypeCtorInfo_14_14, ((MR_Box) (libs__handle_options__Option_5)));
        }
#line 2539 "handle_options.m"
        {
#line 2539 "handle_options.m"
          libs__handle_options__V_12_12 = mercury__string__f_43_43_2_f_0(libs__handle_options__OptionStr_9, (MR_String) "is not a bool");
        }
#line 2539 "handle_options.m"
        {
#line 2539 "handle_options.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.handle_options", (MR_String) "predicate \140libs.handle_options.raw_lookup_bool_option\'/3", libs__handle_options__V_12_12);
#line 2539 "handle_options.m"
          return;
        }
#line 2538 "handle_options.m"
      }
#line 2533 "handle_options.m"
  }
#line 2531 "handle_options.m"
}

#line 2504 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_dump_alias_2_p_0(
#line 2504 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1,
#line 2504 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_2)
#line 2504 "handle_options.m"
{
#line 2507 "handle_options.m"
  {
#line 2507 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2507 "handle_options.m"
    {
#line 2507 "handle_options.m"
      MR_Integer libs__handle_options__case_num_0 = (MR_Integer) -1;

#line 2507 "handle_options.m"
#line 2507 "handle_options.m"
      switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 0)) {
#line 2507 "handle_options.m"
        case (MR_Integer) 65:
#line 2507 "handle_options.m"
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "ALL"))
#line 2507 "handle_options.m"
            libs__handle_options__case_num_0 = (MR_Integer) 0;
#line 2507 "handle_options.m"
          break;
#line 2507 "handle_options.m"
        case (MR_Integer) 97:
#line 2507 "handle_options.m"
          if (((((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) == (MR_Integer) 108)) && (((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) == (MR_Integer) 108))))
#line 2507 "handle_options.m"
#line 2507 "handle_options.m"
            switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 3)) {
#line 2507 "handle_options.m"
              case (MR_Integer) 0:
#line 2507 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 1;
#line 2507 "handle_options.m"
                break;
#line 2507 "handle_options.m"
              case (MR_Integer) 68:
#line 2507 "handle_options.m"
                if (MR_offset_streq(4, libs__handle_options__HeadVar__1_1, (MR_String) "allD"))
#line 2507 "handle_options.m"
                  libs__handle_options__case_num_0 = (MR_Integer) 2;
#line 2507 "handle_options.m"
                break;
#line 2507 "handle_options.m"
            }
#line 2507 "handle_options.m"
          break;
#line 2507 "handle_options.m"
        case (MR_Integer) 99:
#line 2507 "handle_options.m"
#line 2507 "handle_options.m"
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
#line 2507 "handle_options.m"
            case (MR_Integer) 109:
#line 2507 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "cmp"))
#line 2507 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 3;
#line 2507 "handle_options.m"
              break;
#line 2507 "handle_options.m"
            case (MR_Integer) 111:
#line 2507 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "codegen"))
#line 2507 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 4;
#line 2507 "handle_options.m"
              break;
#line 2507 "handle_options.m"
            case (MR_Integer) 116:
#line 2507 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "ctgc"))
#line 2507 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 5;
#line 2507 "handle_options.m"
              break;
#line 2507 "handle_options.m"
          }
#line 2507 "handle_options.m"
          break;
#line 2507 "handle_options.m"
        case (MR_Integer) 100:
#line 2507 "handle_options.m"
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "detism"))
#line 2507 "handle_options.m"
            libs__handle_options__case_num_0 = (MR_Integer) 6;
#line 2507 "handle_options.m"
          break;
#line 2507 "handle_options.m"
        case (MR_Integer) 108:
#line 2507 "handle_options.m"
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "lco"))
#line 2507 "handle_options.m"
            libs__handle_options__case_num_0 = (MR_Integer) 7;
#line 2507 "handle_options.m"
          break;
#line 2507 "handle_options.m"
        case (MR_Integer) 109:
#line 2507 "handle_options.m"
#line 2507 "handle_options.m"
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
#line 2507 "handle_options.m"
            case (MR_Integer) 105:
#line 2507 "handle_options.m"
              if (((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) == (MR_Integer) 110))
#line 2507 "handle_options.m"
#line 2507 "handle_options.m"
                switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 3)) {
#line 2507 "handle_options.m"
                  case (MR_Integer) 0:
#line 2507 "handle_options.m"
                    libs__handle_options__case_num_0 = (MR_Integer) 8;
#line 2507 "handle_options.m"
                    break;
#line 2507 "handle_options.m"
                  case (MR_Integer) 116:
#line 2507 "handle_options.m"
                    if (MR_offset_streq(4, libs__handle_options__HeadVar__1_1, (MR_String) "mintrans"))
#line 2507 "handle_options.m"
                      libs__handle_options__case_num_0 = (MR_Integer) 9;
#line 2507 "handle_options.m"
                    break;
#line 2507 "handle_options.m"
                }
#line 2507 "handle_options.m"
              break;
#line 2507 "handle_options.m"
            case (MR_Integer) 109:
#line 2507 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "mm"))
#line 2507 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 10;
#line 2507 "handle_options.m"
              break;
#line 2507 "handle_options.m"
            case (MR_Integer) 111:
#line 2507 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "most"))
#line 2507 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 11;
#line 2507 "handle_options.m"
              break;
#line 2507 "handle_options.m"
          }
#line 2507 "handle_options.m"
          break;
#line 2507 "handle_options.m"
        case (MR_Integer) 111:
#line 2507 "handle_options.m"
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "osv"))
#line 2507 "handle_options.m"
            libs__handle_options__case_num_0 = (MR_Integer) 12;
#line 2507 "handle_options.m"
          break;
#line 2507 "handle_options.m"
        case (MR_Integer) 112:
#line 2507 "handle_options.m"
#line 2507 "handle_options.m"
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
#line 2507 "handle_options.m"
            case (MR_Integer) 97:
#line 2507 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "paths"))
#line 2507 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 13;
#line 2507 "handle_options.m"
              break;
#line 2507 "handle_options.m"
            case (MR_Integer) 101:
#line 2507 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "petdr"))
#line 2507 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 14;
#line 2507 "handle_options.m"
              break;
#line 2507 "handle_options.m"
            case (MR_Integer) 111:
#line 2507 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "poly"))
#line 2507 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 15;
#line 2507 "handle_options.m"
              break;
#line 2507 "handle_options.m"
          }
#line 2507 "handle_options.m"
          break;
#line 2507 "handle_options.m"
        case (MR_Integer) 115:
#line 2507 "handle_options.m"
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "statevar"))
#line 2507 "handle_options.m"
            libs__handle_options__case_num_0 = (MR_Integer) 16;
#line 2507 "handle_options.m"
          break;
#line 2507 "handle_options.m"
        case (MR_Integer) 116:
#line 2507 "handle_options.m"
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "trans"))
#line 2507 "handle_options.m"
            libs__handle_options__case_num_0 = (MR_Integer) 17;
#line 2507 "handle_options.m"
          break;
#line 2507 "handle_options.m"
        case (MR_Integer) 118:
#line 2507 "handle_options.m"
          if (((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) == (MR_Integer) 97))
#line 2507 "handle_options.m"
#line 2507 "handle_options.m"
            switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) {
#line 2507 "handle_options.m"
              case (MR_Integer) 110:
#line 2507 "handle_options.m"
                if (MR_offset_streq(3, libs__handle_options__HeadVar__1_1, (MR_String) "vanessa"))
#line 2507 "handle_options.m"
                  libs__handle_options__case_num_0 = (MR_Integer) 18;
#line 2507 "handle_options.m"
                break;
#line 2507 "handle_options.m"
              case (MR_Integer) 114:
#line 2507 "handle_options.m"
                if (MR_offset_streq(3, libs__handle_options__HeadVar__1_1, (MR_String) "vars"))
#line 2507 "handle_options.m"
                  libs__handle_options__case_num_0 = (MR_Integer) 19;
#line 2507 "handle_options.m"
                break;
#line 2507 "handle_options.m"
            }
#line 2507 "handle_options.m"
          break;
#line 2507 "handle_options.m"
      }
#line 2507 "handle_options.m"
      if ((libs__handle_options__case_num_0 < (MR_Integer) 0))
#line 2507 "handle_options.m"
        libs__handle_options__succeeded = MR_FALSE;
#line 2507 "handle_options.m"
      else
#line 2507 "handle_options.m"
        {
#line 2507 "handle_options.m"
          /* we found a match; look up the results */
#line 2507 "handle_options.m"
          *libs__handle_options__HeadVar__2_2 = ((&libs__handle_options_vector_common_8[0 + libs__handle_options__case_num_0]))->libs__handle_options__vector_common_type_8_0__vct_8_f_0;
#line 2507 "handle_options.m"
          libs__handle_options__succeeded = MR_TRUE;
#line 2507 "handle_options.m"
        }
#line 2507 "handle_options.m"
    }
#line 2507 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2507 "handle_options.m"
  }
#line 2504 "handle_options.m"
}

#line 2409 "handle_options.m"
static void MR_CALL 
libs__handle_options__disable_smart_recompilation_5_p_0(
#line 2409 "handle_options.m"
  MR_String libs__handle_options__OptionDescr_6,
#line 2409 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2409 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12)
#line 2409 "handle_options.m"
{
#line 2412 "handle_options.m"
  {
#line 2412 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2412 "handle_options.m"
    MR_Word libs__handle_options__WarnSmart_9;

#line 2413 "handle_options.m"
    {
#line 2413 "handle_options.m"
      libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
    }
#line 2414 "handle_options.m"
    {
#line 2414 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 116, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]), libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__STATE_VARIABLE_Globals_12);
    }
#line 2415 "handle_options.m"
    {
#line 2415 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_12, (MR_Integer) 24, &libs__handle_options__WarnSmart_9);
    }
#line 2429 "handle_options.m"
#line 2429 "handle_options.m"
    switch (libs__handle_options__WarnSmart_9) {
#line 2429 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2429 "handle_options.m"
      case (MR_Integer) 0:
#line 2430 "handle_options.m"
        {
#line 2430 "handle_options.m"
        }
#line 2429 "handle_options.m"
        break;
#line 2429 "handle_options.m"
      case (MR_Integer) 1:
#line 2417 "handle_options.m"
        {
#line 2417 "handle_options.m"
          MR_Word libs__handle_options__Halt_10;

#line 2418 "handle_options.m"
          {
#line 2418 "handle_options.m"
            mercury__io__write_string_3_p_0((MR_String) "Warning: smart recompilation does not yet work with ");
          }
#line 2420 "handle_options.m"
          {
#line 2420 "handle_options.m"
            mercury__io__write_string_3_p_0(libs__handle_options__OptionDescr_6);
          }
#line 2421 "handle_options.m"
          {
#line 2421 "handle_options.m"
            mercury__io__write_string_3_p_0((MR_String) ".\n");
          }
#line 2422 "handle_options.m"
          {
#line 2422 "handle_options.m"
            libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_12, (MR_Integer) 2, &libs__handle_options__Halt_10);
          }
#line 2426 "handle_options.m"
#line 2426 "handle_options.m"
          switch (libs__handle_options__Halt_10) {
#line 2426 "handle_options.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 2426 "handle_options.m"
            case (MR_Integer) 0:
#line 2427 "handle_options.m"
              {
#line 2427 "handle_options.m"
              }
#line 2426 "handle_options.m"
              break;
#line 2426 "handle_options.m"
            case (MR_Integer) 1:
#line 2424 "handle_options.m"
              {
#line 2425 "handle_options.m"
                {
#line 2425 "handle_options.m"
                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                }
#line 2424 "handle_options.m"
              }
#line 2426 "handle_options.m"
              break;
#line 2426 "handle_options.m"
          }
#line 2417 "handle_options.m"
        }
#line 2429 "handle_options.m"
        break;
#line 2429 "handle_options.m"
    }
#line 2412 "handle_options.m"
  }
#line 2409 "handle_options.m"
}

#line 2394 "handle_options.m"
static void MR_CALL 
libs__handle_options__maybe_disable_smart_recompilation_8_p_0(
#line 2394 "handle_options.m"
  MR_Word libs__handle_options__Smart_9,
#line 2394 "handle_options.m"
  MR_Word libs__handle_options__ConflictingOption_10,
#line 2394 "handle_options.m"
  MR_Word libs__handle_options__ValueToDisableSmart_11,
#line 2394 "handle_options.m"
  MR_String libs__handle_options__OptionDescr_12,
#line 2394 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_16,
#line 2394 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_17)
#line 2394 "handle_options.m"
{
#line 2398 "handle_options.m"
  {
#line 2398 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2398 "handle_options.m"
    MR_Word libs__handle_options__Value_15;

#line 2399 "handle_options.m"
    {
#line 2399 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_16, libs__handle_options__ConflictingOption_10, &libs__handle_options__Value_15);
    }
#line 2401 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__Smart_9 == (MR_Integer) 1);
#line 2401 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2402 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__Value_15 == libs__handle_options__ValueToDisableSmart_11);
#line 2400 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2412 "handle_options.m"
      {
#line 2412 "handle_options.m"
        MR_Word libs__handle_options__WarnSmart_29;

#line 2413 "handle_options.m"
        {
#line 2413 "handle_options.m"
          libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
        }
#line 2414 "handle_options.m"
        {
#line 2414 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 116, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]), libs__handle_options__STATE_VARIABLE_Globals_0_16, libs__handle_options__STATE_VARIABLE_Globals_17);
        }
#line 2415 "handle_options.m"
        {
#line 2415 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_17, (MR_Integer) 24, &libs__handle_options__WarnSmart_29);
        }
#line 2429 "handle_options.m"
#line 2429 "handle_options.m"
        switch (libs__handle_options__WarnSmart_29) {
#line 2429 "handle_options.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2429 "handle_options.m"
          case (MR_Integer) 0:
#line 2430 "handle_options.m"
            {
#line 2430 "handle_options.m"
            }
#line 2429 "handle_options.m"
            break;
#line 2429 "handle_options.m"
          case (MR_Integer) 1:
#line 2417 "handle_options.m"
            {
#line 2417 "handle_options.m"
              MR_Word libs__handle_options__Halt_30;

#line 2418 "handle_options.m"
              {
#line 2418 "handle_options.m"
                mercury__io__write_string_3_p_0((MR_String) "Warning: smart recompilation does not yet work with ");
              }
#line 2420 "handle_options.m"
              {
#line 2420 "handle_options.m"
                mercury__io__write_string_3_p_0(libs__handle_options__OptionDescr_12);
              }
#line 2421 "handle_options.m"
              {
#line 2421 "handle_options.m"
                mercury__io__write_string_3_p_0((MR_String) ".\n");
              }
#line 2422 "handle_options.m"
              {
#line 2422 "handle_options.m"
                libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_17, (MR_Integer) 2, &libs__handle_options__Halt_30);
              }
#line 2426 "handle_options.m"
#line 2426 "handle_options.m"
              switch (libs__handle_options__Halt_30) {
#line 2426 "handle_options.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 2426 "handle_options.m"
                case (MR_Integer) 0:
#line 2427 "handle_options.m"
                  {
#line 2427 "handle_options.m"
                  }
#line 2426 "handle_options.m"
                  break;
#line 2426 "handle_options.m"
                case (MR_Integer) 1:
#line 2424 "handle_options.m"
                  {
#line 2425 "handle_options.m"
                    {
#line 2425 "handle_options.m"
                      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                    }
#line 2424 "handle_options.m"
                  }
#line 2426 "handle_options.m"
                  break;
#line 2426 "handle_options.m"
              }
#line 2417 "handle_options.m"
            }
#line 2429 "handle_options.m"
            break;
#line 2429 "handle_options.m"
        }
#line 2412 "handle_options.m"
      }
#line 2400 "handle_options.m"
    else
#line 2406 "handle_options.m"
      *libs__handle_options__STATE_VARIABLE_Globals_17 = libs__handle_options__STATE_VARIABLE_Globals_0_16;
#line 2398 "handle_options.m"
  }
#line 2394 "handle_options.m"
}

#line 2374 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_requires_7_p_0(
#line 2374 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_8,
#line 2374 "handle_options.m"
  MR_Word libs__handle_options__RequiredOption_9,
#line 2374 "handle_options.m"
  MR_Word libs__handle_options__RequiredOptionValue_10,
#line 2374 "handle_options.m"
  MR_String libs__handle_options__ErrorMessage_11,
#line 2374 "handle_options.m"
  MR_Word libs__handle_options__Globals_12,
#line 2374 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Specs_0_16,
#line 2374 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Specs_17)
#line 2374 "handle_options.m"
{
#line 2378 "handle_options.m"
  {
#line 2378 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2378 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_14;
#line 2378 "handle_options.m"
    MR_Word libs__handle_options__OptionValue_15;

#line 2379 "handle_options.m"
    {
#line 2379 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__Globals_12, libs__handle_options__SourceOption_8, &libs__handle_options__SourceOptionValue_14);
    }
#line 2380 "handle_options.m"
    {
#line 2380 "handle_options.m"
      libs__globals__lookup_option_3_p_0(libs__handle_options__Globals_12, libs__handle_options__RequiredOption_9, &libs__handle_options__OptionValue_15);
    }
#line 2382 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__SourceOptionValue_14 == (MR_Integer) 1);
#line 2382 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2382 "handle_options.m"
      {
#line 2383 "handle_options.m"
        {
#line 2383 "handle_options.m"
          libs__handle_options__succeeded = mercury__getopt_io____Unify____option_data_0_0(libs__handle_options__OptionValue_15, libs__handle_options__RequiredOptionValue_10);
        }
#line 2383 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 2382 "handle_options.m"
      }
#line 2381 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2385 "handle_options.m"
      {
#line 2385 "handle_options.m"
        MR_Word libs__handle_options__V_19_19;
#line 2385 "handle_options.m"
        MR_Word libs__handle_options__V_21_21;

#line 2385 "handle_options.m"
        {
#line 2385 "handle_options.m"
          libs__handle_options__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2385 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 2385 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_21_21, 1) = ((MR_Box) (libs__handle_options__ErrorMessage_11));
#line 2385 "handle_options.m"
        }
#line 2385 "handle_options.m"
        {
#line 2385 "handle_options.m"
          libs__handle_options__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2385 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_19_19, 0) = ((MR_Box) (libs__handle_options__V_21_21));
#line 2385 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2385 "handle_options.m"
        }
#line 2385 "handle_options.m"
        {
#line 2385 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__V_19_19, libs__handle_options__STATE_VARIABLE_Specs_0_16, libs__handle_options__STATE_VARIABLE_Specs_17);
        }
#line 2385 "handle_options.m"
      }
#line 2381 "handle_options.m"
    else
#line 2381 "handle_options.m"
      *libs__handle_options__STATE_VARIABLE_Specs_17 = libs__handle_options__STATE_VARIABLE_Specs_0_16;
#line 2378 "handle_options.m"
  }
#line 2374 "handle_options.m"
}

#line 2355 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_neg_implies_5_p_0(
#line 2355 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_6,
#line 2355 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOption_7,
#line 2355 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOptionValue_8,
#line 2355 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2355 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12)
#line 2355 "handle_options.m"
{
#line 2359 "handle_options.m"
  {
#line 2359 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2359 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_10;

#line 2360 "handle_options.m"
    {
#line 2360 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__SourceOption_6, &libs__handle_options__SourceOptionValue_10);
    }
#line 2363 "handle_options.m"
#line 2363 "handle_options.m"
    switch (libs__handle_options__SourceOptionValue_10) {
#line 2363 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2363 "handle_options.m"
      case (MR_Integer) 0:
#line 2365 "handle_options.m"
        {
#line 2365 "handle_options.m"
          libs__globals__set_option_4_p_0(libs__handle_options__ImpliedOption_7, libs__handle_options__ImpliedOptionValue_8, libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__STATE_VARIABLE_Globals_12);
        }
#line 2363 "handle_options.m"
        break;
#line 2363 "handle_options.m"
      case (MR_Integer) 1:
#line 2362 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_Globals_12 = libs__handle_options__STATE_VARIABLE_Globals_0_11;
#line 2363 "handle_options.m"
        break;
#line 2363 "handle_options.m"
    }
#line 2359 "handle_options.m"
  }
#line 2355 "handle_options.m"
}

#line 2339 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_implies_5_p_0(
#line 2339 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_6,
#line 2339 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOption_7,
#line 2339 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOptionValue_8,
#line 2339 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2339 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12)
#line 2339 "handle_options.m"
{
#line 2342 "handle_options.m"
  {
#line 2342 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2342 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_10;

#line 2343 "handle_options.m"
    {
#line 2343 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__SourceOption_6, &libs__handle_options__SourceOptionValue_10);
    }
#line 2347 "handle_options.m"
#line 2347 "handle_options.m"
    switch (libs__handle_options__SourceOptionValue_10) {
#line 2347 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2347 "handle_options.m"
      case (MR_Integer) 0:
#line 2348 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_Globals_12 = libs__handle_options__STATE_VARIABLE_Globals_0_11;
#line 2347 "handle_options.m"
        break;
#line 2347 "handle_options.m"
      case (MR_Integer) 1:
#line 2346 "handle_options.m"
        {
#line 2346 "handle_options.m"
          libs__globals__set_option_4_p_0(libs__handle_options__ImpliedOption_7, libs__handle_options__ImpliedOptionValue_8, libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__STATE_VARIABLE_Globals_12);
        }
#line 2347 "handle_options.m"
        break;
#line 2347 "handle_options.m"
    }
#line 2342 "handle_options.m"
  }
#line 2339 "handle_options.m"
}

#line 2259 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_lowlevel_2_p_0(
#line 2259 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_12,
#line 2259 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_13)
#line 2259 "handle_options.m"
{
#line 2261 "handle_options.m"
  {
#line 2261 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2261 "handle_options.m"
    MR_Word libs__handle_options__OptFrames_4;
#line 2261 "handle_options.m"
    MR_Word libs__handle_options__OptLocalVars_5;
#line 2261 "handle_options.m"
    MR_Integer libs__handle_options__OptRepeat_6;
#line 2261 "handle_options.m"
    MR_Word libs__handle_options__UnboxedFloat_7;
#line 2261 "handle_options.m"
    MR_Word libs__handle_options__StaticGroundFloats_8;
#line 2261 "handle_options.m"
    MR_Word libs__handle_options__NonLocalGotos_9;
#line 2261 "handle_options.m"
    MR_Word libs__handle_options__AsmLabels_10;
#line 2261 "handle_options.m"
    MR_Word libs__handle_options__StaticCodeAddrs_11;
#line 2261 "handle_options.m"
    MR_Word libs__handle_options__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[3]);
#line 2261 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_17_17;
#line 2261 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_22_22;
#line 2261 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_27_27;
#line 2261 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_32_32;
#line 2261 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_40_40;
#line 2261 "handle_options.m"
    MR_Word libs__handle_options__V_44_44;
#line 2261 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_45_45;
#line 2261 "handle_options.m"
    MR_Word libs__handle_options__V_49_49;
#line 2261 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_57;
#line 2261 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_65;
#line 2261 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_73;
#line 2261 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_81;
#line 2281 "handle_options.m"
    MR_Integer libs__handle_options__V_37_37;

#line 2343 "handle_options.m"
    {
#line 2343 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_12, (MR_Integer) 365, &libs__handle_options__SourceOptionValue_57);
    }
#line 2347 "handle_options.m"
#line 2347 "handle_options.m"
    switch (libs__handle_options__SourceOptionValue_57) {
#line 2347 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2347 "handle_options.m"
      case (MR_Integer) 0:
#line 2348 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_17_17 = libs__handle_options__STATE_VARIABLE_Globals_0_12;
#line 2347 "handle_options.m"
        break;
#line 2347 "handle_options.m"
      case (MR_Integer) 1:
#line 2346 "handle_options.m"
        {
#line 2346 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 463, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_0_12, &libs__handle_options__STATE_VARIABLE_Globals_17_17);
        }
#line 2347 "handle_options.m"
        break;
#line 2347 "handle_options.m"
    }
#line 2343 "handle_options.m"
    {
#line 2343 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_17_17, (MR_Integer) 469, &libs__handle_options__SourceOptionValue_65);
    }
#line 2347 "handle_options.m"
#line 2347 "handle_options.m"
    switch (libs__handle_options__SourceOptionValue_65) {
#line 2347 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2347 "handle_options.m"
      case (MR_Integer) 0:
#line 2348 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_22_22 = libs__handle_options__STATE_VARIABLE_Globals_17_17;
#line 2347 "handle_options.m"
        break;
#line 2347 "handle_options.m"
      case (MR_Integer) 1:
#line 2346 "handle_options.m"
        {
#line 2346 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 466, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_17_17, &libs__handle_options__STATE_VARIABLE_Globals_22_22);
        }
#line 2347 "handle_options.m"
        break;
#line 2347 "handle_options.m"
    }
#line 2343 "handle_options.m"
    {
#line 2343 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_22_22, (MR_Integer) 469, &libs__handle_options__SourceOptionValue_73);
    }
#line 2347 "handle_options.m"
#line 2347 "handle_options.m"
    switch (libs__handle_options__SourceOptionValue_73) {
#line 2347 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2347 "handle_options.m"
      case (MR_Integer) 0:
#line 2348 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_27_27 = libs__handle_options__STATE_VARIABLE_Globals_22_22;
#line 2347 "handle_options.m"
        break;
#line 2347 "handle_options.m"
      case (MR_Integer) 1:
#line 2346 "handle_options.m"
        {
#line 2346 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 459, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_22_22, &libs__handle_options__STATE_VARIABLE_Globals_27_27);
        }
#line 2347 "handle_options.m"
        break;
#line 2347 "handle_options.m"
    }
#line 2343 "handle_options.m"
    {
#line 2343 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_27_27, (MR_Integer) 468, &libs__handle_options__SourceOptionValue_81);
    }
#line 2347 "handle_options.m"
#line 2347 "handle_options.m"
    switch (libs__handle_options__SourceOptionValue_81) {
#line 2347 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2347 "handle_options.m"
      case (MR_Integer) 0:
#line 2348 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_32_32 = libs__handle_options__STATE_VARIABLE_Globals_27_27;
#line 2347 "handle_options.m"
        break;
#line 2347 "handle_options.m"
      case (MR_Integer) 1:
#line 2346 "handle_options.m"
        {
#line 2346 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 297, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_27_27, &libs__handle_options__STATE_VARIABLE_Globals_32_32);
        }
#line 2347 "handle_options.m"
        break;
#line 2347 "handle_options.m"
    }
#line 2275 "handle_options.m"
    {
#line 2275 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_32_32, (MR_Integer) 469, &libs__handle_options__OptFrames_4);
    }
#line 2276 "handle_options.m"
    {
#line 2276 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_32_32, (MR_Integer) 463, &libs__handle_options__OptLocalVars_5);
    }
#line 2277 "handle_options.m"
    {
#line 2277 "handle_options.m"
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_32_32, (MR_Integer) 472, &libs__handle_options__OptRepeat_6);
    }
#line 2279 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__OptFrames_4 == (MR_Integer) 1);
#line 2280 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 2280 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__OptLocalVars_5 == (MR_Integer) 1);
#line 2281 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2281 "handle_options.m"
      {
#line 2282 "handle_options.m"
        libs__handle_options__V_37_37 = (MR_Integer) 1;
#line 2282 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__OptRepeat_6 < libs__handle_options__V_37_37);
#line 2281 "handle_options.m"
      }
#line 2278 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2288 "handle_options.m"
      {
#line 2288 "handle_options.m"
        {
#line 2288 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 472, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[8]), libs__handle_options__STATE_VARIABLE_Globals_32_32, &libs__handle_options__STATE_VARIABLE_Globals_40_40);
        }
#line 2288 "handle_options.m"
      }
#line 2278 "handle_options.m"
    else
#line 2278 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_40_40 = libs__handle_options__STATE_VARIABLE_Globals_32_32;
#line 2295 "handle_options.m"
    {
#line 2295 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_40_40, (MR_Integer) 241, &libs__handle_options__UnboxedFloat_7);
    }
#line 2301 "handle_options.m"
#line 2301 "handle_options.m"
    switch (libs__handle_options__UnboxedFloat_7) {
#line 2301 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2301 "handle_options.m"
      case (MR_Integer) 0:
#line 2310 "handle_options.m"
        libs__handle_options__StaticGroundFloats_8 = (MR_Integer) 1;
#line 2301 "handle_options.m"
        break;
#line 2301 "handle_options.m"
      case (MR_Integer) 1:
#line 2300 "handle_options.m"
        libs__handle_options__StaticGroundFloats_8 = (MR_Integer) 1;
#line 2301 "handle_options.m"
        break;
#line 2301 "handle_options.m"
    }
#line 2312 "handle_options.m"
    {
#line 2312 "handle_options.m"
      libs__handle_options__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2312 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_44_44, 0) = ((MR_Box) (libs__handle_options__StaticGroundFloats_8));
#line 2312 "handle_options.m"
    }
#line 2312 "handle_options.m"
    {
#line 2312 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 444, libs__handle_options__V_44_44, libs__handle_options__STATE_VARIABLE_Globals_40_40, &libs__handle_options__STATE_VARIABLE_Globals_45_45);
    }
#line 2317 "handle_options.m"
    {
#line 2317 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_45_45, (MR_Integer) 247, &libs__handle_options__NonLocalGotos_9);
    }
#line 2318 "handle_options.m"
    {
#line 2318 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_45_45, (MR_Integer) 249, &libs__handle_options__AsmLabels_10);
    }
#line 2320 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__NonLocalGotos_9 == (MR_Integer) 1);
#line 2320 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2321 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__AsmLabels_10 == (MR_Integer) 0);
#line 2319 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2328 "handle_options.m"
      libs__handle_options__StaticCodeAddrs_11 = (MR_Integer) 0;
#line 2319 "handle_options.m"
    else
#line 2330 "handle_options.m"
      libs__handle_options__StaticCodeAddrs_11 = (MR_Integer) 1;
#line 2332 "handle_options.m"
    {
#line 2332 "handle_options.m"
      libs__handle_options__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2332 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_49_49, 0) = ((MR_Box) (libs__handle_options__StaticCodeAddrs_11));
#line 2332 "handle_options.m"
    }
#line 2332 "handle_options.m"
    {
#line 2332 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 445, libs__handle_options__V_49_49, libs__handle_options__STATE_VARIABLE_Globals_45_45, libs__handle_options__STATE_VARIABLE_Globals_13);
    }
#line 2261 "handle_options.m"
  }
#line 2259 "handle_options.m"
}

#line 2122 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_13(
#line 2122 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2122 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2122 "handle_options.m"
{
#line 2122 "handle_options.m"
  {
#line 2122 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2122 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2122 "handle_options.m"
    MR_String libs__handle_options__conv10_LambdaHeadVar__2_1654;

#line 2122 "handle_options.m"
    {
#line 2122 "handle_options.m"
      libs__handle_options__conv10_LambdaHeadVar__2_1654 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2122__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2122 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv10_LambdaHeadVar__2_1654));
#line 2122 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2122 "handle_options.m"
  }
#line 2122 "handle_options.m"
}

#line 2120 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_12(
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
    MR_String libs__handle_options__conv9_LambdaHeadVar__2_1648;

#line 2120 "handle_options.m"
    {
#line 2120 "handle_options.m"
      libs__handle_options__conv9_LambdaHeadVar__2_1648 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2120__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2120 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv9_LambdaHeadVar__2_1648));
#line 2120 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2120 "handle_options.m"
  }
#line 2120 "handle_options.m"
}

#line 2129 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_11(
#line 2129 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2129 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2129 "handle_options.m"
{
#line 2129 "handle_options.m"
  {
#line 2129 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2129 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2129 "handle_options.m"
    MR_String libs__handle_options__conv8_LambdaHeadVar__2_1643;

#line 2129 "handle_options.m"
    {
#line 2129 "handle_options.m"
      libs__handle_options__conv8_LambdaHeadVar__2_1643 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2129__1_1_f_0(((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2129 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv8_LambdaHeadVar__2_1643));
#line 2129 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2129 "handle_options.m"
  }
#line 2129 "handle_options.m"
}

#line 2128 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_10(
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
    MR_String libs__handle_options__conv7_LambdaHeadVar__2_1638;

#line 2128 "handle_options.m"
    {
#line 2128 "handle_options.m"
      libs__handle_options__conv7_LambdaHeadVar__2_1638 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2128__1_1_f_0(((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2128 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv7_LambdaHeadVar__2_1638));
#line 2128 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2128 "handle_options.m"
  }
#line 2128 "handle_options.m"
}

#line 2098 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_9(
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
    MR_String libs__handle_options__conv6_LambdaHeadVar__2_1625;

#line 2098 "handle_options.m"
    {
#line 2098 "handle_options.m"
      libs__handle_options__conv6_LambdaHeadVar__2_1625 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2098__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2098 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv6_LambdaHeadVar__2_1625));
#line 2098 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2098 "handle_options.m"
  }
#line 2098 "handle_options.m"
}

#line 2094 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_8(
#line 2094 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2094 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2094 "handle_options.m"
{
#line 2094 "handle_options.m"
  {
#line 2094 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2094 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2094 "handle_options.m"
    MR_String libs__handle_options__conv5_LambdaHeadVar__2_1619;

#line 2094 "handle_options.m"
    {
#line 2094 "handle_options.m"
      libs__handle_options__conv5_LambdaHeadVar__2_1619 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2094__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2094 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv5_LambdaHeadVar__2_1619));
#line 2094 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2094 "handle_options.m"
  }
#line 2094 "handle_options.m"
}

#line 2076 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_7(
#line 2076 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2076 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2076 "handle_options.m"
{
#line 2076 "handle_options.m"
  {
#line 2076 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2076 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2076 "handle_options.m"
    {
#line 2076 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2076__2_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2076 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2076 "handle_options.m"
  }
#line 2076 "handle_options.m"
}

#line 2076 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_6(
#line 2076 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2076 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2076 "handle_options.m"
{
#line 2076 "handle_options.m"
  {
#line 2076 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2076 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2076 "handle_options.m"
    {
#line 2076 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2076__1_2_p_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2076 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2076 "handle_options.m"
  }
#line 2076 "handle_options.m"
}

#line 2058 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_5(
#line 2058 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2058 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2058 "handle_options.m"
{
#line 2058 "handle_options.m"
  {
#line 2058 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2058 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2058 "handle_options.m"
    MR_String libs__handle_options__conv4_LambdaHeadVar__2_1600;

#line 2058 "handle_options.m"
    {
#line 2058 "handle_options.m"
      libs__handle_options__conv4_LambdaHeadVar__2_1600 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2058__1_3_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 4))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2058 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv4_LambdaHeadVar__2_1600));
#line 2058 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2058 "handle_options.m"
  }
#line 2058 "handle_options.m"
}

#line 2022 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_4(
#line 2022 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2022 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2022 "handle_options.m"
{
#line 2022 "handle_options.m"
  {
#line 2022 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2022 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2022 "handle_options.m"
    MR_String libs__handle_options__conv3_LambdaHeadVar__2_1581;

#line 2022 "handle_options.m"
    {
#line 2022 "handle_options.m"
      libs__handle_options__conv3_LambdaHeadVar__2_1581 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2022__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2022 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv3_LambdaHeadVar__2_1581));
#line 2022 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2022 "handle_options.m"
  }
#line 2022 "handle_options.m"
}

#line 2012 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_3(
#line 2012 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2012 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2012 "handle_options.m"
{
#line 2012 "handle_options.m"
  {
#line 2012 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2012 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2012 "handle_options.m"
    MR_String libs__handle_options__conv2_LambdaHeadVar__2_1571;

#line 2012 "handle_options.m"
    {
#line 2012 "handle_options.m"
      libs__handle_options__conv2_LambdaHeadVar__2_1571 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2012__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2012 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv2_LambdaHeadVar__2_1571));
#line 2012 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2012 "handle_options.m"
  }
#line 2012 "handle_options.m"
}

#line 1999 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_2(
#line 1999 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 1999 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 1999 "handle_options.m"
{
#line 1999 "handle_options.m"
  {
#line 1999 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 1999 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 1999 "handle_options.m"
    MR_String libs__handle_options__conv1_LambdaHeadVar__2_1554;

#line 1999 "handle_options.m"
    {
#line 1999 "handle_options.m"
      libs__handle_options__conv1_LambdaHeadVar__2_1554 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1999__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 1999 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv1_LambdaHeadVar__2_1554));
#line 1999 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 1999 "handle_options.m"
  }
#line 1999 "handle_options.m"
}

#line 1984 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_1(
#line 1984 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 1984 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 1984 "handle_options.m"
{
#line 1984 "handle_options.m"
  {
#line 1984 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 1984 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 1984 "handle_options.m"
    MR_String libs__handle_options__conv0_LambdaHeadVar__2_1539;

#line 1984 "handle_options.m"
    {
#line 1984 "handle_options.m"
      libs__handle_options__conv0_LambdaHeadVar__2_1539 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1984__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 1984 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv0_LambdaHeadVar__2_1539));
#line 1984 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 1984 "handle_options.m"
  }
#line 1984 "handle_options.m"
}

#line 646 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0(
#line 646 "handle_options.m"
  MR_Word libs__handle_options__OptionTable0_25,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__OpMode_26,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__Target_27,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__GC_Method_28,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__TagsMethod0_29,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__TermNorm_30,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__Term2Norm_31,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__TraceLevel_32,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__TraceSuppress_33,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__SSTraceLevel_34,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__MaybeThreadSafe_35,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__C_CompilerType_36,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__CSharp_CompilerType_37,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__ReuseStrategy_38,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__MaybeFeedbackInfo_39,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__HostEnvType_40,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__SystemEnvType_41,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__TargetEnvType_42,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__LimitErrorContextsMap_43,
#line 646 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Specs_0_206,
#line 646 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Specs_207,
#line 646 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_208)
#line 646 "handle_options.m"
{
#line 662 "handle_options.m"
  {
#line 662 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_1753_1753 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
#line 662 "handle_options.m"
    MR_String libs__handle_options__InstallCmd_47;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__FileInstallCmd_48;
#line 662 "handle_options.m"
    MR_String libs__handle_options__EventSetFileName0_50;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__GCIsConservative_53;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__PregeneratedDist_54;
#line 662 "handle_options.m"
    MR_Integer libs__handle_options__NumTagBits0_55;
#line 662 "handle_options.m"
    MR_Integer libs__handle_options__NumTagBits1_56;
#line 662 "handle_options.m"
    MR_Integer libs__handle_options__NumTagBits_57;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__TagsMethod_59;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__GradeSupportsParConj_60;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__Parallel_61;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__Threadscope_62;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__ImplicitParallelism_64;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__LibLinkages0_68;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__TransOpt_71;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__InterModOpt_76;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__InterModAnalysis_77;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__MaybeStandaloneInt_79;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__ExtraInitFunctions_80;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__Smart_83;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__VeryVerbose_84;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__Statistics_85;
#line 662 "handle_options.m"
    MR_Integer libs__handle_options__DebugLiveness_86;
#line 662 "handle_options.m"
    MR_Integer libs__handle_options__DebugModesPredId_90;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__DebugUnneededCodePredNames_91;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__DebugOptPredIdStrs_94;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__DebugOptPredNames_95;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__DebugIntermoduleAnalysis_100;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__DumpHLDSPredIds_101;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__UseTrail_107;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__HighLevelCode_108;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__UseMinimalModelStackCopy_109;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__UseMinimalModelOwnStacks_110;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__UseMinimalModel_111;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__ProfOptimized_119;
#line 662 "handle_options.m"
    MR_String libs__handle_options__ExpComp_120;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__TraceOptimized_121;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__TraceLevelIsNone_122;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__ProfileDeep_124;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__RecordTermSizesAsWords_128;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__RecordTermSizesAsCells_129;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__PutNondetEnvOnHeap_133;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__DisablePneg_135;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__DisableCut_136;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__DumpHLDSStages_137;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__DumpTraceStages_138;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__ParallelLiveness_139;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__ParallelCodeGen_140;
#line 662 "handle_options.m"
    MR_String libs__handle_options__TargetArch_145;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__MaybeStdLibDir_146;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__MaybeConfDir_152;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__ConfigFile_155;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__MercuryLibDirs_157;
#line 662 "handle_options.m"
    MR_String libs__handle_options__GradeString_158;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__UseSearchDirs_172;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__UseGradeSubdirs_175;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__SearchLibFilesDirs_176;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__IntermodDirs2_177;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__ToGradeSubdir_178;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__LinkLibDirs_187;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__InitDirs_190;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__UseSubdirs_191;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__BackendForeignLanguages_201;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__CurrentBackendForeignLanguage_202;
#line 662 "handle_options.m"
    MR_Integer libs__handle_options__CompareSpec_205;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_213_213;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_214_214;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_220_220;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_227_227;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_248_248;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_279_279;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__V_281_281;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_282_282;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_283_283;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_301_301;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_324_324;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_345_345;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__V_348_348;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_349_349;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_353_353;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_482_482;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_487_487;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__V_491_491;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_492_492;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_497_497;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__V_501_501;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_502_502;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_507_507;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_512_512;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_517_517;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_522_522;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_527_527;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_532_532;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_541_541;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_546_546;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_551_551;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_556_556;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_561_561;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_584_584;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_605_605;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_608_608;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_630_630;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_634_634;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_639_639;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_644_644;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_649_649;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_654_654;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_659_659;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_664_664;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_669_669;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_674_674;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_679_679;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_684_684;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_689_689;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_693_693;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_698_698;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_703_703;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_708_708;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_713_713;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_718_718;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_723_723;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_728_728;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_733_733;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_738_738;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_743_743;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_748_748;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_753_753;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_758_758;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_763_763;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_768_768;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_773_773;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_778_778;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_783_783;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_788_788;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_793_793;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_798_798;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_803_803;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_808_808;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_814_814;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_819_819;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_824_824;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_829_829;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_834_834;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_839_839;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_845_845;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_850_850;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_855_855;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_860_860;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_868_868;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_872_872;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_878_878;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_883_883;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_889_889;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_901_901;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_905_905;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_910_910;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_915_915;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_920_920;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_935_935;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__V_958_958;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_959_959;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_1004_1004;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1007_1007;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1011_1011;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1016_1016;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1021_1021;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1025_1025;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1029_1029;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1034_1034;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1039_1039;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1044_1044;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1049_1049;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1055_1055;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1060_1060;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1065_1065;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1070_1070;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1075_1075;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1080_1080;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1085_1085;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1090_1090;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1095_1095;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1100_1100;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1105_1105;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1110_1110;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1115_1115;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1208_1208;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1213_1213;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_1225_1225;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1236_1236;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_1246_1246;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1253_1253;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_1272_1272;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1276_1276;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1281_1281;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1286_1286;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1291_1291;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1296_1296;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1301_1301;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1306_1306;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1311_1311;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1355_1355;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1377_1377;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1382_1382;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1387_1387;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1392_1392;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1397_1397;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1402_1402;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1407_1407;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1412_1412;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1417_1417;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1422_1422;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1428_1428;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1432_1432;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1440_1440;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1445_1445;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1450_1450;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1455_1455;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1460_1460;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1465_1465;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1470_1470;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1475_1475;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1480_1480;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1485_1485;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1490_1490;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1495_1495;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1510_1510;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1518_1518;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1530_1530;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1587_1587;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1594_1594;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1615_1615;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__V_1631_1631;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1632_1632;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__V_1634_1634;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1635_1635;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1671_1671;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1675_1675;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_1687_1687;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_1695_1695;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1707_1707;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1718_1718;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1727_1727;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1732_1732;
#line 662 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1738_1738;
#line 1073 "handle_options.m"
    MR_String libs__handle_options__V_81_81;
#line 1224 "handle_options.m"
    MR_String libs__handle_options__AllDumpOptions_87;
#line 1225 "handle_options.m"
    MR_String libs__handle_options__V_864_864;
#line 1963 "handle_options.m"
    MR_String libs__handle_options__V_1523_1523;
#line 2117 "handle_options.m"
    MR_Word libs__handle_options__ToMihsSubdir_192;
#line 2117 "handle_options.m"
    MR_Word libs__handle_options__ToHrlsSubdir_193;
#line 2228 "handle_options.m"
    MR_Integer libs__handle_options__V_1729_1729;

#line 664 "handle_options.m"
    {
#line 664 "handle_options.m"
      mercury__getopt_io__lookup_string_option_3_p_0(libs__handle_options__TypeCtorInfo_1753_1753, libs__handle_options__OptionTable0_25, ((MR_Box) ((MR_Integer) 622)), &libs__handle_options__InstallCmd_47);
    }
#line 665 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__InstallCmd_47, (MR_String) "") == 0);
#line 665 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 666 "handle_options.m"
      libs__handle_options__FileInstallCmd_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 665 "handle_options.m"
    else
#line 669 "handle_options.m"
      {
#line 669 "handle_options.m"
        MR_String libs__handle_options__InstallCmdDirOption_49;

#line 668 "handle_options.m"
        {
#line 668 "handle_options.m"
          mercury__getopt_io__lookup_string_option_3_p_0(libs__handle_options__TypeCtorInfo_1753_1753, libs__handle_options__OptionTable0_25, ((MR_Box) ((MR_Integer) 623)), &libs__handle_options__InstallCmdDirOption_49);
        }
#line 670 "handle_options.m"
        {
#line 670 "handle_options.m"
          libs__handle_options__FileInstallCmd_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__FileInstallCmd_48, 0) = ((MR_Box) (libs__handle_options__InstallCmd_47));
#line 670 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__FileInstallCmd_48, 1) = ((MR_Box) (libs__handle_options__InstallCmdDirOption_49));
#line 670 "handle_options.m"
        }
#line 669 "handle_options.m"
      }
#line 673 "handle_options.m"
    {
#line 673 "handle_options.m"
      libs__globals__globals_init_21_p_0(libs__handle_options__OptionTable0_25, libs__handle_options__OpMode_26, libs__handle_options__Target_27, libs__handle_options__GC_Method_28, libs__handle_options__TagsMethod0_29, libs__handle_options__TermNorm_30, libs__handle_options__Term2Norm_31, libs__handle_options__TraceLevel_32, libs__handle_options__TraceSuppress_33, libs__handle_options__SSTraceLevel_34, libs__handle_options__MaybeThreadSafe_35, libs__handle_options__C_CompilerType_36, libs__handle_options__CSharp_CompilerType_37, libs__handle_options__ReuseStrategy_38, libs__handle_options__MaybeFeedbackInfo_39, libs__handle_options__HostEnvType_40, libs__handle_options__SystemEnvType_41, libs__handle_options__TargetEnvType_42, libs__handle_options__FileInstallCmd_48, libs__handle_options__LimitErrorContextsMap_43, &libs__handle_options__STATE_VARIABLE_Globals_213_213);
    }
#line 682 "handle_options.m"
    {
#line 682 "handle_options.m"
      libs__compute_grade__check_grade_component_compatibility_5_p_0(libs__handle_options__STATE_VARIABLE_Globals_213_213, libs__handle_options__Target_27, libs__handle_options__GC_Method_28, libs__handle_options__STATE_VARIABLE_Specs_0_206, &libs__handle_options__STATE_VARIABLE_Specs_214_214);
    }
#line 684 "handle_options.m"
    {
#line 684 "handle_options.m"
      libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_213_213, (MR_Integer) 174, &libs__handle_options__EventSetFileName0_50);
    }
#line 686 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__EventSetFileName0_50, (MR_String) "") == 0);
#line 686 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 688 "handle_options.m"
      {
#line 688 "handle_options.m"
        MR_Word libs__handle_options__MaybeEventSetFileName_51;

#line 687 "handle_options.m"
        {
#line 687 "handle_options.m"
          mercury__io__get_environment_var_4_p_0((MR_String) "MERCURY_EVENT_SET_FILE_NAME", &libs__handle_options__MaybeEventSetFileName_51);
        }
#line 693 "handle_options.m"
        if ((libs__handle_options__MaybeEventSetFileName_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 694 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_220_220 = libs__handle_options__STATE_VARIABLE_Globals_213_213;
#line 693 "handle_options.m"
        else
#line 690 "handle_options.m"
          {
#line 690 "handle_options.m"
            MR_String libs__handle_options__EventSetFileName_52 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeEventSetFileName_51, (MR_Integer) 0)));
#line 690 "handle_options.m"
            MR_Word libs__handle_options__V_219_219;

#line 691 "handle_options.m"
            {
#line 691 "handle_options.m"
              libs__handle_options__V_219_219 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 691 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_219_219, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 691 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_219_219, 1) = ((MR_Box) (libs__handle_options__EventSetFileName_52));
#line 691 "handle_options.m"
            }
#line 691 "handle_options.m"
            {
#line 691 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 174, libs__handle_options__V_219_219, libs__handle_options__STATE_VARIABLE_Globals_213_213, &libs__handle_options__STATE_VARIABLE_Globals_220_220);
            }
#line 690 "handle_options.m"
          }
#line 688 "handle_options.m"
      }
#line 686 "handle_options.m"
    else
#line 697 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_220_220 = libs__handle_options__STATE_VARIABLE_Globals_213_213;
#line 701 "handle_options.m"
    {
#line 701 "handle_options.m"
      libs__handle_options__GCIsConservative_53 = libs__globals__gc_is_conservative_1_f_0(libs__handle_options__GC_Method_28);
    }
#line 708 "handle_options.m"
#line 708 "handle_options.m"
    switch (libs__handle_options__GCIsConservative_53) {
#line 708 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 708 "handle_options.m"
      case (MR_Integer) 0:
#line 709 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_227_227 = libs__handle_options__STATE_VARIABLE_Globals_220_220;
#line 708 "handle_options.m"
        break;
#line 708 "handle_options.m"
      case (MR_Integer) 1:
#line 703 "handle_options.m"
        {
#line 703 "handle_options.m"
          MR_Word libs__handle_options__V_222_222 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]);
#line 703 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_223_223;

#line 704 "handle_options.m"
          {
#line 704 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 301, libs__handle_options__V_222_222, libs__handle_options__STATE_VARIABLE_Globals_220_220, &libs__handle_options__STATE_VARIABLE_Globals_223_223);
          }
#line 706 "handle_options.m"
          {
#line 706 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 302, libs__handle_options__V_222_222, libs__handle_options__STATE_VARIABLE_Globals_223_223, &libs__handle_options__STATE_VARIABLE_Globals_227_227);
          }
#line 703 "handle_options.m"
        }
#line 708 "handle_options.m"
        break;
#line 708 "handle_options.m"
    }
#line 714 "handle_options.m"
    {
#line 714 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_227_227, (MR_Integer) 221, &libs__handle_options__PregeneratedDist_54);
    }
#line 722 "handle_options.m"
#line 722 "handle_options.m"
    switch (libs__handle_options__PregeneratedDist_54) {
#line 722 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 722 "handle_options.m"
      case (MR_Integer) 0:
#line 723 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_248_248 = libs__handle_options__STATE_VARIABLE_Globals_227_227;
#line 722 "handle_options.m"
        break;
#line 722 "handle_options.m"
      case (MR_Integer) 1:
#line 716 "handle_options.m"
        {
#line 716 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_232_232;
#line 716 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_236_236;
#line 716 "handle_options.m"
          MR_Word libs__handle_options__V_239_239;
#line 716 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_240_240;
#line 716 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_244_244;

#line 717 "handle_options.m"
          {
#line 717 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 235, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[1]), libs__handle_options__STATE_VARIABLE_Globals_227_227, &libs__handle_options__STATE_VARIABLE_Globals_232_232);
          }
#line 718 "handle_options.m"
          {
#line 718 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 244, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[2]), libs__handle_options__STATE_VARIABLE_Globals_232_232, &libs__handle_options__STATE_VARIABLE_Globals_236_236);
          }
#line 719 "handle_options.m"
          libs__handle_options__V_239_239 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]);
#line 719 "handle_options.m"
          {
#line 719 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 241, libs__handle_options__V_239_239, libs__handle_options__STATE_VARIABLE_Globals_236_236, &libs__handle_options__STATE_VARIABLE_Globals_240_240);
          }
#line 720 "handle_options.m"
          {
#line 720 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 222, libs__handle_options__V_239_239, libs__handle_options__STATE_VARIABLE_Globals_240_240, &libs__handle_options__STATE_VARIABLE_Globals_244_244);
          }
#line 721 "handle_options.m"
          {
#line 721 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 245, libs__handle_options__V_239_239, libs__handle_options__STATE_VARIABLE_Globals_244_244, &libs__handle_options__STATE_VARIABLE_Globals_248_248);
          }
#line 716 "handle_options.m"
        }
#line 722 "handle_options.m"
        break;
#line 722 "handle_options.m"
    }
#line 730 "handle_options.m"
#line 730 "handle_options.m"
    switch (libs__handle_options__TagsMethod0_29) {
#line 730 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 730 "handle_options.m"
      case (MR_Integer) 2:
#line 730 "handle_options.m"
      case (MR_Integer) 1:
#line 733 "handle_options.m"
        {
#line 734 "handle_options.m"
          {
#line 734 "handle_options.m"
            libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_248_248, (MR_Integer) 235, &libs__handle_options__NumTagBits0_55);
          }
#line 733 "handle_options.m"
        }
#line 730 "handle_options.m"
        break;
#line 730 "handle_options.m"
      case (MR_Integer) 0:
#line 729 "handle_options.m"
        libs__handle_options__NumTagBits0_55 = (MR_Integer) 0;
#line 730 "handle_options.m"
        break;
#line 730 "handle_options.m"
    }
#line 742 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__TagsMethod0_29 == (MR_Integer) 1);
#line 742 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 743 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__NumTagBits0_55 == (MR_Integer) -1);
#line 741 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 745 "handle_options.m"
      {
#line 745 "handle_options.m"
        {
#line 745 "handle_options.m"
          libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_248_248, (MR_Integer) 240, &libs__handle_options__NumTagBits1_56);
        }
#line 745 "handle_options.m"
      }
#line 741 "handle_options.m"
    else
#line 747 "handle_options.m"
      libs__handle_options__NumTagBits1_56 = libs__handle_options__NumTagBits0_55;
#line 752 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__NumTagBits1_56 < (MR_Integer) 0);
#line 752 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 753 "handle_options.m"
      {
#line 753 "handle_options.m"
        libs__handle_options__NumTagBits_57 = (MR_Integer) 0;
#line 759 "handle_options.m"
        {
#line 759 "handle_options.m"
          libs__compiler_util__add_warning_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[147]), libs__handle_options__STATE_VARIABLE_Specs_214_214, &libs__handle_options__STATE_VARIABLE_Specs_279_279);
        }
#line 753 "handle_options.m"
      }
#line 752 "handle_options.m"
    else
#line 761 "handle_options.m"
      {
#line 761 "handle_options.m"
        libs__handle_options__NumTagBits_57 = libs__handle_options__NumTagBits1_56;
#line 761 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_279_279 = libs__handle_options__STATE_VARIABLE_Specs_214_214;
#line 761 "handle_options.m"
      }
#line 764 "handle_options.m"
    {
#line 764 "handle_options.m"
      libs__handle_options__V_281_281 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 764 "handle_options.m"
      MR_hl_field(MR_mktag(2), libs__handle_options__V_281_281, 0) = ((MR_Box) (libs__handle_options__NumTagBits_57));
#line 764 "handle_options.m"
    }
#line 764 "handle_options.m"
    {
#line 764 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 235, libs__handle_options__V_281_281, libs__handle_options__STATE_VARIABLE_Globals_248_248, &libs__handle_options__STATE_VARIABLE_Globals_282_282);
    }
#line 765 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__NumTagBits_57 == (MR_Integer) 0);
#line 765 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 766 "handle_options.m"
      {
#line 766 "handle_options.m"
        libs__handle_options__TagsMethod_59 = (MR_Integer) 0;
#line 767 "handle_options.m"
        {
#line 767 "handle_options.m"
          libs__globals__set_tags_method_3_p_0(libs__handle_options__TagsMethod_59, libs__handle_options__STATE_VARIABLE_Globals_282_282, &libs__handle_options__STATE_VARIABLE_Globals_283_283);
        }
#line 766 "handle_options.m"
      }
#line 765 "handle_options.m"
    else
#line 769 "handle_options.m"
      {
#line 769 "handle_options.m"
        libs__handle_options__TagsMethod_59 = libs__handle_options__TagsMethod0_29;
#line 769 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_283_283 = libs__handle_options__STATE_VARIABLE_Globals_282_282;
#line 769 "handle_options.m"
      }
#line 772 "handle_options.m"
    {
#line 772 "handle_options.m"
      libs__globals__current_grade_supports_par_conj_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_283_283, &libs__handle_options__GradeSupportsParConj_60);
    }
#line 773 "handle_options.m"
    {
#line 773 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_283_283, (MR_Integer) 214, &libs__handle_options__Parallel_61);
    }
#line 774 "handle_options.m"
    {
#line 774 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_283_283, (MR_Integer) 215, &libs__handle_options__Threadscope_62);
    }
#line 776 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__GradeSupportsParConj_60 == (MR_Integer) 0);
#line 776 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 777 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__Threadscope_62 == (MR_Integer) 1);
#line 775 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 781 "handle_options.m"
      {
#line 782 "handle_options.m"
        {
#line 782 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[155]), libs__handle_options__STATE_VARIABLE_Specs_279_279, &libs__handle_options__STATE_VARIABLE_Specs_301_301);
        }
#line 781 "handle_options.m"
      }
#line 775 "handle_options.m"
    else
#line 775 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Specs_301_301 = libs__handle_options__STATE_VARIABLE_Specs_279_279;
#line 790 "handle_options.m"
    {
#line 790 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_283_283, (MR_Integer) 661, &libs__handle_options__ImplicitParallelism_64);
    }
#line 825 "handle_options.m"
#line 825 "handle_options.m"
    switch (libs__handle_options__ImplicitParallelism_64) {
#line 825 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 825 "handle_options.m"
      case (MR_Integer) 0:
#line 826 "handle_options.m"
        {
#line 826 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Specs_345_345 = libs__handle_options__STATE_VARIABLE_Specs_301_301;
#line 826 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_324_324 = libs__handle_options__STATE_VARIABLE_Globals_283_283;
#line 826 "handle_options.m"
        }
#line 825 "handle_options.m"
        break;
#line 825 "handle_options.m"
      case (MR_Integer) 1:
#line 807 "handle_options.m"
#line 807 "handle_options.m"
        switch (libs__handle_options__GradeSupportsParConj_60) {
#line 807 "handle_options.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 807 "handle_options.m"
          case (MR_Integer) 0:
#line 811 "handle_options.m"
            {
#line 820 "handle_options.m"
#line 820 "handle_options.m"
              switch (libs__handle_options__Parallel_61) {
#line 820 "handle_options.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 820 "handle_options.m"
                case (MR_Integer) 0:
#line 821 "handle_options.m"
                  libs__handle_options__STATE_VARIABLE_Specs_345_345 = libs__handle_options__STATE_VARIABLE_Specs_301_301;
#line 820 "handle_options.m"
                  break;
#line 820 "handle_options.m"
                case (MR_Integer) 1:
#line 813 "handle_options.m"
                  {
#line 819 "handle_options.m"
                    {
#line 819 "handle_options.m"
                      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[164]), libs__handle_options__STATE_VARIABLE_Specs_301_301, &libs__handle_options__STATE_VARIABLE_Specs_345_345);
                    }
#line 813 "handle_options.m"
                  }
#line 820 "handle_options.m"
                  break;
#line 820 "handle_options.m"
              }
#line 823 "handle_options.m"
              {
#line 823 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 661, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]), libs__handle_options__STATE_VARIABLE_Globals_283_283, &libs__handle_options__STATE_VARIABLE_Globals_324_324);
              }
#line 811 "handle_options.m"
            }
#line 807 "handle_options.m"
            break;
#line 807 "handle_options.m"
          case (MR_Integer) 1:
#line 795 "handle_options.m"
            {
#line 795 "handle_options.m"
              MR_String libs__handle_options__FeedbackFile_65;

#line 796 "handle_options.m"
              {
#line 796 "handle_options.m"
                libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_283_283, (MR_Integer) 662, &libs__handle_options__FeedbackFile_65);
              }
#line 798 "handle_options.m"
              libs__handle_options__succeeded = (strcmp(libs__handle_options__FeedbackFile_65, (MR_String) "") == 0);
#line 798 "handle_options.m"
              if (libs__handle_options__succeeded)
#line 802 "handle_options.m"
                {
#line 803 "handle_options.m"
                  {
#line 803 "handle_options.m"
                    libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[170]), libs__handle_options__STATE_VARIABLE_Specs_301_301, &libs__handle_options__STATE_VARIABLE_Specs_345_345);
                  }
#line 802 "handle_options.m"
                }
#line 798 "handle_options.m"
              else
#line 798 "handle_options.m"
                libs__handle_options__STATE_VARIABLE_Specs_345_345 = libs__handle_options__STATE_VARIABLE_Specs_301_301;
#line 795 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_324_324 = libs__handle_options__STATE_VARIABLE_Globals_283_283;
#line 795 "handle_options.m"
            }
#line 807 "handle_options.m"
            break;
#line 807 "handle_options.m"
        }
#line 825 "handle_options.m"
        break;
#line 825 "handle_options.m"
    }
#line 831 "handle_options.m"
    libs__handle_options__V_348_348 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[3]);
#line 830 "handle_options.m"
    {
#line 830 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 661, (MR_Integer) 196, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_324_324, &libs__handle_options__STATE_VARIABLE_Globals_349_349);
    }
#line 836 "handle_options.m"
#line 836 "handle_options.m"
    switch (libs__handle_options__GradeSupportsParConj_60) {
#line 836 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 836 "handle_options.m"
      case (MR_Integer) 0:
#line 837 "handle_options.m"
        {
#line 838 "handle_options.m"
          {
#line 838 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 663, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]), libs__handle_options__STATE_VARIABLE_Globals_349_349, &libs__handle_options__STATE_VARIABLE_Globals_353_353);
          }
#line 837 "handle_options.m"
        }
#line 836 "handle_options.m"
        break;
#line 836 "handle_options.m"
      case (MR_Integer) 1:
#line 835 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_353_353 = libs__handle_options__STATE_VARIABLE_Globals_349_349;
#line 836 "handle_options.m"
        break;
#line 836 "handle_options.m"
    }
#line 5815 "libs.handle_options.c"
#line 5816 "libs.handle_options.c"
    switch (libs__handle_options__Target_27) {
#line 5818 "libs.handle_options.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 5820 "libs.handle_options.c"
      case (MR_Integer) 0:
#line 5822 "libs.handle_options.c"
        {
#line 957 "handle_options.m"
          {
#line 957 "handle_options.m"
            libs__handle_options__option_implies_5_p_0((MR_Integer) 252, (MR_Integer) 257, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_353_353, &libs__handle_options__STATE_VARIABLE_Globals_482_482);
          }
#line 5829 "libs.handle_options.c"
        }
#line 5831 "libs.handle_options.c"
        break;
#line 5833 "libs.handle_options.c"
      case (MR_Integer) 1:
#line 5835 "libs.handle_options.c"
      case (MR_Integer) 2:
#line 5837 "libs.handle_options.c"
        {
#line 5839 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_356_356;
#line 5841 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_359_359;
#line 5843 "libs.handle_options.c"
          MR_Word libs__handle_options__V_362_362;
#line 5845 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_363_363;
#line 5847 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_367_367;
#line 5849 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_371_371;
#line 5851 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_375_375;
#line 5853 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_379_379;
#line 5855 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_383_383;
#line 5857 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_387_387;
#line 5859 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_391_391;
#line 5861 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_395_395;
#line 5863 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_399_399;
#line 5865 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_403_403;
#line 5867 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_407_407;
#line 5869 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_411_411;

#line 874 "handle_options.m"
          {
#line 874 "handle_options.m"
            libs__globals__set_gc_method_3_p_0((MR_Integer) 0, libs__handle_options__STATE_VARIABLE_Globals_353_353, &libs__handle_options__STATE_VARIABLE_Globals_356_356);
          }
#line 875 "handle_options.m"
          {
#line 875 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 213, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222]), libs__handle_options__STATE_VARIABLE_Globals_356_356, &libs__handle_options__STATE_VARIABLE_Globals_359_359);
          }
#line 876 "handle_options.m"
          libs__handle_options__V_362_362 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]);
#line 876 "handle_options.m"
          {
#line 876 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 302, libs__handle_options__V_362_362, libs__handle_options__STATE_VARIABLE_Globals_359_359, &libs__handle_options__STATE_VARIABLE_Globals_363_363);
          }
#line 878 "handle_options.m"
          {
#line 878 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 301, libs__handle_options__V_362_362, libs__handle_options__STATE_VARIABLE_Globals_363_363, &libs__handle_options__STATE_VARIABLE_Globals_367_367);
          }
#line 880 "handle_options.m"
          {
#line 880 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 252, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_367_367, &libs__handle_options__STATE_VARIABLE_Globals_371_371);
          }
#line 881 "handle_options.m"
          {
#line 881 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 253, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_371_371, &libs__handle_options__STATE_VARIABLE_Globals_375_375);
          }
#line 882 "handle_options.m"
          {
#line 882 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 241, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_375_375, &libs__handle_options__STATE_VARIABLE_Globals_379_379);
          }
#line 883 "handle_options.m"
          {
#line 883 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 254, libs__handle_options__V_362_362, libs__handle_options__STATE_VARIABLE_Globals_379_379, &libs__handle_options__STATE_VARIABLE_Globals_383_383);
          }
#line 884 "handle_options.m"
          {
#line 884 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 256, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_383_383, &libs__handle_options__STATE_VARIABLE_Globals_387_387);
          }
#line 885 "handle_options.m"
          {
#line 885 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 255, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_387_387, &libs__handle_options__STATE_VARIABLE_Globals_391_391);
          }
#line 886 "handle_options.m"
          {
#line 886 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 235, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[4]), libs__handle_options__STATE_VARIABLE_Globals_391_391, &libs__handle_options__STATE_VARIABLE_Globals_395_395);
          }
#line 887 "handle_options.m"
          {
#line 887 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 243, libs__handle_options__V_362_362, libs__handle_options__STATE_VARIABLE_Globals_395_395, &libs__handle_options__STATE_VARIABLE_Globals_399_399);
          }
#line 888 "handle_options.m"
          {
#line 888 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 258, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_399_399, &libs__handle_options__STATE_VARIABLE_Globals_403_403);
          }
#line 889 "handle_options.m"
          {
#line 889 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 267, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_403_403, &libs__handle_options__STATE_VARIABLE_Globals_407_407);
          }
#line 891 "handle_options.m"
          {
#line 891 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 638, libs__handle_options__V_362_362, libs__handle_options__STATE_VARIABLE_Globals_407_407, &libs__handle_options__STATE_VARIABLE_Globals_411_411);
          }
#line 5949 "libs.handle_options.c"
#line 5950 "libs.handle_options.c"
          switch (libs__handle_options__Target_27) {
#line 5952 "libs.handle_options.c"
            default: /*NOTREACHED*/ MR_assert(0);
#line 5954 "libs.handle_options.c"
            case (MR_Integer) 1:
#line 5956 "libs.handle_options.c"
              {
#line 894 "handle_options.m"
                {
#line 894 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 563, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[223]), libs__handle_options__STATE_VARIABLE_Globals_411_411, &libs__handle_options__STATE_VARIABLE_Globals_482_482);
                }
#line 5963 "libs.handle_options.c"
              }
#line 5965 "libs.handle_options.c"
              break;
#line 5967 "libs.handle_options.c"
            case (MR_Integer) 2:
#line 960 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_482_482 = libs__handle_options__STATE_VARIABLE_Globals_411_411;
#line 5971 "libs.handle_options.c"
              break;
#line 5973 "libs.handle_options.c"
          }
#line 5975 "libs.handle_options.c"
        }
#line 5977 "libs.handle_options.c"
        break;
#line 5979 "libs.handle_options.c"
      case (MR_Integer) 3:
#line 5981 "libs.handle_options.c"
        {
#line 5983 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_418_418;
#line 5985 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_421_421;
#line 5987 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_425_425;
#line 5989 "libs.handle_options.c"
          MR_Word libs__handle_options__V_428_428;
#line 5991 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_429_429;
#line 5993 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_433_433;
#line 5995 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_437_437;
#line 5997 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_441_441;
#line 5999 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_445_445;
#line 6001 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_449_449;
#line 6003 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_453_453;
#line 6005 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_457_457;
#line 6007 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_461_461;
#line 6009 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_465_465;
#line 6011 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_469_469;
#line 6013 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_473_473;

#line 919 "handle_options.m"
          {
#line 919 "handle_options.m"
            libs__globals__set_gc_method_3_p_0((MR_Integer) 0, libs__handle_options__STATE_VARIABLE_Globals_353_353, &libs__handle_options__STATE_VARIABLE_Globals_418_418);
          }
#line 920 "handle_options.m"
          {
#line 920 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 213, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222]), libs__handle_options__STATE_VARIABLE_Globals_418_418, &libs__handle_options__STATE_VARIABLE_Globals_421_421);
          }
#line 921 "handle_options.m"
          {
#line 921 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 241, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_421_421, &libs__handle_options__STATE_VARIABLE_Globals_425_425);
          }
#line 922 "handle_options.m"
          libs__handle_options__V_428_428 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]);
#line 922 "handle_options.m"
          {
#line 922 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 302, libs__handle_options__V_428_428, libs__handle_options__STATE_VARIABLE_Globals_425_425, &libs__handle_options__STATE_VARIABLE_Globals_429_429);
          }
#line 924 "handle_options.m"
          {
#line 924 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 301, libs__handle_options__V_428_428, libs__handle_options__STATE_VARIABLE_Globals_429_429, &libs__handle_options__STATE_VARIABLE_Globals_433_433);
          }
#line 926 "handle_options.m"
          {
#line 926 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 270, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_433_433, &libs__handle_options__STATE_VARIABLE_Globals_437_437);
          }
#line 928 "handle_options.m"
          {
#line 928 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 266, libs__handle_options__V_428_428, libs__handle_options__STATE_VARIABLE_Globals_437_437, &libs__handle_options__STATE_VARIABLE_Globals_441_441);
          }
#line 930 "handle_options.m"
          {
#line 930 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 268, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_441_441, &libs__handle_options__STATE_VARIABLE_Globals_445_445);
          }
#line 932 "handle_options.m"
          {
#line 932 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 269, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_445_445, &libs__handle_options__STATE_VARIABLE_Globals_449_449);
          }
#line 934 "handle_options.m"
          {
#line 934 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 638, libs__handle_options__V_428_428, libs__handle_options__STATE_VARIABLE_Globals_449_449, &libs__handle_options__STATE_VARIABLE_Globals_453_453);
          }
#line 935 "handle_options.m"
          {
#line 935 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 450, libs__handle_options__V_428_428, libs__handle_options__STATE_VARIABLE_Globals_453_453, &libs__handle_options__STATE_VARIABLE_Globals_457_457);
          }
#line 940 "handle_options.m"
          {
#line 940 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 247, libs__handle_options__V_428_428, libs__handle_options__STATE_VARIABLE_Globals_457_457, &libs__handle_options__STATE_VARIABLE_Globals_461_461);
          }
#line 941 "handle_options.m"
          {
#line 941 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 248, libs__handle_options__V_428_428, libs__handle_options__STATE_VARIABLE_Globals_461_461, &libs__handle_options__STATE_VARIABLE_Globals_465_465);
          }
#line 942 "handle_options.m"
          {
#line 942 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 249, libs__handle_options__V_428_428, libs__handle_options__STATE_VARIABLE_Globals_465_465, &libs__handle_options__STATE_VARIABLE_Globals_469_469);
          }
#line 943 "handle_options.m"
          {
#line 943 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 252, libs__handle_options__V_428_428, libs__handle_options__STATE_VARIABLE_Globals_469_469, &libs__handle_options__STATE_VARIABLE_Globals_473_473);
          }
#line 944 "handle_options.m"
          {
#line 944 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 253, libs__handle_options__V_428_428, libs__handle_options__STATE_VARIABLE_Globals_473_473, &libs__handle_options__STATE_VARIABLE_Globals_482_482);
          }
#line 6098 "libs.handle_options.c"
        }
#line 6100 "libs.handle_options.c"
        break;
#line 6102 "libs.handle_options.c"
    }
#line 967 "handle_options.m"
    {
#line 967 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 217, (MR_Integer) 216, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_482_482, &libs__handle_options__STATE_VARIABLE_Globals_487_487);
    }
#line 974 "handle_options.m"
    libs__handle_options__V_491_491 = (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[224]);
#line 974 "handle_options.m"
    {
#line 974 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 101, (MR_Integer) 546, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_487_487, &libs__handle_options__STATE_VARIABLE_Globals_492_492);
    }
#line 975 "handle_options.m"
    {
#line 975 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 101, (MR_Integer) 548, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_492_492, &libs__handle_options__STATE_VARIABLE_Globals_497_497);
    }
#line 979 "handle_options.m"
    libs__handle_options__V_501_501 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]);
#line 979 "handle_options.m"
    {
#line 979 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 252, (MR_Integer) 247, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_497_497, &libs__handle_options__STATE_VARIABLE_Globals_502_502);
    }
#line 980 "handle_options.m"
    {
#line 980 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 252, (MR_Integer) 248, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_502_502, &libs__handle_options__STATE_VARIABLE_Globals_507_507);
    }
#line 981 "handle_options.m"
    {
#line 981 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 252, (MR_Integer) 249, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_507_507, &libs__handle_options__STATE_VARIABLE_Globals_512_512);
    }
#line 984 "handle_options.m"
    {
#line 984 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 254, (MR_Integer) 315, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_512_512, &libs__handle_options__STATE_VARIABLE_Globals_517_517);
    }
#line 988 "handle_options.m"
    {
#line 988 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 456, (MR_Integer) 450, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_517_517, &libs__handle_options__STATE_VARIABLE_Globals_522_522);
    }
#line 992 "handle_options.m"
    {
#line 992 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 612, (MR_Integer) 610, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_522_522, &libs__handle_options__STATE_VARIABLE_Globals_527_527);
    }
#line 996 "handle_options.m"
    {
#line 996 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_527_527, (MR_Integer) 628, &libs__handle_options__LibLinkages0_68);
    }
#line 1001 "handle_options.m"
    if ((libs__handle_options__LibLinkages0_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 998 "handle_options.m"
      {
#line 999 "handle_options.m"
        {
#line 999 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 628, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[173]), libs__handle_options__STATE_VARIABLE_Globals_527_527, &libs__handle_options__STATE_VARIABLE_Globals_532_532);
        }
#line 998 "handle_options.m"
      }
#line 1001 "handle_options.m"
    else
#line 1002 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_532_532 = libs__handle_options__STATE_VARIABLE_Globals_527_527;
#line 1008 "handle_options.m"
    {
#line 1008 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 610, (MR_Integer) 633, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_532_532, &libs__handle_options__STATE_VARIABLE_Globals_541_541);
    }
#line 1009 "handle_options.m"
    {
#line 1009 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 615, (MR_Integer) 633, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_541_541, &libs__handle_options__STATE_VARIABLE_Globals_546_546);
    }
#line 1010 "handle_options.m"
    {
#line 1010 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 615, (MR_Integer) 610, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_546_546, &libs__handle_options__STATE_VARIABLE_Globals_551_551);
    }
#line 1014 "handle_options.m"
    {
#line 1014 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 615, (MR_Integer) 118, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_551_551, &libs__handle_options__STATE_VARIABLE_Globals_556_556);
    }
#line 1018 "handle_options.m"
    {
#line 1018 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 610, (MR_Integer) 638, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_556_556, &libs__handle_options__STATE_VARIABLE_Globals_561_561);
    }
#line 1022 "handle_options.m"
    {
#line 1022 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_561_561, (MR_Integer) 325, &libs__handle_options__TransOpt_71);
    }
#line 1039 "handle_options.m"
#line 1039 "handle_options.m"
    switch (libs__handle_options__TransOpt_71) {
#line 1039 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1039 "handle_options.m"
      case (MR_Integer) 0:
#line 1040 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_584_584 = libs__handle_options__STATE_VARIABLE_Specs_345_345;
#line 1039 "handle_options.m"
        break;
#line 1039 "handle_options.m"
      case (MR_Integer) 1:
#line 1024 "handle_options.m"
        {
#line 1024 "handle_options.m"
          MR_Word libs__handle_options__UsingMMCMake_72;
#line 1024 "handle_options.m"
          MR_Word libs__handle_options__InvokedByMMCMake_73;
#line 1024 "handle_options.m"
          MR_Word libs__handle_options__UsingOrInvokedByMMCMake_74;

#line 1025 "handle_options.m"
          {
#line 1025 "handle_options.m"
            libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_561_561, (MR_Integer) 610, &libs__handle_options__UsingMMCMake_72);
          }
#line 1026 "handle_options.m"
          {
#line 1026 "handle_options.m"
            libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_561_561, (MR_Integer) 615, &libs__handle_options__InvokedByMMCMake_73);
          }
#line 1028 "handle_options.m"
          {
#line 1028 "handle_options.m"
            libs__handle_options__UsingOrInvokedByMMCMake_74 = mercury__bool__or_2_f_0(libs__handle_options__UsingMMCMake_72, libs__handle_options__InvokedByMMCMake_73);
          }
#line 1036 "handle_options.m"
#line 1036 "handle_options.m"
          switch (libs__handle_options__UsingOrInvokedByMMCMake_74) {
#line 1036 "handle_options.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1036 "handle_options.m"
            case (MR_Integer) 0:
#line 1037 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Specs_584_584 = libs__handle_options__STATE_VARIABLE_Specs_345_345;
#line 1036 "handle_options.m"
              break;
#line 1036 "handle_options.m"
            case (MR_Integer) 1:
#line 1030 "handle_options.m"
              {
#line 1035 "handle_options.m"
                {
#line 1035 "handle_options.m"
                  libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[180]), libs__handle_options__STATE_VARIABLE_Specs_345_345, &libs__handle_options__STATE_VARIABLE_Specs_584_584);
                }
#line 1030 "handle_options.m"
              }
#line 1036 "handle_options.m"
              break;
#line 1036 "handle_options.m"
          }
#line 1024 "handle_options.m"
        }
#line 1039 "handle_options.m"
        break;
#line 1039 "handle_options.m"
    }
#line 1045 "handle_options.m"
    {
#line 1045 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_561_561, (MR_Integer) 321, &libs__handle_options__InterModOpt_76);
    }
#line 1047 "handle_options.m"
    {
#line 1047 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_561_561, (MR_Integer) 326, &libs__handle_options__InterModAnalysis_77);
    }
#line 1050 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__InterModOpt_76 == (MR_Integer) 1);
#line 1050 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1051 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__InterModAnalysis_77 == (MR_Integer) 1);
#line 1049 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1056 "handle_options.m"
      {
#line 1057 "handle_options.m"
        {
#line 1057 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[186]), libs__handle_options__STATE_VARIABLE_Specs_584_584, &libs__handle_options__STATE_VARIABLE_Specs_605_605);
        }
#line 1056 "handle_options.m"
      }
#line 1049 "handle_options.m"
    else
#line 1049 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Specs_605_605 = libs__handle_options__STATE_VARIABLE_Specs_584_584;
#line 1062 "handle_options.m"
    {
#line 1062 "handle_options.m"
      libs__handle_options__succeeded = mercury__io__have_symlinks_0_p_0();
    }
#line 1062 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1062 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_608_608 = libs__handle_options__STATE_VARIABLE_Globals_561_561;
#line 1062 "handle_options.m"
    else
#line 1065 "handle_options.m"
      {
#line 1065 "handle_options.m"
        {
#line 1065 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 619, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_561_561, &libs__handle_options__STATE_VARIABLE_Globals_608_608);
        }
#line 1065 "handle_options.m"
      }
#line 1068 "handle_options.m"
    {
#line 1068 "handle_options.m"
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_608_608, (MR_Integer) 95, &libs__handle_options__MaybeStandaloneInt_79);
    }
#line 1070 "handle_options.m"
    {
#line 1070 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_608_608, (MR_Integer) 556, &libs__handle_options__ExtraInitFunctions_80);
    }
#line 1073 "handle_options.m"
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__MaybeStandaloneInt_79)) == (MR_mktag((MR_Integer) 1)));
#line 1073 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1073 "handle_options.m"
      {
#line 1073 "handle_options.m"
        libs__handle_options__V_81_81 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeStandaloneInt_79, (MR_Integer) 0)));
#line 1074 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__ExtraInitFunctions_80 == (MR_Integer) 1);
#line 1073 "handle_options.m"
      }
#line 1072 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1079 "handle_options.m"
      {
#line 1080 "handle_options.m"
        {
#line 1080 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[192]), libs__handle_options__STATE_VARIABLE_Specs_605_605, &libs__handle_options__STATE_VARIABLE_Specs_630_630);
        }
#line 1079 "handle_options.m"
      }
#line 1072 "handle_options.m"
    else
#line 1072 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Specs_630_630 = libs__handle_options__STATE_VARIABLE_Specs_605_605;
#line 1085 "handle_options.m"
    {
#line 1085 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 403, (MR_Integer) 401, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_608_608, &libs__handle_options__STATE_VARIABLE_Globals_634_634);
    }
#line 1087 "handle_options.m"
    {
#line 1087 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 411, (MR_Integer) 410, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_634_634, &libs__handle_options__STATE_VARIABLE_Globals_639_639);
    }
#line 1089 "handle_options.m"
    {
#line 1089 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 410, (MR_Integer) 409, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_639_639, &libs__handle_options__STATE_VARIABLE_Globals_644_644);
    }
#line 1090 "handle_options.m"
    {
#line 1090 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 410, (MR_Integer) 14, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_644_644, &libs__handle_options__STATE_VARIABLE_Globals_649_649);
    }
#line 1092 "handle_options.m"
    {
#line 1092 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 418, (MR_Integer) 417, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_649_649, &libs__handle_options__STATE_VARIABLE_Globals_654_654);
    }
#line 1094 "handle_options.m"
    {
#line 1094 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 417, (MR_Integer) 416, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_654_654, &libs__handle_options__STATE_VARIABLE_Globals_659_659);
    }
#line 1095 "handle_options.m"
    {
#line 1095 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 417, (MR_Integer) 14, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_659_659, &libs__handle_options__STATE_VARIABLE_Globals_664_664);
    }
#line 1097 "handle_options.m"
    {
#line 1097 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 88, (MR_Integer) 325, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_664_664, &libs__handle_options__STATE_VARIABLE_Globals_669_669);
    }
#line 1099 "handle_options.m"
    {
#line 1099 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 325, (MR_Integer) 321, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_669_669, &libs__handle_options__STATE_VARIABLE_Globals_674_674);
    }
#line 1101 "handle_options.m"
    {
#line 1101 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 324, (MR_Integer) 323, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_674_674, &libs__handle_options__STATE_VARIABLE_Globals_679_679);
    }
#line 1106 "handle_options.m"
    {
#line 1106 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 321, (MR_Integer) 323, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_679_679, &libs__handle_options__STATE_VARIABLE_Globals_684_684);
    }
#line 1108 "handle_options.m"
    {
#line 1108 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 325, (MR_Integer) 324, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_684_684, &libs__handle_options__STATE_VARIABLE_Globals_689_689);
    }
#line 1117 "handle_options.m"
    {
#line 1117 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 323, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_689_689, &libs__handle_options__STATE_VARIABLE_Globals_693_693);
    }
#line 1119 "handle_options.m"
    {
#line 1119 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 116, (MR_Integer) 117, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_693_693, &libs__handle_options__STATE_VARIABLE_Globals_698_698);
    }
#line 1121 "handle_options.m"
    {
#line 1121 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 50, (MR_Integer) 49, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_698_698, &libs__handle_options__STATE_VARIABLE_Globals_703_703);
    }
#line 1128 "handle_options.m"
    {
#line 1128 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 91, (MR_Integer) 116, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_703_703, &libs__handle_options__STATE_VARIABLE_Globals_708_708);
    }
#line 1130 "handle_options.m"
    {
#line 1130 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 93, (MR_Integer) 116, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_708_708, &libs__handle_options__STATE_VARIABLE_Globals_713_713);
    }
#line 1132 "handle_options.m"
    {
#line 1132 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 92, (MR_Integer) 116, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_713_713, &libs__handle_options__STATE_VARIABLE_Globals_718_718);
    }
#line 1134 "handle_options.m"
    {
#line 1134 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 96, (MR_Integer) 116, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_718_718, &libs__handle_options__STATE_VARIABLE_Globals_723_723);
    }
#line 1136 "handle_options.m"
    {
#line 1136 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 86, (MR_Integer) 116, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_723_723, &libs__handle_options__STATE_VARIABLE_Globals_728_728);
    }
#line 1138 "handle_options.m"
    {
#line 1138 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 85, (MR_Integer) 116, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_728_728, &libs__handle_options__STATE_VARIABLE_Globals_733_733);
    }
#line 1140 "handle_options.m"
    {
#line 1140 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 84, (MR_Integer) 116, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_733_733, &libs__handle_options__STATE_VARIABLE_Globals_738_738);
    }
#line 1142 "handle_options.m"
    {
#line 1142 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 90, (MR_Integer) 116, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_738_738, &libs__handle_options__STATE_VARIABLE_Globals_743_743);
    }
#line 1144 "handle_options.m"
    {
#line 1144 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 102, (MR_Integer) 116, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_743_743, &libs__handle_options__STATE_VARIABLE_Globals_748_748);
    }
#line 1146 "handle_options.m"
    {
#line 1146 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 87, (MR_Integer) 116, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_748_748, &libs__handle_options__STATE_VARIABLE_Globals_753_753);
    }
#line 1148 "handle_options.m"
    {
#line 1148 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 88, (MR_Integer) 116, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_753_753, &libs__handle_options__STATE_VARIABLE_Globals_758_758);
    }
#line 1150 "handle_options.m"
    {
#line 1150 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 89, (MR_Integer) 116, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_758_758, &libs__handle_options__STATE_VARIABLE_Globals_763_763);
    }
#line 1152 "handle_options.m"
    {
#line 1152 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 98, (MR_Integer) 116, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_763_763, &libs__handle_options__STATE_VARIABLE_Globals_768_768);
    }
#line 1154 "handle_options.m"
    {
#line 1154 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 97, (MR_Integer) 116, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_768_768, &libs__handle_options__STATE_VARIABLE_Globals_773_773);
    }
#line 1160 "handle_options.m"
    {
#line 1160 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 86, (MR_Integer) 138, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_773_773, &libs__handle_options__STATE_VARIABLE_Globals_778_778);
    }
#line 1162 "handle_options.m"
    {
#line 1162 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 85, (MR_Integer) 138, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_778_778, &libs__handle_options__STATE_VARIABLE_Globals_783_783);
    }
#line 1164 "handle_options.m"
    {
#line 1164 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 84, (MR_Integer) 138, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_783_783, &libs__handle_options__STATE_VARIABLE_Globals_788_788);
    }
#line 1166 "handle_options.m"
    {
#line 1166 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 87, (MR_Integer) 138, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_788_788, &libs__handle_options__STATE_VARIABLE_Globals_793_793);
    }
#line 1168 "handle_options.m"
    {
#line 1168 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 88, (MR_Integer) 138, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_793_793, &libs__handle_options__STATE_VARIABLE_Globals_798_798);
    }
#line 1173 "handle_options.m"
    {
#line 1173 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 84, (MR_Integer) 117, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_798_798, &libs__handle_options__STATE_VARIABLE_Globals_803_803);
    }
#line 1180 "handle_options.m"
    {
#line 1180 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 90, (MR_Integer) 321, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_803_803, &libs__handle_options__STATE_VARIABLE_Globals_808_808);
    }
#line 1188 "handle_options.m"
    {
#line 1188 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_808_808, (MR_Integer) 116, &libs__handle_options__Smart_83);
    }
#line 1189 "handle_options.m"
    {
#line 1189 "handle_options.m"
      libs__handle_options__maybe_disable_smart_recompilation_8_p_0(libs__handle_options__Smart_83, (MR_Integer) 321, (MR_Integer) 1, (MR_String) "\140--intermodule-optimization\'", libs__handle_options__STATE_VARIABLE_Globals_808_808, &libs__handle_options__STATE_VARIABLE_Globals_814_814);
    }
#line 1191 "handle_options.m"
    {
#line 1191 "handle_options.m"
      libs__handle_options__maybe_disable_smart_recompilation_8_p_0(libs__handle_options__Smart_83, (MR_Integer) 323, (MR_Integer) 1, (MR_String) "\140--use-opt-files\'", libs__handle_options__STATE_VARIABLE_Globals_814_814, &libs__handle_options__STATE_VARIABLE_Globals_819_819);
    }
#line 1200 "handle_options.m"
    {
#line 1200 "handle_options.m"
      libs__handle_options__maybe_disable_smart_recompilation_8_p_0(libs__handle_options__Smart_83, (MR_Integer) 99, (MR_Integer) 0, (MR_String) "\140--no-target-code-only\'", libs__handle_options__STATE_VARIABLE_Globals_819_819, &libs__handle_options__STATE_VARIABLE_Globals_824_824);
    }
#line 1203 "handle_options.m"
    {
#line 1203 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 634, (MR_Integer) 633, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_824_824, &libs__handle_options__STATE_VARIABLE_Globals_829_829);
    }
#line 1205 "handle_options.m"
    {
#line 1205 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 47, (MR_Integer) 46, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_829_829, &libs__handle_options__STATE_VARIABLE_Globals_834_834);
    }
#line 1206 "handle_options.m"
    {
#line 1206 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 46, (MR_Integer) 52, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_834_834, &libs__handle_options__STATE_VARIABLE_Globals_839_839);
    }
#line 1207 "handle_options.m"
    {
#line 1207 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_839_839, (MR_Integer) 47, &libs__handle_options__VeryVerbose_84);
    }
#line 1208 "handle_options.m"
    {
#line 1208 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_839_839, (MR_Integer) 56, &libs__handle_options__Statistics_85);
    }
#line 1210 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__VeryVerbose_84 == (MR_Integer) 1);
#line 1210 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1211 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__Statistics_85 == (MR_Integer) 1);
#line 1209 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1213 "handle_options.m"
      {
#line 1213 "handle_options.m"
        {
#line 1213 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 57, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[3]), libs__handle_options__STATE_VARIABLE_Globals_839_839, &libs__handle_options__STATE_VARIABLE_Globals_845_845);
        }
#line 1213 "handle_options.m"
      }
#line 1209 "handle_options.m"
    else
#line 1209 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_845_845 = libs__handle_options__STATE_VARIABLE_Globals_839_839;
#line 1218 "handle_options.m"
    {
#line 1218 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 63, (MR_Integer) 61, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_845_845, &libs__handle_options__STATE_VARIABLE_Globals_850_850);
    }
#line 1219 "handle_options.m"
    {
#line 1219 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 64, (MR_Integer) 61, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_850_850, &libs__handle_options__STATE_VARIABLE_Globals_855_855);
    }
#line 1220 "handle_options.m"
    {
#line 1220 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 62, (MR_Integer) 61, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_855_855, &libs__handle_options__STATE_VARIABLE_Globals_860_860);
    }
#line 1223 "handle_options.m"
    {
#line 1223 "handle_options.m"
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_860_860, (MR_Integer) 74, &libs__handle_options__DebugLiveness_86);
    }
#line 1225 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__DebugLiveness_86 >= (MR_Integer) 0);
#line 1225 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1225 "handle_options.m"
      {
#line 1226 "handle_options.m"
        libs__handle_options__V_864_864 = (MR_String) "all";
#line 1226 "handle_options.m"
        {
#line 1226 "handle_options.m"
          libs__handle_options__succeeded = libs__handle_options__convert_dump_alias_2_p_0(libs__handle_options__V_864_864, &libs__handle_options__AllDumpOptions_87);
        }
#line 1225 "handle_options.m"
      }
#line 1224 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1233 "handle_options.m"
      {
#line 1233 "handle_options.m"
        MR_String libs__handle_options__DumpOptions0_88;
#line 1233 "handle_options.m"
        MR_String libs__handle_options__DumpOptions1_89;
#line 1233 "handle_options.m"
        MR_Word libs__handle_options__V_867_867;

#line 1232 "handle_options.m"
        {
#line 1232 "handle_options.m"
          libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_860_860, (MR_Integer) 152, &libs__handle_options__DumpOptions0_88);
        }
#line 1234 "handle_options.m"
        {
#line 1234 "handle_options.m"
          mercury__string__append_3_p_2(libs__handle_options__DumpOptions0_88, libs__handle_options__AllDumpOptions_87, &libs__handle_options__DumpOptions1_89);
        }
#line 1235 "handle_options.m"
        {
#line 1235 "handle_options.m"
          libs__handle_options__V_867_867 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1235 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_867_867, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1235 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_867_867, 1) = ((MR_Box) (libs__handle_options__DumpOptions1_89));
#line 1235 "handle_options.m"
        }
#line 1235 "handle_options.m"
        {
#line 1235 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 152, libs__handle_options__V_867_867, libs__handle_options__STATE_VARIABLE_Globals_860_860, &libs__handle_options__STATE_VARIABLE_Globals_868_868);
        }
#line 1233 "handle_options.m"
      }
#line 1224 "handle_options.m"
    else
#line 1224 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_868_868 = libs__handle_options__STATE_VARIABLE_Globals_860_860;
#line 1240 "handle_options.m"
    {
#line 1240 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 64, (MR_Integer) 61, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_868_868, &libs__handle_options__STATE_VARIABLE_Globals_872_872);
    }
#line 1241 "handle_options.m"
    {
#line 1241 "handle_options.m"
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_872_872, (MR_Integer) 65, &libs__handle_options__DebugModesPredId_90);
    }
#line 1243 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__DebugModesPredId_90 > (MR_Integer) 0);
#line 1243 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1244 "handle_options.m"
      {
#line 1244 "handle_options.m"
        {
#line 1244 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 61, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_872_872, &libs__handle_options__STATE_VARIABLE_Globals_878_878);
        }
#line 1244 "handle_options.m"
      }
#line 1243 "handle_options.m"
    else
#line 1243 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_878_878 = libs__handle_options__STATE_VARIABLE_Globals_872_872;
#line 1249 "handle_options.m"
    {
#line 1249 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_878_878, (MR_Integer) 353, &libs__handle_options__DebugUnneededCodePredNames_91);
    }
#line 1253 "handle_options.m"
    if ((libs__handle_options__DebugUnneededCodePredNames_91 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1252 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_883_883 = libs__handle_options__STATE_VARIABLE_Globals_878_878;
#line 1253 "handle_options.m"
    else
#line 1254 "handle_options.m"
      {
#line 1255 "handle_options.m"
        {
#line 1255 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 352, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_878_878, &libs__handle_options__STATE_VARIABLE_Globals_883_883);
        }
#line 1254 "handle_options.m"
      }
#line 1258 "handle_options.m"
    {
#line 1258 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_883_883, (MR_Integer) 71, &libs__handle_options__DebugOptPredIdStrs_94);
    }
#line 1260 "handle_options.m"
    {
#line 1260 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_883_883, (MR_Integer) 72, &libs__handle_options__DebugOptPredNames_95);
    }
#line 1263 "handle_options.m"
    {
#line 1263 "handle_options.m"
      MR_String libs__handle_options__V_96_96;
#line 1263 "handle_options.m"
      MR_Word libs__handle_options__V_97_97;

#line 1263 "handle_options.m"
      libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DebugOptPredIdStrs_94)) == (MR_mktag((MR_Integer) 1)));
#line 1263 "handle_options.m"
      if (libs__handle_options__succeeded)
#line 1263 "handle_options.m"
        {
#line 1263 "handle_options.m"
          libs__handle_options__V_96_96 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredIdStrs_94, (MR_Integer) 0)));
#line 1263 "handle_options.m"
          libs__handle_options__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredIdStrs_94, (MR_Integer) 1)));
#line 1263 "handle_options.m"
        }
#line 1263 "handle_options.m"
    }
#line 1264 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 1264 "handle_options.m"
      {
#line 1264 "handle_options.m"
        MR_String libs__handle_options__V_98_98;
#line 1264 "handle_options.m"
        MR_Word libs__handle_options__V_99_99;

#line 1264 "handle_options.m"
        libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DebugOptPredNames_95)) == (MR_mktag((MR_Integer) 1)));
#line 1264 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1264 "handle_options.m"
          {
#line 1264 "handle_options.m"
            libs__handle_options__V_98_98 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredNames_95, (MR_Integer) 0)));
#line 1264 "handle_options.m"
            libs__handle_options__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredNames_95, (MR_Integer) 1)));
#line 1264 "handle_options.m"
          }
#line 1264 "handle_options.m"
      }
#line 1262 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1267 "handle_options.m"
      {
#line 1267 "handle_options.m"
        {
#line 1267 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 69, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_883_883, &libs__handle_options__STATE_VARIABLE_Globals_889_889);
        }
#line 1267 "handle_options.m"
      }
#line 1262 "handle_options.m"
    else
#line 1262 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_889_889 = libs__handle_options__STATE_VARIABLE_Globals_883_883;
#line 1272 "handle_options.m"
    {
#line 1272 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_889_889, (MR_Integer) 80, &libs__handle_options__DebugIntermoduleAnalysis_100);
    }
#line 1274 "handle_options.m"
    {
#line 1274 "handle_options.m"
      analysis__enable_debug_messages_3_p_0(libs__handle_options__DebugIntermoduleAnalysis_100);
    }
#line 1276 "handle_options.m"
    {
#line 1276 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_889_889, (MR_Integer) 148, &libs__handle_options__DumpHLDSPredIds_101);
    }
#line 1287 "handle_options.m"
    if ((libs__handle_options__DumpHLDSPredIds_101 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1288 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_901_901 = libs__handle_options__STATE_VARIABLE_Globals_889_889;
#line 1287 "handle_options.m"
    else
#line 1279 "handle_options.m"
      {
#line 1279 "handle_options.m"
        MR_String libs__handle_options__DumpOptions2_104;
#line 1279 "handle_options.m"
        MR_String libs__handle_options__DumpOptions3_105;
#line 1279 "handle_options.m"
        MR_String libs__handle_options__DumpOptions_106;
#line 1279 "handle_options.m"
        MR_Word libs__handle_options__V_900_900;

#line 1280 "handle_options.m"
        {
#line 1280 "handle_options.m"
          libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_889_889, (MR_Integer) 152, &libs__handle_options__DumpOptions2_104);
        }
#line 1283 "handle_options.m"
        {
#line 1283 "handle_options.m"
          mercury__string__replace_all_4_p_0(libs__handle_options__DumpOptions2_104, (MR_String) "M", (MR_String) "", &libs__handle_options__DumpOptions3_105);
        }
#line 1284 "handle_options.m"
        {
#line 1284 "handle_options.m"
          mercury__string__replace_all_4_p_0(libs__handle_options__DumpOptions3_105, (MR_String) "T", (MR_String) "", &libs__handle_options__DumpOptions_106);
        }
#line 1285 "handle_options.m"
        {
#line 1285 "handle_options.m"
          libs__handle_options__V_900_900 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1285 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_900_900, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1285 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_900_900, 1) = ((MR_Box) (libs__handle_options__DumpOptions_106));
#line 1285 "handle_options.m"
        }
#line 1285 "handle_options.m"
        {
#line 1285 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 152, libs__handle_options__V_900_900, libs__handle_options__STATE_VARIABLE_Globals_889_889, &libs__handle_options__STATE_VARIABLE_Globals_901_901);
        }
#line 1279 "handle_options.m"
      }
#line 1291 "handle_options.m"
    {
#line 1291 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 79, (MR_Integer) 160, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_901_901, &libs__handle_options__STATE_VARIABLE_Globals_905_905);
    }
#line 1293 "handle_options.m"
    {
#line 1293 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 160, (MR_Integer) 158, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_905_905, &libs__handle_options__STATE_VARIABLE_Globals_910_910);
    }
#line 1295 "handle_options.m"
    {
#line 1295 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 159, (MR_Integer) 158, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_910_910, &libs__handle_options__STATE_VARIABLE_Globals_915_915);
    }
#line 1298 "handle_options.m"
    {
#line 1298 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 141, (MR_Integer) 140, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_915_915, &libs__handle_options__STATE_VARIABLE_Globals_920_920);
    }
#line 1303 "handle_options.m"
    {
#line 1303 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_920_920, (MR_Integer) 216, &libs__handle_options__UseTrail_107);
    }
#line 1304 "handle_options.m"
    {
#line 1304 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_920_920, (MR_Integer) 252, &libs__handle_options__HighLevelCode_108);
    }
#line 1305 "handle_options.m"
    {
#line 1305 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_920_920, (MR_Integer) 218, &libs__handle_options__UseMinimalModelStackCopy_109);
    }
#line 1307 "handle_options.m"
    {
#line 1307 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_920_920, (MR_Integer) 219, &libs__handle_options__UseMinimalModelOwnStacks_110);
    }
#line 1309 "handle_options.m"
    {
#line 1309 "handle_options.m"
      mercury__bool__or_3_p_0(libs__handle_options__UseMinimalModelStackCopy_109, libs__handle_options__UseMinimalModelOwnStacks_110, &libs__handle_options__UseMinimalModel_111);
    }
#line 1312 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelStackCopy_109 == (MR_Integer) 1);
#line 1312 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1313 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelOwnStacks_110 == (MR_Integer) 1);
#line 1311 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1317 "handle_options.m"
      {
#line 1318 "handle_options.m"
        {
#line 1318 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[196]), libs__handle_options__STATE_VARIABLE_Specs_630_630, &libs__handle_options__STATE_VARIABLE_Specs_935_935);
        }
#line 1317 "handle_options.m"
      }
#line 1311 "handle_options.m"
    else
#line 1319 "handle_options.m"
      {
#line 1320 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__UseMinimalModel_111 == (MR_Integer) 1);
#line 1320 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1321 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_108 == (MR_Integer) 1);
#line 1319 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1325 "handle_options.m"
          {
#line 1326 "handle_options.m"
            {
#line 1326 "handle_options.m"
              libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[200]), libs__handle_options__STATE_VARIABLE_Specs_630_630, &libs__handle_options__STATE_VARIABLE_Specs_935_935);
            }
#line 1325 "handle_options.m"
          }
#line 1319 "handle_options.m"
        else
#line 1327 "handle_options.m"
          {
#line 1328 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__UseMinimalModel_111 == (MR_Integer) 1);
#line 1328 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 1329 "handle_options.m"
              libs__handle_options__succeeded = (libs__handle_options__UseTrail_107 == (MR_Integer) 1);
#line 1327 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 1333 "handle_options.m"
              {
#line 1334 "handle_options.m"
                {
#line 1334 "handle_options.m"
                  libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[203]), libs__handle_options__STATE_VARIABLE_Specs_630_630, &libs__handle_options__STATE_VARIABLE_Specs_935_935);
                }
#line 1333 "handle_options.m"
              }
#line 1327 "handle_options.m"
            else
#line 1327 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Specs_935_935 = libs__handle_options__STATE_VARIABLE_Specs_630_630;
#line 1327 "handle_options.m"
          }
#line 1319 "handle_options.m"
      }
#line 1345 "handle_options.m"
    libs__handle_options__V_958_958 = (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[4]);
#line 1345 "handle_options.m"
    {
#line 1345 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 253, (MR_Integer) 244, libs__handle_options__V_958_958, libs__handle_options__STATE_VARIABLE_Globals_920_920, &libs__handle_options__STATE_VARIABLE_Globals_959_959);
    }
#line 1368 "handle_options.m"
#line 1368 "handle_options.m"
    switch (libs__handle_options__Target_27) {
#line 1368 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1368 "handle_options.m"
      case (MR_Integer) 0:
#line 1347 "handle_options.m"
        {
#line 1347 "handle_options.m"
          MR_Integer libs__handle_options__ArgPackBits0_115;
#line 1347 "handle_options.m"
          MR_Integer libs__handle_options__BitsPerWord_116;
#line 1347 "handle_options.m"
          MR_Integer libs__handle_options__ArgPackBits_117;
#line 1347 "handle_options.m"
          MR_Word libs__handle_options__V_1006_1006;

#line 1348 "handle_options.m"
          {
#line 1348 "handle_options.m"
            libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_959_959, (MR_Integer) 244, &libs__handle_options__ArgPackBits0_115);
          }
#line 1349 "handle_options.m"
          {
#line 1349 "handle_options.m"
            libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_959_959, (MR_Integer) 238, &libs__handle_options__BitsPerWord_116);
          }
#line 1351 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__ArgPackBits0_115 < (MR_Integer) 0);
#line 1351 "handle_options.m"
          if (libs__handle_options__succeeded)
#line 1352 "handle_options.m"
            {
#line 1352 "handle_options.m"
              libs__handle_options__ArgPackBits_117 = libs__handle_options__BitsPerWord_116;
#line 1352 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Specs_1004_1004 = libs__handle_options__STATE_VARIABLE_Specs_935_935;
#line 1352 "handle_options.m"
            }
#line 1351 "handle_options.m"
          else
#line 1353 "handle_options.m"
            {
#line 1353 "handle_options.m"
              libs__handle_options__succeeded = (libs__handle_options__ArgPackBits0_115 > libs__handle_options__BitsPerWord_116);
#line 1353 "handle_options.m"
              if (libs__handle_options__succeeded)
#line 1354 "handle_options.m"
                {
#line 1354 "handle_options.m"
                  MR_Word libs__handle_options__ArgPackBitsSpec_118;
#line 1354 "handle_options.m"
                  MR_Word libs__handle_options__V_974_974;
#line 1354 "handle_options.m"
                  MR_Word libs__handle_options__V_975_975;
#line 1354 "handle_options.m"
                  MR_Word libs__handle_options__V_977_977;
#line 1354 "handle_options.m"
                  MR_Word libs__handle_options__V_980_980;
#line 1354 "handle_options.m"
                  MR_Word libs__handle_options__V_983_983;
#line 1354 "handle_options.m"
                  MR_Word libs__handle_options__V_986_986;
#line 1354 "handle_options.m"
                  MR_Word libs__handle_options__V_989_989;
#line 1354 "handle_options.m"
                  MR_Word libs__handle_options__V_992_992;
#line 1354 "handle_options.m"
                  MR_Word libs__handle_options__V_995_995;
#line 1354 "handle_options.m"
                  MR_Word libs__handle_options__V_996_996;

#line 1354 "handle_options.m"
                  libs__handle_options__ArgPackBits_117 = libs__handle_options__BitsPerWord_116;
#line 1357 "handle_options.m"
                  libs__handle_options__V_975_975 = (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[226]);
#line 1362 "handle_options.m"
                  {
#line 1362 "handle_options.m"
                    libs__handle_options__V_996_996 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1362 "handle_options.m"
                    MR_hl_field(MR_mktag(3), libs__handle_options__V_996_996, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1362 "handle_options.m"
                    MR_hl_field(MR_mktag(3), libs__handle_options__V_996_996, 1) = ((MR_Box) (libs__handle_options__BitsPerWord_116));
#line 1362 "handle_options.m"
                  }
#line 1362 "handle_options.m"
                  {
#line 1362 "handle_options.m"
                    libs__handle_options__V_995_995 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1362 "handle_options.m"
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_995_995, 0) = ((MR_Box) (libs__handle_options__V_996_996));
#line 1362 "handle_options.m"
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_995_995, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
#line 1362 "handle_options.m"
                  }
#line 1361 "handle_options.m"
                  {
#line 1361 "handle_options.m"
                    libs__handle_options__V_992_992 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1361 "handle_options.m"
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_992_992, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[231])));
#line 1361 "handle_options.m"
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_992_992, 1) = ((MR_Box) (libs__handle_options__V_995_995));
#line 1361 "handle_options.m"
                  }
#line 1360 "handle_options.m"
                  {
#line 1360 "handle_options.m"
                    libs__handle_options__V_989_989 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1360 "handle_options.m"
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_989_989, 0) = ((MR_Box) (libs__handle_options__V_975_975));
#line 1360 "handle_options.m"
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_989_989, 1) = ((MR_Box) (libs__handle_options__V_992_992));
#line 1360 "handle_options.m"
                  }
#line 1360 "handle_options.m"
                  {
#line 1360 "handle_options.m"
                    libs__handle_options__V_986_986 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1360 "handle_options.m"
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_986_986, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[230])));
#line 1360 "handle_options.m"
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_986_986, 1) = ((MR_Box) (libs__handle_options__V_989_989));
#line 1360 "handle_options.m"
                  }
#line 1359 "handle_options.m"
                  {
#line 1359 "handle_options.m"
                    libs__handle_options__V_983_983 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1359 "handle_options.m"
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_983_983, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[229])));
#line 1359 "handle_options.m"
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_983_983, 1) = ((MR_Box) (libs__handle_options__V_986_986));
#line 1359 "handle_options.m"
                  }
#line 1359 "handle_options.m"
                  {
#line 1359 "handle_options.m"
                    libs__handle_options__V_980_980 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1359 "handle_options.m"
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_980_980, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[228])));
#line 1359 "handle_options.m"
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_980_980, 1) = ((MR_Box) (libs__handle_options__V_983_983));
#line 1359 "handle_options.m"
                  }
#line 1358 "handle_options.m"
                  {
#line 1358 "handle_options.m"
                    libs__handle_options__V_977_977 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1358 "handle_options.m"
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_977_977, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[227])));
#line 1358 "handle_options.m"
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_977_977, 1) = ((MR_Box) (libs__handle_options__V_980_980));
#line 1358 "handle_options.m"
                  }
#line 1357 "handle_options.m"
                  {
#line 1357 "handle_options.m"
                    libs__handle_options__V_974_974 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1357 "handle_options.m"
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_974_974, 0) = ((MR_Box) (libs__handle_options__V_975_975));
#line 1357 "handle_options.m"
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_974_974, 1) = ((MR_Box) (libs__handle_options__V_977_977));
#line 1357 "handle_options.m"
                  }
#line 1356 "handle_options.m"
                  {
#line 1356 "handle_options.m"
                    libs__handle_options__ArgPackBitsSpec_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1356 "handle_options.m"
                    MR_hl_field(MR_mktag(1), libs__handle_options__ArgPackBitsSpec_118, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[225])));
#line 1356 "handle_options.m"
                    MR_hl_field(MR_mktag(1), libs__handle_options__ArgPackBitsSpec_118, 1) = ((MR_Box) (libs__handle_options__V_974_974));
#line 1356 "handle_options.m"
                  }
#line 1363 "handle_options.m"
                  {
#line 1363 "handle_options.m"
                    libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__ArgPackBitsSpec_118, libs__handle_options__STATE_VARIABLE_Specs_935_935, &libs__handle_options__STATE_VARIABLE_Specs_1004_1004);
                  }
#line 1354 "handle_options.m"
                }
#line 1353 "handle_options.m"
              else
#line 1365 "handle_options.m"
                {
#line 1365 "handle_options.m"
                  libs__handle_options__ArgPackBits_117 = libs__handle_options__ArgPackBits0_115;
#line 1365 "handle_options.m"
                  libs__handle_options__STATE_VARIABLE_Specs_1004_1004 = libs__handle_options__STATE_VARIABLE_Specs_935_935;
#line 1365 "handle_options.m"
                }
#line 1353 "handle_options.m"
            }
#line 1367 "handle_options.m"
          {
#line 1367 "handle_options.m"
            libs__handle_options__V_1006_1006 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1367 "handle_options.m"
            MR_hl_field(MR_mktag(2), libs__handle_options__V_1006_1006, 0) = ((MR_Box) (libs__handle_options__ArgPackBits_117));
#line 1367 "handle_options.m"
          }
#line 1367 "handle_options.m"
          {
#line 1367 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 244, libs__handle_options__V_1006_1006, libs__handle_options__STATE_VARIABLE_Globals_959_959, &libs__handle_options__STATE_VARIABLE_Globals_1007_1007);
          }
#line 1347 "handle_options.m"
        }
#line 1368 "handle_options.m"
        break;
#line 1368 "handle_options.m"
      case (MR_Integer) 1:
#line 1368 "handle_options.m"
      case (MR_Integer) 3:
#line 1368 "handle_options.m"
      case (MR_Integer) 2:
#line 1372 "handle_options.m"
        {
#line 1372 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_963_963;

#line 1373 "handle_options.m"
          {
#line 1373 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 244, libs__handle_options__V_958_958, libs__handle_options__STATE_VARIABLE_Globals_959_959, &libs__handle_options__STATE_VARIABLE_Globals_963_963);
          }
#line 1374 "handle_options.m"
          {
#line 1374 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 245, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_963_963, &libs__handle_options__STATE_VARIABLE_Globals_1007_1007);
          }
#line 1372 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Specs_1004_1004 = libs__handle_options__STATE_VARIABLE_Specs_935_935;
#line 1372 "handle_options.m"
        }
#line 1368 "handle_options.m"
        break;
#line 1368 "handle_options.m"
    }
#line 1378 "handle_options.m"
    {
#line 1378 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 222, (MR_Integer) 241, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1007_1007, &libs__handle_options__STATE_VARIABLE_Globals_1011_1011);
    }
#line 1382 "handle_options.m"
    {
#line 1382 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 252, (MR_Integer) 251, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1011_1011, &libs__handle_options__STATE_VARIABLE_Globals_1016_1016);
    }
#line 1383 "handle_options.m"
    {
#line 1383 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 241, (MR_Integer) 251, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1016_1016, &libs__handle_options__STATE_VARIABLE_Globals_1021_1021);
    }
#line 1393 "handle_options.m"
#line 1393 "handle_options.m"
    switch (libs__handle_options__Target_27) {
#line 1393 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1393 "handle_options.m"
      case (MR_Integer) 0:
#line 1389 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1025_1025 = libs__handle_options__STATE_VARIABLE_Globals_1021_1021;
#line 1393 "handle_options.m"
        break;
#line 1393 "handle_options.m"
      case (MR_Integer) 1:
#line 1390 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1025_1025 = libs__handle_options__STATE_VARIABLE_Globals_1021_1021;
#line 1393 "handle_options.m"
        break;
#line 1393 "handle_options.m"
      case (MR_Integer) 3:
#line 1394 "handle_options.m"
        {
#line 1395 "handle_options.m"
          {
#line 1395 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 293, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1021_1021, &libs__handle_options__STATE_VARIABLE_Globals_1025_1025);
          }
#line 1394 "handle_options.m"
        }
#line 1393 "handle_options.m"
        break;
#line 1393 "handle_options.m"
      case (MR_Integer) 2:
#line 1391 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1025_1025 = libs__handle_options__STATE_VARIABLE_Globals_1021_1021;
#line 1393 "handle_options.m"
        break;
#line 1393 "handle_options.m"
    }
#line 1400 "handle_options.m"
#line 1400 "handle_options.m"
    switch (libs__handle_options__Target_27) {
#line 1400 "handle_options.m"
      default:
#line 1400 "handle_options.m"
        libs__handle_options__succeeded = MR_FALSE;
#line 1400 "handle_options.m"
        break;
#line 1400 "handle_options.m"
      case (MR_Integer) 1:
#line 1399 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 1400 "handle_options.m"
        break;
#line 1400 "handle_options.m"
      case (MR_Integer) 2:
#line 1400 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 1400 "handle_options.m"
        break;
#line 1400 "handle_options.m"
    }
#line 1398 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1405 "handle_options.m"
      {
#line 1405 "handle_options.m"
        {
#line 1405 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 432, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[5]), libs__handle_options__STATE_VARIABLE_Globals_1025_1025, &libs__handle_options__STATE_VARIABLE_Globals_1029_1029);
        }
#line 1405 "handle_options.m"
      }
#line 1398 "handle_options.m"
    else
#line 1398 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1029_1029 = libs__handle_options__STATE_VARIABLE_Globals_1025_1025;
#line 1410 "handle_options.m"
    {
#line 1410 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 480, (MR_Integer) 550, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1029_1029, &libs__handle_options__STATE_VARIABLE_Globals_1034_1034);
    }
#line 1413 "handle_options.m"
    {
#line 1413 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 206, (MR_Integer) 197, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1034_1034, &libs__handle_options__STATE_VARIABLE_Globals_1039_1039);
    }
#line 1418 "handle_options.m"
    {
#line 1418 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 197, (MR_Integer) 209, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1039_1039, &libs__handle_options__STATE_VARIABLE_Globals_1044_1044);
    }
#line 1428 "handle_options.m"
    {
#line 1428 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 206, (MR_Integer) 129, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1044_1044, &libs__handle_options__STATE_VARIABLE_Globals_1049_1049);
    }
#line 1429 "handle_options.m"
    {
#line 1429 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1049_1049, (MR_Integer) 129, &libs__handle_options__ProfOptimized_119);
    }
#line 1433 "handle_options.m"
#line 1433 "handle_options.m"
    switch (libs__handle_options__ProfOptimized_119) {
#line 1433 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1433 "handle_options.m"
      case (MR_Integer) 0:
#line 1431 "handle_options.m"
        {
#line 1432 "handle_options.m"
          {
#line 1432 "handle_options.m"
            libs__handle_options__option_implies_5_p_0((MR_Integer) 193, (MR_Integer) 329, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1049_1049, &libs__handle_options__STATE_VARIABLE_Globals_1055_1055);
          }
#line 1431 "handle_options.m"
        }
#line 1433 "handle_options.m"
        break;
#line 1433 "handle_options.m"
      case (MR_Integer) 1:
#line 1434 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1055_1055 = libs__handle_options__STATE_VARIABLE_Globals_1049_1049;
#line 1433 "handle_options.m"
        break;
#line 1433 "handle_options.m"
    }
#line 1439 "handle_options.m"
    {
#line 1439 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 193, (MR_Integer) 195, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1055_1055, &libs__handle_options__STATE_VARIABLE_Globals_1060_1060);
    }
#line 1441 "handle_options.m"
    {
#line 1441 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 210, (MR_Integer) 195, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1060_1060, &libs__handle_options__STATE_VARIABLE_Globals_1065_1065);
    }
#line 1443 "handle_options.m"
    {
#line 1443 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 211, (MR_Integer) 195, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1065_1065, &libs__handle_options__STATE_VARIABLE_Globals_1070_1070);
    }
#line 1446 "handle_options.m"
    {
#line 1446 "handle_options.m"
      libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1070_1070, (MR_Integer) 212, &libs__handle_options__ExpComp_120);
    }
#line 1447 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__ExpComp_120, (MR_String) "") == 0);
#line 1447 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1447 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1075_1075 = libs__handle_options__STATE_VARIABLE_Globals_1070_1070;
#line 1447 "handle_options.m"
    else
#line 1450 "handle_options.m"
      {
#line 1450 "handle_options.m"
        {
#line 1450 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 329, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1070_1070, &libs__handle_options__STATE_VARIABLE_Globals_1075_1075);
        }
#line 1450 "handle_options.m"
      }
#line 1454 "handle_options.m"
    {
#line 1454 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 185, (MR_Integer) 184, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1075_1075, &libs__handle_options__STATE_VARIABLE_Globals_1080_1080);
    }
#line 1457 "handle_options.m"
    {
#line 1457 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 231, (MR_Integer) 233, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1080_1080, &libs__handle_options__STATE_VARIABLE_Globals_1085_1085);
    }
#line 1463 "handle_options.m"
    {
#line 1463 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 184, (MR_Integer) 260, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1085_1085, &libs__handle_options__STATE_VARIABLE_Globals_1090_1090);
    }
#line 1464 "handle_options.m"
    {
#line 1464 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 193, (MR_Integer) 260, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1090_1090, &libs__handle_options__STATE_VARIABLE_Globals_1095_1095);
    }
#line 1470 "handle_options.m"
    {
#line 1470 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 193, (MR_Integer) 312, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1095_1095, &libs__handle_options__STATE_VARIABLE_Globals_1100_1100);
    }
#line 1475 "handle_options.m"
    {
#line 1475 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 184, (MR_Integer) 127, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1100_1100, &libs__handle_options__STATE_VARIABLE_Globals_1105_1105);
    }
#line 1478 "handle_options.m"
    {
#line 1478 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 127, (MR_Integer) 123, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1105_1105, &libs__handle_options__STATE_VARIABLE_Globals_1110_1110);
    }
#line 1482 "handle_options.m"
    {
#line 1482 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 126, (MR_Integer) 123, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1110_1110, &libs__handle_options__STATE_VARIABLE_Globals_1115_1115);
    }
#line 1492 "handle_options.m"
    {
#line 1492 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1115_1115, (MR_Integer) 121, &libs__handle_options__TraceOptimized_121);
    }
#line 1493 "handle_options.m"
    {
#line 1493 "handle_options.m"
      libs__handle_options__TraceLevelIsNone_122 = libs__trace_params__given_trace_level_is_none_1_f_0(libs__handle_options__TraceLevel_32);
    }
#line 1577 "handle_options.m"
#line 1577 "handle_options.m"
    switch (libs__handle_options__TraceLevelIsNone_122) {
#line 1577 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1577 "handle_options.m"
      case (MR_Integer) 0:
#line 1495 "handle_options.m"
        {
#line 1495 "handle_options.m"
          MR_Word libs__handle_options__TraceTailRec_123;
#line 1495 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1176_1176;
#line 1495 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1180_1180;
#line 1495 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1184_1184;
#line 1495 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1188_1188;
#line 1495 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1192_1192;
#line 1495 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1196_1196;
#line 1495 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1200_1200;
#line 1495 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1204_1204;

#line 1522 "handle_options.m"
#line 1522 "handle_options.m"
          switch (libs__handle_options__TraceOptimized_121) {
#line 1522 "handle_options.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1522 "handle_options.m"
            case (MR_Integer) 0:
#line 1497 "handle_options.m"
              {
#line 1497 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1124_1124;
#line 1497 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1128_1128;
#line 1497 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1132_1132;
#line 1497 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1136_1136;
#line 1497 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1140_1140;
#line 1497 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1144_1144;
#line 1497 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1148_1148;
#line 1497 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1152_1152;
#line 1497 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1156_1156;
#line 1497 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1160_1160;
#line 1497 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1164_1164;
#line 1497 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1168_1168;
#line 1497 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1172_1172;

#line 1502 "handle_options.m"
                {
#line 1502 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 329, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1115_1115, &libs__handle_options__STATE_VARIABLE_Globals_1124_1124);
                }
#line 1503 "handle_options.m"
                {
#line 1503 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 345, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1124_1124, &libs__handle_options__STATE_VARIABLE_Globals_1128_1128);
                }
#line 1504 "handle_options.m"
                {
#line 1504 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 347, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1128_1128, &libs__handle_options__STATE_VARIABLE_Globals_1132_1132);
                }
#line 1505 "handle_options.m"
                {
#line 1505 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 354, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1132_1132, &libs__handle_options__STATE_VARIABLE_Globals_1136_1136);
                }
#line 1506 "handle_options.m"
                {
#line 1506 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 355, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1136_1136, &libs__handle_options__STATE_VARIABLE_Globals_1140_1140);
                }
#line 1508 "handle_options.m"
                {
#line 1508 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 383, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1140_1140, &libs__handle_options__STATE_VARIABLE_Globals_1144_1144);
                }
#line 1509 "handle_options.m"
                {
#line 1509 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 343, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1144_1144, &libs__handle_options__STATE_VARIABLE_Globals_1148_1148);
                }
#line 1511 "handle_options.m"
                {
#line 1511 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 344, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1148_1148, &libs__handle_options__STATE_VARIABLE_Globals_1152_1152);
                }
#line 1513 "handle_options.m"
                {
#line 1513 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 360, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1152_1152, &libs__handle_options__STATE_VARIABLE_Globals_1156_1156);
                }
#line 1515 "handle_options.m"
                {
#line 1515 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 359, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1156_1156, &libs__handle_options__STATE_VARIABLE_Globals_1160_1160);
                }
#line 1517 "handle_options.m"
                {
#line 1517 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 365, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1160_1160, &libs__handle_options__STATE_VARIABLE_Globals_1164_1164);
                }
#line 1519 "handle_options.m"
                {
#line 1519 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 379, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1164_1164, &libs__handle_options__STATE_VARIABLE_Globals_1168_1168);
                }
#line 1520 "handle_options.m"
                {
#line 1520 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 392, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1168_1168, &libs__handle_options__STATE_VARIABLE_Globals_1172_1172);
                }
#line 1521 "handle_options.m"
                {
#line 1521 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 393, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1172_1172, &libs__handle_options__STATE_VARIABLE_Globals_1176_1176);
                }
#line 1497 "handle_options.m"
              }
#line 1522 "handle_options.m"
              break;
#line 1522 "handle_options.m"
            case (MR_Integer) 1:
#line 1523 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_1176_1176 = libs__handle_options__STATE_VARIABLE_Globals_1115_1115;
#line 1522 "handle_options.m"
              break;
#line 1522 "handle_options.m"
          }
#line 1545 "handle_options.m"
          {
#line 1545 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 449, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1176_1176, &libs__handle_options__STATE_VARIABLE_Globals_1180_1180);
          }
#line 1550 "handle_options.m"
          {
#line 1550 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 362, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1180_1180, &libs__handle_options__STATE_VARIABLE_Globals_1184_1184);
          }
#line 1554 "handle_options.m"
          {
#line 1554 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 381, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1184_1184, &libs__handle_options__STATE_VARIABLE_Globals_1188_1188);
          }
#line 1558 "handle_options.m"
          {
#line 1558 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 447, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1188_1188, &libs__handle_options__STATE_VARIABLE_Globals_1192_1192);
          }
#line 1562 "handle_options.m"
          {
#line 1562 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 264, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1192_1192, &libs__handle_options__STATE_VARIABLE_Globals_1196_1196);
          }
#line 1563 "handle_options.m"
          {
#line 1563 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 265, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1196_1196, &libs__handle_options__STATE_VARIABLE_Globals_1200_1200);
          }
#line 1567 "handle_options.m"
          {
#line 1567 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 317, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1200_1200, &libs__handle_options__STATE_VARIABLE_Globals_1204_1204);
          }
#line 1570 "handle_options.m"
          {
#line 1570 "handle_options.m"
            libs__handle_options__TraceTailRec_123 = libs__trace_params__trace_level_allows_tail_rec_1_f_0(libs__handle_options__TraceLevel_32);
          }
#line 1574 "handle_options.m"
#line 1574 "handle_options.m"
          switch (libs__handle_options__TraceTailRec_123) {
#line 1574 "handle_options.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1574 "handle_options.m"
            case (MR_Integer) 0:
#line 1572 "handle_options.m"
              {
#line 1573 "handle_options.m"
                {
#line 1573 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 130, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1204_1204, &libs__handle_options__STATE_VARIABLE_Globals_1208_1208);
                }
#line 1572 "handle_options.m"
              }
#line 1574 "handle_options.m"
              break;
#line 1574 "handle_options.m"
            case (MR_Integer) 1:
#line 1575 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_1208_1208 = libs__handle_options__STATE_VARIABLE_Globals_1204_1204;
#line 1574 "handle_options.m"
              break;
#line 1574 "handle_options.m"
          }
#line 1495 "handle_options.m"
        }
#line 1577 "handle_options.m"
        break;
#line 1577 "handle_options.m"
      case (MR_Integer) 1:
#line 1578 "handle_options.m"
        {
#line 1581 "handle_options.m"
          {
#line 1581 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 130, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1115_1115, &libs__handle_options__STATE_VARIABLE_Globals_1208_1208);
          }
#line 1578 "handle_options.m"
        }
#line 1577 "handle_options.m"
        break;
#line 1577 "handle_options.m"
    }
#line 1584 "handle_options.m"
    {
#line 1584 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 193, (MR_Integer) 263, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1208_1208, &libs__handle_options__STATE_VARIABLE_Globals_1213_1213);
    }
#line 1585 "handle_options.m"
    {
#line 1585 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1213_1213, (MR_Integer) 193, &libs__handle_options__ProfileDeep_124);
    }
#line 1610 "handle_options.m"
#line 1610 "handle_options.m"
    switch (libs__handle_options__ProfileDeep_124) {
#line 1610 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1610 "handle_options.m"
      case (MR_Integer) 0:
#line 1611 "handle_options.m"
        {
#line 1611 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Specs_1225_1225 = libs__handle_options__STATE_VARIABLE_Specs_1004_1004;
#line 1611 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1236_1236 = libs__handle_options__STATE_VARIABLE_Globals_1213_1213;
#line 1611 "handle_options.m"
        }
#line 1610 "handle_options.m"
        break;
#line 1610 "handle_options.m"
      case (MR_Integer) 1:
#line 1587 "handle_options.m"
        {
#line 1587 "handle_options.m"
          MR_Word libs__handle_options__LotsOfHOSpec_126;
#line 1587 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1228_1228;

#line 1589 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_108 == (MR_Integer) 0);
#line 1589 "handle_options.m"
          if (libs__handle_options__succeeded)
#line 1590 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__Target_27 == (MR_Integer) 0);
#line 1588 "handle_options.m"
          if (libs__handle_options__succeeded)
#line 1588 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Specs_1225_1225 = libs__handle_options__STATE_VARIABLE_Specs_1004_1004;
#line 1588 "handle_options.m"
          else
#line 1596 "handle_options.m"
            {
#line 1597 "handle_options.m"
              {
#line 1597 "handle_options.m"
                libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[205]), libs__handle_options__STATE_VARIABLE_Specs_1004_1004, &libs__handle_options__STATE_VARIABLE_Specs_1225_1225);
              }
#line 1596 "handle_options.m"
            }
#line 1599 "handle_options.m"
          {
#line 1599 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 359, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1213_1213, &libs__handle_options__STATE_VARIABLE_Globals_1228_1228);
          }
#line 1600 "handle_options.m"
          {
#line 1600 "handle_options.m"
            libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1228_1228, (MR_Integer) 208, &libs__handle_options__LotsOfHOSpec_126);
          }
#line 1607 "handle_options.m"
#line 1607 "handle_options.m"
          switch (libs__handle_options__LotsOfHOSpec_126) {
#line 1607 "handle_options.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1607 "handle_options.m"
            case (MR_Integer) 0:
#line 1608 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_1236_1236 = libs__handle_options__STATE_VARIABLE_Globals_1228_1228;
#line 1607 "handle_options.m"
              break;
#line 1607 "handle_options.m"
            case (MR_Integer) 1:
#line 1603 "handle_options.m"
              {
#line 1603 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1233_1233;

#line 1605 "handle_options.m"
                {
#line 1605 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 347, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1228_1228, &libs__handle_options__STATE_VARIABLE_Globals_1233_1233);
                }
#line 1606 "handle_options.m"
                {
#line 1606 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 348, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[5]), libs__handle_options__STATE_VARIABLE_Globals_1233_1233, &libs__handle_options__STATE_VARIABLE_Globals_1236_1236);
                }
#line 1603 "handle_options.m"
              }
#line 1607 "handle_options.m"
              break;
#line 1607 "handle_options.m"
          }
#line 1587 "handle_options.m"
        }
#line 1610 "handle_options.m"
        break;
#line 1610 "handle_options.m"
    }
#line 1614 "handle_options.m"
    {
#line 1614 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1236_1236, (MR_Integer) 210, &libs__handle_options__RecordTermSizesAsWords_128);
    }
#line 1616 "handle_options.m"
    {
#line 1616 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1236_1236, (MR_Integer) 211, &libs__handle_options__RecordTermSizesAsCells_129);
    }
#line 1619 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsWords_128 == (MR_Integer) 1);
#line 1619 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1620 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsCells_129 == (MR_Integer) 1);
#line 1618 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1623 "handle_options.m"
      {
#line 1624 "handle_options.m"
        {
#line 1624 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[207]), libs__handle_options__STATE_VARIABLE_Specs_1225_1225, &libs__handle_options__STATE_VARIABLE_Specs_1246_1246);
        }
#line 1623 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1253_1253 = libs__handle_options__STATE_VARIABLE_Globals_1236_1236;
#line 1623 "handle_options.m"
      }
#line 1618 "handle_options.m"
    else
#line 1625 "handle_options.m"
      {
#line 1626 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsWords_128 == (MR_Integer) 1);
#line 1627 "handle_options.m"
        if (!(libs__handle_options__succeeded))
#line 1627 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsCells_129 == (MR_Integer) 1);
#line 1625 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1630 "handle_options.m"
          {
#line 1630 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1249_1249;

#line 1630 "handle_options.m"
            {
#line 1630 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 359, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1236_1236, &libs__handle_options__STATE_VARIABLE_Globals_1249_1249);
            }
#line 1633 "handle_options.m"
            {
#line 1633 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 245, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1249_1249, &libs__handle_options__STATE_VARIABLE_Globals_1253_1253);
            }
#line 1640 "handle_options.m"
#line 1640 "handle_options.m"
            switch (libs__handle_options__HighLevelCode_108) {
#line 1640 "handle_options.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1640 "handle_options.m"
              case (MR_Integer) 0:
#line 1641 "handle_options.m"
                libs__handle_options__STATE_VARIABLE_Specs_1246_1246 = libs__handle_options__STATE_VARIABLE_Specs_1225_1225;
#line 1640 "handle_options.m"
                break;
#line 1640 "handle_options.m"
              case (MR_Integer) 1:
#line 1635 "handle_options.m"
                {
#line 1639 "handle_options.m"
                  {
#line 1639 "handle_options.m"
                    libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[209]), libs__handle_options__STATE_VARIABLE_Specs_1225_1225, &libs__handle_options__STATE_VARIABLE_Specs_1246_1246);
                  }
#line 1635 "handle_options.m"
                }
#line 1640 "handle_options.m"
                break;
#line 1640 "handle_options.m"
            }
#line 1630 "handle_options.m"
          }
#line 1625 "handle_options.m"
        else
#line 1644 "handle_options.m"
          {
#line 1644 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Globals_1253_1253 = libs__handle_options__STATE_VARIABLE_Globals_1236_1236;
#line 1644 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Specs_1246_1246 = libs__handle_options__STATE_VARIABLE_Specs_1225_1225;
#line 1644 "handle_options.m"
          }
#line 1625 "handle_options.m"
      }
#line 1648 "handle_options.m"
    {
#line 1648 "handle_options.m"
      MR_Word libs__handle_options__V_1265_1265;

#line 1648 "handle_options.m"
      {
#line 1648 "handle_options.m"
        libs__handle_options__V_1265_1265 = libs__trace_params__given_trace_level_is_none_1_f_0(libs__handle_options__TraceLevel_32);
      }
#line 1648 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__V_1265_1265 == (MR_Integer) 1);
#line 1648 "handle_options.m"
    }
#line 1649 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 1649 "handle_options.m"
      {
#line 1649 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_108 == (MR_Integer) 0);
#line 1649 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1649 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__Target_27 == (MR_Integer) 0);
#line 1649 "handle_options.m"
      }
#line 1647 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1647 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Specs_1272_1272 = libs__handle_options__STATE_VARIABLE_Specs_1246_1246;
#line 1647 "handle_options.m"
    else
#line 1655 "handle_options.m"
      {
#line 1656 "handle_options.m"
        {
#line 1656 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[211]), libs__handle_options__STATE_VARIABLE_Specs_1246_1246, &libs__handle_options__STATE_VARIABLE_Specs_1272_1272);
        }
#line 1655 "handle_options.m"
      }
#line 1661 "handle_options.m"
    {
#line 1661 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 214, (MR_Integer) 486, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1253_1253, &libs__handle_options__STATE_VARIABLE_Globals_1276_1276);
    }
#line 1663 "handle_options.m"
    {
#line 1663 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 332, (MR_Integer) 361, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1276_1276, &libs__handle_options__STATE_VARIABLE_Globals_1281_1281);
    }
#line 1679 "handle_options.m"
#line 1679 "handle_options.m"
    switch (libs__handle_options__ProfileDeep_124) {
#line 1679 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1679 "handle_options.m"
      case (MR_Integer) 0:
#line 1676 "handle_options.m"
        {
#line 1677 "handle_options.m"
          {
#line 1677 "handle_options.m"
            libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 329, (MR_Integer) 361, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1281_1281, &libs__handle_options__STATE_VARIABLE_Globals_1286_1286);
          }
#line 1676 "handle_options.m"
        }
#line 1679 "handle_options.m"
        break;
#line 1679 "handle_options.m"
      case (MR_Integer) 1:
#line 1680 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1286_1286 = libs__handle_options__STATE_VARIABLE_Globals_1281_1281;
#line 1679 "handle_options.m"
        break;
#line 1679 "handle_options.m"
    }
#line 1685 "handle_options.m"
    {
#line 1685 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 163, (MR_Integer) 383, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1286_1286, &libs__handle_options__STATE_VARIABLE_Globals_1291_1291);
    }
#line 1686 "handle_options.m"
    {
#line 1686 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 163, (MR_Integer) 343, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1291_1291, &libs__handle_options__STATE_VARIABLE_Globals_1296_1296);
    }
#line 1688 "handle_options.m"
    {
#line 1688 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 163, (MR_Integer) 344, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1296_1296, &libs__handle_options__STATE_VARIABLE_Globals_1301_1301);
    }
#line 1692 "handle_options.m"
    {
#line 1692 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 260, (MR_Integer) 263, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1301_1301, &libs__handle_options__STATE_VARIABLE_Globals_1306_1306);
    }
#line 1695 "handle_options.m"
    {
#line 1695 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 264, (MR_Integer) 263, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1306_1306, &libs__handle_options__STATE_VARIABLE_Globals_1311_1311);
    }
#line 1745 "handle_options.m"
#line 1745 "handle_options.m"
    switch (libs__handle_options__GC_Method_28) {
#line 1745 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1745 "handle_options.m"
      case (MR_Integer) 5:
#line 1731 "handle_options.m"
        {
#line 1731 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1315_1315;
#line 1731 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1319_1319;
#line 1731 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1323_1323;
#line 1731 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1327_1327;
#line 1731 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1331_1331;
#line 1731 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1335_1335;
#line 1731 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1339_1339;
#line 1731 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1343_1343;
#line 1731 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1347_1347;
#line 1731 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1351_1351;

#line 1732 "handle_options.m"
          {
#line 1732 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 262, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1311_1311, &libs__handle_options__STATE_VARIABLE_Globals_1315_1315);
          }
#line 1733 "handle_options.m"
          {
#line 1733 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 265, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1315_1315, &libs__handle_options__STATE_VARIABLE_Globals_1319_1319);
          }
#line 1734 "handle_options.m"
          {
#line 1734 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 449, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1319_1319, &libs__handle_options__STATE_VARIABLE_Globals_1323_1323);
          }
#line 1735 "handle_options.m"
          {
#line 1735 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 469, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1323_1323, &libs__handle_options__STATE_VARIABLE_Globals_1327_1327);
          }
#line 1736 "handle_options.m"
          {
#line 1736 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 317, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1327_1327, &libs__handle_options__STATE_VARIABLE_Globals_1331_1331);
          }
#line 1737 "handle_options.m"
          {
#line 1737 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 447, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1331_1331, &libs__handle_options__STATE_VARIABLE_Globals_1335_1335);
          }
#line 1738 "handle_options.m"
          {
#line 1738 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 301, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1335_1335, &libs__handle_options__STATE_VARIABLE_Globals_1339_1339);
          }
#line 1740 "handle_options.m"
          {
#line 1740 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 302, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1339_1339, &libs__handle_options__STATE_VARIABLE_Globals_1343_1343);
          }
#line 1742 "handle_options.m"
          {
#line 1742 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 359, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1343_1343, &libs__handle_options__STATE_VARIABLE_Globals_1347_1347);
          }
#line 1743 "handle_options.m"
          {
#line 1743 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 354, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1347_1347, &libs__handle_options__STATE_VARIABLE_Globals_1351_1351);
          }
#line 1744 "handle_options.m"
          {
#line 1744 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 355, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1351_1351, &libs__handle_options__STATE_VARIABLE_Globals_1355_1355);
          }
#line 1731 "handle_options.m"
        }
#line 1745 "handle_options.m"
        break;
#line 1745 "handle_options.m"
      case (MR_Integer) 0:
#line 1746 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1355_1355 = libs__handle_options__STATE_VARIABLE_Globals_1311_1311;
#line 1745 "handle_options.m"
        break;
#line 1745 "handle_options.m"
      case (MR_Integer) 2:
#line 1748 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1355_1355 = libs__handle_options__STATE_VARIABLE_Globals_1311_1311;
#line 1745 "handle_options.m"
        break;
#line 1745 "handle_options.m"
      case (MR_Integer) 3:
#line 1749 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1355_1355 = libs__handle_options__STATE_VARIABLE_Globals_1311_1311;
#line 1745 "handle_options.m"
        break;
#line 1745 "handle_options.m"
      case (MR_Integer) 4:
#line 1750 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1355_1355 = libs__handle_options__STATE_VARIABLE_Globals_1311_1311;
#line 1745 "handle_options.m"
        break;
#line 1745 "handle_options.m"
      case (MR_Integer) 1:
#line 1747 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1355_1355 = libs__handle_options__STATE_VARIABLE_Globals_1311_1311;
#line 1745 "handle_options.m"
        break;
#line 1745 "handle_options.m"
    }
#line 1758 "handle_options.m"
    {
#line 1758 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1355_1355, (MR_Integer) 258, &libs__handle_options__PutNondetEnvOnHeap_133);
    }
#line 1774 "handle_options.m"
    {
#line 1774 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 263, (MR_Integer) 261, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1355_1355, &libs__handle_options__STATE_VARIABLE_Globals_1377_1377);
    }
#line 1776 "handle_options.m"
    {
#line 1776 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 262, (MR_Integer) 261, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1377_1377, &libs__handle_options__STATE_VARIABLE_Globals_1382_1382);
    }
#line 1782 "handle_options.m"
    {
#line 1782 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 263, (MR_Integer) 467, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1382_1382, &libs__handle_options__STATE_VARIABLE_Globals_1387_1387);
    }
#line 1784 "handle_options.m"
    {
#line 1784 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 262, (MR_Integer) 467, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1387_1387, &libs__handle_options__STATE_VARIABLE_Globals_1392_1392);
    }
#line 1788 "handle_options.m"
    {
#line 1788 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 261, (MR_Integer) 465, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1392_1392, &libs__handle_options__STATE_VARIABLE_Globals_1397_1397);
    }
#line 1794 "handle_options.m"
    {
#line 1794 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 265, (MR_Integer) 383, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1397_1397, &libs__handle_options__STATE_VARIABLE_Globals_1402_1402);
    }
#line 1795 "handle_options.m"
    {
#line 1795 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 265, (MR_Integer) 343, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1402_1402, &libs__handle_options__STATE_VARIABLE_Globals_1407_1407);
    }
#line 1804 "handle_options.m"
    {
#line 1804 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 216, (MR_Integer) 447, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1407_1407, &libs__handle_options__STATE_VARIABLE_Globals_1412_1412);
    }
#line 1811 "handle_options.m"
    {
#line 1811 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 226, (MR_Integer) 447, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1412_1412, &libs__handle_options__STATE_VARIABLE_Globals_1417_1417);
    }
#line 1820 "handle_options.m"
    {
#line 1820 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 218, (MR_Integer) 449, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1417_1417, &libs__handle_options__STATE_VARIABLE_Globals_1422_1422);
    }
#line 1829 "handle_options.m"
    {
#line 1829 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1422_1422, (MR_Integer) 278, &libs__handle_options__DisablePneg_135);
    }
#line 1831 "handle_options.m"
    {
#line 1831 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1422_1422, (MR_Integer) 279, &libs__handle_options__DisableCut_136);
    }
#line 1834 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelStackCopy_109 == (MR_Integer) 1);
#line 1834 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1835 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__DisablePneg_135 == (MR_Integer) 0);
#line 1833 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1837 "handle_options.m"
      {
#line 1837 "handle_options.m"
        {
#line 1837 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 280, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[3]), libs__handle_options__STATE_VARIABLE_Globals_1422_1422, &libs__handle_options__STATE_VARIABLE_Globals_1428_1428);
        }
#line 1837 "handle_options.m"
      }
#line 1833 "handle_options.m"
    else
#line 1833 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1428_1428 = libs__handle_options__STATE_VARIABLE_Globals_1422_1422;
#line 1843 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelStackCopy_109 == (MR_Integer) 1);
#line 1843 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1844 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__DisableCut_136 == (MR_Integer) 0);
#line 1842 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1846 "handle_options.m"
      {
#line 1846 "handle_options.m"
        {
#line 1846 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 281, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[3]), libs__handle_options__STATE_VARIABLE_Globals_1428_1428, &libs__handle_options__STATE_VARIABLE_Globals_1432_1432);
        }
#line 1846 "handle_options.m"
      }
#line 1842 "handle_options.m"
    else
#line 1842 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1432_1432 = libs__handle_options__STATE_VARIABLE_Globals_1428_1428;
#line 1854 "handle_options.m"
    {
#line 1854 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1432_1432, (MR_Integer) 147, &libs__handle_options__DumpHLDSStages_137);
    }
#line 1855 "handle_options.m"
    {
#line 1855 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1432_1432, (MR_Integer) 146, &libs__handle_options__DumpTraceStages_138);
    }
#line 1857 "handle_options.m"
    {
#line 1857 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1432_1432, (MR_Integer) 298, &libs__handle_options__ParallelLiveness_139);
    }
#line 1858 "handle_options.m"
    {
#line 1858 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1432_1432, (MR_Integer) 299, &libs__handle_options__ParallelCodeGen_140);
    }
#line 1860 "handle_options.m"
    {
#line 1860 "handle_options.m"
      MR_String libs__handle_options__V_141_141;
#line 1860 "handle_options.m"
      MR_Word libs__handle_options__V_142_142;

#line 1860 "handle_options.m"
      libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DumpHLDSStages_137)) == (MR_mktag((MR_Integer) 1)));
#line 1860 "handle_options.m"
      if (libs__handle_options__succeeded)
#line 1860 "handle_options.m"
        {
#line 1860 "handle_options.m"
          libs__handle_options__V_141_141 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpHLDSStages_137, (MR_Integer) 0)));
#line 1860 "handle_options.m"
          libs__handle_options__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpHLDSStages_137, (MR_Integer) 1)));
#line 1860 "handle_options.m"
        }
#line 1860 "handle_options.m"
    }
#line 1861 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 1861 "handle_options.m"
      {
#line 1861 "handle_options.m"
        {
#line 1861 "handle_options.m"
          MR_String libs__handle_options__V_143_143;
#line 1861 "handle_options.m"
          MR_Word libs__handle_options__V_144_144;

#line 1861 "handle_options.m"
          libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DumpTraceStages_138)) == (MR_mktag((MR_Integer) 1)));
#line 1861 "handle_options.m"
          if (libs__handle_options__succeeded)
#line 1861 "handle_options.m"
            {
#line 1861 "handle_options.m"
              libs__handle_options__V_143_143 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpTraceStages_138, (MR_Integer) 0)));
#line 1861 "handle_options.m"
              libs__handle_options__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpTraceStages_138, (MR_Integer) 1)));
#line 1861 "handle_options.m"
            }
#line 1861 "handle_options.m"
        }
#line 1861 "handle_options.m"
        if (!(libs__handle_options__succeeded))
#line 1861 "handle_options.m"
          {
#line 1862 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__Statistics_85 == (MR_Integer) 1);
#line 1861 "handle_options.m"
            if (!(libs__handle_options__succeeded))
#line 1861 "handle_options.m"
              {
#line 1863 "handle_options.m"
                libs__handle_options__succeeded = (libs__handle_options__ParallelLiveness_139 == (MR_Integer) 1);
#line 1861 "handle_options.m"
                if (!(libs__handle_options__succeeded))
#line 1864 "handle_options.m"
                  libs__handle_options__succeeded = (libs__handle_options__ParallelCodeGen_140 == (MR_Integer) 1);
#line 1861 "handle_options.m"
              }
#line 1861 "handle_options.m"
          }
#line 1861 "handle_options.m"
      }
#line 1859 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1867 "handle_options.m"
      {
#line 1867 "handle_options.m"
        {
#line 1867 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 297, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1432_1432, &libs__handle_options__STATE_VARIABLE_Globals_1440_1440);
        }
#line 1867 "handle_options.m"
      }
#line 1859 "handle_options.m"
    else
#line 1859 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1440_1440 = libs__handle_options__STATE_VARIABLE_Globals_1432_1432;
#line 1874 "handle_options.m"
    {
#line 1874 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 354, (MR_Integer) 355, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1440_1440, &libs__handle_options__STATE_VARIABLE_Globals_1445_1445);
    }
#line 1880 "handle_options.m"
    {
#line 1880 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 343, (MR_Integer) 344, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1445_1445, &libs__handle_options__STATE_VARIABLE_Globals_1450_1450);
    }
#line 1885 "handle_options.m"
    {
#line 1885 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 346, (MR_Integer) 321, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1450_1450, &libs__handle_options__STATE_VARIABLE_Globals_1455_1455);
    }
#line 1887 "handle_options.m"
    {
#line 1887 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 346, (MR_Integer) 345, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1455_1455, &libs__handle_options__STATE_VARIABLE_Globals_1460_1460);
    }
#line 1892 "handle_options.m"
    {
#line 1892 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 356, (MR_Integer) 362, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1460_1460, &libs__handle_options__STATE_VARIABLE_Globals_1465_1465);
    }
#line 1893 "handle_options.m"
    {
#line 1893 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 356, (MR_Integer) 341, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1465_1465, &libs__handle_options__STATE_VARIABLE_Globals_1470_1470);
    }
#line 1897 "handle_options.m"
    {
#line 1897 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 87, (MR_Integer) 345, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1470_1470, &libs__handle_options__STATE_VARIABLE_Globals_1475_1475);
    }
#line 1903 "handle_options.m"
    {
#line 1903 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 388, (MR_Integer) 389, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1475_1475, &libs__handle_options__STATE_VARIABLE_Globals_1480_1480);
    }
#line 1908 "handle_options.m"
    {
#line 1908 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 94, (MR_Integer) 93, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1480_1480, &libs__handle_options__STATE_VARIABLE_Globals_1485_1485);
    }
#line 1913 "handle_options.m"
    {
#line 1913 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 145, (MR_Integer) 93, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1485_1485, &libs__handle_options__STATE_VARIABLE_Globals_1490_1490);
    }
#line 1917 "handle_options.m"
    {
#line 1917 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 91, (MR_Integer) 23, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1490_1490, &libs__handle_options__STATE_VARIABLE_Globals_1495_1495);
    }
#line 1920 "handle_options.m"
    {
#line 1920 "handle_options.m"
      libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1495_1495, (MR_Integer) 652, &libs__handle_options__TargetArch_145);
    }
#line 1923 "handle_options.m"
    {
#line 1923 "handle_options.m"
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1495_1495, (MR_Integer) 541, &libs__handle_options__MaybeStdLibDir_146);
    }
#line 1942 "handle_options.m"
    if ((libs__handle_options__MaybeStdLibDir_146 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1943 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1510_1510 = libs__handle_options__STATE_VARIABLE_Globals_1495_1495;
#line 1942 "handle_options.m"
    else
#line 1926 "handle_options.m"
      {
#line 1926 "handle_options.m"
        MR_String libs__handle_options__StdLibDir_147 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeStdLibDir_146, (MR_Integer) 0)));
#line 1926 "handle_options.m"
        MR_Word libs__handle_options__OptionTable2_148;
#line 1926 "handle_options.m"
        MR_Word libs__handle_options__OptionTable_149;
#line 1926 "handle_options.m"
        MR_Word libs__handle_options__LinkLibDirs0_150;
#line 1926 "handle_options.m"
        MR_Word libs__handle_options__Rpath0_151;
#line 1926 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1499_1499;
#line 1926 "handle_options.m"
        MR_Word libs__handle_options__V_1502_1502;
#line 1926 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1503_1503;
#line 1926 "handle_options.m"
        MR_Word libs__handle_options__V_1504_1504;
#line 1926 "handle_options.m"
        MR_String libs__handle_options__V_1505_1505;
#line 1926 "handle_options.m"
        MR_Word libs__handle_options__V_1509_1509;
#line 1926 "handle_options.m"
        MR_Word libs__handle_options__V_1511_1511;
#line 1926 "handle_options.m"
        MR_String libs__handle_options__V_1512_1512;

#line 1927 "handle_options.m"
        {
#line 1927 "handle_options.m"
          libs__globals__get_options_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_1495_1495, &libs__handle_options__OptionTable2_148);
        }
#line 1928 "handle_options.m"
        {
#line 1928 "handle_options.m"
          libs__options__option_table_add_mercury_library_directory_3_p_0(libs__handle_options__StdLibDir_147, libs__handle_options__OptionTable2_148, &libs__handle_options__OptionTable_149);
        }
#line 1930 "handle_options.m"
        {
#line 1930 "handle_options.m"
          libs__globals__set_options_3_p_0(libs__handle_options__OptionTable_149, libs__handle_options__STATE_VARIABLE_Globals_1495_1495, &libs__handle_options__STATE_VARIABLE_Globals_1499_1499);
        }
#line 1933 "handle_options.m"
        {
#line 1933 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1499_1499, (MR_Integer) 531, &libs__handle_options__LinkLibDirs0_150);
        }
#line 1936 "handle_options.m"
        {
#line 1936 "handle_options.m"
          libs__handle_options__V_1505_1505 = mercury__dir__f_slash_2_f_0(libs__handle_options__StdLibDir_147, (MR_String) "lib");
        }
#line 1936 "handle_options.m"
        {
#line 1936 "handle_options.m"
          libs__handle_options__V_1504_1504 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1936 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1504_1504, 0) = ((MR_Box) (libs__handle_options__V_1505_1505));
#line 1936 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1504_1504, 1) = ((MR_Box) (libs__handle_options__LinkLibDirs0_150));
#line 1936 "handle_options.m"
        }
#line 1936 "handle_options.m"
        {
#line 1936 "handle_options.m"
          libs__handle_options__V_1502_1502 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1936 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1502_1502, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1936 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1502_1502, 1) = ((MR_Box) (libs__handle_options__V_1504_1504));
#line 1936 "handle_options.m"
        }
#line 1935 "handle_options.m"
        {
#line 1935 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 531, libs__handle_options__V_1502_1502, libs__handle_options__STATE_VARIABLE_Globals_1499_1499, &libs__handle_options__STATE_VARIABLE_Globals_1503_1503);
        }
#line 1938 "handle_options.m"
        {
#line 1938 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1503_1503, (MR_Integer) 532, &libs__handle_options__Rpath0_151);
        }
#line 1941 "handle_options.m"
        {
#line 1941 "handle_options.m"
          libs__handle_options__V_1512_1512 = mercury__dir__f_slash_2_f_0(libs__handle_options__StdLibDir_147, (MR_String) "lib");
        }
#line 1941 "handle_options.m"
        {
#line 1941 "handle_options.m"
          libs__handle_options__V_1511_1511 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1941 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1511_1511, 0) = ((MR_Box) (libs__handle_options__V_1512_1512));
#line 1941 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1511_1511, 1) = ((MR_Box) (libs__handle_options__Rpath0_151));
#line 1941 "handle_options.m"
        }
#line 1941 "handle_options.m"
        {
#line 1941 "handle_options.m"
          libs__handle_options__V_1509_1509 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1941 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1509_1509, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1941 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1509_1509, 1) = ((MR_Box) (libs__handle_options__V_1511_1511));
#line 1941 "handle_options.m"
        }
#line 1940 "handle_options.m"
        {
#line 1940 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 532, libs__handle_options__V_1509_1509, libs__handle_options__STATE_VARIABLE_Globals_1503_1503, &libs__handle_options__STATE_VARIABLE_Globals_1510_1510);
        }
#line 1926 "handle_options.m"
      }
#line 1947 "handle_options.m"
    {
#line 1947 "handle_options.m"
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1510_1510, (MR_Integer) 620, &libs__handle_options__MaybeConfDir_152);
    }
#line 1955 "handle_options.m"
    if ((libs__handle_options__MaybeConfDir_152 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1956 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1518_1518 = libs__handle_options__STATE_VARIABLE_Globals_1510_1510;
#line 1955 "handle_options.m"
    else
#line 1950 "handle_options.m"
      {
#line 1950 "handle_options.m"
        MR_String libs__handle_options__ConfDir_153 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeConfDir_152, (MR_Integer) 0)));
#line 1950 "handle_options.m"
        MR_Word libs__handle_options__CIncludeDirs0_154;
#line 1950 "handle_options.m"
        MR_Word libs__handle_options__V_1517_1517;
#line 1950 "handle_options.m"
        MR_Word libs__handle_options__V_1519_1519;
#line 1950 "handle_options.m"
        MR_String libs__handle_options__V_1520_1520;

#line 1951 "handle_options.m"
        {
#line 1951 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1510_1510, (MR_Integer) 484, &libs__handle_options__CIncludeDirs0_154);
        }
#line 1954 "handle_options.m"
        {
#line 1954 "handle_options.m"
          libs__handle_options__V_1520_1520 = mercury__dir__f_slash_2_f_0(libs__handle_options__ConfDir_153, (MR_String) "conf");
        }
#line 1954 "handle_options.m"
        {
#line 1954 "handle_options.m"
          libs__handle_options__V_1519_1519 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1954 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1519_1519, 0) = ((MR_Box) (libs__handle_options__V_1520_1520));
#line 1954 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1519_1519, 1) = ((MR_Box) (libs__handle_options__CIncludeDirs0_154));
#line 1954 "handle_options.m"
        }
#line 1954 "handle_options.m"
        {
#line 1954 "handle_options.m"
          libs__handle_options__V_1517_1517 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1954 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1517_1517, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1954 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1517_1517, 1) = ((MR_Box) (libs__handle_options__V_1519_1519));
#line 1954 "handle_options.m"
        }
#line 1953 "handle_options.m"
        {
#line 1953 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 484, libs__handle_options__V_1517_1517, libs__handle_options__STATE_VARIABLE_Globals_1510_1510, &libs__handle_options__STATE_VARIABLE_Globals_1518_1518);
        }
#line 1950 "handle_options.m"
      }
#line 1960 "handle_options.m"
    {
#line 1960 "handle_options.m"
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1518_1518, (MR_Integer) 631, &libs__handle_options__ConfigFile_155);
    }
#line 1963 "handle_options.m"
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__ConfigFile_155)) == (MR_mktag((MR_Integer) 1)));
#line 1963 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1963 "handle_options.m"
      {
#line 1963 "handle_options.m"
        libs__handle_options__V_1523_1523 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__ConfigFile_155, (MR_Integer) 0)));
#line 1963 "handle_options.m"
        libs__handle_options__succeeded = (strcmp(libs__handle_options__V_1523_1523, (MR_String) "") == 0);
#line 1963 "handle_options.m"
      }
#line 1963 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1968 "handle_options.m"
      if ((libs__handle_options__MaybeConfDir_152 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1969 "handle_options.m"
        {
#line 1970 "handle_options.m"
          {
#line 1970 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 631, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[232]), libs__handle_options__STATE_VARIABLE_Globals_1518_1518, &libs__handle_options__STATE_VARIABLE_Globals_1530_1530);
          }
#line 1969 "handle_options.m"
        }
#line 1968 "handle_options.m"
      else
#line 1965 "handle_options.m"
        {
#line 1965 "handle_options.m"
          MR_String libs__handle_options__ConfDir1_156 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeConfDir_152, (MR_Integer) 0)));
#line 1965 "handle_options.m"
          MR_Word libs__handle_options__V_1529_1529;
#line 1965 "handle_options.m"
          MR_Word libs__handle_options__V_1531_1531;
#line 1965 "handle_options.m"
          MR_String libs__handle_options__V_1532_1532;
#line 1965 "handle_options.m"
          MR_String libs__handle_options__V_1533_1533;

#line 1967 "handle_options.m"
          {
#line 1967 "handle_options.m"
            libs__handle_options__V_1533_1533 = mercury__dir__f_slash_2_f_0(libs__handle_options__ConfDir1_156, (MR_String) "conf");
          }
#line 1967 "handle_options.m"
          {
#line 1967 "handle_options.m"
            libs__handle_options__V_1532_1532 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1533_1533, (MR_String) "Mercury.config");
          }
#line 1966 "handle_options.m"
          {
#line 1966 "handle_options.m"
            libs__handle_options__V_1531_1531 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1966 "handle_options.m"
            MR_hl_field(MR_mktag(1), libs__handle_options__V_1531_1531, 0) = ((MR_Box) (libs__handle_options__V_1532_1532));
#line 1966 "handle_options.m"
          }
#line 1966 "handle_options.m"
          {
#line 1966 "handle_options.m"
            libs__handle_options__V_1529_1529 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1966 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1529_1529, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1966 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1529_1529, 1) = ((MR_Box) (libs__handle_options__V_1531_1531));
#line 1966 "handle_options.m"
          }
#line 1966 "handle_options.m"
          {
#line 1966 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 631, libs__handle_options__V_1529_1529, libs__handle_options__STATE_VARIABLE_Globals_1518_1518, &libs__handle_options__STATE_VARIABLE_Globals_1530_1530);
          }
#line 1965 "handle_options.m"
        }
#line 1963 "handle_options.m"
    else
#line 1963 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1530_1530 = libs__handle_options__STATE_VARIABLE_Globals_1518_1518;
#line 1979 "handle_options.m"
    {
#line 1979 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1530_1530, (MR_Integer) 535, &libs__handle_options__MercuryLibDirs_157);
    }
#line 1981 "handle_options.m"
    {
#line 1981 "handle_options.m"
      libs__compute_grade__grade_directory_component_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_1530_1530, &libs__handle_options__GradeString_158);
    }
#line 2031 "handle_options.m"
    if ((libs__handle_options__MercuryLibDirs_157 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2032 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1587_1587 = libs__handle_options__STATE_VARIABLE_Globals_1530_1530;
#line 2031 "handle_options.m"
    else
#line 1983 "handle_options.m"
      {
#line 1983 "handle_options.m"
        MR_Word libs__handle_options__TypeCtorInfo_1754_1754 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1983 "handle_options.m"
        MR_Word libs__handle_options__ExtraLinkLibDirs_161;
#line 1983 "handle_options.m"
        MR_Word libs__handle_options__LinkLibDirs1_163;
#line 1983 "handle_options.m"
        MR_Word libs__handle_options__Rpath_164;
#line 1983 "handle_options.m"
        MR_Word libs__handle_options__ExtraIncludeDirs_165;
#line 1983 "handle_options.m"
        MR_Word libs__handle_options__CIncludeDirs_166;
#line 1983 "handle_options.m"
        MR_Word libs__handle_options__ErlangIncludeDirs_167;
#line 1983 "handle_options.m"
        MR_Word libs__handle_options__ExtraIntermodDirs_168;
#line 1983 "handle_options.m"
        MR_Word libs__handle_options__IntermodDirs0_169;
#line 1983 "handle_options.m"
        MR_Word libs__handle_options__ExtraInitDirs_170;
#line 1983 "handle_options.m"
        MR_Word libs__handle_options__InitDirs1_171;
#line 1983 "handle_options.m"
        MR_Word libs__handle_options__V_1537_1537;
#line 1983 "handle_options.m"
        MR_Word libs__handle_options__V_1544_1544;
#line 1983 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1545_1545;
#line 1983 "handle_options.m"
        MR_Word libs__handle_options__V_1546_1546;
#line 1983 "handle_options.m"
        MR_Word libs__handle_options__V_1549_1549;
#line 1983 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1550_1550;
#line 1983 "handle_options.m"
        MR_Word libs__handle_options__V_1551_1551;
#line 1983 "handle_options.m"
        MR_Word libs__handle_options__V_1552_1552;
#line 1983 "handle_options.m"
        MR_Word libs__handle_options__V_1561_1561;
#line 1983 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1562_1562;
#line 1983 "handle_options.m"
        MR_Word libs__handle_options__V_1563_1563;
#line 1983 "handle_options.m"
        MR_Word libs__handle_options__V_1566_1566;
#line 1983 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1567_1567;
#line 1983 "handle_options.m"
        MR_Word libs__handle_options__V_1568_1568;
#line 1983 "handle_options.m"
        MR_Word libs__handle_options__V_1569_1569;
#line 1983 "handle_options.m"
        MR_Word libs__handle_options__V_1576_1576;
#line 1983 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1577_1577;
#line 1983 "handle_options.m"
        MR_Word libs__handle_options__V_1578_1578;
#line 1983 "handle_options.m"
        MR_Word libs__handle_options__V_1579_1579;
#line 1983 "handle_options.m"
        MR_Word libs__handle_options__V_1586_1586;
#line 1983 "handle_options.m"
        MR_Word libs__handle_options__V_1588_1588;

#line 1984 "handle_options.m"
        {
#line 1984 "handle_options.m"
          libs__handle_options__V_1537_1537 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1984 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1537_1537, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[0]));
#line 1984 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1537_1537, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_1));
#line 1984 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1537_1537, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1984 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1537_1537, 3) = ((MR_Box) (libs__handle_options__GradeString_158));
#line 1984 "handle_options.m"
        }
#line 1984 "handle_options.m"
        {
#line 1984 "handle_options.m"
          libs__handle_options__ExtraLinkLibDirs_161 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1754_1754, libs__handle_options__TypeCtorInfo_1754_1754, libs__handle_options__V_1537_1537, libs__handle_options__MercuryLibDirs_157);
        }
#line 1989 "handle_options.m"
        {
#line 1989 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1530_1530, (MR_Integer) 531, &libs__handle_options__LinkLibDirs1_163);
        }
#line 1992 "handle_options.m"
        {
#line 1992 "handle_options.m"
          libs__handle_options__V_1546_1546 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1754_1754, libs__handle_options__LinkLibDirs1_163, libs__handle_options__ExtraLinkLibDirs_161);
        }
#line 1992 "handle_options.m"
        {
#line 1992 "handle_options.m"
          libs__handle_options__V_1544_1544 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1992 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1544_1544, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1992 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1544_1544, 1) = ((MR_Box) (libs__handle_options__V_1546_1546));
#line 1992 "handle_options.m"
        }
#line 1991 "handle_options.m"
        {
#line 1991 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 531, libs__handle_options__V_1544_1544, libs__handle_options__STATE_VARIABLE_Globals_1530_1530, &libs__handle_options__STATE_VARIABLE_Globals_1545_1545);
        }
#line 1994 "handle_options.m"
        {
#line 1994 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1545_1545, (MR_Integer) 532, &libs__handle_options__Rpath_164);
        }
#line 1997 "handle_options.m"
        {
#line 1997 "handle_options.m"
          libs__handle_options__V_1551_1551 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1754_1754, libs__handle_options__Rpath_164, libs__handle_options__ExtraLinkLibDirs_161);
        }
#line 1997 "handle_options.m"
        {
#line 1997 "handle_options.m"
          libs__handle_options__V_1549_1549 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1997 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1549_1549, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1997 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1549_1549, 1) = ((MR_Box) (libs__handle_options__V_1551_1551));
#line 1997 "handle_options.m"
        }
#line 1996 "handle_options.m"
        {
#line 1996 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 532, libs__handle_options__V_1549_1549, libs__handle_options__STATE_VARIABLE_Globals_1545_1545, &libs__handle_options__STATE_VARIABLE_Globals_1550_1550);
        }
#line 1999 "handle_options.m"
        {
#line 1999 "handle_options.m"
          libs__handle_options__V_1552_1552 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1999 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1552_1552, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[0]));
#line 1999 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1552_1552, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_2));
#line 1999 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1552_1552, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1999 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1552_1552, 3) = ((MR_Box) (libs__handle_options__GradeString_158));
#line 1999 "handle_options.m"
        }
#line 1999 "handle_options.m"
        {
#line 1999 "handle_options.m"
          libs__handle_options__ExtraIncludeDirs_165 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1754_1754, libs__handle_options__TypeCtorInfo_1754_1754, libs__handle_options__V_1552_1552, libs__handle_options__MercuryLibDirs_157);
        }
#line 2003 "handle_options.m"
        {
#line 2003 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1550_1550, (MR_Integer) 484, &libs__handle_options__CIncludeDirs_166);
        }
#line 2006 "handle_options.m"
        {
#line 2006 "handle_options.m"
          libs__handle_options__V_1563_1563 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1754_1754, libs__handle_options__ExtraIncludeDirs_165, libs__handle_options__CIncludeDirs_166);
        }
#line 2006 "handle_options.m"
        {
#line 2006 "handle_options.m"
          libs__handle_options__V_1561_1561 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2006 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1561_1561, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2006 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1561_1561, 1) = ((MR_Box) (libs__handle_options__V_1563_1563));
#line 2006 "handle_options.m"
        }
#line 2005 "handle_options.m"
        {
#line 2005 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 484, libs__handle_options__V_1561_1561, libs__handle_options__STATE_VARIABLE_Globals_1550_1550, &libs__handle_options__STATE_VARIABLE_Globals_1562_1562);
        }
#line 2007 "handle_options.m"
        {
#line 2007 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1562_1562, (MR_Integer) 522, &libs__handle_options__ErlangIncludeDirs_167);
        }
#line 2010 "handle_options.m"
        {
#line 2010 "handle_options.m"
          libs__handle_options__V_1568_1568 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1754_1754, libs__handle_options__ExtraIncludeDirs_165, libs__handle_options__ErlangIncludeDirs_167);
        }
#line 2010 "handle_options.m"
        {
#line 2010 "handle_options.m"
          libs__handle_options__V_1566_1566 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2010 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1566_1566, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2010 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1566_1566, 1) = ((MR_Box) (libs__handle_options__V_1568_1568));
#line 2010 "handle_options.m"
        }
#line 2009 "handle_options.m"
        {
#line 2009 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 522, libs__handle_options__V_1566_1566, libs__handle_options__STATE_VARIABLE_Globals_1562_1562, &libs__handle_options__STATE_VARIABLE_Globals_1567_1567);
        }
#line 2012 "handle_options.m"
        {
#line 2012 "handle_options.m"
          libs__handle_options__V_1569_1569 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2012 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1569_1569, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[0]));
#line 2012 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1569_1569, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_3));
#line 2012 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1569_1569, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2012 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1569_1569, 3) = ((MR_Box) (libs__handle_options__GradeString_158));
#line 2012 "handle_options.m"
        }
#line 2012 "handle_options.m"
        {
#line 2012 "handle_options.m"
          libs__handle_options__ExtraIntermodDirs_168 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1754_1754, libs__handle_options__TypeCtorInfo_1754_1754, libs__handle_options__V_1569_1569, libs__handle_options__MercuryLibDirs_157);
        }
#line 2017 "handle_options.m"
        {
#line 2017 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1567_1567, (MR_Integer) 636, &libs__handle_options__IntermodDirs0_169);
        }
#line 2020 "handle_options.m"
        {
#line 2020 "handle_options.m"
          libs__handle_options__V_1578_1578 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1754_1754, libs__handle_options__ExtraIntermodDirs_168, libs__handle_options__IntermodDirs0_169);
        }
#line 2020 "handle_options.m"
        {
#line 2020 "handle_options.m"
          libs__handle_options__V_1576_1576 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2020 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1576_1576, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2020 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1576_1576, 1) = ((MR_Box) (libs__handle_options__V_1578_1578));
#line 2020 "handle_options.m"
        }
#line 2019 "handle_options.m"
        {
#line 2019 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 636, libs__handle_options__V_1576_1576, libs__handle_options__STATE_VARIABLE_Globals_1567_1567, &libs__handle_options__STATE_VARIABLE_Globals_1577_1577);
        }
#line 2022 "handle_options.m"
        {
#line 2022 "handle_options.m"
          libs__handle_options__V_1579_1579 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2022 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1579_1579, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[0]));
#line 2022 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1579_1579, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_4));
#line 2022 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1579_1579, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2022 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1579_1579, 3) = ((MR_Box) (libs__handle_options__GradeString_158));
#line 2022 "handle_options.m"
        }
#line 2022 "handle_options.m"
        {
#line 2022 "handle_options.m"
          libs__handle_options__ExtraInitDirs_170 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1754_1754, libs__handle_options__TypeCtorInfo_1754_1754, libs__handle_options__V_1579_1579, libs__handle_options__MercuryLibDirs_157);
        }
#line 2027 "handle_options.m"
        {
#line 2027 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1577_1577, (MR_Integer) 543, &libs__handle_options__InitDirs1_171);
        }
#line 2030 "handle_options.m"
        {
#line 2030 "handle_options.m"
          libs__handle_options__V_1588_1588 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1754_1754, libs__handle_options__InitDirs1_171, libs__handle_options__ExtraInitDirs_170);
        }
#line 2030 "handle_options.m"
        {
#line 2030 "handle_options.m"
          libs__handle_options__V_1586_1586 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2030 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1586_1586, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2030 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1586_1586, 1) = ((MR_Box) (libs__handle_options__V_1588_1588));
#line 2030 "handle_options.m"
        }
#line 2029 "handle_options.m"
        {
#line 2029 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 543, libs__handle_options__V_1586_1586, libs__handle_options__STATE_VARIABLE_Globals_1577_1577, &libs__handle_options__STATE_VARIABLE_Globals_1587_1587);
        }
#line 1983 "handle_options.m"
      }
#line 2038 "handle_options.m"
    {
#line 2038 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1587_1587, (MR_Integer) 637, &libs__handle_options__UseSearchDirs_172);
    }
#line 2048 "handle_options.m"
#line 2048 "handle_options.m"
    switch (libs__handle_options__UseSearchDirs_172) {
#line 2048 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2048 "handle_options.m"
      case (MR_Integer) 0:
#line 2049 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1594_1594 = libs__handle_options__STATE_VARIABLE_Globals_1587_1587;
#line 2048 "handle_options.m"
        break;
#line 2048 "handle_options.m"
      case (MR_Integer) 1:
#line 2041 "handle_options.m"
        {
#line 2041 "handle_options.m"
          MR_Word libs__handle_options__IntermodDirs1_173;
#line 2041 "handle_options.m"
          MR_Word libs__handle_options__SearchDirs_174;
#line 2041 "handle_options.m"
          MR_Word libs__handle_options__V_1593_1593;
#line 2041 "handle_options.m"
          MR_Word libs__handle_options__V_1595_1595;

#line 2042 "handle_options.m"
          {
#line 2042 "handle_options.m"
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1587_1587, (MR_Integer) 636, &libs__handle_options__IntermodDirs1_173);
          }
#line 2044 "handle_options.m"
          {
#line 2044 "handle_options.m"
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1587_1587, (MR_Integer) 635, &libs__handle_options__SearchDirs_174);
          }
#line 2047 "handle_options.m"
          {
#line 2047 "handle_options.m"
            libs__handle_options__V_1595_1595 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__IntermodDirs1_173, libs__handle_options__SearchDirs_174);
          }
#line 2047 "handle_options.m"
          {
#line 2047 "handle_options.m"
            libs__handle_options__V_1593_1593 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2047 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1593_1593, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2047 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1593_1593, 1) = ((MR_Box) (libs__handle_options__V_1595_1595));
#line 2047 "handle_options.m"
          }
#line 2046 "handle_options.m"
          {
#line 2046 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 636, libs__handle_options__V_1593_1593, libs__handle_options__STATE_VARIABLE_Globals_1587_1587, &libs__handle_options__STATE_VARIABLE_Globals_1594_1594);
          }
#line 2041 "handle_options.m"
        }
#line 2048 "handle_options.m"
        break;
#line 2048 "handle_options.m"
    }
#line 2052 "handle_options.m"
    {
#line 2052 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1594_1594, (MR_Integer) 634, &libs__handle_options__UseGradeSubdirs_175);
    }
#line 2054 "handle_options.m"
    {
#line 2054 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1594_1594, (MR_Integer) 537, &libs__handle_options__SearchLibFilesDirs_176);
    }
#line 2056 "handle_options.m"
    {
#line 2056 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1594_1594, (MR_Integer) 636, &libs__handle_options__IntermodDirs2_177);
    }
#line 2058 "handle_options.m"
    {
#line 2058 "handle_options.m"
      libs__handle_options__ToGradeSubdir_178 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2058 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_178, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
#line 2058 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_178, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_5));
#line 2058 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_178, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2058 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_178, 3) = ((MR_Box) (libs__handle_options__TargetArch_145));
#line 2058 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_178, 4) = ((MR_Box) (libs__handle_options__GradeString_158));
#line 2058 "handle_options.m"
    }
#line 9059 "libs.handle_options.c"
#line 9060 "libs.handle_options.c"
    switch (libs__handle_options__UseGradeSubdirs_175) {
#line 9062 "libs.handle_options.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 9064 "libs.handle_options.c"
      case (MR_Integer) 0:
#line 9066 "libs.handle_options.c"
        {
#line 9068 "libs.handle_options.c"
          MR_Word libs__handle_options__TypeCtorInfo_1763_1763;
#line 9070 "libs.handle_options.c"
          MR_Word libs__handle_options__IntermodDirs3_182;
#line 9072 "libs.handle_options.c"
          MR_Word libs__handle_options__LinkLibDirs2_183;
#line 9074 "libs.handle_options.c"
          MR_Word libs__handle_options__InitDirs2_184;
#line 9076 "libs.handle_options.c"
          MR_Word libs__handle_options__V_1614_1614;

#line 2079 "handle_options.m"
          {
#line 2079 "handle_options.m"
            libs__handle_options__IntermodDirs3_182 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__SearchLibFilesDirs_176, libs__handle_options__IntermodDirs2_177);
          }
#line 2082 "handle_options.m"
          {
#line 2082 "handle_options.m"
            libs__handle_options__V_1614_1614 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2082 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1614_1614, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2082 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1614_1614, 1) = ((MR_Box) (libs__handle_options__IntermodDirs3_182));
#line 2082 "handle_options.m"
          }
#line 2081 "handle_options.m"
          {
#line 2081 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 636, libs__handle_options__V_1614_1614, libs__handle_options__STATE_VARIABLE_Globals_1594_1594, &libs__handle_options__STATE_VARIABLE_Globals_1615_1615);
          }
#line 2084 "handle_options.m"
          {
#line 2084 "handle_options.m"
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1615_1615, (MR_Integer) 531, &libs__handle_options__LinkLibDirs2_183);
          }
#line 2086 "handle_options.m"
          {
#line 2086 "handle_options.m"
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1615_1615, (MR_Integer) 543, &libs__handle_options__InitDirs2_184);
          }
#line 9109 "libs.handle_options.c"
          libs__handle_options__TypeCtorInfo_1763_1763 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2104 "handle_options.m"
          {
#line 2104 "handle_options.m"
            libs__handle_options__LinkLibDirs_187 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1763_1763, libs__handle_options__SearchLibFilesDirs_176, libs__handle_options__LinkLibDirs2_183);
          }
#line 2105 "handle_options.m"
          {
#line 2105 "handle_options.m"
            libs__handle_options__InitDirs_190 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1763_1763, libs__handle_options__SearchLibFilesDirs_176, libs__handle_options__InitDirs2_184);
          }
#line 9121 "libs.handle_options.c"
        }
#line 9123 "libs.handle_options.c"
        break;
#line 9125 "libs.handle_options.c"
      case (MR_Integer) 1:
#line 9127 "libs.handle_options.c"
        {
#line 9129 "libs.handle_options.c"
          MR_Word libs__handle_options__TypeCtorInfo_1756_1756;
#line 9131 "libs.handle_options.c"
          MR_Word libs__handle_options__TypeCtorInfo_1762_1762;
#line 9133 "libs.handle_options.c"
          MR_String libs__handle_options__GradeSubdir_180;
#line 9135 "libs.handle_options.c"
          MR_Word libs__handle_options__SearchLibFilesGradeSubdirs_181;
#line 9137 "libs.handle_options.c"
          MR_Word libs__handle_options__ToGradeLibDir_185;
#line 9139 "libs.handle_options.c"
          MR_Word libs__handle_options__SearchGradeLibDirs_186;
#line 9141 "libs.handle_options.c"
          MR_Word libs__handle_options__ToGradeInitDir_188;
#line 9143 "libs.handle_options.c"
          MR_Word libs__handle_options__SearchGradeInitDirs_189;
#line 9145 "libs.handle_options.c"
          MR_String libs__handle_options__V_1604_1604;
#line 9147 "libs.handle_options.c"
          MR_Word libs__handle_options__V_1606_1606;
#line 9149 "libs.handle_options.c"
          MR_Word libs__handle_options__V_1608_1608;
#line 9151 "libs.handle_options.c"
          MR_Word libs__handle_options__V_1609_1609;
#line 9153 "libs.handle_options.c"
          MR_Word libs__handle_options__V_1610_1610;
#line 9155 "libs.handle_options.c"
          MR_Word libs__handle_options__V_1611_1611;
#line 9157 "libs.handle_options.c"
          MR_String libs__handle_options__V_1612_1612;
#line 9159 "libs.handle_options.c"
          MR_Word libs__handle_options__IntermodDirs3_6309;
#line 9161 "libs.handle_options.c"
          MR_Word libs__handle_options__LinkLibDirs2_6310;
#line 9163 "libs.handle_options.c"
          MR_Word libs__handle_options__InitDirs2_6311;
#line 9165 "libs.handle_options.c"
          MR_Word libs__handle_options__V_6312_6312;

#line 2069 "handle_options.m"
          {
#line 2069 "handle_options.m"
            libs__handle_options__V_1604_1604 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", libs__handle_options__GradeString_158);
          }
#line 2069 "handle_options.m"
          {
#line 2069 "handle_options.m"
            libs__handle_options__GradeSubdir_180 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1604_1604, libs__handle_options__TargetArch_145);
          }
#line 9178 "libs.handle_options.c"
          libs__handle_options__TypeCtorInfo_1756_1756 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2073 "handle_options.m"
          {
#line 2073 "handle_options.m"
            libs__handle_options__SearchLibFilesGradeSubdirs_181 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1756_1756, libs__handle_options__TypeCtorInfo_1756_1756, libs__handle_options__ToGradeSubdir_178, libs__handle_options__SearchLibFilesDirs_176);
          }
#line 2075 "handle_options.m"
          {
#line 2075 "handle_options.m"
            libs__handle_options__V_1606_1606 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2075 "handle_options.m"
            MR_hl_field(MR_mktag(1), libs__handle_options__V_1606_1606, 0) = ((MR_Box) (libs__handle_options__GradeSubdir_180));
#line 2075 "handle_options.m"
            MR_hl_field(MR_mktag(1), libs__handle_options__V_1606_1606, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2075 "handle_options.m"
          }
#line 2076 "handle_options.m"
          {
#line 2076 "handle_options.m"
            libs__handle_options__V_1612_1612 = mercury__dir__this_directory_0_f_0();
          }
#line 2076 "handle_options.m"
          {
#line 2076 "handle_options.m"
            libs__handle_options__V_1611_1611 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2076 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1611_1611, 0) = ((MR_Box) (&libs__handle_options_scalar_common_2[4]));
#line 2076 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1611_1611, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_6));
#line 2076 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1611_1611, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2076 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1611_1611, 3) = ((MR_Box) (libs__handle_options__V_1612_1612));
#line 2076 "handle_options.m"
          }
#line 2076 "handle_options.m"
          {
#line 2076 "handle_options.m"
            libs__handle_options__V_1610_1610 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2076 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1610_1610, 0) = ((MR_Box) (&libs__handle_options_scalar_common_2[5]));
#line 2076 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1610_1610, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_7));
#line 2076 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1610_1610, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2076 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1610_1610, 3) = ((MR_Box) (libs__handle_options__V_1611_1611));
#line 2076 "handle_options.m"
          }
#line 2076 "handle_options.m"
          {
#line 2076 "handle_options.m"
            libs__handle_options__V_1609_1609 = mercury__list__filter_2_f_0(libs__handle_options__TypeCtorInfo_1756_1756, libs__handle_options__V_1610_1610, libs__handle_options__IntermodDirs2_177);
          }
#line 2075 "handle_options.m"
          {
#line 2075 "handle_options.m"
            libs__handle_options__V_1608_1608 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1756_1756, libs__handle_options__SearchLibFilesGradeSubdirs_181, libs__handle_options__V_1609_1609);
          }
#line 2075 "handle_options.m"
          {
#line 2075 "handle_options.m"
            libs__handle_options__IntermodDirs3_6309 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1756_1756, libs__handle_options__V_1606_1606, libs__handle_options__V_1608_1608);
          }
#line 2082 "handle_options.m"
          {
#line 2082 "handle_options.m"
            libs__handle_options__V_6312_6312 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2082 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_6312_6312, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2082 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_6312_6312, 1) = ((MR_Box) (libs__handle_options__IntermodDirs3_6309));
#line 2082 "handle_options.m"
          }
#line 2081 "handle_options.m"
          {
#line 2081 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 636, libs__handle_options__V_6312_6312, libs__handle_options__STATE_VARIABLE_Globals_1594_1594, &libs__handle_options__STATE_VARIABLE_Globals_1615_1615);
          }
#line 2084 "handle_options.m"
          {
#line 2084 "handle_options.m"
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1615_1615, (MR_Integer) 531, &libs__handle_options__LinkLibDirs2_6310);
          }
#line 2086 "handle_options.m"
          {
#line 2086 "handle_options.m"
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1615_1615, (MR_Integer) 543, &libs__handle_options__InitDirs2_6311);
          }
#line 2094 "handle_options.m"
          {
#line 2094 "handle_options.m"
            libs__handle_options__ToGradeLibDir_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2094 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_185, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
#line 2094 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_185, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_8));
#line 2094 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_185, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2094 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_185, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_178));
#line 2094 "handle_options.m"
          }
#line 9282 "libs.handle_options.c"
          libs__handle_options__TypeCtorInfo_1762_1762 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2095 "handle_options.m"
          {
#line 2095 "handle_options.m"
            libs__handle_options__SearchGradeLibDirs_186 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1762_1762, libs__handle_options__TypeCtorInfo_1762_1762, libs__handle_options__ToGradeLibDir_185, libs__handle_options__SearchLibFilesDirs_176);
          }
#line 2096 "handle_options.m"
          {
#line 2096 "handle_options.m"
            libs__handle_options__LinkLibDirs_187 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1762_1762, libs__handle_options__SearchGradeLibDirs_186, libs__handle_options__LinkLibDirs2_6310);
          }
#line 2098 "handle_options.m"
          {
#line 2098 "handle_options.m"
            libs__handle_options__ToGradeInitDir_188 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2098 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_188, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
#line 2098 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_188, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_9));
#line 2098 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_188, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2098 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_188, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_178));
#line 2098 "handle_options.m"
          }
#line 2100 "handle_options.m"
          {
#line 2100 "handle_options.m"
            libs__handle_options__SearchGradeInitDirs_189 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1762_1762, libs__handle_options__TypeCtorInfo_1762_1762, libs__handle_options__ToGradeInitDir_188, libs__handle_options__SearchLibFilesDirs_176);
          }
#line 2101 "handle_options.m"
          {
#line 2101 "handle_options.m"
            libs__handle_options__InitDirs_190 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1762_1762, libs__handle_options__SearchGradeInitDirs_189, libs__handle_options__InitDirs2_6311);
          }
#line 9318 "libs.handle_options.c"
        }
#line 9320 "libs.handle_options.c"
        break;
#line 9322 "libs.handle_options.c"
    }
#line 2108 "handle_options.m"
    {
#line 2108 "handle_options.m"
      libs__handle_options__V_1631_1631 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2108 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1631_1631, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2108 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1631_1631, 1) = ((MR_Box) (libs__handle_options__LinkLibDirs_187));
#line 2108 "handle_options.m"
    }
#line 2107 "handle_options.m"
    {
#line 2107 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 531, libs__handle_options__V_1631_1631, libs__handle_options__STATE_VARIABLE_Globals_1615_1615, &libs__handle_options__STATE_VARIABLE_Globals_1632_1632);
    }
#line 2110 "handle_options.m"
    {
#line 2110 "handle_options.m"
      libs__handle_options__V_1634_1634 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2110 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1634_1634, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2110 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1634_1634, 1) = ((MR_Box) (libs__handle_options__InitDirs_190));
#line 2110 "handle_options.m"
    }
#line 2109 "handle_options.m"
    {
#line 2109 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 543, libs__handle_options__V_1634_1634, libs__handle_options__STATE_VARIABLE_Globals_1632_1632, &libs__handle_options__STATE_VARIABLE_Globals_1635_1635);
    }
#line 2116 "handle_options.m"
    {
#line 2116 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1635_1635, (MR_Integer) 633, &libs__handle_options__UseSubdirs_191);
    }
#line 2124 "handle_options.m"
#line 2124 "handle_options.m"
    switch (libs__handle_options__UseGradeSubdirs_175) {
#line 2124 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2124 "handle_options.m"
      case (MR_Integer) 0:
#line 2125 "handle_options.m"
        {
#line 9368 "libs.handle_options.c"
          libs__handle_options__succeeded = (libs__handle_options__UseSubdirs_191 == (MR_Integer) 1);
#line 2125 "handle_options.m"
          if (libs__handle_options__succeeded)
#line 2125 "handle_options.m"
            {
#line 2128 "handle_options.m"
              libs__handle_options__ToMihsSubdir_192 = (MR_Word) &libs__handle_options_scalar_common_3[9];
#line 2129 "handle_options.m"
              libs__handle_options__ToHrlsSubdir_193 = (MR_Word) &libs__handle_options_scalar_common_3[10];
#line 2129 "handle_options.m"
              libs__handle_options__succeeded = MR_TRUE;
#line 2125 "handle_options.m"
            }
#line 2125 "handle_options.m"
        }
#line 2124 "handle_options.m"
        break;
#line 2124 "handle_options.m"
      case (MR_Integer) 1:
#line 2119 "handle_options.m"
        {
#line 2120 "handle_options.m"
          {
#line 2120 "handle_options.m"
            libs__handle_options__ToMihsSubdir_192 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2120 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_192, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
#line 2120 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_192, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_12));
#line 2120 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_192, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2120 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_192, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_178));
#line 2120 "handle_options.m"
          }
#line 2122 "handle_options.m"
          {
#line 2122 "handle_options.m"
            libs__handle_options__ToHrlsSubdir_193 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2122 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_193, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
#line 2122 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_193, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_13));
#line 2122 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_193, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2122 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_193, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_178));
#line 2122 "handle_options.m"
          }
#line 2119 "handle_options.m"
          libs__handle_options__succeeded = MR_TRUE;
#line 2119 "handle_options.m"
        }
#line 2124 "handle_options.m"
        break;
#line 2124 "handle_options.m"
    }
#line 2117 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2137 "handle_options.m"
      {
#line 2137 "handle_options.m"
        MR_Word libs__handle_options__TypeCtorInfo_1764_1764;
#line 2137 "handle_options.m"
        MR_Word libs__handle_options__CIncludeDirs1_194;
#line 2137 "handle_options.m"
        MR_String libs__handle_options__MihsSubdir_195;
#line 2137 "handle_options.m"
        MR_Word libs__handle_options__SearchLibMihsSubdirs_196;
#line 2137 "handle_options.m"
        MR_Word libs__handle_options__SubdirCIncludeDirs_197;
#line 2137 "handle_options.m"
        MR_Word libs__handle_options__ErlangIncludeDirs1_198;
#line 2137 "handle_options.m"
        MR_String libs__handle_options__HrlsSubdir_199;
#line 2137 "handle_options.m"
        MR_Word libs__handle_options__SubdirErlangIncludeDirs_200;
#line 2137 "handle_options.m"
        MR_String libs__handle_options__V_1660_1660;
#line 2137 "handle_options.m"
        MR_String libs__handle_options__V_1661_1661;
#line 2137 "handle_options.m"
        MR_Word libs__handle_options__V_1662_1662;
#line 2137 "handle_options.m"
        MR_Word libs__handle_options__V_1663_1663;
#line 2137 "handle_options.m"
        MR_Word libs__handle_options__V_1665_1665;
#line 2137 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1666_1666;
#line 2137 "handle_options.m"
        MR_String libs__handle_options__V_1668_1668;
#line 2137 "handle_options.m"
        MR_Word libs__handle_options__V_1670_1670;
#line 2138 "handle_options.m"
        MR_Box MR_CALL (* libs__handle_options__func_11)(MR_Box, MR_Box);
#line 2138 "handle_options.m"
        MR_Box libs__handle_options__conv12_MihsSubdir_195;
#line 2147 "handle_options.m"
        MR_Box MR_CALL (* libs__handle_options__func_13)(MR_Box, MR_Box);
#line 2147 "handle_options.m"
        MR_Box libs__handle_options__conv14_HrlsSubdir_199;

#line 2136 "handle_options.m"
        {
#line 2136 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1635_1635, (MR_Integer) 484, &libs__handle_options__CIncludeDirs1_194);
        }
#line 2138 "handle_options.m"
        {
#line 2138 "handle_options.m"
          libs__handle_options__V_1660_1660 = mercury__dir__this_directory_0_f_0();
        }
#line 2138 "handle_options.m"
        libs__handle_options__func_11 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_192, (MR_Integer) 1)));
#line 2138 "handle_options.m"
        {
#line 2138 "handle_options.m"
          libs__handle_options__conv12_MihsSubdir_195 = libs__handle_options__func_11(((MR_Box) libs__handle_options__ToMihsSubdir_192), ((MR_Box) (libs__handle_options__V_1660_1660)));
        }
#line 2138 "handle_options.m"
        libs__handle_options__MihsSubdir_195 = ((MR_String) libs__handle_options__conv12_MihsSubdir_195);
#line 9490 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_1764_1764 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2139 "handle_options.m"
        {
#line 2139 "handle_options.m"
          libs__handle_options__SearchLibMihsSubdirs_196 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1764_1764, libs__handle_options__TypeCtorInfo_1764_1764, libs__handle_options__ToMihsSubdir_192, libs__handle_options__SearchLibFilesDirs_176);
        }
#line 2140 "handle_options.m"
        {
#line 2140 "handle_options.m"
          libs__handle_options__V_1661_1661 = mercury__dir__this_directory_0_f_0();
        }
#line 2141 "handle_options.m"
        {
#line 2141 "handle_options.m"
          libs__handle_options__V_1663_1663 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1764_1764, libs__handle_options__SearchLibMihsSubdirs_196, libs__handle_options__CIncludeDirs1_194);
        }
#line 2140 "handle_options.m"
        {
#line 2140 "handle_options.m"
          libs__handle_options__V_1662_1662 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2140 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1662_1662, 0) = ((MR_Box) (libs__handle_options__MihsSubdir_195));
#line 2140 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1662_1662, 1) = ((MR_Box) (libs__handle_options__V_1663_1663));
#line 2140 "handle_options.m"
        }
#line 2140 "handle_options.m"
        {
#line 2140 "handle_options.m"
          libs__handle_options__SubdirCIncludeDirs_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2140 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirCIncludeDirs_197, 0) = ((MR_Box) (libs__handle_options__V_1661_1661));
#line 2140 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirCIncludeDirs_197, 1) = ((MR_Box) (libs__handle_options__V_1662_1662));
#line 2140 "handle_options.m"
        }
#line 2143 "handle_options.m"
        {
#line 2143 "handle_options.m"
          libs__handle_options__V_1665_1665 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2143 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1665_1665, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2143 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1665_1665, 1) = ((MR_Box) (libs__handle_options__SubdirCIncludeDirs_197));
#line 2143 "handle_options.m"
        }
#line 2142 "handle_options.m"
        {
#line 2142 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 484, libs__handle_options__V_1665_1665, libs__handle_options__STATE_VARIABLE_Globals_1635_1635, &libs__handle_options__STATE_VARIABLE_Globals_1666_1666);
        }
#line 2145 "handle_options.m"
        {
#line 2145 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1666_1666, (MR_Integer) 522, &libs__handle_options__ErlangIncludeDirs1_198);
        }
#line 2147 "handle_options.m"
        {
#line 2147 "handle_options.m"
          libs__handle_options__V_1668_1668 = mercury__dir__this_directory_0_f_0();
        }
#line 2147 "handle_options.m"
        libs__handle_options__func_13 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_193, (MR_Integer) 1)));
#line 2147 "handle_options.m"
        {
#line 2147 "handle_options.m"
          libs__handle_options__conv14_HrlsSubdir_199 = libs__handle_options__func_13(((MR_Box) libs__handle_options__ToHrlsSubdir_193), ((MR_Box) (libs__handle_options__V_1668_1668)));
        }
#line 2147 "handle_options.m"
        libs__handle_options__HrlsSubdir_199 = ((MR_String) libs__handle_options__conv14_HrlsSubdir_199);
#line 2148 "handle_options.m"
        {
#line 2148 "handle_options.m"
          libs__handle_options__SubdirErlangIncludeDirs_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2148 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirErlangIncludeDirs_200, 0) = ((MR_Box) (libs__handle_options__HrlsSubdir_199));
#line 2148 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirErlangIncludeDirs_200, 1) = ((MR_Box) (libs__handle_options__ErlangIncludeDirs1_198));
#line 2148 "handle_options.m"
        }
#line 2150 "handle_options.m"
        {
#line 2150 "handle_options.m"
          libs__handle_options__V_1670_1670 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2150 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1670_1670, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2150 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1670_1670, 1) = ((MR_Box) (libs__handle_options__SubdirErlangIncludeDirs_200));
#line 2150 "handle_options.m"
        }
#line 2149 "handle_options.m"
        {
#line 2149 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 522, libs__handle_options__V_1670_1670, libs__handle_options__STATE_VARIABLE_Globals_1666_1666, &libs__handle_options__STATE_VARIABLE_Globals_1671_1671);
        }
#line 2137 "handle_options.m"
      }
#line 2117 "handle_options.m"
    else
#line 2117 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1671_1671 = libs__handle_options__STATE_VARIABLE_Globals_1635_1635;
#line 2157 "handle_options.m"
    {
#line 2157 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 323, (MR_Integer) 13, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1671_1671, &libs__handle_options__STATE_VARIABLE_Globals_1675_1675);
    }
#line 1761 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_108 == (MR_Integer) 1);
#line 1761 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1761 "handle_options.m"
      {
#line 1762 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__GC_Method_28 == (MR_Integer) 5);
#line 1761 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1763 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__PutNondetEnvOnHeap_133 == (MR_Integer) 1);
#line 1761 "handle_options.m"
      }
#line 9611 "libs.handle_options.c"
    if (libs__handle_options__succeeded)
#line 9613 "libs.handle_options.c"
      {
#line 9615 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Specs_1373_1373;

#line 1768 "handle_options.m"
        {
#line 1768 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[216]), libs__handle_options__STATE_VARIABLE_Specs_1272_1272, &libs__handle_options__STATE_VARIABLE_Specs_1373_1373);
        }
#line 2170 "handle_options.m"
        {
#line 2170 "handle_options.m"
          libs__handle_options__option_requires_7_p_0((MR_Integer) 26, (MR_Integer) 450, libs__handle_options__V_348_348, (MR_String) "--warn-non-tail-recursion requires --optimize-tailcalls", libs__handle_options__STATE_VARIABLE_Globals_1675_1675, libs__handle_options__STATE_VARIABLE_Specs_1373_1373, &libs__handle_options__STATE_VARIABLE_Specs_1687_1687);
        }
#line 9628 "libs.handle_options.c"
      }
#line 9630 "libs.handle_options.c"
    else
#line 2168 "handle_options.m"
#line 2168 "handle_options.m"
      switch (libs__handle_options__HighLevelCode_108) {
#line 2168 "handle_options.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 2168 "handle_options.m"
        case (MR_Integer) 0:
#line 2163 "handle_options.m"
          {
#line 2164 "handle_options.m"
            {
#line 2164 "handle_options.m"
              libs__handle_options__option_requires_7_p_0((MR_Integer) 26, (MR_Integer) 461, libs__handle_options__V_501_501, (MR_String) "--warn-non-tail-recursion is incompatible with --pessimize-tailcalls", libs__handle_options__STATE_VARIABLE_Globals_1675_1675, libs__handle_options__STATE_VARIABLE_Specs_1272_1272, &libs__handle_options__STATE_VARIABLE_Specs_1687_1687);
            }
#line 2163 "handle_options.m"
          }
#line 2168 "handle_options.m"
          break;
#line 2168 "handle_options.m"
        case (MR_Integer) 1:
#line 2169 "handle_options.m"
          {
#line 2170 "handle_options.m"
            {
#line 2170 "handle_options.m"
              libs__handle_options__option_requires_7_p_0((MR_Integer) 26, (MR_Integer) 450, libs__handle_options__V_348_348, (MR_String) "--warn-non-tail-recursion requires --optimize-tailcalls", libs__handle_options__STATE_VARIABLE_Globals_1675_1675, libs__handle_options__STATE_VARIABLE_Specs_1272_1272, &libs__handle_options__STATE_VARIABLE_Specs_1687_1687);
            }
#line 2169 "handle_options.m"
          }
#line 2168 "handle_options.m"
          break;
#line 2168 "handle_options.m"
      }
#line 2174 "handle_options.m"
    {
#line 2174 "handle_options.m"
      libs__handle_options__option_requires_7_p_0((MR_Integer) 26, (MR_Integer) 98, libs__handle_options__V_501_501, (MR_String) "--warn-non-tail-recursion is incompatible with --errorcheck-only", libs__handle_options__STATE_VARIABLE_Globals_1675_1675, libs__handle_options__STATE_VARIABLE_Specs_1687_1687, &libs__handle_options__STATE_VARIABLE_Specs_1695_1695);
    }
#line 2183 "handle_options.m"
#line 2183 "handle_options.m"
    switch (libs__handle_options__Target_27) {
#line 2183 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2183 "handle_options.m"
      case (MR_Integer) 0:
#line 2181 "handle_options.m"
        {
#line 2182 "handle_options.m"
          libs__handle_options__BackendForeignLanguages_201 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[233]);
#line 2181 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1707_1707 = libs__handle_options__STATE_VARIABLE_Globals_1675_1675;
#line 2181 "handle_options.m"
        }
#line 2183 "handle_options.m"
        break;
#line 2183 "handle_options.m"
      case (MR_Integer) 1:
#line 2184 "handle_options.m"
        {
#line 2185 "handle_options.m"
          libs__handle_options__BackendForeignLanguages_201 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[234]);
#line 2184 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1707_1707 = libs__handle_options__STATE_VARIABLE_Globals_1675_1675;
#line 2184 "handle_options.m"
        }
#line 2183 "handle_options.m"
        break;
#line 2183 "handle_options.m"
      case (MR_Integer) 3:
#line 2190 "handle_options.m"
        {
#line 2190 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1703_1703;

#line 2191 "handle_options.m"
          libs__handle_options__BackendForeignLanguages_201 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[18]);
#line 2192 "handle_options.m"
          {
#line 2192 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 359, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1675_1675, &libs__handle_options__STATE_VARIABLE_Globals_1703_1703);
          }
#line 2193 "handle_options.m"
          {
#line 2193 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 293, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1703_1703, &libs__handle_options__STATE_VARIABLE_Globals_1707_1707);
          }
#line 2190 "handle_options.m"
        }
#line 2183 "handle_options.m"
        break;
#line 2183 "handle_options.m"
      case (MR_Integer) 2:
#line 2187 "handle_options.m"
        {
#line 2188 "handle_options.m"
          libs__handle_options__BackendForeignLanguages_201 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[235]);
#line 2187 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1707_1707 = libs__handle_options__STATE_VARIABLE_Globals_1675_1675;
#line 2187 "handle_options.m"
        }
#line 2183 "handle_options.m"
        break;
#line 2183 "handle_options.m"
    }
#line 2197 "handle_options.m"
    {
#line 2197 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1707_1707, (MR_Integer) 259, &libs__handle_options__CurrentBackendForeignLanguage_202);
    }
#line 2203 "handle_options.m"
    if ((libs__handle_options__CurrentBackendForeignLanguage_202 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2200 "handle_options.m"
      {
#line 2200 "handle_options.m"
        MR_Word libs__handle_options__V_1717_1717;

#line 2202 "handle_options.m"
        {
#line 2202 "handle_options.m"
          libs__handle_options__V_1717_1717 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2202 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1717_1717, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2202 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1717_1717, 1) = ((MR_Box) (libs__handle_options__BackendForeignLanguages_201));
#line 2202 "handle_options.m"
        }
#line 2201 "handle_options.m"
        {
#line 2201 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 259, libs__handle_options__V_1717_1717, libs__handle_options__STATE_VARIABLE_Globals_1707_1707, &libs__handle_options__STATE_VARIABLE_Globals_1718_1718);
        }
#line 2200 "handle_options.m"
      }
#line 2203 "handle_options.m"
    else
#line 2204 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1718_1718 = libs__handle_options__STATE_VARIABLE_Globals_1707_1707;
#line 2207 "handle_options.m"
    {
#line 2207 "handle_options.m"
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1718_1718, (MR_Integer) 311, &libs__handle_options__CompareSpec_205);
    }
#line 2209 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__CompareSpec_205 < (MR_Integer) 0);
#line 2209 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2217 "handle_options.m"
#line 2217 "handle_options.m"
      switch (libs__handle_options__HighLevelCode_108) {
#line 2217 "handle_options.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 2217 "handle_options.m"
        case (MR_Integer) 0:
#line 2215 "handle_options.m"
          {
#line 2216 "handle_options.m"
            {
#line 2216 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 311, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[6]), libs__handle_options__STATE_VARIABLE_Globals_1718_1718, &libs__handle_options__STATE_VARIABLE_Globals_1727_1727);
            }
#line 2215 "handle_options.m"
          }
#line 2217 "handle_options.m"
          break;
#line 2217 "handle_options.m"
        case (MR_Integer) 1:
#line 2218 "handle_options.m"
          {
#line 2219 "handle_options.m"
            {
#line 2219 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 311, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[7]), libs__handle_options__STATE_VARIABLE_Globals_1718_1718, &libs__handle_options__STATE_VARIABLE_Globals_1727_1727);
            }
#line 2218 "handle_options.m"
          }
#line 2217 "handle_options.m"
          break;
#line 2217 "handle_options.m"
      }
#line 2209 "handle_options.m"
    else
#line 2209 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1727_1727 = libs__handle_options__STATE_VARIABLE_Globals_1718_1718;
#line 2228 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__Target_27 == (MR_Integer) 0);
#line 2228 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2228 "handle_options.m"
      {
#line 2234 "handle_options.m"
#line 2234 "handle_options.m"
        switch (libs__handle_options__TagsMethod_59) {
#line 2234 "handle_options.m"
          default:
#line 2234 "handle_options.m"
            libs__handle_options__succeeded = MR_FALSE;
#line 2234 "handle_options.m"
            break;
#line 2234 "handle_options.m"
          case (MR_Integer) 2:
#line 2234 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 2234 "handle_options.m"
            break;
#line 2234 "handle_options.m"
          case (MR_Integer) 1:
#line 2233 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 2234 "handle_options.m"
            break;
#line 2234 "handle_options.m"
        }
#line 2228 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 2228 "handle_options.m"
          {
#line 2236 "handle_options.m"
            libs__handle_options__V_1729_1729 = (MR_Integer) 2;
#line 2236 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__NumTagBits_57 >= libs__handle_options__V_1729_1729);
#line 2228 "handle_options.m"
          }
#line 2228 "handle_options.m"
      }
#line 2225 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2238 "handle_options.m"
      {
#line 2238 "handle_options.m"
        {
#line 2238 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 266, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1727_1727, &libs__handle_options__STATE_VARIABLE_Globals_1732_1732);
        }
#line 2238 "handle_options.m"
      }
#line 2225 "handle_options.m"
    else
#line 2241 "handle_options.m"
      {
#line 2241 "handle_options.m"
        {
#line 2241 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 266, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1727_1727, &libs__handle_options__STATE_VARIABLE_Globals_1732_1732);
        }
#line 2241 "handle_options.m"
      }
#line 2248 "handle_options.m"
#line 2248 "handle_options.m"
    switch (libs__handle_options__HighLevelCode_108) {
#line 2248 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2248 "handle_options.m"
      case (MR_Integer) 0:
#line 2247 "handle_options.m"
        {
#line 2247 "handle_options.m"
          libs__handle_options__postprocess_options_lowlevel_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_1732_1732, &libs__handle_options__STATE_VARIABLE_Globals_1738_1738);
        }
#line 2248 "handle_options.m"
        break;
#line 2248 "handle_options.m"
      case (MR_Integer) 1:
#line 2249 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1738_1738 = libs__handle_options__STATE_VARIABLE_Globals_1732_1732;
#line 2248 "handle_options.m"
        break;
#line 2248 "handle_options.m"
    }
#line 2251 "handle_options.m"
    {
#line 2251 "handle_options.m"
      libs__compute_grade__postprocess_options_libgrades_4_p_0(libs__handle_options__STATE_VARIABLE_Globals_1738_1738, libs__handle_options__STATE_VARIABLE_Globals_208, libs__handle_options__STATE_VARIABLE_Specs_1695_1695, libs__handle_options__STATE_VARIABLE_Specs_207);
    }
#line 2252 "handle_options.m"
    {
#line 2252 "handle_options.m"
      libs__globals__globals_init_mutables_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_208);
    }
#line 662 "handle_options.m"
  }
#line 646 "handle_options.m"
}

#line 222 "handle_options.m"
static void MR_CALL 
libs__handle_options__check_option_values_22_p_0(
#line 222 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_OptionTable_0_116,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_OptionTable_117,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__Target_24,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__GC_Method_25,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__TagsMethod_26,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__TermNorm_27,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__Term2Norm_28,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__TraceLevel_29,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__TraceSuppress_30,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__SSTraceLevel_31,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__MaybeThreadSafe_32,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__C_CompilerType_33,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__CSharp_CompilerType_34,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__ReuseStrategy_35,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__MaybeFeedbackInfo_36,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__HostEnvType_37,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__SystemEnvType_38,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__TargetEnvType_39,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__LimitErrorContextsMap_40,
#line 222 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Specs_118)
#line 222 "handle_options.m"
{
#line 237 "handle_options.m"
  {
#line 237 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_826_826;
#line 237 "handle_options.m"
    MR_String libs__handle_options__TargetStr_43;
#line 237 "handle_options.m"
    MR_String libs__handle_options__GC_MethodStr_46;
#line 237 "handle_options.m"
    MR_String libs__handle_options__TagsMethodStr_49;
#line 237 "handle_options.m"
    MR_Integer libs__handle_options__FactTablePercentFull_52;
#line 237 "handle_options.m"
    MR_String libs__handle_options__TermNormStr_54;
#line 237 "handle_options.m"
    MR_String libs__handle_options__Term2NormStr_57;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__ForceDisableTracing_60;
#line 237 "handle_options.m"
    MR_String libs__handle_options__SuppressStr_67;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__ForceDisableSSDB_70;
#line 237 "handle_options.m"
    MR_String libs__handle_options__MaybeThreadSafeStr_75;
#line 237 "handle_options.m"
    MR_String libs__handle_options__DumpAlias_78;
#line 237 "handle_options.m"
    MR_String libs__handle_options__C_CompilerTypeStr_82;
#line 237 "handle_options.m"
    MR_String libs__handle_options__CSharp_CompilerTypeStr_85;
#line 237 "handle_options.m"
    MR_String libs__handle_options__ReuseConstraintStr_88;
#line 237 "handle_options.m"
    MR_Integer libs__handle_options__ReuseConstraintArgNum_89;
#line 237 "handle_options.m"
    MR_String libs__handle_options__FeedbackFile_92;
#line 237 "handle_options.m"
    MR_String libs__handle_options__HostEnvTypeStr_98;
#line 237 "handle_options.m"
    MR_String libs__handle_options__SystemEnvTypeStr_101;
#line 237 "handle_options.m"
    MR_String libs__handle_options__TargetEnvTypeStr_104;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__LimitErrorContextsOptionStrs_108;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__BadLimitErrorContextsOptions_109;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_121_121 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_156_156;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_195_195;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_228_228;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_249_249;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_282_282;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_315_315;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_337_337;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_394_394;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_431_431;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_465_465;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_OptionTable_469_469;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_496_496;
#line 237 "handle_options.m"
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_498_498;
#line 237 "handle_options.m"
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_499_499;
#line 237 "handle_options.m"
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_502_502;
#line 237 "handle_options.m"
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_506_506;
#line 237 "handle_options.m"
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_530_530;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__V_533_533;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_572_572;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_608_608;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_640_640;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_645_645;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_682_682;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_720_720;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_758_758;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_774_774;
#line 240 "handle_options.m"
    MR_Word libs__handle_options__TargetPrime_44;
#line 253 "handle_options.m"
    MR_Word libs__handle_options__GC_MethodPrime_47;
#line 266 "handle_options.m"
    MR_Word libs__handle_options__TagsMethodPrime_50;
#line 281 "handle_options.m"
    MR_Integer libs__handle_options__V_231_231;
#line 294 "handle_options.m"
    MR_Word libs__handle_options__TermNormPrime_55;
#line 307 "handle_options.m"
    MR_Word libs__handle_options__Term2NormPrime_58;
#line 355 "handle_options.m"
    MR_Word libs__handle_options__TraceSuppressPrime_68;
#line 391 "handle_options.m"
    MR_Word libs__handle_options__MaybeThreadSafePrime_76;
#line 435 "handle_options.m"
    MR_Char libs__handle_options__V_501_501;
#line 444 "handle_options.m"
    MR_Char libs__handle_options__V_505_505;
#line 475 "handle_options.m"
    MR_Char libs__handle_options__V_529_529;
#line 486 "handle_options.m"
    MR_Word libs__handle_options__C_CompilerTypePrime_83;
#line 501 "handle_options.m"
    MR_Word libs__handle_options__CSharp_CompilerTypePrime_86;
#line 521 "handle_options.m"
    MR_Word libs__handle_options__ReuseStrategyPrime_90;
#line 564 "handle_options.m"
    MR_Word libs__handle_options__HostEnvTypePrime_99;
#line 576 "handle_options.m"
    MR_Word libs__handle_options__SystemEnvTypePrime_102;
#line 595 "handle_options.m"
    MR_Word libs__handle_options__TargetEnvTypePrime_105;

#line 239 "handle_options.m"
    {
#line 239 "handle_options.m"
      libs__handle_options__raw_lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 176, &libs__handle_options__TargetStr_43);
    }
#line 240 "handle_options.m"
    {
#line 240 "handle_options.m"
      libs__handle_options__succeeded = libs__globals__convert_target_2_p_0(libs__handle_options__TargetStr_43, &libs__handle_options__TargetPrime_44);
    }
#line 240 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 241 "handle_options.m"
      {
#line 241 "handle_options.m"
        *libs__handle_options__Target_24 = libs__handle_options__TargetPrime_44;
#line 241 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_156_156 = libs__handle_options__STATE_VARIABLE_Specs_121_121;
#line 241 "handle_options.m"
      }
#line 240 "handle_options.m"
    else
#line 243 "handle_options.m"
      {
#line 243 "handle_options.m"
        MR_Word libs__handle_options__TypeCtorInfo_816_816;
#line 243 "handle_options.m"
        MR_Word libs__handle_options__TargetSpec_45;
#line 243 "handle_options.m"
        MR_Word libs__handle_options__V_123_123;
#line 243 "handle_options.m"
        MR_Word libs__handle_options__V_126_126;
#line 243 "handle_options.m"
        MR_Word libs__handle_options__V_127_127;
#line 243 "handle_options.m"
        MR_Word libs__handle_options__V_138_138;
#line 243 "handle_options.m"
        MR_Word libs__handle_options__V_139_139;

#line 243 "handle_options.m"
        *libs__handle_options__Target_24 = (MR_Integer) 0;
#line 10138 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_816_816 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 245 "handle_options.m"
        {
#line 245 "handle_options.m"
          libs__handle_options__V_127_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_127_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 245 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_127_127, 1) = ((MR_Box) (libs__handle_options__TargetStr_43));
#line 245 "handle_options.m"
        }
#line 245 "handle_options.m"
        {
#line 245 "handle_options.m"
          libs__handle_options__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_126_126, 0) = ((MR_Box) (libs__handle_options__V_127_127));
#line 245 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_126_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[17])));
#line 245 "handle_options.m"
        }
#line 245 "handle_options.m"
        {
#line 245 "handle_options.m"
          libs__handle_options__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_123_123, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
#line 245 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_123_123, 1) = ((MR_Box) (libs__handle_options__V_126_126));
#line 245 "handle_options.m"
        }
#line 247 "handle_options.m"
        {
#line 247 "handle_options.m"
          libs__handle_options__V_139_139 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[21]));
        }
#line 247 "handle_options.m"
        {
#line 247 "handle_options.m"
          libs__handle_options__V_138_138 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_816_816, libs__handle_options__V_139_139, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
        }
#line 246 "handle_options.m"
        {
#line 246 "handle_options.m"
          libs__handle_options__TargetSpec_45 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_816_816, libs__handle_options__V_123_123, libs__handle_options__V_138_138);
        }
#line 249 "handle_options.m"
        {
#line 249 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__TargetSpec_45, libs__handle_options__STATE_VARIABLE_Specs_121_121, &libs__handle_options__STATE_VARIABLE_Specs_156_156);
        }
#line 243 "handle_options.m"
      }
#line 252 "handle_options.m"
    {
#line 252 "handle_options.m"
      libs__handle_options__raw_lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 213, &libs__handle_options__GC_MethodStr_46);
    }
#line 253 "handle_options.m"
    {
#line 253 "handle_options.m"
      libs__handle_options__succeeded = libs__globals__convert_gc_method_2_p_0(libs__handle_options__GC_MethodStr_46, &libs__handle_options__GC_MethodPrime_47);
    }
#line 253 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 254 "handle_options.m"
      {
#line 254 "handle_options.m"
        *libs__handle_options__GC_Method_25 = libs__handle_options__GC_MethodPrime_47;
#line 254 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_195_195 = libs__handle_options__STATE_VARIABLE_Specs_156_156;
#line 254 "handle_options.m"
      }
#line 253 "handle_options.m"
    else
#line 256 "handle_options.m"
      {
#line 256 "handle_options.m"
        MR_Word libs__handle_options__TypeCtorInfo_817_817;
#line 256 "handle_options.m"
        MR_Word libs__handle_options__GCMethodSpec_48;
#line 256 "handle_options.m"
        MR_Word libs__handle_options__V_158_158;
#line 256 "handle_options.m"
        MR_Word libs__handle_options__V_161_161;
#line 256 "handle_options.m"
        MR_Word libs__handle_options__V_162_162;
#line 256 "handle_options.m"
        MR_Word libs__handle_options__V_173_173;
#line 256 "handle_options.m"
        MR_Word libs__handle_options__V_174_174;

#line 256 "handle_options.m"
        *libs__handle_options__GC_Method_25 = (MR_Integer) 1;
#line 10233 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_817_817 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 258 "handle_options.m"
        {
#line 258 "handle_options.m"
          libs__handle_options__V_162_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_162_162, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 258 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_162_162, 1) = ((MR_Box) (libs__handle_options__GC_MethodStr_46));
#line 258 "handle_options.m"
        }
#line 258 "handle_options.m"
        {
#line 258 "handle_options.m"
          libs__handle_options__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_161_161, 0) = ((MR_Box) (libs__handle_options__V_162_162));
#line 258 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_161_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[24])));
#line 258 "handle_options.m"
        }
#line 258 "handle_options.m"
        {
#line 258 "handle_options.m"
          libs__handle_options__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_158_158, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
#line 258 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_158_158, 1) = ((MR_Box) (libs__handle_options__V_161_161));
#line 258 "handle_options.m"
        }
#line 260 "handle_options.m"
        {
#line 260 "handle_options.m"
          libs__handle_options__V_174_174 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[30]));
        }
#line 261 "handle_options.m"
        {
#line 261 "handle_options.m"
          libs__handle_options__V_173_173 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_817_817, libs__handle_options__V_174_174, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
        }
#line 259 "handle_options.m"
        {
#line 259 "handle_options.m"
          libs__handle_options__GCMethodSpec_48 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_817_817, libs__handle_options__V_158_158, libs__handle_options__V_173_173);
        }
#line 262 "handle_options.m"
        {
#line 262 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__GCMethodSpec_48, libs__handle_options__STATE_VARIABLE_Specs_156_156, &libs__handle_options__STATE_VARIABLE_Specs_195_195);
        }
#line 256 "handle_options.m"
      }
#line 265 "handle_options.m"
    {
#line 265 "handle_options.m"
      libs__handle_options__raw_lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 234, &libs__handle_options__TagsMethodStr_49);
    }
#line 266 "handle_options.m"
    {
#line 266 "handle_options.m"
      libs__handle_options__succeeded = libs__globals__convert_tags_method_2_p_0(libs__handle_options__TagsMethodStr_49, &libs__handle_options__TagsMethodPrime_50);
    }
#line 266 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 267 "handle_options.m"
      {
#line 267 "handle_options.m"
        *libs__handle_options__TagsMethod_26 = libs__handle_options__TagsMethodPrime_50;
#line 267 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_228_228 = libs__handle_options__STATE_VARIABLE_Specs_195_195;
#line 267 "handle_options.m"
      }
#line 266 "handle_options.m"
    else
#line 269 "handle_options.m"
      {
#line 269 "handle_options.m"
        MR_Word libs__handle_options__TypeCtorInfo_818_818;
#line 269 "handle_options.m"
        MR_Word libs__handle_options__TagsMethodSpec_51;
#line 269 "handle_options.m"
        MR_Word libs__handle_options__V_197_197;
#line 269 "handle_options.m"
        MR_Word libs__handle_options__V_200_200;
#line 269 "handle_options.m"
        MR_Word libs__handle_options__V_201_201;
#line 269 "handle_options.m"
        MR_Word libs__handle_options__V_212_212;
#line 269 "handle_options.m"
        MR_Word libs__handle_options__V_213_213;

#line 269 "handle_options.m"
        *libs__handle_options__TagsMethod_26 = (MR_Integer) 0;
#line 10328 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_818_818 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 271 "handle_options.m"
        {
#line 271 "handle_options.m"
          libs__handle_options__V_201_201 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_201_201, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 271 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_201_201, 1) = ((MR_Box) (libs__handle_options__TagsMethodStr_49));
#line 271 "handle_options.m"
        }
#line 271 "handle_options.m"
        {
#line 271 "handle_options.m"
          libs__handle_options__V_200_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_200_200, 0) = ((MR_Box) (libs__handle_options__V_201_201));
#line 271 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_200_200, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[33])));
#line 271 "handle_options.m"
        }
#line 271 "handle_options.m"
        {
#line 271 "handle_options.m"
          libs__handle_options__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_197_197, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
#line 271 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_197_197, 1) = ((MR_Box) (libs__handle_options__V_200_200));
#line 271 "handle_options.m"
        }
#line 273 "handle_options.m"
        {
#line 273 "handle_options.m"
          libs__handle_options__V_213_213 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[36]));
        }
#line 273 "handle_options.m"
        {
#line 273 "handle_options.m"
          libs__handle_options__V_212_212 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_818_818, libs__handle_options__V_213_213, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
        }
#line 272 "handle_options.m"
        {
#line 272 "handle_options.m"
          libs__handle_options__TagsMethodSpec_51 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_818_818, libs__handle_options__V_197_197, libs__handle_options__V_212_212);
        }
#line 275 "handle_options.m"
        {
#line 275 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__TagsMethodSpec_51, libs__handle_options__STATE_VARIABLE_Specs_195_195, &libs__handle_options__STATE_VARIABLE_Specs_228_228);
        }
#line 269 "handle_options.m"
      }
#line 278 "handle_options.m"
    {
#line 278 "handle_options.m"
      libs__handle_options__raw_lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 314, &libs__handle_options__FactTablePercentFull_52);
    }
#line 281 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__FactTablePercentFull_52 >= (MR_Integer) 1);
#line 281 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 281 "handle_options.m"
      {
#line 282 "handle_options.m"
        libs__handle_options__V_231_231 = (MR_Integer) 100;
#line 282 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__FactTablePercentFull_52 <= libs__handle_options__V_231_231);
#line 281 "handle_options.m"
      }
#line 280 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 280 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Specs_249_249 = libs__handle_options__STATE_VARIABLE_Specs_228_228;
#line 280 "handle_options.m"
    else
#line 289 "handle_options.m"
      {
#line 289 "handle_options.m"
        MR_Word libs__handle_options__FactTablePercentFullSpec_53;
#line 289 "handle_options.m"
        MR_Word libs__handle_options__V_234_234;
#line 289 "handle_options.m"
        MR_Word libs__handle_options__V_235_235;

#line 287 "handle_options.m"
        {
#line 287 "handle_options.m"
          libs__handle_options__V_235_235 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_235_235, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 287 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_235_235, 1) = ((MR_Box) (libs__handle_options__FactTablePercentFull_52));
#line 287 "handle_options.m"
        }
#line 287 "handle_options.m"
        {
#line 287 "handle_options.m"
          libs__handle_options__V_234_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_234_234, 0) = ((MR_Box) (libs__handle_options__V_235_235));
#line 287 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_234_234, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[41])));
#line 287 "handle_options.m"
        }
#line 287 "handle_options.m"
        {
#line 287 "handle_options.m"
          libs__handle_options__FactTablePercentFullSpec_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__FactTablePercentFullSpec_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
#line 287 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__FactTablePercentFullSpec_53, 1) = ((MR_Box) (libs__handle_options__V_234_234));
#line 287 "handle_options.m"
        }
#line 290 "handle_options.m"
        {
#line 290 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__FactTablePercentFullSpec_53, libs__handle_options__STATE_VARIABLE_Specs_228_228, &libs__handle_options__STATE_VARIABLE_Specs_249_249);
        }
#line 289 "handle_options.m"
      }
#line 293 "handle_options.m"
    {
#line 293 "handle_options.m"
      libs__handle_options__raw_lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 413, &libs__handle_options__TermNormStr_54);
    }
#line 294 "handle_options.m"
    {
#line 294 "handle_options.m"
      libs__handle_options__succeeded = libs__globals__convert_termination_norm_2_p_0(libs__handle_options__TermNormStr_54, &libs__handle_options__TermNormPrime_55);
    }
#line 294 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 295 "handle_options.m"
      {
#line 295 "handle_options.m"
        *libs__handle_options__TermNorm_27 = libs__handle_options__TermNormPrime_55;
#line 295 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_282_282 = libs__handle_options__STATE_VARIABLE_Specs_249_249;
#line 295 "handle_options.m"
      }
#line 294 "handle_options.m"
    else
#line 297 "handle_options.m"
      {
#line 297 "handle_options.m"
        MR_Word libs__handle_options__TypeCtorInfo_819_819;
#line 297 "handle_options.m"
        MR_Word libs__handle_options__TermNormSpec_56;
#line 297 "handle_options.m"
        MR_Word libs__handle_options__V_251_251;
#line 297 "handle_options.m"
        MR_Word libs__handle_options__V_254_254;
#line 297 "handle_options.m"
        MR_Word libs__handle_options__V_255_255;
#line 297 "handle_options.m"
        MR_Word libs__handle_options__V_266_266;
#line 297 "handle_options.m"
        MR_Word libs__handle_options__V_267_267;

#line 297 "handle_options.m"
        *libs__handle_options__TermNorm_27 = (MR_Integer) 0;
#line 10492 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_819_819 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 299 "handle_options.m"
        {
#line 299 "handle_options.m"
          libs__handle_options__V_255_255 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 299 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_255_255, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 299 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_255_255, 1) = ((MR_Box) (libs__handle_options__TermNormStr_54));
#line 299 "handle_options.m"
        }
#line 299 "handle_options.m"
        {
#line 299 "handle_options.m"
          libs__handle_options__V_254_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 299 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_254_254, 0) = ((MR_Box) (libs__handle_options__V_255_255));
#line 299 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_254_254, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[44])));
#line 299 "handle_options.m"
        }
#line 299 "handle_options.m"
        {
#line 299 "handle_options.m"
          libs__handle_options__V_251_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 299 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_251_251, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
#line 299 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_251_251, 1) = ((MR_Box) (libs__handle_options__V_254_254));
#line 299 "handle_options.m"
        }
#line 301 "handle_options.m"
        {
#line 301 "handle_options.m"
          libs__handle_options__V_267_267 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[47]));
        }
#line 301 "handle_options.m"
        {
#line 301 "handle_options.m"
          libs__handle_options__V_266_266 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_819_819, libs__handle_options__V_267_267, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
        }
#line 300 "handle_options.m"
        {
#line 300 "handle_options.m"
          libs__handle_options__TermNormSpec_56 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_819_819, libs__handle_options__V_251_251, libs__handle_options__V_266_266);
        }
#line 303 "handle_options.m"
        {
#line 303 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__TermNormSpec_56, libs__handle_options__STATE_VARIABLE_Specs_249_249, &libs__handle_options__STATE_VARIABLE_Specs_282_282);
        }
#line 297 "handle_options.m"
      }
#line 306 "handle_options.m"
    {
#line 306 "handle_options.m"
      libs__handle_options__raw_lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 419, &libs__handle_options__Term2NormStr_57);
    }
#line 307 "handle_options.m"
    {
#line 307 "handle_options.m"
      libs__handle_options__succeeded = libs__globals__convert_termination_norm_2_p_0(libs__handle_options__Term2NormStr_57, &libs__handle_options__Term2NormPrime_58);
    }
#line 307 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 308 "handle_options.m"
      {
#line 308 "handle_options.m"
        *libs__handle_options__Term2Norm_28 = libs__handle_options__Term2NormPrime_58;
#line 308 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_315_315 = libs__handle_options__STATE_VARIABLE_Specs_282_282;
#line 308 "handle_options.m"
      }
#line 307 "handle_options.m"
    else
#line 310 "handle_options.m"
      {
#line 310 "handle_options.m"
        MR_Word libs__handle_options__TypeCtorInfo_820_820;
#line 310 "handle_options.m"
        MR_Word libs__handle_options__Term2NormSpec_59;
#line 310 "handle_options.m"
        MR_Word libs__handle_options__V_284_284;
#line 310 "handle_options.m"
        MR_Word libs__handle_options__V_287_287;
#line 310 "handle_options.m"
        MR_Word libs__handle_options__V_288_288;
#line 310 "handle_options.m"
        MR_Word libs__handle_options__V_299_299;
#line 310 "handle_options.m"
        MR_Word libs__handle_options__V_300_300;

#line 310 "handle_options.m"
        *libs__handle_options__Term2Norm_28 = (MR_Integer) 0;
#line 10587 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_820_820 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 312 "handle_options.m"
        {
#line 312 "handle_options.m"
          libs__handle_options__V_288_288 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_288_288, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 312 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_288_288, 1) = ((MR_Box) (libs__handle_options__TermNormStr_54));
#line 312 "handle_options.m"
        }
#line 312 "handle_options.m"
        {
#line 312 "handle_options.m"
          libs__handle_options__V_287_287 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_287_287, 0) = ((MR_Box) (libs__handle_options__V_288_288));
#line 312 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_287_287, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[50])));
#line 312 "handle_options.m"
        }
#line 312 "handle_options.m"
        {
#line 312 "handle_options.m"
          libs__handle_options__V_284_284 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_284_284, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
#line 312 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_284_284, 1) = ((MR_Box) (libs__handle_options__V_287_287));
#line 312 "handle_options.m"
        }
#line 314 "handle_options.m"
        {
#line 314 "handle_options.m"
          libs__handle_options__V_300_300 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[47]));
        }
#line 314 "handle_options.m"
        {
#line 314 "handle_options.m"
          libs__handle_options__V_299_299 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_820_820, libs__handle_options__V_300_300, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
        }
#line 313 "handle_options.m"
        {
#line 313 "handle_options.m"
          libs__handle_options__Term2NormSpec_59 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_820_820, libs__handle_options__V_284_284, libs__handle_options__V_299_299);
        }
#line 316 "handle_options.m"
        {
#line 316 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__Term2NormSpec_59, libs__handle_options__STATE_VARIABLE_Specs_282_282, &libs__handle_options__STATE_VARIABLE_Specs_315_315);
        }
#line 310 "handle_options.m"
      }
#line 319 "handle_options.m"
    {
#line 319 "handle_options.m"
      libs__handle_options__raw_lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 132, &libs__handle_options__ForceDisableTracing_60);
    }
#line 324 "handle_options.m"
#line 324 "handle_options.m"
    switch (libs__handle_options__ForceDisableTracing_60) {
#line 324 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 324 "handle_options.m"
      case (MR_Integer) 0:
#line 325 "handle_options.m"
        {
#line 325 "handle_options.m"
          MR_String libs__handle_options__Trace_61;
#line 325 "handle_options.m"
          MR_Word libs__handle_options__ExecTrace_62;
#line 325 "handle_options.m"
          MR_Word libs__handle_options__DeclDebug_63;
#line 329 "handle_options.m"
          MR_Word libs__handle_options__MaybeTraceLevel_64;

#line 326 "handle_options.m"
          {
#line 326 "handle_options.m"
            libs__handle_options__raw_lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 120, &libs__handle_options__Trace_61);
          }
#line 327 "handle_options.m"
          {
#line 327 "handle_options.m"
            libs__handle_options__raw_lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 184, &libs__handle_options__ExecTrace_62);
          }
#line 328 "handle_options.m"
          {
#line 328 "handle_options.m"
            libs__handle_options__raw_lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 185, &libs__handle_options__DeclDebug_63);
          }
#line 330 "handle_options.m"
          {
#line 330 "handle_options.m"
            libs__handle_options__succeeded = libs__trace_params__convert_trace_level_4_p_0(libs__handle_options__Trace_61, libs__handle_options__ExecTrace_62, libs__handle_options__DeclDebug_63, &libs__handle_options__MaybeTraceLevel_64);
          }
#line 329 "handle_options.m"
          if (libs__handle_options__succeeded)
#line 334 "handle_options.m"
            if ((libs__handle_options__MaybeTraceLevel_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 335 "handle_options.m"
              {
#line 335 "handle_options.m"
                MR_Word libs__handle_options__InconsistentTraceLevelSpec_65;
#line 335 "handle_options.m"
                MR_Word libs__handle_options__V_322_322;
#line 335 "handle_options.m"
                MR_Word libs__handle_options__V_323_323;

#line 336 "handle_options.m"
                {
#line 336 "handle_options.m"
                  *libs__handle_options__TraceLevel_29 = libs__trace_params__trace_level_none_0_f_0();
                }
#line 338 "handle_options.m"
                {
#line 338 "handle_options.m"
                  libs__handle_options__V_323_323 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "handle_options.m"
                  MR_hl_field(MR_mktag(3), libs__handle_options__V_323_323, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 338 "handle_options.m"
                  MR_hl_field(MR_mktag(3), libs__handle_options__V_323_323, 1) = ((MR_Box) (libs__handle_options__Trace_61));
#line 338 "handle_options.m"
                }
#line 338 "handle_options.m"
                {
#line 338 "handle_options.m"
                  libs__handle_options__V_322_322 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_322_322, 0) = ((MR_Box) (libs__handle_options__V_323_323));
#line 338 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_322_322, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[56])));
#line 338 "handle_options.m"
                }
#line 338 "handle_options.m"
                {
#line 338 "handle_options.m"
                  libs__handle_options__InconsistentTraceLevelSpec_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__InconsistentTraceLevelSpec_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[219])));
#line 338 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__InconsistentTraceLevelSpec_65, 1) = ((MR_Box) (libs__handle_options__V_322_322));
#line 338 "handle_options.m"
                }
#line 341 "handle_options.m"
                {
#line 341 "handle_options.m"
                  libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__InconsistentTraceLevelSpec_65, libs__handle_options__STATE_VARIABLE_Specs_315_315, &libs__handle_options__STATE_VARIABLE_Specs_337_337);
                }
#line 335 "handle_options.m"
              }
#line 334 "handle_options.m"
            else
#line 333 "handle_options.m"
              {
#line 333 "handle_options.m"
                *libs__handle_options__TraceLevel_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeTraceLevel_64, (MR_Integer) 0)));
#line 333 "handle_options.m"
                libs__handle_options__STATE_VARIABLE_Specs_337_337 = libs__handle_options__STATE_VARIABLE_Specs_315_315;
#line 333 "handle_options.m"
              }
#line 329 "handle_options.m"
          else
#line 344 "handle_options.m"
            {
#line 344 "handle_options.m"
              MR_Word libs__handle_options__TypeCtorInfo_821_821;
#line 344 "handle_options.m"
              MR_Word libs__handle_options__BadTraceLevelSpec_66;
#line 344 "handle_options.m"
              MR_Word libs__handle_options__V_338_338;
#line 344 "handle_options.m"
              MR_Word libs__handle_options__V_341_341;
#line 344 "handle_options.m"
              MR_Word libs__handle_options__V_342_342;
#line 344 "handle_options.m"
              MR_Word libs__handle_options__V_353_353;
#line 344 "handle_options.m"
              MR_Word libs__handle_options__V_354_354;

#line 344 "handle_options.m"
              {
#line 344 "handle_options.m"
                *libs__handle_options__TraceLevel_29 = libs__trace_params__trace_level_none_0_f_0();
              }
#line 10773 "libs.handle_options.c"
              libs__handle_options__TypeCtorInfo_821_821 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 346 "handle_options.m"
              {
#line 346 "handle_options.m"
                libs__handle_options__V_342_342 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "handle_options.m"
                MR_hl_field(MR_mktag(3), libs__handle_options__V_342_342, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 346 "handle_options.m"
                MR_hl_field(MR_mktag(3), libs__handle_options__V_342_342, 1) = ((MR_Box) (libs__handle_options__Trace_61));
#line 346 "handle_options.m"
              }
#line 346 "handle_options.m"
              {
#line 346 "handle_options.m"
                libs__handle_options__V_341_341 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "handle_options.m"
                MR_hl_field(MR_mktag(1), libs__handle_options__V_341_341, 0) = ((MR_Box) (libs__handle_options__V_342_342));
#line 346 "handle_options.m"
                MR_hl_field(MR_mktag(1), libs__handle_options__V_341_341, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[59])));
#line 346 "handle_options.m"
              }
#line 346 "handle_options.m"
              {
#line 346 "handle_options.m"
                libs__handle_options__V_338_338 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "handle_options.m"
                MR_hl_field(MR_mktag(1), libs__handle_options__V_338_338, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
#line 346 "handle_options.m"
                MR_hl_field(MR_mktag(1), libs__handle_options__V_338_338, 1) = ((MR_Box) (libs__handle_options__V_341_341));
#line 346 "handle_options.m"
              }
#line 348 "handle_options.m"
              {
#line 348 "handle_options.m"
                libs__handle_options__V_354_354 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[65]));
              }
#line 349 "handle_options.m"
              {
#line 349 "handle_options.m"
                libs__handle_options__V_353_353 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_821_821, libs__handle_options__V_354_354, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
              }
#line 347 "handle_options.m"
              {
#line 347 "handle_options.m"
                libs__handle_options__BadTraceLevelSpec_66 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_821_821, libs__handle_options__V_338_338, libs__handle_options__V_353_353);
              }
#line 350 "handle_options.m"
              {
#line 350 "handle_options.m"
                libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__BadTraceLevelSpec_66, libs__handle_options__STATE_VARIABLE_Specs_315_315, &libs__handle_options__STATE_VARIABLE_Specs_337_337);
              }
#line 344 "handle_options.m"
            }
#line 325 "handle_options.m"
        }
#line 324 "handle_options.m"
        break;
#line 324 "handle_options.m"
      case (MR_Integer) 1:
#line 322 "handle_options.m"
        {
#line 323 "handle_options.m"
          {
#line 323 "handle_options.m"
            *libs__handle_options__TraceLevel_29 = libs__trace_params__trace_level_none_0_f_0();
          }
#line 322 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Specs_337_337 = libs__handle_options__STATE_VARIABLE_Specs_315_315;
#line 322 "handle_options.m"
        }
#line 324 "handle_options.m"
        break;
#line 324 "handle_options.m"
    }
#line 354 "handle_options.m"
    {
#line 354 "handle_options.m"
      libs__handle_options__raw_lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 131, &libs__handle_options__SuppressStr_67);
    }
#line 355 "handle_options.m"
    {
#line 355 "handle_options.m"
      libs__handle_options__succeeded = libs__trace_params__convert_trace_suppress_2_p_0(libs__handle_options__SuppressStr_67, &libs__handle_options__TraceSuppressPrime_68);
    }
#line 355 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 356 "handle_options.m"
      {
#line 356 "handle_options.m"
        *libs__handle_options__TraceSuppress_30 = libs__handle_options__TraceSuppressPrime_68;
#line 356 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_394_394 = libs__handle_options__STATE_VARIABLE_Specs_337_337;
#line 356 "handle_options.m"
      }
#line 355 "handle_options.m"
    else
#line 358 "handle_options.m"
      {
#line 358 "handle_options.m"
        MR_Word libs__handle_options__TraceSuppressSpec_69;
#line 358 "handle_options.m"
        MR_Word libs__handle_options__V_379_379;
#line 358 "handle_options.m"
        MR_Word libs__handle_options__V_380_380;

#line 358 "handle_options.m"
        {
#line 358 "handle_options.m"
          *libs__handle_options__TraceSuppress_30 = libs__trace_params__default_trace_suppress_0_f_0();
        }
#line 360 "handle_options.m"
        {
#line 360 "handle_options.m"
          libs__handle_options__V_380_380 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 360 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_380_380, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 360 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_380_380, 1) = ((MR_Box) (libs__handle_options__SuppressStr_67));
#line 360 "handle_options.m"
        }
#line 360 "handle_options.m"
        {
#line 360 "handle_options.m"
          libs__handle_options__V_379_379 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 360 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_379_379, 0) = ((MR_Box) (libs__handle_options__V_380_380));
#line 360 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_379_379, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[68])));
#line 360 "handle_options.m"
        }
#line 360 "handle_options.m"
        {
#line 360 "handle_options.m"
          libs__handle_options__TraceSuppressSpec_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 360 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__TraceSuppressSpec_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
#line 360 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__TraceSuppressSpec_69, 1) = ((MR_Box) (libs__handle_options__V_379_379));
#line 360 "handle_options.m"
        }
#line 364 "handle_options.m"
        {
#line 364 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__TraceSuppressSpec_69, libs__handle_options__STATE_VARIABLE_Specs_337_337, &libs__handle_options__STATE_VARIABLE_Specs_394_394);
        }
#line 358 "handle_options.m"
      }
#line 367 "handle_options.m"
    {
#line 367 "handle_options.m"
      libs__handle_options__raw_lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 136, &libs__handle_options__ForceDisableSSDB_70);
    }
#line 372 "handle_options.m"
#line 372 "handle_options.m"
    switch (libs__handle_options__ForceDisableSSDB_70) {
#line 372 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 372 "handle_options.m"
      case (MR_Integer) 0:
#line 373 "handle_options.m"
        {
#line 373 "handle_options.m"
          MR_String libs__handle_options__SSTrace_71;
#line 373 "handle_options.m"
          MR_Word libs__handle_options__SSDB_72;
#line 376 "handle_options.m"
          MR_Word libs__handle_options__SSTL_73;

#line 374 "handle_options.m"
          {
#line 374 "handle_options.m"
            libs__handle_options__raw_lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 232, &libs__handle_options__SSTrace_71);
          }
#line 375 "handle_options.m"
          {
#line 375 "handle_options.m"
            libs__handle_options__raw_lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 231, &libs__handle_options__SSDB_72);
          }
#line 376 "handle_options.m"
          {
#line 376 "handle_options.m"
            libs__handle_options__succeeded = libs__globals__convert_ssdb_trace_level_3_p_0(libs__handle_options__SSTrace_71, libs__handle_options__SSDB_72, &libs__handle_options__SSTL_73);
          }
#line 376 "handle_options.m"
          if (libs__handle_options__succeeded)
#line 377 "handle_options.m"
            {
#line 377 "handle_options.m"
              *libs__handle_options__SSTraceLevel_31 = libs__handle_options__SSTL_73;
#line 377 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Specs_431_431 = libs__handle_options__STATE_VARIABLE_Specs_394_394;
#line 377 "handle_options.m"
            }
#line 376 "handle_options.m"
          else
#line 379 "handle_options.m"
            {
#line 379 "handle_options.m"
              MR_Word libs__handle_options__TypeCtorInfo_822_822;
#line 379 "handle_options.m"
              MR_Word libs__handle_options__SSDBSpec_74;
#line 379 "handle_options.m"
              MR_Word libs__handle_options__V_398_398;
#line 379 "handle_options.m"
              MR_Word libs__handle_options__V_401_401;
#line 379 "handle_options.m"
              MR_Word libs__handle_options__V_402_402;
#line 379 "handle_options.m"
              MR_Word libs__handle_options__V_413_413;
#line 379 "handle_options.m"
              MR_Word libs__handle_options__V_414_414;

#line 379 "handle_options.m"
              *libs__handle_options__SSTraceLevel_31 = (MR_Integer) 0;
#line 10988 "libs.handle_options.c"
              libs__handle_options__TypeCtorInfo_822_822 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 381 "handle_options.m"
              {
#line 381 "handle_options.m"
                libs__handle_options__V_402_402 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "handle_options.m"
                MR_hl_field(MR_mktag(3), libs__handle_options__V_402_402, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 381 "handle_options.m"
                MR_hl_field(MR_mktag(3), libs__handle_options__V_402_402, 1) = ((MR_Box) (libs__handle_options__SSTrace_71));
#line 381 "handle_options.m"
              }
#line 381 "handle_options.m"
              {
#line 381 "handle_options.m"
                libs__handle_options__V_401_401 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "handle_options.m"
                MR_hl_field(MR_mktag(1), libs__handle_options__V_401_401, 0) = ((MR_Box) (libs__handle_options__V_402_402));
#line 381 "handle_options.m"
                MR_hl_field(MR_mktag(1), libs__handle_options__V_401_401, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[71])));
#line 381 "handle_options.m"
              }
#line 381 "handle_options.m"
              {
#line 381 "handle_options.m"
                libs__handle_options__V_398_398 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "handle_options.m"
                MR_hl_field(MR_mktag(1), libs__handle_options__V_398_398, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
#line 381 "handle_options.m"
                MR_hl_field(MR_mktag(1), libs__handle_options__V_398_398, 1) = ((MR_Box) (libs__handle_options__V_401_401));
#line 381 "handle_options.m"
              }
#line 383 "handle_options.m"
              {
#line 383 "handle_options.m"
                libs__handle_options__V_414_414 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[75]));
              }
#line 384 "handle_options.m"
              {
#line 384 "handle_options.m"
                libs__handle_options__V_413_413 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_822_822, libs__handle_options__V_414_414, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
              }
#line 382 "handle_options.m"
              {
#line 382 "handle_options.m"
                libs__handle_options__SSDBSpec_74 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_822_822, libs__handle_options__V_398_398, libs__handle_options__V_413_413);
              }
#line 385 "handle_options.m"
              {
#line 385 "handle_options.m"
                libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__SSDBSpec_74, libs__handle_options__STATE_VARIABLE_Specs_394_394, &libs__handle_options__STATE_VARIABLE_Specs_431_431);
              }
#line 379 "handle_options.m"
            }
#line 373 "handle_options.m"
        }
#line 372 "handle_options.m"
        break;
#line 372 "handle_options.m"
      case (MR_Integer) 1:
#line 370 "handle_options.m"
        {
#line 371 "handle_options.m"
          *libs__handle_options__SSTraceLevel_31 = (MR_Integer) 0;
#line 370 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Specs_431_431 = libs__handle_options__STATE_VARIABLE_Specs_394_394;
#line 370 "handle_options.m"
        }
#line 372 "handle_options.m"
        break;
#line 372 "handle_options.m"
    }
#line 389 "handle_options.m"
    {
#line 389 "handle_options.m"
      libs__handle_options__raw_lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 224, &libs__handle_options__MaybeThreadSafeStr_75);
    }
#line 392 "handle_options.m"
    {
#line 392 "handle_options.m"
      libs__handle_options__succeeded = libs__globals__convert_maybe_thread_safe_2_p_0(libs__handle_options__MaybeThreadSafeStr_75, &libs__handle_options__MaybeThreadSafePrime_76);
    }
#line 391 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 394 "handle_options.m"
      {
#line 394 "handle_options.m"
        *libs__handle_options__MaybeThreadSafe_32 = libs__handle_options__MaybeThreadSafePrime_76;
#line 394 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_465_465 = libs__handle_options__STATE_VARIABLE_Specs_431_431;
#line 394 "handle_options.m"
      }
#line 391 "handle_options.m"
    else
#line 396 "handle_options.m"
      {
#line 396 "handle_options.m"
        MR_Word libs__handle_options__TypeCtorInfo_823_823;
#line 396 "handle_options.m"
        MR_Word libs__handle_options__MTSSpec_77;
#line 396 "handle_options.m"
        MR_Word libs__handle_options__V_433_433;
#line 396 "handle_options.m"
        MR_Word libs__handle_options__V_436_436;
#line 396 "handle_options.m"
        MR_Word libs__handle_options__V_437_437;
#line 396 "handle_options.m"
        MR_Word libs__handle_options__V_451_451;
#line 396 "handle_options.m"
        MR_Word libs__handle_options__V_452_452;

#line 396 "handle_options.m"
        *libs__handle_options__MaybeThreadSafe_32 = (MR_Integer) 0;
#line 11101 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_823_823 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 401 "handle_options.m"
        {
#line 401 "handle_options.m"
          libs__handle_options__V_437_437 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 401 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_437_437, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 401 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_437_437, 1) = ((MR_Box) (libs__handle_options__MaybeThreadSafeStr_75));
#line 401 "handle_options.m"
        }
#line 401 "handle_options.m"
        {
#line 401 "handle_options.m"
          libs__handle_options__V_436_436 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 401 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_436_436, 0) = ((MR_Box) (libs__handle_options__V_437_437));
#line 401 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_436_436, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[82])));
#line 401 "handle_options.m"
        }
#line 401 "handle_options.m"
        {
#line 401 "handle_options.m"
          libs__handle_options__V_433_433 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 401 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_433_433, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
#line 401 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_433_433, 1) = ((MR_Box) (libs__handle_options__V_436_436));
#line 401 "handle_options.m"
        }
#line 404 "handle_options.m"
        {
#line 404 "handle_options.m"
          libs__handle_options__V_452_452 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[84]));
        }
#line 404 "handle_options.m"
        {
#line 404 "handle_options.m"
          libs__handle_options__V_451_451 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_823_823, libs__handle_options__V_452_452, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
        }
#line 403 "handle_options.m"
        {
#line 403 "handle_options.m"
          libs__handle_options__MTSSpec_77 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_823_823, libs__handle_options__V_433_433, libs__handle_options__V_451_451);
        }
#line 405 "handle_options.m"
        {
#line 405 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__MTSSpec_77, libs__handle_options__STATE_VARIABLE_Specs_431_431, &libs__handle_options__STATE_VARIABLE_Specs_465_465);
        }
#line 396 "handle_options.m"
      }
#line 408 "handle_options.m"
    {
#line 408 "handle_options.m"
      libs__handle_options__raw_lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 151, &libs__handle_options__DumpAlias_78);
    }
#line 409 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__DumpAlias_78, (MR_String) "") == 0);
#line 409 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 410 "handle_options.m"
      {
#line 410 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_496_496 = libs__handle_options__STATE_VARIABLE_Specs_465_465;
#line 410 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_OptionTable_469_469 = libs__handle_options__STATE_VARIABLE_OptionTable_0_116;
#line 410 "handle_options.m"
      }
#line 409 "handle_options.m"
    else
#line 411 "handle_options.m"
      {
#line 411 "handle_options.m"
        MR_String libs__handle_options__AliasDumpOptions_79;

#line 411 "handle_options.m"
        {
#line 411 "handle_options.m"
          libs__handle_options__succeeded = libs__handle_options__convert_dump_alias_2_p_0(libs__handle_options__DumpAlias_78, &libs__handle_options__AliasDumpOptions_79);
        }
#line 411 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 412 "handle_options.m"
          {
#line 412 "handle_options.m"
            MR_Word libs__handle_options__V_468_468;

#line 412 "handle_options.m"
            {
#line 412 "handle_options.m"
              libs__handle_options__V_468_468 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_468_468, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 412 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_468_468, 1) = ((MR_Box) (libs__handle_options__AliasDumpOptions_79));
#line 412 "handle_options.m"
            }
#line 412 "handle_options.m"
            {
#line 412 "handle_options.m"
              mercury__map__set_4_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) ((MR_Integer) 152)), ((MR_Box) (libs__handle_options__V_468_468)), libs__handle_options__STATE_VARIABLE_OptionTable_0_116, &libs__handle_options__STATE_VARIABLE_OptionTable_469_469);
            }
#line 412 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Specs_496_496 = libs__handle_options__STATE_VARIABLE_Specs_465_465;
#line 412 "handle_options.m"
          }
#line 411 "handle_options.m"
        else
#line 417 "handle_options.m"
          {
#line 417 "handle_options.m"
            MR_Word libs__handle_options__DumpAliasSpec_80;
#line 417 "handle_options.m"
            MR_Word libs__handle_options__V_472_472;
#line 417 "handle_options.m"
            MR_Word libs__handle_options__V_473_473;

#line 415 "handle_options.m"
            {
#line 415 "handle_options.m"
              libs__handle_options__V_473_473 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_473_473, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 415 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_473_473, 1) = ((MR_Box) (libs__handle_options__DumpAlias_78));
#line 415 "handle_options.m"
            }
#line 415 "handle_options.m"
            {
#line 415 "handle_options.m"
              libs__handle_options__V_472_472 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_472_472, 0) = ((MR_Box) (libs__handle_options__V_473_473));
#line 415 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_472_472, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[93])));
#line 415 "handle_options.m"
            }
#line 415 "handle_options.m"
            {
#line 415 "handle_options.m"
              libs__handle_options__DumpAliasSpec_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__DumpAliasSpec_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
#line 415 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__DumpAliasSpec_80, 1) = ((MR_Box) (libs__handle_options__V_472_472));
#line 415 "handle_options.m"
            }
#line 418 "handle_options.m"
            {
#line 418 "handle_options.m"
              libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__DumpAliasSpec_80, libs__handle_options__STATE_VARIABLE_Specs_465_465, &libs__handle_options__STATE_VARIABLE_Specs_496_496);
            }
#line 417 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_OptionTable_469_469 = libs__handle_options__STATE_VARIABLE_OptionTable_0_116;
#line 417 "handle_options.m"
          }
#line 411 "handle_options.m"
      }
#line 11262 "libs.handle_options.c"
    libs__handle_options__TypeCtorInfo_826_826 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
#line 422 "handle_options.m"
    {
#line 422 "handle_options.m"
      mercury__getopt_io__lookup_string_option_3_p_0(libs__handle_options__TypeCtorInfo_826_826, libs__handle_options__STATE_VARIABLE_OptionTable_469_469, ((MR_Box) ((MR_Integer) 152)), &libs__handle_options__STATE_VARIABLE_DumpOptions_498_498);
    }
#line 426 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__STATE_VARIABLE_DumpOptions_498_498, (MR_String) "") == 0);
#line 426 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 427 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_499_499 = (MR_String) "x";
#line 426 "handle_options.m"
    else
#line 426 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_499_499 = libs__handle_options__STATE_VARIABLE_DumpOptions_498_498;
#line 434 "handle_options.m"
    {
#line 434 "handle_options.m"
      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_499_499, (MR_Char) 121);
    }
#line 434 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 434 "handle_options.m"
      {
#line 435 "handle_options.m"
        libs__handle_options__V_501_501 = (MR_Char) 97;
#line 435 "handle_options.m"
        {
#line 435 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_499_499, libs__handle_options__V_501_501);
        }
#line 435 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 434 "handle_options.m"
      }
#line 433 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 437 "handle_options.m"
      {
#line 437 "handle_options.m"
        {
#line 437 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_DumpOptions_502_502 = mercury__string__f_43_43_2_f_0((MR_String) "a", libs__handle_options__STATE_VARIABLE_DumpOptions_499_499);
        }
#line 437 "handle_options.m"
      }
#line 433 "handle_options.m"
    else
#line 433 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_502_502 = libs__handle_options__STATE_VARIABLE_DumpOptions_499_499;
#line 443 "handle_options.m"
    {
#line 443 "handle_options.m"
      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_502_502, (MR_Char) 97);
    }
#line 443 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 443 "handle_options.m"
      {
#line 444 "handle_options.m"
        libs__handle_options__V_505_505 = (MR_Char) 117;
#line 444 "handle_options.m"
        {
#line 444 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_502_502, libs__handle_options__V_505_505);
        }
#line 444 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 443 "handle_options.m"
      }
#line 442 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 446 "handle_options.m"
      {
#line 446 "handle_options.m"
        {
#line 446 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_DumpOptions_506_506 = mercury__string__f_43_43_2_f_0((MR_String) "u", libs__handle_options__STATE_VARIABLE_DumpOptions_502_502);
        }
#line 446 "handle_options.m"
      }
#line 442 "handle_options.m"
    else
#line 442 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_506_506 = libs__handle_options__STATE_VARIABLE_DumpOptions_502_502;
#line 453 "handle_options.m"
    {
#line 453 "handle_options.m"
      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 65);
    }
#line 454 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 454 "handle_options.m"
      {
#line 454 "handle_options.m"
        {
#line 454 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 66);
        }
#line 454 "handle_options.m"
        if (!(libs__handle_options__succeeded))
#line 454 "handle_options.m"
          {
#line 455 "handle_options.m"
            {
#line 455 "handle_options.m"
              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 68);
            }
#line 454 "handle_options.m"
            if (!(libs__handle_options__succeeded))
#line 454 "handle_options.m"
              {
#line 456 "handle_options.m"
                {
#line 456 "handle_options.m"
                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 71);
                }
#line 454 "handle_options.m"
                if (!(libs__handle_options__succeeded))
#line 454 "handle_options.m"
                  {
#line 457 "handle_options.m"
                    {
#line 457 "handle_options.m"
                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 80);
                    }
#line 454 "handle_options.m"
                    if (!(libs__handle_options__succeeded))
#line 454 "handle_options.m"
                      {
#line 458 "handle_options.m"
                        {
#line 458 "handle_options.m"
                          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 82);
                        }
#line 454 "handle_options.m"
                        if (!(libs__handle_options__succeeded))
#line 454 "handle_options.m"
                          {
#line 459 "handle_options.m"
                            {
#line 459 "handle_options.m"
                              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 83);
                            }
#line 454 "handle_options.m"
                            if (!(libs__handle_options__succeeded))
#line 454 "handle_options.m"
                              {
#line 460 "handle_options.m"
                                {
#line 460 "handle_options.m"
                                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 98);
                                }
#line 454 "handle_options.m"
                                if (!(libs__handle_options__succeeded))
#line 454 "handle_options.m"
                                  {
#line 461 "handle_options.m"
                                    {
#line 461 "handle_options.m"
                                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 99);
                                    }
#line 454 "handle_options.m"
                                    if (!(libs__handle_options__succeeded))
#line 454 "handle_options.m"
                                      {
#line 462 "handle_options.m"
                                        {
#line 462 "handle_options.m"
                                          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 100);
                                        }
#line 454 "handle_options.m"
                                        if (!(libs__handle_options__succeeded))
#line 454 "handle_options.m"
                                          {
#line 463 "handle_options.m"
                                            {
#line 463 "handle_options.m"
                                              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 102);
                                            }
#line 454 "handle_options.m"
                                            if (!(libs__handle_options__succeeded))
#line 454 "handle_options.m"
                                              {
#line 464 "handle_options.m"
                                                {
#line 464 "handle_options.m"
                                                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 103);
                                                }
#line 454 "handle_options.m"
                                                if (!(libs__handle_options__succeeded))
#line 454 "handle_options.m"
                                                  {
#line 465 "handle_options.m"
                                                    {
#line 465 "handle_options.m"
                                                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 105);
                                                    }
#line 454 "handle_options.m"
                                                    if (!(libs__handle_options__succeeded))
#line 454 "handle_options.m"
                                                      {
#line 466 "handle_options.m"
                                                        {
#line 466 "handle_options.m"
                                                          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 108);
                                                        }
#line 454 "handle_options.m"
                                                        if (!(libs__handle_options__succeeded))
#line 454 "handle_options.m"
                                                          {
#line 467 "handle_options.m"
                                                            {
#line 467 "handle_options.m"
                                                              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 109);
                                                            }
#line 454 "handle_options.m"
                                                            if (!(libs__handle_options__succeeded))
#line 454 "handle_options.m"
                                                              {
#line 468 "handle_options.m"
                                                                {
#line 468 "handle_options.m"
                                                                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 110);
                                                                }
#line 454 "handle_options.m"
                                                                if (!(libs__handle_options__succeeded))
#line 454 "handle_options.m"
                                                                  {
#line 469 "handle_options.m"
                                                                    {
#line 469 "handle_options.m"
                                                                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 112);
                                                                    }
#line 454 "handle_options.m"
                                                                    if (!(libs__handle_options__succeeded))
#line 454 "handle_options.m"
                                                                      {
#line 470 "handle_options.m"
                                                                        {
#line 470 "handle_options.m"
                                                                          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 115);
                                                                        }
#line 454 "handle_options.m"
                                                                        if (!(libs__handle_options__succeeded))
#line 454 "handle_options.m"
                                                                          {
#line 471 "handle_options.m"
                                                                            {
#line 471 "handle_options.m"
                                                                              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 116);
                                                                            }
#line 454 "handle_options.m"
                                                                            if (!(libs__handle_options__succeeded))
#line 454 "handle_options.m"
                                                                              {
#line 472 "handle_options.m"
                                                                                {
#line 472 "handle_options.m"
                                                                                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 117);
                                                                                }
#line 454 "handle_options.m"
                                                                                if (!(libs__handle_options__succeeded))
#line 473 "handle_options.m"
                                                                                  {
#line 473 "handle_options.m"
                                                                                    {
#line 473 "handle_options.m"
                                                                                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 122);
                                                                                    }
#line 473 "handle_options.m"
                                                                                  }
#line 454 "handle_options.m"
                                                                              }
#line 454 "handle_options.m"
                                                                          }
#line 454 "handle_options.m"
                                                                      }
#line 454 "handle_options.m"
                                                                  }
#line 454 "handle_options.m"
                                                              }
#line 454 "handle_options.m"
                                                          }
#line 454 "handle_options.m"
                                                      }
#line 454 "handle_options.m"
                                                  }
#line 454 "handle_options.m"
                                              }
#line 454 "handle_options.m"
                                          }
#line 454 "handle_options.m"
                                      }
#line 454 "handle_options.m"
                                  }
#line 454 "handle_options.m"
                              }
#line 454 "handle_options.m"
                          }
#line 454 "handle_options.m"
                      }
#line 454 "handle_options.m"
                  }
#line 454 "handle_options.m"
              }
#line 454 "handle_options.m"
          }
#line 454 "handle_options.m"
      }
#line 474 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 474 "handle_options.m"
      {
#line 475 "handle_options.m"
        libs__handle_options__V_529_529 = (MR_Char) 120;
#line 475 "handle_options.m"
        {
#line 475 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, libs__handle_options__V_529_529);
        }
#line 475 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 474 "handle_options.m"
      }
#line 452 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 477 "handle_options.m"
      {
#line 477 "handle_options.m"
        {
#line 477 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_DumpOptions_530_530 = mercury__string__f_43_43_2_f_0((MR_String) "x", libs__handle_options__STATE_VARIABLE_DumpOptions_506_506);
        }
#line 477 "handle_options.m"
      }
#line 452 "handle_options.m"
    else
#line 452 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_530_530 = libs__handle_options__STATE_VARIABLE_DumpOptions_506_506;
#line 481 "handle_options.m"
    {
#line 481 "handle_options.m"
      libs__handle_options__V_533_533 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 481 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_533_533, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 481 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_533_533, 1) = ((MR_Box) (libs__handle_options__STATE_VARIABLE_DumpOptions_530_530));
#line 481 "handle_options.m"
    }
#line 481 "handle_options.m"
    {
#line 481 "handle_options.m"
      mercury__map__set_4_p_0(libs__handle_options__TypeCtorInfo_826_826, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) ((MR_Integer) 152)), ((MR_Box) (libs__handle_options__V_533_533)), libs__handle_options__STATE_VARIABLE_OptionTable_469_469, libs__handle_options__STATE_VARIABLE_OptionTable_117);
    }
#line 484 "handle_options.m"
    {
#line 484 "handle_options.m"
      libs__handle_options__raw_lookup_string_option_3_p_0(*libs__handle_options__STATE_VARIABLE_OptionTable_117, (MR_Integer) 506, &libs__handle_options__C_CompilerTypeStr_82);
    }
#line 486 "handle_options.m"
    {
#line 486 "handle_options.m"
      libs__handle_options__succeeded = libs__globals__convert_c_compiler_type_2_p_0(libs__handle_options__C_CompilerTypeStr_82, &libs__handle_options__C_CompilerTypePrime_83);
    }
#line 486 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 487 "handle_options.m"
      {
#line 487 "handle_options.m"
        *libs__handle_options__C_CompilerType_33 = libs__handle_options__C_CompilerTypePrime_83;
#line 487 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_572_572 = libs__handle_options__STATE_VARIABLE_Specs_496_496;
#line 487 "handle_options.m"
      }
#line 486 "handle_options.m"
    else
#line 489 "handle_options.m"
      {
#line 489 "handle_options.m"
        MR_Word libs__handle_options__TypeCtorInfo_828_828;
#line 489 "handle_options.m"
        MR_Word libs__handle_options__CCTpec_84;
#line 489 "handle_options.m"
        MR_Word libs__handle_options__V_536_536;
#line 489 "handle_options.m"
        MR_Word libs__handle_options__V_539_539;
#line 489 "handle_options.m"
        MR_Word libs__handle_options__V_540_540;
#line 489 "handle_options.m"
        MR_Word libs__handle_options__V_554_554;
#line 489 "handle_options.m"
        MR_Word libs__handle_options__V_555_555;

#line 489 "handle_options.m"
        *libs__handle_options__C_CompilerType_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 11660 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_828_828 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 491 "handle_options.m"
        {
#line 491 "handle_options.m"
          libs__handle_options__V_540_540 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 491 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_540_540, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 491 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_540_540, 1) = ((MR_Box) (libs__handle_options__C_CompilerTypeStr_82));
#line 491 "handle_options.m"
        }
#line 491 "handle_options.m"
        {
#line 491 "handle_options.m"
          libs__handle_options__V_539_539 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 491 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_539_539, 0) = ((MR_Box) (libs__handle_options__V_540_540));
#line 491 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_539_539, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[96])));
#line 491 "handle_options.m"
        }
#line 491 "handle_options.m"
        {
#line 491 "handle_options.m"
          libs__handle_options__V_536_536 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 491 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_536_536, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
#line 491 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_536_536, 1) = ((MR_Box) (libs__handle_options__V_539_539));
#line 491 "handle_options.m"
        }
#line 494 "handle_options.m"
        {
#line 494 "handle_options.m"
          libs__handle_options__V_555_555 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[100]));
        }
#line 494 "handle_options.m"
        {
#line 494 "handle_options.m"
          libs__handle_options__V_554_554 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_828_828, libs__handle_options__V_555_555, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
        }
#line 493 "handle_options.m"
        {
#line 493 "handle_options.m"
          libs__handle_options__CCTpec_84 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_828_828, libs__handle_options__V_536_536, libs__handle_options__V_554_554);
        }
#line 496 "handle_options.m"
        {
#line 496 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__CCTpec_84, libs__handle_options__STATE_VARIABLE_Specs_496_496, &libs__handle_options__STATE_VARIABLE_Specs_572_572);
        }
#line 489 "handle_options.m"
      }
#line 499 "handle_options.m"
    {
#line 499 "handle_options.m"
      libs__handle_options__raw_lookup_string_option_3_p_0(*libs__handle_options__STATE_VARIABLE_OptionTable_117, (MR_Integer) 507, &libs__handle_options__CSharp_CompilerTypeStr_85);
    }
#line 502 "handle_options.m"
    {
#line 502 "handle_options.m"
      libs__handle_options__succeeded = libs__globals__convert_csharp_compiler_type_2_p_0(libs__handle_options__CSharp_CompilerTypeStr_85, &libs__handle_options__CSharp_CompilerTypePrime_86);
    }
#line 501 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 505 "handle_options.m"
      {
#line 505 "handle_options.m"
        *libs__handle_options__CSharp_CompilerType_34 = libs__handle_options__CSharp_CompilerTypePrime_86;
#line 505 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_608_608 = libs__handle_options__STATE_VARIABLE_Specs_572_572;
#line 505 "handle_options.m"
      }
#line 501 "handle_options.m"
    else
#line 507 "handle_options.m"
      {
#line 507 "handle_options.m"
        MR_Word libs__handle_options__TypeCtorInfo_829_829;
#line 507 "handle_options.m"
        MR_Word libs__handle_options__CSCSpec_87;
#line 507 "handle_options.m"
        MR_Word libs__handle_options__V_574_574;
#line 507 "handle_options.m"
        MR_Word libs__handle_options__V_577_577;
#line 507 "handle_options.m"
        MR_Word libs__handle_options__V_578_578;
#line 507 "handle_options.m"
        MR_Word libs__handle_options__V_592_592;
#line 507 "handle_options.m"
        MR_Word libs__handle_options__V_593_593;

#line 507 "handle_options.m"
        *libs__handle_options__CSharp_CompilerType_34 = (MR_Integer) 2;
#line 11755 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_829_829 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 509 "handle_options.m"
        {
#line 509 "handle_options.m"
          libs__handle_options__V_578_578 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 509 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_578_578, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 509 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_578_578, 1) = ((MR_Box) (libs__handle_options__CSharp_CompilerTypeStr_85));
#line 509 "handle_options.m"
        }
#line 509 "handle_options.m"
        {
#line 509 "handle_options.m"
          libs__handle_options__V_577_577 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 509 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_577_577, 0) = ((MR_Box) (libs__handle_options__V_578_578));
#line 509 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_577_577, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[103])));
#line 509 "handle_options.m"
        }
#line 509 "handle_options.m"
        {
#line 509 "handle_options.m"
          libs__handle_options__V_574_574 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 509 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_574_574, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
#line 509 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_574_574, 1) = ((MR_Box) (libs__handle_options__V_577_577));
#line 509 "handle_options.m"
        }
#line 512 "handle_options.m"
        {
#line 512 "handle_options.m"
          libs__handle_options__V_593_593 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[105]));
        }
#line 512 "handle_options.m"
        {
#line 512 "handle_options.m"
          libs__handle_options__V_592_592 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_829_829, libs__handle_options__V_593_593, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
        }
#line 511 "handle_options.m"
        {
#line 511 "handle_options.m"
          libs__handle_options__CSCSpec_87 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_829_829, libs__handle_options__V_574_574, libs__handle_options__V_592_592);
        }
#line 514 "handle_options.m"
        {
#line 514 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__CSCSpec_87, libs__handle_options__STATE_VARIABLE_Specs_572_572, &libs__handle_options__STATE_VARIABLE_Specs_608_608);
        }
#line 507 "handle_options.m"
      }
#line 517 "handle_options.m"
    {
#line 517 "handle_options.m"
      libs__handle_options__raw_lookup_string_option_3_p_0(*libs__handle_options__STATE_VARIABLE_OptionTable_117, (MR_Integer) 404, &libs__handle_options__ReuseConstraintStr_88);
    }
#line 519 "handle_options.m"
    {
#line 519 "handle_options.m"
      libs__handle_options__raw_lookup_int_option_3_p_0(*libs__handle_options__STATE_VARIABLE_OptionTable_117, (MR_Integer) 405, &libs__handle_options__ReuseConstraintArgNum_89);
    }
#line 522 "handle_options.m"
    {
#line 522 "handle_options.m"
      libs__handle_options__succeeded = libs__globals__convert_reuse_strategy_3_p_0(libs__handle_options__ReuseConstraintStr_88, libs__handle_options__ReuseConstraintArgNum_89, &libs__handle_options__ReuseStrategyPrime_90);
    }
#line 521 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 525 "handle_options.m"
      {
#line 525 "handle_options.m"
        *libs__handle_options__ReuseStrategy_35 = libs__handle_options__ReuseStrategyPrime_90;
#line 525 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_640_640 = libs__handle_options__STATE_VARIABLE_Specs_608_608;
#line 525 "handle_options.m"
      }
#line 521 "handle_options.m"
    else
#line 527 "handle_options.m"
      {
#line 527 "handle_options.m"
        MR_Word libs__handle_options__TypeCtorInfo_830_830;
#line 527 "handle_options.m"
        MR_Word libs__handle_options__ReuseConstrSpec_91;
#line 527 "handle_options.m"
        MR_Word libs__handle_options__V_611_611;
#line 527 "handle_options.m"
        MR_Word libs__handle_options__V_614_614;
#line 527 "handle_options.m"
        MR_Word libs__handle_options__V_615_615;
#line 527 "handle_options.m"
        MR_Word libs__handle_options__V_626_626;
#line 527 "handle_options.m"
        MR_Word libs__handle_options__V_627_627;

#line 527 "handle_options.m"
        *libs__handle_options__ReuseStrategy_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 11855 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_830_830 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 529 "handle_options.m"
        {
#line 529 "handle_options.m"
          libs__handle_options__V_615_615 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 529 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_615_615, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 529 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_615_615, 1) = ((MR_Box) (libs__handle_options__ReuseConstraintStr_88));
#line 529 "handle_options.m"
        }
#line 529 "handle_options.m"
        {
#line 529 "handle_options.m"
          libs__handle_options__V_614_614 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 529 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_614_614, 0) = ((MR_Box) (libs__handle_options__V_615_615));
#line 529 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_614_614, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[108])));
#line 529 "handle_options.m"
        }
#line 529 "handle_options.m"
        {
#line 529 "handle_options.m"
          libs__handle_options__V_611_611 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 529 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_611_611, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
#line 529 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_611_611, 1) = ((MR_Box) (libs__handle_options__V_614_614));
#line 529 "handle_options.m"
        }
#line 532 "handle_options.m"
        {
#line 532 "handle_options.m"
          libs__handle_options__V_627_627 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[110]));
        }
#line 533 "handle_options.m"
        {
#line 533 "handle_options.m"
          libs__handle_options__V_626_626 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_830_830, libs__handle_options__V_627_627, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
        }
#line 531 "handle_options.m"
        {
#line 531 "handle_options.m"
          libs__handle_options__ReuseConstrSpec_91 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_830_830, libs__handle_options__V_611_611, libs__handle_options__V_626_626);
        }
#line 535 "handle_options.m"
        {
#line 535 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__ReuseConstrSpec_91, libs__handle_options__STATE_VARIABLE_Specs_608_608, &libs__handle_options__STATE_VARIABLE_Specs_640_640);
        }
#line 527 "handle_options.m"
      }
#line 538 "handle_options.m"
    {
#line 538 "handle_options.m"
      libs__handle_options__raw_lookup_string_option_3_p_0(*libs__handle_options__STATE_VARIABLE_OptionTable_117, (MR_Integer) 662, &libs__handle_options__FeedbackFile_92);
    }
#line 539 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__FeedbackFile_92, (MR_String) "") == 0);
#line 539 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 541 "handle_options.m"
      {
#line 541 "handle_options.m"
        *libs__handle_options__MaybeFeedbackInfo_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 541 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_645_645 = libs__handle_options__STATE_VARIABLE_Specs_640_640;
#line 541 "handle_options.m"
      }
#line 539 "handle_options.m"
    else
#line 548 "handle_options.m"
      {
#line 548 "handle_options.m"
        MR_Word libs__handle_options__FeedbackReadResult_94;

#line 549 "handle_options.m"
        {
#line 549 "handle_options.m"
          mdbcomp__feedback__read_feedback_file_5_p_0(libs__handle_options__FeedbackFile_92, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__handle_options__FeedbackReadResult_94);
        }
#line 554 "handle_options.m"
        if (((MR_tag((MR_Word) libs__handle_options__FeedbackReadResult_94)) == (MR_mktag((MR_Integer) 1))))
#line 555 "handle_options.m"
          {
#line 555 "handle_options.m"
            MR_Word libs__handle_options__Error_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__FeedbackReadResult_94, (MR_Integer) 0)));
#line 555 "handle_options.m"
            MR_String libs__handle_options__ErrorMessage_97;
#line 555 "handle_options.m"
            MR_Word libs__handle_options__V_644_644;
#line 555 "handle_options.m"
            MR_Word libs__handle_options__V_646_646;

#line 556 "handle_options.m"
            {
#line 556 "handle_options.m"
              mdbcomp__feedback__feedback_read_error_message_string_3_p_0(libs__handle_options__FeedbackFile_92, libs__handle_options__Error_96, &libs__handle_options__ErrorMessage_97);
            }
#line 558 "handle_options.m"
            {
#line 558 "handle_options.m"
              libs__handle_options__V_646_646 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 558 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_646_646, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 558 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_646_646, 1) = ((MR_Box) (libs__handle_options__ErrorMessage_97));
#line 558 "handle_options.m"
            }
#line 558 "handle_options.m"
            {
#line 558 "handle_options.m"
              libs__handle_options__V_644_644 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 558 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_644_644, 0) = ((MR_Box) (libs__handle_options__V_646_646));
#line 558 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_644_644, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 558 "handle_options.m"
            }
#line 558 "handle_options.m"
            {
#line 558 "handle_options.m"
              libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__V_644_644, libs__handle_options__STATE_VARIABLE_Specs_640_640, &libs__handle_options__STATE_VARIABLE_Specs_645_645);
            }
#line 559 "handle_options.m"
            *libs__handle_options__MaybeFeedbackInfo_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 555 "handle_options.m"
          }
#line 554 "handle_options.m"
        else
#line 552 "handle_options.m"
          {
#line 552 "handle_options.m"
            MR_Word libs__handle_options__FeedbackInfo_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__FeedbackReadResult_94, (MR_Integer) 0)));

#line 553 "handle_options.m"
            {
#line 553 "handle_options.m"
              MR_Word base;
#line 553 "handle_options.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 553 "handle_options.m"
              *libs__handle_options__MaybeFeedbackInfo_36 = base;
#line 553 "handle_options.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__FeedbackInfo_95));
#line 553 "handle_options.m"
            }
#line 552 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Specs_645_645 = libs__handle_options__STATE_VARIABLE_Specs_640_640;
#line 552 "handle_options.m"
          }
#line 548 "handle_options.m"
      }
#line 563 "handle_options.m"
    {
#line 563 "handle_options.m"
      libs__handle_options__raw_lookup_string_option_3_p_0(*libs__handle_options__STATE_VARIABLE_OptionTable_117, (MR_Integer) 644, &libs__handle_options__HostEnvTypeStr_98);
    }
#line 564 "handle_options.m"
    {
#line 564 "handle_options.m"
      libs__handle_options__succeeded = libs__globals__convert_env_type_2_p_0(libs__handle_options__HostEnvTypeStr_98, &libs__handle_options__HostEnvTypePrime_99);
    }
#line 564 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 565 "handle_options.m"
      {
#line 565 "handle_options.m"
        *libs__handle_options__HostEnvType_37 = libs__handle_options__HostEnvTypePrime_99;
#line 565 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_682_682 = libs__handle_options__STATE_VARIABLE_Specs_645_645;
#line 565 "handle_options.m"
      }
#line 564 "handle_options.m"
    else
#line 567 "handle_options.m"
      {
#line 567 "handle_options.m"
        MR_Word libs__handle_options__TypeCtorInfo_831_831;
#line 567 "handle_options.m"
        MR_Word libs__handle_options__HostEnvSpec_100;
#line 567 "handle_options.m"
        MR_Word libs__handle_options__V_649_649;
#line 567 "handle_options.m"
        MR_Word libs__handle_options__V_652_652;
#line 567 "handle_options.m"
        MR_Word libs__handle_options__V_653_653;
#line 567 "handle_options.m"
        MR_Word libs__handle_options__V_664_664;
#line 567 "handle_options.m"
        MR_Word libs__handle_options__V_665_665;

#line 567 "handle_options.m"
        *libs__handle_options__HostEnvType_37 = (MR_Integer) 0;
#line 12051 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_831_831 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 569 "handle_options.m"
        {
#line 569 "handle_options.m"
          libs__handle_options__V_653_653 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_653_653, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 569 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_653_653, 1) = ((MR_Box) (libs__handle_options__HostEnvTypeStr_98));
#line 569 "handle_options.m"
        }
#line 569 "handle_options.m"
        {
#line 569 "handle_options.m"
          libs__handle_options__V_652_652 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_652_652, 0) = ((MR_Box) (libs__handle_options__V_653_653));
#line 569 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_652_652, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[113])));
#line 569 "handle_options.m"
        }
#line 569 "handle_options.m"
        {
#line 569 "handle_options.m"
          libs__handle_options__V_649_649 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_649_649, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
#line 569 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_649_649, 1) = ((MR_Box) (libs__handle_options__V_652_652));
#line 569 "handle_options.m"
        }
#line 571 "handle_options.m"
        {
#line 571 "handle_options.m"
          libs__handle_options__V_665_665 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[117]));
        }
#line 571 "handle_options.m"
        {
#line 571 "handle_options.m"
          libs__handle_options__V_664_664 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_831_831, libs__handle_options__V_665_665, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
        }
#line 570 "handle_options.m"
        {
#line 570 "handle_options.m"
          libs__handle_options__HostEnvSpec_100 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_831_831, libs__handle_options__V_649_649, libs__handle_options__V_664_664);
        }
#line 573 "handle_options.m"
        {
#line 573 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__HostEnvSpec_100, libs__handle_options__STATE_VARIABLE_Specs_645_645, &libs__handle_options__STATE_VARIABLE_Specs_682_682);
        }
#line 567 "handle_options.m"
      }
#line 575 "handle_options.m"
    {
#line 575 "handle_options.m"
      libs__handle_options__raw_lookup_string_option_3_p_0(*libs__handle_options__STATE_VARIABLE_OptionTable_117, (MR_Integer) 645, &libs__handle_options__SystemEnvTypeStr_101);
    }
#line 577 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__SystemEnvTypeStr_101, (MR_String) "") == 0);
#line 577 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 578 "handle_options.m"
      {
#line 578 "handle_options.m"
        libs__handle_options__SystemEnvTypePrime_102 = *libs__handle_options__HostEnvType_37;
#line 578 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 578 "handle_options.m"
      }
#line 577 "handle_options.m"
    else
#line 580 "handle_options.m"
      {
#line 580 "handle_options.m"
        libs__handle_options__succeeded = libs__globals__convert_env_type_2_p_0(libs__handle_options__SystemEnvTypeStr_101, &libs__handle_options__SystemEnvTypePrime_102);
      }
#line 576 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 583 "handle_options.m"
      {
#line 583 "handle_options.m"
        *libs__handle_options__SystemEnvType_38 = libs__handle_options__SystemEnvTypePrime_102;
#line 583 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_720_720 = libs__handle_options__STATE_VARIABLE_Specs_682_682;
#line 583 "handle_options.m"
      }
#line 576 "handle_options.m"
    else
#line 585 "handle_options.m"
      {
#line 585 "handle_options.m"
        MR_Word libs__handle_options__TypeCtorInfo_832_832;
#line 585 "handle_options.m"
        MR_Word libs__handle_options__SystemEnvSpec_103;
#line 585 "handle_options.m"
        MR_Word libs__handle_options__V_684_684;
#line 585 "handle_options.m"
        MR_Word libs__handle_options__V_687_687;
#line 585 "handle_options.m"
        MR_Word libs__handle_options__V_688_688;
#line 585 "handle_options.m"
        MR_Word libs__handle_options__V_702_702;
#line 585 "handle_options.m"
        MR_Word libs__handle_options__V_703_703;

#line 585 "handle_options.m"
        *libs__handle_options__SystemEnvType_38 = (MR_Integer) 0;
#line 12160 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_832_832 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 587 "handle_options.m"
        {
#line 587 "handle_options.m"
          libs__handle_options__V_688_688 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 587 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_688_688, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 587 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_688_688, 1) = ((MR_Box) (libs__handle_options__SystemEnvTypeStr_101));
#line 587 "handle_options.m"
        }
#line 587 "handle_options.m"
        {
#line 587 "handle_options.m"
          libs__handle_options__V_687_687 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 587 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_687_687, 0) = ((MR_Box) (libs__handle_options__V_688_688));
#line 587 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_687_687, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[120])));
#line 587 "handle_options.m"
        }
#line 587 "handle_options.m"
        {
#line 587 "handle_options.m"
          libs__handle_options__V_684_684 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 587 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_684_684, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
#line 587 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_684_684, 1) = ((MR_Box) (libs__handle_options__V_687_687));
#line 587 "handle_options.m"
        }
#line 590 "handle_options.m"
        {
#line 590 "handle_options.m"
          libs__handle_options__V_703_703 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[117]));
        }
#line 590 "handle_options.m"
        {
#line 590 "handle_options.m"
          libs__handle_options__V_702_702 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_832_832, libs__handle_options__V_703_703, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
        }
#line 589 "handle_options.m"
        {
#line 589 "handle_options.m"
          libs__handle_options__SystemEnvSpec_103 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_832_832, libs__handle_options__V_684_684, libs__handle_options__V_702_702);
        }
#line 592 "handle_options.m"
        {
#line 592 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__SystemEnvSpec_103, libs__handle_options__STATE_VARIABLE_Specs_682_682, &libs__handle_options__STATE_VARIABLE_Specs_720_720);
        }
#line 585 "handle_options.m"
      }
#line 594 "handle_options.m"
    {
#line 594 "handle_options.m"
      libs__handle_options__raw_lookup_string_option_3_p_0(*libs__handle_options__STATE_VARIABLE_OptionTable_117, (MR_Integer) 646, &libs__handle_options__TargetEnvTypeStr_104);
    }
#line 595 "handle_options.m"
    {
#line 595 "handle_options.m"
      libs__handle_options__succeeded = libs__globals__convert_env_type_2_p_0(libs__handle_options__TargetEnvTypeStr_104, &libs__handle_options__TargetEnvTypePrime_105);
    }
#line 595 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 596 "handle_options.m"
      {
#line 596 "handle_options.m"
        *libs__handle_options__TargetEnvType_39 = libs__handle_options__TargetEnvTypePrime_105;
#line 596 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_758_758 = libs__handle_options__STATE_VARIABLE_Specs_720_720;
#line 596 "handle_options.m"
      }
#line 595 "handle_options.m"
    else
#line 598 "handle_options.m"
      {
#line 598 "handle_options.m"
        MR_Word libs__handle_options__TypeCtorInfo_833_833;
#line 598 "handle_options.m"
        MR_Word libs__handle_options__TargetEnvTypeSpec_106;
#line 598 "handle_options.m"
        MR_Word libs__handle_options__V_722_722;
#line 598 "handle_options.m"
        MR_Word libs__handle_options__V_725_725;
#line 598 "handle_options.m"
        MR_Word libs__handle_options__V_726_726;
#line 598 "handle_options.m"
        MR_Word libs__handle_options__V_740_740;
#line 598 "handle_options.m"
        MR_Word libs__handle_options__V_741_741;

#line 598 "handle_options.m"
        *libs__handle_options__TargetEnvType_39 = (MR_Integer) 0;
#line 12255 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_833_833 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 600 "handle_options.m"
        {
#line 600 "handle_options.m"
          libs__handle_options__V_726_726 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 600 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_726_726, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 600 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_726_726, 1) = ((MR_Box) (libs__handle_options__TargetEnvTypeStr_104));
#line 600 "handle_options.m"
        }
#line 600 "handle_options.m"
        {
#line 600 "handle_options.m"
          libs__handle_options__V_725_725 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 600 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_725_725, 0) = ((MR_Box) (libs__handle_options__V_726_726));
#line 600 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_725_725, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[123])));
#line 600 "handle_options.m"
        }
#line 600 "handle_options.m"
        {
#line 600 "handle_options.m"
          libs__handle_options__V_722_722 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 600 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_722_722, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
#line 600 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_722_722, 1) = ((MR_Box) (libs__handle_options__V_725_725));
#line 600 "handle_options.m"
        }
#line 603 "handle_options.m"
        {
#line 603 "handle_options.m"
          libs__handle_options__V_741_741 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[117]));
        }
#line 603 "handle_options.m"
        {
#line 603 "handle_options.m"
          libs__handle_options__V_740_740 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_833_833, libs__handle_options__V_741_741, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
        }
#line 602 "handle_options.m"
        {
#line 602 "handle_options.m"
          libs__handle_options__TargetEnvTypeSpec_106 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_833_833, libs__handle_options__V_722_722, libs__handle_options__V_740_740);
        }
#line 605 "handle_options.m"
        {
#line 605 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__TargetEnvTypeSpec_106, libs__handle_options__STATE_VARIABLE_Specs_720_720, &libs__handle_options__STATE_VARIABLE_Specs_758_758);
        }
#line 598 "handle_options.m"
      }
#line 609 "handle_options.m"
    libs__handle_options__succeeded = (*libs__handle_options__HostEnvType_37 == (MR_Integer) 0);
#line 609 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 610 "handle_options.m"
      libs__handle_options__succeeded = (*libs__handle_options__CSharp_CompilerType_34 == (MR_Integer) 0);
#line 608 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 615 "handle_options.m"
      {
#line 616 "handle_options.m"
        {
#line 616 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[129]), libs__handle_options__STATE_VARIABLE_Specs_758_758, &libs__handle_options__STATE_VARIABLE_Specs_774_774);
        }
#line 615 "handle_options.m"
      }
#line 608 "handle_options.m"
    else
#line 608 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Specs_774_774 = libs__handle_options__STATE_VARIABLE_Specs_758_758;
#line 621 "handle_options.m"
    {
#line 621 "handle_options.m"
      libs__handle_options__raw_lookup_accumulating_option_3_p_0(*libs__handle_options__STATE_VARIABLE_OptionTable_117, (MR_Integer) 59, &libs__handle_options__LimitErrorContextsOptionStrs_108);
    }
#line 623 "handle_options.m"
    {
#line 623 "handle_options.m"
      libs__globals__convert_limit_error_contexts_3_p_0(libs__handle_options__LimitErrorContextsOptionStrs_108, &libs__handle_options__BadLimitErrorContextsOptions_109, libs__handle_options__LimitErrorContextsMap_40);
    }
#line 627 "handle_options.m"
    if ((libs__handle_options__BadLimitErrorContextsOptions_109 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 626 "handle_options.m"
      *libs__handle_options__STATE_VARIABLE_Specs_118 = libs__handle_options__STATE_VARIABLE_Specs_774_774;
#line 627 "handle_options.m"
    else
#line 627 "handle_options.m"
      {
#line 627 "handle_options.m"
        MR_Word libs__handle_options__V_835_835 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__BadLimitErrorContextsOptions_109, (MR_Integer) 1)));
#line 627 "handle_options.m"
        MR_String libs__handle_options__V_836_836 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__BadLimitErrorContextsOptions_109, (MR_Integer) 0)));

#line 627 "handle_options.m"
        if ((libs__handle_options__V_835_835 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 628 "handle_options.m"
          {
#line 628 "handle_options.m"
            MR_Word libs__handle_options__LECSpec_111;
#line 628 "handle_options.m"
            MR_Word libs__handle_options__V_799_799;
#line 628 "handle_options.m"
            MR_Word libs__handle_options__V_800_800;

#line 630 "handle_options.m"
            {
#line 630 "handle_options.m"
              libs__handle_options__V_800_800 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 630 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_800_800, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 630 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_800_800, 1) = ((MR_Box) (libs__handle_options__V_836_836));
#line 630 "handle_options.m"
            }
#line 630 "handle_options.m"
            {
#line 630 "handle_options.m"
              libs__handle_options__V_799_799 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 630 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_799_799, 0) = ((MR_Box) (libs__handle_options__V_800_800));
#line 630 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_799_799, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[132])));
#line 630 "handle_options.m"
            }
#line 630 "handle_options.m"
            {
#line 630 "handle_options.m"
              libs__handle_options__LECSpec_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 630 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__LECSpec_111, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
#line 630 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__LECSpec_111, 1) = ((MR_Box) (libs__handle_options__V_799_799));
#line 630 "handle_options.m"
            }
#line 633 "handle_options.m"
            {
#line 633 "handle_options.m"
              libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__LECSpec_111, libs__handle_options__STATE_VARIABLE_Specs_774_774, libs__handle_options__STATE_VARIABLE_Specs_118);
            }
#line 628 "handle_options.m"
          }
#line 627 "handle_options.m"
        else
#line 635 "handle_options.m"
          {
#line 635 "handle_options.m"
            MR_Word libs__handle_options__TypeCtorInfo_834_834;
#line 635 "handle_options.m"
            MR_Word libs__handle_options__BadPieces_115;
#line 635 "handle_options.m"
            MR_Word libs__handle_options__V_781_781;
#line 635 "handle_options.m"
            MR_Word libs__handle_options__LECSpec_815;

#line 636 "handle_options.m"
            {
#line 636 "handle_options.m"
              libs__handle_options__BadPieces_115 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(libs__handle_options__BadLimitErrorContextsOptions_109);
            }
#line 12419 "libs.handle_options.c"
            libs__handle_options__TypeCtorInfo_834_834 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 638 "handle_options.m"
            {
#line 638 "handle_options.m"
              libs__handle_options__V_781_781 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_834_834, libs__handle_options__BadPieces_115, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[132]));
            }
#line 638 "handle_options.m"
            {
#line 638 "handle_options.m"
              libs__handle_options__LECSpec_815 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_834_834, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[221]), libs__handle_options__V_781_781);
            }
#line 641 "handle_options.m"
            {
#line 641 "handle_options.m"
              libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__LECSpec_815, libs__handle_options__STATE_VARIABLE_Specs_774_774, libs__handle_options__STATE_VARIABLE_Specs_118);
            }
#line 635 "handle_options.m"
          }
#line 627 "handle_options.m"
      }
#line 237 "handle_options.m"
  }
#line 222 "handle_options.m"
}

#line 200 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_option_table_result_to_globals_5_p_0_1(
#line 200 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 200 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 200 "handle_options.m"
{
#line 200 "handle_options.m"
  {
#line 200 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 200 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 200 "handle_options.m"
    MR_String libs__handle_options__conv0_HeadVar__2_2;

#line 200 "handle_options.m"
    {
#line 200 "handle_options.m"
      libs__handle_options__conv0_HeadVar__2_2 = libs__op_mode__op_mode_to_option_string_1_f_0(((MR_Word) libs__handle_options__wrapper_arg_1));
    }
#line 200 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv0_HeadVar__2_2));
#line 200 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 200 "handle_options.m"
  }
#line 200 "handle_options.m"
}

#line 173 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_option_table_result_to_globals_5_p_0(
#line 173 "handle_options.m"
  MR_Word libs__handle_options__MaybeOptionTable0_6,
#line 173 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Specs_41,
#line 173 "handle_options.m"
  MR_Word * libs__handle_options__Globals_8)
#line 173 "handle_options.m"
{
#line 179 "handle_options.m"
  {
#line 179 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 179 "handle_options.m"
    if (((MR_tag((MR_Word) libs__handle_options__MaybeOptionTable0_6)) == (MR_mktag((MR_Integer) 1))))
#line 179 "handle_options.m"
      {
#line 179 "handle_options.m"
        MR_String libs__handle_options__ErrorMessage_10 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeOptionTable0_6, (MR_Integer) 0)));
#line 179 "handle_options.m"
        MR_Word libs__handle_options__OptionTablePieces_11;
#line 179 "handle_options.m"
        MR_Word libs__handle_options__OptionTableMsg_12;
#line 179 "handle_options.m"
        MR_Word libs__handle_options__OptionTableSpec_13;
#line 179 "handle_options.m"
        MR_Word libs__handle_options__V_68_68;
#line 179 "handle_options.m"
        MR_Word libs__handle_options__V_73_73;
#line 179 "handle_options.m"
        MR_Word libs__handle_options__V_74_74;
#line 179 "handle_options.m"
        MR_Word libs__handle_options__V_78_78;
#line 96 "handle_options.m"
        MR_Word libs__handle_options__V_92_92;
#line 96 "handle_options.m"
        MR_Word libs__handle_options__V_93_93;
#line 96 "handle_options.m"
        MR_Word libs__handle_options__V_94_94;

#line 180 "handle_options.m"
        {
#line 180 "handle_options.m"
          libs__handle_options__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 180 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 180 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_68_68, 1) = ((MR_Box) (libs__handle_options__ErrorMessage_10));
#line 180 "handle_options.m"
        }
#line 180 "handle_options.m"
        {
#line 180 "handle_options.m"
          libs__handle_options__OptionTablePieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 180 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__OptionTablePieces_11, 0) = ((MR_Box) (libs__handle_options__V_68_68));
#line 180 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__OptionTablePieces_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 180 "handle_options.m"
        }
#line 182 "handle_options.m"
        {
#line 182 "handle_options.m"
          libs__handle_options__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 182 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_74_74, 0) = ((MR_Box) (libs__handle_options__OptionTablePieces_11));
#line 182 "handle_options.m"
        }
#line 182 "handle_options.m"
        {
#line 182 "handle_options.m"
          libs__handle_options__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 182 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_73_73, 0) = ((MR_Box) (libs__handle_options__V_74_74));
#line 182 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 182 "handle_options.m"
        }
#line 181 "handle_options.m"
        {
#line 181 "handle_options.m"
          libs__handle_options__OptionTableMsg_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 181 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__OptionTableMsg_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 181 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__OptionTableMsg_12, 1) = ((MR_Box) ((MR_Integer) 1));
#line 181 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__OptionTableMsg_12, 2) = ((MR_Box) ((MR_Integer) 0));
#line 181 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__OptionTableMsg_12, 3) = ((MR_Box) (libs__handle_options__V_73_73));
#line 181 "handle_options.m"
        }
#line 184 "handle_options.m"
        {
#line 184 "handle_options.m"
          libs__handle_options__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 184 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_78_78, 0) = ((MR_Box) (libs__handle_options__OptionTableMsg_12));
#line 184 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 184 "handle_options.m"
        }
#line 183 "handle_options.m"
        {
#line 183 "handle_options.m"
          libs__handle_options__OptionTableSpec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 183 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__OptionTableSpec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 183 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__OptionTableSpec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 183 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__OptionTableSpec_13, 2) = ((MR_Box) (libs__handle_options__V_78_78));
#line 183 "handle_options.m"
        }
#line 185 "handle_options.m"
        {
#line 185 "handle_options.m"
          MR_Word base;
#line 185 "handle_options.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "handle_options.m"
          *libs__handle_options__STATE_VARIABLE_Specs_41 = base;
#line 185 "handle_options.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__OptionTableSpec_13));
#line 185 "handle_options.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 185 "handle_options.m"
        }
#line 96 "handle_options.m"
        {
#line 96 "handle_options.m"
          libs__handle_options__handle_given_options_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__handle_options__V_92_92, &libs__handle_options__V_93_93, &libs__handle_options__V_94_94, libs__handle_options__Globals_8);
        }
#line 179 "handle_options.m"
      }
#line 179 "handle_options.m"
    else
#line 188 "handle_options.m"
      {
#line 188 "handle_options.m"
        MR_Word libs__handle_options__OptionTable0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__MaybeOptionTable0_6, (MR_Integer) 0)));
#line 188 "handle_options.m"
        MR_Word libs__handle_options__OptionTable_15;
#line 188 "handle_options.m"
        MR_Word libs__handle_options__Target_16;
#line 188 "handle_options.m"
        MR_Word libs__handle_options__GC_Method_17;
#line 188 "handle_options.m"
        MR_Word libs__handle_options__TagsMethod_18;
#line 188 "handle_options.m"
        MR_Word libs__handle_options__TermNorm_19;
#line 188 "handle_options.m"
        MR_Word libs__handle_options__Term2Norm_20;
#line 188 "handle_options.m"
        MR_Word libs__handle_options__TraceLevel_21;
#line 188 "handle_options.m"
        MR_Word libs__handle_options__TraceSuppress_22;
#line 188 "handle_options.m"
        MR_Word libs__handle_options__SSTraceLevel_23;
#line 188 "handle_options.m"
        MR_Word libs__handle_options__MaybeThreadSafe_24;
#line 188 "handle_options.m"
        MR_Word libs__handle_options__C_CompilerType_25;
#line 188 "handle_options.m"
        MR_Word libs__handle_options__CSharp_CompilerType_26;
#line 188 "handle_options.m"
        MR_Word libs__handle_options__ReuseStrategy_27;
#line 188 "handle_options.m"
        MR_Word libs__handle_options__MaybeFeedbackInfo_28;
#line 188 "handle_options.m"
        MR_Word libs__handle_options__HostEnvType_29;
#line 188 "handle_options.m"
        MR_Word libs__handle_options__SystemEnvType_30;
#line 188 "handle_options.m"
        MR_Word libs__handle_options__TargetEnvType_31;
#line 188 "handle_options.m"
        MR_Word libs__handle_options__LimitErrorContextsMap_32;
#line 188 "handle_options.m"
        MR_Word libs__handle_options__OpMode_33;
#line 188 "handle_options.m"
        MR_Word libs__handle_options__OtherOpModes_34;
#line 188 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Specs_44_44;
#line 188 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Specs_64_64;

#line 189 "handle_options.m"
        {
#line 189 "handle_options.m"
          libs__handle_options__check_option_values_22_p_0(libs__handle_options__OptionTable0_14, &libs__handle_options__OptionTable_15, &libs__handle_options__Target_16, &libs__handle_options__GC_Method_17, &libs__handle_options__TagsMethod_18, &libs__handle_options__TermNorm_19, &libs__handle_options__Term2Norm_20, &libs__handle_options__TraceLevel_21, &libs__handle_options__TraceSuppress_22, &libs__handle_options__SSTraceLevel_23, &libs__handle_options__MaybeThreadSafe_24, &libs__handle_options__C_CompilerType_25, &libs__handle_options__CSharp_CompilerType_26, &libs__handle_options__ReuseStrategy_27, &libs__handle_options__MaybeFeedbackInfo_28, &libs__handle_options__HostEnvType_29, &libs__handle_options__SystemEnvType_30, &libs__handle_options__TargetEnvType_31, &libs__handle_options__LimitErrorContextsMap_32, &libs__handle_options__STATE_VARIABLE_Specs_44_44);
        }
#line 195 "handle_options.m"
        {
#line 195 "handle_options.m"
          libs__op_mode__decide_op_mode_3_p_0(libs__handle_options__OptionTable_15, &libs__handle_options__OpMode_33, &libs__handle_options__OtherOpModes_34);
        }
#line 198 "handle_options.m"
        if ((libs__handle_options__OtherOpModes_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 197 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Specs_64_64 = libs__handle_options__STATE_VARIABLE_Specs_44_44;
#line 198 "handle_options.m"
        else
#line 199 "handle_options.m"
          {
#line 199 "handle_options.m"
            MR_Word libs__handle_options__TypeCtorInfo_87_87;
#line 199 "handle_options.m"
            MR_Word libs__handle_options__OpModeStrs_37;
#line 199 "handle_options.m"
            MR_Word libs__handle_options__OpModePieces_38;
#line 199 "handle_options.m"
            MR_Word libs__handle_options__V_47_47;
#line 199 "handle_options.m"
            MR_Word libs__handle_options__V_55_55;
#line 199 "handle_options.m"
            MR_Word libs__handle_options__V_56_56;

#line 201 "handle_options.m"
            {
#line 201 "handle_options.m"
              libs__handle_options__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 201 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_47_47, 0) = ((MR_Box) (libs__handle_options__OpMode_33));
#line 201 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_47_47, 1) = ((MR_Box) (libs__handle_options__OtherOpModes_34));
#line 201 "handle_options.m"
            }
#line 200 "handle_options.m"
            {
#line 200 "handle_options.m"
              libs__handle_options__OpModeStrs_37 = mercury__list__map_2_f_0((MR_Word) &libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &libs__handle_options_scalar_common_3[8], libs__handle_options__V_47_47);
            }
#line 12712 "libs.handle_options.c"
            libs__handle_options__TypeCtorInfo_87_87 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 204 "handle_options.m"
            {
#line 204 "handle_options.m"
              libs__handle_options__V_56_56 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(libs__handle_options__OpModeStrs_37);
            }
#line 204 "handle_options.m"
            {
#line 204 "handle_options.m"
              libs__handle_options__V_55_55 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_87_87, libs__handle_options__V_56_56, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
            }
#line 203 "handle_options.m"
            {
#line 203 "handle_options.m"
              libs__handle_options__OpModePieces_38 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_87_87, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[8]), libs__handle_options__V_55_55);
            }
#line 205 "handle_options.m"
            {
#line 205 "handle_options.m"
              libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__OpModePieces_38, libs__handle_options__STATE_VARIABLE_Specs_44_44, &libs__handle_options__STATE_VARIABLE_Specs_64_64);
            }
#line 199 "handle_options.m"
          }
#line 216 "handle_options.m"
        if ((libs__handle_options__STATE_VARIABLE_Specs_64_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 209 "handle_options.m"
          {
#line 209 "handle_options.m"
            libs__handle_options__convert_options_to_globals_24_p_0(libs__handle_options__OptionTable_15, libs__handle_options__OpMode_33, libs__handle_options__Target_16, libs__handle_options__GC_Method_17, libs__handle_options__TagsMethod_18, libs__handle_options__TermNorm_19, libs__handle_options__Term2Norm_20, libs__handle_options__TraceLevel_21, libs__handle_options__TraceSuppress_22, libs__handle_options__SSTraceLevel_23, libs__handle_options__MaybeThreadSafe_24, libs__handle_options__C_CompilerType_25, libs__handle_options__CSharp_CompilerType_26, libs__handle_options__ReuseStrategy_27, libs__handle_options__MaybeFeedbackInfo_28, libs__handle_options__HostEnvType_29, libs__handle_options__SystemEnvType_30, libs__handle_options__TargetEnvType_31, libs__handle_options__LimitErrorContextsMap_32, libs__handle_options__STATE_VARIABLE_Specs_64_64, libs__handle_options__STATE_VARIABLE_Specs_41, libs__handle_options__Globals_8);
          }
#line 216 "handle_options.m"
        else
#line 217 "handle_options.m"
          {
#line 218 "handle_options.m"
            {
#line 218 "handle_options.m"
              libs__handle_options__generate_default_globals_3_p_0(libs__handle_options__Globals_8);
            }
#line 217 "handle_options.m"
            *libs__handle_options__STATE_VARIABLE_Specs_41 = libs__handle_options__STATE_VARIABLE_Specs_64_64;
#line 217 "handle_options.m"
          }
#line 188 "handle_options.m"
      }
#line 179 "handle_options.m"
  }
#line 173 "handle_options.m"
}

#line 64 "handle_options.m"
void MR_CALL 
libs__handle_options__long_usage_2_p_0(void)
#line 64 "handle_options.m"
{
#line 2472 "handle_options.m"
  {
#line 2472 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2472 "handle_options.m"
    MR_String libs__handle_options__Version_4;
#line 2472 "handle_options.m"
    MR_String libs__handle_options__Fullarch_5;
#line 2472 "handle_options.m"
    MR_Word libs__handle_options__V_8_8;
#line 2472 "handle_options.m"
    MR_Word libs__handle_options__V_11_11;
#line 2472 "handle_options.m"
    MR_Word libs__handle_options__V_12_12;
#line 2472 "handle_options.m"
    MR_Word libs__handle_options__V_14_14;

#line 2476 "handle_options.m"
    {
#line 2476 "handle_options.m"
      mercury__library__version_2_p_0(&libs__handle_options__Version_4, &libs__handle_options__Fullarch_5);
    }
#line 2478 "handle_options.m"
    {
#line 2478 "handle_options.m"
      libs__handle_options__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2478 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 0) = ((MR_Box) (libs__handle_options__Fullarch_5));
#line 2478 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[217])));
#line 2478 "handle_options.m"
    }
#line 2478 "handle_options.m"
    {
#line 2478 "handle_options.m"
      libs__handle_options__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2478 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 0) = ((MR_Box) ((MR_String) ", on "));
#line 2478 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 1) = ((MR_Box) (libs__handle_options__V_14_14));
#line 2478 "handle_options.m"
    }
#line 2478 "handle_options.m"
    {
#line 2478 "handle_options.m"
      libs__handle_options__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2478 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 0) = ((MR_Box) (libs__handle_options__Version_4));
#line 2478 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 1) = ((MR_Box) (libs__handle_options__V_12_12));
#line 2478 "handle_options.m"
    }
#line 2477 "handle_options.m"
    {
#line 2477 "handle_options.m"
      libs__handle_options__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2477 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_8_8, 0) = ((MR_Box) ((MR_String) "Name: mmc -- Melbourne Mercury Compiler, version "));
#line 2477 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_8_8, 1) = ((MR_Box) (libs__handle_options__V_11_11));
#line 2477 "handle_options.m"
    }
#line 2477 "handle_options.m"
    {
#line 2477 "handle_options.m"
      mercury__io__write_strings_3_p_0(libs__handle_options__V_8_8);
    }
#line 2479 "handle_options.m"
    {
#line 2479 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "Copyright: Copyright (C) 1993-2012 The University of Melbourne\n");
    }
#line 2481 "handle_options.m"
    {
#line 2481 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "           Copyright (C) 2013-2015 The Mercury team\n");
    }
#line 2483 "handle_options.m"
    {
#line 2483 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "Usage: mmc [<options>] <arguments>\n");
    }
#line 2484 "handle_options.m"
    {
#line 2484 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "Arguments:\n");
    }
#line 2485 "handle_options.m"
    {
#line 2485 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "\tArguments ending in \140.m\' are assumed to be source file names.\n");
    }
#line 2487 "handle_options.m"
    {
#line 2487 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "\tArguments that do not end in \140.m\' are assumed to be module names.\n");
    }
#line 2489 "handle_options.m"
    {
#line 2489 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "\tArguments in the form \100file are replaced with the contents of the file.\n");
    }
#line 2491 "handle_options.m"
    {
#line 2491 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "Options:\n");
    }
#line 2492 "handle_options.m"
    {
#line 2492 "handle_options.m"
      libs__options__options_help_2_p_0();
    }
#line 2472 "handle_options.m"
  }
#line 64 "handle_options.m"
}

#line 60 "handle_options.m"
void MR_CALL 
libs__handle_options__usage_2_p_0(void)
#line 60 "handle_options.m"
{
#line 2456 "handle_options.m"
  {
#line 2456 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2456 "handle_options.m"
    MR_Word libs__handle_options__AlreadyPrinted_4;

#line 2453 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#line 2453 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 12909 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2453 "handle_options.m"
}
#line 2453 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0

	MR_Word X;

		{
#line 2453 "handle_options.m"
X = libs__handle_options__mutable_variable_already_printed_usage;

#line 12925 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
	 libs__handle_options__AlreadyPrinted_4  = X;
#line 2453 "handle_options.m"
}
#line 2453 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#line 2453 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 12944 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2453 "handle_options.m"
}
#line 2468 "handle_options.m"
#line 2468 "handle_options.m"
    switch (libs__handle_options__AlreadyPrinted_4) {
#line 2468 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2468 "handle_options.m"
      case (MR_Integer) 0:
#line 2461 "handle_options.m"
        {
#line 2462 "handle_options.m"
          {
#line 2462 "handle_options.m"
            libs__handle_options__display_compiler_version_2_p_0();
          }
#line 2463 "handle_options.m"
          {
#line 2463 "handle_options.m"
            mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[4]));
          }
#line 2453 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#line 2453 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 12981 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2453 "handle_options.m"
}
#line 2453 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0

	MR_Word X;

	X =  (MR_Integer) 1 ;
		{
#line 2453 "handle_options.m"
libs__handle_options__mutable_variable_already_printed_usage = X;

#line 12998 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2453 "handle_options.m"
}
#line 2453 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#line 2453 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 13016 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2453 "handle_options.m"
}
#line 2461 "handle_options.m"
        }
#line 2468 "handle_options.m"
        break;
#line 2468 "handle_options.m"
      case (MR_Integer) 1:
#line 2469 "handle_options.m"
        {
#line 2469 "handle_options.m"
        }
#line 2468 "handle_options.m"
        break;
#line 2468 "handle_options.m"
    }
#line 2456 "handle_options.m"
  }
#line 60 "handle_options.m"
}

#line 56 "handle_options.m"
void MR_CALL 
libs__handle_options__usage_errors_4_p_0(
#line 56 "handle_options.m"
  MR_Word libs__handle_options__Globals_5,
#line 56 "handle_options.m"
  MR_Word libs__handle_options__Specs_6)
#line 56 "handle_options.m"
{
#line 2435 "handle_options.m"
  {
#line 2435 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2435 "handle_options.m"
    MR_String libs__handle_options__ProgName_8;
#line 2443 "handle_options.m"
    MR_Integer libs__handle_options___NumWarnings_9;
#line 2443 "handle_options.m"
    MR_Integer libs__handle_options___NumErrors_10;

#line 2436 "handle_options.m"
    {
#line 2436 "handle_options.m"
      mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &libs__handle_options__ProgName_8);
    }
#line 2437 "handle_options.m"
    {
#line 2437 "handle_options.m"
      mercury__io__write_string_3_p_0(libs__handle_options__ProgName_8);
    }
#line 2438 "handle_options.m"
    {
#line 2438 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) ":");
    }
#line 2439 "handle_options.m"
    {
#line 2439 "handle_options.m"
      mercury__io__nl_2_p_0();
    }
#line 2443 "handle_options.m"
    {
#line 2443 "handle_options.m"
      parse_tree__error_util__write_error_specs_8_p_0(libs__handle_options__Specs_6, libs__handle_options__Globals_5, (MR_Integer) 0, &libs__handle_options___NumWarnings_9, (MR_Integer) 0, &libs__handle_options___NumErrors_10);
    }
#line 2435 "handle_options.m"
  }
#line 56 "handle_options.m"
}

#line 50 "handle_options.m"
void MR_CALL 
libs__handle_options__display_compiler_version_2_p_0(void)
#line 50 "handle_options.m"
{
#line 2445 "handle_options.m"
  {
#line 2445 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2445 "handle_options.m"
    MR_String libs__handle_options__Version_4;
#line 2445 "handle_options.m"
    MR_String libs__handle_options__Fullarch_5;
#line 2445 "handle_options.m"
    MR_Word libs__handle_options__V_8_8;
#line 2445 "handle_options.m"
    MR_Word libs__handle_options__V_11_11;
#line 2445 "handle_options.m"
    MR_Word libs__handle_options__V_12_12;
#line 2445 "handle_options.m"
    MR_Word libs__handle_options__V_14_14;

#line 2446 "handle_options.m"
    {
#line 2446 "handle_options.m"
      mercury__library__version_2_p_0(&libs__handle_options__Version_4, &libs__handle_options__Fullarch_5);
    }
#line 2448 "handle_options.m"
    {
#line 2448 "handle_options.m"
      libs__handle_options__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2448 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 0) = ((MR_Box) (libs__handle_options__Fullarch_5));
#line 2448 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[2])));
#line 2448 "handle_options.m"
    }
#line 2448 "handle_options.m"
    {
#line 2448 "handle_options.m"
      libs__handle_options__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2448 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 0) = ((MR_Box) ((MR_String) ", on "));
#line 2448 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 1) = ((MR_Box) (libs__handle_options__V_14_14));
#line 2448 "handle_options.m"
    }
#line 2448 "handle_options.m"
    {
#line 2448 "handle_options.m"
      libs__handle_options__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2448 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 0) = ((MR_Box) (libs__handle_options__Version_4));
#line 2448 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 1) = ((MR_Box) (libs__handle_options__V_12_12));
#line 2448 "handle_options.m"
    }
#line 2448 "handle_options.m"
    {
#line 2448 "handle_options.m"
      libs__handle_options__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2448 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_8_8, 0) = ((MR_Box) ((MR_String) "Mercury Compiler, version "));
#line 2448 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_8_8, 1) = ((MR_Box) (libs__handle_options__V_11_11));
#line 2448 "handle_options.m"
    }
#line 2447 "handle_options.m"
    {
#line 2447 "handle_options.m"
      mercury__io__write_strings_3_p_0(libs__handle_options__V_8_8);
    }
#line 2445 "handle_options.m"
  }
#line 50 "handle_options.m"
}

#line 155 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_5(
#line 155 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 155 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 155 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 155 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_3,
#line 155 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_4)
#line 155 "handle_options.m"
{
#line 155 "handle_options.m"
  {
#line 155 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 155 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 155 "handle_options.m"
    MR_Word libs__handle_options__conv4_HeadVar__4_4;

#line 155 "handle_options.m"
    {
#line 155 "handle_options.m"
      libs__handle_options__succeeded = libs__options__special_handler_4_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), ((MR_Word) libs__handle_options__wrapper_arg_3), &libs__handle_options__conv4_HeadVar__4_4);
    }
#line 155 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 155 "handle_options.m"
      {
#line 155 "handle_options.m"
        *libs__handle_options__wrapper_arg_4 = ((MR_Box) (libs__handle_options__conv4_HeadVar__4_4));
#line 155 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 155 "handle_options.m"
      }
#line 155 "handle_options.m"
    return libs__handle_options__succeeded;
#line 155 "handle_options.m"
  }
#line 155 "handle_options.m"
}

#line 155 "handle_options.m"
static void MR_CALL 
libs__handle_options__separate_option_args_5_p_0_3(
#line 155 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 155 "handle_options.m"
{
#line 155 "handle_options.m"
  {
#line 155 "handle_options.m"
    struct libs__handle_options__separate_option_args_5_p_0_4_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__separate_option_args_5_p_0_4_env_0_s *) libs__handle_options__env_ptr_arg;

#line 155 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__conv3_HeadVar__1_1));
#line 155 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__conv2_HeadVar__2_2));
#line 155 "handle_options.m"
    {
#line 155 "handle_options.m"
      ((libs__handle_options__env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__cont_env_ptr);
    }
#line 155 "handle_options.m"
  }
#line 155 "handle_options.m"
}

#line 155 "handle_options.m"
static void MR_CALL 
libs__handle_options__separate_option_args_5_p_0_4(
#line 155 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 155 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 155 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2,
#line 155 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 155 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 155 "handle_options.m"
{
#line 155 "handle_options.m"
  {
#line 155 "handle_options.m"
    struct libs__handle_options__separate_option_args_5_p_0_4_env_0_s libs__handle_options__env;

#line 155 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_1 = libs__handle_options__wrapper_arg_1;
#line 155 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_2 = libs__handle_options__wrapper_arg_2;
#line 155 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__separate_option_args_5_p_0_4_env_0__cont = libs__handle_options__cont;
#line 155 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__separate_option_args_5_p_0_4_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
#line 155 "handle_options.m"
    {
#line 155 "handle_options.m"
      MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 155 "handle_options.m"
      {
#line 155 "handle_options.m"
        libs__options__option_defaults_2_p_0(&(libs__handle_options__env).libs__handle_options__separate_option_args_5_p_0_4_env_0__conv3_HeadVar__1_1, &(libs__handle_options__env).libs__handle_options__separate_option_args_5_p_0_4_env_0__conv2_HeadVar__2_2, libs__handle_options__separate_option_args_5_p_0_3, &libs__handle_options__env);
      }
#line 155 "handle_options.m"
    }
#line 155 "handle_options.m"
  }
#line 155 "handle_options.m"
}

#line 154 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_2(
#line 154 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 154 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 154 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2)
#line 154 "handle_options.m"
{
#line 154 "handle_options.m"
  {
#line 154 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 154 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 154 "handle_options.m"
    MR_Word libs__handle_options__conv1_HeadVar__2_2;

#line 154 "handle_options.m"
    {
#line 154 "handle_options.m"
      libs__handle_options__succeeded = libs__options__long_option_2_p_0(((MR_String) libs__handle_options__wrapper_arg_1), &libs__handle_options__conv1_HeadVar__2_2);
    }
#line 154 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 154 "handle_options.m"
      {
#line 154 "handle_options.m"
        *libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv1_HeadVar__2_2));
#line 154 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 154 "handle_options.m"
      }
#line 154 "handle_options.m"
    return libs__handle_options__succeeded;
#line 154 "handle_options.m"
  }
#line 154 "handle_options.m"
}

#line 154 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_1(
#line 154 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 154 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 154 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2)
#line 154 "handle_options.m"
{
#line 154 "handle_options.m"
  {
#line 154 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 154 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 154 "handle_options.m"
    MR_Word libs__handle_options__conv0_HeadVar__2_2;

#line 154 "handle_options.m"
    {
#line 154 "handle_options.m"
      libs__handle_options__succeeded = libs__options__short_option_2_p_0(((MR_Char) (MR_Word) libs__handle_options__wrapper_arg_1), &libs__handle_options__conv0_HeadVar__2_2);
    }
#line 154 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 154 "handle_options.m"
      {
#line 154 "handle_options.m"
        *libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv0_HeadVar__2_2));
#line 154 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 154 "handle_options.m"
      }
#line 154 "handle_options.m"
    return libs__handle_options__succeeded;
#line 154 "handle_options.m"
  }
#line 154 "handle_options.m"
}

#line 45 "handle_options.m"
void MR_CALL 
libs__handle_options__separate_option_args_5_p_0(
#line 45 "handle_options.m"
  MR_Word libs__handle_options__Args0_6,
#line 45 "handle_options.m"
  MR_Word * libs__handle_options__OptionArgs_7,
#line 45 "handle_options.m"
  MR_Word * libs__handle_options__Args_8)
#line 45 "handle_options.m"
{
#line 153 "handle_options.m"
  {
#line 153 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 156 "handle_options.m"
    MR_Word libs__handle_options__V_10_10;

#line 156 "handle_options.m"
    {
#line 156 "handle_options.m"
      mercury__getopt_io__process_options_7_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_5[1]), libs__handle_options__Args0_6, libs__handle_options__OptionArgs_7, libs__handle_options__Args_8, &libs__handle_options__V_10_10);
    }
#line 153 "handle_options.m"
  }
#line 45 "handle_options.m"
}

#line 155 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__handle_given_options_7_p_0_5(
#line 155 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 155 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 155 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 155 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_3,
#line 155 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_4)
#line 155 "handle_options.m"
{
#line 155 "handle_options.m"
  {
#line 155 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 155 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 155 "handle_options.m"
    MR_Word libs__handle_options__conv4_HeadVar__4_4;

#line 155 "handle_options.m"
    {
#line 155 "handle_options.m"
      libs__handle_options__succeeded = libs__options__special_handler_4_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), ((MR_Word) libs__handle_options__wrapper_arg_3), &libs__handle_options__conv4_HeadVar__4_4);
    }
#line 155 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 155 "handle_options.m"
      {
#line 155 "handle_options.m"
        *libs__handle_options__wrapper_arg_4 = ((MR_Box) (libs__handle_options__conv4_HeadVar__4_4));
#line 155 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 155 "handle_options.m"
      }
#line 155 "handle_options.m"
    return libs__handle_options__succeeded;
#line 155 "handle_options.m"
  }
#line 155 "handle_options.m"
}

#line 155 "handle_options.m"
static void MR_CALL 
libs__handle_options__handle_given_options_7_p_0_3(
#line 155 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 155 "handle_options.m"
{
#line 155 "handle_options.m"
  {
#line 155 "handle_options.m"
    struct libs__handle_options__handle_given_options_7_p_0_4_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__handle_given_options_7_p_0_4_env_0_s *) libs__handle_options__env_ptr_arg;

#line 155 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__handle_given_options_7_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__handle_given_options_7_p_0_4_env_0__conv3_HeadVar__1_1));
#line 155 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__handle_given_options_7_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__handle_given_options_7_p_0_4_env_0__conv2_HeadVar__2_2));
#line 155 "handle_options.m"
    {
#line 155 "handle_options.m"
      ((libs__handle_options__env_ptr)->libs__handle_options__handle_given_options_7_p_0_4_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__handle_given_options_7_p_0_4_env_0__cont_env_ptr);
    }
#line 155 "handle_options.m"
  }
#line 155 "handle_options.m"
}

#line 155 "handle_options.m"
static void MR_CALL 
libs__handle_options__handle_given_options_7_p_0_4(
#line 155 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 155 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 155 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2,
#line 155 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 155 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 155 "handle_options.m"
{
#line 155 "handle_options.m"
  {
#line 155 "handle_options.m"
    struct libs__handle_options__handle_given_options_7_p_0_4_env_0_s libs__handle_options__env;

#line 155 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__handle_given_options_7_p_0_4_env_0__wrapper_arg_1 = libs__handle_options__wrapper_arg_1;
#line 155 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__handle_given_options_7_p_0_4_env_0__wrapper_arg_2 = libs__handle_options__wrapper_arg_2;
#line 155 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__handle_given_options_7_p_0_4_env_0__cont = libs__handle_options__cont;
#line 155 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__handle_given_options_7_p_0_4_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
#line 155 "handle_options.m"
    {
#line 155 "handle_options.m"
      MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 155 "handle_options.m"
      {
#line 155 "handle_options.m"
        libs__options__option_defaults_2_p_0(&(libs__handle_options__env).libs__handle_options__handle_given_options_7_p_0_4_env_0__conv3_HeadVar__1_1, &(libs__handle_options__env).libs__handle_options__handle_given_options_7_p_0_4_env_0__conv2_HeadVar__2_2, libs__handle_options__handle_given_options_7_p_0_3, &libs__handle_options__env);
      }
#line 155 "handle_options.m"
    }
#line 155 "handle_options.m"
  }
#line 155 "handle_options.m"
}

#line 154 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__handle_given_options_7_p_0_2(
#line 154 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 154 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 154 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2)
#line 154 "handle_options.m"
{
#line 154 "handle_options.m"
  {
#line 154 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 154 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 154 "handle_options.m"
    MR_Word libs__handle_options__conv1_HeadVar__2_2;

#line 154 "handle_options.m"
    {
#line 154 "handle_options.m"
      libs__handle_options__succeeded = libs__options__long_option_2_p_0(((MR_String) libs__handle_options__wrapper_arg_1), &libs__handle_options__conv1_HeadVar__2_2);
    }
#line 154 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 154 "handle_options.m"
      {
#line 154 "handle_options.m"
        *libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv1_HeadVar__2_2));
#line 154 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 154 "handle_options.m"
      }
#line 154 "handle_options.m"
    return libs__handle_options__succeeded;
#line 154 "handle_options.m"
  }
#line 154 "handle_options.m"
}

#line 154 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__handle_given_options_7_p_0_1(
#line 154 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 154 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 154 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2)
#line 154 "handle_options.m"
{
#line 154 "handle_options.m"
  {
#line 154 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 154 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 154 "handle_options.m"
    MR_Word libs__handle_options__conv0_HeadVar__2_2;

#line 154 "handle_options.m"
    {
#line 154 "handle_options.m"
      libs__handle_options__succeeded = libs__options__short_option_2_p_0(((MR_Char) (MR_Word) libs__handle_options__wrapper_arg_1), &libs__handle_options__conv0_HeadVar__2_2);
    }
#line 154 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 154 "handle_options.m"
      {
#line 154 "handle_options.m"
        *libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv0_HeadVar__2_2));
#line 154 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 154 "handle_options.m"
      }
#line 154 "handle_options.m"
    return libs__handle_options__succeeded;
#line 154 "handle_options.m"
  }
#line 154 "handle_options.m"
}

#line 37 "handle_options.m"
void MR_CALL 
libs__handle_options__handle_given_options_7_p_0(
#line 37 "handle_options.m"
  MR_Word libs__handle_options__Args0_8,
#line 37 "handle_options.m"
  MR_Word * libs__handle_options__OptionArgs_9,
#line 37 "handle_options.m"
  MR_Word * libs__handle_options__Args_10,
#line 37 "handle_options.m"
  MR_Word * libs__handle_options__Specs_11,
#line 37 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_23)
#line 37 "handle_options.m"
{
#line 98 "handle_options.m"
  {
#line 98 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 98 "handle_options.m"
    MR_Word libs__handle_options__Result_15;
#line 98 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_41_41;

#line 156 "handle_options.m"
    {
#line 156 "handle_options.m"
      mercury__getopt_io__process_options_7_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_5[0]), libs__handle_options__Args0_8, libs__handle_options__OptionArgs_9, libs__handle_options__Args_10, &libs__handle_options__Result_15);
    }
#line 114 "handle_options.m"
    {
#line 114 "handle_options.m"
      libs__handle_options__convert_option_table_result_to_globals_5_p_0(libs__handle_options__Result_15, libs__handle_options__Specs_11, &libs__handle_options__STATE_VARIABLE_Globals_41_41);
    }
#line 120 "handle_options.m"
    if ((*libs__handle_options__Specs_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 121 "handle_options.m"
      {
#line 121 "handle_options.m"
        MR_Word libs__handle_options__OpMode_18;
#line 121 "handle_options.m"
        MR_Word libs__handle_options__Smart_19;
#line 125 "handle_options.m"
        MR_Word libs__handle_options__OpModeArgs_20;
#line 125 "handle_options.m"
        MR_Word libs__handle_options__OpModeAugment_21;
#line 125 "handle_options.m"
        MR_Word libs__handle_options__OpModeCG_22;

#line 122 "handle_options.m"
        {
#line 122 "handle_options.m"
          libs__globals__get_op_mode_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, &libs__handle_options__OpMode_18);
        }
#line 123 "handle_options.m"
        {
#line 123 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 116, &libs__handle_options__Smart_19);
        }
#line 125 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__Smart_19 == (MR_Integer) 1);
#line 125 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 125 "handle_options.m"
          {
#line 126 "handle_options.m"
            libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__OpMode_18)) == (MR_mktag((MR_Integer) 3)));
#line 126 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 126 "handle_options.m"
              {
#line 126 "handle_options.m"
                libs__handle_options__OpModeArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__OpMode_18, (MR_Integer) 0)));
#line 127 "handle_options.m"
                libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__OpModeArgs_20)) == (MR_mktag((MR_Integer) 1)));
#line 127 "handle_options.m"
                if (libs__handle_options__succeeded)
#line 127 "handle_options.m"
                  {
#line 127 "handle_options.m"
                    libs__handle_options__OpModeAugment_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__OpModeArgs_20, (MR_Integer) 0)));
#line 128 "handle_options.m"
                    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__OpModeAugment_21)) == (MR_mktag((MR_Integer) 1)));
#line 128 "handle_options.m"
                    if (libs__handle_options__succeeded)
#line 128 "handle_options.m"
                      {
#line 128 "handle_options.m"
                        libs__handle_options__OpModeCG_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__OpModeAugment_21, (MR_Integer) 0)));
#line 129 "handle_options.m"
                        libs__handle_options__succeeded = (libs__handle_options__OpModeCG_22 == (MR_Integer) 2);
#line 128 "handle_options.m"
                      }
#line 127 "handle_options.m"
                  }
#line 126 "handle_options.m"
              }
#line 125 "handle_options.m"
          }
#line 124 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 133 "handle_options.m"
          {
#line 133 "handle_options.m"
            {
#line 133 "handle_options.m"
              libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "linking", libs__handle_options__STATE_VARIABLE_Globals_41_41, libs__handle_options__STATE_VARIABLE_Globals_23);
            }
#line 133 "handle_options.m"
          }
#line 124 "handle_options.m"
        else
#line 135 "handle_options.m"
          *libs__handle_options__STATE_VARIABLE_Globals_23 = libs__handle_options__STATE_VARIABLE_Globals_41_41;
#line 121 "handle_options.m"
      }
#line 120 "handle_options.m"
    else
#line 116 "handle_options.m"
      *libs__handle_options__STATE_VARIABLE_Globals_23 = libs__handle_options__STATE_VARIABLE_Globals_41_41;
#line 98 "handle_options.m"
  }
#line 37 "handle_options.m"
}

#line 32 "handle_options.m"
void MR_CALL 
libs__handle_options__generate_default_globals_3_p_0(
#line 32 "handle_options.m"
  MR_Word * libs__handle_options__DefaultGlobals_4)
#line 32 "handle_options.m"
{
#line 95 "handle_options.m"
  {
#line 95 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 96 "handle_options.m"
    MR_Word libs__handle_options__V_6_6;
#line 96 "handle_options.m"
    MR_Word libs__handle_options__V_7_7;
#line 96 "handle_options.m"
    MR_Word libs__handle_options__V_8_8;

#line 96 "handle_options.m"
    {
#line 96 "handle_options.m"
      libs__handle_options__handle_given_options_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__handle_options__V_6_6, &libs__handle_options__V_7_7, &libs__handle_options__V_8_8, libs__handle_options__DefaultGlobals_4);
    }
#line 95 "handle_options.m"
  }
#line 32 "handle_options.m"
}

void mercury__libs__handle_options__init(void)
{
}

void mercury__libs__handle_options__init_type_tables(void)
{
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
