/*
** Automatically generated from `int64.m'
** by the Mercury compiler,
** version rotd-2018-02-06
** configured for x86_64-pc-linux-gnu.
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


// :- module int64.
// :- implementation.

/*
INIT mercury__int64__init
ENDINIT
*/

#include "int64.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "calendar.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "erlang_rtti_implementation.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "parser.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "std_util.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_conversion.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static MR_Integer MR_CALL 
mercury__int64__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__int64_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__int64_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__int64_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__int64_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__int64_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__int64_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__int64_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__int64_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__int64_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "benchmarking.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "int.mh"
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
#include "int8.mh"
#include "io.mh"
#include "math.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"



static MR_Integer MR_CALL 
mercury__int64__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

MR_Word MR_CALL 
mercury__int64__int64_to_doc_1_f_0(
  int64_t X_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_String Var_4;

{
#define MR_PROC_LABEL mercury__int64__int64_to_doc_1_f_0

	int64_t I64;
	MR_String S;

	I64 =  X_3 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" PRId64, I64);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 Var_4  = S;
}
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    }
    return HeadVar__2_2;
  }
}

int64_t MR_CALL 
mercury__int64__max_int64_0_f_0(void)
{
  {
    int64_t I64_1;

{
#define MR_PROC_LABEL mercury__int64__max_int64_0_f_0

	int64_t I64;

		{

    I64 = INT64_MAX;


		;}
#undef MR_PROC_LABEL
	 I64_1  = I64;
}
    return I64_1;
  }
}

int64_t MR_CALL 
mercury__int64__min_int64_0_f_0(void)
{
  {
    int64_t I64_1;

{
#define MR_PROC_LABEL mercury__int64__min_int64_0_f_0

	int64_t I64;

		{

    I64 = INT64_MIN;


		;}
#undef MR_PROC_LABEL
	 I64_1  = I64;
}
    return I64_1;
  }
}

int64_t MR_CALL 
mercury__int64__f_92_1_f_0(
  int64_t HeadVar__1_1)
{
  {
    int64_t HeadVar__2_2 = ~(HeadVar__1_1);

    return HeadVar__2_2;
  }
}

void MR_CALL 
mercury__int64__xor_2_f_2(
  int64_t * HeadVar__1_1,
  int64_t HeadVar__2_2,
  int64_t HeadVar__3_3)
{
  *HeadVar__1_1 = (HeadVar__2_2 ^ HeadVar__3_3);
}

void MR_CALL 
mercury__int64__xor_2_f_1(
  int64_t HeadVar__1_1,
  int64_t * HeadVar__2_2,
  int64_t HeadVar__3_3)
{
  *HeadVar__2_2 = (HeadVar__1_1 ^ HeadVar__3_3);
}

int64_t MR_CALL 
mercury__int64__xor_2_f_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  {
    int64_t HeadVar__3_3 = (HeadVar__1_1 ^ HeadVar__2_2);

    return HeadVar__3_3;
  }
}

int64_t MR_CALL 
mercury__int64__f_92_47_2_f_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  {
    int64_t HeadVar__3_3 = (HeadVar__1_1 | HeadVar__2_2);

    return HeadVar__3_3;
  }
}

int64_t MR_CALL 
mercury__int64__f_47_92_2_f_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  {
    int64_t HeadVar__3_3 = (HeadVar__1_1 & HeadVar__2_2);

    return HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mercury__int64__odd_1_p_0(
  int64_t X_2)
{
  {
    MR_bool succeeded;
    int64_t Var_3;
    int64_t Var_4;
    int64_t Var_8;

{
#define MR_PROC_LABEL mercury__int64__odd_1_p_0

	MR_Integer A;
	int64_t B;

	A =  (MR_Integer) 1 ;
		{

    B = (int64_t) A;


		;}
#undef MR_PROC_LABEL
	 Var_4  = B;
}
    Var_3 = (X_2 & Var_4);
{
#define MR_PROC_LABEL mercury__int64__odd_1_p_0

	MR_Integer A;
	int64_t B;

	A =  (MR_Integer) 0 ;
		{

    B = (int64_t) A;


		;}
#undef MR_PROC_LABEL
	 Var_8  = B;
}
    succeeded = (Var_3 == Var_8);
    succeeded = !(succeeded);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__int64__even_1_p_0(
  int64_t X_2)
{
  {
    MR_bool succeeded;
    int64_t Var_3;
    int64_t Var_4;
    int64_t Var_8;

{
#define MR_PROC_LABEL mercury__int64__even_1_p_0

	MR_Integer A;
	int64_t B;

	A =  (MR_Integer) 1 ;
		{

    B = (int64_t) A;


		;}
#undef MR_PROC_LABEL
	 Var_4  = B;
}
    Var_3 = (X_2 & Var_4);
{
#define MR_PROC_LABEL mercury__int64__even_1_p_0

	MR_Integer A;
	int64_t B;

	A =  (MR_Integer) 0 ;
		{

    B = (int64_t) A;


		;}
#undef MR_PROC_LABEL
	 Var_8  = B;
}
    succeeded = (Var_3 == Var_8);
    return succeeded;
  }
}

int64_t MR_CALL 
mercury__int64__unchecked_right_shift_2_f_0(
  int64_t HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    int64_t HeadVar__3_3 = (HeadVar__1_1 >> HeadVar__2_2);

    return HeadVar__3_3;
  }
}

int64_t MR_CALL 
mercury__int64__f_62_62_2_f_0(
  int64_t X_4,
  MR_Integer Y_5)
{
  {
    MR_bool succeeded;
    int64_t Result_6;
    MR_Unsigned Var_8;

{
#define MR_PROC_LABEL mercury__int64__f_62_62_2_f_0

	MR_Integer I;
	MR_Unsigned U;

	I =  Y_5 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	 Var_8  = U;
}
    succeeded = (Var_8 < 64U);
    if (succeeded)
      Result_6 = (X_4 >> Y_5);
    else
    {
      MR_Word TypeCtorInfo_11_11 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
      MR_Word Var_10 = (MR_Word) ((MR_Box) ((MR_String) "int64.(>>): second operand is out of range"));

      mercury__exception__throw_1_p_0(TypeCtorInfo_11_11, ((MR_Box) (Var_10)));
    }
    return Result_6;
  }
}

int64_t MR_CALL 
mercury__int64__unchecked_left_shift_2_f_0(
  int64_t HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    int64_t HeadVar__3_3 = (HeadVar__1_1 << HeadVar__2_2);

    return HeadVar__3_3;
  }
}

int64_t MR_CALL 
mercury__int64__f_60_60_2_f_0(
  int64_t X_4,
  MR_Integer Y_5)
{
  {
    MR_bool succeeded;
    int64_t Result_6;
    MR_Unsigned Var_8;

{
#define MR_PROC_LABEL mercury__int64__f_60_60_2_f_0

	MR_Integer I;
	MR_Unsigned U;

	I =  Y_5 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	 Var_8  = U;
}
    succeeded = (Var_8 < 64U);
    if (succeeded)
      Result_6 = (X_4 << Y_5);
    else
    {
      MR_Word TypeCtorInfo_11_11 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
      MR_Word Var_10 = (MR_Word) ((MR_Box) ((MR_String) "int64.(<<): second operand is out of range"));

      mercury__exception__throw_1_p_0(TypeCtorInfo_11_11, ((MR_Box) (Var_10)));
    }
    return Result_6;
  }
}

int64_t MR_CALL 
mercury__int64__unchecked_rem_2_f_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  {
    int64_t HeadVar__3_3 = (HeadVar__1_1 % HeadVar__2_2);

    return HeadVar__3_3;
  }
}

int64_t MR_CALL 
mercury__int64__rem_2_f_0(
  int64_t X_4,
  int64_t Y_5)
{
  {
    MR_bool succeeded;
    int64_t Rem_6;
    int64_t Var_12;

{
#define MR_PROC_LABEL mercury__int64__rem_2_f_0

	MR_Integer A;
	int64_t B;

	A =  (MR_Integer) 0 ;
		{

    B = (int64_t) A;


		;}
#undef MR_PROC_LABEL
	 Var_12  = B;
}
    succeeded = (Y_5 == Var_12);
    if (succeeded)
    {
      MR_Word TypeCtorInfo_10_10 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
      MR_Word Var_8 = (MR_Word) ((MR_Box) ((MR_String) "int64.rem: division by zero"));

      mercury__exception__throw_1_p_0(TypeCtorInfo_10_10, ((MR_Box) (Var_8)));
    }
    else
      Rem_6 = (X_4 % Y_5);
    return Rem_6;
  }
}

int64_t MR_CALL 
mercury__int64__mod_2_f_0(
  int64_t X_4,
  int64_t Y_5)
{
  {
    int64_t HeadVar__3_3;
    int64_t Var_6;
    int64_t Var_7;

    Var_7 = mercury__int64__div_2_f_0(X_4, Y_5);
    Var_6 = (Var_7 * Y_5);
    HeadVar__3_3 = (X_4 - Var_6);
    return HeadVar__3_3;
  }
}

int64_t MR_CALL 
mercury__int64__unchecked_quotient_2_f_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  {
    int64_t HeadVar__3_3 = (HeadVar__1_1 / HeadVar__2_2);

    return HeadVar__3_3;
  }
}

int64_t MR_CALL 
mercury__int64__f_slash_2_f_0(
  int64_t X_4,
  int64_t Y_5)
{
  {
    MR_bool succeeded;
    int64_t HeadVar__3_3;
    int64_t Var_14;

{
#define MR_PROC_LABEL mercury__int64__f_slash_2_f_0

	MR_Integer A;
	int64_t B;

	A =  (MR_Integer) 0 ;
		{

    B = (int64_t) A;


		;}
#undef MR_PROC_LABEL
	 Var_14  = B;
}
    succeeded = (Y_5 == Var_14);
    if (succeeded)
    {
      MR_Word TypeCtorInfo_10_12 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
      MR_Word Var_10 = (MR_Word) ((MR_Box) ((MR_String) "int64.\'//\': division by zero"));

      mercury__exception__throw_1_p_0(TypeCtorInfo_10_12, ((MR_Box) (Var_10)));
    }
    else
      HeadVar__3_3 = (X_4 / Y_5);
    return HeadVar__3_3;
  }
}

int64_t MR_CALL 
mercury__int64__f_47_47_2_f_0(
  int64_t X_4,
  int64_t Y_5)
{
  {
    MR_bool succeeded;
    int64_t Div_6;
    int64_t Var_12;

{
#define MR_PROC_LABEL mercury__int64__f_47_47_2_f_0

	MR_Integer A;
	int64_t B;

	A =  (MR_Integer) 0 ;
		{

    B = (int64_t) A;


		;}
#undef MR_PROC_LABEL
	 Var_12  = B;
}
    succeeded = (Y_5 == Var_12);
    if (succeeded)
    {
      MR_Word TypeCtorInfo_10_10 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
      MR_Word Var_8 = (MR_Word) ((MR_Box) ((MR_String) "int64.\'//\': division by zero"));

      mercury__exception__throw_1_p_0(TypeCtorInfo_10_10, ((MR_Box) (Var_8)));
    }
    else
      Div_6 = (X_4 / Y_5);
    return Div_6;
  }
}

int64_t MR_CALL 
mercury__int64__div_2_f_0(
  int64_t X_4,
  int64_t Y_5)
{
  {
    MR_bool succeeded;
    int64_t Div_6;
    int64_t Trunc_7;
    int64_t Var_30;

{
#define MR_PROC_LABEL mercury__int64__div_2_f_0

	MR_Integer A;
	int64_t B;

	A =  (MR_Integer) 0 ;
		{

    B = (int64_t) A;


		;}
#undef MR_PROC_LABEL
	 Var_30  = B;
}
    succeeded = (Y_5 == Var_30);
    if (succeeded)
    {
      MR_Word TypeCtorInfo_10_28 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
      MR_Word Var_26 = (MR_Word) ((MR_Box) ((MR_String) "int64.\'//\': division by zero"));

      mercury__exception__throw_1_p_0(TypeCtorInfo_10_28, ((MR_Box) (Var_26)));
    }
    else
      Trunc_7 = (X_4 / Y_5);
    {
      int64_t Var_14;
      int64_t Var_16;
      MR_Integer Var_17;

{
#define MR_PROC_LABEL mercury__int64__div_2_f_0

	MR_Integer A;
	int64_t B;

	A =  (MR_Integer) 0 ;
		{

    B = (int64_t) A;


		;}
#undef MR_PROC_LABEL
	 Var_14  = B;
}
      succeeded = (X_4 >= Var_14);
      if (succeeded)
      {
        Var_17 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__int64__div_2_f_0

	MR_Integer A;
	int64_t B;

	A =  Var_17 ;
		{

    B = (int64_t) A;


		;}
#undef MR_PROC_LABEL
	 Var_16  = B;
}
        succeeded = (Y_5 >= Var_16);
      }
    }
    if (!(succeeded))
    {
      {
        int64_t Var_10;
        int64_t Var_12;
        MR_Integer Var_13;

{
#define MR_PROC_LABEL mercury__int64__div_2_f_0

	MR_Integer A;
	int64_t B;

	A =  (MR_Integer) 0 ;
		{

    B = (int64_t) A;


		;}
#undef MR_PROC_LABEL
	 Var_10  = B;
}
        succeeded = (X_4 < Var_10);
        if (succeeded)
        {
          Var_13 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__int64__div_2_f_0

	MR_Integer A;
	int64_t B;

	A =  Var_13 ;
		{

    B = (int64_t) A;


		;}
#undef MR_PROC_LABEL
	 Var_12  = B;
}
          succeeded = (Y_5 < Var_12);
        }
      }
      if (!(succeeded))
      {
        int64_t Var_8;
        int64_t Var_21;
        int64_t Var_59;

{
#define MR_PROC_LABEL mercury__int64__div_2_f_0

	MR_Integer A;
	int64_t B;

	A =  (MR_Integer) 0 ;
		{

    B = (int64_t) A;


		;}
#undef MR_PROC_LABEL
	 Var_59  = B;
}
        succeeded = (Y_5 == Var_59);
        if (succeeded)
        {
          MR_Word TypeCtorInfo_10_57 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
          MR_Word Var_55 = (MR_Word) ((MR_Box) ((MR_String) "int64.rem: division by zero"));

          mercury__exception__throw_1_p_0(TypeCtorInfo_10_57, ((MR_Box) (Var_55)));
        }
        else
          Var_8 = (X_4 % Y_5);
{
#define MR_PROC_LABEL mercury__int64__div_2_f_0

	MR_Integer A;
	int64_t B;

	A =  (MR_Integer) 0 ;
		{

    B = (int64_t) A;


		;}
#undef MR_PROC_LABEL
	 Var_21  = B;
}
        succeeded = (Var_8 == Var_21);
      }
    }
    if (succeeded)
      Div_6 = Trunc_7;
    else
    {
      int64_t Var_18;

{
#define MR_PROC_LABEL mercury__int64__div_2_f_0

	MR_Integer A;
	int64_t B;

	A =  (MR_Integer) 1 ;
		{

    B = (int64_t) A;


		;}
#undef MR_PROC_LABEL
	 Var_18  = B;
}
      Div_6 = (Trunc_7 - Var_18);
    }
    return Div_6;
  }
}

int64_t MR_CALL 
mercury__int64__times_2_f_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  {
    int64_t HeadVar__3_3 = (HeadVar__1_1 * HeadVar__2_2);

    return HeadVar__3_3;
  }
}

int64_t MR_CALL 
mercury__int64__f_times_2_f_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  {
    int64_t HeadVar__3_3 = (HeadVar__1_1 * HeadVar__2_2);

    return HeadVar__3_3;
  }
}

int64_t MR_CALL 
mercury__int64__minus_2_f_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  {
    int64_t HeadVar__3_3 = (HeadVar__1_1 - HeadVar__2_2);

    return HeadVar__3_3;
  }
}

void MR_CALL 
mercury__int64__f_minus_2_f_2(
  int64_t HeadVar__1_1,
  int64_t * HeadVar__2_2,
  int64_t HeadVar__3_3)
{
  *HeadVar__2_2 = (HeadVar__1_1 - HeadVar__3_3);
}

void MR_CALL 
mercury__int64__f_minus_2_f_1(
  int64_t * HeadVar__1_1,
  int64_t HeadVar__2_2,
  int64_t HeadVar__3_3)
{
  *HeadVar__1_1 = (HeadVar__2_2 + HeadVar__3_3);
}

int64_t MR_CALL 
mercury__int64__f_minus_2_f_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  {
    int64_t HeadVar__3_3 = (HeadVar__1_1 - HeadVar__2_2);

    return HeadVar__3_3;
  }
}

int64_t MR_CALL 
mercury__int64__plus_2_f_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  {
    int64_t HeadVar__3_3 = (HeadVar__1_1 + HeadVar__2_2);

    return HeadVar__3_3;
  }
}

void MR_CALL 
mercury__int64__f_plus_2_f_2(
  int64_t HeadVar__1_1,
  int64_t * HeadVar__2_2,
  int64_t HeadVar__3_3)
{
  *HeadVar__2_2 = (HeadVar__3_3 - HeadVar__1_1);
}

void MR_CALL 
mercury__int64__f_plus_2_f_1(
  int64_t * HeadVar__1_1,
  int64_t HeadVar__2_2,
  int64_t HeadVar__3_3)
{
  *HeadVar__1_1 = (HeadVar__3_3 - HeadVar__2_2);
}

int64_t MR_CALL 
mercury__int64__f_plus_2_f_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  {
    int64_t HeadVar__3_3 = (HeadVar__1_1 + HeadVar__2_2);

    return HeadVar__3_3;
  }
}

int64_t MR_CALL 
mercury__int64__f_minus_1_f_0(
  int64_t HeadVar__1_1)
{
  {
    int64_t HeadVar__2_2 = (INT64_C(0) - HeadVar__1_1);

    return HeadVar__2_2;
  }
}

int64_t MR_CALL 
mercury__int64__f_plus_1_f_0(
  int64_t HeadVar__1_1)
{
  {
    int64_t HeadVar__2_2 = HeadVar__1_1;

    return HeadVar__2_2;
  }
}

int64_t MR_CALL 
mercury__int64__min_2_f_0(
  int64_t X_4,
  int64_t Y_5)
{
  {
    MR_bool succeeded = (X_4 < Y_5);
    int64_t HeadVar__3_3;

    if (succeeded)
      HeadVar__3_3 = X_4;
    else
      HeadVar__3_3 = Y_5;
    return HeadVar__3_3;
  }
}

int64_t MR_CALL 
mercury__int64__max_2_f_0(
  int64_t X_4,
  int64_t Y_5)
{
  {
    MR_bool succeeded = (X_4 > Y_5);
    int64_t HeadVar__3_3;

    if (succeeded)
      HeadVar__3_3 = X_4;
    else
      HeadVar__3_3 = Y_5;
    return HeadVar__3_3;
  }
}

int64_t MR_CALL 
mercury__int64__nabs_1_f_0(
  int64_t Num_3)
{
  {
    MR_bool succeeded;
    int64_t HeadVar__2_2;
    int64_t Var_4;

{
#define MR_PROC_LABEL mercury__int64__nabs_1_f_0

	MR_Integer A;
	int64_t B;

	A =  (MR_Integer) 0 ;
		{

    B = (int64_t) A;


		;}
#undef MR_PROC_LABEL
	 Var_4  = B;
}
    succeeded = (Num_3 > Var_4);
    if (succeeded)
      HeadVar__2_2 = (INT64_C(0) - Num_3);
    else
      HeadVar__2_2 = Num_3;
    return HeadVar__2_2;
  }
}

int64_t MR_CALL 
mercury__int64__abs_1_f_0(
  int64_t Num_3)
{
  {
    MR_bool succeeded;
    int64_t Abs_4;
    int64_t Var_8;

{
#define MR_PROC_LABEL mercury__int64__abs_1_f_0

	int64_t I64;

		{

    I64 = INT64_MIN;


		;}
#undef MR_PROC_LABEL
	 Var_8  = I64;
}
    succeeded = (Num_3 == Var_8);
    if (succeeded)
    {
      MR_Word TypeCtorInfo_7_7 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
      MR_Word Var_5 = (MR_Word) ((MR_Box) ((MR_String) "int64.abs: abs(min_int64) would overflow"));

      mercury__exception__throw_1_p_0(TypeCtorInfo_7_7, ((MR_Box) (Var_5)));
    }
    else
      Abs_4 = mercury__int64__unchecked_abs_1_f_0(Num_3);
    return Abs_4;
  }
}

int64_t MR_CALL 
mercury__int64__unchecked_abs_1_f_0(
  int64_t Num_3)
{
  {
    MR_bool succeeded;
    int64_t HeadVar__2_2;
    int64_t Var_4;

{
#define MR_PROC_LABEL mercury__int64__unchecked_abs_1_f_0

	MR_Integer A;
	int64_t B;

	A =  (MR_Integer) 0 ;
		{

    B = (int64_t) A;


		;}
#undef MR_PROC_LABEL
	 Var_4  = B;
}
    succeeded = (Num_3 < Var_4);
    if (succeeded)
    {
      int64_t Var_6;

{
#define MR_PROC_LABEL mercury__int64__unchecked_abs_1_f_0

	MR_Integer A;
	int64_t B;

	A =  (MR_Integer) 0 ;
		{

    B = (int64_t) A;


		;}
#undef MR_PROC_LABEL
	 Var_6  = B;
}
      HeadVar__2_2 = (Var_6 - Num_3);
    }
    else
      HeadVar__2_2 = Num_3;
    return HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__int64__f_greater_or_equal_2_p_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 >= HeadVar__2_2);

    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__int64__f_less_or_equal_2_p_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 <= HeadVar__2_2);

    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__int64__f_greater_than_2_p_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 > HeadVar__2_2);

    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__int64__f_less_than_2_p_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 < HeadVar__2_2);

    return succeeded;
  }
}

int64_t MR_CALL 
mercury__int64__cast_from_uint64_1_f_0(
  uint64_t U64_1)
{
  {
    int64_t I64_2;

{
#define MR_PROC_LABEL mercury__int64__cast_from_uint64_1_f_0

	uint64_t U64;
	int64_t I64;

	U64 =  U64_1 ;
		{

    I64 = (int64_t) U64;


		;}
#undef MR_PROC_LABEL
	 I64_2  = I64;
}
    return I64_2;
  }
}

MR_Integer MR_CALL 
mercury__int64__cast_to_int_1_f_0(
  int64_t I64_1)
{
  {
    MR_Integer I_2;

{
#define MR_PROC_LABEL mercury__int64__cast_to_int_1_f_0

	int64_t I64;
	MR_Integer I;

	I64 =  I64_1 ;
		{

    I = (MR_Integer) I64;


		;}
#undef MR_PROC_LABEL
	 I_2  = I;
}
    return I_2;
  }
}

int64_t MR_CALL 
mercury__int64__from_int_1_f_0(
  MR_Integer A_1)
{
  {
    int64_t B_2;

{
#define MR_PROC_LABEL mercury__int64__from_int_1_f_0

	MR_Integer A;
	int64_t B;

	A =  A_1 ;
		{

    B = (int64_t) A;


		;}
#undef MR_PROC_LABEL
	 B_2  = B;
}
    return B_2;
  }
}

void mercury__int64__init(void)
{
}

void mercury__int64__init_type_tables(void)
{
}

void mercury__int64__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__int64__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module int64.
