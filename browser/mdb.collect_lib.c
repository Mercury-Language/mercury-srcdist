/*
** Automatically generated from `collect_lib.m'
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


/* :- module mdb.collect_lib. */
/* :- implementation. */

/*
INIT mercury__mdb__collect_lib__init
ENDINIT
*/

#include "mdb.collect_lib.mih"
#include "mdb.collect_lib.mh"


#include "mdb.mih"
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




static void MR_CALL 
mdb__collect_lib__unlink_collect_3_p_0(
  MR_Word mdb__collect_lib__MaybeHandle_4);

static void MR_CALL 
mdb__collect_lib__set_to_null_pointer_1_p_0(
  MR_Word * mdb__collect_lib__Pointer_1);

static void MR_CALL 
mdb__collect_lib__link_collect_10_p_0(
  MR_String mdb__collect_lib__ObjectFile_11,
  MR_Word * mdb__collect_lib__Filter_12,
  MR_Word * mdb__collect_lib__Initialize_13,
  MR_Word * mdb__collect_lib__PostProcess_14,
  MR_Word * mdb__collect_lib__SendResult_15,
  MR_Word * mdb__collect_lib__GetCollectType_16,
  MR_Word * mdb__collect_lib__MaybeHandle_17,
  MR_Char * mdb__collect_lib__Result_18);







#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.collect_lib.mh"

#line 79 "collect_lib.m"
void 
ML_CL_link_collect(
  MR_String mdb__collect_lib__ObjectFile_11,
  MR_Word * mdb__collect_lib__Filter_12,
  MR_Word * mdb__collect_lib__Initialize_13,
  MR_Word * mdb__collect_lib__PostProcess_14,
  MR_Word * mdb__collect_lib__SendResult_15,
  MR_Word * mdb__collect_lib__GetCollectType_16,
  MR_Word * mdb__collect_lib__MaybeHandle_17,
  MR_Char * mdb__collect_lib__Result_18)
#line 79 "collect_lib.m"
{
#line 79 "collect_lib.m"
	mdb__collect_lib__link_collect_10_p_0((MR_String) mdb__collect_lib__ObjectFile_11, (MR_Word *) mdb__collect_lib__Filter_12, (MR_Word *) mdb__collect_lib__Initialize_13, (MR_Word *) mdb__collect_lib__PostProcess_14, (MR_Word *) mdb__collect_lib__SendResult_15, (MR_Word *) mdb__collect_lib__GetCollectType_16, (MR_Word *) mdb__collect_lib__MaybeHandle_17, (MR_Char *) mdb__collect_lib__Result_18);
}

#line 83 "collect_lib.m"
void 
ML_CL_unlink_collect(
  MR_Word mdb__collect_lib__MaybeHandle_4)
#line 83 "collect_lib.m"
{
#line 83 "collect_lib.m"
	mdb__collect_lib__unlink_collect_3_p_0((MR_Word) mdb__collect_lib__MaybeHandle_4);
}


static void MR_CALL 
mdb__collect_lib__unlink_collect_3_p_0(
  MR_Word mdb__collect_lib__MaybeHandle_4)
{
  {
    MR_bool mdb__collect_lib__succeeded;

    if (((MR_tag((MR_Word) mdb__collect_lib__MaybeHandle_4)) == (MR_mktag((MR_Integer) 1))))
      {
      }
    else
      {
        MR_Word mdb__collect_lib__Handle_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__collect_lib__MaybeHandle_4, (MR_Integer) 0)));
        MR_Word mdb__collect_lib__Result_8;

        {
          mdb__dl__close_4_p_0(mdb__collect_lib__Handle_7, &mdb__collect_lib__Result_8);
        }
        if ((mdb__collect_lib__Result_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_String mdb__collect_lib__String_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__collect_lib__Result_8, (MR_Integer) 0)));

            {
              mercury__io__print_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (mdb__collect_lib__String_16)));
            }
            {
              mercury__io__nl_2_p_0();
            }
          }
      }
  }
}

static void MR_CALL 
mdb__collect_lib__set_to_null_pointer_1_p_0(
  MR_Word * mdb__collect_lib__Pointer_1)
{
  {
    MR_bool mdb__collect_lib__succeeded;

{
#define MR_PROC_LABEL mdb__collect_lib__set_to_null_pointer_1_p_0

	MR_Word Pointer;

		{

    (Pointer = (MR_Word) NULL)


		;}
#undef MR_PROC_LABEL
	 *mdb__collect_lib__Pointer_1  = Pointer;
}
  }
}

static void MR_CALL 
mdb__collect_lib__link_collect_10_p_0(
  MR_String mdb__collect_lib__ObjectFile_11,
  MR_Word * mdb__collect_lib__Filter_12,
  MR_Word * mdb__collect_lib__Initialize_13,
  MR_Word * mdb__collect_lib__PostProcess_14,
  MR_Word * mdb__collect_lib__SendResult_15,
  MR_Word * mdb__collect_lib__GetCollectType_16,
  MR_Word * mdb__collect_lib__MaybeHandle_17,
  MR_Char * mdb__collect_lib__Result_18)
{
  {
    MR_bool mdb__collect_lib__succeeded;

    {
      mdb__dl__open_6_p_0(mdb__collect_lib__ObjectFile_11, (MR_Integer) 0, (MR_Integer) 0, mdb__collect_lib__MaybeHandle_17);
    }
    if (((MR_tag((MR_Word) *mdb__collect_lib__MaybeHandle_17)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mdb__collect_lib__TypeCtorInfo_51_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        MR_String mdb__collect_lib__Msg_20 = ((MR_String) (MR_hl_field(MR_mktag(1), *mdb__collect_lib__MaybeHandle_17, (MR_Integer) 0)));

        {
          mercury__io__print_3_p_0(mdb__collect_lib__TypeCtorInfo_51_51, ((MR_Box) ((MR_String) "dlopen failed: ")));
        }
        {
          mercury__io__print_3_p_0(mdb__collect_lib__TypeCtorInfo_51_51, ((MR_Box) (mdb__collect_lib__Msg_20)));
        }
        {
          mercury__io__nl_2_p_0();
        }
{
#define MR_PROC_LABEL mdb__collect_lib__link_collect_10_p_0

	MR_Word Pointer;

		{

    (Pointer = (MR_Word) NULL)


		;}
#undef MR_PROC_LABEL
	 *mdb__collect_lib__Initialize_13  = Pointer;
}
{
#define MR_PROC_LABEL mdb__collect_lib__link_collect_10_p_0

	MR_Word Pointer;

		{

    (Pointer = (MR_Word) NULL)


		;}
#undef MR_PROC_LABEL
	 *mdb__collect_lib__Filter_12  = Pointer;
}
{
#define MR_PROC_LABEL mdb__collect_lib__link_collect_10_p_0

	MR_Word Pointer;

		{

    (Pointer = (MR_Word) NULL)


		;}
#undef MR_PROC_LABEL
	 *mdb__collect_lib__PostProcess_14  = Pointer;
}
{
#define MR_PROC_LABEL mdb__collect_lib__link_collect_10_p_0

	MR_Word Pointer;

		{

    (Pointer = (MR_Word) NULL)


		;}
#undef MR_PROC_LABEL
	 *mdb__collect_lib__SendResult_15  = Pointer;
}
{
#define MR_PROC_LABEL mdb__collect_lib__link_collect_10_p_0

	MR_Word Pointer;

		{

    (Pointer = (MR_Word) NULL)


		;}
#undef MR_PROC_LABEL
	 *mdb__collect_lib__GetCollectType_16  = Pointer;
}
        *mdb__collect_lib__Result_18 = (MR_Char) 110;
      }
    else
      {
        MR_Word mdb__collect_lib__Handle_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__collect_lib__MaybeHandle_17, (MR_Integer) 0)));
        MR_Word mdb__collect_lib__MaybeInitialize_22;
        MR_Word mdb__collect_lib__MaybeFilter_23;
        MR_Word mdb__collect_lib__MaybePostProcess_24;
        MR_Word mdb__collect_lib__MaybeSendResult_25;
        MR_Word mdb__collect_lib__MaybeType_26;
        MR_Word mdb__collect_lib__Initialize0_27;
        MR_Word mdb__collect_lib__Filter0_28;
        MR_Word mdb__collect_lib__PostProcess0_29;
        MR_Word mdb__collect_lib__SendResult0_30;
        MR_Word mdb__collect_lib__Type0_31;

        {
          mdb__dl__sym_5_p_0(mdb__collect_lib__Handle_21, (MR_String) "ML_COLLECT_initialize", &mdb__collect_lib__MaybeInitialize_22);
        }
        {
          mdb__dl__sym_5_p_0(mdb__collect_lib__Handle_21, (MR_String) "ML_COLLECT_filter", &mdb__collect_lib__MaybeFilter_23);
        }
        {
          mdb__dl__sym_5_p_0(mdb__collect_lib__Handle_21, (MR_String) "ML_COLLECT_post_process", &mdb__collect_lib__MaybePostProcess_24);
        }
        {
          mdb__dl__sym_5_p_0(mdb__collect_lib__Handle_21, (MR_String) "ML_COLLECT_send_collect_result", &mdb__collect_lib__MaybeSendResult_25);
        }
        {
          mdb__dl__sym_5_p_0(mdb__collect_lib__Handle_21, (MR_String) "ML_COLLECT_collected_variable_type", &mdb__collect_lib__MaybeType_26);
        }
        mdb__collect_lib__succeeded = ((MR_tag((MR_Word) mdb__collect_lib__MaybeInitialize_22)) == (MR_mktag((MR_Integer) 0)));
        if (mdb__collect_lib__succeeded)
          {
            mdb__collect_lib__Initialize0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__collect_lib__MaybeInitialize_22, (MR_Integer) 0)));
            mdb__collect_lib__succeeded = ((MR_tag((MR_Word) mdb__collect_lib__MaybeFilter_23)) == (MR_mktag((MR_Integer) 0)));
            if (mdb__collect_lib__succeeded)
              {
                mdb__collect_lib__Filter0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__collect_lib__MaybeFilter_23, (MR_Integer) 0)));
                mdb__collect_lib__succeeded = ((MR_tag((MR_Word) mdb__collect_lib__MaybePostProcess_24)) == (MR_mktag((MR_Integer) 0)));
                if (mdb__collect_lib__succeeded)
                  {
                    mdb__collect_lib__PostProcess0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__collect_lib__MaybePostProcess_24, (MR_Integer) 0)));
                    mdb__collect_lib__succeeded = ((MR_tag((MR_Word) mdb__collect_lib__MaybeSendResult_25)) == (MR_mktag((MR_Integer) 0)));
                    if (mdb__collect_lib__succeeded)
                      {
                        mdb__collect_lib__SendResult0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__collect_lib__MaybeSendResult_25, (MR_Integer) 0)));
                        mdb__collect_lib__succeeded = ((MR_tag((MR_Word) mdb__collect_lib__MaybeType_26)) == (MR_mktag((MR_Integer) 0)));
                        if (mdb__collect_lib__succeeded)
                          mdb__collect_lib__Type0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__collect_lib__MaybeType_26, (MR_Integer) 0)));
                      }
                  }
              }
          }
        if (mdb__collect_lib__succeeded)
          {
            *mdb__collect_lib__Result_18 = (MR_Char) 121;
            *mdb__collect_lib__Initialize_13 = mdb__collect_lib__Initialize0_27;
            *mdb__collect_lib__Filter_12 = mdb__collect_lib__Filter0_28;
            *mdb__collect_lib__PostProcess_14 = mdb__collect_lib__PostProcess0_29;
            *mdb__collect_lib__GetCollectType_16 = mdb__collect_lib__Type0_31;
            *mdb__collect_lib__SendResult_15 = mdb__collect_lib__SendResult0_30;
          }
        else
          {
{
#define MR_PROC_LABEL mdb__collect_lib__link_collect_10_p_0

	MR_Word Pointer;

		{

    (Pointer = (MR_Word) NULL)


		;}
#undef MR_PROC_LABEL
	 *mdb__collect_lib__Initialize_13  = Pointer;
}
{
#define MR_PROC_LABEL mdb__collect_lib__link_collect_10_p_0

	MR_Word Pointer;

		{

    (Pointer = (MR_Word) NULL)


		;}
#undef MR_PROC_LABEL
	 *mdb__collect_lib__Filter_12  = Pointer;
}
{
#define MR_PROC_LABEL mdb__collect_lib__link_collect_10_p_0

	MR_Word Pointer;

		{

    (Pointer = (MR_Word) NULL)


		;}
#undef MR_PROC_LABEL
	 *mdb__collect_lib__PostProcess_14  = Pointer;
}
{
#define MR_PROC_LABEL mdb__collect_lib__link_collect_10_p_0

	MR_Word Pointer;

		{

    (Pointer = (MR_Word) NULL)


		;}
#undef MR_PROC_LABEL
	 *mdb__collect_lib__SendResult_15  = Pointer;
}
{
#define MR_PROC_LABEL mdb__collect_lib__link_collect_10_p_0

	MR_Word Pointer;

		{

    (Pointer = (MR_Word) NULL)


		;}
#undef MR_PROC_LABEL
	 *mdb__collect_lib__GetCollectType_16  = Pointer;
}
            *mdb__collect_lib__Result_18 = (MR_Char) 110;
          }
      }
  }
}

void MR_CALL 
mdb__collect_lib__dummy_pred_to_avoid_warning_about_nothing_exported_0_p_0(void)
{
  {
    MR_bool mdb__collect_lib__succeeded;

  }
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
