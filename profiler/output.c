/*
** Automatically generated from `output.m'
** by the Mercury compiler,
** version 22.01-beta-2022-01-25
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


// :- module output.
// :- implementation.

/*
INIT mercury__output__init
ENDINIT
*/

#include "output.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "float.mih"
#include "generate_output.mih"
#include "getopt.mih"
#include "globals.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "options.mih"
#include "output_prof_info.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "prof_info.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 output__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0;

static const MR_EnumFunctorDesc output__output__enum_functor_desc_header_category_0_0;

static const MR_EnumFunctorDesc output__output__enum_functor_desc_header_category_0_1;

static const MR_EnumFunctorDesc output__output__enum_functor_desc_header_category_0_2;

static const MR_EnumFunctorDescPtr output__output__enum_ordinal_ordered_header_category_0[3];

static const MR_EnumFunctorDescPtr output__output__enum_name_ordered_header_category_0[3];

static const MR_Integer output__output__functor_number_map_header_category_0[3];

static void MR_CALL 
output__IntroducedFrom__pred__output_formatted_child_list__368__1_5_p_0(
  MR_Word OutputStream_6,
  MR_Word IndexMap_8,
  MR_Word LambdaHeadVar__1_23);

static void MR_CALL 
output__IntroducedFrom__pred__output_formatted_cycle_parent_list__316__1_5_p_0(
  MR_Word OutputStream_6,
  MR_Word IndexMap_8,
  MR_Word LambdaHeadVar__1_22);

static void MR_CALL 
output____Compare____header_category_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
output____Unify____header_category_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
output__output_alphabet_listing_2_4_p_0(
  MR_Word OutputStream_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
output__output_flat_profile_7_p_0(
  MR_Word OutputStream_1,
  MR_Word HeadVar__2_2,
  MR_Float CumTime0_3,
  MR_Word InfoMap_4,
  MR_Word IndexMap_5);

static void MR_CALL 
output__output_flat_headers_3_p_0(
  MR_Word OutputStream_4);

static void MR_CALL 
output__output_call_graph_6_p_0(
  MR_Word OutputStream_1,
  MR_Word HeadVar__2_2,
  MR_Word InfoMap_3,
  MR_Word IndexMap_4);

static void MR_CALL 
output__output_formatted_prof_node_6_p_0(
  MR_Word OutputStream_7,
  MR_Word ProfNode_8,
  MR_Integer Index_9,
  MR_Word IndexMap_10);

static void MR_CALL 
output__output_formatted_child_list_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
output__output_formatted_child_list_5_p_0(
  MR_Word OutputStream_6,
  MR_Word Children_7,
  MR_Word IndexMap_8);

static void MR_CALL 
output__output_formatted_cycle_child_list_5_p_0(
  MR_Word OutputStream_1,
  MR_Word HeadVar__2_2,
  MR_Word IndexMap_3);

static void MR_CALL 
output__output_formatted_parent_list_6_p_0(
  MR_Word OutputStream_1,
  MR_Word HeadVar__2_2,
  MR_Word IndexMap_3,
  MR_Integer TotalCalls_4);

static MR_String MR_CALL 
output__construct_output_name_2_f_0(
  MR_String Name_4,
  MR_Integer CycleNum_5);

static void MR_CALL 
output__output_formatted_cycle_parent_list_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
output__output_formatted_cycle_parent_list_5_p_0(
  MR_Word OutputStream_6,
  MR_Word Parents_7,
  MR_Word IndexMap_8);

static void MR_CALL 
output__output_call_graph_headers_3_p_0(
  MR_Word OutputStream_4);

static void MR_CALL 
output__units_9_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2,
  MR_String * HeadVar__3_3,
  MR_String * HeadVar__4_4,
  MR_String * HeadVar__5_5,
  MR_String * HeadVar__6_6,
  MR_String * HeadVar__7_7,
  MR_String * HeadVar__8_8,
  MR_String * HeadVar__9_9);

static MR_Word MR_CALL 
output__classify_profile_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
output____Unify____header_category_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
output____Compare____header_category_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box output_scalar_common_1[2][1];

static /* final */ const MR_Box output_scalar_common_2[2][2];

static /* final */ const MR_Box output_scalar_common_4[2][8];


/* sealed */ struct output__vector_common_type_3_0_s {
  const MR_Word output__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct output__vector_common_type_3_0_s output_vector_common_3[6];



static /* final */ const MR_Box output_scalar_common_1[2][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row 1 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 1U << 1))))))))
  },
};

static /* final */ const MR_Box output_scalar_common_2[2][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "] ")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) ">")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box output_scalar_common_4[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&output__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&output_prof_info__output_prof_info__type_ctor_info_parent_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&output__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&output_prof_info__output_prof_info__type_ctor_info_child_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct output__vector_common_type_3_0_s output_vector_common_3[6] = {
  /* row 0 */   {     (MR_Integer) 1 },
  /* row 1 */   {     (MR_Integer) 2 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 0 },
  /* row 4 */   {     (MR_Integer) 0 },
  /* row 5 */   {     (MR_Integer) 0 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct2 output__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_EnumFunctorDesc output__output__enum_functor_desc_header_category_0_0 = {
  (MR_String) "time_headers",
  INT32_C(0)
};

static const MR_EnumFunctorDesc output__output__enum_functor_desc_header_category_0_1 = {
  (MR_String) "memory_words_headers",
  INT32_C(1)
};

static const MR_EnumFunctorDesc output__output__enum_functor_desc_header_category_0_2 = {
  (MR_String) "memory_cells_headers",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr output__output__enum_ordinal_ordered_header_category_0[3] = {
  &output__output__enum_functor_desc_header_category_0_0,
  &output__output__enum_functor_desc_header_category_0_1,
  &output__output__enum_functor_desc_header_category_0_2
};

static const MR_EnumFunctorDescPtr output__output__enum_name_ordered_header_category_0[3] = {
  &output__output__enum_functor_desc_header_category_0_2,
  &output__output__enum_functor_desc_header_category_0_1,
  &output__output__enum_functor_desc_header_category_0_0
};

static const MR_Integer output__output__functor_number_map_header_category_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct output__output__type_ctor_info_header_category_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (output____Unify____header_category_0_0_10001)),
  ((MR_Box) (output____Compare____header_category_0_0_10001)),
  (MR_String) "output",
  (MR_String) "header_category",
  {     output__output__enum_name_ordered_header_category_0 },
  {     output__output__enum_ordinal_ordered_header_category_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  output__output__functor_number_map_header_category_0,

};

static void MR_CALL 
output__IntroducedFrom__pred__output_formatted_child_list__368__1_5_p_0(
  MR_Word OutputStream_6,
  MR_Word IndexMap_8,
  MR_Word LambdaHeadVar__1_23)
{
  {
    MR_String LabelName_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_23, (MR_Integer) 0))));
    MR_Integer CycleNum_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_23, (MR_Integer) 1))));
    MR_Float Self_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_23, (MR_Integer) 2)));
    MR_Float Descendant_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_23, (MR_Integer) 3)));
    MR_Integer Calls_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_23, (MR_Integer) 4))));
    MR_Integer TotalCalls_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_23, (MR_Integer) 5))));
    MR_String Name_17;
    MR_Integer Index_18;
    MR_Word Var_29;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Box conv0_Index_18;

    Name_17 = output__construct_output_name_2_f_0(LabelName_11, CycleNum_12);
    mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), IndexMap_8, ((MR_Box) (LabelName_11)), &conv0_Index_18);
    Index_18 = ((MR_Integer) (conv0_Index_18));
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = MR_box_float(Self_13);
    }
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = MR_box_float(Descendant_14);
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Calls_15));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (TotalCalls_16));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (Name_17));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Index_18));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_36));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
    }
    mercury__io__format_5_p_0(OutputStream_6, (MR_String) "%20.2f %11.2f %7d/%-11d %s [%d]\n", Var_29);
  }
}

static void MR_CALL 
output__IntroducedFrom__pred__output_formatted_cycle_parent_list__316__1_5_p_0(
  MR_Word OutputStream_6,
  MR_Word IndexMap_8,
  MR_Word LambdaHeadVar__1_22)
{
  {
    MR_bool succeeded;
    MR_String LabelName_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_22, (MR_Integer) 0))));
    MR_Integer CycleNum_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_22, (MR_Integer) 1))));
    MR_Integer Calls_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_22, (MR_Integer) 4))));
    MR_String Name_16;
    MR_Integer Index_17;
    MR_Word Var_28;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Box conv0_Index_17;

    succeeded = (CycleNum_12 == (MR_Integer) 0);
    if (succeeded)
      Name_16 = LabelName_11;
    else
    {
      MR_String CycleStr_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_73;

      mercury__string__int_to_string_2_p_0(CycleNum_12, &CycleStr_69);
      {
        Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (CycleStr_69));
        MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &output_scalar_common_2[1])));
      }
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) ((MR_String) "  <cycle "));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_73));
      }
      {
        Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (LabelName_11));
        MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_71));
      }
      mercury__string__append_list_2_p_0(Var_70, &Name_16);
    }
    mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), IndexMap_8, ((MR_Box) (LabelName_11)), &conv0_Index_17);
    Index_17 = ((MR_Integer) (conv0_Index_17));
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Calls_15));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (Name_16));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Index_17));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_31));
    }
    mercury__io__format_5_p_0(OutputStream_6, (MR_String) "%40d             %s [%d]\n", Var_28);
  }
}

static void MR_CALL 
output____Compare____header_category_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

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

static MR_bool MR_CALL 
output____Unify____header_category_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
output__output_profile_5_p_0(
  MR_Word OutputStream_6,
  MR_Word ProfilerOutput_7,
  MR_Word IndexMap_8)
{
  {
    MR_Word Globals_10;
    MR_Word WhatToProfile_11;
    MR_String WhatToProfileString_12;
    MR_Word InfoMap_13;
    MR_Word CallList_14;
    MR_Word FlatList_15;
    MR_Word CallGraphOpt_16;
    MR_Word IndexList_49;

    globals__io_get_globals_3_p_0(&Globals_10);
    globals__get_what_to_profile_2_p_0(Globals_10, &WhatToProfile_11);
    globals__what_to_profile_2_p_1(&WhatToProfileString_12, WhatToProfile_11);
    mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "*** profiling ");
    mercury__io__write_string_4_p_0(OutputStream_6, WhatToProfileString_12);
    mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " ***\n\n");
    InfoMap_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProfilerOutput_7, (MR_Integer) 0))));
    CallList_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProfilerOutput_7, (MR_Integer) 1))));
    FlatList_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProfilerOutput_7, (MR_Integer) 2))));
    globals__io_lookup_bool_option_4_p_0((MR_Integer) 3, &CallGraphOpt_16);
    switch (CallGraphOpt_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          output__output_call_graph_headers_3_p_0(OutputStream_6);
          output__output_call_graph_6_p_0(OutputStream_6, CallList_14, InfoMap_13, IndexMap_8);
        }
        break;
    }
    output__output_flat_headers_3_p_0(OutputStream_6);
    output__output_flat_profile_7_p_0(OutputStream_6, FlatList_15, (MR_Float) 0.0000000000000000, InfoMap_13, IndexMap_8);
    mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\n\n\nalphabetic listing:\n\n");
    IndexList_49 = mercury__map__to_assoc_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), IndexMap_8);
    output__output_alphabet_listing_2_4_p_0(OutputStream_6, IndexList_49);
  }
}

static void MR_CALL 
output__output_alphabet_listing_2_4_p_0(
  MR_Word OutputStream_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__nl_3_p_0(OutputStream_1);
    else
    {
      MR_String Name_11;
      MR_Integer Index_12;
      MR_Word T_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_String Var_29;
      MR_String Var_39;
      MR_Word next_value_of_HeadVar__2_2;

      Name_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
      Index_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1))));
      mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "[");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&output_scalar_common_1[0]), Index_12, &Var_29);
      mercury__io__write_string_4_p_0(OutputStream_1, Var_29);
      mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "]\t");
      mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&output_scalar_common_1[1]), (MR_Integer) 30, Name_11, &Var_39);
      mercury__io__write_string_4_p_0(OutputStream_1, Var_39);
      mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = T_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
output__output_flat_profile_7_p_0(
  MR_Word OutputStream_1,
  MR_Word HeadVar__2_2,
  MR_Float CumTime0_3,
  MR_Word InfoMap_4,
  MR_Word IndexMap_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String LabelName_16 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word LNs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ProfNode_22;
      MR_Integer Index_23;
      MR_String Name_24;
      MR_Integer CycleNum_25;
      MR_Float Percentage_27;
      MR_Float Self_28;
      MR_Float Descendant_29;
      MR_Integer TotalCalls_30;
      MR_Integer SelfCalls_31;
      MR_Float FloatTotalCalls_45;
      MR_Integer Calls_46;
      MR_Float CumTime_47;
      MR_Float SelfSeconds_48;
      MR_Float DescSeconds_49;
      MR_Float SelfMs_50;
      MR_Float DescMs_51;
      MR_String FullName_52;
      MR_String IndexStr0_53;
      MR_String IndexStr_54;
      MR_Float Var_58;
      MR_Float Var_59;
      MR_Word Var_62;
      MR_Word Var_64;
      MR_String Var_92;
      MR_String Var_105;
      MR_String Var_118;
      MR_String Var_131;
      MR_String Var_142;
      MR_String Var_155;
      MR_Box conv0_ProfNode_22;
      MR_Box conv1_Index_23;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Float next_value_of_CumTime0_3;

      mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&output_prof_info__output_prof_info__type_ctor_info_output_prof_0), InfoMap_4, ((MR_Box) (LabelName_16)), &conv0_ProfNode_22);
      ProfNode_22 = ((MR_Word) (conv0_ProfNode_22));
      mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), IndexMap_5, ((MR_Box) (LabelName_16)), &conv1_Index_23);
      Index_23 = ((MR_Integer) (conv1_Index_23));
      if (((MR_tag((MR_Word) ProfNode_22)) == (MR_Integer) 1))
        {
          mercury__require__error_1_p_0((MR_String) "output_flat_profile: Cannot have output_cycle_prof\n");
          return;
        }
      else
      {
        Name_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), ProfNode_22, (MR_Integer) 0))));
        CycleNum_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProfNode_22, (MR_Integer) 1))));
        Percentage_27 = MR_unbox_float((MR_hl_field(MR_mktag(0), ProfNode_22, (MR_Integer) 3)));
        Self_28 = MR_unbox_float((MR_hl_field(MR_mktag(0), ProfNode_22, (MR_Integer) 4)));
        Descendant_29 = MR_unbox_float((MR_hl_field(MR_mktag(0), ProfNode_22, (MR_Integer) 5)));
        TotalCalls_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProfNode_22, (MR_Integer) 6))));
        SelfCalls_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProfNode_22, (MR_Integer) 7))));
      }
      Var_58 = mercury__float__float_1_f_0(TotalCalls_30);
      Var_59 = mercury__float__float_1_f_0(SelfCalls_31);
      FloatTotalCalls_45 = (Var_58 + Var_59);
      Calls_46 = (MR_Integer) ((MR_Unsigned) SelfCalls_31 + (MR_Unsigned) TotalCalls_30);
      CumTime_47 = (CumTime0_3 + Self_28);
      SelfSeconds_48 = generate_output__checked_float_divide_2_f_0(Self_28, FloatTotalCalls_45);
      DescSeconds_49 = generate_output__checked_float_divide_2_f_0(Descendant_29, FloatTotalCalls_45);
      SelfMs_50 = (((MR_Float) 1000.0000000000000) * SelfSeconds_48);
      DescMs_51 = (((MR_Float) 1000.0000000000000) * DescSeconds_49);
      FullName_52 = output__construct_output_name_2_f_0(Name_24, CycleNum_25);
      mercury__string__int_to_string_2_p_0(Index_23, &IndexStr0_53);
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (IndexStr0_53));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &output_scalar_common_2[0])));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) ((MR_String) "["));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_64));
      }
      mercury__string__append_list_2_p_0(Var_62, &IndexStr_54);
      mercury__string__format__format_float_component_width_prec_6_p_0((MR_Word) (&output_scalar_common_1[0]), (MR_Integer) 5, (MR_Integer) 1, (MR_Integer) 2, Percentage_27, &Var_92);
      mercury__io__write_string_4_p_0(OutputStream_1, Var_92);
      mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) " ");
      mercury__string__format__format_float_component_width_prec_6_p_0((MR_Word) (&output_scalar_common_1[0]), (MR_Integer) 10, (MR_Integer) 2, (MR_Integer) 2, CumTime_47, &Var_105);
      mercury__io__write_string_4_p_0(OutputStream_1, Var_105);
      mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) " ");
      mercury__string__format__format_float_component_width_prec_6_p_0((MR_Word) (&output_scalar_common_1[0]), (MR_Integer) 8, (MR_Integer) 2, (MR_Integer) 2, Self_28, &Var_118);
      mercury__io__write_string_4_p_0(OutputStream_1, Var_118);
      mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) " ");
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&output_scalar_common_1[0]), (MR_Integer) 8, Calls_46, &Var_131);
      mercury__io__write_string_4_p_0(OutputStream_1, Var_131);
      mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) " ");
      mercury__string__format__format_float_component_width_prec_6_p_0((MR_Word) (&output_scalar_common_1[0]), (MR_Integer) 8, (MR_Integer) 2, (MR_Integer) 2, SelfMs_50, &Var_142);
      mercury__io__write_string_4_p_0(OutputStream_1, Var_142);
      mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) " ");
      mercury__string__format__format_float_component_width_prec_6_p_0((MR_Word) (&output_scalar_common_1[0]), (MR_Integer) 8, (MR_Integer) 2, (MR_Integer) 2, DescMs_51, &Var_155);
      mercury__io__write_string_4_p_0(OutputStream_1, Var_155);
      mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) " ");
      mercury__io__write_string_4_p_0(OutputStream_1, FullName_52);
      mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) " ");
      mercury__io__write_string_4_p_0(OutputStream_1, IndexStr_54);
      mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = LNs_17;
      next_value_of_CumTime0_3 = CumTime_47;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      CumTime0_3 = next_value_of_CumTime0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
output__output_flat_headers_3_p_0(
  MR_Word OutputStream_4)
{
  {
    MR_Word Globals_6;
    MR_Word WhatToProfile_7;
    MR_Word Category_8;
    MR_String ShortWhat_9;
    MR_String LongWhat_11;
    MR_String ShortUnits_12;
    MR_String Units_13;
    MR_String MilliUnits_14;
    MR_String MilliUnitsPerCall_15;
    MR_String SpentIn_16;
    MR_String Var_136;
    MR_String Var_147;
    MR_String Var_158;
    MR_String Var_169;
    MR_String Var_180;
    MR_String _What_10;

    globals__io_get_globals_3_p_0(&Globals_6);
    globals__get_what_to_profile_2_p_0(Globals_6, &WhatToProfile_7);
    Category_8 = output__classify_profile_1_f_0(WhatToProfile_7);
    output__units_9_p_0(Category_8, &ShortWhat_9, &_What_10, &LongWhat_11, &ShortUnits_12, &Units_13, &MilliUnits_14, &MilliUnitsPerCall_15, &SpentIn_16);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "\nflat profile:\n\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "%\t\tthe percentage of total ");
    mercury__io__write_string_4_p_0(OutputStream_4, LongWhat_11);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) " of the program\n");
    mercury__io__write_string_4_p_0(OutputStream_4, ShortWhat_9);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "\t\tused by this procedure.\n\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "cumulative\tthe total number of ");
    mercury__io__write_string_4_p_0(OutputStream_4, Units_13);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) " for the current procedure and\n");
    mercury__io__write_string_4_p_0(OutputStream_4, ShortUnits_12);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "\t\tthe ones listed above it.\n\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "self\t\tthe number of ");
    mercury__io__write_string_4_p_0(OutputStream_4, Units_13);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) " accounted for by this procedure alone.\n");
    mercury__io__write_string_4_p_0(OutputStream_4, ShortUnits_12);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "\t\tThe listing is sorted on this row.\n\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "calls\t\tthe number of times this procedure was called.\n\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "self\t\tthe average number of ");
    mercury__io__write_string_4_p_0(OutputStream_4, MilliUnits_14);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) " ");
    mercury__io__write_string_4_p_0(OutputStream_4, SpentIn_16);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "\n");
    mercury__io__write_string_4_p_0(OutputStream_4, MilliUnitsPerCall_15);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "  \tthis procedure per call.\n\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "total\t\tthe average number of ");
    mercury__io__write_string_4_p_0(OutputStream_4, MilliUnits_14);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) " ");
    mercury__io__write_string_4_p_0(OutputStream_4, SpentIn_16);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) " this procedure and its\n");
    mercury__io__write_string_4_p_0(OutputStream_4, MilliUnitsPerCall_15);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "  \tdescendents per call.\n\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "name\t\tthe name of the procedure followed by its index number.\n\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "   %  cumulative    self              self");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "    total\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) " ");
    mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&output_scalar_common_1[0]), (MR_Integer) 4, ShortWhat_9, &Var_136);
    mercury__io__write_string_4_p_0(OutputStream_4, Var_136);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "    ");
    mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&output_scalar_common_1[0]), (MR_Integer) 7, ShortUnits_12, &Var_147);
    mercury__io__write_string_4_p_0(OutputStream_4, Var_147);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "  ");
    mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&output_scalar_common_1[0]), (MR_Integer) 7, ShortUnits_12, &Var_158);
    mercury__io__write_string_4_p_0(OutputStream_4, Var_158);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "    calls ");
    mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&output_scalar_common_1[0]), (MR_Integer) 8, MilliUnitsPerCall_15, &Var_169);
    mercury__io__write_string_4_p_0(OutputStream_4, Var_169);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) " ");
    mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&output_scalar_common_1[0]), (MR_Integer) 8, MilliUnitsPerCall_15, &Var_180);
    mercury__io__write_string_4_p_0(OutputStream_4, Var_180);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) " name\n");
  }
}

static void MR_CALL 
output__output_call_graph_6_p_0(
  MR_Word OutputStream_1,
  MR_Word HeadVar__2_2,
  MR_Word InfoMap_3,
  MR_Word IndexMap_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String LabelName_14 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word LabelNames_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word PN_19;
      MR_Integer Index_20;
      MR_Box conv0_PN_19;
      MR_Box conv1_Index_20;
      MR_Word next_value_of_HeadVar__2_2;

      mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&output_prof_info__output_prof_info__type_ctor_info_output_prof_0), InfoMap_3, ((MR_Box) (LabelName_14)), &conv0_PN_19);
      PN_19 = ((MR_Word) (conv0_PN_19));
      mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), IndexMap_4, ((MR_Box) (LabelName_14)), &conv1_Index_20);
      Index_20 = ((MR_Integer) (conv1_Index_20));
      output__output_formatted_prof_node_6_p_0(OutputStream_1, PN_19, Index_20, IndexMap_4);
      mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "\n-----------------------------------------------\n\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = LabelNames_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
output__output_formatted_prof_node_6_p_0(
  MR_Word OutputStream_7,
  MR_Word ProfNode_8,
  MR_Integer Index_9,
  MR_Word IndexMap_10)
{
  {
    MR_bool succeeded;
    MR_String Name_12;
    MR_Integer CycleNum_13;
    MR_Float Percentage_14;
    MR_Float Self_16;
    MR_Float Descendant_17;
    MR_Integer TotalCalls_18;
    MR_Integer SelfCalls_19;
    MR_Word ParentList_20;
    MR_Word ChildList_21;
    MR_Word CycleParentList_22;
    MR_Word CycleChildList_23;
    MR_String FullName_33;
    MR_String IndexStr0_34;
    MR_String IndexStr_35;
    MR_String SelfCallsString_36;
    MR_String InitMiddleStr_37;
    MR_Word SortedChildList_40;
    MR_Word SortedCycleChildList_41;
    MR_Word Var_45;
    MR_Word Var_47;
    MR_String Var_88;
    MR_String Var_90;
    MR_String Var_92;
    MR_String Var_100;
    MR_String Var_107;
    MR_String Var_109;
    MR_String Var_110;
    MR_String Var_112;
    MR_String Var_113;
    MR_String Var_121;
    MR_String Var_130;
    MR_String Var_131;
    MR_String Var_141;
    MR_String Var_143;
    MR_String Var_144;
    MR_String Var_154;
    MR_String Var_156;
    MR_String Var_157;
    MR_String Var_167;
    MR_String Var_169;
    MR_String Var_170;

    if (((MR_tag((MR_Word) ProfNode_8)) == (MR_Integer) 1))
      {
        mercury__require__error_1_p_0((MR_String) "output_formatted_prof_node: Cannot have output_cycle_prof\n");
        return;
      }
    else
    {
      Name_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), ProfNode_8, (MR_Integer) 0))));
      CycleNum_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProfNode_8, (MR_Integer) 1))));
      Percentage_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), ProfNode_8, (MR_Integer) 2)));
      Self_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), ProfNode_8, (MR_Integer) 4)));
      Descendant_17 = MR_unbox_float((MR_hl_field(MR_mktag(0), ProfNode_8, (MR_Integer) 5)));
      TotalCalls_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProfNode_8, (MR_Integer) 6))));
      SelfCalls_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProfNode_8, (MR_Integer) 7))));
      ParentList_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProfNode_8, (MR_Integer) 8))));
      ChildList_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProfNode_8, (MR_Integer) 9))));
      CycleParentList_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProfNode_8, (MR_Integer) 10))));
      CycleChildList_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProfNode_8, (MR_Integer) 11))));
    }
    FullName_33 = output__construct_output_name_2_f_0(Name_12, CycleNum_13);
    mercury__string__int_to_string_2_p_0(Index_9, &IndexStr0_34);
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (IndexStr0_34));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &output_scalar_common_2[0])));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) ((MR_String) "["));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_47));
    }
    mercury__string__append_list_2_p_0(Var_45, &IndexStr_35);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&output_scalar_common_1[0]), Index_9, &Var_100);
    Var_107 = mercury__string__f_43_43_2_f_0(Var_100, (MR_String) "]\n");
    Var_109 = mercury__string__f_43_43_2_f_0((MR_String) " [", Var_107);
    Var_110 = mercury__string__f_43_43_2_f_0(FullName_33, Var_109);
    Var_112 = mercury__string__f_43_43_2_f_0((MR_String) "             ", Var_110);
    mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&output_scalar_common_1[0]), (MR_Integer) 40, SelfCalls_19, &Var_113);
    SelfCallsString_36 = mercury__string__f_43_43_2_f_0(Var_113, Var_112);
    mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&output_scalar_common_1[0]), (MR_Integer) 7, TotalCalls_18, &Var_121);
    Var_130 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_121);
    mercury__string__format__format_float_component_width_prec_6_p_0((MR_Word) (&output_scalar_common_1[0]), (MR_Integer) 11, (MR_Integer) 2, (MR_Integer) 2, Descendant_17, &Var_131);
    Var_141 = mercury__string__f_43_43_2_f_0(Var_131, Var_130);
    Var_143 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_141);
    mercury__string__format__format_float_component_width_prec_6_p_0((MR_Word) (&output_scalar_common_1[0]), (MR_Integer) 7, (MR_Integer) 2, (MR_Integer) 2, Self_16, &Var_144);
    Var_154 = mercury__string__f_43_43_2_f_0(Var_144, Var_143);
    Var_156 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_154);
    mercury__string__format__format_float_component_width_prec_6_p_0((MR_Word) (&output_scalar_common_1[0]), (MR_Integer) 5, (MR_Integer) 1, (MR_Integer) 2, Percentage_14, &Var_157);
    Var_167 = mercury__string__f_43_43_2_f_0(Var_157, Var_156);
    Var_169 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_167);
    mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&output_scalar_common_1[1]), (MR_Integer) 6, IndexStr_35, &Var_170);
    InitMiddleStr_37 = mercury__string__f_43_43_2_f_0(Var_170, Var_169);
    succeeded = (SelfCalls_19 == (MR_Integer) 0);
    if (!(succeeded))
      mercury__io__write_string_4_p_0(OutputStream_7, SelfCallsString_36);
    succeeded = (CycleParentList_22 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (ParentList_20 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MR_String Var_178;

      mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&output_scalar_common_1[0]), (MR_Integer) 67, (MR_String) "<spontaneous>\n", &Var_178);
      mercury__io__write_string_4_p_0(OutputStream_7, Var_178);
    }
    else
    {
      MR_Word SortedCycleParentList_38;
      MR_Word SortedParentList_39;

      mercury__list__sort_2_p_0((MR_Word) (&output_prof_info__output_prof_info__type_ctor_info_parent_0), CycleParentList_22, &SortedCycleParentList_38);
      output__output_formatted_cycle_parent_list_5_p_0(OutputStream_7, SortedCycleParentList_38, IndexMap_10);
      mercury__list__sort_2_p_0((MR_Word) (&output_prof_info__output_prof_info__type_ctor_info_parent_0), ParentList_20, &SortedParentList_39);
      output__output_formatted_parent_list_6_p_0(OutputStream_7, SortedParentList_39, IndexMap_10, TotalCalls_18);
    }
    mercury__io__write_string_4_p_0(OutputStream_7, InitMiddleStr_37);
    succeeded = (SelfCalls_19 == (MR_Integer) 0);
    if (succeeded)
      mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "         ");
    else
    {
      MR_String Var_188;

      mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "+");
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&output_scalar_common_1[1]), (MR_Integer) 7, SelfCalls_19, &Var_188);
      mercury__io__write_string_4_p_0(OutputStream_7, Var_188);
    }
    Var_92 = mercury__string__f_43_43_2_f_0(IndexStr_35, (MR_String) "\n");
    Var_90 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_92);
    Var_88 = mercury__string__f_43_43_2_f_0(FullName_33, Var_90);
    mercury__io__write_string_4_p_0(OutputStream_7, Var_88);
    mercury__list__sort_2_p_0((MR_Word) (&output_prof_info__output_prof_info__type_ctor_info_child_0), ChildList_21, &SortedChildList_40);
    output__output_formatted_child_list_5_p_0(OutputStream_7, SortedChildList_40, IndexMap_10);
    mercury__list__sort_2_p_0((MR_Word) (&output_prof_info__output_prof_info__type_ctor_info_child_0), CycleChildList_23, &SortedCycleChildList_41);
    output__output_formatted_cycle_child_list_5_p_0(OutputStream_7, SortedCycleChildList_41, IndexMap_10);
    succeeded = (SelfCalls_19 == (MR_Integer) 0);
    if (!(succeeded))
      mercury__io__write_string_4_p_0(OutputStream_7, SelfCallsString_36);
  }
}

static void MR_CALL 
output__output_formatted_child_list_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    output__IntroducedFrom__pred__output_formatted_child_list__368__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
output__output_formatted_child_list_5_p_0(
  MR_Word OutputStream_6,
  MR_Word Children_7,
  MR_Word IndexMap_8)
{
  {
    MR_Word Var_21;
    MR_Box conv0_STATE_VARIABLE_IO_20;

    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&output_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (output__output_formatted_child_list_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (OutputStream_6));
      MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (IndexMap_8));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&output_prof_info__output_prof_info__type_ctor_info_child_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, Children_7, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_20);
  }
}

static void MR_CALL 
output__output_formatted_cycle_child_list_5_p_0(
  MR_Word OutputStream_1,
  MR_Word HeadVar__2_2,
  MR_Word IndexMap_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Child_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Childs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_String LabelName_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), Child_12, (MR_Integer) 0))));
      MR_Integer CycleNum_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Child_12, (MR_Integer) 1))));
      MR_Integer Calls_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Child_12, (MR_Integer) 4))));
      MR_String Name_22;
      MR_Integer Index_23;
      MR_String Var_39;
      MR_String Var_53;
      MR_Box conv0_Index_23;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = (CycleNum_17 == (MR_Integer) 0);
      if (succeeded)
        Name_22 = LabelName_16;
      else
      {
        MR_String CycleStr_64;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_68;

        mercury__string__int_to_string_2_p_0(CycleNum_17, &CycleStr_64);
        {
          Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (CycleStr_64));
          MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &output_scalar_common_2[1])));
        }
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) ((MR_String) "  <cycle "));
          MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_68));
        }
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (LabelName_16));
          MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_66));
        }
        mercury__string__append_list_2_p_0(Var_65, &Name_22);
      }
      mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), IndexMap_3, ((MR_Box) (LabelName_16)), &conv0_Index_23);
      Index_23 = ((MR_Integer) (conv0_Index_23));
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&output_scalar_common_1[0]), (MR_Integer) 40, Calls_20, &Var_39);
      mercury__io__write_string_4_p_0(OutputStream_1, Var_39);
      mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "             ");
      mercury__io__write_string_4_p_0(OutputStream_1, Name_22);
      mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) " [");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&output_scalar_common_1[0]), Index_23, &Var_53);
      mercury__io__write_string_4_p_0(OutputStream_1, Var_53);
      mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "]\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Childs_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
output__output_formatted_parent_list_6_p_0(
  MR_Word OutputStream_1,
  MR_Word HeadVar__2_2,
  MR_Word IndexMap_3,
  MR_Integer TotalCalls_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Parent_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Parents_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_String LabelName_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), Parent_14, (MR_Integer) 0))));
      MR_Integer CycleNum_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Parent_14, (MR_Integer) 1))));
      MR_Float Self_21 = MR_unbox_float((MR_hl_field(MR_mktag(0), Parent_14, (MR_Integer) 2)));
      MR_Float Descendant_22 = MR_unbox_float((MR_hl_field(MR_mktag(0), Parent_14, (MR_Integer) 3)));
      MR_Integer Calls_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Parent_14, (MR_Integer) 4))));
      MR_String Name_24;
      MR_Integer Index_25;
      MR_String Var_47;
      MR_String Var_60;
      MR_String Var_73;
      MR_String Var_84;
      MR_String Var_98;
      MR_Box conv0_Index_25;
      MR_Word next_value_of_HeadVar__2_2;

      Name_24 = output__construct_output_name_2_f_0(LabelName_19, CycleNum_20);
      mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), IndexMap_3, ((MR_Box) (LabelName_19)), &conv0_Index_25);
      Index_25 = ((MR_Integer) (conv0_Index_25));
      mercury__string__format__format_float_component_width_prec_6_p_0((MR_Word) (&output_scalar_common_1[0]), (MR_Integer) 20, (MR_Integer) 2, (MR_Integer) 2, Self_21, &Var_47);
      mercury__io__write_string_4_p_0(OutputStream_1, Var_47);
      mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) " ");
      mercury__string__format__format_float_component_width_prec_6_p_0((MR_Word) (&output_scalar_common_1[0]), (MR_Integer) 11, (MR_Integer) 2, (MR_Integer) 2, Descendant_22, &Var_60);
      mercury__io__write_string_4_p_0(OutputStream_1, Var_60);
      mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) " ");
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&output_scalar_common_1[0]), (MR_Integer) 7, Calls_23, &Var_73);
      mercury__io__write_string_4_p_0(OutputStream_1, Var_73);
      mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "/");
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&output_scalar_common_1[1]), (MR_Integer) 11, TotalCalls_4, &Var_84);
      mercury__io__write_string_4_p_0(OutputStream_1, Var_84);
      mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) " ");
      mercury__io__write_string_4_p_0(OutputStream_1, Name_24);
      mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) " [");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&output_scalar_common_1[0]), Index_25, &Var_98);
      mercury__io__write_string_4_p_0(OutputStream_1, Var_98);
      mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "]\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Parents_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static MR_String MR_CALL 
output__construct_output_name_2_f_0(
  MR_String Name_4,
  MR_Integer CycleNum_5)
{
  {
    MR_bool succeeded = (CycleNum_5 == (MR_Integer) 0);
    MR_String FullName_6;

    if (succeeded)
      FullName_6 = Name_4;
    else
    {
      MR_String CycleStr_7;
      MR_Word Var_8;
      MR_Word Var_9;
      MR_Word Var_11;

      mercury__string__int_to_string_2_p_0(CycleNum_5, &CycleStr_7);
      {
        Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (CycleStr_7));
        MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &output_scalar_common_2[1])));
      }
      {
        Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) ((MR_String) "  <cycle "));
        MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (Var_11));
      }
      {
        Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) (Name_4));
        MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) (Var_9));
      }
      mercury__string__append_list_2_p_0(Var_8, &FullName_6);
    }
    return FullName_6;
  }
}

static void MR_CALL 
output__output_formatted_cycle_parent_list_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    output__IntroducedFrom__pred__output_formatted_cycle_parent_list__316__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
output__output_formatted_cycle_parent_list_5_p_0(
  MR_Word OutputStream_6,
  MR_Word Parents_7,
  MR_Word IndexMap_8)
{
  {
    MR_Word Var_20;
    MR_Box conv0_STATE_VARIABLE_IO_19;

    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&output_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (output__output_formatted_cycle_parent_list_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (OutputStream_6));
      MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (IndexMap_8));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&output_prof_info__output_prof_info__type_ctor_info_parent_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_20, Parents_7, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_19);
  }
}

static void MR_CALL 
output__output_call_graph_headers_3_p_0(
  MR_Word OutputStream_4)
{
  {
    MR_Word Globals_6;
    MR_Word WhatToProfile_7;
    MR_Word Category_8;
    MR_String ShortWhat_9;
    MR_String What_10;
    MR_String LongWhat_11;
    MR_String Units_13;
    MR_String SpentIn_16;
    MR_String Var_103;
    MR_String Var_135;
    MR_String Var_151;
    MR_String Var_222;
    MR_String _ShortUnits_12;
    MR_String _MilliUnits_14;
    MR_String _MilliUnitsPerCall_15;

    globals__io_get_globals_3_p_0(&Globals_6);
    globals__get_what_to_profile_2_p_0(Globals_6, &WhatToProfile_7);
    Category_8 = output__classify_profile_1_f_0(WhatToProfile_7);
    output__units_9_p_0(Category_8, &ShortWhat_9, &What_10, &LongWhat_11, &_ShortUnits_12, &Units_13, &_MilliUnits_14, &_MilliUnitsPerCall_15, &SpentIn_16);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "call graph profile:\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "\tSorted on the %");
    mercury__io__write_string_4_p_0(OutputStream_4, ShortWhat_9);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) " field.\n\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "\tprocedure entries:\n\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "index\t\tthe index number of the procedure in the call graph\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "\t\tlisting.\n\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "%");
    mercury__io__write_string_4_p_0(OutputStream_4, ShortWhat_9);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "\t\tthe percentage of the total ");
    mercury__io__write_string_4_p_0(OutputStream_4, LongWhat_11);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) " of\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "\t\tthe program ");
    mercury__io__write_string_4_p_0(OutputStream_4, SpentIn_16);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) " this procedure and its\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "\t\tdescendents.\n\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "self\t\tthe number of ");
    mercury__io__write_string_4_p_0(OutputStream_4, Units_13);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) " actually ");
    mercury__io__write_string_4_p_0(OutputStream_4, SpentIn_16);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "\t\tthe procedure\'s own code.\n\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "descendents\tthe number of ");
    mercury__io__write_string_4_p_0(OutputStream_4, Units_13);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) " ");
    mercury__io__write_string_4_p_0(OutputStream_4, SpentIn_16);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) " the\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "\t\tdescendents of the current procedure.\n\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "called\t\tthe number of times the current procedure is\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "\t\tcalled (not counting self recursive calls).\n\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "self\t\tthe number of self recursive calls.\n\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "name\t\tthe name of the current procedure.\n\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "index\t\tan index number to locate the function easily.\n\n\n\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "\tparent listings:\n\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "self*\t\tthe number of ");
    mercury__io__write_string_4_p_0(OutputStream_4, Units_13);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) " of the current procedure\'s self\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "\t\t");
    mercury__io__write_string_4_p_0(OutputStream_4, What_10);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) " due to calls from this parent.\n\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "descendents*\tthe number of ");
    mercury__io__write_string_4_p_0(OutputStream_4, Units_13);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) " of the current procedure\'s descendent\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "\t\t");
    mercury__io__write_string_4_p_0(OutputStream_4, What_10);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) " which is due to calls from this parent.\n\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "called*\t\tthe number of times the current procedure is called\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "\t\tby this parent.\n\n");
    Var_103 = mercury__string__f_43_43_2_f_0((MR_String) "total\t\tthe number of times this procedure ", (MR_String) "is called by its parents.\n\n");
    mercury__io__write_string_4_p_0(OutputStream_4, Var_103);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "parents\t\tthe name of this parent.\n\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "index\t\tthe index number of the parent procedure\n\n\n\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "children listings:\n\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "self*\t\tthe number of ");
    mercury__io__write_string_4_p_0(OutputStream_4, Units_13);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) " of this child\'s self ");
    mercury__io__write_string_4_p_0(OutputStream_4, What_10);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) " which is\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "\t\tdue to being called by the current procedure.\n\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "descendent*\tthe number of ");
    mercury__io__write_string_4_p_0(OutputStream_4, Units_13);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) " of this child\'s descendent ");
    mercury__io__write_string_4_p_0(OutputStream_4, What_10);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) " which\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "\t\tis due to the current procedure.\n\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "called*\t\tthe number of times this child is called by the current\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "\t\tprocedure.\n\n");
    Var_135 = mercury__string__f_43_43_2_f_0((MR_String) "total*\t\tthe number of times this child ", (MR_String) "is called by all procedures.\n\n");
    mercury__io__write_string_4_p_0(OutputStream_4, Var_135);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "children\tthe name of this child.\n\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "index\t\tthe index number of the child.\n\n\n\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "                                  called/total");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "       parents\n");
    Var_151 = mercury__string__f_43_43_2_f_0((MR_String) "%", ShortWhat_9);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "index ");
    mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&output_scalar_common_1[0]), (MR_Integer) 6, Var_151, &Var_222);
    mercury__io__write_string_4_p_0(OutputStream_4, Var_222);
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "    self descendents  called+self");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "    name           index\n");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "                                  called/total");
    mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "       children\n\n");
  }
}

static void MR_CALL 
output__units_9_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2,
  MR_String * HeadVar__3_3,
  MR_String * HeadVar__4_4,
  MR_String * HeadVar__5_5,
  MR_String * HeadVar__6_6,
  MR_String * HeadVar__7_7,
  MR_String * HeadVar__8_8,
  MR_String * HeadVar__9_9)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        *HeadVar__2_2 = (MR_String) "cells";
        *HeadVar__3_3 = (MR_String) "allocations";
        *HeadVar__4_4 = (MR_String) "number of memory allocations";
        *HeadVar__5_5 = (MR_String) "k-cells";
        *HeadVar__6_6 = (MR_String) "kilocells";
        *HeadVar__7_7 = (MR_String) "cells";
        *HeadVar__8_8 = (MR_String) "cls/call";
        *HeadVar__9_9 = (MR_String) "occurring in";
      }
      break;
    case (MR_Integer) 1:
      {
        *HeadVar__2_2 = (MR_String) "mem";
        *HeadVar__3_3 = (MR_String) "memory";
        *HeadVar__4_4 = (MR_String) "allocated memory";
        *HeadVar__5_5 = (MR_String) "k-words";
        *HeadVar__6_6 = (MR_String) "kilowords";
        *HeadVar__7_7 = (MR_String) "words";
        *HeadVar__8_8 = (MR_String) "wds/call";
        *HeadVar__9_9 = (MR_String) "allocated by";
      }
      break;
    case (MR_Integer) 0:
      {
        *HeadVar__2_2 = (MR_String) "time";
        *HeadVar__3_3 = (MR_String) "time";
        *HeadVar__4_4 = (MR_String) "running time";
        *HeadVar__5_5 = (MR_String) "seconds";
        *HeadVar__6_6 = (MR_String) "seconds";
        *HeadVar__7_7 = (MR_String) "milliseconds";
        *HeadVar__8_8 = (MR_String) "ms/call";
        *HeadVar__9_9 = (MR_String) "spent executing";
      }
      break;
  }
}

static MR_Word MR_CALL 
output__classify_profile_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2 = ((&output_vector_common_3[0 + HeadVar__1_1]))->output__vector_common_type_3_0__vct_3_f_0;

    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
output____Unify____header_category_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = output____Unify____header_category_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
output____Compare____header_category_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    output____Compare____header_category_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__output__init(void)
{
}

void mercury__output__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&output__output__type_ctor_info_header_category_0);
}

void mercury__output__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__output__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module output.
