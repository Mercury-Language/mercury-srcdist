/*
** Automatically generated from `percent_encoding.m'
** by the Mercury compiler,
** version rotd-2023-05-08
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


// :- module mdb.percent_encoding.
// :- implementation.

/*
INIT mercury__mdb__percent_encoding__init
ENDINIT
*/

#include "mdb.percent_encoding.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdb.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




static const MR_FA_PseudoTypeInfo_Struct1 mdb__percent_encoding__list__pti_list_1__plain_builtin__type_ctor_info_character_0;

static MR_bool MR_CALL 
mdb__percent_encoding__unreserved_char_in_path_segment_1_p_0(
  MR_Char C_2);

static void MR_CALL 
mdb__percent_encoding__percent_encode_octet_3_p_0(
  MR_Integer Octet_4,
  MR_Word Encoded0_5,
  MR_Word * Encoded_6);

static void MR_CALL 
mdb__percent_encoding__percent_encode_path_segment_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mdb__percent_encoding__percent_encode_path_segment_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);


static /* final */ const MR_Box mdb__percent_encoding_scalar_common_1[1][2];

static /* final */ const MR_Box mdb__percent_encoding_scalar_common_2[1][4];

static /* final */ const MR_Box mdb__percent_encoding_scalar_common_3[2][3];

static /* final */ const MR_Box mdb__percent_encoding_scalar_common_4[1][6];

static /* final */ const MR_Integer mdb__percent_encoding_scalar_common_5[1][3];




static /* final */ const MR_Box mdb__percent_encoding_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box mdb__percent_encoding_scalar_common_2[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box mdb__percent_encoding_scalar_common_3[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mdb__percent_encoding_scalar_common_2[0])),
    ((MR_Box) (mdb__percent_encoding__percent_encode_path_segment_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mdb__percent_encoding_scalar_common_4[0])),
    ((MR_Box) (mdb__percent_encoding__percent_encode_path_segment_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdb__percent_encoding_scalar_common_4[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdb__percent_encoding__list__pti_list_1__plain_builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mdb__percent_encoding__list__pti_list_1__plain_builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Integer mdb__percent_encoding_scalar_common_5[1][3] = {
  /* row   0 */
  {
    (MR_Unsigned) 2550120425U,
    (MR_Unsigned) 1140850687U,
    (MR_Unsigned) 603979775U
  },
};



#include "array.mh"
#include "mdb.mh"



static const MR_FA_PseudoTypeInfo_Struct1 mdb__percent_encoding__list__pti_list_1__plain_builtin__type_ctor_info_character_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0)
  }
};

static MR_bool MR_CALL 
mdb__percent_encoding__unreserved_char_in_path_segment_1_p_0(
  MR_Char C_2)
{
  MR_bool succeeded;

  if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) C_2 - (MR_Unsigned) 33))) <= ((MR_Unsigned) 93)))
    if ((((mdb__percent_encoding_scalar_common_5[0])[(((MR_Integer) ((MR_Unsigned) C_2 - (MR_Unsigned) 33)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) C_2 - (MR_Unsigned) 33)) & (MR_Integer) 31))))))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
  else
    succeeded = MR_FALSE;
  return succeeded;
}

static void MR_CALL 
mdb__percent_encoding__percent_encode_octet_3_p_0(
  MR_Integer Octet_4,
  MR_Word Encoded0_5,
  MR_Word * Encoded_6)
{
  MR_bool succeeded = (Octet_4 <= (MR_Integer) 127);
  MR_Char Char_7;

  if (succeeded)
  {
    succeeded = mercury__char__from_int_2_p_0(Octet_4, &Char_7);
    if (succeeded)
    {
      if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) Char_7 - (MR_Unsigned) 33))) <= ((MR_Unsigned) 93)))
        if ((((mdb__percent_encoding_scalar_common_5[0])[(((MR_Integer) ((MR_Unsigned) Char_7 - (MR_Unsigned) 33)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) Char_7 - (MR_Unsigned) 33)) & (MR_Integer) 31))))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      else
        succeeded = MR_FALSE;
    }
  }
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Encoded_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (Char_7));
      MR_hl_field(1, base, 1) = ((MR_Box) (Encoded0_5));
    }
  else
  {
    MR_Char Hi_8;
    MR_Char Lo_9;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Integer Int_Hi_14;
    MR_Integer Int_Lo_15;
    MR_Integer Var_16 = (Octet_4 & (MR_Integer) 240);

    Int_Hi_14 = (Var_16 >> 4);
    Int_Lo_15 = (Octet_4 & (MR_Integer) 15);
    Hi_8 = mercury__char__det_int_to_hex_digit_1_f_0(Int_Hi_14);
    Lo_9 = mercury__char__det_int_to_hex_digit_1_f_0(Int_Lo_15);
    {
      Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_13, 0) = ((MR_Box) (MR_Word) (Lo_9));
      MR_hl_field(1, Var_13, 1) = ((MR_Box) (Encoded0_5));
    }
    {
      Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_12, 0) = ((MR_Box) (MR_Word) (Hi_8));
      MR_hl_field(1, Var_12, 1) = ((MR_Box) (Var_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Encoded_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) ((MR_Char) 37));
      MR_hl_field(1, base, 1) = ((MR_Box) (Var_12));
    }
  }
}

static void MR_CALL 
mdb__percent_encoding__percent_encode_path_segment_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Encoded_6;

  mdb__percent_encoding__percent_encode_octet_3_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Encoded_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_Encoded_6));
}

static MR_bool MR_CALL 
mdb__percent_encoding__percent_encode_path_segment_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mdb__percent_encoding__unreserved_char_in_path_segment_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

MR_String MR_CALL 
mdb__percent_encoding__percent_encode_path_segment_1_f_0(
  MR_String S0_3)
{
  MR_bool succeeded;
  MR_String S_4;

  succeeded = mercury__string__all_match_2_p_0((MR_Word) (&mdb__percent_encoding_scalar_common_3[0]), S0_3);
  if (succeeded)
    S_4 = S0_3;
  else
  {
    MR_Word Octets_5;
    MR_Word Encoded_6;
    MR_Box conv1_Encoded_6;

    mercury__string__to_utf8_code_unit_list_2_p_0(S0_3, &Octets_5);
    mercury__list__foldr_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdb__percent_encoding_scalar_common_1[0]), (MR_Word) (&mdb__percent_encoding_scalar_common_3[1]), Octets_5, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_Encoded_6);
    Encoded_6 = ((MR_Word) (conv1_Encoded_6));
    mercury__string__from_char_list_2_p_0(Encoded_6, &S_4);
  }
  return S_4;
}

void mercury__mdb__percent_encoding__init(void)
{
}

void mercury__mdb__percent_encoding__init_type_tables(void)
{
}

void mercury__mdb__percent_encoding__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__percent_encoding__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdb.percent_encoding.
