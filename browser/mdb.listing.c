/*
** Automatically generated from `listing.m'
** by the Mercury compiler,
** version rotd-2017-07-31
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


/* :- module mdb.listing. */
/* :- implementation. */

/*
INIT mercury__mdb__listing__init
ENDINIT
*/

#include "mdb.listing.mih"
#include "mdb.listing.mh"


#include "mdb.mih"
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
#include "int.mih"
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




static const MR_FA_TypeInfo_Struct1 mdb__listing__list__ti_list_1builtin__type_ctor_info_string_0;

static void MR_CALL 
mdb__listing__print_lines_in_range_c_8_p_0(
  MR_Box mdb__listing__InStrm_1,
  MR_Box mdb__listing__OutStrm_2,
  MR_Integer mdb__listing__ThisLine_3,
  MR_Integer mdb__listing__FirstLine_4,
  MR_Integer mdb__listing__LastLine_5,
  MR_Integer mdb__listing__MarkLine_6);

static MR_Box MR_CALL 
mdb__listing__mercury_stream_to_c_FILE_star_1_f_0(
  MR_Word mdb__listing__InStream_1);

static void MR_CALL 
mdb__listing__write_to_c_file_4_p_0(
  MR_Box mdb__listing__ErrStrm_1,
  MR_String mdb__listing__Str_2);

static MR_Word MR_CALL 
mdb__listing__listing_type_0_f_0(void);

static void MR_CALL 
mdb__listing__print_lines_in_range_m_8_p_0(
  MR_Word mdb__listing__InStrm_9,
  MR_Word mdb__listing__OutStrm_10,
  MR_Integer mdb__listing__ThisLine_11,
  MR_Integer mdb__listing__FirstLine_12,
  MR_Integer mdb__listing__LastLine_13,
  MR_Integer mdb__listing__MarkLine_14);

static void MR_CALL 
mdb__listing__find_and_open_file_5_p_0(
  MR_Word mdb__listing__HeadVar__1_1,
  MR_String mdb__listing__FileName_2,
  MR_Word * mdb__listing__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__listing____Unify____c_file_ptr_0_0_10001(
  MR_Box mdb__listing__wrapper_arg_1,
  MR_Box mdb__listing__wrapper_arg_2);

static void MR_CALL 
mdb__listing____Compare____c_file_ptr_0_0_10001(
  MR_Box * mdb__listing__wrapper_arg_1,
  MR_Box mdb__listing__wrapper_arg_2,
  MR_Box mdb__listing__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__listing____Unify____file_name_0_0_10001(
  MR_Box mdb__listing__wrapper_arg_1,
  MR_Box mdb__listing__wrapper_arg_2);

static void MR_CALL 
mdb__listing____Compare____file_name_0_0_10001(
  MR_Box * mdb__listing__wrapper_arg_1,
  MR_Box mdb__listing__wrapper_arg_2,
  MR_Box mdb__listing__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__listing____Unify____line_no_0_0_10001(
  MR_Box mdb__listing__wrapper_arg_1,
  MR_Box mdb__listing__wrapper_arg_2);

static void MR_CALL 
mdb__listing____Compare____line_no_0_0_10001(
  MR_Box * mdb__listing__wrapper_arg_1,
  MR_Box mdb__listing__wrapper_arg_2,
  MR_Box mdb__listing__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__listing____Unify____path_name_0_0_10001(
  MR_Box mdb__listing__wrapper_arg_1,
  MR_Box mdb__listing__wrapper_arg_2);

static void MR_CALL 
mdb__listing____Compare____path_name_0_0_10001(
  MR_Box * mdb__listing__wrapper_arg_1,
  MR_Box mdb__listing__wrapper_arg_2,
  MR_Box mdb__listing__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__listing____Unify____search_path_0_0_10001(
  MR_Box mdb__listing__wrapper_arg_1,
  MR_Box mdb__listing__wrapper_arg_2);

static void MR_CALL 
mdb__listing____Compare____search_path_0_0_10001(
  MR_Box * mdb__listing__wrapper_arg_1,
  MR_Box mdb__listing__wrapper_arg_2,
  MR_Box mdb__listing__wrapper_arg_3);


static /* final */ const MR_Box mdb__listing_scalar_common_1[1][2];




static /* final */ const MR_Box mdb__listing_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "dir.mh"
#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.listing.mh"

#line 112 "listing.m"
MR_Word 
ML_LISTING_new_list_path(void)
#line 112 "listing.m"
{
#line 112 "listing.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__listing__new_list_path_0_f_0();
	return ret_value;
}

#line 114 "listing.m"
MR_Word 
ML_LISTING_get_list_path(
  MR_Word mdb__listing__Path_3)
#line 114 "listing.m"
{
#line 114 "listing.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__listing__get_list_path_1_f_0((MR_Word) mdb__listing__Path_3);
	return ret_value;
}

#line 116 "listing.m"
void 
ML_LISTING_set_list_path(
  MR_Word mdb__listing__Dirs_4,
  MR_Word mdb__listing__HeadVar__2_5,
  MR_Word * mdb__listing__Dirs_3)
#line 116 "listing.m"
{
#line 116 "listing.m"
	mdb__listing__set_list_path_3_p_0((MR_Word) mdb__listing__Dirs_4, (MR_Word) mdb__listing__HeadVar__2_5, (MR_Word *) mdb__listing__Dirs_3);
}

#line 118 "listing.m"
void 
ML_LISTING_clear_list_path(
  MR_Word mdb__listing__HeadVar__1_3,
  MR_Word * mdb__listing__HeadVar__2_2)
#line 118 "listing.m"
{
#line 118 "listing.m"
	mdb__listing__clear_list_path_2_p_0((MR_Word) mdb__listing__HeadVar__1_3, (MR_Word *) mdb__listing__HeadVar__2_2);
}

#line 120 "listing.m"
void 
ML_LISTING_push_list_path(
  MR_String mdb__listing__Dir_4,
  MR_Word mdb__listing__Path_5,
  MR_Word * mdb__listing__HeadVar__3_3)
#line 120 "listing.m"
{
#line 120 "listing.m"
	mdb__listing__push_list_path_3_p_0((MR_String) mdb__listing__Dir_4, (MR_Word) mdb__listing__Path_5, (MR_Word *) mdb__listing__HeadVar__3_3);
}

#line 122 "listing.m"
void 
ML_LISTING_pop_list_path(
  MR_Word mdb__listing__HeadVar__1_1,
  MR_Word * mdb__listing__HeadVar__2_2)
#line 122 "listing.m"
{
#line 122 "listing.m"
	mdb__listing__pop_list_path_2_p_0((MR_Word) mdb__listing__HeadVar__1_1, (MR_Word *) mdb__listing__HeadVar__2_2);
}

#line 124 "listing.m"
void 
ML_LISTING_list_file(
  FILE * mdb__listing__OutStrm_10,
  FILE * mdb__listing__ErrStrm_11,
  MR_String mdb__listing__FileName_12,
  MR_Integer mdb__listing__FirstLine_13,
  MR_Integer mdb__listing__LastLine_14,
  MR_Integer mdb__listing__MarkLine_15,
  MR_Word mdb__listing__Path_16)
#line 124 "listing.m"
{
#line 124 "listing.m"
	MR_Box mdb__listing__boxed_OutStrm_10;
	MR_Box mdb__listing__boxed_ErrStrm_11;
	MR_MAYBE_BOX_FOREIGN_TYPE(FILE *, mdb__listing__OutStrm_10, mdb__listing__boxed_OutStrm_10);
	MR_MAYBE_BOX_FOREIGN_TYPE(FILE *, mdb__listing__ErrStrm_11, mdb__listing__boxed_ErrStrm_11);
	mdb__listing__list_file_9_p_0(mdb__listing__boxed_OutStrm_10, mdb__listing__boxed_ErrStrm_11, (MR_String) mdb__listing__FileName_12, (MR_Integer) mdb__listing__FirstLine_13, (MR_Integer) mdb__listing__LastLine_14, (MR_Integer) mdb__listing__MarkLine_15, (MR_Word) mdb__listing__Path_16);
}

#line 128 "listing.m"
MR_Word 
ML_LISTING_listing_type(void)
#line 128 "listing.m"
{
#line 128 "listing.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__listing__listing_type_0_f_0();
	return ret_value;
}


const MR_TypeCtorInfo_Struct mdb__listing__mdb__listing__type_ctor_info_c_file_ptr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mdb__listing____Unify____c_file_ptr_0_0_10001)),
  ((MR_Box) (mdb__listing____Compare____c_file_ptr_0_0_10001)),
  (MR_String) "mdb.listing",
  (MR_String) "c_file_ptr",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mdb__listing__mdb__listing__type_ctor_info_file_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__listing____Unify____file_name_0_0_10001)),
  ((MR_Box) (mdb__listing____Compare____file_name_0_0_10001)),
  (MR_String) "mdb.listing",
  (MR_String) "file_name",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mdb__listing__mdb__listing__type_ctor_info_line_no_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__listing____Unify____line_no_0_0_10001)),
  ((MR_Box) (mdb__listing____Compare____line_no_0_0_10001)),
  (MR_String) "mdb.listing",
  (MR_String) "line_no",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mdb__listing__mdb__listing__type_ctor_info_path_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__listing____Unify____path_name_0_0_10001)),
  ((MR_Box) (mdb__listing____Compare____path_name_0_0_10001)),
  (MR_String) "mdb.listing",
  (MR_String) "path_name",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 mdb__listing__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

const MR_TypeCtorInfo_Struct mdb__listing__mdb__listing__type_ctor_info_search_path_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__listing____Unify____search_path_0_0_10001)),
  ((MR_Box) (mdb__listing____Compare____search_path_0_0_10001)),
  (MR_String) "mdb.listing",
  (MR_String) "search_path",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdb__listing__list__ti_list_1builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

void MR_CALL 
mdb__listing____Compare____search_path_0_0(
  MR_Word * mdb__listing__HeadVar__1_1,
  MR_Word mdb__listing__HeadVar__2_2,
  MR_Word mdb__listing__HeadVar__3_3)
{
  {
    MR_Word mdb__listing__Cast_HeadVar1_4 = mdb__listing__HeadVar__2_2;
    MR_Word mdb__listing__Cast_HeadVar2_5 = mdb__listing__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &mdb__listing_scalar_common_1[0], mdb__listing__HeadVar__1_1, ((MR_Box) (mdb__listing__Cast_HeadVar1_4)), ((MR_Box) (mdb__listing__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
mdb__listing____Unify____search_path_0_0(
  MR_Word mdb__listing__HeadVar__1_1,
  MR_Word mdb__listing__HeadVar__2_2)
{
  {
    MR_bool mdb__listing__succeeded;
    MR_Word mdb__listing__Cast_HeadVar1_3 = mdb__listing__HeadVar__1_1;
    MR_Word mdb__listing__Cast_HeadVar2_4 = mdb__listing__HeadVar__2_2;

    {
      mdb__listing__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__listing_scalar_common_1[0], ((MR_Box) (mdb__listing__Cast_HeadVar1_3)), ((MR_Box) (mdb__listing__Cast_HeadVar2_4)));
    }
    return mdb__listing__succeeded;
  }
}

void MR_CALL 
mdb__listing____Compare____path_name_0_0(
  MR_Word * mdb__listing__HeadVar__1_1,
  MR_String mdb__listing__HeadVar__2_2,
  MR_String mdb__listing__HeadVar__3_3)
{
  {
    MR_String mdb__listing__Cast_HeadVar1_4 = mdb__listing__HeadVar__2_2;
    MR_String mdb__listing__Cast_HeadVar2_5 = mdb__listing__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_string_3_p_0(mdb__listing__HeadVar__1_1, mdb__listing__Cast_HeadVar1_4, mdb__listing__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdb__listing____Unify____path_name_0_0(
  MR_String mdb__listing__HeadVar__1_1,
  MR_String mdb__listing__HeadVar__2_2)
{
  {
    MR_bool mdb__listing__succeeded;
    MR_String mdb__listing__Cast_HeadVar1_3 = mdb__listing__HeadVar__1_1;
    MR_String mdb__listing__Cast_HeadVar2_4 = mdb__listing__HeadVar__2_2;

    mdb__listing__succeeded = (strcmp(mdb__listing__Cast_HeadVar1_3, mdb__listing__Cast_HeadVar2_4) == 0);
    return mdb__listing__succeeded;
  }
}

void MR_CALL 
mdb__listing____Compare____line_no_0_0(
  MR_Word * mdb__listing__HeadVar__1_1,
  MR_Integer mdb__listing__HeadVar__2_2,
  MR_Integer mdb__listing__HeadVar__3_3)
{
  {
    MR_Integer mdb__listing__Cast_HeadVar1_4 = mdb__listing__HeadVar__2_2;
    MR_Integer mdb__listing__Cast_HeadVar2_5 = mdb__listing__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__listing__HeadVar__1_1, mdb__listing__Cast_HeadVar1_4, mdb__listing__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdb__listing____Unify____line_no_0_0(
  MR_Integer mdb__listing__HeadVar__1_1,
  MR_Integer mdb__listing__HeadVar__2_2)
{
  {
    MR_bool mdb__listing__succeeded;
    MR_Integer mdb__listing__Cast_HeadVar1_3 = mdb__listing__HeadVar__1_1;
    MR_Integer mdb__listing__Cast_HeadVar2_4 = mdb__listing__HeadVar__2_2;

    mdb__listing__succeeded = (mdb__listing__Cast_HeadVar1_3 == mdb__listing__Cast_HeadVar2_4);
    return mdb__listing__succeeded;
  }
}

void MR_CALL 
mdb__listing____Compare____file_name_0_0(
  MR_Word * mdb__listing__HeadVar__1_1,
  MR_String mdb__listing__HeadVar__2_2,
  MR_String mdb__listing__HeadVar__3_3)
{
  {
    MR_String mdb__listing__Cast_HeadVar1_4 = mdb__listing__HeadVar__2_2;
    MR_String mdb__listing__Cast_HeadVar2_5 = mdb__listing__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_string_3_p_0(mdb__listing__HeadVar__1_1, mdb__listing__Cast_HeadVar1_4, mdb__listing__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdb__listing____Unify____file_name_0_0(
  MR_String mdb__listing__HeadVar__1_1,
  MR_String mdb__listing__HeadVar__2_2)
{
  {
    MR_bool mdb__listing__succeeded;
    MR_String mdb__listing__Cast_HeadVar1_3 = mdb__listing__HeadVar__1_1;
    MR_String mdb__listing__Cast_HeadVar2_4 = mdb__listing__HeadVar__2_2;

    mdb__listing__succeeded = (strcmp(mdb__listing__Cast_HeadVar1_3, mdb__listing__Cast_HeadVar2_4) == 0);
    return mdb__listing__succeeded;
  }
}

void MR_CALL 
mdb__listing____Compare____c_file_ptr_0_0(
  MR_Word * mdb__listing__HeadVar__1_1,
  MR_Box mdb__listing__HeadVar__2_2,
  MR_Box mdb__listing__HeadVar__3_3)
{
  {
    MR_Word mdb__listing__Cast_HeadVar1_4 = (MR_Word) mdb__listing__HeadVar__2_2;
    MR_Word mdb__listing__Cast_HeadVar2_5 = (MR_Word) mdb__listing__HeadVar__3_3;

    {
      mercury__builtin____Compare____c_pointer_0_0(mdb__listing__HeadVar__1_1, mdb__listing__Cast_HeadVar1_4, mdb__listing__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdb__listing____Unify____c_file_ptr_0_0(
  MR_Box mdb__listing__HeadVar__1_1,
  MR_Box mdb__listing__HeadVar__2_2)
{
  {
    MR_bool mdb__listing__succeeded;
    MR_Word mdb__listing__Cast_HeadVar1_3 = (MR_Word) mdb__listing__HeadVar__1_1;
    MR_Word mdb__listing__Cast_HeadVar2_4 = (MR_Word) mdb__listing__HeadVar__2_2;

    {
      mdb__listing__succeeded = mercury__builtin____Unify____c_pointer_0_0(mdb__listing__Cast_HeadVar1_3, mdb__listing__Cast_HeadVar2_4);
    }
    return mdb__listing__succeeded;
  }
}

static void MR_CALL 
mdb__listing__print_lines_in_range_c_8_p_0(
  MR_Box mdb__listing__InStrm_1,
  MR_Box mdb__listing__OutStrm_2,
  MR_Integer mdb__listing__ThisLine_3,
  MR_Integer mdb__listing__FirstLine_4,
  MR_Integer mdb__listing__LastLine_5,
  MR_Integer mdb__listing__MarkLine_6)
{
  {
{
#define MR_PROC_LABEL mdb__listing__print_lines_in_range_c_8_p_0

	FILE * InStrm;
	FILE * OutStrm;
	MR_Integer ThisLine;
	MR_Integer FirstLine;
	MR_Integer LastLine;
	MR_Integer MarkLine;

	InStrm = (FILE *) mdb__listing__InStrm_1 ;
	OutStrm = (FILE *) mdb__listing__OutStrm_2 ;
	ThisLine =  mdb__listing__ThisLine_3 ;
	FirstLine =  mdb__listing__FirstLine_4 ;
	LastLine =  mdb__listing__LastLine_5 ;
	MarkLine =  mdb__listing__MarkLine_6 ;
		{

    if (FirstLine <= ThisLine && ThisLine <= LastLine) {
        const char *s = (ThisLine == MarkLine) ? "> " : "  ";
        fputs(s, (FILE *)OutStrm);
    }
    while(ThisLine <= LastLine) {
        int c = fgetc((FILE *)InStrm);
        if (c == EOF) {
            fputc('\n', (FILE *)OutStrm);
            break;
        }
        if (FirstLine <= ThisLine) {
            fputc(c, (FILE *)OutStrm);
        }
        if (c == '\n') {
            ThisLine++;
            if (FirstLine <= ThisLine && ThisLine <= LastLine)  {
                const char *s = (ThisLine == MarkLine) ? "> " : "  ";
                fputs(s, (FILE *)OutStrm);
            }
        }
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

static MR_Box MR_CALL 
mdb__listing__mercury_stream_to_c_FILE_star_1_f_0(
  MR_Word mdb__listing__InStream_1)
{
  {
    MR_Box mdb__listing__InStrm_2;

{
#define MR_PROC_LABEL mdb__listing__mercury_stream_to_c_FILE_star_1_f_0

	MR_Word InStream;
	FILE * InStrm;

	InStream =  mdb__listing__InStream_1 ;
		{

    InStrm = MR_file(*(MR_unwrap_input_stream(InStream)));


		;}
#undef MR_PROC_LABEL
	 mdb__listing__InStrm_2  = (MR_Box) InStrm;
}
    return mdb__listing__InStrm_2;
  }
}

static void MR_CALL 
mdb__listing__write_to_c_file_4_p_0(
  MR_Box mdb__listing__ErrStrm_1,
  MR_String mdb__listing__Str_2)
{
  {
{
#define MR_PROC_LABEL mdb__listing__write_to_c_file_4_p_0

	FILE * ErrStrm;
	MR_String Str;

	ErrStrm = (FILE *) mdb__listing__ErrStrm_1 ;
	Str =  mdb__listing__Str_2 ;
		{

    fputs(Str, (FILE *)ErrStrm);


		;}
#undef MR_PROC_LABEL
}
  }
}

static MR_Word MR_CALL 
mdb__listing__listing_type_0_f_0(void)
{
  {
    MR_Word mdb__listing__HeadVar__1_1;
    MR_Word mdb__listing__Path_2;

    {
      mdb__listing__HeadVar__1_1 = mercury__type_desc__type_of_1_f_0((MR_Word) &mdb__listing_scalar_common_1[0]);
    }
    return mdb__listing__HeadVar__1_1;
  }
}

void MR_CALL 
mdb__listing__list_file_portable_9_p_0(
  MR_Word mdb__listing__OutStrm_10,
  MR_Word mdb__listing__ErrStrm_11,
  MR_String mdb__listing__FileName_12,
  MR_Integer mdb__listing__FirstLine_13,
  MR_Integer mdb__listing__LastLine_14,
  MR_Integer mdb__listing__MarkLine_15,
  MR_Word mdb__listing__Path_16)
{
  {
    MR_bool mdb__listing__succeeded;

    {
      mdb__listing__succeeded = mercury__dir__path_name_is_absolute_1_p_0(mdb__listing__FileName_12);
    }
    if (mdb__listing__succeeded)
    {
      MR_Word mdb__listing__Result0_18;

      {
        mercury__io__open_input_4_p_0(mdb__listing__FileName_12, &mdb__listing__Result0_18);
      }
      if (((MR_tag((MR_Word) mdb__listing__Result0_18)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mdb__listing__Error_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__listing__Result0_18, (MR_Integer) 0)));
        MR_String mdb__listing__ErrorMsg_21;

        {
          mdb__listing__ErrorMsg_21 = mercury__io__error_message_1_f_0(mdb__listing__Error_20);
        }
        {
          mercury__io__write_string_4_p_0(mdb__listing__ErrStrm_11, (MR_String) "mdb: cannot open file ");
        }
        {
          mercury__io__write_string_4_p_0(mdb__listing__ErrStrm_11, mdb__listing__FileName_12);
        }
        {
          mercury__io__write_string_4_p_0(mdb__listing__ErrStrm_11, (MR_String) ": ");
        }
        {
          mercury__io__write_string_4_p_0(mdb__listing__ErrStrm_11, mdb__listing__ErrorMsg_21);
        }
        {
          mercury__io__write_string_4_p_0(mdb__listing__ErrStrm_11, (MR_String) "\n");
        }
      }
      else
      {
        MR_Word mdb__listing__InStrm_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__listing__Result0_18, (MR_Integer) 0)));

        {
          mdb__listing__print_lines_in_range_m_8_p_0(mdb__listing__InStrm_19, mdb__listing__OutStrm_10, (MR_Integer) 1, mdb__listing__FirstLine_13, mdb__listing__LastLine_14, mdb__listing__MarkLine_15);
        }
        {
          mercury__io__close_input_3_p_0(mdb__listing__InStrm_19);
        }
      }
    }
    else
    {
      MR_String mdb__listing__Dir_55;
      MR_Word mdb__listing__Result0_60;
      MR_String mdb__listing__Var_65;

      {
        mdb__listing__Dir_55 = mercury__dir__this_directory_0_f_0();
      }
      {
        mdb__listing__Var_65 = mercury__dir__f_slash_2_f_0(mdb__listing__Dir_55, mdb__listing__FileName_12);
      }
      {
        mercury__io__open_input_4_p_0(mdb__listing__Var_65, &mdb__listing__Result0_60);
      }
      if (((MR_tag((MR_Word) mdb__listing__Result0_60)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mdb__listing__Result_22;

        {
          mdb__listing__find_and_open_file_5_p_0(mdb__listing__Path_16, mdb__listing__FileName_12, &mdb__listing__Result_22);
        }
        if ((mdb__listing__Result_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            mercury__io__write_string_4_p_0(mdb__listing__ErrStrm_11, (MR_String) "mdb: cannot find file ");
          }
          {
            mercury__io__write_string_4_p_0(mdb__listing__ErrStrm_11, mdb__listing__FileName_12);
          }
          {
            mercury__io__write_string_4_p_0(mdb__listing__ErrStrm_11, (MR_String) "\n");
          }
        }
        else
        {
          MR_Word mdb__listing__InStrm_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__listing__Result_22, (MR_Integer) 0)));

          {
            mdb__listing__print_lines_in_range_m_8_p_0(mdb__listing__InStrm_48, mdb__listing__OutStrm_10, (MR_Integer) 1, mdb__listing__FirstLine_13, mdb__listing__LastLine_14, mdb__listing__MarkLine_15);
          }
          {
            mercury__io__close_input_3_p_0(mdb__listing__InStrm_48);
          }
        }
      }
      else
      {
        MR_Word mdb__listing__InStrm_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__listing__Result0_60, (MR_Integer) 0)));

        {
          mdb__listing__print_lines_in_range_m_8_p_0(mdb__listing__InStrm_73, mdb__listing__OutStrm_10, (MR_Integer) 1, mdb__listing__FirstLine_13, mdb__listing__LastLine_14, mdb__listing__MarkLine_15);
        }
        {
          mercury__io__close_input_3_p_0(mdb__listing__InStrm_73);
        }
      }
    }
  }
}

static void MR_CALL 
mdb__listing__print_lines_in_range_m_8_p_0(
  MR_Word mdb__listing__InStrm_9,
  MR_Word mdb__listing__OutStrm_10,
  MR_Integer mdb__listing__ThisLine_11,
  MR_Integer mdb__listing__FirstLine_12,
  MR_Integer mdb__listing__LastLine_13,
  MR_Integer mdb__listing__MarkLine_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mdb__listing__succeeded;
      MR_Word mdb__listing__Res_16;

      {
        mercury__io__read_line_as_string_4_p_0(mdb__listing__InStrm_9, &mdb__listing__Res_16);
      }
      switch (MR_tag((MR_Word) mdb__listing__Res_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String mdb__listing__Line_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__listing__Res_16, (MR_Integer) 0)));
            MR_Integer mdb__listing__Var_33;

            mdb__listing__succeeded = (mdb__listing__FirstLine_12 <= mdb__listing__ThisLine_11);
            if (mdb__listing__succeeded)
              mdb__listing__succeeded = (mdb__listing__ThisLine_11 <= mdb__listing__LastLine_13);
            if (mdb__listing__succeeded)
            {
              mdb__listing__succeeded = (mdb__listing__ThisLine_11 == mdb__listing__MarkLine_14);
              if (mdb__listing__succeeded)
              {
                {
                  mercury__io__write_string_4_p_0(mdb__listing__OutStrm_10, (MR_String) "> ");
                }
              }
              else
              {
                {
                  mercury__io__write_string_4_p_0(mdb__listing__OutStrm_10, (MR_String) "  ");
                }
              }
              {
                mercury__io__write_string_4_p_0(mdb__listing__OutStrm_10, mdb__listing__Line_17);
              }
            }
            else
            {
            }
            mdb__listing__Var_33 = (mdb__listing__ThisLine_11 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mdb__listing__next_value_of_ThisLine_11 = mdb__listing__Var_33;

              mdb__listing__ThisLine_11 = mdb__listing__next_value_of_ThisLine_11;
            }
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mdb__listing__Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__listing__Res_16, (MR_Integer) 0)));
            MR_String mdb__listing__Var_24;

            {
              mercury__io__write_string_4_p_0(mdb__listing__OutStrm_10, (MR_String) "Error: ");
            }
            {
              mdb__listing__Var_24 = mercury__io__error_message_1_f_0(mdb__listing__Error_18);
            }
            {
              mercury__io__write_string_4_p_0(mdb__listing__OutStrm_10, mdb__listing__Var_24);
            }
            {
              mercury__io__write_string_4_p_0(mdb__listing__OutStrm_10, (MR_String) "\n");
            }
          }
          break;
      }
    }
    break;
  }
}

void MR_CALL 
mdb__listing__list_file_9_p_0(
  MR_Box mdb__listing__OutStrm_10,
  MR_Box mdb__listing__ErrStrm_11,
  MR_String mdb__listing__FileName_12,
  MR_Integer mdb__listing__FirstLine_13,
  MR_Integer mdb__listing__LastLine_14,
  MR_Integer mdb__listing__MarkLine_15,
  MR_Word mdb__listing__Path_16)
{
  {
    MR_bool mdb__listing__succeeded;

    {
      mdb__listing__succeeded = mercury__dir__path_name_is_absolute_1_p_0(mdb__listing__FileName_12);
    }
    if (mdb__listing__succeeded)
    {
      MR_Word mdb__listing__Result0_18;

      {
        mercury__io__open_input_4_p_0(mdb__listing__FileName_12, &mdb__listing__Result0_18);
      }
      if (((MR_tag((MR_Word) mdb__listing__Result0_18)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mdb__listing__Error_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__listing__Result0_18, (MR_Integer) 0)));
        MR_String mdb__listing__ErrorMsg_22;

        {
          mdb__listing__ErrorMsg_22 = mercury__io__error_message_1_f_0(mdb__listing__Error_21);
        }
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	FILE * ErrStrm;
	MR_String Str;

	ErrStrm = (FILE *) mdb__listing__ErrStrm_11 ;
	Str =  (MR_String) "mdb: cannot open file " ;
		{

    fputs(Str, (FILE *)ErrStrm);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	FILE * ErrStrm;
	MR_String Str;

	ErrStrm = (FILE *) mdb__listing__ErrStrm_11 ;
	Str =  mdb__listing__FileName_12 ;
		{

    fputs(Str, (FILE *)ErrStrm);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	FILE * ErrStrm;
	MR_String Str;

	ErrStrm = (FILE *) mdb__listing__ErrStrm_11 ;
	Str =  (MR_String) ": " ;
		{

    fputs(Str, (FILE *)ErrStrm);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	FILE * ErrStrm;
	MR_String Str;

	ErrStrm = (FILE *) mdb__listing__ErrStrm_11 ;
	Str =  mdb__listing__ErrorMsg_22 ;
		{

    fputs(Str, (FILE *)ErrStrm);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	FILE * ErrStrm;
	MR_String Str;

	ErrStrm = (FILE *) mdb__listing__ErrStrm_11 ;
	Str =  (MR_String) "\n" ;
		{

    fputs(Str, (FILE *)ErrStrm);


		;}
#undef MR_PROC_LABEL
}
      }
      else
      {
        MR_Word mdb__listing__InStream_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__listing__Result0_18, (MR_Integer) 0)));
        MR_Box mdb__listing__InStrm_20;

{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	MR_Word InStream;
	FILE * InStrm;

	InStream =  mdb__listing__InStream_19 ;
		{

    InStrm = MR_file(*(MR_unwrap_input_stream(InStream)));


		;}
#undef MR_PROC_LABEL
	 mdb__listing__InStrm_20  = (MR_Box) InStrm;
}
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	FILE * InStrm;
	FILE * OutStrm;
	MR_Integer ThisLine;
	MR_Integer FirstLine;
	MR_Integer LastLine;
	MR_Integer MarkLine;

	InStrm = (FILE *) mdb__listing__InStrm_20 ;
	OutStrm = (FILE *) mdb__listing__OutStrm_10 ;
	ThisLine =  (MR_Integer) 1 ;
	FirstLine =  mdb__listing__FirstLine_13 ;
	LastLine =  mdb__listing__LastLine_14 ;
	MarkLine =  mdb__listing__MarkLine_15 ;
		{

    if (FirstLine <= ThisLine && ThisLine <= LastLine) {
        const char *s = (ThisLine == MarkLine) ? "> " : "  ";
        fputs(s, (FILE *)OutStrm);
    }
    while(ThisLine <= LastLine) {
        int c = fgetc((FILE *)InStrm);
        if (c == EOF) {
            fputc('\n', (FILE *)OutStrm);
            break;
        }
        if (FirstLine <= ThisLine) {
            fputc(c, (FILE *)OutStrm);
        }
        if (c == '\n') {
            ThisLine++;
            if (FirstLine <= ThisLine && ThisLine <= LastLine)  {
                const char *s = (ThisLine == MarkLine) ? "> " : "  ";
                fputs(s, (FILE *)OutStrm);
            }
        }
    }


		;}
#undef MR_PROC_LABEL
}
        {
          mercury__io__close_input_3_p_0(mdb__listing__InStream_19);
        }
      }
    }
    else
    {
      MR_String mdb__listing__Dir_59;
      MR_Word mdb__listing__Result0_64;
      MR_String mdb__listing__Var_69;

      {
        mdb__listing__Dir_59 = mercury__dir__this_directory_0_f_0();
      }
      {
        mdb__listing__Var_69 = mercury__dir__f_slash_2_f_0(mdb__listing__Dir_59, mdb__listing__FileName_12);
      }
      {
        mercury__io__open_input_4_p_0(mdb__listing__Var_69, &mdb__listing__Result0_64);
      }
      if (((MR_tag((MR_Word) mdb__listing__Result0_64)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mdb__listing__Result_23;

        {
          mdb__listing__find_and_open_file_5_p_0(mdb__listing__Path_16, mdb__listing__FileName_12, &mdb__listing__Result_23);
        }
        if ((mdb__listing__Result_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	FILE * ErrStrm;
	MR_String Str;

	ErrStrm = (FILE *) mdb__listing__ErrStrm_11 ;
	Str =  (MR_String) "mdb: cannot find file " ;
		{

    fputs(Str, (FILE *)ErrStrm);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	FILE * ErrStrm;
	MR_String Str;

	ErrStrm = (FILE *) mdb__listing__ErrStrm_11 ;
	Str =  mdb__listing__FileName_12 ;
		{

    fputs(Str, (FILE *)ErrStrm);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	FILE * ErrStrm;
	MR_String Str;

	ErrStrm = (FILE *) mdb__listing__ErrStrm_11 ;
	Str =  (MR_String) "\n" ;
		{

    fputs(Str, (FILE *)ErrStrm);


		;}
#undef MR_PROC_LABEL
}
        }
        else
        {
          MR_Word mdb__listing__InStream_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__listing__Result_23, (MR_Integer) 0)));
          MR_Box mdb__listing__InStrm_50;

{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	MR_Word InStream;
	FILE * InStrm;

	InStream =  mdb__listing__InStream_49 ;
		{

    InStrm = MR_file(*(MR_unwrap_input_stream(InStream)));


		;}
#undef MR_PROC_LABEL
	 mdb__listing__InStrm_50  = (MR_Box) InStrm;
}
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	FILE * InStrm;
	FILE * OutStrm;
	MR_Integer ThisLine;
	MR_Integer FirstLine;
	MR_Integer LastLine;
	MR_Integer MarkLine;

	InStrm = (FILE *) mdb__listing__InStrm_50 ;
	OutStrm = (FILE *) mdb__listing__OutStrm_10 ;
	ThisLine =  (MR_Integer) 1 ;
	FirstLine =  mdb__listing__FirstLine_13 ;
	LastLine =  mdb__listing__LastLine_14 ;
	MarkLine =  mdb__listing__MarkLine_15 ;
		{

    if (FirstLine <= ThisLine && ThisLine <= LastLine) {
        const char *s = (ThisLine == MarkLine) ? "> " : "  ";
        fputs(s, (FILE *)OutStrm);
    }
    while(ThisLine <= LastLine) {
        int c = fgetc((FILE *)InStrm);
        if (c == EOF) {
            fputc('\n', (FILE *)OutStrm);
            break;
        }
        if (FirstLine <= ThisLine) {
            fputc(c, (FILE *)OutStrm);
        }
        if (c == '\n') {
            ThisLine++;
            if (FirstLine <= ThisLine && ThisLine <= LastLine)  {
                const char *s = (ThisLine == MarkLine) ? "> " : "  ";
                fputs(s, (FILE *)OutStrm);
            }
        }
    }


		;}
#undef MR_PROC_LABEL
}
          {
            mercury__io__close_input_3_p_0(mdb__listing__InStream_49);
          }
        }
      }
      else
      {
        MR_Word mdb__listing__InStream_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__listing__Result0_64, (MR_Integer) 0)));
        MR_Box mdb__listing__InStrm_78;

{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	MR_Word InStream;
	FILE * InStrm;

	InStream =  mdb__listing__InStream_77 ;
		{

    InStrm = MR_file(*(MR_unwrap_input_stream(InStream)));


		;}
#undef MR_PROC_LABEL
	 mdb__listing__InStrm_78  = (MR_Box) InStrm;
}
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	FILE * InStrm;
	FILE * OutStrm;
	MR_Integer ThisLine;
	MR_Integer FirstLine;
	MR_Integer LastLine;
	MR_Integer MarkLine;

	InStrm = (FILE *) mdb__listing__InStrm_78 ;
	OutStrm = (FILE *) mdb__listing__OutStrm_10 ;
	ThisLine =  (MR_Integer) 1 ;
	FirstLine =  mdb__listing__FirstLine_13 ;
	LastLine =  mdb__listing__LastLine_14 ;
	MarkLine =  mdb__listing__MarkLine_15 ;
		{

    if (FirstLine <= ThisLine && ThisLine <= LastLine) {
        const char *s = (ThisLine == MarkLine) ? "> " : "  ";
        fputs(s, (FILE *)OutStrm);
    }
    while(ThisLine <= LastLine) {
        int c = fgetc((FILE *)InStrm);
        if (c == EOF) {
            fputc('\n', (FILE *)OutStrm);
            break;
        }
        if (FirstLine <= ThisLine) {
            fputc(c, (FILE *)OutStrm);
        }
        if (c == '\n') {
            ThisLine++;
            if (FirstLine <= ThisLine && ThisLine <= LastLine)  {
                const char *s = (ThisLine == MarkLine) ? "> " : "  ";
                fputs(s, (FILE *)OutStrm);
            }
        }
    }


		;}
#undef MR_PROC_LABEL
}
        {
          mercury__io__close_input_3_p_0(mdb__listing__InStream_77);
        }
      }
    }
  }
}

static void MR_CALL 
mdb__listing__find_and_open_file_5_p_0(
  MR_Word mdb__listing__HeadVar__1_1,
  MR_String mdb__listing__FileName_2,
  MR_Word * mdb__listing__HeadVar__3_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mdb__listing__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mdb__listing__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_String mdb__listing__Dir_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__listing__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word mdb__listing__Path_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__listing__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word mdb__listing__Result0_15;
      MR_String mdb__listing__Var_20;

      {
        mdb__listing__Var_20 = mercury__dir__f_slash_2_f_0(mdb__listing__Dir_10, mdb__listing__FileName_2);
      }
      {
        mercury__io__open_input_4_p_0(mdb__listing__Var_20, &mdb__listing__Result0_15);
      }
      if (((MR_tag((MR_Word) mdb__listing__Result0_15)) == (MR_mktag((MR_Integer) 1))))
      {
        /* direct tailcall eliminated */
        {
          MR_Word mdb__listing__next_value_of_HeadVar__1_1 = mdb__listing__Path_11;

          mdb__listing__HeadVar__1_1 = mdb__listing__next_value_of_HeadVar__1_1;
        }
        continue;
      }
      else
      {
        MR_Word mdb__listing__InStream_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__listing__Result0_15, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mdb__listing__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__listing__InStream_16));
        }
      }
    }
    break;
  }
}

void MR_CALL 
mdb__listing__pop_list_path_2_p_0(
  MR_Word mdb__listing__HeadVar__1_1,
  MR_Word * mdb__listing__HeadVar__2_2)
{
  if ((mdb__listing__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *mdb__listing__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_String mdb__listing__Var_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__listing__HeadVar__1_1, (MR_Integer) 0)));

    *mdb__listing__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__listing__HeadVar__1_1, (MR_Integer) 1)));
  }
}

void MR_CALL 
mdb__listing__push_list_path_3_p_0(
  MR_String mdb__listing__Dir_4,
  MR_Word mdb__listing__Path_5,
  MR_Word * mdb__listing__HeadVar__3_3)
{
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
    *mdb__listing__HeadVar__3_3 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__listing__Dir_4));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__listing__Path_5));
  }
}

void MR_CALL 
mdb__listing__clear_list_path_2_p_0(
  MR_Word mdb__listing__HeadVar__1_3,
  MR_Word * mdb__listing__HeadVar__2_2)
{
  {
    mdb__listing__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_114_95_108_105_115_116_95_112_97_116_104_95_95_91_49_93_95_48_2_p_0(mdb__listing__HeadVar__2_2);
  }
}

void MR_CALL 
mdb__listing__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_114_95_108_105_115_116_95_112_97_116_104_95_95_91_49_93_95_48_2_p_0(
  MR_Word * mdb__listing__HeadVar__2_2)
{
  *mdb__listing__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
}

void MR_CALL 
mdb__listing__set_list_path_3_p_0(
  MR_Word mdb__listing__Dirs_4,
  MR_Word mdb__listing__HeadVar__2_5,
  MR_Word * mdb__listing__Dirs_3)
{
  {
    mdb__listing__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_108_105_115_116_95_112_97_116_104_95_95_91_50_93_95_48_3_p_0(mdb__listing__Dirs_4, mdb__listing__Dirs_3);
  }
}

void MR_CALL 
mdb__listing__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_108_105_115_116_95_112_97_116_104_95_95_91_50_93_95_48_3_p_0(
  MR_Word mdb__listing__Dirs_4,
  MR_Word * mdb__listing__Dirs_3)
{
  *mdb__listing__Dirs_3 = mdb__listing__Dirs_4;
}

MR_Word MR_CALL 
mdb__listing__get_list_path_1_f_0(
  MR_Word mdb__listing__Path_3)
{
  {
    MR_Word mdb__listing__Path_2 = mdb__listing__Path_3;

    return mdb__listing__Path_2;
  }
}

MR_Word MR_CALL 
mdb__listing__new_list_path_0_f_0(void)
{
  {
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static MR_bool MR_CALL 
mdb__listing____Unify____c_file_ptr_0_0_10001(
  MR_Box mdb__listing__wrapper_arg_1,
  MR_Box mdb__listing__wrapper_arg_2)
{
  {
    MR_bool mdb__listing__succeeded;

    {
      mdb__listing__succeeded = mdb__listing____Unify____c_file_ptr_0_0(((MR_Box) mdb__listing__wrapper_arg_1), ((MR_Box) mdb__listing__wrapper_arg_2));
    }
    return mdb__listing__succeeded;
  }
}

static void MR_CALL 
mdb__listing____Compare____c_file_ptr_0_0_10001(
  MR_Box * mdb__listing__wrapper_arg_1,
  MR_Box mdb__listing__wrapper_arg_2,
  MR_Box mdb__listing__wrapper_arg_3)
{
  {
    MR_Word mdb__listing__conv0_HeadVar__1_1;

    {
      mdb__listing____Compare____c_file_ptr_0_0(&mdb__listing__conv0_HeadVar__1_1, ((MR_Box) mdb__listing__wrapper_arg_2), ((MR_Box) mdb__listing__wrapper_arg_3));
    }
    *mdb__listing__wrapper_arg_1 = ((MR_Box) (mdb__listing__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__listing____Unify____file_name_0_0_10001(
  MR_Box mdb__listing__wrapper_arg_1,
  MR_Box mdb__listing__wrapper_arg_2)
{
  {
    MR_bool mdb__listing__succeeded;

    {
      mdb__listing__succeeded = mdb__listing____Unify____file_name_0_0(((MR_String) mdb__listing__wrapper_arg_1), ((MR_String) mdb__listing__wrapper_arg_2));
    }
    return mdb__listing__succeeded;
  }
}

static void MR_CALL 
mdb__listing____Compare____file_name_0_0_10001(
  MR_Box * mdb__listing__wrapper_arg_1,
  MR_Box mdb__listing__wrapper_arg_2,
  MR_Box mdb__listing__wrapper_arg_3)
{
  {
    MR_Word mdb__listing__conv0_HeadVar__1_1;

    {
      mdb__listing____Compare____file_name_0_0(&mdb__listing__conv0_HeadVar__1_1, ((MR_String) mdb__listing__wrapper_arg_2), ((MR_String) mdb__listing__wrapper_arg_3));
    }
    *mdb__listing__wrapper_arg_1 = ((MR_Box) (mdb__listing__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__listing____Unify____line_no_0_0_10001(
  MR_Box mdb__listing__wrapper_arg_1,
  MR_Box mdb__listing__wrapper_arg_2)
{
  {
    MR_bool mdb__listing__succeeded;

    {
      mdb__listing__succeeded = mdb__listing____Unify____line_no_0_0(((MR_Integer) mdb__listing__wrapper_arg_1), ((MR_Integer) mdb__listing__wrapper_arg_2));
    }
    return mdb__listing__succeeded;
  }
}

static void MR_CALL 
mdb__listing____Compare____line_no_0_0_10001(
  MR_Box * mdb__listing__wrapper_arg_1,
  MR_Box mdb__listing__wrapper_arg_2,
  MR_Box mdb__listing__wrapper_arg_3)
{
  {
    MR_Word mdb__listing__conv0_HeadVar__1_1;

    {
      mdb__listing____Compare____line_no_0_0(&mdb__listing__conv0_HeadVar__1_1, ((MR_Integer) mdb__listing__wrapper_arg_2), ((MR_Integer) mdb__listing__wrapper_arg_3));
    }
    *mdb__listing__wrapper_arg_1 = ((MR_Box) (mdb__listing__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__listing____Unify____path_name_0_0_10001(
  MR_Box mdb__listing__wrapper_arg_1,
  MR_Box mdb__listing__wrapper_arg_2)
{
  {
    MR_bool mdb__listing__succeeded;

    {
      mdb__listing__succeeded = mdb__listing____Unify____path_name_0_0(((MR_String) mdb__listing__wrapper_arg_1), ((MR_String) mdb__listing__wrapper_arg_2));
    }
    return mdb__listing__succeeded;
  }
}

static void MR_CALL 
mdb__listing____Compare____path_name_0_0_10001(
  MR_Box * mdb__listing__wrapper_arg_1,
  MR_Box mdb__listing__wrapper_arg_2,
  MR_Box mdb__listing__wrapper_arg_3)
{
  {
    MR_Word mdb__listing__conv0_HeadVar__1_1;

    {
      mdb__listing____Compare____path_name_0_0(&mdb__listing__conv0_HeadVar__1_1, ((MR_String) mdb__listing__wrapper_arg_2), ((MR_String) mdb__listing__wrapper_arg_3));
    }
    *mdb__listing__wrapper_arg_1 = ((MR_Box) (mdb__listing__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__listing____Unify____search_path_0_0_10001(
  MR_Box mdb__listing__wrapper_arg_1,
  MR_Box mdb__listing__wrapper_arg_2)
{
  {
    MR_bool mdb__listing__succeeded;

    {
      mdb__listing__succeeded = mdb__listing____Unify____search_path_0_0(((MR_Word) mdb__listing__wrapper_arg_1), ((MR_Word) mdb__listing__wrapper_arg_2));
    }
    return mdb__listing__succeeded;
  }
}

static void MR_CALL 
mdb__listing____Compare____search_path_0_0_10001(
  MR_Box * mdb__listing__wrapper_arg_1,
  MR_Box mdb__listing__wrapper_arg_2,
  MR_Box mdb__listing__wrapper_arg_3)
{
  {
    MR_Word mdb__listing__conv0_HeadVar__1_1;

    {
      mdb__listing____Compare____search_path_0_0(&mdb__listing__conv0_HeadVar__1_1, ((MR_Word) mdb__listing__wrapper_arg_2), ((MR_Word) mdb__listing__wrapper_arg_3));
    }
    *mdb__listing__wrapper_arg_1 = ((MR_Box) (mdb__listing__conv0_HeadVar__1_1));
  }
}

void mercury__mdb__listing__init(void)
{
}

void mercury__mdb__listing__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__listing__mdb__listing__type_ctor_info_c_file_ptr_0);
	MR_register_type_ctor_info(&mdb__listing__mdb__listing__type_ctor_info_file_name_0);
	MR_register_type_ctor_info(&mdb__listing__mdb__listing__type_ctor_info_line_no_0);
	MR_register_type_ctor_info(&mdb__listing__mdb__listing__type_ctor_info_path_name_0);
	MR_register_type_ctor_info(&mdb__listing__mdb__listing__type_ctor_info_search_path_0);
}

void mercury__mdb__listing__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__listing__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module mdb.listing. */
