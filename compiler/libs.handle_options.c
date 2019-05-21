/*
** Automatically generated from `handle_options.m'
** by the Mercury compiler,
** version rotd-2018-03-17
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


// :- module libs.handle_options.
// :- implementation.

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
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.compute_grade.mih"
#include "libs.dependency_graph.mih"
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
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
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



struct libs__handle_options__separate_option_args_5_p_0_4_env_0_s {
  MR_Box * libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_1;
  MR_Box * libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_2;
  MR_Cont libs__handle_options__separate_option_args_5_p_0_4_env_0__cont;
  void * libs__handle_options__separate_option_args_5_p_0_4_env_0__cont_env_ptr;
  MR_Word libs__handle_options__separate_option_args_5_p_0_4_env_0__conv3_HeadVar__1_1;
  MR_Word libs__handle_options__separate_option_args_5_p_0_4_env_0__conv2_HeadVar__2_2;
};

struct libs__handle_options__handle_given_options_7_p_0_4_env_0_s {
  MR_Box * libs__handle_options__handle_given_options_7_p_0_4_env_0__wrapper_arg_1;
  MR_Box * libs__handle_options__handle_given_options_7_p_0_4_env_0__wrapper_arg_2;
  MR_Cont libs__handle_options__handle_given_options_7_p_0_4_env_0__cont;
  void * libs__handle_options__handle_given_options_7_p_0_4_env_0__cont_env_ptr;
  MR_Word libs__handle_options__handle_given_options_7_p_0_4_env_0__conv3_HeadVar__1_1;
  MR_Word libs__handle_options__handle_given_options_7_p_0_4_env_0__conv2_HeadVar__2_2;
};


static const MR_VA_PseudoTypeInfo_Struct1 libs__handle_options____vpti_pred_1__plain_builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct2 libs__handle_options____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0;

static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__getopt_io__pti_maybe_option_table_1__plain_libs__options__type_ctor_info_option_0;

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2150__1_2_f_0(
  MR_Word ToGradeSubdir_178,
  MR_String LambdaHeadVar__1_1571);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2148__1_2_f_0(
  MR_Word ToGradeSubdir_178,
  MR_String LambdaHeadVar__1_1565);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2157__1_1_f_0(
  MR_String LambdaHeadVar__1_1560);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2156__1_1_f_0(
  MR_String LambdaHeadVar__1_1555);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2126__1_2_f_0(
  MR_Word ToGradeSubdir_178,
  MR_String LambdaHeadVar__1_1542);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2122__1_2_f_0(
  MR_Word ToGradeSubdir_178,
  MR_String LambdaHeadVar__1_1536);

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2104__2_2_p_0(
  MR_Word HeadVar__1_1529,
  MR_String HeadVar__2_1678);

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2104__1_2_p_0(
  MR_String HeadVar__1_1530,
  MR_String HeadVar__2_1680);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2086__1_3_f_0(
  MR_String TargetArch_143,
  MR_String GradeString_158,
  MR_String LambdaHeadVar__1_1517);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2050__1_2_f_0(
  MR_String GradeString_158,
  MR_String LambdaHeadVar__1_1498);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2040__1_2_f_0(
  MR_String GradeString_158,
  MR_String LambdaHeadVar__1_1488);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2027__1_2_f_0(
  MR_String GradeString_158,
  MR_String LambdaHeadVar__1_1471);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2007__1_2_f_0(
  MR_String GradeString_158,
  MR_String LambdaHeadVar__1_1456);

static void MR_CALL 
libs__handle_options__unsafe_set_already_printed_usage_1_p_0(
  MR_Word X_1);

static void MR_CALL 
libs__handle_options__unsafe_get_already_printed_usage_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
libs__handle_options__unlock_already_printed_usage_0_p_0(void);

static void MR_CALL 
libs__handle_options__lock_already_printed_usage_0_p_0(void);

static void MR_CALL 
libs__handle_options__initialise_mutable_already_printed_usage_0_p_0(void);

static void MR_CALL 
libs__handle_options__pre_initialise_mutable_already_printed_usage_0_p_0(void);

static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
libs__handle_options__separate_option_args_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
libs__handle_options__separate_option_args_5_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
libs__handle_options__convert_option_table_result_to_globals_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
libs__handle_options__convert_option_table_result_to_globals_5_p_0(
  MR_Word MaybeOptionTable0_6,
  MR_Word * STATE_VARIABLE_Specs_41,
  MR_Word * Globals_8);

static MR_bool MR_CALL 
libs__handle_options__handle_given_options_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
libs__handle_options__handle_given_options_7_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
libs__handle_options__handle_given_options_7_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
libs__handle_options__handle_given_options_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
libs__handle_options__handle_given_options_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0(
  MR_Word OptionTable0_25,
  MR_Word OpMode_26,
  MR_Word Target_27,
  MR_Word GC_Method_28,
  MR_Word TagsMethod0_29,
  MR_Word TermNorm_30,
  MR_Word Term2Norm_31,
  MR_Word TraceLevel_32,
  MR_Word TraceSuppress_33,
  MR_Word SSTraceLevel_34,
  MR_Word MaybeThreadSafe_35,
  MR_Word C_CompilerType_36,
  MR_Word CSharp_CompilerType_37,
  MR_Word ReuseStrategy_38,
  MR_Word MaybeFeedbackInfo_39,
  MR_Word HostEnvType_40,
  MR_Word SystemEnvType_41,
  MR_Word TargetEnvType_42,
  MR_Word LimitErrorContextsMap_43,
  MR_Word STATE_VARIABLE_Specs_0_213,
  MR_Word * STATE_VARIABLE_Specs_214,
  MR_Word * STATE_VARIABLE_Globals_215);

static void MR_CALL 
libs__handle_options__disable_smart_recompilation_5_p_0(
  MR_String OptionDescr_6,
  MR_Word STATE_VARIABLE_Globals_0_11,
  MR_Word * STATE_VARIABLE_Globals_12);

static void MR_CALL 
libs__handle_options__option_neg_implies_5_p_0(
  MR_Word SourceOption_6,
  MR_Word ImpliedOption_7,
  MR_Word ImpliedOptionValue_8,
  MR_Word STATE_VARIABLE_Globals_0_11,
  MR_Word * STATE_VARIABLE_Globals_12);

static void MR_CALL 
libs__handle_options__option_implies_5_p_0(
  MR_Word SourceOption_6,
  MR_Word ImpliedOption_7,
  MR_Word ImpliedOptionValue_8,
  MR_Word STATE_VARIABLE_Globals_0_11,
  MR_Word * STATE_VARIABLE_Globals_12);

static void MR_CALL 
libs__handle_options__postprocess_options_lowlevel_2_p_0(
  MR_Word STATE_VARIABLE_Globals_0_14,
  MR_Word * STATE_VARIABLE_Globals_15);

static void MR_CALL 
libs__handle_options__check_option_values_22_p_0(
  MR_Word STATE_VARIABLE_OptionTable_0_118,
  MR_Word * STATE_VARIABLE_OptionTable_119,
  MR_Word * Target_24,
  MR_Word * GC_Method_25,
  MR_Word * TagsMethod_26,
  MR_Word * TermNorm_27,
  MR_Word * Term2Norm_28,
  MR_Word * TraceLevel_29,
  MR_Word * TraceSuppress_30,
  MR_Word * SSTraceLevel_31,
  MR_Word * MaybeThreadSafe_32,
  MR_Word * C_CompilerType_33,
  MR_Word * CSharp_CompilerType_34,
  MR_Word * ReuseStrategy_35,
  MR_Word * MaybeFeedbackInfo_36,
  MR_Word * HostEnvType_37,
  MR_Word * SystemEnvType_38,
  MR_Word * TargetEnvType_39,
  MR_Word * LimitErrorContextsMap_40,
  MR_Word * STATE_VARIABLE_Specs_120);

static void MR_CALL 
libs__handle_options__raw_lookup_accumulating_option_3_p_0(
  MR_Word OptionTable_4,
  MR_Word Option_5,
  MR_Word * AccumulatingValue_6);

static void MR_CALL 
libs__handle_options__raw_lookup_string_option_3_p_0(
  MR_Word OptionTable_4,
  MR_Word Option_5,
  MR_String * StringValue_6);

static void MR_CALL 
libs__handle_options__raw_lookup_int_option_3_p_0(
  MR_Word OptionTable_4,
  MR_Word Option_5,
  MR_Integer * IntValue_6);

static void MR_CALL 
libs__handle_options__raw_lookup_bool_option_3_p_0(
  MR_Word OptionTable_4,
  MR_Word Option_5,
  MR_Word * BoolValue_6);

static MR_bool MR_CALL 
libs__handle_options__convert_dump_alias_2_p_0(
  MR_String HeadVar__1_1,
  MR_String * HeadVar__2_2);


static /* final */ const MR_Box libs__handle_options_scalar_common_1[247][2];

static /* final */ const MR_Box libs__handle_options_scalar_common_3[9][1];

static /* final */ const MR_Box libs__handle_options_scalar_common_4[3][6];

static /* final */ const MR_Box libs__handle_options_scalar_common_5[2][7];

static /* final */ const MR_Box libs__handle_options_scalar_common_6[5][5];

static /* final */ const MR_Box libs__handle_options_scalar_common_7[10][3];

static /* final */ const MR_Box libs__handle_options_scalar_common_8[2][4];


/* sealed */ struct libs__handle_options__vector_common_type_2_0_s {
  const MR_String libs__handle_options__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct libs__handle_options__vector_common_type_2_0_s libs__handle_options_vector_common_2[20];



static /* final */ const MR_Box libs__handle_options_scalar_common_1[247][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "Copyright (C) 2013-2018 The Mercury team\n")),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option; must be an integer between 0 and 100."))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--inform-incomplete-switch-threshold"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[43])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[45])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--termination-norm"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[48])))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_String) "num-data-elems")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_String) "total")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[50])))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_String) "simple")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[51])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--termination2-norm"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[54])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option."))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--decl-debug"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[57])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not compatible with the value of the"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[59])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--trace"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[63])))
  },
  /* row 65 */
  {
    ((MR_Box) ((MR_String) "default")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 66 */
  {
    ((MR_Box) ((MR_String) "rep")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[65])))
  },
  /* row 67 */
  {
    ((MR_Box) ((MR_String) "decl")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[66])))
  },
  /* row 68 */
  {
    ((MR_Box) ((MR_String) "deep")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[67])))
  },
  /* row 69 */
  {
    ((MR_Box) ((MR_String) "shallow")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[68])))
  },
  /* row 70 */
  {
    ((MR_Box) ((MR_String) "minimum")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[69])))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--suppress-trace"))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[57])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[72])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--ssdb-trace"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[75])))
  },
  /* row 77 */
  {
    ((MR_Box) ((MR_String) "deep")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 78 */
  {
    ((MR_Box) ((MR_String) "shallow")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[77])))
  },
  /* row 79 */
  {
    ((MR_Box) ((MR_String) "none")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[78])))
  },
  /* row 80 */
  {
    ((MR_Box) ((MR_String) "default")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[79])))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be"))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option;"))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[82])))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--maybe-thread-safe"))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[84])))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[86])))
  },
  /* row 88 */
  {
    ((MR_Box) ((MR_String) "yes")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 89 */
  {
    ((MR_Box) ((MR_String) "no")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[88])))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[57])))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--dump-hlds-alias"))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[91])))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(also known as"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[93])))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "D"))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[95])))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[97])))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--c-compiler-type"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[99]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[84])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[100])))
  },
  /* row 102 */
  {
    ((MR_Box) ((MR_String) "unknown")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_String) "msvc")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[102])))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_String) "clang")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[103])))
  },
  /* row 105 */
  {
    ((MR_Box) ((MR_String) "gcc")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[104])))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--csharp-compiler-type"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[84])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[107])))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_String) "mono")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[102])))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_String) "microsoft")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[109])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--structure-reuse-constraint"))
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
    ((MR_Box) ((MR_String) "within_n_cells_difference")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 115 */
  {
    ((MR_Box) ((MR_String) "same_cons_id")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[114])))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--host-env-type"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[116]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[117])))
  },
  /* row 119 */
  {
    ((MR_Box) ((MR_String) "windows")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 120 */
  {
    ((MR_Box) ((MR_String) "msys")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[119])))
  },
  /* row 121 */
  {
    ((MR_Box) ((MR_String) "cygwin")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[120])))
  },
  /* row 122 */
  {
    ((MR_Box) ((MR_String) "posix")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[121])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--system-env-type"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[123]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[84])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[124])))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--target-env-type"))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[126]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[84])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[127])))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "--csharp-compiler-type microsoft"))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[129]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is incompatible with"))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[131]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[130])))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "--host-env-type posix"))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[133]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[132])))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--limit-error-contexts"))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[57])))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[136])))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which disables tags."))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[138]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[140]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[139])))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--num-tag-bits 0"))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[142]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[141])))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Using"))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[144]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[143])))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[145])))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option is either unspecified or invalid."))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[147]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[146])))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--num-tag-bits"))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[149]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[148])))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: the value of the"))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[151]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[150])))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "requires a parallel grade."))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[153]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "grade component"))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[155]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[154])))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "threadscope"))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[157]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[156])))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[158])))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Use a low-level C grade without trailing."))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[161]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "supports parallel conjunctions."))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[163]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[162])))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option requires a grade that"))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[165]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[164])))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--implicit-parallelism"))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[167]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[166])))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[168])))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--feedback-file"))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[170]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option requires the use of"))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[172]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[171])))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[167]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[173])))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[174])))
  },
  /* row 176 */
  {
    ((MR_Box) ((MR_String) "shared")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 177 */
  {
    ((MR_Box) ((MR_String) "static")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[176])))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[177])))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--make"))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[179]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[57])))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option is incompatible with the"))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[181]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[180])))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--transitive-intermodule-optimization"))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[183]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[182])))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[184])))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--intermodule-analysis"))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[186]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[57])))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[181]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[187])))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--intermodule-optimization"))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[189]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[188])))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[190])))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--extra-initialization-functions"))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[192]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[57])))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[181]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[193])))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--generate-standalone-interface"))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[195]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[194])))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[196])))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "at once."))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[198]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "You cannot use both forms of minimal model tabling"))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[200]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[199])))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "high level code."))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[202]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Minimal model tabling is incompatible with"))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[204]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[203])))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "trailing."))
  },
  /* row 207 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[206]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[204]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[207])))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Deep profiling is incompatible with"))
  },
  /* row 210 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[209]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[203])))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Cannot record term size as both words and cells."))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[211]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 213 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Term size profiling is incompatible with"))
  },
  /* row 214 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[213]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[203])))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Debugging is available only in low level C grades."))
  },
  /* row 216 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[215]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 217 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "--put-nondet-env-on-heap"))
  },
  /* row 218 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])))
  },
  /* row 219 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[131]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[218])))
  },
  /* row 220 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "--gc accurate"))
  },
  /* row 221 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[220]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[219])))
  },
  /* row 222 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Invalid argument"))
  },
  /* row 223 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The specified trace level"))
  },
  /* row 224 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Invalid arguments"))
  },
  /* row 225 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[224]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 226 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "automatic"))
  },
  /* row 227 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ".exe"))
  },
  /* row 228 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "shared"))
  },
  /* row 229 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: cannot set the value of"))
  },
  /* row 230 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--arg-pack-bits"))
  },
  /* row 231 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to value higher than the value of"))
  },
  /* row 232 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--bits-per-word"))
  },
  /* row 233 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 234 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Reducing the effective value of"))
  },
  /* row 235 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to the maximum allowable value, which is"))
  },
  /* row 236 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 237 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "--warn-non-tail-recursion is incompatible with --pessimize-tailcalls"))
  },
  /* row 238 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[237]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 239 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "--warn-non-tail-recursion requires --optimize-tailcalls"))
  },
  /* row 240 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[239]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 241 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "--warn-non-tail-recursion is incompatible with --errorcheck-only"))
  },
  /* row 242 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[241]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 243 */
  {
    ((MR_Box) ((MR_String) "c")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 244 */
  {
    ((MR_Box) ((MR_String) "csharp")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 245 */
  {
    ((MR_Box) ((MR_String) "java")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 246 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_3[9][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 32))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 999999))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 13))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 14))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_4[3][6] = {
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
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_5[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt_io__getopt_io__type_ctor_info_special_data_0)),
    ((MR_Box) (&libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0)),
    ((MR_Box) (&libs__handle_options__getopt_io__pti_maybe_option_table_1__plain_libs__options__type_ctor_info_option_0))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_6[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__handle_options____vpti_pred_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_7[10][3] = {
  /* row 0 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[0])),
    ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[0])),
    ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_11)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[2])),
    ((MR_Box) (libs__handle_options__handle_given_options_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[3])),
    ((MR_Box) (libs__handle_options__handle_given_options_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[4])),
    ((MR_Box) (libs__handle_options__handle_given_options_7_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_5[1])),
    ((MR_Box) (libs__handle_options__handle_given_options_7_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[2])),
    ((MR_Box) (libs__handle_options__separate_option_args_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[3])),
    ((MR_Box) (libs__handle_options__separate_option_args_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[4])),
    ((MR_Box) (libs__handle_options__separate_option_args_5_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_5[1])),
    ((MR_Box) (libs__handle_options__separate_option_args_5_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_8[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_7[2])),
    ((MR_Box) (&libs__handle_options_scalar_common_7[3])),
    ((MR_Box) (&libs__handle_options_scalar_common_7[4])),
    ((MR_Box) (&libs__handle_options_scalar_common_7[5]))
  },
  /* row 1 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_7[6])),
    ((MR_Box) (&libs__handle_options_scalar_common_7[7])),
    ((MR_Box) (&libs__handle_options_scalar_common_7[8])),
    ((MR_Box) (&libs__handle_options_scalar_common_7[9]))
  },
};


static /* final */ const struct libs__handle_options__vector_common_type_2_0_s libs__handle_options_vector_common_2[20] = {
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
#line 2476 "handle_options.m"
MR_Word libs__handle_options__mutable_variable_already_printed_usage;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__handle_options__mutable_variable_already_printed_usage_lock;
#endif

#line 2476 "handle_options.m"
void 
libs__handle_options__user_init_pred_0(void)
#line 2476 "handle_options.m"
{
#line 2476 "handle_options.m"
	libs__handle_options__initialise_mutable_already_printed_usage_0_p_0();
}


static const MR_VA_PseudoTypeInfo_Struct1 libs__handle_options____vpti_pred_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 libs__handle_options____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__getopt_io__pti_maybe_option_table_1__plain_libs__options__type_ctor_info_option_0 = {
  &mercury__getopt_io__getopt_io__type_ctor_info_maybe_option_table_1,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0
  }
};

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2150__1_2_f_0(
  MR_Word ToGradeSubdir_178,
  MR_String LambdaHeadVar__1_1571)
{
  {
    MR_String LambdaHeadVar__2_1572;
    MR_String Var_1573;
    MR_String Var_1574;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), ToGradeSubdir_178, (MR_Integer) 1)));
    MR_Box conv1_Var_1574;

    conv1_Var_1574 = func_0(((MR_Box) ToGradeSubdir_178), ((MR_Box) (LambdaHeadVar__1_1571)));
    Var_1574 = ((MR_String) conv1_Var_1574);
    Var_1573 = mercury__dir__f_slash_2_f_0(Var_1574, (MR_String) "Mercury");
    LambdaHeadVar__2_1572 = mercury__dir__f_slash_2_f_0(Var_1573, (MR_String) "hrls");
    return LambdaHeadVar__2_1572;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2148__1_2_f_0(
  MR_Word ToGradeSubdir_178,
  MR_String LambdaHeadVar__1_1565)
{
  {
    MR_String LambdaHeadVar__2_1566;
    MR_String Var_1567;
    MR_String Var_1568;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), ToGradeSubdir_178, (MR_Integer) 1)));
    MR_Box conv1_Var_1568;

    conv1_Var_1568 = func_0(((MR_Box) ToGradeSubdir_178), ((MR_Box) (LambdaHeadVar__1_1565)));
    Var_1568 = ((MR_String) conv1_Var_1568);
    Var_1567 = mercury__dir__f_slash_2_f_0(Var_1568, (MR_String) "Mercury");
    LambdaHeadVar__2_1566 = mercury__dir__f_slash_2_f_0(Var_1567, (MR_String) "mihs");
    return LambdaHeadVar__2_1566;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2157__1_1_f_0(
  MR_String LambdaHeadVar__1_1560)
{
  {
    MR_String LambdaHeadVar__2_1561;
    MR_String Var_1562;

    Var_1562 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1560, (MR_String) "Mercury");
    LambdaHeadVar__2_1561 = mercury__dir__f_slash_2_f_0(Var_1562, (MR_String) "hrls");
    return LambdaHeadVar__2_1561;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2156__1_1_f_0(
  MR_String LambdaHeadVar__1_1555)
{
  {
    MR_String LambdaHeadVar__2_1556;
    MR_String Var_1557;

    Var_1557 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1555, (MR_String) "Mercury");
    LambdaHeadVar__2_1556 = mercury__dir__f_slash_2_f_0(Var_1557, (MR_String) "mihs");
    return LambdaHeadVar__2_1556;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2126__1_2_f_0(
  MR_Word ToGradeSubdir_178,
  MR_String LambdaHeadVar__1_1542)
{
  {
    MR_String LambdaHeadVar__2_1543;
    MR_String Var_1544;
    MR_String Var_1545;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), ToGradeSubdir_178, (MR_Integer) 1)));
    MR_Box conv1_Var_1545;

    conv1_Var_1545 = func_0(((MR_Box) ToGradeSubdir_178), ((MR_Box) (LambdaHeadVar__1_1542)));
    Var_1545 = ((MR_String) conv1_Var_1545);
    Var_1544 = mercury__dir__f_slash_2_f_0(Var_1545, (MR_String) "Mercury");
    LambdaHeadVar__2_1543 = mercury__dir__f_slash_2_f_0(Var_1544, (MR_String) "inits");
    return LambdaHeadVar__2_1543;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2122__1_2_f_0(
  MR_Word ToGradeSubdir_178,
  MR_String LambdaHeadVar__1_1536)
{
  {
    MR_String LambdaHeadVar__2_1537;
    MR_String Var_1538;
    MR_String Var_1539;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), ToGradeSubdir_178, (MR_Integer) 1)));
    MR_Box conv1_Var_1539;

    conv1_Var_1539 = func_0(((MR_Box) ToGradeSubdir_178), ((MR_Box) (LambdaHeadVar__1_1536)));
    Var_1539 = ((MR_String) conv1_Var_1539);
    Var_1538 = mercury__dir__f_slash_2_f_0(Var_1539, (MR_String) "Mercury");
    LambdaHeadVar__2_1537 = mercury__dir__f_slash_2_f_0(Var_1538, (MR_String) "lib");
    return LambdaHeadVar__2_1537;
  }
}

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2104__2_2_p_0(
  MR_Word HeadVar__1_1529,
  MR_String HeadVar__2_1678)
{
  {
    MR_bool succeeded;

    succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, HeadVar__1_1529, ((MR_Box) (HeadVar__2_1678)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2104__1_2_p_0(
  MR_String HeadVar__1_1530,
  MR_String HeadVar__2_1680)
{
  {
    MR_bool succeeded = (strcmp(HeadVar__1_1530, HeadVar__2_1680) == 0);

    return succeeded;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2086__1_3_f_0(
  MR_String TargetArch_143,
  MR_String GradeString_158,
  MR_String LambdaHeadVar__1_1517)
{
  {
    MR_String LambdaHeadVar__2_1518;
    MR_String Var_1519;
    MR_String Var_1520;

    Var_1520 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1517, (MR_String) "Mercury");
    Var_1519 = mercury__dir__f_slash_2_f_0(Var_1520, GradeString_158);
    LambdaHeadVar__2_1518 = mercury__dir__f_slash_2_f_0(Var_1519, TargetArch_143);
    return LambdaHeadVar__2_1518;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2050__1_2_f_0(
  MR_String GradeString_158,
  MR_String LambdaHeadVar__1_1498)
{
  {
    MR_String LambdaHeadVar__2_1499;
    MR_String Var_1500;

    Var_1500 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1498, (MR_String) "modules");
    LambdaHeadVar__2_1499 = mercury__dir__f_slash_2_f_0(Var_1500, GradeString_158);
    return LambdaHeadVar__2_1499;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2040__1_2_f_0(
  MR_String GradeString_158,
  MR_String LambdaHeadVar__1_1488)
{
  {
    MR_String LambdaHeadVar__2_1489;
    MR_String Var_1490;

    Var_1490 = mercury__dir__make_path_name_2_f_0((MR_String) "ints", GradeString_158);
    LambdaHeadVar__2_1489 = mercury__dir__make_path_name_2_f_0(LambdaHeadVar__1_1488, Var_1490);
    return LambdaHeadVar__2_1489;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2027__1_2_f_0(
  MR_String GradeString_158,
  MR_String LambdaHeadVar__1_1471)
{
  {
    MR_String LambdaHeadVar__2_1472;
    MR_String Var_1473;
    MR_String Var_1474;

    Var_1474 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1471, (MR_String) "lib");
    Var_1473 = mercury__dir__f_slash_2_f_0(Var_1474, GradeString_158);
    LambdaHeadVar__2_1472 = mercury__dir__f_slash_2_f_0(Var_1473, (MR_String) "inc");
    return LambdaHeadVar__2_1472;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2007__1_2_f_0(
  MR_String GradeString_158,
  MR_String LambdaHeadVar__1_1456)
{
  {
    MR_String LambdaHeadVar__2_1457;
    MR_String Var_1458;

    Var_1458 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1456, (MR_String) "lib");
    LambdaHeadVar__2_1457 = mercury__dir__f_slash_2_f_0(Var_1458, GradeString_158);
    return LambdaHeadVar__2_1457;
  }
}

static void MR_CALL 
libs__handle_options__unsafe_set_already_printed_usage_1_p_0(
  MR_Word X_1)
{
  {
{
#define MR_PROC_LABEL libs__handle_options__unsafe_set_already_printed_usage_1_p_0

	MR_Word X;

	X =  X_1 ;
		{
libs__handle_options__mutable_variable_already_printed_usage = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__handle_options__unsafe_get_already_printed_usage_1_p_0(
  MR_Word * X_1)
{
  {
{
#define MR_PROC_LABEL libs__handle_options__unsafe_get_already_printed_usage_1_p_0

	MR_Word X;

		{
X = libs__handle_options__mutable_variable_already_printed_usage;


		;}
#undef MR_PROC_LABEL
	 *X_1  = X;
}
  }
}

static void MR_CALL 
libs__handle_options__unlock_already_printed_usage_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL libs__handle_options__unlock_already_printed_usage_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__handle_options__lock_already_printed_usage_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL libs__handle_options__lock_already_printed_usage_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__handle_options__initialise_mutable_already_printed_usage_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__handle_options__mutable_variable_already_printed_usage_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
libs__handle_options__mutable_variable_already_printed_usage = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__handle_options__pre_initialise_mutable_already_printed_usage_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL libs__handle_options__pre_initialise_mutable_already_printed_usage_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__handle_options__mutable_variable_already_printed_usage_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
libs__handle_options__long_usage_2_p_0(void)
{
  {
    MR_String Version_4;
    MR_String Fullarch_5;
    MR_Word Var_8;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_14;

    mercury__library__version_2_p_0(&Version_4, &Fullarch_5);
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Fullarch_5));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[246])));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) ((MR_String) ", on "));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_14));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Version_4));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_12));
    }
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) ((MR_String) "Name: mmc -- Melbourne Mercury Compiler, version "));
      MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) (Var_11));
    }
    mercury__io__write_strings_3_p_0(Var_8);
    mercury__io__write_string_3_p_0((MR_String) "Copyright: Copyright (C) 1993-2012 The University of Melbourne\n");
    mercury__io__write_string_3_p_0((MR_String) "           Copyright (C) 2013-2018 The Mercury team\n");
    mercury__io__write_string_3_p_0((MR_String) "Usage: mmc [<options>] <arguments>\n");
    mercury__io__write_string_3_p_0((MR_String) "Arguments:\n");
    mercury__io__write_string_3_p_0((MR_String) "\tArguments ending in \140.m\' are assumed to be source file names.\n");
    mercury__io__write_string_3_p_0((MR_String) "\tArguments that do not end in \140.m\' are assumed to be module names.\n");
    mercury__io__write_string_3_p_0((MR_String) "\tArguments in the form \100file are replaced with the contents of the file.\n");
    mercury__io__write_string_3_p_0((MR_String) "Options:\n");
    libs__options__options_help_2_p_0();
  }
}

void MR_CALL 
libs__handle_options__usage_2_p_0(void)
{
  {
    MR_Word AlreadyPrinted_4;

{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0

	MR_Word X;

		{
X = libs__handle_options__mutable_variable_already_printed_usage;


		;}
#undef MR_PROC_LABEL
	 AlreadyPrinted_4  = X;
}
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    switch (AlreadyPrinted_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__handle_options__display_compiler_version_2_p_0();
          mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[4]));
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0

	MR_Word X;

	X =  (MR_Integer) 1 ;
		{
libs__handle_options__mutable_variable_already_printed_usage = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
  }
}

void MR_CALL 
libs__handle_options__usage_errors_4_p_0(
  MR_Word Globals_5,
  MR_Word Specs_6)
{
  {
    MR_String ProgName_8;
    MR_Integer _NumWarnings_9;
    MR_Integer _NumErrors_10;

    mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_8);
    mercury__io__write_string_3_p_0(ProgName_8);
    mercury__io__write_string_3_p_0((MR_String) ":");
    mercury__io__nl_2_p_0();
    parse_tree__error_util__write_error_specs_8_p_0(Specs_6, Globals_5, (MR_Integer) 0, &_NumWarnings_9, (MR_Integer) 0, &_NumErrors_10);
  }
}

void MR_CALL 
libs__handle_options__display_compiler_version_2_p_0(void)
{
  {
    MR_String Version_4;
    MR_String Fullarch_5;
    MR_Word Var_8;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_14;

    mercury__library__version_2_p_0(&Version_4, &Fullarch_5);
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Fullarch_5));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[2])));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) ((MR_String) ", on "));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_14));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Version_4));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_12));
    }
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) ((MR_String) "Mercury Compiler, version "));
      MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) (Var_11));
    }
    mercury__io__write_strings_3_p_0(Var_8);
  }
}

static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__4_4;

    succeeded = libs__options__special_handler_4_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv4_HeadVar__4_4);
    if (succeeded)
    {
      *wrapper_arg_4 = ((MR_Box) (conv4_HeadVar__4_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
libs__handle_options__separate_option_args_5_p_0_3(
  void * env_ptr_arg)
{
  {
    struct libs__handle_options__separate_option_args_5_p_0_4_env_0_s * env_ptr = (struct libs__handle_options__separate_option_args_5_p_0_4_env_0_s *) env_ptr_arg;

    *((env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__conv3_HeadVar__1_1));
    *((env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__conv2_HeadVar__2_2));
    ((env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__cont)((env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
libs__handle_options__separate_option_args_5_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct libs__handle_options__separate_option_args_5_p_0_4_env_0_s env;

    (env).libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_2 = wrapper_arg_2;
    (env).libs__handle_options__separate_option_args_5_p_0_4_env_0__cont = cont;
    (env).libs__handle_options__separate_option_args_5_p_0_4_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      libs__options__option_defaults_2_p_0(&(env).libs__handle_options__separate_option_args_5_p_0_4_env_0__conv3_HeadVar__1_1, &(env).libs__handle_options__separate_option_args_5_p_0_4_env_0__conv2_HeadVar__2_2, libs__handle_options__separate_option_args_5_p_0_3, &env);
    }
  }
}

static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    succeeded = libs__options__long_option_2_p_0(((MR_String) wrapper_arg_1), &conv1_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    succeeded = libs__options__short_option_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
libs__handle_options__separate_option_args_5_p_0(
  MR_Word Args0_6,
  MR_Word * OptionArgs_7,
  MR_Word * Args_8)
{
  {
    MR_bool succeeded;
    MR_Word Var_10;

    mercury__getopt_io__process_options_7_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_8[1]), Args0_6, OptionArgs_7, Args_8, &Var_10);
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_option_table_result_to_globals_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = libs__op_mode__op_mode_to_option_string_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
libs__handle_options__convert_option_table_result_to_globals_5_p_0(
  MR_Word MaybeOptionTable0_6,
  MR_Word * STATE_VARIABLE_Specs_41,
  MR_Word * Globals_8)
{
  if (((MR_tag((MR_Word) MaybeOptionTable0_6)) == (MR_mktag((MR_Integer) 1))))
  {
    MR_String ErrorMessage_10 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeOptionTable0_6, (MR_Integer) 0)));
    MR_Word OptionTablePieces_11;
    MR_Word OptionTableMsg_12;
    MR_Word OptionTableSpec_13;
    MR_Word Var_68;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_78;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;

    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (ErrorMessage_10));
    }
    {
      OptionTablePieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), OptionTablePieces_11, 0) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(1), OptionTablePieces_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (OptionTablePieces_11));
    }
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      OptionTableMsg_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), OptionTableMsg_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), OptionTableMsg_12, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(1), OptionTableMsg_12, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), OptionTableMsg_12, 3) = ((MR_Box) (Var_73));
    }
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (OptionTableMsg_12));
      MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      OptionTableSpec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OptionTableSpec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), OptionTableSpec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), OptionTableSpec_13, 2) = ((MR_Box) (Var_78));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_41 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (OptionTableSpec_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    libs__handle_options__handle_given_options_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Var_92, &Var_93, &Var_94, Globals_8);
  }
  else
  {
    MR_Word OptionTable0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeOptionTable0_6, (MR_Integer) 0)));
    MR_Word OptionTable_15;
    MR_Word Target_16;
    MR_Word GC_Method_17;
    MR_Word TagsMethod_18;
    MR_Word TermNorm_19;
    MR_Word Term2Norm_20;
    MR_Word TraceLevel_21;
    MR_Word TraceSuppress_22;
    MR_Word SSTraceLevel_23;
    MR_Word MaybeThreadSafe_24;
    MR_Word C_CompilerType_25;
    MR_Word CSharp_CompilerType_26;
    MR_Word ReuseStrategy_27;
    MR_Word MaybeFeedbackInfo_28;
    MR_Word HostEnvType_29;
    MR_Word SystemEnvType_30;
    MR_Word TargetEnvType_31;
    MR_Word LimitErrorContextsMap_32;
    MR_Word OpMode_33;
    MR_Word OtherOpModes_34;
    MR_Word STATE_VARIABLE_Specs_44_44;
    MR_Word STATE_VARIABLE_Specs_64_64;

    libs__handle_options__check_option_values_22_p_0(OptionTable0_14, &OptionTable_15, &Target_16, &GC_Method_17, &TagsMethod_18, &TermNorm_19, &Term2Norm_20, &TraceLevel_21, &TraceSuppress_22, &SSTraceLevel_23, &MaybeThreadSafe_24, &C_CompilerType_25, &CSharp_CompilerType_26, &ReuseStrategy_27, &MaybeFeedbackInfo_28, &HostEnvType_29, &SystemEnvType_30, &TargetEnvType_31, &LimitErrorContextsMap_32, &STATE_VARIABLE_Specs_44_44);
    libs__op_mode__decide_op_mode_3_p_0(OptionTable_15, &OpMode_33, &OtherOpModes_34);
    if ((OtherOpModes_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_Specs_64_64 = STATE_VARIABLE_Specs_44_44;
    else
    {
      MR_Word TypeCtorInfo_87_87;
      MR_Word OpModeStrs_37;
      MR_Word OpModePieces_38;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_55;
      MR_Word Var_56;

      {
        Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[2]));
        MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (libs__handle_options__convert_option_table_result_to_globals_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (OptionTable_15));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (OpMode_33));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (OtherOpModes_34));
      }
      OpModeStrs_37 = mercury__list__map_2_f_0((MR_Word) &libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, Var_46, Var_47);
      TypeCtorInfo_87_87 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      Var_56 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(OpModeStrs_37);
      Var_55 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_87_87, Var_56, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
      OpModePieces_38 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_87_87, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[8]), Var_55);
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), OpModePieces_38, STATE_VARIABLE_Specs_44_44, &STATE_VARIABLE_Specs_64_64);
    }
    if ((STATE_VARIABLE_Specs_64_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      libs__handle_options__convert_options_to_globals_24_p_0(OptionTable_15, OpMode_33, Target_16, GC_Method_17, TagsMethod_18, TermNorm_19, Term2Norm_20, TraceLevel_21, TraceSuppress_22, SSTraceLevel_23, MaybeThreadSafe_24, C_CompilerType_25, CSharp_CompilerType_26, ReuseStrategy_27, MaybeFeedbackInfo_28, HostEnvType_29, SystemEnvType_30, TargetEnvType_31, LimitErrorContextsMap_32, STATE_VARIABLE_Specs_64_64, STATE_VARIABLE_Specs_41, Globals_8);
    else
    {
      libs__handle_options__generate_default_globals_3_p_0(Globals_8);
      *STATE_VARIABLE_Specs_41 = STATE_VARIABLE_Specs_64_64;
    }
  }
}

static MR_bool MR_CALL 
libs__handle_options__handle_given_options_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__4_4;

    succeeded = libs__options__special_handler_4_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv4_HeadVar__4_4);
    if (succeeded)
    {
      *wrapper_arg_4 = ((MR_Box) (conv4_HeadVar__4_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
libs__handle_options__handle_given_options_7_p_0_3(
  void * env_ptr_arg)
{
  {
    struct libs__handle_options__handle_given_options_7_p_0_4_env_0_s * env_ptr = (struct libs__handle_options__handle_given_options_7_p_0_4_env_0_s *) env_ptr_arg;

    *((env_ptr)->libs__handle_options__handle_given_options_7_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->libs__handle_options__handle_given_options_7_p_0_4_env_0__conv3_HeadVar__1_1));
    *((env_ptr)->libs__handle_options__handle_given_options_7_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->libs__handle_options__handle_given_options_7_p_0_4_env_0__conv2_HeadVar__2_2));
    ((env_ptr)->libs__handle_options__handle_given_options_7_p_0_4_env_0__cont)((env_ptr)->libs__handle_options__handle_given_options_7_p_0_4_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
libs__handle_options__handle_given_options_7_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct libs__handle_options__handle_given_options_7_p_0_4_env_0_s env;

    (env).libs__handle_options__handle_given_options_7_p_0_4_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).libs__handle_options__handle_given_options_7_p_0_4_env_0__wrapper_arg_2 = wrapper_arg_2;
    (env).libs__handle_options__handle_given_options_7_p_0_4_env_0__cont = cont;
    (env).libs__handle_options__handle_given_options_7_p_0_4_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      libs__options__option_defaults_2_p_0(&(env).libs__handle_options__handle_given_options_7_p_0_4_env_0__conv3_HeadVar__1_1, &(env).libs__handle_options__handle_given_options_7_p_0_4_env_0__conv2_HeadVar__2_2, libs__handle_options__handle_given_options_7_p_0_3, &env);
    }
  }
}

static MR_bool MR_CALL 
libs__handle_options__handle_given_options_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    succeeded = libs__options__long_option_2_p_0(((MR_String) wrapper_arg_1), &conv1_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
libs__handle_options__handle_given_options_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    succeeded = libs__options__short_option_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
libs__handle_options__handle_given_options_7_p_0(
  MR_Word Args0_8,
  MR_Word * OptionArgs_9,
  MR_Word * Args_10,
  MR_Word * Specs_11,
  MR_Word * STATE_VARIABLE_Globals_20)
{
  {
    MR_bool succeeded;
    MR_Word Result_15;
    MR_Word STATE_VARIABLE_Globals_38_38;

    mercury__getopt_io__process_options_7_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_8[0]), Args0_8, OptionArgs_9, Args_10, &Result_15);
    libs__handle_options__convert_option_table_result_to_globals_5_p_0(Result_15, Specs_11, &STATE_VARIABLE_Globals_38_38);
    if ((*Specs_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word OpMode_18;
      MR_Word Smart_19;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;

      libs__globals__get_op_mode_2_p_0(STATE_VARIABLE_Globals_38_38, &OpMode_18);
      libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_38_38, (MR_Integer) 128, &Smart_19);
      succeeded = (Smart_19 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) OpMode_18)) == (MR_mktag((MR_Integer) 3)));
        if (succeeded)
        {
          Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), OpMode_18, (MR_Integer) 0)));
          succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 0)));
            succeeded = ((MR_tag((MR_Word) Var_42)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 0)));
              succeeded = (Var_43 == (MR_Integer) 2);
            }
          }
        }
      }
      if (succeeded)
      {
        libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "linking", STATE_VARIABLE_Globals_38_38, STATE_VARIABLE_Globals_20);
      }
      else
        *STATE_VARIABLE_Globals_20 = STATE_VARIABLE_Globals_38_38;
    }
    else
      *STATE_VARIABLE_Globals_20 = STATE_VARIABLE_Globals_38_38;
  }
}

void MR_CALL 
libs__handle_options__generate_default_globals_3_p_0(
  MR_Word * DefaultGlobals_4)
{
  {
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Word Var_8;

    libs__handle_options__handle_given_options_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Var_6, &Var_7, &Var_8, DefaultGlobals_4);
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv10_LambdaHeadVar__2_1572;

    conv10_LambdaHeadVar__2_1572 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2150__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv10_LambdaHeadVar__2_1572));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv9_LambdaHeadVar__2_1566;

    conv9_LambdaHeadVar__2_1566 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2148__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv9_LambdaHeadVar__2_1566));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv8_LambdaHeadVar__2_1561;

    conv8_LambdaHeadVar__2_1561 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2157__1_1_f_0(((MR_String) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv8_LambdaHeadVar__2_1561));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv7_LambdaHeadVar__2_1556;

    conv7_LambdaHeadVar__2_1556 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2156__1_1_f_0(((MR_String) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv7_LambdaHeadVar__2_1556));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv6_LambdaHeadVar__2_1543;

    conv6_LambdaHeadVar__2_1543 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2126__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_1543));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv5_LambdaHeadVar__2_1537;

    conv5_LambdaHeadVar__2_1537 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2122__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv5_LambdaHeadVar__2_1537));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2104__2_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
    return succeeded;
  }
}

static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2104__1_2_p_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
    return succeeded;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv4_LambdaHeadVar__2_1518;

    conv4_LambdaHeadVar__2_1518 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2086__1_3_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_String) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_1518));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv3_LambdaHeadVar__2_1499;

    conv3_LambdaHeadVar__2_1499 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2050__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_1499));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv2_LambdaHeadVar__2_1489;

    conv2_LambdaHeadVar__2_1489 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2040__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_1489));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv1_LambdaHeadVar__2_1472;

    conv1_LambdaHeadVar__2_1472 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2027__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_1472));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_LambdaHeadVar__2_1457;

    conv0_LambdaHeadVar__2_1457 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2007__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_1457));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0(
  MR_Word OptionTable0_25,
  MR_Word OpMode_26,
  MR_Word Target_27,
  MR_Word GC_Method_28,
  MR_Word TagsMethod0_29,
  MR_Word TermNorm_30,
  MR_Word Term2Norm_31,
  MR_Word TraceLevel_32,
  MR_Word TraceSuppress_33,
  MR_Word SSTraceLevel_34,
  MR_Word MaybeThreadSafe_35,
  MR_Word C_CompilerType_36,
  MR_Word CSharp_CompilerType_37,
  MR_Word ReuseStrategy_38,
  MR_Word MaybeFeedbackInfo_39,
  MR_Word HostEnvType_40,
  MR_Word SystemEnvType_41,
  MR_Word TargetEnvType_42,
  MR_Word LimitErrorContextsMap_43,
  MR_Word STATE_VARIABLE_Specs_0_213,
  MR_Word * STATE_VARIABLE_Specs_214,
  MR_Word * STATE_VARIABLE_Globals_215)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_1674_1674 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
    MR_String InstallCmd_47;
    MR_Word FileInstallCmd_48;
    MR_String EventSetFileName0_50;
    MR_Word GCIsConservative_53;
    MR_Word PregeneratedDist_54;
    MR_Integer NumPtagBits0_55;
    MR_Integer NumPtagBits1_56;
    MR_Integer NumPtagBits_57;
    MR_Word TagsMethod_59;
    MR_Word GradeSupportsParConj_60;
    MR_Word Parallel_61;
    MR_Word Threadscope_62;
    MR_Word ImplicitParallelism_64;
    MR_Word LibLinkages0_68;
    MR_Word InvokedByMMCMake_71;
    MR_Word TransOpt_72;
    MR_Word InterModOpt_74;
    MR_Word InterModAnalysis_75;
    MR_Word MaybeStandaloneInt_77;
    MR_Word ExtraInitFunctions_78;
    MR_Word Smart_82;
    MR_Word VeryVerbose_83;
    MR_Word Statistics_84;
    MR_Integer DebugLiveness_85;
    MR_Integer DebugModesPredId_89;
    MR_Word DebugUnneededCodePredNames_90;
    MR_Word DebugOptPredIdStrs_93;
    MR_Word DebugOptPredNames_94;
    MR_Word DebugIntermoduleAnalysis_99;
    MR_Word DumpHLDSPredIds_100;
    MR_Word UseTrail_106;
    MR_Word HighLevelCode_107;
    MR_Word UseMinimalModelStackCopy_108;
    MR_Word UseMinimalModelOwnStacks_109;
    MR_Word UseMinimalModel_110;
    MR_Word ProfOptimized_118;
    MR_String ExpComp_119;
    MR_Word TraceOptimized_120;
    MR_Word TraceLevelIsNone_121;
    MR_Word ProfileDeep_123;
    MR_Word RecordTermSizesAsWords_126;
    MR_Word RecordTermSizesAsCells_127;
    MR_Word PutNondetEnvOnHeap_131;
    MR_Word DisablePneg_133;
    MR_Word DisableCut_134;
    MR_Word DumpHLDSStages_135;
    MR_Word DumpTraceStages_136;
    MR_Word ParallelLiveness_137;
    MR_Word ParallelCodeGen_138;
    MR_String TargetArch_143;
    MR_String MercuryLinkage_144;
    MR_Word DefaultRuntimeLibraryDirs_145;
    MR_Word MaybeStdLibDir_146;
    MR_Word MaybeConfDir_152;
    MR_Word ConfigFile_155;
    MR_Word MercuryLibDirs_157;
    MR_String GradeString_158;
    MR_Word UseSearchDirs_172;
    MR_Word UseGradeSubdirs_175;
    MR_Word SearchLibFilesDirs_176;
    MR_Word IntermodDirs2_177;
    MR_Word ToGradeSubdir_178;
    MR_Word LinkLibDirs_187;
    MR_Word InitDirs_190;
    MR_Word UseSubdirs_191;
    MR_Word WarnNonTailRecSelf_201;
    MR_Word WarnNonTailRecMutual_202;
    MR_Word BackendForeignLanguages_208;
    MR_Word CurrentBackendForeignLanguage_209;
    MR_Integer CompareSpec_212;
    MR_Word STATE_VARIABLE_Globals_220_220;
    MR_Word STATE_VARIABLE_Specs_221_221;
    MR_Word STATE_VARIABLE_Globals_227_227;
    MR_Word STATE_VARIABLE_Globals_234_234;
    MR_Word STATE_VARIABLE_Globals_259_259;
    MR_Word STATE_VARIABLE_Specs_290_290;
    MR_Word Var_292;
    MR_Word STATE_VARIABLE_Globals_293_293;
    MR_Word STATE_VARIABLE_Globals_294_294;
    MR_Word STATE_VARIABLE_Specs_312_312;
    MR_Word STATE_VARIABLE_Globals_335_335;
    MR_Word STATE_VARIABLE_Specs_356_356;
    MR_Word Var_359;
    MR_Word STATE_VARIABLE_Globals_360_360;
    MR_Word STATE_VARIABLE_Globals_364_364;
    MR_Word STATE_VARIABLE_Globals_497_497;
    MR_Word STATE_VARIABLE_Globals_502_502;
    MR_Word Var_506;
    MR_Word STATE_VARIABLE_Globals_507_507;
    MR_Word STATE_VARIABLE_Globals_512_512;
    MR_Word Var_516;
    MR_Word STATE_VARIABLE_Globals_517_517;
    MR_Word STATE_VARIABLE_Globals_522_522;
    MR_Word STATE_VARIABLE_Globals_527_527;
    MR_Word STATE_VARIABLE_Globals_532_532;
    MR_Word STATE_VARIABLE_Globals_537_537;
    MR_Word STATE_VARIABLE_Globals_546_546;
    MR_Word STATE_VARIABLE_Globals_551_551;
    MR_Word STATE_VARIABLE_Globals_555_555;
    MR_Word STATE_VARIABLE_Specs_576_576;
    MR_Word STATE_VARIABLE_Specs_597_597;
    MR_Word STATE_VARIABLE_Globals_600_600;
    MR_Word STATE_VARIABLE_Specs_622_622;
    MR_Word STATE_VARIABLE_Globals_626_626;
    MR_Word STATE_VARIABLE_Globals_631_631;
    MR_Word STATE_VARIABLE_Globals_636_636;
    MR_Word STATE_VARIABLE_Globals_641_641;
    MR_Word STATE_VARIABLE_Globals_646_646;
    MR_Word STATE_VARIABLE_Globals_651_651;
    MR_Word STATE_VARIABLE_Globals_656_656;
    MR_Word STATE_VARIABLE_Globals_662_662;
    MR_Word STATE_VARIABLE_Globals_667_667;
    MR_Word STATE_VARIABLE_Globals_672_672;
    MR_Word STATE_VARIABLE_Globals_677_677;
    MR_Word STATE_VARIABLE_Globals_682_682;
    MR_Word STATE_VARIABLE_Globals_686_686;
    MR_Word STATE_VARIABLE_Globals_691_691;
    MR_Word STATE_VARIABLE_Globals_696_696;
    MR_Word STATE_VARIABLE_Globals_702_702;
    MR_Word STATE_VARIABLE_Globals_713_713;
    MR_Word STATE_VARIABLE_Globals_718_718;
    MR_Word STATE_VARIABLE_Globals_724_724;
    MR_Word STATE_VARIABLE_Globals_741_741;
    MR_Word STATE_VARIABLE_Globals_746_746;
    MR_Word STATE_VARIABLE_Globals_751_751;
    MR_Word STATE_VARIABLE_Globals_756_756;
    MR_Word STATE_VARIABLE_Globals_762_762;
    MR_Word STATE_VARIABLE_Globals_767_767;
    MR_Word STATE_VARIABLE_Globals_772_772;
    MR_Word STATE_VARIABLE_Globals_777_777;
    MR_Word STATE_VARIABLE_Globals_785_785;
    MR_Word STATE_VARIABLE_Globals_789_789;
    MR_Word STATE_VARIABLE_Globals_795_795;
    MR_Word STATE_VARIABLE_Globals_800_800;
    MR_Word STATE_VARIABLE_Globals_806_806;
    MR_Word STATE_VARIABLE_Globals_818_818;
    MR_Word STATE_VARIABLE_Globals_822_822;
    MR_Word STATE_VARIABLE_Globals_827_827;
    MR_Word STATE_VARIABLE_Globals_832_832;
    MR_Word STATE_VARIABLE_Globals_837_837;
    MR_Word STATE_VARIABLE_Specs_852_852;
    MR_Word Var_875;
    MR_Word STATE_VARIABLE_Globals_876_876;
    MR_Word STATE_VARIABLE_Specs_921_921;
    MR_Word STATE_VARIABLE_Globals_924_924;
    MR_Word STATE_VARIABLE_Globals_928_928;
    MR_Word STATE_VARIABLE_Globals_933_933;
    MR_Word STATE_VARIABLE_Globals_938_938;
    MR_Word STATE_VARIABLE_Globals_942_942;
    MR_Word STATE_VARIABLE_Globals_946_946;
    MR_Word STATE_VARIABLE_Globals_951_951;
    MR_Word STATE_VARIABLE_Globals_956_956;
    MR_Word STATE_VARIABLE_Globals_961_961;
    MR_Word STATE_VARIABLE_Globals_966_966;
    MR_Word STATE_VARIABLE_Globals_972_972;
    MR_Word STATE_VARIABLE_Globals_977_977;
    MR_Word STATE_VARIABLE_Globals_982_982;
    MR_Word STATE_VARIABLE_Globals_987_987;
    MR_Word STATE_VARIABLE_Globals_992_992;
    MR_Word STATE_VARIABLE_Globals_997_997;
    MR_Word STATE_VARIABLE_Globals_1002_1002;
    MR_Word STATE_VARIABLE_Globals_1007_1007;
    MR_Word STATE_VARIABLE_Globals_1012_1012;
    MR_Word STATE_VARIABLE_Globals_1017_1017;
    MR_Word STATE_VARIABLE_Globals_1022_1022;
    MR_Word STATE_VARIABLE_Globals_1027_1027;
    MR_Word STATE_VARIABLE_Globals_1032_1032;
    MR_Word STATE_VARIABLE_Globals_1129_1129;
    MR_Word STATE_VARIABLE_Globals_1134_1134;
    MR_Word STATE_VARIABLE_Specs_1146_1146;
    MR_Word STATE_VARIABLE_Globals_1158_1158;
    MR_Word STATE_VARIABLE_Specs_1168_1168;
    MR_Word STATE_VARIABLE_Globals_1175_1175;
    MR_Word STATE_VARIABLE_Specs_1194_1194;
    MR_Word STATE_VARIABLE_Globals_1198_1198;
    MR_Word STATE_VARIABLE_Globals_1203_1203;
    MR_Word STATE_VARIABLE_Globals_1208_1208;
    MR_Word STATE_VARIABLE_Globals_1213_1213;
    MR_Word STATE_VARIABLE_Globals_1218_1218;
    MR_Word STATE_VARIABLE_Globals_1223_1223;
    MR_Word STATE_VARIABLE_Globals_1228_1228;
    MR_Word STATE_VARIABLE_Globals_1233_1233;
    MR_Word STATE_VARIABLE_Globals_1277_1277;
    MR_Word STATE_VARIABLE_Specs_1295_1295;
    MR_Word STATE_VARIABLE_Globals_1299_1299;
    MR_Word STATE_VARIABLE_Globals_1304_1304;
    MR_Word STATE_VARIABLE_Globals_1309_1309;
    MR_Word STATE_VARIABLE_Globals_1314_1314;
    MR_Word STATE_VARIABLE_Globals_1319_1319;
    MR_Word STATE_VARIABLE_Globals_1324_1324;
    MR_Word STATE_VARIABLE_Globals_1329_1329;
    MR_Word STATE_VARIABLE_Globals_1334_1334;
    MR_Word STATE_VARIABLE_Globals_1339_1339;
    MR_Word STATE_VARIABLE_Globals_1344_1344;
    MR_Word STATE_VARIABLE_Globals_1350_1350;
    MR_Word STATE_VARIABLE_Globals_1354_1354;
    MR_Word STATE_VARIABLE_Globals_1362_1362;
    MR_Word STATE_VARIABLE_Globals_1367_1367;
    MR_Word STATE_VARIABLE_Globals_1372_1372;
    MR_Word STATE_VARIABLE_Globals_1377_1377;
    MR_Word STATE_VARIABLE_Globals_1382_1382;
    MR_Word STATE_VARIABLE_Globals_1387_1387;
    MR_Word STATE_VARIABLE_Globals_1392_1392;
    MR_Word STATE_VARIABLE_Globals_1398_1398;
    MR_Word STATE_VARIABLE_Globals_1403_1403;
    MR_Word STATE_VARIABLE_Globals_1407_1407;
    MR_Word STATE_VARIABLE_Globals_1413_1413;
    MR_Word STATE_VARIABLE_Globals_1428_1428;
    MR_Word STATE_VARIABLE_Globals_1436_1436;
    MR_Word STATE_VARIABLE_Globals_1448_1448;
    MR_Word STATE_VARIABLE_Globals_1505_1505;
    MR_Word STATE_VARIABLE_Globals_1512_1512;
    MR_Word STATE_VARIABLE_Globals_1533_1533;
    MR_Word Var_1549;
    MR_Word STATE_VARIABLE_Globals_1550_1550;
    MR_Word Var_1552;
    MR_Word STATE_VARIABLE_Globals_1553_1553;
    MR_Word STATE_VARIABLE_Globals_1589_1589;
    MR_Word STATE_VARIABLE_Globals_1593_1593;
    MR_Word STATE_VARIABLE_Specs_1617_1617;
    MR_Word STATE_VARIABLE_Globals_1628_1628;
    MR_Word STATE_VARIABLE_Globals_1639_1639;
    MR_Word STATE_VARIABLE_Globals_1648_1648;
    MR_Word STATE_VARIABLE_Globals_1653_1653;
    MR_Word STATE_VARIABLE_Globals_1659_1659;
    MR_String Var_79;
    MR_Word Var_658;
    MR_Word Var_659;
    MR_Word Var_698;
    MR_Word Var_699;
    MR_Word Var_81;
    MR_Word Var_1686;
    MR_Word Var_715;
    MR_Word Var_720;
    MR_Word Var_721;
    MR_String AllDumpOptions_86;
    MR_String Var_781;
    MR_Word Var_1394;
    MR_Word Var_1395;
    MR_String Var_1441;
    MR_Word ToMihsSubdir_192;
    MR_Word ToHrlsSubdir_193;
    MR_Integer Var_1650;

    mercury__getopt_io__lookup_string_option_3_p_0(TypeCtorInfo_1674_1674, OptionTable0_25, ((MR_Box) ((MR_Integer) 640)), &InstallCmd_47);
    succeeded = (strcmp(InstallCmd_47, (MR_String) "") == 0);
    if (succeeded)
      FileInstallCmd_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_String InstallCmdDirOption_49;

      mercury__getopt_io__lookup_string_option_3_p_0(TypeCtorInfo_1674_1674, OptionTable0_25, ((MR_Box) ((MR_Integer) 641)), &InstallCmdDirOption_49);
      {
        FileInstallCmd_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FileInstallCmd_48, 0) = ((MR_Box) (InstallCmd_47));
        MR_hl_field(MR_mktag(1), FileInstallCmd_48, 1) = ((MR_Box) (InstallCmdDirOption_49));
      }
    }
    libs__globals__globals_init_21_p_0(OptionTable0_25, OpMode_26, Target_27, GC_Method_28, TagsMethod0_29, TermNorm_30, Term2Norm_31, TraceLevel_32, TraceSuppress_33, SSTraceLevel_34, MaybeThreadSafe_35, C_CompilerType_36, CSharp_CompilerType_37, ReuseStrategy_38, MaybeFeedbackInfo_39, HostEnvType_40, SystemEnvType_41, TargetEnvType_42, FileInstallCmd_48, LimitErrorContextsMap_43, &STATE_VARIABLE_Globals_220_220);
    libs__compute_grade__check_grade_component_compatibility_5_p_0(STATE_VARIABLE_Globals_220_220, Target_27, GC_Method_28, STATE_VARIABLE_Specs_0_213, &STATE_VARIABLE_Specs_221_221);
    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_220_220, (MR_Integer) 191, &EventSetFileName0_50);
    succeeded = (strcmp(EventSetFileName0_50, (MR_String) "") == 0);
    if (succeeded)
    {
      MR_Word MaybeEventSetFileName_51;

      mercury__io__get_environment_var_4_p_0((MR_String) "MERCURY_EVENT_SET_FILE_NAME", &MaybeEventSetFileName_51);
      if ((MaybeEventSetFileName_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        STATE_VARIABLE_Globals_227_227 = STATE_VARIABLE_Globals_220_220;
      else
      {
        MR_String EventSetFileName_52 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeEventSetFileName_51, (MR_Integer) 0)));
        MR_Word Var_226;

        {
          Var_226 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_226, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_226, 1) = ((MR_Box) (EventSetFileName_52));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 191, Var_226, STATE_VARIABLE_Globals_220_220, &STATE_VARIABLE_Globals_227_227);
      }
    }
    else
      STATE_VARIABLE_Globals_227_227 = STATE_VARIABLE_Globals_220_220;
    GCIsConservative_53 = libs__globals__gc_is_conservative_1_f_0(GC_Method_28);
    switch (GCIsConservative_53) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_234_234 = STATE_VARIABLE_Globals_227_227;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_229 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
          MR_Word STATE_VARIABLE_Globals_230_230;

          libs__globals__set_option_4_p_0((MR_Integer) 312, Var_229, STATE_VARIABLE_Globals_227_227, &STATE_VARIABLE_Globals_230_230);
          libs__globals__set_option_4_p_0((MR_Integer) 313, Var_229, STATE_VARIABLE_Globals_230_230, &STATE_VARIABLE_Globals_234_234);
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_234_234, (MR_Integer) 238, &PregeneratedDist_54);
    switch (PregeneratedDist_54) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_259_259 = STATE_VARIABLE_Globals_234_234;
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_Globals_239_239;
          MR_Word STATE_VARIABLE_Globals_243_243;
          MR_Word Var_246;
          MR_Word STATE_VARIABLE_Globals_247_247;
          MR_Word STATE_VARIABLE_Globals_251_251;
          MR_Word STATE_VARIABLE_Globals_255_255;

          libs__globals__set_option_4_p_0((MR_Integer) 252, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[3]), STATE_VARIABLE_Globals_234_234, &STATE_VARIABLE_Globals_239_239);
          libs__globals__set_option_4_p_0((MR_Integer) 259, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[4]), STATE_VARIABLE_Globals_239_239, &STATE_VARIABLE_Globals_243_243);
          Var_246 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
          libs__globals__set_option_4_p_0((MR_Integer) 256, Var_246, STATE_VARIABLE_Globals_243_243, &STATE_VARIABLE_Globals_247_247);
          libs__globals__set_option_4_p_0((MR_Integer) 257, Var_246, STATE_VARIABLE_Globals_247_247, &STATE_VARIABLE_Globals_251_251);
          libs__globals__set_option_4_p_0((MR_Integer) 239, Var_246, STATE_VARIABLE_Globals_251_251, &STATE_VARIABLE_Globals_255_255);
          libs__globals__set_option_4_p_0((MR_Integer) 260, Var_246, STATE_VARIABLE_Globals_255_255, &STATE_VARIABLE_Globals_259_259);
        }
        break;
    }
    switch (TagsMethod0_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_259_259, (MR_Integer) 252, &NumPtagBits0_55);
        }
        break;
      case (MR_Integer) 0:
        NumPtagBits0_55 = (MR_Integer) 0;
        break;
    }
    succeeded = (TagsMethod0_29 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (NumPtagBits0_55 == (MR_Integer) -1);
    if (succeeded)
    {
      libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_259_259, (MR_Integer) 255, &NumPtagBits1_56);
    }
    else
      NumPtagBits1_56 = NumPtagBits0_55;
    succeeded = (NumPtagBits1_56 < (MR_Integer) 0);
    if (succeeded)
    {
      NumPtagBits_57 = (MR_Integer) 0;
      libs__compiler_util__add_warning_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[152]), STATE_VARIABLE_Specs_221_221, &STATE_VARIABLE_Specs_290_290);
    }
    else
    {
      NumPtagBits_57 = NumPtagBits1_56;
      STATE_VARIABLE_Specs_290_290 = STATE_VARIABLE_Specs_221_221;
    }
    {
      Var_292 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_292, 0) = ((MR_Box) (NumPtagBits_57));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 252, Var_292, STATE_VARIABLE_Globals_259_259, &STATE_VARIABLE_Globals_293_293);
    succeeded = (NumPtagBits_57 == (MR_Integer) 0);
    if (succeeded)
    {
      TagsMethod_59 = (MR_Integer) 0;
      libs__globals__set_tags_method_3_p_0(TagsMethod_59, STATE_VARIABLE_Globals_293_293, &STATE_VARIABLE_Globals_294_294);
    }
    else
    {
      TagsMethod_59 = TagsMethod0_29;
      STATE_VARIABLE_Globals_294_294 = STATE_VARIABLE_Globals_293_293;
    }
    libs__globals__current_grade_supports_par_conj_2_p_0(STATE_VARIABLE_Globals_294_294, &GradeSupportsParConj_60);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_294_294, (MR_Integer) 231, &Parallel_61);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_294_294, (MR_Integer) 232, &Threadscope_62);
    succeeded = (GradeSupportsParConj_60 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (Threadscope_62 == (MR_Integer) 1);
    if (succeeded)
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[160]), STATE_VARIABLE_Specs_290_290, &STATE_VARIABLE_Specs_312_312);
    }
    else
      STATE_VARIABLE_Specs_312_312 = STATE_VARIABLE_Specs_290_290;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_294_294, (MR_Integer) 679, &ImplicitParallelism_64);
    switch (ImplicitParallelism_64) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_Specs_356_356 = STATE_VARIABLE_Specs_312_312;
          STATE_VARIABLE_Globals_335_335 = STATE_VARIABLE_Globals_294_294;
        }
        break;
      case (MR_Integer) 1:
        switch (GradeSupportsParConj_60) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              switch (Parallel_61) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_Specs_356_356 = STATE_VARIABLE_Specs_312_312;
                  break;
                case (MR_Integer) 1:
                  {
                    libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[169]), STATE_VARIABLE_Specs_312_312, &STATE_VARIABLE_Specs_356_356);
                  }
                  break;
              }
              libs__globals__set_option_4_p_0((MR_Integer) 679, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]), STATE_VARIABLE_Globals_294_294, &STATE_VARIABLE_Globals_335_335);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String FeedbackFile_65;

              libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_294_294, (MR_Integer) 680, &FeedbackFile_65);
              succeeded = (strcmp(FeedbackFile_65, (MR_String) "") == 0);
              if (succeeded)
              {
                libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[175]), STATE_VARIABLE_Specs_312_312, &STATE_VARIABLE_Specs_356_356);
              }
              else
                STATE_VARIABLE_Specs_356_356 = STATE_VARIABLE_Specs_312_312;
              STATE_VARIABLE_Globals_335_335 = STATE_VARIABLE_Globals_294_294;
            }
            break;
        }
        break;
    }
    Var_359 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 679, (MR_Integer) 213, Var_359, STATE_VARIABLE_Globals_335_335, &STATE_VARIABLE_Globals_360_360);
    switch (GradeSupportsParConj_60) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__globals__set_option_4_p_0((MR_Integer) 681, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]), STATE_VARIABLE_Globals_360_360, &STATE_VARIABLE_Globals_364_364);
        }
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_364_364 = STATE_VARIABLE_Globals_360_360;
        break;
    }
    switch (Target_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__handle_options__option_implies_5_p_0((MR_Integer) 266, (MR_Integer) 270, Var_359, STATE_VARIABLE_Globals_364_364, &STATE_VARIABLE_Globals_497_497);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word STATE_VARIABLE_Globals_438_438;
          MR_Word STATE_VARIABLE_Globals_441_441;
          MR_Word Var_444;
          MR_Word STATE_VARIABLE_Globals_445_445;
          MR_Word STATE_VARIABLE_Globals_449_449;
          MR_Word STATE_VARIABLE_Globals_453_453;
          MR_Word STATE_VARIABLE_Globals_457_457;
          MR_Word STATE_VARIABLE_Globals_461_461;
          MR_Word STATE_VARIABLE_Globals_465_465;
          MR_Word STATE_VARIABLE_Globals_469_469;
          MR_Word STATE_VARIABLE_Globals_473_473;
          MR_Word STATE_VARIABLE_Globals_477_477;
          MR_Word STATE_VARIABLE_Globals_481_481;
          MR_Word STATE_VARIABLE_Globals_485_485;
          MR_Word STATE_VARIABLE_Globals_489_489;
          MR_Word STATE_VARIABLE_Globals_493_493;

          libs__globals__set_gc_method_3_p_0((MR_Integer) 0, STATE_VARIABLE_Globals_364_364, &STATE_VARIABLE_Globals_438_438);
          libs__globals__set_option_4_p_0((MR_Integer) 230, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[226]), STATE_VARIABLE_Globals_438_438, &STATE_VARIABLE_Globals_441_441);
          Var_444 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
          libs__globals__set_option_4_p_0((MR_Integer) 313, Var_444, STATE_VARIABLE_Globals_441_441, &STATE_VARIABLE_Globals_445_445);
          libs__globals__set_option_4_p_0((MR_Integer) 312, Var_444, STATE_VARIABLE_Globals_445_445, &STATE_VARIABLE_Globals_449_449);
          libs__globals__set_option_4_p_0((MR_Integer) 266, Var_359, STATE_VARIABLE_Globals_449_449, &STATE_VARIABLE_Globals_453_453);
          libs__globals__set_option_4_p_0((MR_Integer) 267, Var_359, STATE_VARIABLE_Globals_453_453, &STATE_VARIABLE_Globals_457_457);
          libs__globals__set_option_4_p_0((MR_Integer) 256, Var_359, STATE_VARIABLE_Globals_457_457, &STATE_VARIABLE_Globals_461_461);
          libs__globals__set_option_4_p_0((MR_Integer) 257, Var_359, STATE_VARIABLE_Globals_461_461, &STATE_VARIABLE_Globals_465_465);
          libs__globals__set_option_4_p_0((MR_Integer) 269, Var_359, STATE_VARIABLE_Globals_465_465, &STATE_VARIABLE_Globals_469_469);
          libs__globals__set_option_4_p_0((MR_Integer) 268, Var_359, STATE_VARIABLE_Globals_469_469, &STATE_VARIABLE_Globals_473_473);
          libs__globals__set_option_4_p_0((MR_Integer) 252, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[5]), STATE_VARIABLE_Globals_473_473, &STATE_VARIABLE_Globals_477_477);
          libs__globals__set_option_4_p_0((MR_Integer) 258, Var_444, STATE_VARIABLE_Globals_477_477, &STATE_VARIABLE_Globals_481_481);
          libs__globals__set_option_4_p_0((MR_Integer) 271, Var_359, STATE_VARIABLE_Globals_481_481, &STATE_VARIABLE_Globals_485_485);
          libs__globals__set_option_4_p_0((MR_Integer) 280, Var_359, STATE_VARIABLE_Globals_485_485, &STATE_VARIABLE_Globals_489_489);
          libs__globals__set_option_4_p_0((MR_Integer) 656, Var_444, STATE_VARIABLE_Globals_489_489, &STATE_VARIABLE_Globals_493_493);
          switch (Target_27) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                libs__globals__set_option_4_p_0((MR_Integer) 580, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[227]), STATE_VARIABLE_Globals_493_493, &STATE_VARIABLE_Globals_497_497);
              }
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_Globals_497_497 = STATE_VARIABLE_Globals_493_493;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word STATE_VARIABLE_Globals_372_372;
          MR_Word STATE_VARIABLE_Globals_375_375;
          MR_Word STATE_VARIABLE_Globals_379_379;
          MR_Word STATE_VARIABLE_Globals_383_383;
          MR_Word Var_386;
          MR_Word STATE_VARIABLE_Globals_387_387;
          MR_Word STATE_VARIABLE_Globals_391_391;
          MR_Word STATE_VARIABLE_Globals_395_395;
          MR_Word STATE_VARIABLE_Globals_399_399;
          MR_Word STATE_VARIABLE_Globals_403_403;
          MR_Word STATE_VARIABLE_Globals_407_407;
          MR_Word STATE_VARIABLE_Globals_411_411;
          MR_Word STATE_VARIABLE_Globals_415_415;
          MR_Word STATE_VARIABLE_Globals_419_419;
          MR_Word STATE_VARIABLE_Globals_423_423;
          MR_Word STATE_VARIABLE_Globals_427_427;
          MR_Word STATE_VARIABLE_Globals_431_431;

          libs__globals__set_gc_method_3_p_0((MR_Integer) 0, STATE_VARIABLE_Globals_364_364, &STATE_VARIABLE_Globals_372_372);
          libs__globals__set_option_4_p_0((MR_Integer) 230, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[226]), STATE_VARIABLE_Globals_372_372, &STATE_VARIABLE_Globals_375_375);
          libs__globals__set_option_4_p_0((MR_Integer) 256, Var_359, STATE_VARIABLE_Globals_375_375, &STATE_VARIABLE_Globals_379_379);
          libs__globals__set_option_4_p_0((MR_Integer) 257, Var_359, STATE_VARIABLE_Globals_379_379, &STATE_VARIABLE_Globals_383_383);
          Var_386 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
          libs__globals__set_option_4_p_0((MR_Integer) 313, Var_386, STATE_VARIABLE_Globals_383_383, &STATE_VARIABLE_Globals_387_387);
          libs__globals__set_option_4_p_0((MR_Integer) 312, Var_386, STATE_VARIABLE_Globals_387_387, &STATE_VARIABLE_Globals_391_391);
          libs__globals__set_option_4_p_0((MR_Integer) 283, Var_359, STATE_VARIABLE_Globals_391_391, &STATE_VARIABLE_Globals_395_395);
          libs__globals__set_option_4_p_0((MR_Integer) 279, Var_386, STATE_VARIABLE_Globals_395_395, &STATE_VARIABLE_Globals_399_399);
          libs__globals__set_option_4_p_0((MR_Integer) 281, Var_359, STATE_VARIABLE_Globals_399_399, &STATE_VARIABLE_Globals_403_403);
          libs__globals__set_option_4_p_0((MR_Integer) 282, Var_359, STATE_VARIABLE_Globals_403_403, &STATE_VARIABLE_Globals_407_407);
          libs__globals__set_option_4_p_0((MR_Integer) 656, Var_386, STATE_VARIABLE_Globals_407_407, &STATE_VARIABLE_Globals_411_411);
          libs__globals__set_option_4_p_0((MR_Integer) 466, Var_386, STATE_VARIABLE_Globals_411_411, &STATE_VARIABLE_Globals_415_415);
          libs__globals__set_option_4_p_0((MR_Integer) 262, Var_386, STATE_VARIABLE_Globals_415_415, &STATE_VARIABLE_Globals_419_419);
          libs__globals__set_option_4_p_0((MR_Integer) 263, Var_386, STATE_VARIABLE_Globals_419_419, &STATE_VARIABLE_Globals_423_423);
          libs__globals__set_option_4_p_0((MR_Integer) 264, Var_386, STATE_VARIABLE_Globals_423_423, &STATE_VARIABLE_Globals_427_427);
          libs__globals__set_option_4_p_0((MR_Integer) 266, Var_386, STATE_VARIABLE_Globals_427_427, &STATE_VARIABLE_Globals_431_431);
          libs__globals__set_option_4_p_0((MR_Integer) 267, Var_386, STATE_VARIABLE_Globals_431_431, &STATE_VARIABLE_Globals_497_497);
        }
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 234, (MR_Integer) 233, Var_359, STATE_VARIABLE_Globals_497_497, &STATE_VARIABLE_Globals_502_502);
    Var_506 = (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[228]);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 113, (MR_Integer) 563, Var_506, STATE_VARIABLE_Globals_502_502, &STATE_VARIABLE_Globals_507_507);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 113, (MR_Integer) 565, Var_506, STATE_VARIABLE_Globals_507_507, &STATE_VARIABLE_Globals_512_512);
    Var_516 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 266, (MR_Integer) 262, Var_516, STATE_VARIABLE_Globals_512_512, &STATE_VARIABLE_Globals_517_517);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 266, (MR_Integer) 263, Var_516, STATE_VARIABLE_Globals_517_517, &STATE_VARIABLE_Globals_522_522);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 266, (MR_Integer) 264, Var_516, STATE_VARIABLE_Globals_522_522, &STATE_VARIABLE_Globals_527_527);
    libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 472, (MR_Integer) 466, Var_516, STATE_VARIABLE_Globals_527_527, &STATE_VARIABLE_Globals_532_532);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_532_532, (MR_Integer) 646, &LibLinkages0_68);
    if ((LibLinkages0_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      libs__globals__set_option_4_p_0((MR_Integer) 646, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[178]), STATE_VARIABLE_Globals_532_532, &STATE_VARIABLE_Globals_537_537);
    }
    else
      STATE_VARIABLE_Globals_537_537 = STATE_VARIABLE_Globals_532_532;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_537_537, (MR_Integer) 633, &InvokedByMMCMake_71);
    succeeded = (OpMode_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (!(succeeded))
      succeeded = (InvokedByMMCMake_71 == (MR_Integer) 1);
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 651, Var_359, STATE_VARIABLE_Globals_537_537, &STATE_VARIABLE_Globals_546_546);
    }
    else
      STATE_VARIABLE_Globals_546_546 = STATE_VARIABLE_Globals_537_537;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 633, (MR_Integer) 130, Var_516, STATE_VARIABLE_Globals_546_546, &STATE_VARIABLE_Globals_551_551);
    succeeded = (OpMode_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
      STATE_VARIABLE_Globals_555_555 = STATE_VARIABLE_Globals_551_551;
    else
    {
      libs__globals__set_option_4_p_0((MR_Integer) 656, Var_516, STATE_VARIABLE_Globals_551_551, &STATE_VARIABLE_Globals_555_555);
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_555_555, (MR_Integer) 337, &TransOpt_72);
    switch (TransOpt_72) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Specs_576_576 = STATE_VARIABLE_Specs_356_356;
        break;
      case (MR_Integer) 1:
        {
          succeeded = (InvokedByMMCMake_71 == (MR_Integer) 1);
          if (!(succeeded))
            succeeded = (OpMode_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
          {
            libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[185]), STATE_VARIABLE_Specs_356_356, &STATE_VARIABLE_Specs_576_576);
          }
          else
            STATE_VARIABLE_Specs_576_576 = STATE_VARIABLE_Specs_356_356;
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_555_555, (MR_Integer) 333, &InterModOpt_74);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_555_555, (MR_Integer) 338, &InterModAnalysis_75);
    succeeded = (InterModOpt_74 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (InterModAnalysis_75 == (MR_Integer) 1);
    if (succeeded)
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[191]), STATE_VARIABLE_Specs_576_576, &STATE_VARIABLE_Specs_597_597);
    }
    else
      STATE_VARIABLE_Specs_597_597 = STATE_VARIABLE_Specs_576_576;
    succeeded = mercury__io__have_symlinks_0_p_0();
    if (succeeded)
      STATE_VARIABLE_Globals_600_600 = STATE_VARIABLE_Globals_555_555;
    else
    {
      libs__globals__set_option_4_p_0((MR_Integer) 637, Var_516, STATE_VARIABLE_Globals_555_555, &STATE_VARIABLE_Globals_600_600);
    }
    libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_600_600, (MR_Integer) 107, &MaybeStandaloneInt_77);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_600_600, (MR_Integer) 573, &ExtraInitFunctions_78);
    succeeded = ((MR_tag((MR_Word) MaybeStandaloneInt_77)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_79 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeStandaloneInt_77, (MR_Integer) 0)));
      succeeded = (ExtraInitFunctions_78 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[197]), STATE_VARIABLE_Specs_597_597, &STATE_VARIABLE_Specs_622_622);
    }
    else
      STATE_VARIABLE_Specs_622_622 = STATE_VARIABLE_Specs_597_597;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 418, (MR_Integer) 416, Var_359, STATE_VARIABLE_Globals_600_600, &STATE_VARIABLE_Globals_626_626);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 426, (MR_Integer) 425, Var_359, STATE_VARIABLE_Globals_626_626, &STATE_VARIABLE_Globals_631_631);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 425, (MR_Integer) 424, Var_359, STATE_VARIABLE_Globals_631_631, &STATE_VARIABLE_Globals_636_636);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 425, (MR_Integer) 15, Var_359, STATE_VARIABLE_Globals_636_636, &STATE_VARIABLE_Globals_641_641);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 433, (MR_Integer) 432, Var_359, STATE_VARIABLE_Globals_641_641, &STATE_VARIABLE_Globals_646_646);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 432, (MR_Integer) 431, Var_359, STATE_VARIABLE_Globals_646_646, &STATE_VARIABLE_Globals_651_651);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 432, (MR_Integer) 15, Var_359, STATE_VARIABLE_Globals_651_651, &STATE_VARIABLE_Globals_656_656);
    succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_mktag((MR_Integer) 3)));
    if (succeeded)
    {
      Var_658 = ((MR_Word) (MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0)));
      succeeded = ((MR_tag((MR_Word) Var_658)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_659 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_658, (MR_Integer) 0)));
        succeeded = (Var_659 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 337, Var_359, STATE_VARIABLE_Globals_656_656, &STATE_VARIABLE_Globals_662_662);
    }
    else
      STATE_VARIABLE_Globals_662_662 = STATE_VARIABLE_Globals_656_656;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 337, (MR_Integer) 333, Var_359, STATE_VARIABLE_Globals_662_662, &STATE_VARIABLE_Globals_667_667);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 336, (MR_Integer) 335, Var_359, STATE_VARIABLE_Globals_667_667, &STATE_VARIABLE_Globals_672_672);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 333, (MR_Integer) 335, Var_516, STATE_VARIABLE_Globals_672_672, &STATE_VARIABLE_Globals_677_677);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 337, (MR_Integer) 336, Var_516, STATE_VARIABLE_Globals_677_677, &STATE_VARIABLE_Globals_682_682);
    libs__globals__set_option_4_p_0((MR_Integer) 335, Var_516, STATE_VARIABLE_Globals_682_682, &STATE_VARIABLE_Globals_686_686);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 128, (MR_Integer) 129, Var_359, STATE_VARIABLE_Globals_686_686, &STATE_VARIABLE_Globals_691_691);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 62, (MR_Integer) 61, Var_359, STATE_VARIABLE_Globals_691_691, &STATE_VARIABLE_Globals_696_696);
    succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_mktag((MR_Integer) 3)));
    if (succeeded)
    {
      Var_698 = ((MR_Word) (MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0)));
      succeeded = ((MR_tag((MR_Word) Var_698)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_699 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_698, (MR_Integer) 0)));
        succeeded = ((MR_tag((MR_Word) Var_699)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
          Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_699, (MR_Integer) 0)));
      }
    }
    if (succeeded)
      STATE_VARIABLE_Globals_702_702 = STATE_VARIABLE_Globals_696_696;
    else
    {
      libs__globals__set_option_4_p_0((MR_Integer) 128, Var_516, STATE_VARIABLE_Globals_696_696, &STATE_VARIABLE_Globals_702_702);
    }
    succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_mktag((MR_Integer) 3)));
    if (succeeded)
    {
      Var_1686 = ((MR_Word) (MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0)));
      switch (MR_tag((MR_Word) Var_1686)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          switch (MR_unmkbody(Var_1686)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 3:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 4:
              succeeded = MR_TRUE;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_1687 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_1686, (MR_Integer) 0)));

            if ((Var_1687 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              succeeded = MR_TRUE;
            else
            if ((Var_1687 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
              succeeded = MR_TRUE;
            else
              succeeded = MR_FALSE;
          }
          break;
      }
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 150, Var_516, STATE_VARIABLE_Globals_702_702, &STATE_VARIABLE_Globals_713_713);
    }
    else
      STATE_VARIABLE_Globals_713_713 = STATE_VARIABLE_Globals_702_702;
    succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_mktag((MR_Integer) 3)));
    if (succeeded)
    {
      Var_715 = ((MR_Word) (MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0)));
      succeeded = (Var_715 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 129, Var_516, STATE_VARIABLE_Globals_713_713, &STATE_VARIABLE_Globals_718_718);
    }
    else
      STATE_VARIABLE_Globals_718_718 = STATE_VARIABLE_Globals_713_713;
    succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_mktag((MR_Integer) 3)));
    if (succeeded)
    {
      Var_720 = ((MR_Word) (MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0)));
      succeeded = ((MR_tag((MR_Word) Var_720)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_721 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_720, (MR_Integer) 0)));
        succeeded = (Var_721 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      }
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 333, Var_516, STATE_VARIABLE_Globals_718_718, &STATE_VARIABLE_Globals_724_724);
    }
    else
      STATE_VARIABLE_Globals_724_724 = STATE_VARIABLE_Globals_718_718;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_724_724, (MR_Integer) 128, &Smart_82);
    switch (Smart_82) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_741_741 = STATE_VARIABLE_Globals_724_724;
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_Globals_730_730;
          MR_Word STATE_VARIABLE_Globals_735_735;
          MR_Word Var_737;
          MR_Word Var_738;
          MR_Word Var_739;

          succeeded = libs__globals__lookup_bool_option_3_p_1(STATE_VARIABLE_Globals_724_724, (MR_Integer) 333, (MR_Integer) 1);
          if (succeeded)
          {
            libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "\140--intermodule-optimization\'", STATE_VARIABLE_Globals_724_724, &STATE_VARIABLE_Globals_730_730);
          }
          else
            STATE_VARIABLE_Globals_730_730 = STATE_VARIABLE_Globals_724_724;
          succeeded = libs__globals__lookup_bool_option_3_p_1(STATE_VARIABLE_Globals_730_730, (MR_Integer) 335, (MR_Integer) 1);
          if (succeeded)
          {
            libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "\140--use-opt-files\'", STATE_VARIABLE_Globals_730_730, &STATE_VARIABLE_Globals_735_735);
          }
          else
            STATE_VARIABLE_Globals_735_735 = STATE_VARIABLE_Globals_730_730;
          succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_mktag((MR_Integer) 3)));
          if (succeeded)
          {
            Var_737 = ((MR_Word) (MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0)));
            succeeded = ((MR_tag((MR_Word) Var_737)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_738 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_737, (MR_Integer) 0)));
              succeeded = ((MR_tag((MR_Word) Var_738)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_739 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_738, (MR_Integer) 0)));
                succeeded = (Var_739 == (MR_Integer) 0);
              }
            }
          }
          if (succeeded)
            STATE_VARIABLE_Globals_741_741 = STATE_VARIABLE_Globals_735_735;
          else
          {
            libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "\140--no-target-code-only\'", STATE_VARIABLE_Globals_735_735, &STATE_VARIABLE_Globals_741_741);
          }
        }
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 652, (MR_Integer) 651, Var_359, STATE_VARIABLE_Globals_741_741, &STATE_VARIABLE_Globals_746_746);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 59, (MR_Integer) 58, Var_359, STATE_VARIABLE_Globals_746_746, &STATE_VARIABLE_Globals_751_751);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 58, (MR_Integer) 64, Var_359, STATE_VARIABLE_Globals_751_751, &STATE_VARIABLE_Globals_756_756);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_756_756, (MR_Integer) 59, &VeryVerbose_83);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_756_756, (MR_Integer) 68, &Statistics_84);
    succeeded = (VeryVerbose_83 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (Statistics_84 == (MR_Integer) 1);
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 69, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), STATE_VARIABLE_Globals_756_756, &STATE_VARIABLE_Globals_762_762);
    }
    else
      STATE_VARIABLE_Globals_762_762 = STATE_VARIABLE_Globals_756_756;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 75, (MR_Integer) 73, Var_359, STATE_VARIABLE_Globals_762_762, &STATE_VARIABLE_Globals_767_767);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 76, (MR_Integer) 73, Var_359, STATE_VARIABLE_Globals_767_767, &STATE_VARIABLE_Globals_772_772);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 74, (MR_Integer) 73, Var_359, STATE_VARIABLE_Globals_772_772, &STATE_VARIABLE_Globals_777_777);
    libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_777_777, (MR_Integer) 86, &DebugLiveness_85);
    succeeded = (DebugLiveness_85 >= (MR_Integer) 0);
    if (succeeded)
    {
      Var_781 = (MR_String) "all";
      succeeded = libs__handle_options__convert_dump_alias_2_p_0(Var_781, &AllDumpOptions_86);
    }
    if (succeeded)
    {
      MR_String DumpOptions0_87;
      MR_String DumpOptions1_88;
      MR_Word Var_784;

      libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_777_777, (MR_Integer) 168, &DumpOptions0_87);
      DumpOptions1_88 = mercury__string__f_43_43_2_f_0(DumpOptions0_87, AllDumpOptions_86);
      {
        Var_784 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_784, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_784, 1) = ((MR_Box) (DumpOptions1_88));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 168, Var_784, STATE_VARIABLE_Globals_777_777, &STATE_VARIABLE_Globals_785_785);
    }
    else
      STATE_VARIABLE_Globals_785_785 = STATE_VARIABLE_Globals_777_777;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 76, (MR_Integer) 73, Var_359, STATE_VARIABLE_Globals_785_785, &STATE_VARIABLE_Globals_789_789);
    libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_789_789, (MR_Integer) 77, &DebugModesPredId_89);
    succeeded = (DebugModesPredId_89 > (MR_Integer) 0);
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 73, Var_359, STATE_VARIABLE_Globals_789_789, &STATE_VARIABLE_Globals_795_795);
    }
    else
      STATE_VARIABLE_Globals_795_795 = STATE_VARIABLE_Globals_789_789;
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_795_795, (MR_Integer) 367, &DebugUnneededCodePredNames_90);
    if ((DebugUnneededCodePredNames_90 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_Globals_800_800 = STATE_VARIABLE_Globals_795_795;
    else
    {
      libs__globals__set_option_4_p_0((MR_Integer) 366, Var_359, STATE_VARIABLE_Globals_795_795, &STATE_VARIABLE_Globals_800_800);
    }
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_800_800, (MR_Integer) 83, &DebugOptPredIdStrs_93);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_800_800, (MR_Integer) 84, &DebugOptPredNames_94);
    {
      MR_String Var_95;
      MR_Word Var_96;

      succeeded = ((MR_tag((MR_Word) DebugOptPredIdStrs_93)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_95 = ((MR_String) (MR_hl_field(MR_mktag(1), DebugOptPredIdStrs_93, (MR_Integer) 0)));
        Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), DebugOptPredIdStrs_93, (MR_Integer) 1)));
      }
    }
    if (!(succeeded))
    {
      MR_String Var_97;
      MR_Word Var_98;

      succeeded = ((MR_tag((MR_Word) DebugOptPredNames_94)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_97 = ((MR_String) (MR_hl_field(MR_mktag(1), DebugOptPredNames_94, (MR_Integer) 0)));
        Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), DebugOptPredNames_94, (MR_Integer) 1)));
      }
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 81, Var_359, STATE_VARIABLE_Globals_800_800, &STATE_VARIABLE_Globals_806_806);
    }
    else
      STATE_VARIABLE_Globals_806_806 = STATE_VARIABLE_Globals_800_800;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_806_806, (MR_Integer) 92, &DebugIntermoduleAnalysis_99);
    analysis__enable_debug_messages_3_p_0(DebugIntermoduleAnalysis_99);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_806_806, (MR_Integer) 162, &DumpHLDSPredIds_100);
    if ((DumpHLDSPredIds_100 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_Globals_818_818 = STATE_VARIABLE_Globals_806_806;
    else
    {
      MR_String DumpOptions2_103;
      MR_String DumpOptions3_104;
      MR_String DumpOptions_105;
      MR_Word Var_817;

      libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_806_806, (MR_Integer) 168, &DumpOptions2_103);
      mercury__string__replace_all_4_p_0(DumpOptions2_103, (MR_String) "M", (MR_String) "", &DumpOptions3_104);
      mercury__string__replace_all_4_p_0(DumpOptions3_104, (MR_String) "T", (MR_String) "", &DumpOptions_105);
      {
        Var_817 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_817, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_817, 1) = ((MR_Box) (DumpOptions_105));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 168, Var_817, STATE_VARIABLE_Globals_806_806, &STATE_VARIABLE_Globals_818_818);
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 91, (MR_Integer) 177, Var_359, STATE_VARIABLE_Globals_818_818, &STATE_VARIABLE_Globals_822_822);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 177, (MR_Integer) 175, Var_359, STATE_VARIABLE_Globals_822_822, &STATE_VARIABLE_Globals_827_827);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 176, (MR_Integer) 175, Var_359, STATE_VARIABLE_Globals_827_827, &STATE_VARIABLE_Globals_832_832);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 154, (MR_Integer) 153, Var_359, STATE_VARIABLE_Globals_832_832, &STATE_VARIABLE_Globals_837_837);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_837_837, (MR_Integer) 233, &UseTrail_106);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_837_837, (MR_Integer) 266, &HighLevelCode_107);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_837_837, (MR_Integer) 235, &UseMinimalModelStackCopy_108);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_837_837, (MR_Integer) 236, &UseMinimalModelOwnStacks_109);
    mercury__bool__or_3_p_0(UseMinimalModelStackCopy_108, UseMinimalModelOwnStacks_109, &UseMinimalModel_110);
    succeeded = (UseMinimalModelStackCopy_108 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (UseMinimalModelOwnStacks_109 == (MR_Integer) 1);
    if (succeeded)
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[201]), STATE_VARIABLE_Specs_622_622, &STATE_VARIABLE_Specs_852_852);
    }
    else
    {
      succeeded = (UseMinimalModel_110 == (MR_Integer) 1);
      if (succeeded)
        succeeded = (HighLevelCode_107 == (MR_Integer) 1);
      if (succeeded)
      {
        libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[205]), STATE_VARIABLE_Specs_622_622, &STATE_VARIABLE_Specs_852_852);
      }
      else
      {
        succeeded = (UseMinimalModel_110 == (MR_Integer) 1);
        if (succeeded)
          succeeded = (UseTrail_106 == (MR_Integer) 1);
        if (succeeded)
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[208]), STATE_VARIABLE_Specs_622_622, &STATE_VARIABLE_Specs_852_852);
        }
        else
          STATE_VARIABLE_Specs_852_852 = STATE_VARIABLE_Specs_622_622;
      }
    }
    Var_875 = (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[5]);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 267, (MR_Integer) 259, Var_875, STATE_VARIABLE_Globals_837_837, &STATE_VARIABLE_Globals_876_876);
    switch (Target_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer ArgPackBits0_114;
          MR_Integer BitsPerWord_115;
          MR_Integer ArgPackBits_116;
          MR_Word Var_923;

          libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_876_876, (MR_Integer) 259, &ArgPackBits0_114);
          libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_876_876, (MR_Integer) 253, &BitsPerWord_115);
          succeeded = (ArgPackBits0_114 < (MR_Integer) 0);
          if (succeeded)
          {
            ArgPackBits_116 = BitsPerWord_115;
            STATE_VARIABLE_Specs_921_921 = STATE_VARIABLE_Specs_852_852;
          }
          else
          {
            succeeded = (ArgPackBits0_114 > BitsPerWord_115);
            if (succeeded)
            {
              MR_Word ArgPackBitsSpec_117;
              MR_Word Var_891;
              MR_Word Var_892;
              MR_Word Var_894;
              MR_Word Var_897;
              MR_Word Var_900;
              MR_Word Var_903;
              MR_Word Var_906;
              MR_Word Var_909;
              MR_Word Var_912;
              MR_Word Var_913;

              ArgPackBits_116 = BitsPerWord_115;
              Var_892 = (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[230]);
              {
                Var_913 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_913, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_913, 1) = ((MR_Box) (BitsPerWord_115));
              }
              {
                Var_912 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_912, 0) = ((MR_Box) (Var_913));
                MR_hl_field(MR_mktag(1), Var_912, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
              }
              {
                Var_909 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_909, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[235])));
                MR_hl_field(MR_mktag(1), Var_909, 1) = ((MR_Box) (Var_912));
              }
              {
                Var_906 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_906, 0) = ((MR_Box) (Var_892));
                MR_hl_field(MR_mktag(1), Var_906, 1) = ((MR_Box) (Var_909));
              }
              {
                Var_903 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_903, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[234])));
                MR_hl_field(MR_mktag(1), Var_903, 1) = ((MR_Box) (Var_906));
              }
              {
                Var_900 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_900, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[233])));
                MR_hl_field(MR_mktag(1), Var_900, 1) = ((MR_Box) (Var_903));
              }
              {
                Var_897 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_897, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[232])));
                MR_hl_field(MR_mktag(1), Var_897, 1) = ((MR_Box) (Var_900));
              }
              {
                Var_894 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_894, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[231])));
                MR_hl_field(MR_mktag(1), Var_894, 1) = ((MR_Box) (Var_897));
              }
              {
                Var_891 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_891, 0) = ((MR_Box) (Var_892));
                MR_hl_field(MR_mktag(1), Var_891, 1) = ((MR_Box) (Var_894));
              }
              {
                ArgPackBitsSpec_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ArgPackBitsSpec_117, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[229])));
                MR_hl_field(MR_mktag(1), ArgPackBitsSpec_117, 1) = ((MR_Box) (Var_891));
              }
              libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ArgPackBitsSpec_117, STATE_VARIABLE_Specs_852_852, &STATE_VARIABLE_Specs_921_921);
            }
            else
            {
              ArgPackBits_116 = ArgPackBits0_114;
              STATE_VARIABLE_Specs_921_921 = STATE_VARIABLE_Specs_852_852;
            }
          }
          {
            Var_923 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_923, 0) = ((MR_Box) (ArgPackBits_116));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 259, Var_923, STATE_VARIABLE_Globals_876_876, &STATE_VARIABLE_Globals_924_924);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          MR_Word STATE_VARIABLE_Globals_880_880;

          libs__globals__set_option_4_p_0((MR_Integer) 259, Var_875, STATE_VARIABLE_Globals_876_876, &STATE_VARIABLE_Globals_880_880);
          libs__globals__set_option_4_p_0((MR_Integer) 260, Var_516, STATE_VARIABLE_Globals_880_880, &STATE_VARIABLE_Globals_924_924);
          STATE_VARIABLE_Specs_921_921 = STATE_VARIABLE_Specs_852_852;
        }
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 239, (MR_Integer) 256, Var_359, STATE_VARIABLE_Globals_924_924, &STATE_VARIABLE_Globals_928_928);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 266, (MR_Integer) 265, Var_516, STATE_VARIABLE_Globals_928_928, &STATE_VARIABLE_Globals_933_933);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 256, (MR_Integer) 265, Var_516, STATE_VARIABLE_Globals_933_933, &STATE_VARIABLE_Globals_938_938);
    switch (Target_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_942_942 = STATE_VARIABLE_Globals_938_938;
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_942_942 = STATE_VARIABLE_Globals_938_938;
        break;
      case (MR_Integer) 3:
        {
          libs__globals__set_option_4_p_0((MR_Integer) 304, Var_516, STATE_VARIABLE_Globals_938_938, &STATE_VARIABLE_Globals_942_942);
        }
        break;
      case (MR_Integer) 2:
        STATE_VARIABLE_Globals_942_942 = STATE_VARIABLE_Globals_938_938;
        break;
    }
    switch (Target_27) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        succeeded = MR_TRUE;
        break;
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 447, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[6]), STATE_VARIABLE_Globals_942_942, &STATE_VARIABLE_Globals_946_946);
    }
    else
      STATE_VARIABLE_Globals_946_946 = STATE_VARIABLE_Globals_942_942;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 496, (MR_Integer) 567, Var_516, STATE_VARIABLE_Globals_946_946, &STATE_VARIABLE_Globals_951_951);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 223, (MR_Integer) 214, Var_359, STATE_VARIABLE_Globals_951_951, &STATE_VARIABLE_Globals_956_956);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 214, (MR_Integer) 226, Var_516, STATE_VARIABLE_Globals_956_956, &STATE_VARIABLE_Globals_961_961);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 223, (MR_Integer) 141, Var_359, STATE_VARIABLE_Globals_961_961, &STATE_VARIABLE_Globals_966_966);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_966_966, (MR_Integer) 141, &ProfOptimized_118);
    switch (ProfOptimized_118) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__handle_options__option_implies_5_p_0((MR_Integer) 210, (MR_Integer) 341, Var_516, STATE_VARIABLE_Globals_966_966, &STATE_VARIABLE_Globals_972_972);
        }
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_972_972 = STATE_VARIABLE_Globals_966_966;
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 210, (MR_Integer) 212, Var_359, STATE_VARIABLE_Globals_972_972, &STATE_VARIABLE_Globals_977_977);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 227, (MR_Integer) 212, Var_359, STATE_VARIABLE_Globals_977_977, &STATE_VARIABLE_Globals_982_982);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 228, (MR_Integer) 212, Var_359, STATE_VARIABLE_Globals_982_982, &STATE_VARIABLE_Globals_987_987);
    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_987_987, (MR_Integer) 229, &ExpComp_119);
    succeeded = (strcmp(ExpComp_119, (MR_String) "") == 0);
    if (succeeded)
      STATE_VARIABLE_Globals_992_992 = STATE_VARIABLE_Globals_987_987;
    else
    {
      libs__globals__set_option_4_p_0((MR_Integer) 341, Var_516, STATE_VARIABLE_Globals_987_987, &STATE_VARIABLE_Globals_992_992);
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 202, (MR_Integer) 201, Var_359, STATE_VARIABLE_Globals_992_992, &STATE_VARIABLE_Globals_997_997);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 248, (MR_Integer) 250, Var_359, STATE_VARIABLE_Globals_997_997, &STATE_VARIABLE_Globals_1002_1002);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 201, (MR_Integer) 273, Var_359, STATE_VARIABLE_Globals_1002_1002, &STATE_VARIABLE_Globals_1007_1007);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 210, (MR_Integer) 273, Var_359, STATE_VARIABLE_Globals_1007_1007, &STATE_VARIABLE_Globals_1012_1012);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 210, (MR_Integer) 323, Var_359, STATE_VARIABLE_Globals_1012_1012, &STATE_VARIABLE_Globals_1017_1017);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 201, (MR_Integer) 139, Var_359, STATE_VARIABLE_Globals_1017_1017, &STATE_VARIABLE_Globals_1022_1022);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 139, (MR_Integer) 135, Var_359, STATE_VARIABLE_Globals_1022_1022, &STATE_VARIABLE_Globals_1027_1027);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 138, (MR_Integer) 135, Var_359, STATE_VARIABLE_Globals_1027_1027, &STATE_VARIABLE_Globals_1032_1032);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1032_1032, (MR_Integer) 133, &TraceOptimized_120);
    TraceLevelIsNone_121 = libs__trace_params__given_trace_level_is_none_1_f_0(TraceLevel_32);
    switch (TraceLevelIsNone_121) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TraceTailRec_122;
          MR_Word STATE_VARIABLE_Globals_1097_1097;
          MR_Word STATE_VARIABLE_Globals_1101_1101;
          MR_Word STATE_VARIABLE_Globals_1105_1105;
          MR_Word STATE_VARIABLE_Globals_1109_1109;
          MR_Word STATE_VARIABLE_Globals_1113_1113;
          MR_Word STATE_VARIABLE_Globals_1117_1117;
          MR_Word STATE_VARIABLE_Globals_1121_1121;
          MR_Word STATE_VARIABLE_Globals_1125_1125;

          switch (TraceOptimized_120) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word STATE_VARIABLE_Globals_1041_1041;
                MR_Word STATE_VARIABLE_Globals_1045_1045;
                MR_Word STATE_VARIABLE_Globals_1049_1049;
                MR_Word STATE_VARIABLE_Globals_1053_1053;
                MR_Word STATE_VARIABLE_Globals_1057_1057;
                MR_Word STATE_VARIABLE_Globals_1061_1061;
                MR_Word STATE_VARIABLE_Globals_1065_1065;
                MR_Word STATE_VARIABLE_Globals_1069_1069;
                MR_Word STATE_VARIABLE_Globals_1073_1073;
                MR_Word STATE_VARIABLE_Globals_1077_1077;
                MR_Word STATE_VARIABLE_Globals_1081_1081;
                MR_Word STATE_VARIABLE_Globals_1085_1085;
                MR_Word STATE_VARIABLE_Globals_1089_1089;
                MR_Word STATE_VARIABLE_Globals_1093_1093;

                libs__globals__set_option_4_p_0((MR_Integer) 341, Var_516, STATE_VARIABLE_Globals_1032_1032, &STATE_VARIABLE_Globals_1041_1041);
                libs__globals__set_option_4_p_0((MR_Integer) 359, Var_516, STATE_VARIABLE_Globals_1041_1041, &STATE_VARIABLE_Globals_1045_1045);
                libs__globals__set_option_4_p_0((MR_Integer) 361, Var_516, STATE_VARIABLE_Globals_1045_1045, &STATE_VARIABLE_Globals_1049_1049);
                libs__globals__set_option_4_p_0((MR_Integer) 368, Var_516, STATE_VARIABLE_Globals_1049_1049, &STATE_VARIABLE_Globals_1053_1053);
                libs__globals__set_option_4_p_0((MR_Integer) 369, Var_516, STATE_VARIABLE_Globals_1053_1053, &STATE_VARIABLE_Globals_1057_1057);
                libs__globals__set_option_4_p_0((MR_Integer) 398, Var_516, STATE_VARIABLE_Globals_1057_1057, &STATE_VARIABLE_Globals_1061_1061);
                libs__globals__set_option_4_p_0((MR_Integer) 357, Var_516, STATE_VARIABLE_Globals_1061_1061, &STATE_VARIABLE_Globals_1065_1065);
                libs__globals__set_option_4_p_0((MR_Integer) 358, Var_516, STATE_VARIABLE_Globals_1065_1065, &STATE_VARIABLE_Globals_1069_1069);
                libs__globals__set_option_4_p_0((MR_Integer) 374, Var_516, STATE_VARIABLE_Globals_1069_1069, &STATE_VARIABLE_Globals_1073_1073);
                libs__globals__set_option_4_p_0((MR_Integer) 373, Var_516, STATE_VARIABLE_Globals_1073_1073, &STATE_VARIABLE_Globals_1077_1077);
                libs__globals__set_option_4_p_0((MR_Integer) 380, Var_516, STATE_VARIABLE_Globals_1077_1077, &STATE_VARIABLE_Globals_1081_1081);
                libs__globals__set_option_4_p_0((MR_Integer) 394, Var_516, STATE_VARIABLE_Globals_1081_1081, &STATE_VARIABLE_Globals_1085_1085);
                libs__globals__set_option_4_p_0((MR_Integer) 407, Var_516, STATE_VARIABLE_Globals_1085_1085, &STATE_VARIABLE_Globals_1089_1089);
                libs__globals__set_option_4_p_0((MR_Integer) 408, Var_516, STATE_VARIABLE_Globals_1089_1089, &STATE_VARIABLE_Globals_1093_1093);
                libs__globals__set_option_4_p_0((MR_Integer) 377, Var_516, STATE_VARIABLE_Globals_1093_1093, &STATE_VARIABLE_Globals_1097_1097);
              }
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Globals_1097_1097 = STATE_VARIABLE_Globals_1032_1032;
              break;
          }
          libs__globals__set_option_4_p_0((MR_Integer) 465, Var_516, STATE_VARIABLE_Globals_1097_1097, &STATE_VARIABLE_Globals_1101_1101);
          libs__globals__set_option_4_p_0((MR_Integer) 376, Var_359, STATE_VARIABLE_Globals_1101_1101, &STATE_VARIABLE_Globals_1105_1105);
          libs__globals__set_option_4_p_0((MR_Integer) 396, Var_359, STATE_VARIABLE_Globals_1105_1105, &STATE_VARIABLE_Globals_1109_1109);
          libs__globals__set_option_4_p_0((MR_Integer) 463, Var_516, STATE_VARIABLE_Globals_1109_1109, &STATE_VARIABLE_Globals_1113_1113);
          libs__globals__set_option_4_p_0((MR_Integer) 277, Var_359, STATE_VARIABLE_Globals_1113_1113, &STATE_VARIABLE_Globals_1117_1117);
          libs__globals__set_option_4_p_0((MR_Integer) 278, Var_359, STATE_VARIABLE_Globals_1117_1117, &STATE_VARIABLE_Globals_1121_1121);
          libs__globals__set_option_4_p_0((MR_Integer) 329, Var_516, STATE_VARIABLE_Globals_1121_1121, &STATE_VARIABLE_Globals_1125_1125);
          TraceTailRec_122 = libs__trace_params__trace_level_allows_tail_rec_1_f_0(TraceLevel_32);
          switch (TraceTailRec_122) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                libs__globals__set_option_4_p_0((MR_Integer) 142, Var_516, STATE_VARIABLE_Globals_1125_1125, &STATE_VARIABLE_Globals_1129_1129);
              }
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Globals_1129_1129 = STATE_VARIABLE_Globals_1125_1125;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          libs__globals__set_option_4_p_0((MR_Integer) 142, Var_516, STATE_VARIABLE_Globals_1032_1032, &STATE_VARIABLE_Globals_1129_1129);
        }
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 210, (MR_Integer) 276, Var_359, STATE_VARIABLE_Globals_1129_1129, &STATE_VARIABLE_Globals_1134_1134);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1134_1134, (MR_Integer) 210, &ProfileDeep_123);
    switch (ProfileDeep_123) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_Specs_1146_1146 = STATE_VARIABLE_Specs_921_921;
          STATE_VARIABLE_Globals_1158_1158 = STATE_VARIABLE_Globals_1134_1134;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LotsOfHOSpec_125;
          MR_Word STATE_VARIABLE_Globals_1149_1149;

          succeeded = (HighLevelCode_107 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (Target_27 == (MR_Integer) 0);
          if (succeeded)
            STATE_VARIABLE_Specs_1146_1146 = STATE_VARIABLE_Specs_921_921;
          else
          {
            libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[210]), STATE_VARIABLE_Specs_921_921, &STATE_VARIABLE_Specs_1146_1146);
          }
          libs__globals__set_option_4_p_0((MR_Integer) 373, Var_516, STATE_VARIABLE_Globals_1134_1134, &STATE_VARIABLE_Globals_1149_1149);
          libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1149_1149, (MR_Integer) 225, &LotsOfHOSpec_125);
          switch (LotsOfHOSpec_125) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Globals_1158_1158 = STATE_VARIABLE_Globals_1149_1149;
              break;
            case (MR_Integer) 1:
              {
                MR_Word STATE_VARIABLE_Globals_1154_1154;

                libs__globals__set_option_4_p_0((MR_Integer) 361, Var_359, STATE_VARIABLE_Globals_1149_1149, &STATE_VARIABLE_Globals_1154_1154);
                libs__globals__set_option_4_p_0((MR_Integer) 362, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[6]), STATE_VARIABLE_Globals_1154_1154, &STATE_VARIABLE_Globals_1158_1158);
              }
              break;
          }
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1158_1158, (MR_Integer) 227, &RecordTermSizesAsWords_126);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1158_1158, (MR_Integer) 228, &RecordTermSizesAsCells_127);
    succeeded = (RecordTermSizesAsWords_126 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (RecordTermSizesAsCells_127 == (MR_Integer) 1);
    if (succeeded)
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[212]), STATE_VARIABLE_Specs_1146_1146, &STATE_VARIABLE_Specs_1168_1168);
      STATE_VARIABLE_Globals_1175_1175 = STATE_VARIABLE_Globals_1158_1158;
    }
    else
    {
      succeeded = (RecordTermSizesAsWords_126 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (RecordTermSizesAsCells_127 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Globals_1171_1171;

        libs__globals__set_option_4_p_0((MR_Integer) 373, Var_516, STATE_VARIABLE_Globals_1158_1158, &STATE_VARIABLE_Globals_1171_1171);
        libs__globals__set_option_4_p_0((MR_Integer) 260, Var_516, STATE_VARIABLE_Globals_1171_1171, &STATE_VARIABLE_Globals_1175_1175);
        switch (HighLevelCode_107) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Specs_1168_1168 = STATE_VARIABLE_Specs_1146_1146;
            break;
          case (MR_Integer) 1:
            {
              libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[214]), STATE_VARIABLE_Specs_1146_1146, &STATE_VARIABLE_Specs_1168_1168);
            }
            break;
        }
      }
      else
      {
        STATE_VARIABLE_Globals_1175_1175 = STATE_VARIABLE_Globals_1158_1158;
        STATE_VARIABLE_Specs_1168_1168 = STATE_VARIABLE_Specs_1146_1146;
      }
    }
    {
      MR_Word Var_1187;

      Var_1187 = libs__trace_params__given_trace_level_is_none_1_f_0(TraceLevel_32);
      succeeded = (Var_1187 == (MR_Integer) 1);
    }
    if (!(succeeded))
    {
      succeeded = (HighLevelCode_107 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (Target_27 == (MR_Integer) 0);
    }
    if (succeeded)
      STATE_VARIABLE_Specs_1194_1194 = STATE_VARIABLE_Specs_1168_1168;
    else
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[216]), STATE_VARIABLE_Specs_1168_1168, &STATE_VARIABLE_Specs_1194_1194);
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 231, (MR_Integer) 502, Var_516, STATE_VARIABLE_Globals_1175_1175, &STATE_VARIABLE_Globals_1198_1198);
    libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 344, (MR_Integer) 375, Var_516, STATE_VARIABLE_Globals_1198_1198, &STATE_VARIABLE_Globals_1203_1203);
    switch (ProfileDeep_123) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 341, (MR_Integer) 375, Var_516, STATE_VARIABLE_Globals_1203_1203, &STATE_VARIABLE_Globals_1208_1208);
        }
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_1208_1208 = STATE_VARIABLE_Globals_1203_1203;
        break;
    }
    libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 180, (MR_Integer) 398, Var_516, STATE_VARIABLE_Globals_1208_1208, &STATE_VARIABLE_Globals_1213_1213);
    libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 180, (MR_Integer) 357, Var_516, STATE_VARIABLE_Globals_1213_1213, &STATE_VARIABLE_Globals_1218_1218);
    libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 180, (MR_Integer) 358, Var_516, STATE_VARIABLE_Globals_1218_1218, &STATE_VARIABLE_Globals_1223_1223);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 273, (MR_Integer) 276, Var_359, STATE_VARIABLE_Globals_1223_1223, &STATE_VARIABLE_Globals_1228_1228);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 277, (MR_Integer) 276, Var_359, STATE_VARIABLE_Globals_1228_1228, &STATE_VARIABLE_Globals_1233_1233);
    switch (GC_Method_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 5:
        {
          MR_Word STATE_VARIABLE_Globals_1237_1237;
          MR_Word STATE_VARIABLE_Globals_1241_1241;
          MR_Word STATE_VARIABLE_Globals_1245_1245;
          MR_Word STATE_VARIABLE_Globals_1249_1249;
          MR_Word STATE_VARIABLE_Globals_1253_1253;
          MR_Word STATE_VARIABLE_Globals_1257_1257;
          MR_Word STATE_VARIABLE_Globals_1261_1261;
          MR_Word STATE_VARIABLE_Globals_1265_1265;
          MR_Word STATE_VARIABLE_Globals_1269_1269;
          MR_Word STATE_VARIABLE_Globals_1273_1273;

          libs__globals__set_option_4_p_0((MR_Integer) 275, Var_359, STATE_VARIABLE_Globals_1233_1233, &STATE_VARIABLE_Globals_1237_1237);
          libs__globals__set_option_4_p_0((MR_Integer) 278, Var_359, STATE_VARIABLE_Globals_1237_1237, &STATE_VARIABLE_Globals_1241_1241);
          libs__globals__set_option_4_p_0((MR_Integer) 465, Var_516, STATE_VARIABLE_Globals_1241_1241, &STATE_VARIABLE_Globals_1245_1245);
          libs__globals__set_option_4_p_0((MR_Integer) 485, Var_516, STATE_VARIABLE_Globals_1245_1245, &STATE_VARIABLE_Globals_1249_1249);
          libs__globals__set_option_4_p_0((MR_Integer) 329, Var_516, STATE_VARIABLE_Globals_1249_1249, &STATE_VARIABLE_Globals_1253_1253);
          libs__globals__set_option_4_p_0((MR_Integer) 463, Var_516, STATE_VARIABLE_Globals_1253_1253, &STATE_VARIABLE_Globals_1257_1257);
          libs__globals__set_option_4_p_0((MR_Integer) 312, Var_516, STATE_VARIABLE_Globals_1257_1257, &STATE_VARIABLE_Globals_1261_1261);
          libs__globals__set_option_4_p_0((MR_Integer) 313, Var_516, STATE_VARIABLE_Globals_1261_1261, &STATE_VARIABLE_Globals_1265_1265);
          libs__globals__set_option_4_p_0((MR_Integer) 373, Var_516, STATE_VARIABLE_Globals_1265_1265, &STATE_VARIABLE_Globals_1269_1269);
          libs__globals__set_option_4_p_0((MR_Integer) 368, Var_516, STATE_VARIABLE_Globals_1269_1269, &STATE_VARIABLE_Globals_1273_1273);
          libs__globals__set_option_4_p_0((MR_Integer) 369, Var_516, STATE_VARIABLE_Globals_1273_1273, &STATE_VARIABLE_Globals_1277_1277);
        }
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_1277_1277 = STATE_VARIABLE_Globals_1233_1233;
        break;
      case (MR_Integer) 2:
        STATE_VARIABLE_Globals_1277_1277 = STATE_VARIABLE_Globals_1233_1233;
        break;
      case (MR_Integer) 3:
        STATE_VARIABLE_Globals_1277_1277 = STATE_VARIABLE_Globals_1233_1233;
        break;
      case (MR_Integer) 4:
        STATE_VARIABLE_Globals_1277_1277 = STATE_VARIABLE_Globals_1233_1233;
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_1277_1277 = STATE_VARIABLE_Globals_1233_1233;
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1277_1277, (MR_Integer) 271, &PutNondetEnvOnHeap_131);
    succeeded = (HighLevelCode_107 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (GC_Method_28 == (MR_Integer) 5);
      if (succeeded)
        succeeded = (PutNondetEnvOnHeap_131 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[221]), STATE_VARIABLE_Specs_1194_1194, &STATE_VARIABLE_Specs_1295_1295);
    }
    else
      STATE_VARIABLE_Specs_1295_1295 = STATE_VARIABLE_Specs_1194_1194;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 276, (MR_Integer) 274, Var_359, STATE_VARIABLE_Globals_1277_1277, &STATE_VARIABLE_Globals_1299_1299);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 275, (MR_Integer) 274, Var_359, STATE_VARIABLE_Globals_1299_1299, &STATE_VARIABLE_Globals_1304_1304);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 276, (MR_Integer) 483, Var_516, STATE_VARIABLE_Globals_1304_1304, &STATE_VARIABLE_Globals_1309_1309);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 275, (MR_Integer) 483, Var_516, STATE_VARIABLE_Globals_1309_1309, &STATE_VARIABLE_Globals_1314_1314);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 274, (MR_Integer) 481, Var_516, STATE_VARIABLE_Globals_1314_1314, &STATE_VARIABLE_Globals_1319_1319);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 278, (MR_Integer) 398, Var_516, STATE_VARIABLE_Globals_1319_1319, &STATE_VARIABLE_Globals_1324_1324);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 278, (MR_Integer) 357, Var_516, STATE_VARIABLE_Globals_1324_1324, &STATE_VARIABLE_Globals_1329_1329);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 233, (MR_Integer) 463, Var_516, STATE_VARIABLE_Globals_1329_1329, &STATE_VARIABLE_Globals_1334_1334);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 243, (MR_Integer) 463, Var_516, STATE_VARIABLE_Globals_1334_1334, &STATE_VARIABLE_Globals_1339_1339);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 235, (MR_Integer) 465, Var_516, STATE_VARIABLE_Globals_1339_1339, &STATE_VARIABLE_Globals_1344_1344);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1344_1344, (MR_Integer) 290, &DisablePneg_133);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1344_1344, (MR_Integer) 291, &DisableCut_134);
    succeeded = (UseMinimalModelStackCopy_108 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (DisablePneg_133 == (MR_Integer) 0);
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 292, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), STATE_VARIABLE_Globals_1344_1344, &STATE_VARIABLE_Globals_1350_1350);
    }
    else
      STATE_VARIABLE_Globals_1350_1350 = STATE_VARIABLE_Globals_1344_1344;
    succeeded = (UseMinimalModelStackCopy_108 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (DisableCut_134 == (MR_Integer) 0);
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 293, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), STATE_VARIABLE_Globals_1350_1350, &STATE_VARIABLE_Globals_1354_1354);
    }
    else
      STATE_VARIABLE_Globals_1354_1354 = STATE_VARIABLE_Globals_1350_1350;
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1354_1354, (MR_Integer) 161, &DumpHLDSStages_135);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1354_1354, (MR_Integer) 160, &DumpTraceStages_136);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1354_1354, (MR_Integer) 309, &ParallelLiveness_137);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1354_1354, (MR_Integer) 310, &ParallelCodeGen_138);
    {
      MR_String Var_139;
      MR_Word Var_140;

      succeeded = ((MR_tag((MR_Word) DumpHLDSStages_135)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_139 = ((MR_String) (MR_hl_field(MR_mktag(1), DumpHLDSStages_135, (MR_Integer) 0)));
        Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), DumpHLDSStages_135, (MR_Integer) 1)));
      }
    }
    if (!(succeeded))
    {
      {
        MR_String Var_141;
        MR_Word Var_142;

        succeeded = ((MR_tag((MR_Word) DumpTraceStages_136)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_141 = ((MR_String) (MR_hl_field(MR_mktag(1), DumpTraceStages_136, (MR_Integer) 0)));
          Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), DumpTraceStages_136, (MR_Integer) 1)));
        }
      }
      if (!(succeeded))
      {
        succeeded = (Statistics_84 == (MR_Integer) 1);
        if (!(succeeded))
        {
          succeeded = (ParallelLiveness_137 == (MR_Integer) 1);
          if (!(succeeded))
            succeeded = (ParallelCodeGen_138 == (MR_Integer) 1);
        }
      }
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 308, Var_516, STATE_VARIABLE_Globals_1354_1354, &STATE_VARIABLE_Globals_1362_1362);
    }
    else
      STATE_VARIABLE_Globals_1362_1362 = STATE_VARIABLE_Globals_1354_1354;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 368, (MR_Integer) 369, Var_359, STATE_VARIABLE_Globals_1362_1362, &STATE_VARIABLE_Globals_1367_1367);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 357, (MR_Integer) 358, Var_359, STATE_VARIABLE_Globals_1367_1367, &STATE_VARIABLE_Globals_1372_1372);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 360, (MR_Integer) 333, Var_359, STATE_VARIABLE_Globals_1372_1372, &STATE_VARIABLE_Globals_1377_1377);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 360, (MR_Integer) 359, Var_359, STATE_VARIABLE_Globals_1377_1377, &STATE_VARIABLE_Globals_1382_1382);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 370, (MR_Integer) 376, Var_359, STATE_VARIABLE_Globals_1382_1382, &STATE_VARIABLE_Globals_1387_1387);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 370, (MR_Integer) 355, Var_359, STATE_VARIABLE_Globals_1387_1387, &STATE_VARIABLE_Globals_1392_1392);
    succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_mktag((MR_Integer) 3)));
    if (succeeded)
    {
      Var_1394 = ((MR_Word) (MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0)));
      succeeded = ((MR_tag((MR_Word) Var_1394)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_1395 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_1394, (MR_Integer) 0)));
        succeeded = (Var_1395 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 359, Var_516, STATE_VARIABLE_Globals_1392_1392, &STATE_VARIABLE_Globals_1398_1398);
    }
    else
      STATE_VARIABLE_Globals_1398_1398 = STATE_VARIABLE_Globals_1392_1392;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 403, (MR_Integer) 404, Var_359, STATE_VARIABLE_Globals_1398_1398, &STATE_VARIABLE_Globals_1403_1403);
    succeeded = (OpMode_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 28, Var_516, STATE_VARIABLE_Globals_1403_1403, &STATE_VARIABLE_Globals_1407_1407);
    }
    else
      STATE_VARIABLE_Globals_1407_1407 = STATE_VARIABLE_Globals_1403_1403;
    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_1407_1407, (MR_Integer) 670, &TargetArch_143);
    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_1407_1407, (MR_Integer) 565, &MercuryLinkage_144);
    succeeded = (strcmp(MercuryLinkage_144, (MR_String) "static") == 0);
    if (succeeded)
    {
      DefaultRuntimeLibraryDirs_145 = (MR_Integer) 0;
      libs__globals__set_option_4_p_0((MR_Integer) 549, Var_516, STATE_VARIABLE_Globals_1407_1407, &STATE_VARIABLE_Globals_1413_1413);
    }
    else
    {
      libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1407_1407, (MR_Integer) 549, &DefaultRuntimeLibraryDirs_145);
      STATE_VARIABLE_Globals_1413_1413 = STATE_VARIABLE_Globals_1407_1407;
    }
    libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_1413_1413, (MR_Integer) 558, &MaybeStdLibDir_146);
    if ((MaybeStdLibDir_146 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_Globals_1428_1428 = STATE_VARIABLE_Globals_1413_1413;
    else
    {
      MR_String StdLibDir_147 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeStdLibDir_146, (MR_Integer) 0)));
      MR_Word OptionTable2_148;
      MR_Word OptionTable_149;
      MR_Word LinkLibDirs0_150;
      MR_Word STATE_VARIABLE_Globals_1417_1417;
      MR_Word Var_1420;
      MR_Word STATE_VARIABLE_Globals_1421_1421;
      MR_Word Var_1422;
      MR_String Var_1423;

      libs__globals__get_options_2_p_0(STATE_VARIABLE_Globals_1413_1413, &OptionTable2_148);
      libs__options__option_table_add_mercury_library_directory_3_p_0(StdLibDir_147, OptionTable2_148, &OptionTable_149);
      libs__globals__set_options_3_p_0(OptionTable_149, STATE_VARIABLE_Globals_1413_1413, &STATE_VARIABLE_Globals_1417_1417);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1417_1417, (MR_Integer) 547, &LinkLibDirs0_150);
      Var_1423 = mercury__dir__f_slash_2_f_0(StdLibDir_147, (MR_String) "lib");
      {
        Var_1422 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_1422, 0) = ((MR_Box) (Var_1423));
        MR_hl_field(MR_mktag(1), Var_1422, 1) = ((MR_Box) (LinkLibDirs0_150));
      }
      {
        Var_1420 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1420, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), Var_1420, 1) = ((MR_Box) (Var_1422));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 547, Var_1420, STATE_VARIABLE_Globals_1417_1417, &STATE_VARIABLE_Globals_1421_1421);
      switch (DefaultRuntimeLibraryDirs_145) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Globals_1428_1428 = STATE_VARIABLE_Globals_1421_1421;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rpath0_151;
            MR_Word Var_1427;
            MR_Word Var_1429;
            MR_String Var_1430;

            libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1421_1421, (MR_Integer) 548, &Rpath0_151);
            Var_1430 = mercury__dir__f_slash_2_f_0(StdLibDir_147, (MR_String) "lib");
            {
              Var_1429 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_1429, 0) = ((MR_Box) (Var_1430));
              MR_hl_field(MR_mktag(1), Var_1429, 1) = ((MR_Box) (Rpath0_151));
            }
            {
              Var_1427 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_1427, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), Var_1427, 1) = ((MR_Box) (Var_1429));
            }
            libs__globals__set_option_4_p_0((MR_Integer) 548, Var_1427, STATE_VARIABLE_Globals_1421_1421, &STATE_VARIABLE_Globals_1428_1428);
          }
          break;
      }
    }
    libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_1428_1428, (MR_Integer) 638, &MaybeConfDir_152);
    if ((MaybeConfDir_152 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_Globals_1436_1436 = STATE_VARIABLE_Globals_1428_1428;
    else
    {
      MR_String ConfDir_153 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeConfDir_152, (MR_Integer) 0)));
      MR_Word CIncludeDirs0_154;
      MR_Word Var_1435;
      MR_Word Var_1437;
      MR_String Var_1438;

      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1428_1428, (MR_Integer) 500, &CIncludeDirs0_154);
      Var_1438 = mercury__dir__f_slash_2_f_0(ConfDir_153, (MR_String) "conf");
      {
        Var_1437 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_1437, 0) = ((MR_Box) (Var_1438));
        MR_hl_field(MR_mktag(1), Var_1437, 1) = ((MR_Box) (CIncludeDirs0_154));
      }
      {
        Var_1435 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1435, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), Var_1435, 1) = ((MR_Box) (Var_1437));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 500, Var_1435, STATE_VARIABLE_Globals_1428_1428, &STATE_VARIABLE_Globals_1436_1436);
    }
    libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_1436_1436, (MR_Integer) 649, &ConfigFile_155);
    succeeded = ((MR_tag((MR_Word) ConfigFile_155)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_1441 = ((MR_String) (MR_hl_field(MR_mktag(1), ConfigFile_155, (MR_Integer) 0)));
      succeeded = (strcmp(Var_1441, (MR_String) "") == 0);
    }
    if (succeeded)
      if ((MaybeConfDir_152 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        libs__globals__set_option_4_p_0((MR_Integer) 649, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[236]), STATE_VARIABLE_Globals_1436_1436, &STATE_VARIABLE_Globals_1448_1448);
      }
      else
      {
        MR_String ConfDir1_156 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeConfDir_152, (MR_Integer) 0)));
        MR_Word Var_1447;
        MR_Word Var_1449;
        MR_String Var_1450;
        MR_String Var_1451;

        Var_1451 = mercury__dir__f_slash_2_f_0(ConfDir1_156, (MR_String) "conf");
        Var_1450 = mercury__dir__f_slash_2_f_0(Var_1451, (MR_String) "Mercury.config");
        {
          Var_1449 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_1449, 0) = ((MR_Box) (Var_1450));
        }
        {
          Var_1447 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_1447, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), Var_1447, 1) = ((MR_Box) (Var_1449));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 649, Var_1447, STATE_VARIABLE_Globals_1436_1436, &STATE_VARIABLE_Globals_1448_1448);
      }
    else
      STATE_VARIABLE_Globals_1448_1448 = STATE_VARIABLE_Globals_1436_1436;
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1448_1448, (MR_Integer) 552, &MercuryLibDirs_157);
    libs__compute_grade__grade_directory_component_2_p_0(STATE_VARIABLE_Globals_1448_1448, &GradeString_158);
    if ((MercuryLibDirs_157 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_Globals_1505_1505 = STATE_VARIABLE_Globals_1448_1448;
    else
    {
      MR_Word TypeCtorInfo_1675_1675 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      MR_Word ExtraLinkLibDirs_161;
      MR_Word LinkLibDirs1_163;
      MR_Word ExtraIncludeDirs_165;
      MR_Word CIncludeDirs_166;
      MR_Word ErlangIncludeDirs_167;
      MR_Word ExtraIntermodDirs_168;
      MR_Word IntermodDirs0_169;
      MR_Word ExtraInitDirs_170;
      MR_Word InitDirs1_171;
      MR_Word Var_1455;
      MR_Word Var_1462;
      MR_Word STATE_VARIABLE_Globals_1463_1463;
      MR_Word Var_1464;
      MR_Word STATE_VARIABLE_Globals_1468_1468;
      MR_Word Var_1470;
      MR_Word Var_1479;
      MR_Word STATE_VARIABLE_Globals_1480_1480;
      MR_Word Var_1481;
      MR_Word Var_1484;
      MR_Word STATE_VARIABLE_Globals_1485_1485;
      MR_Word Var_1486;
      MR_Word Var_1487;
      MR_Word Var_1494;
      MR_Word STATE_VARIABLE_Globals_1495_1495;
      MR_Word Var_1496;
      MR_Word Var_1497;
      MR_Word Var_1504;
      MR_Word Var_1506;

      {
        Var_1455 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_1455, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_1455, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_1));
        MR_hl_field(MR_mktag(0), Var_1455, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_1455, 3) = ((MR_Box) (GradeString_158));
      }
      ExtraLinkLibDirs_161 = mercury__list__map_2_f_0(TypeCtorInfo_1675_1675, TypeCtorInfo_1675_1675, Var_1455, MercuryLibDirs_157);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1448_1448, (MR_Integer) 547, &LinkLibDirs1_163);
      Var_1464 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_1675_1675, LinkLibDirs1_163, ExtraLinkLibDirs_161);
      {
        Var_1462 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1462, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), Var_1462, 1) = ((MR_Box) (Var_1464));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 547, Var_1462, STATE_VARIABLE_Globals_1448_1448, &STATE_VARIABLE_Globals_1463_1463);
      switch (DefaultRuntimeLibraryDirs_145) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Globals_1468_1468 = STATE_VARIABLE_Globals_1463_1463;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rpath_164;
            MR_Word Var_1467;
            MR_Word Var_1469;

            libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1463_1463, (MR_Integer) 548, &Rpath_164);
            Var_1469 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_1675_1675, Rpath_164, ExtraLinkLibDirs_161);
            {
              Var_1467 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_1467, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), Var_1467, 1) = ((MR_Box) (Var_1469));
            }
            libs__globals__set_option_4_p_0((MR_Integer) 548, Var_1467, STATE_VARIABLE_Globals_1463_1463, &STATE_VARIABLE_Globals_1468_1468);
          }
          break;
      }
      {
        Var_1470 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_1470, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_1470, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_2));
        MR_hl_field(MR_mktag(0), Var_1470, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_1470, 3) = ((MR_Box) (GradeString_158));
      }
      ExtraIncludeDirs_165 = mercury__list__map_2_f_0(TypeCtorInfo_1675_1675, TypeCtorInfo_1675_1675, Var_1470, MercuryLibDirs_157);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1468_1468, (MR_Integer) 500, &CIncludeDirs_166);
      Var_1481 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_1675_1675, ExtraIncludeDirs_165, CIncludeDirs_166);
      {
        Var_1479 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1479, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), Var_1479, 1) = ((MR_Box) (Var_1481));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 500, Var_1479, STATE_VARIABLE_Globals_1468_1468, &STATE_VARIABLE_Globals_1480_1480);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1480_1480, (MR_Integer) 538, &ErlangIncludeDirs_167);
      Var_1486 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_1675_1675, ExtraIncludeDirs_165, ErlangIncludeDirs_167);
      {
        Var_1484 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1484, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), Var_1484, 1) = ((MR_Box) (Var_1486));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 538, Var_1484, STATE_VARIABLE_Globals_1480_1480, &STATE_VARIABLE_Globals_1485_1485);
      {
        Var_1487 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_1487, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_1487, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_3));
        MR_hl_field(MR_mktag(0), Var_1487, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_1487, 3) = ((MR_Box) (GradeString_158));
      }
      ExtraIntermodDirs_168 = mercury__list__map_2_f_0(TypeCtorInfo_1675_1675, TypeCtorInfo_1675_1675, Var_1487, MercuryLibDirs_157);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1485_1485, (MR_Integer) 654, &IntermodDirs0_169);
      Var_1496 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_1675_1675, ExtraIntermodDirs_168, IntermodDirs0_169);
      {
        Var_1494 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1494, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), Var_1494, 1) = ((MR_Box) (Var_1496));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 654, Var_1494, STATE_VARIABLE_Globals_1485_1485, &STATE_VARIABLE_Globals_1495_1495);
      {
        Var_1497 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_1497, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_1497, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_4));
        MR_hl_field(MR_mktag(0), Var_1497, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_1497, 3) = ((MR_Box) (GradeString_158));
      }
      ExtraInitDirs_170 = mercury__list__map_2_f_0(TypeCtorInfo_1675_1675, TypeCtorInfo_1675_1675, Var_1497, MercuryLibDirs_157);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1495_1495, (MR_Integer) 560, &InitDirs1_171);
      Var_1506 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_1675_1675, InitDirs1_171, ExtraInitDirs_170);
      {
        Var_1504 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1504, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), Var_1504, 1) = ((MR_Box) (Var_1506));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 560, Var_1504, STATE_VARIABLE_Globals_1495_1495, &STATE_VARIABLE_Globals_1505_1505);
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1505_1505, (MR_Integer) 655, &UseSearchDirs_172);
    switch (UseSearchDirs_172) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_1512_1512 = STATE_VARIABLE_Globals_1505_1505;
        break;
      case (MR_Integer) 1:
        {
          MR_Word IntermodDirs1_173;
          MR_Word SearchDirs_174;
          MR_Word Var_1511;
          MR_Word Var_1513;

          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1505_1505, (MR_Integer) 654, &IntermodDirs1_173);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1505_1505, (MR_Integer) 653, &SearchDirs_174);
          Var_1513 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, IntermodDirs1_173, SearchDirs_174);
          {
            Var_1511 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_1511, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), Var_1511, 1) = ((MR_Box) (Var_1513));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 654, Var_1511, STATE_VARIABLE_Globals_1505_1505, &STATE_VARIABLE_Globals_1512_1512);
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1512_1512, (MR_Integer) 652, &UseGradeSubdirs_175);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1512_1512, (MR_Integer) 554, &SearchLibFilesDirs_176);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1512_1512, (MR_Integer) 654, &IntermodDirs2_177);
    {
      ToGradeSubdir_178 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ToGradeSubdir_178, 0) = ((MR_Box) (&libs__handle_options_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), ToGradeSubdir_178, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_5));
      MR_hl_field(MR_mktag(0), ToGradeSubdir_178, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ToGradeSubdir_178, 3) = ((MR_Box) (TargetArch_143));
      MR_hl_field(MR_mktag(0), ToGradeSubdir_178, 4) = ((MR_Box) (GradeString_158));
    }
    switch (UseGradeSubdirs_175) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeCtorInfo_1684_1684;
          MR_Word IntermodDirs3_182;
          MR_Word LinkLibDirs2_183;
          MR_Word InitDirs2_184;
          MR_Word Var_1532;

          IntermodDirs3_182 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, SearchLibFilesDirs_176, IntermodDirs2_177);
          {
            Var_1532 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_1532, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), Var_1532, 1) = ((MR_Box) (IntermodDirs3_182));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 654, Var_1532, STATE_VARIABLE_Globals_1512_1512, &STATE_VARIABLE_Globals_1533_1533);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1533_1533, (MR_Integer) 547, &LinkLibDirs2_183);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1533_1533, (MR_Integer) 560, &InitDirs2_184);
          TypeCtorInfo_1684_1684 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          LinkLibDirs_187 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_1684_1684, SearchLibFilesDirs_176, LinkLibDirs2_183);
          InitDirs_190 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_1684_1684, SearchLibFilesDirs_176, InitDirs2_184);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_1677_1677;
          MR_Word TypeCtorInfo_1683_1683;
          MR_String GradeSubdir_180;
          MR_Word SearchLibFilesGradeSubdirs_181;
          MR_Word ToGradeLibDir_185;
          MR_Word SearchGradeLibDirs_186;
          MR_Word ToGradeInitDir_188;
          MR_Word SearchGradeInitDirs_189;
          MR_String Var_1522;
          MR_Word Var_1524;
          MR_Word Var_1526;
          MR_Word Var_1527;
          MR_Word Var_1528;
          MR_Word Var_1529;
          MR_String Var_1530;
          MR_Word IntermodDirs3_12688;
          MR_Word LinkLibDirs2_12689;
          MR_Word InitDirs2_12690;
          MR_Word Var_12691;

          Var_1522 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", GradeString_158);
          GradeSubdir_180 = mercury__dir__f_slash_2_f_0(Var_1522, TargetArch_143);
          TypeCtorInfo_1677_1677 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          SearchLibFilesGradeSubdirs_181 = mercury__list__map_2_f_0(TypeCtorInfo_1677_1677, TypeCtorInfo_1677_1677, ToGradeSubdir_178, SearchLibFilesDirs_176);
          {
            Var_1524 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_1524, 0) = ((MR_Box) (GradeSubdir_180));
            MR_hl_field(MR_mktag(1), Var_1524, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          Var_1530 = mercury__dir__this_directory_0_f_0();
          {
            Var_1529 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_1529, 0) = ((MR_Box) (&libs__handle_options_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), Var_1529, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_6));
            MR_hl_field(MR_mktag(0), Var_1529, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_1529, 3) = ((MR_Box) (Var_1530));
          }
          {
            Var_1528 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_1528, 0) = ((MR_Box) (&libs__handle_options_scalar_common_6[1]));
            MR_hl_field(MR_mktag(0), Var_1528, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_7));
            MR_hl_field(MR_mktag(0), Var_1528, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_1528, 3) = ((MR_Box) (Var_1529));
          }
          Var_1527 = mercury__list__filter_2_f_0(TypeCtorInfo_1677_1677, Var_1528, IntermodDirs2_177);
          Var_1526 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_1677_1677, SearchLibFilesGradeSubdirs_181, Var_1527);
          IntermodDirs3_12688 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_1677_1677, Var_1524, Var_1526);
          {
            Var_12691 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_12691, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), Var_12691, 1) = ((MR_Box) (IntermodDirs3_12688));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 654, Var_12691, STATE_VARIABLE_Globals_1512_1512, &STATE_VARIABLE_Globals_1533_1533);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1533_1533, (MR_Integer) 547, &LinkLibDirs2_12689);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1533_1533, (MR_Integer) 560, &InitDirs2_12690);
          {
            ToGradeLibDir_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ToGradeLibDir_185, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ToGradeLibDir_185, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_8));
            MR_hl_field(MR_mktag(0), ToGradeLibDir_185, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ToGradeLibDir_185, 3) = ((MR_Box) (ToGradeSubdir_178));
          }
          TypeCtorInfo_1683_1683 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          SearchGradeLibDirs_186 = mercury__list__map_2_f_0(TypeCtorInfo_1683_1683, TypeCtorInfo_1683_1683, ToGradeLibDir_185, SearchLibFilesDirs_176);
          LinkLibDirs_187 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_1683_1683, SearchGradeLibDirs_186, LinkLibDirs2_12689);
          {
            ToGradeInitDir_188 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ToGradeInitDir_188, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ToGradeInitDir_188, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_9));
            MR_hl_field(MR_mktag(0), ToGradeInitDir_188, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ToGradeInitDir_188, 3) = ((MR_Box) (ToGradeSubdir_178));
          }
          SearchGradeInitDirs_189 = mercury__list__map_2_f_0(TypeCtorInfo_1683_1683, TypeCtorInfo_1683_1683, ToGradeInitDir_188, SearchLibFilesDirs_176);
          InitDirs_190 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_1683_1683, SearchGradeInitDirs_189, InitDirs2_12690);
        }
        break;
    }
    {
      Var_1549 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_1549, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), Var_1549, 1) = ((MR_Box) (LinkLibDirs_187));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 547, Var_1549, STATE_VARIABLE_Globals_1533_1533, &STATE_VARIABLE_Globals_1550_1550);
    {
      Var_1552 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_1552, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), Var_1552, 1) = ((MR_Box) (InitDirs_190));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 560, Var_1552, STATE_VARIABLE_Globals_1550_1550, &STATE_VARIABLE_Globals_1553_1553);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1553_1553, (MR_Integer) 651, &UseSubdirs_191);
    switch (UseGradeSubdirs_175) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          succeeded = (UseSubdirs_191 == (MR_Integer) 1);
          if (succeeded)
          {
            ToMihsSubdir_192 = (MR_Word) &libs__handle_options_scalar_common_7[0];
            ToHrlsSubdir_193 = (MR_Word) &libs__handle_options_scalar_common_7[1];
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            ToMihsSubdir_192 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ToMihsSubdir_192, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ToMihsSubdir_192, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_12));
            MR_hl_field(MR_mktag(0), ToMihsSubdir_192, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ToMihsSubdir_192, 3) = ((MR_Box) (ToGradeSubdir_178));
          }
          {
            ToHrlsSubdir_193 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ToHrlsSubdir_193, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ToHrlsSubdir_193, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_13));
            MR_hl_field(MR_mktag(0), ToHrlsSubdir_193, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ToHrlsSubdir_193, 3) = ((MR_Box) (ToGradeSubdir_178));
          }
          succeeded = MR_TRUE;
        }
        break;
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_1685_1685;
      MR_Word CIncludeDirs1_194;
      MR_String MihsSubdir_195;
      MR_Word SearchLibMihsSubdirs_196;
      MR_Word SubdirCIncludeDirs_197;
      MR_Word ErlangIncludeDirs1_198;
      MR_String HrlsSubdir_199;
      MR_Word SubdirErlangIncludeDirs_200;
      MR_String Var_1578;
      MR_String Var_1579;
      MR_Word Var_1580;
      MR_Word Var_1581;
      MR_Word Var_1583;
      MR_Word STATE_VARIABLE_Globals_1584_1584;
      MR_String Var_1586;
      MR_Word Var_1588;
      MR_Box MR_CALL (* func_11)(MR_Box, MR_Box);
      MR_Box conv12_MihsSubdir_195;
      MR_Box MR_CALL (* func_13)(MR_Box, MR_Box);
      MR_Box conv14_HrlsSubdir_199;

      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1553_1553, (MR_Integer) 500, &CIncludeDirs1_194);
      Var_1578 = mercury__dir__this_directory_0_f_0();
      func_11 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), ToMihsSubdir_192, (MR_Integer) 1)));
      conv12_MihsSubdir_195 = func_11(((MR_Box) ToMihsSubdir_192), ((MR_Box) (Var_1578)));
      MihsSubdir_195 = ((MR_String) conv12_MihsSubdir_195);
      TypeCtorInfo_1685_1685 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      SearchLibMihsSubdirs_196 = mercury__list__map_2_f_0(TypeCtorInfo_1685_1685, TypeCtorInfo_1685_1685, ToMihsSubdir_192, SearchLibFilesDirs_176);
      Var_1579 = mercury__dir__this_directory_0_f_0();
      Var_1581 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_1685_1685, SearchLibMihsSubdirs_196, CIncludeDirs1_194);
      {
        Var_1580 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_1580, 0) = ((MR_Box) (MihsSubdir_195));
        MR_hl_field(MR_mktag(1), Var_1580, 1) = ((MR_Box) (Var_1581));
      }
      {
        SubdirCIncludeDirs_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SubdirCIncludeDirs_197, 0) = ((MR_Box) (Var_1579));
        MR_hl_field(MR_mktag(1), SubdirCIncludeDirs_197, 1) = ((MR_Box) (Var_1580));
      }
      {
        Var_1583 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1583, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), Var_1583, 1) = ((MR_Box) (SubdirCIncludeDirs_197));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 500, Var_1583, STATE_VARIABLE_Globals_1553_1553, &STATE_VARIABLE_Globals_1584_1584);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1584_1584, (MR_Integer) 538, &ErlangIncludeDirs1_198);
      Var_1586 = mercury__dir__this_directory_0_f_0();
      func_13 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), ToHrlsSubdir_193, (MR_Integer) 1)));
      conv14_HrlsSubdir_199 = func_13(((MR_Box) ToHrlsSubdir_193), ((MR_Box) (Var_1586)));
      HrlsSubdir_199 = ((MR_String) conv14_HrlsSubdir_199);
      {
        SubdirErlangIncludeDirs_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SubdirErlangIncludeDirs_200, 0) = ((MR_Box) (HrlsSubdir_199));
        MR_hl_field(MR_mktag(1), SubdirErlangIncludeDirs_200, 1) = ((MR_Box) (ErlangIncludeDirs1_198));
      }
      {
        Var_1588 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1588, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), Var_1588, 1) = ((MR_Box) (SubdirErlangIncludeDirs_200));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 538, Var_1588, STATE_VARIABLE_Globals_1584_1584, &STATE_VARIABLE_Globals_1589_1589);
    }
    else
      STATE_VARIABLE_Globals_1589_1589 = STATE_VARIABLE_Globals_1553_1553;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 335, (MR_Integer) 14, Var_516, STATE_VARIABLE_Globals_1589_1589, &STATE_VARIABLE_Globals_1593_1593);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1593_1593, (MR_Integer) 31, &WarnNonTailRecSelf_201);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1593_1593, (MR_Integer) 32, &WarnNonTailRecMutual_202);
    succeeded = (WarnNonTailRecSelf_201 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (WarnNonTailRecMutual_202 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word PessimizeTailCalls_203;
      MR_Word OptimizeTailCalls_204;
      MR_Word STATE_VARIABLE_Specs_1603_1603;
      MR_Word STATE_VARIABLE_Specs_1608_1608;
      MR_Word Var_1611;
      MR_Word Var_1612;

      libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1593_1593, (MR_Integer) 477, &PessimizeTailCalls_203);
      libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1593_1593, (MR_Integer) 466, &OptimizeTailCalls_204);
      switch (PessimizeTailCalls_203) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Specs_1603_1603 = STATE_VARIABLE_Specs_1295_1295;
          break;
        case (MR_Integer) 1:
          {
            libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[238]), STATE_VARIABLE_Specs_1295_1295, &STATE_VARIABLE_Specs_1603_1603);
          }
          break;
      }
      switch (OptimizeTailCalls_204) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[240]), STATE_VARIABLE_Specs_1603_1603, &STATE_VARIABLE_Specs_1608_1608);
          }
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_Specs_1608_1608 = STATE_VARIABLE_Specs_1603_1603;
          break;
      }
      succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_mktag((MR_Integer) 3)));
      if (succeeded)
      {
        Var_1611 = ((MR_Word) (MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0)));
        succeeded = ((MR_tag((MR_Word) Var_1611)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_1612 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_1611, (MR_Integer) 0)));
          succeeded = (Var_1612 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
        }
      }
      if (succeeded)
      {
        libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[242]), STATE_VARIABLE_Specs_1608_1608, &STATE_VARIABLE_Specs_1617_1617);
      }
      else
        STATE_VARIABLE_Specs_1617_1617 = STATE_VARIABLE_Specs_1608_1608;
    }
    else
      STATE_VARIABLE_Specs_1617_1617 = STATE_VARIABLE_Specs_1295_1295;
    switch (Target_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          BackendForeignLanguages_208 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[243]);
          STATE_VARIABLE_Globals_1628_1628 = STATE_VARIABLE_Globals_1593_1593;
        }
        break;
      case (MR_Integer) 1:
        {
          BackendForeignLanguages_208 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[244]);
          STATE_VARIABLE_Globals_1628_1628 = STATE_VARIABLE_Globals_1593_1593;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word STATE_VARIABLE_Globals_1624_1624;

          BackendForeignLanguages_208 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[18]);
          libs__globals__set_option_4_p_0((MR_Integer) 373, Var_516, STATE_VARIABLE_Globals_1593_1593, &STATE_VARIABLE_Globals_1624_1624);
          libs__globals__set_option_4_p_0((MR_Integer) 304, Var_516, STATE_VARIABLE_Globals_1624_1624, &STATE_VARIABLE_Globals_1628_1628);
        }
        break;
      case (MR_Integer) 2:
        {
          BackendForeignLanguages_208 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[245]);
          STATE_VARIABLE_Globals_1628_1628 = STATE_VARIABLE_Globals_1593_1593;
        }
        break;
    }
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1628_1628, (MR_Integer) 272, &CurrentBackendForeignLanguage_209);
    if ((CurrentBackendForeignLanguage_209 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word Var_1638;

      {
        Var_1638 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1638, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), Var_1638, 1) = ((MR_Box) (BackendForeignLanguages_208));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 272, Var_1638, STATE_VARIABLE_Globals_1628_1628, &STATE_VARIABLE_Globals_1639_1639);
    }
    else
      STATE_VARIABLE_Globals_1639_1639 = STATE_VARIABLE_Globals_1628_1628;
    libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_1639_1639, (MR_Integer) 322, &CompareSpec_212);
    succeeded = (CompareSpec_212 < (MR_Integer) 0);
    if (succeeded)
      switch (HighLevelCode_107) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            libs__globals__set_option_4_p_0((MR_Integer) 322, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[7]), STATE_VARIABLE_Globals_1639_1639, &STATE_VARIABLE_Globals_1648_1648);
          }
          break;
        case (MR_Integer) 1:
          {
            libs__globals__set_option_4_p_0((MR_Integer) 322, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[8]), STATE_VARIABLE_Globals_1639_1639, &STATE_VARIABLE_Globals_1648_1648);
          }
          break;
      }
    else
      STATE_VARIABLE_Globals_1648_1648 = STATE_VARIABLE_Globals_1639_1639;
    succeeded = (Target_27 == (MR_Integer) 0);
    if (succeeded)
    {
      switch (TagsMethod_59) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 2:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
      }
      if (succeeded)
      {
        Var_1650 = (MR_Integer) 2;
        succeeded = (NumPtagBits_57 >= Var_1650);
      }
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 279, Var_359, STATE_VARIABLE_Globals_1648_1648, &STATE_VARIABLE_Globals_1653_1653);
    }
    else
    {
      libs__globals__set_option_4_p_0((MR_Integer) 279, Var_516, STATE_VARIABLE_Globals_1648_1648, &STATE_VARIABLE_Globals_1653_1653);
    }
    switch (HighLevelCode_107) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__handle_options__postprocess_options_lowlevel_2_p_0(STATE_VARIABLE_Globals_1653_1653, &STATE_VARIABLE_Globals_1659_1659);
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_1659_1659 = STATE_VARIABLE_Globals_1653_1653;
        break;
    }
    libs__compute_grade__postprocess_options_libgrades_4_p_0(STATE_VARIABLE_Globals_1659_1659, STATE_VARIABLE_Globals_215, STATE_VARIABLE_Specs_1617_1617, STATE_VARIABLE_Specs_214);
    libs__globals__globals_init_mutables_3_p_0(*STATE_VARIABLE_Globals_215);
  }
}

static void MR_CALL 
libs__handle_options__disable_smart_recompilation_5_p_0(
  MR_String OptionDescr_6,
  MR_Word STATE_VARIABLE_Globals_0_11,
  MR_Word * STATE_VARIABLE_Globals_12)
{
  {
    MR_Word WarnSmart_9;

    libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
    libs__globals__set_option_4_p_0((MR_Integer) 128, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]), STATE_VARIABLE_Globals_0_11, STATE_VARIABLE_Globals_12);
    libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_12, (MR_Integer) 29, &WarnSmart_9);
    switch (WarnSmart_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Halt_10;

          mercury__io__write_string_3_p_0((MR_String) "Warning: smart recompilation does not yet work with ");
          mercury__io__write_string_3_p_0(OptionDescr_6);
          mercury__io__write_string_3_p_0((MR_String) ".\n");
          libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_12, (MR_Integer) 3, &Halt_10);
          switch (Halt_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
libs__handle_options__option_neg_implies_5_p_0(
  MR_Word SourceOption_6,
  MR_Word ImpliedOption_7,
  MR_Word ImpliedOptionValue_8,
  MR_Word STATE_VARIABLE_Globals_0_11,
  MR_Word * STATE_VARIABLE_Globals_12)
{
  {
    MR_Word SourceOptionValue_10;

    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_11, SourceOption_6, &SourceOptionValue_10);
    switch (SourceOptionValue_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__globals__set_option_4_p_0(ImpliedOption_7, ImpliedOptionValue_8, STATE_VARIABLE_Globals_0_11, STATE_VARIABLE_Globals_12);
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Globals_12 = STATE_VARIABLE_Globals_0_11;
        break;
    }
  }
}

static void MR_CALL 
libs__handle_options__option_implies_5_p_0(
  MR_Word SourceOption_6,
  MR_Word ImpliedOption_7,
  MR_Word ImpliedOptionValue_8,
  MR_Word STATE_VARIABLE_Globals_0_11,
  MR_Word * STATE_VARIABLE_Globals_12)
{
  {
    MR_Word SourceOptionValue_10;

    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_11, SourceOption_6, &SourceOptionValue_10);
    switch (SourceOptionValue_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Globals_12 = STATE_VARIABLE_Globals_0_11;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0(ImpliedOption_7, ImpliedOptionValue_8, STATE_VARIABLE_Globals_0_11, STATE_VARIABLE_Globals_12);
        break;
    }
  }
}

static void MR_CALL 
libs__handle_options__postprocess_options_lowlevel_2_p_0(
  MR_Word STATE_VARIABLE_Globals_0_14,
  MR_Word * STATE_VARIABLE_Globals_15)
{
  {
    MR_bool succeeded;
    MR_Word OptFrames_4;
    MR_Word OptLocalVars_5;
    MR_Integer OptRepeat_6;
    MR_Word UnboxedFloat_7;
    MR_Word StaticGroundFloats_8;
    MR_Word UnboxedInt64s_9;
    MR_Word StaticGroundInt64s_10;
    MR_Word NonLocalGotos_11;
    MR_Word AsmLabels_12;
    MR_Word StaticCodeAddrs_13;
    MR_Word Var_18 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
    MR_Word STATE_VARIABLE_Globals_19_19;
    MR_Word STATE_VARIABLE_Globals_24_24;
    MR_Word STATE_VARIABLE_Globals_29_29;
    MR_Word STATE_VARIABLE_Globals_34_34;
    MR_Word STATE_VARIABLE_Globals_42_42;
    MR_Word Var_46;
    MR_Word STATE_VARIABLE_Globals_47_47;
    MR_Word Var_50;
    MR_Word STATE_VARIABLE_Globals_51_51;
    MR_Word Var_55;
    MR_Word SourceOptionValue_63;
    MR_Word SourceOptionValue_71;
    MR_Word SourceOptionValue_79;
    MR_Word SourceOptionValue_87;
    MR_Integer Var_39;

    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_14, (MR_Integer) 380, &SourceOptionValue_63);
    switch (SourceOptionValue_63) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_19_19 = STATE_VARIABLE_Globals_0_14;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 479, Var_18, STATE_VARIABLE_Globals_0_14, &STATE_VARIABLE_Globals_19_19);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_19_19, (MR_Integer) 485, &SourceOptionValue_71);
    switch (SourceOptionValue_71) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_24_24 = STATE_VARIABLE_Globals_19_19;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 482, Var_18, STATE_VARIABLE_Globals_19_19, &STATE_VARIABLE_Globals_24_24);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_24_24, (MR_Integer) 485, &SourceOptionValue_79);
    switch (SourceOptionValue_79) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_29_29 = STATE_VARIABLE_Globals_24_24;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 475, Var_18, STATE_VARIABLE_Globals_24_24, &STATE_VARIABLE_Globals_29_29);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_29_29, (MR_Integer) 484, &SourceOptionValue_87);
    switch (SourceOptionValue_87) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_34_34 = STATE_VARIABLE_Globals_29_29;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 308, Var_18, STATE_VARIABLE_Globals_29_29, &STATE_VARIABLE_Globals_34_34);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_34_34, (MR_Integer) 485, &OptFrames_4);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_34_34, (MR_Integer) 479, &OptLocalVars_5);
    libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_34_34, (MR_Integer) 488, &OptRepeat_6);
    succeeded = (OptFrames_4 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (OptLocalVars_5 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_39 = (MR_Integer) 1;
      succeeded = (OptRepeat_6 < Var_39);
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 488, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[1]), STATE_VARIABLE_Globals_34_34, &STATE_VARIABLE_Globals_42_42);
    }
    else
      STATE_VARIABLE_Globals_42_42 = STATE_VARIABLE_Globals_34_34;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_42_42, (MR_Integer) 256, &UnboxedFloat_7);
    switch (UnboxedFloat_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        StaticGroundFloats_8 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        StaticGroundFloats_8 = (MR_Integer) 1;
        break;
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (StaticGroundFloats_8));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 459, Var_46, STATE_VARIABLE_Globals_42_42, &STATE_VARIABLE_Globals_47_47);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_47_47, (MR_Integer) 257, &UnboxedInt64s_9);
    switch (UnboxedInt64s_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        StaticGroundInt64s_10 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        StaticGroundInt64s_10 = (MR_Integer) 1;
        break;
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (StaticGroundInt64s_10));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 460, Var_50, STATE_VARIABLE_Globals_47_47, &STATE_VARIABLE_Globals_51_51);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_51_51, (MR_Integer) 262, &NonLocalGotos_11);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_51_51, (MR_Integer) 264, &AsmLabels_12);
    succeeded = (NonLocalGotos_11 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (AsmLabels_12 == (MR_Integer) 0);
    if (succeeded)
      StaticCodeAddrs_13 = (MR_Integer) 0;
    else
      StaticCodeAddrs_13 = (MR_Integer) 1;
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (StaticCodeAddrs_13));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 461, Var_55, STATE_VARIABLE_Globals_51_51, STATE_VARIABLE_Globals_15);
  }
}

static void MR_CALL 
libs__handle_options__check_option_values_22_p_0(
  MR_Word STATE_VARIABLE_OptionTable_0_118,
  MR_Word * STATE_VARIABLE_OptionTable_119,
  MR_Word * Target_24,
  MR_Word * GC_Method_25,
  MR_Word * TagsMethod_26,
  MR_Word * TermNorm_27,
  MR_Word * Term2Norm_28,
  MR_Word * TraceLevel_29,
  MR_Word * TraceSuppress_30,
  MR_Word * SSTraceLevel_31,
  MR_Word * MaybeThreadSafe_32,
  MR_Word * C_CompilerType_33,
  MR_Word * CSharp_CompilerType_34,
  MR_Word * ReuseStrategy_35,
  MR_Word * MaybeFeedbackInfo_36,
  MR_Word * HostEnvType_37,
  MR_Word * SystemEnvType_38,
  MR_Word * TargetEnvType_39,
  MR_Word * LimitErrorContextsMap_40,
  MR_Word * STATE_VARIABLE_Specs_120)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_849_849;
    MR_String TargetStr_43;
    MR_String GC_MethodStr_46;
    MR_String TagsMethodStr_49;
    MR_Integer FactTablePercentFull_52;
    MR_Integer IncompleteSwitchThreshold_54;
    MR_String TermNormStr_56;
    MR_String Term2NormStr_59;
    MR_Word ForceDisableTracing_62;
    MR_String SuppressStr_69;
    MR_Word ForceDisableSSDB_72;
    MR_String MaybeThreadSafeStr_77;
    MR_String DumpAlias_80;
    MR_String C_CompilerTypeStr_84;
    MR_String CSharp_CompilerTypeStr_87;
    MR_String ReuseConstraintStr_90;
    MR_Integer ReuseConstraintArgNum_91;
    MR_String FeedbackFile_94;
    MR_String HostEnvTypeStr_100;
    MR_String SystemEnvTypeStr_103;
    MR_String TargetEnvTypeStr_106;
    MR_Word LimitErrorContextsOptionStrs_110;
    MR_Word BadLimitErrorContextsOptions_111;
    MR_Word STATE_VARIABLE_Specs_123_123 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word STATE_VARIABLE_Specs_158_158;
    MR_Word STATE_VARIABLE_Specs_197_197;
    MR_Word STATE_VARIABLE_Specs_230_230;
    MR_Word STATE_VARIABLE_Specs_251_251;
    MR_Word STATE_VARIABLE_Specs_272_272;
    MR_Word STATE_VARIABLE_Specs_305_305;
    MR_Word STATE_VARIABLE_Specs_338_338;
    MR_Word STATE_VARIABLE_Specs_360_360;
    MR_Word STATE_VARIABLE_Specs_417_417;
    MR_Word STATE_VARIABLE_Specs_454_454;
    MR_Word STATE_VARIABLE_Specs_488_488;
    MR_Word STATE_VARIABLE_OptionTable_492_492;
    MR_Word STATE_VARIABLE_Specs_519_519;
    MR_String STATE_VARIABLE_DumpOptions_521_521;
    MR_String STATE_VARIABLE_DumpOptions_522_522;
    MR_String STATE_VARIABLE_DumpOptions_525_525;
    MR_String STATE_VARIABLE_DumpOptions_529_529;
    MR_String STATE_VARIABLE_DumpOptions_553_553;
    MR_Word Var_556;
    MR_Word STATE_VARIABLE_Specs_595_595;
    MR_Word STATE_VARIABLE_Specs_631_631;
    MR_Word STATE_VARIABLE_Specs_663_663;
    MR_Word STATE_VARIABLE_Specs_668_668;
    MR_Word STATE_VARIABLE_Specs_705_705;
    MR_Word STATE_VARIABLE_Specs_743_743;
    MR_Word STATE_VARIABLE_Specs_781_781;
    MR_Word STATE_VARIABLE_Specs_797_797;
    MR_Word TargetPrime_44;
    MR_Word GC_MethodPrime_47;
    MR_Word TagsMethodPrime_50;
    MR_Integer Var_233;
    MR_Integer Var_254;
    MR_Word TermNormPrime_57;
    MR_Word Term2NormPrime_60;
    MR_Word TraceSuppressPrime_70;
    MR_Word MaybeThreadSafePrime_78;
    MR_Char Var_524;
    MR_Char Var_528;
    MR_Char Var_552;
    MR_Word C_CompilerTypePrime_85;
    MR_Word CSharp_CompilerTypePrime_88;
    MR_Word ReuseStrategyPrime_92;
    MR_Word HostEnvTypePrime_101;
    MR_Word SystemEnvTypePrime_104;
    MR_Word TargetEnvTypePrime_107;

    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 193, &TargetStr_43);
    succeeded = libs__globals__convert_target_2_p_0(TargetStr_43, &TargetPrime_44);
    if (succeeded)
    {
      *Target_24 = TargetPrime_44;
      STATE_VARIABLE_Specs_158_158 = STATE_VARIABLE_Specs_123_123;
    }
    else
    {
      MR_Word TypeCtorInfo_839_839;
      MR_Word TargetSpec_45;
      MR_Word Var_125;
      MR_Word Var_128;
      MR_Word Var_129;
      MR_Word Var_140;
      MR_Word Var_141;

      *Target_24 = (MR_Integer) 0;
      TypeCtorInfo_839_839 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      {
        Var_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_129, 1) = ((MR_Box) (TargetStr_43));
      }
      {
        Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (Var_129));
        MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[17])));
      }
      {
        Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
        MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Var_128));
      }
      Var_141 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[21]));
      Var_140 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_839_839, Var_141, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
      TargetSpec_45 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_839_839, Var_125, Var_140);
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), TargetSpec_45, STATE_VARIABLE_Specs_123_123, &STATE_VARIABLE_Specs_158_158);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 230, &GC_MethodStr_46);
    succeeded = libs__globals__convert_gc_method_2_p_0(GC_MethodStr_46, &GC_MethodPrime_47);
    if (succeeded)
    {
      *GC_Method_25 = GC_MethodPrime_47;
      STATE_VARIABLE_Specs_197_197 = STATE_VARIABLE_Specs_158_158;
    }
    else
    {
      MR_Word TypeCtorInfo_840_840;
      MR_Word GCMethodSpec_48;
      MR_Word Var_160;
      MR_Word Var_163;
      MR_Word Var_164;
      MR_Word Var_175;
      MR_Word Var_176;

      *GC_Method_25 = (MR_Integer) 1;
      TypeCtorInfo_840_840 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      {
        Var_164 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_164, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_164, 1) = ((MR_Box) (GC_MethodStr_46));
      }
      {
        Var_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_163, 0) = ((MR_Box) (Var_164));
        MR_hl_field(MR_mktag(1), Var_163, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[24])));
      }
      {
        Var_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_160, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
        MR_hl_field(MR_mktag(1), Var_160, 1) = ((MR_Box) (Var_163));
      }
      Var_176 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[30]));
      Var_175 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_840_840, Var_176, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
      GCMethodSpec_48 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_840_840, Var_160, Var_175);
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), GCMethodSpec_48, STATE_VARIABLE_Specs_158_158, &STATE_VARIABLE_Specs_197_197);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 251, &TagsMethodStr_49);
    succeeded = libs__globals__convert_tags_method_2_p_0(TagsMethodStr_49, &TagsMethodPrime_50);
    if (succeeded)
    {
      *TagsMethod_26 = TagsMethodPrime_50;
      STATE_VARIABLE_Specs_230_230 = STATE_VARIABLE_Specs_197_197;
    }
    else
    {
      MR_Word TypeCtorInfo_841_841;
      MR_Word TagsMethodSpec_51;
      MR_Word Var_199;
      MR_Word Var_202;
      MR_Word Var_203;
      MR_Word Var_214;
      MR_Word Var_215;

      *TagsMethod_26 = (MR_Integer) 0;
      TypeCtorInfo_841_841 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      {
        Var_203 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_203, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_203, 1) = ((MR_Box) (TagsMethodStr_49));
      }
      {
        Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_202, 0) = ((MR_Box) (Var_203));
        MR_hl_field(MR_mktag(1), Var_202, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[33])));
      }
      {
        Var_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_199, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
        MR_hl_field(MR_mktag(1), Var_199, 1) = ((MR_Box) (Var_202));
      }
      Var_215 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[36]));
      Var_214 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_841_841, Var_215, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
      TagsMethodSpec_51 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_841_841, Var_199, Var_214);
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), TagsMethodSpec_51, STATE_VARIABLE_Specs_197_197, &STATE_VARIABLE_Specs_230_230);
    }
    libs__handle_options__raw_lookup_int_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 325, &FactTablePercentFull_52);
    succeeded = (FactTablePercentFull_52 >= (MR_Integer) 1);
    if (succeeded)
    {
      Var_233 = (MR_Integer) 100;
      succeeded = (FactTablePercentFull_52 <= Var_233);
    }
    if (succeeded)
      STATE_VARIABLE_Specs_251_251 = STATE_VARIABLE_Specs_230_230;
    else
    {
      MR_Word FactTablePercentFullSpec_53;
      MR_Word Var_236;
      MR_Word Var_237;

      {
        Var_237 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_237, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_237, 1) = ((MR_Box) (FactTablePercentFull_52));
      }
      {
        Var_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_236, 0) = ((MR_Box) (Var_237));
        MR_hl_field(MR_mktag(1), Var_236, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[41])));
      }
      {
        FactTablePercentFullSpec_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FactTablePercentFullSpec_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
        MR_hl_field(MR_mktag(1), FactTablePercentFullSpec_53, 1) = ((MR_Box) (Var_236));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), FactTablePercentFullSpec_53, STATE_VARIABLE_Specs_230_230, &STATE_VARIABLE_Specs_251_251);
    }
    libs__handle_options__raw_lookup_int_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 51, &IncompleteSwitchThreshold_54);
    succeeded = (IncompleteSwitchThreshold_54 >= (MR_Integer) 0);
    if (succeeded)
    {
      Var_254 = (MR_Integer) 100;
      succeeded = (IncompleteSwitchThreshold_54 <= Var_254);
    }
    if (succeeded)
      STATE_VARIABLE_Specs_272_272 = STATE_VARIABLE_Specs_251_251;
    else
    {
      MR_Word IncompleteSwitchThresholdSpec_55;
      MR_Word Var_257;
      MR_Word Var_258;

      {
        Var_258 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_258, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_258, 1) = ((MR_Box) (IncompleteSwitchThreshold_54));
      }
      {
        Var_257 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_257, 0) = ((MR_Box) (Var_258));
        MR_hl_field(MR_mktag(1), Var_257, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[46])));
      }
      {
        IncompleteSwitchThresholdSpec_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), IncompleteSwitchThresholdSpec_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
        MR_hl_field(MR_mktag(1), IncompleteSwitchThresholdSpec_55, 1) = ((MR_Box) (Var_257));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), IncompleteSwitchThresholdSpec_55, STATE_VARIABLE_Specs_251_251, &STATE_VARIABLE_Specs_272_272);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 428, &TermNormStr_56);
    succeeded = libs__globals__convert_termination_norm_2_p_0(TermNormStr_56, &TermNormPrime_57);
    if (succeeded)
    {
      *TermNorm_27 = TermNormPrime_57;
      STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_272_272;
    }
    else
    {
      MR_Word TypeCtorInfo_842_842;
      MR_Word TermNormSpec_58;
      MR_Word Var_274;
      MR_Word Var_277;
      MR_Word Var_278;
      MR_Word Var_289;
      MR_Word Var_290;

      *TermNorm_27 = (MR_Integer) 0;
      TypeCtorInfo_842_842 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      {
        Var_278 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_278, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_278, 1) = ((MR_Box) (TermNormStr_56));
      }
      {
        Var_277 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_277, 0) = ((MR_Box) (Var_278));
        MR_hl_field(MR_mktag(1), Var_277, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[49])));
      }
      {
        Var_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_274, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
        MR_hl_field(MR_mktag(1), Var_274, 1) = ((MR_Box) (Var_277));
      }
      Var_290 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[52]));
      Var_289 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_842_842, Var_290, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
      TermNormSpec_58 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_842_842, Var_274, Var_289);
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), TermNormSpec_58, STATE_VARIABLE_Specs_272_272, &STATE_VARIABLE_Specs_305_305);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 434, &Term2NormStr_59);
    succeeded = libs__globals__convert_termination_norm_2_p_0(Term2NormStr_59, &Term2NormPrime_60);
    if (succeeded)
    {
      *Term2Norm_28 = Term2NormPrime_60;
      STATE_VARIABLE_Specs_338_338 = STATE_VARIABLE_Specs_305_305;
    }
    else
    {
      MR_Word TypeCtorInfo_843_843;
      MR_Word Term2NormSpec_61;
      MR_Word Var_307;
      MR_Word Var_310;
      MR_Word Var_311;
      MR_Word Var_322;
      MR_Word Var_323;

      *Term2Norm_28 = (MR_Integer) 0;
      TypeCtorInfo_843_843 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      {
        Var_311 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_311, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_311, 1) = ((MR_Box) (TermNormStr_56));
      }
      {
        Var_310 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_310, 0) = ((MR_Box) (Var_311));
        MR_hl_field(MR_mktag(1), Var_310, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[55])));
      }
      {
        Var_307 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_307, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
        MR_hl_field(MR_mktag(1), Var_307, 1) = ((MR_Box) (Var_310));
      }
      Var_323 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[52]));
      Var_322 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_843_843, Var_323, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
      Term2NormSpec_61 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_843_843, Var_307, Var_322);
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Term2NormSpec_61, STATE_VARIABLE_Specs_305_305, &STATE_VARIABLE_Specs_338_338);
    }
    libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 144, &ForceDisableTracing_62);
    switch (ForceDisableTracing_62) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Trace_63;
          MR_Word ExecTrace_64;
          MR_Word DeclDebug_65;
          MR_Word MaybeTraceLevel_66;

          libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 132, &Trace_63);
          libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 201, &ExecTrace_64);
          libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 202, &DeclDebug_65);
          succeeded = libs__trace_params__convert_trace_level_4_p_0(Trace_63, ExecTrace_64, DeclDebug_65, &MaybeTraceLevel_66);
          if (succeeded)
            if ((MaybeTraceLevel_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word InconsistentTraceLevelSpec_67;
              MR_Word Var_345;
              MR_Word Var_346;

              *TraceLevel_29 = libs__trace_params__trace_level_none_0_f_0();
              {
                Var_346 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_346, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_346, 1) = ((MR_Box) (Trace_63));
              }
              {
                Var_345 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_345, 0) = ((MR_Box) (Var_346));
                MR_hl_field(MR_mktag(1), Var_345, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[61])));
              }
              {
                InconsistentTraceLevelSpec_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), InconsistentTraceLevelSpec_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[223])));
                MR_hl_field(MR_mktag(1), InconsistentTraceLevelSpec_67, 1) = ((MR_Box) (Var_345));
              }
              libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), InconsistentTraceLevelSpec_67, STATE_VARIABLE_Specs_338_338, &STATE_VARIABLE_Specs_360_360);
            }
            else
            {
              *TraceLevel_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTraceLevel_66, (MR_Integer) 0)));
              STATE_VARIABLE_Specs_360_360 = STATE_VARIABLE_Specs_338_338;
            }
          else
          {
            MR_Word TypeCtorInfo_844_844;
            MR_Word BadTraceLevelSpec_68;
            MR_Word Var_361;
            MR_Word Var_364;
            MR_Word Var_365;
            MR_Word Var_376;
            MR_Word Var_377;

            *TraceLevel_29 = libs__trace_params__trace_level_none_0_f_0();
            TypeCtorInfo_844_844 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
            {
              Var_365 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_365, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), Var_365, 1) = ((MR_Box) (Trace_63));
            }
            {
              Var_364 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_364, 0) = ((MR_Box) (Var_365));
              MR_hl_field(MR_mktag(1), Var_364, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[64])));
            }
            {
              Var_361 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_361, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
              MR_hl_field(MR_mktag(1), Var_361, 1) = ((MR_Box) (Var_364));
            }
            Var_377 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[70]));
            Var_376 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_844_844, Var_377, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
            BadTraceLevelSpec_68 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_844_844, Var_361, Var_376);
            libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), BadTraceLevelSpec_68, STATE_VARIABLE_Specs_338_338, &STATE_VARIABLE_Specs_360_360);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *TraceLevel_29 = libs__trace_params__trace_level_none_0_f_0();
          STATE_VARIABLE_Specs_360_360 = STATE_VARIABLE_Specs_338_338;
        }
        break;
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 143, &SuppressStr_69);
    succeeded = libs__trace_params__convert_trace_suppress_2_p_0(SuppressStr_69, &TraceSuppressPrime_70);
    if (succeeded)
    {
      *TraceSuppress_30 = TraceSuppressPrime_70;
      STATE_VARIABLE_Specs_417_417 = STATE_VARIABLE_Specs_360_360;
    }
    else
    {
      MR_Word TraceSuppressSpec_71;
      MR_Word Var_402;
      MR_Word Var_403;

      *TraceSuppress_30 = libs__trace_params__default_trace_suppress_0_f_0();
      {
        Var_403 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_403, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_403, 1) = ((MR_Box) (SuppressStr_69));
      }
      {
        Var_402 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_402, 0) = ((MR_Box) (Var_403));
        MR_hl_field(MR_mktag(1), Var_402, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[73])));
      }
      {
        TraceSuppressSpec_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TraceSuppressSpec_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
        MR_hl_field(MR_mktag(1), TraceSuppressSpec_71, 1) = ((MR_Box) (Var_402));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), TraceSuppressSpec_71, STATE_VARIABLE_Specs_360_360, &STATE_VARIABLE_Specs_417_417);
    }
    libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 148, &ForceDisableSSDB_72);
    switch (ForceDisableSSDB_72) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String SSTrace_73;
          MR_Word SSDB_74;
          MR_Word SSTL_75;

          libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 249, &SSTrace_73);
          libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 248, &SSDB_74);
          succeeded = libs__globals__convert_ssdb_trace_level_3_p_0(SSTrace_73, SSDB_74, &SSTL_75);
          if (succeeded)
          {
            *SSTraceLevel_31 = SSTL_75;
            STATE_VARIABLE_Specs_454_454 = STATE_VARIABLE_Specs_417_417;
          }
          else
          {
            MR_Word TypeCtorInfo_845_845;
            MR_Word SSDBSpec_76;
            MR_Word Var_421;
            MR_Word Var_424;
            MR_Word Var_425;
            MR_Word Var_436;
            MR_Word Var_437;

            *SSTraceLevel_31 = (MR_Integer) 0;
            TypeCtorInfo_845_845 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
            {
              Var_425 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_425, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), Var_425, 1) = ((MR_Box) (SSTrace_73));
            }
            {
              Var_424 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_424, 0) = ((MR_Box) (Var_425));
              MR_hl_field(MR_mktag(1), Var_424, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[76])));
            }
            {
              Var_421 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_421, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
              MR_hl_field(MR_mktag(1), Var_421, 1) = ((MR_Box) (Var_424));
            }
            Var_437 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[80]));
            Var_436 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_845_845, Var_437, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
            SSDBSpec_76 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_845_845, Var_421, Var_436);
            libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), SSDBSpec_76, STATE_VARIABLE_Specs_417_417, &STATE_VARIABLE_Specs_454_454);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *SSTraceLevel_31 = (MR_Integer) 0;
          STATE_VARIABLE_Specs_454_454 = STATE_VARIABLE_Specs_417_417;
        }
        break;
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 241, &MaybeThreadSafeStr_77);
    succeeded = libs__globals__convert_maybe_thread_safe_2_p_0(MaybeThreadSafeStr_77, &MaybeThreadSafePrime_78);
    if (succeeded)
    {
      *MaybeThreadSafe_32 = MaybeThreadSafePrime_78;
      STATE_VARIABLE_Specs_488_488 = STATE_VARIABLE_Specs_454_454;
    }
    else
    {
      MR_Word TypeCtorInfo_846_846;
      MR_Word MTSSpec_79;
      MR_Word Var_456;
      MR_Word Var_459;
      MR_Word Var_460;
      MR_Word Var_474;
      MR_Word Var_475;

      *MaybeThreadSafe_32 = (MR_Integer) 0;
      TypeCtorInfo_846_846 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      {
        Var_460 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_460, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_460, 1) = ((MR_Box) (MaybeThreadSafeStr_77));
      }
      {
        Var_459 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_459, 0) = ((MR_Box) (Var_460));
        MR_hl_field(MR_mktag(1), Var_459, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[87])));
      }
      {
        Var_456 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_456, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
        MR_hl_field(MR_mktag(1), Var_456, 1) = ((MR_Box) (Var_459));
      }
      Var_475 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[89]));
      Var_474 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_846_846, Var_475, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
      MTSSpec_79 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_846_846, Var_456, Var_474);
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), MTSSpec_79, STATE_VARIABLE_Specs_454_454, &STATE_VARIABLE_Specs_488_488);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 167, &DumpAlias_80);
    succeeded = (strcmp(DumpAlias_80, (MR_String) "") == 0);
    if (succeeded)
    {
      STATE_VARIABLE_Specs_519_519 = STATE_VARIABLE_Specs_488_488;
      STATE_VARIABLE_OptionTable_492_492 = STATE_VARIABLE_OptionTable_0_118;
    }
    else
    {
      MR_String AliasDumpOptions_81;

      succeeded = libs__handle_options__convert_dump_alias_2_p_0(DumpAlias_80, &AliasDumpOptions_81);
      if (succeeded)
      {
        MR_Word Var_491;

        {
          Var_491 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_491, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_491, 1) = ((MR_Box) (AliasDumpOptions_81));
        }
        mercury__map__set_4_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) ((MR_Integer) 168)), ((MR_Box) (Var_491)), STATE_VARIABLE_OptionTable_0_118, &STATE_VARIABLE_OptionTable_492_492);
        STATE_VARIABLE_Specs_519_519 = STATE_VARIABLE_Specs_488_488;
      }
      else
      {
        MR_Word DumpAliasSpec_82;
        MR_Word Var_495;
        MR_Word Var_496;

        {
          Var_496 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_496, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_496, 1) = ((MR_Box) (DumpAlias_80));
        }
        {
          Var_495 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_495, 0) = ((MR_Box) (Var_496));
          MR_hl_field(MR_mktag(1), Var_495, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[98])));
        }
        {
          DumpAliasSpec_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), DumpAliasSpec_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
          MR_hl_field(MR_mktag(1), DumpAliasSpec_82, 1) = ((MR_Box) (Var_495));
        }
        libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), DumpAliasSpec_82, STATE_VARIABLE_Specs_488_488, &STATE_VARIABLE_Specs_519_519);
        STATE_VARIABLE_OptionTable_492_492 = STATE_VARIABLE_OptionTable_0_118;
      }
    }
    TypeCtorInfo_849_849 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
    mercury__getopt_io__lookup_string_option_3_p_0(TypeCtorInfo_849_849, STATE_VARIABLE_OptionTable_492_492, ((MR_Box) ((MR_Integer) 168)), &STATE_VARIABLE_DumpOptions_521_521);
    succeeded = (strcmp(STATE_VARIABLE_DumpOptions_521_521, (MR_String) "") == 0);
    if (succeeded)
      STATE_VARIABLE_DumpOptions_522_522 = (MR_String) "x";
    else
      STATE_VARIABLE_DumpOptions_522_522 = STATE_VARIABLE_DumpOptions_521_521;
    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_522_522, (MR_Char) 121);
    if (succeeded)
    {
      Var_524 = (MR_Char) 97;
      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_522_522, Var_524);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      STATE_VARIABLE_DumpOptions_525_525 = mercury__string__f_43_43_2_f_0((MR_String) "a", STATE_VARIABLE_DumpOptions_522_522);
    }
    else
      STATE_VARIABLE_DumpOptions_525_525 = STATE_VARIABLE_DumpOptions_522_522;
    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_525_525, (MR_Char) 97);
    if (succeeded)
    {
      Var_528 = (MR_Char) 117;
      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_525_525, Var_528);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      STATE_VARIABLE_DumpOptions_529_529 = mercury__string__f_43_43_2_f_0((MR_String) "u", STATE_VARIABLE_DumpOptions_525_525);
    }
    else
      STATE_VARIABLE_DumpOptions_529_529 = STATE_VARIABLE_DumpOptions_525_525;
    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 65);
    if (!(succeeded))
    {
      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 66);
      if (!(succeeded))
      {
        succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 68);
        if (!(succeeded))
        {
          succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 71);
          if (!(succeeded))
          {
            succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 80);
            if (!(succeeded))
            {
              succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 82);
              if (!(succeeded))
              {
                succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 83);
                if (!(succeeded))
                {
                  succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 98);
                  if (!(succeeded))
                  {
                    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 99);
                    if (!(succeeded))
                    {
                      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 100);
                      if (!(succeeded))
                      {
                        succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 102);
                        if (!(succeeded))
                        {
                          succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 103);
                          if (!(succeeded))
                          {
                            succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 105);
                            if (!(succeeded))
                            {
                              succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 108);
                              if (!(succeeded))
                              {
                                succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 109);
                                if (!(succeeded))
                                {
                                  succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 110);
                                  if (!(succeeded))
                                  {
                                    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 112);
                                    if (!(succeeded))
                                    {
                                      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 115);
                                      if (!(succeeded))
                                      {
                                        succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 116);
                                        if (!(succeeded))
                                        {
                                          succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 117);
                                          if (!(succeeded))
                                          {
                                            succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 122);
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      Var_552 = (MR_Char) 120;
      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, Var_552);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      STATE_VARIABLE_DumpOptions_553_553 = mercury__string__f_43_43_2_f_0((MR_String) "x", STATE_VARIABLE_DumpOptions_529_529);
    }
    else
      STATE_VARIABLE_DumpOptions_553_553 = STATE_VARIABLE_DumpOptions_529_529;
    {
      Var_556 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_556, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_556, 1) = ((MR_Box) (STATE_VARIABLE_DumpOptions_553_553));
    }
    mercury__map__set_4_p_0(TypeCtorInfo_849_849, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) ((MR_Integer) 168)), ((MR_Box) (Var_556)), STATE_VARIABLE_OptionTable_492_492, STATE_VARIABLE_OptionTable_119);
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_119, (MR_Integer) 522, &C_CompilerTypeStr_84);
    succeeded = libs__globals__convert_c_compiler_type_2_p_0(C_CompilerTypeStr_84, &C_CompilerTypePrime_85);
    if (succeeded)
    {
      *C_CompilerType_33 = C_CompilerTypePrime_85;
      STATE_VARIABLE_Specs_595_595 = STATE_VARIABLE_Specs_519_519;
    }
    else
    {
      MR_Word TypeCtorInfo_851_851;
      MR_Word CCTpec_86;
      MR_Word Var_559;
      MR_Word Var_562;
      MR_Word Var_563;
      MR_Word Var_577;
      MR_Word Var_578;

      *C_CompilerType_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      TypeCtorInfo_851_851 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      {
        Var_563 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_563, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_563, 1) = ((MR_Box) (C_CompilerTypeStr_84));
      }
      {
        Var_562 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_562, 0) = ((MR_Box) (Var_563));
        MR_hl_field(MR_mktag(1), Var_562, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[101])));
      }
      {
        Var_559 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_559, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
        MR_hl_field(MR_mktag(1), Var_559, 1) = ((MR_Box) (Var_562));
      }
      Var_578 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[105]));
      Var_577 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_851_851, Var_578, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
      CCTpec_86 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_851_851, Var_559, Var_577);
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), CCTpec_86, STATE_VARIABLE_Specs_519_519, &STATE_VARIABLE_Specs_595_595);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_119, (MR_Integer) 523, &CSharp_CompilerTypeStr_87);
    succeeded = libs__globals__convert_csharp_compiler_type_2_p_0(CSharp_CompilerTypeStr_87, &CSharp_CompilerTypePrime_88);
    if (succeeded)
    {
      *CSharp_CompilerType_34 = CSharp_CompilerTypePrime_88;
      STATE_VARIABLE_Specs_631_631 = STATE_VARIABLE_Specs_595_595;
    }
    else
    {
      MR_Word TypeCtorInfo_852_852;
      MR_Word CSCSpec_89;
      MR_Word Var_597;
      MR_Word Var_600;
      MR_Word Var_601;
      MR_Word Var_615;
      MR_Word Var_616;

      *CSharp_CompilerType_34 = (MR_Integer) 2;
      TypeCtorInfo_852_852 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      {
        Var_601 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_601, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_601, 1) = ((MR_Box) (CSharp_CompilerTypeStr_87));
      }
      {
        Var_600 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_600, 0) = ((MR_Box) (Var_601));
        MR_hl_field(MR_mktag(1), Var_600, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[108])));
      }
      {
        Var_597 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_597, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
        MR_hl_field(MR_mktag(1), Var_597, 1) = ((MR_Box) (Var_600));
      }
      Var_616 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[110]));
      Var_615 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_852_852, Var_616, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
      CSCSpec_89 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_852_852, Var_597, Var_615);
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), CSCSpec_89, STATE_VARIABLE_Specs_595_595, &STATE_VARIABLE_Specs_631_631);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_119, (MR_Integer) 419, &ReuseConstraintStr_90);
    libs__handle_options__raw_lookup_int_option_3_p_0(*STATE_VARIABLE_OptionTable_119, (MR_Integer) 420, &ReuseConstraintArgNum_91);
    succeeded = libs__globals__convert_reuse_strategy_3_p_0(ReuseConstraintStr_90, ReuseConstraintArgNum_91, &ReuseStrategyPrime_92);
    if (succeeded)
    {
      *ReuseStrategy_35 = ReuseStrategyPrime_92;
      STATE_VARIABLE_Specs_663_663 = STATE_VARIABLE_Specs_631_631;
    }
    else
    {
      MR_Word TypeCtorInfo_853_853;
      MR_Word ReuseConstrSpec_93;
      MR_Word Var_634;
      MR_Word Var_637;
      MR_Word Var_638;
      MR_Word Var_649;
      MR_Word Var_650;

      *ReuseStrategy_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      TypeCtorInfo_853_853 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      {
        Var_638 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_638, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_638, 1) = ((MR_Box) (ReuseConstraintStr_90));
      }
      {
        Var_637 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_637, 0) = ((MR_Box) (Var_638));
        MR_hl_field(MR_mktag(1), Var_637, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[113])));
      }
      {
        Var_634 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_634, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
        MR_hl_field(MR_mktag(1), Var_634, 1) = ((MR_Box) (Var_637));
      }
      Var_650 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[115]));
      Var_649 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_853_853, Var_650, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
      ReuseConstrSpec_93 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_853_853, Var_634, Var_649);
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ReuseConstrSpec_93, STATE_VARIABLE_Specs_631_631, &STATE_VARIABLE_Specs_663_663);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_119, (MR_Integer) 680, &FeedbackFile_94);
    succeeded = (strcmp(FeedbackFile_94, (MR_String) "") == 0);
    if (succeeded)
    {
      *MaybeFeedbackInfo_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      STATE_VARIABLE_Specs_668_668 = STATE_VARIABLE_Specs_663_663;
    }
    else
    {
      MR_Word FeedbackReadResult_96;

      mdbcomp__feedback__read_feedback_file_5_p_0(FeedbackFile_94, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &FeedbackReadResult_96);
      if (((MR_tag((MR_Word) FeedbackReadResult_96)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word Error_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), FeedbackReadResult_96, (MR_Integer) 0)));
        MR_String ErrorMessage_99;
        MR_Word Var_667;
        MR_Word Var_669;

        mdbcomp__feedback__feedback_read_error_message_string_3_p_0(FeedbackFile_94, Error_98, &ErrorMessage_99);
        {
          Var_669 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_669, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), Var_669, 1) = ((MR_Box) (ErrorMessage_99));
        }
        {
          Var_667 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_667, 0) = ((MR_Box) (Var_669));
          MR_hl_field(MR_mktag(1), Var_667, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_667, STATE_VARIABLE_Specs_663_663, &STATE_VARIABLE_Specs_668_668);
        *MaybeFeedbackInfo_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      else
      {
        MR_Word FeedbackInfo_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), FeedbackReadResult_96, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeFeedbackInfo_36 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FeedbackInfo_97));
        }
        STATE_VARIABLE_Specs_668_668 = STATE_VARIABLE_Specs_663_663;
      }
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_119, (MR_Integer) 662, &HostEnvTypeStr_100);
    succeeded = libs__globals__convert_env_type_2_p_0(HostEnvTypeStr_100, &HostEnvTypePrime_101);
    if (succeeded)
    {
      *HostEnvType_37 = HostEnvTypePrime_101;
      STATE_VARIABLE_Specs_705_705 = STATE_VARIABLE_Specs_668_668;
    }
    else
    {
      MR_Word TypeCtorInfo_854_854;
      MR_Word HostEnvSpec_102;
      MR_Word Var_672;
      MR_Word Var_675;
      MR_Word Var_676;
      MR_Word Var_687;
      MR_Word Var_688;

      *HostEnvType_37 = (MR_Integer) 0;
      TypeCtorInfo_854_854 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      {
        Var_676 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_676, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_676, 1) = ((MR_Box) (HostEnvTypeStr_100));
      }
      {
        Var_675 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_675, 0) = ((MR_Box) (Var_676));
        MR_hl_field(MR_mktag(1), Var_675, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[118])));
      }
      {
        Var_672 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_672, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
        MR_hl_field(MR_mktag(1), Var_672, 1) = ((MR_Box) (Var_675));
      }
      Var_688 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[122]));
      Var_687 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_854_854, Var_688, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
      HostEnvSpec_102 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_854_854, Var_672, Var_687);
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), HostEnvSpec_102, STATE_VARIABLE_Specs_668_668, &STATE_VARIABLE_Specs_705_705);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_119, (MR_Integer) 663, &SystemEnvTypeStr_103);
    succeeded = (strcmp(SystemEnvTypeStr_103, (MR_String) "") == 0);
    if (succeeded)
    {
      SystemEnvTypePrime_104 = *HostEnvType_37;
      succeeded = MR_TRUE;
    }
    else
      succeeded = libs__globals__convert_env_type_2_p_0(SystemEnvTypeStr_103, &SystemEnvTypePrime_104);
    if (succeeded)
    {
      *SystemEnvType_38 = SystemEnvTypePrime_104;
      STATE_VARIABLE_Specs_743_743 = STATE_VARIABLE_Specs_705_705;
    }
    else
    {
      MR_Word TypeCtorInfo_855_855;
      MR_Word SystemEnvSpec_105;
      MR_Word Var_707;
      MR_Word Var_710;
      MR_Word Var_711;
      MR_Word Var_725;
      MR_Word Var_726;

      *SystemEnvType_38 = (MR_Integer) 0;
      TypeCtorInfo_855_855 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      {
        Var_711 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_711, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_711, 1) = ((MR_Box) (SystemEnvTypeStr_103));
      }
      {
        Var_710 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_710, 0) = ((MR_Box) (Var_711));
        MR_hl_field(MR_mktag(1), Var_710, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[125])));
      }
      {
        Var_707 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_707, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
        MR_hl_field(MR_mktag(1), Var_707, 1) = ((MR_Box) (Var_710));
      }
      Var_726 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[122]));
      Var_725 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_855_855, Var_726, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
      SystemEnvSpec_105 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_855_855, Var_707, Var_725);
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), SystemEnvSpec_105, STATE_VARIABLE_Specs_705_705, &STATE_VARIABLE_Specs_743_743);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_119, (MR_Integer) 664, &TargetEnvTypeStr_106);
    succeeded = libs__globals__convert_env_type_2_p_0(TargetEnvTypeStr_106, &TargetEnvTypePrime_107);
    if (succeeded)
    {
      *TargetEnvType_39 = TargetEnvTypePrime_107;
      STATE_VARIABLE_Specs_781_781 = STATE_VARIABLE_Specs_743_743;
    }
    else
    {
      MR_Word TypeCtorInfo_856_856;
      MR_Word TargetEnvTypeSpec_108;
      MR_Word Var_745;
      MR_Word Var_748;
      MR_Word Var_749;
      MR_Word Var_763;
      MR_Word Var_764;

      *TargetEnvType_39 = (MR_Integer) 0;
      TypeCtorInfo_856_856 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      {
        Var_749 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_749, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_749, 1) = ((MR_Box) (TargetEnvTypeStr_106));
      }
      {
        Var_748 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_748, 0) = ((MR_Box) (Var_749));
        MR_hl_field(MR_mktag(1), Var_748, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[128])));
      }
      {
        Var_745 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_745, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
        MR_hl_field(MR_mktag(1), Var_745, 1) = ((MR_Box) (Var_748));
      }
      Var_764 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[122]));
      Var_763 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_856_856, Var_764, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
      TargetEnvTypeSpec_108 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_856_856, Var_745, Var_763);
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), TargetEnvTypeSpec_108, STATE_VARIABLE_Specs_743_743, &STATE_VARIABLE_Specs_781_781);
    }
    succeeded = (*HostEnvType_37 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (*CSharp_CompilerType_34 == (MR_Integer) 0);
    if (succeeded)
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[134]), STATE_VARIABLE_Specs_781_781, &STATE_VARIABLE_Specs_797_797);
    }
    else
      STATE_VARIABLE_Specs_797_797 = STATE_VARIABLE_Specs_781_781;
    libs__handle_options__raw_lookup_accumulating_option_3_p_0(*STATE_VARIABLE_OptionTable_119, (MR_Integer) 71, &LimitErrorContextsOptionStrs_110);
    libs__globals__convert_limit_error_contexts_3_p_0(LimitErrorContextsOptionStrs_110, &BadLimitErrorContextsOptions_111, LimitErrorContextsMap_40);
    if ((BadLimitErrorContextsOptions_111 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Specs_120 = STATE_VARIABLE_Specs_797_797;
    else
    {
      MR_Word Var_858 = ((MR_Word) (MR_hl_field(MR_mktag(1), BadLimitErrorContextsOptions_111, (MR_Integer) 1)));
      MR_String Var_859 = ((MR_String) (MR_hl_field(MR_mktag(1), BadLimitErrorContextsOptions_111, (MR_Integer) 0)));

      if ((Var_858 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word LECSpec_113;
        MR_Word Var_822;
        MR_Word Var_823;

        {
          Var_823 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_823, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_823, 1) = ((MR_Box) (Var_859));
        }
        {
          Var_822 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_822, 0) = ((MR_Box) (Var_823));
          MR_hl_field(MR_mktag(1), Var_822, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[137])));
        }
        {
          LECSpec_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LECSpec_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
          MR_hl_field(MR_mktag(1), LECSpec_113, 1) = ((MR_Box) (Var_822));
        }
        libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), LECSpec_113, STATE_VARIABLE_Specs_797_797, STATE_VARIABLE_Specs_120);
      }
      else
      {
        MR_Word TypeCtorInfo_857_857;
        MR_Word BadPieces_117;
        MR_Word Var_804;
        MR_Word LECSpec_838;

        BadPieces_117 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(BadLimitErrorContextsOptions_111);
        TypeCtorInfo_857_857 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        Var_804 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_857_857, BadPieces_117, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[137]));
        LECSpec_838 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_857_857, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[225]), Var_804);
        libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), LECSpec_838, STATE_VARIABLE_Specs_797_797, STATE_VARIABLE_Specs_120);
      }
    }
  }
}

static void MR_CALL 
libs__handle_options__raw_lookup_accumulating_option_3_p_0(
  MR_Word OptionTable_4,
  MR_Word Option_5,
  MR_Word * AccumulatingValue_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_14_14 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
    MR_Word OptionValue_7;
    MR_Box conv0_OptionValue_7;
    MR_Word AccumulatingValuePrime_8;

    mercury__map__lookup_3_p_0(TypeCtorInfo_14_14, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, OptionTable_4, ((MR_Box) (Option_5)), &conv0_OptionValue_7);
    OptionValue_7 = ((MR_Word) conv0_OptionValue_7);
    succeeded = ((((MR_tag((MR_Word) OptionValue_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), OptionValue_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (succeeded)
    {
      AccumulatingValuePrime_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), OptionValue_7, (MR_Integer) 1)));
      *AccumulatingValue_6 = AccumulatingValuePrime_8;
    }
    else
    {
      MR_String OptionStr_9;
      MR_String Var_12;

      OptionStr_9 = mercury__string__string_1_f_0(TypeCtorInfo_14_14, ((MR_Box) (Option_5)));
      Var_12 = mercury__string__f_43_43_2_f_0(OptionStr_9, (MR_String) "is not accumulating");
      {
        mercury__require__unexpected_3_p_0((MR_String) "libs.handle_options", (MR_String) "predicate \140libs.handle_options.raw_lookup_accumulating_option\'/3", Var_12);
        return;
      }
    }
  }
}

static void MR_CALL 
libs__handle_options__raw_lookup_string_option_3_p_0(
  MR_Word OptionTable_4,
  MR_Word Option_5,
  MR_String * StringValue_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_14_14 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
    MR_Word OptionValue_7;
    MR_Box conv0_OptionValue_7;
    MR_String StringValuePrime_8;

    mercury__map__lookup_3_p_0(TypeCtorInfo_14_14, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, OptionTable_4, ((MR_Box) (Option_5)), &conv0_OptionValue_7);
    OptionValue_7 = ((MR_Word) conv0_OptionValue_7);
    succeeded = ((((MR_tag((MR_Word) OptionValue_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), OptionValue_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (succeeded)
    {
      StringValuePrime_8 = ((MR_String) (MR_hl_field(MR_mktag(3), OptionValue_7, (MR_Integer) 1)));
      *StringValue_6 = StringValuePrime_8;
    }
    else
    {
      MR_String OptionStr_9;
      MR_String Var_12;

      OptionStr_9 = mercury__string__string_1_f_0(TypeCtorInfo_14_14, ((MR_Box) (Option_5)));
      Var_12 = mercury__string__f_43_43_2_f_0(OptionStr_9, (MR_String) "is not a string");
      {
        mercury__require__unexpected_3_p_0((MR_String) "libs.handle_options", (MR_String) "predicate \140libs.handle_options.raw_lookup_string_option\'/3", Var_12);
        return;
      }
    }
  }
}

static void MR_CALL 
libs__handle_options__raw_lookup_int_option_3_p_0(
  MR_Word OptionTable_4,
  MR_Word Option_5,
  MR_Integer * IntValue_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_14_14 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
    MR_Word OptionValue_7;
    MR_Box conv0_OptionValue_7;
    MR_Integer IntValuePrime_8;

    mercury__map__lookup_3_p_0(TypeCtorInfo_14_14, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, OptionTable_4, ((MR_Box) (Option_5)), &conv0_OptionValue_7);
    OptionValue_7 = ((MR_Word) conv0_OptionValue_7);
    succeeded = ((MR_tag((MR_Word) OptionValue_7)) == (MR_mktag((MR_Integer) 2)));
    if (succeeded)
    {
      IntValuePrime_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), OptionValue_7, (MR_Integer) 0)));
      *IntValue_6 = IntValuePrime_8;
    }
    else
    {
      MR_String OptionStr_9;
      MR_String Var_12;

      OptionStr_9 = mercury__string__string_1_f_0(TypeCtorInfo_14_14, ((MR_Box) (Option_5)));
      Var_12 = mercury__string__f_43_43_2_f_0(OptionStr_9, (MR_String) "is not an int");
      {
        mercury__require__unexpected_3_p_0((MR_String) "libs.handle_options", (MR_String) "predicate \140libs.handle_options.raw_lookup_int_option\'/3", Var_12);
        return;
      }
    }
  }
}

static void MR_CALL 
libs__handle_options__raw_lookup_bool_option_3_p_0(
  MR_Word OptionTable_4,
  MR_Word Option_5,
  MR_Word * BoolValue_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_14_14 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
    MR_Word OptionValue_7;
    MR_Box conv0_OptionValue_7;
    MR_Word BoolValuePrime_8;

    mercury__map__lookup_3_p_0(TypeCtorInfo_14_14, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, OptionTable_4, ((MR_Box) (Option_5)), &conv0_OptionValue_7);
    OptionValue_7 = ((MR_Word) conv0_OptionValue_7);
    succeeded = ((MR_tag((MR_Word) OptionValue_7)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      BoolValuePrime_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), OptionValue_7, (MR_Integer) 0)));
      *BoolValue_6 = BoolValuePrime_8;
    }
    else
    {
      MR_String OptionStr_9;
      MR_String Var_12;

      OptionStr_9 = mercury__string__string_1_f_0(TypeCtorInfo_14_14, ((MR_Box) (Option_5)));
      Var_12 = mercury__string__f_43_43_2_f_0(OptionStr_9, (MR_String) "is not a bool");
      {
        mercury__require__unexpected_3_p_0((MR_String) "libs.handle_options", (MR_String) "predicate \140libs.handle_options.raw_lookup_bool_option\'/3", Var_12);
        return;
      }
    }
  }
}

static MR_bool MR_CALL 
libs__handle_options__convert_dump_alias_2_p_0(
  MR_String HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    {
      MR_Integer case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(HeadVar__1_1, 0)) {
        case (MR_Integer) 65:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "ALL"))
            case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 97:
          if (((((MR_nth_code_unit(HeadVar__1_1, 1)) == (MR_Integer) 108)) && (((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 108))))
            switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 1;
                break;
              case (MR_Integer) 68:
                if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "allD"))
                  case_num_0 = (MR_Integer) 2;
                break;
            }
          break;
        case (MR_Integer) 99:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 109:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "cmp"))
                case_num_0 = (MR_Integer) 3;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "codegen"))
                case_num_0 = (MR_Integer) 4;
              break;
            case (MR_Integer) 116:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "ctgc"))
                case_num_0 = (MR_Integer) 5;
              break;
          }
          break;
        case (MR_Integer) 100:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "detism"))
            case_num_0 = (MR_Integer) 6;
          break;
        case (MR_Integer) 108:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "lco"))
            case_num_0 = (MR_Integer) 7;
          break;
        case (MR_Integer) 109:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 105:
              if (((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 110))
                switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 8;
                    break;
                  case (MR_Integer) 116:
                    if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "mintrans"))
                      case_num_0 = (MR_Integer) 9;
                    break;
                }
              break;
            case (MR_Integer) 109:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "mm"))
                case_num_0 = (MR_Integer) 10;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "most"))
                case_num_0 = (MR_Integer) 11;
              break;
          }
          break;
        case (MR_Integer) 111:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "osv"))
            case_num_0 = (MR_Integer) 12;
          break;
        case (MR_Integer) 112:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "paths"))
                case_num_0 = (MR_Integer) 13;
              break;
            case (MR_Integer) 101:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "petdr"))
                case_num_0 = (MR_Integer) 14;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "poly"))
                case_num_0 = (MR_Integer) 15;
              break;
          }
          break;
        case (MR_Integer) 115:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "statevar"))
            case_num_0 = (MR_Integer) 16;
          break;
        case (MR_Integer) 116:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "trans"))
            case_num_0 = (MR_Integer) 17;
          break;
        case (MR_Integer) 118:
          if (((MR_nth_code_unit(HeadVar__1_1, 1)) == (MR_Integer) 97))
            switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
              case (MR_Integer) 110:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "vanessa"))
                  case_num_0 = (MR_Integer) 18;
                break;
              case (MR_Integer) 114:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "vars"))
                  case_num_0 = (MR_Integer) 19;
                break;
            }
          break;
      }
      if ((case_num_0 < (MR_Integer) 0))
        succeeded = MR_FALSE;
      else
      {
        // we found a match; look up the results
        *HeadVar__2_2 = ((&libs__handle_options_vector_common_2[0 + case_num_0]))->libs__handle_options__vector_common_type_2_0__vct_2_f_0;
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__libs__handle_options__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module libs.handle_options.
