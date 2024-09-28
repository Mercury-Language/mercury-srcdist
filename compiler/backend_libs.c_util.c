/*
** Automatically generated from `c_util.m'
** by the Mercury compiler,
** version rotd-2024-09-28
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


// :- module backend_libs.c_util.
// :- implementation.

/*
INIT mercury__backend_libs__c_util__init
ENDINIT
*/

#include "backend_libs.c_util.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "int32.mih"
#include "int64.mih"
#include "integer.mih"
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
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "hlds.hlds_pred.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__c_util__cord__pti_cord_1__plain_builtin__type_ctor_info_character_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__c_util__list__pti_list_1__plain_builtin__type_ctor_info_character_0;

static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_maybe_set_line_numbers_0_0;

static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_maybe_set_line_numbers_0_1;

static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_ordinal_ordered_maybe_set_line_numbers_0[2];

static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_name_ordered_maybe_set_line_numbers_0[2];

static const MR_Integer backend_libs__c_util__backend_libs__c_util__functor_number_map_maybe_set_line_numbers_0[2];

static const MR_FA_TypeInfo_Struct1 backend_libs__c_util__list__ti_list_1builtin__type_ctor_info_string_0;

static void MR_CALL 
backend_libs__c_util__output_env_var_init_4_p_0(
  MR_Word Stream_5,
  MR_String EnvVarName_6);

static void MR_CALL 
backend_libs__c_util__can_print_without_quoting_4_p_0(
  MR_String Str_1,
  MR_Word * CanPrintWithoutQuoting_2);

static void MR_CALL 
backend_libs__c_util__output_init_c_comment_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__c_util__output_to_be_quoted_multi_string_csharp_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
backend_libs__c_util__output_to_be_quoted_multi_string_java_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
backend_libs__c_util__output_to_be_quoted_multi_string_c_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
backend_libs__c_util__output_to_be_quoted_string_loop_csharp_5_p_0(
  MR_Word Stream_6,
  MR_String Str_7,
  MR_Integer Cur_8);

static MR_String MR_CALL 
backend_libs__c_util__prepare_to_quote_char_csharp_1_f_0(
  MR_Char Char_3);

static void MR_CALL 
backend_libs__c_util__output_to_be_quoted_string_loop_java_5_p_0(
  MR_Word Stream_6,
  MR_String Str_7,
  MR_Integer Cur_8);

static MR_String MR_CALL 
backend_libs__c_util__prepare_to_quote_char_java_1_f_0(
  MR_Char Char_3);

static void MR_CALL 
backend_libs__c_util__output_to_be_quoted_mmf_string_loop_c_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__c_util__output_to_be_quoted_mmf_string_loop_c_5_p_0(
  MR_Word Stream_6,
  MR_String Str_7,
  MR_Integer Cur_8);

static void MR_CALL 
backend_libs__c_util__output_to_be_quoted_string_loop_c_5_p_0(
  MR_Word Stream_6,
  MR_String Str_7,
  MR_Integer Cur_8);

static void MR_CALL 
backend_libs__c_util__quote_one_char_acc_c_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
backend_libs__c_util__quote_one_char_acc_c_3_p_0(
  MR_Char Char_4,
  MR_Word STATE_VARIABLE_CharsCord_0_10,
  MR_Word * STATE_VARIABLE_CharsCord_11);

static void MR_CALL 
backend_libs__c_util__octal_escape_any_int_2_p_0(
  MR_Integer Int_3,
  MR_Word * EscapeCodeChars_4);

static void MR_CALL 
backend_libs__c_util__prepare_to_quote_string_c_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__c_util__quote_string_c_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__c_util____Unify____maybe_set_line_numbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__c_util____Compare____maybe_set_line_numbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__c_util____Unify____multi_string_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__c_util____Compare____multi_string_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box backend_libs__c_util_scalar_common_1[16][2];

static /* final */ const MR_Box backend_libs__c_util_scalar_common_2[3][1];

static /* final */ const MR_Box backend_libs__c_util_scalar_common_3[1][6];

static /* final */ const MR_Box backend_libs__c_util_scalar_common_4[3][3];

static /* final */ const MR_Box backend_libs__c_util_scalar_common_5[1][5];

static /* final */ const MR_Box backend_libs__c_util_scalar_common_6[2][7];




static /* final */ const MR_Box backend_libs__c_util_scalar_common_1[16][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "*/\n")),
    ((MR_Box) (MR_mkword(1, &backend_libs__c_util_scalar_common_1[3])))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) "** END_OF_C_GRADE_INFO\n")),
    ((MR_Box) (MR_mkword(1, &backend_libs__c_util_scalar_common_1[4])))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "**\n")),
    ((MR_Box) (MR_mkword(1, &backend_libs__c_util_scalar_common_1[5])))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(1, &backend_libs__c_util_scalar_common_1[6])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 55)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 48)),
    ((MR_Box) (MR_mkword(1, &backend_libs__c_util_scalar_common_1[8])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 48)),
    ((MR_Box) (MR_mkword(1, &backend_libs__c_util_scalar_common_1[9])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 92)),
    ((MR_Box) (MR_mkword(1, &backend_libs__c_util_scalar_common_1[10])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 51)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 49)),
    ((MR_Box) (MR_mkword(1, &backend_libs__c_util_scalar_common_1[12])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 48)),
    ((MR_Box) (MR_mkword(1, &backend_libs__c_util_scalar_common_1[13])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 92)),
    ((MR_Box) (MR_mkword(1, &backend_libs__c_util_scalar_common_1[14])))
  },
};

static /* final */ const MR_Box backend_libs__c_util_scalar_common_2[3][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { (MR_Box) (((((MR_Unsigned) 1U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   2 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 1U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box backend_libs__c_util_scalar_common_3[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&backend_libs__c_util__cord__pti_cord_1__plain_builtin__type_ctor_info_character_0)),
    ((MR_Box) (&backend_libs__c_util__cord__pti_cord_1__plain_builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box backend_libs__c_util_scalar_common_4[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&backend_libs__c_util_scalar_common_3[0])),
    ((MR_Box) (backend_libs__c_util__quote_string_c_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&backend_libs__c_util_scalar_common_3[0])),
    ((MR_Box) (backend_libs__c_util__prepare_to_quote_string_c_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&backend_libs__c_util_scalar_common_5[0])),
    ((MR_Box) (backend_libs__c_util__quote_one_char_acc_c_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__c_util_scalar_common_5[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__c_util__list__pti_list_1__plain_builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box backend_libs__c_util_scalar_common_6[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "backend_libs.c_util.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__c_util__cord__pti_cord_1__plain_builtin__type_ctor_info_character_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__c_util__list__pti_list_1__plain_builtin__type_ctor_info_character_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0) }
};

static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_maybe_set_line_numbers_0_0 = {
  (MR_String) "do_not_set_line_numbers",
  INT32_C(0)
};

static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_maybe_set_line_numbers_0_1 = {
  (MR_String) "set_line_numbers",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_ordinal_ordered_maybe_set_line_numbers_0[2] = {
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_maybe_set_line_numbers_0_0,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_maybe_set_line_numbers_0_1
};

static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_name_ordered_maybe_set_line_numbers_0[2] = {
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_maybe_set_line_numbers_0_0,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_maybe_set_line_numbers_0_1
};

static const MR_Integer backend_libs__c_util__backend_libs__c_util__functor_number_map_maybe_set_line_numbers_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct backend_libs__c_util__backend_libs__c_util__type_ctor_info_maybe_set_line_numbers_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__c_util____Unify____maybe_set_line_numbers_0_0_10001)),
  ((MR_Box) (backend_libs__c_util____Compare____maybe_set_line_numbers_0_0_10001)),
  (MR_String) "backend_libs.c_util",
  (MR_String) "maybe_set_line_numbers",
  { backend_libs__c_util__backend_libs__c_util__enum_name_ordered_maybe_set_line_numbers_0 },
  { backend_libs__c_util__backend_libs__c_util__enum_ordinal_ordered_maybe_set_line_numbers_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  backend_libs__c_util__backend_libs__c_util__functor_number_map_maybe_set_line_numbers_0,

};

static const MR_FA_TypeInfo_Struct1 backend_libs__c_util__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

const MR_TypeCtorInfo_Struct backend_libs__c_util__backend_libs__c_util__type_ctor_info_multi_string_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__c_util____Unify____multi_string_0_0_10001)),
  ((MR_Box) (backend_libs__c_util____Compare____multi_string_0_0_10001)),
  (MR_String) "backend_libs.c_util",
  (MR_String) "multi_string",
  { NULL },
  { (MR_PseudoTypeInfo) (&backend_libs__c_util__list__ti_list_1builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
backend_libs__c_util____Compare____multi_string_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__c_util_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
backend_libs__c_util____Unify____multi_string_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&backend_libs__c_util_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
backend_libs__c_util____Compare____maybe_set_line_numbers_0_0(
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

MR_bool MR_CALL 
backend_libs__c_util____Unify____maybe_set_line_numbers_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
backend_libs__c_util__output_env_var_init_4_p_0(
  MR_Word Stream_5,
  MR_String EnvVarName_6)
{
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "ENVVAR ");
  mercury__io__write_string_4_p_0(Stream_5, EnvVarName_6);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n");
}

static void MR_CALL 
backend_libs__c_util__can_print_without_quoting_4_p_0(
  MR_String Str_1,
  MR_Word * CanPrintWithoutQuoting_2)
{
{
#define MR_PROC_LABEL backend_libs__c_util__can_print_without_quoting_4_p_0

	MR_String Str;
	MR_Word CanPrintWithoutQuoting;

	Str = Str_1 ;
		{
{
    static  MR_String   last_string;
    static  MR_bool     last_can_print_without_quoting;
    MR_bool             can_print_without_quoting;
    const char          *s;
    int                 len;

    /* We cache the result of the last decision. */
    if (Str == last_string) {
        CanPrintWithoutQuoting = last_can_print_without_quoting;
    } else {
        can_print_without_quoting = MR_TRUE;

        for (s = Str; *s != '\0'; s++) {
            if (! (isalnum((int) *s) || *s == '_' || *s == '/' || *s == '.')) {
                can_print_without_quoting = MR_FALSE;
                break;
            }
        }

        len = s - Str;
        if (len >= 512) {
            can_print_without_quoting = MR_FALSE;
        }

        CanPrintWithoutQuoting = can_print_without_quoting;

        last_string = Str;
        last_can_print_without_quoting = CanPrintWithoutQuoting;
    }
}

		;}
#undef MR_PROC_LABEL
	*CanPrintWithoutQuoting_2  = CanPrintWithoutQuoting;
}
}

MR_String MR_CALL 
backend_libs__c_util__hex_hash32_1_f_0(
  MR_String S0_3)
{
  MR_String S_4;
  MR_Integer Hash_5;
  MR_Integer Hi_6;
  MR_Integer Lo_7;
  MR_Integer Var_8;
  MR_Unsigned Var_19;
  MR_String Var_20;
  MR_Unsigned Var_29;
  MR_String Var_30;

  Hash_5 = mercury__string__hash_1_f_0(S0_3);
  Var_8 = mercury__int__f_62_62_2_f_0(Hash_5, (MR_Integer) 16);
  Hi_6 = (Var_8 & (MR_Integer) 65535);
  Lo_7 = (Hash_5 & (MR_Integer) 65535);
  mercury__string__format__format_cast_int_to_uint_2_p_0(Lo_7, &Var_19);
  mercury__string__format__format_uint_component_width_noprec_5_p_0((MR_Word) (&backend_libs__c_util_scalar_common_2[2]), (MR_Integer) 4, (MR_Integer) 2, Var_19, &Var_20);
  mercury__string__format__format_cast_int_to_uint_2_p_0(Hi_6, &Var_29);
  mercury__string__format__format_uint_component_width_noprec_5_p_0((MR_Word) (&backend_libs__c_util_scalar_common_2[2]), (MR_Integer) 4, (MR_Integer) 2, Var_29, &Var_30);
  S_4 = mercury__string__f_43_43_2_f_0(Var_30, Var_20);
  return S_4;
}

MR_bool MR_CALL 
backend_libs__c_util__is_valid_c_identifier_1_p_0(
  MR_String S_2)
{
  MR_bool succeeded;
  MR_Char Start_3;

  succeeded = mercury__string__index_3_p_0(S_2, (MR_Integer) 0, &Start_3);
  if (succeeded)
  {
    succeeded = mercury__char__is_alpha_or_underscore_1_p_0(Start_3);
    if (succeeded)
      succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(S_2);
  }
  return succeeded;
}

void MR_CALL 
backend_libs__c_util__output_pragma_pack_pop_3_p_0(
  MR_Word Stream_4)
{
  mercury__io__write_string_4_p_0(Stream_4, (MR_String) "#ifdef MR_MSVC\n");
  mercury__io__write_string_4_p_0(Stream_4, (MR_String) "#pragma pack(pop)\n");
  mercury__io__write_string_4_p_0(Stream_4, (MR_String) "#endif\n");
}

void MR_CALL 
backend_libs__c_util__output_pragma_pack_push_3_p_0(
  MR_Word Stream_4)
{
  mercury__io__write_string_4_p_0(Stream_4, (MR_String) "\n#ifdef MR_MSVC\n");
  mercury__io__write_string_4_p_0(Stream_4, (MR_String) "#pragma pack(push, MR_BYTES_PER_WORD)\n");
  mercury__io__write_string_4_p_0(Stream_4, (MR_String) "#endif\n");
}

static void MR_CALL 
backend_libs__c_util__output_init_c_comment_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  backend_libs__c_util__output_env_var_init_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
}

void MR_CALL 
backend_libs__c_util__output_init_c_comment_7_p_0(
  MR_Word Stream_8,
  MR_Word ModuleName_9,
  MR_Word UserInitPredCNames_10,
  MR_Word UserFinalPredCNames_11,
  MR_Word EnvVarNames_12)
{
  MR_String ModuleInitName_14;
  MR_Word Var_38;
  MR_Box conv0_STATE_VARIABLE_IO_39_39;

  ModuleInitName_14 = parse_tree__prog_foreign__make_init_name_1_f_0(ModuleName_9);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "/*\n");
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "INIT ");
  mercury__io__write_string_4_p_0(Stream_8, ModuleInitName_14);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "init\n");
  if (!((UserInitPredCNames_10 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "REQUIRED_INIT ");
    mercury__io__write_string_4_p_0(Stream_8, ModuleInitName_14);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "required_init\n");
  }
  if (!((UserFinalPredCNames_11 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "REQUIRED_FINAL ");
    mercury__io__write_string_4_p_0(Stream_8, ModuleInitName_14);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "required_final\n");
  }
  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (&backend_libs__c_util_scalar_common_6[1]));
    MR_hl_field(0, Var_38, 1) = ((MR_Box) (backend_libs__c_util__output_init_c_comment_7_p_0_1));
    MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_38, 3) = ((MR_Box) (Stream_8));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_38, EnvVarNames_12, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_39_39);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "ENDINIT\n");
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "*/\n\n");
}

void MR_CALL 
backend_libs__c_util__output_c_file_intro_and_grade_7_p_0(
  MR_Word Globals_8,
  MR_Word Stream_9,
  MR_String SourceFileName_10,
  MR_String Version_11,
  MR_String Fullarch_12)
{
  MR_Integer NumPtagBits_14;
  MR_String NumPtagBitsStr_15;
  MR_Word UnboxedFloat_16;
  MR_String UnboxedFloatStr_17;
  MR_Word UnboxedInt64s_18;
  MR_String UnboxedInt64sStr_19;
  MR_Word PregeneratedDist_20;
  MR_String PregeneratedDistStr_21;
  MR_Word HighLevelCode_22;
  MR_String HighLevelCodeStr_23;
  MR_Word Var_31;
  MR_Word Var_34;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_39;
  MR_Word Var_41;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_46;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_51;
  MR_Word Var_53;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_Word Var_59;
  MR_Word Var_61;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_66;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_71;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_76;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_81;
  MR_Word Var_83;

  libs__globals__lookup_int_option_3_p_0(Globals_8, (MR_Integer) 306, &NumPtagBits_14);
  mercury__string__int_to_string_2_p_0(NumPtagBits_14, &NumPtagBitsStr_15);
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 310, &UnboxedFloat_16);
  switch (UnboxedFloat_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      UnboxedFloatStr_17 = (MR_String) "no";
      break;
    case (MR_Integer) 1:
      UnboxedFloatStr_17 = (MR_String) "yes";
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 311, &UnboxedInt64s_18);
  switch (UnboxedInt64s_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      UnboxedInt64sStr_19 = (MR_String) "no";
      break;
    case (MR_Integer) 1:
      UnboxedInt64sStr_19 = (MR_String) "yes";
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 293, &PregeneratedDist_20);
  switch (PregeneratedDist_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      PregeneratedDistStr_21 = (MR_String) "no";
      break;
    case (MR_Integer) 1:
      PregeneratedDistStr_21 = (MR_String) "yes";
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 330, &HighLevelCode_22);
  switch (HighLevelCode_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HighLevelCodeStr_23 = (MR_String) "no";
      break;
    case (MR_Integer) 1:
      HighLevelCodeStr_23 = (MR_String) "yes";
      break;
  }
  {
    Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_83, 0) = ((MR_Box) (HighLevelCodeStr_23));
    MR_hl_field(1, Var_83, 1) = ((MR_Box) (MR_mkword(1, &backend_libs__c_util_scalar_common_1[7])));
  }
  {
    Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_81, 0) = ((MR_Box) ((MR_String) "** HIGHLEVEL_CODE="));
    MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_83));
  }
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) ((MR_String) "\n"));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_81));
  }
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) (PregeneratedDistStr_21));
    MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_79));
  }
  {
    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_76, 0) = ((MR_Box) ((MR_String) "** PREGENERATED_DIST="));
    MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_78));
  }
  {
    Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_74, 0) = ((MR_Box) ((MR_String) "\n"));
    MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_76));
  }
  {
    Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_73, 0) = ((MR_Box) (UnboxedInt64sStr_19));
    MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_74));
  }
  {
    Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_71, 0) = ((MR_Box) ((MR_String) "** UNBOXED_INT64S="));
    MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_73));
  }
  {
    Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_69, 0) = ((MR_Box) ((MR_String) "\n"));
    MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_71));
  }
  {
    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_68, 0) = ((MR_Box) (UnboxedFloatStr_17));
    MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_69));
  }
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) ((MR_String) "** UNBOXED_FLOAT="));
    MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_68));
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) ((MR_String) "\n"));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_66));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (NumPtagBitsStr_15));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_64));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) ((MR_String) "** TAG_BITS="));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_63));
  }
  {
    Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_59, 0) = ((MR_Box) ((MR_String) "**\n"));
    MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_61));
  }
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) ((MR_String) "** the generation of this C file were\n"));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_59));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) ((MR_String) "** The autoconfigured grade settings governing\n"));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_57));
  }
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) ((MR_String) "**\n"));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_55));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) ((MR_String) "** Do not edit.\n"));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_53));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) ((MR_String) ".\n"));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_51));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (Fullarch_12));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_49));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) ((MR_String) "** configured for "));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_48));
  }
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) ((MR_String) "\n"));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_46));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (Version_11));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_44));
  }
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) ((MR_String) "** version "));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_43));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) ((MR_String) "** by the Mercury compiler,\n"));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_41));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) ((MR_String) "\'\n"));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_39));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (SourceFileName_10));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_37));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) ((MR_String) "** Automatically generated from \140"));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_36));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) ((MR_String) "/*\n"));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_34));
  }
  mercury__io__write_strings_4_p_0(Stream_9, Var_31);
}

void MR_CALL 
backend_libs__c_util__unary_prefix_op_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_String) "MR_tag";
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_String) "MR_strip_tag";
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_String) "MR_mkbody";
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_String) "MR_unmkbody";
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_String) "!";
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_String) "MR_hash_string";
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_String) "MR_hash_string2";
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_String) "MR_hash_string3";
          break;
        case (MR_Integer) 8:
          *HeadVar__2_2 = (MR_String) "MR_hash_string4";
          break;
        case (MR_Integer) 9:
          *HeadVar__2_2 = (MR_String) "MR_hash_string5";
          break;
        case (MR_Integer) 10:
          *HeadVar__2_2 = (MR_String) "MR_hash_string6";
          break;
        case (MR_Integer) 11:
          *HeadVar__2_2 = (MR_String) "MR_dword_float_get_word0";
          break;
        case (MR_Integer) 12:
          *HeadVar__2_2 = (MR_String) "MR_dword_float_get_word1";
          break;
        case (MR_Integer) 13:
          *HeadVar__2_2 = (MR_String) "MR_dword_int64_get_word0";
          break;
        case (MR_Integer) 14:
          *HeadVar__2_2 = (MR_String) "MR_dword_int64_get_word1";
          break;
        case (MR_Integer) 15:
          *HeadVar__2_2 = (MR_String) "MR_dword_uint64_get_word0";
          break;
        case (MR_Integer) 16:
          *HeadVar__2_2 = (MR_String) "MR_dword_uint64_get_word1";
          break;
      }
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_String) "~";
      break;
  }
}

void MR_CALL 
backend_libs__c_util__output_float_literal_4_p_0(
  MR_Word Stream_5,
  MR_Float Float_6)
{
  MR_String Var_10;

  mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) (&backend_libs__c_util_scalar_common_2[1]), (MR_Integer) 17, (MR_Integer) 4, Float_6, &Var_10);
  mercury__io__write_string_4_p_0(Stream_5, Var_10);
}

MR_String MR_CALL 
backend_libs__c_util__make_float_literal_1_f_0(
  MR_Float Float_3)
{
  MR_String HeadVar__2_2;

  mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) (&backend_libs__c_util_scalar_common_2[1]), (MR_Integer) 17, (MR_Integer) 4, Float_3, &HeadVar__2_2);
  return HeadVar__2_2;
}

void MR_CALL 
backend_libs__c_util__output_uint64_as_c_expr_4_p_0(
  MR_Word Stream_5,
  uint64_t N_6)
{
  MR_String Var_19;

  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "UINT64_C(");
  mercury__string__format__format_uint64_component_nowidth_noprec_4_p_0((MR_Word) (&backend_libs__c_util_scalar_common_2[0]), (MR_Integer) 1, N_6, &Var_19);
  mercury__io__write_string_4_p_0(Stream_5, Var_19);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ")");
}

MR_String MR_CALL 
backend_libs__c_util__make_uint64_literal_1_f_0(
  uint64_t N_3)
{
  MR_String Literal_4;
  MR_String Var_11;
  MR_String Var_18;

  mercury__string__format__format_uint64_component_nowidth_noprec_4_p_0((MR_Word) (&backend_libs__c_util_scalar_common_2[0]), (MR_Integer) 1, N_3, &Var_11);
  Var_18 = mercury__string__f_43_43_2_f_0(Var_11, (MR_String) ")");
  Literal_4 = mercury__string__f_43_43_2_f_0((MR_String) "UINT64_C(", Var_18);
  return Literal_4;
}

void MR_CALL 
backend_libs__c_util__output_int64_as_c_expr_4_p_0(
  MR_Word Stream_5,
  int64_t N_6)
{
  MR_bool succeeded;
  int64_t Var_17;

  Var_17 = mercury__int64__min_int64_0_f_0();
  succeeded = (N_6 == Var_17);
  if (succeeded)
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "INT64_MIN");
  else
  {
    MR_String Var_21;

    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "INT64_C(");
    mercury__string__format__format_signed_int64_component_nowidth_noprec_3_p_0((MR_Word) (&backend_libs__c_util_scalar_common_2[0]), N_6, &Var_21);
    mercury__io__write_string_4_p_0(Stream_5, Var_21);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ")");
  }
}

MR_String MR_CALL 
backend_libs__c_util__make_int64_literal_1_f_0(
  int64_t N_3)
{
  MR_bool succeeded;
  MR_String Literal_4;
  int64_t Var_9;

  Var_9 = mercury__int64__min_int64_0_f_0();
  succeeded = (N_3 == Var_9);
  if (succeeded)
    Literal_4 = (MR_String) "INT64_MIN";
  else
  {
    MR_String Var_11;
    MR_String Var_18;

    mercury__string__format__format_signed_int64_component_nowidth_noprec_3_p_0((MR_Word) (&backend_libs__c_util_scalar_common_2[0]), N_3, &Var_11);
    Var_18 = mercury__string__f_43_43_2_f_0(Var_11, (MR_String) ")");
    Literal_4 = mercury__string__f_43_43_2_f_0((MR_String) "INT64_C(", Var_18);
  }
  return Literal_4;
}

void MR_CALL 
backend_libs__c_util__output_uint32_as_c_expr_4_p_0(
  MR_Word Stream_5,
  uint32_t N_6)
{
  MR_Unsigned Var_19;
  MR_String Var_20;

  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "UINT32_C(");
  mercury__string__format__format_cast_uint32_to_uint_2_p_0(N_6, &Var_19);
  mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&backend_libs__c_util_scalar_common_2[0]), (MR_Integer) 1, Var_19, &Var_20);
  mercury__io__write_string_4_p_0(Stream_5, Var_20);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ")");
}

void MR_CALL 
backend_libs__c_util__output_int32_as_c_expr_4_p_0(
  MR_Word Stream_5,
  int32_t N_6)
{
  MR_bool succeeded;
  int32_t Var_17;

  Var_17 = mercury__int32__min_int32_0_f_0();
  succeeded = (N_6 == Var_17);
  if (succeeded)
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "INT32_MIN");
  else
  {
    MR_Integer Var_21;
    MR_String Var_22;

    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "INT32_C(");
    mercury__string__format__format_cast_int32_to_int_2_p_0(N_6, &Var_21);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&backend_libs__c_util_scalar_common_2[0]), Var_21, &Var_22);
    mercury__io__write_string_4_p_0(Stream_5, Var_22);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ")");
  }
}

void MR_CALL 
backend_libs__c_util__output_uint16_as_c_expr_4_p_0(
  MR_Word Stream_5,
  uint16_t N_6)
{
  MR_Unsigned Var_19;
  MR_String Var_20;

  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "UINT16_C(");
  mercury__string__format__format_cast_uint16_to_uint_2_p_0(N_6, &Var_19);
  mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&backend_libs__c_util_scalar_common_2[0]), (MR_Integer) 1, Var_19, &Var_20);
  mercury__io__write_string_4_p_0(Stream_5, Var_20);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ")");
}

void MR_CALL 
backend_libs__c_util__output_int16_as_c_expr_4_p_0(
  MR_Word Stream_5,
  int16_t N_6)
{
  MR_Integer Var_18;
  MR_String Var_19;

  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "INT16_C(");
  mercury__string__format__format_cast_int16_to_int_2_p_0(N_6, &Var_18);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&backend_libs__c_util_scalar_common_2[0]), Var_18, &Var_19);
  mercury__io__write_string_4_p_0(Stream_5, Var_19);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ")");
}

void MR_CALL 
backend_libs__c_util__output_uint8_as_c_expr_4_p_0(
  MR_Word Stream_5,
  uint8_t N_6)
{
  MR_Unsigned Var_19;
  MR_String Var_20;

  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "UINT8_C(");
  mercury__string__format__format_cast_uint8_to_uint_2_p_0(N_6, &Var_19);
  mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&backend_libs__c_util_scalar_common_2[0]), (MR_Integer) 1, Var_19, &Var_20);
  mercury__io__write_string_4_p_0(Stream_5, Var_20);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ")");
}

void MR_CALL 
backend_libs__c_util__output_int8_as_c_expr_4_p_0(
  MR_Word Stream_5,
  int8_t N_6)
{
  MR_Integer Var_18;
  MR_String Var_19;

  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "INT8_C(");
  mercury__string__format__format_cast_int8_to_int_2_p_0(N_6, &Var_18);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&backend_libs__c_util_scalar_common_2[0]), Var_18, &Var_19);
  mercury__io__write_string_4_p_0(Stream_5, Var_19);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ")");
}

void MR_CALL 
backend_libs__c_util__output_uint_as_c_expr_4_p_0(
  MR_Word Stream_5,
  MR_Unsigned N_6)
{
  MR_String Var_19;

  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "(MR_Unsigned) ");
  mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&backend_libs__c_util_scalar_common_2[0]), (MR_Integer) 1, N_6, &Var_19);
  mercury__io__write_string_4_p_0(Stream_5, Var_19);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "U");
}

void MR_CALL 
backend_libs__c_util__output_int_as_c_expr_4_p_0(
  MR_Word Stream_5,
  MR_Integer N_6)
{
  MR_bool succeeded = (N_6 >= (MR_Integer) -2147483647);

  if (succeeded)
  {
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "(MR_Integer) ");
    mercury__io__write_int_4_p_0(Stream_5, N_6);
  }
  else
  {
    MR_String Var_14;
    MR_Word Var_15;

    Var_15 = mercury__integer__integer_1_f_0(N_6);
    Var_14 = mercury__integer__to_string_1_f_0(Var_15);
    succeeded = (strcmp(Var_14, (MR_String) "-2147483648") == 0);
    if (succeeded)
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "(-(MR_Integer) 2147483647 - 1)");
    else
    {
      MR_String Var_18;
      MR_Word Var_19;

      Var_19 = mercury__integer__integer_1_f_0(N_6);
      Var_18 = mercury__integer__to_string_1_f_0(Var_19);
      succeeded = (strcmp(Var_18, (MR_String) "-9223372036854775808") == 0);
      if (succeeded)
        mercury__io__write_string_4_p_0(Stream_5, (MR_String) "(-(MR_Integer) 9223372036854775807 - 1)");
      else
      {
        MR_Integer Var_35;

        mercury__int__min_int_1_p_0(&Var_35);
        succeeded = (N_6 == Var_35);
        if (succeeded)
        {
          MR_Integer Var_24;
          MR_Integer Var_26;

          mercury__io__write_string_4_p_0(Stream_5, (MR_String) "(-(MR_Integer) ");
          Var_26 = (MR_Integer) ((MR_Unsigned) N_6 + (MR_Unsigned) 1);
          Var_24 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) Var_26);
          mercury__io__write_int_4_p_0(Stream_5, Var_24);
          mercury__io__write_string_4_p_0(Stream_5, (MR_String) "- 1)");
        }
        else
        {
          MR_Integer Var_32;

          mercury__io__write_string_4_p_0(Stream_5, (MR_String) "(-(MR_Integer) ");
          Var_32 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) N_6);
          mercury__io__write_int_4_p_0(Stream_5, Var_32);
          mercury__io__write_string_4_p_0(Stream_5, (MR_String) ")");
        }
      }
    }
  }
}

void MR_CALL 
backend_libs__c_util__output_to_be_quoted_char_csharp_4_p_0(
  MR_Word Stream_5,
  MR_Char Char_6)
{
  MR_String EscapedCharStr_8;

  EscapedCharStr_8 = backend_libs__c_util__prepare_to_quote_char_csharp_1_f_0(Char_6);
  mercury__io__write_string_4_p_0(Stream_5, EscapedCharStr_8);
}

void MR_CALL 
backend_libs__c_util__output_to_be_quoted_char_java_4_p_0(
  MR_Word Stream_5,
  MR_Char Char_6)
{
  MR_String EscapedCharStr_8;

  EscapedCharStr_8 = backend_libs__c_util__prepare_to_quote_char_java_1_f_0(Char_6);
  mercury__io__write_string_4_p_0(Stream_5, EscapedCharStr_8);
}

void MR_CALL 
backend_libs__c_util__output_to_be_quoted_char_c_4_p_0(
  MR_Word Stream_5,
  MR_Char Char_6)
{
  MR_String EscapedCharStr_8;
  MR_Word QuotedCharCord_11;
  MR_Word Var_12;
  MR_Word Var_13;

  Var_12 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0));
  backend_libs__c_util__quote_one_char_acc_c_3_p_0(Char_6, Var_12, &QuotedCharCord_11);
  Var_13 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), QuotedCharCord_11);
  mercury__string__from_char_list_2_p_0(Var_13, &EscapedCharStr_8);
  mercury__io__write_string_4_p_0(Stream_5, EscapedCharStr_8);
}

void MR_CALL 
backend_libs__c_util__output_quoted_char_csharp_4_p_0(
  MR_Word Stream_5,
  MR_Char Char_6)
{
  MR_String EscapedCharStr_8;

  EscapedCharStr_8 = backend_libs__c_util__prepare_to_quote_char_csharp_1_f_0(Char_6);
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 39);
  mercury__io__write_string_4_p_0(Stream_5, EscapedCharStr_8);
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 39);
}

void MR_CALL 
backend_libs__c_util__output_quoted_char_java_4_p_0(
  MR_Word Stream_5,
  MR_Char Char_6)
{
  MR_String EscapedCharStr_8;

  EscapedCharStr_8 = backend_libs__c_util__prepare_to_quote_char_java_1_f_0(Char_6);
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 39);
  mercury__io__write_string_4_p_0(Stream_5, EscapedCharStr_8);
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 39);
}

void MR_CALL 
backend_libs__c_util__output_quoted_char_c_4_p_0(
  MR_Word Stream_5,
  MR_Char Char_6)
{
  MR_String EscapedCharStr_8;
  MR_Word QuotedCharCord_15;
  MR_Word Var_16;
  MR_Word Var_17;

  Var_16 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0));
  backend_libs__c_util__quote_one_char_acc_c_3_p_0(Char_6, Var_16, &QuotedCharCord_15);
  Var_17 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), QuotedCharCord_15);
  mercury__string__from_char_list_2_p_0(Var_17, &EscapedCharStr_8);
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 39);
  mercury__io__write_string_4_p_0(Stream_5, EscapedCharStr_8);
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 39);
}

MR_String MR_CALL 
backend_libs__c_util__prepare_to_quote_char_c_1_f_0(
  MR_Char Char_3)
{
  MR_String QuotedCharStr_4;
  MR_Word QuotedCharCord_5;
  MR_Word Var_6;
  MR_Word Var_7;

  Var_6 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0));
  backend_libs__c_util__quote_one_char_acc_c_3_p_0(Char_3, Var_6, &QuotedCharCord_5);
  Var_7 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), QuotedCharCord_5);
  mercury__string__from_char_list_2_p_0(Var_7, &QuotedCharStr_4);
  return QuotedCharStr_4;
}

MR_String MR_CALL 
backend_libs__c_util__quote_char_c_1_f_0(
  MR_Char Char_3)
{
  MR_String QuotedCharStr_4;
  MR_Word QuotedCharCord1_5;
  MR_Word QuotedCharCord_6;
  MR_Word Var_7;
  MR_Word Var_10;

  Var_7 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) ((MR_Char) 39)));
  backend_libs__c_util__quote_one_char_acc_c_3_p_0(Char_3, Var_7, &QuotedCharCord1_5);
  mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) ((MR_Char) 39)), QuotedCharCord1_5, &QuotedCharCord_6);
  Var_10 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), QuotedCharCord_6);
  mercury__string__from_char_list_2_p_0(Var_10, &QuotedCharStr_4);
  return QuotedCharStr_4;
}

void MR_CALL 
backend_libs__c_util__output_quoted_multi_string_csharp_4_p_0(
  MR_Word Stream_5,
  MR_Word Strs_6)
{
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 34);
  backend_libs__c_util__output_to_be_quoted_multi_string_csharp_4_p_0(Stream_5, Strs_6);
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 34);
}

static void MR_CALL 
backend_libs__c_util__output_to_be_quoted_multi_string_csharp_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String Str_10 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Strs_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Char Var_17;
      MR_String EscapedCharStr_20;
      MR_Word next_value_of_HeadVar__2_2;

      backend_libs__c_util__output_to_be_quoted_string_loop_csharp_5_p_0(HeadVar__1_1, Str_10, (MR_Integer) 0);
      Var_17 = mercury__char__det_from_int_1_f_0((MR_Integer) 0);
      EscapedCharStr_20 = backend_libs__c_util__prepare_to_quote_char_csharp_1_f_0(Var_17);
      mercury__io__write_string_4_p_0(HeadVar__1_1, EscapedCharStr_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Strs_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_multi_string_java_4_p_0(
  MR_Word Stream_5,
  MR_Word Strs_6)
{
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 34);
  backend_libs__c_util__output_to_be_quoted_multi_string_java_4_p_0(Stream_5, Strs_6);
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 34);
}

static void MR_CALL 
backend_libs__c_util__output_to_be_quoted_multi_string_java_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String Str_10 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Strs_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Char Var_17;
      MR_String EscapedCharStr_20;
      MR_Word next_value_of_HeadVar__2_2;

      backend_libs__c_util__output_to_be_quoted_string_loop_java_5_p_0(HeadVar__1_1, Str_10, (MR_Integer) 0);
      Var_17 = mercury__char__det_from_int_1_f_0((MR_Integer) 0);
      EscapedCharStr_20 = backend_libs__c_util__prepare_to_quote_char_java_1_f_0(Var_17);
      mercury__io__write_string_4_p_0(HeadVar__1_1, EscapedCharStr_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Strs_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_multi_string_c_4_p_0(
  MR_Word Stream_5,
  MR_Word Strs_6)
{
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 34);
  backend_libs__c_util__output_to_be_quoted_multi_string_c_4_p_0(Stream_5, Strs_6);
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 34);
}

static void MR_CALL 
backend_libs__c_util__output_to_be_quoted_multi_string_c_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String Str_10 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Strs_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Char Var_17;
      MR_String EscapedCharStr_20;
      MR_Word QuotedCharCord_21;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word next_value_of_HeadVar__2_2;

      backend_libs__c_util__output_to_be_quoted_string_loop_c_5_p_0(HeadVar__1_1, Str_10, (MR_Integer) 0);
      Var_17 = mercury__char__det_from_int_1_f_0((MR_Integer) 0);
      Var_22 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0));
      backend_libs__c_util__quote_one_char_acc_c_3_p_0(Var_17, Var_22, &QuotedCharCord_21);
      Var_23 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), QuotedCharCord_21);
      mercury__string__from_char_list_2_p_0(Var_23, &EscapedCharStr_20);
      mercury__io__write_string_4_p_0(HeadVar__1_1, EscapedCharStr_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Strs_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_string_csharp_4_p_0(
  MR_Word Stream_5,
  MR_String Str_6)
{
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 34);
  backend_libs__c_util__output_to_be_quoted_string_loop_csharp_5_p_0(Stream_5, Str_6, (MR_Integer) 0);
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 34);
}

static void MR_CALL 
backend_libs__c_util__output_to_be_quoted_string_loop_csharp_5_p_0(
  MR_Word Stream_6,
  MR_String Str_7,
  MR_Integer Cur_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Next_10;
    MR_Char Char_11;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__string__unsafe_index_next_4_p_0(Str_7, Cur_8, &Next_10, &Char_11);
    if (succeeded)
    {
      MR_String EscapedCharStr_15;
      MR_Integer next_value_of_Cur_8;

      EscapedCharStr_15 = backend_libs__c_util__prepare_to_quote_char_csharp_1_f_0(Char_11);
      mercury__io__write_string_4_p_0(Stream_6, EscapedCharStr_15);
      // direct tailcall eliminated
      ;
      next_value_of_Cur_8 = Next_10;
      Cur_8 = next_value_of_Cur_8;
      continue;
    }
    break;
  }
}

static MR_String MR_CALL 
backend_libs__c_util__prepare_to_quote_char_csharp_1_f_0(
  MR_Char Char_3)
{
  MR_bool succeeded;
  MR_String QuotedCharStr_4;
  MR_Word QuotedCharCord_5;
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Word STATE_VARIABLE_CharsCord_10_11;
  MR_Word TypeCtorInfo_11_24;
  MR_Char EscapeChar_21;
  MR_Char Var_22;
  MR_Word STATE_VARIABLE_CharsCord_10_23;

  Var_6 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0));
  switch (Char_3) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Char) 7:
      {
        EscapeChar_21 = (MR_Char) 97;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 8:
      {
        EscapeChar_21 = (MR_Char) 98;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 9:
      {
        EscapeChar_21 = (MR_Char) 116;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 10:
      {
        EscapeChar_21 = (MR_Char) 110;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 11:
      {
        EscapeChar_21 = (MR_Char) 118;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 12:
      {
        EscapeChar_21 = (MR_Char) 102;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 13:
      {
        EscapeChar_21 = (MR_Char) 114;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 34:
      {
        EscapeChar_21 = (MR_Char) 34;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 39:
      {
        EscapeChar_21 = (MR_Char) 39;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 92:
      {
        EscapeChar_21 = (MR_Char) 92;
        succeeded = MR_TRUE;
      }
      break;
  }
  if (succeeded)
  {
    Var_22 = (MR_Char) 92;
    TypeCtorInfo_11_24 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0);
    mercury__cord__snoc_3_p_0(TypeCtorInfo_11_24, ((MR_Box) (MR_Word) (Var_22)), Var_6, &STATE_VARIABLE_CharsCord_10_23);
    mercury__cord__snoc_3_p_0(TypeCtorInfo_11_24, ((MR_Box) (MR_Word) (EscapeChar_21)), STATE_VARIABLE_CharsCord_10_23, &STATE_VARIABLE_CharsCord_10_11);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    QuotedCharCord_5 = STATE_VARIABLE_CharsCord_10_11;
  else
  {
    succeeded = mercury__char__is_alnum_1_p_0(Char_3);
    if (!(succeeded))
      succeeded = mercury__string__contains_char_2_p_0((MR_String) " !\"#%&\'()*+,-./:;<=>\?[\\]^_{|}~", Char_3);
    if (succeeded)
      mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) (Char_3)), Var_6, &QuotedCharCord_5);
    else
    {
      MR_Integer CharInt_9;

      mercury__char__to_int_2_p_0(Char_3, &CharInt_9);
      succeeded = (CharInt_9 == (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_CharsCord_13_13;

        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) ((MR_Char) 92)), Var_6, &STATE_VARIABLE_CharsCord_13_13);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) ((MR_Char) 48)), STATE_VARIABLE_CharsCord_13_13, &QuotedCharCord_5);
      }
      else
      {
        succeeded = (CharInt_9 >= (MR_Integer) 128);
        if (succeeded)
          mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) (Char_3)), Var_6, &QuotedCharCord_5);
        else
        {
          MR_Word EscapeChars_10;
          MR_Word Var_16;
          MR_String HexString_26;
          MR_Unsigned Var_32;
          MR_String Var_33;

          mercury__string__format__format_cast_int_to_uint_2_p_0(CharInt_9, &Var_32);
          mercury__string__format__format_uint_component_width_noprec_5_p_0((MR_Word) (&backend_libs__c_util_scalar_common_2[2]), (MR_Integer) 4, (MR_Integer) 2, Var_32, &Var_33);
          HexString_26 = mercury__string__f_43_43_2_f_0((MR_String) "\\u", Var_33);
          mercury__string__to_char_list_2_p_0(HexString_26, &EscapeChars_10);
          Var_16 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), EscapeChars_10);
          QuotedCharCord_5 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Var_6, Var_16);
        }
      }
    }
  }
  Var_7 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), QuotedCharCord_5);
  mercury__string__from_char_list_2_p_0(Var_7, &QuotedCharStr_4);
  return QuotedCharStr_4;
}

void MR_CALL 
backend_libs__c_util__output_quoted_string_java_4_p_0(
  MR_Word Stream_5,
  MR_String Str_6)
{
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 34);
  backend_libs__c_util__output_to_be_quoted_string_loop_java_5_p_0(Stream_5, Str_6, (MR_Integer) 0);
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 34);
}

static void MR_CALL 
backend_libs__c_util__output_to_be_quoted_string_loop_java_5_p_0(
  MR_Word Stream_6,
  MR_String Str_7,
  MR_Integer Cur_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Next_10;
    MR_Char Char_11;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__string__unsafe_index_next_4_p_0(Str_7, Cur_8, &Next_10, &Char_11);
    if (succeeded)
    {
      MR_String EscapedCharStr_15;
      MR_Integer next_value_of_Cur_8;

      EscapedCharStr_15 = backend_libs__c_util__prepare_to_quote_char_java_1_f_0(Char_11);
      mercury__io__write_string_4_p_0(Stream_6, EscapedCharStr_15);
      // direct tailcall eliminated
      ;
      next_value_of_Cur_8 = Next_10;
      Cur_8 = next_value_of_Cur_8;
      continue;
    }
    break;
  }
}

static MR_String MR_CALL 
backend_libs__c_util__prepare_to_quote_char_java_1_f_0(
  MR_Char Char_3)
{
  MR_bool succeeded;
  MR_String QuotedCharStr_4;
  MR_Word QuotedCharCord_5;
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Word STATE_VARIABLE_CharsCord_10_11;

  Var_6 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0));
  switch (Char_3) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Char) 7:
      {
        MR_Word Var_24;

        Var_24 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (MR_mkword(1, &backend_libs__c_util_scalar_common_1[11])));
        STATE_VARIABLE_CharsCord_10_11 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Var_6, Var_24);
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 8:
      {
        MR_Word STATE_VARIABLE_CharsCord_10_23;

        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) ((MR_Char) 92)), Var_6, &STATE_VARIABLE_CharsCord_10_23);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) ((MR_Char) 98)), STATE_VARIABLE_CharsCord_10_23, &STATE_VARIABLE_CharsCord_10_11);
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 9:
      {
        MR_Word STATE_VARIABLE_CharsCord_10_33;

        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) ((MR_Char) 92)), Var_6, &STATE_VARIABLE_CharsCord_10_33);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) ((MR_Char) 116)), STATE_VARIABLE_CharsCord_10_33, &STATE_VARIABLE_CharsCord_10_11);
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 10:
      {
        MR_Word STATE_VARIABLE_CharsCord_10_37;

        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) ((MR_Char) 92)), Var_6, &STATE_VARIABLE_CharsCord_10_37);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) ((MR_Char) 110)), STATE_VARIABLE_CharsCord_10_37, &STATE_VARIABLE_CharsCord_10_11);
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 11:
      {
        MR_Word Var_26;

        Var_26 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (MR_mkword(1, &backend_libs__c_util_scalar_common_1[15])));
        STATE_VARIABLE_CharsCord_10_11 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Var_6, Var_26);
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 12:
      {
        MR_Word STATE_VARIABLE_CharsCord_10_41;

        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) ((MR_Char) 92)), Var_6, &STATE_VARIABLE_CharsCord_10_41);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) ((MR_Char) 102)), STATE_VARIABLE_CharsCord_10_41, &STATE_VARIABLE_CharsCord_10_11);
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 13:
      {
        MR_Word STATE_VARIABLE_CharsCord_10_45;

        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) ((MR_Char) 92)), Var_6, &STATE_VARIABLE_CharsCord_10_45);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) ((MR_Char) 114)), STATE_VARIABLE_CharsCord_10_45, &STATE_VARIABLE_CharsCord_10_11);
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 34:
      {
        MR_Word STATE_VARIABLE_CharsCord_10_49;

        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) ((MR_Char) 92)), Var_6, &STATE_VARIABLE_CharsCord_10_49);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) ((MR_Char) 34)), STATE_VARIABLE_CharsCord_10_49, &STATE_VARIABLE_CharsCord_10_11);
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 39:
      {
        MR_Word STATE_VARIABLE_CharsCord_10_53;

        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) ((MR_Char) 92)), Var_6, &STATE_VARIABLE_CharsCord_10_53);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) ((MR_Char) 39)), STATE_VARIABLE_CharsCord_10_53, &STATE_VARIABLE_CharsCord_10_11);
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 92:
      {
        MR_Word STATE_VARIABLE_CharsCord_10_57;

        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) ((MR_Char) 92)), Var_6, &STATE_VARIABLE_CharsCord_10_57);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) ((MR_Char) 92)), STATE_VARIABLE_CharsCord_10_57, &STATE_VARIABLE_CharsCord_10_11);
        succeeded = MR_TRUE;
      }
      break;
  }
  if (succeeded)
    QuotedCharCord_5 = STATE_VARIABLE_CharsCord_10_11;
  else
  {
    succeeded = mercury__char__is_alnum_1_p_0(Char_3);
    if (!(succeeded))
      succeeded = mercury__string__contains_char_2_p_0((MR_String) " !\"#%&\'()*+,-./:;<=>\?[\\]^_{|}~", Char_3);
    if (succeeded)
      mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) (Char_3)), Var_6, &QuotedCharCord_5);
    else
    {
      MR_Integer CharInt_9;

      mercury__char__to_int_2_p_0(Char_3, &CharInt_9);
      succeeded = (CharInt_9 == (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_CharsCord_13_13;

        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) ((MR_Char) 92)), Var_6, &STATE_VARIABLE_CharsCord_13_13);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) ((MR_Char) 48)), STATE_VARIABLE_CharsCord_13_13, &QuotedCharCord_5);
      }
      else
      {
        succeeded = (CharInt_9 >= (MR_Integer) 128);
        if (succeeded)
          mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) (Char_3)), Var_6, &QuotedCharCord_5);
        else
        {
          MR_Word EscapeChars_10;
          MR_Word Var_16;
          MR_Integer Int_60;

          mercury__char__to_int_2_p_0(Char_3, &Int_60);
          backend_libs__c_util__octal_escape_any_int_2_p_0(Int_60, &EscapeChars_10);
          Var_16 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), EscapeChars_10);
          QuotedCharCord_5 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Var_6, Var_16);
        }
      }
    }
  }
  Var_7 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), QuotedCharCord_5);
  mercury__string__from_char_list_2_p_0(Var_7, &QuotedCharStr_4);
  return QuotedCharStr_4;
}

void MR_CALL 
backend_libs__c_util__output_quoted_mmf_string_c_4_p_0(
  MR_Word Stream_5,
  MR_String Str_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_String LeftSubStr_8;
    MR_String RightSubStr_9;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__string__split_by_code_point_4_p_0(Str_6, (MR_Integer) 160, &LeftSubStr_8, &RightSubStr_9);
    mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 34);
    backend_libs__c_util__output_to_be_quoted_mmf_string_loop_c_5_p_0(Stream_5, LeftSubStr_8, (MR_Integer) 0);
    mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 34);
    succeeded = (strcmp(RightSubStr_9, (MR_String) "") == 0);
    if (!(succeeded))
    {
      MR_String next_value_of_Str_6;

      mercury__io__write_string_4_p_0(Stream_5, (MR_String) " ");
      // direct tailcall eliminated
      ;
      next_value_of_Str_6 = RightSubStr_9;
      Str_6 = next_value_of_Str_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
backend_libs__c_util__output_to_be_quoted_mmf_string_loop_c_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mercury__io__write_char_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1));
}

static void MR_CALL 
backend_libs__c_util__output_to_be_quoted_mmf_string_loop_c_5_p_0(
  MR_Word Stream_6,
  MR_String Str_7,
  MR_Integer Cur_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Next_10;
    MR_Char Char_11;
    MR_Word MaybeRepl_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__string__unsafe_index_next_repl_5_p_0(Str_7, Cur_8, &Next_10, &Char_11, &MaybeRepl_12);
    if (succeeded)
    {
      MR_Integer next_value_of_Cur_8;

      if ((MaybeRepl_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String EscapedCharStr_25;
        MR_Word QuotedCharCord_26;
        MR_Word Var_27;
        MR_Word Var_28;

        Var_27 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0));
        backend_libs__c_util__quote_one_char_acc_c_3_p_0(Char_11, Var_27, &QuotedCharCord_26);
        Var_28 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), QuotedCharCord_26);
        mercury__string__from_char_list_2_p_0(Var_28, &EscapedCharStr_25);
        mercury__io__write_string_4_p_0(Stream_6, EscapedCharStr_25);
      }
      else
      {
        uint8_t CodeUnit_13 = ((uint8_t) (MR_Word) (MR_hl_field(1, MaybeRepl_12, (MR_Integer) 0)));
        MR_Word OctalEscChars_14;
        MR_Integer Var_18;
        MR_Word Var_19;
        MR_Box conv0_STATE_VARIABLE_IO_17_17;

        Var_18 = mercury__uint8__cast_to_int_1_f_0(CodeUnit_13);
        backend_libs__c_util__octal_escape_any_int_2_p_0(Var_18, &OctalEscChars_14);
        {
          Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_19, 0) = ((MR_Box) (&backend_libs__c_util_scalar_common_6[0]));
          MR_hl_field(0, Var_19, 1) = ((MR_Box) (backend_libs__c_util__output_to_be_quoted_mmf_string_loop_c_5_p_0_1));
          MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_19, 3) = ((MR_Box) (Stream_6));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_19, OctalEscChars_14, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_17_17);
      }
      // direct tailcall eliminated
      ;
      next_value_of_Cur_8 = Next_10;
      Cur_8 = next_value_of_Cur_8;
      continue;
    }
    break;
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_string_c_4_p_0(
  MR_Word Stream_5,
  MR_String Str_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_String LeftSubStr_8;
    MR_String RightSubStr_9;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__string__split_by_code_point_4_p_0(Str_6, (MR_Integer) 160, &LeftSubStr_8, &RightSubStr_9);
    mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 34);
    backend_libs__c_util__output_to_be_quoted_string_loop_c_5_p_0(Stream_5, LeftSubStr_8, (MR_Integer) 0);
    mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 34);
    succeeded = (strcmp(RightSubStr_9, (MR_String) "") == 0);
    if (!(succeeded))
    {
      MR_String next_value_of_Str_6;

      mercury__io__write_string_4_p_0(Stream_5, (MR_String) " ");
      // direct tailcall eliminated
      ;
      next_value_of_Str_6 = RightSubStr_9;
      Str_6 = next_value_of_Str_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
backend_libs__c_util__output_to_be_quoted_string_loop_c_5_p_0(
  MR_Word Stream_6,
  MR_String Str_7,
  MR_Integer Cur_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Next_10;
    MR_Char Char_11;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__string__unsafe_index_next_4_p_0(Str_7, Cur_8, &Next_10, &Char_11);
    if (succeeded)
    {
      MR_String EscapedCharStr_15;
      MR_Word QuotedCharCord_16;
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Integer next_value_of_Cur_8;

      Var_17 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0));
      backend_libs__c_util__quote_one_char_acc_c_3_p_0(Char_11, Var_17, &QuotedCharCord_16);
      Var_18 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), QuotedCharCord_16);
      mercury__string__from_char_list_2_p_0(Var_18, &EscapedCharStr_15);
      mercury__io__write_string_4_p_0(Stream_6, EscapedCharStr_15);
      // direct tailcall eliminated
      ;
      next_value_of_Cur_8 = Next_10;
      Cur_8 = next_value_of_Cur_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
backend_libs__c_util__quote_one_char_acc_c_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_EscapeCodeChars_4;

  backend_libs__c_util__octal_escape_any_int_2_p_0(((MR_Integer) (wrapper_arg_1)), &conv0_EscapeCodeChars_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_EscapeCodeChars_4));
}

static void MR_CALL 
backend_libs__c_util__quote_one_char_acc_c_3_p_0(
  MR_Char Char_4,
  MR_Word STATE_VARIABLE_CharsCord_0_10,
  MR_Word * STATE_VARIABLE_CharsCord_11)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_CharsCord_12_12;
  MR_Word TypeCtorInfo_11_38;
  MR_Char EscapeChar_35;
  MR_Char Var_36;
  MR_Word STATE_VARIABLE_CharsCord_10_37;

  switch (Char_4) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Char) 7:
      {
        EscapeChar_35 = (MR_Char) 97;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 8:
      {
        EscapeChar_35 = (MR_Char) 98;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 9:
      {
        EscapeChar_35 = (MR_Char) 116;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 10:
      {
        EscapeChar_35 = (MR_Char) 110;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 11:
      {
        EscapeChar_35 = (MR_Char) 118;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 12:
      {
        EscapeChar_35 = (MR_Char) 102;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 13:
      {
        EscapeChar_35 = (MR_Char) 114;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 34:
      {
        EscapeChar_35 = (MR_Char) 34;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 39:
      {
        EscapeChar_35 = (MR_Char) 39;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 63:
      {
        EscapeChar_35 = (MR_Char) 63;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 92:
      {
        EscapeChar_35 = (MR_Char) 92;
        succeeded = MR_TRUE;
      }
      break;
  }
  if (succeeded)
  {
    Var_36 = (MR_Char) 92;
    TypeCtorInfo_11_38 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0);
    mercury__cord__snoc_3_p_0(TypeCtorInfo_11_38, ((MR_Box) (MR_Word) (Var_36)), STATE_VARIABLE_CharsCord_0_10, &STATE_VARIABLE_CharsCord_10_37);
    mercury__cord__snoc_3_p_0(TypeCtorInfo_11_38, ((MR_Box) (MR_Word) (EscapeChar_35)), STATE_VARIABLE_CharsCord_10_37, &STATE_VARIABLE_CharsCord_12_12);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    *STATE_VARIABLE_CharsCord_11 = STATE_VARIABLE_CharsCord_12_12;
  else
  {
    succeeded = mercury__char__is_alnum_1_p_0(Char_4);
    if (!(succeeded))
      succeeded = mercury__string__contains_char_2_p_0((MR_String) " !\"#%&\'()*+,-./:;<=>\?[\\]^_{|}~", Char_4);
    if (succeeded)
      mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) (Char_4)), STATE_VARIABLE_CharsCord_0_10, STATE_VARIABLE_CharsCord_11);
    else
    {
      MR_Integer CharInt_6;

      mercury__char__to_int_2_p_0(Char_4, &CharInt_6);
      succeeded = (CharInt_6 == (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_CharsCord_15_15;

        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) ((MR_Char) 92)), STATE_VARIABLE_CharsCord_0_10, &STATE_VARIABLE_CharsCord_15_15);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) ((MR_Char) 48)), STATE_VARIABLE_CharsCord_15_15, STATE_VARIABLE_CharsCord_11);
      }
      else
      {
        succeeded = (CharInt_6 >= (MR_Integer) 128);
        if (succeeded)
        {
          MR_Word CodeUnits_7;

          succeeded = mercury__char__to_utf8_2_p_0(Char_4, &CodeUnits_7);
          if (succeeded)
          {
            MR_Word EscapeCharss_8;
            MR_Word EscapeChars_9;
            MR_Word Var_21;

            mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&backend_libs__c_util_scalar_common_1[1]), (MR_Word) (&backend_libs__c_util_scalar_common_4[2]), CodeUnits_7, &EscapeCharss_8);
            mercury__list__condense_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), EscapeCharss_8, &EscapeChars_9);
            Var_21 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), EscapeChars_9);
            *STATE_VARIABLE_CharsCord_11 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), STATE_VARIABLE_CharsCord_0_10, Var_21);
          }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.c_util.quote_one_char_acc_c\'/3", (MR_String) "invalid Unicode code point");
              return;
            }
        }
        else
        {
          MR_Word Var_25;
          MR_Word EscapeChars_26;
          MR_Integer Int_40;

          mercury__char__to_int_2_p_0(Char_4, &Int_40);
          backend_libs__c_util__octal_escape_any_int_2_p_0(Int_40, &EscapeChars_26);
          Var_25 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), EscapeChars_26);
          *STATE_VARIABLE_CharsCord_11 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), STATE_VARIABLE_CharsCord_0_10, Var_25);
        }
      }
    }
  }
}

static void MR_CALL 
backend_libs__c_util__octal_escape_any_int_2_p_0(
  MR_Integer Int_3,
  MR_Word * EscapeCodeChars_4)
{
  MR_String OctalString0_5;
  MR_String OctalString_6;
  MR_Word Var_11;

  mercury__string__int_to_base_string_3_p_0(Int_3, (MR_Integer) 8, &OctalString0_5);
  mercury__string__pad_left_4_p_0(OctalString0_5, (MR_Char) 48, (MR_Integer) 3, &OctalString_6);
  Var_11 = mercury__string__to_char_list_1_f_0(OctalString_6);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *EscapeCodeChars_4 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_11));
  }
}

static void MR_CALL 
backend_libs__c_util__prepare_to_quote_string_c_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_CharsCord_11;

  backend_libs__c_util__quote_one_char_acc_c_3_p_0(((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_CharsCord_11);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_CharsCord_11));
}

MR_String MR_CALL 
backend_libs__c_util__prepare_to_quote_string_c_1_f_0(
  MR_String String_3)
{
  MR_String QuotedString_4;
  MR_Word QuotedCharCord_5;
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Box conv1_QuotedCharCord_5;

  Var_7 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0));
  mercury__string__foldl_4_p_1((MR_Word) (&backend_libs__c_util_scalar_common_1[0]), (MR_Word) (&backend_libs__c_util_scalar_common_4[1]), String_3, ((MR_Box) (Var_7)), &conv1_QuotedCharCord_5);
  QuotedCharCord_5 = ((MR_Word) (conv1_QuotedCharCord_5));
  Var_8 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), QuotedCharCord_5);
  mercury__string__from_char_list_2_p_0(Var_8, &QuotedString_4);
  return QuotedString_4;
}

void MR_CALL 
backend_libs__c_util__maybe_reset_line_num_5_p_0(
  MR_Word Stream_6,
  MR_Word MaybeSetLineNumbers_7,
  MR_Word MaybeFileName_8)
{
  switch (MaybeSetLineNumbers_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      backend_libs__c_util__always_reset_line_num_4_p_0(Stream_6, MaybeFileName_8);
      break;
  }
}

void MR_CALL 
backend_libs__c_util__maybe_set_line_num_6_p_0(
  MR_Word Stream_7,
  MR_Word MaybeSetLineNumbers_8,
  MR_String File_9,
  MR_Integer Line_10)
{
  switch (MaybeSetLineNumbers_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      backend_libs__c_util__always_set_line_num_5_p_0(Stream_7, File_9, Line_10);
      break;
  }
}

void MR_CALL 
backend_libs__c_util__always_set_line_num_5_p_0(
  MR_Word Stream_6,
  MR_String FileName_7,
  MR_Integer LineNumber_8)
{
  MR_bool succeeded = (LineNumber_8 > (MR_Integer) 0);

  if (succeeded)
  {
    succeeded = (strcmp(FileName_7, (MR_String) "") == 0);
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    MR_Word CanPrint_10;

{
#define MR_PROC_LABEL backend_libs__c_util__always_set_line_num_5_p_0

	MR_String Str;
	MR_Word CanPrintWithoutQuoting;

	Str = FileName_7 ;
		{
{
    static  MR_String   last_string;
    static  MR_bool     last_can_print_without_quoting;
    MR_bool             can_print_without_quoting;
    const char          *s;
    int                 len;

    /* We cache the result of the last decision. */
    if (Str == last_string) {
        CanPrintWithoutQuoting = last_can_print_without_quoting;
    } else {
        can_print_without_quoting = MR_TRUE;

        for (s = Str; *s != '\0'; s++) {
            if (! (isalnum((int) *s) || *s == '_' || *s == '/' || *s == '.')) {
                can_print_without_quoting = MR_FALSE;
                break;
            }
        }

        len = s - Str;
        if (len >= 512) {
            can_print_without_quoting = MR_FALSE;
        }

        CanPrintWithoutQuoting = can_print_without_quoting;

        last_string = Str;
        last_can_print_without_quoting = CanPrintWithoutQuoting;
    }
}

		;}
#undef MR_PROC_LABEL
	CanPrint_10  = CanPrintWithoutQuoting;
}
    switch (CanPrint_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Var_28;
          MR_String Var_48;

          Var_28 = backend_libs__c_util__quote_string_c_1_f_0(FileName_7);
          mercury__io__write_string_4_p_0(Stream_6, (MR_String) "#line ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&backend_libs__c_util_scalar_common_2[0]), LineNumber_8, &Var_48);
          mercury__io__write_string_4_p_0(Stream_6, Var_48);
          mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
          mercury__io__write_string_4_p_0(Stream_6, Var_28);
          mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_34;

          mercury__io__write_string_4_p_0(Stream_6, (MR_String) "#line ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&backend_libs__c_util_scalar_common_2[0]), LineNumber_8, &Var_34);
          mercury__io__write_string_4_p_0(Stream_6, Var_34);
          mercury__io__write_string_4_p_0(Stream_6, (MR_String) " \"");
          mercury__io__write_string_4_p_0(Stream_6, FileName_7);
          mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\"\n");
        }
        break;
    }
  }
  else
    backend_libs__c_util__always_reset_line_num_4_p_0(Stream_6, (MR_Word) ((MR_Unsigned) 0U));
}

void MR_CALL 
backend_libs__c_util__always_reset_line_num_4_p_0(
  MR_Word Stream_5,
  MR_Word MaybeFileName_6)
{
  MR_bool succeeded;
  MR_Integer LineNumber_8;
  MR_String FileName_9;

  mercury__io__get_output_line_number_4_p_0(Stream_5, &LineNumber_8);
  if ((MaybeFileName_6 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__output_stream_name_4_p_0(Stream_5, &FileName_9);
  else
    FileName_9 = ((MR_String) ((MR_hl_field(1, MaybeFileName_6, (MR_Integer) 0))));
  succeeded = (LineNumber_8 > (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (strcmp(FileName_9, (MR_String) "") == 0);
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    MR_Word CanPrint_10;

{
#define MR_PROC_LABEL backend_libs__c_util__always_reset_line_num_4_p_0

	MR_String Str;
	MR_Word CanPrintWithoutQuoting;

	Str = FileName_9 ;
		{
{
    static  MR_String   last_string;
    static  MR_bool     last_can_print_without_quoting;
    MR_bool             can_print_without_quoting;
    const char          *s;
    int                 len;

    /* We cache the result of the last decision. */
    if (Str == last_string) {
        CanPrintWithoutQuoting = last_can_print_without_quoting;
    } else {
        can_print_without_quoting = MR_TRUE;

        for (s = Str; *s != '\0'; s++) {
            if (! (isalnum((int) *s) || *s == '_' || *s == '/' || *s == '.')) {
                can_print_without_quoting = MR_FALSE;
                break;
            }
        }

        len = s - Str;
        if (len >= 512) {
            can_print_without_quoting = MR_FALSE;
        }

        CanPrintWithoutQuoting = can_print_without_quoting;

        last_string = Str;
        last_can_print_without_quoting = CanPrintWithoutQuoting;
    }
}

		;}
#undef MR_PROC_LABEL
	CanPrint_10  = CanPrintWithoutQuoting;
}
    switch (CanPrint_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer Var_30 = (MR_Integer) ((MR_Unsigned) LineNumber_8 + (MR_Unsigned) 1);
          MR_String Var_34;
          MR_String Var_53;

          Var_34 = backend_libs__c_util__quote_string_c_1_f_0(FileName_9);
          mercury__io__write_string_4_p_0(Stream_5, (MR_String) "#line ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&backend_libs__c_util_scalar_common_2[0]), Var_30, &Var_53);
          mercury__io__write_string_4_p_0(Stream_5, Var_53);
          mercury__io__write_string_4_p_0(Stream_5, (MR_String) " ");
          mercury__io__write_string_4_p_0(Stream_5, Var_34);
          mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_21 = (MR_Integer) ((MR_Unsigned) LineNumber_8 + (MR_Unsigned) 1);
          MR_String Var_39;

          mercury__io__write_string_4_p_0(Stream_5, (MR_String) "#line ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&backend_libs__c_util_scalar_common_2[0]), Var_21, &Var_39);
          mercury__io__write_string_4_p_0(Stream_5, Var_39);
          mercury__io__write_string_4_p_0(Stream_5, (MR_String) " \"");
          mercury__io__write_string_4_p_0(Stream_5, FileName_9);
          mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\"\n");
        }
        break;
    }
  }
}

static void MR_CALL 
backend_libs__c_util__quote_string_c_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_CharsCord_11;

  backend_libs__c_util__quote_one_char_acc_c_3_p_0(((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_CharsCord_11);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_CharsCord_11));
}

MR_String MR_CALL 
backend_libs__c_util__quote_string_c_1_f_0(
  MR_String String_3)
{
  MR_String QuotedString_4;
  MR_Word QuotedCharCord1_5;
  MR_Word QuotedCharCord_6;
  MR_Word Var_8;
  MR_Word Var_11;
  MR_Box conv1_QuotedCharCord1_5;

  Var_8 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) ((MR_Char) 34)));
  mercury__string__foldl_4_p_1((MR_Word) (&backend_libs__c_util_scalar_common_1[0]), (MR_Word) (&backend_libs__c_util_scalar_common_4[0]), String_3, ((MR_Box) (Var_8)), &conv1_QuotedCharCord1_5);
  QuotedCharCord1_5 = ((MR_Word) (conv1_QuotedCharCord1_5));
  mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) ((MR_Char) 34)), QuotedCharCord1_5, &QuotedCharCord_6);
  Var_11 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), QuotedCharCord_6);
  mercury__string__from_char_list_2_p_0(Var_11, &QuotedString_4);
  return QuotedString_4;
}

MR_Word MR_CALL 
backend_libs__c_util__lookup_line_numbers_2_f_0(
  MR_Word Globals_4,
  MR_Word Option_5)
{
  MR_Word MaybeSetLineNumbers_6;
  MR_Word OptionValue_7;

  libs__globals__lookup_bool_option_3_p_0(Globals_4, Option_5, &OptionValue_7);
  switch (OptionValue_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      MaybeSetLineNumbers_6 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      MaybeSetLineNumbers_6 = (MR_Integer) 1;
      break;
  }
  return MaybeSetLineNumbers_6;
}

static MR_bool MR_CALL 
backend_libs__c_util____Unify____maybe_set_line_numbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__c_util____Unify____maybe_set_line_numbers_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__c_util____Compare____maybe_set_line_numbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__c_util____Compare____maybe_set_line_numbers_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__c_util____Unify____multi_string_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__c_util____Unify____multi_string_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__c_util____Compare____multi_string_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__c_util____Compare____multi_string_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__backend_libs__c_util__init(void)
{
}

void mercury__backend_libs__c_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&backend_libs__c_util__backend_libs__c_util__type_ctor_info_maybe_set_line_numbers_0);
	MR_register_type_ctor_info(&backend_libs__c_util__backend_libs__c_util__type_ctor_info_multi_string_0);
}

void mercury__backend_libs__c_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__c_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module backend_libs.c_util.
