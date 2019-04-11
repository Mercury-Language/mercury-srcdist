/*
** Automatically generated from `collect_lib.m'
** by the Mercury compiler,
** version rotd-2018-06-26
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


// :- module mdb.collect_lib.
// :- implementation.

/*
INIT mercury__mdb__collect_lib__init
ENDINIT
*/

#include "mdb.collect_lib.mih"
#include "mdb.collect_lib.mh"


#include "mdb.mih"
#include "mdb.dl.mih"
#include "mdb.name_mangle.mih"
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
  MR_Word MaybeHandle_4);

static void MR_CALL 
mdb__collect_lib__set_to_null_pointer_1_p_0(
  MR_Word * Pointer_1);

static void MR_CALL 
mdb__collect_lib__link_collect_10_p_0(
  MR_String ObjectFile_11,
  MR_Word * Filter_12,
  MR_Word * Initialize_13,
  MR_Word * PostProcess_14,
  MR_Word * SendResult_15,
  MR_Word * GetCollectType_16,
  MR_Word * MaybeHandle_17,
  MR_Char * Result_18);







#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.collect_lib.mh"

#line 79 "collect_lib.m"
void 
ML_CL_link_collect(
  MR_String ObjectFile_11,
  MR_Word * Filter_12,
  MR_Word * Initialize_13,
  MR_Word * PostProcess_14,
  MR_Word * SendResult_15,
  MR_Word * GetCollectType_16,
  MR_Word * MaybeHandle_17,
  MR_Char * Result_18)
#line 79 "collect_lib.m"
{
#line 79 "collect_lib.m"
	mdb__collect_lib__link_collect_10_p_0((MR_String) ObjectFile_11, (MR_Word *) Filter_12, (MR_Word *) Initialize_13, (MR_Word *) PostProcess_14, (MR_Word *) SendResult_15, (MR_Word *) GetCollectType_16, (MR_Word *) MaybeHandle_17, (MR_Char *) Result_18);
}

#line 83 "collect_lib.m"
void 
ML_CL_unlink_collect(
  MR_Word MaybeHandle_4)
#line 83 "collect_lib.m"
{
#line 83 "collect_lib.m"
	mdb__collect_lib__unlink_collect_3_p_0((MR_Word) MaybeHandle_4);
}


static void MR_CALL 
mdb__collect_lib__unlink_collect_3_p_0(
  MR_Word MaybeHandle_4)
{
  if (!(((MR_tag((MR_Word) MaybeHandle_4)) == (MR_Integer) 1)))
  {
    MR_Word Handle_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeHandle_4, (MR_Integer) 0))));
    MR_Word Result_8;

    mdb__dl__close_4_p_0(Handle_7, &Result_8);
    if (!((Result_8 == (MR_Word) ((MR_Integer) 0))))
    {
      MR_String String_16 = ((MR_String) ((MR_hl_field(MR_mktag(1), Result_8, (MR_Integer) 0))));

      mercury__io__print_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (String_16)));
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
mdb__collect_lib__set_to_null_pointer_1_p_0(
  MR_Word * Pointer_1)
{
  {
{
#define MR_PROC_LABEL mdb__collect_lib__set_to_null_pointer_1_p_0

	MR_Word Pointer;

		{

    (Pointer = (MR_Word) NULL)


		;}
#undef MR_PROC_LABEL
	 *Pointer_1  = Pointer;
}
  }
}

static void MR_CALL 
mdb__collect_lib__link_collect_10_p_0(
  MR_String ObjectFile_11,
  MR_Word * Filter_12,
  MR_Word * Initialize_13,
  MR_Word * PostProcess_14,
  MR_Word * SendResult_15,
  MR_Word * GetCollectType_16,
  MR_Word * MaybeHandle_17,
  MR_Char * Result_18)
{
  {
    MR_bool succeeded;

    mdb__dl__open_6_p_0(ObjectFile_11, (MR_Integer) 0, (MR_Integer) 0, MaybeHandle_17);
    if (((MR_tag((MR_Word) *MaybeHandle_17)) == (MR_Integer) 1))
    {
      MR_String Msg_20 = ((MR_String) ((MR_hl_field(MR_mktag(1), *MaybeHandle_17, (MR_Integer) 0))));

      mercury__io__print_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "dlopen failed: ")));
      mercury__io__print_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Msg_20)));
      mercury__io__nl_2_p_0();
{
#define MR_PROC_LABEL mdb__collect_lib__link_collect_10_p_0

	MR_Word Pointer;

		{

    (Pointer = (MR_Word) NULL)


		;}
#undef MR_PROC_LABEL
	 *Initialize_13  = Pointer;
}
{
#define MR_PROC_LABEL mdb__collect_lib__link_collect_10_p_0

	MR_Word Pointer;

		{

    (Pointer = (MR_Word) NULL)


		;}
#undef MR_PROC_LABEL
	 *Filter_12  = Pointer;
}
{
#define MR_PROC_LABEL mdb__collect_lib__link_collect_10_p_0

	MR_Word Pointer;

		{

    (Pointer = (MR_Word) NULL)


		;}
#undef MR_PROC_LABEL
	 *PostProcess_14  = Pointer;
}
{
#define MR_PROC_LABEL mdb__collect_lib__link_collect_10_p_0

	MR_Word Pointer;

		{

    (Pointer = (MR_Word) NULL)


		;}
#undef MR_PROC_LABEL
	 *SendResult_15  = Pointer;
}
{
#define MR_PROC_LABEL mdb__collect_lib__link_collect_10_p_0

	MR_Word Pointer;

		{

    (Pointer = (MR_Word) NULL)


		;}
#undef MR_PROC_LABEL
	 *GetCollectType_16  = Pointer;
}
      *Result_18 = (MR_Char) 110;
    }
    else
    {
      MR_Word Handle_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *MaybeHandle_17, (MR_Integer) 0))));
      MR_Word MaybeInitialize_22;
      MR_Word MaybeFilter_23;
      MR_Word MaybePostProcess_24;
      MR_Word MaybeSendResult_25;
      MR_Word MaybeType_26;
      MR_Word Initialize0_27;
      MR_Word Filter0_28;
      MR_Word PostProcess0_29;
      MR_Word SendResult0_30;
      MR_Word Type0_31;

      mdb__dl__sym_5_p_0(Handle_21, (MR_String) "ML_COLLECT_initialize", &MaybeInitialize_22);
      mdb__dl__sym_5_p_0(Handle_21, (MR_String) "ML_COLLECT_filter", &MaybeFilter_23);
      mdb__dl__sym_5_p_0(Handle_21, (MR_String) "ML_COLLECT_post_process", &MaybePostProcess_24);
      mdb__dl__sym_5_p_0(Handle_21, (MR_String) "ML_COLLECT_send_collect_result", &MaybeSendResult_25);
      mdb__dl__sym_5_p_0(Handle_21, (MR_String) "ML_COLLECT_collected_variable_type", &MaybeType_26);
      succeeded = ((MR_tag((MR_Word) MaybeInitialize_22)) == (MR_Integer) 0);
      if (succeeded)
      {
        Initialize0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeInitialize_22, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeFilter_23)) == (MR_Integer) 0);
        if (succeeded)
        {
          Filter0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeFilter_23, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybePostProcess_24)) == (MR_Integer) 0);
          if (succeeded)
          {
            PostProcess0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybePostProcess_24, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) MaybeSendResult_25)) == (MR_Integer) 0);
            if (succeeded)
            {
              SendResult0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeSendResult_25, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) MaybeType_26)) == (MR_Integer) 0);
              if (succeeded)
                Type0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeType_26, (MR_Integer) 0))));
            }
          }
        }
      }
      if (succeeded)
      {
        *Result_18 = (MR_Char) 121;
        *Initialize_13 = Initialize0_27;
        *Filter_12 = Filter0_28;
        *PostProcess_14 = PostProcess0_29;
        *GetCollectType_16 = Type0_31;
        *SendResult_15 = SendResult0_30;
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
	 *Initialize_13  = Pointer;
}
{
#define MR_PROC_LABEL mdb__collect_lib__link_collect_10_p_0

	MR_Word Pointer;

		{

    (Pointer = (MR_Word) NULL)


		;}
#undef MR_PROC_LABEL
	 *Filter_12  = Pointer;
}
{
#define MR_PROC_LABEL mdb__collect_lib__link_collect_10_p_0

	MR_Word Pointer;

		{

    (Pointer = (MR_Word) NULL)


		;}
#undef MR_PROC_LABEL
	 *PostProcess_14  = Pointer;
}
{
#define MR_PROC_LABEL mdb__collect_lib__link_collect_10_p_0

	MR_Word Pointer;

		{

    (Pointer = (MR_Word) NULL)


		;}
#undef MR_PROC_LABEL
	 *SendResult_15  = Pointer;
}
{
#define MR_PROC_LABEL mdb__collect_lib__link_collect_10_p_0

	MR_Word Pointer;

		{

    (Pointer = (MR_Word) NULL)


		;}
#undef MR_PROC_LABEL
	 *GetCollectType_16  = Pointer;
}
        *Result_18 = (MR_Char) 110;
      }
    }
  }
}

void MR_CALL 
mdb__collect_lib__dummy_pred_to_avoid_warning_about_nothing_exported_0_p_0(void)
{
  {
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

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__collect_lib__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdb.collect_lib.
