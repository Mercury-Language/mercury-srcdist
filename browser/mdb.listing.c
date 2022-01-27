/*
** Automatically generated from `listing.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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




#line 69 "mdb.listing.c"
static const MR_FA_TypeInfo_Struct1 mdb__listing__list__ti_list_1builtin__type_ctor_info_string_0;

#line 72 "mdb.listing.c"
static MR_bool MR_CALL 
mdb__listing____Unify____c_file_ptr_0_0_10001(
#line 75 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_1,
#line 77 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2);

#line 80 "mdb.listing.c"
static void MR_CALL 
mdb__listing____Compare____c_file_ptr_0_0_10001(
#line 83 "mdb.listing.c"
  MR_Box * mdb__listing__wrapper_arg_1,
#line 85 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2,
#line 87 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_3);

#line 90 "mdb.listing.c"
static MR_bool MR_CALL 
mdb__listing____Unify____file_name_0_0_10001(
#line 93 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_1,
#line 95 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2);

#line 98 "mdb.listing.c"
static void MR_CALL 
mdb__listing____Compare____file_name_0_0_10001(
#line 101 "mdb.listing.c"
  MR_Box * mdb__listing__wrapper_arg_1,
#line 103 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2,
#line 105 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_3);

#line 108 "mdb.listing.c"
static MR_bool MR_CALL 
mdb__listing____Unify____line_no_0_0_10001(
#line 111 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_1,
#line 113 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2);

#line 116 "mdb.listing.c"
static void MR_CALL 
mdb__listing____Compare____line_no_0_0_10001(
#line 119 "mdb.listing.c"
  MR_Box * mdb__listing__wrapper_arg_1,
#line 121 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2,
#line 123 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_3);

#line 126 "mdb.listing.c"
static MR_bool MR_CALL 
mdb__listing____Unify____path_name_0_0_10001(
#line 129 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_1,
#line 131 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2);

#line 134 "mdb.listing.c"
static void MR_CALL 
mdb__listing____Compare____path_name_0_0_10001(
#line 137 "mdb.listing.c"
  MR_Box * mdb__listing__wrapper_arg_1,
#line 139 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2,
#line 141 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_3);

#line 144 "mdb.listing.c"
static MR_bool MR_CALL 
mdb__listing____Unify____search_path_0_0_10001(
#line 147 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_1,
#line 149 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2);

#line 152 "mdb.listing.c"
static void MR_CALL 
mdb__listing____Compare____search_path_0_0_10001(
#line 155 "mdb.listing.c"
  MR_Box * mdb__listing__wrapper_arg_1,
#line 157 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2,
#line 159 "mdb.listing.c"
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


#line 364 "mdb.listing.c"
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

#line 381 "mdb.listing.c"
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

#line 398 "mdb.listing.c"
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

#line 415 "mdb.listing.c"
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

#line 432 "mdb.listing.c"
static const MR_FA_TypeInfo_Struct1 mdb__listing__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 440 "mdb.listing.c"
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

#line 457 "mdb.listing.c"
static MR_bool MR_CALL 
mdb__listing____Unify____c_file_ptr_0_0_10001(
#line 460 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_1,
#line 462 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2)
#line 464 "mdb.listing.c"
{
#line 466 "mdb.listing.c"
  {
#line 468 "mdb.listing.c"
    MR_bool mdb__listing__succeeded;

#line 471 "mdb.listing.c"
    {
#line 473 "mdb.listing.c"
      mdb__listing__succeeded = mdb__listing____Unify____c_file_ptr_0_0(((MR_Box) mdb__listing__wrapper_arg_1), ((MR_Box) mdb__listing__wrapper_arg_2));
    }
#line 476 "mdb.listing.c"
    return mdb__listing__succeeded;
#line 478 "mdb.listing.c"
  }
#line 480 "mdb.listing.c"
}

#line 483 "mdb.listing.c"
static void MR_CALL 
mdb__listing____Compare____c_file_ptr_0_0_10001(
#line 486 "mdb.listing.c"
  MR_Box * mdb__listing__wrapper_arg_1,
#line 488 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2,
#line 490 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_3)
#line 492 "mdb.listing.c"
{
#line 494 "mdb.listing.c"
  {
#line 496 "mdb.listing.c"
    MR_Word mdb__listing__conv0_HeadVar__1_1;

#line 499 "mdb.listing.c"
    {
#line 501 "mdb.listing.c"
      mdb__listing____Compare____c_file_ptr_0_0(&mdb__listing__conv0_HeadVar__1_1, ((MR_Box) mdb__listing__wrapper_arg_2), ((MR_Box) mdb__listing__wrapper_arg_3));
    }
#line 504 "mdb.listing.c"
    *mdb__listing__wrapper_arg_1 = ((MR_Box) (mdb__listing__conv0_HeadVar__1_1));
#line 506 "mdb.listing.c"
  }
#line 508 "mdb.listing.c"
}

#line 511 "mdb.listing.c"
static MR_bool MR_CALL 
mdb__listing____Unify____file_name_0_0_10001(
#line 514 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_1,
#line 516 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2)
#line 518 "mdb.listing.c"
{
#line 520 "mdb.listing.c"
  {
#line 522 "mdb.listing.c"
    MR_bool mdb__listing__succeeded;

#line 525 "mdb.listing.c"
    {
#line 527 "mdb.listing.c"
      mdb__listing__succeeded = mdb__listing____Unify____file_name_0_0(((MR_String) mdb__listing__wrapper_arg_1), ((MR_String) mdb__listing__wrapper_arg_2));
    }
#line 530 "mdb.listing.c"
    return mdb__listing__succeeded;
#line 532 "mdb.listing.c"
  }
#line 534 "mdb.listing.c"
}

#line 537 "mdb.listing.c"
static void MR_CALL 
mdb__listing____Compare____file_name_0_0_10001(
#line 540 "mdb.listing.c"
  MR_Box * mdb__listing__wrapper_arg_1,
#line 542 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2,
#line 544 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_3)
#line 546 "mdb.listing.c"
{
#line 548 "mdb.listing.c"
  {
#line 550 "mdb.listing.c"
    MR_Word mdb__listing__conv0_HeadVar__1_1;

#line 553 "mdb.listing.c"
    {
#line 555 "mdb.listing.c"
      mdb__listing____Compare____file_name_0_0(&mdb__listing__conv0_HeadVar__1_1, ((MR_String) mdb__listing__wrapper_arg_2), ((MR_String) mdb__listing__wrapper_arg_3));
    }
#line 558 "mdb.listing.c"
    *mdb__listing__wrapper_arg_1 = ((MR_Box) (mdb__listing__conv0_HeadVar__1_1));
#line 560 "mdb.listing.c"
  }
#line 562 "mdb.listing.c"
}

#line 565 "mdb.listing.c"
static MR_bool MR_CALL 
mdb__listing____Unify____line_no_0_0_10001(
#line 568 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_1,
#line 570 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2)
#line 572 "mdb.listing.c"
{
#line 574 "mdb.listing.c"
  {
#line 576 "mdb.listing.c"
    MR_bool mdb__listing__succeeded;

#line 579 "mdb.listing.c"
    {
#line 581 "mdb.listing.c"
      mdb__listing__succeeded = mdb__listing____Unify____line_no_0_0(((MR_Integer) mdb__listing__wrapper_arg_1), ((MR_Integer) mdb__listing__wrapper_arg_2));
    }
#line 584 "mdb.listing.c"
    return mdb__listing__succeeded;
#line 586 "mdb.listing.c"
  }
#line 588 "mdb.listing.c"
}

#line 591 "mdb.listing.c"
static void MR_CALL 
mdb__listing____Compare____line_no_0_0_10001(
#line 594 "mdb.listing.c"
  MR_Box * mdb__listing__wrapper_arg_1,
#line 596 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2,
#line 598 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_3)
#line 600 "mdb.listing.c"
{
#line 602 "mdb.listing.c"
  {
#line 604 "mdb.listing.c"
    MR_Word mdb__listing__conv0_HeadVar__1_1;

#line 607 "mdb.listing.c"
    {
#line 609 "mdb.listing.c"
      mdb__listing____Compare____line_no_0_0(&mdb__listing__conv0_HeadVar__1_1, ((MR_Integer) mdb__listing__wrapper_arg_2), ((MR_Integer) mdb__listing__wrapper_arg_3));
    }
#line 612 "mdb.listing.c"
    *mdb__listing__wrapper_arg_1 = ((MR_Box) (mdb__listing__conv0_HeadVar__1_1));
#line 614 "mdb.listing.c"
  }
#line 616 "mdb.listing.c"
}

#line 619 "mdb.listing.c"
static MR_bool MR_CALL 
mdb__listing____Unify____path_name_0_0_10001(
#line 622 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_1,
#line 624 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2)
#line 626 "mdb.listing.c"
{
#line 628 "mdb.listing.c"
  {
#line 630 "mdb.listing.c"
    MR_bool mdb__listing__succeeded;

#line 633 "mdb.listing.c"
    {
#line 635 "mdb.listing.c"
      mdb__listing__succeeded = mdb__listing____Unify____path_name_0_0(((MR_String) mdb__listing__wrapper_arg_1), ((MR_String) mdb__listing__wrapper_arg_2));
    }
#line 638 "mdb.listing.c"
    return mdb__listing__succeeded;
#line 640 "mdb.listing.c"
  }
#line 642 "mdb.listing.c"
}

#line 645 "mdb.listing.c"
static void MR_CALL 
mdb__listing____Compare____path_name_0_0_10001(
#line 648 "mdb.listing.c"
  MR_Box * mdb__listing__wrapper_arg_1,
#line 650 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2,
#line 652 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_3)
#line 654 "mdb.listing.c"
{
#line 656 "mdb.listing.c"
  {
#line 658 "mdb.listing.c"
    MR_Word mdb__listing__conv0_HeadVar__1_1;

#line 661 "mdb.listing.c"
    {
#line 663 "mdb.listing.c"
      mdb__listing____Compare____path_name_0_0(&mdb__listing__conv0_HeadVar__1_1, ((MR_String) mdb__listing__wrapper_arg_2), ((MR_String) mdb__listing__wrapper_arg_3));
    }
#line 666 "mdb.listing.c"
    *mdb__listing__wrapper_arg_1 = ((MR_Box) (mdb__listing__conv0_HeadVar__1_1));
#line 668 "mdb.listing.c"
  }
#line 670 "mdb.listing.c"
}

#line 673 "mdb.listing.c"
static MR_bool MR_CALL 
mdb__listing____Unify____search_path_0_0_10001(
#line 676 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_1,
#line 678 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2)
#line 680 "mdb.listing.c"
{
#line 682 "mdb.listing.c"
  {
#line 684 "mdb.listing.c"
    MR_bool mdb__listing__succeeded;

#line 687 "mdb.listing.c"
    {
#line 689 "mdb.listing.c"
      mdb__listing__succeeded = mdb__listing____Unify____search_path_0_0(((MR_Word) mdb__listing__wrapper_arg_1), ((MR_Word) mdb__listing__wrapper_arg_2));
    }
#line 692 "mdb.listing.c"
    return mdb__listing__succeeded;
#line 694 "mdb.listing.c"
  }
#line 696 "mdb.listing.c"
}

#line 699 "mdb.listing.c"
static void MR_CALL 
mdb__listing____Compare____search_path_0_0_10001(
#line 702 "mdb.listing.c"
  MR_Box * mdb__listing__wrapper_arg_1,
#line 704 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2,
#line 706 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_3)
#line 708 "mdb.listing.c"
{
#line 710 "mdb.listing.c"
  {
#line 712 "mdb.listing.c"
    MR_Word mdb__listing__conv0_HeadVar__1_1;

#line 715 "mdb.listing.c"
    {
#line 717 "mdb.listing.c"
      mdb__listing____Compare____search_path_0_0(&mdb__listing__conv0_HeadVar__1_1, ((MR_Word) mdb__listing__wrapper_arg_2), ((MR_Word) mdb__listing__wrapper_arg_3));
    }
#line 720 "mdb.listing.c"
    *mdb__listing__wrapper_arg_1 = ((MR_Box) (mdb__listing__conv0_HeadVar__1_1));
#line 722 "mdb.listing.c"
  }
#line 724 "mdb.listing.c"
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
      mdb__listing__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__listing_scalar_common_1[0], ((MR_Box) (mdb__listing__Cast_HeadVar1_3)), ((MR_Box) (mdb__listing__Cast_HeadVar2_4)));
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
      mdb__listing__succeeded = mercury__builtin____Unify____c_pointer_0_0(mdb__listing__Cast_HeadVar1_3, mdb__listing__Cast_HeadVar2_4);
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
#line 316 "listing.m"
              if (mdb__listing__succeeded)
#line 321 "listing.m"
                {
#line 317 "listing.m"
                  mdb__listing__succeeded = (mdb__listing__ThisLine_11 == mdb__listing__MarkLine_14);
#line 317 "listing.m"
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
#line 317 "listing.m"
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
#line 316 "listing.m"
              else
#line 316 "listing.m"
                {
#line 316 "listing.m"
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

#line 1289 "mdb.listing.c"

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

#line 1327 "mdb.listing.c"

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

#line 1469 "mdb.listing.c"

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
      mdb__listing__HeadVar__1_1 = mercury__type_desc__type_of_1_f_0((MR_Word) &mdb__listing_scalar_common_1[0]);
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
#line 204 "listing.m"
  {
#line 204 "listing.m"
    MR_bool mdb__listing__succeeded;

#line 204 "listing.m"
    {
#line 204 "listing.m"
      mdb__listing__succeeded = mercury__dir__path_name_is_absolute_1_p_0(mdb__listing__FileName_12);
    }
#line 204 "listing.m"
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
            }
#line 207 "listing.m"
          }
#line 205 "listing.m"
      }
#line 204 "listing.m"
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
#line 1635 "mdb.listing.c"
        if (((MR_tag((MR_Word) mdb__listing__Result0_60)) == (MR_mktag((MR_Integer) 1))))
#line 1637 "mdb.listing.c"
          {
#line 1639 "mdb.listing.c"
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
                }
#line 223 "listing.m"
              }
#line 1687 "mdb.listing.c"
          }
#line 1689 "mdb.listing.c"
        else
#line 1691 "mdb.listing.c"
          {
#line 1693 "mdb.listing.c"
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
            }
#line 1706 "mdb.listing.c"
          }
#line 221 "listing.m"
      }
#line 204 "listing.m"
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
#line 158 "listing.m"
  {
#line 158 "listing.m"
    MR_bool mdb__listing__succeeded;

#line 158 "listing.m"
    {
#line 158 "listing.m"
      mdb__listing__succeeded = mercury__dir__path_name_is_absolute_1_p_0(mdb__listing__FileName_12);
    }
#line 158 "listing.m"
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

#line 1784 "mdb.listing.c"

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

#line 1804 "mdb.listing.c"

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

#line 1824 "mdb.listing.c"

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

#line 1844 "mdb.listing.c"

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

#line 1864 "mdb.listing.c"

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

#line 1894 "mdb.listing.c"

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

#line 1943 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
#line 282 "listing.m"
}
#line 165 "listing.m"
            {
#line 165 "listing.m"
              mercury__io__close_input_3_p_0(mdb__listing__InStream_19);
            }
#line 161 "listing.m"
          }
#line 159 "listing.m"
      }
#line 158 "listing.m"
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
#line 1984 "mdb.listing.c"
        if (((MR_tag((MR_Word) mdb__listing__Result0_64)) == (MR_mktag((MR_Integer) 1))))
#line 1986 "mdb.listing.c"
          {
#line 1988 "mdb.listing.c"
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

#line 2014 "mdb.listing.c"

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

#line 2034 "mdb.listing.c"

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

#line 2054 "mdb.listing.c"

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

#line 2084 "mdb.listing.c"

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

#line 2133 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
#line 282 "listing.m"
}
#line 182 "listing.m"
                {
#line 182 "listing.m"
                  mercury__io__close_input_3_p_0(mdb__listing__InStream_49);
                }
#line 178 "listing.m"
              }
#line 2146 "mdb.listing.c"
          }
#line 2148 "mdb.listing.c"
        else
#line 2150 "mdb.listing.c"
          {
#line 2152 "mdb.listing.c"
            MR_Word mdb__listing__InStream_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__listing__Result0_64, (MR_Integer) 0)));
#line 2154 "mdb.listing.c"
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

#line 2170 "mdb.listing.c"

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

#line 2219 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
#line 282 "listing.m"
}
#line 182 "listing.m"
            {
#line 182 "listing.m"
              mercury__io__close_input_3_p_0(mdb__listing__InStream_77);
            }
#line 2230 "mdb.listing.c"
          }
#line 176 "listing.m"
      }
#line 158 "listing.m"
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
