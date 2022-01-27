/*
** Automatically generated from `handle_options.m'
** by the Mercury compiler,
** version 2015-10-27
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


#line 180 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0;

#line 183 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__getopt_io__pti_maybe_option_table_1__plain_libs__options__type_ctor_info_option_0;

#line 186 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct1 libs__handle_options____vpti_pred_1__plain_builtin__type_ctor_info_string_0;

#line 189 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct2 libs__handle_options____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

#line 2095 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2095__1_2_f_0(
#line 2095 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_178,
#line 2095 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1580);

#line 2093 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2093__1_2_f_0(
#line 2093 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_178,
#line 2093 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1574);

#line 2102 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2102__1_1_f_0(
#line 2102 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1569);

#line 2101 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2101__1_1_f_0(
#line 2101 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1564);

#line 2071 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2071__1_2_f_0(
#line 2071 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_178,
#line 2071 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1551);

#line 2067 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2067__1_2_f_0(
#line 2067 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_178,
#line 2067 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1545);

#line 2049 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2049__2_2_p_0(
#line 2049 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1538,
#line 2049 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1684);

#line 2049 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2049__1_2_p_0(
#line 2049 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1539,
#line 2049 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1686);

#line 2031 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2031__1_3_f_0(
#line 2031 "handle_options.m"
  MR_String libs__handle_options__TargetArch_145,
#line 2031 "handle_options.m"
  MR_String libs__handle_options__GradeString_158,
#line 2031 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1526);

#line 1995 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1995__1_2_f_0(
#line 1995 "handle_options.m"
  MR_String libs__handle_options__GradeString_158,
#line 1995 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1507);

#line 1985 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1985__1_2_f_0(
#line 1985 "handle_options.m"
  MR_String libs__handle_options__GradeString_158,
#line 1985 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1497);

#line 1972 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1972__1_2_f_0(
#line 1972 "handle_options.m"
  MR_String libs__handle_options__GradeString_158,
#line 1972 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1480);

#line 1957 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1957__1_2_f_0(
#line 1957 "handle_options.m"
  MR_String libs__handle_options__GradeString_158,
#line 1957 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1465);

#line 2538 "handle_options.m"
static void MR_CALL 
libs__handle_options__raw_lookup_accumulating_option_3_p_0(
#line 2538 "handle_options.m"
  MR_Word libs__handle_options__OptionTable_4,
#line 2538 "handle_options.m"
  MR_Word libs__handle_options__Option_5,
#line 2538 "handle_options.m"
  MR_Word * libs__handle_options__AccumulatingValue_6);

#line 2526 "handle_options.m"
static void MR_CALL 
libs__handle_options__raw_lookup_string_option_3_p_0(
#line 2526 "handle_options.m"
  MR_Word libs__handle_options__OptionTable_4,
#line 2526 "handle_options.m"
  MR_Word libs__handle_options__Option_5,
#line 2526 "handle_options.m"
  MR_String * libs__handle_options__StringValue_6);

#line 2515 "handle_options.m"
static void MR_CALL 
libs__handle_options__raw_lookup_int_option_3_p_0(
#line 2515 "handle_options.m"
  MR_Word libs__handle_options__OptionTable_4,
#line 2515 "handle_options.m"
  MR_Word libs__handle_options__Option_5,
#line 2515 "handle_options.m"
  MR_Integer * libs__handle_options__IntValue_6);

#line 2504 "handle_options.m"
static void MR_CALL 
libs__handle_options__raw_lookup_bool_option_3_p_0(
#line 2504 "handle_options.m"
  MR_Word libs__handle_options__OptionTable_4,
#line 2504 "handle_options.m"
  MR_Word libs__handle_options__Option_5,
#line 2504 "handle_options.m"
  MR_Word * libs__handle_options__BoolValue_6);

#line 2477 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_dump_alias_2_p_0(
#line 2477 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1,
#line 2477 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_2);

#line 2426 "handle_options.m"
static void MR_CALL 
libs__handle_options__unsafe_set_already_printed_usage_1_p_0(
#line 2426 "handle_options.m"
  MR_Word libs__handle_options__X_1);

#line 2426 "handle_options.m"
static void MR_CALL 
libs__handle_options__unsafe_get_already_printed_usage_1_p_0(
#line 2426 "handle_options.m"
  MR_Word * libs__handle_options__X_1);

#line 2426 "handle_options.m"
static void MR_CALL 
libs__handle_options__unlock_already_printed_usage_0_p_0(void);

#line 2426 "handle_options.m"
static void MR_CALL 
libs__handle_options__lock_already_printed_usage_0_p_0(void);

#line 2426 "handle_options.m"
static void MR_CALL 
libs__handle_options__initialise_mutable_already_printed_usage_0_p_0(void);

#line 2426 "handle_options.m"
static void MR_CALL 
libs__handle_options__pre_initialise_mutable_already_printed_usage_0_p_0(void);

#line 2382 "handle_options.m"
static void MR_CALL 
libs__handle_options__disable_smart_recompilation_5_p_0(
#line 2382 "handle_options.m"
  MR_String libs__handle_options__OptionDescr_6,
#line 2382 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2382 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12);

#line 2367 "handle_options.m"
static void MR_CALL 
libs__handle_options__maybe_disable_smart_recompilation_8_p_0(
#line 2367 "handle_options.m"
  MR_Word libs__handle_options__Smart_9,
#line 2367 "handle_options.m"
  MR_Word libs__handle_options__ConflictingOption_10,
#line 2367 "handle_options.m"
  MR_Word libs__handle_options__ValueToDisableSmart_11,
#line 2367 "handle_options.m"
  MR_String libs__handle_options__OptionDescr_12,
#line 2367 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_16,
#line 2367 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_17);

#line 2347 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_requires_7_p_0(
#line 2347 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_8,
#line 2347 "handle_options.m"
  MR_Word libs__handle_options__RequiredOption_9,
#line 2347 "handle_options.m"
  MR_Word libs__handle_options__RequiredOptionValue_10,
#line 2347 "handle_options.m"
  MR_String libs__handle_options__ErrorMessage_11,
#line 2347 "handle_options.m"
  MR_Word libs__handle_options__Globals_12,
#line 2347 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Specs_0_16,
#line 2347 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Specs_17);

#line 2328 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_neg_implies_5_p_0(
#line 2328 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_6,
#line 2328 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOption_7,
#line 2328 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOptionValue_8,
#line 2328 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2328 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12);

#line 2312 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_implies_5_p_0(
#line 2312 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_6,
#line 2312 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOption_7,
#line 2312 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOptionValue_8,
#line 2312 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2312 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12);

#line 2232 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_lowlevel_2_p_0(
#line 2232 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_12,
#line 2232 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_13);

#line 2095 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_13(
#line 2095 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2095 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2093 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_12(
#line 2093 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2093 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2102 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_11(
#line 2102 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2102 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2101 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_10(
#line 2101 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2101 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2071 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_9(
#line 2071 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2071 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2067 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_8(
#line 2067 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2067 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2049 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_7(
#line 2049 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2049 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2049 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_6(
#line 2049 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2049 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2031 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_5(
#line 2031 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2031 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 1995 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_4(
#line 1995 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 1995 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 1985 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_3(
#line 1985 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 1985 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 1972 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_2(
#line 1972 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 1972 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 1957 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_1(
#line 1957 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 1957 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 626 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0(
#line 626 "handle_options.m"
  MR_Word libs__handle_options__OptionTable0_25,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__OpMode_26,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__Target_27,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__GC_Method_28,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__TagsMethod0_29,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__TermNorm_30,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__Term2Norm_31,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__TraceLevel_32,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__TraceSuppress_33,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__SSTraceLevel_34,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__MaybeThreadSafe_35,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__C_CompilerType_36,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__CSharp_CompilerType_37,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__ReuseStrategy_38,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__MaybeFeedbackInfo_39,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__HostEnvType_40,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__SystemEnvType_41,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__TargetEnvType_42,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__LimitErrorContextsMap_43,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Specs_0_206,
#line 626 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Specs_207,
#line 626 "handle_options.m"
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


static /* final */ const MR_Box libs__handle_options_scalar_common_1[168][2];

static /* final */ const MR_Box libs__handle_options_scalar_common_2[6][5];

static /* final */ const MR_Box libs__handle_options_scalar_common_3[11][3];

static /* final */ const MR_Box libs__handle_options_scalar_common_4[2][7];

static /* final */ const MR_Box libs__handle_options_scalar_common_5[2][4];

static /* final */ const MR_Box libs__handle_options_scalar_common_6[9][1];

static /* final */ const MR_Box libs__handle_options_scalar_common_7[2][6];


#line 2480 "handle_options.m"
/* sealed */ struct libs__handle_options__vector_common_type_8_0_s {
#line 2480 "handle_options.m"
  const MR_String libs__handle_options__vector_common_type_8_0__vct_8_f_0;
#line 2480 "handle_options.m"
};

static /* final */ const struct libs__handle_options__vector_common_type_8_0_s libs__handle_options_vector_common_8[20];



static /* final */ const MR_Box libs__handle_options_scalar_common_1[168][2] = {
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
    ((MR_Box) ((MR_String) "must be \140c\', \140java\', \'csharp\', or \140erlang\'."))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to the \140--target\' option;"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "\140accurate\', or \140automatic\'."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be \140none\', \140conservative\', \140boehm\', \140hgc\',"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to the \140--gc\' option;"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be \140none\', \140low\', or \140high\'."))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to the \140--tags\' option;"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be an integer between 1 and 100."))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to the \140--fact-table-hash-percent-full\' option;"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be \140simple\', \140total\', or \140num-data-elems\'."))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "to the \140--termination-norm\' option;"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be \140simple\', \140total\', or \140num-data-elems\')."))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "to the \140--termination2-norm\' option;"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[35])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of the \140--decl_debug\' option."))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not compatible with the value"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[39])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "\140decl\', \140rep\', or \140default\'."))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be \140minimum\', \140shallow\', \140deep\', "))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[43])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to the \140--trace\' option;"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[45])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to the \140--suppress-trace\' option."))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be \140default\', \140none\', \140shallow\', or \140deep\'."))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to the \140--ssdb-trace\' option;"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[51])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be \140no\' or \140yes\'."))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to the \140--maybe-thread-safe\' option;"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[55])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to the \140-D\' (also known as \140--dump-hlds-alias\') option."))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be \140gcc\', \140clang\', \'msvc\', or \140unknown\'."))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to the \140--c-compiler-type\' option;"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[61])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be \140microsoft\', \140mono\', or \140unknown\'."))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to the \140--csharp-compiler-type\' option;"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[65])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be \140same_cons_id\', or \140within_n_cells_difference\'."))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to the \140--structure-reuse-constraint\' option;"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[69])))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be \140posix\', \140cygwin\', \140msys\' or \140windows\')."))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to the \140--host-env-type\' option;"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[73])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to the \140--system-env-type\' option;"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[73])))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be \140posix\', \140cygwin\', \140msys\' or \140windows\'."))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to the \140--target-env-type\' option;"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[79])))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "\140--csharp-compiler-type microsoft\'."))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "\140--host-env-type posix\' is incompatible with"))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[83])))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to the \140--limit-error-contexts\' option."))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Using \140--num-tag-bits 0, which disables tags."))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[89])))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is either unspecified or invalid."))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[90])))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: the value of the \140--num-tag-bits\' option"))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[93]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[92])))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "requires a parallel grade."))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The \140threadscope\' grade component"))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[96])))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Use a low-level C grade without trailing."))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[99]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "supports parallel conjunctions."))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[100])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "requires a grade that"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[102])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The \140--implicit-parallelism\' option"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[104])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "requires the use of \140--feedback-file\'."))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[108])))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_String) "shared")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 111 */
  {
    ((MR_Box) ((MR_String) "static")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[110])))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[111])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is incompatible with the \140--make\' option."))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[113]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The \140--transitive-intermodule-optimization\' option"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[115]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[114])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the \140--intermodule-analysis\' option."))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[117]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is incompatible with"))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[119]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[118])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The \140--intermodule-optimization\' option"))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[120])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the \140--extra-initialization-functions\' option."))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[123]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[119]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[124])))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The \140--generate-standalone-interface\' option"))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[126]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[125])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "at once."))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[128]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "You cannot use both forms of minimal model tabling"))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[130]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[129])))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "high level code."))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[132]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Minimal model tabling is incompatible with"))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[134]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[133])))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "trailing."))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[136]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[134]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[137])))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Deep profiling is incompatible with"))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[139]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[133])))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Cannot record term size as both words and cells."))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[141]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Term size profiling is incompatible with"))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[143]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[133])))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Debugging is available only in low level C grades."))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[145]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "\140--put-nondet-env-on-heap\'."))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[147]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "\140--gc accurate\' is incompatible with"))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[149]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[148])))
  },
  /* row 151 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Invalid argument"))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The specified trace level"))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Invalid arguments"))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[154]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "automatic"))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ".exe"))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "shared"))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: cannot set the value of \140--arg-pack-bits\'"))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to value higher than the value of \140--bits-per-word\'."))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Reducing the effective value of \140--arg-pack-bits\'"))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to the maximum allowable value, which is"))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 164 */
  {
    ((MR_Box) ((MR_String) "c")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 165 */
  {
    ((MR_Box) ((MR_String) "csharp")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 166 */
  {
    ((MR_Box) ((MR_String) "erlang")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 167 */
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
#line 2426 "handle_options.m"
MR_Word libs__handle_options__mutable_variable_already_printed_usage;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__handle_options__mutable_variable_already_printed_usage_lock;
#endif

#line 2426 "handle_options.m"
void 
libs__handle_options__user_init_pred_0(void)
#line 2426 "handle_options.m"
{
#line 2426 "handle_options.m"
	libs__handle_options__initialise_mutable_already_printed_usage_0_p_0();
}


#line 1909 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 1918 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__getopt_io__pti_maybe_option_table_1__plain_libs__options__type_ctor_info_option_0 = {
  &mercury__getopt_io__getopt_io__type_ctor_info_maybe_option_table_1,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0
  }
};

#line 1926 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct1 libs__handle_options____vpti_pred_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1935 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct2 libs__handle_options____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2095 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2095__1_2_f_0(
#line 2095 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_178,
#line 2095 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1580)
#line 2095 "handle_options.m"
{
#line 2095 "handle_options.m"
  {
#line 2095 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2095 "handle_options.m"
    MR_String libs__handle_options__LambdaHeadVar__2_1581;
#line 2095 "handle_options.m"
    MR_String libs__handle_options__V_1582_1582;
#line 2095 "handle_options.m"
    MR_String libs__handle_options__V_1583_1583;
#line 2096 "handle_options.m"
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_178, (MR_Integer) 1)));
#line 2096 "handle_options.m"
    MR_Box libs__handle_options__conv1_V_1583_1583;

#line 2096 "handle_options.m"
    {
#line 2096 "handle_options.m"
      libs__handle_options__conv1_V_1583_1583 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_178), ((MR_Box) (libs__handle_options__LambdaHeadVar__1_1580)));
    }
#line 2096 "handle_options.m"
    libs__handle_options__V_1583_1583 = ((MR_String) libs__handle_options__conv1_V_1583_1583);
#line 2096 "handle_options.m"
    {
#line 2096 "handle_options.m"
      libs__handle_options__V_1582_1582 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1583_1583, (MR_String) "Mercury");
    }
#line 2096 "handle_options.m"
    {
#line 2096 "handle_options.m"
      return libs__handle_options__LambdaHeadVar__2_1581 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1582_1582, (MR_String) "hrls");
    }
#line 2095 "handle_options.m"
    return libs__handle_options__LambdaHeadVar__2_1581;
#line 2095 "handle_options.m"
  }
#line 2095 "handle_options.m"
}

#line 2093 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2093__1_2_f_0(
#line 2093 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_178,
#line 2093 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1574)
#line 2093 "handle_options.m"
{
#line 2093 "handle_options.m"
  {
#line 2093 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2093 "handle_options.m"
    MR_String libs__handle_options__LambdaHeadVar__2_1575;
#line 2093 "handle_options.m"
    MR_String libs__handle_options__V_1576_1576;
#line 2093 "handle_options.m"
    MR_String libs__handle_options__V_1577_1577;
#line 2094 "handle_options.m"
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_178, (MR_Integer) 1)));
#line 2094 "handle_options.m"
    MR_Box libs__handle_options__conv1_V_1577_1577;

#line 2094 "handle_options.m"
    {
#line 2094 "handle_options.m"
      libs__handle_options__conv1_V_1577_1577 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_178), ((MR_Box) (libs__handle_options__LambdaHeadVar__1_1574)));
    }
#line 2094 "handle_options.m"
    libs__handle_options__V_1577_1577 = ((MR_String) libs__handle_options__conv1_V_1577_1577);
#line 2094 "handle_options.m"
    {
#line 2094 "handle_options.m"
      libs__handle_options__V_1576_1576 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1577_1577, (MR_String) "Mercury");
    }
#line 2094 "handle_options.m"
    {
#line 2094 "handle_options.m"
      return libs__handle_options__LambdaHeadVar__2_1575 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1576_1576, (MR_String) "mihs");
    }
#line 2093 "handle_options.m"
    return libs__handle_options__LambdaHeadVar__2_1575;
#line 2093 "handle_options.m"
  }
#line 2093 "handle_options.m"
}

#line 2102 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2102__1_1_f_0(
#line 2102 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1569)
#line 2102 "handle_options.m"
{
#line 2102 "handle_options.m"
  {
#line 2102 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2102 "handle_options.m"
    MR_String libs__handle_options__LambdaHeadVar__2_1570;
#line 2102 "handle_options.m"
    MR_String libs__handle_options__V_1571_1571;

#line 2102 "handle_options.m"
    {
#line 2102 "handle_options.m"
      libs__handle_options__V_1571_1571 = mercury__dir__f_slash_2_f_0(libs__handle_options__LambdaHeadVar__1_1569, (MR_String) "Mercury");
    }
#line 2102 "handle_options.m"
    {
#line 2102 "handle_options.m"
      return libs__handle_options__LambdaHeadVar__2_1570 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1571_1571, (MR_String) "hrls");
    }
#line 2102 "handle_options.m"
    return libs__handle_options__LambdaHeadVar__2_1570;
#line 2102 "handle_options.m"
  }
#line 2102 "handle_options.m"
}

#line 2101 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2101__1_1_f_0(
#line 2101 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1564)
#line 2101 "handle_options.m"
{
#line 2101 "handle_options.m"
  {
#line 2101 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2101 "handle_options.m"
    MR_String libs__handle_options__LambdaHeadVar__2_1565;
#line 2101 "handle_options.m"
    MR_String libs__handle_options__V_1566_1566;

#line 2101 "handle_options.m"
    {
#line 2101 "handle_options.m"
      libs__handle_options__V_1566_1566 = mercury__dir__f_slash_2_f_0(libs__handle_options__LambdaHeadVar__1_1564, (MR_String) "Mercury");
    }
#line 2101 "handle_options.m"
    {
#line 2101 "handle_options.m"
      return libs__handle_options__LambdaHeadVar__2_1565 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1566_1566, (MR_String) "mihs");
    }
#line 2101 "handle_options.m"
    return libs__handle_options__LambdaHeadVar__2_1565;
#line 2101 "handle_options.m"
  }
#line 2101 "handle_options.m"
}

#line 2071 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2071__1_2_f_0(
#line 2071 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_178,
#line 2071 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1551)
#line 2071 "handle_options.m"
{
#line 2071 "handle_options.m"
  {
#line 2071 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2071 "handle_options.m"
    MR_String libs__handle_options__LambdaHeadVar__2_1552;
#line 2071 "handle_options.m"
    MR_String libs__handle_options__V_1553_1553;
#line 2071 "handle_options.m"
    MR_String libs__handle_options__V_1554_1554;
#line 2072 "handle_options.m"
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_178, (MR_Integer) 1)));
#line 2072 "handle_options.m"
    MR_Box libs__handle_options__conv1_V_1554_1554;

#line 2072 "handle_options.m"
    {
#line 2072 "handle_options.m"
      libs__handle_options__conv1_V_1554_1554 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_178), ((MR_Box) (libs__handle_options__LambdaHeadVar__1_1551)));
    }
#line 2072 "handle_options.m"
    libs__handle_options__V_1554_1554 = ((MR_String) libs__handle_options__conv1_V_1554_1554);
#line 2072 "handle_options.m"
    {
#line 2072 "handle_options.m"
      libs__handle_options__V_1553_1553 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1554_1554, (MR_String) "Mercury");
    }
#line 2072 "handle_options.m"
    {
#line 2072 "handle_options.m"
      return libs__handle_options__LambdaHeadVar__2_1552 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1553_1553, (MR_String) "inits");
    }
#line 2071 "handle_options.m"
    return libs__handle_options__LambdaHeadVar__2_1552;
#line 2071 "handle_options.m"
  }
#line 2071 "handle_options.m"
}

#line 2067 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2067__1_2_f_0(
#line 2067 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_178,
#line 2067 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1545)
#line 2067 "handle_options.m"
{
#line 2067 "handle_options.m"
  {
#line 2067 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2067 "handle_options.m"
    MR_String libs__handle_options__LambdaHeadVar__2_1546;
#line 2067 "handle_options.m"
    MR_String libs__handle_options__V_1547_1547;
#line 2067 "handle_options.m"
    MR_String libs__handle_options__V_1548_1548;
#line 2067 "handle_options.m"
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_178, (MR_Integer) 1)));
#line 2067 "handle_options.m"
    MR_Box libs__handle_options__conv1_V_1548_1548;

#line 2067 "handle_options.m"
    {
#line 2067 "handle_options.m"
      libs__handle_options__conv1_V_1548_1548 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_178), ((MR_Box) (libs__handle_options__LambdaHeadVar__1_1545)));
    }
#line 2067 "handle_options.m"
    libs__handle_options__V_1548_1548 = ((MR_String) libs__handle_options__conv1_V_1548_1548);
#line 2067 "handle_options.m"
    {
#line 2067 "handle_options.m"
      libs__handle_options__V_1547_1547 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1548_1548, (MR_String) "Mercury");
    }
#line 2067 "handle_options.m"
    {
#line 2067 "handle_options.m"
      return libs__handle_options__LambdaHeadVar__2_1546 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1547_1547, (MR_String) "lib");
    }
#line 2067 "handle_options.m"
    return libs__handle_options__LambdaHeadVar__2_1546;
#line 2067 "handle_options.m"
  }
#line 2067 "handle_options.m"
}

#line 2049 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2049__2_2_p_0(
#line 2049 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1538,
#line 2049 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1684)
#line 2049 "handle_options.m"
{
#line 2049 "handle_options.m"
  {
#line 2049 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2049 "handle_options.m"
    {
#line 2049 "handle_options.m"
      return libs__handle_options__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__HeadVar__1_1538, ((MR_Box) (libs__handle_options__HeadVar__2_1684)));
    }
#line 2049 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2049 "handle_options.m"
  }
#line 2049 "handle_options.m"
}

#line 2049 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2049__1_2_p_0(
#line 2049 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1539,
#line 2049 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1686)
#line 2049 "handle_options.m"
{
#line 2049 "handle_options.m"
  {
#line 2049 "handle_options.m"
    MR_bool libs__handle_options__succeeded = (strcmp(libs__handle_options__HeadVar__1_1539, libs__handle_options__HeadVar__2_1686) == 0);

#line 2049 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2049 "handle_options.m"
  }
#line 2049 "handle_options.m"
}

#line 2031 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2031__1_3_f_0(
#line 2031 "handle_options.m"
  MR_String libs__handle_options__TargetArch_145,
#line 2031 "handle_options.m"
  MR_String libs__handle_options__GradeString_158,
#line 2031 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1526)
#line 2031 "handle_options.m"
{
#line 2031 "handle_options.m"
  {
#line 2031 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2031 "handle_options.m"
    MR_String libs__handle_options__LambdaHeadVar__2_1527;
#line 2031 "handle_options.m"
    MR_String libs__handle_options__V_1528_1528;
#line 2031 "handle_options.m"
    MR_String libs__handle_options__V_1529_1529;

#line 2031 "handle_options.m"
    {
#line 2031 "handle_options.m"
      libs__handle_options__V_1529_1529 = mercury__dir__f_slash_2_f_0(libs__handle_options__LambdaHeadVar__1_1526, (MR_String) "Mercury");
    }
#line 2031 "handle_options.m"
    {
#line 2031 "handle_options.m"
      libs__handle_options__V_1528_1528 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1529_1529, libs__handle_options__GradeString_158);
    }
#line 2031 "handle_options.m"
    {
#line 2031 "handle_options.m"
      return libs__handle_options__LambdaHeadVar__2_1527 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1528_1528, libs__handle_options__TargetArch_145);
    }
#line 2031 "handle_options.m"
    return libs__handle_options__LambdaHeadVar__2_1527;
#line 2031 "handle_options.m"
  }
#line 2031 "handle_options.m"
}

#line 1995 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1995__1_2_f_0(
#line 1995 "handle_options.m"
  MR_String libs__handle_options__GradeString_158,
#line 1995 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1507)
#line 1995 "handle_options.m"
{
#line 1995 "handle_options.m"
  {
#line 1995 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 1995 "handle_options.m"
    MR_String libs__handle_options__LambdaHeadVar__2_1508;
#line 1995 "handle_options.m"
    MR_String libs__handle_options__V_1509_1509;

#line 1997 "handle_options.m"
    {
#line 1997 "handle_options.m"
      libs__handle_options__V_1509_1509 = mercury__dir__f_slash_2_f_0(libs__handle_options__LambdaHeadVar__1_1507, (MR_String) "modules");
    }
#line 1997 "handle_options.m"
    {
#line 1997 "handle_options.m"
      return libs__handle_options__LambdaHeadVar__2_1508 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1509_1509, libs__handle_options__GradeString_158);
    }
#line 1995 "handle_options.m"
    return libs__handle_options__LambdaHeadVar__2_1508;
#line 1995 "handle_options.m"
  }
#line 1995 "handle_options.m"
}

#line 1985 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1985__1_2_f_0(
#line 1985 "handle_options.m"
  MR_String libs__handle_options__GradeString_158,
#line 1985 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1497)
#line 1985 "handle_options.m"
{
#line 1985 "handle_options.m"
  {
#line 1985 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 1985 "handle_options.m"
    MR_String libs__handle_options__LambdaHeadVar__2_1498;
#line 1985 "handle_options.m"
    MR_String libs__handle_options__V_1499_1499;

#line 1988 "handle_options.m"
    {
#line 1988 "handle_options.m"
      libs__handle_options__V_1499_1499 = mercury__dir__make_path_name_2_f_0((MR_String) "ints", libs__handle_options__GradeString_158);
    }
#line 1987 "handle_options.m"
    {
#line 1987 "handle_options.m"
      return libs__handle_options__LambdaHeadVar__2_1498 = mercury__dir__make_path_name_2_f_0(libs__handle_options__LambdaHeadVar__1_1497, libs__handle_options__V_1499_1499);
    }
#line 1985 "handle_options.m"
    return libs__handle_options__LambdaHeadVar__2_1498;
#line 1985 "handle_options.m"
  }
#line 1985 "handle_options.m"
}

#line 1972 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1972__1_2_f_0(
#line 1972 "handle_options.m"
  MR_String libs__handle_options__GradeString_158,
#line 1972 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1480)
#line 1972 "handle_options.m"
{
#line 1972 "handle_options.m"
  {
#line 1972 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 1972 "handle_options.m"
    MR_String libs__handle_options__LambdaHeadVar__2_1481;
#line 1972 "handle_options.m"
    MR_String libs__handle_options__V_1482_1482;
#line 1972 "handle_options.m"
    MR_String libs__handle_options__V_1483_1483;

#line 1974 "handle_options.m"
    {
#line 1974 "handle_options.m"
      libs__handle_options__V_1483_1483 = mercury__dir__f_slash_2_f_0(libs__handle_options__LambdaHeadVar__1_1480, (MR_String) "lib");
    }
#line 1974 "handle_options.m"
    {
#line 1974 "handle_options.m"
      libs__handle_options__V_1482_1482 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1483_1483, libs__handle_options__GradeString_158);
    }
#line 1974 "handle_options.m"
    {
#line 1974 "handle_options.m"
      return libs__handle_options__LambdaHeadVar__2_1481 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1482_1482, (MR_String) "inc");
    }
#line 1972 "handle_options.m"
    return libs__handle_options__LambdaHeadVar__2_1481;
#line 1972 "handle_options.m"
  }
#line 1972 "handle_options.m"
}

#line 1957 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1957__1_2_f_0(
#line 1957 "handle_options.m"
  MR_String libs__handle_options__GradeString_158,
#line 1957 "handle_options.m"
  MR_String libs__handle_options__LambdaHeadVar__1_1465)
#line 1957 "handle_options.m"
{
#line 1957 "handle_options.m"
  {
#line 1957 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 1957 "handle_options.m"
    MR_String libs__handle_options__LambdaHeadVar__2_1466;
#line 1957 "handle_options.m"
    MR_String libs__handle_options__V_1467_1467;

#line 1959 "handle_options.m"
    {
#line 1959 "handle_options.m"
      libs__handle_options__V_1467_1467 = mercury__dir__f_slash_2_f_0(libs__handle_options__LambdaHeadVar__1_1465, (MR_String) "lib");
    }
#line 1959 "handle_options.m"
    {
#line 1959 "handle_options.m"
      return libs__handle_options__LambdaHeadVar__2_1466 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1467_1467, libs__handle_options__GradeString_158);
    }
#line 1957 "handle_options.m"
    return libs__handle_options__LambdaHeadVar__2_1466;
#line 1957 "handle_options.m"
  }
#line 1957 "handle_options.m"
}

#line 2538 "handle_options.m"
static void MR_CALL 
libs__handle_options__raw_lookup_accumulating_option_3_p_0(
#line 2538 "handle_options.m"
  MR_Word libs__handle_options__OptionTable_4,
#line 2538 "handle_options.m"
  MR_Word libs__handle_options__Option_5,
#line 2538 "handle_options.m"
  MR_Word * libs__handle_options__AccumulatingValue_6)
#line 2538 "handle_options.m"
{
#line 2541 "handle_options.m"
  {
#line 2541 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2541 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_14_14 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
#line 2541 "handle_options.m"
    MR_Word libs__handle_options__OptionValue_7;
#line 2542 "handle_options.m"
    MR_Box libs__handle_options__conv0_OptionValue_7;
#line 2545 "handle_options.m"
    MR_Word libs__handle_options__AccumulatingValuePrime_8;

#line 2542 "handle_options.m"
    {
#line 2542 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_14_14, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__handle_options__OptionTable_4, ((MR_Box) (libs__handle_options__Option_5)), &libs__handle_options__conv0_OptionValue_7);
    }
#line 2542 "handle_options.m"
    libs__handle_options__OptionValue_7 = ((MR_Word) libs__handle_options__conv0_OptionValue_7);
#line 2543 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__OptionValue_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__OptionValue_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 2543 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2543 "handle_options.m"
      {
#line 2543 "handle_options.m"
        libs__handle_options__AccumulatingValuePrime_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__OptionValue_7, (MR_Integer) 1)));
#line 2544 "handle_options.m"
        *libs__handle_options__AccumulatingValue_6 = libs__handle_options__AccumulatingValuePrime_8;
#line 2543 "handle_options.m"
      }
#line 2543 "handle_options.m"
    else
#line 2546 "handle_options.m"
      {
#line 2546 "handle_options.m"
        MR_String libs__handle_options__OptionStr_9;
#line 2546 "handle_options.m"
        MR_String libs__handle_options__V_12_12;

#line 2546 "handle_options.m"
        {
#line 2546 "handle_options.m"
          libs__handle_options__OptionStr_9 = mercury__string__string_1_f_0(libs__handle_options__TypeCtorInfo_14_14, ((MR_Box) (libs__handle_options__Option_5)));
        }
#line 2547 "handle_options.m"
        {
#line 2547 "handle_options.m"
          libs__handle_options__V_12_12 = mercury__string__f_43_43_2_f_0(libs__handle_options__OptionStr_9, (MR_String) "is not accumulating");
        }
#line 2547 "handle_options.m"
        {
#line 2547 "handle_options.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.handle_options", (MR_String) "predicate \140libs.handle_options.raw_lookup_accumulating_option\'/3", libs__handle_options__V_12_12);
#line 2547 "handle_options.m"
          return;
        }
#line 2546 "handle_options.m"
      }
#line 2541 "handle_options.m"
  }
#line 2538 "handle_options.m"
}

#line 2526 "handle_options.m"
static void MR_CALL 
libs__handle_options__raw_lookup_string_option_3_p_0(
#line 2526 "handle_options.m"
  MR_Word libs__handle_options__OptionTable_4,
#line 2526 "handle_options.m"
  MR_Word libs__handle_options__Option_5,
#line 2526 "handle_options.m"
  MR_String * libs__handle_options__StringValue_6)
#line 2526 "handle_options.m"
{
#line 2529 "handle_options.m"
  {
#line 2529 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2529 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_14_14 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
#line 2529 "handle_options.m"
    MR_Word libs__handle_options__OptionValue_7;
#line 2530 "handle_options.m"
    MR_Box libs__handle_options__conv0_OptionValue_7;
#line 2533 "handle_options.m"
    MR_String libs__handle_options__StringValuePrime_8;

#line 2530 "handle_options.m"
    {
#line 2530 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_14_14, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__handle_options__OptionTable_4, ((MR_Box) (libs__handle_options__Option_5)), &libs__handle_options__conv0_OptionValue_7);
    }
#line 2530 "handle_options.m"
    libs__handle_options__OptionValue_7 = ((MR_Word) libs__handle_options__conv0_OptionValue_7);
#line 2531 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__OptionValue_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__OptionValue_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 2531 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2531 "handle_options.m"
      {
#line 2531 "handle_options.m"
        libs__handle_options__StringValuePrime_8 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__OptionValue_7, (MR_Integer) 1)));
#line 2532 "handle_options.m"
        *libs__handle_options__StringValue_6 = libs__handle_options__StringValuePrime_8;
#line 2531 "handle_options.m"
      }
#line 2531 "handle_options.m"
    else
#line 2534 "handle_options.m"
      {
#line 2534 "handle_options.m"
        MR_String libs__handle_options__OptionStr_9;
#line 2534 "handle_options.m"
        MR_String libs__handle_options__V_12_12;

#line 2534 "handle_options.m"
        {
#line 2534 "handle_options.m"
          libs__handle_options__OptionStr_9 = mercury__string__string_1_f_0(libs__handle_options__TypeCtorInfo_14_14, ((MR_Box) (libs__handle_options__Option_5)));
        }
#line 2535 "handle_options.m"
        {
#line 2535 "handle_options.m"
          libs__handle_options__V_12_12 = mercury__string__f_43_43_2_f_0(libs__handle_options__OptionStr_9, (MR_String) "is not a string");
        }
#line 2535 "handle_options.m"
        {
#line 2535 "handle_options.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.handle_options", (MR_String) "predicate \140libs.handle_options.raw_lookup_string_option\'/3", libs__handle_options__V_12_12);
#line 2535 "handle_options.m"
          return;
        }
#line 2534 "handle_options.m"
      }
#line 2529 "handle_options.m"
  }
#line 2526 "handle_options.m"
}

#line 2515 "handle_options.m"
static void MR_CALL 
libs__handle_options__raw_lookup_int_option_3_p_0(
#line 2515 "handle_options.m"
  MR_Word libs__handle_options__OptionTable_4,
#line 2515 "handle_options.m"
  MR_Word libs__handle_options__Option_5,
#line 2515 "handle_options.m"
  MR_Integer * libs__handle_options__IntValue_6)
#line 2515 "handle_options.m"
{
#line 2517 "handle_options.m"
  {
#line 2517 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2517 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_14_14 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
#line 2517 "handle_options.m"
    MR_Word libs__handle_options__OptionValue_7;
#line 2518 "handle_options.m"
    MR_Box libs__handle_options__conv0_OptionValue_7;
#line 2521 "handle_options.m"
    MR_Integer libs__handle_options__IntValuePrime_8;

#line 2518 "handle_options.m"
    {
#line 2518 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_14_14, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__handle_options__OptionTable_4, ((MR_Box) (libs__handle_options__Option_5)), &libs__handle_options__conv0_OptionValue_7);
    }
#line 2518 "handle_options.m"
    libs__handle_options__OptionValue_7 = ((MR_Word) libs__handle_options__conv0_OptionValue_7);
#line 2519 "handle_options.m"
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__OptionValue_7)) == (MR_mktag((MR_Integer) 2)));
#line 2519 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2519 "handle_options.m"
      {
#line 2519 "handle_options.m"
        libs__handle_options__IntValuePrime_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), libs__handle_options__OptionValue_7, (MR_Integer) 0)));
#line 2520 "handle_options.m"
        *libs__handle_options__IntValue_6 = libs__handle_options__IntValuePrime_8;
#line 2519 "handle_options.m"
      }
#line 2519 "handle_options.m"
    else
#line 2522 "handle_options.m"
      {
#line 2522 "handle_options.m"
        MR_String libs__handle_options__OptionStr_9;
#line 2522 "handle_options.m"
        MR_String libs__handle_options__V_12_12;

#line 2522 "handle_options.m"
        {
#line 2522 "handle_options.m"
          libs__handle_options__OptionStr_9 = mercury__string__string_1_f_0(libs__handle_options__TypeCtorInfo_14_14, ((MR_Box) (libs__handle_options__Option_5)));
        }
#line 2523 "handle_options.m"
        {
#line 2523 "handle_options.m"
          libs__handle_options__V_12_12 = mercury__string__f_43_43_2_f_0(libs__handle_options__OptionStr_9, (MR_String) "is not an int");
        }
#line 2523 "handle_options.m"
        {
#line 2523 "handle_options.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.handle_options", (MR_String) "predicate \140libs.handle_options.raw_lookup_int_option\'/3", libs__handle_options__V_12_12);
#line 2523 "handle_options.m"
          return;
        }
#line 2522 "handle_options.m"
      }
#line 2517 "handle_options.m"
  }
#line 2515 "handle_options.m"
}

#line 2504 "handle_options.m"
static void MR_CALL 
libs__handle_options__raw_lookup_bool_option_3_p_0(
#line 2504 "handle_options.m"
  MR_Word libs__handle_options__OptionTable_4,
#line 2504 "handle_options.m"
  MR_Word libs__handle_options__Option_5,
#line 2504 "handle_options.m"
  MR_Word * libs__handle_options__BoolValue_6)
#line 2504 "handle_options.m"
{
#line 2506 "handle_options.m"
  {
#line 2506 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2506 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_14_14 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
#line 2506 "handle_options.m"
    MR_Word libs__handle_options__OptionValue_7;
#line 2507 "handle_options.m"
    MR_Box libs__handle_options__conv0_OptionValue_7;
#line 2510 "handle_options.m"
    MR_Word libs__handle_options__BoolValuePrime_8;

#line 2507 "handle_options.m"
    {
#line 2507 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_14_14, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__handle_options__OptionTable_4, ((MR_Box) (libs__handle_options__Option_5)), &libs__handle_options__conv0_OptionValue_7);
    }
#line 2507 "handle_options.m"
    libs__handle_options__OptionValue_7 = ((MR_Word) libs__handle_options__conv0_OptionValue_7);
#line 2508 "handle_options.m"
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__OptionValue_7)) == (MR_mktag((MR_Integer) 1)));
#line 2508 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2508 "handle_options.m"
      {
#line 2508 "handle_options.m"
        libs__handle_options__BoolValuePrime_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__OptionValue_7, (MR_Integer) 0)));
#line 2509 "handle_options.m"
        *libs__handle_options__BoolValue_6 = libs__handle_options__BoolValuePrime_8;
#line 2508 "handle_options.m"
      }
#line 2508 "handle_options.m"
    else
#line 2511 "handle_options.m"
      {
#line 2511 "handle_options.m"
        MR_String libs__handle_options__OptionStr_9;
#line 2511 "handle_options.m"
        MR_String libs__handle_options__V_12_12;

#line 2511 "handle_options.m"
        {
#line 2511 "handle_options.m"
          libs__handle_options__OptionStr_9 = mercury__string__string_1_f_0(libs__handle_options__TypeCtorInfo_14_14, ((MR_Box) (libs__handle_options__Option_5)));
        }
#line 2512 "handle_options.m"
        {
#line 2512 "handle_options.m"
          libs__handle_options__V_12_12 = mercury__string__f_43_43_2_f_0(libs__handle_options__OptionStr_9, (MR_String) "is not a bool");
        }
#line 2512 "handle_options.m"
        {
#line 2512 "handle_options.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.handle_options", (MR_String) "predicate \140libs.handle_options.raw_lookup_bool_option\'/3", libs__handle_options__V_12_12);
#line 2512 "handle_options.m"
          return;
        }
#line 2511 "handle_options.m"
      }
#line 2506 "handle_options.m"
  }
#line 2504 "handle_options.m"
}

#line 2477 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_dump_alias_2_p_0(
#line 2477 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1,
#line 2477 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_2)
#line 2477 "handle_options.m"
{
#line 2480 "handle_options.m"
  {
#line 2480 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2480 "handle_options.m"
    {
#line 2480 "handle_options.m"
      MR_Integer libs__handle_options__case_num_0 = (MR_Integer) -1;

#line 2480 "handle_options.m"
#line 2480 "handle_options.m"
      switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 0)) {
#line 2480 "handle_options.m"
        case (MR_Integer) 65:
#line 2480 "handle_options.m"
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "ALL"))
#line 2480 "handle_options.m"
            libs__handle_options__case_num_0 = (MR_Integer) 0;
#line 2480 "handle_options.m"
          break;
#line 2480 "handle_options.m"
        case (MR_Integer) 97:
#line 2480 "handle_options.m"
          if (((((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) == (MR_Integer) 108)) && (((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) == (MR_Integer) 108))))
#line 2480 "handle_options.m"
#line 2480 "handle_options.m"
            switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 3)) {
#line 2480 "handle_options.m"
              case (MR_Integer) 0:
#line 2480 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 1;
#line 2480 "handle_options.m"
                break;
#line 2480 "handle_options.m"
              case (MR_Integer) 68:
#line 2480 "handle_options.m"
                if (MR_offset_streq(4, libs__handle_options__HeadVar__1_1, (MR_String) "allD"))
#line 2480 "handle_options.m"
                  libs__handle_options__case_num_0 = (MR_Integer) 2;
#line 2480 "handle_options.m"
                break;
#line 2480 "handle_options.m"
            }
#line 2480 "handle_options.m"
          break;
#line 2480 "handle_options.m"
        case (MR_Integer) 99:
#line 2480 "handle_options.m"
#line 2480 "handle_options.m"
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
#line 2480 "handle_options.m"
            case (MR_Integer) 109:
#line 2480 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "cmp"))
#line 2480 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 3;
#line 2480 "handle_options.m"
              break;
#line 2480 "handle_options.m"
            case (MR_Integer) 111:
#line 2480 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "codegen"))
#line 2480 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 4;
#line 2480 "handle_options.m"
              break;
#line 2480 "handle_options.m"
            case (MR_Integer) 116:
#line 2480 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "ctgc"))
#line 2480 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 5;
#line 2480 "handle_options.m"
              break;
#line 2480 "handle_options.m"
          }
#line 2480 "handle_options.m"
          break;
#line 2480 "handle_options.m"
        case (MR_Integer) 100:
#line 2480 "handle_options.m"
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "detism"))
#line 2480 "handle_options.m"
            libs__handle_options__case_num_0 = (MR_Integer) 6;
#line 2480 "handle_options.m"
          break;
#line 2480 "handle_options.m"
        case (MR_Integer) 108:
#line 2480 "handle_options.m"
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "lco"))
#line 2480 "handle_options.m"
            libs__handle_options__case_num_0 = (MR_Integer) 7;
#line 2480 "handle_options.m"
          break;
#line 2480 "handle_options.m"
        case (MR_Integer) 109:
#line 2480 "handle_options.m"
#line 2480 "handle_options.m"
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
#line 2480 "handle_options.m"
            case (MR_Integer) 105:
#line 2480 "handle_options.m"
              if (((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) == (MR_Integer) 110))
#line 2480 "handle_options.m"
#line 2480 "handle_options.m"
                switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 3)) {
#line 2480 "handle_options.m"
                  case (MR_Integer) 0:
#line 2480 "handle_options.m"
                    libs__handle_options__case_num_0 = (MR_Integer) 8;
#line 2480 "handle_options.m"
                    break;
#line 2480 "handle_options.m"
                  case (MR_Integer) 116:
#line 2480 "handle_options.m"
                    if (MR_offset_streq(4, libs__handle_options__HeadVar__1_1, (MR_String) "mintrans"))
#line 2480 "handle_options.m"
                      libs__handle_options__case_num_0 = (MR_Integer) 9;
#line 2480 "handle_options.m"
                    break;
#line 2480 "handle_options.m"
                }
#line 2480 "handle_options.m"
              break;
#line 2480 "handle_options.m"
            case (MR_Integer) 109:
#line 2480 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "mm"))
#line 2480 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 10;
#line 2480 "handle_options.m"
              break;
#line 2480 "handle_options.m"
            case (MR_Integer) 111:
#line 2480 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "most"))
#line 2480 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 11;
#line 2480 "handle_options.m"
              break;
#line 2480 "handle_options.m"
          }
#line 2480 "handle_options.m"
          break;
#line 2480 "handle_options.m"
        case (MR_Integer) 111:
#line 2480 "handle_options.m"
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "osv"))
#line 2480 "handle_options.m"
            libs__handle_options__case_num_0 = (MR_Integer) 12;
#line 2480 "handle_options.m"
          break;
#line 2480 "handle_options.m"
        case (MR_Integer) 112:
#line 2480 "handle_options.m"
#line 2480 "handle_options.m"
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
#line 2480 "handle_options.m"
            case (MR_Integer) 97:
#line 2480 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "paths"))
#line 2480 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 13;
#line 2480 "handle_options.m"
              break;
#line 2480 "handle_options.m"
            case (MR_Integer) 101:
#line 2480 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "petdr"))
#line 2480 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 14;
#line 2480 "handle_options.m"
              break;
#line 2480 "handle_options.m"
            case (MR_Integer) 111:
#line 2480 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "poly"))
#line 2480 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 15;
#line 2480 "handle_options.m"
              break;
#line 2480 "handle_options.m"
          }
#line 2480 "handle_options.m"
          break;
#line 2480 "handle_options.m"
        case (MR_Integer) 115:
#line 2480 "handle_options.m"
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "statevar"))
#line 2480 "handle_options.m"
            libs__handle_options__case_num_0 = (MR_Integer) 16;
#line 2480 "handle_options.m"
          break;
#line 2480 "handle_options.m"
        case (MR_Integer) 116:
#line 2480 "handle_options.m"
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "trans"))
#line 2480 "handle_options.m"
            libs__handle_options__case_num_0 = (MR_Integer) 17;
#line 2480 "handle_options.m"
          break;
#line 2480 "handle_options.m"
        case (MR_Integer) 118:
#line 2480 "handle_options.m"
          if (((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) == (MR_Integer) 97))
#line 2480 "handle_options.m"
#line 2480 "handle_options.m"
            switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) {
#line 2480 "handle_options.m"
              case (MR_Integer) 110:
#line 2480 "handle_options.m"
                if (MR_offset_streq(3, libs__handle_options__HeadVar__1_1, (MR_String) "vanessa"))
#line 2480 "handle_options.m"
                  libs__handle_options__case_num_0 = (MR_Integer) 18;
#line 2480 "handle_options.m"
                break;
#line 2480 "handle_options.m"
              case (MR_Integer) 114:
#line 2480 "handle_options.m"
                if (MR_offset_streq(3, libs__handle_options__HeadVar__1_1, (MR_String) "vars"))
#line 2480 "handle_options.m"
                  libs__handle_options__case_num_0 = (MR_Integer) 19;
#line 2480 "handle_options.m"
                break;
#line 2480 "handle_options.m"
            }
#line 2480 "handle_options.m"
          break;
#line 2480 "handle_options.m"
      }
#line 2480 "handle_options.m"
      if ((libs__handle_options__case_num_0 < (MR_Integer) 0))
#line 2480 "handle_options.m"
        libs__handle_options__succeeded = MR_FALSE;
#line 2480 "handle_options.m"
      else
#line 2480 "handle_options.m"
        {
#line 2480 "handle_options.m"
          /* we found a match; look up the results */
#line 2480 "handle_options.m"
          *libs__handle_options__HeadVar__2_2 = ((&libs__handle_options_vector_common_8[0 + libs__handle_options__case_num_0]))->libs__handle_options__vector_common_type_8_0__vct_8_f_0;
#line 2480 "handle_options.m"
          libs__handle_options__succeeded = MR_TRUE;
#line 2480 "handle_options.m"
        }
#line 2480 "handle_options.m"
    }
#line 2480 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2480 "handle_options.m"
  }
#line 2477 "handle_options.m"
}

#line 2426 "handle_options.m"
static void MR_CALL 
libs__handle_options__unsafe_set_already_printed_usage_1_p_0(
#line 2426 "handle_options.m"
  MR_Word libs__handle_options__X_1)
#line 2426 "handle_options.m"
{
#line 2426 "handle_options.m"
  {
#line 2426 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2426 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__unsafe_set_already_printed_usage_1_p_0

	MR_Word X;

	X =  libs__handle_options__X_1 ;
		{
#line 2426 "handle_options.m"
libs__handle_options__mutable_variable_already_printed_usage = X;

#line 3033 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2426 "handle_options.m"
}
#line 2426 "handle_options.m"
  }
#line 2426 "handle_options.m"
}

#line 2426 "handle_options.m"
static void MR_CALL 
libs__handle_options__unsafe_get_already_printed_usage_1_p_0(
#line 2426 "handle_options.m"
  MR_Word * libs__handle_options__X_1)
#line 2426 "handle_options.m"
{
#line 2426 "handle_options.m"
  {
#line 2426 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2426 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__unsafe_get_already_printed_usage_1_p_0

	MR_Word X;

		{
#line 2426 "handle_options.m"
X = libs__handle_options__mutable_variable_already_printed_usage;

#line 3066 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
	 *libs__handle_options__X_1  = X;
#line 2426 "handle_options.m"
}
#line 2426 "handle_options.m"
  }
#line 2426 "handle_options.m"
}

#line 2426 "handle_options.m"
static void MR_CALL 
libs__handle_options__unlock_already_printed_usage_0_p_0(void)
#line 2426 "handle_options.m"
{
#line 2426 "handle_options.m"
  {
#line 2426 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2426 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__unlock_already_printed_usage_0_p_0


		{
#line 2426 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 3100 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2426 "handle_options.m"
}
#line 2426 "handle_options.m"
  }
#line 2426 "handle_options.m"
}

#line 2426 "handle_options.m"
static void MR_CALL 
libs__handle_options__lock_already_printed_usage_0_p_0(void)
#line 2426 "handle_options.m"
{
#line 2426 "handle_options.m"
  {
#line 2426 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2426 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__lock_already_printed_usage_0_p_0


		{
#line 2426 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 3133 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2426 "handle_options.m"
}
#line 2426 "handle_options.m"
  }
#line 2426 "handle_options.m"
}

#line 2426 "handle_options.m"
static void MR_CALL 
libs__handle_options__initialise_mutable_already_printed_usage_0_p_0(void)
#line 2426 "handle_options.m"
{
#line 2426 "handle_options.m"
  {
#line 2426 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2426 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0


		{
#line 2426 "handle_options.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__handle_options__mutable_variable_already_printed_usage_lock, MR_MUTEX_ATTR);
#endif

#line 3165 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2426 "handle_options.m"
}
#line 2426 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0


		{
#line 2426 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 3183 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2426 "handle_options.m"
}
#line 2426 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 2426 "handle_options.m"
libs__handle_options__mutable_variable_already_printed_usage = X;

#line 3200 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2426 "handle_options.m"
}
#line 2426 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0


		{
#line 2426 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 3218 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2426 "handle_options.m"
}
#line 2426 "handle_options.m"
  }
#line 2426 "handle_options.m"
}

#line 2426 "handle_options.m"
static void MR_CALL 
libs__handle_options__pre_initialise_mutable_already_printed_usage_0_p_0(void)
#line 2426 "handle_options.m"
{
#line 2426 "handle_options.m"
  {
#line 2426 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2426 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__pre_initialise_mutable_already_printed_usage_0_p_0


		{
#line 2426 "handle_options.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__handle_options__mutable_variable_already_printed_usage_lock, MR_MUTEX_ATTR);
#endif

#line 3250 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2426 "handle_options.m"
}
#line 2426 "handle_options.m"
  }
#line 2426 "handle_options.m"
}

#line 2382 "handle_options.m"
static void MR_CALL 
libs__handle_options__disable_smart_recompilation_5_p_0(
#line 2382 "handle_options.m"
  MR_String libs__handle_options__OptionDescr_6,
#line 2382 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2382 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12)
#line 2382 "handle_options.m"
{
#line 2385 "handle_options.m"
  {
#line 2385 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2385 "handle_options.m"
    MR_Word libs__handle_options__WarnSmart_9;

#line 2386 "handle_options.m"
    {
#line 2386 "handle_options.m"
      libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
    }
#line 2387 "handle_options.m"
    {
#line 2387 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 115, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]), libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__STATE_VARIABLE_Globals_12);
    }
#line 2388 "handle_options.m"
    {
#line 2388 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_12, (MR_Integer) 23, &libs__handle_options__WarnSmart_9);
    }
#line 2402 "handle_options.m"
#line 2402 "handle_options.m"
    switch (libs__handle_options__WarnSmart_9) {
#line 2402 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2402 "handle_options.m"
      case (MR_Integer) 0:
#line 2403 "handle_options.m"
        {
#line 2403 "handle_options.m"
        }
#line 2402 "handle_options.m"
        break;
#line 2402 "handle_options.m"
      case (MR_Integer) 1:
#line 2390 "handle_options.m"
        {
#line 2390 "handle_options.m"
          MR_Word libs__handle_options__Halt_10;

#line 2391 "handle_options.m"
          {
#line 2391 "handle_options.m"
            mercury__io__write_string_3_p_0((MR_String) "Warning: smart recompilation does not yet work with ");
          }
#line 2393 "handle_options.m"
          {
#line 2393 "handle_options.m"
            mercury__io__write_string_3_p_0(libs__handle_options__OptionDescr_6);
          }
#line 2394 "handle_options.m"
          {
#line 2394 "handle_options.m"
            mercury__io__write_string_3_p_0((MR_String) ".\n");
          }
#line 2395 "handle_options.m"
          {
#line 2395 "handle_options.m"
            libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_12, (MR_Integer) 2, &libs__handle_options__Halt_10);
          }
#line 2399 "handle_options.m"
#line 2399 "handle_options.m"
          switch (libs__handle_options__Halt_10) {
#line 2399 "handle_options.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 2399 "handle_options.m"
            case (MR_Integer) 0:
#line 2400 "handle_options.m"
              {
#line 2400 "handle_options.m"
              }
#line 2399 "handle_options.m"
              break;
#line 2399 "handle_options.m"
            case (MR_Integer) 1:
#line 2397 "handle_options.m"
              {
#line 2398 "handle_options.m"
                {
#line 2398 "handle_options.m"
                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 2398 "handle_options.m"
                  return;
                }
#line 2397 "handle_options.m"
              }
#line 2399 "handle_options.m"
              break;
#line 2399 "handle_options.m"
          }
#line 2390 "handle_options.m"
        }
#line 2402 "handle_options.m"
        break;
#line 2402 "handle_options.m"
    }
#line 2385 "handle_options.m"
  }
#line 2382 "handle_options.m"
}

#line 2367 "handle_options.m"
static void MR_CALL 
libs__handle_options__maybe_disable_smart_recompilation_8_p_0(
#line 2367 "handle_options.m"
  MR_Word libs__handle_options__Smart_9,
#line 2367 "handle_options.m"
  MR_Word libs__handle_options__ConflictingOption_10,
#line 2367 "handle_options.m"
  MR_Word libs__handle_options__ValueToDisableSmart_11,
#line 2367 "handle_options.m"
  MR_String libs__handle_options__OptionDescr_12,
#line 2367 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_16,
#line 2367 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_17)
#line 2367 "handle_options.m"
{
#line 2371 "handle_options.m"
  {
#line 2371 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2371 "handle_options.m"
    MR_Word libs__handle_options__Value_15;

#line 2372 "handle_options.m"
    {
#line 2372 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_16, libs__handle_options__ConflictingOption_10, &libs__handle_options__Value_15);
    }
#line 2374 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__Smart_9 == (MR_Integer) 1);
#line 2374 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2375 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__Value_15 == libs__handle_options__ValueToDisableSmart_11);
#line 2378 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2385 "handle_options.m"
      {
#line 2385 "handle_options.m"
        MR_Word libs__handle_options__WarnSmart_29;

#line 2386 "handle_options.m"
        {
#line 2386 "handle_options.m"
          libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
        }
#line 2387 "handle_options.m"
        {
#line 2387 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 115, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]), libs__handle_options__STATE_VARIABLE_Globals_0_16, libs__handle_options__STATE_VARIABLE_Globals_17);
        }
#line 2388 "handle_options.m"
        {
#line 2388 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_17, (MR_Integer) 23, &libs__handle_options__WarnSmart_29);
        }
#line 2402 "handle_options.m"
#line 2402 "handle_options.m"
        switch (libs__handle_options__WarnSmart_29) {
#line 2402 "handle_options.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2402 "handle_options.m"
          case (MR_Integer) 0:
#line 2403 "handle_options.m"
            {
#line 2403 "handle_options.m"
            }
#line 2402 "handle_options.m"
            break;
#line 2402 "handle_options.m"
          case (MR_Integer) 1:
#line 2390 "handle_options.m"
            {
#line 2390 "handle_options.m"
              MR_Word libs__handle_options__Halt_30;

#line 2391 "handle_options.m"
              {
#line 2391 "handle_options.m"
                mercury__io__write_string_3_p_0((MR_String) "Warning: smart recompilation does not yet work with ");
              }
#line 2393 "handle_options.m"
              {
#line 2393 "handle_options.m"
                mercury__io__write_string_3_p_0(libs__handle_options__OptionDescr_12);
              }
#line 2394 "handle_options.m"
              {
#line 2394 "handle_options.m"
                mercury__io__write_string_3_p_0((MR_String) ".\n");
              }
#line 2395 "handle_options.m"
              {
#line 2395 "handle_options.m"
                libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_17, (MR_Integer) 2, &libs__handle_options__Halt_30);
              }
#line 2399 "handle_options.m"
#line 2399 "handle_options.m"
              switch (libs__handle_options__Halt_30) {
#line 2399 "handle_options.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 2399 "handle_options.m"
                case (MR_Integer) 0:
#line 2400 "handle_options.m"
                  {
#line 2400 "handle_options.m"
                  }
#line 2399 "handle_options.m"
                  break;
#line 2399 "handle_options.m"
                case (MR_Integer) 1:
#line 2397 "handle_options.m"
                  {
#line 2398 "handle_options.m"
                    {
#line 2398 "handle_options.m"
                      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 2398 "handle_options.m"
                      return;
                    }
#line 2397 "handle_options.m"
                  }
#line 2399 "handle_options.m"
                  break;
#line 2399 "handle_options.m"
              }
#line 2390 "handle_options.m"
            }
#line 2402 "handle_options.m"
            break;
#line 2402 "handle_options.m"
        }
#line 2385 "handle_options.m"
      }
#line 2378 "handle_options.m"
    else
#line 2379 "handle_options.m"
      *libs__handle_options__STATE_VARIABLE_Globals_17 = libs__handle_options__STATE_VARIABLE_Globals_0_16;
#line 2371 "handle_options.m"
  }
#line 2367 "handle_options.m"
}

#line 2347 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_requires_7_p_0(
#line 2347 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_8,
#line 2347 "handle_options.m"
  MR_Word libs__handle_options__RequiredOption_9,
#line 2347 "handle_options.m"
  MR_Word libs__handle_options__RequiredOptionValue_10,
#line 2347 "handle_options.m"
  MR_String libs__handle_options__ErrorMessage_11,
#line 2347 "handle_options.m"
  MR_Word libs__handle_options__Globals_12,
#line 2347 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Specs_0_16,
#line 2347 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Specs_17)
#line 2347 "handle_options.m"
{
#line 2351 "handle_options.m"
  {
#line 2351 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2351 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_14;
#line 2351 "handle_options.m"
    MR_Word libs__handle_options__OptionValue_15;

#line 2352 "handle_options.m"
    {
#line 2352 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__Globals_12, libs__handle_options__SourceOption_8, &libs__handle_options__SourceOptionValue_14);
    }
#line 2353 "handle_options.m"
    {
#line 2353 "handle_options.m"
      libs__globals__lookup_option_3_p_0(libs__handle_options__Globals_12, libs__handle_options__RequiredOption_9, &libs__handle_options__OptionValue_15);
    }
#line 2355 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__SourceOptionValue_14 == (MR_Integer) 1);
#line 2355 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2355 "handle_options.m"
      {
#line 2356 "handle_options.m"
        {
#line 2356 "handle_options.m"
          libs__handle_options__succeeded = mercury__getopt_io____Unify____option_data_0_0(libs__handle_options__OptionValue_15, libs__handle_options__RequiredOptionValue_10);
        }
#line 2356 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 2355 "handle_options.m"
      }
#line 2359 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2358 "handle_options.m"
      {
#line 2358 "handle_options.m"
        MR_Word libs__handle_options__V_19_19;
#line 2358 "handle_options.m"
        MR_Word libs__handle_options__V_21_21;

#line 2358 "handle_options.m"
        {
#line 2358 "handle_options.m"
          libs__handle_options__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2358 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 2358 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_21_21, 1) = ((MR_Box) (libs__handle_options__ErrorMessage_11));
#line 2358 "handle_options.m"
        }
#line 2358 "handle_options.m"
        {
#line 2358 "handle_options.m"
          libs__handle_options__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2358 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_19_19, 0) = ((MR_Box) (libs__handle_options__V_21_21));
#line 2358 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2358 "handle_options.m"
        }
#line 2358 "handle_options.m"
        {
#line 2358 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__V_19_19, libs__handle_options__STATE_VARIABLE_Specs_0_16, libs__handle_options__STATE_VARIABLE_Specs_17);
#line 2358 "handle_options.m"
          return;
        }
#line 2358 "handle_options.m"
      }
#line 2359 "handle_options.m"
    else
#line 2359 "handle_options.m"
      *libs__handle_options__STATE_VARIABLE_Specs_17 = libs__handle_options__STATE_VARIABLE_Specs_0_16;
#line 2351 "handle_options.m"
  }
#line 2347 "handle_options.m"
}

#line 2328 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_neg_implies_5_p_0(
#line 2328 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_6,
#line 2328 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOption_7,
#line 2328 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOptionValue_8,
#line 2328 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2328 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12)
#line 2328 "handle_options.m"
{
#line 2332 "handle_options.m"
  {
#line 2332 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2332 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_10;

#line 2333 "handle_options.m"
    {
#line 2333 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__SourceOption_6, &libs__handle_options__SourceOptionValue_10);
    }
#line 2336 "handle_options.m"
#line 2336 "handle_options.m"
    switch (libs__handle_options__SourceOptionValue_10) {
#line 2336 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2336 "handle_options.m"
      case (MR_Integer) 0:
#line 2338 "handle_options.m"
        {
#line 2338 "handle_options.m"
          libs__globals__set_option_4_p_0(libs__handle_options__ImpliedOption_7, libs__handle_options__ImpliedOptionValue_8, libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__STATE_VARIABLE_Globals_12);
#line 2338 "handle_options.m"
          return;
        }
#line 2336 "handle_options.m"
        break;
#line 2336 "handle_options.m"
      case (MR_Integer) 1:
#line 2335 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_Globals_12 = libs__handle_options__STATE_VARIABLE_Globals_0_11;
#line 2336 "handle_options.m"
        break;
#line 2336 "handle_options.m"
    }
#line 2332 "handle_options.m"
  }
#line 2328 "handle_options.m"
}

#line 2312 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_implies_5_p_0(
#line 2312 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_6,
#line 2312 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOption_7,
#line 2312 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOptionValue_8,
#line 2312 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2312 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12)
#line 2312 "handle_options.m"
{
#line 2315 "handle_options.m"
  {
#line 2315 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2315 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_10;

#line 2316 "handle_options.m"
    {
#line 2316 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__SourceOption_6, &libs__handle_options__SourceOptionValue_10);
    }
#line 2320 "handle_options.m"
#line 2320 "handle_options.m"
    switch (libs__handle_options__SourceOptionValue_10) {
#line 2320 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2320 "handle_options.m"
      case (MR_Integer) 0:
#line 2321 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_Globals_12 = libs__handle_options__STATE_VARIABLE_Globals_0_11;
#line 2320 "handle_options.m"
        break;
#line 2320 "handle_options.m"
      case (MR_Integer) 1:
#line 2319 "handle_options.m"
        {
#line 2319 "handle_options.m"
          libs__globals__set_option_4_p_0(libs__handle_options__ImpliedOption_7, libs__handle_options__ImpliedOptionValue_8, libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__STATE_VARIABLE_Globals_12);
#line 2319 "handle_options.m"
          return;
        }
#line 2320 "handle_options.m"
        break;
#line 2320 "handle_options.m"
    }
#line 2315 "handle_options.m"
  }
#line 2312 "handle_options.m"
}

#line 2232 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_lowlevel_2_p_0(
#line 2232 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_12,
#line 2232 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_13)
#line 2232 "handle_options.m"
{
#line 2234 "handle_options.m"
  {
#line 2234 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2234 "handle_options.m"
    MR_Word libs__handle_options__OptFrames_4;
#line 2234 "handle_options.m"
    MR_Word libs__handle_options__OptLocalVars_5;
#line 2234 "handle_options.m"
    MR_Integer libs__handle_options__OptRepeat_6;
#line 2234 "handle_options.m"
    MR_Word libs__handle_options__UnboxedFloat_7;
#line 2234 "handle_options.m"
    MR_Word libs__handle_options__StaticGroundFloats_8;
#line 2234 "handle_options.m"
    MR_Word libs__handle_options__NonLocalGotos_9;
#line 2234 "handle_options.m"
    MR_Word libs__handle_options__AsmLabels_10;
#line 2234 "handle_options.m"
    MR_Word libs__handle_options__StaticCodeAddrs_11;
#line 2234 "handle_options.m"
    MR_Word libs__handle_options__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[3]);
#line 2234 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_17_17;
#line 2234 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_22_22;
#line 2234 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_27_27;
#line 2234 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_32_32;
#line 2234 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_40_40;
#line 2234 "handle_options.m"
    MR_Word libs__handle_options__V_44_44;
#line 2234 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_45_45;
#line 2234 "handle_options.m"
    MR_Word libs__handle_options__V_49_49;
#line 2234 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_57;
#line 2234 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_65;
#line 2234 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_73;
#line 2234 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_81;
#line 2254 "handle_options.m"
    MR_Integer libs__handle_options__V_37_37;

#line 2316 "handle_options.m"
    {
#line 2316 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_12, (MR_Integer) 364, &libs__handle_options__SourceOptionValue_57);
    }
#line 2320 "handle_options.m"
#line 2320 "handle_options.m"
    switch (libs__handle_options__SourceOptionValue_57) {
#line 2320 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2320 "handle_options.m"
      case (MR_Integer) 0:
#line 2321 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_17_17 = libs__handle_options__STATE_VARIABLE_Globals_0_12;
#line 2320 "handle_options.m"
        break;
#line 2320 "handle_options.m"
      case (MR_Integer) 1:
#line 2319 "handle_options.m"
        {
#line 2319 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 462, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_0_12, &libs__handle_options__STATE_VARIABLE_Globals_17_17);
        }
#line 2320 "handle_options.m"
        break;
#line 2320 "handle_options.m"
    }
#line 2316 "handle_options.m"
    {
#line 2316 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_17_17, (MR_Integer) 468, &libs__handle_options__SourceOptionValue_65);
    }
#line 2320 "handle_options.m"
#line 2320 "handle_options.m"
    switch (libs__handle_options__SourceOptionValue_65) {
#line 2320 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2320 "handle_options.m"
      case (MR_Integer) 0:
#line 2321 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_22_22 = libs__handle_options__STATE_VARIABLE_Globals_17_17;
#line 2320 "handle_options.m"
        break;
#line 2320 "handle_options.m"
      case (MR_Integer) 1:
#line 2319 "handle_options.m"
        {
#line 2319 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 465, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_17_17, &libs__handle_options__STATE_VARIABLE_Globals_22_22);
        }
#line 2320 "handle_options.m"
        break;
#line 2320 "handle_options.m"
    }
#line 2316 "handle_options.m"
    {
#line 2316 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_22_22, (MR_Integer) 468, &libs__handle_options__SourceOptionValue_73);
    }
#line 2320 "handle_options.m"
#line 2320 "handle_options.m"
    switch (libs__handle_options__SourceOptionValue_73) {
#line 2320 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2320 "handle_options.m"
      case (MR_Integer) 0:
#line 2321 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_27_27 = libs__handle_options__STATE_VARIABLE_Globals_22_22;
#line 2320 "handle_options.m"
        break;
#line 2320 "handle_options.m"
      case (MR_Integer) 1:
#line 2319 "handle_options.m"
        {
#line 2319 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 458, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_22_22, &libs__handle_options__STATE_VARIABLE_Globals_27_27);
        }
#line 2320 "handle_options.m"
        break;
#line 2320 "handle_options.m"
    }
#line 2316 "handle_options.m"
    {
#line 2316 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_27_27, (MR_Integer) 467, &libs__handle_options__SourceOptionValue_81);
    }
#line 2320 "handle_options.m"
#line 2320 "handle_options.m"
    switch (libs__handle_options__SourceOptionValue_81) {
#line 2320 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2320 "handle_options.m"
      case (MR_Integer) 0:
#line 2321 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_32_32 = libs__handle_options__STATE_VARIABLE_Globals_27_27;
#line 2320 "handle_options.m"
        break;
#line 2320 "handle_options.m"
      case (MR_Integer) 1:
#line 2319 "handle_options.m"
        {
#line 2319 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 296, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_27_27, &libs__handle_options__STATE_VARIABLE_Globals_32_32);
        }
#line 2320 "handle_options.m"
        break;
#line 2320 "handle_options.m"
    }
#line 2248 "handle_options.m"
    {
#line 2248 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_32_32, (MR_Integer) 468, &libs__handle_options__OptFrames_4);
    }
#line 2249 "handle_options.m"
    {
#line 2249 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_32_32, (MR_Integer) 462, &libs__handle_options__OptLocalVars_5);
    }
#line 2250 "handle_options.m"
    {
#line 2250 "handle_options.m"
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_32_32, (MR_Integer) 471, &libs__handle_options__OptRepeat_6);
    }
#line 2252 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__OptFrames_4 == (MR_Integer) 1);
#line 2253 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 2253 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__OptLocalVars_5 == (MR_Integer) 1);
#line 2254 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2254 "handle_options.m"
      {
#line 2255 "handle_options.m"
        libs__handle_options__V_37_37 = (MR_Integer) 1;
#line 2255 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__OptRepeat_6 < libs__handle_options__V_37_37);
#line 2254 "handle_options.m"
      }
#line 2262 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2261 "handle_options.m"
      {
#line 2261 "handle_options.m"
        {
#line 2261 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 471, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[8]), libs__handle_options__STATE_VARIABLE_Globals_32_32, &libs__handle_options__STATE_VARIABLE_Globals_40_40);
        }
#line 2261 "handle_options.m"
      }
#line 2262 "handle_options.m"
    else
#line 2262 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_40_40 = libs__handle_options__STATE_VARIABLE_Globals_32_32;
#line 2268 "handle_options.m"
    {
#line 2268 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_40_40, (MR_Integer) 240, &libs__handle_options__UnboxedFloat_7);
    }
#line 2274 "handle_options.m"
#line 2274 "handle_options.m"
    switch (libs__handle_options__UnboxedFloat_7) {
#line 2274 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2274 "handle_options.m"
      case (MR_Integer) 0:
#line 2283 "handle_options.m"
        libs__handle_options__StaticGroundFloats_8 = (MR_Integer) 1;
#line 2274 "handle_options.m"
        break;
#line 2274 "handle_options.m"
      case (MR_Integer) 1:
#line 2273 "handle_options.m"
        libs__handle_options__StaticGroundFloats_8 = (MR_Integer) 1;
#line 2274 "handle_options.m"
        break;
#line 2274 "handle_options.m"
    }
#line 2285 "handle_options.m"
    {
#line 2285 "handle_options.m"
      libs__handle_options__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2285 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_44_44, 0) = ((MR_Box) (libs__handle_options__StaticGroundFloats_8));
#line 2285 "handle_options.m"
    }
#line 2285 "handle_options.m"
    {
#line 2285 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 443, libs__handle_options__V_44_44, libs__handle_options__STATE_VARIABLE_Globals_40_40, &libs__handle_options__STATE_VARIABLE_Globals_45_45);
    }
#line 2290 "handle_options.m"
    {
#line 2290 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_45_45, (MR_Integer) 246, &libs__handle_options__NonLocalGotos_9);
    }
#line 2291 "handle_options.m"
    {
#line 2291 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_45_45, (MR_Integer) 248, &libs__handle_options__AsmLabels_10);
    }
#line 2293 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__NonLocalGotos_9 == (MR_Integer) 1);
#line 2293 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2294 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__AsmLabels_10 == (MR_Integer) 0);
#line 2302 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2301 "handle_options.m"
      libs__handle_options__StaticCodeAddrs_11 = (MR_Integer) 0;
#line 2302 "handle_options.m"
    else
#line 2303 "handle_options.m"
      libs__handle_options__StaticCodeAddrs_11 = (MR_Integer) 1;
#line 2305 "handle_options.m"
    {
#line 2305 "handle_options.m"
      libs__handle_options__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2305 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_49_49, 0) = ((MR_Box) (libs__handle_options__StaticCodeAddrs_11));
#line 2305 "handle_options.m"
    }
#line 2305 "handle_options.m"
    {
#line 2305 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 444, libs__handle_options__V_49_49, libs__handle_options__STATE_VARIABLE_Globals_45_45, libs__handle_options__STATE_VARIABLE_Globals_13);
#line 2305 "handle_options.m"
      return;
    }
#line 2234 "handle_options.m"
  }
#line 2232 "handle_options.m"
}

#line 2095 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_13(
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
    MR_String libs__handle_options__conv10_LambdaHeadVar__2_1581;

#line 2095 "handle_options.m"
    {
#line 2095 "handle_options.m"
      libs__handle_options__conv10_LambdaHeadVar__2_1581 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2095__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2095 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv10_LambdaHeadVar__2_1581));
#line 2095 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2095 "handle_options.m"
  }
#line 2095 "handle_options.m"
}

#line 2093 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_12(
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
    MR_String libs__handle_options__conv9_LambdaHeadVar__2_1575;

#line 2093 "handle_options.m"
    {
#line 2093 "handle_options.m"
      libs__handle_options__conv9_LambdaHeadVar__2_1575 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2093__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2093 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv9_LambdaHeadVar__2_1575));
#line 2093 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2093 "handle_options.m"
  }
#line 2093 "handle_options.m"
}

#line 2102 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_11(
#line 2102 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2102 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2102 "handle_options.m"
{
#line 2102 "handle_options.m"
  {
#line 2102 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2102 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2102 "handle_options.m"
    MR_String libs__handle_options__conv8_LambdaHeadVar__2_1570;

#line 2102 "handle_options.m"
    {
#line 2102 "handle_options.m"
      libs__handle_options__conv8_LambdaHeadVar__2_1570 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2102__1_1_f_0(((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2102 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv8_LambdaHeadVar__2_1570));
#line 2102 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2102 "handle_options.m"
  }
#line 2102 "handle_options.m"
}

#line 2101 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_10(
#line 2101 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2101 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2101 "handle_options.m"
{
#line 2101 "handle_options.m"
  {
#line 2101 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2101 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2101 "handle_options.m"
    MR_String libs__handle_options__conv7_LambdaHeadVar__2_1565;

#line 2101 "handle_options.m"
    {
#line 2101 "handle_options.m"
      libs__handle_options__conv7_LambdaHeadVar__2_1565 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2101__1_1_f_0(((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2101 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv7_LambdaHeadVar__2_1565));
#line 2101 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2101 "handle_options.m"
  }
#line 2101 "handle_options.m"
}

#line 2071 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_9(
#line 2071 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2071 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2071 "handle_options.m"
{
#line 2071 "handle_options.m"
  {
#line 2071 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2071 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2071 "handle_options.m"
    MR_String libs__handle_options__conv6_LambdaHeadVar__2_1552;

#line 2071 "handle_options.m"
    {
#line 2071 "handle_options.m"
      libs__handle_options__conv6_LambdaHeadVar__2_1552 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2071__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2071 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv6_LambdaHeadVar__2_1552));
#line 2071 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2071 "handle_options.m"
  }
#line 2071 "handle_options.m"
}

#line 2067 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_8(
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
    MR_String libs__handle_options__conv5_LambdaHeadVar__2_1546;

#line 2067 "handle_options.m"
    {
#line 2067 "handle_options.m"
      libs__handle_options__conv5_LambdaHeadVar__2_1546 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2067__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2067 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv5_LambdaHeadVar__2_1546));
#line 2067 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2067 "handle_options.m"
  }
#line 2067 "handle_options.m"
}

#line 2049 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_7(
#line 2049 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2049 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2049 "handle_options.m"
{
#line 2049 "handle_options.m"
  {
#line 2049 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2049 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2049 "handle_options.m"
    {
#line 2049 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2049__2_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2049 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2049 "handle_options.m"
  }
#line 2049 "handle_options.m"
}

#line 2049 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_6(
#line 2049 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2049 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2049 "handle_options.m"
{
#line 2049 "handle_options.m"
  {
#line 2049 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2049 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2049 "handle_options.m"
    {
#line 2049 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2049__1_2_p_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2049 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2049 "handle_options.m"
  }
#line 2049 "handle_options.m"
}

#line 2031 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_5(
#line 2031 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2031 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2031 "handle_options.m"
{
#line 2031 "handle_options.m"
  {
#line 2031 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2031 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2031 "handle_options.m"
    MR_String libs__handle_options__conv4_LambdaHeadVar__2_1527;

#line 2031 "handle_options.m"
    {
#line 2031 "handle_options.m"
      libs__handle_options__conv4_LambdaHeadVar__2_1527 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2031__1_3_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 4))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2031 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv4_LambdaHeadVar__2_1527));
#line 2031 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2031 "handle_options.m"
  }
#line 2031 "handle_options.m"
}

#line 1995 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_4(
#line 1995 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 1995 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 1995 "handle_options.m"
{
#line 1995 "handle_options.m"
  {
#line 1995 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 1995 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 1995 "handle_options.m"
    MR_String libs__handle_options__conv3_LambdaHeadVar__2_1508;

#line 1995 "handle_options.m"
    {
#line 1995 "handle_options.m"
      libs__handle_options__conv3_LambdaHeadVar__2_1508 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1995__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 1995 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv3_LambdaHeadVar__2_1508));
#line 1995 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 1995 "handle_options.m"
  }
#line 1995 "handle_options.m"
}

#line 1985 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_3(
#line 1985 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 1985 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 1985 "handle_options.m"
{
#line 1985 "handle_options.m"
  {
#line 1985 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 1985 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 1985 "handle_options.m"
    MR_String libs__handle_options__conv2_LambdaHeadVar__2_1498;

#line 1985 "handle_options.m"
    {
#line 1985 "handle_options.m"
      libs__handle_options__conv2_LambdaHeadVar__2_1498 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1985__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 1985 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv2_LambdaHeadVar__2_1498));
#line 1985 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 1985 "handle_options.m"
  }
#line 1985 "handle_options.m"
}

#line 1972 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_2(
#line 1972 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 1972 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 1972 "handle_options.m"
{
#line 1972 "handle_options.m"
  {
#line 1972 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 1972 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 1972 "handle_options.m"
    MR_String libs__handle_options__conv1_LambdaHeadVar__2_1481;

#line 1972 "handle_options.m"
    {
#line 1972 "handle_options.m"
      libs__handle_options__conv1_LambdaHeadVar__2_1481 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1972__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 1972 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv1_LambdaHeadVar__2_1481));
#line 1972 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 1972 "handle_options.m"
  }
#line 1972 "handle_options.m"
}

#line 1957 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_1(
#line 1957 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 1957 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 1957 "handle_options.m"
{
#line 1957 "handle_options.m"
  {
#line 1957 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 1957 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 1957 "handle_options.m"
    MR_String libs__handle_options__conv0_LambdaHeadVar__2_1466;

#line 1957 "handle_options.m"
    {
#line 1957 "handle_options.m"
      libs__handle_options__conv0_LambdaHeadVar__2_1466 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1957__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 1957 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv0_LambdaHeadVar__2_1466));
#line 1957 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 1957 "handle_options.m"
  }
#line 1957 "handle_options.m"
}

#line 626 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0(
#line 626 "handle_options.m"
  MR_Word libs__handle_options__OptionTable0_25,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__OpMode_26,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__Target_27,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__GC_Method_28,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__TagsMethod0_29,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__TermNorm_30,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__Term2Norm_31,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__TraceLevel_32,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__TraceSuppress_33,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__SSTraceLevel_34,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__MaybeThreadSafe_35,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__C_CompilerType_36,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__CSharp_CompilerType_37,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__ReuseStrategy_38,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__MaybeFeedbackInfo_39,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__HostEnvType_40,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__SystemEnvType_41,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__TargetEnvType_42,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__LimitErrorContextsMap_43,
#line 626 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Specs_0_206,
#line 626 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Specs_207,
#line 626 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_208)
#line 626 "handle_options.m"
{
#line 642 "handle_options.m"
  {
#line 642 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_1680_1680 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
#line 642 "handle_options.m"
    MR_String libs__handle_options__InstallCmd_47;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__FileInstallCmd_48;
#line 642 "handle_options.m"
    MR_String libs__handle_options__EventSetFileName0_50;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__GCIsConservative_53;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__PregeneratedDist_54;
#line 642 "handle_options.m"
    MR_Integer libs__handle_options__NumTagBits0_55;
#line 642 "handle_options.m"
    MR_Integer libs__handle_options__NumTagBits1_56;
#line 642 "handle_options.m"
    MR_Integer libs__handle_options__NumTagBits_57;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__TagsMethod_59;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__GradeSupportsParConj_60;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__Parallel_61;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__Threadscope_62;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__ImplicitParallelism_64;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__LibLinkages0_68;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__TransOpt_71;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__InterModOpt_76;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__InterModAnalysis_77;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__MaybeStandaloneInt_79;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__ExtraInitFunctions_80;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__Smart_83;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__VeryVerbose_84;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__Statistics_85;
#line 642 "handle_options.m"
    MR_Integer libs__handle_options__DebugLiveness_86;
#line 642 "handle_options.m"
    MR_Integer libs__handle_options__DebugModesPredId_90;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__DebugUnneededCodePredNames_91;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__DebugOptPredIdStrs_94;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__DebugOptPredNames_95;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__DebugIntermoduleAnalysis_100;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__DumpHLDSPredIds_101;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__UseTrail_107;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__HighLevelCode_108;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__UseMinimalModelStackCopy_109;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__UseMinimalModelOwnStacks_110;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__UseMinimalModel_111;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__ProfOptimized_119;
#line 642 "handle_options.m"
    MR_String libs__handle_options__ExpComp_120;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__TraceOptimized_121;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__TraceLevelIsNone_122;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__ProfileDeep_124;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__RecordTermSizesAsWords_128;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__RecordTermSizesAsCells_129;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__PutNondetEnvOnHeap_133;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__DisablePneg_135;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__DisableCut_136;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__DumpHLDSStages_137;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__DumpTraceStages_138;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__ParallelLiveness_139;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__ParallelCodeGen_140;
#line 642 "handle_options.m"
    MR_String libs__handle_options__TargetArch_145;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__MaybeStdLibDir_146;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__MaybeConfDir_152;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__ConfigFile_155;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__MercuryLibDirs_157;
#line 642 "handle_options.m"
    MR_String libs__handle_options__GradeString_158;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__UseSearchDirs_172;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__UseGradeSubdirs_175;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__SearchLibFilesDirs_176;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__IntermodDirs2_177;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__ToGradeSubdir_178;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__LinkLibDirs_187;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__InitDirs_190;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__UseSubdirs_191;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__BackendForeignLanguages_201;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__CurrentBackendForeignLanguage_202;
#line 642 "handle_options.m"
    MR_Integer libs__handle_options__CompareSpec_205;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_213_213;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_214_214;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_220_220;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_227_227;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_248_248;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_267_267;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__V_269_269;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_270_270;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_271_271;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_283_283;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_303_303;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_315_315;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__V_318_318;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_319_319;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_323_323;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_448_448;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_453_453;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__V_457_457;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_458_458;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_463_463;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__V_467_467;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_468_468;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_473_473;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_478_478;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_483_483;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_488_488;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_493_493;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_498_498;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_507_507;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_512_512;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_517_517;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_522_522;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_527_527;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_541_541;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_556_556;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_559_559;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_575_575;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_579_579;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_584_584;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_589_589;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_594_594;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_599_599;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_604_604;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_609_609;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_614_614;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_619_619;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_624_624;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_629_629;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_634_634;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_638_638;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_643_643;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_648_648;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_653_653;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_658_658;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_663_663;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_668_668;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_673_673;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_678_678;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_683_683;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_688_688;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_693_693;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_698_698;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_703_703;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_708_708;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_713_713;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_718_718;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_723_723;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_728_728;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_733_733;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_738_738;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_743_743;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_748_748;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_753_753;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_759_759;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_764_764;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_769_769;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_774_774;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_779_779;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_784_784;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_790_790;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_795_795;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_800_800;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_805_805;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_813_813;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_817_817;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_823_823;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_828_828;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_834_834;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_846_846;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_850_850;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_855_855;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_860_860;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_865_865;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_880_880;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__V_903_903;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_904_904;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_937_937;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_940_940;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_944_944;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_949_949;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_954_954;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_958_958;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_962_962;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_967_967;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_972_972;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_977_977;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_982_982;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_988_988;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_993_993;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_998_998;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1003_1003;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1008_1008;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1013_1013;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1018_1018;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1023_1023;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1028_1028;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1033_1033;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1038_1038;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1043_1043;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1048_1048;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1141_1141;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1146_1146;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_1158_1158;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1169_1169;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_1179_1179;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1186_1186;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_1205_1205;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1209_1209;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1214_1214;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1219_1219;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1224_1224;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1229_1229;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1234_1234;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1239_1239;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1244_1244;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1288_1288;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1304_1304;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1309_1309;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1314_1314;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1319_1319;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1324_1324;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1329_1329;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1334_1334;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1339_1339;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1344_1344;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1349_1349;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1355_1355;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1359_1359;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1367_1367;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1372_1372;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1377_1377;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1382_1382;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1387_1387;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1392_1392;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1397_1397;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1402_1402;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1407_1407;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1412_1412;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1417_1417;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1422_1422;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1437_1437;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1445_1445;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1457_1457;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1514_1514;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1521_1521;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1542_1542;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__V_1558_1558;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1559_1559;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__V_1561_1561;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1562_1562;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1598_1598;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1602_1602;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_1614_1614;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_1622_1622;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1634_1634;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1645_1645;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1654_1654;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1659_1659;
#line 642 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1665_1665;
#line 1048 "handle_options.m"
    MR_String libs__handle_options__V_81_81;
#line 1211 "handle_options.m"
    MR_String libs__handle_options__AllDumpOptions_87;
#line 1200 "handle_options.m"
    MR_String libs__handle_options__V_809_809;
#line 1936 "handle_options.m"
    MR_String libs__handle_options__V_1450_1450;
#line 2124 "handle_options.m"
    MR_Word libs__handle_options__ToMihsSubdir_192;
#line 2124 "handle_options.m"
    MR_Word libs__handle_options__ToHrlsSubdir_193;
#line 2201 "handle_options.m"
    MR_Integer libs__handle_options__V_1656_1656;

#line 644 "handle_options.m"
    {
#line 644 "handle_options.m"
      mercury__getopt_io__lookup_string_option_3_p_0(libs__handle_options__TypeCtorInfo_1680_1680, libs__handle_options__OptionTable0_25, ((MR_Box) ((MR_Integer) 621)), &libs__handle_options__InstallCmd_47);
    }
#line 645 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__InstallCmd_47, (MR_String) "") == 0);
#line 647 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 646 "handle_options.m"
      libs__handle_options__FileInstallCmd_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 647 "handle_options.m"
    else
#line 649 "handle_options.m"
      {
#line 649 "handle_options.m"
        MR_String libs__handle_options__InstallCmdDirOption_49;

#line 648 "handle_options.m"
        {
#line 648 "handle_options.m"
          mercury__getopt_io__lookup_string_option_3_p_0(libs__handle_options__TypeCtorInfo_1680_1680, libs__handle_options__OptionTable0_25, ((MR_Box) ((MR_Integer) 622)), &libs__handle_options__InstallCmdDirOption_49);
        }
#line 650 "handle_options.m"
        {
#line 650 "handle_options.m"
          libs__handle_options__FileInstallCmd_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 650 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__FileInstallCmd_48, 0) = ((MR_Box) (libs__handle_options__InstallCmd_47));
#line 650 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__FileInstallCmd_48, 1) = ((MR_Box) (libs__handle_options__InstallCmdDirOption_49));
#line 650 "handle_options.m"
        }
#line 649 "handle_options.m"
      }
#line 653 "handle_options.m"
    {
#line 653 "handle_options.m"
      libs__globals__globals_init_21_p_0(libs__handle_options__OptionTable0_25, libs__handle_options__OpMode_26, libs__handle_options__Target_27, libs__handle_options__GC_Method_28, libs__handle_options__TagsMethod0_29, libs__handle_options__TermNorm_30, libs__handle_options__Term2Norm_31, libs__handle_options__TraceLevel_32, libs__handle_options__TraceSuppress_33, libs__handle_options__SSTraceLevel_34, libs__handle_options__MaybeThreadSafe_35, libs__handle_options__C_CompilerType_36, libs__handle_options__CSharp_CompilerType_37, libs__handle_options__ReuseStrategy_38, libs__handle_options__MaybeFeedbackInfo_39, libs__handle_options__HostEnvType_40, libs__handle_options__SystemEnvType_41, libs__handle_options__TargetEnvType_42, libs__handle_options__FileInstallCmd_48, libs__handle_options__LimitErrorContextsMap_43, &libs__handle_options__STATE_VARIABLE_Globals_213_213);
    }
#line 662 "handle_options.m"
    {
#line 662 "handle_options.m"
      libs__compute_grade__check_grade_component_compatibility_5_p_0(libs__handle_options__STATE_VARIABLE_Globals_213_213, libs__handle_options__Target_27, libs__handle_options__GC_Method_28, libs__handle_options__STATE_VARIABLE_Specs_0_206, &libs__handle_options__STATE_VARIABLE_Specs_214_214);
    }
#line 664 "handle_options.m"
    {
#line 664 "handle_options.m"
      libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_213_213, (MR_Integer) 173, &libs__handle_options__EventSetFileName0_50);
    }
#line 666 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__EventSetFileName0_50, (MR_String) "") == 0);
#line 676 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 668 "handle_options.m"
      {
#line 668 "handle_options.m"
        MR_Word libs__handle_options__MaybeEventSetFileName_51;

#line 667 "handle_options.m"
        {
#line 667 "handle_options.m"
          mercury__io__get_environment_var_4_p_0((MR_String) "MERCURY_EVENT_SET_FILE_NAME", &libs__handle_options__MaybeEventSetFileName_51);
        }
#line 673 "handle_options.m"
        if ((libs__handle_options__MaybeEventSetFileName_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 674 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_220_220 = libs__handle_options__STATE_VARIABLE_Globals_213_213;
#line 673 "handle_options.m"
        else
#line 670 "handle_options.m"
          {
#line 670 "handle_options.m"
            MR_String libs__handle_options__EventSetFileName_52 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeEventSetFileName_51, (MR_Integer) 0)));
#line 670 "handle_options.m"
            MR_Word libs__handle_options__V_219_219;

#line 671 "handle_options.m"
            {
#line 671 "handle_options.m"
              libs__handle_options__V_219_219 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 671 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_219_219, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 671 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_219_219, 1) = ((MR_Box) (libs__handle_options__EventSetFileName_52));
#line 671 "handle_options.m"
            }
#line 671 "handle_options.m"
            {
#line 671 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 173, libs__handle_options__V_219_219, libs__handle_options__STATE_VARIABLE_Globals_213_213, &libs__handle_options__STATE_VARIABLE_Globals_220_220);
            }
#line 670 "handle_options.m"
          }
#line 668 "handle_options.m"
      }
#line 676 "handle_options.m"
    else
#line 677 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_220_220 = libs__handle_options__STATE_VARIABLE_Globals_213_213;
#line 681 "handle_options.m"
    {
#line 681 "handle_options.m"
      libs__handle_options__GCIsConservative_53 = libs__globals__gc_is_conservative_1_f_0(libs__handle_options__GC_Method_28);
    }
#line 688 "handle_options.m"
#line 688 "handle_options.m"
    switch (libs__handle_options__GCIsConservative_53) {
#line 688 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 688 "handle_options.m"
      case (MR_Integer) 0:
#line 689 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_227_227 = libs__handle_options__STATE_VARIABLE_Globals_220_220;
#line 688 "handle_options.m"
        break;
#line 688 "handle_options.m"
      case (MR_Integer) 1:
#line 683 "handle_options.m"
        {
#line 683 "handle_options.m"
          MR_Word libs__handle_options__V_222_222 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]);
#line 683 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_223_223;

#line 684 "handle_options.m"
          {
#line 684 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 300, libs__handle_options__V_222_222, libs__handle_options__STATE_VARIABLE_Globals_220_220, &libs__handle_options__STATE_VARIABLE_Globals_223_223);
          }
#line 686 "handle_options.m"
          {
#line 686 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 301, libs__handle_options__V_222_222, libs__handle_options__STATE_VARIABLE_Globals_223_223, &libs__handle_options__STATE_VARIABLE_Globals_227_227);
          }
#line 683 "handle_options.m"
        }
#line 688 "handle_options.m"
        break;
#line 688 "handle_options.m"
    }
#line 694 "handle_options.m"
    {
#line 694 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_227_227, (MR_Integer) 220, &libs__handle_options__PregeneratedDist_54);
    }
#line 702 "handle_options.m"
#line 702 "handle_options.m"
    switch (libs__handle_options__PregeneratedDist_54) {
#line 702 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 702 "handle_options.m"
      case (MR_Integer) 0:
#line 703 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_248_248 = libs__handle_options__STATE_VARIABLE_Globals_227_227;
#line 702 "handle_options.m"
        break;
#line 702 "handle_options.m"
      case (MR_Integer) 1:
#line 696 "handle_options.m"
        {
#line 696 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_232_232;
#line 696 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_236_236;
#line 696 "handle_options.m"
          MR_Word libs__handle_options__V_239_239;
#line 696 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_240_240;
#line 696 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_244_244;

#line 697 "handle_options.m"
          {
#line 697 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 234, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[1]), libs__handle_options__STATE_VARIABLE_Globals_227_227, &libs__handle_options__STATE_VARIABLE_Globals_232_232);
          }
#line 698 "handle_options.m"
          {
#line 698 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 243, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[2]), libs__handle_options__STATE_VARIABLE_Globals_232_232, &libs__handle_options__STATE_VARIABLE_Globals_236_236);
          }
#line 699 "handle_options.m"
          libs__handle_options__V_239_239 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]);
#line 699 "handle_options.m"
          {
#line 699 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 240, libs__handle_options__V_239_239, libs__handle_options__STATE_VARIABLE_Globals_236_236, &libs__handle_options__STATE_VARIABLE_Globals_240_240);
          }
#line 700 "handle_options.m"
          {
#line 700 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 221, libs__handle_options__V_239_239, libs__handle_options__STATE_VARIABLE_Globals_240_240, &libs__handle_options__STATE_VARIABLE_Globals_244_244);
          }
#line 701 "handle_options.m"
          {
#line 701 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 244, libs__handle_options__V_239_239, libs__handle_options__STATE_VARIABLE_Globals_244_244, &libs__handle_options__STATE_VARIABLE_Globals_248_248);
          }
#line 696 "handle_options.m"
        }
#line 702 "handle_options.m"
        break;
#line 702 "handle_options.m"
    }
#line 710 "handle_options.m"
#line 710 "handle_options.m"
    switch (libs__handle_options__TagsMethod0_29) {
#line 710 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 710 "handle_options.m"
      case (MR_Integer) 2:
#line 710 "handle_options.m"
      case (MR_Integer) 1:
#line 713 "handle_options.m"
        {
#line 714 "handle_options.m"
          {
#line 714 "handle_options.m"
            libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_248_248, (MR_Integer) 234, &libs__handle_options__NumTagBits0_55);
          }
#line 713 "handle_options.m"
        }
#line 710 "handle_options.m"
        break;
#line 710 "handle_options.m"
      case (MR_Integer) 0:
#line 709 "handle_options.m"
        libs__handle_options__NumTagBits0_55 = (MR_Integer) 0;
#line 710 "handle_options.m"
        break;
#line 710 "handle_options.m"
    }
#line 722 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__TagsMethod0_29 == (MR_Integer) 1);
#line 722 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 723 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__NumTagBits0_55 == (MR_Integer) -1);
#line 726 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 725 "handle_options.m"
      {
#line 725 "handle_options.m"
        {
#line 725 "handle_options.m"
          libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_248_248, (MR_Integer) 239, &libs__handle_options__NumTagBits1_56);
        }
#line 725 "handle_options.m"
      }
#line 726 "handle_options.m"
    else
#line 727 "handle_options.m"
      libs__handle_options__NumTagBits1_56 = libs__handle_options__NumTagBits0_55;
#line 732 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__NumTagBits1_56 < (MR_Integer) 0);
#line 739 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 733 "handle_options.m"
      {
#line 733 "handle_options.m"
        libs__handle_options__NumTagBits_57 = (MR_Integer) 0;
#line 738 "handle_options.m"
        {
#line 738 "handle_options.m"
          libs__compiler_util__add_warning_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[94]), libs__handle_options__STATE_VARIABLE_Specs_214_214, &libs__handle_options__STATE_VARIABLE_Specs_267_267);
        }
#line 733 "handle_options.m"
      }
#line 739 "handle_options.m"
    else
#line 740 "handle_options.m"
      {
#line 740 "handle_options.m"
        libs__handle_options__NumTagBits_57 = libs__handle_options__NumTagBits1_56;
#line 740 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_267_267 = libs__handle_options__STATE_VARIABLE_Specs_214_214;
#line 740 "handle_options.m"
      }
#line 743 "handle_options.m"
    {
#line 743 "handle_options.m"
      libs__handle_options__V_269_269 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 743 "handle_options.m"
      MR_hl_field(MR_mktag(2), libs__handle_options__V_269_269, 0) = ((MR_Box) (libs__handle_options__NumTagBits_57));
#line 743 "handle_options.m"
    }
#line 743 "handle_options.m"
    {
#line 743 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 234, libs__handle_options__V_269_269, libs__handle_options__STATE_VARIABLE_Globals_248_248, &libs__handle_options__STATE_VARIABLE_Globals_270_270);
    }
#line 744 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__NumTagBits_57 == (MR_Integer) 0);
#line 747 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 745 "handle_options.m"
      {
#line 745 "handle_options.m"
        libs__handle_options__TagsMethod_59 = (MR_Integer) 0;
#line 746 "handle_options.m"
        {
#line 746 "handle_options.m"
          libs__globals__set_tags_method_3_p_0(libs__handle_options__TagsMethod_59, libs__handle_options__STATE_VARIABLE_Globals_270_270, &libs__handle_options__STATE_VARIABLE_Globals_271_271);
        }
#line 745 "handle_options.m"
      }
#line 747 "handle_options.m"
    else
#line 748 "handle_options.m"
      {
#line 748 "handle_options.m"
        libs__handle_options__TagsMethod_59 = libs__handle_options__TagsMethod0_29;
#line 748 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_271_271 = libs__handle_options__STATE_VARIABLE_Globals_270_270;
#line 748 "handle_options.m"
      }
#line 751 "handle_options.m"
    {
#line 751 "handle_options.m"
      libs__globals__current_grade_supports_par_conj_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_271_271, &libs__handle_options__GradeSupportsParConj_60);
    }
#line 752 "handle_options.m"
    {
#line 752 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_271_271, (MR_Integer) 213, &libs__handle_options__Parallel_61);
    }
#line 753 "handle_options.m"
    {
#line 753 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_271_271, (MR_Integer) 214, &libs__handle_options__Threadscope_62);
    }
#line 755 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__GradeSupportsParConj_60 == (MR_Integer) 0);
#line 755 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 756 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__Threadscope_62 == (MR_Integer) 1);
#line 762 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 760 "handle_options.m"
      {
#line 761 "handle_options.m"
        {
#line 761 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[98]), libs__handle_options__STATE_VARIABLE_Specs_267_267, &libs__handle_options__STATE_VARIABLE_Specs_283_283);
        }
#line 760 "handle_options.m"
      }
#line 762 "handle_options.m"
    else
#line 762 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Specs_283_283 = libs__handle_options__STATE_VARIABLE_Specs_267_267;
#line 769 "handle_options.m"
    {
#line 769 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_271_271, (MR_Integer) 660, &libs__handle_options__ImplicitParallelism_64);
    }
#line 803 "handle_options.m"
#line 803 "handle_options.m"
    switch (libs__handle_options__ImplicitParallelism_64) {
#line 803 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 803 "handle_options.m"
      case (MR_Integer) 0:
#line 804 "handle_options.m"
        {
#line 804 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Specs_315_315 = libs__handle_options__STATE_VARIABLE_Specs_283_283;
#line 804 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_303_303 = libs__handle_options__STATE_VARIABLE_Globals_271_271;
#line 804 "handle_options.m"
        }
#line 803 "handle_options.m"
        break;
#line 803 "handle_options.m"
      case (MR_Integer) 1:
#line 785 "handle_options.m"
#line 785 "handle_options.m"
        switch (libs__handle_options__GradeSupportsParConj_60) {
#line 785 "handle_options.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 785 "handle_options.m"
          case (MR_Integer) 0:
#line 789 "handle_options.m"
            {
#line 798 "handle_options.m"
#line 798 "handle_options.m"
              switch (libs__handle_options__Parallel_61) {
#line 798 "handle_options.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 798 "handle_options.m"
                case (MR_Integer) 0:
#line 799 "handle_options.m"
                  libs__handle_options__STATE_VARIABLE_Specs_315_315 = libs__handle_options__STATE_VARIABLE_Specs_283_283;
#line 798 "handle_options.m"
                  break;
#line 798 "handle_options.m"
                case (MR_Integer) 1:
#line 791 "handle_options.m"
                  {
#line 797 "handle_options.m"
                    {
#line 797 "handle_options.m"
                      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[106]), libs__handle_options__STATE_VARIABLE_Specs_283_283, &libs__handle_options__STATE_VARIABLE_Specs_315_315);
                    }
#line 791 "handle_options.m"
                  }
#line 798 "handle_options.m"
                  break;
#line 798 "handle_options.m"
              }
#line 801 "handle_options.m"
              {
#line 801 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 660, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]), libs__handle_options__STATE_VARIABLE_Globals_271_271, &libs__handle_options__STATE_VARIABLE_Globals_303_303);
              }
#line 789 "handle_options.m"
            }
#line 785 "handle_options.m"
            break;
#line 785 "handle_options.m"
          case (MR_Integer) 1:
#line 774 "handle_options.m"
            {
#line 774 "handle_options.m"
              MR_String libs__handle_options__FeedbackFile_65;

#line 775 "handle_options.m"
              {
#line 775 "handle_options.m"
                libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_271_271, (MR_Integer) 661, &libs__handle_options__FeedbackFile_65);
              }
#line 777 "handle_options.m"
              libs__handle_options__succeeded = (strcmp(libs__handle_options__FeedbackFile_65, (MR_String) "") == 0);
#line 782 "handle_options.m"
              if (libs__handle_options__succeeded)
#line 780 "handle_options.m"
                {
#line 781 "handle_options.m"
                  {
#line 781 "handle_options.m"
                    libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[109]), libs__handle_options__STATE_VARIABLE_Specs_283_283, &libs__handle_options__STATE_VARIABLE_Specs_315_315);
                  }
#line 780 "handle_options.m"
                }
#line 782 "handle_options.m"
              else
#line 782 "handle_options.m"
                libs__handle_options__STATE_VARIABLE_Specs_315_315 = libs__handle_options__STATE_VARIABLE_Specs_283_283;
#line 774 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_303_303 = libs__handle_options__STATE_VARIABLE_Globals_271_271;
#line 774 "handle_options.m"
            }
#line 785 "handle_options.m"
            break;
#line 785 "handle_options.m"
        }
#line 803 "handle_options.m"
        break;
#line 803 "handle_options.m"
    }
#line 809 "handle_options.m"
    libs__handle_options__V_318_318 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[3]);
#line 808 "handle_options.m"
    {
#line 808 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 660, (MR_Integer) 195, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_303_303, &libs__handle_options__STATE_VARIABLE_Globals_319_319);
    }
#line 814 "handle_options.m"
#line 814 "handle_options.m"
    switch (libs__handle_options__GradeSupportsParConj_60) {
#line 814 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 814 "handle_options.m"
      case (MR_Integer) 0:
#line 815 "handle_options.m"
        {
#line 816 "handle_options.m"
          {
#line 816 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 662, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]), libs__handle_options__STATE_VARIABLE_Globals_319_319, &libs__handle_options__STATE_VARIABLE_Globals_323_323);
          }
#line 815 "handle_options.m"
        }
#line 814 "handle_options.m"
        break;
#line 814 "handle_options.m"
      case (MR_Integer) 1:
#line 813 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_323_323 = libs__handle_options__STATE_VARIABLE_Globals_319_319;
#line 814 "handle_options.m"
        break;
#line 814 "handle_options.m"
    }
#line 5485 "libs.handle_options.c"
#line 5486 "libs.handle_options.c"
    switch (libs__handle_options__Target_27) {
#line 5488 "libs.handle_options.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 5490 "libs.handle_options.c"
      case (MR_Integer) 0:
#line 5492 "libs.handle_options.c"
        {
#line 932 "handle_options.m"
          {
#line 932 "handle_options.m"
            libs__handle_options__option_implies_5_p_0((MR_Integer) 251, (MR_Integer) 256, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_323_323, &libs__handle_options__STATE_VARIABLE_Globals_448_448);
          }
#line 5499 "libs.handle_options.c"
        }
#line 5501 "libs.handle_options.c"
        break;
#line 5503 "libs.handle_options.c"
      case (MR_Integer) 1:
#line 5505 "libs.handle_options.c"
      case (MR_Integer) 2:
#line 5507 "libs.handle_options.c"
        {
#line 5509 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_326_326;
#line 5511 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_329_329;
#line 5513 "libs.handle_options.c"
          MR_Word libs__handle_options__V_332_332;
#line 5515 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_333_333;
#line 5517 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_337_337;
#line 5519 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_341_341;
#line 5521 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_345_345;
#line 5523 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_349_349;
#line 5525 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_353_353;
#line 5527 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_357_357;
#line 5529 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_361_361;
#line 5531 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_365_365;
#line 5533 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_369_369;
#line 5535 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_373_373;
#line 5537 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_377_377;
#line 5539 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_381_381;

#line 852 "handle_options.m"
          {
#line 852 "handle_options.m"
            libs__globals__set_gc_method_3_p_0((MR_Integer) 0, libs__handle_options__STATE_VARIABLE_Globals_323_323, &libs__handle_options__STATE_VARIABLE_Globals_326_326);
          }
#line 853 "handle_options.m"
          {
#line 853 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 212, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[156]), libs__handle_options__STATE_VARIABLE_Globals_326_326, &libs__handle_options__STATE_VARIABLE_Globals_329_329);
          }
#line 854 "handle_options.m"
          libs__handle_options__V_332_332 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]);
#line 854 "handle_options.m"
          {
#line 854 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 301, libs__handle_options__V_332_332, libs__handle_options__STATE_VARIABLE_Globals_329_329, &libs__handle_options__STATE_VARIABLE_Globals_333_333);
          }
#line 856 "handle_options.m"
          {
#line 856 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 300, libs__handle_options__V_332_332, libs__handle_options__STATE_VARIABLE_Globals_333_333, &libs__handle_options__STATE_VARIABLE_Globals_337_337);
          }
#line 858 "handle_options.m"
          {
#line 858 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 251, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_337_337, &libs__handle_options__STATE_VARIABLE_Globals_341_341);
          }
#line 859 "handle_options.m"
          {
#line 859 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 252, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_341_341, &libs__handle_options__STATE_VARIABLE_Globals_345_345);
          }
#line 860 "handle_options.m"
          {
#line 860 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 240, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_345_345, &libs__handle_options__STATE_VARIABLE_Globals_349_349);
          }
#line 861 "handle_options.m"
          {
#line 861 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 253, libs__handle_options__V_332_332, libs__handle_options__STATE_VARIABLE_Globals_349_349, &libs__handle_options__STATE_VARIABLE_Globals_353_353);
          }
#line 862 "handle_options.m"
          {
#line 862 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 255, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_353_353, &libs__handle_options__STATE_VARIABLE_Globals_357_357);
          }
#line 863 "handle_options.m"
          {
#line 863 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 254, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_357_357, &libs__handle_options__STATE_VARIABLE_Globals_361_361);
          }
#line 864 "handle_options.m"
          {
#line 864 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 234, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[4]), libs__handle_options__STATE_VARIABLE_Globals_361_361, &libs__handle_options__STATE_VARIABLE_Globals_365_365);
          }
#line 865 "handle_options.m"
          {
#line 865 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 242, libs__handle_options__V_332_332, libs__handle_options__STATE_VARIABLE_Globals_365_365, &libs__handle_options__STATE_VARIABLE_Globals_369_369);
          }
#line 866 "handle_options.m"
          {
#line 866 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 257, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_369_369, &libs__handle_options__STATE_VARIABLE_Globals_373_373);
          }
#line 867 "handle_options.m"
          {
#line 867 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 266, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_373_373, &libs__handle_options__STATE_VARIABLE_Globals_377_377);
          }
#line 869 "handle_options.m"
          {
#line 869 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 637, libs__handle_options__V_332_332, libs__handle_options__STATE_VARIABLE_Globals_377_377, &libs__handle_options__STATE_VARIABLE_Globals_381_381);
          }
#line 5619 "libs.handle_options.c"
#line 5620 "libs.handle_options.c"
          switch (libs__handle_options__Target_27) {
#line 5622 "libs.handle_options.c"
            default: /*NOTREACHED*/ MR_assert(0);
#line 5624 "libs.handle_options.c"
            case (MR_Integer) 1:
#line 5626 "libs.handle_options.c"
              {
#line 872 "handle_options.m"
                {
#line 872 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 562, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[157]), libs__handle_options__STATE_VARIABLE_Globals_381_381, &libs__handle_options__STATE_VARIABLE_Globals_448_448);
                }
#line 5633 "libs.handle_options.c"
              }
#line 5635 "libs.handle_options.c"
              break;
#line 5637 "libs.handle_options.c"
            case (MR_Integer) 2:
#line 935 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_448_448 = libs__handle_options__STATE_VARIABLE_Globals_381_381;
#line 5641 "libs.handle_options.c"
              break;
#line 5643 "libs.handle_options.c"
          }
#line 5645 "libs.handle_options.c"
        }
#line 5647 "libs.handle_options.c"
        break;
#line 5649 "libs.handle_options.c"
      case (MR_Integer) 3:
#line 5651 "libs.handle_options.c"
        {
#line 5653 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_388_388;
#line 5655 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_391_391;
#line 5657 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_395_395;
#line 5659 "libs.handle_options.c"
          MR_Word libs__handle_options__V_398_398;
#line 5661 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_399_399;
#line 5663 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_403_403;
#line 5665 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_407_407;
#line 5667 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_411_411;
#line 5669 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_415_415;
#line 5671 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_419_419;
#line 5673 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_423_423;
#line 5675 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_427_427;
#line 5677 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_431_431;
#line 5679 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_435_435;
#line 5681 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_439_439;

#line 895 "handle_options.m"
          {
#line 895 "handle_options.m"
            libs__globals__set_gc_method_3_p_0((MR_Integer) 0, libs__handle_options__STATE_VARIABLE_Globals_323_323, &libs__handle_options__STATE_VARIABLE_Globals_388_388);
          }
#line 896 "handle_options.m"
          {
#line 896 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 212, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[156]), libs__handle_options__STATE_VARIABLE_Globals_388_388, &libs__handle_options__STATE_VARIABLE_Globals_391_391);
          }
#line 897 "handle_options.m"
          {
#line 897 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 240, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_391_391, &libs__handle_options__STATE_VARIABLE_Globals_395_395);
          }
#line 898 "handle_options.m"
          libs__handle_options__V_398_398 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]);
#line 898 "handle_options.m"
          {
#line 898 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 301, libs__handle_options__V_398_398, libs__handle_options__STATE_VARIABLE_Globals_395_395, &libs__handle_options__STATE_VARIABLE_Globals_399_399);
          }
#line 900 "handle_options.m"
          {
#line 900 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 300, libs__handle_options__V_398_398, libs__handle_options__STATE_VARIABLE_Globals_399_399, &libs__handle_options__STATE_VARIABLE_Globals_403_403);
          }
#line 902 "handle_options.m"
          {
#line 902 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 269, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_403_403, &libs__handle_options__STATE_VARIABLE_Globals_407_407);
          }
#line 904 "handle_options.m"
          {
#line 904 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 265, libs__handle_options__V_398_398, libs__handle_options__STATE_VARIABLE_Globals_407_407, &libs__handle_options__STATE_VARIABLE_Globals_411_411);
          }
#line 906 "handle_options.m"
          {
#line 906 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 267, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_411_411, &libs__handle_options__STATE_VARIABLE_Globals_415_415);
          }
#line 908 "handle_options.m"
          {
#line 908 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 268, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_415_415, &libs__handle_options__STATE_VARIABLE_Globals_419_419);
          }
#line 910 "handle_options.m"
          {
#line 910 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 637, libs__handle_options__V_398_398, libs__handle_options__STATE_VARIABLE_Globals_419_419, &libs__handle_options__STATE_VARIABLE_Globals_423_423);
          }
#line 915 "handle_options.m"
          {
#line 915 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 246, libs__handle_options__V_398_398, libs__handle_options__STATE_VARIABLE_Globals_423_423, &libs__handle_options__STATE_VARIABLE_Globals_427_427);
          }
#line 916 "handle_options.m"
          {
#line 916 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 247, libs__handle_options__V_398_398, libs__handle_options__STATE_VARIABLE_Globals_427_427, &libs__handle_options__STATE_VARIABLE_Globals_431_431);
          }
#line 917 "handle_options.m"
          {
#line 917 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 248, libs__handle_options__V_398_398, libs__handle_options__STATE_VARIABLE_Globals_431_431, &libs__handle_options__STATE_VARIABLE_Globals_435_435);
          }
#line 918 "handle_options.m"
          {
#line 918 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 251, libs__handle_options__V_398_398, libs__handle_options__STATE_VARIABLE_Globals_435_435, &libs__handle_options__STATE_VARIABLE_Globals_439_439);
          }
#line 919 "handle_options.m"
          {
#line 919 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 252, libs__handle_options__V_398_398, libs__handle_options__STATE_VARIABLE_Globals_439_439, &libs__handle_options__STATE_VARIABLE_Globals_448_448);
          }
#line 5761 "libs.handle_options.c"
        }
#line 5763 "libs.handle_options.c"
        break;
#line 5765 "libs.handle_options.c"
    }
#line 942 "handle_options.m"
    {
#line 942 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 216, (MR_Integer) 215, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_448_448, &libs__handle_options__STATE_VARIABLE_Globals_453_453);
    }
#line 949 "handle_options.m"
    libs__handle_options__V_457_457 = (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[158]);
#line 949 "handle_options.m"
    {
#line 949 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 100, (MR_Integer) 545, libs__handle_options__V_457_457, libs__handle_options__STATE_VARIABLE_Globals_453_453, &libs__handle_options__STATE_VARIABLE_Globals_458_458);
    }
#line 950 "handle_options.m"
    {
#line 950 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 100, (MR_Integer) 547, libs__handle_options__V_457_457, libs__handle_options__STATE_VARIABLE_Globals_458_458, &libs__handle_options__STATE_VARIABLE_Globals_463_463);
    }
#line 954 "handle_options.m"
    libs__handle_options__V_467_467 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]);
#line 954 "handle_options.m"
    {
#line 954 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 251, (MR_Integer) 246, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_463_463, &libs__handle_options__STATE_VARIABLE_Globals_468_468);
    }
#line 955 "handle_options.m"
    {
#line 955 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 251, (MR_Integer) 247, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_468_468, &libs__handle_options__STATE_VARIABLE_Globals_473_473);
    }
#line 956 "handle_options.m"
    {
#line 956 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 251, (MR_Integer) 248, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_473_473, &libs__handle_options__STATE_VARIABLE_Globals_478_478);
    }
#line 959 "handle_options.m"
    {
#line 959 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 253, (MR_Integer) 314, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_478_478, &libs__handle_options__STATE_VARIABLE_Globals_483_483);
    }
#line 963 "handle_options.m"
    {
#line 963 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 455, (MR_Integer) 449, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_483_483, &libs__handle_options__STATE_VARIABLE_Globals_488_488);
    }
#line 967 "handle_options.m"
    {
#line 967 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 611, (MR_Integer) 609, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_488_488, &libs__handle_options__STATE_VARIABLE_Globals_493_493);
    }
#line 971 "handle_options.m"
    {
#line 971 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_493_493, (MR_Integer) 627, &libs__handle_options__LibLinkages0_68);
    }
#line 976 "handle_options.m"
    if ((libs__handle_options__LibLinkages0_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 973 "handle_options.m"
      {
#line 974 "handle_options.m"
        {
#line 974 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 627, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[112]), libs__handle_options__STATE_VARIABLE_Globals_493_493, &libs__handle_options__STATE_VARIABLE_Globals_498_498);
        }
#line 973 "handle_options.m"
      }
#line 976 "handle_options.m"
    else
#line 977 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_498_498 = libs__handle_options__STATE_VARIABLE_Globals_493_493;
#line 983 "handle_options.m"
    {
#line 983 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 609, (MR_Integer) 632, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_498_498, &libs__handle_options__STATE_VARIABLE_Globals_507_507);
    }
#line 984 "handle_options.m"
    {
#line 984 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 614, (MR_Integer) 632, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_507_507, &libs__handle_options__STATE_VARIABLE_Globals_512_512);
    }
#line 985 "handle_options.m"
    {
#line 985 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 614, (MR_Integer) 609, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_512_512, &libs__handle_options__STATE_VARIABLE_Globals_517_517);
    }
#line 989 "handle_options.m"
    {
#line 989 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 614, (MR_Integer) 117, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_517_517, &libs__handle_options__STATE_VARIABLE_Globals_522_522);
    }
#line 993 "handle_options.m"
    {
#line 993 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 609, (MR_Integer) 637, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_522_522, &libs__handle_options__STATE_VARIABLE_Globals_527_527);
    }
#line 997 "handle_options.m"
    {
#line 997 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_527_527, (MR_Integer) 324, &libs__handle_options__TransOpt_71);
    }
#line 1013 "handle_options.m"
#line 1013 "handle_options.m"
    switch (libs__handle_options__TransOpt_71) {
#line 1013 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1013 "handle_options.m"
      case (MR_Integer) 0:
#line 1014 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_541_541 = libs__handle_options__STATE_VARIABLE_Specs_315_315;
#line 1013 "handle_options.m"
        break;
#line 1013 "handle_options.m"
      case (MR_Integer) 1:
#line 999 "handle_options.m"
        {
#line 999 "handle_options.m"
          MR_Word libs__handle_options__UsingMMCMake_72;
#line 999 "handle_options.m"
          MR_Word libs__handle_options__InvokedByMMCMake_73;
#line 999 "handle_options.m"
          MR_Word libs__handle_options__UsingOrInvokedByMMCMake_74;

#line 1000 "handle_options.m"
          {
#line 1000 "handle_options.m"
            libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_527_527, (MR_Integer) 609, &libs__handle_options__UsingMMCMake_72);
          }
#line 1001 "handle_options.m"
          {
#line 1001 "handle_options.m"
            libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_527_527, (MR_Integer) 614, &libs__handle_options__InvokedByMMCMake_73);
          }
#line 1003 "handle_options.m"
          {
#line 1003 "handle_options.m"
            libs__handle_options__UsingOrInvokedByMMCMake_74 = mercury__bool__or_2_f_0(libs__handle_options__UsingMMCMake_72, libs__handle_options__InvokedByMMCMake_73);
          }
#line 1010 "handle_options.m"
#line 1010 "handle_options.m"
          switch (libs__handle_options__UsingOrInvokedByMMCMake_74) {
#line 1010 "handle_options.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1010 "handle_options.m"
            case (MR_Integer) 0:
#line 1011 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Specs_541_541 = libs__handle_options__STATE_VARIABLE_Specs_315_315;
#line 1010 "handle_options.m"
              break;
#line 1010 "handle_options.m"
            case (MR_Integer) 1:
#line 1005 "handle_options.m"
              {
#line 1009 "handle_options.m"
                {
#line 1009 "handle_options.m"
                  libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[116]), libs__handle_options__STATE_VARIABLE_Specs_315_315, &libs__handle_options__STATE_VARIABLE_Specs_541_541);
                }
#line 1005 "handle_options.m"
              }
#line 1010 "handle_options.m"
              break;
#line 1010 "handle_options.m"
          }
#line 999 "handle_options.m"
        }
#line 1013 "handle_options.m"
        break;
#line 1013 "handle_options.m"
    }
#line 1019 "handle_options.m"
    {
#line 1019 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_527_527, (MR_Integer) 320, &libs__handle_options__InterModOpt_76);
    }
#line 1021 "handle_options.m"
    {
#line 1021 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_527_527, (MR_Integer) 325, &libs__handle_options__InterModAnalysis_77);
    }
#line 1024 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__InterModOpt_76 == (MR_Integer) 1);
#line 1024 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1025 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__InterModAnalysis_77 == (MR_Integer) 1);
#line 1033 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1031 "handle_options.m"
      {
#line 1032 "handle_options.m"
        {
#line 1032 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[122]), libs__handle_options__STATE_VARIABLE_Specs_541_541, &libs__handle_options__STATE_VARIABLE_Specs_556_556);
        }
#line 1031 "handle_options.m"
      }
#line 1033 "handle_options.m"
    else
#line 1033 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Specs_556_556 = libs__handle_options__STATE_VARIABLE_Specs_541_541;
#line 1037 "handle_options.m"
    {
#line 1037 "handle_options.m"
      libs__handle_options__succeeded = mercury__io__have_symlinks_0_p_0();
    }
#line 1039 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1039 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_559_559 = libs__handle_options__STATE_VARIABLE_Globals_527_527;
#line 1039 "handle_options.m"
    else
#line 1040 "handle_options.m"
      {
#line 1040 "handle_options.m"
        {
#line 1040 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 618, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_527_527, &libs__handle_options__STATE_VARIABLE_Globals_559_559);
        }
#line 1040 "handle_options.m"
      }
#line 1043 "handle_options.m"
    {
#line 1043 "handle_options.m"
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_559_559, (MR_Integer) 94, &libs__handle_options__MaybeStandaloneInt_79);
    }
#line 1045 "handle_options.m"
    {
#line 1045 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_559_559, (MR_Integer) 555, &libs__handle_options__ExtraInitFunctions_80);
    }
#line 1048 "handle_options.m"
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__MaybeStandaloneInt_79)) == (MR_mktag((MR_Integer) 1)));
#line 1048 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1048 "handle_options.m"
      {
#line 1048 "handle_options.m"
        libs__handle_options__V_81_81 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeStandaloneInt_79, (MR_Integer) 0)));
#line 1049 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__ExtraInitFunctions_80 == (MR_Integer) 1);
#line 1048 "handle_options.m"
      }
#line 1056 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1054 "handle_options.m"
      {
#line 1055 "handle_options.m"
        {
#line 1055 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[127]), libs__handle_options__STATE_VARIABLE_Specs_556_556, &libs__handle_options__STATE_VARIABLE_Specs_575_575);
        }
#line 1054 "handle_options.m"
      }
#line 1056 "handle_options.m"
    else
#line 1056 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Specs_575_575 = libs__handle_options__STATE_VARIABLE_Specs_556_556;
#line 1060 "handle_options.m"
    {
#line 1060 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 402, (MR_Integer) 400, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_559_559, &libs__handle_options__STATE_VARIABLE_Globals_579_579);
    }
#line 1062 "handle_options.m"
    {
#line 1062 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 410, (MR_Integer) 409, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_579_579, &libs__handle_options__STATE_VARIABLE_Globals_584_584);
    }
#line 1064 "handle_options.m"
    {
#line 1064 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 409, (MR_Integer) 408, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_584_584, &libs__handle_options__STATE_VARIABLE_Globals_589_589);
    }
#line 1065 "handle_options.m"
    {
#line 1065 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 409, (MR_Integer) 13, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_589_589, &libs__handle_options__STATE_VARIABLE_Globals_594_594);
    }
#line 1067 "handle_options.m"
    {
#line 1067 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 417, (MR_Integer) 416, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_594_594, &libs__handle_options__STATE_VARIABLE_Globals_599_599);
    }
#line 1069 "handle_options.m"
    {
#line 1069 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 416, (MR_Integer) 415, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_599_599, &libs__handle_options__STATE_VARIABLE_Globals_604_604);
    }
#line 1070 "handle_options.m"
    {
#line 1070 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 416, (MR_Integer) 13, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_604_604, &libs__handle_options__STATE_VARIABLE_Globals_609_609);
    }
#line 1072 "handle_options.m"
    {
#line 1072 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 87, (MR_Integer) 324, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_609_609, &libs__handle_options__STATE_VARIABLE_Globals_614_614);
    }
#line 1074 "handle_options.m"
    {
#line 1074 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 324, (MR_Integer) 320, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_614_614, &libs__handle_options__STATE_VARIABLE_Globals_619_619);
    }
#line 1076 "handle_options.m"
    {
#line 1076 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 323, (MR_Integer) 322, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_619_619, &libs__handle_options__STATE_VARIABLE_Globals_624_624);
    }
#line 1081 "handle_options.m"
    {
#line 1081 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 320, (MR_Integer) 322, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_624_624, &libs__handle_options__STATE_VARIABLE_Globals_629_629);
    }
#line 1083 "handle_options.m"
    {
#line 1083 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 324, (MR_Integer) 323, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_629_629, &libs__handle_options__STATE_VARIABLE_Globals_634_634);
    }
#line 1092 "handle_options.m"
    {
#line 1092 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 322, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_634_634, &libs__handle_options__STATE_VARIABLE_Globals_638_638);
    }
#line 1094 "handle_options.m"
    {
#line 1094 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 115, (MR_Integer) 116, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_638_638, &libs__handle_options__STATE_VARIABLE_Globals_643_643);
    }
#line 1096 "handle_options.m"
    {
#line 1096 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 49, (MR_Integer) 48, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_643_643, &libs__handle_options__STATE_VARIABLE_Globals_648_648);
    }
#line 1103 "handle_options.m"
    {
#line 1103 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 90, (MR_Integer) 115, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_648_648, &libs__handle_options__STATE_VARIABLE_Globals_653_653);
    }
#line 1105 "handle_options.m"
    {
#line 1105 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 92, (MR_Integer) 115, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_653_653, &libs__handle_options__STATE_VARIABLE_Globals_658_658);
    }
#line 1107 "handle_options.m"
    {
#line 1107 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 91, (MR_Integer) 115, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_658_658, &libs__handle_options__STATE_VARIABLE_Globals_663_663);
    }
#line 1109 "handle_options.m"
    {
#line 1109 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 95, (MR_Integer) 115, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_663_663, &libs__handle_options__STATE_VARIABLE_Globals_668_668);
    }
#line 1111 "handle_options.m"
    {
#line 1111 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 85, (MR_Integer) 115, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_668_668, &libs__handle_options__STATE_VARIABLE_Globals_673_673);
    }
#line 1113 "handle_options.m"
    {
#line 1113 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 84, (MR_Integer) 115, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_673_673, &libs__handle_options__STATE_VARIABLE_Globals_678_678);
    }
#line 1115 "handle_options.m"
    {
#line 1115 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 83, (MR_Integer) 115, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_678_678, &libs__handle_options__STATE_VARIABLE_Globals_683_683);
    }
#line 1117 "handle_options.m"
    {
#line 1117 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 89, (MR_Integer) 115, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_683_683, &libs__handle_options__STATE_VARIABLE_Globals_688_688);
    }
#line 1119 "handle_options.m"
    {
#line 1119 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 101, (MR_Integer) 115, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_688_688, &libs__handle_options__STATE_VARIABLE_Globals_693_693);
    }
#line 1121 "handle_options.m"
    {
#line 1121 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 86, (MR_Integer) 115, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_693_693, &libs__handle_options__STATE_VARIABLE_Globals_698_698);
    }
#line 1123 "handle_options.m"
    {
#line 1123 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 87, (MR_Integer) 115, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_698_698, &libs__handle_options__STATE_VARIABLE_Globals_703_703);
    }
#line 1125 "handle_options.m"
    {
#line 1125 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 88, (MR_Integer) 115, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_703_703, &libs__handle_options__STATE_VARIABLE_Globals_708_708);
    }
#line 1127 "handle_options.m"
    {
#line 1127 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 97, (MR_Integer) 115, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_708_708, &libs__handle_options__STATE_VARIABLE_Globals_713_713);
    }
#line 1129 "handle_options.m"
    {
#line 1129 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 96, (MR_Integer) 115, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_713_713, &libs__handle_options__STATE_VARIABLE_Globals_718_718);
    }
#line 1135 "handle_options.m"
    {
#line 1135 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 85, (MR_Integer) 137, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_718_718, &libs__handle_options__STATE_VARIABLE_Globals_723_723);
    }
#line 1137 "handle_options.m"
    {
#line 1137 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 84, (MR_Integer) 137, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_723_723, &libs__handle_options__STATE_VARIABLE_Globals_728_728);
    }
#line 1139 "handle_options.m"
    {
#line 1139 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 83, (MR_Integer) 137, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_728_728, &libs__handle_options__STATE_VARIABLE_Globals_733_733);
    }
#line 1141 "handle_options.m"
    {
#line 1141 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 86, (MR_Integer) 137, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_733_733, &libs__handle_options__STATE_VARIABLE_Globals_738_738);
    }
#line 1143 "handle_options.m"
    {
#line 1143 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 87, (MR_Integer) 137, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_738_738, &libs__handle_options__STATE_VARIABLE_Globals_743_743);
    }
#line 1148 "handle_options.m"
    {
#line 1148 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 83, (MR_Integer) 116, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_743_743, &libs__handle_options__STATE_VARIABLE_Globals_748_748);
    }
#line 1155 "handle_options.m"
    {
#line 1155 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 89, (MR_Integer) 320, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_748_748, &libs__handle_options__STATE_VARIABLE_Globals_753_753);
    }
#line 1163 "handle_options.m"
    {
#line 1163 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_753_753, (MR_Integer) 115, &libs__handle_options__Smart_83);
    }
#line 1164 "handle_options.m"
    {
#line 1164 "handle_options.m"
      libs__handle_options__maybe_disable_smart_recompilation_8_p_0(libs__handle_options__Smart_83, (MR_Integer) 320, (MR_Integer) 1, (MR_String) "\140--intermodule-optimization\'", libs__handle_options__STATE_VARIABLE_Globals_753_753, &libs__handle_options__STATE_VARIABLE_Globals_759_759);
    }
#line 1166 "handle_options.m"
    {
#line 1166 "handle_options.m"
      libs__handle_options__maybe_disable_smart_recompilation_8_p_0(libs__handle_options__Smart_83, (MR_Integer) 322, (MR_Integer) 1, (MR_String) "\140--use-opt-files\'", libs__handle_options__STATE_VARIABLE_Globals_759_759, &libs__handle_options__STATE_VARIABLE_Globals_764_764);
    }
#line 1175 "handle_options.m"
    {
#line 1175 "handle_options.m"
      libs__handle_options__maybe_disable_smart_recompilation_8_p_0(libs__handle_options__Smart_83, (MR_Integer) 98, (MR_Integer) 0, (MR_String) "\140--no-target-code-only\'", libs__handle_options__STATE_VARIABLE_Globals_764_764, &libs__handle_options__STATE_VARIABLE_Globals_769_769);
    }
#line 1178 "handle_options.m"
    {
#line 1178 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 633, (MR_Integer) 632, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_769_769, &libs__handle_options__STATE_VARIABLE_Globals_774_774);
    }
#line 1180 "handle_options.m"
    {
#line 1180 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 46, (MR_Integer) 45, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_774_774, &libs__handle_options__STATE_VARIABLE_Globals_779_779);
    }
#line 1181 "handle_options.m"
    {
#line 1181 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 45, (MR_Integer) 51, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_779_779, &libs__handle_options__STATE_VARIABLE_Globals_784_784);
    }
#line 1182 "handle_options.m"
    {
#line 1182 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_784_784, (MR_Integer) 46, &libs__handle_options__VeryVerbose_84);
    }
#line 1183 "handle_options.m"
    {
#line 1183 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_784_784, (MR_Integer) 55, &libs__handle_options__Statistics_85);
    }
#line 1185 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__VeryVerbose_84 == (MR_Integer) 1);
#line 1185 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1186 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__Statistics_85 == (MR_Integer) 1);
#line 1189 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1188 "handle_options.m"
      {
#line 1188 "handle_options.m"
        {
#line 1188 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 56, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[3]), libs__handle_options__STATE_VARIABLE_Globals_784_784, &libs__handle_options__STATE_VARIABLE_Globals_790_790);
        }
#line 1188 "handle_options.m"
      }
#line 1189 "handle_options.m"
    else
#line 1189 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_790_790 = libs__handle_options__STATE_VARIABLE_Globals_784_784;
#line 1193 "handle_options.m"
    {
#line 1193 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 62, (MR_Integer) 60, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_790_790, &libs__handle_options__STATE_VARIABLE_Globals_795_795);
    }
#line 1194 "handle_options.m"
    {
#line 1194 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 63, (MR_Integer) 60, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_795_795, &libs__handle_options__STATE_VARIABLE_Globals_800_800);
    }
#line 1195 "handle_options.m"
    {
#line 1195 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 61, (MR_Integer) 60, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_800_800, &libs__handle_options__STATE_VARIABLE_Globals_805_805);
    }
#line 1198 "handle_options.m"
    {
#line 1198 "handle_options.m"
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_805_805, (MR_Integer) 73, &libs__handle_options__DebugLiveness_86);
    }
#line 1200 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__DebugLiveness_86 >= (MR_Integer) 0);
#line 1200 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1200 "handle_options.m"
      {
#line 1201 "handle_options.m"
        libs__handle_options__V_809_809 = (MR_String) "all";
#line 1201 "handle_options.m"
        {
#line 1201 "handle_options.m"
          libs__handle_options__succeeded = libs__handle_options__convert_dump_alias_2_p_0(libs__handle_options__V_809_809, &libs__handle_options__AllDumpOptions_87);
        }
#line 1200 "handle_options.m"
      }
#line 1211 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1208 "handle_options.m"
      {
#line 1208 "handle_options.m"
        MR_String libs__handle_options__DumpOptions0_88;
#line 1208 "handle_options.m"
        MR_String libs__handle_options__DumpOptions1_89;
#line 1208 "handle_options.m"
        MR_Word libs__handle_options__V_812_812;

#line 1207 "handle_options.m"
        {
#line 1207 "handle_options.m"
          libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_805_805, (MR_Integer) 151, &libs__handle_options__DumpOptions0_88);
        }
#line 1209 "handle_options.m"
        {
#line 1209 "handle_options.m"
          mercury__string__append_3_p_2(libs__handle_options__DumpOptions0_88, libs__handle_options__AllDumpOptions_87, &libs__handle_options__DumpOptions1_89);
        }
#line 1210 "handle_options.m"
        {
#line 1210 "handle_options.m"
          libs__handle_options__V_812_812 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1210 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_812_812, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1210 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_812_812, 1) = ((MR_Box) (libs__handle_options__DumpOptions1_89));
#line 1210 "handle_options.m"
        }
#line 1210 "handle_options.m"
        {
#line 1210 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 151, libs__handle_options__V_812_812, libs__handle_options__STATE_VARIABLE_Globals_805_805, &libs__handle_options__STATE_VARIABLE_Globals_813_813);
        }
#line 1208 "handle_options.m"
      }
#line 1211 "handle_options.m"
    else
#line 1211 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_813_813 = libs__handle_options__STATE_VARIABLE_Globals_805_805;
#line 1215 "handle_options.m"
    {
#line 1215 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 63, (MR_Integer) 60, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_813_813, &libs__handle_options__STATE_VARIABLE_Globals_817_817);
    }
#line 1216 "handle_options.m"
    {
#line 1216 "handle_options.m"
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_817_817, (MR_Integer) 64, &libs__handle_options__DebugModesPredId_90);
    }
#line 1218 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__DebugModesPredId_90 > (MR_Integer) 0);
#line 1220 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1219 "handle_options.m"
      {
#line 1219 "handle_options.m"
        {
#line 1219 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 60, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_817_817, &libs__handle_options__STATE_VARIABLE_Globals_823_823);
        }
#line 1219 "handle_options.m"
      }
#line 1220 "handle_options.m"
    else
#line 1220 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_823_823 = libs__handle_options__STATE_VARIABLE_Globals_817_817;
#line 1224 "handle_options.m"
    {
#line 1224 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_823_823, (MR_Integer) 352, &libs__handle_options__DebugUnneededCodePredNames_91);
    }
#line 1228 "handle_options.m"
    if ((libs__handle_options__DebugUnneededCodePredNames_91 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1227 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_828_828 = libs__handle_options__STATE_VARIABLE_Globals_823_823;
#line 1228 "handle_options.m"
    else
#line 1229 "handle_options.m"
      {
#line 1230 "handle_options.m"
        {
#line 1230 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 351, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_823_823, &libs__handle_options__STATE_VARIABLE_Globals_828_828);
        }
#line 1229 "handle_options.m"
      }
#line 1233 "handle_options.m"
    {
#line 1233 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_828_828, (MR_Integer) 70, &libs__handle_options__DebugOptPredIdStrs_94);
    }
#line 1235 "handle_options.m"
    {
#line 1235 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_828_828, (MR_Integer) 71, &libs__handle_options__DebugOptPredNames_95);
    }
#line 1238 "handle_options.m"
    {
#line 1238 "handle_options.m"
      MR_String libs__handle_options__V_96_96;
#line 1238 "handle_options.m"
      MR_Word libs__handle_options__V_97_97;

#line 1238 "handle_options.m"
      libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DebugOptPredIdStrs_94)) == (MR_mktag((MR_Integer) 1)));
#line 1238 "handle_options.m"
      if (libs__handle_options__succeeded)
#line 1238 "handle_options.m"
        {
#line 1238 "handle_options.m"
          libs__handle_options__V_96_96 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredIdStrs_94, (MR_Integer) 0)));
#line 1238 "handle_options.m"
          libs__handle_options__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredIdStrs_94, (MR_Integer) 1)));
#line 1238 "handle_options.m"
        }
#line 1238 "handle_options.m"
    }
#line 1239 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 1239 "handle_options.m"
      {
#line 1239 "handle_options.m"
        MR_String libs__handle_options__V_98_98;
#line 1239 "handle_options.m"
        MR_Word libs__handle_options__V_99_99;

#line 1239 "handle_options.m"
        libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DebugOptPredNames_95)) == (MR_mktag((MR_Integer) 1)));
#line 1239 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1239 "handle_options.m"
          {
#line 1239 "handle_options.m"
            libs__handle_options__V_98_98 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredNames_95, (MR_Integer) 0)));
#line 1239 "handle_options.m"
            libs__handle_options__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredNames_95, (MR_Integer) 1)));
#line 1239 "handle_options.m"
          }
#line 1239 "handle_options.m"
      }
#line 1243 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1242 "handle_options.m"
      {
#line 1242 "handle_options.m"
        {
#line 1242 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 68, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_828_828, &libs__handle_options__STATE_VARIABLE_Globals_834_834);
        }
#line 1242 "handle_options.m"
      }
#line 1243 "handle_options.m"
    else
#line 1243 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_834_834 = libs__handle_options__STATE_VARIABLE_Globals_828_828;
#line 1247 "handle_options.m"
    {
#line 1247 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_834_834, (MR_Integer) 79, &libs__handle_options__DebugIntermoduleAnalysis_100);
    }
#line 1249 "handle_options.m"
    {
#line 1249 "handle_options.m"
      analysis__enable_debug_messages_3_p_0(libs__handle_options__DebugIntermoduleAnalysis_100);
    }
#line 1251 "handle_options.m"
    {
#line 1251 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_834_834, (MR_Integer) 147, &libs__handle_options__DumpHLDSPredIds_101);
    }
#line 1262 "handle_options.m"
    if ((libs__handle_options__DumpHLDSPredIds_101 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1263 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_846_846 = libs__handle_options__STATE_VARIABLE_Globals_834_834;
#line 1262 "handle_options.m"
    else
#line 1254 "handle_options.m"
      {
#line 1254 "handle_options.m"
        MR_String libs__handle_options__DumpOptions2_104;
#line 1254 "handle_options.m"
        MR_String libs__handle_options__DumpOptions3_105;
#line 1254 "handle_options.m"
        MR_String libs__handle_options__DumpOptions_106;
#line 1254 "handle_options.m"
        MR_Word libs__handle_options__V_845_845;

#line 1255 "handle_options.m"
        {
#line 1255 "handle_options.m"
          libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_834_834, (MR_Integer) 151, &libs__handle_options__DumpOptions2_104);
        }
#line 1258 "handle_options.m"
        {
#line 1258 "handle_options.m"
          mercury__string__replace_all_4_p_0(libs__handle_options__DumpOptions2_104, (MR_String) "M", (MR_String) "", &libs__handle_options__DumpOptions3_105);
        }
#line 1259 "handle_options.m"
        {
#line 1259 "handle_options.m"
          mercury__string__replace_all_4_p_0(libs__handle_options__DumpOptions3_105, (MR_String) "T", (MR_String) "", &libs__handle_options__DumpOptions_106);
        }
#line 1260 "handle_options.m"
        {
#line 1260 "handle_options.m"
          libs__handle_options__V_845_845 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1260 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_845_845, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1260 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_845_845, 1) = ((MR_Box) (libs__handle_options__DumpOptions_106));
#line 1260 "handle_options.m"
        }
#line 1260 "handle_options.m"
        {
#line 1260 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 151, libs__handle_options__V_845_845, libs__handle_options__STATE_VARIABLE_Globals_834_834, &libs__handle_options__STATE_VARIABLE_Globals_846_846);
        }
#line 1254 "handle_options.m"
      }
#line 1266 "handle_options.m"
    {
#line 1266 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 78, (MR_Integer) 159, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_846_846, &libs__handle_options__STATE_VARIABLE_Globals_850_850);
    }
#line 1268 "handle_options.m"
    {
#line 1268 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 159, (MR_Integer) 157, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_850_850, &libs__handle_options__STATE_VARIABLE_Globals_855_855);
    }
#line 1270 "handle_options.m"
    {
#line 1270 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 158, (MR_Integer) 157, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_855_855, &libs__handle_options__STATE_VARIABLE_Globals_860_860);
    }
#line 1273 "handle_options.m"
    {
#line 1273 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 140, (MR_Integer) 139, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_860_860, &libs__handle_options__STATE_VARIABLE_Globals_865_865);
    }
#line 1278 "handle_options.m"
    {
#line 1278 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_865_865, (MR_Integer) 215, &libs__handle_options__UseTrail_107);
    }
#line 1279 "handle_options.m"
    {
#line 1279 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_865_865, (MR_Integer) 251, &libs__handle_options__HighLevelCode_108);
    }
#line 1280 "handle_options.m"
    {
#line 1280 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_865_865, (MR_Integer) 217, &libs__handle_options__UseMinimalModelStackCopy_109);
    }
#line 1282 "handle_options.m"
    {
#line 1282 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_865_865, (MR_Integer) 218, &libs__handle_options__UseMinimalModelOwnStacks_110);
    }
#line 1284 "handle_options.m"
    {
#line 1284 "handle_options.m"
      mercury__bool__or_3_p_0(libs__handle_options__UseMinimalModelStackCopy_109, libs__handle_options__UseMinimalModelOwnStacks_110, &libs__handle_options__UseMinimalModel_111);
    }
#line 1287 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelStackCopy_109 == (MR_Integer) 1);
#line 1287 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1288 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelOwnStacks_110 == (MR_Integer) 1);
#line 1294 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1292 "handle_options.m"
      {
#line 1293 "handle_options.m"
        {
#line 1293 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[131]), libs__handle_options__STATE_VARIABLE_Specs_575_575, &libs__handle_options__STATE_VARIABLE_Specs_880_880);
        }
#line 1292 "handle_options.m"
      }
#line 1294 "handle_options.m"
    else
#line 1302 "handle_options.m"
      {
#line 1295 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__UseMinimalModel_111 == (MR_Integer) 1);
#line 1295 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1296 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_108 == (MR_Integer) 1);
#line 1302 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1300 "handle_options.m"
          {
#line 1301 "handle_options.m"
            {
#line 1301 "handle_options.m"
              libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[135]), libs__handle_options__STATE_VARIABLE_Specs_575_575, &libs__handle_options__STATE_VARIABLE_Specs_880_880);
            }
#line 1300 "handle_options.m"
          }
#line 1302 "handle_options.m"
        else
#line 1310 "handle_options.m"
          {
#line 1303 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__UseMinimalModel_111 == (MR_Integer) 1);
#line 1303 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 1304 "handle_options.m"
              libs__handle_options__succeeded = (libs__handle_options__UseTrail_107 == (MR_Integer) 1);
#line 1310 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 1308 "handle_options.m"
              {
#line 1309 "handle_options.m"
                {
#line 1309 "handle_options.m"
                  libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[138]), libs__handle_options__STATE_VARIABLE_Specs_575_575, &libs__handle_options__STATE_VARIABLE_Specs_880_880);
                }
#line 1308 "handle_options.m"
              }
#line 1310 "handle_options.m"
            else
#line 1310 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Specs_880_880 = libs__handle_options__STATE_VARIABLE_Specs_575_575;
#line 1310 "handle_options.m"
          }
#line 1302 "handle_options.m"
      }
#line 1320 "handle_options.m"
    libs__handle_options__V_903_903 = (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[4]);
#line 1320 "handle_options.m"
    {
#line 1320 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 252, (MR_Integer) 243, libs__handle_options__V_903_903, libs__handle_options__STATE_VARIABLE_Globals_865_865, &libs__handle_options__STATE_VARIABLE_Globals_904_904);
    }
#line 1341 "handle_options.m"
#line 1341 "handle_options.m"
    switch (libs__handle_options__Target_27) {
#line 1341 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1341 "handle_options.m"
      case (MR_Integer) 0:
#line 1322 "handle_options.m"
        {
#line 1322 "handle_options.m"
          MR_Integer libs__handle_options__ArgPackBits0_115;
#line 1322 "handle_options.m"
          MR_Integer libs__handle_options__BitsPerWord_116;
#line 1322 "handle_options.m"
          MR_Integer libs__handle_options__ArgPackBits_117;
#line 1322 "handle_options.m"
          MR_Word libs__handle_options__V_939_939;

#line 1323 "handle_options.m"
          {
#line 1323 "handle_options.m"
            libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_904_904, (MR_Integer) 243, &libs__handle_options__ArgPackBits0_115);
          }
#line 1324 "handle_options.m"
          {
#line 1324 "handle_options.m"
            libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_904_904, (MR_Integer) 237, &libs__handle_options__BitsPerWord_116);
          }
#line 1326 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__ArgPackBits0_115 < (MR_Integer) 0);
#line 1328 "handle_options.m"
          if (libs__handle_options__succeeded)
#line 1327 "handle_options.m"
            {
#line 1327 "handle_options.m"
              libs__handle_options__ArgPackBits_117 = libs__handle_options__BitsPerWord_116;
#line 1327 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Specs_937_937 = libs__handle_options__STATE_VARIABLE_Specs_880_880;
#line 1327 "handle_options.m"
            }
#line 1328 "handle_options.m"
          else
#line 1337 "handle_options.m"
            {
#line 1328 "handle_options.m"
              libs__handle_options__succeeded = (libs__handle_options__ArgPackBits0_115 > libs__handle_options__BitsPerWord_116);
#line 1337 "handle_options.m"
              if (libs__handle_options__succeeded)
#line 1329 "handle_options.m"
                {
#line 1329 "handle_options.m"
                  MR_Word libs__handle_options__ArgPackBitsSpec_118;
#line 1329 "handle_options.m"
                  MR_Word libs__handle_options__V_919_919;
#line 1329 "handle_options.m"
                  MR_Word libs__handle_options__V_922_922;
#line 1329 "handle_options.m"
                  MR_Word libs__handle_options__V_925_925;
#line 1329 "handle_options.m"
                  MR_Word libs__handle_options__V_928_928;
#line 1329 "handle_options.m"
                  MR_Word libs__handle_options__V_929_929;

#line 1329 "handle_options.m"
                  libs__handle_options__ArgPackBits_117 = libs__handle_options__BitsPerWord_116;
#line 1335 "handle_options.m"
                  {
#line 1335 "handle_options.m"
                    libs__handle_options__V_929_929 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1335 "handle_options.m"
                    MR_hl_field(MR_mktag(3), libs__handle_options__V_929_929, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1335 "handle_options.m"
                    MR_hl_field(MR_mktag(3), libs__handle_options__V_929_929, 1) = ((MR_Box) (libs__handle_options__BitsPerWord_116));
#line 1335 "handle_options.m"
                  }
#line 1335 "handle_options.m"
                  {
#line 1335 "handle_options.m"
                    libs__handle_options__V_928_928 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1335 "handle_options.m"
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_928_928, 0) = ((MR_Box) (libs__handle_options__V_929_929));
#line 1335 "handle_options.m"
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_928_928, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
#line 1335 "handle_options.m"
                  }
#line 1334 "handle_options.m"
                  {
#line 1334 "handle_options.m"
                    libs__handle_options__V_925_925 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1334 "handle_options.m"
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_925_925, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[162])));
#line 1334 "handle_options.m"
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_925_925, 1) = ((MR_Box) (libs__handle_options__V_928_928));
#line 1334 "handle_options.m"
                  }
#line 1333 "handle_options.m"
                  {
#line 1333 "handle_options.m"
                    libs__handle_options__V_922_922 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1333 "handle_options.m"
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_922_922, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[161])));
#line 1333 "handle_options.m"
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_922_922, 1) = ((MR_Box) (libs__handle_options__V_925_925));
#line 1333 "handle_options.m"
                  }
#line 1332 "handle_options.m"
                  {
#line 1332 "handle_options.m"
                    libs__handle_options__V_919_919 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1332 "handle_options.m"
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_919_919, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[160])));
#line 1332 "handle_options.m"
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_919_919, 1) = ((MR_Box) (libs__handle_options__V_922_922));
#line 1332 "handle_options.m"
                  }
#line 1331 "handle_options.m"
                  {
#line 1331 "handle_options.m"
                    libs__handle_options__ArgPackBitsSpec_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1331 "handle_options.m"
                    MR_hl_field(MR_mktag(1), libs__handle_options__ArgPackBitsSpec_118, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[159])));
#line 1331 "handle_options.m"
                    MR_hl_field(MR_mktag(1), libs__handle_options__ArgPackBitsSpec_118, 1) = ((MR_Box) (libs__handle_options__V_919_919));
#line 1331 "handle_options.m"
                  }
#line 1336 "handle_options.m"
                  {
#line 1336 "handle_options.m"
                    libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__ArgPackBitsSpec_118, libs__handle_options__STATE_VARIABLE_Specs_880_880, &libs__handle_options__STATE_VARIABLE_Specs_937_937);
                  }
#line 1329 "handle_options.m"
                }
#line 1337 "handle_options.m"
              else
#line 1338 "handle_options.m"
                {
#line 1338 "handle_options.m"
                  libs__handle_options__ArgPackBits_117 = libs__handle_options__ArgPackBits0_115;
#line 1338 "handle_options.m"
                  libs__handle_options__STATE_VARIABLE_Specs_937_937 = libs__handle_options__STATE_VARIABLE_Specs_880_880;
#line 1338 "handle_options.m"
                }
#line 1337 "handle_options.m"
            }
#line 1340 "handle_options.m"
          {
#line 1340 "handle_options.m"
            libs__handle_options__V_939_939 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1340 "handle_options.m"
            MR_hl_field(MR_mktag(2), libs__handle_options__V_939_939, 0) = ((MR_Box) (libs__handle_options__ArgPackBits_117));
#line 1340 "handle_options.m"
          }
#line 1340 "handle_options.m"
          {
#line 1340 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 243, libs__handle_options__V_939_939, libs__handle_options__STATE_VARIABLE_Globals_904_904, &libs__handle_options__STATE_VARIABLE_Globals_940_940);
          }
#line 1322 "handle_options.m"
        }
#line 1341 "handle_options.m"
        break;
#line 1341 "handle_options.m"
      case (MR_Integer) 1:
#line 1341 "handle_options.m"
      case (MR_Integer) 3:
#line 1341 "handle_options.m"
      case (MR_Integer) 2:
#line 1345 "handle_options.m"
        {
#line 1345 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_908_908;

#line 1346 "handle_options.m"
          {
#line 1346 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 243, libs__handle_options__V_903_903, libs__handle_options__STATE_VARIABLE_Globals_904_904, &libs__handle_options__STATE_VARIABLE_Globals_908_908);
          }
#line 1347 "handle_options.m"
          {
#line 1347 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 244, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_908_908, &libs__handle_options__STATE_VARIABLE_Globals_940_940);
          }
#line 1345 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Specs_937_937 = libs__handle_options__STATE_VARIABLE_Specs_880_880;
#line 1345 "handle_options.m"
        }
#line 1341 "handle_options.m"
        break;
#line 1341 "handle_options.m"
    }
#line 1351 "handle_options.m"
    {
#line 1351 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 221, (MR_Integer) 240, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_940_940, &libs__handle_options__STATE_VARIABLE_Globals_944_944);
    }
#line 1355 "handle_options.m"
    {
#line 1355 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 251, (MR_Integer) 250, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_944_944, &libs__handle_options__STATE_VARIABLE_Globals_949_949);
    }
#line 1356 "handle_options.m"
    {
#line 1356 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 240, (MR_Integer) 250, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_949_949, &libs__handle_options__STATE_VARIABLE_Globals_954_954);
    }
#line 1366 "handle_options.m"
#line 1366 "handle_options.m"
    switch (libs__handle_options__Target_27) {
#line 1366 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1366 "handle_options.m"
      case (MR_Integer) 0:
#line 1362 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_958_958 = libs__handle_options__STATE_VARIABLE_Globals_954_954;
#line 1366 "handle_options.m"
        break;
#line 1366 "handle_options.m"
      case (MR_Integer) 1:
#line 1363 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_958_958 = libs__handle_options__STATE_VARIABLE_Globals_954_954;
#line 1366 "handle_options.m"
        break;
#line 1366 "handle_options.m"
      case (MR_Integer) 3:
#line 1367 "handle_options.m"
        {
#line 1368 "handle_options.m"
          {
#line 1368 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 292, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_954_954, &libs__handle_options__STATE_VARIABLE_Globals_958_958);
          }
#line 1367 "handle_options.m"
        }
#line 1366 "handle_options.m"
        break;
#line 1366 "handle_options.m"
      case (MR_Integer) 2:
#line 1364 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_958_958 = libs__handle_options__STATE_VARIABLE_Globals_954_954;
#line 1366 "handle_options.m"
        break;
#line 1366 "handle_options.m"
    }
#line 1373 "handle_options.m"
#line 1373 "handle_options.m"
    switch (libs__handle_options__Target_27) {
#line 1373 "handle_options.m"
      default:
#line 1373 "handle_options.m"
        libs__handle_options__succeeded = MR_FALSE;
#line 1373 "handle_options.m"
        break;
#line 1373 "handle_options.m"
      case (MR_Integer) 1:
#line 1372 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 1373 "handle_options.m"
        break;
#line 1373 "handle_options.m"
      case (MR_Integer) 2:
#line 1373 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 1373 "handle_options.m"
        break;
#line 1373 "handle_options.m"
    }
#line 1379 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1378 "handle_options.m"
      {
#line 1378 "handle_options.m"
        {
#line 1378 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 431, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[5]), libs__handle_options__STATE_VARIABLE_Globals_958_958, &libs__handle_options__STATE_VARIABLE_Globals_962_962);
        }
#line 1378 "handle_options.m"
      }
#line 1379 "handle_options.m"
    else
#line 1379 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_962_962 = libs__handle_options__STATE_VARIABLE_Globals_958_958;
#line 1383 "handle_options.m"
    {
#line 1383 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 479, (MR_Integer) 549, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_962_962, &libs__handle_options__STATE_VARIABLE_Globals_967_967);
    }
#line 1386 "handle_options.m"
    {
#line 1386 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 205, (MR_Integer) 196, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_967_967, &libs__handle_options__STATE_VARIABLE_Globals_972_972);
    }
#line 1391 "handle_options.m"
    {
#line 1391 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 196, (MR_Integer) 208, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_972_972, &libs__handle_options__STATE_VARIABLE_Globals_977_977);
    }
#line 1401 "handle_options.m"
    {
#line 1401 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 205, (MR_Integer) 128, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_977_977, &libs__handle_options__STATE_VARIABLE_Globals_982_982);
    }
#line 1402 "handle_options.m"
    {
#line 1402 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_982_982, (MR_Integer) 128, &libs__handle_options__ProfOptimized_119);
    }
#line 1406 "handle_options.m"
#line 1406 "handle_options.m"
    switch (libs__handle_options__ProfOptimized_119) {
#line 1406 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1406 "handle_options.m"
      case (MR_Integer) 0:
#line 1404 "handle_options.m"
        {
#line 1405 "handle_options.m"
          {
#line 1405 "handle_options.m"
            libs__handle_options__option_implies_5_p_0((MR_Integer) 192, (MR_Integer) 328, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_982_982, &libs__handle_options__STATE_VARIABLE_Globals_988_988);
          }
#line 1404 "handle_options.m"
        }
#line 1406 "handle_options.m"
        break;
#line 1406 "handle_options.m"
      case (MR_Integer) 1:
#line 1407 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_988_988 = libs__handle_options__STATE_VARIABLE_Globals_982_982;
#line 1406 "handle_options.m"
        break;
#line 1406 "handle_options.m"
    }
#line 1412 "handle_options.m"
    {
#line 1412 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 192, (MR_Integer) 194, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_988_988, &libs__handle_options__STATE_VARIABLE_Globals_993_993);
    }
#line 1414 "handle_options.m"
    {
#line 1414 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 209, (MR_Integer) 194, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_993_993, &libs__handle_options__STATE_VARIABLE_Globals_998_998);
    }
#line 1416 "handle_options.m"
    {
#line 1416 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 210, (MR_Integer) 194, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_998_998, &libs__handle_options__STATE_VARIABLE_Globals_1003_1003);
    }
#line 1419 "handle_options.m"
    {
#line 1419 "handle_options.m"
      libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1003_1003, (MR_Integer) 211, &libs__handle_options__ExpComp_120);
    }
#line 1420 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__ExpComp_120, (MR_String) "") == 0);
#line 1422 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1422 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1008_1008 = libs__handle_options__STATE_VARIABLE_Globals_1003_1003;
#line 1422 "handle_options.m"
    else
#line 1423 "handle_options.m"
      {
#line 1423 "handle_options.m"
        {
#line 1423 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 328, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1003_1003, &libs__handle_options__STATE_VARIABLE_Globals_1008_1008);
        }
#line 1423 "handle_options.m"
      }
#line 1427 "handle_options.m"
    {
#line 1427 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 184, (MR_Integer) 183, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_1008_1008, &libs__handle_options__STATE_VARIABLE_Globals_1013_1013);
    }
#line 1430 "handle_options.m"
    {
#line 1430 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 230, (MR_Integer) 232, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_1013_1013, &libs__handle_options__STATE_VARIABLE_Globals_1018_1018);
    }
#line 1436 "handle_options.m"
    {
#line 1436 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 183, (MR_Integer) 259, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_1018_1018, &libs__handle_options__STATE_VARIABLE_Globals_1023_1023);
    }
#line 1437 "handle_options.m"
    {
#line 1437 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 192, (MR_Integer) 259, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_1023_1023, &libs__handle_options__STATE_VARIABLE_Globals_1028_1028);
    }
#line 1443 "handle_options.m"
    {
#line 1443 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 192, (MR_Integer) 311, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_1028_1028, &libs__handle_options__STATE_VARIABLE_Globals_1033_1033);
    }
#line 1448 "handle_options.m"
    {
#line 1448 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 183, (MR_Integer) 126, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_1033_1033, &libs__handle_options__STATE_VARIABLE_Globals_1038_1038);
    }
#line 1451 "handle_options.m"
    {
#line 1451 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 126, (MR_Integer) 122, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_1038_1038, &libs__handle_options__STATE_VARIABLE_Globals_1043_1043);
    }
#line 1455 "handle_options.m"
    {
#line 1455 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 125, (MR_Integer) 122, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_1043_1043, &libs__handle_options__STATE_VARIABLE_Globals_1048_1048);
    }
#line 1465 "handle_options.m"
    {
#line 1465 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1048_1048, (MR_Integer) 120, &libs__handle_options__TraceOptimized_121);
    }
#line 1466 "handle_options.m"
    {
#line 1466 "handle_options.m"
      libs__handle_options__TraceLevelIsNone_122 = libs__trace_params__given_trace_level_is_none_1_f_0(libs__handle_options__TraceLevel_32);
    }
#line 1550 "handle_options.m"
#line 1550 "handle_options.m"
    switch (libs__handle_options__TraceLevelIsNone_122) {
#line 1550 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1550 "handle_options.m"
      case (MR_Integer) 0:
#line 1468 "handle_options.m"
        {
#line 1468 "handle_options.m"
          MR_Word libs__handle_options__TraceTailRec_123;
#line 1468 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1109_1109;
#line 1468 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1113_1113;
#line 1468 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1117_1117;
#line 1468 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1121_1121;
#line 1468 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1125_1125;
#line 1468 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1129_1129;
#line 1468 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1133_1133;
#line 1468 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1137_1137;

#line 1495 "handle_options.m"
#line 1495 "handle_options.m"
          switch (libs__handle_options__TraceOptimized_121) {
#line 1495 "handle_options.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1495 "handle_options.m"
            case (MR_Integer) 0:
#line 1470 "handle_options.m"
              {
#line 1470 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1057_1057;
#line 1470 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1061_1061;
#line 1470 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1065_1065;
#line 1470 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1069_1069;
#line 1470 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1073_1073;
#line 1470 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1077_1077;
#line 1470 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1081_1081;
#line 1470 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1085_1085;
#line 1470 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1089_1089;
#line 1470 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1093_1093;
#line 1470 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1097_1097;
#line 1470 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1101_1101;
#line 1470 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1105_1105;

#line 1475 "handle_options.m"
                {
#line 1475 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 328, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1048_1048, &libs__handle_options__STATE_VARIABLE_Globals_1057_1057);
                }
#line 1476 "handle_options.m"
                {
#line 1476 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 344, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1057_1057, &libs__handle_options__STATE_VARIABLE_Globals_1061_1061);
                }
#line 1477 "handle_options.m"
                {
#line 1477 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 346, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1061_1061, &libs__handle_options__STATE_VARIABLE_Globals_1065_1065);
                }
#line 1478 "handle_options.m"
                {
#line 1478 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 353, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1065_1065, &libs__handle_options__STATE_VARIABLE_Globals_1069_1069);
                }
#line 1479 "handle_options.m"
                {
#line 1479 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 354, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1069_1069, &libs__handle_options__STATE_VARIABLE_Globals_1073_1073);
                }
#line 1481 "handle_options.m"
                {
#line 1481 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 382, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1073_1073, &libs__handle_options__STATE_VARIABLE_Globals_1077_1077);
                }
#line 1482 "handle_options.m"
                {
#line 1482 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 342, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1077_1077, &libs__handle_options__STATE_VARIABLE_Globals_1081_1081);
                }
#line 1484 "handle_options.m"
                {
#line 1484 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 343, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1081_1081, &libs__handle_options__STATE_VARIABLE_Globals_1085_1085);
                }
#line 1486 "handle_options.m"
                {
#line 1486 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 359, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1085_1085, &libs__handle_options__STATE_VARIABLE_Globals_1089_1089);
                }
#line 1488 "handle_options.m"
                {
#line 1488 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 358, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1089_1089, &libs__handle_options__STATE_VARIABLE_Globals_1093_1093);
                }
#line 1490 "handle_options.m"
                {
#line 1490 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 364, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1093_1093, &libs__handle_options__STATE_VARIABLE_Globals_1097_1097);
                }
#line 1492 "handle_options.m"
                {
#line 1492 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 378, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1097_1097, &libs__handle_options__STATE_VARIABLE_Globals_1101_1101);
                }
#line 1493 "handle_options.m"
                {
#line 1493 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 391, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1101_1101, &libs__handle_options__STATE_VARIABLE_Globals_1105_1105);
                }
#line 1494 "handle_options.m"
                {
#line 1494 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 392, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1105_1105, &libs__handle_options__STATE_VARIABLE_Globals_1109_1109);
                }
#line 1470 "handle_options.m"
              }
#line 1495 "handle_options.m"
              break;
#line 1495 "handle_options.m"
            case (MR_Integer) 1:
#line 1496 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_1109_1109 = libs__handle_options__STATE_VARIABLE_Globals_1048_1048;
#line 1495 "handle_options.m"
              break;
#line 1495 "handle_options.m"
          }
#line 1518 "handle_options.m"
          {
#line 1518 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 448, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1109_1109, &libs__handle_options__STATE_VARIABLE_Globals_1113_1113);
          }
#line 1523 "handle_options.m"
          {
#line 1523 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 361, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_1113_1113, &libs__handle_options__STATE_VARIABLE_Globals_1117_1117);
          }
#line 1527 "handle_options.m"
          {
#line 1527 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 380, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_1117_1117, &libs__handle_options__STATE_VARIABLE_Globals_1121_1121);
          }
#line 1531 "handle_options.m"
          {
#line 1531 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 446, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1121_1121, &libs__handle_options__STATE_VARIABLE_Globals_1125_1125);
          }
#line 1535 "handle_options.m"
          {
#line 1535 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 263, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_1125_1125, &libs__handle_options__STATE_VARIABLE_Globals_1129_1129);
          }
#line 1536 "handle_options.m"
          {
#line 1536 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 264, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_1129_1129, &libs__handle_options__STATE_VARIABLE_Globals_1133_1133);
          }
#line 1540 "handle_options.m"
          {
#line 1540 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 316, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1133_1133, &libs__handle_options__STATE_VARIABLE_Globals_1137_1137);
          }
#line 1543 "handle_options.m"
          {
#line 1543 "handle_options.m"
            libs__handle_options__TraceTailRec_123 = libs__trace_params__trace_level_allows_tail_rec_1_f_0(libs__handle_options__TraceLevel_32);
          }
#line 1547 "handle_options.m"
#line 1547 "handle_options.m"
          switch (libs__handle_options__TraceTailRec_123) {
#line 1547 "handle_options.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1547 "handle_options.m"
            case (MR_Integer) 0:
#line 1545 "handle_options.m"
              {
#line 1546 "handle_options.m"
                {
#line 1546 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 129, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1137_1137, &libs__handle_options__STATE_VARIABLE_Globals_1141_1141);
                }
#line 1545 "handle_options.m"
              }
#line 1547 "handle_options.m"
              break;
#line 1547 "handle_options.m"
            case (MR_Integer) 1:
#line 1548 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_1141_1141 = libs__handle_options__STATE_VARIABLE_Globals_1137_1137;
#line 1547 "handle_options.m"
              break;
#line 1547 "handle_options.m"
          }
#line 1468 "handle_options.m"
        }
#line 1550 "handle_options.m"
        break;
#line 1550 "handle_options.m"
      case (MR_Integer) 1:
#line 1551 "handle_options.m"
        {
#line 1554 "handle_options.m"
          {
#line 1554 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 129, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1048_1048, &libs__handle_options__STATE_VARIABLE_Globals_1141_1141);
          }
#line 1551 "handle_options.m"
        }
#line 1550 "handle_options.m"
        break;
#line 1550 "handle_options.m"
    }
#line 1557 "handle_options.m"
    {
#line 1557 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 192, (MR_Integer) 262, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_1141_1141, &libs__handle_options__STATE_VARIABLE_Globals_1146_1146);
    }
#line 1558 "handle_options.m"
    {
#line 1558 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1146_1146, (MR_Integer) 192, &libs__handle_options__ProfileDeep_124);
    }
#line 1583 "handle_options.m"
#line 1583 "handle_options.m"
    switch (libs__handle_options__ProfileDeep_124) {
#line 1583 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1583 "handle_options.m"
      case (MR_Integer) 0:
#line 1584 "handle_options.m"
        {
#line 1584 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Specs_1158_1158 = libs__handle_options__STATE_VARIABLE_Specs_937_937;
#line 1584 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1169_1169 = libs__handle_options__STATE_VARIABLE_Globals_1146_1146;
#line 1584 "handle_options.m"
        }
#line 1583 "handle_options.m"
        break;
#line 1583 "handle_options.m"
      case (MR_Integer) 1:
#line 1560 "handle_options.m"
        {
#line 1560 "handle_options.m"
          MR_Word libs__handle_options__LotsOfHOSpec_126;
#line 1560 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1161_1161;

#line 1562 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_108 == (MR_Integer) 0);
#line 1562 "handle_options.m"
          if (libs__handle_options__succeeded)
#line 1563 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__Target_27 == (MR_Integer) 0);
#line 1566 "handle_options.m"
          if (libs__handle_options__succeeded)
#line 1566 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Specs_1158_1158 = libs__handle_options__STATE_VARIABLE_Specs_937_937;
#line 1566 "handle_options.m"
          else
#line 1569 "handle_options.m"
            {
#line 1570 "handle_options.m"
              {
#line 1570 "handle_options.m"
                libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[140]), libs__handle_options__STATE_VARIABLE_Specs_937_937, &libs__handle_options__STATE_VARIABLE_Specs_1158_1158);
              }
#line 1569 "handle_options.m"
            }
#line 1572 "handle_options.m"
          {
#line 1572 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 358, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1146_1146, &libs__handle_options__STATE_VARIABLE_Globals_1161_1161);
          }
#line 1573 "handle_options.m"
          {
#line 1573 "handle_options.m"
            libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1161_1161, (MR_Integer) 207, &libs__handle_options__LotsOfHOSpec_126);
          }
#line 1580 "handle_options.m"
#line 1580 "handle_options.m"
          switch (libs__handle_options__LotsOfHOSpec_126) {
#line 1580 "handle_options.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1580 "handle_options.m"
            case (MR_Integer) 0:
#line 1581 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_1169_1169 = libs__handle_options__STATE_VARIABLE_Globals_1161_1161;
#line 1580 "handle_options.m"
              break;
#line 1580 "handle_options.m"
            case (MR_Integer) 1:
#line 1576 "handle_options.m"
              {
#line 1576 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1166_1166;

#line 1578 "handle_options.m"
                {
#line 1578 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 346, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_1161_1161, &libs__handle_options__STATE_VARIABLE_Globals_1166_1166);
                }
#line 1579 "handle_options.m"
                {
#line 1579 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 347, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[5]), libs__handle_options__STATE_VARIABLE_Globals_1166_1166, &libs__handle_options__STATE_VARIABLE_Globals_1169_1169);
                }
#line 1576 "handle_options.m"
              }
#line 1580 "handle_options.m"
              break;
#line 1580 "handle_options.m"
          }
#line 1560 "handle_options.m"
        }
#line 1583 "handle_options.m"
        break;
#line 1583 "handle_options.m"
    }
#line 1587 "handle_options.m"
    {
#line 1587 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1169_1169, (MR_Integer) 209, &libs__handle_options__RecordTermSizesAsWords_128);
    }
#line 1589 "handle_options.m"
    {
#line 1589 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1169_1169, (MR_Integer) 210, &libs__handle_options__RecordTermSizesAsCells_129);
    }
#line 1592 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsWords_128 == (MR_Integer) 1);
#line 1592 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1593 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsCells_129 == (MR_Integer) 1);
#line 1598 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1596 "handle_options.m"
      {
#line 1597 "handle_options.m"
        {
#line 1597 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[142]), libs__handle_options__STATE_VARIABLE_Specs_1158_1158, &libs__handle_options__STATE_VARIABLE_Specs_1179_1179);
        }
#line 1596 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1186_1186 = libs__handle_options__STATE_VARIABLE_Globals_1169_1169;
#line 1596 "handle_options.m"
      }
#line 1598 "handle_options.m"
    else
#line 1616 "handle_options.m"
      {
#line 1599 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsWords_128 == (MR_Integer) 1);
#line 1600 "handle_options.m"
        if (!(libs__handle_options__succeeded))
#line 1600 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsCells_129 == (MR_Integer) 1);
#line 1616 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1603 "handle_options.m"
          {
#line 1603 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1182_1182;

#line 1603 "handle_options.m"
            {
#line 1603 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 358, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1169_1169, &libs__handle_options__STATE_VARIABLE_Globals_1182_1182);
            }
#line 1606 "handle_options.m"
            {
#line 1606 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 244, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1182_1182, &libs__handle_options__STATE_VARIABLE_Globals_1186_1186);
            }
#line 1613 "handle_options.m"
#line 1613 "handle_options.m"
            switch (libs__handle_options__HighLevelCode_108) {
#line 1613 "handle_options.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1613 "handle_options.m"
              case (MR_Integer) 0:
#line 1614 "handle_options.m"
                libs__handle_options__STATE_VARIABLE_Specs_1179_1179 = libs__handle_options__STATE_VARIABLE_Specs_1158_1158;
#line 1613 "handle_options.m"
                break;
#line 1613 "handle_options.m"
              case (MR_Integer) 1:
#line 1608 "handle_options.m"
                {
#line 1612 "handle_options.m"
                  {
#line 1612 "handle_options.m"
                    libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[144]), libs__handle_options__STATE_VARIABLE_Specs_1158_1158, &libs__handle_options__STATE_VARIABLE_Specs_1179_1179);
                  }
#line 1608 "handle_options.m"
                }
#line 1613 "handle_options.m"
                break;
#line 1613 "handle_options.m"
            }
#line 1603 "handle_options.m"
          }
#line 1616 "handle_options.m"
        else
#line 1617 "handle_options.m"
          {
#line 1617 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Globals_1186_1186 = libs__handle_options__STATE_VARIABLE_Globals_1169_1169;
#line 1617 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Specs_1179_1179 = libs__handle_options__STATE_VARIABLE_Specs_1158_1158;
#line 1617 "handle_options.m"
          }
#line 1616 "handle_options.m"
      }
#line 1621 "handle_options.m"
    {
#line 1621 "handle_options.m"
      MR_Word libs__handle_options__V_1198_1198;

#line 1621 "handle_options.m"
      {
#line 1621 "handle_options.m"
        libs__handle_options__V_1198_1198 = libs__trace_params__given_trace_level_is_none_1_f_0(libs__handle_options__TraceLevel_32);
      }
#line 1621 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__V_1198_1198 == (MR_Integer) 1);
#line 1621 "handle_options.m"
    }
#line 1622 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 1622 "handle_options.m"
      {
#line 1622 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_108 == (MR_Integer) 0);
#line 1622 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1622 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__Target_27 == (MR_Integer) 0);
#line 1622 "handle_options.m"
      }
#line 1626 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1626 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Specs_1205_1205 = libs__handle_options__STATE_VARIABLE_Specs_1179_1179;
#line 1626 "handle_options.m"
    else
#line 1628 "handle_options.m"
      {
#line 1629 "handle_options.m"
        {
#line 1629 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[146]), libs__handle_options__STATE_VARIABLE_Specs_1179_1179, &libs__handle_options__STATE_VARIABLE_Specs_1205_1205);
        }
#line 1628 "handle_options.m"
      }
#line 1634 "handle_options.m"
    {
#line 1634 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 213, (MR_Integer) 485, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1186_1186, &libs__handle_options__STATE_VARIABLE_Globals_1209_1209);
    }
#line 1636 "handle_options.m"
    {
#line 1636 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 331, (MR_Integer) 360, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1209_1209, &libs__handle_options__STATE_VARIABLE_Globals_1214_1214);
    }
#line 1652 "handle_options.m"
#line 1652 "handle_options.m"
    switch (libs__handle_options__ProfileDeep_124) {
#line 1652 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1652 "handle_options.m"
      case (MR_Integer) 0:
#line 1649 "handle_options.m"
        {
#line 1650 "handle_options.m"
          {
#line 1650 "handle_options.m"
            libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 328, (MR_Integer) 360, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1214_1214, &libs__handle_options__STATE_VARIABLE_Globals_1219_1219);
          }
#line 1649 "handle_options.m"
        }
#line 1652 "handle_options.m"
        break;
#line 1652 "handle_options.m"
      case (MR_Integer) 1:
#line 1653 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1219_1219 = libs__handle_options__STATE_VARIABLE_Globals_1214_1214;
#line 1652 "handle_options.m"
        break;
#line 1652 "handle_options.m"
    }
#line 1658 "handle_options.m"
    {
#line 1658 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 162, (MR_Integer) 382, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1219_1219, &libs__handle_options__STATE_VARIABLE_Globals_1224_1224);
    }
#line 1659 "handle_options.m"
    {
#line 1659 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 162, (MR_Integer) 342, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1224_1224, &libs__handle_options__STATE_VARIABLE_Globals_1229_1229);
    }
#line 1661 "handle_options.m"
    {
#line 1661 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 162, (MR_Integer) 343, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1229_1229, &libs__handle_options__STATE_VARIABLE_Globals_1234_1234);
    }
#line 1665 "handle_options.m"
    {
#line 1665 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 259, (MR_Integer) 262, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_1234_1234, &libs__handle_options__STATE_VARIABLE_Globals_1239_1239);
    }
#line 1668 "handle_options.m"
    {
#line 1668 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 263, (MR_Integer) 262, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_1239_1239, &libs__handle_options__STATE_VARIABLE_Globals_1244_1244);
    }
#line 1718 "handle_options.m"
#line 1718 "handle_options.m"
    switch (libs__handle_options__GC_Method_28) {
#line 1718 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1718 "handle_options.m"
      case (MR_Integer) 5:
#line 1704 "handle_options.m"
        {
#line 1704 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1248_1248;
#line 1704 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1252_1252;
#line 1704 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1256_1256;
#line 1704 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1260_1260;
#line 1704 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1264_1264;
#line 1704 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1268_1268;
#line 1704 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1272_1272;
#line 1704 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1276_1276;
#line 1704 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1280_1280;
#line 1704 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1284_1284;

#line 1705 "handle_options.m"
          {
#line 1705 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 261, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_1244_1244, &libs__handle_options__STATE_VARIABLE_Globals_1248_1248);
          }
#line 1706 "handle_options.m"
          {
#line 1706 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 264, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_1248_1248, &libs__handle_options__STATE_VARIABLE_Globals_1252_1252);
          }
#line 1707 "handle_options.m"
          {
#line 1707 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 448, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1252_1252, &libs__handle_options__STATE_VARIABLE_Globals_1256_1256);
          }
#line 1708 "handle_options.m"
          {
#line 1708 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 468, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1256_1256, &libs__handle_options__STATE_VARIABLE_Globals_1260_1260);
          }
#line 1709 "handle_options.m"
          {
#line 1709 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 316, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1260_1260, &libs__handle_options__STATE_VARIABLE_Globals_1264_1264);
          }
#line 1710 "handle_options.m"
          {
#line 1710 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 446, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1264_1264, &libs__handle_options__STATE_VARIABLE_Globals_1268_1268);
          }
#line 1711 "handle_options.m"
          {
#line 1711 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 300, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1268_1268, &libs__handle_options__STATE_VARIABLE_Globals_1272_1272);
          }
#line 1713 "handle_options.m"
          {
#line 1713 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 301, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1272_1272, &libs__handle_options__STATE_VARIABLE_Globals_1276_1276);
          }
#line 1715 "handle_options.m"
          {
#line 1715 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 358, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1276_1276, &libs__handle_options__STATE_VARIABLE_Globals_1280_1280);
          }
#line 1716 "handle_options.m"
          {
#line 1716 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 353, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1280_1280, &libs__handle_options__STATE_VARIABLE_Globals_1284_1284);
          }
#line 1717 "handle_options.m"
          {
#line 1717 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 354, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1284_1284, &libs__handle_options__STATE_VARIABLE_Globals_1288_1288);
          }
#line 1704 "handle_options.m"
        }
#line 1718 "handle_options.m"
        break;
#line 1718 "handle_options.m"
      case (MR_Integer) 0:
#line 1719 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1288_1288 = libs__handle_options__STATE_VARIABLE_Globals_1244_1244;
#line 1718 "handle_options.m"
        break;
#line 1718 "handle_options.m"
      case (MR_Integer) 2:
#line 1721 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1288_1288 = libs__handle_options__STATE_VARIABLE_Globals_1244_1244;
#line 1718 "handle_options.m"
        break;
#line 1718 "handle_options.m"
      case (MR_Integer) 3:
#line 1722 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1288_1288 = libs__handle_options__STATE_VARIABLE_Globals_1244_1244;
#line 1718 "handle_options.m"
        break;
#line 1718 "handle_options.m"
      case (MR_Integer) 4:
#line 1723 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1288_1288 = libs__handle_options__STATE_VARIABLE_Globals_1244_1244;
#line 1718 "handle_options.m"
        break;
#line 1718 "handle_options.m"
      case (MR_Integer) 1:
#line 1720 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1288_1288 = libs__handle_options__STATE_VARIABLE_Globals_1244_1244;
#line 1718 "handle_options.m"
        break;
#line 1718 "handle_options.m"
    }
#line 1731 "handle_options.m"
    {
#line 1731 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1288_1288, (MR_Integer) 257, &libs__handle_options__PutNondetEnvOnHeap_133);
    }
#line 1747 "handle_options.m"
    {
#line 1747 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 262, (MR_Integer) 260, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_1288_1288, &libs__handle_options__STATE_VARIABLE_Globals_1304_1304);
    }
#line 1749 "handle_options.m"
    {
#line 1749 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 261, (MR_Integer) 260, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_1304_1304, &libs__handle_options__STATE_VARIABLE_Globals_1309_1309);
    }
#line 1755 "handle_options.m"
    {
#line 1755 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 262, (MR_Integer) 466, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1309_1309, &libs__handle_options__STATE_VARIABLE_Globals_1314_1314);
    }
#line 1757 "handle_options.m"
    {
#line 1757 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 261, (MR_Integer) 466, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1314_1314, &libs__handle_options__STATE_VARIABLE_Globals_1319_1319);
    }
#line 1761 "handle_options.m"
    {
#line 1761 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 260, (MR_Integer) 464, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1319_1319, &libs__handle_options__STATE_VARIABLE_Globals_1324_1324);
    }
#line 1767 "handle_options.m"
    {
#line 1767 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 264, (MR_Integer) 382, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1324_1324, &libs__handle_options__STATE_VARIABLE_Globals_1329_1329);
    }
#line 1768 "handle_options.m"
    {
#line 1768 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 264, (MR_Integer) 342, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1329_1329, &libs__handle_options__STATE_VARIABLE_Globals_1334_1334);
    }
#line 1777 "handle_options.m"
    {
#line 1777 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 215, (MR_Integer) 446, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1334_1334, &libs__handle_options__STATE_VARIABLE_Globals_1339_1339);
    }
#line 1784 "handle_options.m"
    {
#line 1784 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 225, (MR_Integer) 446, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1339_1339, &libs__handle_options__STATE_VARIABLE_Globals_1344_1344);
    }
#line 1793 "handle_options.m"
    {
#line 1793 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 217, (MR_Integer) 448, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1344_1344, &libs__handle_options__STATE_VARIABLE_Globals_1349_1349);
    }
#line 1802 "handle_options.m"
    {
#line 1802 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1349_1349, (MR_Integer) 277, &libs__handle_options__DisablePneg_135);
    }
#line 1804 "handle_options.m"
    {
#line 1804 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1349_1349, (MR_Integer) 278, &libs__handle_options__DisableCut_136);
    }
#line 1807 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelStackCopy_109 == (MR_Integer) 1);
#line 1807 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1808 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__DisablePneg_135 == (MR_Integer) 0);
#line 1812 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1810 "handle_options.m"
      {
#line 1810 "handle_options.m"
        {
#line 1810 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 279, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[3]), libs__handle_options__STATE_VARIABLE_Globals_1349_1349, &libs__handle_options__STATE_VARIABLE_Globals_1355_1355);
        }
#line 1810 "handle_options.m"
      }
#line 1812 "handle_options.m"
    else
#line 1812 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1355_1355 = libs__handle_options__STATE_VARIABLE_Globals_1349_1349;
#line 1816 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelStackCopy_109 == (MR_Integer) 1);
#line 1816 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1817 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__DisableCut_136 == (MR_Integer) 0);
#line 1821 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1819 "handle_options.m"
      {
#line 1819 "handle_options.m"
        {
#line 1819 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 280, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[3]), libs__handle_options__STATE_VARIABLE_Globals_1355_1355, &libs__handle_options__STATE_VARIABLE_Globals_1359_1359);
        }
#line 1819 "handle_options.m"
      }
#line 1821 "handle_options.m"
    else
#line 1821 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1359_1359 = libs__handle_options__STATE_VARIABLE_Globals_1355_1355;
#line 1827 "handle_options.m"
    {
#line 1827 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1359_1359, (MR_Integer) 146, &libs__handle_options__DumpHLDSStages_137);
    }
#line 1828 "handle_options.m"
    {
#line 1828 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1359_1359, (MR_Integer) 145, &libs__handle_options__DumpTraceStages_138);
    }
#line 1830 "handle_options.m"
    {
#line 1830 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1359_1359, (MR_Integer) 297, &libs__handle_options__ParallelLiveness_139);
    }
#line 1831 "handle_options.m"
    {
#line 1831 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1359_1359, (MR_Integer) 298, &libs__handle_options__ParallelCodeGen_140);
    }
#line 1833 "handle_options.m"
    {
#line 1833 "handle_options.m"
      MR_String libs__handle_options__V_141_141;
#line 1833 "handle_options.m"
      MR_Word libs__handle_options__V_142_142;

#line 1833 "handle_options.m"
      libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DumpHLDSStages_137)) == (MR_mktag((MR_Integer) 1)));
#line 1833 "handle_options.m"
      if (libs__handle_options__succeeded)
#line 1833 "handle_options.m"
        {
#line 1833 "handle_options.m"
          libs__handle_options__V_141_141 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpHLDSStages_137, (MR_Integer) 0)));
#line 1833 "handle_options.m"
          libs__handle_options__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpHLDSStages_137, (MR_Integer) 1)));
#line 1833 "handle_options.m"
        }
#line 1833 "handle_options.m"
    }
#line 1834 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 1834 "handle_options.m"
      {
#line 1834 "handle_options.m"
        {
#line 1834 "handle_options.m"
          MR_String libs__handle_options__V_143_143;
#line 1834 "handle_options.m"
          MR_Word libs__handle_options__V_144_144;

#line 1834 "handle_options.m"
          libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DumpTraceStages_138)) == (MR_mktag((MR_Integer) 1)));
#line 1834 "handle_options.m"
          if (libs__handle_options__succeeded)
#line 1834 "handle_options.m"
            {
#line 1834 "handle_options.m"
              libs__handle_options__V_143_143 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpTraceStages_138, (MR_Integer) 0)));
#line 1834 "handle_options.m"
              libs__handle_options__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpTraceStages_138, (MR_Integer) 1)));
#line 1834 "handle_options.m"
            }
#line 1834 "handle_options.m"
        }
#line 1834 "handle_options.m"
        if (!(libs__handle_options__succeeded))
#line 1834 "handle_options.m"
          {
#line 1835 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__Statistics_85 == (MR_Integer) 1);
#line 1834 "handle_options.m"
            if (!(libs__handle_options__succeeded))
#line 1834 "handle_options.m"
              {
#line 1836 "handle_options.m"
                libs__handle_options__succeeded = (libs__handle_options__ParallelLiveness_139 == (MR_Integer) 1);
#line 1834 "handle_options.m"
                if (!(libs__handle_options__succeeded))
#line 1837 "handle_options.m"
                  libs__handle_options__succeeded = (libs__handle_options__ParallelCodeGen_140 == (MR_Integer) 1);
#line 1834 "handle_options.m"
              }
#line 1834 "handle_options.m"
          }
#line 1834 "handle_options.m"
      }
#line 1841 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1840 "handle_options.m"
      {
#line 1840 "handle_options.m"
        {
#line 1840 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 296, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1359_1359, &libs__handle_options__STATE_VARIABLE_Globals_1367_1367);
        }
#line 1840 "handle_options.m"
      }
#line 1841 "handle_options.m"
    else
#line 1841 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1367_1367 = libs__handle_options__STATE_VARIABLE_Globals_1359_1359;
#line 1847 "handle_options.m"
    {
#line 1847 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 353, (MR_Integer) 354, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_1367_1367, &libs__handle_options__STATE_VARIABLE_Globals_1372_1372);
    }
#line 1853 "handle_options.m"
    {
#line 1853 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 342, (MR_Integer) 343, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_1372_1372, &libs__handle_options__STATE_VARIABLE_Globals_1377_1377);
    }
#line 1858 "handle_options.m"
    {
#line 1858 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 345, (MR_Integer) 320, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_1377_1377, &libs__handle_options__STATE_VARIABLE_Globals_1382_1382);
    }
#line 1860 "handle_options.m"
    {
#line 1860 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 345, (MR_Integer) 344, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_1382_1382, &libs__handle_options__STATE_VARIABLE_Globals_1387_1387);
    }
#line 1865 "handle_options.m"
    {
#line 1865 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 355, (MR_Integer) 361, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_1387_1387, &libs__handle_options__STATE_VARIABLE_Globals_1392_1392);
    }
#line 1866 "handle_options.m"
    {
#line 1866 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 355, (MR_Integer) 340, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_1392_1392, &libs__handle_options__STATE_VARIABLE_Globals_1397_1397);
    }
#line 1870 "handle_options.m"
    {
#line 1870 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 86, (MR_Integer) 344, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1397_1397, &libs__handle_options__STATE_VARIABLE_Globals_1402_1402);
    }
#line 1876 "handle_options.m"
    {
#line 1876 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 387, (MR_Integer) 388, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_1402_1402, &libs__handle_options__STATE_VARIABLE_Globals_1407_1407);
    }
#line 1881 "handle_options.m"
    {
#line 1881 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 93, (MR_Integer) 92, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_1407_1407, &libs__handle_options__STATE_VARIABLE_Globals_1412_1412);
    }
#line 1886 "handle_options.m"
    {
#line 1886 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 144, (MR_Integer) 92, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_1412_1412, &libs__handle_options__STATE_VARIABLE_Globals_1417_1417);
    }
#line 1890 "handle_options.m"
    {
#line 1890 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 90, (MR_Integer) 22, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1417_1417, &libs__handle_options__STATE_VARIABLE_Globals_1422_1422);
    }
#line 1893 "handle_options.m"
    {
#line 1893 "handle_options.m"
      libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1422_1422, (MR_Integer) 651, &libs__handle_options__TargetArch_145);
    }
#line 1896 "handle_options.m"
    {
#line 1896 "handle_options.m"
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1422_1422, (MR_Integer) 540, &libs__handle_options__MaybeStdLibDir_146);
    }
#line 1915 "handle_options.m"
    if ((libs__handle_options__MaybeStdLibDir_146 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1916 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1437_1437 = libs__handle_options__STATE_VARIABLE_Globals_1422_1422;
#line 1915 "handle_options.m"
    else
#line 1899 "handle_options.m"
      {
#line 1899 "handle_options.m"
        MR_String libs__handle_options__StdLibDir_147 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeStdLibDir_146, (MR_Integer) 0)));
#line 1899 "handle_options.m"
        MR_Word libs__handle_options__OptionTable2_148;
#line 1899 "handle_options.m"
        MR_Word libs__handle_options__OptionTable_149;
#line 1899 "handle_options.m"
        MR_Word libs__handle_options__LinkLibDirs0_150;
#line 1899 "handle_options.m"
        MR_Word libs__handle_options__Rpath0_151;
#line 1899 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1426_1426;
#line 1899 "handle_options.m"
        MR_Word libs__handle_options__V_1429_1429;
#line 1899 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1430_1430;
#line 1899 "handle_options.m"
        MR_Word libs__handle_options__V_1431_1431;
#line 1899 "handle_options.m"
        MR_String libs__handle_options__V_1432_1432;
#line 1899 "handle_options.m"
        MR_Word libs__handle_options__V_1436_1436;
#line 1899 "handle_options.m"
        MR_Word libs__handle_options__V_1438_1438;
#line 1899 "handle_options.m"
        MR_String libs__handle_options__V_1439_1439;

#line 1900 "handle_options.m"
        {
#line 1900 "handle_options.m"
          libs__globals__get_options_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_1422_1422, &libs__handle_options__OptionTable2_148);
        }
#line 1901 "handle_options.m"
        {
#line 1901 "handle_options.m"
          libs__options__option_table_add_mercury_library_directory_3_p_0(libs__handle_options__StdLibDir_147, libs__handle_options__OptionTable2_148, &libs__handle_options__OptionTable_149);
        }
#line 1903 "handle_options.m"
        {
#line 1903 "handle_options.m"
          libs__globals__set_options_3_p_0(libs__handle_options__OptionTable_149, libs__handle_options__STATE_VARIABLE_Globals_1422_1422, &libs__handle_options__STATE_VARIABLE_Globals_1426_1426);
        }
#line 1906 "handle_options.m"
        {
#line 1906 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1426_1426, (MR_Integer) 530, &libs__handle_options__LinkLibDirs0_150);
        }
#line 1909 "handle_options.m"
        {
#line 1909 "handle_options.m"
          libs__handle_options__V_1432_1432 = mercury__dir__f_slash_2_f_0(libs__handle_options__StdLibDir_147, (MR_String) "lib");
        }
#line 1909 "handle_options.m"
        {
#line 1909 "handle_options.m"
          libs__handle_options__V_1431_1431 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1909 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1431_1431, 0) = ((MR_Box) (libs__handle_options__V_1432_1432));
#line 1909 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1431_1431, 1) = ((MR_Box) (libs__handle_options__LinkLibDirs0_150));
#line 1909 "handle_options.m"
        }
#line 1909 "handle_options.m"
        {
#line 1909 "handle_options.m"
          libs__handle_options__V_1429_1429 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1909 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1429_1429, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1909 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1429_1429, 1) = ((MR_Box) (libs__handle_options__V_1431_1431));
#line 1909 "handle_options.m"
        }
#line 1908 "handle_options.m"
        {
#line 1908 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 530, libs__handle_options__V_1429_1429, libs__handle_options__STATE_VARIABLE_Globals_1426_1426, &libs__handle_options__STATE_VARIABLE_Globals_1430_1430);
        }
#line 1911 "handle_options.m"
        {
#line 1911 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1430_1430, (MR_Integer) 531, &libs__handle_options__Rpath0_151);
        }
#line 1914 "handle_options.m"
        {
#line 1914 "handle_options.m"
          libs__handle_options__V_1439_1439 = mercury__dir__f_slash_2_f_0(libs__handle_options__StdLibDir_147, (MR_String) "lib");
        }
#line 1914 "handle_options.m"
        {
#line 1914 "handle_options.m"
          libs__handle_options__V_1438_1438 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1914 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1438_1438, 0) = ((MR_Box) (libs__handle_options__V_1439_1439));
#line 1914 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1438_1438, 1) = ((MR_Box) (libs__handle_options__Rpath0_151));
#line 1914 "handle_options.m"
        }
#line 1914 "handle_options.m"
        {
#line 1914 "handle_options.m"
          libs__handle_options__V_1436_1436 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1914 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1436_1436, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1914 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1436_1436, 1) = ((MR_Box) (libs__handle_options__V_1438_1438));
#line 1914 "handle_options.m"
        }
#line 1913 "handle_options.m"
        {
#line 1913 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 531, libs__handle_options__V_1436_1436, libs__handle_options__STATE_VARIABLE_Globals_1430_1430, &libs__handle_options__STATE_VARIABLE_Globals_1437_1437);
        }
#line 1899 "handle_options.m"
      }
#line 1920 "handle_options.m"
    {
#line 1920 "handle_options.m"
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1437_1437, (MR_Integer) 619, &libs__handle_options__MaybeConfDir_152);
    }
#line 1928 "handle_options.m"
    if ((libs__handle_options__MaybeConfDir_152 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1929 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1445_1445 = libs__handle_options__STATE_VARIABLE_Globals_1437_1437;
#line 1928 "handle_options.m"
    else
#line 1923 "handle_options.m"
      {
#line 1923 "handle_options.m"
        MR_String libs__handle_options__ConfDir_153 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeConfDir_152, (MR_Integer) 0)));
#line 1923 "handle_options.m"
        MR_Word libs__handle_options__CIncludeDirs0_154;
#line 1923 "handle_options.m"
        MR_Word libs__handle_options__V_1444_1444;
#line 1923 "handle_options.m"
        MR_Word libs__handle_options__V_1446_1446;
#line 1923 "handle_options.m"
        MR_String libs__handle_options__V_1447_1447;

#line 1924 "handle_options.m"
        {
#line 1924 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1437_1437, (MR_Integer) 483, &libs__handle_options__CIncludeDirs0_154);
        }
#line 1927 "handle_options.m"
        {
#line 1927 "handle_options.m"
          libs__handle_options__V_1447_1447 = mercury__dir__f_slash_2_f_0(libs__handle_options__ConfDir_153, (MR_String) "conf");
        }
#line 1927 "handle_options.m"
        {
#line 1927 "handle_options.m"
          libs__handle_options__V_1446_1446 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1927 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1446_1446, 0) = ((MR_Box) (libs__handle_options__V_1447_1447));
#line 1927 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1446_1446, 1) = ((MR_Box) (libs__handle_options__CIncludeDirs0_154));
#line 1927 "handle_options.m"
        }
#line 1927 "handle_options.m"
        {
#line 1927 "handle_options.m"
          libs__handle_options__V_1444_1444 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1927 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1444_1444, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1927 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1444_1444, 1) = ((MR_Box) (libs__handle_options__V_1446_1446));
#line 1927 "handle_options.m"
        }
#line 1926 "handle_options.m"
        {
#line 1926 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 483, libs__handle_options__V_1444_1444, libs__handle_options__STATE_VARIABLE_Globals_1437_1437, &libs__handle_options__STATE_VARIABLE_Globals_1445_1445);
        }
#line 1923 "handle_options.m"
      }
#line 1933 "handle_options.m"
    {
#line 1933 "handle_options.m"
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1445_1445, (MR_Integer) 630, &libs__handle_options__ConfigFile_155);
    }
#line 1936 "handle_options.m"
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__ConfigFile_155)) == (MR_mktag((MR_Integer) 1)));
#line 1936 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1936 "handle_options.m"
      {
#line 1936 "handle_options.m"
        libs__handle_options__V_1450_1450 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__ConfigFile_155, (MR_Integer) 0)));
#line 1936 "handle_options.m"
        libs__handle_options__succeeded = (strcmp(libs__handle_options__V_1450_1450, (MR_String) "") == 0);
#line 1936 "handle_options.m"
      }
#line 1945 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1941 "handle_options.m"
      if ((libs__handle_options__MaybeConfDir_152 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1942 "handle_options.m"
        {
#line 1943 "handle_options.m"
          {
#line 1943 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 630, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[163]), libs__handle_options__STATE_VARIABLE_Globals_1445_1445, &libs__handle_options__STATE_VARIABLE_Globals_1457_1457);
          }
#line 1942 "handle_options.m"
        }
#line 1941 "handle_options.m"
      else
#line 1938 "handle_options.m"
        {
#line 1938 "handle_options.m"
          MR_String libs__handle_options__ConfDir1_156 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeConfDir_152, (MR_Integer) 0)));
#line 1938 "handle_options.m"
          MR_Word libs__handle_options__V_1456_1456;
#line 1938 "handle_options.m"
          MR_Word libs__handle_options__V_1458_1458;
#line 1938 "handle_options.m"
          MR_String libs__handle_options__V_1459_1459;
#line 1938 "handle_options.m"
          MR_String libs__handle_options__V_1460_1460;

#line 1940 "handle_options.m"
          {
#line 1940 "handle_options.m"
            libs__handle_options__V_1460_1460 = mercury__dir__f_slash_2_f_0(libs__handle_options__ConfDir1_156, (MR_String) "conf");
          }
#line 1940 "handle_options.m"
          {
#line 1940 "handle_options.m"
            libs__handle_options__V_1459_1459 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1460_1460, (MR_String) "Mercury.config");
          }
#line 1939 "handle_options.m"
          {
#line 1939 "handle_options.m"
            libs__handle_options__V_1458_1458 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1939 "handle_options.m"
            MR_hl_field(MR_mktag(1), libs__handle_options__V_1458_1458, 0) = ((MR_Box) (libs__handle_options__V_1459_1459));
#line 1939 "handle_options.m"
          }
#line 1939 "handle_options.m"
          {
#line 1939 "handle_options.m"
            libs__handle_options__V_1456_1456 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1939 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1456_1456, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1939 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1456_1456, 1) = ((MR_Box) (libs__handle_options__V_1458_1458));
#line 1939 "handle_options.m"
          }
#line 1939 "handle_options.m"
          {
#line 1939 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 630, libs__handle_options__V_1456_1456, libs__handle_options__STATE_VARIABLE_Globals_1445_1445, &libs__handle_options__STATE_VARIABLE_Globals_1457_1457);
          }
#line 1938 "handle_options.m"
        }
#line 1945 "handle_options.m"
    else
#line 1945 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1457_1457 = libs__handle_options__STATE_VARIABLE_Globals_1445_1445;
#line 1952 "handle_options.m"
    {
#line 1952 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1457_1457, (MR_Integer) 534, &libs__handle_options__MercuryLibDirs_157);
    }
#line 1954 "handle_options.m"
    {
#line 1954 "handle_options.m"
      libs__compute_grade__grade_directory_component_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_1457_1457, &libs__handle_options__GradeString_158);
    }
#line 2004 "handle_options.m"
    if ((libs__handle_options__MercuryLibDirs_157 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2005 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1514_1514 = libs__handle_options__STATE_VARIABLE_Globals_1457_1457;
#line 2004 "handle_options.m"
    else
#line 1956 "handle_options.m"
      {
#line 1956 "handle_options.m"
        MR_Word libs__handle_options__TypeCtorInfo_1681_1681 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1956 "handle_options.m"
        MR_Word libs__handle_options__ExtraLinkLibDirs_161;
#line 1956 "handle_options.m"
        MR_Word libs__handle_options__LinkLibDirs1_163;
#line 1956 "handle_options.m"
        MR_Word libs__handle_options__Rpath_164;
#line 1956 "handle_options.m"
        MR_Word libs__handle_options__ExtraIncludeDirs_165;
#line 1956 "handle_options.m"
        MR_Word libs__handle_options__CIncludeDirs_166;
#line 1956 "handle_options.m"
        MR_Word libs__handle_options__ErlangIncludeDirs_167;
#line 1956 "handle_options.m"
        MR_Word libs__handle_options__ExtraIntermodDirs_168;
#line 1956 "handle_options.m"
        MR_Word libs__handle_options__IntermodDirs0_169;
#line 1956 "handle_options.m"
        MR_Word libs__handle_options__ExtraInitDirs_170;
#line 1956 "handle_options.m"
        MR_Word libs__handle_options__InitDirs1_171;
#line 1956 "handle_options.m"
        MR_Word libs__handle_options__V_1464_1464;
#line 1956 "handle_options.m"
        MR_Word libs__handle_options__V_1471_1471;
#line 1956 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1472_1472;
#line 1956 "handle_options.m"
        MR_Word libs__handle_options__V_1473_1473;
#line 1956 "handle_options.m"
        MR_Word libs__handle_options__V_1476_1476;
#line 1956 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1477_1477;
#line 1956 "handle_options.m"
        MR_Word libs__handle_options__V_1478_1478;
#line 1956 "handle_options.m"
        MR_Word libs__handle_options__V_1479_1479;
#line 1956 "handle_options.m"
        MR_Word libs__handle_options__V_1488_1488;
#line 1956 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1489_1489;
#line 1956 "handle_options.m"
        MR_Word libs__handle_options__V_1490_1490;
#line 1956 "handle_options.m"
        MR_Word libs__handle_options__V_1493_1493;
#line 1956 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1494_1494;
#line 1956 "handle_options.m"
        MR_Word libs__handle_options__V_1495_1495;
#line 1956 "handle_options.m"
        MR_Word libs__handle_options__V_1496_1496;
#line 1956 "handle_options.m"
        MR_Word libs__handle_options__V_1503_1503;
#line 1956 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1504_1504;
#line 1956 "handle_options.m"
        MR_Word libs__handle_options__V_1505_1505;
#line 1956 "handle_options.m"
        MR_Word libs__handle_options__V_1506_1506;
#line 1956 "handle_options.m"
        MR_Word libs__handle_options__V_1513_1513;
#line 1956 "handle_options.m"
        MR_Word libs__handle_options__V_1515_1515;

#line 1957 "handle_options.m"
        {
#line 1957 "handle_options.m"
          libs__handle_options__V_1464_1464 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1957 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1464_1464, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[0]));
#line 1957 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1464_1464, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_1));
#line 1957 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1464_1464, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1957 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1464_1464, 3) = ((MR_Box) (libs__handle_options__GradeString_158));
#line 1957 "handle_options.m"
        }
#line 1957 "handle_options.m"
        {
#line 1957 "handle_options.m"
          libs__handle_options__ExtraLinkLibDirs_161 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1681_1681, libs__handle_options__TypeCtorInfo_1681_1681, libs__handle_options__V_1464_1464, libs__handle_options__MercuryLibDirs_157);
        }
#line 1962 "handle_options.m"
        {
#line 1962 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1457_1457, (MR_Integer) 530, &libs__handle_options__LinkLibDirs1_163);
        }
#line 1965 "handle_options.m"
        {
#line 1965 "handle_options.m"
          libs__handle_options__V_1473_1473 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1681_1681, libs__handle_options__LinkLibDirs1_163, libs__handle_options__ExtraLinkLibDirs_161);
        }
#line 1965 "handle_options.m"
        {
#line 1965 "handle_options.m"
          libs__handle_options__V_1471_1471 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1965 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1471_1471, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1965 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1471_1471, 1) = ((MR_Box) (libs__handle_options__V_1473_1473));
#line 1965 "handle_options.m"
        }
#line 1964 "handle_options.m"
        {
#line 1964 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 530, libs__handle_options__V_1471_1471, libs__handle_options__STATE_VARIABLE_Globals_1457_1457, &libs__handle_options__STATE_VARIABLE_Globals_1472_1472);
        }
#line 1967 "handle_options.m"
        {
#line 1967 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1472_1472, (MR_Integer) 531, &libs__handle_options__Rpath_164);
        }
#line 1970 "handle_options.m"
        {
#line 1970 "handle_options.m"
          libs__handle_options__V_1478_1478 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1681_1681, libs__handle_options__Rpath_164, libs__handle_options__ExtraLinkLibDirs_161);
        }
#line 1970 "handle_options.m"
        {
#line 1970 "handle_options.m"
          libs__handle_options__V_1476_1476 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1970 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1476_1476, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1970 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1476_1476, 1) = ((MR_Box) (libs__handle_options__V_1478_1478));
#line 1970 "handle_options.m"
        }
#line 1969 "handle_options.m"
        {
#line 1969 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 531, libs__handle_options__V_1476_1476, libs__handle_options__STATE_VARIABLE_Globals_1472_1472, &libs__handle_options__STATE_VARIABLE_Globals_1477_1477);
        }
#line 1972 "handle_options.m"
        {
#line 1972 "handle_options.m"
          libs__handle_options__V_1479_1479 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1972 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1479_1479, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[0]));
#line 1972 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1479_1479, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_2));
#line 1972 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1479_1479, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1972 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1479_1479, 3) = ((MR_Box) (libs__handle_options__GradeString_158));
#line 1972 "handle_options.m"
        }
#line 1972 "handle_options.m"
        {
#line 1972 "handle_options.m"
          libs__handle_options__ExtraIncludeDirs_165 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1681_1681, libs__handle_options__TypeCtorInfo_1681_1681, libs__handle_options__V_1479_1479, libs__handle_options__MercuryLibDirs_157);
        }
#line 1976 "handle_options.m"
        {
#line 1976 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1477_1477, (MR_Integer) 483, &libs__handle_options__CIncludeDirs_166);
        }
#line 1979 "handle_options.m"
        {
#line 1979 "handle_options.m"
          libs__handle_options__V_1490_1490 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1681_1681, libs__handle_options__ExtraIncludeDirs_165, libs__handle_options__CIncludeDirs_166);
        }
#line 1979 "handle_options.m"
        {
#line 1979 "handle_options.m"
          libs__handle_options__V_1488_1488 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1979 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1488_1488, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1979 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1488_1488, 1) = ((MR_Box) (libs__handle_options__V_1490_1490));
#line 1979 "handle_options.m"
        }
#line 1978 "handle_options.m"
        {
#line 1978 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 483, libs__handle_options__V_1488_1488, libs__handle_options__STATE_VARIABLE_Globals_1477_1477, &libs__handle_options__STATE_VARIABLE_Globals_1489_1489);
        }
#line 1980 "handle_options.m"
        {
#line 1980 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1489_1489, (MR_Integer) 521, &libs__handle_options__ErlangIncludeDirs_167);
        }
#line 1983 "handle_options.m"
        {
#line 1983 "handle_options.m"
          libs__handle_options__V_1495_1495 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1681_1681, libs__handle_options__ExtraIncludeDirs_165, libs__handle_options__ErlangIncludeDirs_167);
        }
#line 1983 "handle_options.m"
        {
#line 1983 "handle_options.m"
          libs__handle_options__V_1493_1493 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1983 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1493_1493, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1983 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1493_1493, 1) = ((MR_Box) (libs__handle_options__V_1495_1495));
#line 1983 "handle_options.m"
        }
#line 1982 "handle_options.m"
        {
#line 1982 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 521, libs__handle_options__V_1493_1493, libs__handle_options__STATE_VARIABLE_Globals_1489_1489, &libs__handle_options__STATE_VARIABLE_Globals_1494_1494);
        }
#line 1985 "handle_options.m"
        {
#line 1985 "handle_options.m"
          libs__handle_options__V_1496_1496 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1985 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1496_1496, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[0]));
#line 1985 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1496_1496, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_3));
#line 1985 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1496_1496, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1985 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1496_1496, 3) = ((MR_Box) (libs__handle_options__GradeString_158));
#line 1985 "handle_options.m"
        }
#line 1985 "handle_options.m"
        {
#line 1985 "handle_options.m"
          libs__handle_options__ExtraIntermodDirs_168 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1681_1681, libs__handle_options__TypeCtorInfo_1681_1681, libs__handle_options__V_1496_1496, libs__handle_options__MercuryLibDirs_157);
        }
#line 1990 "handle_options.m"
        {
#line 1990 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1494_1494, (MR_Integer) 635, &libs__handle_options__IntermodDirs0_169);
        }
#line 1993 "handle_options.m"
        {
#line 1993 "handle_options.m"
          libs__handle_options__V_1505_1505 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1681_1681, libs__handle_options__ExtraIntermodDirs_168, libs__handle_options__IntermodDirs0_169);
        }
#line 1993 "handle_options.m"
        {
#line 1993 "handle_options.m"
          libs__handle_options__V_1503_1503 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1993 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1503_1503, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1993 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1503_1503, 1) = ((MR_Box) (libs__handle_options__V_1505_1505));
#line 1993 "handle_options.m"
        }
#line 1992 "handle_options.m"
        {
#line 1992 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 635, libs__handle_options__V_1503_1503, libs__handle_options__STATE_VARIABLE_Globals_1494_1494, &libs__handle_options__STATE_VARIABLE_Globals_1504_1504);
        }
#line 1995 "handle_options.m"
        {
#line 1995 "handle_options.m"
          libs__handle_options__V_1506_1506 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1995 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1506_1506, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[0]));
#line 1995 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1506_1506, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_4));
#line 1995 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1506_1506, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1995 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1506_1506, 3) = ((MR_Box) (libs__handle_options__GradeString_158));
#line 1995 "handle_options.m"
        }
#line 1995 "handle_options.m"
        {
#line 1995 "handle_options.m"
          libs__handle_options__ExtraInitDirs_170 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1681_1681, libs__handle_options__TypeCtorInfo_1681_1681, libs__handle_options__V_1506_1506, libs__handle_options__MercuryLibDirs_157);
        }
#line 2000 "handle_options.m"
        {
#line 2000 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1504_1504, (MR_Integer) 542, &libs__handle_options__InitDirs1_171);
        }
#line 2003 "handle_options.m"
        {
#line 2003 "handle_options.m"
          libs__handle_options__V_1515_1515 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1681_1681, libs__handle_options__InitDirs1_171, libs__handle_options__ExtraInitDirs_170);
        }
#line 2003 "handle_options.m"
        {
#line 2003 "handle_options.m"
          libs__handle_options__V_1513_1513 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2003 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1513_1513, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2003 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1513_1513, 1) = ((MR_Box) (libs__handle_options__V_1515_1515));
#line 2003 "handle_options.m"
        }
#line 2002 "handle_options.m"
        {
#line 2002 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 542, libs__handle_options__V_1513_1513, libs__handle_options__STATE_VARIABLE_Globals_1504_1504, &libs__handle_options__STATE_VARIABLE_Globals_1514_1514);
        }
#line 1956 "handle_options.m"
      }
#line 2011 "handle_options.m"
    {
#line 2011 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1514_1514, (MR_Integer) 636, &libs__handle_options__UseSearchDirs_172);
    }
#line 2021 "handle_options.m"
#line 2021 "handle_options.m"
    switch (libs__handle_options__UseSearchDirs_172) {
#line 2021 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2021 "handle_options.m"
      case (MR_Integer) 0:
#line 2022 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1521_1521 = libs__handle_options__STATE_VARIABLE_Globals_1514_1514;
#line 2021 "handle_options.m"
        break;
#line 2021 "handle_options.m"
      case (MR_Integer) 1:
#line 2014 "handle_options.m"
        {
#line 2014 "handle_options.m"
          MR_Word libs__handle_options__IntermodDirs1_173;
#line 2014 "handle_options.m"
          MR_Word libs__handle_options__SearchDirs_174;
#line 2014 "handle_options.m"
          MR_Word libs__handle_options__V_1520_1520;
#line 2014 "handle_options.m"
          MR_Word libs__handle_options__V_1522_1522;

#line 2015 "handle_options.m"
          {
#line 2015 "handle_options.m"
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1514_1514, (MR_Integer) 635, &libs__handle_options__IntermodDirs1_173);
          }
#line 2017 "handle_options.m"
          {
#line 2017 "handle_options.m"
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1514_1514, (MR_Integer) 634, &libs__handle_options__SearchDirs_174);
          }
#line 2020 "handle_options.m"
          {
#line 2020 "handle_options.m"
            libs__handle_options__V_1522_1522 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__IntermodDirs1_173, libs__handle_options__SearchDirs_174);
          }
#line 2020 "handle_options.m"
          {
#line 2020 "handle_options.m"
            libs__handle_options__V_1520_1520 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2020 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1520_1520, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2020 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1520_1520, 1) = ((MR_Box) (libs__handle_options__V_1522_1522));
#line 2020 "handle_options.m"
          }
#line 2019 "handle_options.m"
          {
#line 2019 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 635, libs__handle_options__V_1520_1520, libs__handle_options__STATE_VARIABLE_Globals_1514_1514, &libs__handle_options__STATE_VARIABLE_Globals_1521_1521);
          }
#line 2014 "handle_options.m"
        }
#line 2021 "handle_options.m"
        break;
#line 2021 "handle_options.m"
    }
#line 2025 "handle_options.m"
    {
#line 2025 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1521_1521, (MR_Integer) 633, &libs__handle_options__UseGradeSubdirs_175);
    }
#line 2027 "handle_options.m"
    {
#line 2027 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1521_1521, (MR_Integer) 536, &libs__handle_options__SearchLibFilesDirs_176);
    }
#line 2029 "handle_options.m"
    {
#line 2029 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1521_1521, (MR_Integer) 635, &libs__handle_options__IntermodDirs2_177);
    }
#line 2031 "handle_options.m"
    {
#line 2031 "handle_options.m"
      libs__handle_options__ToGradeSubdir_178 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2031 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_178, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
#line 2031 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_178, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_5));
#line 2031 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_178, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2031 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_178, 3) = ((MR_Box) (libs__handle_options__TargetArch_145));
#line 2031 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_178, 4) = ((MR_Box) (libs__handle_options__GradeString_158));
#line 2031 "handle_options.m"
    }
#line 8670 "libs.handle_options.c"
#line 8671 "libs.handle_options.c"
    switch (libs__handle_options__UseGradeSubdirs_175) {
#line 8673 "libs.handle_options.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 8675 "libs.handle_options.c"
      case (MR_Integer) 0:
#line 8677 "libs.handle_options.c"
        {
#line 8679 "libs.handle_options.c"
          MR_Word libs__handle_options__TypeCtorInfo_1690_1690;
#line 8681 "libs.handle_options.c"
          MR_Word libs__handle_options__IntermodDirs3_182;
#line 8683 "libs.handle_options.c"
          MR_Word libs__handle_options__LinkLibDirs2_183;
#line 8685 "libs.handle_options.c"
          MR_Word libs__handle_options__InitDirs2_184;
#line 8687 "libs.handle_options.c"
          MR_Word libs__handle_options__V_1541_1541;

#line 2052 "handle_options.m"
          {
#line 2052 "handle_options.m"
            libs__handle_options__IntermodDirs3_182 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__SearchLibFilesDirs_176, libs__handle_options__IntermodDirs2_177);
          }
#line 2055 "handle_options.m"
          {
#line 2055 "handle_options.m"
            libs__handle_options__V_1541_1541 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2055 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1541_1541, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2055 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1541_1541, 1) = ((MR_Box) (libs__handle_options__IntermodDirs3_182));
#line 2055 "handle_options.m"
          }
#line 2054 "handle_options.m"
          {
#line 2054 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 635, libs__handle_options__V_1541_1541, libs__handle_options__STATE_VARIABLE_Globals_1521_1521, &libs__handle_options__STATE_VARIABLE_Globals_1542_1542);
          }
#line 2057 "handle_options.m"
          {
#line 2057 "handle_options.m"
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1542_1542, (MR_Integer) 530, &libs__handle_options__LinkLibDirs2_183);
          }
#line 2059 "handle_options.m"
          {
#line 2059 "handle_options.m"
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1542_1542, (MR_Integer) 542, &libs__handle_options__InitDirs2_184);
          }
#line 8720 "libs.handle_options.c"
          libs__handle_options__TypeCtorInfo_1690_1690 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2077 "handle_options.m"
          {
#line 2077 "handle_options.m"
            libs__handle_options__LinkLibDirs_187 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1690_1690, libs__handle_options__SearchLibFilesDirs_176, libs__handle_options__LinkLibDirs2_183);
          }
#line 2078 "handle_options.m"
          {
#line 2078 "handle_options.m"
            libs__handle_options__InitDirs_190 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1690_1690, libs__handle_options__SearchLibFilesDirs_176, libs__handle_options__InitDirs2_184);
          }
#line 8732 "libs.handle_options.c"
        }
#line 8734 "libs.handle_options.c"
        break;
#line 8736 "libs.handle_options.c"
      case (MR_Integer) 1:
#line 8738 "libs.handle_options.c"
        {
#line 8740 "libs.handle_options.c"
          MR_Word libs__handle_options__TypeCtorInfo_1683_1683;
#line 8742 "libs.handle_options.c"
          MR_Word libs__handle_options__TypeCtorInfo_1689_1689;
#line 8744 "libs.handle_options.c"
          MR_String libs__handle_options__GradeSubdir_180;
#line 8746 "libs.handle_options.c"
          MR_Word libs__handle_options__SearchLibFilesGradeSubdirs_181;
#line 8748 "libs.handle_options.c"
          MR_Word libs__handle_options__ToGradeLibDir_185;
#line 8750 "libs.handle_options.c"
          MR_Word libs__handle_options__SearchGradeLibDirs_186;
#line 8752 "libs.handle_options.c"
          MR_Word libs__handle_options__ToGradeInitDir_188;
#line 8754 "libs.handle_options.c"
          MR_Word libs__handle_options__SearchGradeInitDirs_189;
#line 8756 "libs.handle_options.c"
          MR_String libs__handle_options__V_1531_1531;
#line 8758 "libs.handle_options.c"
          MR_Word libs__handle_options__V_1533_1533;
#line 8760 "libs.handle_options.c"
          MR_Word libs__handle_options__V_1535_1535;
#line 8762 "libs.handle_options.c"
          MR_Word libs__handle_options__V_1536_1536;
#line 8764 "libs.handle_options.c"
          MR_Word libs__handle_options__V_1537_1537;
#line 8766 "libs.handle_options.c"
          MR_Word libs__handle_options__V_1538_1538;
#line 8768 "libs.handle_options.c"
          MR_String libs__handle_options__V_1539_1539;
#line 8770 "libs.handle_options.c"
          MR_Word libs__handle_options__IntermodDirs3_6176;
#line 8772 "libs.handle_options.c"
          MR_Word libs__handle_options__LinkLibDirs2_6177;
#line 8774 "libs.handle_options.c"
          MR_Word libs__handle_options__InitDirs2_6178;
#line 8776 "libs.handle_options.c"
          MR_Word libs__handle_options__V_6179_6179;

#line 2042 "handle_options.m"
          {
#line 2042 "handle_options.m"
            libs__handle_options__V_1531_1531 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", libs__handle_options__GradeString_158);
          }
#line 2042 "handle_options.m"
          {
#line 2042 "handle_options.m"
            libs__handle_options__GradeSubdir_180 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1531_1531, libs__handle_options__TargetArch_145);
          }
#line 8789 "libs.handle_options.c"
          libs__handle_options__TypeCtorInfo_1683_1683 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2046 "handle_options.m"
          {
#line 2046 "handle_options.m"
            libs__handle_options__SearchLibFilesGradeSubdirs_181 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1683_1683, libs__handle_options__TypeCtorInfo_1683_1683, libs__handle_options__ToGradeSubdir_178, libs__handle_options__SearchLibFilesDirs_176);
          }
#line 2048 "handle_options.m"
          {
#line 2048 "handle_options.m"
            libs__handle_options__V_1533_1533 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2048 "handle_options.m"
            MR_hl_field(MR_mktag(1), libs__handle_options__V_1533_1533, 0) = ((MR_Box) (libs__handle_options__GradeSubdir_180));
#line 2048 "handle_options.m"
            MR_hl_field(MR_mktag(1), libs__handle_options__V_1533_1533, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2048 "handle_options.m"
          }
#line 2049 "handle_options.m"
          {
#line 2049 "handle_options.m"
            libs__handle_options__V_1539_1539 = mercury__dir__this_directory_0_f_0();
          }
#line 2049 "handle_options.m"
          {
#line 2049 "handle_options.m"
            libs__handle_options__V_1538_1538 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2049 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1538_1538, 0) = ((MR_Box) (&libs__handle_options_scalar_common_2[4]));
#line 2049 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1538_1538, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_6));
#line 2049 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1538_1538, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2049 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1538_1538, 3) = ((MR_Box) (libs__handle_options__V_1539_1539));
#line 2049 "handle_options.m"
          }
#line 2049 "handle_options.m"
          {
#line 2049 "handle_options.m"
            libs__handle_options__V_1537_1537 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2049 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1537_1537, 0) = ((MR_Box) (&libs__handle_options_scalar_common_2[5]));
#line 2049 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1537_1537, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_7));
#line 2049 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1537_1537, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2049 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1537_1537, 3) = ((MR_Box) (libs__handle_options__V_1538_1538));
#line 2049 "handle_options.m"
          }
#line 2049 "handle_options.m"
          {
#line 2049 "handle_options.m"
            libs__handle_options__V_1536_1536 = mercury__list__filter_2_f_0(libs__handle_options__TypeCtorInfo_1683_1683, libs__handle_options__V_1537_1537, libs__handle_options__IntermodDirs2_177);
          }
#line 2048 "handle_options.m"
          {
#line 2048 "handle_options.m"
            libs__handle_options__V_1535_1535 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1683_1683, libs__handle_options__SearchLibFilesGradeSubdirs_181, libs__handle_options__V_1536_1536);
          }
#line 2048 "handle_options.m"
          {
#line 2048 "handle_options.m"
            libs__handle_options__IntermodDirs3_6176 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1683_1683, libs__handle_options__V_1533_1533, libs__handle_options__V_1535_1535);
          }
#line 2055 "handle_options.m"
          {
#line 2055 "handle_options.m"
            libs__handle_options__V_6179_6179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2055 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_6179_6179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2055 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_6179_6179, 1) = ((MR_Box) (libs__handle_options__IntermodDirs3_6176));
#line 2055 "handle_options.m"
          }
#line 2054 "handle_options.m"
          {
#line 2054 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 635, libs__handle_options__V_6179_6179, libs__handle_options__STATE_VARIABLE_Globals_1521_1521, &libs__handle_options__STATE_VARIABLE_Globals_1542_1542);
          }
#line 2057 "handle_options.m"
          {
#line 2057 "handle_options.m"
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1542_1542, (MR_Integer) 530, &libs__handle_options__LinkLibDirs2_6177);
          }
#line 2059 "handle_options.m"
          {
#line 2059 "handle_options.m"
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1542_1542, (MR_Integer) 542, &libs__handle_options__InitDirs2_6178);
          }
#line 2067 "handle_options.m"
          {
#line 2067 "handle_options.m"
            libs__handle_options__ToGradeLibDir_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2067 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_185, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
#line 2067 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_185, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_8));
#line 2067 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_185, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2067 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_185, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_178));
#line 2067 "handle_options.m"
          }
#line 8893 "libs.handle_options.c"
          libs__handle_options__TypeCtorInfo_1689_1689 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2068 "handle_options.m"
          {
#line 2068 "handle_options.m"
            libs__handle_options__SearchGradeLibDirs_186 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1689_1689, libs__handle_options__TypeCtorInfo_1689_1689, libs__handle_options__ToGradeLibDir_185, libs__handle_options__SearchLibFilesDirs_176);
          }
#line 2069 "handle_options.m"
          {
#line 2069 "handle_options.m"
            libs__handle_options__LinkLibDirs_187 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1689_1689, libs__handle_options__SearchGradeLibDirs_186, libs__handle_options__LinkLibDirs2_6177);
          }
#line 2071 "handle_options.m"
          {
#line 2071 "handle_options.m"
            libs__handle_options__ToGradeInitDir_188 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2071 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_188, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
#line 2071 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_188, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_9));
#line 2071 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_188, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2071 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_188, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_178));
#line 2071 "handle_options.m"
          }
#line 2073 "handle_options.m"
          {
#line 2073 "handle_options.m"
            libs__handle_options__SearchGradeInitDirs_189 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1689_1689, libs__handle_options__TypeCtorInfo_1689_1689, libs__handle_options__ToGradeInitDir_188, libs__handle_options__SearchLibFilesDirs_176);
          }
#line 2074 "handle_options.m"
          {
#line 2074 "handle_options.m"
            libs__handle_options__InitDirs_190 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1689_1689, libs__handle_options__SearchGradeInitDirs_189, libs__handle_options__InitDirs2_6178);
          }
#line 8929 "libs.handle_options.c"
        }
#line 8931 "libs.handle_options.c"
        break;
#line 8933 "libs.handle_options.c"
    }
#line 2081 "handle_options.m"
    {
#line 2081 "handle_options.m"
      libs__handle_options__V_1558_1558 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2081 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1558_1558, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2081 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1558_1558, 1) = ((MR_Box) (libs__handle_options__LinkLibDirs_187));
#line 2081 "handle_options.m"
    }
#line 2080 "handle_options.m"
    {
#line 2080 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 530, libs__handle_options__V_1558_1558, libs__handle_options__STATE_VARIABLE_Globals_1542_1542, &libs__handle_options__STATE_VARIABLE_Globals_1559_1559);
    }
#line 2083 "handle_options.m"
    {
#line 2083 "handle_options.m"
      libs__handle_options__V_1561_1561 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2083 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1561_1561, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2083 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1561_1561, 1) = ((MR_Box) (libs__handle_options__InitDirs_190));
#line 2083 "handle_options.m"
    }
#line 2082 "handle_options.m"
    {
#line 2082 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 542, libs__handle_options__V_1561_1561, libs__handle_options__STATE_VARIABLE_Globals_1559_1559, &libs__handle_options__STATE_VARIABLE_Globals_1562_1562);
    }
#line 2089 "handle_options.m"
    {
#line 2089 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1562_1562, (MR_Integer) 632, &libs__handle_options__UseSubdirs_191);
    }
#line 2097 "handle_options.m"
#line 2097 "handle_options.m"
    switch (libs__handle_options__UseGradeSubdirs_175) {
#line 2097 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2097 "handle_options.m"
      case (MR_Integer) 0:
#line 2098 "handle_options.m"
        {
#line 8979 "libs.handle_options.c"
          libs__handle_options__succeeded = (libs__handle_options__UseSubdirs_191 == (MR_Integer) 1);
#line 2098 "handle_options.m"
          if (libs__handle_options__succeeded)
#line 2098 "handle_options.m"
            {
#line 2101 "handle_options.m"
              libs__handle_options__ToMihsSubdir_192 = (MR_Word) &libs__handle_options_scalar_common_3[9];
#line 2102 "handle_options.m"
              libs__handle_options__ToHrlsSubdir_193 = (MR_Word) &libs__handle_options_scalar_common_3[10];
#line 2102 "handle_options.m"
              libs__handle_options__succeeded = MR_TRUE;
#line 2098 "handle_options.m"
            }
#line 2098 "handle_options.m"
        }
#line 2097 "handle_options.m"
        break;
#line 2097 "handle_options.m"
      case (MR_Integer) 1:
#line 2092 "handle_options.m"
        {
#line 2093 "handle_options.m"
          {
#line 2093 "handle_options.m"
            libs__handle_options__ToMihsSubdir_192 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2093 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_192, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
#line 2093 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_192, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_12));
#line 2093 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_192, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2093 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_192, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_178));
#line 2093 "handle_options.m"
          }
#line 2095 "handle_options.m"
          {
#line 2095 "handle_options.m"
            libs__handle_options__ToHrlsSubdir_193 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2095 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_193, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
#line 2095 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_193, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_13));
#line 2095 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_193, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2095 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_193, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_178));
#line 2095 "handle_options.m"
          }
#line 2092 "handle_options.m"
          libs__handle_options__succeeded = MR_TRUE;
#line 2092 "handle_options.m"
        }
#line 2097 "handle_options.m"
        break;
#line 2097 "handle_options.m"
    }
#line 2124 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2110 "handle_options.m"
      {
#line 2110 "handle_options.m"
        MR_Word libs__handle_options__TypeCtorInfo_1691_1691;
#line 2110 "handle_options.m"
        MR_Word libs__handle_options__CIncludeDirs1_194;
#line 2110 "handle_options.m"
        MR_String libs__handle_options__MihsSubdir_195;
#line 2110 "handle_options.m"
        MR_Word libs__handle_options__SearchLibMihsSubdirs_196;
#line 2110 "handle_options.m"
        MR_Word libs__handle_options__SubdirCIncludeDirs_197;
#line 2110 "handle_options.m"
        MR_Word libs__handle_options__ErlangIncludeDirs1_198;
#line 2110 "handle_options.m"
        MR_String libs__handle_options__HrlsSubdir_199;
#line 2110 "handle_options.m"
        MR_Word libs__handle_options__SubdirErlangIncludeDirs_200;
#line 2110 "handle_options.m"
        MR_String libs__handle_options__V_1587_1587;
#line 2110 "handle_options.m"
        MR_String libs__handle_options__V_1588_1588;
#line 2110 "handle_options.m"
        MR_Word libs__handle_options__V_1589_1589;
#line 2110 "handle_options.m"
        MR_Word libs__handle_options__V_1590_1590;
#line 2110 "handle_options.m"
        MR_Word libs__handle_options__V_1592_1592;
#line 2110 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1593_1593;
#line 2110 "handle_options.m"
        MR_String libs__handle_options__V_1595_1595;
#line 2110 "handle_options.m"
        MR_Word libs__handle_options__V_1597_1597;
#line 2111 "handle_options.m"
        MR_Box MR_CALL (* libs__handle_options__func_11)(MR_Box, MR_Box);
#line 2111 "handle_options.m"
        MR_Box libs__handle_options__conv12_MihsSubdir_195;
#line 2120 "handle_options.m"
        MR_Box MR_CALL (* libs__handle_options__func_13)(MR_Box, MR_Box);
#line 2120 "handle_options.m"
        MR_Box libs__handle_options__conv14_HrlsSubdir_199;

#line 2109 "handle_options.m"
        {
#line 2109 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1562_1562, (MR_Integer) 483, &libs__handle_options__CIncludeDirs1_194);
        }
#line 2111 "handle_options.m"
        {
#line 2111 "handle_options.m"
          libs__handle_options__V_1587_1587 = mercury__dir__this_directory_0_f_0();
        }
#line 2111 "handle_options.m"
        libs__handle_options__func_11 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_192, (MR_Integer) 1)));
#line 2111 "handle_options.m"
        {
#line 2111 "handle_options.m"
          libs__handle_options__conv12_MihsSubdir_195 = libs__handle_options__func_11(((MR_Box) libs__handle_options__ToMihsSubdir_192), ((MR_Box) (libs__handle_options__V_1587_1587)));
        }
#line 2111 "handle_options.m"
        libs__handle_options__MihsSubdir_195 = ((MR_String) libs__handle_options__conv12_MihsSubdir_195);
#line 9101 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_1691_1691 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2112 "handle_options.m"
        {
#line 2112 "handle_options.m"
          libs__handle_options__SearchLibMihsSubdirs_196 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1691_1691, libs__handle_options__TypeCtorInfo_1691_1691, libs__handle_options__ToMihsSubdir_192, libs__handle_options__SearchLibFilesDirs_176);
        }
#line 2113 "handle_options.m"
        {
#line 2113 "handle_options.m"
          libs__handle_options__V_1588_1588 = mercury__dir__this_directory_0_f_0();
        }
#line 2114 "handle_options.m"
        {
#line 2114 "handle_options.m"
          libs__handle_options__V_1590_1590 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1691_1691, libs__handle_options__SearchLibMihsSubdirs_196, libs__handle_options__CIncludeDirs1_194);
        }
#line 2113 "handle_options.m"
        {
#line 2113 "handle_options.m"
          libs__handle_options__V_1589_1589 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2113 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1589_1589, 0) = ((MR_Box) (libs__handle_options__MihsSubdir_195));
#line 2113 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1589_1589, 1) = ((MR_Box) (libs__handle_options__V_1590_1590));
#line 2113 "handle_options.m"
        }
#line 2113 "handle_options.m"
        {
#line 2113 "handle_options.m"
          libs__handle_options__SubdirCIncludeDirs_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2113 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirCIncludeDirs_197, 0) = ((MR_Box) (libs__handle_options__V_1588_1588));
#line 2113 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirCIncludeDirs_197, 1) = ((MR_Box) (libs__handle_options__V_1589_1589));
#line 2113 "handle_options.m"
        }
#line 2116 "handle_options.m"
        {
#line 2116 "handle_options.m"
          libs__handle_options__V_1592_1592 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2116 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1592_1592, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2116 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1592_1592, 1) = ((MR_Box) (libs__handle_options__SubdirCIncludeDirs_197));
#line 2116 "handle_options.m"
        }
#line 2115 "handle_options.m"
        {
#line 2115 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 483, libs__handle_options__V_1592_1592, libs__handle_options__STATE_VARIABLE_Globals_1562_1562, &libs__handle_options__STATE_VARIABLE_Globals_1593_1593);
        }
#line 2118 "handle_options.m"
        {
#line 2118 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1593_1593, (MR_Integer) 521, &libs__handle_options__ErlangIncludeDirs1_198);
        }
#line 2120 "handle_options.m"
        {
#line 2120 "handle_options.m"
          libs__handle_options__V_1595_1595 = mercury__dir__this_directory_0_f_0();
        }
#line 2120 "handle_options.m"
        libs__handle_options__func_13 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_193, (MR_Integer) 1)));
#line 2120 "handle_options.m"
        {
#line 2120 "handle_options.m"
          libs__handle_options__conv14_HrlsSubdir_199 = libs__handle_options__func_13(((MR_Box) libs__handle_options__ToHrlsSubdir_193), ((MR_Box) (libs__handle_options__V_1595_1595)));
        }
#line 2120 "handle_options.m"
        libs__handle_options__HrlsSubdir_199 = ((MR_String) libs__handle_options__conv14_HrlsSubdir_199);
#line 2121 "handle_options.m"
        {
#line 2121 "handle_options.m"
          libs__handle_options__SubdirErlangIncludeDirs_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2121 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirErlangIncludeDirs_200, 0) = ((MR_Box) (libs__handle_options__HrlsSubdir_199));
#line 2121 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirErlangIncludeDirs_200, 1) = ((MR_Box) (libs__handle_options__ErlangIncludeDirs1_198));
#line 2121 "handle_options.m"
        }
#line 2123 "handle_options.m"
        {
#line 2123 "handle_options.m"
          libs__handle_options__V_1597_1597 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2123 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1597_1597, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2123 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1597_1597, 1) = ((MR_Box) (libs__handle_options__SubdirErlangIncludeDirs_200));
#line 2123 "handle_options.m"
        }
#line 2122 "handle_options.m"
        {
#line 2122 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 521, libs__handle_options__V_1597_1597, libs__handle_options__STATE_VARIABLE_Globals_1593_1593, &libs__handle_options__STATE_VARIABLE_Globals_1598_1598);
        }
#line 2110 "handle_options.m"
      }
#line 2124 "handle_options.m"
    else
#line 2124 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1598_1598 = libs__handle_options__STATE_VARIABLE_Globals_1562_1562;
#line 2130 "handle_options.m"
    {
#line 2130 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 322, (MR_Integer) 12, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1598_1598, &libs__handle_options__STATE_VARIABLE_Globals_1602_1602);
    }
#line 1734 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_108 == (MR_Integer) 1);
#line 1734 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1734 "handle_options.m"
      {
#line 1735 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__GC_Method_28 == (MR_Integer) 5);
#line 1734 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1736 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__PutNondetEnvOnHeap_133 == (MR_Integer) 1);
#line 1734 "handle_options.m"
      }
#line 9222 "libs.handle_options.c"
    if (libs__handle_options__succeeded)
#line 9224 "libs.handle_options.c"
      {
#line 9226 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Specs_1300_1300;

#line 1741 "handle_options.m"
        {
#line 1741 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[150]), libs__handle_options__STATE_VARIABLE_Specs_1205_1205, &libs__handle_options__STATE_VARIABLE_Specs_1300_1300);
        }
#line 2143 "handle_options.m"
        {
#line 2143 "handle_options.m"
          libs__handle_options__option_requires_7_p_0((MR_Integer) 25, (MR_Integer) 449, libs__handle_options__V_318_318, (MR_String) "--warn-non-tail-recursion requires --optimize-tailcalls", libs__handle_options__STATE_VARIABLE_Globals_1602_1602, libs__handle_options__STATE_VARIABLE_Specs_1300_1300, &libs__handle_options__STATE_VARIABLE_Specs_1614_1614);
        }
#line 9239 "libs.handle_options.c"
      }
#line 9241 "libs.handle_options.c"
    else
#line 2141 "handle_options.m"
#line 2141 "handle_options.m"
      switch (libs__handle_options__HighLevelCode_108) {
#line 2141 "handle_options.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 2141 "handle_options.m"
        case (MR_Integer) 0:
#line 2136 "handle_options.m"
          {
#line 2137 "handle_options.m"
            {
#line 2137 "handle_options.m"
              libs__handle_options__option_requires_7_p_0((MR_Integer) 25, (MR_Integer) 460, libs__handle_options__V_467_467, (MR_String) "--warn-non-tail-recursion is incompatible with --pessimize-tailcalls", libs__handle_options__STATE_VARIABLE_Globals_1602_1602, libs__handle_options__STATE_VARIABLE_Specs_1205_1205, &libs__handle_options__STATE_VARIABLE_Specs_1614_1614);
            }
#line 2136 "handle_options.m"
          }
#line 2141 "handle_options.m"
          break;
#line 2141 "handle_options.m"
        case (MR_Integer) 1:
#line 2142 "handle_options.m"
          {
#line 2143 "handle_options.m"
            {
#line 2143 "handle_options.m"
              libs__handle_options__option_requires_7_p_0((MR_Integer) 25, (MR_Integer) 449, libs__handle_options__V_318_318, (MR_String) "--warn-non-tail-recursion requires --optimize-tailcalls", libs__handle_options__STATE_VARIABLE_Globals_1602_1602, libs__handle_options__STATE_VARIABLE_Specs_1205_1205, &libs__handle_options__STATE_VARIABLE_Specs_1614_1614);
            }
#line 2142 "handle_options.m"
          }
#line 2141 "handle_options.m"
          break;
#line 2141 "handle_options.m"
      }
#line 2147 "handle_options.m"
    {
#line 2147 "handle_options.m"
      libs__handle_options__option_requires_7_p_0((MR_Integer) 25, (MR_Integer) 97, libs__handle_options__V_467_467, (MR_String) "--warn-non-tail-recursion is incompatible with --errorcheck-only", libs__handle_options__STATE_VARIABLE_Globals_1602_1602, libs__handle_options__STATE_VARIABLE_Specs_1614_1614, &libs__handle_options__STATE_VARIABLE_Specs_1622_1622);
    }
#line 2156 "handle_options.m"
#line 2156 "handle_options.m"
    switch (libs__handle_options__Target_27) {
#line 2156 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2156 "handle_options.m"
      case (MR_Integer) 0:
#line 2154 "handle_options.m"
        {
#line 2155 "handle_options.m"
          libs__handle_options__BackendForeignLanguages_201 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[164]);
#line 2154 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1634_1634 = libs__handle_options__STATE_VARIABLE_Globals_1602_1602;
#line 2154 "handle_options.m"
        }
#line 2156 "handle_options.m"
        break;
#line 2156 "handle_options.m"
      case (MR_Integer) 1:
#line 2157 "handle_options.m"
        {
#line 2158 "handle_options.m"
          libs__handle_options__BackendForeignLanguages_201 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[165]);
#line 2157 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1634_1634 = libs__handle_options__STATE_VARIABLE_Globals_1602_1602;
#line 2157 "handle_options.m"
        }
#line 2156 "handle_options.m"
        break;
#line 2156 "handle_options.m"
      case (MR_Integer) 3:
#line 2163 "handle_options.m"
        {
#line 2163 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1630_1630;

#line 2164 "handle_options.m"
          libs__handle_options__BackendForeignLanguages_201 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[166]);
#line 2165 "handle_options.m"
          {
#line 2165 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 358, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1602_1602, &libs__handle_options__STATE_VARIABLE_Globals_1630_1630);
          }
#line 2166 "handle_options.m"
          {
#line 2166 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 292, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1630_1630, &libs__handle_options__STATE_VARIABLE_Globals_1634_1634);
          }
#line 2163 "handle_options.m"
        }
#line 2156 "handle_options.m"
        break;
#line 2156 "handle_options.m"
      case (MR_Integer) 2:
#line 2160 "handle_options.m"
        {
#line 2161 "handle_options.m"
          libs__handle_options__BackendForeignLanguages_201 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[167]);
#line 2160 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1634_1634 = libs__handle_options__STATE_VARIABLE_Globals_1602_1602;
#line 2160 "handle_options.m"
        }
#line 2156 "handle_options.m"
        break;
#line 2156 "handle_options.m"
    }
#line 2170 "handle_options.m"
    {
#line 2170 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1634_1634, (MR_Integer) 258, &libs__handle_options__CurrentBackendForeignLanguage_202);
    }
#line 2176 "handle_options.m"
    if ((libs__handle_options__CurrentBackendForeignLanguage_202 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2173 "handle_options.m"
      {
#line 2173 "handle_options.m"
        MR_Word libs__handle_options__V_1644_1644;

#line 2175 "handle_options.m"
        {
#line 2175 "handle_options.m"
          libs__handle_options__V_1644_1644 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2175 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1644_1644, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2175 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1644_1644, 1) = ((MR_Box) (libs__handle_options__BackendForeignLanguages_201));
#line 2175 "handle_options.m"
        }
#line 2174 "handle_options.m"
        {
#line 2174 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 258, libs__handle_options__V_1644_1644, libs__handle_options__STATE_VARIABLE_Globals_1634_1634, &libs__handle_options__STATE_VARIABLE_Globals_1645_1645);
        }
#line 2173 "handle_options.m"
      }
#line 2176 "handle_options.m"
    else
#line 2177 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1645_1645 = libs__handle_options__STATE_VARIABLE_Globals_1634_1634;
#line 2180 "handle_options.m"
    {
#line 2180 "handle_options.m"
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1645_1645, (MR_Integer) 310, &libs__handle_options__CompareSpec_205);
    }
#line 2182 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__CompareSpec_205 < (MR_Integer) 0);
#line 2194 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2190 "handle_options.m"
#line 2190 "handle_options.m"
      switch (libs__handle_options__HighLevelCode_108) {
#line 2190 "handle_options.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 2190 "handle_options.m"
        case (MR_Integer) 0:
#line 2188 "handle_options.m"
          {
#line 2189 "handle_options.m"
            {
#line 2189 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 310, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[6]), libs__handle_options__STATE_VARIABLE_Globals_1645_1645, &libs__handle_options__STATE_VARIABLE_Globals_1654_1654);
            }
#line 2188 "handle_options.m"
          }
#line 2190 "handle_options.m"
          break;
#line 2190 "handle_options.m"
        case (MR_Integer) 1:
#line 2191 "handle_options.m"
          {
#line 2192 "handle_options.m"
            {
#line 2192 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 310, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[7]), libs__handle_options__STATE_VARIABLE_Globals_1645_1645, &libs__handle_options__STATE_VARIABLE_Globals_1654_1654);
            }
#line 2191 "handle_options.m"
          }
#line 2190 "handle_options.m"
          break;
#line 2190 "handle_options.m"
      }
#line 2194 "handle_options.m"
    else
#line 2194 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1654_1654 = libs__handle_options__STATE_VARIABLE_Globals_1645_1645;
#line 2201 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__Target_27 == (MR_Integer) 0);
#line 2201 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2201 "handle_options.m"
      {
#line 2207 "handle_options.m"
#line 2207 "handle_options.m"
        switch (libs__handle_options__TagsMethod_59) {
#line 2207 "handle_options.m"
          default:
#line 2207 "handle_options.m"
            libs__handle_options__succeeded = MR_FALSE;
#line 2207 "handle_options.m"
            break;
#line 2207 "handle_options.m"
          case (MR_Integer) 2:
#line 2207 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 2207 "handle_options.m"
            break;
#line 2207 "handle_options.m"
          case (MR_Integer) 1:
#line 2206 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 2207 "handle_options.m"
            break;
#line 2207 "handle_options.m"
        }
#line 2201 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 2201 "handle_options.m"
          {
#line 2209 "handle_options.m"
            libs__handle_options__V_1656_1656 = (MR_Integer) 2;
#line 2209 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__NumTagBits_57 >= libs__handle_options__V_1656_1656);
#line 2201 "handle_options.m"
          }
#line 2201 "handle_options.m"
      }
#line 2213 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2211 "handle_options.m"
      {
#line 2211 "handle_options.m"
        {
#line 2211 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 265, libs__handle_options__V_318_318, libs__handle_options__STATE_VARIABLE_Globals_1654_1654, &libs__handle_options__STATE_VARIABLE_Globals_1659_1659);
        }
#line 2211 "handle_options.m"
      }
#line 2213 "handle_options.m"
    else
#line 2214 "handle_options.m"
      {
#line 2214 "handle_options.m"
        {
#line 2214 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 265, libs__handle_options__V_467_467, libs__handle_options__STATE_VARIABLE_Globals_1654_1654, &libs__handle_options__STATE_VARIABLE_Globals_1659_1659);
        }
#line 2214 "handle_options.m"
      }
#line 2221 "handle_options.m"
#line 2221 "handle_options.m"
    switch (libs__handle_options__HighLevelCode_108) {
#line 2221 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2221 "handle_options.m"
      case (MR_Integer) 0:
#line 2220 "handle_options.m"
        {
#line 2220 "handle_options.m"
          libs__handle_options__postprocess_options_lowlevel_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_1659_1659, &libs__handle_options__STATE_VARIABLE_Globals_1665_1665);
        }
#line 2221 "handle_options.m"
        break;
#line 2221 "handle_options.m"
      case (MR_Integer) 1:
#line 2222 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1665_1665 = libs__handle_options__STATE_VARIABLE_Globals_1659_1659;
#line 2221 "handle_options.m"
        break;
#line 2221 "handle_options.m"
    }
#line 2224 "handle_options.m"
    {
#line 2224 "handle_options.m"
      libs__compute_grade__postprocess_options_libgrades_4_p_0(libs__handle_options__STATE_VARIABLE_Globals_1665_1665, libs__handle_options__STATE_VARIABLE_Globals_208, libs__handle_options__STATE_VARIABLE_Specs_1622_1622, libs__handle_options__STATE_VARIABLE_Specs_207);
    }
#line 2225 "handle_options.m"
    {
#line 2225 "handle_options.m"
      libs__globals__globals_init_mutables_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_208);
#line 2225 "handle_options.m"
      return;
    }
#line 642 "handle_options.m"
  }
#line 626 "handle_options.m"
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
    MR_Word libs__handle_options__TypeCtorInfo_506_506;
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
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_137_137;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_156_156;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_172_172;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_190_190;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_206_206;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_222_222;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_241_241;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_272_272;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_290_290;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_306_306;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_OptionTable_310_310;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_322_322;
#line 237 "handle_options.m"
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_324_324;
#line 237 "handle_options.m"
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_325_325;
#line 237 "handle_options.m"
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_328_328;
#line 237 "handle_options.m"
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_332_332;
#line 237 "handle_options.m"
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_356_356;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__V_359_359;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_376_376;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_392_392;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_409_409;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_414_414;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_432_432;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_448_448;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_464_464;
#line 237 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_474_474;
#line 242 "handle_options.m"
    MR_Word libs__handle_options__TargetPrime_44;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__GC_MethodPrime_47;
#line 267 "handle_options.m"
    MR_Word libs__handle_options__TagsMethodPrime_50;
#line 279 "handle_options.m"
    MR_Integer libs__handle_options__V_175_175;
#line 294 "handle_options.m"
    MR_Word libs__handle_options__TermNormPrime_55;
#line 306 "handle_options.m"
    MR_Word libs__handle_options__Term2NormPrime_58;
#line 353 "handle_options.m"
    MR_Word libs__handle_options__TraceSuppressPrime_68;
#line 390 "handle_options.m"
    MR_Word libs__handle_options__MaybeThreadSafePrime_76;
#line 429 "handle_options.m"
    MR_Char libs__handle_options__V_327_327;
#line 438 "handle_options.m"
    MR_Char libs__handle_options__V_331_331;
#line 469 "handle_options.m"
    MR_Char libs__handle_options__V_355_355;
#line 482 "handle_options.m"
    MR_Word libs__handle_options__C_CompilerTypePrime_83;
#line 498 "handle_options.m"
    MR_Word libs__handle_options__CSharp_CompilerTypePrime_86;
#line 516 "handle_options.m"
    MR_Word libs__handle_options__ReuseStrategyPrime_90;
#line 554 "handle_options.m"
    MR_Word libs__handle_options__HostEnvTypePrime_99;
#line 571 "handle_options.m"
    MR_Word libs__handle_options__SystemEnvTypePrime_102;
#line 582 "handle_options.m"
    MR_Word libs__handle_options__TargetEnvTypePrime_105;

#line 239 "handle_options.m"
    {
#line 239 "handle_options.m"
      libs__handle_options__raw_lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 175, &libs__handle_options__TargetStr_43);
    }
#line 240 "handle_options.m"
    {
#line 240 "handle_options.m"
      libs__handle_options__succeeded = libs__globals__convert_target_2_p_0(libs__handle_options__TargetStr_43, &libs__handle_options__TargetPrime_44);
    }
#line 242 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 241 "handle_options.m"
      {
#line 241 "handle_options.m"
        *libs__handle_options__Target_24 = libs__handle_options__TargetPrime_44;
#line 241 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_137_137 = libs__handle_options__STATE_VARIABLE_Specs_121_121;
#line 241 "handle_options.m"
      }
#line 242 "handle_options.m"
    else
#line 243 "handle_options.m"
      {
#line 243 "handle_options.m"
        MR_Word libs__handle_options__TargetSpec_45;
#line 243 "handle_options.m"
        MR_Word libs__handle_options__V_125_125;
#line 243 "handle_options.m"
        MR_Word libs__handle_options__V_126_126;

#line 243 "handle_options.m"
        *libs__handle_options__Target_24 = (MR_Integer) 0;
#line 245 "handle_options.m"
        {
#line 245 "handle_options.m"
          libs__handle_options__V_126_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_126_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 245 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_126_126, 1) = ((MR_Box) (libs__handle_options__TargetStr_43));
#line 245 "handle_options.m"
        }
#line 245 "handle_options.m"
        {
#line 245 "handle_options.m"
          libs__handle_options__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_125_125, 0) = ((MR_Box) (libs__handle_options__V_126_126));
#line 245 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_125_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[15])));
#line 245 "handle_options.m"
        }
#line 245 "handle_options.m"
        {
#line 245 "handle_options.m"
          libs__handle_options__TargetSpec_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__TargetSpec_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[152])));
#line 245 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__TargetSpec_45, 1) = ((MR_Box) (libs__handle_options__V_125_125));
#line 245 "handle_options.m"
        }
#line 248 "handle_options.m"
        {
#line 248 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__TargetSpec_45, libs__handle_options__STATE_VARIABLE_Specs_121_121, &libs__handle_options__STATE_VARIABLE_Specs_137_137);
        }
#line 243 "handle_options.m"
      }
#line 251 "handle_options.m"
    {
#line 251 "handle_options.m"
      libs__handle_options__raw_lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 212, &libs__handle_options__GC_MethodStr_46);
    }
#line 252 "handle_options.m"
    {
#line 252 "handle_options.m"
      libs__handle_options__succeeded = libs__globals__convert_gc_method_2_p_0(libs__handle_options__GC_MethodStr_46, &libs__handle_options__GC_MethodPrime_47);
    }
#line 254 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 253 "handle_options.m"
      {
#line 253 "handle_options.m"
        *libs__handle_options__GC_Method_25 = libs__handle_options__GC_MethodPrime_47;
#line 253 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_156_156 = libs__handle_options__STATE_VARIABLE_Specs_137_137;
#line 253 "handle_options.m"
      }
#line 254 "handle_options.m"
    else
#line 255 "handle_options.m"
      {
#line 255 "handle_options.m"
        MR_Word libs__handle_options__GCMethodSpec_48;
#line 255 "handle_options.m"
        MR_Word libs__handle_options__V_141_141;
#line 255 "handle_options.m"
        MR_Word libs__handle_options__V_142_142;

#line 255 "handle_options.m"
        *libs__handle_options__GC_Method_25 = (MR_Integer) 1;
#line 257 "handle_options.m"
        {
#line 257 "handle_options.m"
          libs__handle_options__V_142_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_142_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 257 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_142_142, 1) = ((MR_Box) (libs__handle_options__GC_MethodStr_46));
#line 257 "handle_options.m"
        }
#line 257 "handle_options.m"
        {
#line 257 "handle_options.m"
          libs__handle_options__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_141_141, 0) = ((MR_Box) (libs__handle_options__V_142_142));
#line 257 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_141_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[21])));
#line 257 "handle_options.m"
        }
#line 257 "handle_options.m"
        {
#line 257 "handle_options.m"
          libs__handle_options__GCMethodSpec_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__GCMethodSpec_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[152])));
#line 257 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__GCMethodSpec_48, 1) = ((MR_Box) (libs__handle_options__V_141_141));
#line 257 "handle_options.m"
        }
#line 261 "handle_options.m"
        {
#line 261 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__GCMethodSpec_48, libs__handle_options__STATE_VARIABLE_Specs_137_137, &libs__handle_options__STATE_VARIABLE_Specs_156_156);
        }
#line 255 "handle_options.m"
      }
#line 264 "handle_options.m"
    {
#line 264 "handle_options.m"
      libs__handle_options__raw_lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 233, &libs__handle_options__TagsMethodStr_49);
    }
#line 265 "handle_options.m"
    {
#line 265 "handle_options.m"
      libs__handle_options__succeeded = libs__globals__convert_tags_method_2_p_0(libs__handle_options__TagsMethodStr_49, &libs__handle_options__TagsMethodPrime_50);
    }
#line 267 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 266 "handle_options.m"
      {
#line 266 "handle_options.m"
        *libs__handle_options__TagsMethod_26 = libs__handle_options__TagsMethodPrime_50;
#line 266 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_172_172 = libs__handle_options__STATE_VARIABLE_Specs_156_156;
#line 266 "handle_options.m"
      }
#line 267 "handle_options.m"
    else
#line 268 "handle_options.m"
      {
#line 268 "handle_options.m"
        MR_Word libs__handle_options__TagsMethodSpec_51;
#line 268 "handle_options.m"
        MR_Word libs__handle_options__V_160_160;
#line 268 "handle_options.m"
        MR_Word libs__handle_options__V_161_161;

#line 268 "handle_options.m"
        *libs__handle_options__TagsMethod_26 = (MR_Integer) 0;
#line 270 "handle_options.m"
        {
#line 270 "handle_options.m"
          libs__handle_options__V_161_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_161_161, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 270 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_161_161, 1) = ((MR_Box) (libs__handle_options__TagsMethodStr_49));
#line 270 "handle_options.m"
        }
#line 270 "handle_options.m"
        {
#line 270 "handle_options.m"
          libs__handle_options__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_160_160, 0) = ((MR_Box) (libs__handle_options__V_161_161));
#line 270 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_160_160, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[25])));
#line 270 "handle_options.m"
        }
#line 270 "handle_options.m"
        {
#line 270 "handle_options.m"
          libs__handle_options__TagsMethodSpec_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__TagsMethodSpec_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[152])));
#line 270 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__TagsMethodSpec_51, 1) = ((MR_Box) (libs__handle_options__V_160_160));
#line 270 "handle_options.m"
        }
#line 273 "handle_options.m"
        {
#line 273 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__TagsMethodSpec_51, libs__handle_options__STATE_VARIABLE_Specs_156_156, &libs__handle_options__STATE_VARIABLE_Specs_172_172);
        }
#line 268 "handle_options.m"
      }
#line 276 "handle_options.m"
    {
#line 276 "handle_options.m"
      libs__handle_options__raw_lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 313, &libs__handle_options__FactTablePercentFull_52);
    }
#line 279 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__FactTablePercentFull_52 >= (MR_Integer) 1);
#line 279 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 279 "handle_options.m"
      {
#line 280 "handle_options.m"
        libs__handle_options__V_175_175 = (MR_Integer) 100;
#line 280 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__FactTablePercentFull_52 <= libs__handle_options__V_175_175);
#line 279 "handle_options.m"
      }
#line 283 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 283 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Specs_190_190 = libs__handle_options__STATE_VARIABLE_Specs_172_172;
#line 283 "handle_options.m"
    else
#line 287 "handle_options.m"
      {
#line 287 "handle_options.m"
        MR_Word libs__handle_options__FactTablePercentFullSpec_53;
#line 287 "handle_options.m"
        MR_Word libs__handle_options__V_178_178;
#line 287 "handle_options.m"
        MR_Word libs__handle_options__V_179_179;

#line 285 "handle_options.m"
        {
#line 285 "handle_options.m"
          libs__handle_options__V_179_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_179_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 285 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_179_179, 1) = ((MR_Box) (libs__handle_options__FactTablePercentFull_52));
#line 285 "handle_options.m"
        }
#line 285 "handle_options.m"
        {
#line 285 "handle_options.m"
          libs__handle_options__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_178_178, 0) = ((MR_Box) (libs__handle_options__V_179_179));
#line 285 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_178_178, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[29])));
#line 285 "handle_options.m"
        }
#line 285 "handle_options.m"
        {
#line 285 "handle_options.m"
          libs__handle_options__FactTablePercentFullSpec_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__FactTablePercentFullSpec_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[152])));
#line 285 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__FactTablePercentFullSpec_53, 1) = ((MR_Box) (libs__handle_options__V_178_178));
#line 285 "handle_options.m"
        }
#line 288 "handle_options.m"
        {
#line 288 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__FactTablePercentFullSpec_53, libs__handle_options__STATE_VARIABLE_Specs_172_172, &libs__handle_options__STATE_VARIABLE_Specs_190_190);
        }
#line 287 "handle_options.m"
      }
#line 291 "handle_options.m"
    {
#line 291 "handle_options.m"
      libs__handle_options__raw_lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 412, &libs__handle_options__TermNormStr_54);
    }
#line 292 "handle_options.m"
    {
#line 292 "handle_options.m"
      libs__handle_options__succeeded = libs__globals__convert_termination_norm_2_p_0(libs__handle_options__TermNormStr_54, &libs__handle_options__TermNormPrime_55);
    }
#line 294 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 293 "handle_options.m"
      {
#line 293 "handle_options.m"
        *libs__handle_options__TermNorm_27 = libs__handle_options__TermNormPrime_55;
#line 293 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_206_206 = libs__handle_options__STATE_VARIABLE_Specs_190_190;
#line 293 "handle_options.m"
      }
#line 294 "handle_options.m"
    else
#line 295 "handle_options.m"
      {
#line 295 "handle_options.m"
        MR_Word libs__handle_options__TermNormSpec_56;
#line 295 "handle_options.m"
        MR_Word libs__handle_options__V_194_194;
#line 295 "handle_options.m"
        MR_Word libs__handle_options__V_195_195;

#line 295 "handle_options.m"
        *libs__handle_options__TermNorm_27 = (MR_Integer) 0;
#line 297 "handle_options.m"
        {
#line 297 "handle_options.m"
          libs__handle_options__V_195_195 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_195_195, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 297 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_195_195, 1) = ((MR_Box) (libs__handle_options__TermNormStr_54));
#line 297 "handle_options.m"
        }
#line 297 "handle_options.m"
        {
#line 297 "handle_options.m"
          libs__handle_options__V_194_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_194_194, 0) = ((MR_Box) (libs__handle_options__V_195_195));
#line 297 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_194_194, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[33])));
#line 297 "handle_options.m"
        }
#line 297 "handle_options.m"
        {
#line 297 "handle_options.m"
          libs__handle_options__TermNormSpec_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__TermNormSpec_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[152])));
#line 297 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__TermNormSpec_56, 1) = ((MR_Box) (libs__handle_options__V_194_194));
#line 297 "handle_options.m"
        }
#line 300 "handle_options.m"
        {
#line 300 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__TermNormSpec_56, libs__handle_options__STATE_VARIABLE_Specs_190_190, &libs__handle_options__STATE_VARIABLE_Specs_206_206);
        }
#line 295 "handle_options.m"
      }
#line 303 "handle_options.m"
    {
#line 303 "handle_options.m"
      libs__handle_options__raw_lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 418, &libs__handle_options__Term2NormStr_57);
    }
#line 304 "handle_options.m"
    {
#line 304 "handle_options.m"
      libs__handle_options__succeeded = libs__globals__convert_termination_norm_2_p_0(libs__handle_options__Term2NormStr_57, &libs__handle_options__Term2NormPrime_58);
    }
#line 306 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 305 "handle_options.m"
      {
#line 305 "handle_options.m"
        *libs__handle_options__Term2Norm_28 = libs__handle_options__Term2NormPrime_58;
#line 305 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_222_222 = libs__handle_options__STATE_VARIABLE_Specs_206_206;
#line 305 "handle_options.m"
      }
#line 306 "handle_options.m"
    else
#line 307 "handle_options.m"
      {
#line 307 "handle_options.m"
        MR_Word libs__handle_options__Term2NormSpec_59;
#line 307 "handle_options.m"
        MR_Word libs__handle_options__V_210_210;
#line 307 "handle_options.m"
        MR_Word libs__handle_options__V_211_211;

#line 307 "handle_options.m"
        *libs__handle_options__Term2Norm_28 = (MR_Integer) 0;
#line 309 "handle_options.m"
        {
#line 309 "handle_options.m"
          libs__handle_options__V_211_211 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_211_211, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 309 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_211_211, 1) = ((MR_Box) (libs__handle_options__TermNormStr_54));
#line 309 "handle_options.m"
        }
#line 309 "handle_options.m"
        {
#line 309 "handle_options.m"
          libs__handle_options__V_210_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_210_210, 0) = ((MR_Box) (libs__handle_options__V_211_211));
#line 309 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_210_210, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[37])));
#line 309 "handle_options.m"
        }
#line 309 "handle_options.m"
        {
#line 309 "handle_options.m"
          libs__handle_options__Term2NormSpec_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__Term2NormSpec_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[152])));
#line 309 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__Term2NormSpec_59, 1) = ((MR_Box) (libs__handle_options__V_210_210));
#line 309 "handle_options.m"
        }
#line 312 "handle_options.m"
        {
#line 312 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__Term2NormSpec_59, libs__handle_options__STATE_VARIABLE_Specs_206_206, &libs__handle_options__STATE_VARIABLE_Specs_222_222);
        }
#line 307 "handle_options.m"
      }
#line 315 "handle_options.m"
    {
#line 315 "handle_options.m"
      libs__handle_options__raw_lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 131, &libs__handle_options__ForceDisableTracing_60);
    }
#line 320 "handle_options.m"
#line 320 "handle_options.m"
    switch (libs__handle_options__ForceDisableTracing_60) {
#line 320 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 320 "handle_options.m"
      case (MR_Integer) 0:
#line 321 "handle_options.m"
        {
#line 321 "handle_options.m"
          MR_String libs__handle_options__Trace_61;
#line 321 "handle_options.m"
          MR_Word libs__handle_options__ExecTrace_62;
#line 321 "handle_options.m"
          MR_Word libs__handle_options__DeclDebug_63;
#line 339 "handle_options.m"
          MR_Word libs__handle_options__MaybeTraceLevel_64;

#line 322 "handle_options.m"
          {
#line 322 "handle_options.m"
            libs__handle_options__raw_lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 119, &libs__handle_options__Trace_61);
          }
#line 323 "handle_options.m"
          {
#line 323 "handle_options.m"
            libs__handle_options__raw_lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 183, &libs__handle_options__ExecTrace_62);
          }
#line 324 "handle_options.m"
          {
#line 324 "handle_options.m"
            libs__handle_options__raw_lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 184, &libs__handle_options__DeclDebug_63);
          }
#line 326 "handle_options.m"
          {
#line 326 "handle_options.m"
            libs__handle_options__succeeded = libs__trace_params__convert_trace_level_4_p_0(libs__handle_options__Trace_61, libs__handle_options__ExecTrace_62, libs__handle_options__DeclDebug_63, &libs__handle_options__MaybeTraceLevel_64);
          }
#line 339 "handle_options.m"
          if (libs__handle_options__succeeded)
#line 330 "handle_options.m"
            if ((libs__handle_options__MaybeTraceLevel_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 331 "handle_options.m"
              {
#line 331 "handle_options.m"
                MR_Word libs__handle_options__InconsistentTraceLevelSpec_65;
#line 331 "handle_options.m"
                MR_Word libs__handle_options__V_229_229;
#line 331 "handle_options.m"
                MR_Word libs__handle_options__V_230_230;

#line 332 "handle_options.m"
                {
#line 332 "handle_options.m"
                  *libs__handle_options__TraceLevel_29 = libs__trace_params__trace_level_none_0_f_0();
                }
#line 334 "handle_options.m"
                {
#line 334 "handle_options.m"
                  libs__handle_options__V_230_230 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "handle_options.m"
                  MR_hl_field(MR_mktag(3), libs__handle_options__V_230_230, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 334 "handle_options.m"
                  MR_hl_field(MR_mktag(3), libs__handle_options__V_230_230, 1) = ((MR_Box) (libs__handle_options__Trace_61));
#line 334 "handle_options.m"
                }
#line 334 "handle_options.m"
                {
#line 334 "handle_options.m"
                  libs__handle_options__V_229_229 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_229_229, 0) = ((MR_Box) (libs__handle_options__V_230_230));
#line 334 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_229_229, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[41])));
#line 334 "handle_options.m"
                }
#line 334 "handle_options.m"
                {
#line 334 "handle_options.m"
                  libs__handle_options__InconsistentTraceLevelSpec_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__InconsistentTraceLevelSpec_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[153])));
#line 334 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__InconsistentTraceLevelSpec_65, 1) = ((MR_Box) (libs__handle_options__V_229_229));
#line 334 "handle_options.m"
                }
#line 337 "handle_options.m"
                {
#line 337 "handle_options.m"
                  libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__InconsistentTraceLevelSpec_65, libs__handle_options__STATE_VARIABLE_Specs_222_222, &libs__handle_options__STATE_VARIABLE_Specs_241_241);
                }
#line 331 "handle_options.m"
              }
#line 330 "handle_options.m"
            else
#line 329 "handle_options.m"
              {
#line 329 "handle_options.m"
                *libs__handle_options__TraceLevel_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeTraceLevel_64, (MR_Integer) 0)));
#line 329 "handle_options.m"
                libs__handle_options__STATE_VARIABLE_Specs_241_241 = libs__handle_options__STATE_VARIABLE_Specs_222_222;
#line 329 "handle_options.m"
              }
#line 339 "handle_options.m"
          else
#line 340 "handle_options.m"
            {
#line 340 "handle_options.m"
              MR_Word libs__handle_options__BadTraceLevelSpec_66;
#line 340 "handle_options.m"
              MR_Word libs__handle_options__V_244_244;
#line 340 "handle_options.m"
              MR_Word libs__handle_options__V_245_245;

#line 340 "handle_options.m"
              {
#line 340 "handle_options.m"
                *libs__handle_options__TraceLevel_29 = libs__trace_params__trace_level_none_0_f_0();
              }
#line 342 "handle_options.m"
              {
#line 342 "handle_options.m"
                libs__handle_options__V_245_245 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "handle_options.m"
                MR_hl_field(MR_mktag(3), libs__handle_options__V_245_245, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 342 "handle_options.m"
                MR_hl_field(MR_mktag(3), libs__handle_options__V_245_245, 1) = ((MR_Box) (libs__handle_options__Trace_61));
#line 342 "handle_options.m"
              }
#line 342 "handle_options.m"
              {
#line 342 "handle_options.m"
                libs__handle_options__V_244_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "handle_options.m"
                MR_hl_field(MR_mktag(1), libs__handle_options__V_244_244, 0) = ((MR_Box) (libs__handle_options__V_245_245));
#line 342 "handle_options.m"
                MR_hl_field(MR_mktag(1), libs__handle_options__V_244_244, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[47])));
#line 342 "handle_options.m"
              }
#line 342 "handle_options.m"
              {
#line 342 "handle_options.m"
                libs__handle_options__BadTraceLevelSpec_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "handle_options.m"
                MR_hl_field(MR_mktag(1), libs__handle_options__BadTraceLevelSpec_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[152])));
#line 342 "handle_options.m"
                MR_hl_field(MR_mktag(1), libs__handle_options__BadTraceLevelSpec_66, 1) = ((MR_Box) (libs__handle_options__V_244_244));
#line 342 "handle_options.m"
              }
#line 346 "handle_options.m"
              {
#line 346 "handle_options.m"
                libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__BadTraceLevelSpec_66, libs__handle_options__STATE_VARIABLE_Specs_222_222, &libs__handle_options__STATE_VARIABLE_Specs_241_241);
              }
#line 340 "handle_options.m"
            }
#line 321 "handle_options.m"
        }
#line 320 "handle_options.m"
        break;
#line 320 "handle_options.m"
      case (MR_Integer) 1:
#line 318 "handle_options.m"
        {
#line 319 "handle_options.m"
          {
#line 319 "handle_options.m"
            *libs__handle_options__TraceLevel_29 = libs__trace_params__trace_level_none_0_f_0();
          }
#line 318 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Specs_241_241 = libs__handle_options__STATE_VARIABLE_Specs_222_222;
#line 318 "handle_options.m"
        }
#line 320 "handle_options.m"
        break;
#line 320 "handle_options.m"
    }
#line 350 "handle_options.m"
    {
#line 350 "handle_options.m"
      libs__handle_options__raw_lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 130, &libs__handle_options__SuppressStr_67);
    }
#line 351 "handle_options.m"
    {
#line 351 "handle_options.m"
      libs__handle_options__succeeded = libs__trace_params__convert_trace_suppress_2_p_0(libs__handle_options__SuppressStr_67, &libs__handle_options__TraceSuppressPrime_68);
    }
#line 353 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 352 "handle_options.m"
      {
#line 352 "handle_options.m"
        *libs__handle_options__TraceSuppress_30 = libs__handle_options__TraceSuppressPrime_68;
#line 352 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_272_272 = libs__handle_options__STATE_VARIABLE_Specs_241_241;
#line 352 "handle_options.m"
      }
#line 353 "handle_options.m"
    else
#line 354 "handle_options.m"
      {
#line 354 "handle_options.m"
        MR_Word libs__handle_options__TraceSuppressSpec_69;
#line 354 "handle_options.m"
        MR_Word libs__handle_options__V_263_263;
#line 354 "handle_options.m"
        MR_Word libs__handle_options__V_264_264;

#line 354 "handle_options.m"
        {
#line 354 "handle_options.m"
          *libs__handle_options__TraceSuppress_30 = libs__trace_params__default_trace_suppress_0_f_0();
        }
#line 356 "handle_options.m"
        {
#line 356 "handle_options.m"
          libs__handle_options__V_264_264 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_264_264, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 356 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_264_264, 1) = ((MR_Box) (libs__handle_options__SuppressStr_67));
#line 356 "handle_options.m"
        }
#line 356 "handle_options.m"
        {
#line 356 "handle_options.m"
          libs__handle_options__V_263_263 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_263_263, 0) = ((MR_Box) (libs__handle_options__V_264_264));
#line 356 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_263_263, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[49])));
#line 356 "handle_options.m"
        }
#line 356 "handle_options.m"
        {
#line 356 "handle_options.m"
          libs__handle_options__TraceSuppressSpec_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__TraceSuppressSpec_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[152])));
#line 356 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__TraceSuppressSpec_69, 1) = ((MR_Box) (libs__handle_options__V_263_263));
#line 356 "handle_options.m"
        }
#line 360 "handle_options.m"
        {
#line 360 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__TraceSuppressSpec_69, libs__handle_options__STATE_VARIABLE_Specs_241_241, &libs__handle_options__STATE_VARIABLE_Specs_272_272);
        }
#line 354 "handle_options.m"
      }
#line 363 "handle_options.m"
    {
#line 363 "handle_options.m"
      libs__handle_options__raw_lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 135, &libs__handle_options__ForceDisableSSDB_70);
    }
#line 368 "handle_options.m"
#line 368 "handle_options.m"
    switch (libs__handle_options__ForceDisableSSDB_70) {
#line 368 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 368 "handle_options.m"
      case (MR_Integer) 0:
#line 369 "handle_options.m"
        {
#line 369 "handle_options.m"
          MR_String libs__handle_options__SSTrace_71;
#line 369 "handle_options.m"
          MR_Word libs__handle_options__SSDB_72;
#line 374 "handle_options.m"
          MR_Word libs__handle_options__SSTL_73;

#line 370 "handle_options.m"
          {
#line 370 "handle_options.m"
            libs__handle_options__raw_lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 231, &libs__handle_options__SSTrace_71);
          }
#line 371 "handle_options.m"
          {
#line 371 "handle_options.m"
            libs__handle_options__raw_lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 230, &libs__handle_options__SSDB_72);
          }
#line 372 "handle_options.m"
          {
#line 372 "handle_options.m"
            libs__handle_options__succeeded = libs__globals__convert_ssdb_trace_level_3_p_0(libs__handle_options__SSTrace_71, libs__handle_options__SSDB_72, &libs__handle_options__SSTL_73);
          }
#line 374 "handle_options.m"
          if (libs__handle_options__succeeded)
#line 373 "handle_options.m"
            {
#line 373 "handle_options.m"
              *libs__handle_options__SSTraceLevel_31 = libs__handle_options__SSTL_73;
#line 373 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Specs_290_290 = libs__handle_options__STATE_VARIABLE_Specs_272_272;
#line 373 "handle_options.m"
            }
#line 374 "handle_options.m"
          else
#line 375 "handle_options.m"
            {
#line 375 "handle_options.m"
              MR_Word libs__handle_options__SSDBSpec_74;
#line 375 "handle_options.m"
              MR_Word libs__handle_options__V_278_278;
#line 375 "handle_options.m"
              MR_Word libs__handle_options__V_279_279;

#line 375 "handle_options.m"
              *libs__handle_options__SSTraceLevel_31 = (MR_Integer) 0;
#line 377 "handle_options.m"
              {
#line 377 "handle_options.m"
                libs__handle_options__V_279_279 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 377 "handle_options.m"
                MR_hl_field(MR_mktag(3), libs__handle_options__V_279_279, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 377 "handle_options.m"
                MR_hl_field(MR_mktag(3), libs__handle_options__V_279_279, 1) = ((MR_Box) (libs__handle_options__SSTrace_71));
#line 377 "handle_options.m"
              }
#line 377 "handle_options.m"
              {
#line 377 "handle_options.m"
                libs__handle_options__V_278_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 377 "handle_options.m"
                MR_hl_field(MR_mktag(1), libs__handle_options__V_278_278, 0) = ((MR_Box) (libs__handle_options__V_279_279));
#line 377 "handle_options.m"
                MR_hl_field(MR_mktag(1), libs__handle_options__V_278_278, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[53])));
#line 377 "handle_options.m"
              }
#line 377 "handle_options.m"
              {
#line 377 "handle_options.m"
                libs__handle_options__SSDBSpec_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 377 "handle_options.m"
                MR_hl_field(MR_mktag(1), libs__handle_options__SSDBSpec_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[152])));
#line 377 "handle_options.m"
                MR_hl_field(MR_mktag(1), libs__handle_options__SSDBSpec_74, 1) = ((MR_Box) (libs__handle_options__V_278_278));
#line 377 "handle_options.m"
              }
#line 380 "handle_options.m"
              {
#line 380 "handle_options.m"
                libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__SSDBSpec_74, libs__handle_options__STATE_VARIABLE_Specs_272_272, &libs__handle_options__STATE_VARIABLE_Specs_290_290);
              }
#line 375 "handle_options.m"
            }
#line 369 "handle_options.m"
        }
#line 368 "handle_options.m"
        break;
#line 368 "handle_options.m"
      case (MR_Integer) 1:
#line 366 "handle_options.m"
        {
#line 367 "handle_options.m"
          *libs__handle_options__SSTraceLevel_31 = (MR_Integer) 0;
#line 366 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Specs_290_290 = libs__handle_options__STATE_VARIABLE_Specs_272_272;
#line 366 "handle_options.m"
        }
#line 368 "handle_options.m"
        break;
#line 368 "handle_options.m"
    }
#line 384 "handle_options.m"
    {
#line 384 "handle_options.m"
      libs__handle_options__raw_lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 223, &libs__handle_options__MaybeThreadSafeStr_75);
    }
#line 387 "handle_options.m"
    {
#line 387 "handle_options.m"
      libs__handle_options__succeeded = libs__globals__convert_maybe_thread_safe_2_p_0(libs__handle_options__MaybeThreadSafeStr_75, &libs__handle_options__MaybeThreadSafePrime_76);
    }
#line 390 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 389 "handle_options.m"
      {
#line 389 "handle_options.m"
        *libs__handle_options__MaybeThreadSafe_32 = libs__handle_options__MaybeThreadSafePrime_76;
#line 389 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_306_306 = libs__handle_options__STATE_VARIABLE_Specs_290_290;
#line 389 "handle_options.m"
      }
#line 390 "handle_options.m"
    else
#line 391 "handle_options.m"
      {
#line 391 "handle_options.m"
        MR_Word libs__handle_options__MTSSpec_77;
#line 391 "handle_options.m"
        MR_Word libs__handle_options__V_294_294;
#line 391 "handle_options.m"
        MR_Word libs__handle_options__V_295_295;

#line 391 "handle_options.m"
        *libs__handle_options__MaybeThreadSafe_32 = (MR_Integer) 0;
#line 396 "handle_options.m"
        {
#line 396 "handle_options.m"
          libs__handle_options__V_295_295 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_295_295, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 396 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_295_295, 1) = ((MR_Box) (libs__handle_options__MaybeThreadSafeStr_75));
#line 396 "handle_options.m"
        }
#line 396 "handle_options.m"
        {
#line 396 "handle_options.m"
          libs__handle_options__V_294_294 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_294_294, 0) = ((MR_Box) (libs__handle_options__V_295_295));
#line 396 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_294_294, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[57])));
#line 396 "handle_options.m"
        }
#line 396 "handle_options.m"
        {
#line 396 "handle_options.m"
          libs__handle_options__MTSSpec_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__MTSSpec_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[152])));
#line 396 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__MTSSpec_77, 1) = ((MR_Box) (libs__handle_options__V_294_294));
#line 396 "handle_options.m"
        }
#line 399 "handle_options.m"
        {
#line 399 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__MTSSpec_77, libs__handle_options__STATE_VARIABLE_Specs_290_290, &libs__handle_options__STATE_VARIABLE_Specs_306_306);
        }
#line 391 "handle_options.m"
      }
#line 402 "handle_options.m"
    {
#line 402 "handle_options.m"
      libs__handle_options__raw_lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 150, &libs__handle_options__DumpAlias_78);
    }
#line 403 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__DumpAlias_78, (MR_String) "") == 0);
#line 405 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 404 "handle_options.m"
      {
#line 404 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_322_322 = libs__handle_options__STATE_VARIABLE_Specs_306_306;
#line 404 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_OptionTable_310_310 = libs__handle_options__STATE_VARIABLE_OptionTable_0_116;
#line 404 "handle_options.m"
      }
#line 405 "handle_options.m"
    else
#line 407 "handle_options.m"
      {
#line 407 "handle_options.m"
        MR_String libs__handle_options__AliasDumpOptions_79;

#line 405 "handle_options.m"
        {
#line 405 "handle_options.m"
          libs__handle_options__succeeded = libs__handle_options__convert_dump_alias_2_p_0(libs__handle_options__DumpAlias_78, &libs__handle_options__AliasDumpOptions_79);
        }
#line 407 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 406 "handle_options.m"
          {
#line 406 "handle_options.m"
            MR_Word libs__handle_options__V_309_309;

#line 406 "handle_options.m"
            {
#line 406 "handle_options.m"
              libs__handle_options__V_309_309 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_309_309, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 406 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_309_309, 1) = ((MR_Box) (libs__handle_options__AliasDumpOptions_79));
#line 406 "handle_options.m"
            }
#line 406 "handle_options.m"
            {
#line 406 "handle_options.m"
              mercury__map__set_4_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) ((MR_Integer) 151)), ((MR_Box) (libs__handle_options__V_309_309)), libs__handle_options__STATE_VARIABLE_OptionTable_0_116, &libs__handle_options__STATE_VARIABLE_OptionTable_310_310);
            }
#line 406 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Specs_322_322 = libs__handle_options__STATE_VARIABLE_Specs_306_306;
#line 406 "handle_options.m"
          }
#line 407 "handle_options.m"
        else
#line 411 "handle_options.m"
          {
#line 411 "handle_options.m"
            MR_Word libs__handle_options__DumpAliasSpec_80;
#line 411 "handle_options.m"
            MR_Word libs__handle_options__V_313_313;
#line 411 "handle_options.m"
            MR_Word libs__handle_options__V_314_314;

#line 409 "handle_options.m"
            {
#line 409 "handle_options.m"
              libs__handle_options__V_314_314 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_314_314, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 409 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_314_314, 1) = ((MR_Box) (libs__handle_options__DumpAlias_78));
#line 409 "handle_options.m"
            }
#line 409 "handle_options.m"
            {
#line 409 "handle_options.m"
              libs__handle_options__V_313_313 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_313_313, 0) = ((MR_Box) (libs__handle_options__V_314_314));
#line 409 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_313_313, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[59])));
#line 409 "handle_options.m"
            }
#line 409 "handle_options.m"
            {
#line 409 "handle_options.m"
              libs__handle_options__DumpAliasSpec_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__DumpAliasSpec_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[152])));
#line 409 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__DumpAliasSpec_80, 1) = ((MR_Box) (libs__handle_options__V_313_313));
#line 409 "handle_options.m"
            }
#line 412 "handle_options.m"
            {
#line 412 "handle_options.m"
              libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__DumpAliasSpec_80, libs__handle_options__STATE_VARIABLE_Specs_306_306, &libs__handle_options__STATE_VARIABLE_Specs_322_322);
            }
#line 411 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_OptionTable_310_310 = libs__handle_options__STATE_VARIABLE_OptionTable_0_116;
#line 411 "handle_options.m"
          }
#line 407 "handle_options.m"
      }
#line 10675 "libs.handle_options.c"
    libs__handle_options__TypeCtorInfo_506_506 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
#line 416 "handle_options.m"
    {
#line 416 "handle_options.m"
      mercury__getopt_io__lookup_string_option_3_p_0(libs__handle_options__TypeCtorInfo_506_506, libs__handle_options__STATE_VARIABLE_OptionTable_310_310, ((MR_Box) ((MR_Integer) 151)), &libs__handle_options__STATE_VARIABLE_DumpOptions_324_324);
    }
#line 420 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__STATE_VARIABLE_DumpOptions_324_324, (MR_String) "") == 0);
#line 422 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 421 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_325_325 = (MR_String) "x";
#line 422 "handle_options.m"
    else
#line 422 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_325_325 = libs__handle_options__STATE_VARIABLE_DumpOptions_324_324;
#line 428 "handle_options.m"
    {
#line 428 "handle_options.m"
      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_325_325, (MR_Char) 121);
    }
#line 428 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 428 "handle_options.m"
      {
#line 429 "handle_options.m"
        libs__handle_options__V_327_327 = (MR_Char) 97;
#line 429 "handle_options.m"
        {
#line 429 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_325_325, libs__handle_options__V_327_327);
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
          libs__handle_options__STATE_VARIABLE_DumpOptions_328_328 = mercury__string__f_43_43_2_f_0((MR_String) "a", libs__handle_options__STATE_VARIABLE_DumpOptions_325_325);
        }
#line 431 "handle_options.m"
      }
#line 432 "handle_options.m"
    else
#line 432 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_328_328 = libs__handle_options__STATE_VARIABLE_DumpOptions_325_325;
#line 437 "handle_options.m"
    {
#line 437 "handle_options.m"
      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_328_328, (MR_Char) 97);
    }
#line 437 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 437 "handle_options.m"
      {
#line 438 "handle_options.m"
        libs__handle_options__V_331_331 = (MR_Char) 117;
#line 438 "handle_options.m"
        {
#line 438 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_328_328, libs__handle_options__V_331_331);
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
          libs__handle_options__STATE_VARIABLE_DumpOptions_332_332 = mercury__string__f_43_43_2_f_0((MR_String) "u", libs__handle_options__STATE_VARIABLE_DumpOptions_328_328);
        }
#line 440 "handle_options.m"
      }
#line 441 "handle_options.m"
    else
#line 441 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_332_332 = libs__handle_options__STATE_VARIABLE_DumpOptions_328_328;
#line 447 "handle_options.m"
    {
#line 447 "handle_options.m"
      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_332_332, (MR_Char) 65);
    }
#line 448 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
      {
#line 448 "handle_options.m"
        {
#line 448 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_332_332, (MR_Char) 66);
        }
#line 448 "handle_options.m"
        if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
          {
#line 449 "handle_options.m"
            {
#line 449 "handle_options.m"
              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_332_332, (MR_Char) 68);
            }
#line 448 "handle_options.m"
            if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
              {
#line 450 "handle_options.m"
                {
#line 450 "handle_options.m"
                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_332_332, (MR_Char) 71);
                }
#line 448 "handle_options.m"
                if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
                  {
#line 451 "handle_options.m"
                    {
#line 451 "handle_options.m"
                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_332_332, (MR_Char) 80);
                    }
#line 448 "handle_options.m"
                    if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
                      {
#line 452 "handle_options.m"
                        {
#line 452 "handle_options.m"
                          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_332_332, (MR_Char) 82);
                        }
#line 448 "handle_options.m"
                        if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
                          {
#line 453 "handle_options.m"
                            {
#line 453 "handle_options.m"
                              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_332_332, (MR_Char) 83);
                            }
#line 448 "handle_options.m"
                            if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
                              {
#line 454 "handle_options.m"
                                {
#line 454 "handle_options.m"
                                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_332_332, (MR_Char) 98);
                                }
#line 448 "handle_options.m"
                                if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
                                  {
#line 455 "handle_options.m"
                                    {
#line 455 "handle_options.m"
                                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_332_332, (MR_Char) 99);
                                    }
#line 448 "handle_options.m"
                                    if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
                                      {
#line 456 "handle_options.m"
                                        {
#line 456 "handle_options.m"
                                          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_332_332, (MR_Char) 100);
                                        }
#line 448 "handle_options.m"
                                        if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
                                          {
#line 457 "handle_options.m"
                                            {
#line 457 "handle_options.m"
                                              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_332_332, (MR_Char) 102);
                                            }
#line 448 "handle_options.m"
                                            if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
                                              {
#line 458 "handle_options.m"
                                                {
#line 458 "handle_options.m"
                                                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_332_332, (MR_Char) 103);
                                                }
#line 448 "handle_options.m"
                                                if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
                                                  {
#line 459 "handle_options.m"
                                                    {
#line 459 "handle_options.m"
                                                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_332_332, (MR_Char) 105);
                                                    }
#line 448 "handle_options.m"
                                                    if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
                                                      {
#line 460 "handle_options.m"
                                                        {
#line 460 "handle_options.m"
                                                          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_332_332, (MR_Char) 108);
                                                        }
#line 448 "handle_options.m"
                                                        if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
                                                          {
#line 461 "handle_options.m"
                                                            {
#line 461 "handle_options.m"
                                                              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_332_332, (MR_Char) 109);
                                                            }
#line 448 "handle_options.m"
                                                            if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
                                                              {
#line 462 "handle_options.m"
                                                                {
#line 462 "handle_options.m"
                                                                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_332_332, (MR_Char) 110);
                                                                }
#line 448 "handle_options.m"
                                                                if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
                                                                  {
#line 463 "handle_options.m"
                                                                    {
#line 463 "handle_options.m"
                                                                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_332_332, (MR_Char) 112);
                                                                    }
#line 448 "handle_options.m"
                                                                    if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
                                                                      {
#line 464 "handle_options.m"
                                                                        {
#line 464 "handle_options.m"
                                                                          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_332_332, (MR_Char) 115);
                                                                        }
#line 448 "handle_options.m"
                                                                        if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
                                                                          {
#line 465 "handle_options.m"
                                                                            {
#line 465 "handle_options.m"
                                                                              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_332_332, (MR_Char) 116);
                                                                            }
#line 448 "handle_options.m"
                                                                            if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
                                                                              {
#line 466 "handle_options.m"
                                                                                {
#line 466 "handle_options.m"
                                                                                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_332_332, (MR_Char) 117);
                                                                                }
#line 448 "handle_options.m"
                                                                                if (!(libs__handle_options__succeeded))
#line 467 "handle_options.m"
                                                                                  {
#line 467 "handle_options.m"
                                                                                    {
#line 467 "handle_options.m"
                                                                                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_332_332, (MR_Char) 122);
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
        libs__handle_options__V_355_355 = (MR_Char) 120;
#line 469 "handle_options.m"
        {
#line 469 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_332_332, libs__handle_options__V_355_355);
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
          libs__handle_options__STATE_VARIABLE_DumpOptions_356_356 = mercury__string__f_43_43_2_f_0((MR_String) "x", libs__handle_options__STATE_VARIABLE_DumpOptions_332_332);
        }
#line 471 "handle_options.m"
      }
#line 472 "handle_options.m"
    else
#line 472 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_356_356 = libs__handle_options__STATE_VARIABLE_DumpOptions_332_332;
#line 475 "handle_options.m"
    {
#line 475 "handle_options.m"
      libs__handle_options__V_359_359 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 475 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_359_359, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 475 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_359_359, 1) = ((MR_Box) (libs__handle_options__STATE_VARIABLE_DumpOptions_356_356));
#line 475 "handle_options.m"
    }
#line 475 "handle_options.m"
    {
#line 475 "handle_options.m"
      mercury__map__set_4_p_0(libs__handle_options__TypeCtorInfo_506_506, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) ((MR_Integer) 151)), ((MR_Box) (libs__handle_options__V_359_359)), libs__handle_options__STATE_VARIABLE_OptionTable_310_310, libs__handle_options__STATE_VARIABLE_OptionTable_117);
    }
#line 478 "handle_options.m"
    {
#line 478 "handle_options.m"
      libs__handle_options__raw_lookup_string_option_3_p_0(*libs__handle_options__STATE_VARIABLE_OptionTable_117, (MR_Integer) 505, &libs__handle_options__C_CompilerTypeStr_82);
    }
#line 480 "handle_options.m"
    {
#line 480 "handle_options.m"
      libs__handle_options__succeeded = libs__globals__convert_c_compiler_type_2_p_0(libs__handle_options__C_CompilerTypeStr_82, &libs__handle_options__C_CompilerTypePrime_83);
    }
#line 482 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 481 "handle_options.m"
      {
#line 481 "handle_options.m"
        *libs__handle_options__C_CompilerType_33 = libs__handle_options__C_CompilerTypePrime_83;
#line 481 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_376_376 = libs__handle_options__STATE_VARIABLE_Specs_322_322;
#line 481 "handle_options.m"
      }
#line 482 "handle_options.m"
    else
#line 483 "handle_options.m"
      {
#line 483 "handle_options.m"
        MR_Word libs__handle_options__CCTpec_84;
#line 483 "handle_options.m"
        MR_Word libs__handle_options__V_364_364;
#line 483 "handle_options.m"
        MR_Word libs__handle_options__V_365_365;

#line 483 "handle_options.m"
        *libs__handle_options__C_CompilerType_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 485 "handle_options.m"
        {
#line 485 "handle_options.m"
          libs__handle_options__V_365_365 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_365_365, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 485 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_365_365, 1) = ((MR_Box) (libs__handle_options__C_CompilerTypeStr_82));
#line 485 "handle_options.m"
        }
#line 485 "handle_options.m"
        {
#line 485 "handle_options.m"
          libs__handle_options__V_364_364 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_364_364, 0) = ((MR_Box) (libs__handle_options__V_365_365));
#line 485 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_364_364, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[63])));
#line 485 "handle_options.m"
        }
#line 485 "handle_options.m"
        {
#line 485 "handle_options.m"
          libs__handle_options__CCTpec_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__CCTpec_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[152])));
#line 485 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__CCTpec_84, 1) = ((MR_Box) (libs__handle_options__V_364_364));
#line 485 "handle_options.m"
        }
#line 488 "handle_options.m"
        {
#line 488 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__CCTpec_84, libs__handle_options__STATE_VARIABLE_Specs_322_322, &libs__handle_options__STATE_VARIABLE_Specs_376_376);
        }
#line 483 "handle_options.m"
      }
#line 491 "handle_options.m"
    {
#line 491 "handle_options.m"
      libs__handle_options__raw_lookup_string_option_3_p_0(*libs__handle_options__STATE_VARIABLE_OptionTable_117, (MR_Integer) 506, &libs__handle_options__CSharp_CompilerTypeStr_85);
    }
#line 494 "handle_options.m"
    {
#line 494 "handle_options.m"
      libs__handle_options__succeeded = libs__globals__convert_csharp_compiler_type_2_p_0(libs__handle_options__CSharp_CompilerTypeStr_85, &libs__handle_options__CSharp_CompilerTypePrime_86);
    }
#line 498 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 497 "handle_options.m"
      {
#line 497 "handle_options.m"
        *libs__handle_options__CSharp_CompilerType_34 = libs__handle_options__CSharp_CompilerTypePrime_86;
#line 497 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_392_392 = libs__handle_options__STATE_VARIABLE_Specs_376_376;
#line 497 "handle_options.m"
      }
#line 498 "handle_options.m"
    else
#line 499 "handle_options.m"
      {
#line 499 "handle_options.m"
        MR_Word libs__handle_options__CSCSpec_87;
#line 499 "handle_options.m"
        MR_Word libs__handle_options__V_380_380;
#line 499 "handle_options.m"
        MR_Word libs__handle_options__V_381_381;

#line 499 "handle_options.m"
        *libs__handle_options__CSharp_CompilerType_34 = (MR_Integer) 2;
#line 501 "handle_options.m"
        {
#line 501 "handle_options.m"
          libs__handle_options__V_381_381 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_381_381, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 501 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_381_381, 1) = ((MR_Box) (libs__handle_options__CSharp_CompilerTypeStr_85));
#line 501 "handle_options.m"
        }
#line 501 "handle_options.m"
        {
#line 501 "handle_options.m"
          libs__handle_options__V_380_380 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_380_380, 0) = ((MR_Box) (libs__handle_options__V_381_381));
#line 501 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_380_380, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[67])));
#line 501 "handle_options.m"
        }
#line 501 "handle_options.m"
        {
#line 501 "handle_options.m"
          libs__handle_options__CSCSpec_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__CSCSpec_87, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[152])));
#line 501 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__CSCSpec_87, 1) = ((MR_Box) (libs__handle_options__V_380_380));
#line 501 "handle_options.m"
        }
#line 504 "handle_options.m"
        {
#line 504 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__CSCSpec_87, libs__handle_options__STATE_VARIABLE_Specs_376_376, &libs__handle_options__STATE_VARIABLE_Specs_392_392);
        }
#line 499 "handle_options.m"
      }
#line 507 "handle_options.m"
    {
#line 507 "handle_options.m"
      libs__handle_options__raw_lookup_string_option_3_p_0(*libs__handle_options__STATE_VARIABLE_OptionTable_117, (MR_Integer) 403, &libs__handle_options__ReuseConstraintStr_88);
    }
#line 509 "handle_options.m"
    {
#line 509 "handle_options.m"
      libs__handle_options__raw_lookup_int_option_3_p_0(*libs__handle_options__STATE_VARIABLE_OptionTable_117, (MR_Integer) 404, &libs__handle_options__ReuseConstraintArgNum_89);
    }
#line 512 "handle_options.m"
    {
#line 512 "handle_options.m"
      libs__handle_options__succeeded = libs__globals__convert_reuse_strategy_3_p_0(libs__handle_options__ReuseConstraintStr_88, libs__handle_options__ReuseConstraintArgNum_89, &libs__handle_options__ReuseStrategyPrime_90);
    }
#line 516 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 515 "handle_options.m"
      {
#line 515 "handle_options.m"
        *libs__handle_options__ReuseStrategy_35 = libs__handle_options__ReuseStrategyPrime_90;
#line 515 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_409_409 = libs__handle_options__STATE_VARIABLE_Specs_392_392;
#line 515 "handle_options.m"
      }
#line 516 "handle_options.m"
    else
#line 517 "handle_options.m"
      {
#line 517 "handle_options.m"
        MR_Word libs__handle_options__ReuseConstrSpec_91;
#line 517 "handle_options.m"
        MR_Word libs__handle_options__V_397_397;
#line 517 "handle_options.m"
        MR_Word libs__handle_options__V_398_398;

#line 517 "handle_options.m"
        *libs__handle_options__ReuseStrategy_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 519 "handle_options.m"
        {
#line 519 "handle_options.m"
          libs__handle_options__V_398_398 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_398_398, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 519 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_398_398, 1) = ((MR_Box) (libs__handle_options__ReuseConstraintStr_88));
#line 519 "handle_options.m"
        }
#line 519 "handle_options.m"
        {
#line 519 "handle_options.m"
          libs__handle_options__V_397_397 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_397_397, 0) = ((MR_Box) (libs__handle_options__V_398_398));
#line 519 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_397_397, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[71])));
#line 519 "handle_options.m"
        }
#line 519 "handle_options.m"
        {
#line 519 "handle_options.m"
          libs__handle_options__ReuseConstrSpec_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__ReuseConstrSpec_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[152])));
#line 519 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__ReuseConstrSpec_91, 1) = ((MR_Box) (libs__handle_options__V_397_397));
#line 519 "handle_options.m"
        }
#line 523 "handle_options.m"
        {
#line 523 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__ReuseConstrSpec_91, libs__handle_options__STATE_VARIABLE_Specs_392_392, &libs__handle_options__STATE_VARIABLE_Specs_409_409);
        }
#line 517 "handle_options.m"
      }
#line 526 "handle_options.m"
    {
#line 526 "handle_options.m"
      libs__handle_options__raw_lookup_string_option_3_p_0(*libs__handle_options__STATE_VARIABLE_OptionTable_117, (MR_Integer) 661, &libs__handle_options__FeedbackFile_92);
    }
#line 527 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__FeedbackFile_92, (MR_String) "") == 0);
#line 530 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 529 "handle_options.m"
      {
#line 529 "handle_options.m"
        *libs__handle_options__MaybeFeedbackInfo_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 529 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_414_414 = libs__handle_options__STATE_VARIABLE_Specs_409_409;
#line 529 "handle_options.m"
      }
#line 530 "handle_options.m"
    else
#line 536 "handle_options.m"
      {
#line 536 "handle_options.m"
        MR_Word libs__handle_options__FeedbackReadResult_94;

#line 537 "handle_options.m"
        {
#line 537 "handle_options.m"
          mdbcomp__feedback__read_feedback_file_5_p_0(libs__handle_options__FeedbackFile_92, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__handle_options__FeedbackReadResult_94);
        }
#line 542 "handle_options.m"
        if (((MR_tag((MR_Word) libs__handle_options__FeedbackReadResult_94)) == (MR_mktag((MR_Integer) 1))))
#line 543 "handle_options.m"
          {
#line 543 "handle_options.m"
            MR_Word libs__handle_options__Error_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__FeedbackReadResult_94, (MR_Integer) 0)));
#line 543 "handle_options.m"
            MR_String libs__handle_options__ErrorMessage_97;
#line 543 "handle_options.m"
            MR_Word libs__handle_options__V_413_413;
#line 543 "handle_options.m"
            MR_Word libs__handle_options__V_415_415;

#line 544 "handle_options.m"
            {
#line 544 "handle_options.m"
              mdbcomp__feedback__feedback_read_error_message_string_3_p_0(libs__handle_options__FeedbackFile_92, libs__handle_options__Error_96, &libs__handle_options__ErrorMessage_97);
            }
#line 546 "handle_options.m"
            {
#line 546 "handle_options.m"
              libs__handle_options__V_415_415 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 546 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_415_415, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 546 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_415_415, 1) = ((MR_Box) (libs__handle_options__ErrorMessage_97));
#line 546 "handle_options.m"
            }
#line 546 "handle_options.m"
            {
#line 546 "handle_options.m"
              libs__handle_options__V_413_413 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 546 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_413_413, 0) = ((MR_Box) (libs__handle_options__V_415_415));
#line 546 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_413_413, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 546 "handle_options.m"
            }
#line 546 "handle_options.m"
            {
#line 546 "handle_options.m"
              libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__V_413_413, libs__handle_options__STATE_VARIABLE_Specs_409_409, &libs__handle_options__STATE_VARIABLE_Specs_414_414);
            }
#line 547 "handle_options.m"
            *libs__handle_options__MaybeFeedbackInfo_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 543 "handle_options.m"
          }
#line 542 "handle_options.m"
        else
#line 540 "handle_options.m"
          {
#line 540 "handle_options.m"
            MR_Word libs__handle_options__FeedbackInfo_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__FeedbackReadResult_94, (MR_Integer) 0)));

#line 541 "handle_options.m"
            {
#line 541 "handle_options.m"
              MR_Word base;
#line 541 "handle_options.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 541 "handle_options.m"
              *libs__handle_options__MaybeFeedbackInfo_36 = base;
#line 541 "handle_options.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__FeedbackInfo_95));
#line 541 "handle_options.m"
            }
#line 540 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Specs_414_414 = libs__handle_options__STATE_VARIABLE_Specs_409_409;
#line 540 "handle_options.m"
          }
#line 536 "handle_options.m"
      }
#line 551 "handle_options.m"
    {
#line 551 "handle_options.m"
      libs__handle_options__raw_lookup_string_option_3_p_0(*libs__handle_options__STATE_VARIABLE_OptionTable_117, (MR_Integer) 643, &libs__handle_options__HostEnvTypeStr_98);
    }
#line 552 "handle_options.m"
    {
#line 552 "handle_options.m"
      libs__handle_options__succeeded = libs__globals__convert_env_type_2_p_0(libs__handle_options__HostEnvTypeStr_98, &libs__handle_options__HostEnvTypePrime_99);
    }
#line 554 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 553 "handle_options.m"
      {
#line 553 "handle_options.m"
        *libs__handle_options__HostEnvType_37 = libs__handle_options__HostEnvTypePrime_99;
#line 553 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_432_432 = libs__handle_options__STATE_VARIABLE_Specs_414_414;
#line 553 "handle_options.m"
      }
#line 554 "handle_options.m"
    else
#line 555 "handle_options.m"
      {
#line 555 "handle_options.m"
        MR_Word libs__handle_options__HostEnvSpec_100;
#line 555 "handle_options.m"
        MR_Word libs__handle_options__V_420_420;
#line 555 "handle_options.m"
        MR_Word libs__handle_options__V_421_421;

#line 555 "handle_options.m"
        *libs__handle_options__HostEnvType_37 = (MR_Integer) 0;
#line 557 "handle_options.m"
        {
#line 557 "handle_options.m"
          libs__handle_options__V_421_421 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_421_421, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 557 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_421_421, 1) = ((MR_Box) (libs__handle_options__HostEnvTypeStr_98));
#line 557 "handle_options.m"
        }
#line 557 "handle_options.m"
        {
#line 557 "handle_options.m"
          libs__handle_options__V_420_420 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_420_420, 0) = ((MR_Box) (libs__handle_options__V_421_421));
#line 557 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_420_420, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[75])));
#line 557 "handle_options.m"
        }
#line 557 "handle_options.m"
        {
#line 557 "handle_options.m"
          libs__handle_options__HostEnvSpec_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__HostEnvSpec_100, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[152])));
#line 557 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__HostEnvSpec_100, 1) = ((MR_Box) (libs__handle_options__V_420_420));
#line 557 "handle_options.m"
        }
#line 560 "handle_options.m"
        {
#line 560 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__HostEnvSpec_100, libs__handle_options__STATE_VARIABLE_Specs_414_414, &libs__handle_options__STATE_VARIABLE_Specs_432_432);
        }
#line 555 "handle_options.m"
      }
#line 562 "handle_options.m"
    {
#line 562 "handle_options.m"
      libs__handle_options__raw_lookup_string_option_3_p_0(*libs__handle_options__STATE_VARIABLE_OptionTable_117, (MR_Integer) 644, &libs__handle_options__SystemEnvTypeStr_101);
    }
#line 564 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__SystemEnvTypeStr_101, (MR_String) "") == 0);
#line 566 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 565 "handle_options.m"
      {
#line 565 "handle_options.m"
        libs__handle_options__SystemEnvTypePrime_102 = *libs__handle_options__HostEnvType_37;
#line 565 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 565 "handle_options.m"
      }
#line 566 "handle_options.m"
    else
#line 567 "handle_options.m"
      {
#line 567 "handle_options.m"
        libs__handle_options__succeeded = libs__globals__convert_env_type_2_p_0(libs__handle_options__SystemEnvTypeStr_101, &libs__handle_options__SystemEnvTypePrime_102);
      }
#line 571 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 570 "handle_options.m"
      {
#line 570 "handle_options.m"
        *libs__handle_options__SystemEnvType_38 = libs__handle_options__SystemEnvTypePrime_102;
#line 570 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_448_448 = libs__handle_options__STATE_VARIABLE_Specs_432_432;
#line 570 "handle_options.m"
      }
#line 571 "handle_options.m"
    else
#line 572 "handle_options.m"
      {
#line 572 "handle_options.m"
        MR_Word libs__handle_options__SystemEnvSpec_103;
#line 572 "handle_options.m"
        MR_Word libs__handle_options__V_436_436;
#line 572 "handle_options.m"
        MR_Word libs__handle_options__V_437_437;

#line 572 "handle_options.m"
        *libs__handle_options__SystemEnvType_38 = (MR_Integer) 0;
#line 574 "handle_options.m"
        {
#line 574 "handle_options.m"
          libs__handle_options__V_437_437 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_437_437, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 574 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_437_437, 1) = ((MR_Box) (libs__handle_options__SystemEnvTypeStr_101));
#line 574 "handle_options.m"
        }
#line 574 "handle_options.m"
        {
#line 574 "handle_options.m"
          libs__handle_options__V_436_436 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_436_436, 0) = ((MR_Box) (libs__handle_options__V_437_437));
#line 574 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_436_436, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[77])));
#line 574 "handle_options.m"
        }
#line 574 "handle_options.m"
        {
#line 574 "handle_options.m"
          libs__handle_options__SystemEnvSpec_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SystemEnvSpec_103, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[152])));
#line 574 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SystemEnvSpec_103, 1) = ((MR_Box) (libs__handle_options__V_436_436));
#line 574 "handle_options.m"
        }
#line 577 "handle_options.m"
        {
#line 577 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__SystemEnvSpec_103, libs__handle_options__STATE_VARIABLE_Specs_432_432, &libs__handle_options__STATE_VARIABLE_Specs_448_448);
        }
#line 572 "handle_options.m"
      }
#line 579 "handle_options.m"
    {
#line 579 "handle_options.m"
      libs__handle_options__raw_lookup_string_option_3_p_0(*libs__handle_options__STATE_VARIABLE_OptionTable_117, (MR_Integer) 645, &libs__handle_options__TargetEnvTypeStr_104);
    }
#line 580 "handle_options.m"
    {
#line 580 "handle_options.m"
      libs__handle_options__succeeded = libs__globals__convert_env_type_2_p_0(libs__handle_options__TargetEnvTypeStr_104, &libs__handle_options__TargetEnvTypePrime_105);
    }
#line 582 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 581 "handle_options.m"
      {
#line 581 "handle_options.m"
        *libs__handle_options__TargetEnvType_39 = libs__handle_options__TargetEnvTypePrime_105;
#line 581 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Specs_464_464 = libs__handle_options__STATE_VARIABLE_Specs_448_448;
#line 581 "handle_options.m"
      }
#line 582 "handle_options.m"
    else
#line 583 "handle_options.m"
      {
#line 583 "handle_options.m"
        MR_Word libs__handle_options__TargetEnvTypeSpec_106;
#line 583 "handle_options.m"
        MR_Word libs__handle_options__V_452_452;
#line 583 "handle_options.m"
        MR_Word libs__handle_options__V_453_453;

#line 583 "handle_options.m"
        *libs__handle_options__TargetEnvType_39 = (MR_Integer) 0;
#line 585 "handle_options.m"
        {
#line 585 "handle_options.m"
          libs__handle_options__V_453_453 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_453_453, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 585 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_453_453, 1) = ((MR_Box) (libs__handle_options__TargetEnvTypeStr_104));
#line 585 "handle_options.m"
        }
#line 585 "handle_options.m"
        {
#line 585 "handle_options.m"
          libs__handle_options__V_452_452 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_452_452, 0) = ((MR_Box) (libs__handle_options__V_453_453));
#line 585 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_452_452, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[81])));
#line 585 "handle_options.m"
        }
#line 585 "handle_options.m"
        {
#line 585 "handle_options.m"
          libs__handle_options__TargetEnvTypeSpec_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__TargetEnvTypeSpec_106, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[152])));
#line 585 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__TargetEnvTypeSpec_106, 1) = ((MR_Box) (libs__handle_options__V_452_452));
#line 585 "handle_options.m"
        }
#line 588 "handle_options.m"
        {
#line 588 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__TargetEnvTypeSpec_106, libs__handle_options__STATE_VARIABLE_Specs_448_448, &libs__handle_options__STATE_VARIABLE_Specs_464_464);
        }
#line 583 "handle_options.m"
      }
#line 592 "handle_options.m"
    libs__handle_options__succeeded = (*libs__handle_options__HostEnvType_37 == (MR_Integer) 0);
#line 592 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 593 "handle_options.m"
      libs__handle_options__succeeded = (*libs__handle_options__CSharp_CompilerType_34 == (MR_Integer) 0);
#line 599 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 597 "handle_options.m"
      {
#line 598 "handle_options.m"
        {
#line 598 "handle_options.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[85]), libs__handle_options__STATE_VARIABLE_Specs_464_464, &libs__handle_options__STATE_VARIABLE_Specs_474_474);
        }
#line 597 "handle_options.m"
      }
#line 599 "handle_options.m"
    else
#line 599 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Specs_474_474 = libs__handle_options__STATE_VARIABLE_Specs_464_464;
#line 603 "handle_options.m"
    {
#line 603 "handle_options.m"
      libs__handle_options__raw_lookup_accumulating_option_3_p_0(*libs__handle_options__STATE_VARIABLE_OptionTable_117, (MR_Integer) 58, &libs__handle_options__LimitErrorContextsOptionStrs_108);
    }
#line 605 "handle_options.m"
    {
#line 605 "handle_options.m"
      libs__globals__convert_limit_error_contexts_3_p_0(libs__handle_options__LimitErrorContextsOptionStrs_108, &libs__handle_options__BadLimitErrorContextsOptions_109, libs__handle_options__LimitErrorContextsMap_40);
    }
#line 609 "handle_options.m"
    if ((libs__handle_options__BadLimitErrorContextsOptions_109 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 608 "handle_options.m"
      *libs__handle_options__STATE_VARIABLE_Specs_118 = libs__handle_options__STATE_VARIABLE_Specs_474_474;
#line 609 "handle_options.m"
    else
#line 609 "handle_options.m"
      {
#line 609 "handle_options.m"
        MR_Word libs__handle_options__V_509_509 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__BadLimitErrorContextsOptions_109, (MR_Integer) 1)));
#line 609 "handle_options.m"
        MR_String libs__handle_options__V_510_510 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__BadLimitErrorContextsOptions_109, (MR_Integer) 0)));

#line 609 "handle_options.m"
        if ((libs__handle_options__V_509_509 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "handle_options.m"
          {
#line 610 "handle_options.m"
            MR_Word libs__handle_options__LECSpec_111;
#line 610 "handle_options.m"
            MR_Word libs__handle_options__V_493_493;
#line 610 "handle_options.m"
            MR_Word libs__handle_options__V_494_494;

#line 612 "handle_options.m"
            {
#line 612 "handle_options.m"
              libs__handle_options__V_494_494 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 612 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_494_494, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 612 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_494_494, 1) = ((MR_Box) (libs__handle_options__V_510_510));
#line 612 "handle_options.m"
            }
#line 612 "handle_options.m"
            {
#line 612 "handle_options.m"
              libs__handle_options__V_493_493 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 612 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_493_493, 0) = ((MR_Box) (libs__handle_options__V_494_494));
#line 612 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_493_493, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[87])));
#line 612 "handle_options.m"
            }
#line 612 "handle_options.m"
            {
#line 612 "handle_options.m"
              libs__handle_options__LECSpec_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 612 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__LECSpec_111, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[152])));
#line 612 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__LECSpec_111, 1) = ((MR_Box) (libs__handle_options__V_493_493));
#line 612 "handle_options.m"
            }
#line 614 "handle_options.m"
            {
#line 614 "handle_options.m"
              libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__LECSpec_111, libs__handle_options__STATE_VARIABLE_Specs_474_474, libs__handle_options__STATE_VARIABLE_Specs_118);
#line 614 "handle_options.m"
              return;
            }
#line 610 "handle_options.m"
          }
#line 609 "handle_options.m"
        else
#line 616 "handle_options.m"
          {
#line 616 "handle_options.m"
            MR_Word libs__handle_options__TypeCtorInfo_508_508;
#line 616 "handle_options.m"
            MR_Word libs__handle_options__BadPieces_115;
#line 616 "handle_options.m"
            MR_Word libs__handle_options__V_481_481;
#line 616 "handle_options.m"
            MR_Word libs__handle_options__LECSpec_503;

#line 617 "handle_options.m"
            {
#line 617 "handle_options.m"
              libs__handle_options__BadPieces_115 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(libs__handle_options__BadLimitErrorContextsOptions_109);
            }
#line 11684 "libs.handle_options.c"
            libs__handle_options__TypeCtorInfo_508_508 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 619 "handle_options.m"
            {
#line 619 "handle_options.m"
              libs__handle_options__V_481_481 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_508_508, libs__handle_options__BadPieces_115, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[87]));
            }
#line 619 "handle_options.m"
            {
#line 619 "handle_options.m"
              libs__handle_options__LECSpec_503 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_508_508, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[155]), libs__handle_options__V_481_481);
            }
#line 621 "handle_options.m"
            {
#line 621 "handle_options.m"
              libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__LECSpec_503, libs__handle_options__STATE_VARIABLE_Specs_474_474, libs__handle_options__STATE_VARIABLE_Specs_118);
#line 621 "handle_options.m"
              return;
            }
#line 616 "handle_options.m"
          }
#line 609 "handle_options.m"
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
#line 11979 "libs.handle_options.c"
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
#line 209 "handle_options.m"
            return;
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

#line 2449 "handle_options.m"
    {
#line 2449 "handle_options.m"
      mercury__library__version_2_p_0(&libs__handle_options__Version_4, &libs__handle_options__Fullarch_5);
    }
#line 2451 "handle_options.m"
    {
#line 2451 "handle_options.m"
      libs__handle_options__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2451 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 0) = ((MR_Box) (libs__handle_options__Fullarch_5));
#line 2451 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[151])));
#line 2451 "handle_options.m"
    }
#line 2451 "handle_options.m"
    {
#line 2451 "handle_options.m"
      libs__handle_options__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2451 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 0) = ((MR_Box) ((MR_String) ", on "));
#line 2451 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 1) = ((MR_Box) (libs__handle_options__V_14_14));
#line 2451 "handle_options.m"
    }
#line 2451 "handle_options.m"
    {
#line 2451 "handle_options.m"
      libs__handle_options__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2451 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 0) = ((MR_Box) (libs__handle_options__Version_4));
#line 2451 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 1) = ((MR_Box) (libs__handle_options__V_12_12));
#line 2451 "handle_options.m"
    }
#line 2450 "handle_options.m"
    {
#line 2450 "handle_options.m"
      libs__handle_options__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2450 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_8_8, 0) = ((MR_Box) ((MR_String) "Name: mmc -- Melbourne Mercury Compiler, version "));
#line 2450 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_8_8, 1) = ((MR_Box) (libs__handle_options__V_11_11));
#line 2450 "handle_options.m"
    }
#line 2450 "handle_options.m"
    {
#line 2450 "handle_options.m"
      mercury__io__write_strings_3_p_0(libs__handle_options__V_8_8);
    }
#line 2452 "handle_options.m"
    {
#line 2452 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "Copyright: Copyright (C) 1993-2012 The University of Melbourne\n");
    }
#line 2454 "handle_options.m"
    {
#line 2454 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "           Copyright (C) 2013-2015 The Mercury team\n");
    }
#line 2456 "handle_options.m"
    {
#line 2456 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "Usage: mmc [<options>] <arguments>\n");
    }
#line 2457 "handle_options.m"
    {
#line 2457 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "Arguments:\n");
    }
#line 2458 "handle_options.m"
    {
#line 2458 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "\tArguments ending in \140.m\' are assumed to be source file names.\n");
    }
#line 2460 "handle_options.m"
    {
#line 2460 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "\tArguments that do not end in \140.m\' are assumed to be module names.\n");
    }
#line 2462 "handle_options.m"
    {
#line 2462 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "\tArguments in the form \100file are replaced with the contents of the file.\n");
    }
#line 2464 "handle_options.m"
    {
#line 2464 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "Options:\n");
    }
#line 2465 "handle_options.m"
    {
#line 2465 "handle_options.m"
      libs__options__options_help_2_p_0();
#line 2465 "handle_options.m"
      return;
    }
#line 2445 "handle_options.m"
  }
#line 64 "handle_options.m"
}

#line 60 "handle_options.m"
void MR_CALL 
libs__handle_options__usage_2_p_0(void)
#line 60 "handle_options.m"
{
#line 2429 "handle_options.m"
  {
#line 2429 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2429 "handle_options.m"
    MR_Word libs__handle_options__AlreadyPrinted_4;

#line 2426 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#line 2426 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 12180 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2426 "handle_options.m"
}
#line 2426 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0

	MR_Word X;

		{
#line 2426 "handle_options.m"
X = libs__handle_options__mutable_variable_already_printed_usage;

#line 12196 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
	 libs__handle_options__AlreadyPrinted_4  = X;
#line 2426 "handle_options.m"
}
#line 2426 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#line 2426 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 12215 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2426 "handle_options.m"
}
#line 2441 "handle_options.m"
#line 2441 "handle_options.m"
    switch (libs__handle_options__AlreadyPrinted_4) {
#line 2441 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2441 "handle_options.m"
      case (MR_Integer) 0:
#line 2434 "handle_options.m"
        {
#line 2435 "handle_options.m"
          {
#line 2435 "handle_options.m"
            libs__handle_options__display_compiler_version_2_p_0();
          }
#line 2436 "handle_options.m"
          {
#line 2436 "handle_options.m"
            mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[4]));
          }
#line 2426 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#line 2426 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 12252 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2426 "handle_options.m"
}
#line 2426 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0

	MR_Word X;

	X =  (MR_Integer) 1 ;
		{
#line 2426 "handle_options.m"
libs__handle_options__mutable_variable_already_printed_usage = X;

#line 12269 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2426 "handle_options.m"
}
#line 2426 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#line 2426 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 12287 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2426 "handle_options.m"
}
#line 2434 "handle_options.m"
        }
#line 2441 "handle_options.m"
        break;
#line 2441 "handle_options.m"
      case (MR_Integer) 1:
#line 2442 "handle_options.m"
        {
#line 2442 "handle_options.m"
        }
#line 2441 "handle_options.m"
        break;
#line 2441 "handle_options.m"
    }
#line 2429 "handle_options.m"
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
#line 2408 "handle_options.m"
  {
#line 2408 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2408 "handle_options.m"
    MR_String libs__handle_options__ProgName_8;
#line 2416 "handle_options.m"
    MR_Integer libs__handle_options___NumWarnings_9;
#line 2416 "handle_options.m"
    MR_Integer libs__handle_options___NumErrors_10;

#line 2409 "handle_options.m"
    {
#line 2409 "handle_options.m"
      mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &libs__handle_options__ProgName_8);
    }
#line 2410 "handle_options.m"
    {
#line 2410 "handle_options.m"
      mercury__io__write_string_3_p_0(libs__handle_options__ProgName_8);
    }
#line 2411 "handle_options.m"
    {
#line 2411 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) ":");
    }
#line 2412 "handle_options.m"
    {
#line 2412 "handle_options.m"
      mercury__io__nl_2_p_0();
    }
#line 2416 "handle_options.m"
    {
#line 2416 "handle_options.m"
      parse_tree__error_util__write_error_specs_8_p_0(libs__handle_options__Specs_6, libs__handle_options__Globals_5, (MR_Integer) 0, &libs__handle_options___NumWarnings_9, (MR_Integer) 0, &libs__handle_options___NumErrors_10);
    }
#line 2408 "handle_options.m"
  }
#line 56 "handle_options.m"
}

#line 50 "handle_options.m"
void MR_CALL 
libs__handle_options__display_compiler_version_2_p_0(void)
#line 50 "handle_options.m"
{
#line 2418 "handle_options.m"
  {
#line 2418 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2418 "handle_options.m"
    MR_String libs__handle_options__Version_4;
#line 2418 "handle_options.m"
    MR_String libs__handle_options__Fullarch_5;
#line 2418 "handle_options.m"
    MR_Word libs__handle_options__V_8_8;
#line 2418 "handle_options.m"
    MR_Word libs__handle_options__V_11_11;
#line 2418 "handle_options.m"
    MR_Word libs__handle_options__V_12_12;
#line 2418 "handle_options.m"
    MR_Word libs__handle_options__V_14_14;

#line 2419 "handle_options.m"
    {
#line 2419 "handle_options.m"
      mercury__library__version_2_p_0(&libs__handle_options__Version_4, &libs__handle_options__Fullarch_5);
    }
#line 2421 "handle_options.m"
    {
#line 2421 "handle_options.m"
      libs__handle_options__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2421 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 0) = ((MR_Box) (libs__handle_options__Fullarch_5));
#line 2421 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[2])));
#line 2421 "handle_options.m"
    }
#line 2421 "handle_options.m"
    {
#line 2421 "handle_options.m"
      libs__handle_options__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2421 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 0) = ((MR_Box) ((MR_String) ", on "));
#line 2421 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 1) = ((MR_Box) (libs__handle_options__V_14_14));
#line 2421 "handle_options.m"
    }
#line 2421 "handle_options.m"
    {
#line 2421 "handle_options.m"
      libs__handle_options__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2421 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 0) = ((MR_Box) (libs__handle_options__Version_4));
#line 2421 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 1) = ((MR_Box) (libs__handle_options__V_12_12));
#line 2421 "handle_options.m"
    }
#line 2421 "handle_options.m"
    {
#line 2421 "handle_options.m"
      libs__handle_options__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2421 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_8_8, 0) = ((MR_Box) ((MR_String) "Mercury Compiler, version "));
#line 2421 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_8_8, 1) = ((MR_Box) (libs__handle_options__V_11_11));
#line 2421 "handle_options.m"
    }
#line 2420 "handle_options.m"
    {
#line 2420 "handle_options.m"
      mercury__io__write_strings_3_p_0(libs__handle_options__V_8_8);
#line 2420 "handle_options.m"
      return;
    }
#line 2418 "handle_options.m"
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
#line 155 "handle_options.m"
      return;
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
#line 155 "handle_options.m"
      return;
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
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 115, &libs__handle_options__Smart_19);
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
#line 134 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 133 "handle_options.m"
          {
#line 133 "handle_options.m"
            {
#line 133 "handle_options.m"
              libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "linking", libs__handle_options__STATE_VARIABLE_Globals_41_41, libs__handle_options__STATE_VARIABLE_Globals_23);
#line 133 "handle_options.m"
              return;
            }
#line 133 "handle_options.m"
          }
#line 134 "handle_options.m"
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
