/*
** Automatically generated from `check_options.m'
** by the Mercury compiler,
** version rotd-2026-06-08
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


// :- module libs.check_options.
// :- implementation.

/*
INIT mercury__libs__check_options__init
ENDINIT
*/

#include "libs.check_options.mih"


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
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
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
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "libs.color_schemes.mih"
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
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static void MR_CALL 
libs__check_options__check_color_options_6_p_0(
  MR_Word STATE_VARIABLE_OptionTable_0_17,
  MR_Word * STATE_VARIABLE_OptionTable_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
libs__check_options__check_linked_target_extensions_4_p_0(
  MR_Word OptionTable_5,
  MR_Word * STATE_VARIABLE_LinkExtMap_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

static void MR_CALL 
libs__check_options__record_linked_target_extension_7_p_0(
  MR_String OptionExt_8,
  MR_String OptionName_9,
  MR_Word LinkedTargetKind_10,
  MR_Word STATE_VARIABLE_LinkExtMap_0_20,
  MR_Word * STATE_VARIABLE_LinkExtMap_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

static void MR_CALL 
libs__check_options__check_diagnostics_options_4_p_0(
  MR_Word OptionTable_5,
  MR_Word * LimitErrorContextsMap_6,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static void MR_CALL 
libs__check_options__check_hlds_dump_options_4_p_0(
  MR_Word STATE_VARIABLE_OptionTable_0_11,
  MR_Word * STATE_VARIABLE_OptionTable_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
libs__check_options__check_system_env_options_8_p_0(
  MR_Word OptionTable_9,
  MR_Word * C_CompilerType_10,
  MR_Word * CSharp_CompilerType_11,
  MR_Word * HostEnvType_12,
  MR_Word * SystemEnvType_13,
  MR_Word * TargetEnvType_14,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33);

static void MR_CALL 
libs__check_options__check_debug_options_6_p_0(
  MR_Word OptionTable_7,
  MR_Word * TraceLevel_8,
  MR_Word * TraceSuppress_9,
  MR_Word * SSTraceLevel_10,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28);

static void MR_CALL 
libs__check_options__check_termination_options_5_p_0(
  MR_Word OptionTable_6,
  MR_Word * TermNorm_7,
  MR_Word * Term2Norm_8,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17);

static void MR_CALL 
libs__check_options__check_codegen_options_8_p_0(
  MR_Word OptionTable_9,
  MR_Word * MaybeThreadSafe_10,
  MR_Word * ReuseStrategy_11,
  MR_Word * MaybeFeedbackInfo_12,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31);


static /* final */ const MR_Box libs__check_options_scalar_common_1[160][2];


struct libs__check_options__vector_common_type_2_0_s {
  const MR_String libs__check_options__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct libs__check_options__vector_common_type_2_0_s libs__check_options_vector_common_2[22];



static /* final */ const MR_Box libs__check_options_scalar_common_1[160][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Invalid argument"))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "option; must be"))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--target"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[2])))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to the"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[4])))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "csharp")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "java")),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[7])))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "c")),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[8])))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[10])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "64"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[12])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[14])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "32"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[16])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "must be either"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[18])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "option;"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[20])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--bits-per-word"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[22])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[24])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--gc"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[2])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[27])))
  },
  /* row  29 */
  {
    ((MR_Box) ((MR_String) "automatic")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) ((MR_String) "accurate")),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[29])))
  },
  /* row  31 */
  {
    ((MR_Box) ((MR_String) "hgc")),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[30])))
  },
  /* row  32 */
  {
    ((MR_Box) ((MR_String) "boehm")),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[31])))
  },
  /* row  33 */
  {
    ((MR_Box) ((MR_String) "conservative")),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[32])))
  },
  /* row  34 */
  {
    ((MR_Box) ((MR_String) "none")),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[33])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "option; must be an integer between 1 and 100."))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[10])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--fact-table-hash-percent-full"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[36])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[38])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "must be"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[40]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[41])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--maybe-thread-safe"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[42])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[44])))
  },
  /* row  46 */
  {
    ((MR_Box) ((MR_String) "yes")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  47 */
  {
    ((MR_Box) ((MR_String) "no")),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[46])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--structure-reuse-constraint"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[2])))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[49])))
  },
  /* row  51 */
  {
    ((MR_Box) ((MR_String) "within_n_cells_difference")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  52 */
  {
    ((MR_Box) ((MR_String) "same_cons_id")),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[51])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--termination-norm"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[2])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[54])))
  },
  /* row  56 */
  {
    ((MR_Box) ((MR_String) "num-data-elems")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) ((MR_String) "total")),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[56])))
  },
  /* row  58 */
  {
    ((MR_Box) ((MR_String) "simple")),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[57])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--termination2-norm"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[2])))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[60])))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The specified trace level"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "option."))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[10])))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--decl-debug"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[64])))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is not compatible with the value of the"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[66])))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--trace"))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[2])))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[70])))
  },
  /* row  72 */
  {
    ((MR_Box) ((MR_String) "default")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  73 */
  {
    ((MR_Box) ((MR_String) "rep")),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[72])))
  },
  /* row  74 */
  {
    ((MR_Box) ((MR_String) "decl")),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[73])))
  },
  /* row  75 */
  {
    ((MR_Box) ((MR_String) "deep")),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[74])))
  },
  /* row  76 */
  {
    ((MR_Box) ((MR_String) "shallow")),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[75])))
  },
  /* row  77 */
  {
    ((MR_Box) ((MR_String) "minimum")),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[76])))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--suppress-trace"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[64])))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[79])))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--ssdb-trace"))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[2])))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[82])))
  },
  /* row  84 */
  {
    ((MR_Box) ((MR_String) "deep")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  85 */
  {
    ((MR_Box) ((MR_String) "shallow")),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[84])))
  },
  /* row  86 */
  {
    ((MR_Box) ((MR_String) "none")),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[85])))
  },
  /* row  87 */
  {
    ((MR_Box) ((MR_String) "default")),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[86])))
  },
  /* row  88 */
  {
    ((MR_Box) ((MR_String) "unknown")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  89 */
  {
    ((MR_Box) ((MR_String) "msvc_arm64")),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[88])))
  },
  /* row  90 */
  {
    ((MR_Box) ((MR_String) "msvc_x64")),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[89])))
  },
  /* row  91 */
  {
    ((MR_Box) ((MR_String) "msvc_x86")),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[90])))
  },
  /* row  92 */
  {
    ((MR_Box) ((MR_String) "clang")),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[91])))
  },
  /* row  93 */
  {
    ((MR_Box) ((MR_String) "gcc")),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[92])))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--c-compiler-type"))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[42])))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[95])))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--csharp-compiler-type"))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[42])))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[98])))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_String) "mono")),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[88])))
  },
  /* row 101 */
  {
    ((MR_Box) ((MR_String) "microsoft")),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[100])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--host-env-type"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[102]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[2])))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[103])))
  },
  /* row 105 */
  {
    ((MR_Box) ((MR_String) "windows")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 106 */
  {
    ((MR_Box) ((MR_String) "msys")),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[105])))
  },
  /* row 107 */
  {
    ((MR_Box) ((MR_String) "cygwin")),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[106])))
  },
  /* row 108 */
  {
    ((MR_Box) ((MR_String) "posix")),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[107])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--system-env-type"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[42])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[110])))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--target-env-type"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[112]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[42])))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[113])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[115]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[64])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--dump-hlds-alias"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[117]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[116])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "(also known as"))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[119]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[118])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "D"))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[120])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[122])))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "option; must be an integer between 0 and 100."))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[124]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[10])))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--warn-incomplete-switch-threshold"))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[126]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[125])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[127])))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--limit-error-contexts"))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[129]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[64])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[130])))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Invalid arguments"))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[132]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 134 */
  {
    ((MR_Box) ((MR_String) "")),
    (MR_Box) ((MR_Unsigned) 7U)
  },
  /* row 135 */
  {
    ((MR_Box) ((MR_String) "")),
    (MR_Box) ((MR_Unsigned) 8U)
  },
  /* row 136 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "may not be specified as the value of"))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for other purposes."))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[138]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[10])))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "because that extension is reserved"))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[140]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[139])))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[142]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[141])))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the extension"))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is specified as the value of both"))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "option"))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[147]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--color-scheme"))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[149]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[148])))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the default value of the"))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[151]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[150])))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "environment variable"))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[153]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "MERCURY_COLOR_SCHEME"))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[155]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[154])))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the value of the"))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[157]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[156])))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[157]))),
    ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[150])))
  },
};


static /* final */ const struct libs__check_options__vector_common_type_2_0_s libs__check_options_vector_common_2[22] = {
  /* row   0 */   { (MR_String) "abcdfgilmnprstuvzBCDEIMPRSTUYZ" },
  /* row   1 */   { (MR_String) "W" },
  /* row   2 */   { (MR_String) "abcdfgilmnprstuvzBCEMPTZ" },
  /* row   3 */   { (MR_String) "abcdfgilmnprstuvzBCDEMPTY" },
  /* row   4 */   { (MR_String) "bdfgilmnprstuvzP" },
  /* row   5 */   { (MR_String) "dfnprsu" },
  /* row   6 */   { (MR_String) "cdinpGDRS" },
  /* row   7 */   { (MR_String) "divM" },
  /* row   8 */   { (MR_String) "TL" },
  /* row   9 */   { (MR_String) "agiuvzD" },
  /* row  10 */   { (MR_String) "ilv" },
  /* row  11 */   { (MR_String) "bcdglmnstvz" },
  /* row  12 */   { (MR_String) "bdgvP" },
  /* row  13 */   { (MR_String) "bcdfgilmnprstvzP" },
  /* row  14 */   { (MR_String) "bcdglmnpruvP" },
  /* row  15 */   { (MR_String) "cP" },
  /* row  16 */   { (MR_String) "din" },
  /* row  17 */   { (MR_String) "vxX" },
  /* row  18 */   { (MR_String) "gvCP" },
  /* row  19 */   { (MR_String) "bcdglmnstuvz" },
  /* row  20 */   { (MR_String) "ltuCIU" },
  /* row  21 */   { (MR_String) "npBis" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


void MR_CALL 
libs__check_options__check_option_values_23_p_0(
  MR_Word STATE_VARIABLE_OptionTable_0_45,
  MR_Word * STATE_VARIABLE_OptionTable_46,
  MR_Word * Target_25,
  MR_Word * WordSize_26,
  MR_Word * GC_Method_27,
  MR_Word * TermNorm_28,
  MR_Word * Term2Norm_29,
  MR_Word * TraceLevel_30,
  MR_Word * TraceSuppress_31,
  MR_Word * SSTraceLevel_32,
  MR_Word * MaybeThreadSafe_33,
  MR_Word * C_CompilerType_34,
  MR_Word * CSharp_CompilerType_35,
  MR_Word * ReuseStrategy_36,
  MR_Word * MaybeFeedbackInfo_37,
  MR_Word * HostEnvType_38,
  MR_Word * SystemEnvType_39,
  MR_Word * TargetEnvType_40,
  MR_Word * LimitErrorContextsMap_41,
  MR_Word * LinkExtMap_42,
  MR_Word * STATE_VARIABLE_Specs_47)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_Specs_2_51;
  MR_Word STATE_VARIABLE_Specs_3_52;
  MR_Word STATE_VARIABLE_Specs_4_54;
  MR_Word STATE_VARIABLE_Specs_5_55;
  MR_Word STATE_VARIABLE_Specs_6_56;
  MR_Word STATE_VARIABLE_OptionTable_1_57;
  MR_Word STATE_VARIABLE_Specs_7_58;
  MR_Word STATE_VARIABLE_Specs_8_59;
  MR_Word STATE_VARIABLE_Specs_9_60;
  MR_String TargetStr_61;
  MR_Integer BitsPerWord_64;
  MR_String GC_MethodStr_67;
  MR_Word STATE_VARIABLE_Specs_1_83;
  MR_Word STATE_VARIABLE_Specs_2_91;
  MR_Word TargetPrime_62;
  MR_Word GC_MethodPrime_68;

  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), STATE_VARIABLE_OptionTable_0_45, ((MR_Box) ((MR_Integer) 45)), &TargetStr_61);
  succeeded = libs__globals__convert_target_2_p_0(TargetStr_61, &TargetPrime_62);
  if (succeeded)
  {
    *Target_25 = TargetPrime_62;
    STATE_VARIABLE_Specs_1_83 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word TargetSpec_63;
    MR_Word Var_71;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_77;
    MR_Word Var_78;

    *Target_25 = (MR_Integer) 0;
    {
      Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_75, 1) = ((MR_Box) (TargetStr_61));
    }
    {
      Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_74, 0) = ((MR_Box) (Var_75));
      MR_hl_field(1, Var_74, 1) = ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[6])));
    }
    {
      Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_71, 0) = ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[0])));
      MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_74));
    }
    Var_78 = parse_tree__error_spec__quote_list_to_pieces_2_f_0((MR_String) "or", (MR_Word) (MR_mkword(1, &libs__check_options_scalar_common_1[9])));
    Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_78, (MR_Word) (MR_mkword(1, &libs__check_options_scalar_common_1[12])));
    TargetSpec_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_71, Var_77);
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TargetSpec_63, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_1_83);
  }
  mercury__getopt__lookup_int_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), STATE_VARIABLE_OptionTable_0_45, ((MR_Box) ((MR_Integer) 102)), &BitsPerWord_64);
  succeeded = (BitsPerWord_64 == (MR_Integer) 32);
  if (succeeded)
  {
    *WordSize_26 = (MR_Integer) 0;
    STATE_VARIABLE_Specs_2_91 = STATE_VARIABLE_Specs_1_83;
  }
  else
  {
    succeeded = (BitsPerWord_64 == (MR_Integer) 64);
    if (succeeded)
    {
      *WordSize_26 = (MR_Integer) 1;
      STATE_VARIABLE_Specs_2_91 = STATE_VARIABLE_Specs_1_83;
    }
    else
    {
      MR_String BitsPerWordStr_65;
      MR_Word WordSizeSpec_66;
      MR_Word Var_87;
      MR_Word Var_88;

      *WordSize_26 = (MR_Integer) 1;
      BitsPerWordStr_65 = mercury__string__int_to_string_1_f_0(BitsPerWord_64);
      {
        Var_88 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_88, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_88, 1) = ((MR_Box) (BitsPerWordStr_65));
      }
      {
        Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_87, 0) = ((MR_Box) (Var_88));
        MR_hl_field(1, Var_87, 1) = ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[25])));
      }
      {
        WordSizeSpec_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, WordSizeSpec_66, 0) = ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[0])));
        MR_hl_field(1, WordSizeSpec_66, 1) = ((MR_Box) (Var_87));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), WordSizeSpec_66, STATE_VARIABLE_Specs_1_83, &STATE_VARIABLE_Specs_2_91);
    }
  }
  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), STATE_VARIABLE_OptionTable_0_45, ((MR_Box) ((MR_Integer) 87)), &GC_MethodStr_67);
  succeeded = libs__globals__convert_gc_method_2_p_0(GC_MethodStr_67, &GC_MethodPrime_68);
  if (succeeded)
  {
    *GC_Method_27 = GC_MethodPrime_68;
    STATE_VARIABLE_Specs_2_51 = STATE_VARIABLE_Specs_2_91;
  }
  else
  {
    MR_Word GCMethodSpec_69;
    MR_Word Var_93;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_99;
    MR_Word Var_100;

    *GC_Method_27 = (MR_Integer) 1;
    {
      Var_97 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_97, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_97, 1) = ((MR_Box) (GC_MethodStr_67));
    }
    {
      Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_96, 0) = ((MR_Box) (Var_97));
      MR_hl_field(1, Var_96, 1) = ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[28])));
    }
    {
      Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_93, 0) = ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[0])));
      MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_96));
    }
    Var_100 = parse_tree__error_spec__quote_list_to_pieces_2_f_0((MR_String) "or", (MR_Word) (MR_mkword(1, &libs__check_options_scalar_common_1[34])));
    Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_100, (MR_Word) (MR_mkword(1, &libs__check_options_scalar_common_1[12])));
    GCMethodSpec_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_93, Var_99);
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), GCMethodSpec_69, STATE_VARIABLE_Specs_2_91, &STATE_VARIABLE_Specs_2_51);
  }
  libs__check_options__check_codegen_options_8_p_0(STATE_VARIABLE_OptionTable_0_45, MaybeThreadSafe_33, ReuseStrategy_36, MaybeFeedbackInfo_37, STATE_VARIABLE_Specs_2_51, &STATE_VARIABLE_Specs_3_52);
  libs__check_options__check_termination_options_5_p_0(STATE_VARIABLE_OptionTable_0_45, TermNorm_28, Term2Norm_29, STATE_VARIABLE_Specs_3_52, &STATE_VARIABLE_Specs_4_54);
  libs__check_options__check_debug_options_6_p_0(STATE_VARIABLE_OptionTable_0_45, TraceLevel_30, TraceSuppress_31, SSTraceLevel_32, STATE_VARIABLE_Specs_4_54, &STATE_VARIABLE_Specs_5_55);
  libs__check_options__check_system_env_options_8_p_0(STATE_VARIABLE_OptionTable_0_45, C_CompilerType_34, CSharp_CompilerType_35, HostEnvType_38, SystemEnvType_39, TargetEnvType_40, STATE_VARIABLE_Specs_5_55, &STATE_VARIABLE_Specs_6_56);
  libs__check_options__check_hlds_dump_options_4_p_0(STATE_VARIABLE_OptionTable_0_45, &STATE_VARIABLE_OptionTable_1_57, STATE_VARIABLE_Specs_6_56, &STATE_VARIABLE_Specs_7_58);
  libs__check_options__check_diagnostics_options_4_p_0(STATE_VARIABLE_OptionTable_1_57, LimitErrorContextsMap_41, STATE_VARIABLE_Specs_7_58, &STATE_VARIABLE_Specs_8_59);
  libs__check_options__check_linked_target_extensions_4_p_0(STATE_VARIABLE_OptionTable_1_57, LinkExtMap_42, STATE_VARIABLE_Specs_8_59, &STATE_VARIABLE_Specs_9_60);
  libs__check_options__check_color_options_6_p_0(STATE_VARIABLE_OptionTable_1_57, STATE_VARIABLE_OptionTable_46, STATE_VARIABLE_Specs_9_60, STATE_VARIABLE_Specs_47);
}

static void MR_CALL 
libs__check_options__check_color_options_6_p_0(
  MR_Word STATE_VARIABLE_OptionTable_0_17,
  MR_Word * STATE_VARIABLE_OptionTable_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  MR_bool succeeded;
  MR_String ColorScheme_10;
  MR_String SetBy_11;
  MR_Word MaybeConvertColorSpecs_14;
  MR_Word STATE_VARIABLE_Specs_1_54;
  MR_Word Source_12;

  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), STATE_VARIABLE_OptionTable_0_17, ((MR_Box) ((MR_Integer) 155)), &ColorScheme_10);
  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), STATE_VARIABLE_OptionTable_0_17, ((MR_Box) ((MR_Integer) 154)), &SetBy_11);
  if ((strcmp(SetBy_11, (MR_String) "envvar") == 0))
  {
    Source_12 = (MR_Word) (MR_mkword(1, &libs__check_options_scalar_common_1[158]));
    succeeded = MR_TRUE;
  }
  else
  if ((strcmp(SetBy_11, (MR_String) "option") == 0))
  {
    Source_12 = (MR_Word) (MR_mkword(1, &libs__check_options_scalar_common_1[159]));
    succeeded = MR_TRUE;
  }
  else
  if ((strcmp(SetBy_11, (MR_String) "default") == 0))
  {
    Source_12 = (MR_Word) (MR_mkword(1, &libs__check_options_scalar_common_1[152]));
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  if (succeeded)
  {
    MR_Word ColorSchemeSpecs_13;

    libs__color_schemes__record_color_scheme_in_options_7_p_0(Source_12, ColorScheme_10, &ColorSchemeSpecs_13, STATE_VARIABLE_OptionTable_0_17, STATE_VARIABLE_OptionTable_18);
    STATE_VARIABLE_Specs_1_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ColorSchemeSpecs_13, STATE_VARIABLE_Specs_0_19);
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.check_options.check_color_options\'/6", (MR_String) "unexpected value in color_scheme_set_by option");
      return;
    }
  MaybeConvertColorSpecs_14 = libs__color_schemes__convert_color_spec_options_1_f_0(*STATE_VARIABLE_OptionTable_18);
  if (((MR_tag((MR_Word) MaybeConvertColorSpecs_14)) == (MR_Integer) 0))
  {
    MR_Word ConvertColorSpecs_16 = ((MR_Word) ((MR_hl_field(0, MaybeConvertColorSpecs_14, 0))));

    *STATE_VARIABLE_Specs_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ConvertColorSpecs_16, STATE_VARIABLE_Specs_1_54);
  }
  else
    *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_1_54;
}

static void MR_CALL 
libs__check_options__check_linked_target_extensions_4_p_0(
  MR_Word OptionTable_5,
  MR_Word * STATE_VARIABLE_LinkExtMap_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  MR_bool succeeded;
  MR_String ObjExt_8;
  MR_String PicObjExt_9;
  MR_String ExecExt_10;
  MR_String LibExt_11;
  MR_String SharedLibExt_12;
  MR_String AllObjExtA_13;
  MR_Word STATE_VARIABLE_LinkExtMap_1_22;
  MR_Word STATE_VARIABLE_LinkExtMap_2_30;
  MR_Word STATE_VARIABLE_LinkExtMap_3_35;
  MR_Word STATE_VARIABLE_LinkExtMap_4_40;
  MR_Word STATE_VARIABLE_Specs_1_41;
  MR_Word STATE_VARIABLE_LinkExtMap_5_44;
  MR_Word STATE_VARIABLE_Specs_2_45;
  MR_Word STATE_VARIABLE_LinkExtMap_6_48;
  MR_Word STATE_VARIABLE_Specs_3_49;
  MR_Word STATE_VARIABLE_LinkExtMap_7_52;
  MR_Word STATE_VARIABLE_Specs_4_53;
  MR_Word STATE_VARIABLE_LinkExtMap_8_56;
  MR_Word STATE_VARIABLE_Specs_5_57;
  MR_Word STATE_VARIABLE_LinkExtMap_9_60;
  MR_Word STATE_VARIABLE_Specs_6_61;
  MR_Word STATE_VARIABLE_LinkExtMap_10_64;
  MR_Word STATE_VARIABLE_Specs_7_65;
  MR_String NoDotExt_79;

  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__globals__libs__globals__type_ctor_info_linked_target_ext_info_0), &STATE_VARIABLE_LinkExtMap_1_22);
  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_5, ((MR_Box) ((MR_Integer) 494)), &ObjExt_8);
  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_5, ((MR_Box) ((MR_Integer) 495)), &PicObjExt_9);
  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_5, ((MR_Box) ((MR_Integer) 601)), &ExecExt_10);
  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_5, ((MR_Box) ((MR_Integer) 602)), &LibExt_11);
  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_5, ((MR_Box) ((MR_Integer) 603)), &SharedLibExt_12);
  mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__globals__libs__globals__type_ctor_info_linked_target_ext_info_0), ((MR_Box) ((MR_String) ".install")), ((MR_Box) (&libs__check_options_scalar_common_1[134])), STATE_VARIABLE_LinkExtMap_1_22, &STATE_VARIABLE_LinkExtMap_2_30);
  mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__globals__libs__globals__type_ctor_info_linked_target_ext_info_0), ((MR_Box) ((MR_String) ".install_gs_gas")), ((MR_Box) (&libs__check_options_scalar_common_1[135])), STATE_VARIABLE_LinkExtMap_2_30, &STATE_VARIABLE_LinkExtMap_3_35);
  libs__check_options__record_linked_target_extension_7_p_0(ObjExt_8, (MR_String) "the --object-file-extension option", (MR_Integer) 0, STATE_VARIABLE_LinkExtMap_3_35, &STATE_VARIABLE_LinkExtMap_4_40, STATE_VARIABLE_Specs_0_20, &STATE_VARIABLE_Specs_1_41);
  succeeded = (strcmp(ObjExt_8, PicObjExt_9) == 0);
  if (succeeded)
  {
    STATE_VARIABLE_Specs_2_45 = STATE_VARIABLE_Specs_1_41;
    STATE_VARIABLE_LinkExtMap_5_44 = STATE_VARIABLE_LinkExtMap_4_40;
  }
  else
    libs__check_options__record_linked_target_extension_7_p_0(PicObjExt_9, (MR_String) "the --pic-object-file-extension", (MR_Integer) 1, STATE_VARIABLE_LinkExtMap_4_40, &STATE_VARIABLE_LinkExtMap_5_44, STATE_VARIABLE_Specs_1_41, &STATE_VARIABLE_Specs_2_45);
  libs__check_options__record_linked_target_extension_7_p_0(ExecExt_10, (MR_String) "the --executable-file-extension option", (MR_Integer) 4, STATE_VARIABLE_LinkExtMap_5_44, &STATE_VARIABLE_LinkExtMap_6_48, STATE_VARIABLE_Specs_2_45, &STATE_VARIABLE_Specs_3_49);
  libs__check_options__record_linked_target_extension_7_p_0(LibExt_11, (MR_String) "the --library-extension option", (MR_Integer) 5, STATE_VARIABLE_LinkExtMap_6_48, &STATE_VARIABLE_LinkExtMap_7_52, STATE_VARIABLE_Specs_3_49, &STATE_VARIABLE_Specs_4_53);
  succeeded = (strcmp(LibExt_11, SharedLibExt_12) == 0);
  if (succeeded)
  {
    STATE_VARIABLE_Specs_5_57 = STATE_VARIABLE_Specs_4_53;
    STATE_VARIABLE_LinkExtMap_8_56 = STATE_VARIABLE_LinkExtMap_7_52;
  }
  else
    libs__check_options__record_linked_target_extension_7_p_0(SharedLibExt_12, (MR_String) "the --shared-library-extension option", (MR_Integer) 6, STATE_VARIABLE_LinkExtMap_7_52, &STATE_VARIABLE_LinkExtMap_8_56, STATE_VARIABLE_Specs_4_53, &STATE_VARIABLE_Specs_5_57);
  AllObjExtA_13 = mercury__string__f_43_43_2_f_0(ObjExt_8, (MR_String) "s");
  libs__check_options__record_linked_target_extension_7_p_0(AllObjExtA_13, (MR_String) "the build-all version of the --object-file-extension option", (MR_Integer) 2, STATE_VARIABLE_LinkExtMap_8_56, &STATE_VARIABLE_LinkExtMap_9_60, STATE_VARIABLE_Specs_5_57, &STATE_VARIABLE_Specs_6_61);
  succeeded = mercury__string__remove_prefix_3_p_0((MR_String) ".", ObjExt_8, &NoDotExt_79);
  if (succeeded)
  {
    MR_String AllObjExtB_15;
    MR_String Var_84;

    Var_84 = mercury__string__f_43_43_2_f_0(NoDotExt_79, (MR_String) "s");
    AllObjExtB_15 = mercury__string__f_43_43_2_f_0((MR_String) ".all_", Var_84);
    libs__check_options__record_linked_target_extension_7_p_0(AllObjExtB_15, (MR_String) "the build-all version of the --object-file-extension option", (MR_Integer) 2, STATE_VARIABLE_LinkExtMap_9_60, &STATE_VARIABLE_LinkExtMap_10_64, STATE_VARIABLE_Specs_6_61, &STATE_VARIABLE_Specs_7_65);
  }
  else
  {
    STATE_VARIABLE_LinkExtMap_10_64 = STATE_VARIABLE_LinkExtMap_9_60;
    STATE_VARIABLE_Specs_7_65 = STATE_VARIABLE_Specs_6_61;
  }
  succeeded = (strcmp(ObjExt_8, PicObjExt_9) == 0);
  if (succeeded)
  {
    *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_7_65;
    *STATE_VARIABLE_LinkExtMap_19 = STATE_VARIABLE_LinkExtMap_10_64;
  }
  else
  {
    MR_String AllPicObjExtA_16;
    MR_Word STATE_VARIABLE_LinkExtMap_11_68;
    MR_Word STATE_VARIABLE_Specs_8_69;
    MR_String NoDotExt_86;

    AllPicObjExtA_16 = mercury__string__f_43_43_2_f_0(PicObjExt_9, (MR_String) "s");
    libs__check_options__record_linked_target_extension_7_p_0(AllPicObjExtA_16, (MR_String) "the build-all version of the --pic-object-file-extension option", (MR_Integer) 3, STATE_VARIABLE_LinkExtMap_10_64, &STATE_VARIABLE_LinkExtMap_11_68, STATE_VARIABLE_Specs_7_65, &STATE_VARIABLE_Specs_8_69);
    succeeded = mercury__string__remove_prefix_3_p_0((MR_String) ".", PicObjExt_9, &NoDotExt_86);
    if (succeeded)
    {
      MR_String AllPicObjExtB_18;
      MR_String Var_91;

      Var_91 = mercury__string__f_43_43_2_f_0(NoDotExt_86, (MR_String) "s");
      AllPicObjExtB_18 = mercury__string__f_43_43_2_f_0((MR_String) ".all_", Var_91);
      libs__check_options__record_linked_target_extension_7_p_0(AllPicObjExtB_18, (MR_String) "the build-all version of the --pic-object-file-extension option", (MR_Integer) 3, STATE_VARIABLE_LinkExtMap_11_68, STATE_VARIABLE_LinkExtMap_19, STATE_VARIABLE_Specs_8_69, STATE_VARIABLE_Specs_21);
    }
    else
    {
      *STATE_VARIABLE_LinkExtMap_19 = STATE_VARIABLE_LinkExtMap_11_68;
      *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_8_69;
    }
  }
}

static void MR_CALL 
libs__check_options__record_linked_target_extension_7_p_0(
  MR_String OptionExt_8,
  MR_String OptionName_9,
  MR_Word LinkedTargetKind_10,
  MR_Word STATE_VARIABLE_LinkExtMap_0_20,
  MR_Word * STATE_VARIABLE_LinkExtMap_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  MR_bool succeeded;
  MR_Word OptionInfo_13;
  MR_Word MaybeOldOptionInfo_14;

  {
    OptionInfo_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, OptionInfo_13, 0) = ((MR_Box) (OptionName_9));
    MR_hl_field(0, OptionInfo_13, 1) = (MR_Box) ((MR_Unsigned) (LinkedTargetKind_10));
  }
  mercury__map__search_insert_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__globals__libs__globals__type_ctor_info_linked_target_ext_info_0), ((MR_Box) (OptionExt_8)), ((MR_Box) (OptionInfo_13)), &MaybeOldOptionInfo_14, STATE_VARIABLE_LinkExtMap_0_20, STATE_VARIABLE_LinkExtMap_21);
  if ((MaybeOldOptionInfo_14 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
  else
  {
    MR_Word OldOptionInfo_15 = ((MR_Word) ((MR_hl_field(1, MaybeOldOptionInfo_14, 0))));
    MR_String OldOptionName_16 = ((MR_String) ((MR_hl_field(0, OldOptionInfo_15, 0))));
    MR_Word OldLinkedTargetKind_17 = ((MR_Unsigned) ((MR_hl_field(0, OldOptionInfo_15, 1))) & (MR_Integer) 15);

    switch (LinkedTargetKind_10) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 2:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 3:
        succeeded = MR_TRUE;
        break;
    }
    if (succeeded)
      *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
    else
    {
      MR_Word Pieces_18;
      MR_Word Spec_19;

      succeeded = (OldLinkedTargetKind_17 == (MR_Integer) 7);
      if (succeeded)
      {
        MR_Word Var_27;
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word Var_32;
        MR_Word Var_33;

        {
          Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_28, 1) = ((MR_Box) (OptionExt_8));
        }
        {
          Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_33, 1) = ((MR_Box) (OptionName_9));
        }
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[143])));
        }
        {
          Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_29, 0) = ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[137])));
          MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_32));
        }
        {
          Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
          MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_29));
        }
        {
          Pieces_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_18, 0) = ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[136])));
          MR_hl_field(1, Pieces_18, 1) = ((MR_Box) (Var_27));
        }
      }
      else
      {
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_58;
        MR_Word Var_59;

        {
          Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_49, 1) = ((MR_Box) (OptionExt_8));
        }
        {
          Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_54, 1) = ((MR_Box) (OldOptionName_16));
        }
        {
          Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_59, 1) = ((MR_Box) (OptionName_9));
        }
        {
          Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
          MR_hl_field(1, Var_58, 1) = ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[12])));
        }
        {
          Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_55, 0) = ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[146])));
          MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_58));
        }
        {
          Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
          MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_55));
        }
        {
          Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[145])));
          MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
        }
        {
          Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
          MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_50));
        }
        {
          Pieces_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_18, 0) = ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[144])));
          MR_hl_field(1, Pieces_18, 1) = ((MR_Box) (Var_48));
        }
      }
      {
        Spec_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140libs.check_options.record_linked_target_extension\'/7"));
        MR_hl_field(1, Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_19, 3) = ((MR_Box) (Pieces_18));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_23 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_19));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_22));
      }
    }
  }
}

static void MR_CALL 
libs__check_options__check_diagnostics_options_4_p_0(
  MR_Word OptionTable_5,
  MR_Word * LimitErrorContextsMap_6,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  MR_bool succeeded;
  MR_Integer IncompleteSwitchThreshold_8;
  MR_Word LimitErrorContextsOptionStrs_10;
  MR_Word BadLimitErrorContextsOptions_11;
  MR_Word STATE_VARIABLE_Specs_1_40;
  MR_Integer Var_22;

  mercury__getopt__lookup_int_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_5, ((MR_Box) ((MR_Integer) 226)), &IncompleteSwitchThreshold_8);
  succeeded = (IncompleteSwitchThreshold_8 >= (MR_Integer) 0);
  if (succeeded)
  {
    Var_22 = (MR_Integer) 100;
    succeeded = (IncompleteSwitchThreshold_8 <= Var_22);
  }
  if (succeeded)
    STATE_VARIABLE_Specs_1_40 = STATE_VARIABLE_Specs_0_18;
  else
  {
    MR_Word IncompleteSwitchThresholdSpec_9;
    MR_Word Var_25;
    MR_Word Var_26;

    {
      Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_26, 1) = ((MR_Box) (IncompleteSwitchThreshold_8));
    }
    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(1, Var_25, 1) = ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[128])));
    }
    {
      IncompleteSwitchThresholdSpec_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, IncompleteSwitchThresholdSpec_9, 0) = ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[0])));
      MR_hl_field(1, IncompleteSwitchThresholdSpec_9, 1) = ((MR_Box) (Var_25));
    }
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), IncompleteSwitchThresholdSpec_9, STATE_VARIABLE_Specs_0_18, &STATE_VARIABLE_Specs_1_40);
  }
  mercury__getopt__lookup_accumulating_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_5, ((MR_Box) ((MR_Integer) 142)), &LimitErrorContextsOptionStrs_10);
  libs__globals__convert_limit_error_contexts_3_p_0(LimitErrorContextsOptionStrs_10, &BadLimitErrorContextsOptions_11, LimitErrorContextsMap_6);
  if ((BadLimitErrorContextsOptions_11 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_1_40;
  else
  {
    MR_Word Var_85 = ((MR_Word) ((MR_hl_field(1, BadLimitErrorContextsOptions_11, 1))));
    MR_String Var_86 = ((MR_String) ((MR_hl_field(1, BadLimitErrorContextsOptions_11, 0))));

    if ((Var_85 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word LECSpec_13;
      MR_Word Var_45;
      MR_Word Var_46;

      {
        Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_46, 1) = ((MR_Box) (Var_86));
      }
      {
        Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
        MR_hl_field(1, Var_45, 1) = ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[131])));
      }
      {
        LECSpec_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, LECSpec_13, 0) = ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[0])));
        MR_hl_field(1, LECSpec_13, 1) = ((MR_Box) (Var_45));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), LECSpec_13, STATE_VARIABLE_Specs_1_40, STATE_VARIABLE_Specs_19);
    }
    else
    {
      MR_Word BadPieces_17;
      MR_Word Var_67;
      MR_Word LECSpec_82;

      BadPieces_17 = parse_tree__error_spec__quote_list_to_pieces_2_f_0((MR_String) "or", BadLimitErrorContextsOptions_11);
      Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), BadPieces_17, (MR_Word) (MR_mkword(1, &libs__check_options_scalar_common_1[131])));
      LECSpec_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &libs__check_options_scalar_common_1[133])), Var_67);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), LECSpec_82, STATE_VARIABLE_Specs_1_40, STATE_VARIABLE_Specs_19);
    }
  }
}

static void MR_CALL 
libs__check_options__check_hlds_dump_options_4_p_0(
  MR_Word STATE_VARIABLE_OptionTable_0_11,
  MR_Word * STATE_VARIABLE_OptionTable_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  MR_bool succeeded;
  MR_String DumpAlias_7;
  MR_Word STATE_VARIABLE_OptionTable_1_18;
  MR_String STATE_VARIABLE_DumpOptions_1_47;
  MR_String STATE_VARIABLE_DumpOptions_2_48;
  MR_String STATE_VARIABLE_DumpOptions_3_51;
  MR_String STATE_VARIABLE_DumpOptions_4_55;
  MR_String STATE_VARIABLE_DumpOptions_5_79;
  MR_Word Var_82;
  MR_Char Var_50;
  MR_Char Var_54;
  MR_Char Var_78;

  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), STATE_VARIABLE_OptionTable_0_11, ((MR_Box) ((MR_Integer) 737)), &DumpAlias_7);
  succeeded = (strcmp(DumpAlias_7, (MR_String) "") == 0);
  if (succeeded)
  {
    *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
    STATE_VARIABLE_OptionTable_1_18 = STATE_VARIABLE_OptionTable_0_11;
  }
  else
  {
    MR_String AliasDumpOptions_8;

    succeeded = libs__check_options__convert_dump_alias_2_p_0(DumpAlias_7, &AliasDumpOptions_8);
    if (succeeded)
    {
      MR_Word Var_17;

      {
        Var_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_17, 1) = ((MR_Box) (AliasDumpOptions_8));
      }
      mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 738)), ((MR_Box) (Var_17)), STATE_VARIABLE_OptionTable_0_11, &STATE_VARIABLE_OptionTable_1_18);
      *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
    }
    else
    {
      MR_Word DumpAliasSpec_9;
      MR_Word Var_21;
      MR_Word Var_22;

      {
        Var_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_22, 1) = ((MR_Box) (DumpAlias_7));
      }
      {
        Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_21, 0) = ((MR_Box) (Var_22));
        MR_hl_field(1, Var_21, 1) = ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[123])));
      }
      {
        DumpAliasSpec_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, DumpAliasSpec_9, 0) = ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[0])));
        MR_hl_field(1, DumpAliasSpec_9, 1) = ((MR_Box) (Var_21));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), DumpAliasSpec_9, STATE_VARIABLE_Specs_0_13, STATE_VARIABLE_Specs_14);
      STATE_VARIABLE_OptionTable_1_18 = STATE_VARIABLE_OptionTable_0_11;
    }
  }
  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), STATE_VARIABLE_OptionTable_1_18, ((MR_Box) ((MR_Integer) 738)), &STATE_VARIABLE_DumpOptions_1_47);
  succeeded = (strcmp(STATE_VARIABLE_DumpOptions_1_47, (MR_String) "") == 0);
  if (succeeded)
    STATE_VARIABLE_DumpOptions_2_48 = (MR_String) "x";
  else
    STATE_VARIABLE_DumpOptions_2_48 = STATE_VARIABLE_DumpOptions_1_47;
  succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_2_48, (MR_Char) 121);
  if (succeeded)
  {
    Var_50 = (MR_Char) 97;
    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_2_48, Var_50);
    succeeded = !(succeeded);
  }
  if (succeeded)
    STATE_VARIABLE_DumpOptions_3_51 = mercury__string__f_43_43_2_f_0((MR_String) "a", STATE_VARIABLE_DumpOptions_2_48);
  else
    STATE_VARIABLE_DumpOptions_3_51 = STATE_VARIABLE_DumpOptions_2_48;
  succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_3_51, (MR_Char) 97);
  if (succeeded)
  {
    Var_54 = (MR_Char) 117;
    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_3_51, Var_54);
    succeeded = !(succeeded);
  }
  if (succeeded)
    STATE_VARIABLE_DumpOptions_4_55 = mercury__string__f_43_43_2_f_0((MR_String) "u", STATE_VARIABLE_DumpOptions_3_51);
  else
    STATE_VARIABLE_DumpOptions_4_55 = STATE_VARIABLE_DumpOptions_3_51;
  succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_4_55, (MR_Char) 65);
  if (!(succeeded))
  {
    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_4_55, (MR_Char) 66);
    if (!(succeeded))
    {
      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_4_55, (MR_Char) 68);
      if (!(succeeded))
      {
        succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_4_55, (MR_Char) 71);
        if (!(succeeded))
        {
          succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_4_55, (MR_Char) 80);
          if (!(succeeded))
          {
            succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_4_55, (MR_Char) 82);
            if (!(succeeded))
            {
              succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_4_55, (MR_Char) 83);
              if (!(succeeded))
              {
                succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_4_55, (MR_Char) 98);
                if (!(succeeded))
                {
                  succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_4_55, (MR_Char) 99);
                  if (!(succeeded))
                  {
                    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_4_55, (MR_Char) 100);
                    if (!(succeeded))
                    {
                      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_4_55, (MR_Char) 102);
                      if (!(succeeded))
                      {
                        succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_4_55, (MR_Char) 103);
                        if (!(succeeded))
                        {
                          succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_4_55, (MR_Char) 105);
                          if (!(succeeded))
                          {
                            succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_4_55, (MR_Char) 108);
                            if (!(succeeded))
                            {
                              succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_4_55, (MR_Char) 109);
                              if (!(succeeded))
                              {
                                succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_4_55, (MR_Char) 110);
                                if (!(succeeded))
                                {
                                  succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_4_55, (MR_Char) 112);
                                  if (!(succeeded))
                                  {
                                    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_4_55, (MR_Char) 115);
                                    if (!(succeeded))
                                    {
                                      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_4_55, (MR_Char) 116);
                                      if (!(succeeded))
                                      {
                                        succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_4_55, (MR_Char) 117);
                                        if (!(succeeded))
                                          succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_4_55, (MR_Char) 122);
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
    Var_78 = (MR_Char) 120;
    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_4_55, Var_78);
    succeeded = !(succeeded);
  }
  if (succeeded)
    STATE_VARIABLE_DumpOptions_5_79 = mercury__string__f_43_43_2_f_0((MR_String) "x", STATE_VARIABLE_DumpOptions_4_55);
  else
    STATE_VARIABLE_DumpOptions_5_79 = STATE_VARIABLE_DumpOptions_4_55;
  {
    Var_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_82, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_82, 1) = ((MR_Box) (STATE_VARIABLE_DumpOptions_5_79));
  }
  mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 738)), ((MR_Box) (Var_82)), STATE_VARIABLE_OptionTable_1_18, STATE_VARIABLE_OptionTable_12);
}

MR_bool MR_CALL 
libs__check_options__convert_dump_alias_2_p_0(
  MR_String HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  MR_bool succeeded;

  {
    MR_Integer case_num_0 = (MR_Integer) -1;

    switch (MR_nth_code_unit(HeadVar__1_1, 0)) {
      case (MR_Integer) 65:
        if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "ALL"))
          case_num_0 = (MR_Integer) 0;
        break;
      case (MR_Integer) 87:
        if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "W"))
          case_num_0 = (MR_Integer) 1;
        break;
      case (MR_Integer) 97:
        if (MR_offset_strn_eq(1, 2, HeadVar__1_1, (MR_String) "all"))
          switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 2;
              break;
            case (MR_Integer) 68:
              if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "allD"))
                case_num_0 = (MR_Integer) 3;
              break;
          }
        break;
      case (MR_Integer) 99:
        switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
          case (MR_Integer) 109:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "cmp"))
              case_num_0 = (MR_Integer) 4;
            break;
          case (MR_Integer) 111:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "codegen"))
              case_num_0 = (MR_Integer) 5;
            break;
          case (MR_Integer) 116:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "ctgc"))
              case_num_0 = (MR_Integer) 6;
            break;
        }
        break;
      case (MR_Integer) 100:
        switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
          case (MR_Integer) 101:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "detism"))
              case_num_0 = (MR_Integer) 7;
            break;
          case (MR_Integer) 117:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "du"))
              case_num_0 = (MR_Integer) 8;
            break;
        }
        break;
      case (MR_Integer) 108:
        if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "lco"))
          case_num_0 = (MR_Integer) 9;
        break;
      case (MR_Integer) 109:
        switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
          case (MR_Integer) 105:
            switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
              case (MR_Integer) 110:
                switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 10;
                    break;
                  case (MR_Integer) 116:
                    if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "mintrans"))
                      case_num_0 = (MR_Integer) 11;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 109:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "mm"))
              case_num_0 = (MR_Integer) 12;
            break;
          case (MR_Integer) 111:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "most"))
              case_num_0 = (MR_Integer) 13;
            break;
        }
        break;
      case (MR_Integer) 111:
        if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "osv"))
          case_num_0 = (MR_Integer) 14;
        break;
      case (MR_Integer) 112:
        switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
          case (MR_Integer) 97:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "paths"))
              case_num_0 = (MR_Integer) 15;
            break;
          case (MR_Integer) 101:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "petdr"))
              case_num_0 = (MR_Integer) 16;
            break;
          case (MR_Integer) 111:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "poly"))
              case_num_0 = (MR_Integer) 17;
            break;
        }
        break;
      case (MR_Integer) 115:
        if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "statevar"))
          case_num_0 = (MR_Integer) 18;
        break;
      case (MR_Integer) 116:
        if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "trans"))
          case_num_0 = (MR_Integer) 19;
        break;
      case (MR_Integer) 118:
        switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
          case (MR_Integer) 97:
            switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
              case (MR_Integer) 110:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "vanessa"))
                  case_num_0 = (MR_Integer) 20;
                break;
              case (MR_Integer) 114:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "vars"))
                  case_num_0 = (MR_Integer) 21;
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
      *HeadVar__2_2 = ((&libs__check_options_vector_common_2[0 + case_num_0]))->libs__check_options__vector_common_type_2_0__vct_2_f_0;
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static void MR_CALL 
libs__check_options__check_system_env_options_8_p_0(
  MR_Word OptionTable_9,
  MR_Word * C_CompilerType_10,
  MR_Word * CSharp_CompilerType_11,
  MR_Word * HostEnvType_12,
  MR_Word * SystemEnvType_13,
  MR_Word * TargetEnvType_14,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33)
{
  MR_bool succeeded;
  MR_String C_CompilerTypeStr_16;
  MR_String CSharp_CompilerTypeStr_20;
  MR_String HostEnvTypeStr_23;
  MR_String SystemEnvTypeStr_26;
  MR_String TargetEnvTypeStr_29;
  MR_Word STATE_VARIABLE_Specs_1_75;
  MR_Word STATE_VARIABLE_Specs_2_112;
  MR_Word STATE_VARIABLE_Specs_3_148;
  MR_Word STATE_VARIABLE_Specs_4_187;
  MR_Word C_CompilerTypePrime_17;
  MR_Word CSharp_CompilerTypePrime_21;
  MR_Word HostEnvTypePrime_24;
  MR_Word SystemEnvTypePrime_27;
  MR_Word TargetEnvTypePrime_30;

  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_9, ((MR_Box) ((MR_Integer) 473)), &C_CompilerTypeStr_16);
  succeeded = libs__globals__convert_c_compiler_type_2_p_0(C_CompilerTypeStr_16, &C_CompilerTypePrime_17);
  if (succeeded)
  {
    *C_CompilerType_10 = C_CompilerTypePrime_17;
    STATE_VARIABLE_Specs_1_75 = STATE_VARIABLE_Specs_0_32;
  }
  else
  {
    MR_Word CCTpec_19;
    MR_Word Var_47;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_65;
    MR_Word Var_66;

    *C_CompilerType_10 = (MR_Word) ((MR_Unsigned) 0U);
    {
      Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_51, 1) = ((MR_Box) (C_CompilerTypeStr_16));
    }
    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[96])));
    }
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[0])));
      MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
    }
    Var_66 = parse_tree__error_spec__quote_list_to_pieces_2_f_0((MR_String) "or", (MR_Word) (MR_mkword(1, &libs__check_options_scalar_common_1[93])));
    Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_66, (MR_Word) (MR_mkword(1, &libs__check_options_scalar_common_1[12])));
    CCTpec_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, Var_65);
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), CCTpec_19, STATE_VARIABLE_Specs_0_32, &STATE_VARIABLE_Specs_1_75);
  }
  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_9, ((MR_Box) ((MR_Integer) 505)), &CSharp_CompilerTypeStr_20);
  succeeded = libs__globals__convert_csharp_compiler_type_2_p_0(CSharp_CompilerTypeStr_20, &CSharp_CompilerTypePrime_21);
  if (succeeded)
  {
    *CSharp_CompilerType_11 = CSharp_CompilerTypePrime_21;
    STATE_VARIABLE_Specs_2_112 = STATE_VARIABLE_Specs_1_75;
  }
  else
  {
    MR_Word CSCSpec_22;
    MR_Word Var_77;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_95;
    MR_Word Var_96;

    *CSharp_CompilerType_11 = (MR_Integer) 2;
    {
      Var_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_81, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_81, 1) = ((MR_Box) (CSharp_CompilerTypeStr_20));
    }
    {
      Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_80, 0) = ((MR_Box) (Var_81));
      MR_hl_field(1, Var_80, 1) = ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[99])));
    }
    {
      Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_77, 0) = ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[0])));
      MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_80));
    }
    Var_96 = parse_tree__error_spec__quote_list_to_pieces_2_f_0((MR_String) "or", (MR_Word) (MR_mkword(1, &libs__check_options_scalar_common_1[101])));
    Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_96, (MR_Word) (MR_mkword(1, &libs__check_options_scalar_common_1[12])));
    CSCSpec_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_77, Var_95);
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), CSCSpec_22, STATE_VARIABLE_Specs_1_75, &STATE_VARIABLE_Specs_2_112);
  }
  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_9, ((MR_Box) ((MR_Integer) 588)), &HostEnvTypeStr_23);
  succeeded = libs__globals__convert_env_type_2_p_0(HostEnvTypeStr_23, &HostEnvTypePrime_24);
  if (succeeded)
  {
    *HostEnvType_12 = HostEnvTypePrime_24;
    STATE_VARIABLE_Specs_3_148 = STATE_VARIABLE_Specs_2_112;
  }
  else
  {
    MR_Word HostEnvSpec_25;
    MR_Word Var_114;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_129;
    MR_Word Var_130;

    *HostEnvType_12 = (MR_Integer) 0;
    {
      Var_118 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_118, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_118, 1) = ((MR_Box) (HostEnvTypeStr_23));
    }
    {
      Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_117, 0) = ((MR_Box) (Var_118));
      MR_hl_field(1, Var_117, 1) = ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[104])));
    }
    {
      Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_114, 0) = ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[0])));
      MR_hl_field(1, Var_114, 1) = ((MR_Box) (Var_117));
    }
    Var_130 = parse_tree__error_spec__quote_list_to_pieces_2_f_0((MR_String) "or", (MR_Word) (MR_mkword(1, &libs__check_options_scalar_common_1[108])));
    Var_129 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_130, (MR_Word) (MR_mkword(1, &libs__check_options_scalar_common_1[12])));
    HostEnvSpec_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_114, Var_129);
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), HostEnvSpec_25, STATE_VARIABLE_Specs_2_112, &STATE_VARIABLE_Specs_3_148);
  }
  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_9, ((MR_Box) ((MR_Integer) 589)), &SystemEnvTypeStr_26);
  succeeded = (strcmp(SystemEnvTypeStr_26, (MR_String) "") == 0);
  if (succeeded)
  {
    SystemEnvTypePrime_27 = *HostEnvType_12;
    succeeded = MR_TRUE;
  }
  else
    succeeded = libs__globals__convert_env_type_2_p_0(SystemEnvTypeStr_26, &SystemEnvTypePrime_27);
  if (succeeded)
  {
    *SystemEnvType_13 = SystemEnvTypePrime_27;
    STATE_VARIABLE_Specs_4_187 = STATE_VARIABLE_Specs_3_148;
  }
  else
  {
    MR_Word SystemEnvSpec_28;
    MR_Word Var_150;
    MR_Word Var_153;
    MR_Word Var_154;
    MR_Word Var_168;
    MR_Word Var_169;

    *SystemEnvType_13 = (MR_Integer) 0;
    {
      Var_154 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_154, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_154, 1) = ((MR_Box) (SystemEnvTypeStr_26));
    }
    {
      Var_153 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_153, 0) = ((MR_Box) (Var_154));
      MR_hl_field(1, Var_153, 1) = ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[111])));
    }
    {
      Var_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_150, 0) = ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[0])));
      MR_hl_field(1, Var_150, 1) = ((MR_Box) (Var_153));
    }
    Var_169 = parse_tree__error_spec__quote_list_to_pieces_2_f_0((MR_String) "or", (MR_Word) (MR_mkword(1, &libs__check_options_scalar_common_1[108])));
    Var_168 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_169, (MR_Word) (MR_mkword(1, &libs__check_options_scalar_common_1[12])));
    SystemEnvSpec_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_150, Var_168);
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), SystemEnvSpec_28, STATE_VARIABLE_Specs_3_148, &STATE_VARIABLE_Specs_4_187);
  }
  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_9, ((MR_Box) ((MR_Integer) 590)), &TargetEnvTypeStr_29);
  succeeded = libs__globals__convert_env_type_2_p_0(TargetEnvTypeStr_29, &TargetEnvTypePrime_30);
  if (succeeded)
  {
    *TargetEnvType_14 = TargetEnvTypePrime_30;
    *STATE_VARIABLE_Specs_33 = STATE_VARIABLE_Specs_4_187;
  }
  else
  {
    MR_Word TargetEnvTypeSpec_31;
    MR_Word Var_189;
    MR_Word Var_192;
    MR_Word Var_193;
    MR_Word Var_207;
    MR_Word Var_208;

    *TargetEnvType_14 = (MR_Integer) 0;
    {
      Var_193 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_193, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_193, 1) = ((MR_Box) (TargetEnvTypeStr_29));
    }
    {
      Var_192 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_192, 0) = ((MR_Box) (Var_193));
      MR_hl_field(1, Var_192, 1) = ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[114])));
    }
    {
      Var_189 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_189, 0) = ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[0])));
      MR_hl_field(1, Var_189, 1) = ((MR_Box) (Var_192));
    }
    Var_208 = parse_tree__error_spec__quote_list_to_pieces_2_f_0((MR_String) "or", (MR_Word) (MR_mkword(1, &libs__check_options_scalar_common_1[108])));
    Var_207 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_208, (MR_Word) (MR_mkword(1, &libs__check_options_scalar_common_1[12])));
    TargetEnvTypeSpec_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_189, Var_207);
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TargetEnvTypeSpec_31, STATE_VARIABLE_Specs_4_187, STATE_VARIABLE_Specs_33);
  }
}

static void MR_CALL 
libs__check_options__check_debug_options_6_p_0(
  MR_Word OptionTable_7,
  MR_Word * TraceLevel_8,
  MR_Word * TraceSuppress_9,
  MR_Word * SSTraceLevel_10,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  MR_bool succeeded;
  MR_Word ForceDisableTracing_12;
  MR_String SuppressStr_19;
  MR_Word ForceDisableSSDB_22;
  MR_Word STATE_VARIABLE_Specs_1_50;
  MR_Word STATE_VARIABLE_Specs_3_108;
  MR_Word TraceSuppressPrime_20;

  mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_7, ((MR_Box) ((MR_Integer) 290)), &ForceDisableTracing_12);
  switch (ForceDisableTracing_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Trace_13;
        MR_Word ExecTrace_14;
        MR_Word DeclDebug_15;
        MR_Word MaybeTraceLevel_16;

        mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_7, ((MR_Box) ((MR_Integer) 276)), &Trace_13);
        mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_7, ((MR_Box) ((MR_Integer) 57)), &ExecTrace_14);
        mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_7, ((MR_Box) ((MR_Integer) 58)), &DeclDebug_15);
        succeeded = libs__trace_params__convert_trace_level_4_p_0(Trace_13, ExecTrace_14, DeclDebug_15, &MaybeTraceLevel_16);
        if (succeeded)
          if ((MaybeTraceLevel_16 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word InconsistentTraceLevelSpec_17;
            MR_Word Var_35;
            MR_Word Var_36;

            *TraceLevel_8 = libs__trace_params__trace_level_none_0_f_0();
            {
              Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_36, 1) = ((MR_Box) (Trace_13));
            }
            {
              Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
              MR_hl_field(1, Var_35, 1) = ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[68])));
            }
            {
              InconsistentTraceLevelSpec_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, InconsistentTraceLevelSpec_17, 0) = ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[62])));
              MR_hl_field(1, InconsistentTraceLevelSpec_17, 1) = ((MR_Box) (Var_35));
            }
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), InconsistentTraceLevelSpec_17, STATE_VARIABLE_Specs_0_27, &STATE_VARIABLE_Specs_1_50);
          }
          else
          {
            *TraceLevel_8 = ((MR_Word) ((MR_hl_field(1, MaybeTraceLevel_16, 0))));
            STATE_VARIABLE_Specs_1_50 = STATE_VARIABLE_Specs_0_27;
          }
        else
        {
          MR_Word BadTraceLevelSpec_18;
          MR_Word Var_51;
          MR_Word Var_54;
          MR_Word Var_55;
          MR_Word Var_66;
          MR_Word Var_67;

          *TraceLevel_8 = libs__trace_params__trace_level_none_0_f_0();
          {
            Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_55, 1) = ((MR_Box) (Trace_13));
          }
          {
            Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
            MR_hl_field(1, Var_54, 1) = ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[71])));
          }
          {
            Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_51, 0) = ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[0])));
            MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_54));
          }
          Var_67 = parse_tree__error_spec__quote_list_to_pieces_2_f_0((MR_String) "or", (MR_Word) (MR_mkword(1, &libs__check_options_scalar_common_1[77])));
          Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_67, (MR_Word) (MR_mkword(1, &libs__check_options_scalar_common_1[12])));
          BadTraceLevelSpec_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, Var_66);
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), BadTraceLevelSpec_18, STATE_VARIABLE_Specs_0_27, &STATE_VARIABLE_Specs_1_50);
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *TraceLevel_8 = libs__trace_params__trace_level_none_0_f_0();
        STATE_VARIABLE_Specs_1_50 = STATE_VARIABLE_Specs_0_27;
      }
      break;
  }
  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_7, ((MR_Box) ((MR_Integer) 286)), &SuppressStr_19);
  succeeded = libs__trace_params__convert_trace_suppress_2_p_0(SuppressStr_19, &TraceSuppressPrime_20);
  if (succeeded)
  {
    *TraceSuppress_9 = TraceSuppressPrime_20;
    STATE_VARIABLE_Specs_3_108 = STATE_VARIABLE_Specs_1_50;
  }
  else
  {
    MR_Word TraceSuppressSpec_21;
    MR_Word Var_93;
    MR_Word Var_94;

    *TraceSuppress_9 = libs__trace_params__default_trace_suppress_0_f_0();
    {
      Var_94 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_94, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_94, 1) = ((MR_Box) (SuppressStr_19));
    }
    {
      Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_93, 0) = ((MR_Box) (Var_94));
      MR_hl_field(1, Var_93, 1) = ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[80])));
    }
    {
      TraceSuppressSpec_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, TraceSuppressSpec_21, 0) = ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[0])));
      MR_hl_field(1, TraceSuppressSpec_21, 1) = ((MR_Box) (Var_93));
    }
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TraceSuppressSpec_21, STATE_VARIABLE_Specs_1_50, &STATE_VARIABLE_Specs_3_108);
  }
  mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_7, ((MR_Box) ((MR_Integer) 292)), &ForceDisableSSDB_22);
  switch (ForceDisableSSDB_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String SSTrace_23;
        MR_Word SSDB_24;
        MR_Word SSTL_25;

        mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_7, ((MR_Box) ((MR_Integer) 291)), &SSTrace_23);
        mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_7, ((MR_Box) ((MR_Integer) 59)), &SSDB_24);
        succeeded = libs__globals__convert_ssdb_trace_level_3_p_0(SSTrace_23, SSDB_24, &SSTL_25);
        if (succeeded)
        {
          *SSTraceLevel_10 = SSTL_25;
          *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_3_108;
        }
        else
        {
          MR_Word SSDBSpec_26;
          MR_Word Var_112;
          MR_Word Var_115;
          MR_Word Var_116;
          MR_Word Var_127;
          MR_Word Var_128;

          *SSTraceLevel_10 = (MR_Integer) 0;
          {
            Var_116 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_116, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_116, 1) = ((MR_Box) (SSTrace_23));
          }
          {
            Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_115, 0) = ((MR_Box) (Var_116));
            MR_hl_field(1, Var_115, 1) = ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[83])));
          }
          {
            Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_112, 0) = ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[0])));
            MR_hl_field(1, Var_112, 1) = ((MR_Box) (Var_115));
          }
          Var_128 = parse_tree__error_spec__quote_list_to_pieces_2_f_0((MR_String) "or", (MR_Word) (MR_mkword(1, &libs__check_options_scalar_common_1[87])));
          Var_127 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_128, (MR_Word) (MR_mkword(1, &libs__check_options_scalar_common_1[12])));
          SSDBSpec_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_112, Var_127);
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), SSDBSpec_26, STATE_VARIABLE_Specs_3_108, STATE_VARIABLE_Specs_28);
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *SSTraceLevel_10 = (MR_Integer) 0;
        *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_3_108;
      }
      break;
  }
}

static void MR_CALL 
libs__check_options__check_termination_options_5_p_0(
  MR_Word OptionTable_6,
  MR_Word * TermNorm_7,
  MR_Word * Term2Norm_8,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  MR_bool succeeded;
  MR_String TermNormStr_10;
  MR_String Term2NormStr_13;
  MR_Word STATE_VARIABLE_Specs_1_51;
  MR_Word TermNormPrime_11;
  MR_Word Term2NormPrime_14;

  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_6, ((MR_Box) ((MR_Integer) 443)), &TermNormStr_10);
  succeeded = libs__globals__convert_termination_norm_2_p_0(TermNormStr_10, &TermNormPrime_11);
  if (succeeded)
  {
    *TermNorm_7 = TermNormPrime_11;
    STATE_VARIABLE_Specs_1_51 = STATE_VARIABLE_Specs_0_16;
  }
  else
  {
    MR_Word TermNormSpec_12;
    MR_Word Var_19;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_34;
    MR_Word Var_35;

    *TermNorm_7 = (MR_Integer) 0;
    {
      Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_23, 1) = ((MR_Box) (TermNormStr_10));
    }
    {
      Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(1, Var_22, 1) = ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[55])));
    }
    {
      Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_19, 0) = ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[0])));
      MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_22));
    }
    Var_35 = parse_tree__error_spec__quote_list_to_pieces_2_f_0((MR_String) "or", (MR_Word) (MR_mkword(1, &libs__check_options_scalar_common_1[58])));
    Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, (MR_Word) (MR_mkword(1, &libs__check_options_scalar_common_1[12])));
    TermNormSpec_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_19, Var_34);
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TermNormSpec_12, STATE_VARIABLE_Specs_0_16, &STATE_VARIABLE_Specs_1_51);
  }
  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_6, ((MR_Box) ((MR_Integer) 449)), &Term2NormStr_13);
  succeeded = libs__globals__convert_termination_norm_2_p_0(Term2NormStr_13, &Term2NormPrime_14);
  if (succeeded)
  {
    *Term2Norm_8 = Term2NormPrime_14;
    *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_1_51;
  }
  else
  {
    MR_Word Term2NormSpec_15;
    MR_Word Var_53;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_68;
    MR_Word Var_69;

    *Term2Norm_8 = (MR_Integer) 0;
    {
      Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_57, 1) = ((MR_Box) (TermNormStr_10));
    }
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[61])));
    }
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[0])));
      MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
    }
    Var_69 = parse_tree__error_spec__quote_list_to_pieces_2_f_0((MR_String) "or", (MR_Word) (MR_mkword(1, &libs__check_options_scalar_common_1[58])));
    Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_69, (MR_Word) (MR_mkword(1, &libs__check_options_scalar_common_1[12])));
    Term2NormSpec_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_53, Var_68);
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), Term2NormSpec_15, STATE_VARIABLE_Specs_1_51, STATE_VARIABLE_Specs_17);
  }
}

static void MR_CALL 
libs__check_options__check_codegen_options_8_p_0(
  MR_Word OptionTable_9,
  MR_Word * MaybeThreadSafe_10,
  MR_Word * ReuseStrategy_11,
  MR_Word * MaybeFeedbackInfo_12,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31)
{
  MR_bool succeeded;
  MR_Integer FactTablePercentFull_15;
  MR_String MaybeThreadSafeStr_17;
  MR_String ReuseConstraintStr_20;
  MR_Integer ReuseConstraintArgNum_21;
  MR_String FeedbackFile_24;
  MR_Word STATE_VARIABLE_Specs_1_54;
  MR_Word STATE_VARIABLE_Specs_2_89;
  MR_Word STATE_VARIABLE_Specs_3_122;
  MR_Integer Var_36;
  MR_Word MaybeThreadSafePrime_18;
  MR_Word ReuseStrategyPrime_22;

  mercury__getopt__lookup_int_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_9, ((MR_Box) ((MR_Integer) 665)), &FactTablePercentFull_15);
  succeeded = (FactTablePercentFull_15 >= (MR_Integer) 1);
  if (succeeded)
  {
    Var_36 = (MR_Integer) 100;
    succeeded = (FactTablePercentFull_15 <= Var_36);
  }
  if (succeeded)
    STATE_VARIABLE_Specs_1_54 = STATE_VARIABLE_Specs_0_30;
  else
  {
    MR_Word FactTablePercentFullSpec_16;
    MR_Word Var_39;
    MR_Word Var_40;

    {
      Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_40, 1) = ((MR_Box) (FactTablePercentFull_15));
    }
    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(1, Var_39, 1) = ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[39])));
    }
    {
      FactTablePercentFullSpec_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FactTablePercentFullSpec_16, 0) = ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[0])));
      MR_hl_field(1, FactTablePercentFullSpec_16, 1) = ((MR_Box) (Var_39));
    }
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), FactTablePercentFullSpec_16, STATE_VARIABLE_Specs_0_30, &STATE_VARIABLE_Specs_1_54);
  }
  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_9, ((MR_Box) ((MR_Integer) 93)), &MaybeThreadSafeStr_17);
  succeeded = libs__globals__convert_maybe_thread_safe_2_p_0(MaybeThreadSafeStr_17, &MaybeThreadSafePrime_18);
  if (succeeded)
  {
    *MaybeThreadSafe_10 = MaybeThreadSafePrime_18;
    STATE_VARIABLE_Specs_2_89 = STATE_VARIABLE_Specs_1_54;
  }
  else
  {
    MR_Word MTSSpec_19;
    MR_Word Var_56;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_74;
    MR_Word Var_75;

    *MaybeThreadSafe_10 = (MR_Integer) 0;
    {
      Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_60, 1) = ((MR_Box) (MaybeThreadSafeStr_17));
    }
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
      MR_hl_field(1, Var_59, 1) = ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[45])));
    }
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[0])));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_59));
    }
    Var_75 = parse_tree__error_spec__quote_list_to_pieces_2_f_0((MR_String) "or", (MR_Word) (MR_mkword(1, &libs__check_options_scalar_common_1[47])));
    Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_75, (MR_Word) (MR_mkword(1, &libs__check_options_scalar_common_1[12])));
    MTSSpec_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_56, Var_74);
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), MTSSpec_19, STATE_VARIABLE_Specs_1_54, &STATE_VARIABLE_Specs_2_89);
  }
  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_9, ((MR_Box) ((MR_Integer) 367)), &ReuseConstraintStr_20);
  mercury__getopt__lookup_int_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_9, ((MR_Box) ((MR_Integer) 368)), &ReuseConstraintArgNum_21);
  succeeded = libs__globals__convert_reuse_strategy_3_p_0(ReuseConstraintStr_20, ReuseConstraintArgNum_21, &ReuseStrategyPrime_22);
  if (succeeded)
  {
    *ReuseStrategy_11 = ReuseStrategyPrime_22;
    STATE_VARIABLE_Specs_3_122 = STATE_VARIABLE_Specs_2_89;
  }
  else
  {
    MR_Word ReuseConstrSpec_23;
    MR_Word Var_92;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_107;
    MR_Word Var_108;

    *ReuseStrategy_11 = (MR_Word) ((MR_Unsigned) 0U);
    {
      Var_96 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_96, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_96, 1) = ((MR_Box) (ReuseConstraintStr_20));
    }
    {
      Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_95, 0) = ((MR_Box) (Var_96));
      MR_hl_field(1, Var_95, 1) = ((MR_Box) (MR_mkword(1, &libs__check_options_scalar_common_1[50])));
    }
    {
      Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_92, 0) = ((MR_Box) (MR_mkword(3, &libs__check_options_scalar_common_1[0])));
      MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_95));
    }
    Var_108 = parse_tree__error_spec__quote_list_to_pieces_2_f_0((MR_String) "or", (MR_Word) (MR_mkword(1, &libs__check_options_scalar_common_1[52])));
    Var_107 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_108, (MR_Word) (MR_mkword(1, &libs__check_options_scalar_common_1[12])));
    ReuseConstrSpec_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_92, Var_107);
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), ReuseConstrSpec_23, STATE_VARIABLE_Specs_2_89, &STATE_VARIABLE_Specs_3_122);
  }
  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_9, ((MR_Box) ((MR_Integer) 682)), &FeedbackFile_24);
  succeeded = (strcmp(FeedbackFile_24, (MR_String) "") == 0);
  if (succeeded)
  {
    *MaybeFeedbackInfo_12 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_31 = STATE_VARIABLE_Specs_3_122;
  }
  else
  {
    MR_Word FeedbackReadResult_26;

    mdbcomp__feedback__feedback_info__read_feedback_file_5_p_0(FeedbackFile_24, (MR_Word) ((MR_Unsigned) 0U), &FeedbackReadResult_26);
    if (((MR_tag((MR_Word) FeedbackReadResult_26)) == (MR_Integer) 1))
    {
      MR_Word Error_28 = ((MR_Word) ((MR_hl_field(1, FeedbackReadResult_26, 0))));
      MR_String ErrorMessage_29;
      MR_Word Var_126;
      MR_Word Var_128;

      mdbcomp__feedback__feedback_info__feedback_read_error_message_string_3_p_0(FeedbackFile_24, Error_28, &ErrorMessage_29);
      {
        Var_128 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_128, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_128, 1) = ((MR_Box) (ErrorMessage_29));
      }
      {
        Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_126, 0) = ((MR_Box) (Var_128));
        MR_hl_field(1, Var_126, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), Var_126, STATE_VARIABLE_Specs_3_122, STATE_VARIABLE_Specs_31);
      *MaybeFeedbackInfo_12 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word FeedbackInfo_27 = ((MR_Word) ((MR_hl_field(0, FeedbackReadResult_26, 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeFeedbackInfo_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (FeedbackInfo_27));
      }
      *STATE_VARIABLE_Specs_31 = STATE_VARIABLE_Specs_3_122;
    }
  }
}

void mercury__libs__check_options__init(void)
{
}

void mercury__libs__check_options__init_type_tables(void)
{
}

void mercury__libs__check_options__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__check_options__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module libs.check_options.
