/*
** Automatically generated from `handle_options.m'
** by the Mercury compiler,
** version rotd-2019-07-23
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
#include "hlds.hlds_cons.mih"
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
#include "parse_tree.parse_tree_out_info.mih"
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
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2145__1_2_f_0(
  MR_Word ToGradeSubdir_180,
  MR_String LambdaHeadVar__1_1584);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2143__1_2_f_0(
  MR_Word ToGradeSubdir_180,
  MR_String LambdaHeadVar__1_1578);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2152__1_1_f_0(
  MR_String LambdaHeadVar__1_1573);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2151__1_1_f_0(
  MR_String LambdaHeadVar__1_1568);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2121__1_2_f_0(
  MR_Word ToGradeSubdir_180,
  MR_String LambdaHeadVar__1_1555);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2117__1_2_f_0(
  MR_Word ToGradeSubdir_180,
  MR_String LambdaHeadVar__1_1549);

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2099__2_2_p_0(
  MR_Word HeadVar__1_1542,
  MR_String HeadVar__2_1691);

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2099__1_2_p_0(
  MR_String HeadVar__1_1543,
  MR_String HeadVar__2_1693);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2081__1_3_f_0(
  MR_String TargetArch_145,
  MR_String GradeString_160,
  MR_String LambdaHeadVar__1_1530);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2045__1_2_f_0(
  MR_String GradeString_160,
  MR_String LambdaHeadVar__1_1511);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2035__1_2_f_0(
  MR_String GradeString_160,
  MR_String LambdaHeadVar__1_1501);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2022__1_2_f_0(
  MR_String GradeString_160,
  MR_String LambdaHeadVar__1_1484);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2002__1_2_f_0(
  MR_String GradeString_160,
  MR_String LambdaHeadVar__1_1469);

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
  MR_Word STATE_VARIABLE_Specs_0_215,
  MR_Word * STATE_VARIABLE_Specs_216,
  MR_Word * STATE_VARIABLE_Globals_217);

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
    ((MR_Box) ((MR_String) "Copyright (C) 2013-2019 The Mercury team\n")),
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
#line 2471 "handle_options.m"
MR_Word libs__handle_options__mutable_variable_already_printed_usage;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__handle_options__mutable_variable_already_printed_usage_lock;
#endif


#line 2471 "handle_options.m"
void 
libs__handle_options__user_init_pred_0(void)
#line 2471 "handle_options.m"
{
#line 2471 "handle_options.m"
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
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2145__1_2_f_0(
  MR_Word ToGradeSubdir_180,
  MR_String LambdaHeadVar__1_1584)
{
  {
    MR_String LambdaHeadVar__2_1585;
    MR_String Var_1586;
    MR_String Var_1587;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToGradeSubdir_180, (MR_Integer) 1))));
    MR_Box conv1_Var_1587;

    conv1_Var_1587 = func_0(((MR_Box) (ToGradeSubdir_180)), ((MR_Box) (LambdaHeadVar__1_1584)));
    Var_1587 = ((MR_String) (conv1_Var_1587));
    Var_1586 = mercury__dir__f_slash_2_f_0(Var_1587, (MR_String) "Mercury");
    LambdaHeadVar__2_1585 = mercury__dir__f_slash_2_f_0(Var_1586, (MR_String) "hrls");
    return LambdaHeadVar__2_1585;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2143__1_2_f_0(
  MR_Word ToGradeSubdir_180,
  MR_String LambdaHeadVar__1_1578)
{
  {
    MR_String LambdaHeadVar__2_1579;
    MR_String Var_1580;
    MR_String Var_1581;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToGradeSubdir_180, (MR_Integer) 1))));
    MR_Box conv1_Var_1581;

    conv1_Var_1581 = func_0(((MR_Box) (ToGradeSubdir_180)), ((MR_Box) (LambdaHeadVar__1_1578)));
    Var_1581 = ((MR_String) (conv1_Var_1581));
    Var_1580 = mercury__dir__f_slash_2_f_0(Var_1581, (MR_String) "Mercury");
    LambdaHeadVar__2_1579 = mercury__dir__f_slash_2_f_0(Var_1580, (MR_String) "mihs");
    return LambdaHeadVar__2_1579;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2152__1_1_f_0(
  MR_String LambdaHeadVar__1_1573)
{
  {
    MR_String LambdaHeadVar__2_1574;
    MR_String Var_1575;

    Var_1575 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1573, (MR_String) "Mercury");
    LambdaHeadVar__2_1574 = mercury__dir__f_slash_2_f_0(Var_1575, (MR_String) "hrls");
    return LambdaHeadVar__2_1574;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2151__1_1_f_0(
  MR_String LambdaHeadVar__1_1568)
{
  {
    MR_String LambdaHeadVar__2_1569;
    MR_String Var_1570;

    Var_1570 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1568, (MR_String) "Mercury");
    LambdaHeadVar__2_1569 = mercury__dir__f_slash_2_f_0(Var_1570, (MR_String) "mihs");
    return LambdaHeadVar__2_1569;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2121__1_2_f_0(
  MR_Word ToGradeSubdir_180,
  MR_String LambdaHeadVar__1_1555)
{
  {
    MR_String LambdaHeadVar__2_1556;
    MR_String Var_1557;
    MR_String Var_1558;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToGradeSubdir_180, (MR_Integer) 1))));
    MR_Box conv1_Var_1558;

    conv1_Var_1558 = func_0(((MR_Box) (ToGradeSubdir_180)), ((MR_Box) (LambdaHeadVar__1_1555)));
    Var_1558 = ((MR_String) (conv1_Var_1558));
    Var_1557 = mercury__dir__f_slash_2_f_0(Var_1558, (MR_String) "Mercury");
    LambdaHeadVar__2_1556 = mercury__dir__f_slash_2_f_0(Var_1557, (MR_String) "inits");
    return LambdaHeadVar__2_1556;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2117__1_2_f_0(
  MR_Word ToGradeSubdir_180,
  MR_String LambdaHeadVar__1_1549)
{
  {
    MR_String LambdaHeadVar__2_1550;
    MR_String Var_1551;
    MR_String Var_1552;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToGradeSubdir_180, (MR_Integer) 1))));
    MR_Box conv1_Var_1552;

    conv1_Var_1552 = func_0(((MR_Box) (ToGradeSubdir_180)), ((MR_Box) (LambdaHeadVar__1_1549)));
    Var_1552 = ((MR_String) (conv1_Var_1552));
    Var_1551 = mercury__dir__f_slash_2_f_0(Var_1552, (MR_String) "Mercury");
    LambdaHeadVar__2_1550 = mercury__dir__f_slash_2_f_0(Var_1551, (MR_String) "lib");
    return LambdaHeadVar__2_1550;
  }
}

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2099__2_2_p_0(
  MR_Word HeadVar__1_1542,
  MR_String HeadVar__2_1691)
{
  {
    MR_bool succeeded;

    succeeded = mercury__std_util__isnt_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadVar__1_1542, ((MR_Box) (HeadVar__2_1691)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2099__1_2_p_0(
  MR_String HeadVar__1_1543,
  MR_String HeadVar__2_1693)
{
  {
    MR_bool succeeded = (strcmp(HeadVar__1_1543, HeadVar__2_1693) == 0);

    return succeeded;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2081__1_3_f_0(
  MR_String TargetArch_145,
  MR_String GradeString_160,
  MR_String LambdaHeadVar__1_1530)
{
  {
    MR_String LambdaHeadVar__2_1531;
    MR_String Var_1532;
    MR_String Var_1533;

    Var_1533 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1530, (MR_String) "Mercury");
    Var_1532 = mercury__dir__f_slash_2_f_0(Var_1533, GradeString_160);
    LambdaHeadVar__2_1531 = mercury__dir__f_slash_2_f_0(Var_1532, TargetArch_145);
    return LambdaHeadVar__2_1531;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2045__1_2_f_0(
  MR_String GradeString_160,
  MR_String LambdaHeadVar__1_1511)
{
  {
    MR_String LambdaHeadVar__2_1512;
    MR_String Var_1513;

    Var_1513 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1511, (MR_String) "modules");
    LambdaHeadVar__2_1512 = mercury__dir__f_slash_2_f_0(Var_1513, GradeString_160);
    return LambdaHeadVar__2_1512;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2035__1_2_f_0(
  MR_String GradeString_160,
  MR_String LambdaHeadVar__1_1501)
{
  {
    MR_String LambdaHeadVar__2_1502;
    MR_String Var_1503;

    Var_1503 = mercury__dir__make_path_name_2_f_0((MR_String) "ints", GradeString_160);
    LambdaHeadVar__2_1502 = mercury__dir__make_path_name_2_f_0(LambdaHeadVar__1_1501, Var_1503);
    return LambdaHeadVar__2_1502;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2022__1_2_f_0(
  MR_String GradeString_160,
  MR_String LambdaHeadVar__1_1484)
{
  {
    MR_String LambdaHeadVar__2_1485;
    MR_String Var_1486;
    MR_String Var_1487;

    Var_1487 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1484, (MR_String) "lib");
    Var_1486 = mercury__dir__f_slash_2_f_0(Var_1487, GradeString_160);
    LambdaHeadVar__2_1485 = mercury__dir__f_slash_2_f_0(Var_1486, (MR_String) "inc");
    return LambdaHeadVar__2_1485;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2002__1_2_f_0(
  MR_String GradeString_160,
  MR_String LambdaHeadVar__1_1469)
{
  {
    MR_String LambdaHeadVar__2_1470;
    MR_String Var_1471;

    Var_1471 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1469, (MR_String) "lib");
    LambdaHeadVar__2_1470 = mercury__dir__f_slash_2_f_0(Var_1471, GradeString_160);
    return LambdaHeadVar__2_1470;
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
    mercury__io__write_string_3_p_0((MR_String) "           Copyright (C) 2013-2019 The Mercury team\n");
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

    mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_8);
    mercury__io__write_string_3_p_0(ProgName_8);
    mercury__io__write_string_3_p_0((MR_String) ":");
    mercury__io__nl_2_p_0();
    parse_tree__error_util__write_error_specs_ignore_4_p_0(Specs_6, Globals_5);
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
      libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_38_38, (MR_Integer) 131, &Smart_19);
      succeeded = (Smart_19 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) OpMode_18)) == (MR_Integer) 3);
        if (succeeded)
        {
          Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_18, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_41, (MR_Integer) 0))));
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
    MR_String conv10_LambdaHeadVar__2_1585;

    conv10_LambdaHeadVar__2_1585 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2145__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv10_LambdaHeadVar__2_1585));
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
    MR_String conv9_LambdaHeadVar__2_1579;

    conv9_LambdaHeadVar__2_1579 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2143__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv9_LambdaHeadVar__2_1579));
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
    MR_String conv8_LambdaHeadVar__2_1574;

    conv8_LambdaHeadVar__2_1574 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2152__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv8_LambdaHeadVar__2_1574));
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
    MR_String conv7_LambdaHeadVar__2_1569;

    conv7_LambdaHeadVar__2_1569 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2151__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv7_LambdaHeadVar__2_1569));
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
    MR_String conv6_LambdaHeadVar__2_1556;

    conv6_LambdaHeadVar__2_1556 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2121__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_1556));
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
    MR_String conv5_LambdaHeadVar__2_1550;

    conv5_LambdaHeadVar__2_1550 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2117__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv5_LambdaHeadVar__2_1550));
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

    succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2099__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
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

    succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2099__1_2_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
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
    MR_String conv4_LambdaHeadVar__2_1531;

    conv4_LambdaHeadVar__2_1531 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2081__1_3_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_1531));
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
    MR_String conv3_LambdaHeadVar__2_1512;

    conv3_LambdaHeadVar__2_1512 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2045__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_1512));
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
    MR_String conv2_LambdaHeadVar__2_1502;

    conv2_LambdaHeadVar__2_1502 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2035__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_1502));
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
    MR_String conv1_LambdaHeadVar__2_1485;

    conv1_LambdaHeadVar__2_1485 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2022__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_1485));
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
    MR_String conv0_LambdaHeadVar__2_1470;

    conv0_LambdaHeadVar__2_1470 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2002__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_1470));
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
  MR_Word STATE_VARIABLE_Specs_0_215,
  MR_Word * STATE_VARIABLE_Specs_216,
  MR_Word * STATE_VARIABLE_Globals_217)
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
    MR_Word Smart_83;
    MR_Word VeryVerbose_84;
    MR_Word Statistics_85;
    MR_Integer DebugLiveness_86;
    MR_Integer DebugModesPredId_90;
    MR_Word DebugUnneededCodePredNames_91;
    MR_Word DebugOptPredIdStrs_94;
    MR_Word DebugOptPredNames_95;
    MR_Word DebugIntermoduleAnalysis_100;
    MR_Word DumpHLDSPredIds_101;
    MR_Word UseTrail_107;
    MR_Word HighLevelCode_108;
    MR_Word UseMinimalModelStackCopy_109;
    MR_Word UseMinimalModelOwnStacks_110;
    MR_Word UseMinimalModel_111;
    MR_Word HighLevelData_115;
    MR_Word ProfOptimized_120;
    MR_String ExpComp_121;
    MR_Word TraceOptimized_122;
    MR_Word TraceLevelIsNone_123;
    MR_Word ProfileDeep_125;
    MR_Word RecordTermSizesAsWords_128;
    MR_Word RecordTermSizesAsCells_129;
    MR_Word PutNondetEnvOnHeap_133;
    MR_Word DisablePneg_135;
    MR_Word DisableCut_136;
    MR_Word DumpHLDSStages_137;
    MR_Word DumpTraceStages_138;
    MR_Word ParallelLiveness_139;
    MR_Word ParallelCodeGen_140;
    MR_String TargetArch_145;
    MR_String MercuryLinkage_146;
    MR_Word DefaultRuntimeLibraryDirs_147;
    MR_Word MaybeStdLibDir_148;
    MR_Word MaybeConfDir_154;
    MR_Word ConfigFile_157;
    MR_Word MercuryLibDirs_159;
    MR_String GradeString_160;
    MR_Word UseSearchDirs_174;
    MR_Word UseGradeSubdirs_177;
    MR_Word SearchLibFilesDirs_178;
    MR_Word IntermodDirs2_179;
    MR_Word ToGradeSubdir_180;
    MR_Word LinkLibDirs_189;
    MR_Word InitDirs_192;
    MR_Word UseSubdirs_193;
    MR_Word WarnNonTailRecSelf_203;
    MR_Word WarnNonTailRecMutual_204;
    MR_Word BackendForeignLanguages_210;
    MR_Word CurrentBackendForeignLanguage_211;
    MR_Integer CompareSpec_214;
    MR_Word STATE_VARIABLE_Globals_222_222;
    MR_Word STATE_VARIABLE_Specs_223_223;
    MR_Word STATE_VARIABLE_Globals_229_229;
    MR_Word STATE_VARIABLE_Globals_236_236;
    MR_Word STATE_VARIABLE_Globals_261_261;
    MR_Word STATE_VARIABLE_Specs_292_292;
    MR_Word Var_294;
    MR_Word STATE_VARIABLE_Globals_295_295;
    MR_Word STATE_VARIABLE_Globals_296_296;
    MR_Word STATE_VARIABLE_Specs_314_314;
    MR_Word STATE_VARIABLE_Globals_337_337;
    MR_Word STATE_VARIABLE_Specs_358_358;
    MR_Word Var_361;
    MR_Word STATE_VARIABLE_Globals_362_362;
    MR_Word STATE_VARIABLE_Globals_366_366;
    MR_Word STATE_VARIABLE_Globals_507_507;
    MR_Word STATE_VARIABLE_Globals_512_512;
    MR_Word Var_516;
    MR_Word STATE_VARIABLE_Globals_517_517;
    MR_Word STATE_VARIABLE_Globals_522_522;
    MR_Word Var_526;
    MR_Word STATE_VARIABLE_Globals_527_527;
    MR_Word STATE_VARIABLE_Globals_532_532;
    MR_Word STATE_VARIABLE_Globals_537_537;
    MR_Word STATE_VARIABLE_Globals_542_542;
    MR_Word STATE_VARIABLE_Globals_547_547;
    MR_Word STATE_VARIABLE_Globals_556_556;
    MR_Word STATE_VARIABLE_Globals_561_561;
    MR_Word STATE_VARIABLE_Globals_565_565;
    MR_Word STATE_VARIABLE_Specs_586_586;
    MR_Word STATE_VARIABLE_Specs_607_607;
    MR_Word STATE_VARIABLE_Globals_610_610;
    MR_Word STATE_VARIABLE_Specs_632_632;
    MR_Word STATE_VARIABLE_Globals_636_636;
    MR_Word STATE_VARIABLE_Globals_641_641;
    MR_Word STATE_VARIABLE_Globals_646_646;
    MR_Word STATE_VARIABLE_Globals_651_651;
    MR_Word STATE_VARIABLE_Globals_656_656;
    MR_Word STATE_VARIABLE_Globals_661_661;
    MR_Word STATE_VARIABLE_Globals_666_666;
    MR_Word STATE_VARIABLE_Globals_672_672;
    MR_Word STATE_VARIABLE_Globals_677_677;
    MR_Word STATE_VARIABLE_Globals_682_682;
    MR_Word STATE_VARIABLE_Globals_687_687;
    MR_Word STATE_VARIABLE_Globals_692_692;
    MR_Word STATE_VARIABLE_Globals_696_696;
    MR_Word STATE_VARIABLE_Globals_701_701;
    MR_Word STATE_VARIABLE_Globals_706_706;
    MR_Word STATE_VARIABLE_Globals_712_712;
    MR_Word STATE_VARIABLE_Globals_721_721;
    MR_Word STATE_VARIABLE_Globals_727_727;
    MR_Word STATE_VARIABLE_Globals_733_733;
    MR_Word STATE_VARIABLE_Globals_750_750;
    MR_Word STATE_VARIABLE_Globals_755_755;
    MR_Word STATE_VARIABLE_Globals_760_760;
    MR_Word STATE_VARIABLE_Globals_765_765;
    MR_Word STATE_VARIABLE_Globals_771_771;
    MR_Word STATE_VARIABLE_Globals_776_776;
    MR_Word STATE_VARIABLE_Globals_781_781;
    MR_Word STATE_VARIABLE_Globals_786_786;
    MR_Word STATE_VARIABLE_Globals_794_794;
    MR_Word STATE_VARIABLE_Globals_798_798;
    MR_Word STATE_VARIABLE_Globals_804_804;
    MR_Word STATE_VARIABLE_Globals_809_809;
    MR_Word STATE_VARIABLE_Globals_815_815;
    MR_Word STATE_VARIABLE_Globals_827_827;
    MR_Word STATE_VARIABLE_Globals_831_831;
    MR_Word STATE_VARIABLE_Globals_836_836;
    MR_Word STATE_VARIABLE_Globals_841_841;
    MR_Word STATE_VARIABLE_Globals_846_846;
    MR_Word STATE_VARIABLE_Specs_861_861;
    MR_Word STATE_VARIABLE_Specs_918_918;
    MR_Word STATE_VARIABLE_Globals_921_921;
    MR_Word STATE_VARIABLE_Globals_941_941;
    MR_Word STATE_VARIABLE_Globals_946_946;
    MR_Word STATE_VARIABLE_Globals_951_951;
    MR_Word STATE_VARIABLE_Globals_955_955;
    MR_Word STATE_VARIABLE_Globals_959_959;
    MR_Word STATE_VARIABLE_Globals_964_964;
    MR_Word STATE_VARIABLE_Globals_969_969;
    MR_Word STATE_VARIABLE_Globals_974_974;
    MR_Word STATE_VARIABLE_Globals_979_979;
    MR_Word STATE_VARIABLE_Globals_985_985;
    MR_Word STATE_VARIABLE_Globals_990_990;
    MR_Word STATE_VARIABLE_Globals_995_995;
    MR_Word STATE_VARIABLE_Globals_1000_1000;
    MR_Word STATE_VARIABLE_Globals_1005_1005;
    MR_Word STATE_VARIABLE_Globals_1010_1010;
    MR_Word STATE_VARIABLE_Globals_1015_1015;
    MR_Word STATE_VARIABLE_Globals_1020_1020;
    MR_Word STATE_VARIABLE_Globals_1025_1025;
    MR_Word STATE_VARIABLE_Globals_1030_1030;
    MR_Word STATE_VARIABLE_Globals_1035_1035;
    MR_Word STATE_VARIABLE_Globals_1040_1040;
    MR_Word STATE_VARIABLE_Globals_1045_1045;
    MR_Word STATE_VARIABLE_Globals_1142_1142;
    MR_Word STATE_VARIABLE_Globals_1147_1147;
    MR_Word STATE_VARIABLE_Specs_1159_1159;
    MR_Word STATE_VARIABLE_Globals_1171_1171;
    MR_Word STATE_VARIABLE_Specs_1181_1181;
    MR_Word STATE_VARIABLE_Globals_1188_1188;
    MR_Word STATE_VARIABLE_Specs_1207_1207;
    MR_Word STATE_VARIABLE_Globals_1211_1211;
    MR_Word STATE_VARIABLE_Globals_1216_1216;
    MR_Word STATE_VARIABLE_Globals_1221_1221;
    MR_Word STATE_VARIABLE_Globals_1226_1226;
    MR_Word STATE_VARIABLE_Globals_1231_1231;
    MR_Word STATE_VARIABLE_Globals_1236_1236;
    MR_Word STATE_VARIABLE_Globals_1241_1241;
    MR_Word STATE_VARIABLE_Globals_1246_1246;
    MR_Word STATE_VARIABLE_Globals_1290_1290;
    MR_Word STATE_VARIABLE_Specs_1308_1308;
    MR_Word STATE_VARIABLE_Globals_1312_1312;
    MR_Word STATE_VARIABLE_Globals_1317_1317;
    MR_Word STATE_VARIABLE_Globals_1322_1322;
    MR_Word STATE_VARIABLE_Globals_1327_1327;
    MR_Word STATE_VARIABLE_Globals_1332_1332;
    MR_Word STATE_VARIABLE_Globals_1337_1337;
    MR_Word STATE_VARIABLE_Globals_1342_1342;
    MR_Word STATE_VARIABLE_Globals_1347_1347;
    MR_Word STATE_VARIABLE_Globals_1352_1352;
    MR_Word STATE_VARIABLE_Globals_1357_1357;
    MR_Word STATE_VARIABLE_Globals_1363_1363;
    MR_Word STATE_VARIABLE_Globals_1367_1367;
    MR_Word STATE_VARIABLE_Globals_1375_1375;
    MR_Word STATE_VARIABLE_Globals_1380_1380;
    MR_Word STATE_VARIABLE_Globals_1385_1385;
    MR_Word STATE_VARIABLE_Globals_1390_1390;
    MR_Word STATE_VARIABLE_Globals_1395_1395;
    MR_Word STATE_VARIABLE_Globals_1400_1400;
    MR_Word STATE_VARIABLE_Globals_1405_1405;
    MR_Word STATE_VARIABLE_Globals_1411_1411;
    MR_Word STATE_VARIABLE_Globals_1416_1416;
    MR_Word STATE_VARIABLE_Globals_1420_1420;
    MR_Word STATE_VARIABLE_Globals_1426_1426;
    MR_Word STATE_VARIABLE_Globals_1441_1441;
    MR_Word STATE_VARIABLE_Globals_1449_1449;
    MR_Word STATE_VARIABLE_Globals_1461_1461;
    MR_Word STATE_VARIABLE_Globals_1518_1518;
    MR_Word STATE_VARIABLE_Globals_1525_1525;
    MR_Word STATE_VARIABLE_Globals_1546_1546;
    MR_Word Var_1562;
    MR_Word STATE_VARIABLE_Globals_1563_1563;
    MR_Word Var_1565;
    MR_Word STATE_VARIABLE_Globals_1566_1566;
    MR_Word STATE_VARIABLE_Globals_1602_1602;
    MR_Word STATE_VARIABLE_Globals_1606_1606;
    MR_Word STATE_VARIABLE_Specs_1630_1630;
    MR_Word STATE_VARIABLE_Globals_1641_1641;
    MR_Word STATE_VARIABLE_Globals_1652_1652;
    MR_Word STATE_VARIABLE_Globals_1661_1661;
    MR_Word STATE_VARIABLE_Globals_1666_1666;
    MR_Word STATE_VARIABLE_Globals_1672_1672;
    MR_Word Var_668;
    MR_Word Var_669;
    MR_Word Var_708;
    MR_Word Var_709;
    MR_Word Var_1699;
    MR_Word Var_723;
    MR_Word Var_724;
    MR_Word Var_729;
    MR_Word Var_730;
    MR_String AllDumpOptions_87;
    MR_String Var_790;
    MR_Word Var_1407;
    MR_Word Var_1408;
    MR_String Var_1454;
    MR_Word ToMihsSubdir_194;
    MR_Word ToHrlsSubdir_195;
    MR_Integer Var_1663;

    mercury__getopt_io__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable0_25, ((MR_Box) ((MR_Integer) 656)), &InstallCmd_47);
    succeeded = (strcmp(InstallCmd_47, (MR_String) "") == 0);
    if (succeeded)
      FileInstallCmd_48 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String InstallCmdDirOption_49;

      mercury__getopt_io__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable0_25, ((MR_Box) ((MR_Integer) 657)), &InstallCmdDirOption_49);
      {
        FileInstallCmd_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FileInstallCmd_48, 0) = ((MR_Box) (InstallCmd_47));
        MR_hl_field(MR_mktag(1), FileInstallCmd_48, 1) = ((MR_Box) (InstallCmdDirOption_49));
      }
    }
    libs__globals__globals_init_21_p_0(OptionTable0_25, OpMode_26, Target_27, GC_Method_28, TagsMethod0_29, TermNorm_30, Term2Norm_31, TraceLevel_32, TraceSuppress_33, SSTraceLevel_34, MaybeThreadSafe_35, C_CompilerType_36, CSharp_CompilerType_37, ReuseStrategy_38, MaybeFeedbackInfo_39, HostEnvType_40, SystemEnvType_41, TargetEnvType_42, FileInstallCmd_48, LimitErrorContextsMap_43, &STATE_VARIABLE_Globals_222_222);
    libs__compute_grade__check_grade_component_compatibility_5_p_0(STATE_VARIABLE_Globals_222_222, Target_27, GC_Method_28, STATE_VARIABLE_Specs_0_215, &STATE_VARIABLE_Specs_223_223);
    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_222_222, (MR_Integer) 198, &EventSetFileName0_50);
    succeeded = (strcmp(EventSetFileName0_50, (MR_String) "") == 0);
    if (succeeded)
    {
      MR_Word MaybeEventSetFileName_51;

      mercury__io__get_environment_var_4_p_0((MR_String) "MERCURY_EVENT_SET_FILE_NAME", &MaybeEventSetFileName_51);
      if ((MaybeEventSetFileName_51 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Globals_229_229 = STATE_VARIABLE_Globals_222_222;
      else
      {
        MR_String EventSetFileName_52 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeEventSetFileName_51, (MR_Integer) 0))));
        MR_Word Var_228;

        {
          Var_228 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_228, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_228, 1) = ((MR_Box) (EventSetFileName_52));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 198, Var_228, STATE_VARIABLE_Globals_222_222, &STATE_VARIABLE_Globals_229_229);
      }
    }
    else
      STATE_VARIABLE_Globals_229_229 = STATE_VARIABLE_Globals_222_222;
    GCIsConservative_53 = libs__globals__gc_is_conservative_1_f_0(GC_Method_28);
    switch (GCIsConservative_53) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_236_236 = STATE_VARIABLE_Globals_229_229;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_231 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]));
          MR_Word STATE_VARIABLE_Globals_232_232;

          libs__globals__set_option_4_p_0((MR_Integer) 327, Var_231, STATE_VARIABLE_Globals_229_229, &STATE_VARIABLE_Globals_232_232);
          libs__globals__set_option_4_p_0((MR_Integer) 328, Var_231, STATE_VARIABLE_Globals_232_232, &STATE_VARIABLE_Globals_236_236);
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_236_236, (MR_Integer) 245, &PregeneratedDist_54);
    switch (PregeneratedDist_54) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_261_261 = STATE_VARIABLE_Globals_236_236;
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_Globals_241_241;
          MR_Word STATE_VARIABLE_Globals_245_245;
          MR_Word Var_248;
          MR_Word STATE_VARIABLE_Globals_249_249;
          MR_Word STATE_VARIABLE_Globals_253_253;
          MR_Word STATE_VARIABLE_Globals_257_257;

          libs__globals__set_option_4_p_0((MR_Integer) 259, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[3])), STATE_VARIABLE_Globals_236_236, &STATE_VARIABLE_Globals_241_241);
          libs__globals__set_option_4_p_0((MR_Integer) 266, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[4])), STATE_VARIABLE_Globals_241_241, &STATE_VARIABLE_Globals_245_245);
          Var_248 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]));
          libs__globals__set_option_4_p_0((MR_Integer) 263, Var_248, STATE_VARIABLE_Globals_245_245, &STATE_VARIABLE_Globals_249_249);
          libs__globals__set_option_4_p_0((MR_Integer) 264, Var_248, STATE_VARIABLE_Globals_249_249, &STATE_VARIABLE_Globals_253_253);
          libs__globals__set_option_4_p_0((MR_Integer) 246, Var_248, STATE_VARIABLE_Globals_253_253, &STATE_VARIABLE_Globals_257_257);
          libs__globals__set_option_4_p_0((MR_Integer) 267, Var_248, STATE_VARIABLE_Globals_257_257, &STATE_VARIABLE_Globals_261_261);
        }
        break;
    }
    switch (TagsMethod0_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_261_261, (MR_Integer) 259, &NumPtagBits0_55);
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
      libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_261_261, (MR_Integer) 262, &NumPtagBits1_56);
    }
    else
      NumPtagBits1_56 = NumPtagBits0_55;
    succeeded = (NumPtagBits1_56 < (MR_Integer) 0);
    if (succeeded)
    {
      NumPtagBits_57 = (MR_Integer) 0;
      libs__compiler_util__add_warning_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[146])), STATE_VARIABLE_Specs_223_223, &STATE_VARIABLE_Specs_292_292);
    }
    else
    {
      NumPtagBits_57 = NumPtagBits1_56;
      STATE_VARIABLE_Specs_292_292 = STATE_VARIABLE_Specs_223_223;
    }
    {
      Var_294 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_294, 0) = ((MR_Box) (NumPtagBits_57));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 259, Var_294, STATE_VARIABLE_Globals_261_261, &STATE_VARIABLE_Globals_295_295);
    succeeded = (NumPtagBits_57 == (MR_Integer) 0);
    if (succeeded)
    {
      TagsMethod_59 = (MR_Integer) 0;
      libs__globals__set_tags_method_3_p_0(TagsMethod_59, STATE_VARIABLE_Globals_295_295, &STATE_VARIABLE_Globals_296_296);
    }
    else
    {
      TagsMethod_59 = TagsMethod0_29;
      STATE_VARIABLE_Globals_296_296 = STATE_VARIABLE_Globals_295_295;
    }
    libs__globals__current_grade_supports_par_conj_2_p_0(STATE_VARIABLE_Globals_296_296, &GradeSupportsParConj_60);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_296_296, (MR_Integer) 238, &Parallel_61);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_296_296, (MR_Integer) 239, &Threadscope_62);
    succeeded = (GradeSupportsParConj_60 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (Threadscope_62 == (MR_Integer) 1);
    if (succeeded)
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[154])), STATE_VARIABLE_Specs_292_292, &STATE_VARIABLE_Specs_314_314);
    }
    else
      STATE_VARIABLE_Specs_314_314 = STATE_VARIABLE_Specs_292_292;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_296_296, (MR_Integer) 695, &ImplicitParallelism_64);
    switch (ImplicitParallelism_64) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_Specs_358_358 = STATE_VARIABLE_Specs_314_314;
          STATE_VARIABLE_Globals_337_337 = STATE_VARIABLE_Globals_296_296;
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
                  STATE_VARIABLE_Specs_358_358 = STATE_VARIABLE_Specs_314_314;
                  break;
                case (MR_Integer) 1:
                  {
                    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[163])), STATE_VARIABLE_Specs_314_314, &STATE_VARIABLE_Specs_358_358);
                  }
                  break;
              }
              libs__globals__set_option_4_p_0((MR_Integer) 695, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2])), STATE_VARIABLE_Globals_296_296, &STATE_VARIABLE_Globals_337_337);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String FeedbackFile_65;

              libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_296_296, (MR_Integer) 696, &FeedbackFile_65);
              succeeded = (strcmp(FeedbackFile_65, (MR_String) "") == 0);
              if (succeeded)
              {
                libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[169])), STATE_VARIABLE_Specs_314_314, &STATE_VARIABLE_Specs_358_358);
              }
              else
                STATE_VARIABLE_Specs_358_358 = STATE_VARIABLE_Specs_314_314;
              STATE_VARIABLE_Globals_337_337 = STATE_VARIABLE_Globals_296_296;
            }
            break;
        }
        break;
    }
    Var_361 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]));
    libs__handle_options__option_implies_5_p_0((MR_Integer) 695, (MR_Integer) 220, Var_361, STATE_VARIABLE_Globals_337_337, &STATE_VARIABLE_Globals_362_362);
    switch (GradeSupportsParConj_60) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__globals__set_option_4_p_0((MR_Integer) 697, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2])), STATE_VARIABLE_Globals_362_362, &STATE_VARIABLE_Globals_366_366);
        }
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_366_366 = STATE_VARIABLE_Globals_362_362;
        break;
    }
    switch (Target_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__handle_options__option_implies_5_p_0((MR_Integer) 281, (MR_Integer) 285, Var_361, STATE_VARIABLE_Globals_366_366, &STATE_VARIABLE_Globals_507_507);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word STATE_VARIABLE_Globals_440_440;
          MR_Word STATE_VARIABLE_Globals_443_443;
          MR_Word Var_446;
          MR_Word STATE_VARIABLE_Globals_447_447;
          MR_Word STATE_VARIABLE_Globals_451_451;
          MR_Word STATE_VARIABLE_Globals_455_455;
          MR_Word STATE_VARIABLE_Globals_459_459;
          MR_Word STATE_VARIABLE_Globals_463_463;
          MR_Word STATE_VARIABLE_Globals_467_467;
          MR_Word STATE_VARIABLE_Globals_471_471;
          MR_Word STATE_VARIABLE_Globals_475_475;
          MR_Word STATE_VARIABLE_Globals_479_479;
          MR_Word STATE_VARIABLE_Globals_483_483;
          MR_Word STATE_VARIABLE_Globals_487_487;
          MR_Word STATE_VARIABLE_Globals_491_491;
          MR_Word STATE_VARIABLE_Globals_495_495;
          MR_Word STATE_VARIABLE_Globals_499_499;
          MR_Word STATE_VARIABLE_Globals_503_503;

          libs__globals__set_gc_method_3_p_0((MR_Integer) 0, STATE_VARIABLE_Globals_366_366, &STATE_VARIABLE_Globals_440_440);
          libs__globals__set_option_4_p_0((MR_Integer) 237, (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[221])), STATE_VARIABLE_Globals_440_440, &STATE_VARIABLE_Globals_443_443);
          Var_446 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]));
          libs__globals__set_option_4_p_0((MR_Integer) 328, Var_446, STATE_VARIABLE_Globals_443_443, &STATE_VARIABLE_Globals_447_447);
          libs__globals__set_option_4_p_0((MR_Integer) 327, Var_446, STATE_VARIABLE_Globals_447_447, &STATE_VARIABLE_Globals_451_451);
          libs__globals__set_option_4_p_0((MR_Integer) 281, Var_361, STATE_VARIABLE_Globals_451_451, &STATE_VARIABLE_Globals_455_455);
          libs__globals__set_option_4_p_0((MR_Integer) 282, Var_361, STATE_VARIABLE_Globals_455_455, &STATE_VARIABLE_Globals_459_459);
          libs__globals__set_option_4_p_0((MR_Integer) 263, Var_361, STATE_VARIABLE_Globals_459_459, &STATE_VARIABLE_Globals_463_463);
          libs__globals__set_option_4_p_0((MR_Integer) 264, Var_361, STATE_VARIABLE_Globals_463_463, &STATE_VARIABLE_Globals_467_467);
          libs__globals__set_option_4_p_0((MR_Integer) 284, Var_361, STATE_VARIABLE_Globals_467_467, &STATE_VARIABLE_Globals_471_471);
          libs__globals__set_option_4_p_0((MR_Integer) 283, Var_361, STATE_VARIABLE_Globals_471_471, &STATE_VARIABLE_Globals_475_475);
          libs__globals__set_option_4_p_0((MR_Integer) 259, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[5])), STATE_VARIABLE_Globals_475_475, &STATE_VARIABLE_Globals_479_479);
          libs__globals__set_option_4_p_0((MR_Integer) 265, Var_446, STATE_VARIABLE_Globals_479_479, &STATE_VARIABLE_Globals_483_483);
          libs__globals__set_option_4_p_0((MR_Integer) 286, Var_361, STATE_VARIABLE_Globals_483_483, &STATE_VARIABLE_Globals_487_487);
          libs__globals__set_option_4_p_0((MR_Integer) 295, Var_361, STATE_VARIABLE_Globals_487_487, &STATE_VARIABLE_Globals_491_491);
          libs__globals__set_option_4_p_0((MR_Integer) 433, Var_446, STATE_VARIABLE_Globals_491_491, &STATE_VARIABLE_Globals_495_495);
          libs__globals__set_option_4_p_0((MR_Integer) 431, Var_446, STATE_VARIABLE_Globals_495_495, &STATE_VARIABLE_Globals_499_499);
          libs__globals__set_option_4_p_0((MR_Integer) 672, Var_446, STATE_VARIABLE_Globals_499_499, &STATE_VARIABLE_Globals_503_503);
          switch (Target_27) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                libs__globals__set_option_4_p_0((MR_Integer) 596, (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])), STATE_VARIABLE_Globals_503_503, &STATE_VARIABLE_Globals_507_507);
              }
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_Globals_507_507 = STATE_VARIABLE_Globals_503_503;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word STATE_VARIABLE_Globals_374_374;
          MR_Word STATE_VARIABLE_Globals_377_377;
          MR_Word STATE_VARIABLE_Globals_381_381;
          MR_Word STATE_VARIABLE_Globals_385_385;
          MR_Word Var_388;
          MR_Word STATE_VARIABLE_Globals_389_389;
          MR_Word STATE_VARIABLE_Globals_393_393;
          MR_Word STATE_VARIABLE_Globals_397_397;
          MR_Word STATE_VARIABLE_Globals_401_401;
          MR_Word STATE_VARIABLE_Globals_405_405;
          MR_Word STATE_VARIABLE_Globals_409_409;
          MR_Word STATE_VARIABLE_Globals_413_413;
          MR_Word STATE_VARIABLE_Globals_417_417;
          MR_Word STATE_VARIABLE_Globals_421_421;
          MR_Word STATE_VARIABLE_Globals_425_425;
          MR_Word STATE_VARIABLE_Globals_429_429;
          MR_Word STATE_VARIABLE_Globals_433_433;

          libs__globals__set_gc_method_3_p_0((MR_Integer) 0, STATE_VARIABLE_Globals_366_366, &STATE_VARIABLE_Globals_374_374);
          libs__globals__set_option_4_p_0((MR_Integer) 237, (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[221])), STATE_VARIABLE_Globals_374_374, &STATE_VARIABLE_Globals_377_377);
          libs__globals__set_option_4_p_0((MR_Integer) 263, Var_361, STATE_VARIABLE_Globals_377_377, &STATE_VARIABLE_Globals_381_381);
          libs__globals__set_option_4_p_0((MR_Integer) 264, Var_361, STATE_VARIABLE_Globals_381_381, &STATE_VARIABLE_Globals_385_385);
          Var_388 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]));
          libs__globals__set_option_4_p_0((MR_Integer) 328, Var_388, STATE_VARIABLE_Globals_385_385, &STATE_VARIABLE_Globals_389_389);
          libs__globals__set_option_4_p_0((MR_Integer) 327, Var_388, STATE_VARIABLE_Globals_389_389, &STATE_VARIABLE_Globals_393_393);
          libs__globals__set_option_4_p_0((MR_Integer) 298, Var_361, STATE_VARIABLE_Globals_393_393, &STATE_VARIABLE_Globals_397_397);
          libs__globals__set_option_4_p_0((MR_Integer) 294, Var_388, STATE_VARIABLE_Globals_397_397, &STATE_VARIABLE_Globals_401_401);
          libs__globals__set_option_4_p_0((MR_Integer) 296, Var_361, STATE_VARIABLE_Globals_401_401, &STATE_VARIABLE_Globals_405_405);
          libs__globals__set_option_4_p_0((MR_Integer) 297, Var_361, STATE_VARIABLE_Globals_405_405, &STATE_VARIABLE_Globals_409_409);
          libs__globals__set_option_4_p_0((MR_Integer) 672, Var_388, STATE_VARIABLE_Globals_409_409, &STATE_VARIABLE_Globals_413_413);
          libs__globals__set_option_4_p_0((MR_Integer) 481, Var_388, STATE_VARIABLE_Globals_413_413, &STATE_VARIABLE_Globals_417_417);
          libs__globals__set_option_4_p_0((MR_Integer) 277, Var_388, STATE_VARIABLE_Globals_417_417, &STATE_VARIABLE_Globals_421_421);
          libs__globals__set_option_4_p_0((MR_Integer) 278, Var_388, STATE_VARIABLE_Globals_421_421, &STATE_VARIABLE_Globals_425_425);
          libs__globals__set_option_4_p_0((MR_Integer) 279, Var_388, STATE_VARIABLE_Globals_425_425, &STATE_VARIABLE_Globals_429_429);
          libs__globals__set_option_4_p_0((MR_Integer) 281, Var_388, STATE_VARIABLE_Globals_429_429, &STATE_VARIABLE_Globals_433_433);
          libs__globals__set_option_4_p_0((MR_Integer) 282, Var_388, STATE_VARIABLE_Globals_433_433, &STATE_VARIABLE_Globals_507_507);
        }
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 241, (MR_Integer) 240, Var_361, STATE_VARIABLE_Globals_507_507, &STATE_VARIABLE_Globals_512_512);
    Var_516 = (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[223]));
    libs__handle_options__option_implies_5_p_0((MR_Integer) 116, (MR_Integer) 579, Var_516, STATE_VARIABLE_Globals_512_512, &STATE_VARIABLE_Globals_517_517);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 116, (MR_Integer) 581, Var_516, STATE_VARIABLE_Globals_517_517, &STATE_VARIABLE_Globals_522_522);
    Var_526 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]));
    libs__handle_options__option_implies_5_p_0((MR_Integer) 281, (MR_Integer) 277, Var_526, STATE_VARIABLE_Globals_522_522, &STATE_VARIABLE_Globals_527_527);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 281, (MR_Integer) 278, Var_526, STATE_VARIABLE_Globals_527_527, &STATE_VARIABLE_Globals_532_532);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 281, (MR_Integer) 279, Var_526, STATE_VARIABLE_Globals_532_532, &STATE_VARIABLE_Globals_537_537);
    libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 488, (MR_Integer) 481, Var_526, STATE_VARIABLE_Globals_537_537, &STATE_VARIABLE_Globals_542_542);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_542_542, (MR_Integer) 662, &LibLinkages0_68);
    if ((LibLinkages0_68 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      libs__globals__set_option_4_p_0((MR_Integer) 662, (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[172])), STATE_VARIABLE_Globals_542_542, &STATE_VARIABLE_Globals_547_547);
    }
    else
      STATE_VARIABLE_Globals_547_547 = STATE_VARIABLE_Globals_542_542;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_547_547, (MR_Integer) 649, &InvokedByMMCMake_71);
    succeeded = (OpMode_26 == (MR_Word) ((MR_Unsigned) 0U));
    if (!(succeeded))
      succeeded = (InvokedByMMCMake_71 == (MR_Integer) 1);
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 667, Var_361, STATE_VARIABLE_Globals_547_547, &STATE_VARIABLE_Globals_556_556);
    }
    else
      STATE_VARIABLE_Globals_556_556 = STATE_VARIABLE_Globals_547_547;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 649, (MR_Integer) 133, Var_526, STATE_VARIABLE_Globals_556_556, &STATE_VARIABLE_Globals_561_561);
    succeeded = (OpMode_26 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      STATE_VARIABLE_Globals_565_565 = STATE_VARIABLE_Globals_561_561;
    else
    {
      libs__globals__set_option_4_p_0((MR_Integer) 672, Var_526, STATE_VARIABLE_Globals_561_561, &STATE_VARIABLE_Globals_565_565);
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_565_565, (MR_Integer) 352, &TransOpt_72);
    switch (TransOpt_72) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Specs_586_586 = STATE_VARIABLE_Specs_358_358;
        break;
      case (MR_Integer) 1:
        {
          succeeded = (InvokedByMMCMake_71 == (MR_Integer) 1);
          if (!(succeeded))
            succeeded = (OpMode_26 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[179])), STATE_VARIABLE_Specs_358_358, &STATE_VARIABLE_Specs_586_586);
          }
          else
            STATE_VARIABLE_Specs_586_586 = STATE_VARIABLE_Specs_358_358;
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_565_565, (MR_Integer) 348, &InterModOpt_74);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_565_565, (MR_Integer) 353, &InterModAnalysis_75);
    succeeded = (InterModOpt_74 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (InterModAnalysis_75 == (MR_Integer) 1);
    if (succeeded)
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[185])), STATE_VARIABLE_Specs_586_586, &STATE_VARIABLE_Specs_607_607);
    }
    else
      STATE_VARIABLE_Specs_607_607 = STATE_VARIABLE_Specs_586_586;
    succeeded = mercury__io__have_symlinks_0_p_0();
    if (succeeded)
      STATE_VARIABLE_Globals_610_610 = STATE_VARIABLE_Globals_565_565;
    else
    {
      libs__globals__set_option_4_p_0((MR_Integer) 653, Var_526, STATE_VARIABLE_Globals_565_565, &STATE_VARIABLE_Globals_610_610);
    }
    libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_610_610, (MR_Integer) 110, &MaybeStandaloneInt_77);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_610_610, (MR_Integer) 589, &ExtraInitFunctions_78);
    succeeded = (MaybeStandaloneInt_77 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (ExtraInitFunctions_78 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[191])), STATE_VARIABLE_Specs_607_607, &STATE_VARIABLE_Specs_632_632);
    }
    else
      STATE_VARIABLE_Specs_632_632 = STATE_VARIABLE_Specs_607_607;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 433, (MR_Integer) 431, Var_361, STATE_VARIABLE_Globals_610_610, &STATE_VARIABLE_Globals_636_636);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 441, (MR_Integer) 440, Var_361, STATE_VARIABLE_Globals_636_636, &STATE_VARIABLE_Globals_641_641);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 440, (MR_Integer) 439, Var_361, STATE_VARIABLE_Globals_641_641, &STATE_VARIABLE_Globals_646_646);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 440, (MR_Integer) 15, Var_361, STATE_VARIABLE_Globals_646_646, &STATE_VARIABLE_Globals_651_651);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 448, (MR_Integer) 447, Var_361, STATE_VARIABLE_Globals_651_651, &STATE_VARIABLE_Globals_656_656);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 447, (MR_Integer) 446, Var_361, STATE_VARIABLE_Globals_656_656, &STATE_VARIABLE_Globals_661_661);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 447, (MR_Integer) 15, Var_361, STATE_VARIABLE_Globals_661_661, &STATE_VARIABLE_Globals_666_666);
    succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_668 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_668)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_669 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_668, (MR_Integer) 0))));
        succeeded = (Var_669 == (MR_Word) ((MR_Unsigned) 4U));
      }
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 352, Var_361, STATE_VARIABLE_Globals_666_666, &STATE_VARIABLE_Globals_672_672);
    }
    else
      STATE_VARIABLE_Globals_672_672 = STATE_VARIABLE_Globals_666_666;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 352, (MR_Integer) 348, Var_361, STATE_VARIABLE_Globals_672_672, &STATE_VARIABLE_Globals_677_677);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 351, (MR_Integer) 350, Var_361, STATE_VARIABLE_Globals_677_677, &STATE_VARIABLE_Globals_682_682);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 348, (MR_Integer) 350, Var_526, STATE_VARIABLE_Globals_682_682, &STATE_VARIABLE_Globals_687_687);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 352, (MR_Integer) 351, Var_526, STATE_VARIABLE_Globals_687_687, &STATE_VARIABLE_Globals_692_692);
    libs__globals__set_option_4_p_0((MR_Integer) 350, Var_526, STATE_VARIABLE_Globals_692_692, &STATE_VARIABLE_Globals_696_696);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 131, (MR_Integer) 132, Var_361, STATE_VARIABLE_Globals_696_696, &STATE_VARIABLE_Globals_701_701);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 65, (MR_Integer) 64, Var_361, STATE_VARIABLE_Globals_701_701, &STATE_VARIABLE_Globals_706_706);
    succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_708 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_708)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_709 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_708, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_709)) == (MR_Integer) 1);
        if (succeeded)
        {
        }
      }
    }
    if (succeeded)
      STATE_VARIABLE_Globals_712_712 = STATE_VARIABLE_Globals_706_706;
    else
    {
      libs__globals__set_option_4_p_0((MR_Integer) 131, Var_526, STATE_VARIABLE_Globals_706_706, &STATE_VARIABLE_Globals_712_712);
    }
    succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_1699 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0))));
      if (((MR_tag((MR_Word) Var_1699)) == (MR_Integer) 2))
      {
        MR_Word Var_1700 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_1699, (MR_Integer) 0))));

        if ((Var_1700 == (MR_Word) ((MR_Unsigned) 0U)))
          succeeded = MR_TRUE;
        else
        if ((Var_1700 == (MR_Word) ((MR_Unsigned) 4U)))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      else
      if (((MR_tag((MR_Word) Var_1699)) == (MR_Integer) 1))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 153, Var_526, STATE_VARIABLE_Globals_712_712, &STATE_VARIABLE_Globals_721_721);
    }
    else
      STATE_VARIABLE_Globals_721_721 = STATE_VARIABLE_Globals_712_712;
    succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_723 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_723)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_724 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_723, (MR_Integer) 0))) & (MR_Integer) 3);
        succeeded = (Var_724 == (MR_Integer) 2);
      }
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 132, Var_526, STATE_VARIABLE_Globals_721_721, &STATE_VARIABLE_Globals_727_727);
    }
    else
      STATE_VARIABLE_Globals_727_727 = STATE_VARIABLE_Globals_721_721;
    succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_729 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_729)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_730 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_729, (MR_Integer) 0))));
        succeeded = (Var_730 == (MR_Word) ((MR_Unsigned) 12U));
      }
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 348, Var_526, STATE_VARIABLE_Globals_727_727, &STATE_VARIABLE_Globals_733_733);
    }
    else
      STATE_VARIABLE_Globals_733_733 = STATE_VARIABLE_Globals_727_727;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_733_733, (MR_Integer) 131, &Smart_83);
    switch (Smart_83) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_750_750 = STATE_VARIABLE_Globals_733_733;
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_Globals_739_739;
          MR_Word STATE_VARIABLE_Globals_744_744;
          MR_Word Var_746;
          MR_Word Var_747;
          MR_Word Var_748;

          succeeded = libs__globals__lookup_bool_option_3_p_1(STATE_VARIABLE_Globals_733_733, (MR_Integer) 348, (MR_Integer) 1);
          if (succeeded)
          {
            libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "\140--intermodule-optimization\'", STATE_VARIABLE_Globals_733_733, &STATE_VARIABLE_Globals_739_739);
          }
          else
            STATE_VARIABLE_Globals_739_739 = STATE_VARIABLE_Globals_733_733;
          succeeded = libs__globals__lookup_bool_option_3_p_1(STATE_VARIABLE_Globals_739_739, (MR_Integer) 350, (MR_Integer) 1);
          if (succeeded)
          {
            libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "\140--use-opt-files\'", STATE_VARIABLE_Globals_739_739, &STATE_VARIABLE_Globals_744_744);
          }
          else
            STATE_VARIABLE_Globals_744_744 = STATE_VARIABLE_Globals_739_739;
          succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_Integer) 3);
          if (succeeded)
          {
            Var_746 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) Var_746)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_747 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_746, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) Var_747)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_748 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_747, (MR_Integer) 0))) & (MR_Integer) 3);
                succeeded = (Var_748 == (MR_Integer) 0);
              }
            }
          }
          if (succeeded)
            STATE_VARIABLE_Globals_750_750 = STATE_VARIABLE_Globals_744_744;
          else
          {
            libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "\140--no-target-code-only\'", STATE_VARIABLE_Globals_744_744, &STATE_VARIABLE_Globals_750_750);
          }
        }
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 668, (MR_Integer) 667, Var_361, STATE_VARIABLE_Globals_750_750, &STATE_VARIABLE_Globals_755_755);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 62, (MR_Integer) 61, Var_361, STATE_VARIABLE_Globals_755_755, &STATE_VARIABLE_Globals_760_760);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 61, (MR_Integer) 67, Var_361, STATE_VARIABLE_Globals_760_760, &STATE_VARIABLE_Globals_765_765);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_765_765, (MR_Integer) 62, &VeryVerbose_84);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_765_765, (MR_Integer) 71, &Statistics_85);
    succeeded = (VeryVerbose_84 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (Statistics_85 == (MR_Integer) 1);
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 72, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])), STATE_VARIABLE_Globals_765_765, &STATE_VARIABLE_Globals_771_771);
    }
    else
      STATE_VARIABLE_Globals_771_771 = STATE_VARIABLE_Globals_765_765;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 78, (MR_Integer) 76, Var_361, STATE_VARIABLE_Globals_771_771, &STATE_VARIABLE_Globals_776_776);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 79, (MR_Integer) 76, Var_361, STATE_VARIABLE_Globals_776_776, &STATE_VARIABLE_Globals_781_781);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 77, (MR_Integer) 76, Var_361, STATE_VARIABLE_Globals_781_781, &STATE_VARIABLE_Globals_786_786);
    libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_786_786, (MR_Integer) 89, &DebugLiveness_86);
    succeeded = (DebugLiveness_86 >= (MR_Integer) 0);
    if (succeeded)
    {
      Var_790 = (MR_String) "all";
      succeeded = libs__handle_options__convert_dump_alias_2_p_0(Var_790, &AllDumpOptions_87);
    }
    if (succeeded)
    {
      MR_String DumpOptions0_88;
      MR_String DumpOptions1_89;
      MR_Word Var_793;

      libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_786_786, (MR_Integer) 174, &DumpOptions0_88);
      DumpOptions1_89 = mercury__string__f_43_43_2_f_0(DumpOptions0_88, AllDumpOptions_87);
      {
        Var_793 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_793, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_793, 1) = ((MR_Box) (DumpOptions1_89));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 174, Var_793, STATE_VARIABLE_Globals_786_786, &STATE_VARIABLE_Globals_794_794);
    }
    else
      STATE_VARIABLE_Globals_794_794 = STATE_VARIABLE_Globals_786_786;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 79, (MR_Integer) 76, Var_361, STATE_VARIABLE_Globals_794_794, &STATE_VARIABLE_Globals_798_798);
    libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_798_798, (MR_Integer) 80, &DebugModesPredId_90);
    succeeded = (DebugModesPredId_90 > (MR_Integer) 0);
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 76, Var_361, STATE_VARIABLE_Globals_798_798, &STATE_VARIABLE_Globals_804_804);
    }
    else
      STATE_VARIABLE_Globals_804_804 = STATE_VARIABLE_Globals_798_798;
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_804_804, (MR_Integer) 382, &DebugUnneededCodePredNames_91);
    if ((DebugUnneededCodePredNames_91 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Globals_809_809 = STATE_VARIABLE_Globals_804_804;
    else
    {
      libs__globals__set_option_4_p_0((MR_Integer) 381, Var_361, STATE_VARIABLE_Globals_804_804, &STATE_VARIABLE_Globals_809_809);
    }
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_809_809, (MR_Integer) 86, &DebugOptPredIdStrs_94);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_809_809, (MR_Integer) 87, &DebugOptPredNames_95);
    succeeded = (DebugOptPredIdStrs_94 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
    if (!(succeeded))
    {
      succeeded = (DebugOptPredNames_95 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 84, Var_361, STATE_VARIABLE_Globals_809_809, &STATE_VARIABLE_Globals_815_815);
    }
    else
      STATE_VARIABLE_Globals_815_815 = STATE_VARIABLE_Globals_809_809;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_815_815, (MR_Integer) 95, &DebugIntermoduleAnalysis_100);
    analysis__enable_debug_messages_3_p_0(DebugIntermoduleAnalysis_100);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_815_815, (MR_Integer) 168, &DumpHLDSPredIds_101);
    if ((DumpHLDSPredIds_101 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Globals_827_827 = STATE_VARIABLE_Globals_815_815;
    else
    {
      MR_String DumpOptions2_104;
      MR_String DumpOptions3_105;
      MR_String DumpOptions_106;
      MR_Word Var_826;

      libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_815_815, (MR_Integer) 174, &DumpOptions2_104);
      mercury__string__replace_all_4_p_0(DumpOptions2_104, (MR_String) "M", (MR_String) "", &DumpOptions3_105);
      mercury__string__replace_all_4_p_0(DumpOptions3_105, (MR_String) "T", (MR_String) "", &DumpOptions_106);
      {
        Var_826 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_826, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_826, 1) = ((MR_Box) (DumpOptions_106));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 174, Var_826, STATE_VARIABLE_Globals_815_815, &STATE_VARIABLE_Globals_827_827);
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 94, (MR_Integer) 183, Var_361, STATE_VARIABLE_Globals_827_827, &STATE_VARIABLE_Globals_831_831);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 183, (MR_Integer) 181, Var_361, STATE_VARIABLE_Globals_831_831, &STATE_VARIABLE_Globals_836_836);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 182, (MR_Integer) 181, Var_361, STATE_VARIABLE_Globals_836_836, &STATE_VARIABLE_Globals_841_841);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 157, (MR_Integer) 156, Var_361, STATE_VARIABLE_Globals_841_841, &STATE_VARIABLE_Globals_846_846);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_846_846, (MR_Integer) 240, &UseTrail_107);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_846_846, (MR_Integer) 281, &HighLevelCode_108);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_846_846, (MR_Integer) 242, &UseMinimalModelStackCopy_109);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_846_846, (MR_Integer) 243, &UseMinimalModelOwnStacks_110);
    mercury__bool__or_3_p_0(UseMinimalModelStackCopy_109, UseMinimalModelOwnStacks_110, &UseMinimalModel_111);
    succeeded = (UseMinimalModelStackCopy_109 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (UseMinimalModelOwnStacks_110 == (MR_Integer) 1);
    if (succeeded)
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[195])), STATE_VARIABLE_Specs_632_632, &STATE_VARIABLE_Specs_861_861);
    }
    else
    {
      succeeded = (UseMinimalModel_111 == (MR_Integer) 1);
      if (succeeded)
        succeeded = (HighLevelCode_108 == (MR_Integer) 1);
      if (succeeded)
      {
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[199])), STATE_VARIABLE_Specs_632_632, &STATE_VARIABLE_Specs_861_861);
      }
      else
      {
        succeeded = (UseMinimalModel_111 == (MR_Integer) 1);
        if (succeeded)
          succeeded = (UseTrail_107 == (MR_Integer) 1);
        if (succeeded)
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[202])), STATE_VARIABLE_Specs_632_632, &STATE_VARIABLE_Specs_861_861);
        }
        else
          STATE_VARIABLE_Specs_861_861 = STATE_VARIABLE_Specs_632_632;
      }
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_846_846, (MR_Integer) 282, &HighLevelData_115);
    succeeded = (Target_27 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (HighLevelData_115 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Integer ArgPackBits0_116;
      MR_Integer BitsPerWord_117;
      MR_Integer ArgPackBits_118;
      MR_Word Var_920;

      libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_846_846, (MR_Integer) 266, &ArgPackBits0_116);
      libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_846_846, (MR_Integer) 260, &BitsPerWord_117);
      succeeded = (ArgPackBits0_116 < (MR_Integer) 0);
      if (succeeded)
      {
        ArgPackBits_118 = BitsPerWord_117;
        STATE_VARIABLE_Specs_918_918 = STATE_VARIABLE_Specs_861_861;
      }
      else
      {
        succeeded = (ArgPackBits0_116 > BitsPerWord_117);
        if (succeeded)
        {
          MR_Word ArgPackBitsSpec_119;
          MR_Word Var_888;
          MR_Word Var_889;
          MR_Word Var_891;
          MR_Word Var_894;
          MR_Word Var_897;
          MR_Word Var_900;
          MR_Word Var_903;
          MR_Word Var_906;
          MR_Word Var_909;
          MR_Word Var_910;

          ArgPackBits_118 = BitsPerWord_117;
          Var_889 = (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[225]));
          {
            Var_910 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_910, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_910, 1) = ((MR_Box) (BitsPerWord_117));
          }
          {
            Var_909 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_909, 0) = ((MR_Box) (Var_910));
            MR_hl_field(MR_mktag(1), Var_909, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
          }
          {
            Var_906 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_906, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[230])));
            MR_hl_field(MR_mktag(1), Var_906, 1) = ((MR_Box) (Var_909));
          }
          {
            Var_903 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_903, 0) = ((MR_Box) (Var_889));
            MR_hl_field(MR_mktag(1), Var_903, 1) = ((MR_Box) (Var_906));
          }
          {
            Var_900 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_900, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[229])));
            MR_hl_field(MR_mktag(1), Var_900, 1) = ((MR_Box) (Var_903));
          }
          {
            Var_897 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_897, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[228])));
            MR_hl_field(MR_mktag(1), Var_897, 1) = ((MR_Box) (Var_900));
          }
          {
            Var_894 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_894, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[227])));
            MR_hl_field(MR_mktag(1), Var_894, 1) = ((MR_Box) (Var_897));
          }
          {
            Var_891 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_891, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[226])));
            MR_hl_field(MR_mktag(1), Var_891, 1) = ((MR_Box) (Var_894));
          }
          {
            Var_888 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_888, 0) = ((MR_Box) (Var_889));
            MR_hl_field(MR_mktag(1), Var_888, 1) = ((MR_Box) (Var_891));
          }
          {
            ArgPackBitsSpec_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgPackBitsSpec_119, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[224])));
            MR_hl_field(MR_mktag(1), ArgPackBitsSpec_119, 1) = ((MR_Box) (Var_888));
          }
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), ArgPackBitsSpec_119, STATE_VARIABLE_Specs_861_861, &STATE_VARIABLE_Specs_918_918);
        }
        else
        {
          ArgPackBits_118 = ArgPackBits0_116;
          STATE_VARIABLE_Specs_918_918 = STATE_VARIABLE_Specs_861_861;
        }
      }
      {
        Var_920 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_920, 0) = ((MR_Box) (ArgPackBits_118));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 266, Var_920, STATE_VARIABLE_Globals_846_846, &STATE_VARIABLE_Globals_921_921);
    }
    else
    {
      MR_Word STATE_VARIABLE_Globals_924_924;
      MR_Word STATE_VARIABLE_Globals_928_928;
      MR_Word STATE_VARIABLE_Globals_932_932;

      libs__globals__set_option_4_p_0((MR_Integer) 266, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[5])), STATE_VARIABLE_Globals_846_846, &STATE_VARIABLE_Globals_924_924);
      libs__globals__set_option_4_p_0((MR_Integer) 267, Var_526, STATE_VARIABLE_Globals_924_924, &STATE_VARIABLE_Globals_928_928);
      libs__globals__set_option_4_p_0((MR_Integer) 269, Var_526, STATE_VARIABLE_Globals_928_928, &STATE_VARIABLE_Globals_932_932);
      libs__globals__set_option_4_p_0((MR_Integer) 270, Var_526, STATE_VARIABLE_Globals_932_932, &STATE_VARIABLE_Globals_921_921);
      STATE_VARIABLE_Specs_918_918 = STATE_VARIABLE_Specs_861_861;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 246, (MR_Integer) 263, Var_361, STATE_VARIABLE_Globals_921_921, &STATE_VARIABLE_Globals_941_941);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 281, (MR_Integer) 280, Var_526, STATE_VARIABLE_Globals_941_941, &STATE_VARIABLE_Globals_946_946);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 263, (MR_Integer) 280, Var_526, STATE_VARIABLE_Globals_946_946, &STATE_VARIABLE_Globals_951_951);
    switch (Target_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_955_955 = STATE_VARIABLE_Globals_951_951;
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_955_955 = STATE_VARIABLE_Globals_951_951;
        break;
      case (MR_Integer) 3:
        {
          libs__globals__set_option_4_p_0((MR_Integer) 319, Var_526, STATE_VARIABLE_Globals_951_951, &STATE_VARIABLE_Globals_955_955);
        }
        break;
      case (MR_Integer) 2:
        STATE_VARIABLE_Globals_955_955 = STATE_VARIABLE_Globals_951_951;
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
      libs__globals__set_option_4_p_0((MR_Integer) 462, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[6])), STATE_VARIABLE_Globals_955_955, &STATE_VARIABLE_Globals_959_959);
    }
    else
      STATE_VARIABLE_Globals_959_959 = STATE_VARIABLE_Globals_955_955;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 512, (MR_Integer) 583, Var_526, STATE_VARIABLE_Globals_959_959, &STATE_VARIABLE_Globals_964_964);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 230, (MR_Integer) 221, Var_361, STATE_VARIABLE_Globals_964_964, &STATE_VARIABLE_Globals_969_969);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 221, (MR_Integer) 233, Var_526, STATE_VARIABLE_Globals_969_969, &STATE_VARIABLE_Globals_974_974);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 230, (MR_Integer) 144, Var_361, STATE_VARIABLE_Globals_974_974, &STATE_VARIABLE_Globals_979_979);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_979_979, (MR_Integer) 144, &ProfOptimized_120);
    switch (ProfOptimized_120) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__handle_options__option_implies_5_p_0((MR_Integer) 217, (MR_Integer) 356, Var_526, STATE_VARIABLE_Globals_979_979, &STATE_VARIABLE_Globals_985_985);
        }
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_985_985 = STATE_VARIABLE_Globals_979_979;
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 217, (MR_Integer) 219, Var_361, STATE_VARIABLE_Globals_985_985, &STATE_VARIABLE_Globals_990_990);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 234, (MR_Integer) 219, Var_361, STATE_VARIABLE_Globals_990_990, &STATE_VARIABLE_Globals_995_995);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 235, (MR_Integer) 219, Var_361, STATE_VARIABLE_Globals_995_995, &STATE_VARIABLE_Globals_1000_1000);
    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_1000_1000, (MR_Integer) 236, &ExpComp_121);
    succeeded = (strcmp(ExpComp_121, (MR_String) "") == 0);
    if (succeeded)
      STATE_VARIABLE_Globals_1005_1005 = STATE_VARIABLE_Globals_1000_1000;
    else
    {
      libs__globals__set_option_4_p_0((MR_Integer) 356, Var_526, STATE_VARIABLE_Globals_1000_1000, &STATE_VARIABLE_Globals_1005_1005);
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 209, (MR_Integer) 208, Var_361, STATE_VARIABLE_Globals_1005_1005, &STATE_VARIABLE_Globals_1010_1010);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 255, (MR_Integer) 257, Var_361, STATE_VARIABLE_Globals_1010_1010, &STATE_VARIABLE_Globals_1015_1015);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 208, (MR_Integer) 288, Var_361, STATE_VARIABLE_Globals_1015_1015, &STATE_VARIABLE_Globals_1020_1020);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 217, (MR_Integer) 288, Var_361, STATE_VARIABLE_Globals_1020_1020, &STATE_VARIABLE_Globals_1025_1025);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 217, (MR_Integer) 338, Var_361, STATE_VARIABLE_Globals_1025_1025, &STATE_VARIABLE_Globals_1030_1030);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 208, (MR_Integer) 142, Var_361, STATE_VARIABLE_Globals_1030_1030, &STATE_VARIABLE_Globals_1035_1035);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 142, (MR_Integer) 138, Var_361, STATE_VARIABLE_Globals_1035_1035, &STATE_VARIABLE_Globals_1040_1040);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 141, (MR_Integer) 138, Var_361, STATE_VARIABLE_Globals_1040_1040, &STATE_VARIABLE_Globals_1045_1045);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1045_1045, (MR_Integer) 136, &TraceOptimized_122);
    TraceLevelIsNone_123 = libs__trace_params__given_trace_level_is_none_1_f_0(TraceLevel_32);
    switch (TraceLevelIsNone_123) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TraceTailRec_124;
          MR_Word STATE_VARIABLE_Globals_1110_1110;
          MR_Word STATE_VARIABLE_Globals_1114_1114;
          MR_Word STATE_VARIABLE_Globals_1118_1118;
          MR_Word STATE_VARIABLE_Globals_1122_1122;
          MR_Word STATE_VARIABLE_Globals_1126_1126;
          MR_Word STATE_VARIABLE_Globals_1130_1130;
          MR_Word STATE_VARIABLE_Globals_1134_1134;
          MR_Word STATE_VARIABLE_Globals_1138_1138;

          switch (TraceOptimized_122) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
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
                MR_Word STATE_VARIABLE_Globals_1102_1102;
                MR_Word STATE_VARIABLE_Globals_1106_1106;

                libs__globals__set_option_4_p_0((MR_Integer) 356, Var_526, STATE_VARIABLE_Globals_1045_1045, &STATE_VARIABLE_Globals_1054_1054);
                libs__globals__set_option_4_p_0((MR_Integer) 374, Var_526, STATE_VARIABLE_Globals_1054_1054, &STATE_VARIABLE_Globals_1058_1058);
                libs__globals__set_option_4_p_0((MR_Integer) 376, Var_526, STATE_VARIABLE_Globals_1058_1058, &STATE_VARIABLE_Globals_1062_1062);
                libs__globals__set_option_4_p_0((MR_Integer) 383, Var_526, STATE_VARIABLE_Globals_1062_1062, &STATE_VARIABLE_Globals_1066_1066);
                libs__globals__set_option_4_p_0((MR_Integer) 384, Var_526, STATE_VARIABLE_Globals_1066_1066, &STATE_VARIABLE_Globals_1070_1070);
                libs__globals__set_option_4_p_0((MR_Integer) 413, Var_526, STATE_VARIABLE_Globals_1070_1070, &STATE_VARIABLE_Globals_1074_1074);
                libs__globals__set_option_4_p_0((MR_Integer) 372, Var_526, STATE_VARIABLE_Globals_1074_1074, &STATE_VARIABLE_Globals_1078_1078);
                libs__globals__set_option_4_p_0((MR_Integer) 373, Var_526, STATE_VARIABLE_Globals_1078_1078, &STATE_VARIABLE_Globals_1082_1082);
                libs__globals__set_option_4_p_0((MR_Integer) 389, Var_526, STATE_VARIABLE_Globals_1082_1082, &STATE_VARIABLE_Globals_1086_1086);
                libs__globals__set_option_4_p_0((MR_Integer) 388, Var_526, STATE_VARIABLE_Globals_1086_1086, &STATE_VARIABLE_Globals_1090_1090);
                libs__globals__set_option_4_p_0((MR_Integer) 395, Var_526, STATE_VARIABLE_Globals_1090_1090, &STATE_VARIABLE_Globals_1094_1094);
                libs__globals__set_option_4_p_0((MR_Integer) 409, Var_526, STATE_VARIABLE_Globals_1094_1094, &STATE_VARIABLE_Globals_1098_1098);
                libs__globals__set_option_4_p_0((MR_Integer) 422, Var_526, STATE_VARIABLE_Globals_1098_1098, &STATE_VARIABLE_Globals_1102_1102);
                libs__globals__set_option_4_p_0((MR_Integer) 423, Var_526, STATE_VARIABLE_Globals_1102_1102, &STATE_VARIABLE_Globals_1106_1106);
                libs__globals__set_option_4_p_0((MR_Integer) 392, Var_526, STATE_VARIABLE_Globals_1106_1106, &STATE_VARIABLE_Globals_1110_1110);
              }
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Globals_1110_1110 = STATE_VARIABLE_Globals_1045_1045;
              break;
          }
          libs__globals__set_option_4_p_0((MR_Integer) 480, Var_526, STATE_VARIABLE_Globals_1110_1110, &STATE_VARIABLE_Globals_1114_1114);
          libs__globals__set_option_4_p_0((MR_Integer) 391, Var_361, STATE_VARIABLE_Globals_1114_1114, &STATE_VARIABLE_Globals_1118_1118);
          libs__globals__set_option_4_p_0((MR_Integer) 411, Var_361, STATE_VARIABLE_Globals_1118_1118, &STATE_VARIABLE_Globals_1122_1122);
          libs__globals__set_option_4_p_0((MR_Integer) 478, Var_526, STATE_VARIABLE_Globals_1122_1122, &STATE_VARIABLE_Globals_1126_1126);
          libs__globals__set_option_4_p_0((MR_Integer) 292, Var_361, STATE_VARIABLE_Globals_1126_1126, &STATE_VARIABLE_Globals_1130_1130);
          libs__globals__set_option_4_p_0((MR_Integer) 293, Var_361, STATE_VARIABLE_Globals_1130_1130, &STATE_VARIABLE_Globals_1134_1134);
          libs__globals__set_option_4_p_0((MR_Integer) 344, Var_526, STATE_VARIABLE_Globals_1134_1134, &STATE_VARIABLE_Globals_1138_1138);
          TraceTailRec_124 = libs__trace_params__trace_level_allows_tail_rec_1_f_0(TraceLevel_32);
          switch (TraceTailRec_124) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                libs__globals__set_option_4_p_0((MR_Integer) 145, Var_526, STATE_VARIABLE_Globals_1138_1138, &STATE_VARIABLE_Globals_1142_1142);
              }
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Globals_1142_1142 = STATE_VARIABLE_Globals_1138_1138;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          libs__globals__set_option_4_p_0((MR_Integer) 145, Var_526, STATE_VARIABLE_Globals_1045_1045, &STATE_VARIABLE_Globals_1142_1142);
        }
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 217, (MR_Integer) 291, Var_361, STATE_VARIABLE_Globals_1142_1142, &STATE_VARIABLE_Globals_1147_1147);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1147_1147, (MR_Integer) 217, &ProfileDeep_125);
    switch (ProfileDeep_125) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_Specs_1159_1159 = STATE_VARIABLE_Specs_918_918;
          STATE_VARIABLE_Globals_1171_1171 = STATE_VARIABLE_Globals_1147_1147;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LotsOfHOSpec_127;
          MR_Word STATE_VARIABLE_Globals_1162_1162;

          succeeded = (HighLevelCode_108 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (Target_27 == (MR_Integer) 0);
          if (succeeded)
            STATE_VARIABLE_Specs_1159_1159 = STATE_VARIABLE_Specs_918_918;
          else
          {
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[204])), STATE_VARIABLE_Specs_918_918, &STATE_VARIABLE_Specs_1159_1159);
          }
          libs__globals__set_option_4_p_0((MR_Integer) 388, Var_526, STATE_VARIABLE_Globals_1147_1147, &STATE_VARIABLE_Globals_1162_1162);
          libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1162_1162, (MR_Integer) 232, &LotsOfHOSpec_127);
          switch (LotsOfHOSpec_127) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Globals_1171_1171 = STATE_VARIABLE_Globals_1162_1162;
              break;
            case (MR_Integer) 1:
              {
                MR_Word STATE_VARIABLE_Globals_1167_1167;

                libs__globals__set_option_4_p_0((MR_Integer) 376, Var_361, STATE_VARIABLE_Globals_1162_1162, &STATE_VARIABLE_Globals_1167_1167);
                libs__globals__set_option_4_p_0((MR_Integer) 377, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[6])), STATE_VARIABLE_Globals_1167_1167, &STATE_VARIABLE_Globals_1171_1171);
              }
              break;
          }
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1171_1171, (MR_Integer) 234, &RecordTermSizesAsWords_128);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1171_1171, (MR_Integer) 235, &RecordTermSizesAsCells_129);
    succeeded = (RecordTermSizesAsWords_128 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (RecordTermSizesAsCells_129 == (MR_Integer) 1);
    if (succeeded)
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[206])), STATE_VARIABLE_Specs_1159_1159, &STATE_VARIABLE_Specs_1181_1181);
      STATE_VARIABLE_Globals_1188_1188 = STATE_VARIABLE_Globals_1171_1171;
    }
    else
    {
      succeeded = (RecordTermSizesAsWords_128 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (RecordTermSizesAsCells_129 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Globals_1184_1184;

        libs__globals__set_option_4_p_0((MR_Integer) 388, Var_526, STATE_VARIABLE_Globals_1171_1171, &STATE_VARIABLE_Globals_1184_1184);
        libs__globals__set_option_4_p_0((MR_Integer) 267, Var_526, STATE_VARIABLE_Globals_1184_1184, &STATE_VARIABLE_Globals_1188_1188);
        switch (HighLevelCode_108) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Specs_1181_1181 = STATE_VARIABLE_Specs_1159_1159;
            break;
          case (MR_Integer) 1:
            {
              libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[208])), STATE_VARIABLE_Specs_1159_1159, &STATE_VARIABLE_Specs_1181_1181);
            }
            break;
        }
      }
      else
      {
        STATE_VARIABLE_Globals_1188_1188 = STATE_VARIABLE_Globals_1171_1171;
        STATE_VARIABLE_Specs_1181_1181 = STATE_VARIABLE_Specs_1159_1159;
      }
    }
    {
      MR_Word Var_1200;

      Var_1200 = libs__trace_params__given_trace_level_is_none_1_f_0(TraceLevel_32);
      succeeded = (Var_1200 == (MR_Integer) 1);
    }
    if (!(succeeded))
    {
      succeeded = (HighLevelCode_108 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (Target_27 == (MR_Integer) 0);
    }
    if (succeeded)
      STATE_VARIABLE_Specs_1207_1207 = STATE_VARIABLE_Specs_1181_1181;
    else
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[210])), STATE_VARIABLE_Specs_1181_1181, &STATE_VARIABLE_Specs_1207_1207);
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 238, (MR_Integer) 518, Var_526, STATE_VARIABLE_Globals_1188_1188, &STATE_VARIABLE_Globals_1211_1211);
    libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 359, (MR_Integer) 390, Var_526, STATE_VARIABLE_Globals_1211_1211, &STATE_VARIABLE_Globals_1216_1216);
    switch (ProfileDeep_125) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 356, (MR_Integer) 390, Var_526, STATE_VARIABLE_Globals_1216_1216, &STATE_VARIABLE_Globals_1221_1221);
        }
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_1221_1221 = STATE_VARIABLE_Globals_1216_1216;
        break;
    }
    libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 187, (MR_Integer) 413, Var_526, STATE_VARIABLE_Globals_1221_1221, &STATE_VARIABLE_Globals_1226_1226);
    libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 187, (MR_Integer) 372, Var_526, STATE_VARIABLE_Globals_1226_1226, &STATE_VARIABLE_Globals_1231_1231);
    libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 187, (MR_Integer) 373, Var_526, STATE_VARIABLE_Globals_1231_1231, &STATE_VARIABLE_Globals_1236_1236);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 288, (MR_Integer) 291, Var_361, STATE_VARIABLE_Globals_1236_1236, &STATE_VARIABLE_Globals_1241_1241);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 292, (MR_Integer) 291, Var_361, STATE_VARIABLE_Globals_1241_1241, &STATE_VARIABLE_Globals_1246_1246);
    switch (GC_Method_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 5:
        {
          MR_Word STATE_VARIABLE_Globals_1250_1250;
          MR_Word STATE_VARIABLE_Globals_1254_1254;
          MR_Word STATE_VARIABLE_Globals_1258_1258;
          MR_Word STATE_VARIABLE_Globals_1262_1262;
          MR_Word STATE_VARIABLE_Globals_1266_1266;
          MR_Word STATE_VARIABLE_Globals_1270_1270;
          MR_Word STATE_VARIABLE_Globals_1274_1274;
          MR_Word STATE_VARIABLE_Globals_1278_1278;
          MR_Word STATE_VARIABLE_Globals_1282_1282;
          MR_Word STATE_VARIABLE_Globals_1286_1286;

          libs__globals__set_option_4_p_0((MR_Integer) 290, Var_361, STATE_VARIABLE_Globals_1246_1246, &STATE_VARIABLE_Globals_1250_1250);
          libs__globals__set_option_4_p_0((MR_Integer) 293, Var_361, STATE_VARIABLE_Globals_1250_1250, &STATE_VARIABLE_Globals_1254_1254);
          libs__globals__set_option_4_p_0((MR_Integer) 480, Var_526, STATE_VARIABLE_Globals_1254_1254, &STATE_VARIABLE_Globals_1258_1258);
          libs__globals__set_option_4_p_0((MR_Integer) 501, Var_526, STATE_VARIABLE_Globals_1258_1258, &STATE_VARIABLE_Globals_1262_1262);
          libs__globals__set_option_4_p_0((MR_Integer) 344, Var_526, STATE_VARIABLE_Globals_1262_1262, &STATE_VARIABLE_Globals_1266_1266);
          libs__globals__set_option_4_p_0((MR_Integer) 478, Var_526, STATE_VARIABLE_Globals_1266_1266, &STATE_VARIABLE_Globals_1270_1270);
          libs__globals__set_option_4_p_0((MR_Integer) 327, Var_526, STATE_VARIABLE_Globals_1270_1270, &STATE_VARIABLE_Globals_1274_1274);
          libs__globals__set_option_4_p_0((MR_Integer) 328, Var_526, STATE_VARIABLE_Globals_1274_1274, &STATE_VARIABLE_Globals_1278_1278);
          libs__globals__set_option_4_p_0((MR_Integer) 388, Var_526, STATE_VARIABLE_Globals_1278_1278, &STATE_VARIABLE_Globals_1282_1282);
          libs__globals__set_option_4_p_0((MR_Integer) 383, Var_526, STATE_VARIABLE_Globals_1282_1282, &STATE_VARIABLE_Globals_1286_1286);
          libs__globals__set_option_4_p_0((MR_Integer) 384, Var_526, STATE_VARIABLE_Globals_1286_1286, &STATE_VARIABLE_Globals_1290_1290);
        }
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_1290_1290 = STATE_VARIABLE_Globals_1246_1246;
        break;
      case (MR_Integer) 2:
        STATE_VARIABLE_Globals_1290_1290 = STATE_VARIABLE_Globals_1246_1246;
        break;
      case (MR_Integer) 3:
        STATE_VARIABLE_Globals_1290_1290 = STATE_VARIABLE_Globals_1246_1246;
        break;
      case (MR_Integer) 4:
        STATE_VARIABLE_Globals_1290_1290 = STATE_VARIABLE_Globals_1246_1246;
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_1290_1290 = STATE_VARIABLE_Globals_1246_1246;
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1290_1290, (MR_Integer) 286, &PutNondetEnvOnHeap_133);
    succeeded = (HighLevelCode_108 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (GC_Method_28 == (MR_Integer) 5);
      if (succeeded)
        succeeded = (PutNondetEnvOnHeap_133 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[216])), STATE_VARIABLE_Specs_1207_1207, &STATE_VARIABLE_Specs_1308_1308);
    }
    else
      STATE_VARIABLE_Specs_1308_1308 = STATE_VARIABLE_Specs_1207_1207;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 291, (MR_Integer) 289, Var_361, STATE_VARIABLE_Globals_1290_1290, &STATE_VARIABLE_Globals_1312_1312);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 290, (MR_Integer) 289, Var_361, STATE_VARIABLE_Globals_1312_1312, &STATE_VARIABLE_Globals_1317_1317);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 291, (MR_Integer) 499, Var_526, STATE_VARIABLE_Globals_1317_1317, &STATE_VARIABLE_Globals_1322_1322);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 290, (MR_Integer) 499, Var_526, STATE_VARIABLE_Globals_1322_1322, &STATE_VARIABLE_Globals_1327_1327);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 289, (MR_Integer) 497, Var_526, STATE_VARIABLE_Globals_1327_1327, &STATE_VARIABLE_Globals_1332_1332);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 293, (MR_Integer) 413, Var_526, STATE_VARIABLE_Globals_1332_1332, &STATE_VARIABLE_Globals_1337_1337);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 293, (MR_Integer) 372, Var_526, STATE_VARIABLE_Globals_1337_1337, &STATE_VARIABLE_Globals_1342_1342);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 240, (MR_Integer) 478, Var_526, STATE_VARIABLE_Globals_1342_1342, &STATE_VARIABLE_Globals_1347_1347);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 250, (MR_Integer) 478, Var_526, STATE_VARIABLE_Globals_1347_1347, &STATE_VARIABLE_Globals_1352_1352);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 242, (MR_Integer) 480, Var_526, STATE_VARIABLE_Globals_1352_1352, &STATE_VARIABLE_Globals_1357_1357);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1357_1357, (MR_Integer) 305, &DisablePneg_135);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1357_1357, (MR_Integer) 306, &DisableCut_136);
    succeeded = (UseMinimalModelStackCopy_109 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (DisablePneg_135 == (MR_Integer) 0);
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 307, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])), STATE_VARIABLE_Globals_1357_1357, &STATE_VARIABLE_Globals_1363_1363);
    }
    else
      STATE_VARIABLE_Globals_1363_1363 = STATE_VARIABLE_Globals_1357_1357;
    succeeded = (UseMinimalModelStackCopy_109 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (DisableCut_136 == (MR_Integer) 0);
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 308, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])), STATE_VARIABLE_Globals_1363_1363, &STATE_VARIABLE_Globals_1367_1367);
    }
    else
      STATE_VARIABLE_Globals_1367_1367 = STATE_VARIABLE_Globals_1363_1363;
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1367_1367, (MR_Integer) 167, &DumpHLDSStages_137);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1367_1367, (MR_Integer) 166, &DumpTraceStages_138);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1367_1367, (MR_Integer) 324, &ParallelLiveness_139);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1367_1367, (MR_Integer) 325, &ParallelCodeGen_140);
    succeeded = (DumpHLDSStages_137 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
    if (!(succeeded))
    {
      succeeded = (DumpTraceStages_138 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
      if (!(succeeded))
      {
        succeeded = (Statistics_85 == (MR_Integer) 1);
        if (!(succeeded))
        {
          succeeded = (ParallelLiveness_139 == (MR_Integer) 1);
          if (!(succeeded))
            succeeded = (ParallelCodeGen_140 == (MR_Integer) 1);
        }
      }
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 323, Var_526, STATE_VARIABLE_Globals_1367_1367, &STATE_VARIABLE_Globals_1375_1375);
    }
    else
      STATE_VARIABLE_Globals_1375_1375 = STATE_VARIABLE_Globals_1367_1367;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 383, (MR_Integer) 384, Var_361, STATE_VARIABLE_Globals_1375_1375, &STATE_VARIABLE_Globals_1380_1380);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 372, (MR_Integer) 373, Var_361, STATE_VARIABLE_Globals_1380_1380, &STATE_VARIABLE_Globals_1385_1385);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 375, (MR_Integer) 348, Var_361, STATE_VARIABLE_Globals_1385_1385, &STATE_VARIABLE_Globals_1390_1390);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 375, (MR_Integer) 374, Var_361, STATE_VARIABLE_Globals_1390_1390, &STATE_VARIABLE_Globals_1395_1395);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 385, (MR_Integer) 391, Var_361, STATE_VARIABLE_Globals_1395_1395, &STATE_VARIABLE_Globals_1400_1400);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 385, (MR_Integer) 370, Var_361, STATE_VARIABLE_Globals_1400_1400, &STATE_VARIABLE_Globals_1405_1405);
    succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_1407 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_1407)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_1408 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_1407, (MR_Integer) 0))));
        succeeded = (Var_1408 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 374, Var_526, STATE_VARIABLE_Globals_1405_1405, &STATE_VARIABLE_Globals_1411_1411);
    }
    else
      STATE_VARIABLE_Globals_1411_1411 = STATE_VARIABLE_Globals_1405_1405;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 418, (MR_Integer) 419, Var_361, STATE_VARIABLE_Globals_1411_1411, &STATE_VARIABLE_Globals_1416_1416);
    succeeded = (OpMode_26 == (MR_Word) ((MR_Unsigned) 4U));
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 28, Var_526, STATE_VARIABLE_Globals_1416_1416, &STATE_VARIABLE_Globals_1420_1420);
    }
    else
      STATE_VARIABLE_Globals_1420_1420 = STATE_VARIABLE_Globals_1416_1416;
    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_1420_1420, (MR_Integer) 686, &TargetArch_145);
    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_1420_1420, (MR_Integer) 581, &MercuryLinkage_146);
    succeeded = (strcmp(MercuryLinkage_146, (MR_String) "static") == 0);
    if (succeeded)
    {
      DefaultRuntimeLibraryDirs_147 = (MR_Integer) 0;
      libs__globals__set_option_4_p_0((MR_Integer) 565, Var_526, STATE_VARIABLE_Globals_1420_1420, &STATE_VARIABLE_Globals_1426_1426);
    }
    else
    {
      libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1420_1420, (MR_Integer) 565, &DefaultRuntimeLibraryDirs_147);
      STATE_VARIABLE_Globals_1426_1426 = STATE_VARIABLE_Globals_1420_1420;
    }
    libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_1426_1426, (MR_Integer) 574, &MaybeStdLibDir_148);
    if ((MaybeStdLibDir_148 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Globals_1441_1441 = STATE_VARIABLE_Globals_1426_1426;
    else
    {
      MR_String StdLibDir_149 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeStdLibDir_148, (MR_Integer) 0))));
      MR_Word OptionTable2_150;
      MR_Word OptionTable_151;
      MR_Word LinkLibDirs0_152;
      MR_Word STATE_VARIABLE_Globals_1430_1430;
      MR_Word Var_1433;
      MR_Word STATE_VARIABLE_Globals_1434_1434;
      MR_Word Var_1435;
      MR_String Var_1436;

      libs__globals__get_options_2_p_0(STATE_VARIABLE_Globals_1426_1426, &OptionTable2_150);
      libs__options__option_table_add_mercury_library_directory_3_p_0(StdLibDir_149, OptionTable2_150, &OptionTable_151);
      libs__globals__set_options_3_p_0(OptionTable_151, STATE_VARIABLE_Globals_1426_1426, &STATE_VARIABLE_Globals_1430_1430);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1430_1430, (MR_Integer) 563, &LinkLibDirs0_152);
      Var_1436 = mercury__dir__f_slash_2_f_0(StdLibDir_149, (MR_String) "lib");
      {
        Var_1435 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_1435, 0) = ((MR_Box) (Var_1436));
        MR_hl_field(MR_mktag(1), Var_1435, 1) = ((MR_Box) (LinkLibDirs0_152));
      }
      {
        Var_1433 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1433, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1433, 1) = ((MR_Box) (Var_1435));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 563, Var_1433, STATE_VARIABLE_Globals_1430_1430, &STATE_VARIABLE_Globals_1434_1434);
      switch (DefaultRuntimeLibraryDirs_147) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Globals_1441_1441 = STATE_VARIABLE_Globals_1434_1434;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rpath0_153;
            MR_Word Var_1440;
            MR_Word Var_1442;
            MR_String Var_1443;

            libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1434_1434, (MR_Integer) 564, &Rpath0_153);
            Var_1443 = mercury__dir__f_slash_2_f_0(StdLibDir_149, (MR_String) "lib");
            {
              Var_1442 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_1442, 0) = ((MR_Box) (Var_1443));
              MR_hl_field(MR_mktag(1), Var_1442, 1) = ((MR_Box) (Rpath0_153));
            }
            {
              Var_1440 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_1440, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), Var_1440, 1) = ((MR_Box) (Var_1442));
            }
            libs__globals__set_option_4_p_0((MR_Integer) 564, Var_1440, STATE_VARIABLE_Globals_1434_1434, &STATE_VARIABLE_Globals_1441_1441);
          }
          break;
      }
    }
    libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_1441_1441, (MR_Integer) 654, &MaybeConfDir_154);
    if ((MaybeConfDir_154 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Globals_1449_1449 = STATE_VARIABLE_Globals_1441_1441;
    else
    {
      MR_String ConfDir_155 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeConfDir_154, (MR_Integer) 0))));
      MR_Word CIncludeDirs0_156;
      MR_Word Var_1448;
      MR_Word Var_1450;
      MR_String Var_1451;

      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1441_1441, (MR_Integer) 516, &CIncludeDirs0_156);
      Var_1451 = mercury__dir__f_slash_2_f_0(ConfDir_155, (MR_String) "conf");
      {
        Var_1450 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_1450, 0) = ((MR_Box) (Var_1451));
        MR_hl_field(MR_mktag(1), Var_1450, 1) = ((MR_Box) (CIncludeDirs0_156));
      }
      {
        Var_1448 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1448, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1448, 1) = ((MR_Box) (Var_1450));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 516, Var_1448, STATE_VARIABLE_Globals_1441_1441, &STATE_VARIABLE_Globals_1449_1449);
    }
    libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_1449_1449, (MR_Integer) 665, &ConfigFile_157);
    succeeded = (ConfigFile_157 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_1454 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConfigFile_157, (MR_Integer) 0))));
      succeeded = (strcmp(Var_1454, (MR_String) "") == 0);
    }
    if (succeeded)
      if ((MaybeConfDir_154 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        libs__globals__set_option_4_p_0((MR_Integer) 665, (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[231])), STATE_VARIABLE_Globals_1449_1449, &STATE_VARIABLE_Globals_1461_1461);
      }
      else
      {
        MR_String ConfDir1_158 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeConfDir_154, (MR_Integer) 0))));
        MR_Word Var_1460;
        MR_Word Var_1462;
        MR_String Var_1463;
        MR_String Var_1464;

        Var_1464 = mercury__dir__f_slash_2_f_0(ConfDir1_158, (MR_String) "conf");
        Var_1463 = mercury__dir__f_slash_2_f_0(Var_1464, (MR_String) "Mercury.config");
        {
          Var_1462 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_1462, 0) = ((MR_Box) (Var_1463));
        }
        {
          Var_1460 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_1460, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_1460, 1) = ((MR_Box) (Var_1462));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 665, Var_1460, STATE_VARIABLE_Globals_1449_1449, &STATE_VARIABLE_Globals_1461_1461);
      }
    else
      STATE_VARIABLE_Globals_1461_1461 = STATE_VARIABLE_Globals_1449_1449;
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1461_1461, (MR_Integer) 568, &MercuryLibDirs_159);
    libs__compute_grade__grade_directory_component_2_p_0(STATE_VARIABLE_Globals_1461_1461, &GradeString_160);
    if ((MercuryLibDirs_159 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Globals_1518_1518 = STATE_VARIABLE_Globals_1461_1461;
    else
    {
      MR_Word ExtraLinkLibDirs_163;
      MR_Word LinkLibDirs1_165;
      MR_Word ExtraIncludeDirs_167;
      MR_Word CIncludeDirs_168;
      MR_Word ErlangIncludeDirs_169;
      MR_Word ExtraIntermodDirs_170;
      MR_Word IntermodDirs0_171;
      MR_Word ExtraInitDirs_172;
      MR_Word InitDirs1_173;
      MR_Word Var_1468;
      MR_Word Var_1475;
      MR_Word STATE_VARIABLE_Globals_1476_1476;
      MR_Word Var_1477;
      MR_Word STATE_VARIABLE_Globals_1481_1481;
      MR_Word Var_1483;
      MR_Word Var_1492;
      MR_Word STATE_VARIABLE_Globals_1493_1493;
      MR_Word Var_1494;
      MR_Word Var_1497;
      MR_Word STATE_VARIABLE_Globals_1498_1498;
      MR_Word Var_1499;
      MR_Word Var_1500;
      MR_Word Var_1507;
      MR_Word STATE_VARIABLE_Globals_1508_1508;
      MR_Word Var_1509;
      MR_Word Var_1510;
      MR_Word Var_1517;
      MR_Word Var_1519;

      {
        Var_1468 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_1468, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_1468, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_1));
        MR_hl_field(MR_mktag(0), Var_1468, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_1468, 3) = ((MR_Box) (GradeString_160));
      }
      ExtraLinkLibDirs_163 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_1468, MercuryLibDirs_159);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1461_1461, (MR_Integer) 563, &LinkLibDirs1_165);
      Var_1477 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LinkLibDirs1_165, ExtraLinkLibDirs_163);
      {
        Var_1475 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1475, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1475, 1) = ((MR_Box) (Var_1477));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 563, Var_1475, STATE_VARIABLE_Globals_1461_1461, &STATE_VARIABLE_Globals_1476_1476);
      switch (DefaultRuntimeLibraryDirs_147) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Globals_1481_1481 = STATE_VARIABLE_Globals_1476_1476;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rpath_166;
            MR_Word Var_1480;
            MR_Word Var_1482;

            libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1476_1476, (MR_Integer) 564, &Rpath_166);
            Var_1482 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Rpath_166, ExtraLinkLibDirs_163);
            {
              Var_1480 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_1480, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), Var_1480, 1) = ((MR_Box) (Var_1482));
            }
            libs__globals__set_option_4_p_0((MR_Integer) 564, Var_1480, STATE_VARIABLE_Globals_1476_1476, &STATE_VARIABLE_Globals_1481_1481);
          }
          break;
      }
      {
        Var_1483 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_1483, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_1483, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_2));
        MR_hl_field(MR_mktag(0), Var_1483, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_1483, 3) = ((MR_Box) (GradeString_160));
      }
      ExtraIncludeDirs_167 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_1483, MercuryLibDirs_159);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1481_1481, (MR_Integer) 516, &CIncludeDirs_168);
      Var_1494 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraIncludeDirs_167, CIncludeDirs_168);
      {
        Var_1492 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1492, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1492, 1) = ((MR_Box) (Var_1494));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 516, Var_1492, STATE_VARIABLE_Globals_1481_1481, &STATE_VARIABLE_Globals_1493_1493);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1493_1493, (MR_Integer) 554, &ErlangIncludeDirs_169);
      Var_1499 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraIncludeDirs_167, ErlangIncludeDirs_169);
      {
        Var_1497 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1497, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1497, 1) = ((MR_Box) (Var_1499));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 554, Var_1497, STATE_VARIABLE_Globals_1493_1493, &STATE_VARIABLE_Globals_1498_1498);
      {
        Var_1500 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_1500, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_1500, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_3));
        MR_hl_field(MR_mktag(0), Var_1500, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_1500, 3) = ((MR_Box) (GradeString_160));
      }
      ExtraIntermodDirs_170 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_1500, MercuryLibDirs_159);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1498_1498, (MR_Integer) 670, &IntermodDirs0_171);
      Var_1509 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraIntermodDirs_170, IntermodDirs0_171);
      {
        Var_1507 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1507, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1507, 1) = ((MR_Box) (Var_1509));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 670, Var_1507, STATE_VARIABLE_Globals_1498_1498, &STATE_VARIABLE_Globals_1508_1508);
      {
        Var_1510 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_1510, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_1510, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_4));
        MR_hl_field(MR_mktag(0), Var_1510, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_1510, 3) = ((MR_Box) (GradeString_160));
      }
      ExtraInitDirs_172 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_1510, MercuryLibDirs_159);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1508_1508, (MR_Integer) 576, &InitDirs1_173);
      Var_1519 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitDirs1_173, ExtraInitDirs_172);
      {
        Var_1517 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1517, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1517, 1) = ((MR_Box) (Var_1519));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 576, Var_1517, STATE_VARIABLE_Globals_1508_1508, &STATE_VARIABLE_Globals_1518_1518);
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1518_1518, (MR_Integer) 671, &UseSearchDirs_174);
    switch (UseSearchDirs_174) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_1525_1525 = STATE_VARIABLE_Globals_1518_1518;
        break;
      case (MR_Integer) 1:
        {
          MR_Word IntermodDirs1_175;
          MR_Word SearchDirs_176;
          MR_Word Var_1524;
          MR_Word Var_1526;

          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1518_1518, (MR_Integer) 670, &IntermodDirs1_175);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1518_1518, (MR_Integer) 669, &SearchDirs_176);
          Var_1526 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), IntermodDirs1_175, SearchDirs_176);
          {
            Var_1524 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_1524, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), Var_1524, 1) = ((MR_Box) (Var_1526));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 670, Var_1524, STATE_VARIABLE_Globals_1518_1518, &STATE_VARIABLE_Globals_1525_1525);
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1525_1525, (MR_Integer) 668, &UseGradeSubdirs_177);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1525_1525, (MR_Integer) 570, &SearchLibFilesDirs_178);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1525_1525, (MR_Integer) 670, &IntermodDirs2_179);
    {
      ToGradeSubdir_180 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ToGradeSubdir_180, 0) = ((MR_Box) (&libs__handle_options_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), ToGradeSubdir_180, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_5));
      MR_hl_field(MR_mktag(0), ToGradeSubdir_180, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ToGradeSubdir_180, 3) = ((MR_Box) (TargetArch_145));
      MR_hl_field(MR_mktag(0), ToGradeSubdir_180, 4) = ((MR_Box) (GradeString_160));
    }
    switch (UseGradeSubdirs_177) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word IntermodDirs3_184;
          MR_Word LinkLibDirs2_185;
          MR_Word InitDirs2_186;
          MR_Word Var_1545;

          IntermodDirs3_184 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesDirs_178, IntermodDirs2_179);
          {
            Var_1545 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_1545, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), Var_1545, 1) = ((MR_Box) (IntermodDirs3_184));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 670, Var_1545, STATE_VARIABLE_Globals_1525_1525, &STATE_VARIABLE_Globals_1546_1546);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1546_1546, (MR_Integer) 563, &LinkLibDirs2_185);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1546_1546, (MR_Integer) 576, &InitDirs2_186);
          LinkLibDirs_189 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesDirs_178, LinkLibDirs2_185);
          InitDirs_192 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesDirs_178, InitDirs2_186);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String GradeSubdir_182;
          MR_Word SearchLibFilesGradeSubdirs_183;
          MR_Word ToGradeLibDir_187;
          MR_Word SearchGradeLibDirs_188;
          MR_Word ToGradeInitDir_190;
          MR_Word SearchGradeInitDirs_191;
          MR_String Var_1535;
          MR_Word Var_1537;
          MR_Word Var_1539;
          MR_Word Var_1540;
          MR_Word Var_1541;
          MR_Word Var_1542;
          MR_String Var_1543;
          MR_Word IntermodDirs3_13439;
          MR_Word LinkLibDirs2_13440;
          MR_Word InitDirs2_13441;
          MR_Word Var_13442;

          Var_1535 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", GradeString_160);
          GradeSubdir_182 = mercury__dir__f_slash_2_f_0(Var_1535, TargetArch_145);
          SearchLibFilesGradeSubdirs_183 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToGradeSubdir_180, SearchLibFilesDirs_178);
          {
            Var_1537 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_1537, 0) = ((MR_Box) (GradeSubdir_182));
            MR_hl_field(MR_mktag(1), Var_1537, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_1543 = mercury__dir__this_directory_0_f_0();
          {
            Var_1542 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_1542, 0) = ((MR_Box) (&libs__handle_options_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), Var_1542, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_6));
            MR_hl_field(MR_mktag(0), Var_1542, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_1542, 3) = ((MR_Box) (Var_1543));
          }
          {
            Var_1541 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_1541, 0) = ((MR_Box) (&libs__handle_options_scalar_common_6[1]));
            MR_hl_field(MR_mktag(0), Var_1541, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_7));
            MR_hl_field(MR_mktag(0), Var_1541, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_1541, 3) = ((MR_Box) (Var_1542));
          }
          Var_1540 = mercury__list__filter_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_1541, IntermodDirs2_179);
          Var_1539 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesGradeSubdirs_183, Var_1540);
          IntermodDirs3_13439 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_1537, Var_1539);
          {
            Var_13442 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_13442, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), Var_13442, 1) = ((MR_Box) (IntermodDirs3_13439));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 670, Var_13442, STATE_VARIABLE_Globals_1525_1525, &STATE_VARIABLE_Globals_1546_1546);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1546_1546, (MR_Integer) 563, &LinkLibDirs2_13440);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1546_1546, (MR_Integer) 576, &InitDirs2_13441);
          {
            ToGradeLibDir_187 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ToGradeLibDir_187, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ToGradeLibDir_187, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_8));
            MR_hl_field(MR_mktag(0), ToGradeLibDir_187, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ToGradeLibDir_187, 3) = ((MR_Box) (ToGradeSubdir_180));
          }
          SearchGradeLibDirs_188 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToGradeLibDir_187, SearchLibFilesDirs_178);
          LinkLibDirs_189 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchGradeLibDirs_188, LinkLibDirs2_13440);
          {
            ToGradeInitDir_190 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ToGradeInitDir_190, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ToGradeInitDir_190, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_9));
            MR_hl_field(MR_mktag(0), ToGradeInitDir_190, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ToGradeInitDir_190, 3) = ((MR_Box) (ToGradeSubdir_180));
          }
          SearchGradeInitDirs_191 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToGradeInitDir_190, SearchLibFilesDirs_178);
          InitDirs_192 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchGradeInitDirs_191, InitDirs2_13441);
        }
        break;
    }
    {
      Var_1562 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_1562, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_1562, 1) = ((MR_Box) (LinkLibDirs_189));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 563, Var_1562, STATE_VARIABLE_Globals_1546_1546, &STATE_VARIABLE_Globals_1563_1563);
    {
      Var_1565 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_1565, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_1565, 1) = ((MR_Box) (InitDirs_192));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 576, Var_1565, STATE_VARIABLE_Globals_1563_1563, &STATE_VARIABLE_Globals_1566_1566);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1566_1566, (MR_Integer) 667, &UseSubdirs_193);
    switch (UseGradeSubdirs_177) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          succeeded = (UseSubdirs_193 == (MR_Integer) 1);
          if (succeeded)
          {
            ToMihsSubdir_194 = (MR_Word) (&libs__handle_options_scalar_common_7[0]);
            ToHrlsSubdir_195 = (MR_Word) (&libs__handle_options_scalar_common_7[1]);
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            ToMihsSubdir_194 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ToMihsSubdir_194, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ToMihsSubdir_194, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_12));
            MR_hl_field(MR_mktag(0), ToMihsSubdir_194, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ToMihsSubdir_194, 3) = ((MR_Box) (ToGradeSubdir_180));
          }
          {
            ToHrlsSubdir_195 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ToHrlsSubdir_195, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ToHrlsSubdir_195, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_13));
            MR_hl_field(MR_mktag(0), ToHrlsSubdir_195, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ToHrlsSubdir_195, 3) = ((MR_Box) (ToGradeSubdir_180));
          }
          succeeded = MR_TRUE;
        }
        break;
    }
    if (succeeded)
    {
      MR_Word CIncludeDirs1_196;
      MR_String MihsSubdir_197;
      MR_Word SearchLibMihsSubdirs_198;
      MR_Word SubdirCIncludeDirs_199;
      MR_Word ErlangIncludeDirs1_200;
      MR_String HrlsSubdir_201;
      MR_Word SubdirErlangIncludeDirs_202;
      MR_String Var_1591;
      MR_String Var_1592;
      MR_Word Var_1593;
      MR_Word Var_1594;
      MR_Word Var_1596;
      MR_Word STATE_VARIABLE_Globals_1597_1597;
      MR_String Var_1599;
      MR_Word Var_1601;
      MR_Box MR_CALL (* func_11)(MR_Box, MR_Box);
      MR_Box conv12_MihsSubdir_197;
      MR_Box MR_CALL (* func_13)(MR_Box, MR_Box);
      MR_Box conv14_HrlsSubdir_201;

      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1566_1566, (MR_Integer) 516, &CIncludeDirs1_196);
      Var_1591 = mercury__dir__this_directory_0_f_0();
      func_11 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToMihsSubdir_194, (MR_Integer) 1))));
      conv12_MihsSubdir_197 = func_11(((MR_Box) (ToMihsSubdir_194)), ((MR_Box) (Var_1591)));
      MihsSubdir_197 = ((MR_String) (conv12_MihsSubdir_197));
      SearchLibMihsSubdirs_198 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToMihsSubdir_194, SearchLibFilesDirs_178);
      Var_1592 = mercury__dir__this_directory_0_f_0();
      Var_1594 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibMihsSubdirs_198, CIncludeDirs1_196);
      {
        Var_1593 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_1593, 0) = ((MR_Box) (MihsSubdir_197));
        MR_hl_field(MR_mktag(1), Var_1593, 1) = ((MR_Box) (Var_1594));
      }
      {
        SubdirCIncludeDirs_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SubdirCIncludeDirs_199, 0) = ((MR_Box) (Var_1592));
        MR_hl_field(MR_mktag(1), SubdirCIncludeDirs_199, 1) = ((MR_Box) (Var_1593));
      }
      {
        Var_1596 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1596, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1596, 1) = ((MR_Box) (SubdirCIncludeDirs_199));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 516, Var_1596, STATE_VARIABLE_Globals_1566_1566, &STATE_VARIABLE_Globals_1597_1597);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1597_1597, (MR_Integer) 554, &ErlangIncludeDirs1_200);
      Var_1599 = mercury__dir__this_directory_0_f_0();
      func_13 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToHrlsSubdir_195, (MR_Integer) 1))));
      conv14_HrlsSubdir_201 = func_13(((MR_Box) (ToHrlsSubdir_195)), ((MR_Box) (Var_1599)));
      HrlsSubdir_201 = ((MR_String) (conv14_HrlsSubdir_201));
      {
        SubdirErlangIncludeDirs_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SubdirErlangIncludeDirs_202, 0) = ((MR_Box) (HrlsSubdir_201));
        MR_hl_field(MR_mktag(1), SubdirErlangIncludeDirs_202, 1) = ((MR_Box) (ErlangIncludeDirs1_200));
      }
      {
        Var_1601 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1601, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1601, 1) = ((MR_Box) (SubdirErlangIncludeDirs_202));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 554, Var_1601, STATE_VARIABLE_Globals_1597_1597, &STATE_VARIABLE_Globals_1602_1602);
    }
    else
      STATE_VARIABLE_Globals_1602_1602 = STATE_VARIABLE_Globals_1566_1566;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 350, (MR_Integer) 14, Var_526, STATE_VARIABLE_Globals_1602_1602, &STATE_VARIABLE_Globals_1606_1606);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1606_1606, (MR_Integer) 32, &WarnNonTailRecSelf_203);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1606_1606, (MR_Integer) 33, &WarnNonTailRecMutual_204);
    succeeded = (WarnNonTailRecSelf_203 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (WarnNonTailRecMutual_204 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word PessimizeTailCalls_205;
      MR_Word OptimizeTailCalls_206;
      MR_Word STATE_VARIABLE_Specs_1616_1616;
      MR_Word STATE_VARIABLE_Specs_1621_1621;
      MR_Word Var_1624;
      MR_Word Var_1625;

      libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1606_1606, (MR_Integer) 493, &PessimizeTailCalls_205);
      libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1606_1606, (MR_Integer) 481, &OptimizeTailCalls_206);
      switch (PessimizeTailCalls_205) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Specs_1616_1616 = STATE_VARIABLE_Specs_1308_1308;
          break;
        case (MR_Integer) 1:
          {
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[233])), STATE_VARIABLE_Specs_1308_1308, &STATE_VARIABLE_Specs_1616_1616);
          }
          break;
      }
      switch (OptimizeTailCalls_206) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[235])), STATE_VARIABLE_Specs_1616_1616, &STATE_VARIABLE_Specs_1621_1621);
          }
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_Specs_1621_1621 = STATE_VARIABLE_Specs_1616_1616;
          break;
      }
      succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_Integer) 3);
      if (succeeded)
      {
        Var_1624 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_1624)) == (MR_Integer) 2);
        if (succeeded)
        {
          Var_1625 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_1624, (MR_Integer) 0))));
          succeeded = (Var_1625 == (MR_Word) ((MR_Unsigned) 20U));
        }
      }
      if (succeeded)
      {
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[237])), STATE_VARIABLE_Specs_1621_1621, &STATE_VARIABLE_Specs_1630_1630);
      }
      else
        STATE_VARIABLE_Specs_1630_1630 = STATE_VARIABLE_Specs_1621_1621;
    }
    else
      STATE_VARIABLE_Specs_1630_1630 = STATE_VARIABLE_Specs_1308_1308;
    switch (Target_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          BackendForeignLanguages_210 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[238]));
          STATE_VARIABLE_Globals_1641_1641 = STATE_VARIABLE_Globals_1606_1606;
        }
        break;
      case (MR_Integer) 1:
        {
          BackendForeignLanguages_210 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[239]));
          STATE_VARIABLE_Globals_1641_1641 = STATE_VARIABLE_Globals_1606_1606;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word STATE_VARIABLE_Globals_1637_1637;

          BackendForeignLanguages_210 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[18]));
          libs__globals__set_option_4_p_0((MR_Integer) 388, Var_526, STATE_VARIABLE_Globals_1606_1606, &STATE_VARIABLE_Globals_1637_1637);
          libs__globals__set_option_4_p_0((MR_Integer) 319, Var_526, STATE_VARIABLE_Globals_1637_1637, &STATE_VARIABLE_Globals_1641_1641);
        }
        break;
      case (MR_Integer) 2:
        {
          BackendForeignLanguages_210 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[240]));
          STATE_VARIABLE_Globals_1641_1641 = STATE_VARIABLE_Globals_1606_1606;
        }
        break;
    }
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1641_1641, (MR_Integer) 287, &CurrentBackendForeignLanguage_211);
    if ((CurrentBackendForeignLanguage_211 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_1651;

      {
        Var_1651 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1651, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1651, 1) = ((MR_Box) (BackendForeignLanguages_210));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 287, Var_1651, STATE_VARIABLE_Globals_1641_1641, &STATE_VARIABLE_Globals_1652_1652);
    }
    else
      STATE_VARIABLE_Globals_1652_1652 = STATE_VARIABLE_Globals_1641_1641;
    libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_1652_1652, (MR_Integer) 337, &CompareSpec_214);
    succeeded = (CompareSpec_214 < (MR_Integer) 0);
    if (succeeded)
      switch (HighLevelCode_108) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            libs__globals__set_option_4_p_0((MR_Integer) 337, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[7])), STATE_VARIABLE_Globals_1652_1652, &STATE_VARIABLE_Globals_1661_1661);
          }
          break;
        case (MR_Integer) 1:
          {
            libs__globals__set_option_4_p_0((MR_Integer) 337, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[8])), STATE_VARIABLE_Globals_1652_1652, &STATE_VARIABLE_Globals_1661_1661);
          }
          break;
      }
    else
      STATE_VARIABLE_Globals_1661_1661 = STATE_VARIABLE_Globals_1652_1652;
    succeeded = (Target_27 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (TagsMethod_59 == (MR_Integer) 1);
      if (succeeded)
      {
        Var_1663 = (MR_Integer) 2;
        succeeded = (NumPtagBits_57 >= Var_1663);
      }
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 294, Var_361, STATE_VARIABLE_Globals_1661_1661, &STATE_VARIABLE_Globals_1666_1666);
    }
    else
    {
      libs__globals__set_option_4_p_0((MR_Integer) 294, Var_526, STATE_VARIABLE_Globals_1661_1661, &STATE_VARIABLE_Globals_1666_1666);
    }
    switch (HighLevelCode_108) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__handle_options__postprocess_options_lowlevel_2_p_0(STATE_VARIABLE_Globals_1666_1666, &STATE_VARIABLE_Globals_1672_1672);
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_1672_1672 = STATE_VARIABLE_Globals_1666_1666;
        break;
    }
    libs__compute_grade__postprocess_options_libgrades_4_p_0(STATE_VARIABLE_Globals_1672_1672, STATE_VARIABLE_Globals_217, STATE_VARIABLE_Specs_1630_1630, STATE_VARIABLE_Specs_216);
    libs__globals__globals_init_mutables_3_p_0(*STATE_VARIABLE_Globals_217);
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
    libs__globals__set_option_4_p_0((MR_Integer) 131, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2])), STATE_VARIABLE_Globals_0_11, STATE_VARIABLE_Globals_12);
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

    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_14, (MR_Integer) 395, &SourceOptionValue_63);
    switch (SourceOptionValue_63) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_19_19 = STATE_VARIABLE_Globals_0_14;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 495, Var_18, STATE_VARIABLE_Globals_0_14, &STATE_VARIABLE_Globals_19_19);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_19_19, (MR_Integer) 501, &SourceOptionValue_71);
    switch (SourceOptionValue_71) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_24_24 = STATE_VARIABLE_Globals_19_19;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 498, Var_18, STATE_VARIABLE_Globals_19_19, &STATE_VARIABLE_Globals_24_24);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_24_24, (MR_Integer) 501, &SourceOptionValue_79);
    switch (SourceOptionValue_79) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_29_29 = STATE_VARIABLE_Globals_24_24;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 491, Var_18, STATE_VARIABLE_Globals_24_24, &STATE_VARIABLE_Globals_29_29);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_29_29, (MR_Integer) 500, &SourceOptionValue_87);
    switch (SourceOptionValue_87) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_34_34 = STATE_VARIABLE_Globals_29_29;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 323, Var_18, STATE_VARIABLE_Globals_29_29, &STATE_VARIABLE_Globals_34_34);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_34_34, (MR_Integer) 501, &OptFrames_4);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_34_34, (MR_Integer) 495, &OptLocalVars_5);
    libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_34_34, (MR_Integer) 504, &OptRepeat_6);
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
      libs__globals__set_option_4_p_0((MR_Integer) 504, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[1])), STATE_VARIABLE_Globals_34_34, &STATE_VARIABLE_Globals_42_42);
    }
    else
      STATE_VARIABLE_Globals_42_42 = STATE_VARIABLE_Globals_34_34;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_42_42, (MR_Integer) 263, &UnboxedFloat_7);
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
    libs__globals__set_option_4_p_0((MR_Integer) 474, Var_46, STATE_VARIABLE_Globals_42_42, &STATE_VARIABLE_Globals_47_47);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_47_47, (MR_Integer) 264, &UnboxedInt64s_9);
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
    libs__globals__set_option_4_p_0((MR_Integer) 475, Var_50, STATE_VARIABLE_Globals_47_47, &STATE_VARIABLE_Globals_51_51);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_51_51, (MR_Integer) 277, &NonLocalGotos_11);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_51_51, (MR_Integer) 279, &AsmLabels_12);
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
    libs__globals__set_option_4_p_0((MR_Integer) 476, Var_55, STATE_VARIABLE_Globals_51_51, STATE_VARIABLE_Globals_15);
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

    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 200, &TargetStr_43);
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
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 237, &GC_MethodStr_46);
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
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 258, &TagsMethodStr_49);
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
    libs__handle_options__raw_lookup_int_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 340, &FactTablePercentFull_52);
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
    libs__handle_options__raw_lookup_int_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 52, &IncompleteSwitchThreshold_54);
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
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 443, &TermNormStr_56);
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
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 449, &Term2NormStr_59);
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
    libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 147, &ForceDisableTracing_62);
    switch (ForceDisableTracing_62) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Trace_63;
          MR_Word ExecTrace_64;
          MR_Word DeclDebug_65;
          MR_Word MaybeTraceLevel_66;

          libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 135, &Trace_63);
          libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 208, &ExecTrace_64);
          libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 209, &DeclDebug_65);
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
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 146, &SuppressStr_69);
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
    libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 151, &ForceDisableSSDB_72);
    switch (ForceDisableSSDB_72) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String SSTrace_73;
          MR_Word SSDB_74;
          MR_Word SSTL_75;

          libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 256, &SSTrace_73);
          libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 255, &SSDB_74);
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
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 248, &MaybeThreadSafeStr_77);
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
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 173, &DumpAlias_80);
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
        mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 174)), ((MR_Box) (Var_490)), STATE_VARIABLE_OptionTable_0_117, &STATE_VARIABLE_OptionTable_491_491);
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
    mercury__getopt_io__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), STATE_VARIABLE_OptionTable_491_491, ((MR_Box) ((MR_Integer) 174)), &STATE_VARIABLE_DumpOptions_520_520);
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
    mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 174)), ((MR_Box) (Var_555)), STATE_VARIABLE_OptionTable_491_491, STATE_VARIABLE_OptionTable_118);
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 538, &C_CompilerTypeStr_84);
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
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 539, &CSharp_CompilerTypeStr_87);
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
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 434, &ReuseConstraintStr_90);
    libs__handle_options__raw_lookup_int_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 435, &ReuseConstraintArgNum_91);
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
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 696, &FeedbackFile_94);
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
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 678, &HostEnvTypeStr_100);
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
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 679, &SystemEnvTypeStr_103);
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
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 680, &TargetEnvTypeStr_106);
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
    libs__handle_options__raw_lookup_accumulating_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 74, &LimitErrorContextsOptionStrs_109);
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
