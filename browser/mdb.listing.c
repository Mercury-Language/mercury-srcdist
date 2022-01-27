/*
** Automatically generated from `listing.m'
** by the Mercury compiler,
** version DEV
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
#include "mdb.mih"
#include "mdbcomp.mih"
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

#line 309 "listing.m"
static void MR_CALL 
mdb__listing__print_lines_in_range_m_8_p_0(
#line 309 "listing.m"
  MR_Word mdb__listing__InStrm_9,
#line 309 "listing.m"
  MR_Word mdb__listing__OutStrm_10,
#line 309 "listing.m"
  MR_Integer mdb__listing__ThisLine_11,
#line 309 "listing.m"
  MR_Integer mdb__listing__FirstLine_12,
#line 309 "listing.m"
  MR_Integer mdb__listing__LastLine_13,
#line 309 "listing.m"
  MR_Integer mdb__listing__MarkLine_14);

#line 276 "listing.m"
static void MR_CALL 
mdb__listing__print_lines_in_range_c_8_p_0(
#line 276 "listing.m"
  MR_Box mdb__listing__InStrm_1,
#line 276 "listing.m"
  MR_Box mdb__listing__OutStrm_2,
#line 276 "listing.m"
  MR_Integer mdb__listing__ThisLine_3,
#line 276 "listing.m"
  MR_Integer mdb__listing__FirstLine_4,
#line 276 "listing.m"
  MR_Integer mdb__listing__LastLine_5,
#line 276 "listing.m"
  MR_Integer mdb__listing__MarkLine_6);

#line 256 "listing.m"
static MR_Box MR_CALL 
mdb__listing__mercury_stream_to_c_FILE_star_1_f_0(
#line 256 "listing.m"
  MR_Word mdb__listing__InStream_1);

#line 242 "listing.m"
static void MR_CALL 
mdb__listing__find_and_open_file_5_p_0(
#line 242 "listing.m"
  MR_Word mdb__listing__HeadVar__1_1,
#line 242 "listing.m"
  MR_String mdb__listing__FileName_2,
#line 242 "listing.m"
  MR_Word * mdb__listing__HeadVar__3_3);

#line 192 "listing.m"
static void MR_CALL 
mdb__listing__write_to_c_file_4_p_0(
#line 192 "listing.m"
  MR_Box mdb__listing__ErrStrm_1,
#line 192 "listing.m"
  MR_String mdb__listing__Str_2);

#line 128 "listing.m"
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



#include "mdb.listing.mh"
#include "mdb.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "dir.mh"
#include "dir.mh"

#line 113 "listing.m"
MR_Word 
ML_LISTING_new_list_path(void)
#line 113 "listing.m"
{
#line 113 "listing.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__listing__new_list_path_0_f_0();
	return ret_value;
}

#line 115 "listing.m"
MR_Word 
ML_LISTING_get_list_path(
#line 115 "listing.m"
  MR_Word mdb__listing__Path_3)
#line 115 "listing.m"
{
#line 115 "listing.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__listing__get_list_path_1_f_0((MR_Word) mdb__listing__Path_3);
	return ret_value;
}

#line 117 "listing.m"
void 
ML_LISTING_set_list_path(
#line 117 "listing.m"
  MR_Word mdb__listing__Dirs_4,
#line 117 "listing.m"
  MR_Word mdb__listing__HeadVar__2_5,
#line 117 "listing.m"
  MR_Word * mdb__listing__Dirs_3)
#line 117 "listing.m"
{
#line 117 "listing.m"
	mdb__listing__set_list_path_3_p_0((MR_Word) mdb__listing__Dirs_4, (MR_Word) mdb__listing__HeadVar__2_5, (MR_Word *) mdb__listing__Dirs_3);
}

#line 119 "listing.m"
void 
ML_LISTING_clear_list_path(
#line 119 "listing.m"
  MR_Word mdb__listing__HeadVar__1_3,
#line 119 "listing.m"
  MR_Word * mdb__listing__HeadVar__2_2)
#line 119 "listing.m"
{
#line 119 "listing.m"
	mdb__listing__clear_list_path_2_p_0((MR_Word) mdb__listing__HeadVar__1_3, (MR_Word *) mdb__listing__HeadVar__2_2);
}

#line 121 "listing.m"
void 
ML_LISTING_push_list_path(
#line 121 "listing.m"
  MR_String mdb__listing__Dir_4,
#line 121 "listing.m"
  MR_Word mdb__listing__Path_5,
#line 121 "listing.m"
  MR_Word * mdb__listing__HeadVar__3_3)
#line 121 "listing.m"
{
#line 121 "listing.m"
	mdb__listing__push_list_path_3_p_0((MR_String) mdb__listing__Dir_4, (MR_Word) mdb__listing__Path_5, (MR_Word *) mdb__listing__HeadVar__3_3);
}

#line 123 "listing.m"
void 
ML_LISTING_pop_list_path(
#line 123 "listing.m"
  MR_Word mdb__listing__HeadVar__1_1,
#line 123 "listing.m"
  MR_Word * mdb__listing__HeadVar__2_2)
#line 123 "listing.m"
{
#line 123 "listing.m"
	mdb__listing__pop_list_path_2_p_0((MR_Word) mdb__listing__HeadVar__1_1, (MR_Word *) mdb__listing__HeadVar__2_2);
}

#line 125 "listing.m"
void 
ML_LISTING_list_file(
#line 125 "listing.m"
  FILE * mdb__listing__OutStrm_10,
#line 125 "listing.m"
  FILE * mdb__listing__ErrStrm_11,
#line 125 "listing.m"
  MR_String mdb__listing__FileName_12,
#line 125 "listing.m"
  MR_Integer mdb__listing__FirstLine_13,
#line 125 "listing.m"
  MR_Integer mdb__listing__LastLine_14,
#line 125 "listing.m"
  MR_Integer mdb__listing__MarkLine_15,
#line 125 "listing.m"
  MR_Word mdb__listing__Path_16)
#line 125 "listing.m"
{
#line 125 "listing.m"
	MR_Box mdb__listing__boxed_OutStrm_10;
	MR_Box mdb__listing__boxed_ErrStrm_11;
	MR_MAYBE_BOX_FOREIGN_TYPE(FILE *, mdb__listing__OutStrm_10, mdb__listing__boxed_OutStrm_10);
	MR_MAYBE_BOX_FOREIGN_TYPE(FILE *, mdb__listing__ErrStrm_11, mdb__listing__boxed_ErrStrm_11);
	mdb__listing__list_file_9_p_0(mdb__listing__boxed_OutStrm_10, mdb__listing__boxed_ErrStrm_11, (MR_String) mdb__listing__FileName_12, (MR_Integer) mdb__listing__FirstLine_13, (MR_Integer) mdb__listing__LastLine_14, (MR_Integer) mdb__listing__MarkLine_15, (MR_Word) mdb__listing__Path_16);
}

#line 129 "listing.m"
MR_Word 
ML_LISTING_listing_type(void)
#line 129 "listing.m"
{
#line 129 "listing.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__listing__listing_type_0_f_0();
	return ret_value;
}


#line 367 "mdb.listing.c"
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

#line 384 "mdb.listing.c"
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

#line 401 "mdb.listing.c"
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

#line 418 "mdb.listing.c"
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

#line 435 "mdb.listing.c"
static const MR_FA_TypeInfo_Struct1 mdb__listing__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 443 "mdb.listing.c"
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

#line 460 "mdb.listing.c"
static MR_bool MR_CALL 
mdb__listing____Unify____c_file_ptr_0_0_10001(
#line 463 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_1,
#line 465 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2)
#line 467 "mdb.listing.c"
{
#line 469 "mdb.listing.c"
  {
#line 471 "mdb.listing.c"
    MR_bool mdb__listing__succeeded;

#line 474 "mdb.listing.c"
    {
#line 476 "mdb.listing.c"
      mdb__listing__succeeded = mdb__listing____Unify____c_file_ptr_0_0(((MR_Box) mdb__listing__wrapper_arg_1), ((MR_Box) mdb__listing__wrapper_arg_2));
    }
#line 479 "mdb.listing.c"
    return mdb__listing__succeeded;
#line 481 "mdb.listing.c"
  }
#line 483 "mdb.listing.c"
}

#line 486 "mdb.listing.c"
static void MR_CALL 
mdb__listing____Compare____c_file_ptr_0_0_10001(
#line 489 "mdb.listing.c"
  MR_Box * mdb__listing__wrapper_arg_1,
#line 491 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2,
#line 493 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_3)
#line 495 "mdb.listing.c"
{
#line 497 "mdb.listing.c"
  {
#line 499 "mdb.listing.c"
    MR_Word mdb__listing__conv0_HeadVar__1_1;

#line 502 "mdb.listing.c"
    {
#line 504 "mdb.listing.c"
      mdb__listing____Compare____c_file_ptr_0_0(&mdb__listing__conv0_HeadVar__1_1, ((MR_Box) mdb__listing__wrapper_arg_2), ((MR_Box) mdb__listing__wrapper_arg_3));
    }
#line 507 "mdb.listing.c"
    *mdb__listing__wrapper_arg_1 = ((MR_Box) (mdb__listing__conv0_HeadVar__1_1));
#line 509 "mdb.listing.c"
  }
#line 511 "mdb.listing.c"
}

#line 514 "mdb.listing.c"
static MR_bool MR_CALL 
mdb__listing____Unify____file_name_0_0_10001(
#line 517 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_1,
#line 519 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2)
#line 521 "mdb.listing.c"
{
#line 523 "mdb.listing.c"
  {
#line 525 "mdb.listing.c"
    MR_bool mdb__listing__succeeded;

#line 528 "mdb.listing.c"
    {
#line 530 "mdb.listing.c"
      mdb__listing__succeeded = mdb__listing____Unify____file_name_0_0(((MR_String) mdb__listing__wrapper_arg_1), ((MR_String) mdb__listing__wrapper_arg_2));
    }
#line 533 "mdb.listing.c"
    return mdb__listing__succeeded;
#line 535 "mdb.listing.c"
  }
#line 537 "mdb.listing.c"
}

#line 540 "mdb.listing.c"
static void MR_CALL 
mdb__listing____Compare____file_name_0_0_10001(
#line 543 "mdb.listing.c"
  MR_Box * mdb__listing__wrapper_arg_1,
#line 545 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2,
#line 547 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_3)
#line 549 "mdb.listing.c"
{
#line 551 "mdb.listing.c"
  {
#line 553 "mdb.listing.c"
    MR_Word mdb__listing__conv0_HeadVar__1_1;

#line 556 "mdb.listing.c"
    {
#line 558 "mdb.listing.c"
      mdb__listing____Compare____file_name_0_0(&mdb__listing__conv0_HeadVar__1_1, ((MR_String) mdb__listing__wrapper_arg_2), ((MR_String) mdb__listing__wrapper_arg_3));
    }
#line 561 "mdb.listing.c"
    *mdb__listing__wrapper_arg_1 = ((MR_Box) (mdb__listing__conv0_HeadVar__1_1));
#line 563 "mdb.listing.c"
  }
#line 565 "mdb.listing.c"
}

#line 568 "mdb.listing.c"
static MR_bool MR_CALL 
mdb__listing____Unify____line_no_0_0_10001(
#line 571 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_1,
#line 573 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2)
#line 575 "mdb.listing.c"
{
#line 577 "mdb.listing.c"
  {
#line 579 "mdb.listing.c"
    MR_bool mdb__listing__succeeded;

#line 582 "mdb.listing.c"
    {
#line 584 "mdb.listing.c"
      mdb__listing__succeeded = mdb__listing____Unify____line_no_0_0(((MR_Integer) mdb__listing__wrapper_arg_1), ((MR_Integer) mdb__listing__wrapper_arg_2));
    }
#line 587 "mdb.listing.c"
    return mdb__listing__succeeded;
#line 589 "mdb.listing.c"
  }
#line 591 "mdb.listing.c"
}

#line 594 "mdb.listing.c"
static void MR_CALL 
mdb__listing____Compare____line_no_0_0_10001(
#line 597 "mdb.listing.c"
  MR_Box * mdb__listing__wrapper_arg_1,
#line 599 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2,
#line 601 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_3)
#line 603 "mdb.listing.c"
{
#line 605 "mdb.listing.c"
  {
#line 607 "mdb.listing.c"
    MR_Word mdb__listing__conv0_HeadVar__1_1;

#line 610 "mdb.listing.c"
    {
#line 612 "mdb.listing.c"
      mdb__listing____Compare____line_no_0_0(&mdb__listing__conv0_HeadVar__1_1, ((MR_Integer) mdb__listing__wrapper_arg_2), ((MR_Integer) mdb__listing__wrapper_arg_3));
    }
#line 615 "mdb.listing.c"
    *mdb__listing__wrapper_arg_1 = ((MR_Box) (mdb__listing__conv0_HeadVar__1_1));
#line 617 "mdb.listing.c"
  }
#line 619 "mdb.listing.c"
}

#line 622 "mdb.listing.c"
static MR_bool MR_CALL 
mdb__listing____Unify____path_name_0_0_10001(
#line 625 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_1,
#line 627 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2)
#line 629 "mdb.listing.c"
{
#line 631 "mdb.listing.c"
  {
#line 633 "mdb.listing.c"
    MR_bool mdb__listing__succeeded;

#line 636 "mdb.listing.c"
    {
#line 638 "mdb.listing.c"
      mdb__listing__succeeded = mdb__listing____Unify____path_name_0_0(((MR_String) mdb__listing__wrapper_arg_1), ((MR_String) mdb__listing__wrapper_arg_2));
    }
#line 641 "mdb.listing.c"
    return mdb__listing__succeeded;
#line 643 "mdb.listing.c"
  }
#line 645 "mdb.listing.c"
}

#line 648 "mdb.listing.c"
static void MR_CALL 
mdb__listing____Compare____path_name_0_0_10001(
#line 651 "mdb.listing.c"
  MR_Box * mdb__listing__wrapper_arg_1,
#line 653 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2,
#line 655 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_3)
#line 657 "mdb.listing.c"
{
#line 659 "mdb.listing.c"
  {
#line 661 "mdb.listing.c"
    MR_Word mdb__listing__conv0_HeadVar__1_1;

#line 664 "mdb.listing.c"
    {
#line 666 "mdb.listing.c"
      mdb__listing____Compare____path_name_0_0(&mdb__listing__conv0_HeadVar__1_1, ((MR_String) mdb__listing__wrapper_arg_2), ((MR_String) mdb__listing__wrapper_arg_3));
    }
#line 669 "mdb.listing.c"
    *mdb__listing__wrapper_arg_1 = ((MR_Box) (mdb__listing__conv0_HeadVar__1_1));
#line 671 "mdb.listing.c"
  }
#line 673 "mdb.listing.c"
}

#line 676 "mdb.listing.c"
static MR_bool MR_CALL 
mdb__listing____Unify____search_path_0_0_10001(
#line 679 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_1,
#line 681 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2)
#line 683 "mdb.listing.c"
{
#line 685 "mdb.listing.c"
  {
#line 687 "mdb.listing.c"
    MR_bool mdb__listing__succeeded;

#line 690 "mdb.listing.c"
    {
#line 692 "mdb.listing.c"
      mdb__listing__succeeded = mdb__listing____Unify____search_path_0_0(((MR_Word) mdb__listing__wrapper_arg_1), ((MR_Word) mdb__listing__wrapper_arg_2));
    }
#line 695 "mdb.listing.c"
    return mdb__listing__succeeded;
#line 697 "mdb.listing.c"
  }
#line 699 "mdb.listing.c"
}

#line 702 "mdb.listing.c"
static void MR_CALL 
mdb__listing____Compare____search_path_0_0_10001(
#line 705 "mdb.listing.c"
  MR_Box * mdb__listing__wrapper_arg_1,
#line 707 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_2,
#line 709 "mdb.listing.c"
  MR_Box mdb__listing__wrapper_arg_3)
#line 711 "mdb.listing.c"
{
#line 713 "mdb.listing.c"
  {
#line 715 "mdb.listing.c"
    MR_Word mdb__listing__conv0_HeadVar__1_1;

#line 718 "mdb.listing.c"
    {
#line 720 "mdb.listing.c"
      mdb__listing____Compare____search_path_0_0(&mdb__listing__conv0_HeadVar__1_1, ((MR_Word) mdb__listing__wrapper_arg_2), ((MR_Word) mdb__listing__wrapper_arg_3));
    }
#line 723 "mdb.listing.c"
    *mdb__listing__wrapper_arg_1 = ((MR_Box) (mdb__listing__conv0_HeadVar__1_1));
#line 725 "mdb.listing.c"
  }
#line 727 "mdb.listing.c"
}

#line 47 "listing.m"
void MR_CALL 
mdb__listing__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_114_95_108_105_115_116_95_112_97_116_104_95_95_91_49_93_95_48_2_p_0(
#line 47 "listing.m"
  MR_Word * mdb__listing__HeadVar__2_2)
#line 47 "listing.m"
{
#line 144 "listing.m"
  {
#line 144 "listing.m"
    MR_bool mdb__listing__succeeded;

#line 144 "listing.m"
    *mdb__listing__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 144 "listing.m"
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
#line 142 "listing.m"
  {
#line 142 "listing.m"
    MR_bool mdb__listing__succeeded;

#line 142 "listing.m"
    *mdb__listing__Dirs_3 = mdb__listing__Dirs_4;
#line 142 "listing.m"
  }
#line 45 "listing.m"
}

#line 103 "listing.m"
void MR_CALL 
mdb__listing____Compare____search_path_0_0(
#line 103 "listing.m"
  MR_Word * mdb__listing__HeadVar__1_1,
#line 103 "listing.m"
  MR_Word mdb__listing__HeadVar__2_2,
#line 103 "listing.m"
  MR_Word mdb__listing__HeadVar__3_3)
#line 103 "listing.m"
{
#line 103 "listing.m"
  {
#line 103 "listing.m"
    MR_bool mdb__listing__succeeded;
#line 103 "listing.m"
    MR_Word mdb__listing__Cast_HeadVar1_4 = mdb__listing__HeadVar__2_2;
#line 103 "listing.m"
    MR_Word mdb__listing__Cast_HeadVar2_5 = mdb__listing__HeadVar__3_3;

#line 103 "listing.m"
    {
#line 103 "listing.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdb__listing_scalar_common_1[0], mdb__listing__HeadVar__1_1, ((MR_Box) (mdb__listing__Cast_HeadVar1_4)), ((MR_Box) (mdb__listing__Cast_HeadVar2_5)));
#line 103 "listing.m"
      return;
    }
#line 103 "listing.m"
  }
#line 103 "listing.m"
}

#line 103 "listing.m"
MR_bool MR_CALL 
mdb__listing____Unify____search_path_0_0(
#line 103 "listing.m"
  MR_Word mdb__listing__HeadVar__1_1,
#line 103 "listing.m"
  MR_Word mdb__listing__HeadVar__2_2)
#line 103 "listing.m"
{
#line 103 "listing.m"
  {
#line 103 "listing.m"
    MR_bool mdb__listing__succeeded;
#line 103 "listing.m"
    MR_Word mdb__listing__Cast_HeadVar1_3 = mdb__listing__HeadVar__1_1;
#line 103 "listing.m"
    MR_Word mdb__listing__Cast_HeadVar2_4 = mdb__listing__HeadVar__2_2;

#line 103 "listing.m"
    {
#line 103 "listing.m"
      return mdb__listing__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__listing_scalar_common_1[0], ((MR_Box) (mdb__listing__Cast_HeadVar1_3)), ((MR_Box) (mdb__listing__Cast_HeadVar2_4)));
    }
#line 103 "listing.m"
    return mdb__listing__succeeded;
#line 103 "listing.m"
  }
#line 103 "listing.m"
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

#line 109 "listing.m"
void MR_CALL 
mdb__listing____Compare____c_file_ptr_0_0(
#line 109 "listing.m"
  MR_Word * mdb__listing__HeadVar__1_1,
#line 109 "listing.m"
  MR_Box mdb__listing__HeadVar__2_2,
#line 109 "listing.m"
  MR_Box mdb__listing__HeadVar__3_3)
#line 109 "listing.m"
{
#line 109 "listing.m"
  {
#line 109 "listing.m"
    MR_bool mdb__listing__succeeded;
#line 109 "listing.m"
    MR_Word mdb__listing__Cast_HeadVar1_4 = (MR_Word) mdb__listing__HeadVar__2_2;
#line 109 "listing.m"
    MR_Word mdb__listing__Cast_HeadVar2_5 = (MR_Word) mdb__listing__HeadVar__3_3;

#line 109 "listing.m"
    {
#line 109 "listing.m"
      mercury__builtin____Compare____c_pointer_0_0(mdb__listing__HeadVar__1_1, mdb__listing__Cast_HeadVar1_4, mdb__listing__Cast_HeadVar2_5);
#line 109 "listing.m"
      return;
    }
#line 109 "listing.m"
  }
#line 109 "listing.m"
}

#line 109 "listing.m"
MR_bool MR_CALL 
mdb__listing____Unify____c_file_ptr_0_0(
#line 109 "listing.m"
  MR_Box mdb__listing__HeadVar__1_1,
#line 109 "listing.m"
  MR_Box mdb__listing__HeadVar__2_2)
#line 109 "listing.m"
{
#line 109 "listing.m"
  {
#line 109 "listing.m"
    MR_bool mdb__listing__succeeded;
#line 109 "listing.m"
    MR_Word mdb__listing__Cast_HeadVar1_3 = (MR_Word) mdb__listing__HeadVar__1_1;
#line 109 "listing.m"
    MR_Word mdb__listing__Cast_HeadVar2_4 = (MR_Word) mdb__listing__HeadVar__2_2;

#line 109 "listing.m"
    {
#line 109 "listing.m"
      return mdb__listing__succeeded = mercury__builtin____Unify____c_pointer_0_0(mdb__listing__Cast_HeadVar1_3, mdb__listing__Cast_HeadVar2_4);
    }
#line 109 "listing.m"
    return mdb__listing__succeeded;
#line 109 "listing.m"
  }
#line 109 "listing.m"
}

#line 309 "listing.m"
static void MR_CALL 
mdb__listing__print_lines_in_range_m_8_p_0(
#line 309 "listing.m"
  MR_Word mdb__listing__InStrm_9,
#line 309 "listing.m"
  MR_Word mdb__listing__OutStrm_10,
#line 309 "listing.m"
  MR_Integer mdb__listing__ThisLine_11,
#line 309 "listing.m"
  MR_Integer mdb__listing__FirstLine_12,
#line 309 "listing.m"
  MR_Integer mdb__listing__LastLine_13,
#line 309 "listing.m"
  MR_Integer mdb__listing__MarkLine_14)
#line 309 "listing.m"
{
#line 313 "listing.m"
  while (MR_TRUE)
#line 313 "listing.m"
    {
#line 313 "listing.m"
      /* tailcall optimized into a loop */
#line 313 "listing.m"
      {
#line 313 "listing.m"
        MR_bool mdb__listing__succeeded;
#line 313 "listing.m"
        MR_Word mdb__listing__Res_16;

#line 314 "listing.m"
        {
#line 314 "listing.m"
          mercury__io__read_line_as_string_4_p_0(mdb__listing__InStrm_9, &mdb__listing__Res_16);
        }
#line 329 "listing.m"
#line 329 "listing.m"
        switch (MR_tag((MR_Word) mdb__listing__Res_16)) {
#line 329 "listing.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 329 "listing.m"
          case (MR_Integer) 0:
#line 330 "listing.m"
            {
#line 330 "listing.m"
            }
#line 329 "listing.m"
            break;
#line 329 "listing.m"
          case (MR_Integer) 1:
#line 316 "listing.m"
            {
#line 316 "listing.m"
              MR_String mdb__listing__Line_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__listing__Res_16, (MR_Integer) 0)));
#line 316 "listing.m"
              MR_Integer mdb__listing__V_33_33;

#line 317 "listing.m"
              mdb__listing__succeeded = (mdb__listing__FirstLine_12 <= mdb__listing__ThisLine_11);
#line 317 "listing.m"
              if (mdb__listing__succeeded)
#line 317 "listing.m"
                mdb__listing__succeeded = (mdb__listing__ThisLine_11 <= mdb__listing__LastLine_13);
#line 324 "listing.m"
              if (mdb__listing__succeeded)
#line 322 "listing.m"
                {
#line 318 "listing.m"
                  mdb__listing__succeeded = (mdb__listing__ThisLine_11 == mdb__listing__MarkLine_14);
#line 320 "listing.m"
                  if (mdb__listing__succeeded)
#line 319 "listing.m"
                    {
#line 319 "listing.m"
                      {
#line 319 "listing.m"
                        mercury__io__write_string_4_p_0(mdb__listing__OutStrm_10, (MR_String) "> ");
                      }
#line 319 "listing.m"
                    }
#line 320 "listing.m"
                  else
#line 321 "listing.m"
                    {
#line 321 "listing.m"
                      {
#line 321 "listing.m"
                        mercury__io__write_string_4_p_0(mdb__listing__OutStrm_10, (MR_String) "  ");
                      }
#line 321 "listing.m"
                    }
#line 323 "listing.m"
                  {
#line 323 "listing.m"
                    mercury__io__write_string_4_p_0(mdb__listing__OutStrm_10, mdb__listing__Line_17);
                  }
#line 322 "listing.m"
                }
#line 324 "listing.m"
              else
#line 324 "listing.m"
                {
#line 324 "listing.m"
                }
#line 327 "listing.m"
              mdb__listing__V_33_33 = (mdb__listing__ThisLine_11 + (MR_Integer) 1);
#line 327 "listing.m"
              /* direct tailcall eliminated */
#line 327 "listing.m"
              {
#line 327 "listing.m"
                MR_Integer mdb__listing__ThisLine__tmp_copy_11 = mdb__listing__V_33_33;

#line 327 "listing.m"
                mdb__listing__ThisLine_11 = mdb__listing__ThisLine__tmp_copy_11;
#line 327 "listing.m"
              }
#line 327 "listing.m"
              continue;
#line 316 "listing.m"
            }
#line 329 "listing.m"
            break;
#line 329 "listing.m"
          case (MR_Integer) 2:
#line 332 "listing.m"
            {
#line 332 "listing.m"
              MR_Word mdb__listing__Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__listing__Res_16, (MR_Integer) 0)));
#line 332 "listing.m"
              MR_String mdb__listing__V_24_24;

#line 333 "listing.m"
              {
#line 333 "listing.m"
                mercury__io__write_string_4_p_0(mdb__listing__OutStrm_10, (MR_String) "Error: ");
              }
#line 334 "listing.m"
              {
#line 334 "listing.m"
                mdb__listing__V_24_24 = mercury__io__error_message_1_f_0(mdb__listing__Error_18);
              }
#line 334 "listing.m"
              {
#line 334 "listing.m"
                mercury__io__write_string_4_p_0(mdb__listing__OutStrm_10, mdb__listing__V_24_24);
              }
#line 335 "listing.m"
              {
#line 335 "listing.m"
                mercury__io__write_string_4_p_0(mdb__listing__OutStrm_10, (MR_String) "\n");
#line 335 "listing.m"
                return;
              }
#line 332 "listing.m"
            }
#line 329 "listing.m"
            break;
#line 329 "listing.m"
        }
#line 313 "listing.m"
      }
#line 313 "listing.m"
      break;
#line 313 "listing.m"
    }
#line 309 "listing.m"
}

#line 276 "listing.m"
static void MR_CALL 
mdb__listing__print_lines_in_range_c_8_p_0(
#line 276 "listing.m"
  MR_Box mdb__listing__InStrm_1,
#line 276 "listing.m"
  MR_Box mdb__listing__OutStrm_2,
#line 276 "listing.m"
  MR_Integer mdb__listing__ThisLine_3,
#line 276 "listing.m"
  MR_Integer mdb__listing__FirstLine_4,
#line 276 "listing.m"
  MR_Integer mdb__listing__LastLine_5,
#line 276 "listing.m"
  MR_Integer mdb__listing__MarkLine_6)
#line 276 "listing.m"
{
#line 279 "listing.m"
  {
#line 279 "listing.m"
    MR_bool mdb__listing__succeeded;

#line 283 "listing.m"
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
#line 283 "listing.m"

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

#line 1304 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
#line 283 "listing.m"
}
#line 279 "listing.m"
  }
#line 276 "listing.m"
}

#line 256 "listing.m"
static MR_Box MR_CALL 
mdb__listing__mercury_stream_to_c_FILE_star_1_f_0(
#line 256 "listing.m"
  MR_Word mdb__listing__InStream_1)
#line 256 "listing.m"
{
#line 258 "listing.m"
  {
#line 258 "listing.m"
    MR_bool mdb__listing__succeeded;
#line 258 "listing.m"
    MR_Box mdb__listing__InStrm_2;

#line 261 "listing.m"
{
#define MR_PROC_LABEL mdb__listing__mercury_stream_to_c_FILE_star_1_f_0

	MR_Word InStream;
	FILE * InStrm;

	InStream =  mdb__listing__InStream_1 ;
		{
#line 261 "listing.m"

    InStrm = MR_file(*(MR_unwrap_input_stream(InStream)));

#line 1342 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
	 mdb__listing__InStrm_2  = (MR_Box) InStrm;
#line 261 "listing.m"
}
#line 258 "listing.m"
    return mdb__listing__InStrm_2;
#line 258 "listing.m"
  }
#line 256 "listing.m"
}

#line 242 "listing.m"
static void MR_CALL 
mdb__listing__find_and_open_file_5_p_0(
#line 242 "listing.m"
  MR_Word mdb__listing__HeadVar__1_1,
#line 242 "listing.m"
  MR_String mdb__listing__FileName_2,
#line 242 "listing.m"
  MR_Word * mdb__listing__HeadVar__3_3)
#line 242 "listing.m"
{
#line 245 "listing.m"
  while (MR_TRUE)
#line 245 "listing.m"
    {
#line 245 "listing.m"
      /* tailcall optimized into a loop */
#line 245 "listing.m"
      {
#line 245 "listing.m"
        MR_bool mdb__listing__succeeded;

#line 245 "listing.m"
        if ((mdb__listing__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 245 "listing.m"
          *mdb__listing__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 245 "listing.m"
        else
#line 246 "listing.m"
          {
#line 246 "listing.m"
            MR_String mdb__listing__Dir_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__listing__HeadVar__1_1, (MR_Integer) 0)));
#line 246 "listing.m"
            MR_Word mdb__listing__Path_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__listing__HeadVar__1_1, (MR_Integer) 1)));
#line 246 "listing.m"
            MR_Word mdb__listing__Result0_15;
#line 246 "listing.m"
            MR_String mdb__listing__V_20_20;

#line 247 "listing.m"
            {
#line 247 "listing.m"
              mdb__listing__V_20_20 = mercury__dir__f_slash_2_f_0(mdb__listing__Dir_10, mdb__listing__FileName_2);
            }
#line 247 "listing.m"
            {
#line 247 "listing.m"
              mercury__io__open_input_4_p_0(mdb__listing__V_20_20, &mdb__listing__Result0_15);
            }
#line 251 "listing.m"
            if (((MR_tag((MR_Word) mdb__listing__Result0_15)) == (MR_mktag((MR_Integer) 1))))
#line 253 "listing.m"
              {
#line 253 "listing.m"
                /* direct tailcall eliminated */
#line 253 "listing.m"
                {
#line 253 "listing.m"
                  MR_Word mdb__listing__HeadVar__1__tmp_copy_1 = mdb__listing__Path_11;

#line 253 "listing.m"
                  mdb__listing__HeadVar__1_1 = mdb__listing__HeadVar__1__tmp_copy_1;
#line 253 "listing.m"
                }
#line 253 "listing.m"
                continue;
#line 253 "listing.m"
              }
#line 251 "listing.m"
            else
#line 249 "listing.m"
              {
#line 249 "listing.m"
                MR_Word mdb__listing__InStream_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__listing__Result0_15, (MR_Integer) 0)));

#line 250 "listing.m"
                {
#line 250 "listing.m"
                  MR_Word base;
#line 250 "listing.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 250 "listing.m"
                  *mdb__listing__HeadVar__3_3 = base;
#line 250 "listing.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__listing__InStream_16));
#line 250 "listing.m"
                }
#line 249 "listing.m"
              }
#line 246 "listing.m"
          }
#line 245 "listing.m"
      }
#line 245 "listing.m"
      break;
#line 245 "listing.m"
    }
#line 242 "listing.m"
}

#line 192 "listing.m"
static void MR_CALL 
mdb__listing__write_to_c_file_4_p_0(
#line 192 "listing.m"
  MR_Box mdb__listing__ErrStrm_1,
#line 192 "listing.m"
  MR_String mdb__listing__Str_2)
#line 192 "listing.m"
{
#line 194 "listing.m"
  {
#line 194 "listing.m"
    MR_bool mdb__listing__succeeded;

#line 197 "listing.m"
{
#define MR_PROC_LABEL mdb__listing__write_to_c_file_4_p_0

	FILE * ErrStrm;
	MR_String Str;

	ErrStrm = (FILE *) mdb__listing__ErrStrm_1 ;
	Str =  mdb__listing__Str_2 ;
		{
#line 197 "listing.m"

    fputs(Str, (FILE *)ErrStrm);

#line 1484 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
#line 197 "listing.m"
}
#line 194 "listing.m"
  }
#line 192 "listing.m"
}

#line 128 "listing.m"
static MR_Word MR_CALL 
mdb__listing__listing_type_0_f_0(void)
#line 128 "listing.m"
{
#line 131 "listing.m"
  {
#line 131 "listing.m"
    MR_bool mdb__listing__succeeded;
#line 131 "listing.m"
    MR_Word mdb__listing__HeadVar__1_1;
#line 131 "listing.m"
    MR_Word mdb__listing__Path_2;

#line 131 "listing.m"
    {
#line 131 "listing.m"
      return mdb__listing__HeadVar__1_1 = mercury__type_desc__type_of_1_f_0((MR_Word) &mdb__listing_scalar_common_1[0]);
    }
#line 131 "listing.m"
    return mdb__listing__HeadVar__1_1;
#line 131 "listing.m"
  }
#line 128 "listing.m"
}

#line 87 "listing.m"
void MR_CALL 
mdb__listing__list_file_portable_9_p_0(
#line 87 "listing.m"
  MR_Word mdb__listing__OutStrm_10,
#line 87 "listing.m"
  MR_Word mdb__listing__ErrStrm_11,
#line 87 "listing.m"
  MR_String mdb__listing__FileName_12,
#line 87 "listing.m"
  MR_Integer mdb__listing__FirstLine_13,
#line 87 "listing.m"
  MR_Integer mdb__listing__LastLine_14,
#line 87 "listing.m"
  MR_Integer mdb__listing__MarkLine_15,
#line 87 "listing.m"
  MR_Word mdb__listing__Path_16)
#line 87 "listing.m"
{
#line 221 "listing.m"
  {
#line 221 "listing.m"
    MR_bool mdb__listing__succeeded;

#line 205 "listing.m"
    {
#line 205 "listing.m"
      mdb__listing__succeeded = mercury__dir__path_name_is_absolute_1_p_0(mdb__listing__FileName_12);
    }
#line 221 "listing.m"
    if (mdb__listing__succeeded)
#line 206 "listing.m"
      {
#line 206 "listing.m"
        MR_Word mdb__listing__Result0_18;

#line 206 "listing.m"
        {
#line 206 "listing.m"
          mercury__io__open_input_4_p_0(mdb__listing__FileName_12, &mdb__listing__Result0_18);
        }
#line 212 "listing.m"
        if (((MR_tag((MR_Word) mdb__listing__Result0_18)) == (MR_mktag((MR_Integer) 1))))
#line 213 "listing.m"
          {
#line 213 "listing.m"
            MR_Word mdb__listing__Error_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__listing__Result0_18, (MR_Integer) 0)));
#line 213 "listing.m"
            MR_String mdb__listing__ErrorMsg_21;

#line 214 "listing.m"
            {
#line 214 "listing.m"
              mdb__listing__ErrorMsg_21 = mercury__io__error_message_1_f_0(mdb__listing__Error_20);
            }
#line 215 "listing.m"
            {
#line 215 "listing.m"
              mercury__io__write_string_4_p_0(mdb__listing__ErrStrm_11, (MR_String) "mdb: cannot open file ");
            }
#line 216 "listing.m"
            {
#line 216 "listing.m"
              mercury__io__write_string_4_p_0(mdb__listing__ErrStrm_11, mdb__listing__FileName_12);
            }
#line 217 "listing.m"
            {
#line 217 "listing.m"
              mercury__io__write_string_4_p_0(mdb__listing__ErrStrm_11, (MR_String) ": ");
            }
#line 218 "listing.m"
            {
#line 218 "listing.m"
              mercury__io__write_string_4_p_0(mdb__listing__ErrStrm_11, mdb__listing__ErrorMsg_21);
            }
#line 219 "listing.m"
            {
#line 219 "listing.m"
              mercury__io__write_string_4_p_0(mdb__listing__ErrStrm_11, (MR_String) "\n");
#line 219 "listing.m"
              return;
            }
#line 213 "listing.m"
          }
#line 212 "listing.m"
        else
#line 208 "listing.m"
          {
#line 208 "listing.m"
            MR_Word mdb__listing__InStrm_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__listing__Result0_18, (MR_Integer) 0)));

#line 209 "listing.m"
            {
#line 209 "listing.m"
              mdb__listing__print_lines_in_range_m_8_p_0(mdb__listing__InStrm_19, mdb__listing__OutStrm_10, (MR_Integer) 1, mdb__listing__FirstLine_13, mdb__listing__LastLine_14, mdb__listing__MarkLine_15);
            }
#line 211 "listing.m"
            {
#line 211 "listing.m"
              mercury__io__close_input_3_p_0(mdb__listing__InStrm_19);
#line 211 "listing.m"
              return;
            }
#line 208 "listing.m"
          }
#line 206 "listing.m"
      }
#line 221 "listing.m"
    else
#line 222 "listing.m"
      {
#line 222 "listing.m"
        MR_String mdb__listing__Dir_55;
#line 222 "listing.m"
        MR_Word mdb__listing__Result0_60;
#line 222 "listing.m"
        MR_String mdb__listing__V_65_65;

#line 222 "listing.m"
        {
#line 222 "listing.m"
          mdb__listing__Dir_55 = mercury__dir__this_directory_0_f_0();
        }
#line 247 "listing.m"
        {
#line 247 "listing.m"
          mdb__listing__V_65_65 = mercury__dir__f_slash_2_f_0(mdb__listing__Dir_55, mdb__listing__FileName_12);
        }
#line 247 "listing.m"
        {
#line 247 "listing.m"
          mercury__io__open_input_4_p_0(mdb__listing__V_65_65, &mdb__listing__Result0_60);
        }
#line 1654 "mdb.listing.c"
        if (((MR_tag((MR_Word) mdb__listing__Result0_60)) == (MR_mktag((MR_Integer) 1))))
#line 1656 "mdb.listing.c"
          {
#line 1658 "mdb.listing.c"
            MR_Word mdb__listing__Result_22;

#line 253 "listing.m"
            {
#line 253 "listing.m"
              mdb__listing__find_and_open_file_5_p_0(mdb__listing__Path_16, mdb__listing__FileName_12, &mdb__listing__Result_22);
            }
#line 228 "listing.m"
            if ((mdb__listing__Result_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 229 "listing.m"
              {
#line 230 "listing.m"
                {
#line 230 "listing.m"
                  mercury__io__write_string_4_p_0(mdb__listing__ErrStrm_11, (MR_String) "mdb: cannot find file ");
                }
#line 231 "listing.m"
                {
#line 231 "listing.m"
                  mercury__io__write_string_4_p_0(mdb__listing__ErrStrm_11, mdb__listing__FileName_12);
                }
#line 232 "listing.m"
                {
#line 232 "listing.m"
                  mercury__io__write_string_4_p_0(mdb__listing__ErrStrm_11, (MR_String) "\n");
#line 232 "listing.m"
                  return;
                }
#line 229 "listing.m"
              }
#line 228 "listing.m"
            else
#line 224 "listing.m"
              {
#line 224 "listing.m"
                MR_Word mdb__listing__InStrm_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__listing__Result_22, (MR_Integer) 0)));

#line 225 "listing.m"
                {
#line 225 "listing.m"
                  mdb__listing__print_lines_in_range_m_8_p_0(mdb__listing__InStrm_48, mdb__listing__OutStrm_10, (MR_Integer) 1, mdb__listing__FirstLine_13, mdb__listing__LastLine_14, mdb__listing__MarkLine_15);
                }
#line 227 "listing.m"
                {
#line 227 "listing.m"
                  mercury__io__close_input_3_p_0(mdb__listing__InStrm_48);
#line 227 "listing.m"
                  return;
                }
#line 224 "listing.m"
              }
#line 1710 "mdb.listing.c"
          }
#line 1712 "mdb.listing.c"
        else
#line 1714 "mdb.listing.c"
          {
#line 1716 "mdb.listing.c"
            MR_Word mdb__listing__InStrm_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__listing__Result0_60, (MR_Integer) 0)));

#line 225 "listing.m"
            {
#line 225 "listing.m"
              mdb__listing__print_lines_in_range_m_8_p_0(mdb__listing__InStrm_73, mdb__listing__OutStrm_10, (MR_Integer) 1, mdb__listing__FirstLine_13, mdb__listing__LastLine_14, mdb__listing__MarkLine_15);
            }
#line 227 "listing.m"
            {
#line 227 "listing.m"
              mercury__io__close_input_3_p_0(mdb__listing__InStrm_73);
#line 227 "listing.m"
              return;
            }
#line 1731 "mdb.listing.c"
          }
#line 222 "listing.m"
      }
#line 221 "listing.m"
  }
#line 87 "listing.m"
}

#line 80 "listing.m"
void MR_CALL 
mdb__listing__list_file_9_p_0(
#line 80 "listing.m"
  MR_Box mdb__listing__OutStrm_10,
#line 80 "listing.m"
  MR_Box mdb__listing__ErrStrm_11,
#line 80 "listing.m"
  MR_String mdb__listing__FileName_12,
#line 80 "listing.m"
  MR_Integer mdb__listing__FirstLine_13,
#line 80 "listing.m"
  MR_Integer mdb__listing__LastLine_14,
#line 80 "listing.m"
  MR_Integer mdb__listing__MarkLine_15,
#line 80 "listing.m"
  MR_Word mdb__listing__Path_16)
#line 80 "listing.m"
{
#line 176 "listing.m"
  {
#line 176 "listing.m"
    MR_bool mdb__listing__succeeded;

#line 159 "listing.m"
    {
#line 159 "listing.m"
      mdb__listing__succeeded = mercury__dir__path_name_is_absolute_1_p_0(mdb__listing__FileName_12);
    }
#line 176 "listing.m"
    if (mdb__listing__succeeded)
#line 160 "listing.m"
      {
#line 160 "listing.m"
        MR_Word mdb__listing__Result0_18;

#line 160 "listing.m"
        {
#line 160 "listing.m"
          mercury__io__open_input_4_p_0(mdb__listing__FileName_12, &mdb__listing__Result0_18);
        }
#line 167 "listing.m"
        if (((MR_tag((MR_Word) mdb__listing__Result0_18)) == (MR_mktag((MR_Integer) 1))))
#line 168 "listing.m"
          {
#line 168 "listing.m"
            MR_Word mdb__listing__Error_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__listing__Result0_18, (MR_Integer) 0)));
#line 168 "listing.m"
            MR_String mdb__listing__ErrorMsg_22;

#line 169 "listing.m"
            {
#line 169 "listing.m"
              mdb__listing__ErrorMsg_22 = mercury__io__error_message_1_f_0(mdb__listing__Error_21);
            }
#line 197 "listing.m"
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	FILE * ErrStrm;
	MR_String Str;

	ErrStrm = (FILE *) mdb__listing__ErrStrm_11 ;
	Str =  (MR_String) "mdb: cannot open file " ;
		{
#line 197 "listing.m"

    fputs(Str, (FILE *)ErrStrm);

#line 1809 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
#line 197 "listing.m"
}
#line 197 "listing.m"
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	FILE * ErrStrm;
	MR_String Str;

	ErrStrm = (FILE *) mdb__listing__ErrStrm_11 ;
	Str =  mdb__listing__FileName_12 ;
		{
#line 197 "listing.m"

    fputs(Str, (FILE *)ErrStrm);

#line 1829 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
#line 197 "listing.m"
}
#line 197 "listing.m"
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	FILE * ErrStrm;
	MR_String Str;

	ErrStrm = (FILE *) mdb__listing__ErrStrm_11 ;
	Str =  (MR_String) ": " ;
		{
#line 197 "listing.m"

    fputs(Str, (FILE *)ErrStrm);

#line 1849 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
#line 197 "listing.m"
}
#line 197 "listing.m"
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	FILE * ErrStrm;
	MR_String Str;

	ErrStrm = (FILE *) mdb__listing__ErrStrm_11 ;
	Str =  mdb__listing__ErrorMsg_22 ;
		{
#line 197 "listing.m"

    fputs(Str, (FILE *)ErrStrm);

#line 1869 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
#line 197 "listing.m"
}
#line 197 "listing.m"
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	FILE * ErrStrm;
	MR_String Str;

	ErrStrm = (FILE *) mdb__listing__ErrStrm_11 ;
	Str =  (MR_String) "\n" ;
		{
#line 197 "listing.m"

    fputs(Str, (FILE *)ErrStrm);

#line 1889 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
#line 197 "listing.m"
}
#line 168 "listing.m"
          }
#line 167 "listing.m"
        else
#line 162 "listing.m"
          {
#line 162 "listing.m"
            MR_Word mdb__listing__InStream_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__listing__Result0_18, (MR_Integer) 0)));
#line 162 "listing.m"
            MR_Box mdb__listing__InStrm_20;

#line 261 "listing.m"
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	MR_Word InStream;
	FILE * InStrm;

	InStream =  mdb__listing__InStream_19 ;
		{
#line 261 "listing.m"

    InStrm = MR_file(*(MR_unwrap_input_stream(InStream)));

#line 1919 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
	 mdb__listing__InStrm_20  = (MR_Box) InStrm;
#line 261 "listing.m"
}
#line 283 "listing.m"
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
#line 283 "listing.m"

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

#line 1968 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
#line 283 "listing.m"
}
#line 166 "listing.m"
            {
#line 166 "listing.m"
              mercury__io__close_input_3_p_0(mdb__listing__InStream_19);
#line 166 "listing.m"
              return;
            }
#line 162 "listing.m"
          }
#line 160 "listing.m"
      }
#line 176 "listing.m"
    else
#line 177 "listing.m"
      {
#line 177 "listing.m"
        MR_String mdb__listing__Dir_59;
#line 177 "listing.m"
        MR_Word mdb__listing__Result0_64;
#line 177 "listing.m"
        MR_String mdb__listing__V_69_69;

#line 177 "listing.m"
        {
#line 177 "listing.m"
          mdb__listing__Dir_59 = mercury__dir__this_directory_0_f_0();
        }
#line 247 "listing.m"
        {
#line 247 "listing.m"
          mdb__listing__V_69_69 = mercury__dir__f_slash_2_f_0(mdb__listing__Dir_59, mdb__listing__FileName_12);
        }
#line 247 "listing.m"
        {
#line 247 "listing.m"
          mercury__io__open_input_4_p_0(mdb__listing__V_69_69, &mdb__listing__Result0_64);
        }
#line 2011 "mdb.listing.c"
        if (((MR_tag((MR_Word) mdb__listing__Result0_64)) == (MR_mktag((MR_Integer) 1))))
#line 2013 "mdb.listing.c"
          {
#line 2015 "mdb.listing.c"
            MR_Word mdb__listing__Result_23;

#line 253 "listing.m"
            {
#line 253 "listing.m"
              mdb__listing__find_and_open_file_5_p_0(mdb__listing__Path_16, mdb__listing__FileName_12, &mdb__listing__Result_23);
            }
#line 184 "listing.m"
            if ((mdb__listing__Result_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 185 "listing.m"
              {
#line 197 "listing.m"
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	FILE * ErrStrm;
	MR_String Str;

	ErrStrm = (FILE *) mdb__listing__ErrStrm_11 ;
	Str =  (MR_String) "mdb: cannot find file " ;
		{
#line 197 "listing.m"

    fputs(Str, (FILE *)ErrStrm);

#line 2041 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
#line 197 "listing.m"
}
#line 197 "listing.m"
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	FILE * ErrStrm;
	MR_String Str;

	ErrStrm = (FILE *) mdb__listing__ErrStrm_11 ;
	Str =  mdb__listing__FileName_12 ;
		{
#line 197 "listing.m"

    fputs(Str, (FILE *)ErrStrm);

#line 2061 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
#line 197 "listing.m"
}
#line 197 "listing.m"
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	FILE * ErrStrm;
	MR_String Str;

	ErrStrm = (FILE *) mdb__listing__ErrStrm_11 ;
	Str =  (MR_String) "\n" ;
		{
#line 197 "listing.m"

    fputs(Str, (FILE *)ErrStrm);

#line 2081 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
#line 197 "listing.m"
}
#line 185 "listing.m"
              }
#line 184 "listing.m"
            else
#line 179 "listing.m"
              {
#line 179 "listing.m"
                MR_Word mdb__listing__InStream_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__listing__Result_23, (MR_Integer) 0)));
#line 179 "listing.m"
                MR_Box mdb__listing__InStrm_50;

#line 261 "listing.m"
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	MR_Word InStream;
	FILE * InStrm;

	InStream =  mdb__listing__InStream_49 ;
		{
#line 261 "listing.m"

    InStrm = MR_file(*(MR_unwrap_input_stream(InStream)));

#line 2111 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
	 mdb__listing__InStrm_50  = (MR_Box) InStrm;
#line 261 "listing.m"
}
#line 283 "listing.m"
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
#line 283 "listing.m"

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

#line 2160 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
#line 283 "listing.m"
}
#line 183 "listing.m"
                {
#line 183 "listing.m"
                  mercury__io__close_input_3_p_0(mdb__listing__InStream_49);
#line 183 "listing.m"
                  return;
                }
#line 179 "listing.m"
              }
#line 2175 "mdb.listing.c"
          }
#line 2177 "mdb.listing.c"
        else
#line 2179 "mdb.listing.c"
          {
#line 2181 "mdb.listing.c"
            MR_Word mdb__listing__InStream_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__listing__Result0_64, (MR_Integer) 0)));
#line 2183 "mdb.listing.c"
            MR_Box mdb__listing__InStrm_78;

#line 261 "listing.m"
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	MR_Word InStream;
	FILE * InStrm;

	InStream =  mdb__listing__InStream_77 ;
		{
#line 261 "listing.m"

    InStrm = MR_file(*(MR_unwrap_input_stream(InStream)));

#line 2199 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
	 mdb__listing__InStrm_78  = (MR_Box) InStrm;
#line 261 "listing.m"
}
#line 283 "listing.m"
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
#line 283 "listing.m"

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

#line 2248 "mdb.listing.c"

		;}
#undef MR_PROC_LABEL
#line 283 "listing.m"
}
#line 183 "listing.m"
            {
#line 183 "listing.m"
              mercury__io__close_input_3_p_0(mdb__listing__InStream_77);
#line 183 "listing.m"
              return;
            }
#line 2261 "mdb.listing.c"
          }
#line 177 "listing.m"
      }
#line 176 "listing.m"
  }
#line 80 "listing.m"
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
#line 152 "listing.m"
  {
#line 152 "listing.m"
    MR_bool mdb__listing__succeeded;

#line 152 "listing.m"
    if ((mdb__listing__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 152 "listing.m"
      *mdb__listing__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 152 "listing.m"
    else
#line 153 "listing.m"
      {
#line 153 "listing.m"
        MR_String mdb__listing__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__listing__HeadVar__1_1, (MR_Integer) 0)));

#line 153 "listing.m"
        *mdb__listing__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__listing__HeadVar__1_1, (MR_Integer) 1)));
#line 153 "listing.m"
      }
#line 152 "listing.m"
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
#line 148 "listing.m"
  {
#line 148 "listing.m"
    MR_bool mdb__listing__succeeded;

#line 148 "listing.m"
    {
#line 148 "listing.m"
      MR_Word base;
#line 148 "listing.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "listing.m"
      *mdb__listing__HeadVar__3_3 = base;
#line 148 "listing.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__listing__Dir_4));
#line 148 "listing.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__listing__Path_5));
#line 148 "listing.m"
    }
#line 148 "listing.m"
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
#line 144 "listing.m"
  {
#line 144 "listing.m"
    MR_bool mdb__listing__succeeded;

#line 144 "listing.m"
    {
#line 144 "listing.m"
      mdb__listing__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_114_95_108_105_115_116_95_112_97_116_104_95_95_91_49_93_95_48_2_p_0(mdb__listing__HeadVar__2_2);
#line 144 "listing.m"
      return;
    }
#line 144 "listing.m"
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
#line 142 "listing.m"
  {
#line 142 "listing.m"
    MR_bool mdb__listing__succeeded;

#line 142 "listing.m"
    {
#line 142 "listing.m"
      mdb__listing__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_108_105_115_116_95_112_97_116_104_95_95_91_50_93_95_48_3_p_0(mdb__listing__Dirs_4, mdb__listing__Dirs_3);
#line 142 "listing.m"
      return;
    }
#line 142 "listing.m"
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
#line 140 "listing.m"
  {
#line 140 "listing.m"
    MR_bool mdb__listing__succeeded;
#line 140 "listing.m"
    MR_Word mdb__listing__Path_2 = mdb__listing__Path_3;

#line 140 "listing.m"
    return mdb__listing__Path_2;
#line 140 "listing.m"
  }
#line 44 "listing.m"
}

#line 39 "listing.m"
MR_Word MR_CALL 
mdb__listing__new_list_path_0_f_0(void)
#line 39 "listing.m"
{
#line 136 "listing.m"
  {
#line 136 "listing.m"
    MR_bool mdb__listing__succeeded;

#line 136 "listing.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 136 "listing.m"
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
