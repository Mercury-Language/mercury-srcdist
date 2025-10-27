/*
** Automatically generated from `term_to_html.m'
** by the Mercury compiler,
** version rotd-2025-10-27
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


// :- module mdb.term_to_html.
// :- implementation.

/*
INIT mercury__mdb__term_to_html__init
ENDINIT
*/

#include "mdb.term_to_html.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdb.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "rtti_implementation.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "mdb.browser_info.mih"
#include "mdb.browser_term.mih"
#include "mdb.parse.mih"
#include "mdb.percent_encoding.mih"
#include "mdb.print_term.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_VA_PseudoTypeInfo_Struct0 mdb__term_to_html____vpti_tuple_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__term_to_html__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0;

static void MR_CALL 
mdb__term_to_html__escape_and_put_char_4_p_0(
  MR_Word Stream_5,
  MR_Char Char_6);

static void MR_CALL 
mdb__term_to_html__write_numbered_element_in_script_6_p_0(
  MR_Word Stream_7,
  MR_Word ArgUniv_8,
  MR_Integer Num_9,
  MR_Integer * HeadVar__4_4);

static void MR_CALL 
mdb__term_to_html__write_numbered_arg_in_script_6_p_0(
  MR_Word Stream_7,
  MR_Word ArgUniv_8,
  MR_Integer ArgNum_9,
  MR_Integer * HeadVar__4_4);

static void MR_CALL 
mdb__term_to_html__write_du_field_in_script_7_p_0(
  MR_Word Stream_8,
  MR_Word ArgUniv_9,
  MR_Word MaybeFieldName_10,
  MR_Integer ArgNum_11,
  MR_Integer * HeadVar__5_5);

static void MR_CALL 
mdb__term_to_html__js_string_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__term_to_html__js_string_4_p_0(
  MR_Word Stream_5,
  MR_String String_6);

static void MR_CALL 
mdb__term_to_html__js_int_4_p_0(
  MR_Word Stream_5,
  MR_Integer Int_6);

static void MR_CALL 
mdb__term_to_html__js_comma_3_p_0(
  MR_Word Stream_4);

static void MR_CALL 
mdb__term_to_html__js_object_key_4_p_0(
  MR_Word Stream_5,
  MR_String Key_6);

static void MR_CALL 
mdb__term_to_html__js_end_object_3_p_0(
  MR_Word Stream_4);

static void MR_CALL 
mdb__term_to_html__js_begin_object_3_p_0(
  MR_Word Stream_4);

static void MR_CALL 
mdb__term_to_html__write_html_doc_2_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
mdb__term_to_html__write_html_doc_2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdb__term_to_html__write_html_doc_2_6_p_0(
  MR_Word Stream_7,
  MR_Word BrowserTerm_8,
  MR_String MdbDir_9,
  MR_Tuple * HeadVar__4_4);

static void MR_CALL 
mdb__term_to_html__write_browser_term_in_script_4_p_1_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
mdb__term_to_html__write_browser_term_in_script_4_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__term_to_html__write_browser_term_in_script_4_p_1(
  MR_Word Stream_5,
  MR_Word BrowserTerm_6);

static void MR_CALL 
mdb__term_to_html__write_browser_term_args_in_script_4_p_1_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__term_to_html__write_browser_term_args_in_script_4_p_1_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
mdb__term_to_html__write_browser_term_args_in_script_4_p_1_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
mdb__term_to_html__write_browser_term_args_in_script_4_p_1_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
mdb__term_to_html__write_browser_term_args_in_script_4_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
mdb__term_to_html__write_browser_term_args_in_script_4_p_1(
  MR_Word Stream_5,
  MR_Word BrowserTerm_6);

static void MR_CALL 
mdb__term_to_html__write_browser_term_in_script_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
mdb__term_to_html__write_browser_term_in_script_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__term_to_html__write_browser_term_in_script_4_p_0(
  MR_Word Stream_5,
  MR_Word BrowserTerm_6);

static MR_bool MR_CALL 
mdb__term_to_html__flatten_list_2_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Box Term_3,
  MR_Word * ElementUnivs_4);

static void MR_CALL 
mdb__term_to_html__write_browser_term_args_in_script_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
mdb__term_to_html__write_browser_term_args_in_script_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
mdb__term_to_html__write_browser_term_args_in_script_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
mdb__term_to_html__write_browser_term_args_in_script_4_p_0(
  MR_Word Stream_5,
  MR_Word BrowserTerm_6);

static void MR_CALL 
mdb__term_to_html__write_html_doc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box mdb__term_to_html_scalar_common_1[11][2];

static /* final */ const MR_Box mdb__term_to_html_scalar_common_2[2][1];

static /* final */ const MR_Box mdb__term_to_html_scalar_common_3[2][9];

static /* final */ const MR_Box mdb__term_to_html_scalar_common_4[1][10];

static /* final */ const MR_Box mdb__term_to_html_scalar_common_5[2][7];

static /* final */ const MR_Box mdb__term_to_html_scalar_common_6[1][5];

static /* final */ const MR_Box mdb__term_to_html_scalar_common_7[1][3];




static /* final */ const MR_Box mdb__term_to_html_scalar_common_1[11][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "var term =\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "<script type=\'text/javascript\'>\n")),
    ((MR_Box) (MR_mkword(1, &mdb__term_to_html_scalar_common_1[2])))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "</div>\n")),
    ((MR_Box) (MR_mkword(1, &mdb__term_to_html_scalar_common_1[3])))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) " <div id=\'treeview\'></div>\n")),
    ((MR_Box) (MR_mkword(1, &mdb__term_to_html_scalar_common_1[4])))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) " </div>\n")),
    ((MR_Box) (MR_mkword(1, &mdb__term_to_html_scalar_common_1[5])))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "  <input type=\'text\' id=\'searchbox\' size=\'50\' />\n")),
    ((MR_Box) (MR_mkword(1, &mdb__term_to_html_scalar_common_1[6])))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) " <div class=\'search-container\'>Search\n")),
    ((MR_Box) (MR_mkword(1, &mdb__term_to_html_scalar_common_1[7])))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "<div class=\'container\'>\n")),
    ((MR_Box) (MR_mkword(1, &mdb__term_to_html_scalar_common_1[8])))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_String) "/mdb_term_browser.js\'></script>\n")),
    ((MR_Box) (MR_mkword(1, &mdb__term_to_html_scalar_common_1[9])))
  },
};

static /* final */ const MR_Box mdb__term_to_html_scalar_common_2[2][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "result")) },
};

static /* final */ const MR_Box mdb__term_to_html_scalar_common_3[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mdb__browser_term__mdb__browser_term__type_ctor_info_browser_term_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdb__term_to_html____vpti_tuple_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mdb__term_to_html_scalar_common_4[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mdb__term_to_html__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mdb__term_to_html_scalar_common_5[2][7] = {
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

static /* final */ const MR_Box mdb__term_to_html_scalar_common_6[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box mdb__term_to_html_scalar_common_7[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mdb__term_to_html_scalar_common_6[0])),
    ((MR_Box) (mdb__term_to_html__write_html_doc_2_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "mdb.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_VA_PseudoTypeInfo_Struct0 mdb__term_to_html____vpti_tuple_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 0,
  { 0 }

};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__term_to_html__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static void MR_CALL 
mdb__term_to_html__escape_and_put_char_4_p_0(
  MR_Word Stream_5,
  MR_Char Char_6)
{
  MR_bool succeeded;
  MR_String EscapedCharStr_8;

  switch (Char_6) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Char) 8:
      {
        EscapedCharStr_8 = (MR_String) "\\b";
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 9:
      {
        EscapedCharStr_8 = (MR_String) "\\t";
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 10:
      {
        EscapedCharStr_8 = (MR_String) "\\n";
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 12:
      {
        EscapedCharStr_8 = (MR_String) "\\f";
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 13:
      {
        EscapedCharStr_8 = (MR_String) "\\r";
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 34:
      {
        EscapedCharStr_8 = (MR_String) "\\\"";
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 47:
      {
        EscapedCharStr_8 = (MR_String) "\\/";
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 92:
      {
        EscapedCharStr_8 = (MR_String) "\\\\";
        succeeded = MR_TRUE;
      }
      break;
  }
  if (succeeded)
    mercury__io__write_string_4_p_0(Stream_5, EscapedCharStr_8);
  else
    mercury__io__write_char_4_p_0(Stream_5, Char_6);
}

static void MR_CALL 
mdb__term_to_html__write_numbered_element_in_script_6_p_0(
  MR_Word Stream_7,
  MR_Word ArgUniv_8,
  MR_Integer Num_9,
  MR_Integer * HeadVar__4_4)
{
  MR_Word Var_14;
  MR_String Var_16;
  MR_String Var_18;
  MR_String FieldName_19;
  MR_Word Var_27;

  *HeadVar__4_4 = (MR_Integer) ((MR_Unsigned) Num_9 + (MR_Unsigned) 1);
  Var_18 = mercury__string__from_int_1_f_0(Num_9);
  Var_16 = mercury__string__f_43_43_2_f_0((MR_String) "#", Var_18);
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (Var_16));
  }
  mdb__term_to_html__js_begin_object_3_p_0(Stream_7);
  mdb__term_to_html__js_object_key_4_p_0(Stream_7, (MR_String) "name");
  FieldName_19 = ((MR_String) ((MR_hl_field(1, Var_14, 0))));
  mdb__term_to_html__js_string_4_p_0(Stream_7, FieldName_19);
  mdb__term_to_html__js_comma_3_p_0(Stream_7);
  mdb__term_to_html__js_object_key_4_p_0(Stream_7, (MR_String) "term");
  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (ArgUniv_8));
  }
  mdb__term_to_html__write_browser_term_in_script_4_p_0(Stream_7, Var_27);
  mdb__term_to_html__js_end_object_3_p_0(Stream_7);
  mdb__term_to_html__js_comma_3_p_0(Stream_7);
}

static void MR_CALL 
mdb__term_to_html__write_numbered_arg_in_script_6_p_0(
  MR_Word Stream_7,
  MR_Word ArgUniv_8,
  MR_Integer ArgNum_9,
  MR_Integer * HeadVar__4_4)
{
  MR_Word Var_23;

  *HeadVar__4_4 = (MR_Integer) ((MR_Unsigned) ArgNum_9 + (MR_Unsigned) 1);
  mdb__term_to_html__js_begin_object_3_p_0(Stream_7);
  mdb__term_to_html__js_object_key_4_p_0(Stream_7, (MR_String) "name");
  mdb__term_to_html__js_int_4_p_0(Stream_7, ArgNum_9);
  mdb__term_to_html__js_comma_3_p_0(Stream_7);
  mdb__term_to_html__js_object_key_4_p_0(Stream_7, (MR_String) "term");
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) (ArgUniv_8));
  }
  mdb__term_to_html__write_browser_term_in_script_4_p_0(Stream_7, Var_23);
  mdb__term_to_html__js_end_object_3_p_0(Stream_7);
  mdb__term_to_html__js_comma_3_p_0(Stream_7);
}

static void MR_CALL 
mdb__term_to_html__write_du_field_in_script_7_p_0(
  MR_Word Stream_8,
  MR_Word ArgUniv_9,
  MR_Word MaybeFieldName_10,
  MR_Integer ArgNum_11,
  MR_Integer * HeadVar__5_5)
{
  MR_Word Var_24;

  *HeadVar__5_5 = (MR_Integer) ((MR_Unsigned) ArgNum_11 + (MR_Unsigned) 1);
  mdb__term_to_html__js_begin_object_3_p_0(Stream_8);
  mdb__term_to_html__js_object_key_4_p_0(Stream_8, (MR_String) "name");
  if ((MaybeFieldName_10 == (MR_Word) ((MR_Unsigned) 0U)))
    mdb__term_to_html__js_int_4_p_0(Stream_8, ArgNum_11);
  else
  {
    MR_String FieldName_16 = ((MR_String) ((MR_hl_field(1, MaybeFieldName_10, 0))));

    mdb__term_to_html__js_string_4_p_0(Stream_8, FieldName_16);
  }
  mdb__term_to_html__js_comma_3_p_0(Stream_8);
  mdb__term_to_html__js_object_key_4_p_0(Stream_8, (MR_String) "term");
  {
    Var_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_24, 0) = ((MR_Box) (ArgUniv_9));
  }
  mdb__term_to_html__write_browser_term_in_script_4_p_0(Stream_8, Var_24);
  mdb__term_to_html__js_end_object_3_p_0(Stream_8);
  mdb__term_to_html__js_comma_3_p_0(Stream_8);
}

static void MR_CALL 
mdb__term_to_html__js_string_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mdb__term_to_html__escape_and_put_char_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Char) (MR_Word) wrapper_arg_1));
}

static void MR_CALL 
mdb__term_to_html__js_string_4_p_0(
  MR_Word Stream_5,
  MR_String String_6)
{
  MR_Word Var_12;
  MR_Box conv0_STATE_VARIABLE_IO_2_13;

  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 34);
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&mdb__term_to_html_scalar_common_5[0]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (mdb__term_to_html__js_string_4_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (Stream_5));
  }
  mercury__string__foldl_4_p_0((MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_12, String_6, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_2_13);
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 34);
}

static void MR_CALL 
mdb__term_to_html__js_int_4_p_0(
  MR_Word Stream_5,
  MR_Integer Int_6)
{
  mercury__io__write_int_4_p_0(Stream_5, Int_6);
}

static void MR_CALL 
mdb__term_to_html__js_comma_3_p_0(
  MR_Word Stream_4)
{
  mercury__io__write_string_4_p_0(Stream_4, (MR_String) ",\n");
}

static void MR_CALL 
mdb__term_to_html__js_object_key_4_p_0(
  MR_Word Stream_5,
  MR_String Key_6)
{
  mercury__io__write_string_4_p_0(Stream_5, Key_6);
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 58);
}

static void MR_CALL 
mdb__term_to_html__js_end_object_3_p_0(
  MR_Word Stream_4)
{
  mercury__io__write_char_4_p_0(Stream_4, (MR_Char) 125);
}

static void MR_CALL 
mdb__term_to_html__js_begin_object_3_p_0(
  MR_Word Stream_4)
{
  mercury__io__write_string_4_p_0(Stream_4, (MR_String) "{\n");
}

static void MR_CALL 
mdb__term_to_html__write_html_doc_2_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mercury__io__write_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
}

static MR_Box MR_CALL 
mdb__term_to_html__write_html_doc_2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mdb__percent_encoding__percent_encode_path_segment_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
mdb__term_to_html__write_html_doc_2_6_p_0(
  MR_Word Stream_7,
  MR_Word BrowserTerm_8,
  MR_String MdbDir_9,
  MR_Tuple * HeadVar__4_4)
{
  MR_bool succeeded;
  MR_String FilePrefix_11;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_String Path_24;
  MR_Word Segments_25;
  MR_Word EncodedSegments_26;
  MR_String EncodedPath_27;
  MR_Word Var_40;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_45;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_50;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_60;
  MR_Word Var_62;
  MR_Char Var_38;
  MR_Box conv1_STATE_VARIABLE_IO_1_16;

  *HeadVar__4_4 = (MR_Integer) 0;
  mercury__dir__directory_separator_1_p_0(&Var_38);
  succeeded = ((MR_Char) 92 == Var_38);
  if (succeeded)
    mercury__string__replace_all_4_p_0(MdbDir_9, (MR_String) "\\", (MR_String) "/", &Path_24);
  else
    Path_24 = MdbDir_9;
  Segments_25 = mercury__string__split_at_char_2_f_0((MR_Char) 47, Path_24);
  EncodedSegments_26 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdb__term_to_html_scalar_common_7[0]), Segments_25);
  EncodedPath_27 = mercury__string__join_list_2_f_0((MR_String) "/", EncodedSegments_26);
  succeeded = mercury__string__prefix_2_p_0(EncodedPath_27, (MR_String) "/");
  if (succeeded)
    FilePrefix_11 = mercury__string__f_43_43_2_f_0((MR_String) "file://", EncodedPath_27);
  else
    FilePrefix_11 = mercury__string__f_43_43_2_f_0((MR_String) "file:///", EncodedPath_27);
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&mdb__term_to_html_scalar_common_5[1]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (mdb__term_to_html__write_html_doc_2_6_p_0_2));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (Stream_7));
  }
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (FilePrefix_11));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) (MR_mkword(1, &mdb__term_to_html_scalar_common_1[10])));
  }
  {
    Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_60, 0) = ((MR_Box) ((MR_String) "<script src=\'"));
    MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_62));
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) ((MR_String) "/mdb_term_browser.css\' />\n"));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_60));
  }
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (FilePrefix_11));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_58));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) ((MR_String) "<link rel=\'stylesheet\' href=\'"));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_57));
  }
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) ((MR_String) "/jstree.js\'></script>\n"));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_55));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (FilePrefix_11));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_53));
  }
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) ((MR_String) "<script src=\'"));
    MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_52));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) ((MR_String) "/jquery.slim.js\'></script>\n"));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_50));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (FilePrefix_11));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_48));
  }
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) ((MR_String) "<script src=\'"));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_47));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) ((MR_String) "/jstree.style.css\' />\n"));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_45));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (FilePrefix_11));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_43));
  }
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) ((MR_String) "<link rel=\'stylesheet\' href=\'"));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_42));
  }
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) ((MR_String) "<!doctype html>\n"));
    MR_hl_field(1, Var_15, 1) = ((MR_Box) (Var_40));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_14, Var_15, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_1_16);
  mdb__term_to_html__write_browser_term_in_script_4_p_1(Stream_7, BrowserTerm_8);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ";\n</script>\n");
}

static void MR_CALL 
mdb__term_to_html__write_browser_term_in_script_4_p_1_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv3_HeadVar__4_4;

  mdb__term_to_html__write_numbered_element_in_script_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv3_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__4_4));
}

static void MR_CALL 
mdb__term_to_html__write_browser_term_in_script_4_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mdb__term_to_html__escape_and_put_char_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Char) (MR_Word) wrapper_arg_1));
}

static void MR_CALL 
mdb__term_to_html__write_browser_term_in_script_4_p_1(
  MR_Word Stream_5,
  MR_Word BrowserTerm_6)
{
  MR_bool succeeded;
  MR_String TypeName_11;
  MR_Integer Arity_13;
  MR_String Functor_16;
  MR_Word FlattenedList_17;
  MR_Word Var_75;
  MR_Box conv0_STATE_VARIABLE_IO_2_76;
  MR_Box conv1_STATE_VARIABLE_IO_2_85;

  if (((MR_tag((MR_Word) BrowserTerm_6)) == (MR_Integer) 0))
  {
    MR_Word TypeInfo_58_58;
    MR_Word TermUniv_8 = ((MR_Word) ((MR_hl_field(0, BrowserTerm_6, 0))));
    MR_Box Term_9;
    MR_Word TypeDesc_10;
    MR_String Functor0_12;
    MR_Word ElementUnivs0_14;

    Term_9 = mercury__univ__univ_value_1_f_0(&TypeInfo_58_58, TermUniv_8);
    TypeDesc_10 = mercury__type_desc__type_of_1_f_0(TypeInfo_58_58);
    TypeName_11 = mercury__type_desc__type_name_1_f_0(TypeDesc_10);
    mercury__deconstruct__functor_4_p_2(TypeInfo_58_58, Term_9, (MR_Integer) 2, &Functor0_12, &Arity_13);
    succeeded = (strcmp(Functor0_12, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = (Arity_13 == (MR_Integer) 2);
      if (succeeded)
        succeeded = mdb__term_to_html__flatten_list_2_p_0(TypeInfo_58_58, Term_9, &ElementUnivs0_14);
    }
    if (succeeded)
    {
      MR_Integer Length_15;

      mercury__list__length_2_p_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), ElementUnivs0_14, &Length_15);
      succeeded = (Length_15 == (MR_Integer) 1);
      if (succeeded)
        Functor_16 = (MR_String) "list of 1 element";
      else
      {
        MR_String Var_108;
        MR_String Var_115;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdb__term_to_html_scalar_common_2[0]), Length_15, &Var_108);
        Var_115 = mercury__string__f_43_43_2_f_0(Var_108, (MR_String) " elements");
        Functor_16 = mercury__string__f_43_43_2_f_0((MR_String) "list of ", Var_115);
      }
      {
        FlattenedList_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FlattenedList_17, 0) = ((MR_Box) (ElementUnivs0_14));
      }
    }
    else
    {
      Functor_16 = Functor0_12;
      FlattenedList_17 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
  else
  {
    MR_Word Args_18;
    MR_Word MaybeResult_19;

    Functor_16 = ((MR_String) ((MR_hl_field(1, BrowserTerm_6, 0))));
    Args_18 = ((MR_Word) ((MR_hl_field(1, BrowserTerm_6, 1))));
    MaybeResult_19 = ((MR_Word) ((MR_hl_field(1, BrowserTerm_6, 2))));
    mercury__list__length_2_p_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), Args_18, &Arity_13);
    if ((MaybeResult_19 == (MR_Word) ((MR_Unsigned) 0U)))
      TypeName_11 = (MR_String) "<<predicate>>";
    else
      TypeName_11 = (MR_String) "<<function>>";
    FlattenedList_17 = (MR_Word) ((MR_Unsigned) 0U);
  }
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "{\n");
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "type");
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 58);
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 34);
  {
    Var_75 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_75, 0) = ((MR_Box) (&mdb__term_to_html_scalar_common_5[0]));
    MR_hl_field(0, Var_75, 1) = ((MR_Box) (mdb__term_to_html__write_browser_term_in_script_4_p_1_1));
    MR_hl_field(0, Var_75, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_75, 3) = ((MR_Box) (Stream_5));
  }
  mercury__string__foldl_4_p_0((MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_75, TypeName_11, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_2_76);
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 34);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ",\n");
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "functor");
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 58);
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 34);
  mercury__string__foldl_4_p_0((MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_75, Functor_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_2_85);
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 34);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ",\n");
  succeeded = (Arity_13 == (MR_Integer) 0);
  if (!(succeeded))
  {
    MR_String OneLine_21;
    MR_Word Elided_22;
    MR_Box conv2_STATE_VARIABLE_IO_2_94;

    mdb__print_term__browser_term_to_html_flat_string_5_p_0(BrowserTerm_6, &OneLine_21, &Elided_22);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "oneline");
    mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 58);
    mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 34);
    mercury__string__foldl_4_p_0((MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_75, OneLine_21, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_2_94);
    mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 34);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ",\n");
    switch (Elided_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_4_p_0(Stream_5, (MR_String) "oneline_elided");
          mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 58);
          mercury__io__write_string_4_p_0(Stream_5, (MR_String) "true");
          mercury__io__write_string_4_p_0(Stream_5, (MR_String) ",\n");
        }
        break;
    }
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "args");
    mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 58);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "[\n");
    if ((FlattenedList_17 == (MR_Word) ((MR_Unsigned) 0U)))
      mdb__term_to_html__write_browser_term_args_in_script_4_p_1(Stream_5, BrowserTerm_6);
    else
    {
      MR_Word ElementUnivs_23 = ((MR_Word) ((MR_hl_field(1, FlattenedList_17, 0))));
      MR_Word Var_53;
      MR_Box conv5__ElementNumber_24;
      MR_Box conv4_STATE_VARIABLE_IO_17_55;

      {
        Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_53, 0) = ((MR_Box) (&mdb__term_to_html_scalar_common_3[1]));
        MR_hl_field(0, Var_53, 1) = ((MR_Box) (mdb__term_to_html__write_browser_term_in_script_4_p_1_2));
        MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_53, 3) = ((MR_Box) (Stream_5));
      }
      mercury__list__foldl2_6_p_11((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_53, ElementUnivs_23, ((MR_Box) ((MR_Integer) 1)), &conv5__ElementNumber_24, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_17_55);
    }
    mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 93);
  }
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 125);
}

static void MR_CALL 
mdb__term_to_html__write_browser_term_args_in_script_4_p_1_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mdb__term_to_html__escape_and_put_char_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Char) (MR_Word) wrapper_arg_1));
}

static void MR_CALL 
mdb__term_to_html__write_browser_term_args_in_script_4_p_1_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv9_HeadVar__4_4;

  mdb__term_to_html__write_numbered_arg_in_script_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv9_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv9_HeadVar__4_4));
}

static void MR_CALL 
mdb__term_to_html__write_browser_term_args_in_script_4_p_1_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv6_HeadVar__4_4;

  mdb__term_to_html__write_numbered_arg_in_script_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv6_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv6_HeadVar__4_4));
}

static void MR_CALL 
mdb__term_to_html__write_browser_term_args_in_script_4_p_1_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv3_HeadVar__4_4;

  mdb__term_to_html__write_numbered_arg_in_script_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv3_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__4_4));
}

static void MR_CALL 
mdb__term_to_html__write_browser_term_args_in_script_4_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__5_5;

  mdb__term_to_html__write_du_field_in_script_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), &conv0_HeadVar__5_5);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__5_5));
}

static void MR_CALL 
mdb__term_to_html__write_browser_term_args_in_script_4_p_1(
  MR_Word Stream_5,
  MR_Word BrowserTerm_6)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) BrowserTerm_6)) == (MR_Integer) 0))
  {
    MR_Word TypeInfo_52_52;
    MR_Word TermUniv_8 = ((MR_Word) ((MR_hl_field(0, BrowserTerm_6, 0))));
    MR_Box Term_9;
    MR_Integer FunctorNumber_10;
    MR_Word Args_12;
    MR_Integer _Arity1_11;

    Term_9 = mercury__univ__univ_value_1_f_0(&TypeInfo_52_52, TermUniv_8);
    succeeded = mercury__deconstruct__deconstruct_du_5_p_1(TypeInfo_52_52, Term_9, (MR_Integer) 2, &FunctorNumber_10, &_Arity1_11, &Args_12);
    if (succeeded)
    {
      MR_Word TypeDesc_13;
      MR_Word FieldNames_17;
      MR_String _Functor_14;
      MR_Integer _Arity_15;
      MR_Word _ArgTypes_16;

      TypeDesc_13 = mercury__type_desc__type_of_1_f_0(TypeInfo_52_52);
      succeeded = mercury__construct__get_functor_with_names_6_p_0(TypeDesc_13, FunctorNumber_10, &_Functor_14, &_Arity_15, &_ArgTypes_16, &FieldNames_17);
      if (succeeded)
      {
        MR_Word Var_26;
        MR_Box conv2__ArgNum_18;
        MR_Box conv1_STATE_VARIABLE_IO_24;

        {
          Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_26, 0) = ((MR_Box) (&mdb__term_to_html_scalar_common_4[0]));
          MR_hl_field(0, Var_26, 1) = ((MR_Box) (mdb__term_to_html__write_browser_term_args_in_script_4_p_1_1));
          MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_26, 3) = ((MR_Box) (Stream_5));
        }
        mercury__list__foldl2_corresponding_7_p_9((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), (MR_Word) (&mdb__term_to_html_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_26, Args_12, FieldNames_17, ((MR_Box) ((MR_Integer) 1)), &conv2__ArgNum_18, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_24);
      }
      else
      {
        MR_Word Var_29;
        MR_Box conv5__ArgNum_42;
        MR_Box conv4_STATE_VARIABLE_IO_24;

        {
          Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_29, 0) = ((MR_Box) (&mdb__term_to_html_scalar_common_3[1]));
          MR_hl_field(0, Var_29, 1) = ((MR_Box) (mdb__term_to_html__write_browser_term_args_in_script_4_p_1_2));
          MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_29, 3) = ((MR_Box) (Stream_5));
        }
        mercury__list__foldl2_6_p_11((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_29, Args_12, ((MR_Box) ((MR_Integer) 1)), &conv5__ArgNum_42, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_24);
      }
    }
    else
    {
      MR_Word Var_33;
      MR_Word Args_47;
      MR_String _Functor_44;
      MR_Integer _Arity_45;
      MR_Box conv8__ArgNum_46;
      MR_Box conv7_STATE_VARIABLE_IO_24;

      mercury__deconstruct__deconstruct_5_p_2(TypeInfo_52_52, Term_9, (MR_Integer) 2, &_Functor_44, &_Arity_45, &Args_47);
      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_33, 0) = ((MR_Box) (&mdb__term_to_html_scalar_common_3[1]));
        MR_hl_field(0, Var_33, 1) = ((MR_Box) (mdb__term_to_html__write_browser_term_args_in_script_4_p_1_3));
        MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_33, 3) = ((MR_Box) (Stream_5));
      }
      mercury__list__foldl2_6_p_11((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_33, Args_47, ((MR_Box) ((MR_Integer) 1)), &conv8__ArgNum_46, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_24);
    }
  }
  else
  {
    MR_Word MaybeResult_20 = ((MR_Word) ((MR_hl_field(1, BrowserTerm_6, 2))));
    MR_Word Var_36;
    MR_Word Args_51 = ((MR_Word) ((MR_hl_field(1, BrowserTerm_6, 1))));
    MR_Box conv11_ArgNum_21;
    MR_Box conv10_STATE_VARIABLE_IO_4_38;

    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_36, 0) = ((MR_Box) (&mdb__term_to_html_scalar_common_3[1]));
      MR_hl_field(0, Var_36, 1) = ((MR_Box) (mdb__term_to_html__write_browser_term_args_in_script_4_p_1_4));
      MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_36, 3) = ((MR_Box) (Stream_5));
    }
    mercury__list__foldl2_6_p_11((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_36, Args_51, ((MR_Box) ((MR_Integer) 1)), &conv11_ArgNum_21, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_4_38);
    if (!((MaybeResult_20 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word ResultUniv_22 = ((MR_Word) ((MR_hl_field(1, MaybeResult_20, 0))));
      MR_String FieldName_88;
      MR_Word Var_96;
      MR_Word Var_104;
      MR_Box conv12_STATE_VARIABLE_IO_2_105;

      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "{\n");
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "name");
      mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 58);
      FieldName_88 = ((MR_String) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &mdb__term_to_html_scalar_common_2[1])), 0))));
      mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 34);
      {
        Var_104 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_104, 0) = ((MR_Box) (&mdb__term_to_html_scalar_common_5[0]));
        MR_hl_field(0, Var_104, 1) = ((MR_Box) (mdb__term_to_html__write_browser_term_args_in_script_4_p_1_5));
        MR_hl_field(0, Var_104, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_104, 3) = ((MR_Box) (Stream_5));
      }
      mercury__string__foldl_4_p_0((MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_104, FieldName_88, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_IO_2_105);
      mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 34);
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) ",\n");
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "term");
      mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 58);
      {
        Var_96 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_96, 0) = ((MR_Box) (ResultUniv_22));
      }
      mdb__term_to_html__write_browser_term_in_script_4_p_0(Stream_5, Var_96);
      mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 125);
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) ",\n");
    }
  }
}

static void MR_CALL 
mdb__term_to_html__write_browser_term_in_script_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv3_HeadVar__4_4;

  mdb__term_to_html__write_numbered_element_in_script_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv3_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__4_4));
}

static void MR_CALL 
mdb__term_to_html__write_browser_term_in_script_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mdb__term_to_html__escape_and_put_char_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Char) (MR_Word) wrapper_arg_1));
}

static void MR_CALL 
mdb__term_to_html__write_browser_term_in_script_4_p_0(
  MR_Word Stream_5,
  MR_Word BrowserTerm_6)
{
  MR_bool succeeded;
  MR_Word TypeInfo_58_58;
  MR_Word TermUniv_8 = ((MR_Word) ((MR_hl_field(0, BrowserTerm_6, 0))));
  MR_Box Term_9;
  MR_Word TypeDesc_10;
  MR_String TypeName_11;
  MR_String Functor0_12;
  MR_Integer Arity_13;
  MR_String Functor_16;
  MR_Word FlattenedList_17;
  MR_Word Var_85;
  MR_Word ElementUnivs0_14;
  MR_Box conv0_STATE_VARIABLE_IO_2_86;
  MR_Box conv1_STATE_VARIABLE_IO_2_95;

  Term_9 = mercury__univ__univ_value_1_f_0(&TypeInfo_58_58, TermUniv_8);
  TypeDesc_10 = mercury__type_desc__type_of_1_f_0(TypeInfo_58_58);
  TypeName_11 = mercury__type_desc__type_name_1_f_0(TypeDesc_10);
  mercury__deconstruct__functor_4_p_2(TypeInfo_58_58, Term_9, (MR_Integer) 2, &Functor0_12, &Arity_13);
  succeeded = (strcmp(Functor0_12, (MR_String) "[|]") == 0);
  if (succeeded)
  {
    succeeded = (Arity_13 == (MR_Integer) 2);
    if (succeeded)
      succeeded = mdb__term_to_html__flatten_list_2_p_0(TypeInfo_58_58, Term_9, &ElementUnivs0_14);
  }
  if (succeeded)
  {
    MR_Integer Length_15;

    mercury__list__length_2_p_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), ElementUnivs0_14, &Length_15);
    succeeded = (Length_15 == (MR_Integer) 1);
    if (succeeded)
      Functor_16 = (MR_String) "list of 1 element";
    else
    {
      MR_String Var_71;
      MR_String Var_78;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdb__term_to_html_scalar_common_2[0]), Length_15, &Var_71);
      Var_78 = mercury__string__f_43_43_2_f_0(Var_71, (MR_String) " elements");
      Functor_16 = mercury__string__f_43_43_2_f_0((MR_String) "list of ", Var_78);
    }
    {
      FlattenedList_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FlattenedList_17, 0) = ((MR_Box) (ElementUnivs0_14));
    }
  }
  else
  {
    Functor_16 = Functor0_12;
    FlattenedList_17 = (MR_Word) ((MR_Unsigned) 0U);
  }
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "{\n");
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "type");
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 58);
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 34);
  {
    Var_85 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_85, 0) = ((MR_Box) (&mdb__term_to_html_scalar_common_5[0]));
    MR_hl_field(0, Var_85, 1) = ((MR_Box) (mdb__term_to_html__write_browser_term_in_script_4_p_0_1));
    MR_hl_field(0, Var_85, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_85, 3) = ((MR_Box) (Stream_5));
  }
  mercury__string__foldl_4_p_0((MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_85, TypeName_11, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_2_86);
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 34);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ",\n");
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "functor");
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 58);
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 34);
  mercury__string__foldl_4_p_0((MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_85, Functor_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_2_95);
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 34);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ",\n");
  succeeded = (Arity_13 == (MR_Integer) 0);
  if (!(succeeded))
  {
    MR_String OneLine_21;
    MR_Word Elided_22;
    MR_Box conv2_STATE_VARIABLE_IO_2_104;

    mdb__print_term__browser_term_to_html_flat_string_5_p_0(BrowserTerm_6, &OneLine_21, &Elided_22);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "oneline");
    mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 58);
    mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 34);
    mercury__string__foldl_4_p_0((MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_85, OneLine_21, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_2_104);
    mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 34);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ",\n");
    switch (Elided_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_4_p_0(Stream_5, (MR_String) "oneline_elided");
          mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 58);
          mercury__io__write_string_4_p_0(Stream_5, (MR_String) "true");
          mercury__io__write_string_4_p_0(Stream_5, (MR_String) ",\n");
        }
        break;
    }
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "args");
    mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 58);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "[\n");
    if ((FlattenedList_17 == (MR_Word) ((MR_Unsigned) 0U)))
      mdb__term_to_html__write_browser_term_args_in_script_4_p_0(Stream_5, BrowserTerm_6);
    else
    {
      MR_Word ElementUnivs_23 = ((MR_Word) ((MR_hl_field(1, FlattenedList_17, 0))));
      MR_Word Var_53;
      MR_Box conv5__ElementNumber_24;
      MR_Box conv4_STATE_VARIABLE_IO_17_55;

      {
        Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_53, 0) = ((MR_Box) (&mdb__term_to_html_scalar_common_3[1]));
        MR_hl_field(0, Var_53, 1) = ((MR_Box) (mdb__term_to_html__write_browser_term_in_script_4_p_0_2));
        MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_53, 3) = ((MR_Box) (Stream_5));
      }
      mercury__list__foldl2_6_p_11((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_53, ElementUnivs_23, ((MR_Box) ((MR_Integer) 1)), &conv5__ElementNumber_24, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_17_55);
    }
    mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 93);
  }
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 125);
}

static MR_bool MR_CALL 
mdb__term_to_html__flatten_list_2_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Box Term_3,
  MR_Word * ElementUnivs_4)
{
  MR_bool succeeded;
  MR_String Functor_5;
  MR_Integer Arity_6;
  MR_Word Args_7;

  succeeded = mercury__deconstruct__limited_deconstruct_6_p_1(TypeInfo_for_T_16, Term_3, (MR_Integer) 1, (MR_Integer) 2, &Functor_5, &Arity_6, &Args_7);
  if (succeeded)
  {
    if ((Args_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (strcmp(Functor_5, (MR_String) "[]") == 0);
      if (succeeded)
      {
        succeeded = (Arity_6 == (MR_Integer) 0);
        if (succeeded)
        {
          *ElementUnivs_4 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      MR_Word TypeInfo_17_17;
      MR_Word Head_8;
      MR_Word Tail_9;
      MR_Word ElementUnivs0_10;
      MR_Word Var_13;
      MR_Word Var_14;
      MR_Box Var_15;

      succeeded = (strcmp(Functor_5, (MR_String) "[|]") == 0);
      if (succeeded)
      {
        succeeded = (Arity_6 == (MR_Integer) 2);
        if (succeeded)
        {
          Head_8 = ((MR_Word) ((MR_hl_field(1, Args_7, 0))));
          Var_13 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
          succeeded = (Var_13 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Tail_9 = ((MR_Word) ((MR_hl_field(1, Var_13, 0))));
            Var_14 = ((MR_Word) ((MR_hl_field(1, Var_13, 1))));
            succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_15 = mercury__univ__univ_value_1_f_0(&TypeInfo_17_17, Tail_9);
              succeeded = mdb__term_to_html__flatten_list_2_p_0(TypeInfo_17_17, Var_15, &ElementUnivs0_10);
              if (succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *ElementUnivs_4 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Head_8));
                  MR_hl_field(1, base, 1) = ((MR_Box) (ElementUnivs0_10));
                }
                succeeded = MR_TRUE;
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
mdb__term_to_html__write_browser_term_args_in_script_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv6_HeadVar__4_4;

  mdb__term_to_html__write_numbered_arg_in_script_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv6_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv6_HeadVar__4_4));
}

static void MR_CALL 
mdb__term_to_html__write_browser_term_args_in_script_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv3_HeadVar__4_4;

  mdb__term_to_html__write_numbered_arg_in_script_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv3_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__4_4));
}

static void MR_CALL 
mdb__term_to_html__write_browser_term_args_in_script_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__5_5;

  mdb__term_to_html__write_du_field_in_script_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), &conv0_HeadVar__5_5);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__5_5));
}

static void MR_CALL 
mdb__term_to_html__write_browser_term_args_in_script_4_p_0(
  MR_Word Stream_5,
  MR_Word BrowserTerm_6)
{
  MR_bool succeeded;
  MR_Word TypeInfo_52_52;
  MR_Word TermUniv_8 = ((MR_Word) ((MR_hl_field(0, BrowserTerm_6, 0))));
  MR_Box Term_9;
  MR_Integer FunctorNumber_10;
  MR_Word Args_12;
  MR_Integer _Arity1_11;

  Term_9 = mercury__univ__univ_value_1_f_0(&TypeInfo_52_52, TermUniv_8);
  succeeded = mercury__deconstruct__deconstruct_du_5_p_1(TypeInfo_52_52, Term_9, (MR_Integer) 2, &FunctorNumber_10, &_Arity1_11, &Args_12);
  if (succeeded)
  {
    MR_Word TypeDesc_13;
    MR_Word FieldNames_17;
    MR_String _Functor_14;
    MR_Integer _Arity_15;
    MR_Word _ArgTypes_16;

    TypeDesc_13 = mercury__type_desc__type_of_1_f_0(TypeInfo_52_52);
    succeeded = mercury__construct__get_functor_with_names_6_p_0(TypeDesc_13, FunctorNumber_10, &_Functor_14, &_Arity_15, &_ArgTypes_16, &FieldNames_17);
    if (succeeded)
    {
      MR_Word Var_26;
      MR_Box conv2__ArgNum_18;
      MR_Box conv1_STATE_VARIABLE_IO_24;

      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_26, 0) = ((MR_Box) (&mdb__term_to_html_scalar_common_4[0]));
        MR_hl_field(0, Var_26, 1) = ((MR_Box) (mdb__term_to_html__write_browser_term_args_in_script_4_p_0_1));
        MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_26, 3) = ((MR_Box) (Stream_5));
      }
      mercury__list__foldl2_corresponding_7_p_9((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), (MR_Word) (&mdb__term_to_html_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_26, Args_12, FieldNames_17, ((MR_Box) ((MR_Integer) 1)), &conv2__ArgNum_18, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_24);
    }
    else
    {
      MR_Word Var_29;
      MR_Box conv5__ArgNum_42;
      MR_Box conv4_STATE_VARIABLE_IO_24;

      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_29, 0) = ((MR_Box) (&mdb__term_to_html_scalar_common_3[1]));
        MR_hl_field(0, Var_29, 1) = ((MR_Box) (mdb__term_to_html__write_browser_term_args_in_script_4_p_0_2));
        MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_29, 3) = ((MR_Box) (Stream_5));
      }
      mercury__list__foldl2_6_p_11((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_29, Args_12, ((MR_Box) ((MR_Integer) 1)), &conv5__ArgNum_42, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_24);
    }
  }
  else
  {
    MR_Word Var_33;
    MR_Word Args_47;
    MR_String _Functor_44;
    MR_Integer _Arity_45;
    MR_Box conv8__ArgNum_46;
    MR_Box conv7_STATE_VARIABLE_IO_24;

    mercury__deconstruct__deconstruct_5_p_2(TypeInfo_52_52, Term_9, (MR_Integer) 2, &_Functor_44, &_Arity_45, &Args_47);
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_33, 0) = ((MR_Box) (&mdb__term_to_html_scalar_common_3[1]));
      MR_hl_field(0, Var_33, 1) = ((MR_Box) (mdb__term_to_html__write_browser_term_args_in_script_4_p_0_3));
      MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_33, 3) = ((MR_Box) (Stream_5));
    }
    mercury__list__foldl2_6_p_11((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_33, Args_47, ((MR_Box) ((MR_Integer) 1)), &conv8__ArgNum_46, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_24);
  }
}

static void MR_CALL 
mdb__term_to_html__write_html_doc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Tuple conv0_HeadVar__4_4;

  mdb__term_to_html__write_html_doc_2_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), &conv0_HeadVar__4_4);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__4_4));
}

void MR_CALL 
mdb__term_to_html__write_html_doc_6_p_0(
  MR_Word Stream_7,
  MR_Word BrowserTerm_8,
  MR_String MdbDir_9,
  MR_Word * Result_10)
{
  MR_bool succeeded;
  MR_Word TryResult_12;
  MR_Word Var_17;

  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&mdb__term_to_html_scalar_common_3[0]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (mdb__term_to_html__write_html_doc_6_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (Stream_7));
    MR_hl_field(0, Var_17, 4) = ((MR_Box) (BrowserTerm_8));
    MR_hl_field(0, Var_17, 5) = ((MR_Box) (MdbDir_9));
  }
  mercury__exception__try_io_4_p_1((MR_Word) (&mdb__term_to_html_scalar_common_1[0]), Var_17, &TryResult_12);
  if (((MR_tag((MR_Word) TryResult_12)) == (MR_Integer) 2))
  {
    MR_Word Univ_13 = ((MR_Word) ((MR_hl_field(2, TryResult_12, 0))));
    MR_Word Error_14;
    MR_Box conv1_Error_14;

    succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), Univ_13, &conv1_Error_14);
    if (succeeded)
    {
      Error_14 = ((MR_Word) (conv1_Error_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_String Var_21;

      Var_21 = mercury__io__error_message_1_f_0(Error_14);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_21));
      }
    }
    else
    {
      MR_Word TypeInfo_29_29;
      MR_String Var_22;
      MR_Box Var_23;

      Var_23 = mercury__univ__univ_value_1_f_0(&TypeInfo_29_29, Univ_13);
      Var_22 = mercury__string__string_1_f_0(TypeInfo_29_29, Var_23);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_22));
      }
    }
  }
  else
    *Result_10 = (MR_Word) ((MR_Unsigned) 0U);
}

void mercury__mdb__term_to_html__init(void)
{
}

void mercury__mdb__term_to_html__init_type_tables(void)
{
}

void mercury__mdb__term_to_html__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__term_to_html__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module mdb.term_to_html.
