/*
** Automatically generated from `listing.m'
** by the Mercury compiler,
** version rotd-2015-10-06
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
#include "mdbcomp.mih"
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




#line 70 "mdb.listing.c"
static const MR_FA_TypeInfo_Struct1 mdb__listing__list__ti_list_1builtin__type_ctor_info_string_0;

#line 73 "mdb.listing.c"
static MR_bool MR_CALL 
mdb__listing____Unify____c_file_ptr_0_0_10001(
#line 76 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_1,
#line 78 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2);

#line 81 "mdb.listing.c"
static void MR_CALL 
mdb__listing____Compare____c_file_ptr_0_0_10001(
#line 84 "mdb.listing.c"
  MR_Box * mdb__listing__wrapper_arg_1,
#line 86 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2,
#line 88 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_3);

#line 91 "mdb.listing.c"
static MR_bool MR_CALL 
mdb__listing____Unify____file_name_0_0_10001(
#line 94 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_1,
#line 96 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2);

#line 99 "mdb.listing.c"
static void MR_CALL 
mdb__listing____Compare____file_name_0_0_10001(
#line 102 "mdb.listing.c"
  MR_Box * mdb__listing__wrapper_arg_1,
#line 104 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2,
#line 106 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_3);

#line 109 "mdb.listing.c"
static MR_bool MR_CALL 
mdb__listing____Unify____line_no_0_0_10001(
#line 112 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_1,
#line 114 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2);

#line 117 "mdb.listing.c"
static void MR_CALL 
mdb__listing____Compare____line_no_0_0_10001(
#line 120 "mdb.listing.c"
  MR_Box * mdb__listing__wrapper_arg_1,
#line 122 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2,
#line 124 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_3);

#line 127 "mdb.listing.c"
static MR_bool MR_CALL 
mdb__listing____Unify____path_name_0_0_10001(
#line 130 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_1,
#line 132 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2);

#line 135 "mdb.listing.c"
static void MR_CALL 
mdb__listing____Compare____path_name_0_0_10001(
#line 138 "mdb.listing.c"
  MR_Box * mdb__listing__wrapper_arg_1,
#line 140 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2,
#line 142 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_3);

#line 145 "mdb.listing.c"
static MR_bool MR_CALL 
mdb__listing____Unify____search_path_0_0_10001(
#line 148 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_1,
#line 150 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2);

#line 153 "mdb.listing.c"
static void MR_CALL 
mdb__listing____Compare____search_path_0_0_10001(
#line 156 "mdb.listing.c"
  MR_Box * mdb__listing__wrapper_arg_1,
#line 158 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2,
#line 160 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_3);

#line 308 "listing.m"
static void MR_CALL 
mdb__listing__print_lines_in_range_m_8_p_0(
#line 308 "listing.m"
  MR_Word mdb__listing__InStrm_9,
#line 308 "listing.m"
  MR_Word mdb__listing__OutStrm_10,
#line 308 "listing.m"
  MR_Integer mdb__listing__ThisLine_11,
#line 308 "listing.m"
  MR_Integer mdb__listing__FirstLine_12,
#line 308 "listing.m"
  MR_Integer mdb__listing__LastLine_13,
#line 308 "listing.m"
  MR_Integer mdb__listing__MarkLine_14);

#line 275 "listing.m"
static void MR_CALL 
mdb__listing__print_lines_in_range_c_8_p_0(
#line 275 "listing.m"
  MR_Box mdb__listing__InStrm_1,
#line 275 "listing.m"
  MR_Box mdb__listing__OutStrm_2,
#line 275 "listing.m"
  MR_Integer mdb__listing__ThisLine_3,
#line 275 "listing.m"
  MR_Integer mdb__listing__FirstLine_4,
#line 275 "listing.m"
  MR_Integer mdb__listing__LastLine_5,
#line 275 "listing.m"
  MR_Integer mdb__listing__MarkLine_6);

#line 255 "listing.m"
static MR_Box MR_CALL 
mdb__listing__mercury_stream_to_c_FILE_star_1_f_0(
#line 255 "listing.m"
  MR_Word mdb__listing__InStream_1);

#line 241 "listing.m"
static void MR_CALL 
mdb__listing__find_and_open_file_5_p_0(
#line 241 "listing.m"
  MR_Word mdb__listing__HeadVar__1_1,
#line 241 "listing.m"
  MR_String mdb__listing__FileName_2,
#line 241 "listing.m"
  MR_Word * mdb__listing__HeadVar__3_3);

#line 191 "listing.m"
static void MR_CALL 
mdb__listing__write_to_c_file_4_p_0(
#line 191 "listing.m"
  MR_Box mdb__listing__ErrStrm_1,
#line 191 "listing.m"
  MR_String mdb__listing__Str_2);

#line 127 "listing.m"
static MR_Word MR_CALL 
mdb__listing__listing_type_0_f_0(void);


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
#line 114 "listing.m"
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
#line 116 "listing.m"
  MR_Word mdb__listing__Dirs_4,
#line 116 "listing.m"
  MR_Word mdb__listing__HeadVar__2_5,
#line 116 "listing.m"
  MR_Word * mdb__listing__Dirs_3)
#line 116 "listing.m"
{
#line 116 "listing.m"
	mdb__listing__set_list_path_3_p_0((MR_Word) mdb__listing__Dirs_4, (MR_Word) mdb__listing__HeadVar__2_5, (MR_Word *) mdb__listing__Dirs_3);
}

#line 118 "listing.m"
void 
ML_LISTING_clear_list_path(
#line 118 "listing.m"
  MR_Word mdb__listing__HeadVar__1_3,
#line 118 "listing.m"
  MR_Word * mdb__listing__HeadVar__2_2)
#line 118 "listing.m"
{
#line 118 "listing.m"
	mdb__listing__clear_list_path_2_p_0((MR_Word) mdb__listing__HeadVar__1_3, (MR_Word *) mdb__listing__HeadVar__2_2);
}

#line 120 "listing.m"
void 
ML_LISTING_push_list_path(
#line 120 "listing.m"
  MR_String mdb__listing__Dir_4,
#line 120 "listing.m"
  MR_Word mdb__listing__Path_5,
#line 120 "listing.m"
  MR_Word * mdb__listing__HeadVar__3_3)
#line 120 "listing.m"
{
#line 120 "listing.m"
	mdb__listing__push_list_path_3_p_0((MR_String) mdb__listing__Dir_4, (MR_Word) mdb__listing__Path_5, (MR_Word *) mdb__listing__HeadVar__3_3);
}

#line 122 "listing.m"
void 
ML_LISTING_pop_list_path(
#line 122 "listing.m"
  MR_Word mdb__listing__HeadVar__1_1,
#line 122 "listing.m"
  MR_Word * mdb__listing__HeadVar__2_2)
#line 122 "listing.m"
{
#line 122 "listing.m"
	mdb__listing__pop_list_path_2_p_0((MR_Word) mdb__listing__HeadVar__1_1, (MR_Word *) mdb__listing__HeadVar__2_2);
}

#line 124 "listing.m"
void 
ML_LISTING_list_file(
#line 124 "listing.m"
  FILE * mdb__listing__OutStrm_10,
#line 124 "listing.m"
  FILE * mdb__listing__ErrStrm_11,
#line 124 "listing.m"
  MR_String mdb__listing__FileName_12,
#line 124 "listing.m"
  MR_Integer mdb__listing__FirstLine_13,
#line 124 "listing.m"
  MR_Integer mdb__listing__LastLine_14,
#line 124 "listing.m"
  MR_Integer mdb__listing__MarkLine_15,
#line 124 "listing.m"
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


#line 365 "mdb.listing.c"
const MR_TypeCtorInfo_Struct mdb__listing__mdb__listing__type_ctor_info_c_file_ptr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
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

#line 382 "mdb.listing.c"
const MR_TypeCtorInfo_Struct mdb__listing__mdb__listing__type_ctor_info_file_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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

#line 399 "mdb.listing.c"
const MR_TypeCtorInfo_Struct mdb__listing__mdb__listing__type_ctor_info_line_no_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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

#line 416 "mdb.listing.c"
const MR_TypeCtorInfo_Struct mdb__listing__mdb__listing__type_ctor_info_path_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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

#line 433 "mdb.listing.c"
static const MR_FA_TypeInfo_Struct1 mdb__listing__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 441 "mdb.listing.c"
const MR_TypeCtorInfo_Struct mdb__listing__mdb__listing__type_ctor_info_search_path_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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

#line 458 "mdb.listing.c"
static MR_bool MR_CALL 
mdb__listing____Unify____c_file_ptr_0_0_10001(
#line 461 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_1,
#line 463 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2)
#line 465 "mdb.listing.c"
{
#line 467 "mdb.listing.c"
  {
#line 469 "mdb.listing.c"
    MR_bool mdb__listing__succeeded;

#line 472 "mdb.listing.c"
    {
#line 474 "mdb.listing.c"
      mdb__listing__succeeded = mdb__listing____Unify____c_file_ptr_0_0(((MR_Box) mdb__listing__wrapper_arg_1), ((MR_Box) mdb__listing__wrapper_arg_2));
    }
#line 477 "mdb.listing.c"
    return mdb__listing__succeeded;
#line 479 "mdb.listing.c"
  }
#line 481 "mdb.listing.c"
}

#line 484 "mdb.listing.c"
static void MR_CALL 
mdb__listing____Compare____c_file_ptr_0_0_10001(
#line 487 "mdb.listing.c"
  MR_Box * mdb__listing__wrapper_arg_1,
#line 489 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2,
#line 491 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_3)
#line 493 "mdb.listing.c"
{
#line 495 "mdb.listing.c"
  {
#line 497 "mdb.listing.c"
    MR_Word mdb__listing__conv0_HeadVar__1_1;

#line 500 "mdb.listing.c"
    {
#line 502 "mdb.listing.c"
      mdb__listing____Compare____c_file_ptr_0_0(&mdb__listing__conv0_HeadVar__1_1, ((MR_Box) mdb__listing__wrapper_arg_2), ((MR_Box) mdb__listing__wrapper_arg_3));
    }
#line 505 "mdb.listing.c"
    *mdb__listing__wrapper_arg_1 = ((MR_Box) (mdb__listing__conv0_HeadVar__1_1));
#line 507 "mdb.listing.c"
  }
#line 509 "mdb.listing.c"
}

#line 512 "mdb.listing.c"
static MR_bool MR_CALL 
mdb__listing____Unify____file_name_0_0_10001(
#line 515 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_1,
#line 517 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2)
#line 519 "mdb.listing.c"
{
#line 521 "mdb.listing.c"
  {
#line 523 "mdb.listing.c"
    MR_bool mdb__listing__succeeded;

#line 526 "mdb.listing.c"
    {
#line 528 "mdb.listing.c"
      mdb__listing__succeeded = mdb__listing____Unify____file_name_0_0(((MR_String) mdb__listing__wrapper_arg_1), ((MR_String) mdb__listing__wrapper_arg_2));
    }
#line 531 "mdb.listing.c"
    return mdb__listing__succeeded;
#line 533 "mdb.listing.c"
  }
#line 535 "mdb.listing.c"
}

#line 538 "mdb.listing.c"
static void MR_CALL 
mdb__listing____Compare____file_name_0_0_10001(
#line 541 "mdb.listing.c"
  MR_Box * mdb__listing__wrapper_arg_1,
#line 543 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2,
#line 545 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_3)
#line 547 "mdb.listing.c"
{
#line 549 "mdb.listing.c"
  {
#line 551 "mdb.listing.c"
    MR_Word mdb__listing__conv0_HeadVar__1_1;

#line 554 "mdb.listing.c"
    {
#line 556 "mdb.listing.c"
      mdb__listing____Compare____file_name_0_0(&mdb__listing__conv0_HeadVar__1_1, ((MR_String) mdb__listing__wrapper_arg_2), ((MR_String) mdb__listing__wrapper_arg_3));
    }
#line 559 "mdb.listing.c"
    *mdb__listing__wrapper_arg_1 = ((MR_Box) (mdb__listing__conv0_HeadVar__1_1));
#line 561 "mdb.listing.c"
  }
#line 563 "mdb.listing.c"
}

#line 566 "mdb.listing.c"
static MR_bool MR_CALL 
mdb__listing____Unify____line_no_0_0_10001(
#line 569 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_1,
#line 571 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2)
#line 573 "mdb.listing.c"
{
#line 575 "mdb.listing.c"
  {
#line 577 "mdb.listing.c"
    MR_bool mdb__listing__succeeded;

#line 580 "mdb.listing.c"
    {
#line 582 "mdb.listing.c"
      mdb__listing__succeeded = mdb__listing____Unify____line_no_0_0(((MR_Integer) mdb__listing__wrapper_arg_1), ((MR_Integer) mdb__listing__wrapper_arg_2));
    }
#line 585 "mdb.listing.c"
    return mdb__listing__succeeded;
#line 587 "mdb.listing.c"
  }
#line 589 "mdb.listing.c"
}

#line 592 "mdb.listing.c"
static void MR_CALL 
mdb__listing____Compare____line_no_0_0_10001(
#line 595 "mdb.listing.c"
  MR_Box * mdb__listing__wrapper_arg_1,
#line 597 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2,
#line 599 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_3)
#line 601 "mdb.listing.c"
{
#line 603 "mdb.listing.c"
  {
#line 605 "mdb.listing.c"
    MR_Word mdb__listing__conv0_HeadVar__1_1;

#line 608 "mdb.listing.c"
    {
#line 610 "mdb.listing.c"
      mdb__listing____Compare____line_no_0_0(&mdb__listing__conv0_HeadVar__1_1, ((MR_Integer) mdb__listing__wrapper_arg_2), ((MR_Integer) mdb__listing__wrapper_arg_3));
    }
#line 613 "mdb.listing.c"
    *mdb__listing__wrapper_arg_1 = ((MR_Box) (mdb__listing__conv0_HeadVar__1_1));
#line 615 "mdb.listing.c"
  }
#line 617 "mdb.listing.c"
}

#line 620 "mdb.listing.c"
static MR_bool MR_CALL 
mdb__listing____Unify____path_name_0_0_10001(
#line 623 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_1,
#line 625 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2)
#line 627 "mdb.listing.c"
{
#line 629 "mdb.listing.c"
  {
#line 631 "mdb.listing.c"
    MR_bool mdb__listing__succeeded;

#line 634 "mdb.listing.c"
    {
#line 636 "mdb.listing.c"
      mdb__listing__succeeded = mdb__listing____Unify____path_name_0_0(((MR_String) mdb__listing__wrapper_arg_1), ((MR_String) mdb__listing__wrapper_arg_2));
    }
#line 639 "mdb.listing.c"
    return mdb__listing__succeeded;
#line 641 "mdb.listing.c"
  }
#line 643 "mdb.listing.c"
}

#line 646 "mdb.listing.c"
static void MR_CALL 
mdb__listing____Compare____path_name_0_0_10001(
#line 649 "mdb.listing.c"
  MR_Box * mdb__listing__wrapper_arg_1,
#line 651 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2,
#line 653 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_3)
#line 655 "mdb.listing.c"
{
#line 657 "mdb.listing.c"
  {
#line 659 "mdb.listing.c"
    MR_Word mdb__listing__conv0_HeadVar__1_1;

#line 662 "mdb.listing.c"
    {
#line 664 "mdb.listing.c"
      mdb__listing____Compare____path_name_0_0(&mdb__listing__conv0_HeadVar__1_1, ((MR_String) mdb__listing__wrapper_arg_2), ((MR_String) mdb__listing__wrapper_arg_3));
    }
#line 667 "mdb.listing.c"
    *mdb__listing__wrapper_arg_1 = ((MR_Box) (mdb__listing__conv0_HeadVar__1_1));
#line 669 "mdb.listing.c"
  }
#line 671 "mdb.listing.c"
}

#line 674 "mdb.listing.c"
static MR_bool MR_CALL 
mdb__listing____Unify____search_path_0_0_10001(
#line 677 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_1,
#line 679 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2)
#line 681 "mdb.listing.c"
{
#line 683 "mdb.listing.c"
  {
#line 685 "mdb.listing.c"
    MR_bool mdb__listing__succeeded;

#line 688 "mdb.listing.c"
    {
#line 690 "mdb.listing.c"
      mdb__listing__succeeded = mdb__listing____Unify____search_path_0_0(((MR_Word) mdb__listing__wrapper_arg_1), ((MR_Word) mdb__listing__wrapper_arg_2));
    }
#line 693 "mdb.listing.c"
    return mdb__listing__succeeded;
#line 695 "mdb.listing.c"
  }
#line 697 "mdb.listing.c"
}

#line 700 "mdb.listing.c"
static void MR_CALL 
mdb__listing____Compare____search_path_0_0_10001(
#line 703 "mdb.listing.c"
  MR_Box * mdb__listing__wrapper_arg_1,
#line 705 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2,
#line 707 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_3)
#line 709 "mdb.listing.c"
{
#line 711 "mdb.listing.c"
  {
#line 713 "mdb.listing.c"
    MR_Word mdb__listing__conv0_HeadVar__1_1;

#line 716 "mdb.listing.c"
    {
#line 718 "mdb.listing.c"
      mdb__listing____Compare____search_path_0_0(&mdb__listing__conv0_HeadVar__1_1, ((MR_Word) mdb__listing__wrapper_arg_2), ((MR_Word) mdb__listing__wrapper_arg_3));
    }
#line 721 "mdb.listing.c"
    *mdb__listing__wrapper_arg_1 = ((MR_Box) (mdb__listing__conv0_HeadVar__1_1));
#line 723 "mdb.listing.c"
  }
#line 725 "mdb.listing.c"
}

#line 47 "listing.m"
void MR_CALL 
mdb__listing__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_114_95_108_105_115_116_95_112_97_116_104_95_95_91_49_93_95_48_2_p_0(
#line 47 "listing.m"
  MR_Word * mdb__listing__HeadVar__2_2)
#line 47 "listing.m"
{
#line 143 "listing.m"
  {
#line 143 "listing.m"
    MR_bool mdb__listing__succeeded;

#line 143 "listing.m"
    *mdb__listing__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 143 "listing.m"
  }
#line 47 "listing.m"
}

#line 45 "listing.m"
void MR_CALL 
mdb__listing__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_108_105_115_116_95_112_97_116_104_95_95_91_50_93_95_48_3_p_0(
#line 45 "listing.m"
  MR_Word mdb__listing__Dirs_4,
#line 45 "listing.m"
  MR_Word * mdb__listing__Dirs_3)
#line 45 "listing.m"
{
#line 141 "listing.m"
  {
#line 141 "listing.m"
    MR_bool mdb__listing__succeeded;

#line 141 "listing.m"
    *mdb__listing__Dirs_3 = mdb__listing__Dirs_4;
#line 141 "listing.m"
  }
#line 45 "listing.m"
}

#line 102 "listing.m"
void MR_CALL 
mdb__listing____Compare____search_path_0_0(
#line 102 "listing.m"
  MR_Word * mdb__listing__HeadVar__1_1,
#line 102 "listing.m"
  MR_Word mdb__listing__HeadVar__2_2,
#line 102 "listing.m"
  MR_Word mdb__listing__HeadVar__3_3)
#line 102 "listing.m"
{
#line 102 "listing.m"
  {
#line 102 "listing.m"
    MR_bool mdb__listing__succeeded;
#line 102 "listing.m"
    MR_Word mdb__listing__Cast_HeadVar1_4 = mdb__listing__HeadVar__2_2;
#line 102 "listing.m"
    MR_Word mdb__listing__Cast_HeadVar2_5 = mdb__listing__HeadVar__3_3;

#line 102 "listing.m"
    {
#line 102 "listing.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdb__listing_scalar_common_1[0], mdb__listing__HeadVar__1_1, ((MR_Box) (mdb__listing__Cast_HeadVar1_4)), ((MR_Box) (mdb__listing__Cast_HeadVar2_5)));
#line 102 "listing.m"
      return;
    }
#line 102 "listing.m"
  }
#line 102 "listing.m"
}

#line 102 "listing.m"
MR_bool MR_CALL 
mdb__listing____Unify____search_path_0_0(
#line 102 "listing.m"
  MR_Word mdb__listing__HeadVar__1_1,
#line 102 "listing.m"
  MR_Word mdb__listing__HeadVar__2_2)
#line 102 "listing.m"
{
#line 102 "listing.m"
  {
#line 102 "listing.m"
    MR_bool mdb__listing__succeeded;
#line 102 "listing.m"
    MR_Word mdb__listing__Cast_HeadVar1_3 = mdb__listing__HeadVar__1_1;
#line 102 "listing.m"
    MR_Word mdb__listing__Cast_HeadVar2_4 = mdb__listing__HeadVar__2_2;

#line 102 "listing.m"
    {
#line 102 "listing.m"
      return mdb__listing__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__listing_scalar_common_1[0], ((MR_Box) (mdb__listing__Cast_HeadVar1_3)), ((MR_Box) (mdb__listing__Cast_HeadVar2_4)));
    }
#line 102 "listing.m"
    return mdb__listing__succeeded;
#line 102 "listing.m"
  }
#line 102 "listing.m"
}

#line 33 "listing.m"
void MR_CALL 
mdb__listing____Compare____path_name_0_0(
#line 33 "listing.m"
  MR_Word * mdb__listing__HeadVar__1_1,
#line 33 "listing.m"
  MR_String mdb__listing__HeadVar__2_2,
#line 33 "listing.m"
  MR_String mdb__listing__HeadVar__3_3)
#line 33 "listing.m"
{
#line 33 "listing.m"
  {
#line 33 "listing.m"
    MR_bool mdb__listing__succeeded;
#line 33 "listing.m"
    MR_String mdb__listing__Cast_HeadVar1_4 = mdb__listing__HeadVar__2_2;
#line 33 "listing.m"
    MR_String mdb__listing__Cast_HeadVar2_5 = mdb__listing__HeadVar__3_3;

#line 33 "listing.m"
    {
#line 33 "listing.m"
      mercury__private_builtin__builtin_compare_string_3_p_0(mdb__listing__HeadVar__1_1, mdb__listing__Cast_HeadVar1_4, mdb__listing__Cast_HeadVar2_5);
#line 33 "listing.m"
      return;
    }
#line 33 "listing.m"
  }
#line 33 "listing.m"
}

#line 33 "listing.m"
MR_bool MR_CALL 
mdb__listing____Unify____path_name_0_0(
#line 33 "listing.m"
  MR_String mdb__listing__HeadVar__1_1,
#line 33 "listing.m"
  MR_String mdb__listing__HeadVar__2_2)
#line 33 "listing.m"
{
#line 33 "listing.m"
  {
#line 33 "listing.m"
    MR_bool mdb__listing__succeeded;
#line 33 "listing.m"
    MR_String mdb__listing__Cast_HeadVar1_3 = mdb__listing__HeadVar__1_1;
#line 33 "listing.m"
    MR_String mdb__listing__Cast_HeadVar2_4 = mdb__listing__HeadVar__2_2;

#line 33 "listing.m"
    mdb__listing__succeeded = (strcmp(mdb__listing__Cast_HeadVar1_3, mdb__listing__Cast_HeadVar2_4) == 0);
#line 33 "listing.m"
    return mdb__listing__succeeded;
#line 33 "listing.m"
  }
#line 33 "listing.m"
}

#line 32 "listing.m"
void MR_CALL 
mdb__listing____Compare____line_no_0_0(
#line 32 "listing.m"
  MR_Word * mdb__listing__HeadVar__1_1,
#line 32 "listing.m"
  MR_Integer mdb__listing__HeadVar__2_2,
#line 32 "listing.m"
  MR_Integer mdb__listing__HeadVar__3_3)
#line 32 "listing.m"
{
#line 32 "listing.m"
  {
#line 32 "listing.m"
    MR_bool mdb__listing__succeeded;
#line 32 "listing.m"
    MR_Integer mdb__listing__Cast_HeadVar1_4 = mdb__listing__HeadVar__2_2;
#line 32 "listing.m"
    MR_Integer mdb__listing__Cast_HeadVar2_5 = mdb__listing__HeadVar__3_3;

#line 32 "listing.m"
    {
#line 32 "listing.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__listing__HeadVar__1_1, mdb__listing__Cast_HeadVar1_4, mdb__listing__Cast_HeadVar2_5);
#line 32 "listing.m"
      return;
    }
#line 32 "listing.m"
  }
#line 32 "listing.m"
}

#line 32 "listing.m"
MR_bool MR_CALL 
mdb__listing____Unify____line_no_0_0(
#line 32 "listing.m"
  MR_Integer mdb__listing__HeadVar__1_1,
#line 32 "listing.m"
  MR_Integer mdb__listing__HeadVar__2_2)
#line 32 "listing.m"
{
#line 32 "listing.m"
  {
#line 32 "listing.m"
    MR_bool mdb__listing__succeeded;
#line 32 "listing.m"
    MR_Integer mdb__listing__Cast_HeadVar1_3 = mdb__listing__HeadVar__1_1;
#line 32 "listing.m"
    MR_Integer mdb__listing__Cast_HeadVar2_4 = mdb__listing__HeadVar__2_2;

#line 32 "listing.m"
    mdb__listing__succeeded = (mdb__listing__Cast_HeadVar1_3 == mdb__listing__Cast_HeadVar2_4);
#line 32 "listing.m"
    return mdb__listing__succeeded;
#line 32 "listing.m"
  }
#line 32 "listing.m"
}

#line 34 "listing.m"
void MR_CALL 
mdb__listing____Compare____file_name_0_0(
#line 34 "listing.m"
  MR_Word * mdb__listing__HeadVar__1_1,
#line 34 "listing.m"
  MR_String mdb__listing__HeadVar__2_2,
#line 34 "listing.m"
  MR_String mdb__listing__HeadVar__3_3)
#line 34 "listing.m"
{
#line 34 "listing.m"
  {
#line 34 "listing.m"
    MR_bool mdb__listing__succeeded;
#line 34 "listing.m"
    MR_String mdb__listing__Cast_HeadVar1_4 = mdb__listing__HeadVar__2_2;
#line 34 "listing.m"
    MR_String mdb__listing__Cast_HeadVar2_5 = mdb__listing__HeadVar__3_3;

#line 34 "listing.m"
    {
#line 34 "listing.m"
      mercury__private_builtin__builtin_compare_string_3_p_0(mdb__listing__HeadVar__1_1, mdb__listing__Cast_HeadVar1_4, mdb__listing__Cast_HeadVar2_5);
#line 34 "listing.m"
      return;
    }
#line 34 "listing.m"
  }
#line 34 "listing.m"
}

#line 34 "listing.m"
MR_bool MR_CALL 
mdb__listing____Unify____file_name_0_0(
#line 34 "listing.m"
  MR_String mdb__listing__HeadVar__1_1,
#line 34 "listing.m"
  MR_String mdb__listing__HeadVar__2_2)
#line 34 "listing.m"
{
#line 34 "listing.m"
  {
#line 34 "listing.m"
    MR_bool mdb__listing__succeeded;
#line 34 "listing.m"
    MR_String mdb__listing__Cast_HeadVar1_3 = mdb__listing__HeadVar__1_1;
#line 34 "listing.m"
    MR_String mdb__listing__Cast_HeadVar2_4 = mdb__listing__HeadVar__2_2;

#line 34 "listing.m"
    mdb__listing__succeeded = (strcmp(mdb__listing__Cast_HeadVar1_3, mdb__listing__Cast_HeadVar2_4) == 0);
#line 34 "listing.m"
    return mdb__listing__succeeded;
#line 34 "listing.m"
  }
#line 34 "listing.m"
}

#line 108 "listing.m"
void MR_CALL 
mdb__listing____Compare____c_file_ptr_0_0(
#line 108 "listing.m"
  MR_Word * mdb__listing__HeadVar__1_1,
#line 108 "listing.m"
  MR_Box mdb__listing__HeadVar__2_2,
#line 108 "listing.m"
  MR_Box mdb__listing__HeadVar__3_3)
#line 108 "listing.m"
{
#line 108 "listing.m"
  {
#line 108 "listing.m"
    MR_bool mdb__listing__succeeded;
#line 108 "listing.m"
    MR_Word mdb__listing__Cast_HeadVar1_4 = (MR_Word) mdb__listing__HeadVar__2_2;
#line 108 "listing.m"
    MR_Word mdb__listing__Cast_HeadVar2_5 = (MR_Word) mdb__listing__HeadVar__3_3;

#line 108 "listing.m"
    {
#line 108 "listing.m"
      mercury__builtin____Compare____c_pointer_0_0(mdb__listing__HeadVar__1_1, mdb__listing__Cast_HeadVar1_4, mdb__listing__Cast_HeadVar2_5);
#line 108 "listing.m"
      return;
    }
#line 108 "listing.m"
  }
#line 108 "listing.m"
}

#line 108 "listing.m"
MR_bool MR_CALL 
mdb__listing____Unify____c_file_ptr_0_0(
#line 108 "listing.m"
  MR_Box mdb__listing__HeadVar__1_1,
#line 108 "listing.m"
  MR_Box mdb__listing__HeadVar__2_2)
#line 108 "listing.m"
{
#line 108 "listing.m"
  {
#line 108 "listing.m"
    MR_bool mdb__listing__succeeded;
#line 108 "listing.m"
    MR_Word mdb__listing__Cast_HeadVar1_3 = (MR_Word) mdb__listing__HeadVar__1_1;
#line 108 "listing.m"
    MR_Word mdb__listing__Cast_HeadVar2_4 = (MR_Word) mdb__listing__HeadVar__2_2;

#line 108 "listing.m"
    {
#line 108 "listing.m"
      return mdb__listing__succeeded = mercury__builtin____Unify____c_pointer_0_0(mdb__listing__Cast_HeadVar1_3, mdb__listing__Cast_HeadVar2_4);
    }
#line 108 "listing.m"
    return mdb__listing__succeeded;
#line 108 "listing.m"
  }
#line 108 "listing.m"
}

#line 308 "listing.m"
static void MR_CALL 
mdb__listing__print_lines_in_range_m_8_p_0(
#line 308 "listing.m"
  MR_Word mdb__listing__InStrm_9,
#line 308 "listing.m"
  MR_Word mdb__listing__OutStrm_10,
#line 308 "listing.m"
  MR_Integer mdb__listing__ThisLine_11,
#line 308 "listing.m"
  MR_Integer mdb__listing__FirstLine_12,
#line 308 "listing.m"
  MR_Integer mdb__listing__LastLine_13,
#line 308 "listing.m"
  MR_Integer mdb__listing__MarkLine_14)
#line 308 "listing.m"
{
#line 312 "listing.m"
  while (MR_TRUE)
#line 312 "listing.m"
    {
#line 312 "listing.m"
      /* tailcall optimized into a loop */
#line 312 "listing.m"
      {
#line 312 "listing.m"
        MR_bool mdb__listing__succeeded;
#line 312 "listing.m"
        MR_Word mdb__listing__Res_16;

#line 313 "listing.m"
        {
#line 313 "listing.m"
          mercury__io__read_line_as_string_4_p_0(mdb__listing__InStrm_9, &mdb__listing__Res_16);
        }
#line 328 "listing.m"
#line 328 "listing.m"
        switch (MR_tag((MR_Word) mdb__listing__Res_16)) {
#line 328 "listing.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 328 "listing.m"
          case (MR_Integer) 0:
#line 329 "listing.m"
            {
#line 329 "listing.m"
            }
#line 328 "listing.m"
            break;
#line 328 "listing.m"
          case (MR_Integer) 1:
#line 315 "listing.m"
            {
#line 315 "listing.m"
              MR_String mdb__listing__Line_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__listing__Res_16, (MR_Integer) 0)));
#line 315 "listing.m"
              MR_Integer mdb__listing__V_33_33;

#line 316 "listing.m"
              mdb__listing__succeeded = (mdb__listing__FirstLine_12 <= mdb__listing__ThisLine_11);
#line 316 "listing.m"
              if (mdb__listing__succeeded)
#line 316 "listing.m"
                mdb__listing__succeeded = (mdb__listing__ThisLine_11 <= mdb__listing__LastLine_13);
#line 323 "listing.m"
              if (mdb__listing__succeeded)
#line 321 "listing.m"
                {
#line 317 "listing.m"
                  mdb__listing__succeeded = (mdb__listing__ThisLine_11 == mdb__listing__MarkLine_14);
#line 319 "listing.m"
                  if (mdb__listing__succeeded)
#line 318 "listing.m"
                    {
#line 318 "listing.m"
                      {
#line 318 "listing.m"
                        mercury__io__write_string_4_p_0(mdb__listing__OutStrm_10, (MR_String) "> ");
                      }
#line 318 "listing.m"
                    }
#line 319 "listing.m"
                  else
#line 320 "listing.m"
                    {
#line 320 "listing.m"
                      {
#line 320 "listing.m"
                        mercury__io__write_string_4_p_0(mdb__listing__OutStrm_10, (MR_String) "  ");
                      }
#line 320 "listing.m"
                    }
#line 322 "listing.m"
                  {
#line 322 "listing.m"
                    mercury__io__write_string_4_p_0(mdb__listing__OutStrm_10, mdb__listing__Line_17);
                  }
#line 321 "listing.m"
                }
#line 323 "listing.m"
              else
#line 323 "listing.m"
                {
#line 323 "listing.m"
                }
#line 326 "listing.m"
              mdb__listing__V_33_33 = (mdb__listing__ThisLine_11 + (MR_Integer) 1);
#line 326 "listing.m"
              /* direct tailcall eliminated */
#line 326 "listing.m"
              {
#line 326 "listing.m"
                MR_Integer mdb__listing__ThisLine__tmp_copy_11 = mdb__listing__V_33_33;

#line 326 "listing.m"
                mdb__listing__ThisLine_11 = mdb__listing__ThisLine__tmp_copy_11;
#line 326 "listing.m"
              }
#line 326 "listing.m"
              continue;
#line 315 "listing.m"
            }
#line 328 "listing.m"
            break;
#line 328 "listing.m"
          case (MR_Integer) 2:
#line 331 "listing.m"
            {
#line 331 "listing.m"
              MR_Word mdb__listing__Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__listing__Res_16, (MR_Integer) 0)));
#line 331 "listing.m"
              MR_String mdb__listing__V_24_24;

#line 332 "listing.m"
              {
#line 332 "listing.m"
                mercury__io__write_string_4_p_0(mdb__listing__OutStrm_10, (MR_String) "Error: ");
              }
#line 333 "listing.m"
              {
#line 333 "listing.m"
                mdb__listing__V_24_24 = mercury__io__error_message_1_f_0(mdb__listing__Error_18);
              }
#line 333 "listing.m"
              {
#line 333 "listing.m"
                mercury__io__write_string_4_p_0(mdb__listing__OutStrm_10, mdb__listing__V_24_24);
              }
#line 334 "listing.m"
              {
#line 334 "listing.m"
                mercury__io__write_string_4_p_0(mdb__listing__OutStrm_10, (MR_String) "\n");
#line 334 "listing.m"
                return;
              }
#line 331 "listing.m"
            }
#line 328 "listing.m"
            break;
#line 328 "listing.m"
        }
#line 312 "listing.m"
      }
#line 312 "listing.m"
      break;
#line 312 "listing.m"
    }
#line 308 "listing.m"
}

#line 275 "listing.m"
static void MR_CALL 
mdb__listing__print_lines_in_range_c_8_p_0(
#line 275 "listing.m"
  MR_Box mdb__listing__InStrm_1,
#line 275 "listing.m"
  MR_Box mdb__listing__OutStrm_2,
#line 275 "listing.m"
  MR_Integer mdb__listing__ThisLine_3,
#line 275 "listing.m"
  MR_Integer mdb__listing__FirstLine_4,
#line 275 "listing.m"
  MR_Integer mdb__listing__LastLine_5,
#line 275 "listing.m"
  MR_Integer mdb__listing__MarkLine_6)
#line 275 "listing.m"
{
#line 278 "listing.m"
  {
#line 278 "listing.m"
    MR_bool mdb__listing__succeeded;

#line 282 "listing.m"
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
#line 282 "listing.m"

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

#line 1302 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
#line 282 "listing.m"
}
#line 278 "listing.m"
  }
#line 275 "listing.m"
}

#line 255 "listing.m"
static MR_Box MR_CALL 
mdb__listing__mercury_stream_to_c_FILE_star_1_f_0(
#line 255 "listing.m"
  MR_Word mdb__listing__InStream_1)
#line 255 "listing.m"
{
#line 257 "listing.m"
  {
#line 257 "listing.m"
    MR_bool mdb__listing__succeeded;
#line 257 "listing.m"
    MR_Box mdb__listing__InStrm_2;

#line 260 "listing.m"
{
#define MR_PROC_LABEL mdb__listing__mercury_stream_to_c_FILE_star_1_f_0

	MR_Word InStream;
	FILE * InStrm;

	InStream =  mdb__listing__InStream_1 ;
		{
#line 260 "listing.m"

    InStrm = MR_file(*(MR_unwrap_input_stream(InStream)));

#line 1340 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
	 mdb__listing__InStrm_2  = (MR_Box) InStrm;
#line 260 "listing.m"
}
#line 257 "listing.m"
    return mdb__listing__InStrm_2;
#line 257 "listing.m"
  }
#line 255 "listing.m"
}

#line 241 "listing.m"
static void MR_CALL 
mdb__listing__find_and_open_file_5_p_0(
#line 241 "listing.m"
  MR_Word mdb__listing__HeadVar__1_1,
#line 241 "listing.m"
  MR_String mdb__listing__FileName_2,
#line 241 "listing.m"
  MR_Word * mdb__listing__HeadVar__3_3)
#line 241 "listing.m"
{
#line 244 "listing.m"
  while (MR_TRUE)
#line 244 "listing.m"
    {
#line 244 "listing.m"
      /* tailcall optimized into a loop */
#line 244 "listing.m"
      {
#line 244 "listing.m"
        MR_bool mdb__listing__succeeded;

#line 244 "listing.m"
        if ((mdb__listing__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 244 "listing.m"
          *mdb__listing__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 244 "listing.m"
        else
#line 245 "listing.m"
          {
#line 245 "listing.m"
            MR_String mdb__listing__Dir_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__listing__HeadVar__1_1, (MR_Integer) 0)));
#line 245 "listing.m"
            MR_Word mdb__listing__Path_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__listing__HeadVar__1_1, (MR_Integer) 1)));
#line 245 "listing.m"
            MR_Word mdb__listing__Result0_15;
#line 245 "listing.m"
            MR_String mdb__listing__V_20_20;

#line 246 "listing.m"
            {
#line 246 "listing.m"
              mdb__listing__V_20_20 = mercury__dir__f_slash_2_f_0(mdb__listing__Dir_10, mdb__listing__FileName_2);
            }
#line 246 "listing.m"
            {
#line 246 "listing.m"
              mercury__io__open_input_4_p_0(mdb__listing__V_20_20, &mdb__listing__Result0_15);
            }
#line 250 "listing.m"
            if (((MR_tag((MR_Word) mdb__listing__Result0_15)) == (MR_mktag((MR_Integer) 1))))
#line 252 "listing.m"
              {
#line 252 "listing.m"
                /* direct tailcall eliminated */
#line 252 "listing.m"
                {
#line 252 "listing.m"
                  MR_Word mdb__listing__HeadVar__1__tmp_copy_1 = mdb__listing__Path_11;

#line 252 "listing.m"
                  mdb__listing__HeadVar__1_1 = mdb__listing__HeadVar__1__tmp_copy_1;
#line 252 "listing.m"
                }
#line 252 "listing.m"
                continue;
#line 252 "listing.m"
              }
#line 250 "listing.m"
            else
#line 248 "listing.m"
              {
#line 248 "listing.m"
                MR_Word mdb__listing__InStream_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__listing__Result0_15, (MR_Integer) 0)));

#line 249 "listing.m"
                {
#line 249 "listing.m"
                  MR_Word base;
#line 249 "listing.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 249 "listing.m"
                  *mdb__listing__HeadVar__3_3 = base;
#line 249 "listing.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__listing__InStream_16));
#line 249 "listing.m"
                }
#line 248 "listing.m"
              }
#line 245 "listing.m"
          }
#line 244 "listing.m"
      }
#line 244 "listing.m"
      break;
#line 244 "listing.m"
    }
#line 241 "listing.m"
}

#line 191 "listing.m"
static void MR_CALL 
mdb__listing__write_to_c_file_4_p_0(
#line 191 "listing.m"
  MR_Box mdb__listing__ErrStrm_1,
#line 191 "listing.m"
  MR_String mdb__listing__Str_2)
#line 191 "listing.m"
{
#line 193 "listing.m"
  {
#line 193 "listing.m"
    MR_bool mdb__listing__succeeded;

#line 196 "listing.m"
{
#define MR_PROC_LABEL mdb__listing__write_to_c_file_4_p_0

	FILE * ErrStrm;
	MR_String Str;

	ErrStrm = (FILE *) mdb__listing__ErrStrm_1 ;
	Str =  mdb__listing__Str_2 ;
		{
#line 196 "listing.m"

    fputs(Str, (FILE *)ErrStrm);

#line 1482 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
#line 196 "listing.m"
}
#line 193 "listing.m"
  }
#line 191 "listing.m"
}

#line 127 "listing.m"
static MR_Word MR_CALL 
mdb__listing__listing_type_0_f_0(void)
#line 127 "listing.m"
{
#line 130 "listing.m"
  {
#line 130 "listing.m"
    MR_bool mdb__listing__succeeded;
#line 130 "listing.m"
    MR_Word mdb__listing__HeadVar__1_1;
#line 130 "listing.m"
    MR_Word mdb__listing__Path_2;

#line 130 "listing.m"
    {
#line 130 "listing.m"
      return mdb__listing__HeadVar__1_1 = mercury__type_desc__type_of_1_f_0((MR_Word) &mdb__listing_scalar_common_1[0]);
    }
#line 130 "listing.m"
    return mdb__listing__HeadVar__1_1;
#line 130 "listing.m"
  }
#line 127 "listing.m"
}

#line 86 "listing.m"
void MR_CALL 
mdb__listing__list_file_portable_9_p_0(
#line 86 "listing.m"
  MR_Word mdb__listing__OutStrm_10,
#line 86 "listing.m"
  MR_Word mdb__listing__ErrStrm_11,
#line 86 "listing.m"
  MR_String mdb__listing__FileName_12,
#line 86 "listing.m"
  MR_Integer mdb__listing__FirstLine_13,
#line 86 "listing.m"
  MR_Integer mdb__listing__LastLine_14,
#line 86 "listing.m"
  MR_Integer mdb__listing__MarkLine_15,
#line 86 "listing.m"
  MR_Word mdb__listing__Path_16)
#line 86 "listing.m"
{
#line 220 "listing.m"
  {
#line 220 "listing.m"
    MR_bool mdb__listing__succeeded;

#line 204 "listing.m"
    {
#line 204 "listing.m"
      mdb__listing__succeeded = mercury__dir__path_name_is_absolute_1_p_0(mdb__listing__FileName_12);
    }
#line 220 "listing.m"
    if (mdb__listing__succeeded)
#line 205 "listing.m"
      {
#line 205 "listing.m"
        MR_Word mdb__listing__Result0_18;

#line 205 "listing.m"
        {
#line 205 "listing.m"
          mercury__io__open_input_4_p_0(mdb__listing__FileName_12, &mdb__listing__Result0_18);
        }
#line 211 "listing.m"
        if (((MR_tag((MR_Word) mdb__listing__Result0_18)) == (MR_mktag((MR_Integer) 1))))
#line 212 "listing.m"
          {
#line 212 "listing.m"
            MR_Word mdb__listing__Error_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__listing__Result0_18, (MR_Integer) 0)));
#line 212 "listing.m"
            MR_String mdb__listing__ErrorMsg_21;

#line 213 "listing.m"
            {
#line 213 "listing.m"
              mdb__listing__ErrorMsg_21 = mercury__io__error_message_1_f_0(mdb__listing__Error_20);
            }
#line 214 "listing.m"
            {
#line 214 "listing.m"
              mercury__io__write_string_4_p_0(mdb__listing__ErrStrm_11, (MR_String) "mdb: cannot open file ");
            }
#line 215 "listing.m"
            {
#line 215 "listing.m"
              mercury__io__write_string_4_p_0(mdb__listing__ErrStrm_11, mdb__listing__FileName_12);
            }
#line 216 "listing.m"
            {
#line 216 "listing.m"
              mercury__io__write_string_4_p_0(mdb__listing__ErrStrm_11, (MR_String) ": ");
            }
#line 217 "listing.m"
            {
#line 217 "listing.m"
              mercury__io__write_string_4_p_0(mdb__listing__ErrStrm_11, mdb__listing__ErrorMsg_21);
            }
#line 218 "listing.m"
            {
#line 218 "listing.m"
              mercury__io__write_string_4_p_0(mdb__listing__ErrStrm_11, (MR_String) "\n");
#line 218 "listing.m"
              return;
            }
#line 212 "listing.m"
          }
#line 211 "listing.m"
        else
#line 207 "listing.m"
          {
#line 207 "listing.m"
            MR_Word mdb__listing__InStrm_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__listing__Result0_18, (MR_Integer) 0)));

#line 208 "listing.m"
            {
#line 208 "listing.m"
              mdb__listing__print_lines_in_range_m_8_p_0(mdb__listing__InStrm_19, mdb__listing__OutStrm_10, (MR_Integer) 1, mdb__listing__FirstLine_13, mdb__listing__LastLine_14, mdb__listing__MarkLine_15);
            }
#line 210 "listing.m"
            {
#line 210 "listing.m"
              mercury__io__close_input_3_p_0(mdb__listing__InStrm_19);
#line 210 "listing.m"
              return;
            }
#line 207 "listing.m"
          }
#line 205 "listing.m"
      }
#line 220 "listing.m"
    else
#line 221 "listing.m"
      {
#line 221 "listing.m"
        MR_String mdb__listing__Dir_55;
#line 221 "listing.m"
        MR_Word mdb__listing__Result0_60;
#line 221 "listing.m"
        MR_String mdb__listing__V_65_65;

#line 221 "listing.m"
        {
#line 221 "listing.m"
          mdb__listing__Dir_55 = mercury__dir__this_directory_0_f_0();
        }
#line 246 "listing.m"
        {
#line 246 "listing.m"
          mdb__listing__V_65_65 = mercury__dir__f_slash_2_f_0(mdb__listing__Dir_55, mdb__listing__FileName_12);
        }
#line 246 "listing.m"
        {
#line 246 "listing.m"
          mercury__io__open_input_4_p_0(mdb__listing__V_65_65, &mdb__listing__Result0_60);
        }
#line 1652 "mdb.listing.c"
        if (((MR_tag((MR_Word) mdb__listing__Result0_60)) == (MR_mktag((MR_Integer) 1))))
#line 1654 "mdb.listing.c"
          {
#line 1656 "mdb.listing.c"
            MR_Word mdb__listing__Result_22;

#line 252 "listing.m"
            {
#line 252 "listing.m"
              mdb__listing__find_and_open_file_5_p_0(mdb__listing__Path_16, mdb__listing__FileName_12, &mdb__listing__Result_22);
            }
#line 227 "listing.m"
            if ((mdb__listing__Result_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 228 "listing.m"
              {
#line 229 "listing.m"
                {
#line 229 "listing.m"
                  mercury__io__write_string_4_p_0(mdb__listing__ErrStrm_11, (MR_String) "mdb: cannot find file ");
                }
#line 230 "listing.m"
                {
#line 230 "listing.m"
                  mercury__io__write_string_4_p_0(mdb__listing__ErrStrm_11, mdb__listing__FileName_12);
                }
#line 231 "listing.m"
                {
#line 231 "listing.m"
                  mercury__io__write_string_4_p_0(mdb__listing__ErrStrm_11, (MR_String) "\n");
#line 231 "listing.m"
                  return;
                }
#line 228 "listing.m"
              }
#line 227 "listing.m"
            else
#line 223 "listing.m"
              {
#line 223 "listing.m"
                MR_Word mdb__listing__InStrm_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__listing__Result_22, (MR_Integer) 0)));

#line 224 "listing.m"
                {
#line 224 "listing.m"
                  mdb__listing__print_lines_in_range_m_8_p_0(mdb__listing__InStrm_48, mdb__listing__OutStrm_10, (MR_Integer) 1, mdb__listing__FirstLine_13, mdb__listing__LastLine_14, mdb__listing__MarkLine_15);
                }
#line 226 "listing.m"
                {
#line 226 "listing.m"
                  mercury__io__close_input_3_p_0(mdb__listing__InStrm_48);
#line 226 "listing.m"
                  return;
                }
#line 223 "listing.m"
              }
#line 1708 "mdb.listing.c"
          }
#line 1710 "mdb.listing.c"
        else
#line 1712 "mdb.listing.c"
          {
#line 1714 "mdb.listing.c"
            MR_Word mdb__listing__InStrm_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__listing__Result0_60, (MR_Integer) 0)));

#line 224 "listing.m"
            {
#line 224 "listing.m"
              mdb__listing__print_lines_in_range_m_8_p_0(mdb__listing__InStrm_73, mdb__listing__OutStrm_10, (MR_Integer) 1, mdb__listing__FirstLine_13, mdb__listing__LastLine_14, mdb__listing__MarkLine_15);
            }
#line 226 "listing.m"
            {
#line 226 "listing.m"
              mercury__io__close_input_3_p_0(mdb__listing__InStrm_73);
#line 226 "listing.m"
              return;
            }
#line 1729 "mdb.listing.c"
          }
#line 221 "listing.m"
      }
#line 220 "listing.m"
  }
#line 86 "listing.m"
}

#line 79 "listing.m"
void MR_CALL 
mdb__listing__list_file_9_p_0(
#line 79 "listing.m"
  MR_Box mdb__listing__OutStrm_10,
#line 79 "listing.m"
  MR_Box mdb__listing__ErrStrm_11,
#line 79 "listing.m"
  MR_String mdb__listing__FileName_12,
#line 79 "listing.m"
  MR_Integer mdb__listing__FirstLine_13,
#line 79 "listing.m"
  MR_Integer mdb__listing__LastLine_14,
#line 79 "listing.m"
  MR_Integer mdb__listing__MarkLine_15,
#line 79 "listing.m"
  MR_Word mdb__listing__Path_16)
#line 79 "listing.m"
{
#line 175 "listing.m"
  {
#line 175 "listing.m"
    MR_bool mdb__listing__succeeded;

#line 158 "listing.m"
    {
#line 158 "listing.m"
      mdb__listing__succeeded = mercury__dir__path_name_is_absolute_1_p_0(mdb__listing__FileName_12);
    }
#line 175 "listing.m"
    if (mdb__listing__succeeded)
#line 159 "listing.m"
      {
#line 159 "listing.m"
        MR_Word mdb__listing__Result0_18;

#line 159 "listing.m"
        {
#line 159 "listing.m"
          mercury__io__open_input_4_p_0(mdb__listing__FileName_12, &mdb__listing__Result0_18);
        }
#line 166 "listing.m"
        if (((MR_tag((MR_Word) mdb__listing__Result0_18)) == (MR_mktag((MR_Integer) 1))))
#line 167 "listing.m"
          {
#line 167 "listing.m"
            MR_Word mdb__listing__Error_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__listing__Result0_18, (MR_Integer) 0)));
#line 167 "listing.m"
            MR_String mdb__listing__ErrorMsg_22;

#line 168 "listing.m"
            {
#line 168 "listing.m"
              mdb__listing__ErrorMsg_22 = mercury__io__error_message_1_f_0(mdb__listing__Error_21);
            }
#line 196 "listing.m"
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	FILE * ErrStrm;
	MR_String Str;

	ErrStrm = (FILE *) mdb__listing__ErrStrm_11 ;
	Str =  (MR_String) "mdb: cannot open file " ;
		{
#line 196 "listing.m"

    fputs(Str, (FILE *)ErrStrm);

#line 1807 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
#line 196 "listing.m"
}
#line 196 "listing.m"
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	FILE * ErrStrm;
	MR_String Str;

	ErrStrm = (FILE *) mdb__listing__ErrStrm_11 ;
	Str =  mdb__listing__FileName_12 ;
		{
#line 196 "listing.m"

    fputs(Str, (FILE *)ErrStrm);

#line 1827 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
#line 196 "listing.m"
}
#line 196 "listing.m"
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	FILE * ErrStrm;
	MR_String Str;

	ErrStrm = (FILE *) mdb__listing__ErrStrm_11 ;
	Str =  (MR_String) ": " ;
		{
#line 196 "listing.m"

    fputs(Str, (FILE *)ErrStrm);

#line 1847 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
#line 196 "listing.m"
}
#line 196 "listing.m"
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	FILE * ErrStrm;
	MR_String Str;

	ErrStrm = (FILE *) mdb__listing__ErrStrm_11 ;
	Str =  mdb__listing__ErrorMsg_22 ;
		{
#line 196 "listing.m"

    fputs(Str, (FILE *)ErrStrm);

#line 1867 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
#line 196 "listing.m"
}
#line 196 "listing.m"
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	FILE * ErrStrm;
	MR_String Str;

	ErrStrm = (FILE *) mdb__listing__ErrStrm_11 ;
	Str =  (MR_String) "\n" ;
		{
#line 196 "listing.m"

    fputs(Str, (FILE *)ErrStrm);

#line 1887 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
#line 196 "listing.m"
}
#line 167 "listing.m"
          }
#line 166 "listing.m"
        else
#line 161 "listing.m"
          {
#line 161 "listing.m"
            MR_Word mdb__listing__InStream_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__listing__Result0_18, (MR_Integer) 0)));
#line 161 "listing.m"
            MR_Box mdb__listing__InStrm_20;

#line 260 "listing.m"
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	MR_Word InStream;
	FILE * InStrm;

	InStream =  mdb__listing__InStream_19 ;
		{
#line 260 "listing.m"

    InStrm = MR_file(*(MR_unwrap_input_stream(InStream)));

#line 1917 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
	 mdb__listing__InStrm_20  = (MR_Box) InStrm;
#line 260 "listing.m"
}
#line 282 "listing.m"
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
#line 282 "listing.m"

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

#line 1966 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
#line 282 "listing.m"
}
#line 165 "listing.m"
            {
#line 165 "listing.m"
              mercury__io__close_input_3_p_0(mdb__listing__InStream_19);
#line 165 "listing.m"
              return;
            }
#line 161 "listing.m"
          }
#line 159 "listing.m"
      }
#line 175 "listing.m"
    else
#line 176 "listing.m"
      {
#line 176 "listing.m"
        MR_String mdb__listing__Dir_59;
#line 176 "listing.m"
        MR_Word mdb__listing__Result0_64;
#line 176 "listing.m"
        MR_String mdb__listing__V_69_69;

#line 176 "listing.m"
        {
#line 176 "listing.m"
          mdb__listing__Dir_59 = mercury__dir__this_directory_0_f_0();
        }
#line 246 "listing.m"
        {
#line 246 "listing.m"
          mdb__listing__V_69_69 = mercury__dir__f_slash_2_f_0(mdb__listing__Dir_59, mdb__listing__FileName_12);
        }
#line 246 "listing.m"
        {
#line 246 "listing.m"
          mercury__io__open_input_4_p_0(mdb__listing__V_69_69, &mdb__listing__Result0_64);
        }
#line 2009 "mdb.listing.c"
        if (((MR_tag((MR_Word) mdb__listing__Result0_64)) == (MR_mktag((MR_Integer) 1))))
#line 2011 "mdb.listing.c"
          {
#line 2013 "mdb.listing.c"
            MR_Word mdb__listing__Result_23;

#line 252 "listing.m"
            {
#line 252 "listing.m"
              mdb__listing__find_and_open_file_5_p_0(mdb__listing__Path_16, mdb__listing__FileName_12, &mdb__listing__Result_23);
            }
#line 183 "listing.m"
            if ((mdb__listing__Result_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 184 "listing.m"
              {
#line 196 "listing.m"
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	FILE * ErrStrm;
	MR_String Str;

	ErrStrm = (FILE *) mdb__listing__ErrStrm_11 ;
	Str =  (MR_String) "mdb: cannot find file " ;
		{
#line 196 "listing.m"

    fputs(Str, (FILE *)ErrStrm);

#line 2039 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
#line 196 "listing.m"
}
#line 196 "listing.m"
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	FILE * ErrStrm;
	MR_String Str;

	ErrStrm = (FILE *) mdb__listing__ErrStrm_11 ;
	Str =  mdb__listing__FileName_12 ;
		{
#line 196 "listing.m"

    fputs(Str, (FILE *)ErrStrm);

#line 2059 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
#line 196 "listing.m"
}
#line 196 "listing.m"
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	FILE * ErrStrm;
	MR_String Str;

	ErrStrm = (FILE *) mdb__listing__ErrStrm_11 ;
	Str =  (MR_String) "\n" ;
		{
#line 196 "listing.m"

    fputs(Str, (FILE *)ErrStrm);

#line 2079 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
#line 196 "listing.m"
}
#line 184 "listing.m"
              }
#line 183 "listing.m"
            else
#line 178 "listing.m"
              {
#line 178 "listing.m"
                MR_Word mdb__listing__InStream_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__listing__Result_23, (MR_Integer) 0)));
#line 178 "listing.m"
                MR_Box mdb__listing__InStrm_50;

#line 260 "listing.m"
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	MR_Word InStream;
	FILE * InStrm;

	InStream =  mdb__listing__InStream_49 ;
		{
#line 260 "listing.m"

    InStrm = MR_file(*(MR_unwrap_input_stream(InStream)));

#line 2109 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
	 mdb__listing__InStrm_50  = (MR_Box) InStrm;
#line 260 "listing.m"
}
#line 282 "listing.m"
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
#line 282 "listing.m"

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

#line 2158 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
#line 282 "listing.m"
}
#line 182 "listing.m"
                {
#line 182 "listing.m"
                  mercury__io__close_input_3_p_0(mdb__listing__InStream_49);
#line 182 "listing.m"
                  return;
                }
#line 178 "listing.m"
              }
#line 2173 "mdb.listing.c"
          }
#line 2175 "mdb.listing.c"
        else
#line 2177 "mdb.listing.c"
          {
#line 2179 "mdb.listing.c"
            MR_Word mdb__listing__InStream_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__listing__Result0_64, (MR_Integer) 0)));
#line 2181 "mdb.listing.c"
            MR_Box mdb__listing__InStrm_78;

#line 260 "listing.m"
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	MR_Word InStream;
	FILE * InStrm;

	InStream =  mdb__listing__InStream_77 ;
		{
#line 260 "listing.m"

    InStrm = MR_file(*(MR_unwrap_input_stream(InStream)));

#line 2197 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
	 mdb__listing__InStrm_78  = (MR_Box) InStrm;
#line 260 "listing.m"
}
#line 282 "listing.m"
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
#line 282 "listing.m"

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

#line 2246 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
#line 282 "listing.m"
}
#line 182 "listing.m"
            {
#line 182 "listing.m"
              mercury__io__close_input_3_p_0(mdb__listing__InStream_77);
#line 182 "listing.m"
              return;
            }
#line 2259 "mdb.listing.c"
          }
#line 176 "listing.m"
      }
#line 175 "listing.m"
  }
#line 79 "listing.m"
}

#line 62 "listing.m"
void MR_CALL 
mdb__listing__pop_list_path_2_p_0(
#line 62 "listing.m"
  MR_Word mdb__listing__HeadVar__1_1,
#line 62 "listing.m"
  MR_Word * mdb__listing__HeadVar__2_2)
#line 62 "listing.m"
{
#line 151 "listing.m"
  {
#line 151 "listing.m"
    MR_bool mdb__listing__succeeded;

#line 151 "listing.m"
    if ((mdb__listing__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 151 "listing.m"
      *mdb__listing__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 151 "listing.m"
    else
#line 152 "listing.m"
      {
#line 152 "listing.m"
        MR_String mdb__listing__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__listing__HeadVar__1_1, (MR_Integer) 0)));

#line 152 "listing.m"
        *mdb__listing__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__listing__HeadVar__1_1, (MR_Integer) 1)));
#line 152 "listing.m"
      }
#line 151 "listing.m"
  }
#line 62 "listing.m"
}

#line 54 "listing.m"
void MR_CALL 
mdb__listing__push_list_path_3_p_0(
#line 54 "listing.m"
  MR_String mdb__listing__Dir_4,
#line 54 "listing.m"
  MR_Word mdb__listing__Path_5,
#line 54 "listing.m"
  MR_Word * mdb__listing__HeadVar__3_3)
#line 54 "listing.m"
{
#line 147 "listing.m"
  {
#line 147 "listing.m"
    MR_bool mdb__listing__succeeded;

#line 147 "listing.m"
    {
#line 147 "listing.m"
      MR_Word base;
#line 147 "listing.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 147 "listing.m"
      *mdb__listing__HeadVar__3_3 = base;
#line 147 "listing.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__listing__Dir_4));
#line 147 "listing.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__listing__Path_5));
#line 147 "listing.m"
    }
#line 147 "listing.m"
  }
#line 54 "listing.m"
}

#line 47 "listing.m"
void MR_CALL 
mdb__listing__clear_list_path_2_p_0(
#line 47 "listing.m"
  MR_Word mdb__listing__HeadVar__1_3,
#line 47 "listing.m"
  MR_Word * mdb__listing__HeadVar__2_2)
#line 47 "listing.m"
{
#line 143 "listing.m"
  {
#line 143 "listing.m"
    MR_bool mdb__listing__succeeded;

#line 143 "listing.m"
    {
#line 143 "listing.m"
      mdb__listing__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_114_95_108_105_115_116_95_112_97_116_104_95_95_91_49_93_95_48_2_p_0(mdb__listing__HeadVar__2_2);
#line 143 "listing.m"
      return;
    }
#line 143 "listing.m"
  }
#line 47 "listing.m"
}

#line 45 "listing.m"
void MR_CALL 
mdb__listing__set_list_path_3_p_0(
#line 45 "listing.m"
  MR_Word mdb__listing__Dirs_4,
#line 45 "listing.m"
  MR_Word mdb__listing__HeadVar__2_5,
#line 45 "listing.m"
  MR_Word * mdb__listing__Dirs_3)
#line 45 "listing.m"
{
#line 141 "listing.m"
  {
#line 141 "listing.m"
    MR_bool mdb__listing__succeeded;

#line 141 "listing.m"
    {
#line 141 "listing.m"
      mdb__listing__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_108_105_115_116_95_112_97_116_104_95_95_91_50_93_95_48_3_p_0(mdb__listing__Dirs_4, mdb__listing__Dirs_3);
#line 141 "listing.m"
      return;
    }
#line 141 "listing.m"
  }
#line 45 "listing.m"
}

#line 44 "listing.m"
MR_Word MR_CALL 
mdb__listing__get_list_path_1_f_0(
#line 44 "listing.m"
  MR_Word mdb__listing__Path_3)
#line 44 "listing.m"
{
#line 139 "listing.m"
  {
#line 139 "listing.m"
    MR_bool mdb__listing__succeeded;
#line 139 "listing.m"
    MR_Word mdb__listing__Path_2 = mdb__listing__Path_3;

#line 139 "listing.m"
    return mdb__listing__Path_2;
#line 139 "listing.m"
  }
#line 44 "listing.m"
}

#line 39 "listing.m"
MR_Word MR_CALL 
mdb__listing__new_list_path_0_f_0(void)
#line 39 "listing.m"
{
#line 135 "listing.m"
  {
#line 135 "listing.m"
    MR_bool mdb__listing__succeeded;

#line 135 "listing.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 135 "listing.m"
  }
#line 39 "listing.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdb.listing. */
