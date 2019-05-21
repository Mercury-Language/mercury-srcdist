/*
** Automatically generated from `util.m'
** by the Mercury compiler,
** version rotd-2017-08-07
** configured for x86_64-apple-darwin13.4.0.
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


/* :- module mdb.util. */
/* :- implementation. */

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
  MR_String mdb__util__Prompt_7,
  MR_String * mdb__util__String_8,
  MR_Word mdb__util__MdbIn_9,
  MR_Word mdb__util__MdbOut_10);

static void MR_CALL 
mdb__util__call_trace_getline_7_p_0(
  MR_Word mdb__util__MdbIn_1,
  MR_Word mdb__util__MdbOut_2,
  MR_String mdb__util__Prompt_3,
  MR_String * mdb__util__Line_4,
  MR_Integer * mdb__util__Success_5);

static MR_bool MR_CALL 
mdb__util____Unify____line_number_0_0_10001(
  MR_Box mdb__util__wrapper_arg_1,
  MR_Box mdb__util__wrapper_arg_2);

static void MR_CALL 
mdb__util____Compare____line_number_0_0_10001(
  MR_Box * mdb__util__wrapper_arg_1,
  MR_Box mdb__util__wrapper_arg_2,
  MR_Box mdb__util__wrapper_arg_3);







#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.util.mh"

#line 174 "util.m"
void 
ML_BROWSER_trace_get_command_fallback(
  MR_String mdb__util__Prompt_7,
  MR_String * mdb__util__String_8,
  MR_Word mdb__util__MdbIn_9,
  MR_Word mdb__util__MdbOut_10)
#line 174 "util.m"
{
#line 174 "util.m"
	mdb__util__trace_get_command_fallback_6_p_0((MR_String) mdb__util__Prompt_7, (MR_String *) mdb__util__String_8, (MR_Word) mdb__util__MdbIn_9, (MR_Word) mdb__util__MdbOut_10);
}


const MR_TypeCtorInfo_Struct mdb__util__mdb__util__type_ctor_info_line_number_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__util____Unify____line_number_0_0_10001)),
  ((MR_Box) (mdb__util____Compare____line_number_0_0_10001)),
  (MR_String) "mdb.util",
  (MR_String) "line_number",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

void MR_CALL 
mdb__util____Compare____line_number_0_0(
  MR_Word * mdb__util__HeadVar__1_1,
  MR_Integer mdb__util__HeadVar__2_2,
  MR_Integer mdb__util__HeadVar__3_3)
{
  {
    MR_Integer mdb__util__Cast_HeadVar1_4 = mdb__util__HeadVar__2_2;
    MR_Integer mdb__util__Cast_HeadVar2_5 = mdb__util__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__util__HeadVar__1_1, mdb__util__Cast_HeadVar1_4, mdb__util__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mdb__util____Unify____line_number_0_0(
  MR_Integer mdb__util__HeadVar__1_1,
  MR_Integer mdb__util__HeadVar__2_2)
{
  {
    MR_bool mdb__util__succeeded;
    MR_Integer mdb__util__Cast_HeadVar1_3 = mdb__util__HeadVar__1_1;
    MR_Integer mdb__util__Cast_HeadVar2_4 = mdb__util__HeadVar__2_2;

    mdb__util__succeeded = (mdb__util__Cast_HeadVar1_3 == mdb__util__Cast_HeadVar2_4);
    return mdb__util__succeeded;
  }
}

static void MR_CALL 
mdb__util__trace_get_command_fallback_6_p_0(
  MR_String mdb__util__Prompt_7,
  MR_String * mdb__util__String_8,
  MR_Word mdb__util__MdbIn_9,
  MR_Word mdb__util__MdbOut_10)
{
  {
    MR_Word mdb__util__Result_12;

    mercury__io__write_string_4_p_0(mdb__util__MdbOut_10, mdb__util__Prompt_7);
    mercury__io__flush_output_3_p_0(mdb__util__MdbOut_10);
    mercury__io__read_line_as_string_4_p_0(mdb__util__MdbIn_9, &mdb__util__Result_12);
    switch (MR_tag((MR_Word) mdb__util__Result_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *mdb__util__String_8 = (MR_String) "quit";
        break;
      case (MR_Integer) 1:
        *mdb__util__String_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__util__Result_12, (MR_Integer) 0)));
        break;
      case (MR_Integer) 2:
        {
          MR_Word mdb__util__Error_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__util__Result_12, (MR_Integer) 0)));
          MR_String mdb__util__Var_21;

          mdb__util__Var_21 = mercury__io__error_message_1_f_0(mdb__util__Error_13);
          {
            mercury__require__unexpected_3_p_0((MR_String) "mdb.util", (MR_String) "predicate \140mdb.util.trace_get_command_fallback\'/6", mdb__util__Var_21);
            return;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mdb__util__call_trace_getline_7_p_0(
  MR_Word mdb__util__MdbIn_1,
  MR_Word mdb__util__MdbOut_2,
  MR_String mdb__util__Prompt_3,
  MR_String * mdb__util__Line_4,
  MR_Integer * mdb__util__Success_5)
{
  {
{
#define MR_PROC_LABEL mdb__util__call_trace_getline_7_p_0

	MR_Word MdbIn;
	MR_Word MdbOut;
	MR_String Prompt;
	MR_String Line;
	MR_Integer Success;

	MdbIn =  mdb__util__MdbIn_1 ;
	MdbOut =  mdb__util__MdbOut_2 ;
	Prompt =  mdb__util__Prompt_3 ;
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
	 *mdb__util__Line_4  = Line;
	 *mdb__util__Success_5  = Success;
}
  }
}

void MR_CALL 
mdb__util__limit_3_p_0(
  MR_Word mdb__util__TypeInfo_for_T_8,
  MR_Word mdb__util__Pred_4,
  MR_Word mdb__util__Xs_5,
  MR_Word * mdb__util__Ys_6)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mdb__util__succeeded;
      MR_Word mdb__util__Zs_7;
      void MR_CALL (* mdb__util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mdb__util__Pred_4, (MR_Integer) 1)));
      MR_Box mdb__util__conv1_Zs_7;

      mdb__util__func_0(((MR_Box) mdb__util__Pred_4), ((MR_Box) (mdb__util__Xs_5)), &mdb__util__conv1_Zs_7);
      mdb__util__Zs_7 = ((MR_Word) mdb__util__conv1_Zs_7);
      mdb__util__succeeded = mercury__list____Unify____list_1_0(mdb__util__TypeInfo_for_T_8, mdb__util__Xs_5, mdb__util__Zs_7);
      if (mdb__util__succeeded)
        *mdb__util__Ys_6 = mdb__util__Zs_7;
      else
      {
        /* direct tailcall eliminated */
        {
          MR_Word mdb__util__next_value_of_Xs_5 = mdb__util__Zs_7;

          mdb__util__Xs_5 = mdb__util__next_value_of_Xs_5;
        }
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mdb__util__zip_with_4_p_0(
  MR_Word mdb__util__TypeInfo_for_T1_18,
  MR_Word mdb__util__TypeInfo_for_T2_19,
  MR_Word mdb__util__TypeInfo_for_T3_20,
  MR_Word mdb__util__Pred_5,
  MR_Word mdb__util__XXs_6,
  MR_Word mdb__util__YYs_7,
  MR_Word * mdb__util__Zipped_8)
{
  {
    MR_bool mdb__util__succeeded = (mdb__util__XXs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (mdb__util__succeeded)
      mdb__util__succeeded = (mdb__util__YYs_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (mdb__util__succeeded)
      *mdb__util__Zipped_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Box mdb__util__X_9;
      MR_Word mdb__util__Xs_10;
      MR_Box mdb__util__Y_11;
      MR_Word mdb__util__Ys_12;

      mdb__util__succeeded = ((MR_tag((MR_Word) mdb__util__XXs_6)) == (MR_mktag((MR_Integer) 1)));
      if (mdb__util__succeeded)
      {
        mdb__util__X_9 = (MR_hl_field(MR_mktag(1), mdb__util__XXs_6, (MR_Integer) 0));
        mdb__util__Xs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__util__XXs_6, (MR_Integer) 1)));
        mdb__util__succeeded = ((MR_tag((MR_Word) mdb__util__YYs_7)) == (MR_mktag((MR_Integer) 1)));
        if (mdb__util__succeeded)
        {
          mdb__util__Y_11 = (MR_hl_field(MR_mktag(1), mdb__util__YYs_7, (MR_Integer) 0));
          mdb__util__Ys_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__util__YYs_7, (MR_Integer) 1)));
        }
      }
      if (mdb__util__succeeded)
      {
        MR_Box mdb__util__PXY_13;
        MR_Word mdb__util__ZippedTail_14;
        void MR_CALL (* mdb__util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mdb__util__Pred_5, (MR_Integer) 1)));

        mdb__util__func_0(((MR_Box) mdb__util__Pred_5), mdb__util__X_9, mdb__util__Y_11, &mdb__util__PXY_13);
        mdb__util__zip_with_4_p_0(mdb__util__TypeInfo_for_T1_18, mdb__util__TypeInfo_for_T2_19, mdb__util__TypeInfo_for_T3_20, mdb__util__Pred_5, mdb__util__Xs_10, mdb__util__Ys_12, &mdb__util__ZippedTail_14);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mdb__util__Zipped_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mdb__util__PXY_13;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__util__ZippedTail_14));
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
  MR_String mdb__util__Prompt_1,
  MR_String * mdb__util__Line_2,
  MR_Word mdb__util__MdbIn_3,
  MR_Word mdb__util__MdbOut_4)
{
  {
{
#define MR_PROC_LABEL mdb__util__trace_get_command_6_p_0

	MR_String Prompt;
	MR_String Line;
	MR_Word MdbIn;
	MR_Word MdbOut;

	Prompt =  mdb__util__Prompt_1 ;
	MdbIn =  mdb__util__MdbIn_3 ;
	MdbOut =  mdb__util__MdbOut_4 ;
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
	 *mdb__util__Line_2  = Line;
}
  }
}

void MR_CALL 
mdb__util__trace_get_command_4_p_0(
  MR_String mdb__util__Prompt_5,
  MR_String * mdb__util__Result_6)
{
  {
    MR_Word mdb__util__MdbIn_8;
    MR_Word mdb__util__MdbOut_9;

    mercury__io__input_stream_3_p_0(&mdb__util__MdbIn_8);
    mercury__io__output_stream_3_p_0(&mdb__util__MdbOut_9);
{
#define MR_PROC_LABEL mdb__util__trace_get_command_4_p_0

	MR_String Prompt;
	MR_String Line;
	MR_Word MdbIn;
	MR_Word MdbOut;

	Prompt =  mdb__util__Prompt_5 ;
	MdbIn =  mdb__util__MdbIn_8 ;
	MdbOut =  mdb__util__MdbOut_9 ;
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
	 *mdb__util__Result_6  = Line;
}
  }
}

void MR_CALL 
mdb__util__trace_getline_6_p_0(
  MR_String mdb__util__Prompt_7,
  MR_Word * mdb__util__Result_8,
  MR_Word mdb__util__MdbIn_9,
  MR_Word mdb__util__MdbOut_10)
{
  {
    MR_bool mdb__util__succeeded;
    MR_String mdb__util__Line_12;
    MR_Integer mdb__util__Success_13;

{
#define MR_PROC_LABEL mdb__util__trace_getline_6_p_0

	MR_Word MdbIn;
	MR_Word MdbOut;
	MR_String Prompt;
	MR_String Line;
	MR_Integer Success;

	MdbIn =  mdb__util__MdbIn_9 ;
	MdbOut =  mdb__util__MdbOut_10 ;
	Prompt =  mdb__util__Prompt_7 ;
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
	 mdb__util__Line_12  = Line;
	 mdb__util__Success_13  = Success;
}
    mdb__util__succeeded = (mdb__util__Success_13 == (MR_Integer) 0);
    if (mdb__util__succeeded)
      *mdb__util__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *mdb__util__Result_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__util__Line_12));
      }
  }
}

void MR_CALL 
mdb__util__trace_getline_4_p_0(
  MR_String mdb__util__Prompt_5,
  MR_Word * mdb__util__Result_6)
{
  {
    MR_bool mdb__util__succeeded;
    MR_Word mdb__util__MdbIn_8;
    MR_Word mdb__util__MdbOut_9;
    MR_String mdb__util__Line_22;
    MR_Integer mdb__util__Success_23;

    mercury__io__input_stream_3_p_0(&mdb__util__MdbIn_8);
    mercury__io__output_stream_3_p_0(&mdb__util__MdbOut_9);
{
#define MR_PROC_LABEL mdb__util__trace_getline_4_p_0

	MR_Word MdbIn;
	MR_Word MdbOut;
	MR_String Prompt;
	MR_String Line;
	MR_Integer Success;

	MdbIn =  mdb__util__MdbIn_8 ;
	MdbOut =  mdb__util__MdbOut_9 ;
	Prompt =  mdb__util__Prompt_5 ;
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
	 mdb__util__Line_22  = Line;
	 mdb__util__Success_23  = Success;
}
    mdb__util__succeeded = (mdb__util__Success_23 == (MR_Integer) 0);
    if (mdb__util__succeeded)
      *mdb__util__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *mdb__util__Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__util__Line_22));
      }
  }
}

MR_Word MR_CALL 
mdb__util__is_function_1_f_0(
  MR_Word mdb__util__HeadVar__1_1)
{
  {
    MR_Word mdb__util__HeadVar__2_2;

    switch (mdb__util__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mdb__util__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 0:
        mdb__util__HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
    return mdb__util__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mdb__util__is_predicate_1_f_0(
  MR_Word mdb__util__HeadVar__1_1)
{
  {
    MR_Word mdb__util__HeadVar__2_2;

    switch (mdb__util__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mdb__util__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 0:
        mdb__util__HeadVar__2_2 = (MR_Integer) 1;
        break;
    }
    return mdb__util__HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
mdb__util____Unify____line_number_0_0_10001(
  MR_Box mdb__util__wrapper_arg_1,
  MR_Box mdb__util__wrapper_arg_2)
{
  {
    MR_bool mdb__util__succeeded;

    mdb__util__succeeded = mdb__util____Unify____line_number_0_0(((MR_Integer) mdb__util__wrapper_arg_1), ((MR_Integer) mdb__util__wrapper_arg_2));
    return mdb__util__succeeded;
  }
}

static void MR_CALL 
mdb__util____Compare____line_number_0_0_10001(
  MR_Box * mdb__util__wrapper_arg_1,
  MR_Box mdb__util__wrapper_arg_2,
  MR_Box mdb__util__wrapper_arg_3)
{
  {
    MR_Word mdb__util__conv0_HeadVar__1_1;

    mdb__util____Compare____line_number_0_0(&mdb__util__conv0_HeadVar__1_1, ((MR_Integer) mdb__util__wrapper_arg_2), ((MR_Integer) mdb__util__wrapper_arg_3));
    *mdb__util__wrapper_arg_1 = ((MR_Box) (mdb__util__conv0_HeadVar__1_1));
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

/* :- end_module mdb.util. */
