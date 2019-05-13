/*
** Automatically generated from `util.m'
** by the Mercury compiler,
** version rotd-2019-05-13
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


// :- module mdb.util.
// :- implementation.

/*
INIT mercury__mdb__util__init
ENDINIT
*/

#include "mdb.util.mih"
#include "mdb.util.mh"


#include "mdb.mih"
#include "mdbcomp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




static void MR_CALL 
mdb__util__trace_get_command_fallback_6_p_0(
  MR_String Prompt_7,
  MR_String * String_8,
  MR_Word MdbIn_9,
  MR_Word MdbOut_10);

static void MR_CALL 
mdb__util__call_trace_getline_7_p_0(
  MR_Word MdbIn_1,
  MR_Word MdbOut_2,
  MR_String Prompt_3,
  MR_String * Line_4,
  MR_Integer * Success_5);

static MR_bool MR_CALL 
mdb__util____Unify____line_number_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__util____Compare____line_number_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);







#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.util.mh"

#line 174 "util.m"
void 
ML_BROWSER_trace_get_command_fallback(
  MR_String Prompt_7,
  MR_String * String_8,
  MR_Word MdbIn_9,
  MR_Word MdbOut_10)
#line 174 "util.m"
{
#line 174 "util.m"
	mdb__util__trace_get_command_fallback_6_p_0((MR_String) Prompt_7, (MR_String *) String_8, (MR_Word) MdbIn_9, (MR_Word) MdbOut_10);
}


const MR_TypeCtorInfo_Struct mdb__util__mdb__util__type_ctor_info_line_number_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__util____Unify____line_number_0_0_10001)),
  ((MR_Box) (mdb__util____Compare____line_number_0_0_10001)),
  (MR_String) "mdb.util",
  (MR_String) "line_number",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

void MR_CALL 
mdb__util____Compare____line_number_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

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
}

MR_bool MR_CALL 
mdb__util____Unify____line_number_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

static void MR_CALL 
mdb__util__trace_get_command_fallback_6_p_0(
  MR_String Prompt_7,
  MR_String * String_8,
  MR_Word MdbIn_9,
  MR_Word MdbOut_10)
{
  {
    MR_Word Result_12;

    mercury__io__write_string_4_p_0(MdbOut_10, Prompt_7);
    mercury__io__flush_output_3_p_0(MdbOut_10);
    mercury__io__read_line_as_string_4_p_0(MdbIn_9, &Result_12);
    switch (MR_tag((MR_Word) Result_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *String_8 = (MR_String) "quit";
        break;
      case (MR_Integer) 1:
        *String_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), Result_12, (MR_Integer) 0))));
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Result_12, (MR_Integer) 0))));
          MR_String Var_21;

          Var_21 = mercury__io__error_message_1_f_0(Error_13);
          {
            mercury__require__unexpected_3_p_0((MR_String) "mdb.util", (MR_String) "predicate \140mdb.util.trace_get_command_fallback\'/6", Var_21);
            return;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mdb__util__call_trace_getline_7_p_0(
  MR_Word MdbIn_1,
  MR_Word MdbOut_2,
  MR_String Prompt_3,
  MR_String * Line_4,
  MR_Integer * Success_5)
{
  {
{
#define MR_PROC_LABEL mdb__util__call_trace_getline_7_p_0

	MR_Word MdbIn;
	MR_Word MdbOut;
	MR_String Prompt;
	MR_String Line;
	MR_Integer Success;

	MdbIn =  MdbIn_1 ;
	MdbOut =  MdbOut_2 ;
	Prompt =  Prompt_3 ;
		{

    char        *line;
    MercuryFile *mdb_in = (MercuryFile *) MdbIn;
    MercuryFile *mdb_out = (MercuryFile *) MdbOut;

    if (MR_address_of_trace_getline != NULL) {
        line = (*MR_address_of_trace_getline)((char *) Prompt,
                MR_file(*mdb_in), MR_file(*mdb_out));
    } else {
        MR_tracing_not_enabled();
        /* not reached */
    }

    if (line == NULL) {
        /* we copy the null string to avoid warnings about const */
        MR_make_aligned_string_copy(Line, "");
        Success = 0;
    } else {
        MR_make_aligned_string_copy(Line, line);
        MR_free(line);
        Success = 1;
    }


		;}
#undef MR_PROC_LABEL
	 *Line_4  = Line;
	 *Success_5  = Success;
}
  }
}

void MR_CALL 
mdb__util__limit_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word Pred_4,
  MR_Word Xs_5,
  MR_Word * Ys_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Zs_7;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_4, (MR_Integer) 1))));
    MR_Box conv1_Zs_7;

    // setup for model_det tailcalls optimized into a loop
    ;
    func_0(((MR_Box) (Pred_4)), ((MR_Box) (Xs_5)), &conv1_Zs_7);
    Zs_7 = ((MR_Word) (conv1_Zs_7));
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_8, Xs_5, Zs_7);
    if (succeeded)
      *Ys_6 = Zs_7;
    else
    {
      MR_Word next_value_of_Xs_5 = Zs_7;

      // direct tailcall eliminated
      ;
      Xs_5 = next_value_of_Xs_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
mdb__util__zip_with_4_p_0(
  MR_Word TypeInfo_for_T1_18,
  MR_Word TypeInfo_for_T2_19,
  MR_Word TypeInfo_for_T3_20,
  MR_Word Pred_5,
  MR_Word XXs_6,
  MR_Word YYs_7,
  MR_Word * Zipped_8)
{
  {
    MR_bool succeeded = (XXs_6 == (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
      succeeded = (YYs_7 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      *Zipped_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box X_9;
      MR_Word Xs_10;
      MR_Box Y_11;
      MR_Word Ys_12;

      succeeded = (XXs_6 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        X_9 = (MR_hl_field(MR_mktag(1), XXs_6, (MR_Integer) 0));
        Xs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), XXs_6, (MR_Integer) 1))));
        succeeded = (YYs_7 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Y_11 = (MR_hl_field(MR_mktag(1), YYs_7, (MR_Integer) 0));
          Ys_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YYs_7, (MR_Integer) 1))));
        }
      }
      if (succeeded)
      {
        MR_Box PXY_13;
        MR_Word ZippedTail_14;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_5, (MR_Integer) 1))));

        func_0(((MR_Box) (Pred_5)), X_9, Y_11, &PXY_13);
        mdb__util__zip_with_4_p_0(TypeInfo_for_T1_18, TypeInfo_for_T2_19, TypeInfo_for_T3_20, Pred_5, Xs_10, Ys_12, &ZippedTail_14);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Zipped_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = PXY_13;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ZippedTail_14));
        }
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "mdb.util", (MR_String) "predicate \140mdb.util.zip_with\'/4", (MR_String) "list arguments are of unequal length");
          return;
        }
      }
    }
  }
}

void MR_CALL 
mdb__util__trace_get_command_6_p_0(
  MR_String Prompt_1,
  MR_String * Line_2,
  MR_Word MdbIn_3,
  MR_Word MdbOut_4)
{
  {
{
#define MR_PROC_LABEL mdb__util__trace_get_command_6_p_0

	MR_String Prompt;
	MR_String Line;
	MR_Word MdbIn;
	MR_Word MdbOut;

	Prompt =  Prompt_1 ;
	MdbIn =  MdbIn_3 ;
	MdbOut =  MdbOut_4 ;
		{

    char        *line;
    MercuryFile *mdb_in = (MercuryFile *) MdbIn;
    MercuryFile *mdb_out = (MercuryFile *) MdbOut;

    if (MR_address_of_trace_getline != NULL) {
        line = (*MR_address_of_trace_get_command)(
                (char *) Prompt,
                MR_file(*mdb_in), MR_file(*mdb_out));

        MR_make_aligned_string_copy(Line, line);
        MR_free(line);

    } else {
        ML_BROWSER_trace_get_command_fallback(Prompt, &Line, MdbIn, MdbOut);
    }


		;}
#undef MR_PROC_LABEL
	 *Line_2  = Line;
}
  }
}

void MR_CALL 
mdb__util__trace_get_command_4_p_0(
  MR_String Prompt_5,
  MR_String * Result_6)
{
  {
    MR_Word MdbIn_8;
    MR_Word MdbOut_9;

    mercury__io__input_stream_3_p_0(&MdbIn_8);
    mercury__io__output_stream_3_p_0(&MdbOut_9);
{
#define MR_PROC_LABEL mdb__util__trace_get_command_4_p_0

	MR_String Prompt;
	MR_String Line;
	MR_Word MdbIn;
	MR_Word MdbOut;

	Prompt =  Prompt_5 ;
	MdbIn =  MdbIn_8 ;
	MdbOut =  MdbOut_9 ;
		{

    char        *line;
    MercuryFile *mdb_in = (MercuryFile *) MdbIn;
    MercuryFile *mdb_out = (MercuryFile *) MdbOut;

    if (MR_address_of_trace_getline != NULL) {
        line = (*MR_address_of_trace_get_command)(
                (char *) Prompt,
                MR_file(*mdb_in), MR_file(*mdb_out));

        MR_make_aligned_string_copy(Line, line);
        MR_free(line);

    } else {
        ML_BROWSER_trace_get_command_fallback(Prompt, &Line, MdbIn, MdbOut);
    }


		;}
#undef MR_PROC_LABEL
	 *Result_6  = Line;
}
  }
}

void MR_CALL 
mdb__util__trace_getline_6_p_0(
  MR_String Prompt_7,
  MR_Word * Result_8,
  MR_Word MdbIn_9,
  MR_Word MdbOut_10)
{
  {
    MR_bool succeeded;
    MR_String Line_12;
    MR_Integer Success_13;

{
#define MR_PROC_LABEL mdb__util__trace_getline_6_p_0

	MR_Word MdbIn;
	MR_Word MdbOut;
	MR_String Prompt;
	MR_String Line;
	MR_Integer Success;

	MdbIn =  MdbIn_9 ;
	MdbOut =  MdbOut_10 ;
	Prompt =  Prompt_7 ;
		{

    char        *line;
    MercuryFile *mdb_in = (MercuryFile *) MdbIn;
    MercuryFile *mdb_out = (MercuryFile *) MdbOut;

    if (MR_address_of_trace_getline != NULL) {
        line = (*MR_address_of_trace_getline)((char *) Prompt,
                MR_file(*mdb_in), MR_file(*mdb_out));
    } else {
        MR_tracing_not_enabled();
        /* not reached */
    }

    if (line == NULL) {
        /* we copy the null string to avoid warnings about const */
        MR_make_aligned_string_copy(Line, "");
        Success = 0;
    } else {
        MR_make_aligned_string_copy(Line, line);
        MR_free(line);
        Success = 1;
    }


		;}
#undef MR_PROC_LABEL
	 Line_12  = Line;
	 Success_13  = Success;
}
    succeeded = (Success_13 == (MR_Integer) 0);
    if (succeeded)
      *Result_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Line_12));
      }
  }
}

void MR_CALL 
mdb__util__trace_getline_4_p_0(
  MR_String Prompt_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded;
    MR_Word MdbIn_8;
    MR_Word MdbOut_9;
    MR_String Line_22;
    MR_Integer Success_23;

    mercury__io__input_stream_3_p_0(&MdbIn_8);
    mercury__io__output_stream_3_p_0(&MdbOut_9);
{
#define MR_PROC_LABEL mdb__util__trace_getline_4_p_0

	MR_Word MdbIn;
	MR_Word MdbOut;
	MR_String Prompt;
	MR_String Line;
	MR_Integer Success;

	MdbIn =  MdbIn_8 ;
	MdbOut =  MdbOut_9 ;
	Prompt =  Prompt_5 ;
		{

    char        *line;
    MercuryFile *mdb_in = (MercuryFile *) MdbIn;
    MercuryFile *mdb_out = (MercuryFile *) MdbOut;

    if (MR_address_of_trace_getline != NULL) {
        line = (*MR_address_of_trace_getline)((char *) Prompt,
                MR_file(*mdb_in), MR_file(*mdb_out));
    } else {
        MR_tracing_not_enabled();
        /* not reached */
    }

    if (line == NULL) {
        /* we copy the null string to avoid warnings about const */
        MR_make_aligned_string_copy(Line, "");
        Success = 0;
    } else {
        MR_make_aligned_string_copy(Line, line);
        MR_free(line);
        Success = 1;
    }


		;}
#undef MR_PROC_LABEL
	 Line_22  = Line;
	 Success_23  = Success;
}
    succeeded = (Success_23 == (MR_Integer) 0);
    if (succeeded)
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Line_22));
      }
  }
}

MR_Word MR_CALL 
mdb__util__is_function_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mdb__util__is_predicate_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
    }
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
mdb__util____Unify____line_number_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__util____Unify____line_number_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__util____Compare____line_number_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__util____Compare____line_number_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__mdb__util__init(void)
{
}

void mercury__mdb__util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__util__mdb__util__type_ctor_info_line_number_0);
}

void mercury__mdb__util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdb.util.
