/*
** Automatically generated from `output.m'
** by the Mercury compiler,
** version rotd-2017-06-12
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


/* :- module output. */
/* :- implementation. */

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
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 output__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0;

static const MR_EnumFunctorDesc output__output__enum_functor_desc_header_category_0_0;

static const MR_EnumFunctorDesc output__output__enum_functor_desc_header_category_0_1;

static const MR_EnumFunctorDesc output__output__enum_functor_desc_header_category_0_2;

static const MR_EnumFunctorDescPtr output__output__enum_value_ordered_header_category_0[3];

static const MR_EnumFunctorDescPtr output__output__enum_name_ordered_header_category_0[3];

static const MR_Integer output__output__functor_number_map_header_category_0[3];

static MR_bool MR_CALL 
output____Unify____header_category_0_0_10001(
  MR_Box output__wrapper_arg_1,
  MR_Box output__wrapper_arg_2);

static void MR_CALL 
output____Compare____header_category_0_0_10001(
  MR_Box * output__wrapper_arg_1,
  MR_Box output__wrapper_arg_2,
  MR_Box output__wrapper_arg_3);

static void MR_CALL 
output__IntroducedFrom__pred__output_formatted_child_list__328__1_4_p_0(
  MR_Word output__IndexMap_6,
  MR_Word output__LambdaHeadVar__1_22);

static void MR_CALL 
output__IntroducedFrom__pred__output_formatted_cycle_parent_list__280__1_4_p_0(
  MR_Word output__IndexMap_6,
  MR_Word output__LambdaHeadVar__1_20);

static void MR_CALL 
output____Compare____header_category_0_0(
  MR_Word * output__HeadVar__1_1,
  MR_Word output__HeadVar__2_2,
  MR_Word output__HeadVar__3_3);

static MR_bool MR_CALL 
output____Unify____header_category_0_0(
  MR_Word output__HeadVar__2_1,
  MR_Word output__HeadVar__2_2);

static MR_String MR_CALL 
output__construct_name_2_f_0(
  MR_String output__Name_4,
  MR_Integer output__CycleNum_5);

static void MR_CALL 
output__output_alphabet_listing_2_3_p_0(
  MR_Word output__HeadVar__1_1);

static void MR_CALL 
output__flat_profile_6_p_0(
  MR_Word output__HeadVar__1_1,
  MR_Float output__CumTime0_2,
  MR_Word output__InfoMap_3,
  MR_Word output__IndexMap_4);

static void MR_CALL 
output__flat_headers_2_p_0(void);

static void MR_CALL 
output__output_formatted_child_list_4_p_0_1(
  MR_Box output__closure_arg,
  MR_Box output__wrapper_arg_1,
  MR_Box output__wrapper_arg_2,
  MR_Box * output__wrapper_arg_3);

static void MR_CALL 
output__output_formatted_child_list_4_p_0(
  MR_Word output__Children_5,
  MR_Word output__IndexMap_6);

static void MR_CALL 
output__output_formatted_cycle_child_list_4_p_0(
  MR_Word output__HeadVar__1_1,
  MR_Word output__IndexMap_2);

static void MR_CALL 
output__output_formatted_parent_list_5_p_0(
  MR_Word output__HeadVar__1_1,
  MR_Word output__IndexMap_2,
  MR_Integer output__TotalCalls_3);

static void MR_CALL 
output__output_formatted_cycle_parent_list_4_p_0_1(
  MR_Box output__closure_arg,
  MR_Box output__wrapper_arg_1,
  MR_Box output__wrapper_arg_2,
  MR_Box * output__wrapper_arg_3);

static void MR_CALL 
output__output_formatted_cycle_parent_list_4_p_0(
  MR_Word output__Parents_5,
  MR_Word output__IndexMap_6);

static void MR_CALL 
output__output_formatted_prof_node_5_p_0(
  MR_Word output__ProfNode_6,
  MR_Integer output__Index_7,
  MR_Word output__IndexMap_8);

static void MR_CALL 
output__output_call_graph_5_p_0(
  MR_Word output__HeadVar__1_1,
  MR_Word output__InfoMap_2,
  MR_Word output__IndexMap_3);

static void MR_CALL 
output__call_graph_headers_2_p_0(void);

static void MR_CALL 
output__units_9_p_0(
  MR_Word output__HeadVar__1_1,
  MR_String * output__HeadVar__2_2,
  MR_String * output__HeadVar__3_3,
  MR_String * output__HeadVar__4_4,
  MR_String * output__HeadVar__5_5,
  MR_String * output__HeadVar__6_6,
  MR_String * output__HeadVar__7_7,
  MR_String * output__HeadVar__8_8,
  MR_String * output__HeadVar__9_9);

static MR_Word MR_CALL 
output__classify_profile_1_f_0(
  MR_Word output__HeadVar__1_1);


static /* final */ const MR_Box output_scalar_common_2[2][1];

static /* final */ const MR_Box output_scalar_common_3[2][2];

static /* final */ const MR_Box output_scalar_common_4[2][7];


/* sealed */ struct output__vector_common_type_1_0_s {
  const MR_Word output__vector_common_type_1_0__vct_1_f_0;
};

static /* final */ const struct output__vector_common_type_1_0_s output_vector_common_1[6];



static /* final */ const MR_Box output_scalar_common_2[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box output_scalar_common_3[2][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "] ")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) ">")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box output_scalar_common_4[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&output__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&output_prof_info__output_prof_info__type_ctor_info_parent_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&output__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&output_prof_info__output_prof_info__type_ctor_info_child_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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


#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct2 output__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_EnumFunctorDesc output__output__enum_functor_desc_header_category_0_0 = {
  (MR_String) "time_headers",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc output__output__enum_functor_desc_header_category_0_1 = {
  (MR_String) "memory_words_headers",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc output__output__enum_functor_desc_header_category_0_2 = {
  (MR_String) "memory_cells_headers",
  (MR_Integer) 2
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (output____Unify____header_category_0_0_10001)),
  ((MR_Box) (output____Compare____header_category_0_0_10001)),
  (MR_String) "output",
  (MR_String) "header_category",
  {     output__output__enum_name_ordered_header_category_0 },
  {     output__output__enum_value_ordered_header_category_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  output__output__functor_number_map_header_category_0
};

static MR_bool MR_CALL 
output____Unify____header_category_0_0_10001(
  MR_Box output__wrapper_arg_1,
  MR_Box output__wrapper_arg_2)
{
  {
    MR_bool output__succeeded;

    {
      output__succeeded = output____Unify____header_category_0_0(((MR_Word) output__wrapper_arg_1), ((MR_Word) output__wrapper_arg_2));
    }
    return output__succeeded;
  }
}

static void MR_CALL 
output____Compare____header_category_0_0_10001(
  MR_Box * output__wrapper_arg_1,
  MR_Box output__wrapper_arg_2,
  MR_Box output__wrapper_arg_3)
{
  {
    MR_Word output__conv0_HeadVar__1_1;

    {
      output____Compare____header_category_0_0(&output__conv0_HeadVar__1_1, ((MR_Word) output__wrapper_arg_2), ((MR_Word) output__wrapper_arg_3));
    }
    *output__wrapper_arg_1 = ((MR_Box) (output__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
output__IntroducedFrom__pred__output_formatted_child_list__328__1_4_p_0(
  MR_Word output__IndexMap_6,
  MR_Word output__LambdaHeadVar__1_22)
{
  {
    MR_bool output__succeeded;
    MR_String output__LabelName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), output__LambdaHeadVar__1_22, (MR_Integer) 0)));
    MR_Integer output__CycleNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__LambdaHeadVar__1_22, (MR_Integer) 1)));
    MR_Float output__Self_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), output__LambdaHeadVar__1_22, (MR_Integer) 2)));
    MR_Float output__Descendant_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), output__LambdaHeadVar__1_22, (MR_Integer) 3)));
    MR_Integer output__Calls_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__LambdaHeadVar__1_22, (MR_Integer) 4)));
    MR_Integer output__TotalCalls_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__LambdaHeadVar__1_22, (MR_Integer) 5)));
    MR_String output__Name_15;
    MR_Integer output__Index_16;
    MR_String output__Output_17;
    MR_Word output__Var_28;
    MR_Word output__Var_29;
    MR_Word output__Var_30;
    MR_Word output__Var_31;
    MR_Word output__Var_32;
    MR_Word output__Var_33;
    MR_Word output__Var_34;
    MR_Word output__Var_35;
    MR_Word output__Var_36;
    MR_Word output__Var_37;
    MR_Word output__Var_38;
    MR_Word output__Var_39;
    MR_Box output__conv0_Index_16;

    {
      output__Name_15 = output__construct_name_2_f_0(output__LabelName_9, output__CycleNum_10);
    }
    {
      output__conv0_Index_16 = mercury__map__det_elem_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (output__LabelName_9)), output__IndexMap_6);
    }
    output__Index_16 = ((MR_Integer) output__conv0_Index_16);
    {
      output__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), output__Var_29, 0) = MR_box_float(output__Self_11);
    }
    {
      output__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), output__Var_31, 0) = MR_box_float(output__Descendant_12);
    }
    {
      output__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), output__Var_33, 0) = ((MR_Box) (output__Calls_13));
    }
    {
      output__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), output__Var_35, 0) = ((MR_Box) (output__TotalCalls_14));
    }
    {
      output__Var_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), output__Var_37, 0) = ((MR_Box) (output__Name_15));
    }
    {
      output__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), output__Var_39, 0) = ((MR_Box) (output__Index_16));
    }
    {
      output__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), output__Var_38, 0) = ((MR_Box) (output__Var_39));
      MR_hl_field(MR_mktag(1), output__Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      output__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), output__Var_36, 0) = ((MR_Box) (output__Var_37));
      MR_hl_field(MR_mktag(1), output__Var_36, 1) = ((MR_Box) (output__Var_38));
    }
    {
      output__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), output__Var_34, 0) = ((MR_Box) (output__Var_35));
      MR_hl_field(MR_mktag(1), output__Var_34, 1) = ((MR_Box) (output__Var_36));
    }
    {
      output__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), output__Var_32, 0) = ((MR_Box) (output__Var_33));
      MR_hl_field(MR_mktag(1), output__Var_32, 1) = ((MR_Box) (output__Var_34));
    }
    {
      output__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), output__Var_30, 0) = ((MR_Box) (output__Var_31));
      MR_hl_field(MR_mktag(1), output__Var_30, 1) = ((MR_Box) (output__Var_32));
    }
    {
      output__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), output__Var_28, 0) = ((MR_Box) (output__Var_29));
      MR_hl_field(MR_mktag(1), output__Var_28, 1) = ((MR_Box) (output__Var_30));
    }
    {
      output__Output_17 = mercury__string__format_2_f_0((MR_String) "%20.2f %11.2f %7d/%-11d %s [%d]\n", output__Var_28);
    }
    {
      mercury__io__write_string_3_p_0(output__Output_17);
    }
  }
}

static void MR_CALL 
output__IntroducedFrom__pred__output_formatted_cycle_parent_list__280__1_4_p_0(
  MR_Word output__IndexMap_6,
  MR_Word output__LambdaHeadVar__1_20)
{
  {
    MR_bool output__succeeded;
    MR_String output__LabelName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), output__LambdaHeadVar__1_20, (MR_Integer) 0)));
    MR_Integer output__CycleNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__LambdaHeadVar__1_20, (MR_Integer) 1)));
    MR_Integer output__Calls_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__LambdaHeadVar__1_20, (MR_Integer) 4)));
    MR_String output__Name_14;
    MR_Integer output__Index_15;
    MR_Word output__Var_26;
    MR_Word output__Var_28;
    MR_Word output__Var_29;
    MR_Word output__Var_30;
    MR_Word output__Var_31;
    MR_Word output__Var_32;
    MR_Float output__Var_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), output__LambdaHeadVar__1_20, (MR_Integer) 2)));
    MR_Float output__Var_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), output__LambdaHeadVar__1_20, (MR_Integer) 3)));
    MR_Box output__conv0_Index_15;

    output__succeeded = (output__CycleNum_10 == (MR_Integer) 0);
    if (output__succeeded)
      output__Name_14 = output__LabelName_9;
    else
      {
        MR_String output__CycleStr_67;
        MR_Word output__Var_68;
        MR_Word output__Var_69;
        MR_Word output__Var_71;

        {
          mercury__string__int_to_string_2_p_0(output__CycleNum_10, &output__CycleStr_67);
        }
        {
          output__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), output__Var_71, 0) = ((MR_Box) (output__CycleStr_67));
          MR_hl_field(MR_mktag(1), output__Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &output_scalar_common_3[1])));
        }
        {
          output__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), output__Var_69, 0) = ((MR_Box) ((MR_String) "  <cycle "));
          MR_hl_field(MR_mktag(1), output__Var_69, 1) = ((MR_Box) (output__Var_71));
        }
        {
          output__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), output__Var_68, 0) = ((MR_Box) (output__LabelName_9));
          MR_hl_field(MR_mktag(1), output__Var_68, 1) = ((MR_Box) (output__Var_69));
        }
        {
          mercury__string__append_list_2_p_0(output__Var_68, &output__Name_14);
        }
      }
    {
      output__conv0_Index_15 = mercury__map__det_elem_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (output__LabelName_9)), output__IndexMap_6);
    }
    output__Index_15 = ((MR_Integer) output__conv0_Index_15);
    {
      output__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), output__Var_28, 0) = ((MR_Box) (output__Calls_13));
    }
    {
      output__Var_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), output__Var_30, 0) = ((MR_Box) (output__Name_14));
    }
    {
      output__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), output__Var_32, 0) = ((MR_Box) (output__Index_15));
    }
    {
      output__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), output__Var_31, 0) = ((MR_Box) (output__Var_32));
      MR_hl_field(MR_mktag(1), output__Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      output__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), output__Var_29, 0) = ((MR_Box) (output__Var_30));
      MR_hl_field(MR_mktag(1), output__Var_29, 1) = ((MR_Box) (output__Var_31));
    }
    {
      output__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), output__Var_26, 0) = ((MR_Box) (output__Var_28));
      MR_hl_field(MR_mktag(1), output__Var_26, 1) = ((MR_Box) (output__Var_29));
    }
    {
      mercury__io__format_4_p_0((MR_String) "%40d             %s [%d]\n", output__Var_26);
    }
  }
}

static void MR_CALL 
output____Compare____header_category_0_0(
  MR_Word * output__HeadVar__1_1,
  MR_Word output__HeadVar__2_2,
  MR_Word output__HeadVar__3_3)
{
  {
    MR_bool output__succeeded;
    MR_Integer output__Cast_HeadVar1_4 = (MR_Integer) output__HeadVar__2_2;
    MR_Integer output__Cast_HeadVar2_5 = (MR_Integer) output__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(output__HeadVar__1_1, output__Cast_HeadVar1_4, output__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
output____Unify____header_category_0_0(
  MR_Word output__HeadVar__2_1,
  MR_Word output__HeadVar__2_2)
{
  {
    MR_bool output__succeeded = (output__HeadVar__2_1 == output__HeadVar__2_2);

    return output__succeeded;
  }
}

static MR_String MR_CALL 
output__construct_name_2_f_0(
  MR_String output__Name_4,
  MR_Integer output__CycleNum_5)
{
  {
    MR_bool output__succeeded = (output__CycleNum_5 == (MR_Integer) 0);
    MR_String output__FullName_6;

    if (output__succeeded)
      output__FullName_6 = output__Name_4;
    else
      {
        MR_String output__CycleStr_7;
        MR_Word output__Var_8;
        MR_Word output__Var_9;
        MR_Word output__Var_11;

        {
          mercury__string__int_to_string_2_p_0(output__CycleNum_5, &output__CycleStr_7);
        }
        {
          output__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), output__Var_11, 0) = ((MR_Box) (output__CycleStr_7));
          MR_hl_field(MR_mktag(1), output__Var_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &output_scalar_common_3[1])));
        }
        {
          output__Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), output__Var_9, 0) = ((MR_Box) ((MR_String) "  <cycle "));
          MR_hl_field(MR_mktag(1), output__Var_9, 1) = ((MR_Box) (output__Var_11));
        }
        {
          output__Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), output__Var_8, 0) = ((MR_Box) (output__Name_4));
          MR_hl_field(MR_mktag(1), output__Var_8, 1) = ((MR_Box) (output__Var_9));
        }
        {
          mercury__string__append_list_2_p_0(output__Var_8, &output__FullName_6);
        }
      }
    return output__FullName_6;
  }
}

static void MR_CALL 
output__output_alphabet_listing_2_3_p_0(
  MR_Word output__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool output__succeeded;

        if ((output__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            mercury__io__nl_2_p_0();
          }
        else
          {
            MR_String output__Name_8;
            MR_Integer output__Index_9;
            MR_Word output__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), output__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word output__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), output__HeadVar__1_1, (MR_Integer) 0)));
            MR_String output__Var_26;
            MR_String output__Var_36;

            output__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), output__Var_14, (MR_Integer) 0)));
            output__Index_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__Var_14, (MR_Integer) 1)));
            {
              mercury__io__write_string_3_p_0((MR_String) "[");
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &output_scalar_common_2[0], output__Index_9, &output__Var_26);
            }
            {
              mercury__io__write_string_3_p_0(output__Var_26);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "]\t");
            }
            {
              mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) &output_scalar_common_2[1], (MR_Integer) 30, output__Name_8, &output__Var_36);
            }
            {
              mercury__io__write_string_3_p_0(output__Var_36);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
            /* direct tailcall eliminated */
            {
              MR_Word output__next_value_of_HeadVar__1_1 = output__T_10;

              output__HeadVar__1_1 = output__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
output__flat_profile_6_p_0(
  MR_Word output__HeadVar__1_1,
  MR_Float output__CumTime0_2,
  MR_Word output__InfoMap_3,
  MR_Word output__IndexMap_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool output__succeeded;

        if ((output__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word output__TypeCtorInfo_85_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_String output__LabelName_13 = ((MR_String) (MR_hl_field(MR_mktag(1), output__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word output__LNs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), output__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word output__ProfNode_19;
            MR_Integer output__Index_20;
            MR_String output__Name_21;
            MR_Integer output__CycleNum_22;
            MR_Float output__Percentage_24;
            MR_Float output__Self_25;
            MR_Float output__Descendant_26;
            MR_Integer output__TotalCalls_27;
            MR_Integer output__SelfCalls_28;
            MR_Float output__FloatTotalCalls_42;
            MR_Integer output__Calls_43;
            MR_Float output__CumTime_44;
            MR_Float output__SelfSeconds_45;
            MR_Float output__DescSeconds_46;
            MR_Float output__SelfMs_47;
            MR_Float output__DescMs_48;
            MR_String output__FullName_49;
            MR_String output__IndexStr0_50;
            MR_String output__IndexStr_51;
            MR_Float output__Var_55;
            MR_Float output__Var_56;
            MR_Word output__Var_59;
            MR_Word output__Var_61;
            MR_String output__Var_89;
            MR_Word output__Var_95;
            MR_String output__Var_102;
            MR_String output__Var_115;
            MR_String output__Var_128;
            MR_String output__Var_139;
            MR_String output__Var_152;
            MR_Box output__conv0_ProfNode_19;
            MR_Box output__conv1_Index_20;

            {
              mercury__map__lookup_3_p_0(output__TypeCtorInfo_85_85, (MR_Word) &output_prof_info__output_prof_info__type_ctor_info_output_prof_0, output__InfoMap_3, ((MR_Box) (output__LabelName_13)), &output__conv0_ProfNode_19);
            }
            output__ProfNode_19 = ((MR_Word) output__conv0_ProfNode_19);
            {
              mercury__map__lookup_3_p_0(output__TypeCtorInfo_85_85, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, output__IndexMap_4, ((MR_Box) (output__LabelName_13)), &output__conv1_Index_20);
            }
            output__Index_20 = ((MR_Integer) output__conv1_Index_20);
            if (((MR_tag((MR_Word) output__ProfNode_19)) == (MR_mktag((MR_Integer) 1))))
              {
                {
                  mercury__require__error_1_p_0((MR_String) "output_flat_profile: Cannot have output_cycle_prof\n");
                  return;
                }
              }
            else
              {
                MR_Float output___Percentage_23;
                MR_Word output___ParentList_29;
                MR_Word output___ChildList_30;
                MR_Word output__Var_31;
                MR_Word output__Var_32;

                output__Name_21 = ((MR_String) (MR_hl_field(MR_mktag(0), output__ProfNode_19, (MR_Integer) 0)));
                output__CycleNum_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__ProfNode_19, (MR_Integer) 1)));
                output___Percentage_23 = MR_unbox_float((MR_hl_field(MR_mktag(0), output__ProfNode_19, (MR_Integer) 2)));
                output__Percentage_24 = MR_unbox_float((MR_hl_field(MR_mktag(0), output__ProfNode_19, (MR_Integer) 3)));
                output__Self_25 = MR_unbox_float((MR_hl_field(MR_mktag(0), output__ProfNode_19, (MR_Integer) 4)));
                output__Descendant_26 = MR_unbox_float((MR_hl_field(MR_mktag(0), output__ProfNode_19, (MR_Integer) 5)));
                output__TotalCalls_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__ProfNode_19, (MR_Integer) 6)));
                output__SelfCalls_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__ProfNode_19, (MR_Integer) 7)));
                output___ParentList_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), output__ProfNode_19, (MR_Integer) 8)));
                output___ChildList_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), output__ProfNode_19, (MR_Integer) 9)));
                output__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), output__ProfNode_19, (MR_Integer) 10)));
                output__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), output__ProfNode_19, (MR_Integer) 11)));
              }
            {
              output__Var_55 = mercury__float__float_1_f_0(output__TotalCalls_27);
            }
            {
              output__Var_56 = mercury__float__float_1_f_0(output__SelfCalls_28);
            }
            output__FloatTotalCalls_42 = (output__Var_55 + output__Var_56);
            output__Calls_43 = (output__SelfCalls_28 + output__TotalCalls_27);
            output__CumTime_44 = (output__CumTime0_2 + output__Self_25);
            {
              output__SelfSeconds_45 = generate_output__checked_float_divide_2_f_0(output__Self_25, output__FloatTotalCalls_42);
            }
            {
              output__DescSeconds_46 = generate_output__checked_float_divide_2_f_0(output__Descendant_26, output__FloatTotalCalls_42);
            }
            output__SelfMs_47 = (((MR_Float) 1000.0000000000000) * output__SelfSeconds_45);
            output__DescMs_48 = (((MR_Float) 1000.0000000000000) * output__DescSeconds_46);
            {
              output__FullName_49 = output__construct_name_2_f_0(output__Name_21, output__CycleNum_22);
            }
            {
              mercury__string__int_to_string_2_p_0(output__Index_20, &output__IndexStr0_50);
            }
            {
              output__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), output__Var_61, 0) = ((MR_Box) (output__IndexStr0_50));
              MR_hl_field(MR_mktag(1), output__Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &output_scalar_common_3[0])));
            }
            {
              output__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), output__Var_59, 0) = ((MR_Box) ((MR_String) "["));
              MR_hl_field(MR_mktag(1), output__Var_59, 1) = ((MR_Box) (output__Var_61));
            }
            {
              mercury__string__append_list_2_p_0(output__Var_59, &output__IndexStr_51);
            }
            output__Var_95 = (MR_Word) &output_scalar_common_2[0];
            {
              mercury__string__format__format_float_component_width_prec_6_p_0(output__Var_95, (MR_Integer) 5, (MR_Integer) 1, (MR_Integer) 2, output__Percentage_24, &output__Var_89);
            }
            {
              mercury__io__write_string_3_p_0(output__Var_89);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              mercury__string__format__format_float_component_width_prec_6_p_0(output__Var_95, (MR_Integer) 10, (MR_Integer) 2, (MR_Integer) 2, output__CumTime_44, &output__Var_102);
            }
            {
              mercury__io__write_string_3_p_0(output__Var_102);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              mercury__string__format__format_float_component_width_prec_6_p_0(output__Var_95, (MR_Integer) 8, (MR_Integer) 2, (MR_Integer) 2, output__Self_25, &output__Var_115);
            }
            {
              mercury__io__write_string_3_p_0(output__Var_115);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              mercury__string__format__format_signed_int_component_width_noprec_4_p_0(output__Var_95, (MR_Integer) 8, output__Calls_43, &output__Var_128);
            }
            {
              mercury__io__write_string_3_p_0(output__Var_128);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              mercury__string__format__format_float_component_width_prec_6_p_0(output__Var_95, (MR_Integer) 8, (MR_Integer) 2, (MR_Integer) 2, output__SelfMs_47, &output__Var_139);
            }
            {
              mercury__io__write_string_3_p_0(output__Var_139);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              mercury__string__format__format_float_component_width_prec_6_p_0(output__Var_95, (MR_Integer) 8, (MR_Integer) 2, (MR_Integer) 2, output__DescMs_48, &output__Var_152);
            }
            {
              mercury__io__write_string_3_p_0(output__Var_152);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              mercury__io__write_string_3_p_0(output__FullName_49);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              mercury__io__write_string_3_p_0(output__IndexStr_51);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
            /* direct tailcall eliminated */
            {
              MR_Word output__next_value_of_HeadVar__1_1 = output__LNs_14;
              MR_Float output__next_value_of_CumTime0_2 = output__CumTime_44;

              output__CumTime0_2 = output__next_value_of_CumTime0_2;
              output__HeadVar__1_1 = output__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
output__flat_headers_2_p_0(void)
{
  {
    MR_bool output__succeeded;
    MR_Word output__Globals_4;
    MR_Word output__WhatToProfile_5;
    MR_Word output__Category_6;
    MR_String output__ShortWhat_7;
    MR_String output__LongWhat_9;
    MR_String output__ShortUnits_10;
    MR_String output__Units_11;
    MR_String output__MilliUnits_12;
    MR_String output__MilliUnitsPerCall_13;
    MR_String output__SpentIn_14;
    MR_String output__Var_138;
    MR_Word output__Var_144;
    MR_String output__Var_149;
    MR_String output__Var_160;
    MR_String output__Var_171;
    MR_String output__Var_182;
    MR_String output___What_8;

    {
      globals__io_get_globals_3_p_0(&output__Globals_4);
    }
    {
      globals__get_what_to_profile_2_p_0(output__Globals_4, &output__WhatToProfile_5);
    }
    {
      output__Category_6 = output__classify_profile_1_f_0(output__WhatToProfile_5);
    }
    {
      output__units_9_p_0(output__Category_6, &output__ShortWhat_7, &output___What_8, &output__LongWhat_9, &output__ShortUnits_10, &output__Units_11, &output__MilliUnits_12, &output__MilliUnitsPerCall_13, &output__SpentIn_14);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\nflat profile:\n\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "%\t\tthe percentage of total ");
    }
    {
      mercury__io__write_string_3_p_0(output__LongWhat_9);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " of the program\n");
    }
    {
      mercury__io__write_string_3_p_0(output__ShortWhat_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tused by this procedure.\n\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "cumulative\tthe total number of ");
    }
    {
      mercury__io__write_string_3_p_0(output__Units_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " for the current procedure and\n");
    }
    {
      mercury__io__write_string_3_p_0(output__ShortUnits_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tthe ones listed above it.\n\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "self\t\tthe number of ");
    }
    {
      mercury__io__write_string_3_p_0(output__Units_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " accounted for by this procedure alone.\n");
    }
    {
      mercury__io__write_string_3_p_0(output__ShortUnits_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tThe listing is sorted on this row.\n\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "calls\t\tthe number of times this procedure was called.\n\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "self\t\tthe average number of ");
    }
    {
      mercury__io__write_string_3_p_0(output__MilliUnits_12);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
    {
      mercury__io__write_string_3_p_0(output__SpentIn_14);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      mercury__io__write_string_3_p_0(output__MilliUnitsPerCall_13);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "  \tthis procedure per call.\n\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "total\t\tthe average number of ");
    }
    {
      mercury__io__write_string_3_p_0(output__MilliUnits_12);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
    {
      mercury__io__write_string_3_p_0(output__SpentIn_14);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " this procedure and its\n");
    }
    {
      mercury__io__write_string_3_p_0(output__MilliUnitsPerCall_13);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "  \tdescendents per call.\n\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "name\t\tthe name of the procedure followed by its index number.\n\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "   %  cumulative    self              self");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "    total\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
    output__Var_144 = (MR_Word) &output_scalar_common_2[0];
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(output__Var_144, (MR_Integer) 4, output__ShortWhat_7, &output__Var_138);
    }
    {
      mercury__io__write_string_3_p_0(output__Var_138);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "    ");
    }
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(output__Var_144, (MR_Integer) 7, output__ShortUnits_10, &output__Var_149);
    }
    {
      mercury__io__write_string_3_p_0(output__Var_149);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "  ");
    }
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(output__Var_144, (MR_Integer) 7, output__ShortUnits_10, &output__Var_160);
    }
    {
      mercury__io__write_string_3_p_0(output__Var_160);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "    calls ");
    }
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(output__Var_144, (MR_Integer) 8, output__MilliUnitsPerCall_13, &output__Var_171);
    }
    {
      mercury__io__write_string_3_p_0(output__Var_171);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(output__Var_144, (MR_Integer) 8, output__MilliUnitsPerCall_13, &output__Var_182);
    }
    {
      mercury__io__write_string_3_p_0(output__Var_182);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " name\n");
    }
  }
}

static void MR_CALL 
output__output_formatted_child_list_4_p_0_1(
  MR_Box output__closure_arg,
  MR_Box output__wrapper_arg_1,
  MR_Box output__wrapper_arg_2,
  MR_Box * output__wrapper_arg_3)
{
  {
    MR_Box output__closure = output__closure_arg;

    {
      output__IntroducedFrom__pred__output_formatted_child_list__328__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), output__closure, (MR_Integer) 3))), ((MR_Word) output__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
output__output_formatted_child_list_4_p_0(
  MR_Word output__Children_5,
  MR_Word output__IndexMap_6)
{
  {
    MR_bool output__succeeded;
    MR_Word output__Var_20;
    MR_Box output__conv0_STATE_VARIABLE_IO_19;

    {
      output__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), output__Var_20, 0) = ((MR_Box) (&output_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), output__Var_20, 1) = ((MR_Box) (output__output_formatted_child_list_4_p_0_1));
      MR_hl_field(MR_mktag(0), output__Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), output__Var_20, 3) = ((MR_Box) (output__IndexMap_6));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &output_prof_info__output_prof_info__type_ctor_info_child_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, output__Var_20, output__Children_5, ((MR_Box) ((MR_Integer) 0)), &output__conv0_STATE_VARIABLE_IO_19);
    }
  }
}

static void MR_CALL 
output__output_formatted_cycle_child_list_4_p_0(
  MR_Word output__HeadVar__1_1,
  MR_Word output__IndexMap_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool output__succeeded;

        if ((output__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word output__Child_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), output__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word output__Childs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), output__HeadVar__1_1, (MR_Integer) 1)));
            MR_String output__LabelName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), output__Child_9, (MR_Integer) 0)));
            MR_Integer output__CycleNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__Child_9, (MR_Integer) 1)));
            MR_Integer output__Calls_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__Child_9, (MR_Integer) 4)));
            MR_String output__Name_19;
            MR_Integer output__Index_20;
            MR_String output__Var_36;
            MR_Word output__Var_42;
            MR_String output__Var_50;
            MR_Float output___Self_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), output__Child_9, (MR_Integer) 2)));
            MR_Float output___Descendant_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), output__Child_9, (MR_Integer) 3)));
            MR_Integer output__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__Child_9, (MR_Integer) 5)));
            MR_Box output__conv0_Index_20;

            output__succeeded = (output__CycleNum_14 == (MR_Integer) 0);
            if (output__succeeded)
              output__Name_19 = output__LabelName_13;
            else
              {
                MR_String output__CycleStr_61;
                MR_Word output__Var_62;
                MR_Word output__Var_63;
                MR_Word output__Var_65;

                {
                  mercury__string__int_to_string_2_p_0(output__CycleNum_14, &output__CycleStr_61);
                }
                {
                  output__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), output__Var_65, 0) = ((MR_Box) (output__CycleStr_61));
                  MR_hl_field(MR_mktag(1), output__Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &output_scalar_common_3[1])));
                }
                {
                  output__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), output__Var_63, 0) = ((MR_Box) ((MR_String) "  <cycle "));
                  MR_hl_field(MR_mktag(1), output__Var_63, 1) = ((MR_Box) (output__Var_65));
                }
                {
                  output__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), output__Var_62, 0) = ((MR_Box) (output__LabelName_13));
                  MR_hl_field(MR_mktag(1), output__Var_62, 1) = ((MR_Box) (output__Var_63));
                }
                {
                  mercury__string__append_list_2_p_0(output__Var_62, &output__Name_19);
                }
              }
            {
              output__conv0_Index_20 = mercury__map__det_elem_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (output__LabelName_13)), output__IndexMap_2);
            }
            output__Index_20 = ((MR_Integer) output__conv0_Index_20);
            output__Var_42 = (MR_Word) &output_scalar_common_2[0];
            {
              mercury__string__format__format_signed_int_component_width_noprec_4_p_0(output__Var_42, (MR_Integer) 40, output__Calls_17, &output__Var_36);
            }
            {
              mercury__io__write_string_3_p_0(output__Var_36);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "             ");
            }
            {
              mercury__io__write_string_3_p_0(output__Name_19);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " [");
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(output__Var_42, output__Index_20, &output__Var_50);
            }
            {
              mercury__io__write_string_3_p_0(output__Var_50);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "]\n");
            }
            /* direct tailcall eliminated */
            {
              MR_Word output__next_value_of_HeadVar__1_1 = output__Childs_10;

              output__HeadVar__1_1 = output__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
output__output_formatted_parent_list_5_p_0(
  MR_Word output__HeadVar__1_1,
  MR_Word output__IndexMap_2,
  MR_Integer output__TotalCalls_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool output__succeeded;

        if ((output__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word output__Parent_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), output__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word output__Parents_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), output__HeadVar__1_1, (MR_Integer) 1)));
            MR_String output__LabelName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), output__Parent_11, (MR_Integer) 0)));
            MR_Integer output__CycleNum_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__Parent_11, (MR_Integer) 1)));
            MR_Float output__Self_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), output__Parent_11, (MR_Integer) 2)));
            MR_Float output__Descendant_19 = MR_unbox_float((MR_hl_field(MR_mktag(0), output__Parent_11, (MR_Integer) 3)));
            MR_Integer output__Calls_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__Parent_11, (MR_Integer) 4)));
            MR_String output__Name_21;
            MR_Integer output__Index_22;
            MR_String output__Var_44;
            MR_Word output__Var_50;
            MR_String output__Var_57;
            MR_String output__Var_70;
            MR_String output__Var_81;
            MR_String output__Var_95;
            MR_Box output__conv0_Index_22;

            {
              output__Name_21 = output__construct_name_2_f_0(output__LabelName_16, output__CycleNum_17);
            }
            {
              output__conv0_Index_22 = mercury__map__det_elem_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (output__LabelName_16)), output__IndexMap_2);
            }
            output__Index_22 = ((MR_Integer) output__conv0_Index_22);
            output__Var_50 = (MR_Word) &output_scalar_common_2[0];
            {
              mercury__string__format__format_float_component_width_prec_6_p_0(output__Var_50, (MR_Integer) 20, (MR_Integer) 2, (MR_Integer) 2, output__Self_18, &output__Var_44);
            }
            {
              mercury__io__write_string_3_p_0(output__Var_44);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              mercury__string__format__format_float_component_width_prec_6_p_0(output__Var_50, (MR_Integer) 11, (MR_Integer) 2, (MR_Integer) 2, output__Descendant_19, &output__Var_57);
            }
            {
              mercury__io__write_string_3_p_0(output__Var_57);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              mercury__string__format__format_signed_int_component_width_noprec_4_p_0(output__Var_50, (MR_Integer) 7, output__Calls_20, &output__Var_70);
            }
            {
              mercury__io__write_string_3_p_0(output__Var_70);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "/");
            }
            {
              mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) &output_scalar_common_2[1], (MR_Integer) 11, output__TotalCalls_3, &output__Var_81);
            }
            {
              mercury__io__write_string_3_p_0(output__Var_81);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              mercury__io__write_string_3_p_0(output__Name_21);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " [");
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(output__Var_50, output__Index_22, &output__Var_95);
            }
            {
              mercury__io__write_string_3_p_0(output__Var_95);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "]\n");
            }
            /* direct tailcall eliminated */
            {
              MR_Word output__next_value_of_HeadVar__1_1 = output__Parents_12;

              output__HeadVar__1_1 = output__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
output__output_formatted_cycle_parent_list_4_p_0_1(
  MR_Box output__closure_arg,
  MR_Box output__wrapper_arg_1,
  MR_Box output__wrapper_arg_2,
  MR_Box * output__wrapper_arg_3)
{
  {
    MR_Box output__closure = output__closure_arg;

    {
      output__IntroducedFrom__pred__output_formatted_cycle_parent_list__280__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), output__closure, (MR_Integer) 3))), ((MR_Word) output__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
output__output_formatted_cycle_parent_list_4_p_0(
  MR_Word output__Parents_5,
  MR_Word output__IndexMap_6)
{
  {
    MR_bool output__succeeded;
    MR_Word output__Var_18;
    MR_Box output__conv0_STATE_VARIABLE_IO_17;

    {
      output__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), output__Var_18, 0) = ((MR_Box) (&output_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), output__Var_18, 1) = ((MR_Box) (output__output_formatted_cycle_parent_list_4_p_0_1));
      MR_hl_field(MR_mktag(0), output__Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), output__Var_18, 3) = ((MR_Box) (output__IndexMap_6));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &output_prof_info__output_prof_info__type_ctor_info_parent_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, output__Var_18, output__Parents_5, ((MR_Box) ((MR_Integer) 0)), &output__conv0_STATE_VARIABLE_IO_17);
    }
  }
}

static void MR_CALL 
output__output_formatted_prof_node_5_p_0(
  MR_Word output__ProfNode_6,
  MR_Integer output__Index_7,
  MR_Word output__IndexMap_8)
{
  {
    MR_bool output__succeeded;
    MR_Word output__TypeCtorInfo_96_96;
    MR_String output__Name_10;
    MR_Integer output__CycleNum_11;
    MR_Float output__Percentage_12;
    MR_Float output__Self_14;
    MR_Float output__Descendant_15;
    MR_Integer output__TotalCalls_16;
    MR_Integer output__SelfCalls_17;
    MR_Word output__ParentList_18;
    MR_Word output__ChildList_19;
    MR_Word output__CycleParentList_20;
    MR_Word output__CycleChildList_21;
    MR_String output__FullName_31;
    MR_String output__IndexStr0_32;
    MR_String output__IndexStr_33;
    MR_String output__SelfCallsString_34;
    MR_String output__InitMiddleStr_35;
    MR_Word output__SortedChildList_38;
    MR_Word output__SortedCycleChildList_39;
    MR_Word output__Var_43;
    MR_Word output__Var_45;
    MR_String output__Var_86;
    MR_String output__Var_88;
    MR_String output__Var_90;
    MR_String output__Var_98;
    MR_Word output__Var_104;
    MR_String output__Var_105;
    MR_String output__Var_107;
    MR_String output__Var_108;
    MR_String output__Var_110;
    MR_String output__Var_111;
    MR_String output__Var_119;
    MR_String output__Var_128;
    MR_String output__Var_129;
    MR_String output__Var_139;
    MR_String output__Var_141;
    MR_String output__Var_142;
    MR_String output__Var_152;
    MR_String output__Var_154;
    MR_String output__Var_155;
    MR_String output__Var_165;
    MR_String output__Var_167;
    MR_String output__Var_168;
    MR_Word output__Var_174;

    if (((MR_tag((MR_Word) output__ProfNode_6)) == (MR_mktag((MR_Integer) 1))))
      {
        {
          mercury__require__error_1_p_0((MR_String) "output_formatted_prof_node: Cannot have output_cycle_prof\n");
          return;
        }
      }
    else
      {
        MR_Float output__Var_13;

        output__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(0), output__ProfNode_6, (MR_Integer) 0)));
        output__CycleNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__ProfNode_6, (MR_Integer) 1)));
        output__Percentage_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), output__ProfNode_6, (MR_Integer) 2)));
        output__Var_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), output__ProfNode_6, (MR_Integer) 3)));
        output__Self_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), output__ProfNode_6, (MR_Integer) 4)));
        output__Descendant_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), output__ProfNode_6, (MR_Integer) 5)));
        output__TotalCalls_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__ProfNode_6, (MR_Integer) 6)));
        output__SelfCalls_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__ProfNode_6, (MR_Integer) 7)));
        output__ParentList_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), output__ProfNode_6, (MR_Integer) 8)));
        output__ChildList_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), output__ProfNode_6, (MR_Integer) 9)));
        output__CycleParentList_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), output__ProfNode_6, (MR_Integer) 10)));
        output__CycleChildList_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), output__ProfNode_6, (MR_Integer) 11)));
      }
    {
      output__FullName_31 = output__construct_name_2_f_0(output__Name_10, output__CycleNum_11);
    }
    {
      mercury__string__int_to_string_2_p_0(output__Index_7, &output__IndexStr0_32);
    }
    {
      output__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), output__Var_45, 0) = ((MR_Box) (output__IndexStr0_32));
      MR_hl_field(MR_mktag(1), output__Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &output_scalar_common_3[0])));
    }
    {
      output__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), output__Var_43, 0) = ((MR_Box) ((MR_String) "["));
      MR_hl_field(MR_mktag(1), output__Var_43, 1) = ((MR_Box) (output__Var_45));
    }
    {
      mercury__string__append_list_2_p_0(output__Var_43, &output__IndexStr_33);
    }
    output__Var_104 = (MR_Word) &output_scalar_common_2[0];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(output__Var_104, output__Index_7, &output__Var_98);
    }
    {
      output__Var_105 = mercury__string__f_43_43_2_f_0(output__Var_98, (MR_String) "]\n");
    }
    {
      output__Var_107 = mercury__string__f_43_43_2_f_0((MR_String) " [", output__Var_105);
    }
    {
      output__Var_108 = mercury__string__f_43_43_2_f_0(output__FullName_31, output__Var_107);
    }
    {
      output__Var_110 = mercury__string__f_43_43_2_f_0((MR_String) "             ", output__Var_108);
    }
    {
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0(output__Var_104, (MR_Integer) 40, output__SelfCalls_17, &output__Var_111);
    }
    {
      output__SelfCallsString_34 = mercury__string__f_43_43_2_f_0(output__Var_111, output__Var_110);
    }
    {
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0(output__Var_104, (MR_Integer) 7, output__TotalCalls_16, &output__Var_119);
    }
    {
      output__Var_128 = mercury__string__f_43_43_2_f_0((MR_String) " ", output__Var_119);
    }
    {
      mercury__string__format__format_float_component_width_prec_6_p_0(output__Var_104, (MR_Integer) 11, (MR_Integer) 2, (MR_Integer) 2, output__Descendant_15, &output__Var_129);
    }
    {
      output__Var_139 = mercury__string__f_43_43_2_f_0(output__Var_129, output__Var_128);
    }
    {
      output__Var_141 = mercury__string__f_43_43_2_f_0((MR_String) " ", output__Var_139);
    }
    {
      mercury__string__format__format_float_component_width_prec_6_p_0(output__Var_104, (MR_Integer) 7, (MR_Integer) 2, (MR_Integer) 2, output__Self_14, &output__Var_142);
    }
    {
      output__Var_152 = mercury__string__f_43_43_2_f_0(output__Var_142, output__Var_141);
    }
    {
      output__Var_154 = mercury__string__f_43_43_2_f_0((MR_String) " ", output__Var_152);
    }
    {
      mercury__string__format__format_float_component_width_prec_6_p_0(output__Var_104, (MR_Integer) 5, (MR_Integer) 1, (MR_Integer) 2, output__Percentage_12, &output__Var_155);
    }
    {
      output__Var_165 = mercury__string__f_43_43_2_f_0(output__Var_155, output__Var_154);
    }
    {
      output__Var_167 = mercury__string__f_43_43_2_f_0((MR_String) " ", output__Var_165);
    }
    output__Var_174 = (MR_Word) &output_scalar_common_2[1];
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(output__Var_174, (MR_Integer) 6, output__IndexStr_33, &output__Var_168);
    }
    {
      output__InitMiddleStr_35 = mercury__string__f_43_43_2_f_0(output__Var_168, output__Var_167);
    }
    output__succeeded = (output__SelfCalls_17 == (MR_Integer) 0);
    if (output__succeeded)
      {
      }
    else
      {
        mercury__io__write_string_3_p_0(output__SelfCallsString_34);
      }
    output__succeeded = (output__CycleParentList_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (output__succeeded)
      output__succeeded = (output__ParentList_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (output__succeeded)
      {
        MR_String output__Var_176;

        {
          mercury__string__format__format_string_component_width_noprec_4_p_0(output__Var_104, (MR_Integer) 67, (MR_String) "<spontaneous>\n", &output__Var_176);
        }
        {
          mercury__io__write_string_3_p_0(output__Var_176);
        }
      }
    else
      {
        MR_Word output__TypeCtorInfo_95_95 = (MR_Word) &output_prof_info__output_prof_info__type_ctor_info_parent_0;
        MR_Word output__SortedCycleParentList_36;
        MR_Word output__SortedParentList_37;

        {
          mercury__list__sort_2_p_0(output__TypeCtorInfo_95_95, output__CycleParentList_20, &output__SortedCycleParentList_36);
        }
        {
          output__output_formatted_cycle_parent_list_4_p_0(output__SortedCycleParentList_36, output__IndexMap_8);
        }
        {
          mercury__list__sort_2_p_0(output__TypeCtorInfo_95_95, output__ParentList_18, &output__SortedParentList_37);
        }
        {
          output__output_formatted_parent_list_5_p_0(output__SortedParentList_37, output__IndexMap_8, output__TotalCalls_16);
        }
      }
    {
      mercury__io__write_string_3_p_0(output__InitMiddleStr_35);
    }
    output__succeeded = (output__SelfCalls_17 == (MR_Integer) 0);
    if (output__succeeded)
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "         ");
        }
      }
    else
      {
        MR_String output__Var_186;

        {
          mercury__io__write_string_3_p_0((MR_String) "+");
        }
        {
          mercury__string__format__format_signed_int_component_width_noprec_4_p_0(output__Var_174, (MR_Integer) 7, output__SelfCalls_17, &output__Var_186);
        }
        {
          mercury__io__write_string_3_p_0(output__Var_186);
        }
      }
    {
      output__Var_90 = mercury__string__f_43_43_2_f_0(output__IndexStr_33, (MR_String) "\n");
    }
    {
      output__Var_88 = mercury__string__f_43_43_2_f_0((MR_String) " ", output__Var_90);
    }
    {
      output__Var_86 = mercury__string__f_43_43_2_f_0(output__FullName_31, output__Var_88);
    }
    {
      mercury__io__write_string_3_p_0(output__Var_86);
    }
    output__TypeCtorInfo_96_96 = (MR_Word) &output_prof_info__output_prof_info__type_ctor_info_child_0;
    {
      mercury__list__sort_2_p_0(output__TypeCtorInfo_96_96, output__ChildList_19, &output__SortedChildList_38);
    }
    {
      output__output_formatted_child_list_4_p_0(output__SortedChildList_38, output__IndexMap_8);
    }
    {
      mercury__list__sort_2_p_0(output__TypeCtorInfo_96_96, output__CycleChildList_21, &output__SortedCycleChildList_39);
    }
    {
      output__output_formatted_cycle_child_list_4_p_0(output__SortedCycleChildList_39, output__IndexMap_8);
    }
    output__succeeded = (output__SelfCalls_17 == (MR_Integer) 0);
    if (output__succeeded)
      {
      }
    else
      {
        mercury__io__write_string_3_p_0(output__SelfCallsString_34);
      }
  }
}

static void MR_CALL 
output__output_call_graph_5_p_0(
  MR_Word output__HeadVar__1_1,
  MR_Word output__InfoMap_2,
  MR_Word output__IndexMap_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool output__succeeded;

        if ((output__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word output__TypeCtorInfo_24_24 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_String output__LabelName_11 = ((MR_String) (MR_hl_field(MR_mktag(1), output__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word output__LNs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), output__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word output__PN_16;
            MR_Integer output__Index_17;
            MR_Box output__conv0_PN_16;
            MR_Box output__conv1_Index_17;

            {
              mercury__map__lookup_3_p_0(output__TypeCtorInfo_24_24, (MR_Word) &output_prof_info__output_prof_info__type_ctor_info_output_prof_0, output__InfoMap_2, ((MR_Box) (output__LabelName_11)), &output__conv0_PN_16);
            }
            output__PN_16 = ((MR_Word) output__conv0_PN_16);
            {
              mercury__map__lookup_3_p_0(output__TypeCtorInfo_24_24, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, output__IndexMap_3, ((MR_Box) (output__LabelName_11)), &output__conv1_Index_17);
            }
            output__Index_17 = ((MR_Integer) output__conv1_Index_17);
            {
              output__output_formatted_prof_node_5_p_0(output__PN_16, output__Index_17, output__IndexMap_3);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n-----------------------------------------------\n\n");
            }
            /* direct tailcall eliminated */
            {
              MR_Word output__next_value_of_HeadVar__1_1 = output__LNs_12;

              output__HeadVar__1_1 = output__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
output__call_graph_headers_2_p_0(void)
{
  {
    MR_bool output__succeeded;
    MR_Word output__Globals_4;
    MR_Word output__WhatToProfile_5;
    MR_Word output__Category_6;
    MR_String output__ShortWhat_7;
    MR_String output__What_8;
    MR_String output__LongWhat_9;
    MR_String output__Units_11;
    MR_String output__SpentIn_14;
    MR_String output__Var_149;
    MR_String output__Var_220;
    MR_String output___ShortUnits_10;
    MR_String output___MilliUnits_12;
    MR_String output___MilliUnitsPerCall_13;

    {
      globals__io_get_globals_3_p_0(&output__Globals_4);
    }
    {
      globals__get_what_to_profile_2_p_0(output__Globals_4, &output__WhatToProfile_5);
    }
    {
      output__Category_6 = output__classify_profile_1_f_0(output__WhatToProfile_5);
    }
    {
      output__units_9_p_0(output__Category_6, &output__ShortWhat_7, &output__What_8, &output__LongWhat_9, &output___ShortUnits_10, &output__Units_11, &output___MilliUnits_12, &output___MilliUnitsPerCall_13, &output__SpentIn_14);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "call graph profile:\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\tSorted on the %");
    }
    {
      mercury__io__write_string_3_p_0(output__ShortWhat_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " field.\n\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\tprocedure entries:\n\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "index\t\tthe index number of the procedure in the call graph\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tlisting.\n\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "%");
    }
    {
      mercury__io__write_string_3_p_0(output__ShortWhat_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tthe percentage of the total ");
    }
    {
      mercury__io__write_string_3_p_0(output__LongWhat_9);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " of\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tthe program ");
    }
    {
      mercury__io__write_string_3_p_0(output__SpentIn_14);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " this procedure and its\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tdescendents.\n\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "self\t\tthe number of ");
    }
    {
      mercury__io__write_string_3_p_0(output__Units_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " actually ");
    }
    {
      mercury__io__write_string_3_p_0(output__SpentIn_14);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tthe procedure\'s own code.\n\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "descendents\tthe number of ");
    }
    {
      mercury__io__write_string_3_p_0(output__Units_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
    {
      mercury__io__write_string_3_p_0(output__SpentIn_14);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " the\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tdescendents of the current procedure.\n\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "called\t\tthe number of times the current procedure is\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tcalled (not counting self recursive calls).\n\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "self\t\tthe number of self recursive calls.\n\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "name\t\tthe name of the current procedure.\n\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "index\t\tan index number to locate the function easily.\n\n\n\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\tparent listings:\n\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "self*\t\tthe number of ");
    }
    {
      mercury__io__write_string_3_p_0(output__Units_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " of the current procedure\'s self\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\t");
    }
    {
      mercury__io__write_string_3_p_0(output__What_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " due to calls from this parent.\n\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "descendents*\tthe number of ");
    }
    {
      mercury__io__write_string_3_p_0(output__Units_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " of the current procedure\'s descendent\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\t");
    }
    {
      mercury__io__write_string_3_p_0(output__What_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " which is due to calls from this parent.\n\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "called*\t\tthe number of times the current procedure is called\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tby this parent.\n\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "total\t\tthe number of times this procedure is called by its parents.\n\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "parents\t\tthe name of this parent.\n\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "index\t\tthe index number of the parent procedure\n\n\n\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "children listings:\n\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "self*\t\tthe number of ");
    }
    {
      mercury__io__write_string_3_p_0(output__Units_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " of this child\'s self ");
    }
    {
      mercury__io__write_string_3_p_0(output__What_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " which is\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tdue to being called by the current procedure.\n\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "descendent*\tthe number of ");
    }
    {
      mercury__io__write_string_3_p_0(output__Units_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " of this child\'s descendent ");
    }
    {
      mercury__io__write_string_3_p_0(output__What_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " which\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tis due to the current procedure.\n\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "called*\t\tthe number of times this child is called by the current\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tprocedure.\n\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "total*\t\tthe number of times this child is called by all procedures.\n\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "children\tthe name of this child.\n\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "index\t\tthe index number of the child.\n\n\n\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "                                  called/total");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "       parents\n");
    }
    {
      output__Var_149 = mercury__string__f_43_43_2_f_0((MR_String) "%", output__ShortWhat_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "index ");
    }
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) &output_scalar_common_2[0], (MR_Integer) 6, output__Var_149, &output__Var_220);
    }
    {
      mercury__io__write_string_3_p_0(output__Var_220);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "    self descendents  called+self");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "    name           index\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "                                  called/total");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "       children\n\n");
    }
  }
}

static void MR_CALL 
output__units_9_p_0(
  MR_Word output__HeadVar__1_1,
  MR_String * output__HeadVar__2_2,
  MR_String * output__HeadVar__3_3,
  MR_String * output__HeadVar__4_4,
  MR_String * output__HeadVar__5_5,
  MR_String * output__HeadVar__6_6,
  MR_String * output__HeadVar__7_7,
  MR_String * output__HeadVar__8_8,
  MR_String * output__HeadVar__9_9)
{
  {
    MR_bool output__succeeded;

    switch (output__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          *output__HeadVar__2_2 = (MR_String) "cells";
          *output__HeadVar__3_3 = (MR_String) "allocations";
          *output__HeadVar__4_4 = (MR_String) "number of memory allocations";
          *output__HeadVar__5_5 = (MR_String) "k-cells";
          *output__HeadVar__6_6 = (MR_String) "kilocells";
          *output__HeadVar__7_7 = (MR_String) "cells";
          *output__HeadVar__8_8 = (MR_String) "cls/call";
          *output__HeadVar__9_9 = (MR_String) "occurring in";
        }
        break;
      case (MR_Integer) 1:
        {
          *output__HeadVar__2_2 = (MR_String) "mem";
          *output__HeadVar__3_3 = (MR_String) "memory";
          *output__HeadVar__4_4 = (MR_String) "allocated memory";
          *output__HeadVar__5_5 = (MR_String) "k-words";
          *output__HeadVar__6_6 = (MR_String) "kilowords";
          *output__HeadVar__7_7 = (MR_String) "words";
          *output__HeadVar__8_8 = (MR_String) "wds/call";
          *output__HeadVar__9_9 = (MR_String) "allocated by";
        }
        break;
      case (MR_Integer) 0:
        {
          *output__HeadVar__2_2 = (MR_String) "time";
          *output__HeadVar__3_3 = (MR_String) "time";
          *output__HeadVar__4_4 = (MR_String) "running time";
          *output__HeadVar__5_5 = (MR_String) "seconds";
          *output__HeadVar__6_6 = (MR_String) "seconds";
          *output__HeadVar__7_7 = (MR_String) "milliseconds";
          *output__HeadVar__8_8 = (MR_String) "ms/call";
          *output__HeadVar__9_9 = (MR_String) "spent executing";
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
output__classify_profile_1_f_0(
  MR_Word output__HeadVar__1_1)
{
  {
    MR_bool output__succeeded;
    MR_Word output__HeadVar__2_2 = ((&output_vector_common_1[0 + output__HeadVar__1_1]))->output__vector_common_type_1_0__vct_1_f_0;

    return output__HeadVar__2_2;
  }
}

void MR_CALL 
output__output_profile_4_p_0(
  MR_Word output__Output_5,
  MR_Word output__IndexMap_6)
{
  {
    MR_bool output__succeeded;
    MR_Word output__Globals_8;
    MR_Word output__WhatToProfile_9;
    MR_String output__WhatToProfileString_10;
    MR_Word output__InfoMap_11;
    MR_Word output__CallList_12;
    MR_Word output__FlatList_13;
    MR_Word output__CallGraphOpt_14;
    MR_Word output__IndexList_45;

    {
      globals__io_get_globals_3_p_0(&output__Globals_8);
    }
    {
      globals__get_what_to_profile_2_p_0(output__Globals_8, &output__WhatToProfile_9);
    }
    {
      globals__what_to_profile_2_p_1(&output__WhatToProfileString_10, output__WhatToProfile_9);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "*** profiling ");
    }
    {
      mercury__io__write_string_3_p_0(output__WhatToProfileString_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " ***\n\n");
    }
    output__InfoMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), output__Output_5, (MR_Integer) 0)));
    output__CallList_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), output__Output_5, (MR_Integer) 1)));
    output__FlatList_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), output__Output_5, (MR_Integer) 2)));
    {
      globals__io_lookup_bool_option_4_p_0((MR_Integer) 3, &output__CallGraphOpt_14);
    }
    switch (output__CallGraphOpt_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            output__call_graph_headers_2_p_0();
          }
          {
            output__output_call_graph_5_p_0(output__CallList_12, output__InfoMap_11, output__IndexMap_6);
          }
        }
        break;
    }
    {
      output__flat_headers_2_p_0();
    }
    {
      output__flat_profile_6_p_0(output__FlatList_13, (MR_Float) 0.0000000000000000, output__InfoMap_11, output__IndexMap_6);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n\n\nalphabetic listing:\n\n");
    }
    {
      output__IndexList_45 = mercury__map__to_assoc_list_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, output__IndexMap_6);
    }
    {
      output__output_alphabet_listing_2_3_p_0(output__IndexList_45);
    }
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

/* :- end_module output. */
