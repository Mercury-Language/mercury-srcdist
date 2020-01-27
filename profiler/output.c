/*
** Automatically generated from `output.m'
** by the Mercury compiler,
** version 20.01-rc
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


#include "generate_output.mih"
#include "globals.mih"
#include "options.mih"
#include "output_prof_info.mih"
#include "prof_info.mih"
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
#include "getopt.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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

static const MR_EnumFunctorDescPtr output__output__enum_value_ordered_header_category_0[3];

static const MR_EnumFunctorDescPtr output__output__enum_name_ordered_header_category_0[3];

static const MR_Integer output__output__functor_number_map_header_category_0[3];

static void MR_CALL 
output__IntroducedFrom__pred__output_formatted_child_list__328__1_4_p_0(
  MR_Word IndexMap_6,
  MR_Word LambdaHeadVar__1_22);

static void MR_CALL 
output__IntroducedFrom__pred__output_formatted_cycle_parent_list__280__1_4_p_0(
  MR_Word IndexMap_6,
  MR_Word LambdaHeadVar__1_20);

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
output__output_alphabet_listing_2_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
output__flat_profile_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Float CumTime0_2,
  MR_Word InfoMap_3,
  MR_Word IndexMap_4);

static void MR_CALL 
output__flat_headers_2_p_0(void);

static void MR_CALL 
output__output_call_graph_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InfoMap_2,
  MR_Word IndexMap_3);

static void MR_CALL 
output__output_formatted_prof_node_5_p_0(
  MR_Word ProfNode_6,
  MR_Integer Index_7,
  MR_Word IndexMap_8);

static void MR_CALL 
output__output_formatted_child_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
output__output_formatted_child_list_4_p_0(
  MR_Word Children_5,
  MR_Word IndexMap_6);

static void MR_CALL 
output__output_formatted_cycle_child_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word IndexMap_2);

static void MR_CALL 
output__output_formatted_parent_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word IndexMap_2,
  MR_Integer TotalCalls_3);

static MR_String MR_CALL 
output__construct_name_2_f_0(
  MR_String Name_4,
  MR_Integer CycleNum_5);

static void MR_CALL 
output__output_formatted_cycle_parent_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
output__output_formatted_cycle_parent_list_4_p_0(
  MR_Word Parents_5,
  MR_Word IndexMap_6);

static void MR_CALL 
output__call_graph_headers_2_p_0(void);

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


static /* final */ const MR_Box output_scalar_common_2[2][1];

static /* final */ const MR_Box output_scalar_common_3[2][7];

static /* final */ const MR_Box output_scalar_common_4[2][2];


/* sealed */ struct output__vector_common_type_1_0_s {
  const MR_Word output__vector_common_type_1_0__vct_1_f_0;
};

static /* final */ const struct output__vector_common_type_1_0_s output_vector_common_1[6];



static /* final */ const MR_Box output_scalar_common_2[2][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row 1 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 1U << 1))))))))
  },
};

static /* final */ const MR_Box output_scalar_common_3[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&output__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&output_prof_info__output_prof_info__type_ctor_info_parent_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&output__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&output_prof_info__output_prof_info__type_ctor_info_child_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box output_scalar_common_4[2][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ">")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "] ")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};


static /* final */ const struct output__vector_common_type_1_0_s output_vector_common_1[6] = {
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

static const MR_EnumFunctorDescPtr output__output__enum_value_ordered_header_category_0[3] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (output____Unify____header_category_0_0_10001)),
  ((MR_Box) (output____Compare____header_category_0_0_10001)),
  (MR_String) "output",
  (MR_String) "header_category",
  {     output__output__enum_name_ordered_header_category_0 },
  {     output__output__enum_value_ordered_header_category_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  output__output__functor_number_map_header_category_0
};

static void MR_CALL 
output__IntroducedFrom__pred__output_formatted_child_list__328__1_4_p_0(
  MR_Word IndexMap_6,
  MR_Word LambdaHeadVar__1_22)
{
  {
    MR_String LabelName_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_22, (MR_Integer) 0))));
    MR_Integer CycleNum_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_22, (MR_Integer) 1))));
    MR_Float Self_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_22, (MR_Integer) 2)));
    MR_Float Descendant_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_22, (MR_Integer) 3)));
    MR_Integer Calls_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_22, (MR_Integer) 4))));
    MR_Integer TotalCalls_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_22, (MR_Integer) 5))));
    MR_String Name_15;
    MR_Integer Index_16;
    MR_String Output_17;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Box conv0_Index_16;

    Name_15 = output__construct_name_2_f_0(LabelName_9, CycleNum_10);
    conv0_Index_16 = mercury__map__det_elem_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (LabelName_9)), IndexMap_6);
    Index_16 = ((MR_Integer) (conv0_Index_16));
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = MR_box_float(Self_11);
    }
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = MR_box_float(Descendant_12);
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Calls_13));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (TotalCalls_14));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_37, 0) = ((MR_Box) (Name_15));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Index_16));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_30));
    }
    Output_17 = mercury__string__format_2_f_0((MR_String) "%20.2f %11.2f %7d/%-11d %s [%d]\n", Var_28);
    mercury__io__write_string_3_p_0(Output_17);
  }
}

static void MR_CALL 
output__IntroducedFrom__pred__output_formatted_cycle_parent_list__280__1_4_p_0(
  MR_Word IndexMap_6,
  MR_Word LambdaHeadVar__1_20)
{
  {
    MR_bool succeeded;
    MR_String LabelName_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_20, (MR_Integer) 0))));
    MR_Integer CycleNum_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_20, (MR_Integer) 1))));
    MR_Integer Calls_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_20, (MR_Integer) 4))));
    MR_String Name_14;
    MR_Integer Index_15;
    MR_Word Var_26;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Box conv0_Index_15;

    succeeded = (CycleNum_10 == (MR_Integer) 0);
    if (succeeded)
      Name_14 = LabelName_9;
    else
    {
      MR_String CycleStr_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_71;

      mercury__string__int_to_string_2_p_0(CycleNum_10, &CycleStr_67);
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (CycleStr_67));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &output_scalar_common_4[0])));
      }
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) ((MR_String) "  <cycle "));
        MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_71));
      }
      {
        Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (LabelName_9));
        MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_69));
      }
      mercury__string__append_list_2_p_0(Var_68, &Name_14);
    }
    conv0_Index_15 = mercury__map__det_elem_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (LabelName_9)), IndexMap_6);
    Index_15 = ((MR_Integer) (conv0_Index_15));
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Calls_13));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_30, 0) = ((MR_Box) (Name_14));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Index_15));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
    }
    mercury__io__format_4_p_0((MR_String) "%40d             %s [%d]\n", Var_26);
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
output__output_profile_4_p_0(
  MR_Word Output_5,
  MR_Word IndexMap_6)
{
  {
    MR_Word Globals_8;
    MR_Word WhatToProfile_9;
    MR_String WhatToProfileString_10;
    MR_Word InfoMap_11;
    MR_Word CallList_12;
    MR_Word FlatList_13;
    MR_Word CallGraphOpt_14;
    MR_Word IndexList_45;

    globals__io_get_globals_3_p_0(&Globals_8);
    globals__get_what_to_profile_2_p_0(Globals_8, &WhatToProfile_9);
    globals__what_to_profile_2_p_1(&WhatToProfileString_10, WhatToProfile_9);
    mercury__io__write_string_3_p_0((MR_String) "*** profiling ");
    mercury__io__write_string_3_p_0(WhatToProfileString_10);
    mercury__io__write_string_3_p_0((MR_String) " ***\n\n");
    InfoMap_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Output_5, (MR_Integer) 0))));
    CallList_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Output_5, (MR_Integer) 1))));
    FlatList_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Output_5, (MR_Integer) 2))));
    globals__io_lookup_bool_option_4_p_0((MR_Integer) 3, &CallGraphOpt_14);
    switch (CallGraphOpt_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          output__call_graph_headers_2_p_0();
          output__output_call_graph_5_p_0(CallList_12, InfoMap_11, IndexMap_6);
        }
        break;
    }
    output__flat_headers_2_p_0();
    output__flat_profile_6_p_0(FlatList_13, (MR_Float) 0.0000000000000000, InfoMap_11, IndexMap_6);
    mercury__io__write_string_3_p_0((MR_String) "\n\n\nalphabetic listing:\n\n");
    IndexList_45 = mercury__map__to_assoc_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), IndexMap_6);
    output__output_alphabet_listing_2_3_p_0(IndexList_45);
  }
}

static void MR_CALL 
output__output_alphabet_listing_2_3_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__nl_2_p_0();
    else
    {
      MR_String Name_8;
      MR_Integer Index_9;
      MR_Word T_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_String Var_26;
      MR_String Var_36;
      MR_Word next_value_of_HeadVar__1_1;

      Name_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0))));
      Index_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1))));
      mercury__io__write_string_3_p_0((MR_String) "[");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&output_scalar_common_2[0]), Index_9, &Var_26);
      mercury__io__write_string_3_p_0(Var_26);
      mercury__io__write_string_3_p_0((MR_String) "]\t");
      mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&output_scalar_common_2[1]), (MR_Integer) 30, Name_8, &Var_36);
      mercury__io__write_string_3_p_0(Var_36);
      mercury__io__write_string_3_p_0((MR_String) "\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = T_10;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      continue;
    }
    break;
  }
}

static void MR_CALL 
output__flat_profile_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Float CumTime0_2,
  MR_Word InfoMap_3,
  MR_Word IndexMap_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String LabelName_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word LNs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ProfNode_19;
      MR_Integer Index_20;
      MR_String Name_21;
      MR_Integer CycleNum_22;
      MR_Float Percentage_24;
      MR_Float Self_25;
      MR_Float Descendant_26;
      MR_Integer TotalCalls_27;
      MR_Integer SelfCalls_28;
      MR_Float FloatTotalCalls_42;
      MR_Integer Calls_43;
      MR_Float CumTime_44;
      MR_Float SelfSeconds_45;
      MR_Float DescSeconds_46;
      MR_Float SelfMs_47;
      MR_Float DescMs_48;
      MR_String FullName_49;
      MR_String IndexStr0_50;
      MR_String IndexStr_51;
      MR_Float Var_55;
      MR_Float Var_56;
      MR_Word Var_59;
      MR_Word Var_61;
      MR_String Var_89;
      MR_String Var_102;
      MR_String Var_115;
      MR_String Var_128;
      MR_String Var_139;
      MR_String Var_152;
      MR_Box conv0_ProfNode_19;
      MR_Box conv1_Index_20;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Float next_value_of_CumTime0_2;

      mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&output_prof_info__output_prof_info__type_ctor_info_output_prof_0), InfoMap_3, ((MR_Box) (LabelName_13)), &conv0_ProfNode_19);
      ProfNode_19 = ((MR_Word) (conv0_ProfNode_19));
      mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), IndexMap_4, ((MR_Box) (LabelName_13)), &conv1_Index_20);
      Index_20 = ((MR_Integer) (conv1_Index_20));
      if (((MR_tag((MR_Word) ProfNode_19)) == (MR_Integer) 1))
        {
          mercury__require__error_1_p_0((MR_String) "output_flat_profile: Cannot have output_cycle_prof\n");
          return;
        }
      else
      {
        Name_21 = ((MR_String) ((MR_hl_field(MR_mktag(0), ProfNode_19, (MR_Integer) 0))));
        CycleNum_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProfNode_19, (MR_Integer) 1))));
        Percentage_24 = MR_unbox_float((MR_hl_field(MR_mktag(0), ProfNode_19, (MR_Integer) 3)));
        Self_25 = MR_unbox_float((MR_hl_field(MR_mktag(0), ProfNode_19, (MR_Integer) 4)));
        Descendant_26 = MR_unbox_float((MR_hl_field(MR_mktag(0), ProfNode_19, (MR_Integer) 5)));
        TotalCalls_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProfNode_19, (MR_Integer) 6))));
        SelfCalls_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProfNode_19, (MR_Integer) 7))));
      }
      Var_55 = mercury__float__float_1_f_0(TotalCalls_27);
      Var_56 = mercury__float__float_1_f_0(SelfCalls_28);
      FloatTotalCalls_42 = (Var_55 + Var_56);
      Calls_43 = (MR_Integer) ((MR_Unsigned) SelfCalls_28 + (MR_Unsigned) TotalCalls_27);
      CumTime_44 = (CumTime0_2 + Self_25);
      SelfSeconds_45 = generate_output__checked_float_divide_2_f_0(Self_25, FloatTotalCalls_42);
      DescSeconds_46 = generate_output__checked_float_divide_2_f_0(Descendant_26, FloatTotalCalls_42);
      SelfMs_47 = (((MR_Float) 1000.0000000000000) * SelfSeconds_45);
      DescMs_48 = (((MR_Float) 1000.0000000000000) * DescSeconds_46);
      FullName_49 = output__construct_name_2_f_0(Name_21, CycleNum_22);
      mercury__string__int_to_string_2_p_0(Index_20, &IndexStr0_50);
      {
        Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (IndexStr0_50));
        MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &output_scalar_common_4[1])));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) ((MR_String) "["));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_61));
      }
      mercury__string__append_list_2_p_0(Var_59, &IndexStr_51);
      mercury__string__format__format_float_component_width_prec_6_p_0((MR_Word) (&output_scalar_common_2[0]), (MR_Integer) 5, (MR_Integer) 1, (MR_Integer) 2, Percentage_24, &Var_89);
      mercury__io__write_string_3_p_0(Var_89);
      mercury__io__write_string_3_p_0((MR_String) " ");
      mercury__string__format__format_float_component_width_prec_6_p_0((MR_Word) (&output_scalar_common_2[0]), (MR_Integer) 10, (MR_Integer) 2, (MR_Integer) 2, CumTime_44, &Var_102);
      mercury__io__write_string_3_p_0(Var_102);
      mercury__io__write_string_3_p_0((MR_String) " ");
      mercury__string__format__format_float_component_width_prec_6_p_0((MR_Word) (&output_scalar_common_2[0]), (MR_Integer) 8, (MR_Integer) 2, (MR_Integer) 2, Self_25, &Var_115);
      mercury__io__write_string_3_p_0(Var_115);
      mercury__io__write_string_3_p_0((MR_String) " ");
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&output_scalar_common_2[0]), (MR_Integer) 8, Calls_43, &Var_128);
      mercury__io__write_string_3_p_0(Var_128);
      mercury__io__write_string_3_p_0((MR_String) " ");
      mercury__string__format__format_float_component_width_prec_6_p_0((MR_Word) (&output_scalar_common_2[0]), (MR_Integer) 8, (MR_Integer) 2, (MR_Integer) 2, SelfMs_47, &Var_139);
      mercury__io__write_string_3_p_0(Var_139);
      mercury__io__write_string_3_p_0((MR_String) " ");
      mercury__string__format__format_float_component_width_prec_6_p_0((MR_Word) (&output_scalar_common_2[0]), (MR_Integer) 8, (MR_Integer) 2, (MR_Integer) 2, DescMs_48, &Var_152);
      mercury__io__write_string_3_p_0(Var_152);
      mercury__io__write_string_3_p_0((MR_String) " ");
      mercury__io__write_string_3_p_0(FullName_49);
      mercury__io__write_string_3_p_0((MR_String) " ");
      mercury__io__write_string_3_p_0(IndexStr_51);
      mercury__io__write_string_3_p_0((MR_String) "\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = LNs_14;
      next_value_of_CumTime0_2 = CumTime_44;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      CumTime0_2 = next_value_of_CumTime0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
output__flat_headers_2_p_0(void)
{
  {
    MR_Word Globals_4;
    MR_Word WhatToProfile_5;
    MR_Word Category_6;
    MR_String ShortWhat_7;
    MR_String LongWhat_9;
    MR_String ShortUnits_10;
    MR_String Units_11;
    MR_String MilliUnits_12;
    MR_String MilliUnitsPerCall_13;
    MR_String SpentIn_14;
    MR_String Var_138;
    MR_String Var_149;
    MR_String Var_160;
    MR_String Var_171;
    MR_String Var_182;
    MR_String _What_8;

    globals__io_get_globals_3_p_0(&Globals_4);
    globals__get_what_to_profile_2_p_0(Globals_4, &WhatToProfile_5);
    Category_6 = output__classify_profile_1_f_0(WhatToProfile_5);
    output__units_9_p_0(Category_6, &ShortWhat_7, &_What_8, &LongWhat_9, &ShortUnits_10, &Units_11, &MilliUnits_12, &MilliUnitsPerCall_13, &SpentIn_14);
    mercury__io__write_string_3_p_0((MR_String) "\nflat profile:\n\n");
    mercury__io__write_string_3_p_0((MR_String) "%\t\tthe percentage of total ");
    mercury__io__write_string_3_p_0(LongWhat_9);
    mercury__io__write_string_3_p_0((MR_String) " of the program\n");
    mercury__io__write_string_3_p_0(ShortWhat_7);
    mercury__io__write_string_3_p_0((MR_String) "\t\tused by this procedure.\n\n");
    mercury__io__write_string_3_p_0((MR_String) "cumulative\tthe total number of ");
    mercury__io__write_string_3_p_0(Units_11);
    mercury__io__write_string_3_p_0((MR_String) " for the current procedure and\n");
    mercury__io__write_string_3_p_0(ShortUnits_10);
    mercury__io__write_string_3_p_0((MR_String) "\t\tthe ones listed above it.\n\n");
    mercury__io__write_string_3_p_0((MR_String) "self\t\tthe number of ");
    mercury__io__write_string_3_p_0(Units_11);
    mercury__io__write_string_3_p_0((MR_String) " accounted for by this procedure alone.\n");
    mercury__io__write_string_3_p_0(ShortUnits_10);
    mercury__io__write_string_3_p_0((MR_String) "\t\tThe listing is sorted on this row.\n\n");
    mercury__io__write_string_3_p_0((MR_String) "calls\t\tthe number of times this procedure was called.\n\n");
    mercury__io__write_string_3_p_0((MR_String) "self\t\tthe average number of ");
    mercury__io__write_string_3_p_0(MilliUnits_12);
    mercury__io__write_string_3_p_0((MR_String) " ");
    mercury__io__write_string_3_p_0(SpentIn_14);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    mercury__io__write_string_3_p_0(MilliUnitsPerCall_13);
    mercury__io__write_string_3_p_0((MR_String) "  \tthis procedure per call.\n\n");
    mercury__io__write_string_3_p_0((MR_String) "total\t\tthe average number of ");
    mercury__io__write_string_3_p_0(MilliUnits_12);
    mercury__io__write_string_3_p_0((MR_String) " ");
    mercury__io__write_string_3_p_0(SpentIn_14);
    mercury__io__write_string_3_p_0((MR_String) " this procedure and its\n");
    mercury__io__write_string_3_p_0(MilliUnitsPerCall_13);
    mercury__io__write_string_3_p_0((MR_String) "  \tdescendents per call.\n\n");
    mercury__io__write_string_3_p_0((MR_String) "name\t\tthe name of the procedure followed by its index number.\n\n");
    mercury__io__write_string_3_p_0((MR_String) "   %  cumulative    self              self");
    mercury__io__write_string_3_p_0((MR_String) "    total\n");
    mercury__io__write_string_3_p_0((MR_String) " ");
    mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&output_scalar_common_2[0]), (MR_Integer) 4, ShortWhat_7, &Var_138);
    mercury__io__write_string_3_p_0(Var_138);
    mercury__io__write_string_3_p_0((MR_String) "    ");
    mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&output_scalar_common_2[0]), (MR_Integer) 7, ShortUnits_10, &Var_149);
    mercury__io__write_string_3_p_0(Var_149);
    mercury__io__write_string_3_p_0((MR_String) "  ");
    mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&output_scalar_common_2[0]), (MR_Integer) 7, ShortUnits_10, &Var_160);
    mercury__io__write_string_3_p_0(Var_160);
    mercury__io__write_string_3_p_0((MR_String) "    calls ");
    mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&output_scalar_common_2[0]), (MR_Integer) 8, MilliUnitsPerCall_13, &Var_171);
    mercury__io__write_string_3_p_0(Var_171);
    mercury__io__write_string_3_p_0((MR_String) " ");
    mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&output_scalar_common_2[0]), (MR_Integer) 8, MilliUnitsPerCall_13, &Var_182);
    mercury__io__write_string_3_p_0(Var_182);
    mercury__io__write_string_3_p_0((MR_String) " name\n");
  }
}

static void MR_CALL 
output__output_call_graph_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InfoMap_2,
  MR_Word IndexMap_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String LabelName_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word LNs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word PN_16;
      MR_Integer Index_17;
      MR_Box conv0_PN_16;
      MR_Box conv1_Index_17;
      MR_Word next_value_of_HeadVar__1_1;

      mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&output_prof_info__output_prof_info__type_ctor_info_output_prof_0), InfoMap_2, ((MR_Box) (LabelName_11)), &conv0_PN_16);
      PN_16 = ((MR_Word) (conv0_PN_16));
      mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), IndexMap_3, ((MR_Box) (LabelName_11)), &conv1_Index_17);
      Index_17 = ((MR_Integer) (conv1_Index_17));
      output__output_formatted_prof_node_5_p_0(PN_16, Index_17, IndexMap_3);
      mercury__io__write_string_3_p_0((MR_String) "\n-----------------------------------------------\n\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = LNs_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      continue;
    }
    break;
  }
}

static void MR_CALL 
output__output_formatted_prof_node_5_p_0(
  MR_Word ProfNode_6,
  MR_Integer Index_7,
  MR_Word IndexMap_8)
{
  {
    MR_bool succeeded;
    MR_String Name_10;
    MR_Integer CycleNum_11;
    MR_Float Percentage_12;
    MR_Float Self_14;
    MR_Float Descendant_15;
    MR_Integer TotalCalls_16;
    MR_Integer SelfCalls_17;
    MR_Word ParentList_18;
    MR_Word ChildList_19;
    MR_Word CycleParentList_20;
    MR_Word CycleChildList_21;
    MR_String FullName_31;
    MR_String IndexStr0_32;
    MR_String IndexStr_33;
    MR_String SelfCallsString_34;
    MR_String InitMiddleStr_35;
    MR_Word SortedChildList_38;
    MR_Word SortedCycleChildList_39;
    MR_Word Var_43;
    MR_Word Var_45;
    MR_String Var_86;
    MR_String Var_88;
    MR_String Var_90;
    MR_String Var_98;
    MR_String Var_105;
    MR_String Var_107;
    MR_String Var_108;
    MR_String Var_110;
    MR_String Var_111;
    MR_String Var_119;
    MR_String Var_128;
    MR_String Var_129;
    MR_String Var_139;
    MR_String Var_141;
    MR_String Var_142;
    MR_String Var_152;
    MR_String Var_154;
    MR_String Var_155;
    MR_String Var_165;
    MR_String Var_167;
    MR_String Var_168;

    if (((MR_tag((MR_Word) ProfNode_6)) == (MR_Integer) 1))
      {
        mercury__require__error_1_p_0((MR_String) "output_formatted_prof_node: Cannot have output_cycle_prof\n");
        return;
      }
    else
    {
      Name_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), ProfNode_6, (MR_Integer) 0))));
      CycleNum_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProfNode_6, (MR_Integer) 1))));
      Percentage_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), ProfNode_6, (MR_Integer) 2)));
      Self_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), ProfNode_6, (MR_Integer) 4)));
      Descendant_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), ProfNode_6, (MR_Integer) 5)));
      TotalCalls_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProfNode_6, (MR_Integer) 6))));
      SelfCalls_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProfNode_6, (MR_Integer) 7))));
      ParentList_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProfNode_6, (MR_Integer) 8))));
      ChildList_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProfNode_6, (MR_Integer) 9))));
      CycleParentList_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProfNode_6, (MR_Integer) 10))));
      CycleChildList_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProfNode_6, (MR_Integer) 11))));
    }
    FullName_31 = output__construct_name_2_f_0(Name_10, CycleNum_11);
    mercury__string__int_to_string_2_p_0(Index_7, &IndexStr0_32);
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (IndexStr0_32));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &output_scalar_common_4[1])));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) ((MR_String) "["));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_45));
    }
    mercury__string__append_list_2_p_0(Var_43, &IndexStr_33);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&output_scalar_common_2[0]), Index_7, &Var_98);
    Var_105 = mercury__string__f_43_43_2_f_0(Var_98, (MR_String) "]\n");
    Var_107 = mercury__string__f_43_43_2_f_0((MR_String) " [", Var_105);
    Var_108 = mercury__string__f_43_43_2_f_0(FullName_31, Var_107);
    Var_110 = mercury__string__f_43_43_2_f_0((MR_String) "             ", Var_108);
    mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&output_scalar_common_2[0]), (MR_Integer) 40, SelfCalls_17, &Var_111);
    SelfCallsString_34 = mercury__string__f_43_43_2_f_0(Var_111, Var_110);
    mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&output_scalar_common_2[0]), (MR_Integer) 7, TotalCalls_16, &Var_119);
    Var_128 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_119);
    mercury__string__format__format_float_component_width_prec_6_p_0((MR_Word) (&output_scalar_common_2[0]), (MR_Integer) 11, (MR_Integer) 2, (MR_Integer) 2, Descendant_15, &Var_129);
    Var_139 = mercury__string__f_43_43_2_f_0(Var_129, Var_128);
    Var_141 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_139);
    mercury__string__format__format_float_component_width_prec_6_p_0((MR_Word) (&output_scalar_common_2[0]), (MR_Integer) 7, (MR_Integer) 2, (MR_Integer) 2, Self_14, &Var_142);
    Var_152 = mercury__string__f_43_43_2_f_0(Var_142, Var_141);
    Var_154 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_152);
    mercury__string__format__format_float_component_width_prec_6_p_0((MR_Word) (&output_scalar_common_2[0]), (MR_Integer) 5, (MR_Integer) 1, (MR_Integer) 2, Percentage_12, &Var_155);
    Var_165 = mercury__string__f_43_43_2_f_0(Var_155, Var_154);
    Var_167 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_165);
    mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&output_scalar_common_2[1]), (MR_Integer) 6, IndexStr_33, &Var_168);
    InitMiddleStr_35 = mercury__string__f_43_43_2_f_0(Var_168, Var_167);
    succeeded = (SelfCalls_17 == (MR_Integer) 0);
    if (!(succeeded))
      mercury__io__write_string_3_p_0(SelfCallsString_34);
    succeeded = (CycleParentList_20 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (ParentList_18 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MR_String Var_176;

      mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&output_scalar_common_2[0]), (MR_Integer) 67, (MR_String) "<spontaneous>\n", &Var_176);
      mercury__io__write_string_3_p_0(Var_176);
    }
    else
    {
      MR_Word SortedCycleParentList_36;
      MR_Word SortedParentList_37;

      mercury__list__sort_2_p_0((MR_Word) (&output_prof_info__output_prof_info__type_ctor_info_parent_0), CycleParentList_20, &SortedCycleParentList_36);
      output__output_formatted_cycle_parent_list_4_p_0(SortedCycleParentList_36, IndexMap_8);
      mercury__list__sort_2_p_0((MR_Word) (&output_prof_info__output_prof_info__type_ctor_info_parent_0), ParentList_18, &SortedParentList_37);
      output__output_formatted_parent_list_5_p_0(SortedParentList_37, IndexMap_8, TotalCalls_16);
    }
    mercury__io__write_string_3_p_0(InitMiddleStr_35);
    succeeded = (SelfCalls_17 == (MR_Integer) 0);
    if (succeeded)
      mercury__io__write_string_3_p_0((MR_String) "         ");
    else
    {
      MR_String Var_186;

      mercury__io__write_string_3_p_0((MR_String) "+");
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&output_scalar_common_2[1]), (MR_Integer) 7, SelfCalls_17, &Var_186);
      mercury__io__write_string_3_p_0(Var_186);
    }
    Var_90 = mercury__string__f_43_43_2_f_0(IndexStr_33, (MR_String) "\n");
    Var_88 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_90);
    Var_86 = mercury__string__f_43_43_2_f_0(FullName_31, Var_88);
    mercury__io__write_string_3_p_0(Var_86);
    mercury__list__sort_2_p_0((MR_Word) (&output_prof_info__output_prof_info__type_ctor_info_child_0), ChildList_19, &SortedChildList_38);
    output__output_formatted_child_list_4_p_0(SortedChildList_38, IndexMap_8);
    mercury__list__sort_2_p_0((MR_Word) (&output_prof_info__output_prof_info__type_ctor_info_child_0), CycleChildList_21, &SortedCycleChildList_39);
    output__output_formatted_cycle_child_list_4_p_0(SortedCycleChildList_39, IndexMap_8);
    succeeded = (SelfCalls_17 == (MR_Integer) 0);
    if (!(succeeded))
      mercury__io__write_string_3_p_0(SelfCallsString_34);
  }
}

static void MR_CALL 
output__output_formatted_child_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    output__IntroducedFrom__pred__output_formatted_child_list__328__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
output__output_formatted_child_list_4_p_0(
  MR_Word Children_5,
  MR_Word IndexMap_6)
{
  {
    MR_Word Var_20;
    MR_Box conv0_STATE_VARIABLE_IO_19;

    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&output_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (output__output_formatted_child_list_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (IndexMap_6));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&output_prof_info__output_prof_info__type_ctor_info_child_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_20, Children_5, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_19);
  }
}

static void MR_CALL 
output__output_formatted_cycle_child_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word IndexMap_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Child_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Childs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String LabelName_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), Child_9, (MR_Integer) 0))));
      MR_Integer CycleNum_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Child_9, (MR_Integer) 1))));
      MR_Integer Calls_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Child_9, (MR_Integer) 4))));
      MR_String Name_19;
      MR_Integer Index_20;
      MR_String Var_36;
      MR_String Var_50;
      MR_Box conv0_Index_20;
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = (CycleNum_14 == (MR_Integer) 0);
      if (succeeded)
        Name_19 = LabelName_13;
      else
      {
        MR_String CycleStr_61;
        MR_Word Var_62;
        MR_Word Var_63;
        MR_Word Var_65;

        mercury__string__int_to_string_2_p_0(CycleNum_14, &CycleStr_61);
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (CycleStr_61));
          MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &output_scalar_common_4[0])));
        }
        {
          Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) ((MR_String) "  <cycle "));
          MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_65));
        }
        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (LabelName_13));
          MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_63));
        }
        mercury__string__append_list_2_p_0(Var_62, &Name_19);
      }
      conv0_Index_20 = mercury__map__det_elem_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (LabelName_13)), IndexMap_2);
      Index_20 = ((MR_Integer) (conv0_Index_20));
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&output_scalar_common_2[0]), (MR_Integer) 40, Calls_17, &Var_36);
      mercury__io__write_string_3_p_0(Var_36);
      mercury__io__write_string_3_p_0((MR_String) "             ");
      mercury__io__write_string_3_p_0(Name_19);
      mercury__io__write_string_3_p_0((MR_String) " [");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&output_scalar_common_2[0]), Index_20, &Var_50);
      mercury__io__write_string_3_p_0(Var_50);
      mercury__io__write_string_3_p_0((MR_String) "]\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Childs_10;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      continue;
    }
    break;
  }
}

static void MR_CALL 
output__output_formatted_parent_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word IndexMap_2,
  MR_Integer TotalCalls_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Parent_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Parents_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String LabelName_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), Parent_11, (MR_Integer) 0))));
      MR_Integer CycleNum_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Parent_11, (MR_Integer) 1))));
      MR_Float Self_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), Parent_11, (MR_Integer) 2)));
      MR_Float Descendant_19 = MR_unbox_float((MR_hl_field(MR_mktag(0), Parent_11, (MR_Integer) 3)));
      MR_Integer Calls_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Parent_11, (MR_Integer) 4))));
      MR_String Name_21;
      MR_Integer Index_22;
      MR_String Var_44;
      MR_String Var_57;
      MR_String Var_70;
      MR_String Var_81;
      MR_String Var_95;
      MR_Box conv0_Index_22;
      MR_Word next_value_of_HeadVar__1_1;

      Name_21 = output__construct_name_2_f_0(LabelName_16, CycleNum_17);
      conv0_Index_22 = mercury__map__det_elem_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (LabelName_16)), IndexMap_2);
      Index_22 = ((MR_Integer) (conv0_Index_22));
      mercury__string__format__format_float_component_width_prec_6_p_0((MR_Word) (&output_scalar_common_2[0]), (MR_Integer) 20, (MR_Integer) 2, (MR_Integer) 2, Self_18, &Var_44);
      mercury__io__write_string_3_p_0(Var_44);
      mercury__io__write_string_3_p_0((MR_String) " ");
      mercury__string__format__format_float_component_width_prec_6_p_0((MR_Word) (&output_scalar_common_2[0]), (MR_Integer) 11, (MR_Integer) 2, (MR_Integer) 2, Descendant_19, &Var_57);
      mercury__io__write_string_3_p_0(Var_57);
      mercury__io__write_string_3_p_0((MR_String) " ");
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&output_scalar_common_2[0]), (MR_Integer) 7, Calls_20, &Var_70);
      mercury__io__write_string_3_p_0(Var_70);
      mercury__io__write_string_3_p_0((MR_String) "/");
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&output_scalar_common_2[1]), (MR_Integer) 11, TotalCalls_3, &Var_81);
      mercury__io__write_string_3_p_0(Var_81);
      mercury__io__write_string_3_p_0((MR_String) " ");
      mercury__io__write_string_3_p_0(Name_21);
      mercury__io__write_string_3_p_0((MR_String) " [");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&output_scalar_common_2[0]), Index_22, &Var_95);
      mercury__io__write_string_3_p_0(Var_95);
      mercury__io__write_string_3_p_0((MR_String) "]\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Parents_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      continue;
    }
    break;
  }
}

static MR_String MR_CALL 
output__construct_name_2_f_0(
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
        MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &output_scalar_common_4[0])));
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
output__output_formatted_cycle_parent_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    output__IntroducedFrom__pred__output_formatted_cycle_parent_list__280__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
output__output_formatted_cycle_parent_list_4_p_0(
  MR_Word Parents_5,
  MR_Word IndexMap_6)
{
  {
    MR_Word Var_18;
    MR_Box conv0_STATE_VARIABLE_IO_17;

    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&output_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (output__output_formatted_cycle_parent_list_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (IndexMap_6));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&output_prof_info__output_prof_info__type_ctor_info_parent_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_18, Parents_5, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_17);
  }
}

static void MR_CALL 
output__call_graph_headers_2_p_0(void)
{
  {
    MR_Word Globals_4;
    MR_Word WhatToProfile_5;
    MR_Word Category_6;
    MR_String ShortWhat_7;
    MR_String What_8;
    MR_String LongWhat_9;
    MR_String Units_11;
    MR_String SpentIn_14;
    MR_String Var_149;
    MR_String Var_220;
    MR_String _ShortUnits_10;
    MR_String _MilliUnits_12;
    MR_String _MilliUnitsPerCall_13;

    globals__io_get_globals_3_p_0(&Globals_4);
    globals__get_what_to_profile_2_p_0(Globals_4, &WhatToProfile_5);
    Category_6 = output__classify_profile_1_f_0(WhatToProfile_5);
    output__units_9_p_0(Category_6, &ShortWhat_7, &What_8, &LongWhat_9, &_ShortUnits_10, &Units_11, &_MilliUnits_12, &_MilliUnitsPerCall_13, &SpentIn_14);
    mercury__io__write_string_3_p_0((MR_String) "call graph profile:\n");
    mercury__io__write_string_3_p_0((MR_String) "\tSorted on the %");
    mercury__io__write_string_3_p_0(ShortWhat_7);
    mercury__io__write_string_3_p_0((MR_String) " field.\n\n");
    mercury__io__write_string_3_p_0((MR_String) "\tprocedure entries:\n\n");
    mercury__io__write_string_3_p_0((MR_String) "index\t\tthe index number of the procedure in the call graph\n");
    mercury__io__write_string_3_p_0((MR_String) "\t\tlisting.\n\n");
    mercury__io__write_string_3_p_0((MR_String) "%");
    mercury__io__write_string_3_p_0(ShortWhat_7);
    mercury__io__write_string_3_p_0((MR_String) "\t\tthe percentage of the total ");
    mercury__io__write_string_3_p_0(LongWhat_9);
    mercury__io__write_string_3_p_0((MR_String) " of\n");
    mercury__io__write_string_3_p_0((MR_String) "\t\tthe program ");
    mercury__io__write_string_3_p_0(SpentIn_14);
    mercury__io__write_string_3_p_0((MR_String) " this procedure and its\n");
    mercury__io__write_string_3_p_0((MR_String) "\t\tdescendents.\n\n");
    mercury__io__write_string_3_p_0((MR_String) "self\t\tthe number of ");
    mercury__io__write_string_3_p_0(Units_11);
    mercury__io__write_string_3_p_0((MR_String) " actually ");
    mercury__io__write_string_3_p_0(SpentIn_14);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    mercury__io__write_string_3_p_0((MR_String) "\t\tthe procedure\'s own code.\n\n");
    mercury__io__write_string_3_p_0((MR_String) "descendents\tthe number of ");
    mercury__io__write_string_3_p_0(Units_11);
    mercury__io__write_string_3_p_0((MR_String) " ");
    mercury__io__write_string_3_p_0(SpentIn_14);
    mercury__io__write_string_3_p_0((MR_String) " the\n");
    mercury__io__write_string_3_p_0((MR_String) "\t\tdescendents of the current procedure.\n\n");
    mercury__io__write_string_3_p_0((MR_String) "called\t\tthe number of times the current procedure is\n");
    mercury__io__write_string_3_p_0((MR_String) "\t\tcalled (not counting self recursive calls).\n\n");
    mercury__io__write_string_3_p_0((MR_String) "self\t\tthe number of self recursive calls.\n\n");
    mercury__io__write_string_3_p_0((MR_String) "name\t\tthe name of the current procedure.\n\n");
    mercury__io__write_string_3_p_0((MR_String) "index\t\tan index number to locate the function easily.\n\n\n\n");
    mercury__io__write_string_3_p_0((MR_String) "\tparent listings:\n\n");
    mercury__io__write_string_3_p_0((MR_String) "self*\t\tthe number of ");
    mercury__io__write_string_3_p_0(Units_11);
    mercury__io__write_string_3_p_0((MR_String) " of the current procedure\'s self\n");
    mercury__io__write_string_3_p_0((MR_String) "\t\t");
    mercury__io__write_string_3_p_0(What_8);
    mercury__io__write_string_3_p_0((MR_String) " due to calls from this parent.\n\n");
    mercury__io__write_string_3_p_0((MR_String) "descendents*\tthe number of ");
    mercury__io__write_string_3_p_0(Units_11);
    mercury__io__write_string_3_p_0((MR_String) " of the current procedure\'s descendent\n");
    mercury__io__write_string_3_p_0((MR_String) "\t\t");
    mercury__io__write_string_3_p_0(What_8);
    mercury__io__write_string_3_p_0((MR_String) " which is due to calls from this parent.\n\n");
    mercury__io__write_string_3_p_0((MR_String) "called*\t\tthe number of times the current procedure is called\n");
    mercury__io__write_string_3_p_0((MR_String) "\t\tby this parent.\n\n");
    mercury__io__write_string_3_p_0((MR_String) "total\t\tthe number of times this procedure is called by its parents.\n\n");
    mercury__io__write_string_3_p_0((MR_String) "parents\t\tthe name of this parent.\n\n");
    mercury__io__write_string_3_p_0((MR_String) "index\t\tthe index number of the parent procedure\n\n\n\n");
    mercury__io__write_string_3_p_0((MR_String) "children listings:\n\n");
    mercury__io__write_string_3_p_0((MR_String) "self*\t\tthe number of ");
    mercury__io__write_string_3_p_0(Units_11);
    mercury__io__write_string_3_p_0((MR_String) " of this child\'s self ");
    mercury__io__write_string_3_p_0(What_8);
    mercury__io__write_string_3_p_0((MR_String) " which is\n");
    mercury__io__write_string_3_p_0((MR_String) "\t\tdue to being called by the current procedure.\n\n");
    mercury__io__write_string_3_p_0((MR_String) "descendent*\tthe number of ");
    mercury__io__write_string_3_p_0(Units_11);
    mercury__io__write_string_3_p_0((MR_String) " of this child\'s descendent ");
    mercury__io__write_string_3_p_0(What_8);
    mercury__io__write_string_3_p_0((MR_String) " which\n");
    mercury__io__write_string_3_p_0((MR_String) "\t\tis due to the current procedure.\n\n");
    mercury__io__write_string_3_p_0((MR_String) "called*\t\tthe number of times this child is called by the current\n");
    mercury__io__write_string_3_p_0((MR_String) "\t\tprocedure.\n\n");
    mercury__io__write_string_3_p_0((MR_String) "total*\t\tthe number of times this child is called by all procedures.\n\n");
    mercury__io__write_string_3_p_0((MR_String) "children\tthe name of this child.\n\n");
    mercury__io__write_string_3_p_0((MR_String) "index\t\tthe index number of the child.\n\n\n\n");
    mercury__io__write_string_3_p_0((MR_String) "                                  called/total");
    mercury__io__write_string_3_p_0((MR_String) "       parents\n");
    Var_149 = mercury__string__f_43_43_2_f_0((MR_String) "%", ShortWhat_7);
    mercury__io__write_string_3_p_0((MR_String) "index ");
    mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&output_scalar_common_2[0]), (MR_Integer) 6, Var_149, &Var_220);
    mercury__io__write_string_3_p_0(Var_220);
    mercury__io__write_string_3_p_0((MR_String) "    self descendents  called+self");
    mercury__io__write_string_3_p_0((MR_String) "    name           index\n");
    mercury__io__write_string_3_p_0((MR_String) "                                  called/total");
    mercury__io__write_string_3_p_0((MR_String) "       children\n\n");
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
    MR_Word HeadVar__2_2 = ((&output_vector_common_1[0 + HeadVar__1_1]))->output__vector_common_type_1_0__vct_1_f_0;

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
