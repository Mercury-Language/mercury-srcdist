/*
** Automatically generated from `util.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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




#line 69 "mdb.util.c"
static MR_bool MR_CALL 
mdb__util____Unify____line_number_0_0_10001(
#line 72 "mdb.util.c"
  MR_Box mdb__util__wrapper_arg_1,
#line 74 "mdb.util.c"
  MR_Box mdb__util__wrapper_arg_2);

#line 77 "mdb.util.c"
static void MR_CALL 
mdb__util____Compare____line_number_0_0_10001(
#line 80 "mdb.util.c"
  MR_Box * mdb__util__wrapper_arg_1,
#line 82 "mdb.util.c"
  MR_Box mdb__util__wrapper_arg_2,
#line 84 "mdb.util.c"
  MR_Box mdb__util__wrapper_arg_3);

#line 170 "util.m"
static void MR_CALL 
mdb__util__trace_get_command_fallback_6_p_0(
#line 170 "util.m"
  MR_String mdb__util__Prompt_7,
#line 170 "util.m"
  MR_String * mdb__util__String_8,
#line 170 "util.m"
  MR_Word mdb__util__MdbIn_9,
#line 170 "util.m"
  MR_Word mdb__util__MdbOut_10);

#line 80 "util.m"
static void MR_CALL 
mdb__util__call_trace_getline_7_p_0(
#line 80 "util.m"
  MR_Word mdb__util__MdbIn_1,
#line 80 "util.m"
  MR_Word mdb__util__MdbOut_2,
#line 80 "util.m"
  MR_String mdb__util__Prompt_3,
#line 80 "util.m"
  MR_String * mdb__util__Line_4,
#line 80 "util.m"
  MR_Integer * mdb__util__Success_5);







#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.util.mh"

#line 173 "util.m"
void 
ML_BROWSER_trace_get_command_fallback(
#line 173 "util.m"
  MR_String mdb__util__Prompt_7,
#line 173 "util.m"
  MR_String * mdb__util__String_8,
#line 173 "util.m"
  MR_Word mdb__util__MdbIn_9,
#line 173 "util.m"
  MR_Word mdb__util__MdbOut_10)
#line 173 "util.m"
{
#line 173 "util.m"
	mdb__util__trace_get_command_fallback_6_p_0((MR_String) mdb__util__Prompt_7, (MR_String *) mdb__util__String_8, (MR_Word) mdb__util__MdbIn_9, (MR_Word) mdb__util__MdbOut_10);
}


#line 143 "mdb.util.c"
const MR_TypeCtorInfo_Struct mdb__util__mdb__util__type_ctor_info_line_number_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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

#line 160 "mdb.util.c"
static MR_bool MR_CALL 
mdb__util____Unify____line_number_0_0_10001(
#line 163 "mdb.util.c"
  MR_Box mdb__util__wrapper_arg_1,
#line 165 "mdb.util.c"
  MR_Box mdb__util__wrapper_arg_2)
#line 167 "mdb.util.c"
{
#line 169 "mdb.util.c"
  {
#line 171 "mdb.util.c"
    MR_bool mdb__util__succeeded;

#line 174 "mdb.util.c"
    {
#line 176 "mdb.util.c"
      mdb__util__succeeded = mdb__util____Unify____line_number_0_0(((MR_Integer) mdb__util__wrapper_arg_1), ((MR_Integer) mdb__util__wrapper_arg_2));
    }
#line 179 "mdb.util.c"
    return mdb__util__succeeded;
#line 181 "mdb.util.c"
  }
#line 183 "mdb.util.c"
}

#line 186 "mdb.util.c"
static void MR_CALL 
mdb__util____Compare____line_number_0_0_10001(
#line 189 "mdb.util.c"
  MR_Box * mdb__util__wrapper_arg_1,
#line 191 "mdb.util.c"
  MR_Box mdb__util__wrapper_arg_2,
#line 193 "mdb.util.c"
  MR_Box mdb__util__wrapper_arg_3)
#line 195 "mdb.util.c"
{
#line 197 "mdb.util.c"
  {
#line 199 "mdb.util.c"
    MR_Word mdb__util__conv0_HeadVar__1_1;

#line 202 "mdb.util.c"
    {
#line 204 "mdb.util.c"
      mdb__util____Compare____line_number_0_0(&mdb__util__conv0_HeadVar__1_1, ((MR_Integer) mdb__util__wrapper_arg_2), ((MR_Integer) mdb__util__wrapper_arg_3));
    }
#line 207 "mdb.util.c"
    *mdb__util__wrapper_arg_1 = ((MR_Box) (mdb__util__conv0_HeadVar__1_1));
#line 209 "mdb.util.c"
  }
#line 211 "mdb.util.c"
}

#line 23 "util.m"
void MR_CALL 
mdb__util____Compare____line_number_0_0(
#line 23 "util.m"
  MR_Word * mdb__util__HeadVar__1_1,
#line 23 "util.m"
  MR_Integer mdb__util__HeadVar__2_2,
#line 23 "util.m"
  MR_Integer mdb__util__HeadVar__3_3)
#line 23 "util.m"
{
#line 23 "util.m"
  {
#line 23 "util.m"
    MR_bool mdb__util__succeeded;
#line 23 "util.m"
    MR_Integer mdb__util__Cast_HeadVar1_4 = mdb__util__HeadVar__2_2;
#line 23 "util.m"
    MR_Integer mdb__util__Cast_HeadVar2_5 = mdb__util__HeadVar__3_3;

#line 23 "util.m"
    {
#line 23 "util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__util__HeadVar__1_1, mdb__util__Cast_HeadVar1_4, mdb__util__Cast_HeadVar2_5);
#line 23 "util.m"
      return;
    }
#line 23 "util.m"
  }
#line 23 "util.m"
}

#line 23 "util.m"
MR_bool MR_CALL 
mdb__util____Unify____line_number_0_0(
#line 23 "util.m"
  MR_Integer mdb__util__HeadVar__1_1,
#line 23 "util.m"
  MR_Integer mdb__util__HeadVar__2_2)
#line 23 "util.m"
{
#line 23 "util.m"
  {
#line 23 "util.m"
    MR_bool mdb__util__succeeded;
#line 23 "util.m"
    MR_Integer mdb__util__Cast_HeadVar1_3 = mdb__util__HeadVar__1_1;
#line 23 "util.m"
    MR_Integer mdb__util__Cast_HeadVar2_4 = mdb__util__HeadVar__2_2;

#line 23 "util.m"
    mdb__util__succeeded = (mdb__util__Cast_HeadVar1_3 == mdb__util__Cast_HeadVar2_4);
#line 23 "util.m"
    return mdb__util__succeeded;
#line 23 "util.m"
  }
#line 23 "util.m"
}

#line 170 "util.m"
static void MR_CALL 
mdb__util__trace_get_command_fallback_6_p_0(
#line 170 "util.m"
  MR_String mdb__util__Prompt_7,
#line 170 "util.m"
  MR_String * mdb__util__String_8,
#line 170 "util.m"
  MR_Word mdb__util__MdbIn_9,
#line 170 "util.m"
  MR_Word mdb__util__MdbOut_10)
#line 170 "util.m"
{
#line 177 "util.m"
  {
#line 177 "util.m"
    MR_bool mdb__util__succeeded;
#line 177 "util.m"
    MR_Word mdb__util__Result_12;

#line 178 "util.m"
    {
#line 178 "util.m"
      mercury__io__write_string_4_p_0(mdb__util__MdbOut_10, mdb__util__Prompt_7);
    }
#line 179 "util.m"
    {
#line 179 "util.m"
      mercury__io__flush_output_3_p_0(mdb__util__MdbOut_10);
    }
#line 180 "util.m"
    {
#line 180 "util.m"
      mercury__io__read_line_as_string_4_p_0(mdb__util__MdbIn_9, &mdb__util__Result_12);
    }
#line 183 "util.m"
#line 183 "util.m"
    switch (MR_tag((MR_Word) mdb__util__Result_12)) {
#line 183 "util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 183 "util.m"
      case (MR_Integer) 0:
#line 185 "util.m"
        *mdb__util__String_8 = (MR_String) "quit";
#line 183 "util.m"
        break;
#line 183 "util.m"
      case (MR_Integer) 1:
#line 182 "util.m"
        *mdb__util__String_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__util__Result_12, (MR_Integer) 0)));
#line 183 "util.m"
        break;
#line 183 "util.m"
      case (MR_Integer) 2:
#line 187 "util.m"
        {
#line 187 "util.m"
          MR_Word mdb__util__Error_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__util__Result_12, (MR_Integer) 0)));
#line 187 "util.m"
          MR_String mdb__util__V_21_21;

#line 188 "util.m"
          {
#line 188 "util.m"
            mdb__util__V_21_21 = mercury__io__error_message_1_f_0(mdb__util__Error_13);
          }
#line 188 "util.m"
          {
#line 188 "util.m"
            mercury__require__unexpected_3_p_0((MR_String) "mdb.util", (MR_String) "predicate \140mdb.util.trace_get_command_fallback\'/6", mdb__util__V_21_21);
#line 188 "util.m"
            return;
          }
#line 187 "util.m"
        }
#line 183 "util.m"
        break;
#line 183 "util.m"
    }
#line 177 "util.m"
  }
#line 170 "util.m"
}

#line 80 "util.m"
static void MR_CALL 
mdb__util__call_trace_getline_7_p_0(
#line 80 "util.m"
  MR_Word mdb__util__MdbIn_1,
#line 80 "util.m"
  MR_Word mdb__util__MdbOut_2,
#line 80 "util.m"
  MR_String mdb__util__Prompt_3,
#line 80 "util.m"
  MR_String * mdb__util__Line_4,
#line 80 "util.m"
  MR_Integer * mdb__util__Success_5)
#line 80 "util.m"
{
#line 90 "util.m"
  {
#line 90 "util.m"
    MR_bool mdb__util__succeeded;

#line 97 "util.m"
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
#line 97 "util.m"

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

#line 415 "mdb.util.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__util__Line_4  = Line;
	 *mdb__util__Success_5  = Success;
#line 97 "util.m"
}
#line 90 "util.m"
  }
#line 80 "util.m"
}

#line 49 "util.m"
void MR_CALL 
mdb__util__limit_3_p_0(
#line 49 "util.m"
  MR_Word mdb__util__TypeInfo_for_T_8,
#line 49 "util.m"
  MR_Word mdb__util__Pred_4,
#line 49 "util.m"
  MR_Word mdb__util__Xs_5,
#line 49 "util.m"
  MR_Word * mdb__util__Ys_6)
#line 49 "util.m"
{
#line 202 "util.m"
  while (MR_TRUE)
#line 202 "util.m"
    {
#line 202 "util.m"
      /* tailcall optimized into a loop */
#line 202 "util.m"
      {
#line 202 "util.m"
        MR_bool mdb__util__succeeded;
#line 202 "util.m"
        MR_Word mdb__util__Zs_7;
#line 203 "util.m"
        void MR_CALL (* mdb__util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mdb__util__Pred_4, (MR_Integer) 1)));
#line 203 "util.m"
        MR_Box mdb__util__conv1_Zs_7;

#line 203 "util.m"
        {
#line 203 "util.m"
          mdb__util__func_0(((MR_Box) mdb__util__Pred_4), ((MR_Box) (mdb__util__Xs_5)), &mdb__util__conv1_Zs_7);
        }
#line 203 "util.m"
        mdb__util__Zs_7 = ((MR_Word) mdb__util__conv1_Zs_7);
#line 204 "util.m"
        {
#line 204 "util.m"
          mdb__util__succeeded = mercury__list____Unify____list_1_0(mdb__util__TypeInfo_for_T_8, mdb__util__Xs_5, mdb__util__Zs_7);
        }
#line 206 "util.m"
        if (mdb__util__succeeded)
#line 205 "util.m"
          *mdb__util__Ys_6 = mdb__util__Zs_7;
#line 206 "util.m"
        else
#line 207 "util.m"
          {
#line 207 "util.m"
            /* direct tailcall eliminated */
#line 207 "util.m"
            {
#line 207 "util.m"
              MR_Word mdb__util__Xs__tmp_copy_5 = mdb__util__Zs_7;

#line 207 "util.m"
              mdb__util__Xs_5 = mdb__util__Xs__tmp_copy_5;
#line 207 "util.m"
            }
#line 207 "util.m"
            continue;
#line 207 "util.m"
          }
#line 202 "util.m"
      }
#line 202 "util.m"
      break;
#line 202 "util.m"
    }
#line 49 "util.m"
}

#line 43 "util.m"
void MR_CALL 
mdb__util__zip_with_4_p_0(
#line 43 "util.m"
  MR_Word mdb__util__TypeInfo_for_T1_18,
#line 43 "util.m"
  MR_Word mdb__util__TypeInfo_for_T2_19,
#line 43 "util.m"
  MR_Word mdb__util__TypeInfo_for_T3_20,
#line 43 "util.m"
  MR_Word mdb__util__Pred_5,
#line 43 "util.m"
  MR_Word mdb__util__XXs_6,
#line 43 "util.m"
  MR_Word mdb__util__YYs_7,
#line 43 "util.m"
  MR_Word * mdb__util__Zipped_8)
#line 43 "util.m"
{
#line 194 "util.m"
  {
#line 194 "util.m"
    MR_bool mdb__util__succeeded = (mdb__util__XXs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 192 "util.m"
    if (mdb__util__succeeded)
#line 192 "util.m"
      mdb__util__succeeded = (mdb__util__YYs_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 194 "util.m"
    if (mdb__util__succeeded)
#line 193 "util.m"
      *mdb__util__Zipped_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 194 "util.m"
    else
#line 198 "util.m"
      {
#line 198 "util.m"
        MR_Box mdb__util__X_9;
#line 198 "util.m"
        MR_Word mdb__util__Xs_10;
#line 198 "util.m"
        MR_Box mdb__util__Y_11;
#line 198 "util.m"
        MR_Word mdb__util__Ys_12;

#line 194 "util.m"
        mdb__util__succeeded = ((MR_tag((MR_Word) mdb__util__XXs_6)) == (MR_mktag((MR_Integer) 1)));
#line 194 "util.m"
        if (mdb__util__succeeded)
#line 194 "util.m"
          {
#line 194 "util.m"
            mdb__util__X_9 = (MR_hl_field(MR_mktag(1), mdb__util__XXs_6, (MR_Integer) 0));
#line 194 "util.m"
            mdb__util__Xs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__util__XXs_6, (MR_Integer) 1)));
#line 194 "util.m"
            mdb__util__succeeded = ((MR_tag((MR_Word) mdb__util__YYs_7)) == (MR_mktag((MR_Integer) 1)));
#line 194 "util.m"
            if (mdb__util__succeeded)
#line 194 "util.m"
              {
#line 194 "util.m"
                mdb__util__Y_11 = (MR_hl_field(MR_mktag(1), mdb__util__YYs_7, (MR_Integer) 0));
#line 194 "util.m"
                mdb__util__Ys_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__util__YYs_7, (MR_Integer) 1)));
#line 194 "util.m"
              }
#line 194 "util.m"
          }
#line 198 "util.m"
        if (mdb__util__succeeded)
#line 195 "util.m"
          {
#line 195 "util.m"
            MR_Box mdb__util__PXY_13;
#line 195 "util.m"
            MR_Word mdb__util__ZippedTail_14;
#line 195 "util.m"
            void MR_CALL (* mdb__util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mdb__util__Pred_5, (MR_Integer) 1)));

#line 195 "util.m"
            {
#line 195 "util.m"
              mdb__util__func_0(((MR_Box) mdb__util__Pred_5), mdb__util__X_9, mdb__util__Y_11, &mdb__util__PXY_13);
            }
#line 196 "util.m"
            {
#line 196 "util.m"
              mdb__util__zip_with_4_p_0(mdb__util__TypeInfo_for_T1_18, mdb__util__TypeInfo_for_T2_19, mdb__util__TypeInfo_for_T3_20, mdb__util__Pred_5, mdb__util__Xs_10, mdb__util__Ys_12, &mdb__util__ZippedTail_14);
            }
#line 197 "util.m"
            {
#line 197 "util.m"
              MR_Word base;
#line 197 "util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 197 "util.m"
              *mdb__util__Zipped_8 = base;
#line 197 "util.m"
              MR_hl_field(MR_mktag(1), base, 0) = mdb__util__PXY_13;
#line 197 "util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__util__ZippedTail_14));
#line 197 "util.m"
            }
#line 195 "util.m"
          }
#line 198 "util.m"
        else
#line 199 "util.m"
          {
#line 199 "util.m"
            {
#line 199 "util.m"
              mercury__require__unexpected_3_p_0((MR_String) "mdb.util", (MR_String) "predicate \140mdb.util.zip_with\'/4", (MR_String) "list arguments are of unequal length");
#line 199 "util.m"
              return;
            }
#line 199 "util.m"
          }
#line 198 "util.m"
      }
#line 194 "util.m"
  }
#line 43 "util.m"
}

#line 40 "util.m"
void MR_CALL 
mdb__util__trace_get_command_6_p_0(
#line 40 "util.m"
  MR_String mdb__util__Prompt_1,
#line 40 "util.m"
  MR_String * mdb__util__Line_2,
#line 40 "util.m"
  MR_Word mdb__util__MdbIn_3,
#line 40 "util.m"
  MR_Word mdb__util__MdbOut_4)
#line 40 "util.m"
{
#line 142 "util.m"
  {
#line 142 "util.m"
    MR_bool mdb__util__succeeded;

#line 146 "util.m"
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
#line 146 "util.m"

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

#line 677 "mdb.util.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__util__Line_2  = Line;
#line 146 "util.m"
}
#line 142 "util.m"
  }
#line 40 "util.m"
}

#line 37 "util.m"
void MR_CALL 
mdb__util__trace_get_command_4_p_0(
#line 37 "util.m"
  MR_String mdb__util__Prompt_5,
#line 37 "util.m"
  MR_String * mdb__util__Result_6)
#line 37 "util.m"
{
#line 137 "util.m"
  {
#line 137 "util.m"
    MR_bool mdb__util__succeeded;
#line 137 "util.m"
    MR_Word mdb__util__MdbIn_8;
#line 137 "util.m"
    MR_Word mdb__util__MdbOut_9;

#line 138 "util.m"
    {
#line 138 "util.m"
      mercury__io__input_stream_3_p_0(&mdb__util__MdbIn_8);
    }
#line 139 "util.m"
    {
#line 139 "util.m"
      mercury__io__output_stream_3_p_0(&mdb__util__MdbOut_9);
    }
#line 146 "util.m"
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
#line 146 "util.m"

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

#line 748 "mdb.util.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__util__Result_6  = Line;
#line 146 "util.m"
}
#line 137 "util.m"
  }
#line 37 "util.m"
}

#line 30 "util.m"
void MR_CALL 
mdb__util__trace_getline_6_p_0(
#line 30 "util.m"
  MR_String mdb__util__Prompt_7,
#line 30 "util.m"
  MR_Word * mdb__util__Result_8,
#line 30 "util.m"
  MR_Word mdb__util__MdbIn_9,
#line 30 "util.m"
  MR_Word mdb__util__MdbOut_10)
#line 30 "util.m"
{
#line 72 "util.m"
  {
#line 72 "util.m"
    MR_bool mdb__util__succeeded;
#line 72 "util.m"
    MR_String mdb__util__Line_12;
#line 72 "util.m"
    MR_Integer mdb__util__Success_13;

#line 97 "util.m"
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
#line 97 "util.m"

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

#line 820 "mdb.util.c"

		;}
#undef MR_PROC_LABEL
	 mdb__util__Line_12  = Line;
	 mdb__util__Success_13  = Success;
#line 97 "util.m"
}
#line 74 "util.m"
    mdb__util__succeeded = (mdb__util__Success_13 == (MR_Integer) 0);
#line 76 "util.m"
    if (mdb__util__succeeded)
#line 75 "util.m"
      *mdb__util__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 76 "util.m"
    else
#line 77 "util.m"
      {
#line 77 "util.m"
        MR_Word base;
#line 77 "util.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 77 "util.m"
        *mdb__util__Result_8 = base;
#line 77 "util.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__util__Line_12));
#line 77 "util.m"
      }
#line 72 "util.m"
  }
#line 30 "util.m"
}

#line 27 "util.m"
void MR_CALL 
mdb__util__trace_getline_4_p_0(
#line 27 "util.m"
  MR_String mdb__util__Prompt_5,
#line 27 "util.m"
  MR_Word * mdb__util__Result_6)
#line 27 "util.m"
{
#line 67 "util.m"
  {
#line 67 "util.m"
    MR_bool mdb__util__succeeded;
#line 67 "util.m"
    MR_Word mdb__util__MdbIn_8;
#line 67 "util.m"
    MR_Word mdb__util__MdbOut_9;
#line 67 "util.m"
    MR_String mdb__util__Line_22;
#line 67 "util.m"
    MR_Integer mdb__util__Success_23;

#line 68 "util.m"
    {
#line 68 "util.m"
      mercury__io__input_stream_3_p_0(&mdb__util__MdbIn_8);
    }
#line 69 "util.m"
    {
#line 69 "util.m"
      mercury__io__output_stream_3_p_0(&mdb__util__MdbOut_9);
    }
#line 97 "util.m"
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
#line 97 "util.m"

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

#line 923 "mdb.util.c"

		;}
#undef MR_PROC_LABEL
	 mdb__util__Line_22  = Line;
	 mdb__util__Success_23  = Success;
#line 97 "util.m"
}
#line 74 "util.m"
    mdb__util__succeeded = (mdb__util__Success_23 == (MR_Integer) 0);
#line 76 "util.m"
    if (mdb__util__succeeded)
#line 75 "util.m"
      *mdb__util__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 76 "util.m"
    else
#line 77 "util.m"
      {
#line 77 "util.m"
        MR_Word base;
#line 77 "util.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 77 "util.m"
        *mdb__util__Result_6 = base;
#line 77 "util.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__util__Line_22));
#line 77 "util.m"
      }
#line 67 "util.m"
  }
#line 27 "util.m"
}

#line 21 "util.m"
MR_Word MR_CALL 
mdb__util__is_function_1_f_0(
#line 21 "util.m"
  MR_Word mdb__util__HeadVar__1_1)
#line 21 "util.m"
{
#line 64 "util.m"
  {
#line 64 "util.m"
    MR_bool mdb__util__succeeded;
#line 64 "util.m"
    MR_Word mdb__util__HeadVar__2_2;

#line 64 "util.m"
#line 64 "util.m"
    switch (mdb__util__HeadVar__1_1) {
#line 64 "util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 64 "util.m"
      case (MR_Integer) 1:
#line 65 "util.m"
        mdb__util__HeadVar__2_2 = (MR_Integer) 1;
#line 64 "util.m"
        break;
#line 64 "util.m"
      case (MR_Integer) 0:
#line 64 "util.m"
        mdb__util__HeadVar__2_2 = (MR_Integer) 0;
#line 64 "util.m"
        break;
#line 64 "util.m"
    }
#line 64 "util.m"
    return mdb__util__HeadVar__2_2;
#line 64 "util.m"
  }
#line 21 "util.m"
}

#line 20 "util.m"
MR_Word MR_CALL 
mdb__util__is_predicate_1_f_0(
#line 20 "util.m"
  MR_Word mdb__util__HeadVar__1_1)
#line 20 "util.m"
{
#line 61 "util.m"
  {
#line 61 "util.m"
    MR_bool mdb__util__succeeded;
#line 61 "util.m"
    MR_Word mdb__util__HeadVar__2_2;

#line 61 "util.m"
#line 61 "util.m"
    switch (mdb__util__HeadVar__1_1) {
#line 61 "util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 61 "util.m"
      case (MR_Integer) 1:
#line 62 "util.m"
        mdb__util__HeadVar__2_2 = (MR_Integer) 0;
#line 61 "util.m"
        break;
#line 61 "util.m"
      case (MR_Integer) 0:
#line 61 "util.m"
        mdb__util__HeadVar__2_2 = (MR_Integer) 1;
#line 61 "util.m"
        break;
#line 61 "util.m"
    }
#line 61 "util.m"
    return mdb__util__HeadVar__2_2;
#line 61 "util.m"
  }
#line 20 "util.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdb.util. */
