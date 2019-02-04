/*
** Automatically generated from `handle_options.m'
** by the Mercury compiler,
** version rotd-2018-10-08
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
#include "hlds.goal_mode.mih"
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
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2143__1_2_f_0(
  MR_Word ToGradeSubdir_179,
  MR_String LambdaHeadVar__1_1576);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2141__1_2_f_0(
  MR_Word ToGradeSubdir_179,
  MR_String LambdaHeadVar__1_1570);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2150__1_1_f_0(
  MR_String LambdaHeadVar__1_1565);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2149__1_1_f_0(
  MR_String LambdaHeadVar__1_1560);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2119__1_2_f_0(
  MR_Word ToGradeSubdir_179,
  MR_String LambdaHeadVar__1_1547);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2115__1_2_f_0(
  MR_Word ToGradeSubdir_179,
  MR_String LambdaHeadVar__1_1541);

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2097__2_2_p_0(
  MR_Word HeadVar__1_1534,
  MR_String HeadVar__2_1683);

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2097__1_2_p_0(
  MR_String HeadVar__1_1535,
  MR_String HeadVar__2_1685);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2079__1_3_f_0(
  MR_String TargetArch_144,
  MR_String GradeString_159,
  MR_String LambdaHeadVar__1_1522);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2043__1_2_f_0(
  MR_String GradeString_159,
  MR_String LambdaHeadVar__1_1503);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2033__1_2_f_0(
  MR_String GradeString_159,
  MR_String LambdaHeadVar__1_1493);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2020__1_2_f_0(
  MR_String GradeString_159,
  MR_String LambdaHeadVar__1_1476);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2000__1_2_f_0(
  MR_String GradeString_159,
  MR_String LambdaHeadVar__1_1461);

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
  MR_Word STATE_VARIABLE_Specs_0_214,
  MR_Word * STATE_VARIABLE_Specs_215,
  MR_Word * STATE_VARIABLE_Globals_216);

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
  MR_Word STATE_VARIABLE_OptionTable_0_117,
  MR_Word * STATE_VARIABLE_OptionTable_118,
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
  MR_Word * STATE_VARIABLE_Specs_119);

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


static /* final */ const MR_Box libs__handle_options_scalar_common_1[242][2];

static /* final */ const MR_Box libs__handle_options_scalar_common_3[9][1];

static /* final */ const MR_Box libs__handle_options_scalar_common_4[3][6];

static /* final */ const MR_Box libs__handle_options_scalar_common_5[2][7];

static /* final */ const MR_Box libs__handle_options_scalar_common_6[5][5];

static /* final */ const MR_Box libs__handle_options_scalar_common_7[10][3];

static /* final */ const MR_Box libs__handle_options_scalar_common_8[2][4];


/* sealed */ struct libs__handle_options__vector_common_type_2_0_s {
  const MR_String libs__handle_options__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct libs__handle_options__vector_common_type_2_0_s libs__handle_options_vector_common_2[21];



static /* final */ const MR_Box libs__handle_options_scalar_common_1[242][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "Copyright (C) 2013-2018 The Mercury team\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
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
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "Usage: mmc [<options>] <arguments>\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "may be given:"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: only one of the following options"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option; must be"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--target"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
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
    ((MR_Box) ((MR_Unsigned) 0U))
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
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
    ((MR_Box) ((MR_Unsigned) 0U))
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
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
    ((MR_Box) ((MR_Unsigned) 0U))
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option; must be an integer between 1 and 100."))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option; must be an integer between 0 and 100."))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
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
    ((MR_Box) ((MR_Unsigned) 0U))
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option."))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--decl-debug"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[57])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not compatible with the value of the"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[59])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
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
    ((MR_Box) ((MR_Unsigned) 0U))
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
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
    ((MR_Box) ((MR_Unsigned) 0U))
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must be"))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[81]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option;"))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[82])))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
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
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 89 */
  {
    ((MR_Box) ((MR_String) "no")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[88])))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[57])))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--dump-hlds-alias"))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[91])))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(also known as"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[93])))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
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
    ((MR_Box) ((MR_Unsigned) 0U))
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
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
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 115 */
  {
    ((MR_Box) ((MR_String) "same_cons_id")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[114])))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
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
    ((MR_Box) ((MR_Unsigned) 0U))
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--limit-error-contexts"))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[129]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[57])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[130])))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which disables tags."))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[132]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[134]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[133])))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--num-tag-bits 0"))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[136]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[135])))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Using"))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[138]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[137])))
  },
  /* row 140 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[139])))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option is either unspecified or invalid."))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[141]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[140])))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--num-tag-bits"))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[143]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[142])))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: the value of the"))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[145]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[144])))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "requires a parallel grade."))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[147]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "grade component"))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[149]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[148])))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "threadscope"))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[151]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[150])))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[153]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[152])))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Use a low-level C grade without trailing."))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[155]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "supports parallel conjunctions."))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[157]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[156])))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option requires a grade that"))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[158])))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--implicit-parallelism"))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[161]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[160])))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[153]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[162])))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--feedback-file"))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[164]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option requires the use of"))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[166]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[165])))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[161]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[167])))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[153]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[168])))
  },
  /* row 170 */
  {
    ((MR_Box) ((MR_String) "shared")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 171 */
  {
    ((MR_Box) ((MR_String) "static")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[170])))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[171])))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--make"))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[173]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[57])))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option is incompatible with the"))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[175]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[174])))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--transitive-intermodule-optimization"))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[177]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[176])))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[153]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[178])))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--intermodule-analysis"))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[180]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[57])))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[175]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[181])))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--intermodule-optimization"))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[183]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[182])))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[153]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[184])))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--extra-initialization-functions"))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[186]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[57])))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[175]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[187])))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--generate-standalone-interface"))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[189]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[188])))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[153]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[190])))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "at once."))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[192]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "You cannot use both forms of minimal model tabling"))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[194]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[193])))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "high level code."))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[196]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Minimal model tabling is incompatible with"))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[198]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[197])))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "trailing."))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[200]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[198]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[201])))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Deep profiling is incompatible with"))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[203]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[197])))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Cannot record term size as both words and cells."))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[205]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 207 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Term size profiling is incompatible with"))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[207]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[197])))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Debugging is available only in low level C grades."))
  },
  /* row 210 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[209]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "--put-nondet-env-on-heap"))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[211]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])))
  },
  /* row 213 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is incompatible with"))
  },
  /* row 214 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[213]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[212])))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "--gc accurate"))
  },
  /* row 216 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[215]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[214])))
  },
  /* row 217 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Invalid argument"))
  },
  /* row 218 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The specified trace level"))
  },
  /* row 219 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Invalid arguments"))
  },
  /* row 220 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[219]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 221 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "automatic"))
  },
  /* row 222 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ".exe"))
  },
  /* row 223 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "shared"))
  },
  /* row 224 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: cannot set the value of"))
  },
  /* row 225 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--arg-pack-bits"))
  },
  /* row 226 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to value higher than the value of"))
  },
  /* row 227 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--bits-per-word"))
  },
  /* row 228 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 229 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Reducing the effective value of"))
  },
  /* row 230 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to the maximum allowable value, which is"))
  },
  /* row 231 */
  {
    ((MR_Box) ((MR_Unsigned) 2U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 232 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "--warn-non-tail-recursion is incompatible with --pessimize-tailcalls"))
  },
  /* row 233 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[232]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 234 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "--warn-non-tail-recursion requires --optimize-tailcalls"))
  },
  /* row 235 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[234]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 236 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "--warn-non-tail-recursion is incompatible with --errorcheck-only"))
  },
  /* row 237 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[236]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 238 */
  {
    ((MR_Box) ((MR_String) "c")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 239 */
  {
    ((MR_Box) ((MR_String) "csharp")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 240 */
  {
    ((MR_Box) ((MR_String) "java")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 241 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_3[9][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
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
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&libs__handle_options____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
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
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
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
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__handle_options____vpti_pred_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_7[10][3] = {
  /* row 0 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[0])),
    ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[0])),
    ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_11)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[2])),
    ((MR_Box) (libs__handle_options__handle_given_options_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[3])),
    ((MR_Box) (libs__handle_options__handle_given_options_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[4])),
    ((MR_Box) (libs__handle_options__handle_given_options_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_5[1])),
    ((MR_Box) (libs__handle_options__handle_given_options_7_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[2])),
    ((MR_Box) (libs__handle_options__separate_option_args_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[3])),
    ((MR_Box) (libs__handle_options__separate_option_args_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[4])),
    ((MR_Box) (libs__handle_options__separate_option_args_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_5[1])),
    ((MR_Box) (libs__handle_options__separate_option_args_5_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
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


static /* final */ const struct libs__handle_options__vector_common_type_2_0_s libs__handle_options_vector_common_2[21] = {
  /* row 0 */   {     (MR_String) "abcdEfgilmnprstuvzBCDIMPRSTUZ" },
  /* row 1 */   {     (MR_String) "abcdEfgilmnprstuvzBCMPTZ" },
  /* row 2 */   {     (MR_String) "abcdEfgilmnprstuvzBCDMPT" },
  /* row 3 */   {     (MR_String) "bdfgilmnprstuvzP" },
  /* row 4 */   {     (MR_String) "dfnprsu" },
  /* row 5 */   {     (MR_String) "cdinpGDRS" },
  /* row 6 */   {     (MR_String) "divM" },
  /* row 7 */   {     (MR_String) "TL" },
  /* row 8 */   {     (MR_String) "agiuvzD" },
  /* row 9 */   {     (MR_String) "ilv" },
  /* row 10 */   {     (MR_String) "bcdglmnstvz" },
  /* row 11 */   {     (MR_String) "bdgvP" },
  /* row 12 */   {     (MR_String) "bcdfgilmnprstvzP" },
  /* row 13 */   {     (MR_String) "bcdglmnpruvP" },
  /* row 14 */   {     (MR_String) "cP" },
  /* row 15 */   {     (MR_String) "din" },
  /* row 16 */   {     (MR_String) "vxX" },
  /* row 17 */   {     (MR_String) "gvCP" },
  /* row 18 */   {     (MR_String) "bcdglmnstuvz" },
  /* row 19 */   {     (MR_String) "ltuCIU" },
  /* row 20 */   {     (MR_String) "npBis" },
};


#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "libs.handle_options.mh"
#include "mdbcomp.rtti_access.mh"
#line 2469 "handle_options.m"
MR_Word libs__handle_options__mutable_variable_already_printed_usage;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__handle_options__mutable_variable_already_printed_usage_lock;
#endif


#line 2469 "handle_options.m"
void 
libs__handle_options__user_init_pred_0(void)
#line 2469 "handle_options.m"
{
#line 2469 "handle_options.m"
	libs__handle_options__initialise_mutable_already_printed_usage_0_p_0();
}


static const MR_VA_PseudoTypeInfo_Struct1 libs__handle_options____vpti_pred_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 libs__handle_options____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&libs__options__libs__options__type_ctor_info_option_0),
    (MR_PseudoTypeInfo) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__getopt_io__pti_maybe_option_table_1__plain_libs__options__type_ctor_info_option_0 = {
  &mercury__getopt_io__getopt_io__type_ctor_info_maybe_option_table_1,
  {
    (MR_PseudoTypeInfo) (&libs__options__libs__options__type_ctor_info_option_0)
  }
};

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2143__1_2_f_0(
  MR_Word ToGradeSubdir_179,
  MR_String LambdaHeadVar__1_1576)
{
  {
    MR_String LambdaHeadVar__2_1577;
    MR_String Var_1578;
    MR_String Var_1579;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToGradeSubdir_179, (MR_Integer) 1))));
    MR_Box conv1_Var_1579;

    conv1_Var_1579 = func_0(((MR_Box) (ToGradeSubdir_179)), ((MR_Box) (LambdaHeadVar__1_1576)));
    Var_1579 = ((MR_String) (conv1_Var_1579));
    Var_1578 = mercury__dir__f_slash_2_f_0(Var_1579, (MR_String) "Mercury");
    LambdaHeadVar__2_1577 = mercury__dir__f_slash_2_f_0(Var_1578, (MR_String) "hrls");
    return LambdaHeadVar__2_1577;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2141__1_2_f_0(
  MR_Word ToGradeSubdir_179,
  MR_String LambdaHeadVar__1_1570)
{
  {
    MR_String LambdaHeadVar__2_1571;
    MR_String Var_1572;
    MR_String Var_1573;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToGradeSubdir_179, (MR_Integer) 1))));
    MR_Box conv1_Var_1573;

    conv1_Var_1573 = func_0(((MR_Box) (ToGradeSubdir_179)), ((MR_Box) (LambdaHeadVar__1_1570)));
    Var_1573 = ((MR_String) (conv1_Var_1573));
    Var_1572 = mercury__dir__f_slash_2_f_0(Var_1573, (MR_String) "Mercury");
    LambdaHeadVar__2_1571 = mercury__dir__f_slash_2_f_0(Var_1572, (MR_String) "mihs");
    return LambdaHeadVar__2_1571;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2150__1_1_f_0(
  MR_String LambdaHeadVar__1_1565)
{
  {
    MR_String LambdaHeadVar__2_1566;
    MR_String Var_1567;

    Var_1567 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1565, (MR_String) "Mercury");
    LambdaHeadVar__2_1566 = mercury__dir__f_slash_2_f_0(Var_1567, (MR_String) "hrls");
    return LambdaHeadVar__2_1566;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2149__1_1_f_0(
  MR_String LambdaHeadVar__1_1560)
{
  {
    MR_String LambdaHeadVar__2_1561;
    MR_String Var_1562;

    Var_1562 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1560, (MR_String) "Mercury");
    LambdaHeadVar__2_1561 = mercury__dir__f_slash_2_f_0(Var_1562, (MR_String) "mihs");
    return LambdaHeadVar__2_1561;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2119__1_2_f_0(
  MR_Word ToGradeSubdir_179,
  MR_String LambdaHeadVar__1_1547)
{
  {
    MR_String LambdaHeadVar__2_1548;
    MR_String Var_1549;
    MR_String Var_1550;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToGradeSubdir_179, (MR_Integer) 1))));
    MR_Box conv1_Var_1550;

    conv1_Var_1550 = func_0(((MR_Box) (ToGradeSubdir_179)), ((MR_Box) (LambdaHeadVar__1_1547)));
    Var_1550 = ((MR_String) (conv1_Var_1550));
    Var_1549 = mercury__dir__f_slash_2_f_0(Var_1550, (MR_String) "Mercury");
    LambdaHeadVar__2_1548 = mercury__dir__f_slash_2_f_0(Var_1549, (MR_String) "inits");
    return LambdaHeadVar__2_1548;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2115__1_2_f_0(
  MR_Word ToGradeSubdir_179,
  MR_String LambdaHeadVar__1_1541)
{
  {
    MR_String LambdaHeadVar__2_1542;
    MR_String Var_1543;
    MR_String Var_1544;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToGradeSubdir_179, (MR_Integer) 1))));
    MR_Box conv1_Var_1544;

    conv1_Var_1544 = func_0(((MR_Box) (ToGradeSubdir_179)), ((MR_Box) (LambdaHeadVar__1_1541)));
    Var_1544 = ((MR_String) (conv1_Var_1544));
    Var_1543 = mercury__dir__f_slash_2_f_0(Var_1544, (MR_String) "Mercury");
    LambdaHeadVar__2_1542 = mercury__dir__f_slash_2_f_0(Var_1543, (MR_String) "lib");
    return LambdaHeadVar__2_1542;
  }
}

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2097__2_2_p_0(
  MR_Word HeadVar__1_1534,
  MR_String HeadVar__2_1683)
{
  {
    MR_bool succeeded;

    succeeded = mercury__std_util__isnt_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadVar__1_1534, ((MR_Box) (HeadVar__2_1683)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2097__1_2_p_0(
  MR_String HeadVar__1_1535,
  MR_String HeadVar__2_1685)
{
  {
    MR_bool succeeded = (strcmp(HeadVar__1_1535, HeadVar__2_1685) == 0);

    return succeeded;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2079__1_3_f_0(
  MR_String TargetArch_144,
  MR_String GradeString_159,
  MR_String LambdaHeadVar__1_1522)
{
  {
    MR_String LambdaHeadVar__2_1523;
    MR_String Var_1524;
    MR_String Var_1525;

    Var_1525 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1522, (MR_String) "Mercury");
    Var_1524 = mercury__dir__f_slash_2_f_0(Var_1525, GradeString_159);
    LambdaHeadVar__2_1523 = mercury__dir__f_slash_2_f_0(Var_1524, TargetArch_144);
    return LambdaHeadVar__2_1523;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2043__1_2_f_0(
  MR_String GradeString_159,
  MR_String LambdaHeadVar__1_1503)
{
  {
    MR_String LambdaHeadVar__2_1504;
    MR_String Var_1505;

    Var_1505 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1503, (MR_String) "modules");
    LambdaHeadVar__2_1504 = mercury__dir__f_slash_2_f_0(Var_1505, GradeString_159);
    return LambdaHeadVar__2_1504;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2033__1_2_f_0(
  MR_String GradeString_159,
  MR_String LambdaHeadVar__1_1493)
{
  {
    MR_String LambdaHeadVar__2_1494;
    MR_String Var_1495;

    Var_1495 = mercury__dir__make_path_name_2_f_0((MR_String) "ints", GradeString_159);
    LambdaHeadVar__2_1494 = mercury__dir__make_path_name_2_f_0(LambdaHeadVar__1_1493, Var_1495);
    return LambdaHeadVar__2_1494;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2020__1_2_f_0(
  MR_String GradeString_159,
  MR_String LambdaHeadVar__1_1476)
{
  {
    MR_String LambdaHeadVar__2_1477;
    MR_String Var_1478;
    MR_String Var_1479;

    Var_1479 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1476, (MR_String) "lib");
    Var_1478 = mercury__dir__f_slash_2_f_0(Var_1479, GradeString_159);
    LambdaHeadVar__2_1477 = mercury__dir__f_slash_2_f_0(Var_1478, (MR_String) "inc");
    return LambdaHeadVar__2_1477;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2000__1_2_f_0(
  MR_String GradeString_159,
  MR_String LambdaHeadVar__1_1461)
{
  {
    MR_String LambdaHeadVar__2_1462;
    MR_String Var_1463;

    Var_1463 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1461, (MR_String) "lib");
    LambdaHeadVar__2_1462 = mercury__dir__f_slash_2_f_0(Var_1463, GradeString_159);
    return LambdaHeadVar__2_1462;
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
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Fullarch_5));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[241])));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) ((MR_String) ", on "));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_14));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Version_4));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_12));
    }
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
          mercury__io__write_strings_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[4])));
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
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Fullarch_5));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[2])));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) ((MR_String) ", on "));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_14));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Version_4));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_12));
    }
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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

    succeeded = libs__options__special_handler_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_HeadVar__4_4);
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
    struct libs__handle_options__separate_option_args_5_p_0_4_env_0_s * env_ptr = (struct libs__handle_options__separate_option_args_5_p_0_4_env_0_s *) (env_ptr_arg);

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

    succeeded = libs__options__long_option_2_p_0(((MR_String) (wrapper_arg_1)), &conv1_HeadVar__2_2);
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

    mercury__getopt_io__process_options_7_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_8[1])), Args0_6, OptionArgs_7, Args_8, &Var_10);
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

    conv0_HeadVar__3_3 = libs__op_mode__op_mode_to_option_string_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
  if (((MR_tag((MR_Word) MaybeOptionTable0_6)) == (MR_Integer) 1))
  {
    MR_String ErrorMessage_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeOptionTable0_6, (MR_Integer) 0))));
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
      Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (ErrorMessage_10));
    }
    {
      OptionTablePieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), OptionTablePieces_11, 0) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(1), OptionTablePieces_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_74 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (OptionTablePieces_11));
    }
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      OptionTableMsg_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), OptionTableMsg_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), OptionTableMsg_12, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(1), OptionTableMsg_12, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), OptionTableMsg_12, 3) = ((MR_Box) (Var_73));
    }
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (OptionTableMsg_12));
      MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      OptionTableSpec_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OptionTableSpec_13, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), OptionTableSpec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), OptionTableSpec_13, 2) = ((MR_Box) (Var_78));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_41 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (OptionTableSpec_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    libs__handle_options__handle_given_options_7_p_0((MR_Word) ((MR_Unsigned) 0U), &Var_92, &Var_93, &Var_94, Globals_8);
  }
  else
  {
    MR_Word OptionTable0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeOptionTable0_6, (MR_Integer) 0))));
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
    if ((OtherOpModes_34 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_64_64 = STATE_VARIABLE_Specs_44_44;
    else
    {
      MR_Word OpModeStrs_37;
      MR_Word OpModePieces_38;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_55;
      MR_Word Var_56;

      {
        Var_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[2]));
        MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (libs__handle_options__convert_option_table_result_to_globals_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (OptionTable_15));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (OpMode_33));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (OtherOpModes_34));
      }
      OpModeStrs_37 = mercury__list__map_2_f_0((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_46, Var_47);
      Var_56 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(OpModeStrs_37);
      Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_56, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      OpModePieces_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[8])), Var_55);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), OpModePieces_38, STATE_VARIABLE_Specs_44_44, &STATE_VARIABLE_Specs_64_64);
    }
    if ((STATE_VARIABLE_Specs_64_64 == (MR_Word) ((MR_Unsigned) 0U)))
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

    succeeded = libs__options__special_handler_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_HeadVar__4_4);
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
    struct libs__handle_options__handle_given_options_7_p_0_4_env_0_s * env_ptr = (struct libs__handle_options__handle_given_options_7_p_0_4_env_0_s *) (env_ptr_arg);

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

    succeeded = libs__options__long_option_2_p_0(((MR_String) (wrapper_arg_1)), &conv1_HeadVar__2_2);
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

    mercury__getopt_io__process_options_7_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_8[0])), Args0_8, OptionArgs_9, Args_10, &Result_15);
    libs__handle_options__convert_option_table_result_to_globals_5_p_0(Result_15, Specs_11, &STATE_VARIABLE_Globals_38_38);
    if ((*Specs_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word OpMode_18;
      MR_Word Smart_19;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;

      libs__globals__get_op_mode_2_p_0(STATE_VARIABLE_Globals_38_38, &OpMode_18);
      libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_38_38, (MR_Integer) 130, &Smart_19);
      succeeded = (Smart_19 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) OpMode_18)) == (MR_Integer) 3);
        if (succeeded)
        {
          Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_18, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) Var_42)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 0))) & (MR_Integer) 3);
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

    libs__handle_options__handle_given_options_7_p_0((MR_Word) ((MR_Unsigned) 0U), &Var_6, &Var_7, &Var_8, DefaultGlobals_4);
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
    MR_String conv10_LambdaHeadVar__2_1577;

    conv10_LambdaHeadVar__2_1577 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2143__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv10_LambdaHeadVar__2_1577));
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
    MR_String conv9_LambdaHeadVar__2_1571;

    conv9_LambdaHeadVar__2_1571 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2141__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv9_LambdaHeadVar__2_1571));
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
    MR_String conv8_LambdaHeadVar__2_1566;

    conv8_LambdaHeadVar__2_1566 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2150__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv8_LambdaHeadVar__2_1566));
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
    MR_String conv7_LambdaHeadVar__2_1561;

    conv7_LambdaHeadVar__2_1561 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2149__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv7_LambdaHeadVar__2_1561));
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
    MR_String conv6_LambdaHeadVar__2_1548;

    conv6_LambdaHeadVar__2_1548 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2119__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_1548));
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
    MR_String conv5_LambdaHeadVar__2_1542;

    conv5_LambdaHeadVar__2_1542 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2115__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv5_LambdaHeadVar__2_1542));
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

    succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2097__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
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

    succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2097__1_2_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
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
    MR_String conv4_LambdaHeadVar__2_1523;

    conv4_LambdaHeadVar__2_1523 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2079__1_3_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_1523));
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
    MR_String conv3_LambdaHeadVar__2_1504;

    conv3_LambdaHeadVar__2_1504 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2043__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_1504));
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
    MR_String conv2_LambdaHeadVar__2_1494;

    conv2_LambdaHeadVar__2_1494 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2033__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_1494));
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
    MR_String conv1_LambdaHeadVar__2_1477;

    conv1_LambdaHeadVar__2_1477 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2020__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_1477));
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
    MR_String conv0_LambdaHeadVar__2_1462;

    conv0_LambdaHeadVar__2_1462 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2000__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_1462));
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
  MR_Word STATE_VARIABLE_Specs_0_214,
  MR_Word * STATE_VARIABLE_Specs_215,
  MR_Word * STATE_VARIABLE_Globals_216)
{
  {
    MR_bool succeeded;
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
    MR_Word HighLevelData_114;
    MR_Word ProfOptimized_119;
    MR_String ExpComp_120;
    MR_Word TraceOptimized_121;
    MR_Word TraceLevelIsNone_122;
    MR_Word ProfileDeep_124;
    MR_Word RecordTermSizesAsWords_127;
    MR_Word RecordTermSizesAsCells_128;
    MR_Word PutNondetEnvOnHeap_132;
    MR_Word DisablePneg_134;
    MR_Word DisableCut_135;
    MR_Word DumpHLDSStages_136;
    MR_Word DumpTraceStages_137;
    MR_Word ParallelLiveness_138;
    MR_Word ParallelCodeGen_139;
    MR_String TargetArch_144;
    MR_String MercuryLinkage_145;
    MR_Word DefaultRuntimeLibraryDirs_146;
    MR_Word MaybeStdLibDir_147;
    MR_Word MaybeConfDir_153;
    MR_Word ConfigFile_156;
    MR_Word MercuryLibDirs_158;
    MR_String GradeString_159;
    MR_Word UseSearchDirs_173;
    MR_Word UseGradeSubdirs_176;
    MR_Word SearchLibFilesDirs_177;
    MR_Word IntermodDirs2_178;
    MR_Word ToGradeSubdir_179;
    MR_Word LinkLibDirs_188;
    MR_Word InitDirs_191;
    MR_Word UseSubdirs_192;
    MR_Word WarnNonTailRecSelf_202;
    MR_Word WarnNonTailRecMutual_203;
    MR_Word BackendForeignLanguages_209;
    MR_Word CurrentBackendForeignLanguage_210;
    MR_Integer CompareSpec_213;
    MR_Word STATE_VARIABLE_Globals_221_221;
    MR_Word STATE_VARIABLE_Specs_222_222;
    MR_Word STATE_VARIABLE_Globals_228_228;
    MR_Word STATE_VARIABLE_Globals_235_235;
    MR_Word STATE_VARIABLE_Globals_260_260;
    MR_Word STATE_VARIABLE_Specs_291_291;
    MR_Word Var_293;
    MR_Word STATE_VARIABLE_Globals_294_294;
    MR_Word STATE_VARIABLE_Globals_295_295;
    MR_Word STATE_VARIABLE_Specs_313_313;
    MR_Word STATE_VARIABLE_Globals_336_336;
    MR_Word STATE_VARIABLE_Specs_357_357;
    MR_Word Var_360;
    MR_Word STATE_VARIABLE_Globals_361_361;
    MR_Word STATE_VARIABLE_Globals_365_365;
    MR_Word STATE_VARIABLE_Globals_498_498;
    MR_Word STATE_VARIABLE_Globals_503_503;
    MR_Word Var_507;
    MR_Word STATE_VARIABLE_Globals_508_508;
    MR_Word STATE_VARIABLE_Globals_513_513;
    MR_Word Var_517;
    MR_Word STATE_VARIABLE_Globals_518_518;
    MR_Word STATE_VARIABLE_Globals_523_523;
    MR_Word STATE_VARIABLE_Globals_528_528;
    MR_Word STATE_VARIABLE_Globals_533_533;
    MR_Word STATE_VARIABLE_Globals_538_538;
    MR_Word STATE_VARIABLE_Globals_547_547;
    MR_Word STATE_VARIABLE_Globals_552_552;
    MR_Word STATE_VARIABLE_Globals_556_556;
    MR_Word STATE_VARIABLE_Specs_577_577;
    MR_Word STATE_VARIABLE_Specs_598_598;
    MR_Word STATE_VARIABLE_Globals_601_601;
    MR_Word STATE_VARIABLE_Specs_623_623;
    MR_Word STATE_VARIABLE_Globals_627_627;
    MR_Word STATE_VARIABLE_Globals_632_632;
    MR_Word STATE_VARIABLE_Globals_637_637;
    MR_Word STATE_VARIABLE_Globals_642_642;
    MR_Word STATE_VARIABLE_Globals_647_647;
    MR_Word STATE_VARIABLE_Globals_652_652;
    MR_Word STATE_VARIABLE_Globals_657_657;
    MR_Word STATE_VARIABLE_Globals_663_663;
    MR_Word STATE_VARIABLE_Globals_668_668;
    MR_Word STATE_VARIABLE_Globals_673_673;
    MR_Word STATE_VARIABLE_Globals_678_678;
    MR_Word STATE_VARIABLE_Globals_683_683;
    MR_Word STATE_VARIABLE_Globals_687_687;
    MR_Word STATE_VARIABLE_Globals_692_692;
    MR_Word STATE_VARIABLE_Globals_697_697;
    MR_Word STATE_VARIABLE_Globals_703_703;
    MR_Word STATE_VARIABLE_Globals_714_714;
    MR_Word STATE_VARIABLE_Globals_719_719;
    MR_Word STATE_VARIABLE_Globals_725_725;
    MR_Word STATE_VARIABLE_Globals_742_742;
    MR_Word STATE_VARIABLE_Globals_747_747;
    MR_Word STATE_VARIABLE_Globals_752_752;
    MR_Word STATE_VARIABLE_Globals_757_757;
    MR_Word STATE_VARIABLE_Globals_763_763;
    MR_Word STATE_VARIABLE_Globals_768_768;
    MR_Word STATE_VARIABLE_Globals_773_773;
    MR_Word STATE_VARIABLE_Globals_778_778;
    MR_Word STATE_VARIABLE_Globals_786_786;
    MR_Word STATE_VARIABLE_Globals_790_790;
    MR_Word STATE_VARIABLE_Globals_796_796;
    MR_Word STATE_VARIABLE_Globals_801_801;
    MR_Word STATE_VARIABLE_Globals_807_807;
    MR_Word STATE_VARIABLE_Globals_819_819;
    MR_Word STATE_VARIABLE_Globals_823_823;
    MR_Word STATE_VARIABLE_Globals_828_828;
    MR_Word STATE_VARIABLE_Globals_833_833;
    MR_Word STATE_VARIABLE_Globals_838_838;
    MR_Word STATE_VARIABLE_Specs_853_853;
    MR_Word STATE_VARIABLE_Specs_910_910;
    MR_Word STATE_VARIABLE_Globals_913_913;
    MR_Word STATE_VARIABLE_Globals_933_933;
    MR_Word STATE_VARIABLE_Globals_938_938;
    MR_Word STATE_VARIABLE_Globals_943_943;
    MR_Word STATE_VARIABLE_Globals_947_947;
    MR_Word STATE_VARIABLE_Globals_951_951;
    MR_Word STATE_VARIABLE_Globals_956_956;
    MR_Word STATE_VARIABLE_Globals_961_961;
    MR_Word STATE_VARIABLE_Globals_966_966;
    MR_Word STATE_VARIABLE_Globals_971_971;
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
    MR_Word STATE_VARIABLE_Globals_1037_1037;
    MR_Word STATE_VARIABLE_Globals_1134_1134;
    MR_Word STATE_VARIABLE_Globals_1139_1139;
    MR_Word STATE_VARIABLE_Specs_1151_1151;
    MR_Word STATE_VARIABLE_Globals_1163_1163;
    MR_Word STATE_VARIABLE_Specs_1173_1173;
    MR_Word STATE_VARIABLE_Globals_1180_1180;
    MR_Word STATE_VARIABLE_Specs_1199_1199;
    MR_Word STATE_VARIABLE_Globals_1203_1203;
    MR_Word STATE_VARIABLE_Globals_1208_1208;
    MR_Word STATE_VARIABLE_Globals_1213_1213;
    MR_Word STATE_VARIABLE_Globals_1218_1218;
    MR_Word STATE_VARIABLE_Globals_1223_1223;
    MR_Word STATE_VARIABLE_Globals_1228_1228;
    MR_Word STATE_VARIABLE_Globals_1233_1233;
    MR_Word STATE_VARIABLE_Globals_1238_1238;
    MR_Word STATE_VARIABLE_Globals_1282_1282;
    MR_Word STATE_VARIABLE_Specs_1300_1300;
    MR_Word STATE_VARIABLE_Globals_1304_1304;
    MR_Word STATE_VARIABLE_Globals_1309_1309;
    MR_Word STATE_VARIABLE_Globals_1314_1314;
    MR_Word STATE_VARIABLE_Globals_1319_1319;
    MR_Word STATE_VARIABLE_Globals_1324_1324;
    MR_Word STATE_VARIABLE_Globals_1329_1329;
    MR_Word STATE_VARIABLE_Globals_1334_1334;
    MR_Word STATE_VARIABLE_Globals_1339_1339;
    MR_Word STATE_VARIABLE_Globals_1344_1344;
    MR_Word STATE_VARIABLE_Globals_1349_1349;
    MR_Word STATE_VARIABLE_Globals_1355_1355;
    MR_Word STATE_VARIABLE_Globals_1359_1359;
    MR_Word STATE_VARIABLE_Globals_1367_1367;
    MR_Word STATE_VARIABLE_Globals_1372_1372;
    MR_Word STATE_VARIABLE_Globals_1377_1377;
    MR_Word STATE_VARIABLE_Globals_1382_1382;
    MR_Word STATE_VARIABLE_Globals_1387_1387;
    MR_Word STATE_VARIABLE_Globals_1392_1392;
    MR_Word STATE_VARIABLE_Globals_1397_1397;
    MR_Word STATE_VARIABLE_Globals_1403_1403;
    MR_Word STATE_VARIABLE_Globals_1408_1408;
    MR_Word STATE_VARIABLE_Globals_1412_1412;
    MR_Word STATE_VARIABLE_Globals_1418_1418;
    MR_Word STATE_VARIABLE_Globals_1433_1433;
    MR_Word STATE_VARIABLE_Globals_1441_1441;
    MR_Word STATE_VARIABLE_Globals_1453_1453;
    MR_Word STATE_VARIABLE_Globals_1510_1510;
    MR_Word STATE_VARIABLE_Globals_1517_1517;
    MR_Word STATE_VARIABLE_Globals_1538_1538;
    MR_Word Var_1554;
    MR_Word STATE_VARIABLE_Globals_1555_1555;
    MR_Word Var_1557;
    MR_Word STATE_VARIABLE_Globals_1558_1558;
    MR_Word STATE_VARIABLE_Globals_1594_1594;
    MR_Word STATE_VARIABLE_Globals_1598_1598;
    MR_Word STATE_VARIABLE_Specs_1622_1622;
    MR_Word STATE_VARIABLE_Globals_1633_1633;
    MR_Word STATE_VARIABLE_Globals_1644_1644;
    MR_Word STATE_VARIABLE_Globals_1653_1653;
    MR_Word STATE_VARIABLE_Globals_1658_1658;
    MR_Word STATE_VARIABLE_Globals_1664_1664;
    MR_Word Var_659;
    MR_Word Var_660;
    MR_Word Var_699;
    MR_Word Var_700;
    MR_Word Var_1691;
    MR_Word Var_716;
    MR_Word Var_721;
    MR_Word Var_722;
    MR_String AllDumpOptions_86;
    MR_String Var_782;
    MR_Word Var_1399;
    MR_Word Var_1400;
    MR_String Var_1446;
    MR_Word ToMihsSubdir_193;
    MR_Word ToHrlsSubdir_194;
    MR_Integer Var_1655;

    mercury__getopt_io__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable0_25, ((MR_Box) ((MR_Integer) 652)), &InstallCmd_47);
    succeeded = (strcmp(InstallCmd_47, (MR_String) "") == 0);
    if (succeeded)
      FileInstallCmd_48 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String InstallCmdDirOption_49;

      mercury__getopt_io__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable0_25, ((MR_Box) ((MR_Integer) 653)), &InstallCmdDirOption_49);
      {
        FileInstallCmd_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FileInstallCmd_48, 0) = ((MR_Box) (InstallCmd_47));
        MR_hl_field(MR_mktag(1), FileInstallCmd_48, 1) = ((MR_Box) (InstallCmdDirOption_49));
      }
    }
    libs__globals__globals_init_21_p_0(OptionTable0_25, OpMode_26, Target_27, GC_Method_28, TagsMethod0_29, TermNorm_30, Term2Norm_31, TraceLevel_32, TraceSuppress_33, SSTraceLevel_34, MaybeThreadSafe_35, C_CompilerType_36, CSharp_CompilerType_37, ReuseStrategy_38, MaybeFeedbackInfo_39, HostEnvType_40, SystemEnvType_41, TargetEnvType_42, FileInstallCmd_48, LimitErrorContextsMap_43, &STATE_VARIABLE_Globals_221_221);
    libs__compute_grade__check_grade_component_compatibility_5_p_0(STATE_VARIABLE_Globals_221_221, Target_27, GC_Method_28, STATE_VARIABLE_Specs_0_214, &STATE_VARIABLE_Specs_222_222);
    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_221_221, (MR_Integer) 194, &EventSetFileName0_50);
    succeeded = (strcmp(EventSetFileName0_50, (MR_String) "") == 0);
    if (succeeded)
    {
      MR_Word MaybeEventSetFileName_51;

      mercury__io__get_environment_var_4_p_0((MR_String) "MERCURY_EVENT_SET_FILE_NAME", &MaybeEventSetFileName_51);
      if ((MaybeEventSetFileName_51 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Globals_228_228 = STATE_VARIABLE_Globals_221_221;
      else
      {
        MR_String EventSetFileName_52 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeEventSetFileName_51, (MR_Integer) 0))));
        MR_Word Var_227;

        {
          Var_227 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_227, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_227, 1) = ((MR_Box) (EventSetFileName_52));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 194, Var_227, STATE_VARIABLE_Globals_221_221, &STATE_VARIABLE_Globals_228_228);
      }
    }
    else
      STATE_VARIABLE_Globals_228_228 = STATE_VARIABLE_Globals_221_221;
    GCIsConservative_53 = libs__globals__gc_is_conservative_1_f_0(GC_Method_28);
    switch (GCIsConservative_53) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_235_235 = STATE_VARIABLE_Globals_228_228;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_230 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]));
          MR_Word STATE_VARIABLE_Globals_231_231;

          libs__globals__set_option_4_p_0((MR_Integer) 323, Var_230, STATE_VARIABLE_Globals_228_228, &STATE_VARIABLE_Globals_231_231);
          libs__globals__set_option_4_p_0((MR_Integer) 324, Var_230, STATE_VARIABLE_Globals_231_231, &STATE_VARIABLE_Globals_235_235);
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_235_235, (MR_Integer) 241, &PregeneratedDist_54);
    switch (PregeneratedDist_54) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_260_260 = STATE_VARIABLE_Globals_235_235;
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_Globals_240_240;
          MR_Word STATE_VARIABLE_Globals_244_244;
          MR_Word Var_247;
          MR_Word STATE_VARIABLE_Globals_248_248;
          MR_Word STATE_VARIABLE_Globals_252_252;
          MR_Word STATE_VARIABLE_Globals_256_256;

          libs__globals__set_option_4_p_0((MR_Integer) 255, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[3])), STATE_VARIABLE_Globals_235_235, &STATE_VARIABLE_Globals_240_240);
          libs__globals__set_option_4_p_0((MR_Integer) 262, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[4])), STATE_VARIABLE_Globals_240_240, &STATE_VARIABLE_Globals_244_244);
          Var_247 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]));
          libs__globals__set_option_4_p_0((MR_Integer) 259, Var_247, STATE_VARIABLE_Globals_244_244, &STATE_VARIABLE_Globals_248_248);
          libs__globals__set_option_4_p_0((MR_Integer) 260, Var_247, STATE_VARIABLE_Globals_248_248, &STATE_VARIABLE_Globals_252_252);
          libs__globals__set_option_4_p_0((MR_Integer) 242, Var_247, STATE_VARIABLE_Globals_252_252, &STATE_VARIABLE_Globals_256_256);
          libs__globals__set_option_4_p_0((MR_Integer) 263, Var_247, STATE_VARIABLE_Globals_256_256, &STATE_VARIABLE_Globals_260_260);
        }
        break;
    }
    switch (TagsMethod0_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_260_260, (MR_Integer) 255, &NumPtagBits0_55);
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
      libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_260_260, (MR_Integer) 258, &NumPtagBits1_56);
    }
    else
      NumPtagBits1_56 = NumPtagBits0_55;
    succeeded = (NumPtagBits1_56 < (MR_Integer) 0);
    if (succeeded)
    {
      NumPtagBits_57 = (MR_Integer) 0;
      libs__compiler_util__add_warning_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[146])), STATE_VARIABLE_Specs_222_222, &STATE_VARIABLE_Specs_291_291);
    }
    else
    {
      NumPtagBits_57 = NumPtagBits1_56;
      STATE_VARIABLE_Specs_291_291 = STATE_VARIABLE_Specs_222_222;
    }
    {
      Var_293 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_293, 0) = ((MR_Box) (NumPtagBits_57));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 255, Var_293, STATE_VARIABLE_Globals_260_260, &STATE_VARIABLE_Globals_294_294);
    succeeded = (NumPtagBits_57 == (MR_Integer) 0);
    if (succeeded)
    {
      TagsMethod_59 = (MR_Integer) 0;
      libs__globals__set_tags_method_3_p_0(TagsMethod_59, STATE_VARIABLE_Globals_294_294, &STATE_VARIABLE_Globals_295_295);
    }
    else
    {
      TagsMethod_59 = TagsMethod0_29;
      STATE_VARIABLE_Globals_295_295 = STATE_VARIABLE_Globals_294_294;
    }
    libs__globals__current_grade_supports_par_conj_2_p_0(STATE_VARIABLE_Globals_295_295, &GradeSupportsParConj_60);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_295_295, (MR_Integer) 234, &Parallel_61);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_295_295, (MR_Integer) 235, &Threadscope_62);
    succeeded = (GradeSupportsParConj_60 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (Threadscope_62 == (MR_Integer) 1);
    if (succeeded)
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[154])), STATE_VARIABLE_Specs_291_291, &STATE_VARIABLE_Specs_313_313);
    }
    else
      STATE_VARIABLE_Specs_313_313 = STATE_VARIABLE_Specs_291_291;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_295_295, (MR_Integer) 691, &ImplicitParallelism_64);
    switch (ImplicitParallelism_64) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_Specs_357_357 = STATE_VARIABLE_Specs_313_313;
          STATE_VARIABLE_Globals_336_336 = STATE_VARIABLE_Globals_295_295;
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
                  STATE_VARIABLE_Specs_357_357 = STATE_VARIABLE_Specs_313_313;
                  break;
                case (MR_Integer) 1:
                  {
                    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[163])), STATE_VARIABLE_Specs_313_313, &STATE_VARIABLE_Specs_357_357);
                  }
                  break;
              }
              libs__globals__set_option_4_p_0((MR_Integer) 691, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2])), STATE_VARIABLE_Globals_295_295, &STATE_VARIABLE_Globals_336_336);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String FeedbackFile_65;

              libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_295_295, (MR_Integer) 692, &FeedbackFile_65);
              succeeded = (strcmp(FeedbackFile_65, (MR_String) "") == 0);
              if (succeeded)
              {
                libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[169])), STATE_VARIABLE_Specs_313_313, &STATE_VARIABLE_Specs_357_357);
              }
              else
                STATE_VARIABLE_Specs_357_357 = STATE_VARIABLE_Specs_313_313;
              STATE_VARIABLE_Globals_336_336 = STATE_VARIABLE_Globals_295_295;
            }
            break;
        }
        break;
    }
    Var_360 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]));
    libs__handle_options__option_implies_5_p_0((MR_Integer) 691, (MR_Integer) 216, Var_360, STATE_VARIABLE_Globals_336_336, &STATE_VARIABLE_Globals_361_361);
    switch (GradeSupportsParConj_60) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__globals__set_option_4_p_0((MR_Integer) 693, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2])), STATE_VARIABLE_Globals_361_361, &STATE_VARIABLE_Globals_365_365);
        }
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_365_365 = STATE_VARIABLE_Globals_361_361;
        break;
    }
    switch (Target_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__handle_options__option_implies_5_p_0((MR_Integer) 277, (MR_Integer) 281, Var_360, STATE_VARIABLE_Globals_365_365, &STATE_VARIABLE_Globals_498_498);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word STATE_VARIABLE_Globals_439_439;
          MR_Word STATE_VARIABLE_Globals_442_442;
          MR_Word Var_445;
          MR_Word STATE_VARIABLE_Globals_446_446;
          MR_Word STATE_VARIABLE_Globals_450_450;
          MR_Word STATE_VARIABLE_Globals_454_454;
          MR_Word STATE_VARIABLE_Globals_458_458;
          MR_Word STATE_VARIABLE_Globals_462_462;
          MR_Word STATE_VARIABLE_Globals_466_466;
          MR_Word STATE_VARIABLE_Globals_470_470;
          MR_Word STATE_VARIABLE_Globals_474_474;
          MR_Word STATE_VARIABLE_Globals_478_478;
          MR_Word STATE_VARIABLE_Globals_482_482;
          MR_Word STATE_VARIABLE_Globals_486_486;
          MR_Word STATE_VARIABLE_Globals_490_490;
          MR_Word STATE_VARIABLE_Globals_494_494;

          libs__globals__set_gc_method_3_p_0((MR_Integer) 0, STATE_VARIABLE_Globals_365_365, &STATE_VARIABLE_Globals_439_439);
          libs__globals__set_option_4_p_0((MR_Integer) 233, (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[221])), STATE_VARIABLE_Globals_439_439, &STATE_VARIABLE_Globals_442_442);
          Var_445 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]));
          libs__globals__set_option_4_p_0((MR_Integer) 324, Var_445, STATE_VARIABLE_Globals_442_442, &STATE_VARIABLE_Globals_446_446);
          libs__globals__set_option_4_p_0((MR_Integer) 323, Var_445, STATE_VARIABLE_Globals_446_446, &STATE_VARIABLE_Globals_450_450);
          libs__globals__set_option_4_p_0((MR_Integer) 277, Var_360, STATE_VARIABLE_Globals_450_450, &STATE_VARIABLE_Globals_454_454);
          libs__globals__set_option_4_p_0((MR_Integer) 278, Var_360, STATE_VARIABLE_Globals_454_454, &STATE_VARIABLE_Globals_458_458);
          libs__globals__set_option_4_p_0((MR_Integer) 259, Var_360, STATE_VARIABLE_Globals_458_458, &STATE_VARIABLE_Globals_462_462);
          libs__globals__set_option_4_p_0((MR_Integer) 260, Var_360, STATE_VARIABLE_Globals_462_462, &STATE_VARIABLE_Globals_466_466);
          libs__globals__set_option_4_p_0((MR_Integer) 280, Var_360, STATE_VARIABLE_Globals_466_466, &STATE_VARIABLE_Globals_470_470);
          libs__globals__set_option_4_p_0((MR_Integer) 279, Var_360, STATE_VARIABLE_Globals_470_470, &STATE_VARIABLE_Globals_474_474);
          libs__globals__set_option_4_p_0((MR_Integer) 255, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[5])), STATE_VARIABLE_Globals_474_474, &STATE_VARIABLE_Globals_478_478);
          libs__globals__set_option_4_p_0((MR_Integer) 261, Var_445, STATE_VARIABLE_Globals_478_478, &STATE_VARIABLE_Globals_482_482);
          libs__globals__set_option_4_p_0((MR_Integer) 282, Var_360, STATE_VARIABLE_Globals_482_482, &STATE_VARIABLE_Globals_486_486);
          libs__globals__set_option_4_p_0((MR_Integer) 291, Var_360, STATE_VARIABLE_Globals_486_486, &STATE_VARIABLE_Globals_490_490);
          libs__globals__set_option_4_p_0((MR_Integer) 668, Var_445, STATE_VARIABLE_Globals_490_490, &STATE_VARIABLE_Globals_494_494);
          switch (Target_27) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                libs__globals__set_option_4_p_0((MR_Integer) 592, (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])), STATE_VARIABLE_Globals_494_494, &STATE_VARIABLE_Globals_498_498);
              }
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_Globals_498_498 = STATE_VARIABLE_Globals_494_494;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word STATE_VARIABLE_Globals_373_373;
          MR_Word STATE_VARIABLE_Globals_376_376;
          MR_Word STATE_VARIABLE_Globals_380_380;
          MR_Word STATE_VARIABLE_Globals_384_384;
          MR_Word Var_387;
          MR_Word STATE_VARIABLE_Globals_388_388;
          MR_Word STATE_VARIABLE_Globals_392_392;
          MR_Word STATE_VARIABLE_Globals_396_396;
          MR_Word STATE_VARIABLE_Globals_400_400;
          MR_Word STATE_VARIABLE_Globals_404_404;
          MR_Word STATE_VARIABLE_Globals_408_408;
          MR_Word STATE_VARIABLE_Globals_412_412;
          MR_Word STATE_VARIABLE_Globals_416_416;
          MR_Word STATE_VARIABLE_Globals_420_420;
          MR_Word STATE_VARIABLE_Globals_424_424;
          MR_Word STATE_VARIABLE_Globals_428_428;
          MR_Word STATE_VARIABLE_Globals_432_432;

          libs__globals__set_gc_method_3_p_0((MR_Integer) 0, STATE_VARIABLE_Globals_365_365, &STATE_VARIABLE_Globals_373_373);
          libs__globals__set_option_4_p_0((MR_Integer) 233, (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[221])), STATE_VARIABLE_Globals_373_373, &STATE_VARIABLE_Globals_376_376);
          libs__globals__set_option_4_p_0((MR_Integer) 259, Var_360, STATE_VARIABLE_Globals_376_376, &STATE_VARIABLE_Globals_380_380);
          libs__globals__set_option_4_p_0((MR_Integer) 260, Var_360, STATE_VARIABLE_Globals_380_380, &STATE_VARIABLE_Globals_384_384);
          Var_387 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]));
          libs__globals__set_option_4_p_0((MR_Integer) 324, Var_387, STATE_VARIABLE_Globals_384_384, &STATE_VARIABLE_Globals_388_388);
          libs__globals__set_option_4_p_0((MR_Integer) 323, Var_387, STATE_VARIABLE_Globals_388_388, &STATE_VARIABLE_Globals_392_392);
          libs__globals__set_option_4_p_0((MR_Integer) 294, Var_360, STATE_VARIABLE_Globals_392_392, &STATE_VARIABLE_Globals_396_396);
          libs__globals__set_option_4_p_0((MR_Integer) 290, Var_387, STATE_VARIABLE_Globals_396_396, &STATE_VARIABLE_Globals_400_400);
          libs__globals__set_option_4_p_0((MR_Integer) 292, Var_360, STATE_VARIABLE_Globals_400_400, &STATE_VARIABLE_Globals_404_404);
          libs__globals__set_option_4_p_0((MR_Integer) 293, Var_360, STATE_VARIABLE_Globals_404_404, &STATE_VARIABLE_Globals_408_408);
          libs__globals__set_option_4_p_0((MR_Integer) 668, Var_387, STATE_VARIABLE_Globals_408_408, &STATE_VARIABLE_Globals_412_412);
          libs__globals__set_option_4_p_0((MR_Integer) 477, Var_387, STATE_VARIABLE_Globals_412_412, &STATE_VARIABLE_Globals_416_416);
          libs__globals__set_option_4_p_0((MR_Integer) 273, Var_387, STATE_VARIABLE_Globals_416_416, &STATE_VARIABLE_Globals_420_420);
          libs__globals__set_option_4_p_0((MR_Integer) 274, Var_387, STATE_VARIABLE_Globals_420_420, &STATE_VARIABLE_Globals_424_424);
          libs__globals__set_option_4_p_0((MR_Integer) 275, Var_387, STATE_VARIABLE_Globals_424_424, &STATE_VARIABLE_Globals_428_428);
          libs__globals__set_option_4_p_0((MR_Integer) 277, Var_387, STATE_VARIABLE_Globals_428_428, &STATE_VARIABLE_Globals_432_432);
          libs__globals__set_option_4_p_0((MR_Integer) 278, Var_387, STATE_VARIABLE_Globals_432_432, &STATE_VARIABLE_Globals_498_498);
        }
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 237, (MR_Integer) 236, Var_360, STATE_VARIABLE_Globals_498_498, &STATE_VARIABLE_Globals_503_503);
    Var_507 = (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[223]));
    libs__handle_options__option_implies_5_p_0((MR_Integer) 115, (MR_Integer) 575, Var_507, STATE_VARIABLE_Globals_503_503, &STATE_VARIABLE_Globals_508_508);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 115, (MR_Integer) 577, Var_507, STATE_VARIABLE_Globals_508_508, &STATE_VARIABLE_Globals_513_513);
    Var_517 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]));
    libs__handle_options__option_implies_5_p_0((MR_Integer) 277, (MR_Integer) 273, Var_517, STATE_VARIABLE_Globals_513_513, &STATE_VARIABLE_Globals_518_518);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 277, (MR_Integer) 274, Var_517, STATE_VARIABLE_Globals_518_518, &STATE_VARIABLE_Globals_523_523);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 277, (MR_Integer) 275, Var_517, STATE_VARIABLE_Globals_523_523, &STATE_VARIABLE_Globals_528_528);
    libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 484, (MR_Integer) 477, Var_517, STATE_VARIABLE_Globals_528_528, &STATE_VARIABLE_Globals_533_533);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_533_533, (MR_Integer) 658, &LibLinkages0_68);
    if ((LibLinkages0_68 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      libs__globals__set_option_4_p_0((MR_Integer) 658, (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[172])), STATE_VARIABLE_Globals_533_533, &STATE_VARIABLE_Globals_538_538);
    }
    else
      STATE_VARIABLE_Globals_538_538 = STATE_VARIABLE_Globals_533_533;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_538_538, (MR_Integer) 645, &InvokedByMMCMake_71);
    succeeded = (OpMode_26 == (MR_Word) ((MR_Unsigned) 0U));
    if (!(succeeded))
      succeeded = (InvokedByMMCMake_71 == (MR_Integer) 1);
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 663, Var_360, STATE_VARIABLE_Globals_538_538, &STATE_VARIABLE_Globals_547_547);
    }
    else
      STATE_VARIABLE_Globals_547_547 = STATE_VARIABLE_Globals_538_538;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 645, (MR_Integer) 132, Var_517, STATE_VARIABLE_Globals_547_547, &STATE_VARIABLE_Globals_552_552);
    succeeded = (OpMode_26 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      STATE_VARIABLE_Globals_556_556 = STATE_VARIABLE_Globals_552_552;
    else
    {
      libs__globals__set_option_4_p_0((MR_Integer) 668, Var_517, STATE_VARIABLE_Globals_552_552, &STATE_VARIABLE_Globals_556_556);
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_556_556, (MR_Integer) 348, &TransOpt_72);
    switch (TransOpt_72) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Specs_577_577 = STATE_VARIABLE_Specs_357_357;
        break;
      case (MR_Integer) 1:
        {
          succeeded = (InvokedByMMCMake_71 == (MR_Integer) 1);
          if (!(succeeded))
            succeeded = (OpMode_26 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[179])), STATE_VARIABLE_Specs_357_357, &STATE_VARIABLE_Specs_577_577);
          }
          else
            STATE_VARIABLE_Specs_577_577 = STATE_VARIABLE_Specs_357_357;
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_556_556, (MR_Integer) 344, &InterModOpt_74);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_556_556, (MR_Integer) 349, &InterModAnalysis_75);
    succeeded = (InterModOpt_74 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (InterModAnalysis_75 == (MR_Integer) 1);
    if (succeeded)
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[185])), STATE_VARIABLE_Specs_577_577, &STATE_VARIABLE_Specs_598_598);
    }
    else
      STATE_VARIABLE_Specs_598_598 = STATE_VARIABLE_Specs_577_577;
    succeeded = mercury__io__have_symlinks_0_p_0();
    if (succeeded)
      STATE_VARIABLE_Globals_601_601 = STATE_VARIABLE_Globals_556_556;
    else
    {
      libs__globals__set_option_4_p_0((MR_Integer) 649, Var_517, STATE_VARIABLE_Globals_556_556, &STATE_VARIABLE_Globals_601_601);
    }
    libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_601_601, (MR_Integer) 109, &MaybeStandaloneInt_77);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_601_601, (MR_Integer) 585, &ExtraInitFunctions_78);
    succeeded = (MaybeStandaloneInt_77 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (ExtraInitFunctions_78 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[191])), STATE_VARIABLE_Specs_598_598, &STATE_VARIABLE_Specs_623_623);
    }
    else
      STATE_VARIABLE_Specs_623_623 = STATE_VARIABLE_Specs_598_598;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 429, (MR_Integer) 427, Var_360, STATE_VARIABLE_Globals_601_601, &STATE_VARIABLE_Globals_627_627);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 437, (MR_Integer) 436, Var_360, STATE_VARIABLE_Globals_627_627, &STATE_VARIABLE_Globals_632_632);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 436, (MR_Integer) 435, Var_360, STATE_VARIABLE_Globals_632_632, &STATE_VARIABLE_Globals_637_637);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 436, (MR_Integer) 15, Var_360, STATE_VARIABLE_Globals_637_637, &STATE_VARIABLE_Globals_642_642);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 444, (MR_Integer) 443, Var_360, STATE_VARIABLE_Globals_642_642, &STATE_VARIABLE_Globals_647_647);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 443, (MR_Integer) 442, Var_360, STATE_VARIABLE_Globals_647_647, &STATE_VARIABLE_Globals_652_652);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 443, (MR_Integer) 15, Var_360, STATE_VARIABLE_Globals_652_652, &STATE_VARIABLE_Globals_657_657);
    succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_659 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_659)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_660 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_659, (MR_Integer) 0))));
        succeeded = (Var_660 == (MR_Word) ((MR_Unsigned) 4U));
      }
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 348, Var_360, STATE_VARIABLE_Globals_657_657, &STATE_VARIABLE_Globals_663_663);
    }
    else
      STATE_VARIABLE_Globals_663_663 = STATE_VARIABLE_Globals_657_657;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 348, (MR_Integer) 344, Var_360, STATE_VARIABLE_Globals_663_663, &STATE_VARIABLE_Globals_668_668);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 347, (MR_Integer) 346, Var_360, STATE_VARIABLE_Globals_668_668, &STATE_VARIABLE_Globals_673_673);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 344, (MR_Integer) 346, Var_517, STATE_VARIABLE_Globals_673_673, &STATE_VARIABLE_Globals_678_678);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 348, (MR_Integer) 347, Var_517, STATE_VARIABLE_Globals_678_678, &STATE_VARIABLE_Globals_683_683);
    libs__globals__set_option_4_p_0((MR_Integer) 346, Var_517, STATE_VARIABLE_Globals_683_683, &STATE_VARIABLE_Globals_687_687);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 130, (MR_Integer) 131, Var_360, STATE_VARIABLE_Globals_687_687, &STATE_VARIABLE_Globals_692_692);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 64, (MR_Integer) 63, Var_360, STATE_VARIABLE_Globals_692_692, &STATE_VARIABLE_Globals_697_697);
    succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_699 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_699)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_700 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_699, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_700)) == (MR_Integer) 1);
        if (succeeded)
        {
        }
      }
    }
    if (succeeded)
      STATE_VARIABLE_Globals_703_703 = STATE_VARIABLE_Globals_697_697;
    else
    {
      libs__globals__set_option_4_p_0((MR_Integer) 130, Var_517, STATE_VARIABLE_Globals_697_697, &STATE_VARIABLE_Globals_703_703);
    }
    succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_1691 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0))));
      switch (MR_tag((MR_Word) Var_1691)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          switch (MR_unmkbody(Var_1691)) {
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
            MR_Word Var_1692 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1691, (MR_Integer) 0))));

            if ((Var_1692 == (MR_Word) ((MR_Unsigned) 0U)))
              succeeded = MR_TRUE;
            else
            if ((Var_1692 == (MR_Word) ((MR_Unsigned) 4U)))
              succeeded = MR_TRUE;
            else
              succeeded = MR_FALSE;
          }
          break;
      }
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 152, Var_517, STATE_VARIABLE_Globals_703_703, &STATE_VARIABLE_Globals_714_714);
    }
    else
      STATE_VARIABLE_Globals_714_714 = STATE_VARIABLE_Globals_703_703;
    succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_716 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0))));
      succeeded = (Var_716 == (MR_Word) ((MR_Unsigned) 12U));
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 131, Var_517, STATE_VARIABLE_Globals_714_714, &STATE_VARIABLE_Globals_719_719);
    }
    else
      STATE_VARIABLE_Globals_719_719 = STATE_VARIABLE_Globals_714_714;
    succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_721 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_721)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_722 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_721, (MR_Integer) 0))));
        succeeded = (Var_722 == (MR_Word) ((MR_Unsigned) 12U));
      }
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 344, Var_517, STATE_VARIABLE_Globals_719_719, &STATE_VARIABLE_Globals_725_725);
    }
    else
      STATE_VARIABLE_Globals_725_725 = STATE_VARIABLE_Globals_719_719;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_725_725, (MR_Integer) 130, &Smart_82);
    switch (Smart_82) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_742_742 = STATE_VARIABLE_Globals_725_725;
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_Globals_731_731;
          MR_Word STATE_VARIABLE_Globals_736_736;
          MR_Word Var_738;
          MR_Word Var_739;
          MR_Word Var_740;

          succeeded = libs__globals__lookup_bool_option_3_p_1(STATE_VARIABLE_Globals_725_725, (MR_Integer) 344, (MR_Integer) 1);
          if (succeeded)
          {
            libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "\140--intermodule-optimization\'", STATE_VARIABLE_Globals_725_725, &STATE_VARIABLE_Globals_731_731);
          }
          else
            STATE_VARIABLE_Globals_731_731 = STATE_VARIABLE_Globals_725_725;
          succeeded = libs__globals__lookup_bool_option_3_p_1(STATE_VARIABLE_Globals_731_731, (MR_Integer) 346, (MR_Integer) 1);
          if (succeeded)
          {
            libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "\140--use-opt-files\'", STATE_VARIABLE_Globals_731_731, &STATE_VARIABLE_Globals_736_736);
          }
          else
            STATE_VARIABLE_Globals_736_736 = STATE_VARIABLE_Globals_731_731;
          succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_Integer) 3);
          if (succeeded)
          {
            Var_738 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) Var_738)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_739 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_738, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) Var_739)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_740 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_739, (MR_Integer) 0))) & (MR_Integer) 3);
                succeeded = (Var_740 == (MR_Integer) 0);
              }
            }
          }
          if (succeeded)
            STATE_VARIABLE_Globals_742_742 = STATE_VARIABLE_Globals_736_736;
          else
          {
            libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "\140--no-target-code-only\'", STATE_VARIABLE_Globals_736_736, &STATE_VARIABLE_Globals_742_742);
          }
        }
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 664, (MR_Integer) 663, Var_360, STATE_VARIABLE_Globals_742_742, &STATE_VARIABLE_Globals_747_747);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 61, (MR_Integer) 60, Var_360, STATE_VARIABLE_Globals_747_747, &STATE_VARIABLE_Globals_752_752);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 60, (MR_Integer) 66, Var_360, STATE_VARIABLE_Globals_752_752, &STATE_VARIABLE_Globals_757_757);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_757_757, (MR_Integer) 61, &VeryVerbose_83);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_757_757, (MR_Integer) 70, &Statistics_84);
    succeeded = (VeryVerbose_83 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (Statistics_84 == (MR_Integer) 1);
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 71, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])), STATE_VARIABLE_Globals_757_757, &STATE_VARIABLE_Globals_763_763);
    }
    else
      STATE_VARIABLE_Globals_763_763 = STATE_VARIABLE_Globals_757_757;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 77, (MR_Integer) 75, Var_360, STATE_VARIABLE_Globals_763_763, &STATE_VARIABLE_Globals_768_768);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 78, (MR_Integer) 75, Var_360, STATE_VARIABLE_Globals_768_768, &STATE_VARIABLE_Globals_773_773);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 76, (MR_Integer) 75, Var_360, STATE_VARIABLE_Globals_773_773, &STATE_VARIABLE_Globals_778_778);
    libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_778_778, (MR_Integer) 88, &DebugLiveness_85);
    succeeded = (DebugLiveness_85 >= (MR_Integer) 0);
    if (succeeded)
    {
      Var_782 = (MR_String) "all";
      succeeded = libs__handle_options__convert_dump_alias_2_p_0(Var_782, &AllDumpOptions_86);
    }
    if (succeeded)
    {
      MR_String DumpOptions0_87;
      MR_String DumpOptions1_88;
      MR_Word Var_785;

      libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_778_778, (MR_Integer) 170, &DumpOptions0_87);
      DumpOptions1_88 = mercury__string__f_43_43_2_f_0(DumpOptions0_87, AllDumpOptions_86);
      {
        Var_785 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_785, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_785, 1) = ((MR_Box) (DumpOptions1_88));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 170, Var_785, STATE_VARIABLE_Globals_778_778, &STATE_VARIABLE_Globals_786_786);
    }
    else
      STATE_VARIABLE_Globals_786_786 = STATE_VARIABLE_Globals_778_778;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 78, (MR_Integer) 75, Var_360, STATE_VARIABLE_Globals_786_786, &STATE_VARIABLE_Globals_790_790);
    libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_790_790, (MR_Integer) 79, &DebugModesPredId_89);
    succeeded = (DebugModesPredId_89 > (MR_Integer) 0);
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 75, Var_360, STATE_VARIABLE_Globals_790_790, &STATE_VARIABLE_Globals_796_796);
    }
    else
      STATE_VARIABLE_Globals_796_796 = STATE_VARIABLE_Globals_790_790;
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_796_796, (MR_Integer) 378, &DebugUnneededCodePredNames_90);
    if ((DebugUnneededCodePredNames_90 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Globals_801_801 = STATE_VARIABLE_Globals_796_796;
    else
    {
      libs__globals__set_option_4_p_0((MR_Integer) 377, Var_360, STATE_VARIABLE_Globals_796_796, &STATE_VARIABLE_Globals_801_801);
    }
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_801_801, (MR_Integer) 85, &DebugOptPredIdStrs_93);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_801_801, (MR_Integer) 86, &DebugOptPredNames_94);
    succeeded = (DebugOptPredIdStrs_93 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
    if (!(succeeded))
    {
      succeeded = (DebugOptPredNames_94 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 83, Var_360, STATE_VARIABLE_Globals_801_801, &STATE_VARIABLE_Globals_807_807);
    }
    else
      STATE_VARIABLE_Globals_807_807 = STATE_VARIABLE_Globals_801_801;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_807_807, (MR_Integer) 94, &DebugIntermoduleAnalysis_99);
    analysis__enable_debug_messages_3_p_0(DebugIntermoduleAnalysis_99);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_807_807, (MR_Integer) 164, &DumpHLDSPredIds_100);
    if ((DumpHLDSPredIds_100 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Globals_819_819 = STATE_VARIABLE_Globals_807_807;
    else
    {
      MR_String DumpOptions2_103;
      MR_String DumpOptions3_104;
      MR_String DumpOptions_105;
      MR_Word Var_818;

      libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_807_807, (MR_Integer) 170, &DumpOptions2_103);
      mercury__string__replace_all_4_p_0(DumpOptions2_103, (MR_String) "M", (MR_String) "", &DumpOptions3_104);
      mercury__string__replace_all_4_p_0(DumpOptions3_104, (MR_String) "T", (MR_String) "", &DumpOptions_105);
      {
        Var_818 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_818, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_818, 1) = ((MR_Box) (DumpOptions_105));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 170, Var_818, STATE_VARIABLE_Globals_807_807, &STATE_VARIABLE_Globals_819_819);
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 93, (MR_Integer) 179, Var_360, STATE_VARIABLE_Globals_819_819, &STATE_VARIABLE_Globals_823_823);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 179, (MR_Integer) 177, Var_360, STATE_VARIABLE_Globals_823_823, &STATE_VARIABLE_Globals_828_828);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 178, (MR_Integer) 177, Var_360, STATE_VARIABLE_Globals_828_828, &STATE_VARIABLE_Globals_833_833);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 156, (MR_Integer) 155, Var_360, STATE_VARIABLE_Globals_833_833, &STATE_VARIABLE_Globals_838_838);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_838_838, (MR_Integer) 236, &UseTrail_106);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_838_838, (MR_Integer) 277, &HighLevelCode_107);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_838_838, (MR_Integer) 238, &UseMinimalModelStackCopy_108);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_838_838, (MR_Integer) 239, &UseMinimalModelOwnStacks_109);
    mercury__bool__or_3_p_0(UseMinimalModelStackCopy_108, UseMinimalModelOwnStacks_109, &UseMinimalModel_110);
    succeeded = (UseMinimalModelStackCopy_108 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (UseMinimalModelOwnStacks_109 == (MR_Integer) 1);
    if (succeeded)
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[195])), STATE_VARIABLE_Specs_623_623, &STATE_VARIABLE_Specs_853_853);
    }
    else
    {
      succeeded = (UseMinimalModel_110 == (MR_Integer) 1);
      if (succeeded)
        succeeded = (HighLevelCode_107 == (MR_Integer) 1);
      if (succeeded)
      {
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[199])), STATE_VARIABLE_Specs_623_623, &STATE_VARIABLE_Specs_853_853);
      }
      else
      {
        succeeded = (UseMinimalModel_110 == (MR_Integer) 1);
        if (succeeded)
          succeeded = (UseTrail_106 == (MR_Integer) 1);
        if (succeeded)
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[202])), STATE_VARIABLE_Specs_623_623, &STATE_VARIABLE_Specs_853_853);
        }
        else
          STATE_VARIABLE_Specs_853_853 = STATE_VARIABLE_Specs_623_623;
      }
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_838_838, (MR_Integer) 278, &HighLevelData_114);
    succeeded = (Target_27 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (HighLevelData_114 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Integer ArgPackBits0_115;
      MR_Integer BitsPerWord_116;
      MR_Integer ArgPackBits_117;
      MR_Word Var_912;

      libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_838_838, (MR_Integer) 262, &ArgPackBits0_115);
      libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_838_838, (MR_Integer) 256, &BitsPerWord_116);
      succeeded = (ArgPackBits0_115 < (MR_Integer) 0);
      if (succeeded)
      {
        ArgPackBits_117 = BitsPerWord_116;
        STATE_VARIABLE_Specs_910_910 = STATE_VARIABLE_Specs_853_853;
      }
      else
      {
        succeeded = (ArgPackBits0_115 > BitsPerWord_116);
        if (succeeded)
        {
          MR_Word ArgPackBitsSpec_118;
          MR_Word Var_880;
          MR_Word Var_881;
          MR_Word Var_883;
          MR_Word Var_886;
          MR_Word Var_889;
          MR_Word Var_892;
          MR_Word Var_895;
          MR_Word Var_898;
          MR_Word Var_901;
          MR_Word Var_902;

          ArgPackBits_117 = BitsPerWord_116;
          Var_881 = (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[225]));
          {
            Var_902 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_902, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_902, 1) = ((MR_Box) (BitsPerWord_116));
          }
          {
            Var_901 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_901, 0) = ((MR_Box) (Var_902));
            MR_hl_field(MR_mktag(1), Var_901, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
          }
          {
            Var_898 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_898, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[230])));
            MR_hl_field(MR_mktag(1), Var_898, 1) = ((MR_Box) (Var_901));
          }
          {
            Var_895 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_895, 0) = ((MR_Box) (Var_881));
            MR_hl_field(MR_mktag(1), Var_895, 1) = ((MR_Box) (Var_898));
          }
          {
            Var_892 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_892, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[229])));
            MR_hl_field(MR_mktag(1), Var_892, 1) = ((MR_Box) (Var_895));
          }
          {
            Var_889 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_889, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[228])));
            MR_hl_field(MR_mktag(1), Var_889, 1) = ((MR_Box) (Var_892));
          }
          {
            Var_886 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_886, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[227])));
            MR_hl_field(MR_mktag(1), Var_886, 1) = ((MR_Box) (Var_889));
          }
          {
            Var_883 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_883, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[226])));
            MR_hl_field(MR_mktag(1), Var_883, 1) = ((MR_Box) (Var_886));
          }
          {
            Var_880 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_880, 0) = ((MR_Box) (Var_881));
            MR_hl_field(MR_mktag(1), Var_880, 1) = ((MR_Box) (Var_883));
          }
          {
            ArgPackBitsSpec_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgPackBitsSpec_118, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[224])));
            MR_hl_field(MR_mktag(1), ArgPackBitsSpec_118, 1) = ((MR_Box) (Var_880));
          }
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), ArgPackBitsSpec_118, STATE_VARIABLE_Specs_853_853, &STATE_VARIABLE_Specs_910_910);
        }
        else
        {
          ArgPackBits_117 = ArgPackBits0_115;
          STATE_VARIABLE_Specs_910_910 = STATE_VARIABLE_Specs_853_853;
        }
      }
      {
        Var_912 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_912, 0) = ((MR_Box) (ArgPackBits_117));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 262, Var_912, STATE_VARIABLE_Globals_838_838, &STATE_VARIABLE_Globals_913_913);
    }
    else
    {
      MR_Word STATE_VARIABLE_Globals_916_916;
      MR_Word STATE_VARIABLE_Globals_920_920;
      MR_Word STATE_VARIABLE_Globals_924_924;

      libs__globals__set_option_4_p_0((MR_Integer) 262, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[5])), STATE_VARIABLE_Globals_838_838, &STATE_VARIABLE_Globals_916_916);
      libs__globals__set_option_4_p_0((MR_Integer) 263, Var_517, STATE_VARIABLE_Globals_916_916, &STATE_VARIABLE_Globals_920_920);
      libs__globals__set_option_4_p_0((MR_Integer) 265, Var_517, STATE_VARIABLE_Globals_920_920, &STATE_VARIABLE_Globals_924_924);
      libs__globals__set_option_4_p_0((MR_Integer) 266, Var_517, STATE_VARIABLE_Globals_924_924, &STATE_VARIABLE_Globals_913_913);
      STATE_VARIABLE_Specs_910_910 = STATE_VARIABLE_Specs_853_853;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 242, (MR_Integer) 259, Var_360, STATE_VARIABLE_Globals_913_913, &STATE_VARIABLE_Globals_933_933);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 277, (MR_Integer) 276, Var_517, STATE_VARIABLE_Globals_933_933, &STATE_VARIABLE_Globals_938_938);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 259, (MR_Integer) 276, Var_517, STATE_VARIABLE_Globals_938_938, &STATE_VARIABLE_Globals_943_943);
    switch (Target_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_947_947 = STATE_VARIABLE_Globals_943_943;
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_947_947 = STATE_VARIABLE_Globals_943_943;
        break;
      case (MR_Integer) 3:
        {
          libs__globals__set_option_4_p_0((MR_Integer) 315, Var_517, STATE_VARIABLE_Globals_943_943, &STATE_VARIABLE_Globals_947_947);
        }
        break;
      case (MR_Integer) 2:
        STATE_VARIABLE_Globals_947_947 = STATE_VARIABLE_Globals_943_943;
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
      libs__globals__set_option_4_p_0((MR_Integer) 458, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[6])), STATE_VARIABLE_Globals_947_947, &STATE_VARIABLE_Globals_951_951);
    }
    else
      STATE_VARIABLE_Globals_951_951 = STATE_VARIABLE_Globals_947_947;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 508, (MR_Integer) 579, Var_517, STATE_VARIABLE_Globals_951_951, &STATE_VARIABLE_Globals_956_956);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 226, (MR_Integer) 217, Var_360, STATE_VARIABLE_Globals_956_956, &STATE_VARIABLE_Globals_961_961);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 217, (MR_Integer) 229, Var_517, STATE_VARIABLE_Globals_961_961, &STATE_VARIABLE_Globals_966_966);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 226, (MR_Integer) 143, Var_360, STATE_VARIABLE_Globals_966_966, &STATE_VARIABLE_Globals_971_971);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_971_971, (MR_Integer) 143, &ProfOptimized_119);
    switch (ProfOptimized_119) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__handle_options__option_implies_5_p_0((MR_Integer) 213, (MR_Integer) 352, Var_517, STATE_VARIABLE_Globals_971_971, &STATE_VARIABLE_Globals_977_977);
        }
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_977_977 = STATE_VARIABLE_Globals_971_971;
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 213, (MR_Integer) 215, Var_360, STATE_VARIABLE_Globals_977_977, &STATE_VARIABLE_Globals_982_982);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 230, (MR_Integer) 215, Var_360, STATE_VARIABLE_Globals_982_982, &STATE_VARIABLE_Globals_987_987);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 231, (MR_Integer) 215, Var_360, STATE_VARIABLE_Globals_987_987, &STATE_VARIABLE_Globals_992_992);
    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_992_992, (MR_Integer) 232, &ExpComp_120);
    succeeded = (strcmp(ExpComp_120, (MR_String) "") == 0);
    if (succeeded)
      STATE_VARIABLE_Globals_997_997 = STATE_VARIABLE_Globals_992_992;
    else
    {
      libs__globals__set_option_4_p_0((MR_Integer) 352, Var_517, STATE_VARIABLE_Globals_992_992, &STATE_VARIABLE_Globals_997_997);
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 205, (MR_Integer) 204, Var_360, STATE_VARIABLE_Globals_997_997, &STATE_VARIABLE_Globals_1002_1002);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 251, (MR_Integer) 253, Var_360, STATE_VARIABLE_Globals_1002_1002, &STATE_VARIABLE_Globals_1007_1007);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 204, (MR_Integer) 284, Var_360, STATE_VARIABLE_Globals_1007_1007, &STATE_VARIABLE_Globals_1012_1012);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 213, (MR_Integer) 284, Var_360, STATE_VARIABLE_Globals_1012_1012, &STATE_VARIABLE_Globals_1017_1017);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 213, (MR_Integer) 334, Var_360, STATE_VARIABLE_Globals_1017_1017, &STATE_VARIABLE_Globals_1022_1022);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 204, (MR_Integer) 141, Var_360, STATE_VARIABLE_Globals_1022_1022, &STATE_VARIABLE_Globals_1027_1027);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 141, (MR_Integer) 137, Var_360, STATE_VARIABLE_Globals_1027_1027, &STATE_VARIABLE_Globals_1032_1032);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 140, (MR_Integer) 137, Var_360, STATE_VARIABLE_Globals_1032_1032, &STATE_VARIABLE_Globals_1037_1037);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1037_1037, (MR_Integer) 135, &TraceOptimized_121);
    TraceLevelIsNone_122 = libs__trace_params__given_trace_level_is_none_1_f_0(TraceLevel_32);
    switch (TraceLevelIsNone_122) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TraceTailRec_123;
          MR_Word STATE_VARIABLE_Globals_1102_1102;
          MR_Word STATE_VARIABLE_Globals_1106_1106;
          MR_Word STATE_VARIABLE_Globals_1110_1110;
          MR_Word STATE_VARIABLE_Globals_1114_1114;
          MR_Word STATE_VARIABLE_Globals_1118_1118;
          MR_Word STATE_VARIABLE_Globals_1122_1122;
          MR_Word STATE_VARIABLE_Globals_1126_1126;
          MR_Word STATE_VARIABLE_Globals_1130_1130;

          switch (TraceOptimized_121) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word STATE_VARIABLE_Globals_1046_1046;
                MR_Word STATE_VARIABLE_Globals_1050_1050;
                MR_Word STATE_VARIABLE_Globals_1054_1054;
                MR_Word STATE_VARIABLE_Globals_1058_1058;
                MR_Word STATE_VARIABLE_Globals_1062_1062;
                MR_Word STATE_VARIABLE_Globals_1066_1066;
                MR_Word STATE_VARIABLE_Globals_1070_1070;
                MR_Word STATE_VARIABLE_Globals_1074_1074;
                MR_Word STATE_VARIABLE_Globals_1078_1078;
                MR_Word STATE_VARIABLE_Globals_1082_1082;
                MR_Word STATE_VARIABLE_Globals_1086_1086;
                MR_Word STATE_VARIABLE_Globals_1090_1090;
                MR_Word STATE_VARIABLE_Globals_1094_1094;
                MR_Word STATE_VARIABLE_Globals_1098_1098;

                libs__globals__set_option_4_p_0((MR_Integer) 352, Var_517, STATE_VARIABLE_Globals_1037_1037, &STATE_VARIABLE_Globals_1046_1046);
                libs__globals__set_option_4_p_0((MR_Integer) 370, Var_517, STATE_VARIABLE_Globals_1046_1046, &STATE_VARIABLE_Globals_1050_1050);
                libs__globals__set_option_4_p_0((MR_Integer) 372, Var_517, STATE_VARIABLE_Globals_1050_1050, &STATE_VARIABLE_Globals_1054_1054);
                libs__globals__set_option_4_p_0((MR_Integer) 379, Var_517, STATE_VARIABLE_Globals_1054_1054, &STATE_VARIABLE_Globals_1058_1058);
                libs__globals__set_option_4_p_0((MR_Integer) 380, Var_517, STATE_VARIABLE_Globals_1058_1058, &STATE_VARIABLE_Globals_1062_1062);
                libs__globals__set_option_4_p_0((MR_Integer) 409, Var_517, STATE_VARIABLE_Globals_1062_1062, &STATE_VARIABLE_Globals_1066_1066);
                libs__globals__set_option_4_p_0((MR_Integer) 368, Var_517, STATE_VARIABLE_Globals_1066_1066, &STATE_VARIABLE_Globals_1070_1070);
                libs__globals__set_option_4_p_0((MR_Integer) 369, Var_517, STATE_VARIABLE_Globals_1070_1070, &STATE_VARIABLE_Globals_1074_1074);
                libs__globals__set_option_4_p_0((MR_Integer) 385, Var_517, STATE_VARIABLE_Globals_1074_1074, &STATE_VARIABLE_Globals_1078_1078);
                libs__globals__set_option_4_p_0((MR_Integer) 384, Var_517, STATE_VARIABLE_Globals_1078_1078, &STATE_VARIABLE_Globals_1082_1082);
                libs__globals__set_option_4_p_0((MR_Integer) 391, Var_517, STATE_VARIABLE_Globals_1082_1082, &STATE_VARIABLE_Globals_1086_1086);
                libs__globals__set_option_4_p_0((MR_Integer) 405, Var_517, STATE_VARIABLE_Globals_1086_1086, &STATE_VARIABLE_Globals_1090_1090);
                libs__globals__set_option_4_p_0((MR_Integer) 418, Var_517, STATE_VARIABLE_Globals_1090_1090, &STATE_VARIABLE_Globals_1094_1094);
                libs__globals__set_option_4_p_0((MR_Integer) 419, Var_517, STATE_VARIABLE_Globals_1094_1094, &STATE_VARIABLE_Globals_1098_1098);
                libs__globals__set_option_4_p_0((MR_Integer) 388, Var_517, STATE_VARIABLE_Globals_1098_1098, &STATE_VARIABLE_Globals_1102_1102);
              }
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Globals_1102_1102 = STATE_VARIABLE_Globals_1037_1037;
              break;
          }
          libs__globals__set_option_4_p_0((MR_Integer) 476, Var_517, STATE_VARIABLE_Globals_1102_1102, &STATE_VARIABLE_Globals_1106_1106);
          libs__globals__set_option_4_p_0((MR_Integer) 387, Var_360, STATE_VARIABLE_Globals_1106_1106, &STATE_VARIABLE_Globals_1110_1110);
          libs__globals__set_option_4_p_0((MR_Integer) 407, Var_360, STATE_VARIABLE_Globals_1110_1110, &STATE_VARIABLE_Globals_1114_1114);
          libs__globals__set_option_4_p_0((MR_Integer) 474, Var_517, STATE_VARIABLE_Globals_1114_1114, &STATE_VARIABLE_Globals_1118_1118);
          libs__globals__set_option_4_p_0((MR_Integer) 288, Var_360, STATE_VARIABLE_Globals_1118_1118, &STATE_VARIABLE_Globals_1122_1122);
          libs__globals__set_option_4_p_0((MR_Integer) 289, Var_360, STATE_VARIABLE_Globals_1122_1122, &STATE_VARIABLE_Globals_1126_1126);
          libs__globals__set_option_4_p_0((MR_Integer) 340, Var_517, STATE_VARIABLE_Globals_1126_1126, &STATE_VARIABLE_Globals_1130_1130);
          TraceTailRec_123 = libs__trace_params__trace_level_allows_tail_rec_1_f_0(TraceLevel_32);
          switch (TraceTailRec_123) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                libs__globals__set_option_4_p_0((MR_Integer) 144, Var_517, STATE_VARIABLE_Globals_1130_1130, &STATE_VARIABLE_Globals_1134_1134);
              }
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Globals_1134_1134 = STATE_VARIABLE_Globals_1130_1130;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          libs__globals__set_option_4_p_0((MR_Integer) 144, Var_517, STATE_VARIABLE_Globals_1037_1037, &STATE_VARIABLE_Globals_1134_1134);
        }
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 213, (MR_Integer) 287, Var_360, STATE_VARIABLE_Globals_1134_1134, &STATE_VARIABLE_Globals_1139_1139);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1139_1139, (MR_Integer) 213, &ProfileDeep_124);
    switch (ProfileDeep_124) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_Specs_1151_1151 = STATE_VARIABLE_Specs_910_910;
          STATE_VARIABLE_Globals_1163_1163 = STATE_VARIABLE_Globals_1139_1139;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LotsOfHOSpec_126;
          MR_Word STATE_VARIABLE_Globals_1154_1154;

          succeeded = (HighLevelCode_107 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (Target_27 == (MR_Integer) 0);
          if (succeeded)
            STATE_VARIABLE_Specs_1151_1151 = STATE_VARIABLE_Specs_910_910;
          else
          {
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[204])), STATE_VARIABLE_Specs_910_910, &STATE_VARIABLE_Specs_1151_1151);
          }
          libs__globals__set_option_4_p_0((MR_Integer) 384, Var_517, STATE_VARIABLE_Globals_1139_1139, &STATE_VARIABLE_Globals_1154_1154);
          libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1154_1154, (MR_Integer) 228, &LotsOfHOSpec_126);
          switch (LotsOfHOSpec_126) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Globals_1163_1163 = STATE_VARIABLE_Globals_1154_1154;
              break;
            case (MR_Integer) 1:
              {
                MR_Word STATE_VARIABLE_Globals_1159_1159;

                libs__globals__set_option_4_p_0((MR_Integer) 372, Var_360, STATE_VARIABLE_Globals_1154_1154, &STATE_VARIABLE_Globals_1159_1159);
                libs__globals__set_option_4_p_0((MR_Integer) 373, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[6])), STATE_VARIABLE_Globals_1159_1159, &STATE_VARIABLE_Globals_1163_1163);
              }
              break;
          }
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1163_1163, (MR_Integer) 230, &RecordTermSizesAsWords_127);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1163_1163, (MR_Integer) 231, &RecordTermSizesAsCells_128);
    succeeded = (RecordTermSizesAsWords_127 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (RecordTermSizesAsCells_128 == (MR_Integer) 1);
    if (succeeded)
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[206])), STATE_VARIABLE_Specs_1151_1151, &STATE_VARIABLE_Specs_1173_1173);
      STATE_VARIABLE_Globals_1180_1180 = STATE_VARIABLE_Globals_1163_1163;
    }
    else
    {
      succeeded = (RecordTermSizesAsWords_127 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (RecordTermSizesAsCells_128 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Globals_1176_1176;

        libs__globals__set_option_4_p_0((MR_Integer) 384, Var_517, STATE_VARIABLE_Globals_1163_1163, &STATE_VARIABLE_Globals_1176_1176);
        libs__globals__set_option_4_p_0((MR_Integer) 263, Var_517, STATE_VARIABLE_Globals_1176_1176, &STATE_VARIABLE_Globals_1180_1180);
        switch (HighLevelCode_107) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Specs_1173_1173 = STATE_VARIABLE_Specs_1151_1151;
            break;
          case (MR_Integer) 1:
            {
              libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[208])), STATE_VARIABLE_Specs_1151_1151, &STATE_VARIABLE_Specs_1173_1173);
            }
            break;
        }
      }
      else
      {
        STATE_VARIABLE_Globals_1180_1180 = STATE_VARIABLE_Globals_1163_1163;
        STATE_VARIABLE_Specs_1173_1173 = STATE_VARIABLE_Specs_1151_1151;
      }
    }
    {
      MR_Word Var_1192;

      Var_1192 = libs__trace_params__given_trace_level_is_none_1_f_0(TraceLevel_32);
      succeeded = (Var_1192 == (MR_Integer) 1);
    }
    if (!(succeeded))
    {
      succeeded = (HighLevelCode_107 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (Target_27 == (MR_Integer) 0);
    }
    if (succeeded)
      STATE_VARIABLE_Specs_1199_1199 = STATE_VARIABLE_Specs_1173_1173;
    else
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[210])), STATE_VARIABLE_Specs_1173_1173, &STATE_VARIABLE_Specs_1199_1199);
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 234, (MR_Integer) 514, Var_517, STATE_VARIABLE_Globals_1180_1180, &STATE_VARIABLE_Globals_1203_1203);
    libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 355, (MR_Integer) 386, Var_517, STATE_VARIABLE_Globals_1203_1203, &STATE_VARIABLE_Globals_1208_1208);
    switch (ProfileDeep_124) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 352, (MR_Integer) 386, Var_517, STATE_VARIABLE_Globals_1208_1208, &STATE_VARIABLE_Globals_1213_1213);
        }
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_1213_1213 = STATE_VARIABLE_Globals_1208_1208;
        break;
    }
    libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 183, (MR_Integer) 409, Var_517, STATE_VARIABLE_Globals_1213_1213, &STATE_VARIABLE_Globals_1218_1218);
    libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 183, (MR_Integer) 368, Var_517, STATE_VARIABLE_Globals_1218_1218, &STATE_VARIABLE_Globals_1223_1223);
    libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 183, (MR_Integer) 369, Var_517, STATE_VARIABLE_Globals_1223_1223, &STATE_VARIABLE_Globals_1228_1228);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 284, (MR_Integer) 287, Var_360, STATE_VARIABLE_Globals_1228_1228, &STATE_VARIABLE_Globals_1233_1233);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 288, (MR_Integer) 287, Var_360, STATE_VARIABLE_Globals_1233_1233, &STATE_VARIABLE_Globals_1238_1238);
    switch (GC_Method_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 5:
        {
          MR_Word STATE_VARIABLE_Globals_1242_1242;
          MR_Word STATE_VARIABLE_Globals_1246_1246;
          MR_Word STATE_VARIABLE_Globals_1250_1250;
          MR_Word STATE_VARIABLE_Globals_1254_1254;
          MR_Word STATE_VARIABLE_Globals_1258_1258;
          MR_Word STATE_VARIABLE_Globals_1262_1262;
          MR_Word STATE_VARIABLE_Globals_1266_1266;
          MR_Word STATE_VARIABLE_Globals_1270_1270;
          MR_Word STATE_VARIABLE_Globals_1274_1274;
          MR_Word STATE_VARIABLE_Globals_1278_1278;

          libs__globals__set_option_4_p_0((MR_Integer) 286, Var_360, STATE_VARIABLE_Globals_1238_1238, &STATE_VARIABLE_Globals_1242_1242);
          libs__globals__set_option_4_p_0((MR_Integer) 289, Var_360, STATE_VARIABLE_Globals_1242_1242, &STATE_VARIABLE_Globals_1246_1246);
          libs__globals__set_option_4_p_0((MR_Integer) 476, Var_517, STATE_VARIABLE_Globals_1246_1246, &STATE_VARIABLE_Globals_1250_1250);
          libs__globals__set_option_4_p_0((MR_Integer) 497, Var_517, STATE_VARIABLE_Globals_1250_1250, &STATE_VARIABLE_Globals_1254_1254);
          libs__globals__set_option_4_p_0((MR_Integer) 340, Var_517, STATE_VARIABLE_Globals_1254_1254, &STATE_VARIABLE_Globals_1258_1258);
          libs__globals__set_option_4_p_0((MR_Integer) 474, Var_517, STATE_VARIABLE_Globals_1258_1258, &STATE_VARIABLE_Globals_1262_1262);
          libs__globals__set_option_4_p_0((MR_Integer) 323, Var_517, STATE_VARIABLE_Globals_1262_1262, &STATE_VARIABLE_Globals_1266_1266);
          libs__globals__set_option_4_p_0((MR_Integer) 324, Var_517, STATE_VARIABLE_Globals_1266_1266, &STATE_VARIABLE_Globals_1270_1270);
          libs__globals__set_option_4_p_0((MR_Integer) 384, Var_517, STATE_VARIABLE_Globals_1270_1270, &STATE_VARIABLE_Globals_1274_1274);
          libs__globals__set_option_4_p_0((MR_Integer) 379, Var_517, STATE_VARIABLE_Globals_1274_1274, &STATE_VARIABLE_Globals_1278_1278);
          libs__globals__set_option_4_p_0((MR_Integer) 380, Var_517, STATE_VARIABLE_Globals_1278_1278, &STATE_VARIABLE_Globals_1282_1282);
        }
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_1282_1282 = STATE_VARIABLE_Globals_1238_1238;
        break;
      case (MR_Integer) 2:
        STATE_VARIABLE_Globals_1282_1282 = STATE_VARIABLE_Globals_1238_1238;
        break;
      case (MR_Integer) 3:
        STATE_VARIABLE_Globals_1282_1282 = STATE_VARIABLE_Globals_1238_1238;
        break;
      case (MR_Integer) 4:
        STATE_VARIABLE_Globals_1282_1282 = STATE_VARIABLE_Globals_1238_1238;
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_1282_1282 = STATE_VARIABLE_Globals_1238_1238;
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1282_1282, (MR_Integer) 282, &PutNondetEnvOnHeap_132);
    succeeded = (HighLevelCode_107 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (GC_Method_28 == (MR_Integer) 5);
      if (succeeded)
        succeeded = (PutNondetEnvOnHeap_132 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[216])), STATE_VARIABLE_Specs_1199_1199, &STATE_VARIABLE_Specs_1300_1300);
    }
    else
      STATE_VARIABLE_Specs_1300_1300 = STATE_VARIABLE_Specs_1199_1199;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 287, (MR_Integer) 285, Var_360, STATE_VARIABLE_Globals_1282_1282, &STATE_VARIABLE_Globals_1304_1304);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 286, (MR_Integer) 285, Var_360, STATE_VARIABLE_Globals_1304_1304, &STATE_VARIABLE_Globals_1309_1309);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 287, (MR_Integer) 495, Var_517, STATE_VARIABLE_Globals_1309_1309, &STATE_VARIABLE_Globals_1314_1314);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 286, (MR_Integer) 495, Var_517, STATE_VARIABLE_Globals_1314_1314, &STATE_VARIABLE_Globals_1319_1319);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 285, (MR_Integer) 493, Var_517, STATE_VARIABLE_Globals_1319_1319, &STATE_VARIABLE_Globals_1324_1324);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 289, (MR_Integer) 409, Var_517, STATE_VARIABLE_Globals_1324_1324, &STATE_VARIABLE_Globals_1329_1329);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 289, (MR_Integer) 368, Var_517, STATE_VARIABLE_Globals_1329_1329, &STATE_VARIABLE_Globals_1334_1334);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 236, (MR_Integer) 474, Var_517, STATE_VARIABLE_Globals_1334_1334, &STATE_VARIABLE_Globals_1339_1339);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 246, (MR_Integer) 474, Var_517, STATE_VARIABLE_Globals_1339_1339, &STATE_VARIABLE_Globals_1344_1344);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 238, (MR_Integer) 476, Var_517, STATE_VARIABLE_Globals_1344_1344, &STATE_VARIABLE_Globals_1349_1349);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1349_1349, (MR_Integer) 301, &DisablePneg_134);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1349_1349, (MR_Integer) 302, &DisableCut_135);
    succeeded = (UseMinimalModelStackCopy_108 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (DisablePneg_134 == (MR_Integer) 0);
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 303, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])), STATE_VARIABLE_Globals_1349_1349, &STATE_VARIABLE_Globals_1355_1355);
    }
    else
      STATE_VARIABLE_Globals_1355_1355 = STATE_VARIABLE_Globals_1349_1349;
    succeeded = (UseMinimalModelStackCopy_108 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (DisableCut_135 == (MR_Integer) 0);
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 304, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])), STATE_VARIABLE_Globals_1355_1355, &STATE_VARIABLE_Globals_1359_1359);
    }
    else
      STATE_VARIABLE_Globals_1359_1359 = STATE_VARIABLE_Globals_1355_1355;
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1359_1359, (MR_Integer) 163, &DumpHLDSStages_136);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1359_1359, (MR_Integer) 162, &DumpTraceStages_137);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1359_1359, (MR_Integer) 320, &ParallelLiveness_138);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1359_1359, (MR_Integer) 321, &ParallelCodeGen_139);
    succeeded = (DumpHLDSStages_136 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
    if (!(succeeded))
    {
      succeeded = (DumpTraceStages_137 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
      if (!(succeeded))
      {
        succeeded = (Statistics_84 == (MR_Integer) 1);
        if (!(succeeded))
        {
          succeeded = (ParallelLiveness_138 == (MR_Integer) 1);
          if (!(succeeded))
            succeeded = (ParallelCodeGen_139 == (MR_Integer) 1);
        }
      }
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 319, Var_517, STATE_VARIABLE_Globals_1359_1359, &STATE_VARIABLE_Globals_1367_1367);
    }
    else
      STATE_VARIABLE_Globals_1367_1367 = STATE_VARIABLE_Globals_1359_1359;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 379, (MR_Integer) 380, Var_360, STATE_VARIABLE_Globals_1367_1367, &STATE_VARIABLE_Globals_1372_1372);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 368, (MR_Integer) 369, Var_360, STATE_VARIABLE_Globals_1372_1372, &STATE_VARIABLE_Globals_1377_1377);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 371, (MR_Integer) 344, Var_360, STATE_VARIABLE_Globals_1377_1377, &STATE_VARIABLE_Globals_1382_1382);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 371, (MR_Integer) 370, Var_360, STATE_VARIABLE_Globals_1382_1382, &STATE_VARIABLE_Globals_1387_1387);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 381, (MR_Integer) 387, Var_360, STATE_VARIABLE_Globals_1387_1387, &STATE_VARIABLE_Globals_1392_1392);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 381, (MR_Integer) 366, Var_360, STATE_VARIABLE_Globals_1392_1392, &STATE_VARIABLE_Globals_1397_1397);
    succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_1399 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_1399)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_1400 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1399, (MR_Integer) 0))));
        succeeded = (Var_1400 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 370, Var_517, STATE_VARIABLE_Globals_1397_1397, &STATE_VARIABLE_Globals_1403_1403);
    }
    else
      STATE_VARIABLE_Globals_1403_1403 = STATE_VARIABLE_Globals_1397_1397;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 414, (MR_Integer) 415, Var_360, STATE_VARIABLE_Globals_1403_1403, &STATE_VARIABLE_Globals_1408_1408);
    succeeded = (OpMode_26 == (MR_Word) ((MR_Unsigned) 4U));
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 28, Var_517, STATE_VARIABLE_Globals_1408_1408, &STATE_VARIABLE_Globals_1412_1412);
    }
    else
      STATE_VARIABLE_Globals_1412_1412 = STATE_VARIABLE_Globals_1408_1408;
    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_1412_1412, (MR_Integer) 682, &TargetArch_144);
    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_1412_1412, (MR_Integer) 577, &MercuryLinkage_145);
    succeeded = (strcmp(MercuryLinkage_145, (MR_String) "static") == 0);
    if (succeeded)
    {
      DefaultRuntimeLibraryDirs_146 = (MR_Integer) 0;
      libs__globals__set_option_4_p_0((MR_Integer) 561, Var_517, STATE_VARIABLE_Globals_1412_1412, &STATE_VARIABLE_Globals_1418_1418);
    }
    else
    {
      libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1412_1412, (MR_Integer) 561, &DefaultRuntimeLibraryDirs_146);
      STATE_VARIABLE_Globals_1418_1418 = STATE_VARIABLE_Globals_1412_1412;
    }
    libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_1418_1418, (MR_Integer) 570, &MaybeStdLibDir_147);
    if ((MaybeStdLibDir_147 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Globals_1433_1433 = STATE_VARIABLE_Globals_1418_1418;
    else
    {
      MR_String StdLibDir_148 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeStdLibDir_147, (MR_Integer) 0))));
      MR_Word OptionTable2_149;
      MR_Word OptionTable_150;
      MR_Word LinkLibDirs0_151;
      MR_Word STATE_VARIABLE_Globals_1422_1422;
      MR_Word Var_1425;
      MR_Word STATE_VARIABLE_Globals_1426_1426;
      MR_Word Var_1427;
      MR_String Var_1428;

      libs__globals__get_options_2_p_0(STATE_VARIABLE_Globals_1418_1418, &OptionTable2_149);
      libs__options__option_table_add_mercury_library_directory_3_p_0(StdLibDir_148, OptionTable2_149, &OptionTable_150);
      libs__globals__set_options_3_p_0(OptionTable_150, STATE_VARIABLE_Globals_1418_1418, &STATE_VARIABLE_Globals_1422_1422);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1422_1422, (MR_Integer) 559, &LinkLibDirs0_151);
      Var_1428 = mercury__dir__f_slash_2_f_0(StdLibDir_148, (MR_String) "lib");
      {
        Var_1427 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_1427, 0) = ((MR_Box) (Var_1428));
        MR_hl_field(MR_mktag(1), Var_1427, 1) = ((MR_Box) (LinkLibDirs0_151));
      }
      {
        Var_1425 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1425, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1425, 1) = ((MR_Box) (Var_1427));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 559, Var_1425, STATE_VARIABLE_Globals_1422_1422, &STATE_VARIABLE_Globals_1426_1426);
      switch (DefaultRuntimeLibraryDirs_146) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Globals_1433_1433 = STATE_VARIABLE_Globals_1426_1426;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rpath0_152;
            MR_Word Var_1432;
            MR_Word Var_1434;
            MR_String Var_1435;

            libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1426_1426, (MR_Integer) 560, &Rpath0_152);
            Var_1435 = mercury__dir__f_slash_2_f_0(StdLibDir_148, (MR_String) "lib");
            {
              Var_1434 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_1434, 0) = ((MR_Box) (Var_1435));
              MR_hl_field(MR_mktag(1), Var_1434, 1) = ((MR_Box) (Rpath0_152));
            }
            {
              Var_1432 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_1432, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), Var_1432, 1) = ((MR_Box) (Var_1434));
            }
            libs__globals__set_option_4_p_0((MR_Integer) 560, Var_1432, STATE_VARIABLE_Globals_1426_1426, &STATE_VARIABLE_Globals_1433_1433);
          }
          break;
      }
    }
    libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_1433_1433, (MR_Integer) 650, &MaybeConfDir_153);
    if ((MaybeConfDir_153 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Globals_1441_1441 = STATE_VARIABLE_Globals_1433_1433;
    else
    {
      MR_String ConfDir_154 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeConfDir_153, (MR_Integer) 0))));
      MR_Word CIncludeDirs0_155;
      MR_Word Var_1440;
      MR_Word Var_1442;
      MR_String Var_1443;

      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1433_1433, (MR_Integer) 512, &CIncludeDirs0_155);
      Var_1443 = mercury__dir__f_slash_2_f_0(ConfDir_154, (MR_String) "conf");
      {
        Var_1442 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_1442, 0) = ((MR_Box) (Var_1443));
        MR_hl_field(MR_mktag(1), Var_1442, 1) = ((MR_Box) (CIncludeDirs0_155));
      }
      {
        Var_1440 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1440, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1440, 1) = ((MR_Box) (Var_1442));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 512, Var_1440, STATE_VARIABLE_Globals_1433_1433, &STATE_VARIABLE_Globals_1441_1441);
    }
    libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_1441_1441, (MR_Integer) 661, &ConfigFile_156);
    succeeded = (ConfigFile_156 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_1446 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConfigFile_156, (MR_Integer) 0))));
      succeeded = (strcmp(Var_1446, (MR_String) "") == 0);
    }
    if (succeeded)
      if ((MaybeConfDir_153 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        libs__globals__set_option_4_p_0((MR_Integer) 661, (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[231])), STATE_VARIABLE_Globals_1441_1441, &STATE_VARIABLE_Globals_1453_1453);
      }
      else
      {
        MR_String ConfDir1_157 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeConfDir_153, (MR_Integer) 0))));
        MR_Word Var_1452;
        MR_Word Var_1454;
        MR_String Var_1455;
        MR_String Var_1456;

        Var_1456 = mercury__dir__f_slash_2_f_0(ConfDir1_157, (MR_String) "conf");
        Var_1455 = mercury__dir__f_slash_2_f_0(Var_1456, (MR_String) "Mercury.config");
        {
          Var_1454 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_1454, 0) = ((MR_Box) (Var_1455));
        }
        {
          Var_1452 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_1452, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_1452, 1) = ((MR_Box) (Var_1454));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 661, Var_1452, STATE_VARIABLE_Globals_1441_1441, &STATE_VARIABLE_Globals_1453_1453);
      }
    else
      STATE_VARIABLE_Globals_1453_1453 = STATE_VARIABLE_Globals_1441_1441;
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1453_1453, (MR_Integer) 564, &MercuryLibDirs_158);
    libs__compute_grade__grade_directory_component_2_p_0(STATE_VARIABLE_Globals_1453_1453, &GradeString_159);
    if ((MercuryLibDirs_158 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Globals_1510_1510 = STATE_VARIABLE_Globals_1453_1453;
    else
    {
      MR_Word ExtraLinkLibDirs_162;
      MR_Word LinkLibDirs1_164;
      MR_Word ExtraIncludeDirs_166;
      MR_Word CIncludeDirs_167;
      MR_Word ErlangIncludeDirs_168;
      MR_Word ExtraIntermodDirs_169;
      MR_Word IntermodDirs0_170;
      MR_Word ExtraInitDirs_171;
      MR_Word InitDirs1_172;
      MR_Word Var_1460;
      MR_Word Var_1467;
      MR_Word STATE_VARIABLE_Globals_1468_1468;
      MR_Word Var_1469;
      MR_Word STATE_VARIABLE_Globals_1473_1473;
      MR_Word Var_1475;
      MR_Word Var_1484;
      MR_Word STATE_VARIABLE_Globals_1485_1485;
      MR_Word Var_1486;
      MR_Word Var_1489;
      MR_Word STATE_VARIABLE_Globals_1490_1490;
      MR_Word Var_1491;
      MR_Word Var_1492;
      MR_Word Var_1499;
      MR_Word STATE_VARIABLE_Globals_1500_1500;
      MR_Word Var_1501;
      MR_Word Var_1502;
      MR_Word Var_1509;
      MR_Word Var_1511;

      {
        Var_1460 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_1460, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_1460, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_1));
        MR_hl_field(MR_mktag(0), Var_1460, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_1460, 3) = ((MR_Box) (GradeString_159));
      }
      ExtraLinkLibDirs_162 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_1460, MercuryLibDirs_158);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1453_1453, (MR_Integer) 559, &LinkLibDirs1_164);
      Var_1469 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LinkLibDirs1_164, ExtraLinkLibDirs_162);
      {
        Var_1467 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1467, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1467, 1) = ((MR_Box) (Var_1469));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 559, Var_1467, STATE_VARIABLE_Globals_1453_1453, &STATE_VARIABLE_Globals_1468_1468);
      switch (DefaultRuntimeLibraryDirs_146) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Globals_1473_1473 = STATE_VARIABLE_Globals_1468_1468;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rpath_165;
            MR_Word Var_1472;
            MR_Word Var_1474;

            libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1468_1468, (MR_Integer) 560, &Rpath_165);
            Var_1474 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Rpath_165, ExtraLinkLibDirs_162);
            {
              Var_1472 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_1472, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), Var_1472, 1) = ((MR_Box) (Var_1474));
            }
            libs__globals__set_option_4_p_0((MR_Integer) 560, Var_1472, STATE_VARIABLE_Globals_1468_1468, &STATE_VARIABLE_Globals_1473_1473);
          }
          break;
      }
      {
        Var_1475 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_1475, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_1475, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_2));
        MR_hl_field(MR_mktag(0), Var_1475, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_1475, 3) = ((MR_Box) (GradeString_159));
      }
      ExtraIncludeDirs_166 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_1475, MercuryLibDirs_158);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1473_1473, (MR_Integer) 512, &CIncludeDirs_167);
      Var_1486 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraIncludeDirs_166, CIncludeDirs_167);
      {
        Var_1484 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1484, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1484, 1) = ((MR_Box) (Var_1486));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 512, Var_1484, STATE_VARIABLE_Globals_1473_1473, &STATE_VARIABLE_Globals_1485_1485);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1485_1485, (MR_Integer) 550, &ErlangIncludeDirs_168);
      Var_1491 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraIncludeDirs_166, ErlangIncludeDirs_168);
      {
        Var_1489 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1489, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1489, 1) = ((MR_Box) (Var_1491));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 550, Var_1489, STATE_VARIABLE_Globals_1485_1485, &STATE_VARIABLE_Globals_1490_1490);
      {
        Var_1492 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_1492, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_1492, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_3));
        MR_hl_field(MR_mktag(0), Var_1492, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_1492, 3) = ((MR_Box) (GradeString_159));
      }
      ExtraIntermodDirs_169 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_1492, MercuryLibDirs_158);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1490_1490, (MR_Integer) 666, &IntermodDirs0_170);
      Var_1501 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraIntermodDirs_169, IntermodDirs0_170);
      {
        Var_1499 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1499, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1499, 1) = ((MR_Box) (Var_1501));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 666, Var_1499, STATE_VARIABLE_Globals_1490_1490, &STATE_VARIABLE_Globals_1500_1500);
      {
        Var_1502 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_1502, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_1502, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_4));
        MR_hl_field(MR_mktag(0), Var_1502, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_1502, 3) = ((MR_Box) (GradeString_159));
      }
      ExtraInitDirs_171 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_1502, MercuryLibDirs_158);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1500_1500, (MR_Integer) 572, &InitDirs1_172);
      Var_1511 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitDirs1_172, ExtraInitDirs_171);
      {
        Var_1509 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1509, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1509, 1) = ((MR_Box) (Var_1511));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 572, Var_1509, STATE_VARIABLE_Globals_1500_1500, &STATE_VARIABLE_Globals_1510_1510);
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1510_1510, (MR_Integer) 667, &UseSearchDirs_173);
    switch (UseSearchDirs_173) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_1517_1517 = STATE_VARIABLE_Globals_1510_1510;
        break;
      case (MR_Integer) 1:
        {
          MR_Word IntermodDirs1_174;
          MR_Word SearchDirs_175;
          MR_Word Var_1516;
          MR_Word Var_1518;

          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1510_1510, (MR_Integer) 666, &IntermodDirs1_174);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1510_1510, (MR_Integer) 665, &SearchDirs_175);
          Var_1518 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), IntermodDirs1_174, SearchDirs_175);
          {
            Var_1516 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_1516, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), Var_1516, 1) = ((MR_Box) (Var_1518));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 666, Var_1516, STATE_VARIABLE_Globals_1510_1510, &STATE_VARIABLE_Globals_1517_1517);
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1517_1517, (MR_Integer) 664, &UseGradeSubdirs_176);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1517_1517, (MR_Integer) 566, &SearchLibFilesDirs_177);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1517_1517, (MR_Integer) 666, &IntermodDirs2_178);
    {
      ToGradeSubdir_179 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ToGradeSubdir_179, 0) = ((MR_Box) (&libs__handle_options_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), ToGradeSubdir_179, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_5));
      MR_hl_field(MR_mktag(0), ToGradeSubdir_179, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ToGradeSubdir_179, 3) = ((MR_Box) (TargetArch_144));
      MR_hl_field(MR_mktag(0), ToGradeSubdir_179, 4) = ((MR_Box) (GradeString_159));
    }
    switch (UseGradeSubdirs_176) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word IntermodDirs3_183;
          MR_Word LinkLibDirs2_184;
          MR_Word InitDirs2_185;
          MR_Word Var_1537;

          IntermodDirs3_183 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesDirs_177, IntermodDirs2_178);
          {
            Var_1537 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_1537, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), Var_1537, 1) = ((MR_Box) (IntermodDirs3_183));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 666, Var_1537, STATE_VARIABLE_Globals_1517_1517, &STATE_VARIABLE_Globals_1538_1538);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1538_1538, (MR_Integer) 559, &LinkLibDirs2_184);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1538_1538, (MR_Integer) 572, &InitDirs2_185);
          LinkLibDirs_188 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesDirs_177, LinkLibDirs2_184);
          InitDirs_191 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesDirs_177, InitDirs2_185);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String GradeSubdir_181;
          MR_Word SearchLibFilesGradeSubdirs_182;
          MR_Word ToGradeLibDir_186;
          MR_Word SearchGradeLibDirs_187;
          MR_Word ToGradeInitDir_189;
          MR_Word SearchGradeInitDirs_190;
          MR_String Var_1527;
          MR_Word Var_1529;
          MR_Word Var_1531;
          MR_Word Var_1532;
          MR_Word Var_1533;
          MR_Word Var_1534;
          MR_String Var_1535;
          MR_Word IntermodDirs3_13422;
          MR_Word LinkLibDirs2_13423;
          MR_Word InitDirs2_13424;
          MR_Word Var_13425;

          Var_1527 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", GradeString_159);
          GradeSubdir_181 = mercury__dir__f_slash_2_f_0(Var_1527, TargetArch_144);
          SearchLibFilesGradeSubdirs_182 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToGradeSubdir_179, SearchLibFilesDirs_177);
          {
            Var_1529 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_1529, 0) = ((MR_Box) (GradeSubdir_181));
            MR_hl_field(MR_mktag(1), Var_1529, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_1535 = mercury__dir__this_directory_0_f_0();
          {
            Var_1534 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_1534, 0) = ((MR_Box) (&libs__handle_options_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), Var_1534, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_6));
            MR_hl_field(MR_mktag(0), Var_1534, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_1534, 3) = ((MR_Box) (Var_1535));
          }
          {
            Var_1533 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_1533, 0) = ((MR_Box) (&libs__handle_options_scalar_common_6[1]));
            MR_hl_field(MR_mktag(0), Var_1533, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_7));
            MR_hl_field(MR_mktag(0), Var_1533, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_1533, 3) = ((MR_Box) (Var_1534));
          }
          Var_1532 = mercury__list__filter_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_1533, IntermodDirs2_178);
          Var_1531 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesGradeSubdirs_182, Var_1532);
          IntermodDirs3_13422 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_1529, Var_1531);
          {
            Var_13425 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_13425, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), Var_13425, 1) = ((MR_Box) (IntermodDirs3_13422));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 666, Var_13425, STATE_VARIABLE_Globals_1517_1517, &STATE_VARIABLE_Globals_1538_1538);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1538_1538, (MR_Integer) 559, &LinkLibDirs2_13423);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1538_1538, (MR_Integer) 572, &InitDirs2_13424);
          {
            ToGradeLibDir_186 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ToGradeLibDir_186, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ToGradeLibDir_186, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_8));
            MR_hl_field(MR_mktag(0), ToGradeLibDir_186, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ToGradeLibDir_186, 3) = ((MR_Box) (ToGradeSubdir_179));
          }
          SearchGradeLibDirs_187 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToGradeLibDir_186, SearchLibFilesDirs_177);
          LinkLibDirs_188 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchGradeLibDirs_187, LinkLibDirs2_13423);
          {
            ToGradeInitDir_189 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ToGradeInitDir_189, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ToGradeInitDir_189, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_9));
            MR_hl_field(MR_mktag(0), ToGradeInitDir_189, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ToGradeInitDir_189, 3) = ((MR_Box) (ToGradeSubdir_179));
          }
          SearchGradeInitDirs_190 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToGradeInitDir_189, SearchLibFilesDirs_177);
          InitDirs_191 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchGradeInitDirs_190, InitDirs2_13424);
        }
        break;
    }
    {
      Var_1554 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_1554, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_1554, 1) = ((MR_Box) (LinkLibDirs_188));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 559, Var_1554, STATE_VARIABLE_Globals_1538_1538, &STATE_VARIABLE_Globals_1555_1555);
    {
      Var_1557 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_1557, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_1557, 1) = ((MR_Box) (InitDirs_191));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 572, Var_1557, STATE_VARIABLE_Globals_1555_1555, &STATE_VARIABLE_Globals_1558_1558);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1558_1558, (MR_Integer) 663, &UseSubdirs_192);
    switch (UseGradeSubdirs_176) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          succeeded = (UseSubdirs_192 == (MR_Integer) 1);
          if (succeeded)
          {
            ToMihsSubdir_193 = (MR_Word) (&libs__handle_options_scalar_common_7[0]);
            ToHrlsSubdir_194 = (MR_Word) (&libs__handle_options_scalar_common_7[1]);
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            ToMihsSubdir_193 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ToMihsSubdir_193, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ToMihsSubdir_193, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_12));
            MR_hl_field(MR_mktag(0), ToMihsSubdir_193, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ToMihsSubdir_193, 3) = ((MR_Box) (ToGradeSubdir_179));
          }
          {
            ToHrlsSubdir_194 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ToHrlsSubdir_194, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ToHrlsSubdir_194, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_13));
            MR_hl_field(MR_mktag(0), ToHrlsSubdir_194, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ToHrlsSubdir_194, 3) = ((MR_Box) (ToGradeSubdir_179));
          }
          succeeded = MR_TRUE;
        }
        break;
    }
    if (succeeded)
    {
      MR_Word CIncludeDirs1_195;
      MR_String MihsSubdir_196;
      MR_Word SearchLibMihsSubdirs_197;
      MR_Word SubdirCIncludeDirs_198;
      MR_Word ErlangIncludeDirs1_199;
      MR_String HrlsSubdir_200;
      MR_Word SubdirErlangIncludeDirs_201;
      MR_String Var_1583;
      MR_String Var_1584;
      MR_Word Var_1585;
      MR_Word Var_1586;
      MR_Word Var_1588;
      MR_Word STATE_VARIABLE_Globals_1589_1589;
      MR_String Var_1591;
      MR_Word Var_1593;
      MR_Box MR_CALL (* func_11)(MR_Box, MR_Box);
      MR_Box conv12_MihsSubdir_196;
      MR_Box MR_CALL (* func_13)(MR_Box, MR_Box);
      MR_Box conv14_HrlsSubdir_200;

      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1558_1558, (MR_Integer) 512, &CIncludeDirs1_195);
      Var_1583 = mercury__dir__this_directory_0_f_0();
      func_11 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToMihsSubdir_193, (MR_Integer) 1))));
      conv12_MihsSubdir_196 = func_11(((MR_Box) (ToMihsSubdir_193)), ((MR_Box) (Var_1583)));
      MihsSubdir_196 = ((MR_String) (conv12_MihsSubdir_196));
      SearchLibMihsSubdirs_197 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToMihsSubdir_193, SearchLibFilesDirs_177);
      Var_1584 = mercury__dir__this_directory_0_f_0();
      Var_1586 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibMihsSubdirs_197, CIncludeDirs1_195);
      {
        Var_1585 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_1585, 0) = ((MR_Box) (MihsSubdir_196));
        MR_hl_field(MR_mktag(1), Var_1585, 1) = ((MR_Box) (Var_1586));
      }
      {
        SubdirCIncludeDirs_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SubdirCIncludeDirs_198, 0) = ((MR_Box) (Var_1584));
        MR_hl_field(MR_mktag(1), SubdirCIncludeDirs_198, 1) = ((MR_Box) (Var_1585));
      }
      {
        Var_1588 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1588, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1588, 1) = ((MR_Box) (SubdirCIncludeDirs_198));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 512, Var_1588, STATE_VARIABLE_Globals_1558_1558, &STATE_VARIABLE_Globals_1589_1589);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1589_1589, (MR_Integer) 550, &ErlangIncludeDirs1_199);
      Var_1591 = mercury__dir__this_directory_0_f_0();
      func_13 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToHrlsSubdir_194, (MR_Integer) 1))));
      conv14_HrlsSubdir_200 = func_13(((MR_Box) (ToHrlsSubdir_194)), ((MR_Box) (Var_1591)));
      HrlsSubdir_200 = ((MR_String) (conv14_HrlsSubdir_200));
      {
        SubdirErlangIncludeDirs_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SubdirErlangIncludeDirs_201, 0) = ((MR_Box) (HrlsSubdir_200));
        MR_hl_field(MR_mktag(1), SubdirErlangIncludeDirs_201, 1) = ((MR_Box) (ErlangIncludeDirs1_199));
      }
      {
        Var_1593 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1593, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1593, 1) = ((MR_Box) (SubdirErlangIncludeDirs_201));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 550, Var_1593, STATE_VARIABLE_Globals_1589_1589, &STATE_VARIABLE_Globals_1594_1594);
    }
    else
      STATE_VARIABLE_Globals_1594_1594 = STATE_VARIABLE_Globals_1558_1558;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 346, (MR_Integer) 14, Var_517, STATE_VARIABLE_Globals_1594_1594, &STATE_VARIABLE_Globals_1598_1598);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1598_1598, (MR_Integer) 31, &WarnNonTailRecSelf_202);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1598_1598, (MR_Integer) 32, &WarnNonTailRecMutual_203);
    succeeded = (WarnNonTailRecSelf_202 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (WarnNonTailRecMutual_203 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word PessimizeTailCalls_204;
      MR_Word OptimizeTailCalls_205;
      MR_Word STATE_VARIABLE_Specs_1608_1608;
      MR_Word STATE_VARIABLE_Specs_1613_1613;
      MR_Word Var_1616;
      MR_Word Var_1617;

      libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1598_1598, (MR_Integer) 489, &PessimizeTailCalls_204);
      libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1598_1598, (MR_Integer) 477, &OptimizeTailCalls_205);
      switch (PessimizeTailCalls_204) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Specs_1608_1608 = STATE_VARIABLE_Specs_1300_1300;
          break;
        case (MR_Integer) 1:
          {
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[233])), STATE_VARIABLE_Specs_1300_1300, &STATE_VARIABLE_Specs_1608_1608);
          }
          break;
      }
      switch (OptimizeTailCalls_205) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[235])), STATE_VARIABLE_Specs_1608_1608, &STATE_VARIABLE_Specs_1613_1613);
          }
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_Specs_1613_1613 = STATE_VARIABLE_Specs_1608_1608;
          break;
      }
      succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_Integer) 3);
      if (succeeded)
      {
        Var_1616 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_1616)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_1617 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1616, (MR_Integer) 0))));
          succeeded = (Var_1617 == (MR_Word) ((MR_Unsigned) 20U));
        }
      }
      if (succeeded)
      {
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[237])), STATE_VARIABLE_Specs_1613_1613, &STATE_VARIABLE_Specs_1622_1622);
      }
      else
        STATE_VARIABLE_Specs_1622_1622 = STATE_VARIABLE_Specs_1613_1613;
    }
    else
      STATE_VARIABLE_Specs_1622_1622 = STATE_VARIABLE_Specs_1300_1300;
    switch (Target_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          BackendForeignLanguages_209 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[238]));
          STATE_VARIABLE_Globals_1633_1633 = STATE_VARIABLE_Globals_1598_1598;
        }
        break;
      case (MR_Integer) 1:
        {
          BackendForeignLanguages_209 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[239]));
          STATE_VARIABLE_Globals_1633_1633 = STATE_VARIABLE_Globals_1598_1598;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word STATE_VARIABLE_Globals_1629_1629;

          BackendForeignLanguages_209 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[18]));
          libs__globals__set_option_4_p_0((MR_Integer) 384, Var_517, STATE_VARIABLE_Globals_1598_1598, &STATE_VARIABLE_Globals_1629_1629);
          libs__globals__set_option_4_p_0((MR_Integer) 315, Var_517, STATE_VARIABLE_Globals_1629_1629, &STATE_VARIABLE_Globals_1633_1633);
        }
        break;
      case (MR_Integer) 2:
        {
          BackendForeignLanguages_209 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[240]));
          STATE_VARIABLE_Globals_1633_1633 = STATE_VARIABLE_Globals_1598_1598;
        }
        break;
    }
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1633_1633, (MR_Integer) 283, &CurrentBackendForeignLanguage_210);
    if ((CurrentBackendForeignLanguage_210 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_1643;

      {
        Var_1643 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1643, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1643, 1) = ((MR_Box) (BackendForeignLanguages_209));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 283, Var_1643, STATE_VARIABLE_Globals_1633_1633, &STATE_VARIABLE_Globals_1644_1644);
    }
    else
      STATE_VARIABLE_Globals_1644_1644 = STATE_VARIABLE_Globals_1633_1633;
    libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_1644_1644, (MR_Integer) 333, &CompareSpec_213);
    succeeded = (CompareSpec_213 < (MR_Integer) 0);
    if (succeeded)
      switch (HighLevelCode_107) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            libs__globals__set_option_4_p_0((MR_Integer) 333, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[7])), STATE_VARIABLE_Globals_1644_1644, &STATE_VARIABLE_Globals_1653_1653);
          }
          break;
        case (MR_Integer) 1:
          {
            libs__globals__set_option_4_p_0((MR_Integer) 333, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[8])), STATE_VARIABLE_Globals_1644_1644, &STATE_VARIABLE_Globals_1653_1653);
          }
          break;
      }
    else
      STATE_VARIABLE_Globals_1653_1653 = STATE_VARIABLE_Globals_1644_1644;
    succeeded = (Target_27 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (TagsMethod_59 == (MR_Integer) 1);
      if (succeeded)
      {
        Var_1655 = (MR_Integer) 2;
        succeeded = (NumPtagBits_57 >= Var_1655);
      }
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 290, Var_360, STATE_VARIABLE_Globals_1653_1653, &STATE_VARIABLE_Globals_1658_1658);
    }
    else
    {
      libs__globals__set_option_4_p_0((MR_Integer) 290, Var_517, STATE_VARIABLE_Globals_1653_1653, &STATE_VARIABLE_Globals_1658_1658);
    }
    switch (HighLevelCode_107) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__handle_options__postprocess_options_lowlevel_2_p_0(STATE_VARIABLE_Globals_1658_1658, &STATE_VARIABLE_Globals_1664_1664);
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_1664_1664 = STATE_VARIABLE_Globals_1658_1658;
        break;
    }
    libs__compute_grade__postprocess_options_libgrades_4_p_0(STATE_VARIABLE_Globals_1664_1664, STATE_VARIABLE_Globals_216, STATE_VARIABLE_Specs_1622_1622, STATE_VARIABLE_Specs_215);
    libs__globals__globals_init_mutables_3_p_0(*STATE_VARIABLE_Globals_216);
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
    libs__globals__set_option_4_p_0((MR_Integer) 130, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2])), STATE_VARIABLE_Globals_0_11, STATE_VARIABLE_Globals_12);
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
    MR_Word Var_18 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]));
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

    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_14, (MR_Integer) 391, &SourceOptionValue_63);
    switch (SourceOptionValue_63) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_19_19 = STATE_VARIABLE_Globals_0_14;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 491, Var_18, STATE_VARIABLE_Globals_0_14, &STATE_VARIABLE_Globals_19_19);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_19_19, (MR_Integer) 497, &SourceOptionValue_71);
    switch (SourceOptionValue_71) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_24_24 = STATE_VARIABLE_Globals_19_19;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 494, Var_18, STATE_VARIABLE_Globals_19_19, &STATE_VARIABLE_Globals_24_24);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_24_24, (MR_Integer) 497, &SourceOptionValue_79);
    switch (SourceOptionValue_79) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_29_29 = STATE_VARIABLE_Globals_24_24;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 487, Var_18, STATE_VARIABLE_Globals_24_24, &STATE_VARIABLE_Globals_29_29);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_29_29, (MR_Integer) 496, &SourceOptionValue_87);
    switch (SourceOptionValue_87) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_34_34 = STATE_VARIABLE_Globals_29_29;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 319, Var_18, STATE_VARIABLE_Globals_29_29, &STATE_VARIABLE_Globals_34_34);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_34_34, (MR_Integer) 497, &OptFrames_4);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_34_34, (MR_Integer) 491, &OptLocalVars_5);
    libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_34_34, (MR_Integer) 500, &OptRepeat_6);
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
      libs__globals__set_option_4_p_0((MR_Integer) 500, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[1])), STATE_VARIABLE_Globals_34_34, &STATE_VARIABLE_Globals_42_42);
    }
    else
      STATE_VARIABLE_Globals_42_42 = STATE_VARIABLE_Globals_34_34;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_42_42, (MR_Integer) 259, &UnboxedFloat_7);
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
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = (MR_Box) ((MR_Unsigned) (StaticGroundFloats_8));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 470, Var_46, STATE_VARIABLE_Globals_42_42, &STATE_VARIABLE_Globals_47_47);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_47_47, (MR_Integer) 260, &UnboxedInt64s_9);
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
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = (MR_Box) ((MR_Unsigned) (StaticGroundInt64s_10));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 471, Var_50, STATE_VARIABLE_Globals_47_47, &STATE_VARIABLE_Globals_51_51);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_51_51, (MR_Integer) 273, &NonLocalGotos_11);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_51_51, (MR_Integer) 275, &AsmLabels_12);
    succeeded = (NonLocalGotos_11 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (AsmLabels_12 == (MR_Integer) 0);
    if (succeeded)
      StaticCodeAddrs_13 = (MR_Integer) 0;
    else
      StaticCodeAddrs_13 = (MR_Integer) 1;
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = (MR_Box) ((MR_Unsigned) (StaticCodeAddrs_13));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 472, Var_55, STATE_VARIABLE_Globals_51_51, STATE_VARIABLE_Globals_15);
  }
}

static void MR_CALL 
libs__handle_options__check_option_values_22_p_0(
  MR_Word STATE_VARIABLE_OptionTable_0_117,
  MR_Word * STATE_VARIABLE_OptionTable_118,
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
  MR_Word * STATE_VARIABLE_Specs_119)
{
  {
    MR_bool succeeded;
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
    MR_Word LimitErrorContextsOptionStrs_109;
    MR_Word BadLimitErrorContextsOptions_110;
    MR_Word STATE_VARIABLE_Specs_157_157;
    MR_Word STATE_VARIABLE_Specs_196_196;
    MR_Word STATE_VARIABLE_Specs_229_229;
    MR_Word STATE_VARIABLE_Specs_250_250;
    MR_Word STATE_VARIABLE_Specs_271_271;
    MR_Word STATE_VARIABLE_Specs_304_304;
    MR_Word STATE_VARIABLE_Specs_337_337;
    MR_Word STATE_VARIABLE_Specs_359_359;
    MR_Word STATE_VARIABLE_Specs_416_416;
    MR_Word STATE_VARIABLE_Specs_453_453;
    MR_Word STATE_VARIABLE_Specs_487_487;
    MR_Word STATE_VARIABLE_OptionTable_491_491;
    MR_Word STATE_VARIABLE_Specs_518_518;
    MR_String STATE_VARIABLE_DumpOptions_520_520;
    MR_String STATE_VARIABLE_DumpOptions_521_521;
    MR_String STATE_VARIABLE_DumpOptions_524_524;
    MR_String STATE_VARIABLE_DumpOptions_528_528;
    MR_String STATE_VARIABLE_DumpOptions_552_552;
    MR_Word Var_555;
    MR_Word STATE_VARIABLE_Specs_594_594;
    MR_Word STATE_VARIABLE_Specs_630_630;
    MR_Word STATE_VARIABLE_Specs_662_662;
    MR_Word STATE_VARIABLE_Specs_667_667;
    MR_Word STATE_VARIABLE_Specs_704_704;
    MR_Word STATE_VARIABLE_Specs_742_742;
    MR_Word STATE_VARIABLE_Specs_780_780;
    MR_Word TargetPrime_44;
    MR_Word GC_MethodPrime_47;
    MR_Word TagsMethodPrime_50;
    MR_Integer Var_232;
    MR_Integer Var_253;
    MR_Word TermNormPrime_57;
    MR_Word Term2NormPrime_60;
    MR_Word TraceSuppressPrime_70;
    MR_Word MaybeThreadSafePrime_78;
    MR_Char Var_523;
    MR_Char Var_527;
    MR_Char Var_551;
    MR_Word C_CompilerTypePrime_85;
    MR_Word CSharp_CompilerTypePrime_88;
    MR_Word ReuseStrategyPrime_92;
    MR_Word HostEnvTypePrime_101;
    MR_Word SystemEnvTypePrime_104;
    MR_Word TargetEnvTypePrime_107;

    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 196, &TargetStr_43);
    succeeded = libs__globals__convert_target_2_p_0(TargetStr_43, &TargetPrime_44);
    if (succeeded)
    {
      *Target_24 = TargetPrime_44;
      STATE_VARIABLE_Specs_157_157 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word TargetSpec_45;
      MR_Word Var_124;
      MR_Word Var_127;
      MR_Word Var_128;
      MR_Word Var_139;
      MR_Word Var_140;

      *Target_24 = (MR_Integer) 0;
      {
        Var_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_128, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_128, 1) = ((MR_Box) (TargetStr_43));
      }
      {
        Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (Var_128));
        MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[17])));
      }
      {
        Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (Var_127));
      }
      Var_140 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[21])));
      Var_139 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_140, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      TargetSpec_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_124, Var_139);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TargetSpec_45, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_157_157);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 233, &GC_MethodStr_46);
    succeeded = libs__globals__convert_gc_method_2_p_0(GC_MethodStr_46, &GC_MethodPrime_47);
    if (succeeded)
    {
      *GC_Method_25 = GC_MethodPrime_47;
      STATE_VARIABLE_Specs_196_196 = STATE_VARIABLE_Specs_157_157;
    }
    else
    {
      MR_Word GCMethodSpec_48;
      MR_Word Var_159;
      MR_Word Var_162;
      MR_Word Var_163;
      MR_Word Var_174;
      MR_Word Var_175;

      *GC_Method_25 = (MR_Integer) 1;
      {
        Var_163 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_163, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_163, 1) = ((MR_Box) (GC_MethodStr_46));
      }
      {
        Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_162, 0) = ((MR_Box) (Var_163));
        MR_hl_field(MR_mktag(1), Var_162, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[24])));
      }
      {
        Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_159, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), Var_159, 1) = ((MR_Box) (Var_162));
      }
      Var_175 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[30])));
      Var_174 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_175, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      GCMethodSpec_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_159, Var_174);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), GCMethodSpec_48, STATE_VARIABLE_Specs_157_157, &STATE_VARIABLE_Specs_196_196);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 254, &TagsMethodStr_49);
    succeeded = libs__globals__convert_tags_method_2_p_0(TagsMethodStr_49, &TagsMethodPrime_50);
    if (succeeded)
    {
      *TagsMethod_26 = TagsMethodPrime_50;
      STATE_VARIABLE_Specs_229_229 = STATE_VARIABLE_Specs_196_196;
    }
    else
    {
      MR_Word TagsMethodSpec_51;
      MR_Word Var_198;
      MR_Word Var_201;
      MR_Word Var_202;
      MR_Word Var_213;
      MR_Word Var_214;

      *TagsMethod_26 = (MR_Integer) 0;
      {
        Var_202 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_202, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_202, 1) = ((MR_Box) (TagsMethodStr_49));
      }
      {
        Var_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_201, 0) = ((MR_Box) (Var_202));
        MR_hl_field(MR_mktag(1), Var_201, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[33])));
      }
      {
        Var_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_198, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), Var_198, 1) = ((MR_Box) (Var_201));
      }
      Var_214 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[36])));
      Var_213 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_214, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      TagsMethodSpec_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_198, Var_213);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TagsMethodSpec_51, STATE_VARIABLE_Specs_196_196, &STATE_VARIABLE_Specs_229_229);
    }
    libs__handle_options__raw_lookup_int_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 336, &FactTablePercentFull_52);
    succeeded = (FactTablePercentFull_52 >= (MR_Integer) 1);
    if (succeeded)
    {
      Var_232 = (MR_Integer) 100;
      succeeded = (FactTablePercentFull_52 <= Var_232);
    }
    if (succeeded)
      STATE_VARIABLE_Specs_250_250 = STATE_VARIABLE_Specs_229_229;
    else
    {
      MR_Word FactTablePercentFullSpec_53;
      MR_Word Var_235;
      MR_Word Var_236;

      {
        Var_236 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_236, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_236, 1) = ((MR_Box) (FactTablePercentFull_52));
      }
      {
        Var_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_235, 0) = ((MR_Box) (Var_236));
        MR_hl_field(MR_mktag(1), Var_235, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[41])));
      }
      {
        FactTablePercentFullSpec_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FactTablePercentFullSpec_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), FactTablePercentFullSpec_53, 1) = ((MR_Box) (Var_235));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), FactTablePercentFullSpec_53, STATE_VARIABLE_Specs_229_229, &STATE_VARIABLE_Specs_250_250);
    }
    libs__handle_options__raw_lookup_int_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 51, &IncompleteSwitchThreshold_54);
    succeeded = (IncompleteSwitchThreshold_54 >= (MR_Integer) 0);
    if (succeeded)
    {
      Var_253 = (MR_Integer) 100;
      succeeded = (IncompleteSwitchThreshold_54 <= Var_253);
    }
    if (succeeded)
      STATE_VARIABLE_Specs_271_271 = STATE_VARIABLE_Specs_250_250;
    else
    {
      MR_Word IncompleteSwitchThresholdSpec_55;
      MR_Word Var_256;
      MR_Word Var_257;

      {
        Var_257 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_257, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_257, 1) = ((MR_Box) (IncompleteSwitchThreshold_54));
      }
      {
        Var_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_256, 0) = ((MR_Box) (Var_257));
        MR_hl_field(MR_mktag(1), Var_256, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[46])));
      }
      {
        IncompleteSwitchThresholdSpec_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), IncompleteSwitchThresholdSpec_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), IncompleteSwitchThresholdSpec_55, 1) = ((MR_Box) (Var_256));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), IncompleteSwitchThresholdSpec_55, STATE_VARIABLE_Specs_250_250, &STATE_VARIABLE_Specs_271_271);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 439, &TermNormStr_56);
    succeeded = libs__globals__convert_termination_norm_2_p_0(TermNormStr_56, &TermNormPrime_57);
    if (succeeded)
    {
      *TermNorm_27 = TermNormPrime_57;
      STATE_VARIABLE_Specs_304_304 = STATE_VARIABLE_Specs_271_271;
    }
    else
    {
      MR_Word TermNormSpec_58;
      MR_Word Var_273;
      MR_Word Var_276;
      MR_Word Var_277;
      MR_Word Var_288;
      MR_Word Var_289;

      *TermNorm_27 = (MR_Integer) 0;
      {
        Var_277 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_277, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_277, 1) = ((MR_Box) (TermNormStr_56));
      }
      {
        Var_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_276, 0) = ((MR_Box) (Var_277));
        MR_hl_field(MR_mktag(1), Var_276, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[49])));
      }
      {
        Var_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_273, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), Var_273, 1) = ((MR_Box) (Var_276));
      }
      Var_289 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[52])));
      Var_288 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_289, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      TermNormSpec_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_273, Var_288);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TermNormSpec_58, STATE_VARIABLE_Specs_271_271, &STATE_VARIABLE_Specs_304_304);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 445, &Term2NormStr_59);
    succeeded = libs__globals__convert_termination_norm_2_p_0(Term2NormStr_59, &Term2NormPrime_60);
    if (succeeded)
    {
      *Term2Norm_28 = Term2NormPrime_60;
      STATE_VARIABLE_Specs_337_337 = STATE_VARIABLE_Specs_304_304;
    }
    else
    {
      MR_Word Term2NormSpec_61;
      MR_Word Var_306;
      MR_Word Var_309;
      MR_Word Var_310;
      MR_Word Var_321;
      MR_Word Var_322;

      *Term2Norm_28 = (MR_Integer) 0;
      {
        Var_310 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_310, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_310, 1) = ((MR_Box) (TermNormStr_56));
      }
      {
        Var_309 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_309, 0) = ((MR_Box) (Var_310));
        MR_hl_field(MR_mktag(1), Var_309, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[55])));
      }
      {
        Var_306 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_306, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), Var_306, 1) = ((MR_Box) (Var_309));
      }
      Var_322 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[52])));
      Var_321 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_322, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      Term2NormSpec_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_306, Var_321);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), Term2NormSpec_61, STATE_VARIABLE_Specs_304_304, &STATE_VARIABLE_Specs_337_337);
    }
    libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 146, &ForceDisableTracing_62);
    switch (ForceDisableTracing_62) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Trace_63;
          MR_Word ExecTrace_64;
          MR_Word DeclDebug_65;
          MR_Word MaybeTraceLevel_66;

          libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 134, &Trace_63);
          libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 204, &ExecTrace_64);
          libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 205, &DeclDebug_65);
          succeeded = libs__trace_params__convert_trace_level_4_p_0(Trace_63, ExecTrace_64, DeclDebug_65, &MaybeTraceLevel_66);
          if (succeeded)
            if ((MaybeTraceLevel_66 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word InconsistentTraceLevelSpec_67;
              MR_Word Var_344;
              MR_Word Var_345;

              *TraceLevel_29 = libs__trace_params__trace_level_none_0_f_0();
              {
                Var_345 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_345, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_345, 1) = ((MR_Box) (Trace_63));
              }
              {
                Var_344 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_344, 0) = ((MR_Box) (Var_345));
                MR_hl_field(MR_mktag(1), Var_344, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[61])));
              }
              {
                InconsistentTraceLevelSpec_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), InconsistentTraceLevelSpec_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
                MR_hl_field(MR_mktag(1), InconsistentTraceLevelSpec_67, 1) = ((MR_Box) (Var_344));
              }
              libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), InconsistentTraceLevelSpec_67, STATE_VARIABLE_Specs_337_337, &STATE_VARIABLE_Specs_359_359);
            }
            else
            {
              *TraceLevel_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTraceLevel_66, (MR_Integer) 0))));
              STATE_VARIABLE_Specs_359_359 = STATE_VARIABLE_Specs_337_337;
            }
          else
          {
            MR_Word BadTraceLevelSpec_68;
            MR_Word Var_360;
            MR_Word Var_363;
            MR_Word Var_364;
            MR_Word Var_375;
            MR_Word Var_376;

            *TraceLevel_29 = libs__trace_params__trace_level_none_0_f_0();
            {
              Var_364 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_364, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_364, 1) = ((MR_Box) (Trace_63));
            }
            {
              Var_363 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_363, 0) = ((MR_Box) (Var_364));
              MR_hl_field(MR_mktag(1), Var_363, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[64])));
            }
            {
              Var_360 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_360, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
              MR_hl_field(MR_mktag(1), Var_360, 1) = ((MR_Box) (Var_363));
            }
            Var_376 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[70])));
            Var_375 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_376, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
            BadTraceLevelSpec_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_360, Var_375);
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), BadTraceLevelSpec_68, STATE_VARIABLE_Specs_337_337, &STATE_VARIABLE_Specs_359_359);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *TraceLevel_29 = libs__trace_params__trace_level_none_0_f_0();
          STATE_VARIABLE_Specs_359_359 = STATE_VARIABLE_Specs_337_337;
        }
        break;
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 145, &SuppressStr_69);
    succeeded = libs__trace_params__convert_trace_suppress_2_p_0(SuppressStr_69, &TraceSuppressPrime_70);
    if (succeeded)
    {
      *TraceSuppress_30 = TraceSuppressPrime_70;
      STATE_VARIABLE_Specs_416_416 = STATE_VARIABLE_Specs_359_359;
    }
    else
    {
      MR_Word TraceSuppressSpec_71;
      MR_Word Var_401;
      MR_Word Var_402;

      *TraceSuppress_30 = libs__trace_params__default_trace_suppress_0_f_0();
      {
        Var_402 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_402, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_402, 1) = ((MR_Box) (SuppressStr_69));
      }
      {
        Var_401 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_401, 0) = ((MR_Box) (Var_402));
        MR_hl_field(MR_mktag(1), Var_401, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[73])));
      }
      {
        TraceSuppressSpec_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TraceSuppressSpec_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), TraceSuppressSpec_71, 1) = ((MR_Box) (Var_401));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TraceSuppressSpec_71, STATE_VARIABLE_Specs_359_359, &STATE_VARIABLE_Specs_416_416);
    }
    libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 150, &ForceDisableSSDB_72);
    switch (ForceDisableSSDB_72) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String SSTrace_73;
          MR_Word SSDB_74;
          MR_Word SSTL_75;

          libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 252, &SSTrace_73);
          libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 251, &SSDB_74);
          succeeded = libs__globals__convert_ssdb_trace_level_3_p_0(SSTrace_73, SSDB_74, &SSTL_75);
          if (succeeded)
          {
            *SSTraceLevel_31 = SSTL_75;
            STATE_VARIABLE_Specs_453_453 = STATE_VARIABLE_Specs_416_416;
          }
          else
          {
            MR_Word SSDBSpec_76;
            MR_Word Var_420;
            MR_Word Var_423;
            MR_Word Var_424;
            MR_Word Var_435;
            MR_Word Var_436;

            *SSTraceLevel_31 = (MR_Integer) 0;
            {
              Var_424 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_424, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_424, 1) = ((MR_Box) (SSTrace_73));
            }
            {
              Var_423 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_423, 0) = ((MR_Box) (Var_424));
              MR_hl_field(MR_mktag(1), Var_423, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[76])));
            }
            {
              Var_420 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_420, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
              MR_hl_field(MR_mktag(1), Var_420, 1) = ((MR_Box) (Var_423));
            }
            Var_436 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[80])));
            Var_435 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_436, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
            SSDBSpec_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_420, Var_435);
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), SSDBSpec_76, STATE_VARIABLE_Specs_416_416, &STATE_VARIABLE_Specs_453_453);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *SSTraceLevel_31 = (MR_Integer) 0;
          STATE_VARIABLE_Specs_453_453 = STATE_VARIABLE_Specs_416_416;
        }
        break;
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 244, &MaybeThreadSafeStr_77);
    succeeded = libs__globals__convert_maybe_thread_safe_2_p_0(MaybeThreadSafeStr_77, &MaybeThreadSafePrime_78);
    if (succeeded)
    {
      *MaybeThreadSafe_32 = MaybeThreadSafePrime_78;
      STATE_VARIABLE_Specs_487_487 = STATE_VARIABLE_Specs_453_453;
    }
    else
    {
      MR_Word MTSSpec_79;
      MR_Word Var_455;
      MR_Word Var_458;
      MR_Word Var_459;
      MR_Word Var_473;
      MR_Word Var_474;

      *MaybeThreadSafe_32 = (MR_Integer) 0;
      {
        Var_459 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_459, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_459, 1) = ((MR_Box) (MaybeThreadSafeStr_77));
      }
      {
        Var_458 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_458, 0) = ((MR_Box) (Var_459));
        MR_hl_field(MR_mktag(1), Var_458, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[87])));
      }
      {
        Var_455 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_455, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), Var_455, 1) = ((MR_Box) (Var_458));
      }
      Var_474 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[89])));
      Var_473 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_474, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      MTSSpec_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_455, Var_473);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), MTSSpec_79, STATE_VARIABLE_Specs_453_453, &STATE_VARIABLE_Specs_487_487);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 169, &DumpAlias_80);
    succeeded = (strcmp(DumpAlias_80, (MR_String) "") == 0);
    if (succeeded)
    {
      STATE_VARIABLE_Specs_518_518 = STATE_VARIABLE_Specs_487_487;
      STATE_VARIABLE_OptionTable_491_491 = STATE_VARIABLE_OptionTable_0_117;
    }
    else
    {
      MR_String AliasDumpOptions_81;

      succeeded = libs__handle_options__convert_dump_alias_2_p_0(DumpAlias_80, &AliasDumpOptions_81);
      if (succeeded)
      {
        MR_Word Var_490;

        {
          Var_490 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_490, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_490, 1) = ((MR_Box) (AliasDumpOptions_81));
        }
        mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 170)), ((MR_Box) (Var_490)), STATE_VARIABLE_OptionTable_0_117, &STATE_VARIABLE_OptionTable_491_491);
        STATE_VARIABLE_Specs_518_518 = STATE_VARIABLE_Specs_487_487;
      }
      else
      {
        MR_Word DumpAliasSpec_82;
        MR_Word Var_494;
        MR_Word Var_495;

        {
          Var_495 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_495, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_495, 1) = ((MR_Box) (DumpAlias_80));
        }
        {
          Var_494 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_494, 0) = ((MR_Box) (Var_495));
          MR_hl_field(MR_mktag(1), Var_494, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[98])));
        }
        {
          DumpAliasSpec_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), DumpAliasSpec_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
          MR_hl_field(MR_mktag(1), DumpAliasSpec_82, 1) = ((MR_Box) (Var_494));
        }
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), DumpAliasSpec_82, STATE_VARIABLE_Specs_487_487, &STATE_VARIABLE_Specs_518_518);
        STATE_VARIABLE_OptionTable_491_491 = STATE_VARIABLE_OptionTable_0_117;
      }
    }
    mercury__getopt_io__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), STATE_VARIABLE_OptionTable_491_491, ((MR_Box) ((MR_Integer) 170)), &STATE_VARIABLE_DumpOptions_520_520);
    succeeded = (strcmp(STATE_VARIABLE_DumpOptions_520_520, (MR_String) "") == 0);
    if (succeeded)
      STATE_VARIABLE_DumpOptions_521_521 = (MR_String) "x";
    else
      STATE_VARIABLE_DumpOptions_521_521 = STATE_VARIABLE_DumpOptions_520_520;
    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_521_521, (MR_Char) 121);
    if (succeeded)
    {
      Var_523 = (MR_Char) 97;
      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_521_521, Var_523);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      STATE_VARIABLE_DumpOptions_524_524 = mercury__string__f_43_43_2_f_0((MR_String) "a", STATE_VARIABLE_DumpOptions_521_521);
    }
    else
      STATE_VARIABLE_DumpOptions_524_524 = STATE_VARIABLE_DumpOptions_521_521;
    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_524_524, (MR_Char) 97);
    if (succeeded)
    {
      Var_527 = (MR_Char) 117;
      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_524_524, Var_527);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      STATE_VARIABLE_DumpOptions_528_528 = mercury__string__f_43_43_2_f_0((MR_String) "u", STATE_VARIABLE_DumpOptions_524_524);
    }
    else
      STATE_VARIABLE_DumpOptions_528_528 = STATE_VARIABLE_DumpOptions_524_524;
    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 65);
    if (!(succeeded))
    {
      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 66);
      if (!(succeeded))
      {
        succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 68);
        if (!(succeeded))
        {
          succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 71);
          if (!(succeeded))
          {
            succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 80);
            if (!(succeeded))
            {
              succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 82);
              if (!(succeeded))
              {
                succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 83);
                if (!(succeeded))
                {
                  succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 98);
                  if (!(succeeded))
                  {
                    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 99);
                    if (!(succeeded))
                    {
                      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 100);
                      if (!(succeeded))
                      {
                        succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 102);
                        if (!(succeeded))
                        {
                          succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 103);
                          if (!(succeeded))
                          {
                            succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 105);
                            if (!(succeeded))
                            {
                              succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 108);
                              if (!(succeeded))
                              {
                                succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 109);
                                if (!(succeeded))
                                {
                                  succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 110);
                                  if (!(succeeded))
                                  {
                                    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 112);
                                    if (!(succeeded))
                                    {
                                      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 115);
                                      if (!(succeeded))
                                      {
                                        succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 116);
                                        if (!(succeeded))
                                        {
                                          succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 117);
                                          if (!(succeeded))
                                          {
                                            succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 122);
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
      Var_551 = (MR_Char) 120;
      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, Var_551);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      STATE_VARIABLE_DumpOptions_552_552 = mercury__string__f_43_43_2_f_0((MR_String) "x", STATE_VARIABLE_DumpOptions_528_528);
    }
    else
      STATE_VARIABLE_DumpOptions_552_552 = STATE_VARIABLE_DumpOptions_528_528;
    {
      Var_555 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_555, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_555, 1) = ((MR_Box) (STATE_VARIABLE_DumpOptions_552_552));
    }
    mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 170)), ((MR_Box) (Var_555)), STATE_VARIABLE_OptionTable_491_491, STATE_VARIABLE_OptionTable_118);
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 534, &C_CompilerTypeStr_84);
    succeeded = libs__globals__convert_c_compiler_type_2_p_0(C_CompilerTypeStr_84, &C_CompilerTypePrime_85);
    if (succeeded)
    {
      *C_CompilerType_33 = C_CompilerTypePrime_85;
      STATE_VARIABLE_Specs_594_594 = STATE_VARIABLE_Specs_518_518;
    }
    else
    {
      MR_Word CCTpec_86;
      MR_Word Var_558;
      MR_Word Var_561;
      MR_Word Var_562;
      MR_Word Var_576;
      MR_Word Var_577;

      *C_CompilerType_33 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_562 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_562, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_562, 1) = ((MR_Box) (C_CompilerTypeStr_84));
      }
      {
        Var_561 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_561, 0) = ((MR_Box) (Var_562));
        MR_hl_field(MR_mktag(1), Var_561, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[101])));
      }
      {
        Var_558 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_558, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), Var_558, 1) = ((MR_Box) (Var_561));
      }
      Var_577 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[105])));
      Var_576 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_577, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      CCTpec_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_558, Var_576);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), CCTpec_86, STATE_VARIABLE_Specs_518_518, &STATE_VARIABLE_Specs_594_594);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 535, &CSharp_CompilerTypeStr_87);
    succeeded = libs__globals__convert_csharp_compiler_type_2_p_0(CSharp_CompilerTypeStr_87, &CSharp_CompilerTypePrime_88);
    if (succeeded)
    {
      *CSharp_CompilerType_34 = CSharp_CompilerTypePrime_88;
      STATE_VARIABLE_Specs_630_630 = STATE_VARIABLE_Specs_594_594;
    }
    else
    {
      MR_Word CSCSpec_89;
      MR_Word Var_596;
      MR_Word Var_599;
      MR_Word Var_600;
      MR_Word Var_614;
      MR_Word Var_615;

      *CSharp_CompilerType_34 = (MR_Integer) 2;
      {
        Var_600 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_600, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_600, 1) = ((MR_Box) (CSharp_CompilerTypeStr_87));
      }
      {
        Var_599 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_599, 0) = ((MR_Box) (Var_600));
        MR_hl_field(MR_mktag(1), Var_599, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[108])));
      }
      {
        Var_596 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_596, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), Var_596, 1) = ((MR_Box) (Var_599));
      }
      Var_615 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[110])));
      Var_614 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_615, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      CSCSpec_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_596, Var_614);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), CSCSpec_89, STATE_VARIABLE_Specs_594_594, &STATE_VARIABLE_Specs_630_630);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 430, &ReuseConstraintStr_90);
    libs__handle_options__raw_lookup_int_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 431, &ReuseConstraintArgNum_91);
    succeeded = libs__globals__convert_reuse_strategy_3_p_0(ReuseConstraintStr_90, ReuseConstraintArgNum_91, &ReuseStrategyPrime_92);
    if (succeeded)
    {
      *ReuseStrategy_35 = ReuseStrategyPrime_92;
      STATE_VARIABLE_Specs_662_662 = STATE_VARIABLE_Specs_630_630;
    }
    else
    {
      MR_Word ReuseConstrSpec_93;
      MR_Word Var_633;
      MR_Word Var_636;
      MR_Word Var_637;
      MR_Word Var_648;
      MR_Word Var_649;

      *ReuseStrategy_35 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_637 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_637, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_637, 1) = ((MR_Box) (ReuseConstraintStr_90));
      }
      {
        Var_636 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_636, 0) = ((MR_Box) (Var_637));
        MR_hl_field(MR_mktag(1), Var_636, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[113])));
      }
      {
        Var_633 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_633, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), Var_633, 1) = ((MR_Box) (Var_636));
      }
      Var_649 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[115])));
      Var_648 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_649, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      ReuseConstrSpec_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_633, Var_648);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), ReuseConstrSpec_93, STATE_VARIABLE_Specs_630_630, &STATE_VARIABLE_Specs_662_662);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 692, &FeedbackFile_94);
    succeeded = (strcmp(FeedbackFile_94, (MR_String) "") == 0);
    if (succeeded)
    {
      *MaybeFeedbackInfo_36 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Specs_667_667 = STATE_VARIABLE_Specs_662_662;
    }
    else
    {
      MR_Word FeedbackReadResult_96;

      mdbcomp__feedback__read_feedback_file_5_p_0(FeedbackFile_94, (MR_Word) ((MR_Unsigned) 0U), &FeedbackReadResult_96);
      if (((MR_tag((MR_Word) FeedbackReadResult_96)) == (MR_Integer) 1))
      {
        MR_Word Error_98 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FeedbackReadResult_96, (MR_Integer) 0))));
        MR_String ErrorMessage_99;
        MR_Word Var_666;
        MR_Word Var_668;

        mdbcomp__feedback__feedback_read_error_message_string_3_p_0(FeedbackFile_94, Error_98, &ErrorMessage_99);
        {
          Var_668 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_668, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_668, 1) = ((MR_Box) (ErrorMessage_99));
        }
        {
          Var_666 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_666, 0) = ((MR_Box) (Var_668));
          MR_hl_field(MR_mktag(1), Var_666, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), Var_666, STATE_VARIABLE_Specs_662_662, &STATE_VARIABLE_Specs_667_667);
        *MaybeFeedbackInfo_36 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word FeedbackInfo_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FeedbackReadResult_96, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeFeedbackInfo_36 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FeedbackInfo_97));
        }
        STATE_VARIABLE_Specs_667_667 = STATE_VARIABLE_Specs_662_662;
      }
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 674, &HostEnvTypeStr_100);
    succeeded = libs__globals__convert_env_type_2_p_0(HostEnvTypeStr_100, &HostEnvTypePrime_101);
    if (succeeded)
    {
      *HostEnvType_37 = HostEnvTypePrime_101;
      STATE_VARIABLE_Specs_704_704 = STATE_VARIABLE_Specs_667_667;
    }
    else
    {
      MR_Word HostEnvSpec_102;
      MR_Word Var_671;
      MR_Word Var_674;
      MR_Word Var_675;
      MR_Word Var_686;
      MR_Word Var_687;

      *HostEnvType_37 = (MR_Integer) 0;
      {
        Var_675 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_675, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_675, 1) = ((MR_Box) (HostEnvTypeStr_100));
      }
      {
        Var_674 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_674, 0) = ((MR_Box) (Var_675));
        MR_hl_field(MR_mktag(1), Var_674, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[118])));
      }
      {
        Var_671 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_671, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), Var_671, 1) = ((MR_Box) (Var_674));
      }
      Var_687 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[122])));
      Var_686 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_687, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      HostEnvSpec_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_671, Var_686);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), HostEnvSpec_102, STATE_VARIABLE_Specs_667_667, &STATE_VARIABLE_Specs_704_704);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 675, &SystemEnvTypeStr_103);
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
      STATE_VARIABLE_Specs_742_742 = STATE_VARIABLE_Specs_704_704;
    }
    else
    {
      MR_Word SystemEnvSpec_105;
      MR_Word Var_706;
      MR_Word Var_709;
      MR_Word Var_710;
      MR_Word Var_724;
      MR_Word Var_725;

      *SystemEnvType_38 = (MR_Integer) 0;
      {
        Var_710 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_710, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_710, 1) = ((MR_Box) (SystemEnvTypeStr_103));
      }
      {
        Var_709 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_709, 0) = ((MR_Box) (Var_710));
        MR_hl_field(MR_mktag(1), Var_709, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[125])));
      }
      {
        Var_706 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_706, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), Var_706, 1) = ((MR_Box) (Var_709));
      }
      Var_725 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[122])));
      Var_724 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_725, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      SystemEnvSpec_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_706, Var_724);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), SystemEnvSpec_105, STATE_VARIABLE_Specs_704_704, &STATE_VARIABLE_Specs_742_742);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 676, &TargetEnvTypeStr_106);
    succeeded = libs__globals__convert_env_type_2_p_0(TargetEnvTypeStr_106, &TargetEnvTypePrime_107);
    if (succeeded)
    {
      *TargetEnvType_39 = TargetEnvTypePrime_107;
      STATE_VARIABLE_Specs_780_780 = STATE_VARIABLE_Specs_742_742;
    }
    else
    {
      MR_Word TargetEnvTypeSpec_108;
      MR_Word Var_744;
      MR_Word Var_747;
      MR_Word Var_748;
      MR_Word Var_762;
      MR_Word Var_763;

      *TargetEnvType_39 = (MR_Integer) 0;
      {
        Var_748 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_748, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_748, 1) = ((MR_Box) (TargetEnvTypeStr_106));
      }
      {
        Var_747 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_747, 0) = ((MR_Box) (Var_748));
        MR_hl_field(MR_mktag(1), Var_747, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[128])));
      }
      {
        Var_744 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_744, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), Var_744, 1) = ((MR_Box) (Var_747));
      }
      Var_763 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[122])));
      Var_762 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_763, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      TargetEnvTypeSpec_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_744, Var_762);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TargetEnvTypeSpec_108, STATE_VARIABLE_Specs_742_742, &STATE_VARIABLE_Specs_780_780);
    }
    libs__handle_options__raw_lookup_accumulating_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 73, &LimitErrorContextsOptionStrs_109);
    libs__globals__convert_limit_error_contexts_3_p_0(LimitErrorContextsOptionStrs_109, &BadLimitErrorContextsOptions_110, LimitErrorContextsMap_40);
    if ((BadLimitErrorContextsOptions_110 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_119 = STATE_VARIABLE_Specs_780_780;
    else
    {
      MR_Word Var_841 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BadLimitErrorContextsOptions_110, (MR_Integer) 1))));
      MR_String Var_842 = ((MR_String) ((MR_hl_field(MR_mktag(1), BadLimitErrorContextsOptions_110, (MR_Integer) 0))));

      if ((Var_841 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word LECSpec_112;
        MR_Word Var_805;
        MR_Word Var_806;

        {
          Var_806 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_806, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_806, 1) = ((MR_Box) (Var_842));
        }
        {
          Var_805 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_805, 0) = ((MR_Box) (Var_806));
          MR_hl_field(MR_mktag(1), Var_805, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[131])));
        }
        {
          LECSpec_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LECSpec_112, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
          MR_hl_field(MR_mktag(1), LECSpec_112, 1) = ((MR_Box) (Var_805));
        }
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), LECSpec_112, STATE_VARIABLE_Specs_780_780, STATE_VARIABLE_Specs_119);
      }
      else
      {
        MR_Word BadPieces_116;
        MR_Word Var_787;
        MR_Word LECSpec_821;

        BadPieces_116 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(BadLimitErrorContextsOptions_110);
        Var_787 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), BadPieces_116, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[131])));
        LECSpec_821 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[220])), Var_787);
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), LECSpec_821, STATE_VARIABLE_Specs_780_780, STATE_VARIABLE_Specs_119);
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
    MR_Word OptionValue_7;
    MR_Box conv0_OptionValue_7;
    MR_Word AccumulatingValuePrime_8;

    mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0), OptionTable_4, ((MR_Box) (Option_5)), &conv0_OptionValue_7);
    OptionValue_7 = ((MR_Word) (conv0_OptionValue_7));
    succeeded = ((((MR_tag((MR_Word) OptionValue_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), OptionValue_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (succeeded)
    {
      AccumulatingValuePrime_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OptionValue_7, (MR_Integer) 1))));
      *AccumulatingValue_6 = AccumulatingValuePrime_8;
    }
    else
    {
      MR_String OptionStr_9;
      MR_String Var_11;

      OptionStr_9 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_5)));
      Var_11 = mercury__string__f_43_43_2_f_0(OptionStr_9, (MR_String) " is not accumulating");
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.handle_options.raw_lookup_accumulating_option\'/3", Var_11);
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
    MR_Word OptionValue_7;
    MR_Box conv0_OptionValue_7;
    MR_String StringValuePrime_8;

    mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0), OptionTable_4, ((MR_Box) (Option_5)), &conv0_OptionValue_7);
    OptionValue_7 = ((MR_Word) (conv0_OptionValue_7));
    succeeded = ((((MR_tag((MR_Word) OptionValue_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), OptionValue_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (succeeded)
    {
      StringValuePrime_8 = ((MR_String) ((MR_hl_field(MR_mktag(3), OptionValue_7, (MR_Integer) 1))));
      *StringValue_6 = StringValuePrime_8;
    }
    else
    {
      MR_String OptionStr_9;
      MR_String Var_11;

      OptionStr_9 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_5)));
      Var_11 = mercury__string__f_43_43_2_f_0(OptionStr_9, (MR_String) " is not a string");
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.handle_options.raw_lookup_string_option\'/3", Var_11);
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
    MR_Word OptionValue_7;
    MR_Box conv0_OptionValue_7;
    MR_Integer IntValuePrime_8;

    mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0), OptionTable_4, ((MR_Box) (Option_5)), &conv0_OptionValue_7);
    OptionValue_7 = ((MR_Word) (conv0_OptionValue_7));
    succeeded = ((MR_tag((MR_Word) OptionValue_7)) == (MR_Integer) 2);
    if (succeeded)
    {
      IntValuePrime_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), OptionValue_7, (MR_Integer) 0))));
      *IntValue_6 = IntValuePrime_8;
    }
    else
    {
      MR_String OptionStr_9;
      MR_String Var_11;

      OptionStr_9 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_5)));
      Var_11 = mercury__string__f_43_43_2_f_0(OptionStr_9, (MR_String) " is not an int");
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.handle_options.raw_lookup_int_option\'/3", Var_11);
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
    MR_Word OptionValue_7;
    MR_Box conv0_OptionValue_7;
    MR_Word BoolValuePrime_8;

    mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0), OptionTable_4, ((MR_Box) (Option_5)), &conv0_OptionValue_7);
    OptionValue_7 = ((MR_Word) (conv0_OptionValue_7));
    succeeded = ((MR_tag((MR_Word) OptionValue_7)) == (MR_Integer) 1);
    if (succeeded)
    {
      BoolValuePrime_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), OptionValue_7, (MR_Integer) 0))) & (MR_Integer) 1);
      *BoolValue_6 = BoolValuePrime_8;
    }
    else
    {
      MR_String OptionStr_9;
      MR_String Var_11;

      OptionStr_9 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_5)));
      Var_11 = mercury__string__f_43_43_2_f_0(OptionStr_9, (MR_String) " is not a bool");
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.handle_options.raw_lookup_bool_option\'/3", Var_11);
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
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 101:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "detism"))
                case_num_0 = (MR_Integer) 6;
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "du"))
                case_num_0 = (MR_Integer) 7;
              break;
          }
          break;
        case (MR_Integer) 108:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "lco"))
            case_num_0 = (MR_Integer) 8;
          break;
        case (MR_Integer) 109:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 105:
              if (((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 110))
                switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 9;
                    break;
                  case (MR_Integer) 116:
                    if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "mintrans"))
                      case_num_0 = (MR_Integer) 10;
                    break;
                }
              break;
            case (MR_Integer) 109:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "mm"))
                case_num_0 = (MR_Integer) 11;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "most"))
                case_num_0 = (MR_Integer) 12;
              break;
          }
          break;
        case (MR_Integer) 111:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "osv"))
            case_num_0 = (MR_Integer) 13;
          break;
        case (MR_Integer) 112:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "paths"))
                case_num_0 = (MR_Integer) 14;
              break;
            case (MR_Integer) 101:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "petdr"))
                case_num_0 = (MR_Integer) 15;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "poly"))
                case_num_0 = (MR_Integer) 16;
              break;
          }
          break;
        case (MR_Integer) 115:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "statevar"))
            case_num_0 = (MR_Integer) 17;
          break;
        case (MR_Integer) 116:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "trans"))
            case_num_0 = (MR_Integer) 18;
          break;
        case (MR_Integer) 118:
          if (((MR_nth_code_unit(HeadVar__1_1, 1)) == (MR_Integer) 97))
            switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
              case (MR_Integer) 110:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "vanessa"))
                  case_num_0 = (MR_Integer) 19;
                break;
              case (MR_Integer) 114:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "vars"))
                  case_num_0 = (MR_Integer) 20;
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
