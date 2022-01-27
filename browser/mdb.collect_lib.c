/*
** Automatically generated from `collect_lib.m'
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


/* :- module mdb.collect_lib. */
/* :- implementation. */

/*
INIT mercury__mdb__collect_lib__init
ENDINIT
*/

#include "mdb.collect_lib.mih"
#include "mdb.collect_lib.mh"


#include "mdb.mih"
#include "mdbcomp.mih"
#include "mdb.dl.mih"
#include "mdb.name_mangle.mih"
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




#line 163 "collect_lib.m"
static void MR_CALL 
mdb__collect_lib__unlink_collect_3_p_0(
#line 163 "collect_lib.m"
  MR_Word mdb__collect_lib__MaybeHandle_4);

#line 147 "collect_lib.m"
static void MR_CALL 
mdb__collect_lib__set_to_null_pointer_1_p_0(
#line 147 "collect_lib.m"
  MR_Word * mdb__collect_lib__Pointer_1);

#line 93 "collect_lib.m"
static void MR_CALL 
mdb__collect_lib__link_collect_10_p_0(
#line 93 "collect_lib.m"
  MR_String mdb__collect_lib__ObjectFile_11,
#line 93 "collect_lib.m"
  MR_Word * mdb__collect_lib__Filter_12,
#line 93 "collect_lib.m"
  MR_Word * mdb__collect_lib__Initialize_13,
#line 93 "collect_lib.m"
  MR_Word * mdb__collect_lib__PostProcess_14,
#line 93 "collect_lib.m"
  MR_Word * mdb__collect_lib__SendResult_15,
#line 93 "collect_lib.m"
  MR_Word * mdb__collect_lib__GetCollectType_16,
#line 93 "collect_lib.m"
  MR_Word * mdb__collect_lib__MaybeHandle_17,
#line 93 "collect_lib.m"
  MR_Char * mdb__collect_lib__Result_18);







#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.collect_lib.mh"

#line 79 "collect_lib.m"
void 
ML_CL_link_collect(
#line 79 "collect_lib.m"
  MR_String mdb__collect_lib__ObjectFile_11,
#line 79 "collect_lib.m"
  MR_Word * mdb__collect_lib__Filter_12,
#line 79 "collect_lib.m"
  MR_Word * mdb__collect_lib__Initialize_13,
#line 79 "collect_lib.m"
  MR_Word * mdb__collect_lib__PostProcess_14,
#line 79 "collect_lib.m"
  MR_Word * mdb__collect_lib__SendResult_15,
#line 79 "collect_lib.m"
  MR_Word * mdb__collect_lib__GetCollectType_16,
#line 79 "collect_lib.m"
  MR_Word * mdb__collect_lib__MaybeHandle_17,
#line 79 "collect_lib.m"
  MR_Char * mdb__collect_lib__Result_18)
#line 79 "collect_lib.m"
{
#line 79 "collect_lib.m"
	mdb__collect_lib__link_collect_10_p_0((MR_String) mdb__collect_lib__ObjectFile_11, (MR_Word *) mdb__collect_lib__Filter_12, (MR_Word *) mdb__collect_lib__Initialize_13, (MR_Word *) mdb__collect_lib__PostProcess_14, (MR_Word *) mdb__collect_lib__SendResult_15, (MR_Word *) mdb__collect_lib__GetCollectType_16, (MR_Word *) mdb__collect_lib__MaybeHandle_17, (MR_Char *) mdb__collect_lib__Result_18);
}

#line 83 "collect_lib.m"
void 
ML_CL_unlink_collect(
#line 83 "collect_lib.m"
  MR_Word mdb__collect_lib__MaybeHandle_4)
#line 83 "collect_lib.m"
{
#line 83 "collect_lib.m"
	mdb__collect_lib__unlink_collect_3_p_0((MR_Word) mdb__collect_lib__MaybeHandle_4);
}


#line 163 "collect_lib.m"
static void MR_CALL 
mdb__collect_lib__unlink_collect_3_p_0(
#line 163 "collect_lib.m"
  MR_Word mdb__collect_lib__MaybeHandle_4)
#line 163 "collect_lib.m"
{
#line 167 "collect_lib.m"
  {
#line 167 "collect_lib.m"
    MR_bool mdb__collect_lib__succeeded;

#line 167 "collect_lib.m"
    if (((MR_tag((MR_Word) mdb__collect_lib__MaybeHandle_4)) == (MR_mktag((MR_Integer) 1))))
#line 167 "collect_lib.m"
      {
#line 167 "collect_lib.m"
      }
#line 167 "collect_lib.m"
    else
#line 171 "collect_lib.m"
      {
#line 171 "collect_lib.m"
        MR_Word mdb__collect_lib__Handle_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__collect_lib__MaybeHandle_4, (MR_Integer) 0)));
#line 171 "collect_lib.m"
        MR_Word mdb__collect_lib__Result_8;

#line 172 "collect_lib.m"
        {
#line 172 "collect_lib.m"
          mdb__dl__close_4_p_0(mdb__collect_lib__Handle_7, &mdb__collect_lib__Result_8);
        }
#line 178 "collect_lib.m"
        if ((mdb__collect_lib__Result_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 178 "collect_lib.m"
          {
#line 178 "collect_lib.m"
          }
#line 178 "collect_lib.m"
        else
#line 179 "collect_lib.m"
          {
#line 179 "collect_lib.m"
            MR_String mdb__collect_lib__String_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__collect_lib__Result_8, (MR_Integer) 0)));

#line 180 "collect_lib.m"
            {
#line 180 "collect_lib.m"
              mercury__io__print_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (mdb__collect_lib__String_16)));
            }
#line 181 "collect_lib.m"
            {
#line 181 "collect_lib.m"
              mercury__io__nl_2_p_0();
#line 181 "collect_lib.m"
              return;
            }
#line 179 "collect_lib.m"
          }
#line 171 "collect_lib.m"
      }
#line 167 "collect_lib.m"
  }
#line 163 "collect_lib.m"
}

#line 147 "collect_lib.m"
static void MR_CALL 
mdb__collect_lib__set_to_null_pointer_1_p_0(
#line 147 "collect_lib.m"
  MR_Word * mdb__collect_lib__Pointer_1)
#line 147 "collect_lib.m"
{
#line 148 "collect_lib.m"
  {
#line 148 "collect_lib.m"
    MR_bool mdb__collect_lib__succeeded;

#line 151 "collect_lib.m"
{
#define MR_PROC_LABEL mdb__collect_lib__set_to_null_pointer_1_p_0

	MR_Word Pointer;

		{
#line 151 "collect_lib.m"

    (Pointer = (MR_Word) NULL)

#line 238 "mdb.collect_lib.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__collect_lib__Pointer_1  = Pointer;
#line 151 "collect_lib.m"
}
#line 148 "collect_lib.m"
  }
#line 147 "collect_lib.m"
}

#line 93 "collect_lib.m"
static void MR_CALL 
mdb__collect_lib__link_collect_10_p_0(
#line 93 "collect_lib.m"
  MR_String mdb__collect_lib__ObjectFile_11,
#line 93 "collect_lib.m"
  MR_Word * mdb__collect_lib__Filter_12,
#line 93 "collect_lib.m"
  MR_Word * mdb__collect_lib__Initialize_13,
#line 93 "collect_lib.m"
  MR_Word * mdb__collect_lib__PostProcess_14,
#line 93 "collect_lib.m"
  MR_Word * mdb__collect_lib__SendResult_15,
#line 93 "collect_lib.m"
  MR_Word * mdb__collect_lib__GetCollectType_16,
#line 93 "collect_lib.m"
  MR_Word * mdb__collect_lib__MaybeHandle_17,
#line 93 "collect_lib.m"
  MR_Char * mdb__collect_lib__Result_18)
#line 93 "collect_lib.m"
{
#line 98 "collect_lib.m"
  {
#line 98 "collect_lib.m"
    MR_bool mdb__collect_lib__succeeded;

#line 102 "collect_lib.m"
    {
#line 102 "collect_lib.m"
      mdb__dl__open_6_p_0(mdb__collect_lib__ObjectFile_11, (MR_Integer) 0, (MR_Integer) 0, mdb__collect_lib__MaybeHandle_17);
    }
#line 114 "collect_lib.m"
    if (((MR_tag((MR_Word) *mdb__collect_lib__MaybeHandle_17)) == (MR_mktag((MR_Integer) 1))))
#line 104 "collect_lib.m"
      {
#line 104 "collect_lib.m"
        MR_Word mdb__collect_lib__TypeCtorInfo_51_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 104 "collect_lib.m"
        MR_String mdb__collect_lib__Msg_20 = ((MR_String) (MR_hl_field(MR_mktag(1), *mdb__collect_lib__MaybeHandle_17, (MR_Integer) 0)));

#line 105 "collect_lib.m"
        {
#line 105 "collect_lib.m"
          mercury__io__print_3_p_0(mdb__collect_lib__TypeCtorInfo_51_51, ((MR_Box) ((MR_String) "dlopen failed: ")));
        }
#line 106 "collect_lib.m"
        {
#line 106 "collect_lib.m"
          mercury__io__print_3_p_0(mdb__collect_lib__TypeCtorInfo_51_51, ((MR_Box) (mdb__collect_lib__Msg_20)));
        }
#line 107 "collect_lib.m"
        {
#line 107 "collect_lib.m"
          mercury__io__nl_2_p_0();
        }
#line 151 "collect_lib.m"
{
#define MR_PROC_LABEL mdb__collect_lib__link_collect_10_p_0

	MR_Word Pointer;

		{
#line 151 "collect_lib.m"

    (Pointer = (MR_Word) NULL)

#line 316 "mdb.collect_lib.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__collect_lib__Initialize_13  = Pointer;
#line 151 "collect_lib.m"
}
#line 151 "collect_lib.m"
{
#define MR_PROC_LABEL mdb__collect_lib__link_collect_10_p_0

	MR_Word Pointer;

		{
#line 151 "collect_lib.m"

    (Pointer = (MR_Word) NULL)

#line 334 "mdb.collect_lib.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__collect_lib__Filter_12  = Pointer;
#line 151 "collect_lib.m"
}
#line 151 "collect_lib.m"
{
#define MR_PROC_LABEL mdb__collect_lib__link_collect_10_p_0

	MR_Word Pointer;

		{
#line 151 "collect_lib.m"

    (Pointer = (MR_Word) NULL)

#line 352 "mdb.collect_lib.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__collect_lib__PostProcess_14  = Pointer;
#line 151 "collect_lib.m"
}
#line 151 "collect_lib.m"
{
#define MR_PROC_LABEL mdb__collect_lib__link_collect_10_p_0

	MR_Word Pointer;

		{
#line 151 "collect_lib.m"

    (Pointer = (MR_Word) NULL)

#line 370 "mdb.collect_lib.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__collect_lib__SendResult_15  = Pointer;
#line 151 "collect_lib.m"
}
#line 151 "collect_lib.m"
{
#define MR_PROC_LABEL mdb__collect_lib__link_collect_10_p_0

	MR_Word Pointer;

		{
#line 151 "collect_lib.m"

    (Pointer = (MR_Word) NULL)

#line 388 "mdb.collect_lib.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__collect_lib__GetCollectType_16  = Pointer;
#line 151 "collect_lib.m"
}
#line 113 "collect_lib.m"
        *mdb__collect_lib__Result_18 = (MR_Char) 110;
#line 104 "collect_lib.m"
      }
#line 114 "collect_lib.m"
    else
#line 115 "collect_lib.m"
      {
#line 115 "collect_lib.m"
        MR_Word mdb__collect_lib__Handle_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__collect_lib__MaybeHandle_17, (MR_Integer) 0)));
#line 115 "collect_lib.m"
        MR_Word mdb__collect_lib__MaybeInitialize_22;
#line 115 "collect_lib.m"
        MR_Word mdb__collect_lib__MaybeFilter_23;
#line 115 "collect_lib.m"
        MR_Word mdb__collect_lib__MaybePostProcess_24;
#line 115 "collect_lib.m"
        MR_Word mdb__collect_lib__MaybeSendResult_25;
#line 115 "collect_lib.m"
        MR_Word mdb__collect_lib__MaybeType_26;
#line 137 "collect_lib.m"
        MR_Word mdb__collect_lib__Initialize0_27;
#line 137 "collect_lib.m"
        MR_Word mdb__collect_lib__Filter0_28;
#line 137 "collect_lib.m"
        MR_Word mdb__collect_lib__PostProcess0_29;
#line 137 "collect_lib.m"
        MR_Word mdb__collect_lib__SendResult0_30;
#line 137 "collect_lib.m"
        MR_Word mdb__collect_lib__Type0_31;

#line 119 "collect_lib.m"
        {
#line 119 "collect_lib.m"
          mdb__dl__sym_5_p_0(mdb__collect_lib__Handle_21, (MR_String) "ML_COLLECT_initialize", &mdb__collect_lib__MaybeInitialize_22);
        }
#line 120 "collect_lib.m"
        {
#line 120 "collect_lib.m"
          mdb__dl__sym_5_p_0(mdb__collect_lib__Handle_21, (MR_String) "ML_COLLECT_filter", &mdb__collect_lib__MaybeFilter_23);
        }
#line 121 "collect_lib.m"
        {
#line 121 "collect_lib.m"
          mdb__dl__sym_5_p_0(mdb__collect_lib__Handle_21, (MR_String) "ML_COLLECT_post_process", &mdb__collect_lib__MaybePostProcess_24);
        }
#line 122 "collect_lib.m"
        {
#line 122 "collect_lib.m"
          mdb__dl__sym_5_p_0(mdb__collect_lib__Handle_21, (MR_String) "ML_COLLECT_send_collect_result", &mdb__collect_lib__MaybeSendResult_25);
        }
#line 123 "collect_lib.m"
        {
#line 123 "collect_lib.m"
          mdb__dl__sym_5_p_0(mdb__collect_lib__Handle_21, (MR_String) "ML_COLLECT_collected_variable_type", &mdb__collect_lib__MaybeType_26);
        }
#line 125 "collect_lib.m"
        mdb__collect_lib__succeeded = ((MR_tag((MR_Word) mdb__collect_lib__MaybeInitialize_22)) == (MR_mktag((MR_Integer) 0)));
#line 125 "collect_lib.m"
        if (mdb__collect_lib__succeeded)
#line 125 "collect_lib.m"
          {
#line 125 "collect_lib.m"
            mdb__collect_lib__Initialize0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__collect_lib__MaybeInitialize_22, (MR_Integer) 0)));
#line 126 "collect_lib.m"
            mdb__collect_lib__succeeded = ((MR_tag((MR_Word) mdb__collect_lib__MaybeFilter_23)) == (MR_mktag((MR_Integer) 0)));
#line 126 "collect_lib.m"
            if (mdb__collect_lib__succeeded)
#line 126 "collect_lib.m"
              {
#line 126 "collect_lib.m"
                mdb__collect_lib__Filter0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__collect_lib__MaybeFilter_23, (MR_Integer) 0)));
#line 127 "collect_lib.m"
                mdb__collect_lib__succeeded = ((MR_tag((MR_Word) mdb__collect_lib__MaybePostProcess_24)) == (MR_mktag((MR_Integer) 0)));
#line 127 "collect_lib.m"
                if (mdb__collect_lib__succeeded)
#line 127 "collect_lib.m"
                  {
#line 127 "collect_lib.m"
                    mdb__collect_lib__PostProcess0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__collect_lib__MaybePostProcess_24, (MR_Integer) 0)));
#line 128 "collect_lib.m"
                    mdb__collect_lib__succeeded = ((MR_tag((MR_Word) mdb__collect_lib__MaybeSendResult_25)) == (MR_mktag((MR_Integer) 0)));
#line 128 "collect_lib.m"
                    if (mdb__collect_lib__succeeded)
#line 128 "collect_lib.m"
                      {
#line 128 "collect_lib.m"
                        mdb__collect_lib__SendResult0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__collect_lib__MaybeSendResult_25, (MR_Integer) 0)));
#line 129 "collect_lib.m"
                        mdb__collect_lib__succeeded = ((MR_tag((MR_Word) mdb__collect_lib__MaybeType_26)) == (MR_mktag((MR_Integer) 0)));
#line 129 "collect_lib.m"
                        if (mdb__collect_lib__succeeded)
#line 129 "collect_lib.m"
                          mdb__collect_lib__Type0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__collect_lib__MaybeType_26, (MR_Integer) 0)));
#line 128 "collect_lib.m"
                      }
#line 127 "collect_lib.m"
                  }
#line 126 "collect_lib.m"
              }
#line 125 "collect_lib.m"
          }
#line 137 "collect_lib.m"
        if (mdb__collect_lib__succeeded)
#line 131 "collect_lib.m"
          {
#line 131 "collect_lib.m"
            *mdb__collect_lib__Result_18 = (MR_Char) 121;
#line 132 "collect_lib.m"
            *mdb__collect_lib__Initialize_13 = mdb__collect_lib__Initialize0_27;
#line 133 "collect_lib.m"
            *mdb__collect_lib__Filter_12 = mdb__collect_lib__Filter0_28;
#line 134 "collect_lib.m"
            *mdb__collect_lib__PostProcess_14 = mdb__collect_lib__PostProcess0_29;
#line 135 "collect_lib.m"
            *mdb__collect_lib__GetCollectType_16 = mdb__collect_lib__Type0_31;
#line 136 "collect_lib.m"
            *mdb__collect_lib__SendResult_15 = mdb__collect_lib__SendResult0_30;
#line 131 "collect_lib.m"
          }
#line 137 "collect_lib.m"
        else
#line 138 "collect_lib.m"
          {
#line 151 "collect_lib.m"
{
#define MR_PROC_LABEL mdb__collect_lib__link_collect_10_p_0

	MR_Word Pointer;

		{
#line 151 "collect_lib.m"

    (Pointer = (MR_Word) NULL)

#line 530 "mdb.collect_lib.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__collect_lib__Initialize_13  = Pointer;
#line 151 "collect_lib.m"
}
#line 151 "collect_lib.m"
{
#define MR_PROC_LABEL mdb__collect_lib__link_collect_10_p_0

	MR_Word Pointer;

		{
#line 151 "collect_lib.m"

    (Pointer = (MR_Word) NULL)

#line 548 "mdb.collect_lib.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__collect_lib__Filter_12  = Pointer;
#line 151 "collect_lib.m"
}
#line 151 "collect_lib.m"
{
#define MR_PROC_LABEL mdb__collect_lib__link_collect_10_p_0

	MR_Word Pointer;

		{
#line 151 "collect_lib.m"

    (Pointer = (MR_Word) NULL)

#line 566 "mdb.collect_lib.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__collect_lib__PostProcess_14  = Pointer;
#line 151 "collect_lib.m"
}
#line 151 "collect_lib.m"
{
#define MR_PROC_LABEL mdb__collect_lib__link_collect_10_p_0

	MR_Word Pointer;

		{
#line 151 "collect_lib.m"

    (Pointer = (MR_Word) NULL)

#line 584 "mdb.collect_lib.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__collect_lib__SendResult_15  = Pointer;
#line 151 "collect_lib.m"
}
#line 151 "collect_lib.m"
{
#define MR_PROC_LABEL mdb__collect_lib__link_collect_10_p_0

	MR_Word Pointer;

		{
#line 151 "collect_lib.m"

    (Pointer = (MR_Word) NULL)

#line 602 "mdb.collect_lib.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__collect_lib__GetCollectType_16  = Pointer;
#line 151 "collect_lib.m"
}
#line 143 "collect_lib.m"
            *mdb__collect_lib__Result_18 = (MR_Char) 110;
#line 138 "collect_lib.m"
          }
#line 115 "collect_lib.m"
      }
#line 98 "collect_lib.m"
  }
#line 93 "collect_lib.m"
}

#line 63 "collect_lib.m"
void MR_CALL 
mdb__collect_lib__dummy_pred_to_avoid_warning_about_nothing_exported_0_p_0(void)
#line 63 "collect_lib.m"
{
#line 77 "collect_lib.m"
  {
#line 77 "collect_lib.m"
    MR_bool mdb__collect_lib__succeeded;

#line 77 "collect_lib.m"
  }
#line 63 "collect_lib.m"
}

void mercury__mdb__collect_lib__init(void)
{
}

void mercury__mdb__collect_lib__init_type_tables(void)
{
}

void mercury__mdb__collect_lib__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdb.collect_lib. */
