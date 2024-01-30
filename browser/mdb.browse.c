/*
** Automatically generated from `browse.m'
** by the Mercury compiler,
** version rotd-2024-01-30
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


// :- module mdb.browse.
// :- implementation.

/*
INIT mercury__mdb__browse__init
ENDINIT
*/

#include "mdb.browse.mih"
#include "mdb.browse.mh"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdb.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "io.stream_db.mih"
#include "mdb.browser_info.mih"
#include "mdb.browser_term.mih"
#include "mdb.parse.mih"
#include "mdb.print_term.mih"
#include "mdb.term_paths.mih"
#include "mdb.term_rep.mih"
#include "mdbcomp.program_representation.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 mdb__browse__pair__pti_pair_2__plain_mdb__parse__type_ctor_info_format_option_0__plain_getopt__type_ctor_info_option_data_0;

static void MR_CALL 
mdb__browse__show_settings_4_p_0(
  MR_Word Debugger_5,
  MR_Word Info_6);

static void MR_CALL 
mdb__browse__show_settings_caller_6_p_0(
  MR_Word Debugger_7,
  MR_Word Info_8,
  MR_Word Caller_9,
  MR_String CallerName_10);

static void MR_CALL 
mdb__browse__show_settings_caller_format_8_p_0(
  MR_Word Debugger_9,
  MR_Word Info_10,
  MR_Word Caller_11,
  MR_String CallerName_12,
  MR_Word Format_13,
  MR_String FormatName_14);

static void MR_CALL 
mdb__browse__get_value_representation_2_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Box HeadVar__1_1,
  MR_Integer * HeadVar__2_2);

static void MR_CALL 
mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_118_97_108_117_101_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_95_91_49_93_95_48_2_p_0(
  MR_Box HeadVar__1_1,
  MR_Integer * HeadVar__2_2);

static MR_bool MR_CALL 
mdb__browse__bool_format_option_is_true_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Format_3);

static void MR_CALL 
mdb__browse__browse_main_loop_6_p_0(
  MR_Word InputStream_7,
  MR_Word Debugger_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
mdb__browse__run_browse_cmd_7_p_0(
  MR_Word Debugger_8,
  MR_Word Command_9,
  MR_Word * STATE_VARIABLE_Quit_33,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35);

static void MR_CALL 
mdb__browse__run_browse_cmnd_help_3_p_0(
  MR_Word Debugger_4);

static void MR_CALL 
mdb__browse__run_browse_cmd_mode_query_5_p_0(
  MR_Word Debugger_6,
  MR_Word MaybeModeFunc_7,
  MR_Word Dirs_8);

static void MR_CALL 
mdb__browse__run_browse_cmd_memory_addr_5_p_0(
  MR_Word Debugger_6,
  MR_Word Info_7,
  MR_Word MaybePath_8);

static MR_bool MR_CALL 
mdb__browse__run_browse_cmd_print_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdb__browse__run_browse_cmd_print_7_p_0(
  MR_Word Debugger_8,
  MR_Word Caller_9,
  MR_Word MaybeMaybeOptionTable_10,
  MR_Word Info_11,
  MR_Word MaybePath_12);


static /* final */ const MR_Box mdb__browse_scalar_common_1[2][3];

static /* final */ const MR_Box mdb__browse_scalar_common_2[4][1];

static /* final */ const MR_Box mdb__browse_scalar_common_3[37][2];

static /* final */ const MR_Box mdb__browse_scalar_common_4[1][5];


struct mdb__browse__vector_common_type_5_0_s {
  const MR_Word mdb__browse__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct mdb__browse__vector_common_type_5_0_s mdb__browse_vector_common_5[4];

struct mdb__browse__vector_common_type_6_0_s {
  const MR_String mdb__browse__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct mdb__browse__vector_common_type_6_0_s mdb__browse_vector_common_6[4];



static /* final */ const MR_Box mdb__browse_scalar_common_1[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mdb__browse_scalar_common_4[0])),
    ((MR_Box) (mdb__browse__run_browse_cmd_print_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdb__browse_scalar_common_2[4][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   1 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "error: inconsistent format options")) },
  /* row   3 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box mdb__browse_scalar_common_3[37][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "-- Paths can be Unix-style or SICStus-style: /2/3/1 or ^2^3^1\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[0])))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[1])))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "\th              -- help\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[2])))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "\t\?              -- help\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[3])))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) "\t^ [path]       -- cd to the specified subterm (default is root)\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[4])))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "\t< n            -- set depth\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[5])))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "\tp              -- print\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[6])))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "SICStus Prolog style commands are:\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[7])))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "\thelp           -- show this help message\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[8])))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_String) "\tquit           -- quit browser\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[9])))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_String) "\tparams         -- show format and parameter values\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[10])))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_String) "\t               -- set the named parameter value\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[11])))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_String) "\tnum_io_actions <n>\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[12])))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_String) "\tlines [format_param_options] <n>\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[13])))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_String) "\twidth [format_param_options] <n>\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[14])))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_String) "\tsize  [format_param_options] <n>\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[15])))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_String) "\tdepth [format_param_options] <n>\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[16])))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_String) "\t               -- set the format\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[17])))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_String) "\tformat [format_options] <flat|raw-pretty|verbose|pretty>\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[18])))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_String) "\t                  (default is current)\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[19])))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_String) "\tmode [path]    -- show the mode of the specified subterm\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[20])))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_String) "\t                  that it makes the current goal invalid\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[21])))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_String) "\t                  for tracking, asserting for the declarative debugger\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[22])))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_String) "\t               -- mark the specified subterm (default is current)\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[23])))
  },
  /* row  25 */
  {
    ((MR_Box) ((MR_String) "\t[m|mark] [path]\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[24])))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_String) "\t                  for tracking, and quit\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[25])))
  },
  /* row  27 */
  {
    ((MR_Box) ((MR_String) "\t               -- mark the specified subterm (default is current)\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[26])))
  },
  /* row  28 */
  {
    ((MR_Box) ((MR_String) "\t[t|track] [path]\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[27])))
  },
  /* row  29 */
  {
    ((MR_Box) ((MR_String) "\tpwd            -- print the path to the current subterm\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[28])))
  },
  /* row  30 */
  {
    ((MR_Box) ((MR_String) "\tcdr n path     -- repeatedly apply the cd command n times\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[29])))
  },
  /* row  31 */
  {
    ((MR_Box) ((MR_String) "\tcd [path]      -- cd to the specified subterm (default is root)\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[30])))
  },
  /* row  32 */
  {
    ((MR_Box) ((MR_String) "\t               -- print the raw memory address of the specified subterm\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[31])))
  },
  /* row  33 */
  {
    ((MR_Box) ((MR_String) "\t[addr|memory_addr] [path]\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[32])))
  },
  /* row  34 */
  {
    ((MR_Box) ((MR_String) "\t               -- print the specified subterm using the \140browse\' params\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[33])))
  },
  /* row  35 */
  {
    ((MR_Box) ((MR_String) "\t[print|p|ls] [format_options] [path]\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[34])))
  },
  /* row  36 */
  {
    ((MR_Box) ((MR_String) "Commands are:\n")),
    ((MR_Box) (MR_mkword(1, &mdb__browse_scalar_common_3[35])))
  },
};

static /* final */ const MR_Box mdb__browse_scalar_common_4[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__browse__pair__pti_pair_2__plain_mdb__parse__type_ctor_info_format_option_0__plain_getopt__type_ctor_info_option_data_0)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0))
  },
};


static /* final */ const struct mdb__browse__vector_common_type_5_0_s mdb__browse_vector_common_5[4] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 2 },
  /* row   3 */   { (MR_Integer) 3 },
};

static /* final */ const struct mdb__browse__vector_common_type_6_0_s mdb__browse_vector_common_6[4] = {
  /* row   0 */   { (MR_String) "Input" },
  /* row   1 */   { (MR_String) "Output" },
  /* row   2 */   { (MR_String) "Unbound" },
  /* row   3 */   { (MR_String) "Not Applicable" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "mdb.browse.mh"

#line 130 "browse.m"
void 
ML_BROWSE_browse_browser_term_no_modes(
  MR_Word InputStream_9,
  MR_Word OutputStream_10,
  MR_Word Term_11,
  MR_Word * MaybeTrack_12,
  MR_Word STATE_VARIABLE_State_0_17,
  MR_Word * STATE_VARIABLE_State_18)
#line 130 "browse.m"
{
#line 130 "browse.m"
	mdb__browse__browse_browser_term_no_modes_8_p_0((MR_Word) InputStream_9, (MR_Word) OutputStream_10, (MR_Word) Term_11, (MR_Word *) MaybeTrack_12, (MR_Word) STATE_VARIABLE_State_0_17, (MR_Word *) STATE_VARIABLE_State_18);
}

#line 133 "browse.m"
void 
ML_BROWSE_browse_browser_term_format_no_modes(
  MR_Word InputStream_9,
  MR_Word OutputStream_10,
  MR_Word Format_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_State_0_17,
  MR_Word * STATE_VARIABLE_State_18)
#line 133 "browse.m"
{
#line 133 "browse.m"
	mdb__browse__browse_browser_term_format_no_modes_8_p_0((MR_Word) InputStream_9, (MR_Word) OutputStream_10, (MR_Word) Format_11, (MR_Word) Term_12, (MR_Word) STATE_VARIABLE_State_0_17, (MR_Word *) STATE_VARIABLE_State_18);
}

#line 136 "browse.m"
void 
ML_BROWSE_browse_external_no_modes(
  MR_Word TypeInfo_for_T_25,
  MR_Word InputStream_8,
  MR_Word OutputStream_9,
  MR_Word Term_10,
  MR_Word STATE_VARIABLE_State_0_16,
  MR_Word * STATE_VARIABLE_State_17)
#line 136 "browse.m"
{
#line 136 "browse.m"
	mdb__browse__browse_external_no_modes_7_p_0((MR_Word) TypeInfo_for_T_25, (MR_Word) InputStream_8, (MR_Word) OutputStream_9, (MR_Box) Term_10, (MR_Word) STATE_VARIABLE_State_0_16, (MR_Word *) STATE_VARIABLE_State_17);
}

#line 139 "browse.m"
void 
ML_BROWSE_print_browser_term(
  MR_Word OutputStream_7,
  MR_Word Caller_8,
  MR_Word Term_9,
  MR_Word State_10)
#line 139 "browse.m"
{
#line 139 "browse.m"
	mdb__browse__print_browser_term_6_p_0((MR_Word) OutputStream_7, (MR_Word) Caller_8, (MR_Word) Term_9, (MR_Word) State_10);
}

#line 142 "browse.m"
void 
ML_BROWSE_print_browser_term_format(
  MR_Word OutputStream_8,
  MR_Word Caller_9,
  MR_Word Format_10,
  MR_Word Term_11,
  MR_Word State_12)
#line 142 "browse.m"
{
#line 142 "browse.m"
	mdb__browse__print_browser_term_format_7_p_0((MR_Word) OutputStream_8, (MR_Word) Caller_9, (MR_Word) Format_10, (MR_Word) Term_11, (MR_Word) State_12);
}


static const MR_FA_PseudoTypeInfo_Struct2 mdb__browse__pair__pti_pair_2__plain_mdb__parse__type_ctor_info_format_option_0__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0),
    (MR_PseudoTypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
  }
};

static void MR_CALL 
mdb__browse__show_settings_4_p_0(
  MR_Word Debugger_5,
  MR_Word Info_6)
{
  MR_Word Var_21;
  MR_Integer Var_26;
  MR_Word Var_28;

  mdb__browse__show_settings_caller_6_p_0(Debugger_5, Info_6, (MR_Integer) 1, (MR_String) "Browser");
  mdb__browse__show_settings_caller_6_p_0(Debugger_5, Info_6, (MR_Integer) 0, (MR_String) "Print");
  mdb__browse__show_settings_caller_6_p_0(Debugger_5, Info_6, (MR_Integer) 2, (MR_String) "Printall");
  mdb__browser_info__write_string_debugger_4_p_0(Debugger_5, (MR_String) "Current path is: ");
  Var_21 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 1))));
  mdb__browser_info__write_down_path_4_p_0(Debugger_5, Var_21);
  mdb__browser_info__nl_debugger_3_p_0(Debugger_5);
  mdb__browser_info__write_string_debugger_4_p_0(Debugger_5, (MR_String) "Number of I/O actions printed is: ");
  Var_28 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 4))));
  Var_26 = mdb__browser_info__get_num_printed_io_actions_1_f_0(Var_28);
  mdb__browser_info__write_int_debugger_4_p_0(Debugger_5, Var_26);
  mdb__browser_info__nl_debugger_3_p_0(Debugger_5);
}

static void MR_CALL 
mdb__browse__show_settings_caller_6_p_0(
  MR_Word Debugger_7,
  MR_Word Info_8,
  MR_Word Caller_9,
  MR_String CallerName_10)
{
  MR_Word Format_12;
  MR_String Var_16;
  MR_String Var_21;
  MR_String Var_26;
  MR_String Var_31;
  MR_String Var_36;
  MR_String Var_41;

  mdb__browser_info__get_format_4_p_0(Info_8, Caller_9, (MR_Word) ((MR_Unsigned) 0U), &Format_12);
  Var_16 = mercury__string__f_43_43_2_f_0(CallerName_10, (MR_String) " default format: ");
  mdb__browser_info__write_string_debugger_4_p_0(Debugger_7, Var_16);
  mdb__browser_info__print_format_debugger_4_p_0(Debugger_7, Format_12);
  mdb__browser_info__nl_debugger_3_p_0(Debugger_7);
  Var_21 = mercury__string__pad_right_3_f_0((MR_String) "", (MR_Char) 32, (MR_Integer) 30);
  mdb__browser_info__write_string_debugger_4_p_0(Debugger_7, Var_21);
  Var_26 = mercury__string__pad_right_3_f_0((MR_String) "depth", (MR_Char) 32, (MR_Integer) 10);
  mdb__browser_info__write_string_debugger_4_p_0(Debugger_7, Var_26);
  Var_31 = mercury__string__pad_right_3_f_0((MR_String) "size", (MR_Char) 32, (MR_Integer) 10);
  mdb__browser_info__write_string_debugger_4_p_0(Debugger_7, Var_31);
  Var_36 = mercury__string__pad_right_3_f_0((MR_String) "x clip", (MR_Char) 32, (MR_Integer) 10);
  mdb__browser_info__write_string_debugger_4_p_0(Debugger_7, Var_36);
  Var_41 = mercury__string__pad_right_3_f_0((MR_String) "y clip", (MR_Char) 32, (MR_Integer) 10);
  mdb__browser_info__write_string_debugger_4_p_0(Debugger_7, Var_41);
  mdb__browser_info__nl_debugger_3_p_0(Debugger_7);
  mdb__browse__show_settings_caller_format_8_p_0(Debugger_7, Info_8, Caller_9, CallerName_10, (MR_Integer) 0, (MR_String) "flat");
  mdb__browse__show_settings_caller_format_8_p_0(Debugger_7, Info_8, Caller_9, CallerName_10, (MR_Integer) 2, (MR_String) "verbose");
  mdb__browse__show_settings_caller_format_8_p_0(Debugger_7, Info_8, Caller_9, CallerName_10, (MR_Integer) 3, (MR_String) "pretty");
  mdb__browse__show_settings_caller_format_8_p_0(Debugger_7, Info_8, Caller_9, CallerName_10, (MR_Integer) 1, (MR_String) "raw_pretty");
  mdb__browser_info__nl_debugger_3_p_0(Debugger_7);
}

static void MR_CALL 
mdb__browse__show_settings_caller_format_8_p_0(
  MR_Word Debugger_9,
  MR_Word Info_10,
  MR_Word Caller_11,
  MR_String CallerName_12,
  MR_Word Format_13,
  MR_String FormatName_14)
{
  MR_Word Params_16;
  MR_String Var_19;
  MR_String Var_21;
  MR_String Var_22;
  MR_String Var_24;
  MR_String Var_28;
  MR_String Var_33;
  MR_String Var_35;
  MR_Integer Var_36;
  MR_String Var_39;
  MR_String Var_41;
  MR_Integer Var_42;
  MR_String Var_45;
  MR_String Var_47;
  MR_Integer Var_48;
  MR_String Var_51;
  MR_String Var_53;
  MR_Integer Var_54;

  mdb__browser_info__get_format_params_4_p_0(Info_10, Caller_11, Format_13, &Params_16);
  Var_24 = mercury__string__f_43_43_2_f_0(FormatName_14, (MR_String) ":");
  Var_22 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_24);
  Var_21 = mercury__string__f_43_43_2_f_0(CallerName_12, Var_22);
  Var_19 = mercury__string__pad_right_3_f_0(Var_21, (MR_Char) 32, (MR_Integer) 30);
  mdb__browser_info__write_string_debugger_4_p_0(Debugger_9, Var_19);
  Var_28 = mercury__string__pad_right_3_f_0((MR_String) " ", (MR_Char) 32, (MR_Integer) 3);
  mdb__browser_info__write_string_debugger_4_p_0(Debugger_9, Var_28);
  Var_36 = ((MR_Integer) ((MR_hl_field(0, Params_16, (MR_Integer) 0))));
  Var_35 = mercury__string__int_to_string_1_f_0(Var_36);
  Var_33 = mercury__string__pad_right_3_f_0(Var_35, (MR_Char) 32, (MR_Integer) 10);
  mdb__browser_info__write_string_debugger_4_p_0(Debugger_9, Var_33);
  Var_42 = ((MR_Integer) ((MR_hl_field(0, Params_16, (MR_Integer) 1))));
  Var_41 = mercury__string__int_to_string_1_f_0(Var_42);
  Var_39 = mercury__string__pad_right_3_f_0(Var_41, (MR_Char) 32, (MR_Integer) 10);
  mdb__browser_info__write_string_debugger_4_p_0(Debugger_9, Var_39);
  Var_48 = ((MR_Integer) ((MR_hl_field(0, Params_16, (MR_Integer) 2))));
  Var_47 = mercury__string__int_to_string_1_f_0(Var_48);
  Var_45 = mercury__string__pad_right_3_f_0(Var_47, (MR_Char) 32, (MR_Integer) 10);
  mdb__browser_info__write_string_debugger_4_p_0(Debugger_9, Var_45);
  Var_54 = ((MR_Integer) ((MR_hl_field(0, Params_16, (MR_Integer) 3))));
  Var_53 = mercury__string__int_to_string_1_f_0(Var_54);
  Var_51 = mercury__string__pad_right_3_f_0(Var_53, (MR_Char) 32, (MR_Integer) 10);
  mdb__browser_info__write_string_debugger_4_p_0(Debugger_9, Var_51);
  mdb__browser_info__nl_debugger_3_p_0(Debugger_9);
}

static void MR_CALL 
mdb__browse__get_value_representation_2_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Box HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_118_97_108_117_101_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_95_91_49_93_95_48_2_p_0(HeadVar__1_1, HeadVar__2_2);
}

static void MR_CALL 
mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_118_97_108_117_101_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_95_91_49_93_95_48_2_p_0(
  MR_Box HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
{
#define MR_PROC_LABEL mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_118_97_108_117_101_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_95_91_49_93_95_48_2_p_0

	MR_Word Value;
	MR_Integer Addr;

	Value = (MR_Word) HeadVar__1_1 ;
		{

    Addr = (MR_Integer) Value;


		;}
#undef MR_PROC_LABEL
	*HeadVar__2_2  = Addr;
}
}

static MR_bool MR_CALL 
mdb__browse__bool_format_option_is_true_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Format_3)
{
  MR_bool succeeded;
  MR_Word Var_4;
  MR_Word Var_5;

  *Format_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  Var_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  succeeded = ((MR_tag((MR_Word) Var_4)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_5 = ((MR_Unsigned) ((MR_hl_field(1, Var_4, (MR_Integer) 0))) & (MR_Integer) 1);
    succeeded = (Var_5 == (MR_Integer) 1);
  }
  return succeeded;
}

void MR_CALL 
mdb__browse__browse_external_8_p_0(
  MR_Word TypeInfo_for_T_26,
  MR_Word InputStream_9,
  MR_Word OutputStream_10,
  MR_Word MaybeModeFunc_11,
  MR_Box Term_12,
  MR_Word STATE_VARIABLE_State_0_17,
  MR_Word * STATE_VARIABLE_State_18)
{
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_25;
  MR_Word Info0_27;
  MR_Word Info_28;

  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (OutputStream_10));
  }
  Var_25 = mercury__univ__univ_1_f_0(TypeInfo_for_T_26, Term_12);
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (Var_25));
  }
  Info0_27 = mdb__browser_info__browser_info_init_5_f_0(Var_22, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), MaybeModeFunc_11, STATE_VARIABLE_State_0_17);
  mdb__browse__browse_main_loop_6_p_0(InputStream_9, Var_21, Info0_27, &Info_28);
  *STATE_VARIABLE_State_18 = ((MR_Word) ((MR_hl_field(0, Info_28, (MR_Integer) 4))));
}

void MR_CALL 
mdb__browse__browse_external_no_modes_7_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word InputStream_8,
  MR_Word OutputStream_9,
  MR_Box Term_10,
  MR_Word STATE_VARIABLE_State_0_16,
  MR_Word * STATE_VARIABLE_State_17)
{
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_24;
  MR_Word Info0_26;
  MR_Word Info_27;

  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (OutputStream_9));
  }
  Var_24 = mercury__univ__univ_1_f_0(TypeInfo_for_T_25, Term_10);
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (Var_24));
  }
  Info0_26 = mdb__browser_info__browser_info_init_5_f_0(Var_21, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_State_0_16);
  mdb__browse__browse_main_loop_6_p_0(InputStream_8, Var_20, Info0_26, &Info_27);
  *STATE_VARIABLE_State_17 = ((MR_Word) ((MR_hl_field(0, Info_27, (MR_Integer) 4))));
}

void MR_CALL 
mdb__browse__browse_browser_term_format_9_p_0(
  MR_Word InputStream_10,
  MR_Word OutputStream_11,
  MR_Word Format_12,
  MR_Word MaybeModeFunc_13,
  MR_Word Term_14,
  MR_Word STATE_VARIABLE_State_0_18,
  MR_Word * STATE_VARIABLE_State_19)
{
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Info0_24;
  MR_Word Info_25;

  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (OutputStream_11));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (Format_12));
  }
  Info0_24 = mdb__browser_info__browser_info_init_5_f_0(Term_14, (MR_Integer) 1, Var_23, MaybeModeFunc_13, STATE_VARIABLE_State_0_18);
  mdb__browse__browse_main_loop_6_p_0(InputStream_10, Var_22, Info0_24, &Info_25);
  *STATE_VARIABLE_State_19 = ((MR_Word) ((MR_hl_field(0, Info_25, (MR_Integer) 4))));
}

void MR_CALL 
mdb__browse__browse_browser_term_format_no_modes_8_p_0(
  MR_Word InputStream_9,
  MR_Word OutputStream_10,
  MR_Word Format_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_State_0_17,
  MR_Word * STATE_VARIABLE_State_18)
{
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Info0_23;
  MR_Word Info_24;

  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (OutputStream_10));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (Format_11));
  }
  Info0_23 = mdb__browser_info__browser_info_init_5_f_0(Term_12, (MR_Integer) 1, Var_22, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_State_0_17);
  mdb__browse__browse_main_loop_6_p_0(InputStream_9, Var_21, Info0_23, &Info_24);
  *STATE_VARIABLE_State_18 = ((MR_Word) ((MR_hl_field(0, Info_24, (MR_Integer) 4))));
}

void MR_CALL 
mdb__browse__browse_browser_term_9_p_0(
  MR_Word InputStream_10,
  MR_Word OutputStream_11,
  MR_Word MaybeModeFunc_12,
  MR_Word Term_13,
  MR_Word * MaybeTrack_14,
  MR_Word STATE_VARIABLE_State_0_18,
  MR_Word * STATE_VARIABLE_State_19)
{
  MR_Word Var_22;
  MR_Word Info0_23;
  MR_Word Info_24;

  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (OutputStream_11));
  }
  Info0_23 = mdb__browser_info__browser_info_init_5_f_0(Term_13, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), MaybeModeFunc_12, STATE_VARIABLE_State_0_18);
  mdb__browse__browse_main_loop_6_p_0(InputStream_10, Var_22, Info0_23, &Info_24);
  *STATE_VARIABLE_State_19 = ((MR_Word) ((MR_hl_field(0, Info_24, (MR_Integer) 4))));
  *MaybeTrack_14 = ((MR_Word) ((MR_hl_field(0, Info_24, (MR_Integer) 5))));
}

void MR_CALL 
mdb__browse__browse_browser_term_no_modes_8_p_0(
  MR_Word InputStream_9,
  MR_Word OutputStream_10,
  MR_Word Term_11,
  MR_Word * MaybeTrack_12,
  MR_Word STATE_VARIABLE_State_0_17,
  MR_Word * STATE_VARIABLE_State_18)
{
  MR_Word Var_21;
  MR_Word Info0_22;
  MR_Word Info_23;

  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (OutputStream_10));
  }
  Info0_22 = mdb__browser_info__browser_info_init_5_f_0(Term_11, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_State_0_17);
  mdb__browse__browse_main_loop_6_p_0(InputStream_9, Var_21, Info0_22, &Info_23);
  *STATE_VARIABLE_State_18 = ((MR_Word) ((MR_hl_field(0, Info_23, (MR_Integer) 4))));
  *MaybeTrack_12 = ((MR_Word) ((MR_hl_field(0, Info_23, (MR_Integer) 5))));
}

static void MR_CALL 
mdb__browse__browse_main_loop_6_p_0(
  MR_Word InputStream_7,
  MR_Word Debugger_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  while (MR_TRUE)
  {
    MR_Word OutputStream_11;
    MR_Word Command_12;
    MR_Word Quit_13;
    MR_Word STATE_VARIABLE_Info_23_23;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Debugger_8)) == (MR_Integer) 1))
    {
      OutputStream_11 = ((MR_Word) ((MR_hl_field(1, Debugger_8, (MR_Integer) 0))));
      mdb__parse__read_browser_command_external_4_p_0(InputStream_7, &Command_12);
    }
    else
    {
      OutputStream_11 = ((MR_Word) ((MR_hl_field(0, Debugger_8, (MR_Integer) 0))));
      mdb__parse__read_browser_command_6_p_0(InputStream_7, OutputStream_11, (MR_String) "browser> ", &Command_12);
    }
    mdb__browse__run_browse_cmd_7_p_0(Debugger_8, Command_12, &Quit_13, STATE_VARIABLE_Info_0_16, &STATE_VARIABLE_Info_23_23);
    switch (Quit_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word next_value_of_STATE_VARIABLE_Info_0_16 = STATE_VARIABLE_Info_23_23;

          // direct tailcall eliminated
          ;
          STATE_VARIABLE_Info_0_16 = next_value_of_STATE_VARIABLE_Info_0_16;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          if (((MR_tag((MR_Word) Debugger_8)) == (MR_Integer) 1))
            mdb__browser_info__send_term_to_socket_4_p_0(OutputStream_11, (MR_Word) ((MR_Unsigned) 8U));
          *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_23_23;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mdb__browse__run_browse_cmd_7_p_0(
  MR_Word Debugger_8,
  MR_Word Command_9,
  MR_Word * STATE_VARIABLE_Quit_33,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
{
  switch (MR_tag((MR_Word) Command_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Command_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mdb__browser_info__write_string_debugger_4_p_0(Debugger_8, (MR_String) "command not yet implemented\n");
            *STATE_VARIABLE_Quit_33 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
          }
          break;
        case (MR_Integer) 1:
          {
            mdb__browser_info__write_string_debugger_4_p_0(Debugger_8, (MR_String) "command not yet implemented\n");
            *STATE_VARIABLE_Quit_33 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
          }
          break;
        case (MR_Integer) 2:
          {
            mdb__term_paths__set_path_3_p_0((MR_Word) (&mdb__browse_scalar_common_2[0]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
            *STATE_VARIABLE_Quit_33 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_34, (MR_Integer) 1))));

            mdb__browser_info__write_down_path_4_p_0(Debugger_8, Var_53);
            mdb__browser_info__nl_debugger_3_p_0(Debugger_8);
            *STATE_VARIABLE_Quit_33 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Dirs_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_34, (MR_Integer) 1))));
            MR_Word MaybeModeFunc_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_34, (MR_Integer) 6))));

            mdb__browse__run_browse_cmd_mode_query_5_p_0(Debugger_8, MaybeModeFunc_90, Dirs_28);
            *STATE_VARIABLE_Quit_33 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
          }
          break;
        case (MR_Integer) 5:
          {
            mdb__browse__run_browse_cmnd_help_3_p_0(Debugger_8);
            *STATE_VARIABLE_Quit_33 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
          }
          break;
        case (MR_Integer) 6:
          {
            *STATE_VARIABLE_Quit_33 = (MR_Integer) 1;
            *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
          }
          break;
        case (MR_Integer) 7:
          {
            *STATE_VARIABLE_Quit_33 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
          }
          break;
        case (MR_Integer) 8:
          {
            mdb__browser_info__write_string_debugger_4_p_0(Debugger_8, (MR_String) "Error: unknown command or syntax error.\nType \"help\" for help.\n");
            *STATE_VARIABLE_Quit_33 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PrintOption_13 = ((MR_Word) ((MR_hl_field(1, Command_9, (MR_Integer) 0))));
        MR_Word MaybePath_14 = ((MR_Word) ((MR_hl_field(1, Command_9, (MR_Integer) 1))));

        mdb__browse__run_browse_cmd_print_7_p_0(Debugger_8, (MR_Integer) 1, PrintOption_13, STATE_VARIABLE_Info_0_34, MaybePath_14);
        *STATE_VARIABLE_Quit_33 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word MaybePath_80 = ((MR_Word) ((MR_hl_field(2, Command_9, (MR_Integer) 0))));

        mdb__browse__run_browse_cmd_memory_addr_5_p_0(Debugger_8, STATE_VARIABLE_Info_0_34, MaybePath_80);
        *STATE_VARIABLE_Quit_33 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Command_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Path_15 = ((MR_Word) ((MR_hl_field(3, Command_9, (MR_Integer) 1))));
            MR_Word NewPwd_16;
            MR_Word Result_17;
            MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_34, (MR_Integer) 1))));
            MR_Word Var_50;

            mdb__term_paths__change_dir_3_p_0(Var_49, Path_15, &NewPwd_16);
            Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_34, (MR_Integer) 0))));
            mdb__term_paths__deref_subterm_3_p_0(Var_50, NewPwd_16, &Result_17);
            if (((MR_tag((MR_Word) Result_17)) == (MR_Integer) 1))
            {
              MR_Word OKPath_19 = ((MR_Word) ((MR_hl_field(1, Result_17, (MR_Integer) 0))));
              MR_Word ErrorDir_20 = ((MR_Word) ((MR_hl_field(1, Result_17, (MR_Integer) 1))));

              mdb__term_paths__report_deref_error_5_p_0(Debugger_8, OKPath_19, ErrorDir_20);
              *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
            }
            else
            {
              MR_Word Var_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_34, (MR_Integer) 0))));
              MR_Word Var_105 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_34, (MR_Integer) 2))) & (MR_Integer) 3);
              MR_Word Var_106 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_34, (MR_Integer) 3))));
              MR_Word Var_107 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_34, (MR_Integer) 4))));
              MR_Word Var_108 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_34, (MR_Integer) 5))));
              MR_Word Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_34, (MR_Integer) 6))));

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Info_35 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_103));
                MR_hl_field(0, base, 1) = ((MR_Box) (NewPwd_16));
                MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Var_105));
                MR_hl_field(0, base, 3) = ((MR_Box) (Var_106));
                MR_hl_field(0, base, 4) = ((MR_Box) (Var_107));
                MR_hl_field(0, base, 5) = ((MR_Box) (Var_108));
                MR_hl_field(0, base, 6) = ((MR_Box) (Var_109));
              }
            }
            *STATE_VARIABLE_Quit_33 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word MaybePath_85 = ((MR_Word) ((MR_hl_field(3, Command_9, (MR_Integer) 2))));
            MR_Word Var_172 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_34, (MR_Integer) 6))));
            MR_Word Var_174 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_34, (MR_Integer) 4))));
            MR_Word Var_175 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_34, (MR_Integer) 3))));
            MR_Word Var_176 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_34, (MR_Integer) 2))) & (MR_Integer) 3);
            MR_Word Var_177 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_34, (MR_Integer) 1))));
            MR_Word Var_178 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_34, (MR_Integer) 0))));
            MR_Unsigned packed_word_7 = (MR_Unsigned) ((MR_hl_field(3, Command_9, (MR_Integer) 1)));

            if ((MaybePath_85 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_64;

              {
                Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_64, 0) = (MR_Box) (packed_word_7);
                MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_177));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Info_35 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_178));
                MR_hl_field(0, base, 1) = ((MR_Box) (Var_177));
                MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Var_176));
                MR_hl_field(0, base, 3) = ((MR_Box) (Var_175));
                MR_hl_field(0, base, 4) = ((MR_Box) (Var_174));
                MR_hl_field(0, base, 5) = ((MR_Box) (Var_64));
                MR_hl_field(0, base, 6) = ((MR_Box) (Var_172));
              }
              *STATE_VARIABLE_Quit_33 = (MR_Integer) 1;
            }
            else
            {
              MR_Word SubResult_23;
              MR_Word Var_57;
              MR_Word Path_81 = ((MR_Word) ((MR_hl_field(1, MaybePath_85, (MR_Integer) 0))));
              MR_Word NewPwd_82;

              mdb__term_paths__change_dir_3_p_0(Var_177, Path_81, &NewPwd_82);
              Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_34, (MR_Integer) 0))));
              mdb__term_paths__deref_subterm_3_p_0(Var_57, NewPwd_82, &SubResult_23);
              if (((MR_tag((MR_Word) SubResult_23)) == (MR_Integer) 1))
              {
                mdb__browser_info__write_string_debugger_4_p_0(Debugger_8, (MR_String) "error: cannot track subterm\n");
                *STATE_VARIABLE_Quit_33 = (MR_Integer) 0;
                *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
              }
              else
              {
                MR_Word Var_59;
                MR_Word Var_128;
                MR_Word Var_129;
                MR_Word Var_130;
                MR_Word Var_131;
                MR_Word Var_132;
                MR_Word Var_134;

                {
                  Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_59, 0) = (MR_Box) (packed_word_7);
                  MR_hl_field(1, Var_59, 1) = ((MR_Box) (NewPwd_82));
                }
                Var_128 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_34, (MR_Integer) 0))));
                Var_129 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_34, (MR_Integer) 1))));
                Var_130 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_34, (MR_Integer) 2))) & (MR_Integer) 3);
                Var_131 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_34, (MR_Integer) 3))));
                Var_132 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_34, (MR_Integer) 4))));
                Var_134 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_34, (MR_Integer) 6))));
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_Info_35 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_128));
                  MR_hl_field(0, base, 1) = ((MR_Box) (Var_129));
                  MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Var_130));
                  MR_hl_field(0, base, 3) = ((MR_Box) (Var_131));
                  MR_hl_field(0, base, 4) = ((MR_Box) (Var_132));
                  MR_hl_field(0, base, 5) = ((MR_Box) (Var_59));
                  MR_hl_field(0, base, 6) = ((MR_Box) (Var_134));
                }
                *STATE_VARIABLE_Quit_33 = (MR_Integer) 1;
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word MaybeModeFunc_27;
            MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_34, (MR_Integer) 1))));
            MR_Word Path_88 = ((MR_Word) ((MR_hl_field(3, Command_9, (MR_Integer) 1))));
            MR_Word NewPwd_89;

            mdb__term_paths__change_dir_3_p_0(Var_67, Path_88, &NewPwd_89);
            MaybeModeFunc_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_34, (MR_Integer) 6))));
            mdb__browse__run_browse_cmd_mode_query_5_p_0(Debugger_8, MaybeModeFunc_27, NewPwd_89);
            *STATE_VARIABLE_Quit_33 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ParamCmd_29 = ((MR_Word) ((MR_hl_field(3, Command_9, (MR_Integer) 1))));

            mdb__browser_info__run_param_command_7_p_0(Debugger_8, ParamCmd_29, (MR_Integer) 1, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
            *STATE_VARIABLE_Quit_33 = (MR_Integer) 0;
          }
          break;
      }
      break;
  }
  if (((MR_tag((MR_Word) Debugger_8)) == (MR_Integer) 1))
  {
    MR_Word OutputStream_31 = ((MR_Word) ((MR_hl_field(1, Debugger_8, (MR_Integer) 0))));

    mdb__browser_info__send_term_to_socket_4_p_0(OutputStream_31, (MR_Word) ((MR_Unsigned) 4U));
  }
}

static void MR_CALL 
mdb__browse__run_browse_cmnd_help_3_p_0(
  MR_Word Debugger_4)
{
  MR_String HelpMessage_6;

  mercury__string__append_list_2_p_0((MR_Word) (MR_mkword(1, &mdb__browse_scalar_common_3[36])), &HelpMessage_6);
  mdb__browser_info__write_string_debugger_4_p_0(Debugger_4, HelpMessage_6);
}

static void MR_CALL 
mdb__browse__run_browse_cmd_mode_query_5_p_0(
  MR_Word Debugger_6,
  MR_Word MaybeModeFunc_7,
  MR_Word Dirs_8)
{
  if ((MaybeModeFunc_7 == (MR_Word) ((MR_Unsigned) 0U)))
    mdb__browser_info__write_string_debugger_4_p_0(Debugger_6, (MR_String) "Mode information not available.\n");
  else
  {
    MR_Word ModeFunc_10 = ((MR_Word) ((MR_hl_field(1, MaybeModeFunc_7, (MR_Integer) 0))));
    MR_Word Mode_11;
    MR_String ModeStr_12;
    MR_String Var_15;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, ModeFunc_10, (MR_Integer) 1))));
    MR_Box conv1_Mode_11;

    conv1_Mode_11 = func_0(((MR_Box) (ModeFunc_10)), ((MR_Box) (Dirs_8)));
    Mode_11 = ((MR_Word) (conv1_Mode_11));
    ModeStr_12 = ((&mdb__browse_vector_common_6[0 + Mode_11]))->mdb__browse__vector_common_type_6_0__vct_6_f_0;
    Var_15 = mercury__string__f_43_43_2_f_0(ModeStr_12, (MR_String) "\n");
    mdb__browser_info__write_string_debugger_4_p_0(Debugger_6, Var_15);
  }
}

static void MR_CALL 
mdb__browse__run_browse_cmd_memory_addr_5_p_0(
  MR_Word Debugger_6,
  MR_Word Info_7,
  MR_Word MaybePath_8)
{
  MR_Word Dirs0_10 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 1))));
  MR_Word Dirs_11;
  MR_Word DerefResult_13;
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));

  if ((MaybePath_8 == (MR_Word) ((MR_Unsigned) 0U)))
    Dirs_11 = Dirs0_10;
  else
  {
    MR_Word Path_12 = ((MR_Word) ((MR_hl_field(1, MaybePath_8, (MR_Integer) 0))));

    mdb__term_paths__change_dir_3_p_0(Dirs0_10, Path_12, &Dirs_11);
  }
  mdb__term_paths__deref_subterm_3_p_0(Var_33, Dirs_11, &DerefResult_13);
  if (((MR_tag((MR_Word) DerefResult_13)) == (MR_Integer) 1))
  {
    MR_Word OKPath_22 = ((MR_Word) ((MR_hl_field(1, DerefResult_13, (MR_Integer) 0))));
    MR_Word ErrorDir_23 = ((MR_Word) ((MR_hl_field(1, DerefResult_13, (MR_Integer) 1))));

    mdb__term_paths__report_deref_error_5_p_0(Debugger_6, OKPath_22, ErrorDir_23);
    mdb__browser_info__nl_debugger_3_p_0(Debugger_6);
  }
  else
  {
    MR_Word BrowserTerm_14 = ((MR_Word) ((MR_hl_field(0, DerefResult_13, (MR_Integer) 0))));
    MR_String Str_18;

    if (((MR_tag((MR_Word) BrowserTerm_14)) == (MR_Integer) 0))
    {
      MR_Word Univ_15 = ((MR_Word) ((MR_hl_field(0, BrowserTerm_14, (MR_Integer) 0))));
      MR_Box Value_16;
      MR_Integer Addr_17;
      MR_Unsigned Var_48;
      MR_String Var_49;
      MR_String Var_56;
      MR_Word TypeInfo_45_45;

      Value_16 = mercury__univ__univ_value_1_f_0(&TypeInfo_45_45, Univ_15);
{
#define MR_PROC_LABEL mdb__browse__run_browse_cmd_memory_addr_5_p_0

	MR_Word Value;
	MR_Integer Addr;

	Value = (MR_Word) Value_16 ;
		{

    Addr = (MR_Integer) Value;


		;}
#undef MR_PROC_LABEL
	Addr_17  = Addr;
}
      mercury__string__format__format_cast_int_to_uint_2_p_0(Addr_17, &Var_48);
      mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&mdb__browse_scalar_common_2[3]), (MR_Integer) 2, Var_48, &Var_49);
      Var_56 = mercury__string__f_43_43_2_f_0(Var_49, (MR_String) "\n");
      Str_18 = mercury__string__f_43_43_2_f_0((MR_String) "addr = ", Var_56);
    }
    else
      Str_18 = (MR_String) "synthetic terms have no addresses\n";
    mdb__browser_info__write_string_debugger_4_p_0(Debugger_6, Str_18);
  }
}

static MR_bool MR_CALL 
mdb__browse__run_browse_cmd_print_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_Format_3;

  succeeded = mdb__browse__bool_format_option_is_true_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Format_3);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_Format_3));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
mdb__browse__run_browse_cmd_print_7_p_0(
  MR_Word Debugger_8,
  MR_Word Caller_9,
  MR_Word MaybeMaybeOptionTable_10,
  MR_Word Info_11,
  MR_Word MaybePath_12)
{
  MR_bool succeeded;

  if ((MaybeMaybeOptionTable_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Format_14;

    mdb__browser_info__get_format_4_p_0(Info_11, Caller_9, (MR_Word) ((MR_Unsigned) 0U), &Format_14);
    mdb__print_term__portray_maybe_path_7_p_0(Debugger_8, Caller_9, Format_14, Info_11, MaybePath_12);
  }
  else
  {
    MR_Word MaybeOptionTable_15 = ((MR_Word) ((MR_hl_field(1, MaybeMaybeOptionTable_10, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) MaybeOptionTable_15)) == (MR_Integer) 1))
    {
      MR_String Msg_34 = ((MR_String) ((MR_hl_field(1, MaybeOptionTable_15, (MR_Integer) 0))));

      mdb__browser_info__write_string_debugger_4_p_0(Debugger_8, Msg_34);
      mdb__browser_info__write_string_debugger_4_p_0(Debugger_8, (MR_String) "\n");
    }
    else
    {
      MR_Word OptionTable_16 = ((MR_Word) ((MR_hl_field(0, MaybeOptionTable_15, (MR_Integer) 0))));
      MR_Word OptionAssocList_35;
      MR_Word TrueFormatOptions_36;

      mercury__map__to_assoc_list_2_p_0((MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_16, &OptionAssocList_35);
      mercury__list__filter_map_3_p_0((MR_Word) (&mdb__browse_scalar_common_1[0]), (MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0), (MR_Word) (&mdb__browse_scalar_common_1[1]), OptionAssocList_35, &TrueFormatOptions_36);
      if ((TrueFormatOptions_36 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word MaybeFormat_18 = ((MR_Word) ((MR_hl_field(0, (MR_Word) (&mdb__browse_scalar_common_2[1]), (MR_Integer) 0))));
        MR_Word Format_31;

        mdb__browser_info__get_format_4_p_0(Info_11, Caller_9, MaybeFormat_18, &Format_31);
        mdb__print_term__portray_maybe_path_7_p_0(Debugger_8, Caller_9, Format_31, Info_11, MaybePath_12);
      }
      else
      {
        MR_Word Var_43 = ((MR_Word) ((MR_hl_field(1, TrueFormatOptions_36, (MR_Integer) 1))));
        MR_Word Var_44 = ((MR_Word) ((MR_hl_field(1, TrueFormatOptions_36, (MR_Integer) 0))));
        MR_Word FormatResult_49;

        if ((Var_43 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Format_37 = ((&mdb__browse_vector_common_5[0 + Var_44]))->mdb__browse__vector_common_type_5_0__vct_5_f_0;
          MR_Word Var_39;

          {
            Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_39, 0) = ((MR_Box) (Format_37));
          }
          {
            FormatResult_49 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, FormatResult_49, 0) = ((MR_Box) (Var_39));
          }
        }
        else
          FormatResult_49 = (MR_Word) (MR_mkword(1, &mdb__browse_scalar_common_2[2]));
        if (((MR_tag((MR_Word) FormatResult_49)) == (MR_Integer) 1))
        {
          MR_String Msg_19 = ((MR_String) ((MR_hl_field(1, FormatResult_49, (MR_Integer) 0))));

          mdb__browser_info__write_string_debugger_4_p_0(Debugger_8, Msg_19);
          mdb__browser_info__write_string_debugger_4_p_0(Debugger_8, (MR_String) "\n");
        }
        else
        {
          MR_Word MaybeFormat_45 = ((MR_Word) ((MR_hl_field(0, FormatResult_49, (MR_Integer) 0))));
          MR_Word Format_46;

          mdb__browser_info__get_format_4_p_0(Info_11, Caller_9, MaybeFormat_45, &Format_46);
          mdb__print_term__portray_maybe_path_7_p_0(Debugger_8, Caller_9, Format_46, Info_11, MaybePath_12);
        }
      }
    }
  }
}

void MR_CALL 
mdb__browse__print_browser_term_format_7_p_0(
  MR_Word OutputStream_8,
  MR_Word Caller_9,
  MR_Word Format_10,
  MR_Word Term_11,
  MR_Word State_12)
{
  MR_bool succeeded;
  MR_Word Var_16;
  MR_Word Info_18;
  MR_Word Format_19;
  MR_Word Var_22;

  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (Format_10));
  }
  Info_18 = mdb__browser_info__browser_info_init_5_f_0(Term_11, Caller_9, Var_16, (MR_Word) ((MR_Unsigned) 0U), State_12);
  mdb__browser_info__get_format_4_p_0(Info_18, Caller_9, Var_16, &Format_19);
  succeeded = ((MR_tag((MR_Word) Term_11)) == (MR_Integer) 0);
  if (succeeded)
    succeeded = (Format_19 != (MR_Integer) 0);
  if (succeeded)
    mercury__io__nl_3_p_0(OutputStream_8);
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (OutputStream_8));
  }
  mdb__print_term__portray_6_p_0(Var_22, Caller_9, Format_19, Info_18);
}

void MR_CALL 
mdb__browse__print_browser_term_6_p_0(
  MR_Word OutputStream_7,
  MR_Word Caller_8,
  MR_Word Term_9,
  MR_Word State_10)
{
  MR_bool succeeded;
  MR_Word Info_16;
  MR_Word Format_17;
  MR_Word Var_20;

  Info_16 = mdb__browser_info__browser_info_init_5_f_0(Term_9, Caller_8, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), State_10);
  mdb__browser_info__get_format_4_p_0(Info_16, Caller_8, (MR_Word) ((MR_Unsigned) 0U), &Format_17);
  succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
  if (succeeded)
    succeeded = (Format_17 != (MR_Integer) 0);
  if (succeeded)
    mercury__io__nl_3_p_0(OutputStream_7);
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (OutputStream_7));
  }
  mdb__print_term__portray_6_p_0(Var_20, Caller_8, Format_17, Info_16);
}

void mercury__mdb__browse__init(void)
{
}

void mercury__mdb__browse__init_type_tables(void)
{
}

void mercury__mdb__browse__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__browse__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdb.browse.
