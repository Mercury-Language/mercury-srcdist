/*
** Automatically generated from `output.m'
** by the Mercury compiler,
** version rotd-2015-06-22
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
#include "integer.mih"
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




#line 76 "output.c"
static const MR_FA_PseudoTypeInfo_Struct2 output__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0;

#line 79 "output.c"
static const MR_EnumFunctorDesc output__output__enum_functor_desc_header_category_0_0;

#line 82 "output.c"
static const MR_EnumFunctorDesc output__output__enum_functor_desc_header_category_0_1;

#line 85 "output.c"
static const MR_EnumFunctorDesc output__output__enum_functor_desc_header_category_0_2;

#line 88 "output.c"
static const MR_EnumFunctorDescPtr output__output__enum_value_ordered_header_category_0[3];

#line 91 "output.c"
static const MR_EnumFunctorDescPtr output__output__enum_name_ordered_header_category_0[3];

#line 94 "output.c"
static const MR_Integer output__output__functor_number_map_header_category_0[3];

#line 97 "output.c"
static MR_bool MR_CALL 
output____Unify____header_category_0_0_10001(
#line 100 "output.c"
  MR_Box output__wrapper_arg_1,
#line 102 "output.c"
  MR_Box output__wrapper_arg_2);

#line 105 "output.c"
static void MR_CALL 
output____Compare____header_category_0_0_10001(
#line 108 "output.c"
  MR_Box * output__wrapper_arg_1,
#line 110 "output.c"
  MR_Box output__wrapper_arg_2,
#line 112 "output.c"
  MR_Box output__wrapper_arg_3);

#line 330 "output.m"
static void MR_CALL 
output__IntroducedFrom__pred__output_formatted_child_list__330__1_4_p_0(
#line 330 "output.m"
  MR_Word output__IndexMap_6,
#line 330 "output.m"
  MR_Word output__HeadVar__2_24);

#line 282 "output.m"
static void MR_CALL 
output__IntroducedFrom__pred__output_formatted_cycle_parent_list__282__1_4_p_0(
#line 282 "output.m"
  MR_Word output__IndexMap_6,
#line 282 "output.m"
  MR_Word output__HeadVar__2_22);

#line 72 "output.m"
static void MR_CALL 
output____Compare____header_category_0_0(
#line 72 "output.m"
  MR_Word * output__HeadVar__1_1,
#line 72 "output.m"
  MR_Word output__HeadVar__2_2,
#line 72 "output.m"
  MR_Word output__HeadVar__3_3);

#line 72 "output.m"
static MR_bool MR_CALL 
output____Unify____header_category_0_0(
#line 72 "output.m"
  MR_Word output__HeadVar__2_1,
#line 72 "output.m"
  MR_Word output__HeadVar__2_2);

#line 455 "output.m"
static MR_String MR_CALL 
output__construct_name_2_f_0(
#line 455 "output.m"
  MR_String output__Name_4,
#line 455 "output.m"
  MR_Integer output__CycleNum_5);

#line 442 "output.m"
static void MR_CALL 
output__output_alphabet_listing_2_3_p_0(
#line 442 "output.m"
  MR_Word output__HeadVar__1_1);

#line 392 "output.m"
static void MR_CALL 
output__flat_profile_6_p_0(
#line 392 "output.m"
  MR_Word output__HeadVar__1_1,
#line 392 "output.m"
  MR_Float output__CumTime0_2,
#line 392 "output.m"
  MR_Word output__InfoMap_3,
#line 392 "output.m"
  MR_Word output__IndexMap_4);

#line 341 "output.m"
static void MR_CALL 
output__flat_headers_2_p_0(void);

#line 330 "output.m"
static void MR_CALL 
output__output_formatted_child_list_4_p_0_1(
#line 330 "output.m"
  MR_Box output__closure_arg,
#line 330 "output.m"
  MR_Box output__wrapper_arg_1,
#line 330 "output.m"
  MR_Box output__wrapper_arg_2,
#line 330 "output.m"
  MR_Box * output__wrapper_arg_3);

#line 326 "output.m"
static void MR_CALL 
output__output_formatted_child_list_4_p_0(
#line 326 "output.m"
  MR_Word output__Children_5,
#line 326 "output.m"
  MR_Word output__IndexMap_6);

#line 310 "output.m"
static void MR_CALL 
output__output_formatted_cycle_child_list_4_p_0(
#line 310 "output.m"
  MR_Word output__HeadVar__1_1,
#line 310 "output.m"
  MR_Word output__IndexMap_2);

#line 293 "output.m"
static void MR_CALL 
output__output_formatted_parent_list_5_p_0(
#line 293 "output.m"
  MR_Word output__HeadVar__1_1,
#line 293 "output.m"
  MR_Word output__IndexMap_2,
#line 293 "output.m"
  MR_Integer output__TotalCalls_3);

#line 282 "output.m"
static void MR_CALL 
output__output_formatted_cycle_parent_list_4_p_0_1(
#line 282 "output.m"
  MR_Box output__closure_arg,
#line 282 "output.m"
  MR_Box output__wrapper_arg_1,
#line 282 "output.m"
  MR_Box output__wrapper_arg_2,
#line 282 "output.m"
  MR_Box * output__wrapper_arg_3);

#line 278 "output.m"
static void MR_CALL 
output__output_formatted_cycle_parent_list_4_p_0(
#line 278 "output.m"
  MR_Word output__Parents_5,
#line 278 "output.m"
  MR_Word output__IndexMap_6);

#line 212 "output.m"
static void MR_CALL 
output__output_formatted_prof_node_5_p_0(
#line 212 "output.m"
  MR_Word output__ProfNode_6,
#line 212 "output.m"
  MR_Integer output__Index_7,
#line 212 "output.m"
  MR_Word output__IndexMap_8);

#line 200 "output.m"
static void MR_CALL 
output__output_call_graph_5_p_0(
#line 200 "output.m"
  MR_Word output__HeadVar__1_1,
#line 200 "output.m"
  MR_Word output__InfoMap_2,
#line 200 "output.m"
  MR_Word output__IndexMap_3);

#line 97 "output.m"
static void MR_CALL 
output__call_graph_headers_2_p_0(void);

#line 86 "output.m"
static void MR_CALL 
output__units_9_p_0(
#line 86 "output.m"
  MR_Word output__HeadVar__1_1,
#line 86 "output.m"
  MR_String * output__HeadVar__2_2,
#line 86 "output.m"
  MR_String * output__HeadVar__3_3,
#line 86 "output.m"
  MR_String * output__HeadVar__4_4,
#line 86 "output.m"
  MR_String * output__HeadVar__5_5,
#line 86 "output.m"
  MR_String * output__HeadVar__6_6,
#line 86 "output.m"
  MR_String * output__HeadVar__7_7,
#line 86 "output.m"
  MR_String * output__HeadVar__8_8,
#line 86 "output.m"
  MR_String * output__HeadVar__9_9);

#line 77 "output.m"
static MR_Word MR_CALL 
output__classify_profile_1_f_0(
#line 77 "output.m"
  MR_Word output__HeadVar__1_1);


static /* final */ const MR_Box output_scalar_common_1[2][1];

static /* final */ const MR_Box output_scalar_common_3[2][2];

static /* final */ const MR_Box output_scalar_common_4[2][7];


#line 79 "output.m"
/* sealed */ struct output__vector_common_type_2_0_s {
#line 79 "output.m"
  const MR_Word output__vector_common_type_2_0__vct_2_f_0;
#line 79 "output.m"
};

static /* final */ const struct output__vector_common_type_2_0_s output_vector_common_2[6];



static /* final */ const MR_Box output_scalar_common_1[2][1] = {
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


static /* final */ const struct output__vector_common_type_2_0_s output_vector_common_2[6] = {
  /* row 0 */   {     (MR_Integer) 1 },
  /* row 1 */   {     (MR_Integer) 2 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 0 },
  /* row 4 */   {     (MR_Integer) 0 },
  /* row 5 */   {     (MR_Integer) 0 },
};


#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"



#line 379 "output.c"
static const MR_FA_PseudoTypeInfo_Struct2 output__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 388 "output.c"
static const MR_EnumFunctorDesc output__output__enum_functor_desc_header_category_0_0 = {
  (MR_String) "time_headers",
  (MR_Integer) 0
};

#line 394 "output.c"
static const MR_EnumFunctorDesc output__output__enum_functor_desc_header_category_0_1 = {
  (MR_String) "memory_words_headers",
  (MR_Integer) 1
};

#line 400 "output.c"
static const MR_EnumFunctorDesc output__output__enum_functor_desc_header_category_0_2 = {
  (MR_String) "memory_cells_headers",
  (MR_Integer) 2
};

#line 406 "output.c"
static const MR_EnumFunctorDescPtr output__output__enum_value_ordered_header_category_0[3] = {
  &output__output__enum_functor_desc_header_category_0_0,
  &output__output__enum_functor_desc_header_category_0_1,
  &output__output__enum_functor_desc_header_category_0_2
};

#line 413 "output.c"
static const MR_EnumFunctorDescPtr output__output__enum_name_ordered_header_category_0[3] = {
  &output__output__enum_functor_desc_header_category_0_2,
  &output__output__enum_functor_desc_header_category_0_1,
  &output__output__enum_functor_desc_header_category_0_0
};

#line 420 "output.c"
static const MR_Integer output__output__functor_number_map_header_category_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 427 "output.c"
const MR_TypeCtorInfo_Struct output__output__type_ctor_info_header_category_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 444 "output.c"
static MR_bool MR_CALL 
output____Unify____header_category_0_0_10001(
#line 447 "output.c"
  MR_Box output__wrapper_arg_1,
#line 449 "output.c"
  MR_Box output__wrapper_arg_2)
#line 451 "output.c"
{
#line 453 "output.c"
  {
#line 455 "output.c"
    MR_bool output__succeeded;

#line 458 "output.c"
    {
#line 460 "output.c"
      output__succeeded = output____Unify____header_category_0_0(((MR_Word) output__wrapper_arg_1), ((MR_Word) output__wrapper_arg_2));
    }
#line 463 "output.c"
    return output__succeeded;
#line 465 "output.c"
  }
#line 467 "output.c"
}

#line 470 "output.c"
static void MR_CALL 
output____Compare____header_category_0_0_10001(
#line 473 "output.c"
  MR_Box * output__wrapper_arg_1,
#line 475 "output.c"
  MR_Box output__wrapper_arg_2,
#line 477 "output.c"
  MR_Box output__wrapper_arg_3)
#line 479 "output.c"
{
#line 481 "output.c"
  {
#line 483 "output.c"
    MR_Word output__conv0_HeadVar__1_1;

#line 486 "output.c"
    {
#line 488 "output.c"
      output____Compare____header_category_0_0(&output__conv0_HeadVar__1_1, ((MR_Word) output__wrapper_arg_2), ((MR_Word) output__wrapper_arg_3));
    }
#line 491 "output.c"
    *output__wrapper_arg_1 = ((MR_Box) (output__conv0_HeadVar__1_1));
#line 493 "output.c"
  }
#line 495 "output.c"
}

#line 330 "output.m"
static void MR_CALL 
output__IntroducedFrom__pred__output_formatted_child_list__330__1_4_p_0(
#line 330 "output.m"
  MR_Word output__IndexMap_6,
#line 330 "output.m"
  MR_Word output__HeadVar__2_24)
#line 330 "output.m"
{
#line 330 "output.m"
  {
#line 330 "output.m"
    MR_bool output__succeeded;
#line 330 "output.m"
    MR_String output__LabelName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), output__HeadVar__2_24, (MR_Integer) 0)));
#line 330 "output.m"
    MR_Integer output__CycleNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__HeadVar__2_24, (MR_Integer) 1)));
#line 330 "output.m"
    MR_Float output__Self_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), output__HeadVar__2_24, (MR_Integer) 2)));
#line 330 "output.m"
    MR_Float output__Descendant_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), output__HeadVar__2_24, (MR_Integer) 3)));
#line 330 "output.m"
    MR_Integer output__Calls_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__HeadVar__2_24, (MR_Integer) 4)));
#line 330 "output.m"
    MR_Integer output__TotalCalls_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__HeadVar__2_24, (MR_Integer) 5)));
#line 330 "output.m"
    MR_String output__Name_15;
#line 330 "output.m"
    MR_Integer output__Index_16;
#line 330 "output.m"
    MR_String output__Output_17;
#line 330 "output.m"
    MR_Word output__V_28_28;
#line 330 "output.m"
    MR_Word output__V_29_29;
#line 330 "output.m"
    MR_Word output__V_30_30;
#line 330 "output.m"
    MR_Word output__V_31_31;
#line 330 "output.m"
    MR_Word output__V_32_32;
#line 330 "output.m"
    MR_Word output__V_33_33;
#line 330 "output.m"
    MR_Word output__V_34_34;
#line 330 "output.m"
    MR_Word output__V_35_35;
#line 330 "output.m"
    MR_Word output__V_36_36;
#line 330 "output.m"
    MR_Word output__V_37_37;
#line 330 "output.m"
    MR_Word output__V_38_38;
#line 330 "output.m"
    MR_Word output__V_39_39;
#line 334 "output.m"
    MR_Box output__conv0_Index_16;

#line 458 "output.m"
    output__succeeded = (output__CycleNum_10 == (MR_Integer) 0);
#line 460 "output.m"
    if (output__succeeded)
#line 459 "output.m"
      output__Name_15 = output__LabelName_9;
#line 460 "output.m"
    else
#line 461 "output.m"
      {
#line 461 "output.m"
        MR_String output__CycleStr_52;
#line 461 "output.m"
        MR_Word output__V_53_53;
#line 461 "output.m"
        MR_Word output__V_54_54;
#line 461 "output.m"
        MR_Word output__V_56_56;

#line 461 "output.m"
        {
#line 461 "output.m"
          mercury__string__int_to_string_2_p_0(output__CycleNum_10, &output__CycleStr_52);
        }
#line 462 "output.m"
        {
#line 462 "output.m"
          output__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "output.m"
          MR_hl_field(MR_mktag(1), output__V_56_56, 0) = ((MR_Box) (output__CycleStr_52));
#line 462 "output.m"
          MR_hl_field(MR_mktag(1), output__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &output_scalar_common_3[1])));
#line 462 "output.m"
        }
#line 462 "output.m"
        {
#line 462 "output.m"
          output__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "output.m"
          MR_hl_field(MR_mktag(1), output__V_54_54, 0) = ((MR_Box) ((MR_String) "  <cycle "));
#line 462 "output.m"
          MR_hl_field(MR_mktag(1), output__V_54_54, 1) = ((MR_Box) (output__V_56_56));
#line 462 "output.m"
        }
#line 462 "output.m"
        {
#line 462 "output.m"
          output__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "output.m"
          MR_hl_field(MR_mktag(1), output__V_53_53, 0) = ((MR_Box) (output__LabelName_9));
#line 462 "output.m"
          MR_hl_field(MR_mktag(1), output__V_53_53, 1) = ((MR_Box) (output__V_54_54));
#line 462 "output.m"
        }
#line 462 "output.m"
        {
#line 462 "output.m"
          mercury__string__append_list_2_p_0(output__V_53_53, &output__Name_15);
        }
#line 461 "output.m"
      }
#line 334 "output.m"
    {
#line 334 "output.m"
      output__conv0_Index_16 = mercury__map__det_elem_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (output__LabelName_9)), output__IndexMap_6);
    }
#line 334 "output.m"
    output__Index_16 = ((MR_Integer) output__conv0_Index_16);
#line 336 "output.m"
    {
#line 336 "output.m"
      output__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 336 "output.m"
      MR_hl_field(MR_mktag(0), output__V_29_29, 0) = MR_box_float(output__Self_11);
#line 336 "output.m"
    }
#line 336 "output.m"
    {
#line 336 "output.m"
      output__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 336 "output.m"
      MR_hl_field(MR_mktag(0), output__V_31_31, 0) = MR_box_float(output__Descendant_12);
#line 336 "output.m"
    }
#line 336 "output.m"
    {
#line 336 "output.m"
      output__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 336 "output.m"
      MR_hl_field(MR_mktag(1), output__V_33_33, 0) = ((MR_Box) (output__Calls_13));
#line 336 "output.m"
    }
#line 336 "output.m"
    {
#line 336 "output.m"
      output__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 336 "output.m"
      MR_hl_field(MR_mktag(1), output__V_35_35, 0) = ((MR_Box) (output__TotalCalls_14));
#line 336 "output.m"
    }
#line 337 "output.m"
    {
#line 337 "output.m"
      output__V_37_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 337 "output.m"
      MR_hl_field(MR_mktag(2), output__V_37_37, 0) = ((MR_Box) (output__Name_15));
#line 337 "output.m"
    }
#line 337 "output.m"
    {
#line 337 "output.m"
      output__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 337 "output.m"
      MR_hl_field(MR_mktag(1), output__V_39_39, 0) = ((MR_Box) (output__Index_16));
#line 337 "output.m"
    }
#line 337 "output.m"
    {
#line 337 "output.m"
      output__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "output.m"
      MR_hl_field(MR_mktag(1), output__V_38_38, 0) = ((MR_Box) (output__V_39_39));
#line 337 "output.m"
      MR_hl_field(MR_mktag(1), output__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 337 "output.m"
    }
#line 337 "output.m"
    {
#line 337 "output.m"
      output__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "output.m"
      MR_hl_field(MR_mktag(1), output__V_36_36, 0) = ((MR_Box) (output__V_37_37));
#line 337 "output.m"
      MR_hl_field(MR_mktag(1), output__V_36_36, 1) = ((MR_Box) (output__V_38_38));
#line 337 "output.m"
    }
#line 336 "output.m"
    {
#line 336 "output.m"
      output__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "output.m"
      MR_hl_field(MR_mktag(1), output__V_34_34, 0) = ((MR_Box) (output__V_35_35));
#line 336 "output.m"
      MR_hl_field(MR_mktag(1), output__V_34_34, 1) = ((MR_Box) (output__V_36_36));
#line 336 "output.m"
    }
#line 336 "output.m"
    {
#line 336 "output.m"
      output__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "output.m"
      MR_hl_field(MR_mktag(1), output__V_32_32, 0) = ((MR_Box) (output__V_33_33));
#line 336 "output.m"
      MR_hl_field(MR_mktag(1), output__V_32_32, 1) = ((MR_Box) (output__V_34_34));
#line 336 "output.m"
    }
#line 336 "output.m"
    {
#line 336 "output.m"
      output__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "output.m"
      MR_hl_field(MR_mktag(1), output__V_30_30, 0) = ((MR_Box) (output__V_31_31));
#line 336 "output.m"
      MR_hl_field(MR_mktag(1), output__V_30_30, 1) = ((MR_Box) (output__V_32_32));
#line 336 "output.m"
    }
#line 336 "output.m"
    {
#line 336 "output.m"
      output__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "output.m"
      MR_hl_field(MR_mktag(1), output__V_28_28, 0) = ((MR_Box) (output__V_29_29));
#line 336 "output.m"
      MR_hl_field(MR_mktag(1), output__V_28_28, 1) = ((MR_Box) (output__V_30_30));
#line 336 "output.m"
    }
#line 335 "output.m"
    {
#line 335 "output.m"
      output__Output_17 = mercury__string__format_2_f_0((MR_String) "%20.2f %11.2f %7d/%-11d %s [%d]\n", output__V_28_28);
    }
#line 338 "output.m"
    {
#line 338 "output.m"
      mercury__io__write_string_3_p_0(output__Output_17);
#line 338 "output.m"
      return;
    }
#line 330 "output.m"
  }
#line 330 "output.m"
}

#line 282 "output.m"
static void MR_CALL 
output__IntroducedFrom__pred__output_formatted_cycle_parent_list__282__1_4_p_0(
#line 282 "output.m"
  MR_Word output__IndexMap_6,
#line 282 "output.m"
  MR_Word output__HeadVar__2_22)
#line 282 "output.m"
{
#line 282 "output.m"
  {
#line 282 "output.m"
    MR_bool output__succeeded;
#line 282 "output.m"
    MR_String output__LabelName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), output__HeadVar__2_22, (MR_Integer) 0)));
#line 282 "output.m"
    MR_Integer output__CycleNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__HeadVar__2_22, (MR_Integer) 1)));
#line 282 "output.m"
    MR_Integer output__Calls_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__HeadVar__2_22, (MR_Integer) 4)));
#line 282 "output.m"
    MR_String output__Name_14;
#line 282 "output.m"
    MR_Integer output__Index_15;
#line 282 "output.m"
    MR_Word output__V_26_26;
#line 282 "output.m"
    MR_Word output__V_28_28;
#line 282 "output.m"
    MR_Word output__V_29_29;
#line 282 "output.m"
    MR_Word output__V_30_30;
#line 282 "output.m"
    MR_Word output__V_31_31;
#line 282 "output.m"
    MR_Word output__V_32_32;
#line 283 "output.m"
    MR_Float output__V_11_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), output__HeadVar__2_22, (MR_Integer) 2)));
#line 283 "output.m"
    MR_Float output__V_12_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), output__HeadVar__2_22, (MR_Integer) 3)));
#line 285 "output.m"
    MR_Box output__conv0_Index_15;

#line 458 "output.m"
    output__succeeded = (output__CycleNum_10 == (MR_Integer) 0);
#line 460 "output.m"
    if (output__succeeded)
#line 459 "output.m"
      output__Name_14 = output__LabelName_9;
#line 460 "output.m"
    else
#line 461 "output.m"
      {
#line 461 "output.m"
        MR_String output__CycleStr_44;
#line 461 "output.m"
        MR_Word output__V_45_45;
#line 461 "output.m"
        MR_Word output__V_46_46;
#line 461 "output.m"
        MR_Word output__V_48_48;

#line 461 "output.m"
        {
#line 461 "output.m"
          mercury__string__int_to_string_2_p_0(output__CycleNum_10, &output__CycleStr_44);
        }
#line 462 "output.m"
        {
#line 462 "output.m"
          output__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "output.m"
          MR_hl_field(MR_mktag(1), output__V_48_48, 0) = ((MR_Box) (output__CycleStr_44));
#line 462 "output.m"
          MR_hl_field(MR_mktag(1), output__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &output_scalar_common_3[1])));
#line 462 "output.m"
        }
#line 462 "output.m"
        {
#line 462 "output.m"
          output__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "output.m"
          MR_hl_field(MR_mktag(1), output__V_46_46, 0) = ((MR_Box) ((MR_String) "  <cycle "));
#line 462 "output.m"
          MR_hl_field(MR_mktag(1), output__V_46_46, 1) = ((MR_Box) (output__V_48_48));
#line 462 "output.m"
        }
#line 462 "output.m"
        {
#line 462 "output.m"
          output__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "output.m"
          MR_hl_field(MR_mktag(1), output__V_45_45, 0) = ((MR_Box) (output__LabelName_9));
#line 462 "output.m"
          MR_hl_field(MR_mktag(1), output__V_45_45, 1) = ((MR_Box) (output__V_46_46));
#line 462 "output.m"
        }
#line 462 "output.m"
        {
#line 462 "output.m"
          mercury__string__append_list_2_p_0(output__V_45_45, &output__Name_14);
        }
#line 461 "output.m"
      }
#line 285 "output.m"
    {
#line 285 "output.m"
      output__conv0_Index_15 = mercury__map__det_elem_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (output__LabelName_9)), output__IndexMap_6);
    }
#line 285 "output.m"
    output__Index_15 = ((MR_Integer) output__conv0_Index_15);
#line 287 "output.m"
    {
#line 287 "output.m"
      output__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 287 "output.m"
      MR_hl_field(MR_mktag(1), output__V_28_28, 0) = ((MR_Box) (output__Calls_13));
#line 287 "output.m"
    }
#line 287 "output.m"
    {
#line 287 "output.m"
      output__V_30_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 287 "output.m"
      MR_hl_field(MR_mktag(2), output__V_30_30, 0) = ((MR_Box) (output__Name_14));
#line 287 "output.m"
    }
#line 287 "output.m"
    {
#line 287 "output.m"
      output__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 287 "output.m"
      MR_hl_field(MR_mktag(1), output__V_32_32, 0) = ((MR_Box) (output__Index_15));
#line 287 "output.m"
    }
#line 287 "output.m"
    {
#line 287 "output.m"
      output__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "output.m"
      MR_hl_field(MR_mktag(1), output__V_31_31, 0) = ((MR_Box) (output__V_32_32));
#line 287 "output.m"
      MR_hl_field(MR_mktag(1), output__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 287 "output.m"
    }
#line 287 "output.m"
    {
#line 287 "output.m"
      output__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "output.m"
      MR_hl_field(MR_mktag(1), output__V_29_29, 0) = ((MR_Box) (output__V_30_30));
#line 287 "output.m"
      MR_hl_field(MR_mktag(1), output__V_29_29, 1) = ((MR_Box) (output__V_31_31));
#line 287 "output.m"
    }
#line 287 "output.m"
    {
#line 287 "output.m"
      output__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "output.m"
      MR_hl_field(MR_mktag(1), output__V_26_26, 0) = ((MR_Box) (output__V_28_28));
#line 287 "output.m"
      MR_hl_field(MR_mktag(1), output__V_26_26, 1) = ((MR_Box) (output__V_29_29));
#line 287 "output.m"
    }
#line 286 "output.m"
    {
#line 286 "output.m"
      mercury__io__format_4_p_0((MR_String) "%40d             %s [%d]\n", output__V_26_26);
#line 286 "output.m"
      return;
    }
#line 282 "output.m"
  }
#line 282 "output.m"
}

#line 72 "output.m"
static void MR_CALL 
output____Compare____header_category_0_0(
#line 72 "output.m"
  MR_Word * output__HeadVar__1_1,
#line 72 "output.m"
  MR_Word output__HeadVar__2_2,
#line 72 "output.m"
  MR_Word output__HeadVar__3_3)
#line 72 "output.m"
{
#line 72 "output.m"
  {
#line 72 "output.m"
    MR_bool output__succeeded;
#line 72 "output.m"
    MR_Integer output__Cast_HeadVar1_4 = (MR_Integer) output__HeadVar__2_2;
#line 72 "output.m"
    MR_Integer output__Cast_HeadVar2_5 = (MR_Integer) output__HeadVar__3_3;

#line 72 "output.m"
    {
#line 72 "output.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(output__HeadVar__1_1, output__Cast_HeadVar1_4, output__Cast_HeadVar2_5);
#line 72 "output.m"
      return;
    }
#line 72 "output.m"
  }
#line 72 "output.m"
}

#line 72 "output.m"
static MR_bool MR_CALL 
output____Unify____header_category_0_0(
#line 72 "output.m"
  MR_Word output__HeadVar__2_1,
#line 72 "output.m"
  MR_Word output__HeadVar__2_2)
#line 72 "output.m"
{
#line 966 "output.c"
  {
#line 968 "output.c"
    MR_bool output__succeeded = (output__HeadVar__2_1 == output__HeadVar__2_2);

#line 971 "output.c"
    return output__succeeded;
#line 973 "output.c"
  }
#line 72 "output.m"
}

#line 455 "output.m"
static MR_String MR_CALL 
output__construct_name_2_f_0(
#line 455 "output.m"
  MR_String output__Name_4,
#line 455 "output.m"
  MR_Integer output__CycleNum_5)
#line 455 "output.m"
{
#line 460 "output.m"
  {
#line 460 "output.m"
    MR_bool output__succeeded = (output__CycleNum_5 == (MR_Integer) 0);
#line 460 "output.m"
    MR_String output__FullName_6;

#line 460 "output.m"
    if (output__succeeded)
#line 459 "output.m"
      output__FullName_6 = output__Name_4;
#line 460 "output.m"
    else
#line 461 "output.m"
      {
#line 461 "output.m"
        MR_String output__CycleStr_7;
#line 461 "output.m"
        MR_Word output__V_8_8;
#line 461 "output.m"
        MR_Word output__V_9_9;
#line 461 "output.m"
        MR_Word output__V_11_11;

#line 461 "output.m"
        {
#line 461 "output.m"
          mercury__string__int_to_string_2_p_0(output__CycleNum_5, &output__CycleStr_7);
        }
#line 462 "output.m"
        {
#line 462 "output.m"
          output__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "output.m"
          MR_hl_field(MR_mktag(1), output__V_11_11, 0) = ((MR_Box) (output__CycleStr_7));
#line 462 "output.m"
          MR_hl_field(MR_mktag(1), output__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &output_scalar_common_3[1])));
#line 462 "output.m"
        }
#line 462 "output.m"
        {
#line 462 "output.m"
          output__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "output.m"
          MR_hl_field(MR_mktag(1), output__V_9_9, 0) = ((MR_Box) ((MR_String) "  <cycle "));
#line 462 "output.m"
          MR_hl_field(MR_mktag(1), output__V_9_9, 1) = ((MR_Box) (output__V_11_11));
#line 462 "output.m"
        }
#line 462 "output.m"
        {
#line 462 "output.m"
          output__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "output.m"
          MR_hl_field(MR_mktag(1), output__V_8_8, 0) = ((MR_Box) (output__Name_4));
#line 462 "output.m"
          MR_hl_field(MR_mktag(1), output__V_8_8, 1) = ((MR_Box) (output__V_9_9));
#line 462 "output.m"
        }
#line 462 "output.m"
        {
#line 462 "output.m"
          mercury__string__append_list_2_p_0(output__V_8_8, &output__FullName_6);
        }
#line 461 "output.m"
      }
#line 460 "output.m"
    return output__FullName_6;
#line 460 "output.m"
  }
#line 455 "output.m"
}

#line 442 "output.m"
static void MR_CALL 
output__output_alphabet_listing_2_3_p_0(
#line 442 "output.m"
  MR_Word output__HeadVar__1_1)
#line 442 "output.m"
{
#line 445 "output.m"
  while (MR_TRUE)
#line 445 "output.m"
    {
#line 445 "output.m"
      /* tailcall optimized into a loop */
#line 445 "output.m"
      {
#line 445 "output.m"
        MR_bool output__succeeded;

#line 445 "output.m"
        if ((output__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 446 "output.m"
          {
#line 446 "output.m"
            mercury__io__nl_2_p_0();
#line 446 "output.m"
            return;
          }
#line 445 "output.m"
        else
#line 447 "output.m"
          {
#line 447 "output.m"
            MR_String output__Name_8;
#line 447 "output.m"
            MR_Integer output__Index_9;
#line 447 "output.m"
            MR_Word output__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), output__HeadVar__1_1, (MR_Integer) 1)));
#line 447 "output.m"
            MR_Word output__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), output__HeadVar__1_1, (MR_Integer) 0)));
#line 447 "output.m"
            MR_String output__V_26_26;
#line 447 "output.m"
            MR_String output__V_36_36;

#line 447 "output.m"
            output__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), output__V_14_14, (MR_Integer) 0)));
#line 447 "output.m"
            output__Index_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__V_14_14, (MR_Integer) 1)));
#line 448 "output.m"
            {
#line 448 "output.m"
              mercury__io__write_string_3_p_0((MR_String) "[");
            }
#line 448 "output.m"
            {
#line 448 "output.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &output_scalar_common_1[0], output__Index_9, &output__V_26_26);
            }
#line 448 "output.m"
            {
#line 448 "output.m"
              mercury__io__write_string_3_p_0(output__V_26_26);
            }
#line 448 "output.m"
            {
#line 448 "output.m"
              mercury__io__write_string_3_p_0((MR_String) "]\t");
            }
#line 448 "output.m"
            {
#line 448 "output.m"
              mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) &output_scalar_common_1[1], (MR_Integer) 30, output__Name_8, &output__V_36_36);
            }
#line 448 "output.m"
            {
#line 448 "output.m"
              mercury__io__write_string_3_p_0(output__V_36_36);
            }
#line 448 "output.m"
            {
#line 448 "output.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 449 "output.m"
            /* direct tailcall eliminated */
#line 449 "output.m"
            {
#line 449 "output.m"
              MR_Word output__HeadVar__1__tmp_copy_1 = output__T_10;

#line 449 "output.m"
              output__HeadVar__1_1 = output__HeadVar__1__tmp_copy_1;
#line 449 "output.m"
            }
#line 449 "output.m"
            continue;
#line 447 "output.m"
          }
#line 445 "output.m"
      }
#line 445 "output.m"
      break;
#line 445 "output.m"
    }
#line 442 "output.m"
}

#line 392 "output.m"
static void MR_CALL 
output__flat_profile_6_p_0(
#line 392 "output.m"
  MR_Word output__HeadVar__1_1,
#line 392 "output.m"
  MR_Float output__CumTime0_2,
#line 392 "output.m"
  MR_Word output__InfoMap_3,
#line 392 "output.m"
  MR_Word output__IndexMap_4)
#line 392 "output.m"
{
#line 395 "output.m"
  while (MR_TRUE)
#line 395 "output.m"
    {
#line 395 "output.m"
      /* tailcall optimized into a loop */
#line 395 "output.m"
      {
#line 395 "output.m"
        MR_bool output__succeeded;

#line 395 "output.m"
        if ((output__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 395 "output.m"
          {
#line 395 "output.m"
          }
#line 395 "output.m"
        else
#line 396 "output.m"
          {
#line 396 "output.m"
            MR_Word output__TypeCtorInfo_85_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 396 "output.m"
            MR_String output__LabelName_13 = ((MR_String) (MR_hl_field(MR_mktag(1), output__HeadVar__1_1, (MR_Integer) 0)));
#line 396 "output.m"
            MR_Word output__LNs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), output__HeadVar__1_1, (MR_Integer) 1)));
#line 396 "output.m"
            MR_Word output__ProfNode_19;
#line 396 "output.m"
            MR_Integer output__Index_20;
#line 396 "output.m"
            MR_String output__Name_21;
#line 396 "output.m"
            MR_Integer output__CycleNum_22;
#line 396 "output.m"
            MR_Float output__Percentage_24;
#line 396 "output.m"
            MR_Float output__Self_25;
#line 396 "output.m"
            MR_Float output__Descendant_26;
#line 396 "output.m"
            MR_Integer output__TotalCalls_27;
#line 396 "output.m"
            MR_Integer output__SelfCalls_28;
#line 396 "output.m"
            MR_Float output__FloatTotalCalls_42;
#line 396 "output.m"
            MR_Integer output__Calls_43;
#line 396 "output.m"
            MR_Float output__CumTime_44;
#line 396 "output.m"
            MR_Float output__SelfSeconds_45;
#line 396 "output.m"
            MR_Float output__DescSeconds_46;
#line 396 "output.m"
            MR_Float output__SelfMs_47;
#line 396 "output.m"
            MR_Float output__DescMs_48;
#line 396 "output.m"
            MR_String output__FullName_49;
#line 396 "output.m"
            MR_String output__IndexStr0_50;
#line 396 "output.m"
            MR_String output__IndexStr_51;
#line 396 "output.m"
            MR_Float output__V_55_55;
#line 396 "output.m"
            MR_Float output__V_56_56;
#line 396 "output.m"
            MR_Word output__V_59_59;
#line 396 "output.m"
            MR_Word output__V_61_61;
#line 396 "output.m"
            MR_String output__V_89_89;
#line 396 "output.m"
            MR_Word output__V_95_95;
#line 396 "output.m"
            MR_String output__V_102_102;
#line 396 "output.m"
            MR_String output__V_115_115;
#line 396 "output.m"
            MR_String output__V_128_128;
#line 396 "output.m"
            MR_String output__V_139_139;
#line 396 "output.m"
            MR_String output__V_152_152;
#line 396 "output.m"
            MR_String output__V_165_165;
#line 396 "output.m"
            MR_String output__V_175_175;
#line 397 "output.m"
            MR_Box output__conv0_ProfNode_19;
#line 398 "output.m"
            MR_Box output__conv1_Index_20;

#line 397 "output.m"
            {
#line 397 "output.m"
              mercury__map__lookup_3_p_0(output__TypeCtorInfo_85_85, (MR_Word) &output_prof_info__output_prof_info__type_ctor_info_output_prof_0, output__InfoMap_3, ((MR_Box) (output__LabelName_13)), &output__conv0_ProfNode_19);
            }
#line 397 "output.m"
            output__ProfNode_19 = ((MR_Word) output__conv0_ProfNode_19);
#line 398 "output.m"
            {
#line 398 "output.m"
              mercury__map__lookup_3_p_0(output__TypeCtorInfo_85_85, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, output__IndexMap_4, ((MR_Box) (output__LabelName_13)), &output__conv1_Index_20);
            }
#line 398 "output.m"
            output__Index_20 = ((MR_Integer) output__conv1_Index_20);
#line 409 "output.m"
            if (((MR_tag((MR_Word) output__ProfNode_19)) == (MR_mktag((MR_Integer) 1))))
#line 410 "output.m"
              {
#line 411 "output.m"
                {
#line 411 "output.m"
                  mercury__require__error_1_p_0((MR_String) "output_flat_profile: Cannot have output_cycle_prof\n");
#line 411 "output.m"
                  return;
                }
#line 410 "output.m"
              }
#line 409 "output.m"
            else
#line 400 "output.m"
              {
#line 400 "output.m"
                MR_Float output___Percentage_23;
#line 400 "output.m"
                MR_Word output___ParentList_29;
#line 400 "output.m"
                MR_Word output___ChildList_30;
#line 400 "output.m"
                MR_Word output__V_31_31;
#line 400 "output.m"
                MR_Word output__V_32_32;

#line 400 "output.m"
                output__Name_21 = ((MR_String) (MR_hl_field(MR_mktag(0), output__ProfNode_19, (MR_Integer) 0)));
#line 400 "output.m"
                output__CycleNum_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__ProfNode_19, (MR_Integer) 1)));
#line 400 "output.m"
                output___Percentage_23 = MR_unbox_float((MR_hl_field(MR_mktag(0), output__ProfNode_19, (MR_Integer) 2)));
#line 400 "output.m"
                output__Percentage_24 = MR_unbox_float((MR_hl_field(MR_mktag(0), output__ProfNode_19, (MR_Integer) 3)));
#line 400 "output.m"
                output__Self_25 = MR_unbox_float((MR_hl_field(MR_mktag(0), output__ProfNode_19, (MR_Integer) 4)));
#line 400 "output.m"
                output__Descendant_26 = MR_unbox_float((MR_hl_field(MR_mktag(0), output__ProfNode_19, (MR_Integer) 5)));
#line 400 "output.m"
                output__TotalCalls_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__ProfNode_19, (MR_Integer) 6)));
#line 400 "output.m"
                output__SelfCalls_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__ProfNode_19, (MR_Integer) 7)));
#line 400 "output.m"
                output___ParentList_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), output__ProfNode_19, (MR_Integer) 8)));
#line 400 "output.m"
                output___ChildList_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), output__ProfNode_19, (MR_Integer) 9)));
#line 400 "output.m"
                output__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), output__ProfNode_19, (MR_Integer) 10)));
#line 400 "output.m"
                output__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), output__ProfNode_19, (MR_Integer) 11)));
#line 400 "output.m"
              }
#line 413 "output.m"
            {
#line 413 "output.m"
              output__V_55_55 = mercury__float__float_1_f_0(output__TotalCalls_27);
            }
#line 413 "output.m"
            {
#line 413 "output.m"
              output__V_56_56 = mercury__float__float_1_f_0(output__SelfCalls_28);
            }
#line 413 "output.m"
            output__FloatTotalCalls_42 = (output__V_55_55 + output__V_56_56);
#line 414 "output.m"
            output__Calls_43 = (output__SelfCalls_28 + output__TotalCalls_27);
#line 415 "output.m"
            output__CumTime_44 = (output__CumTime0_2 + output__Self_25);
#line 416 "output.m"
            {
#line 416 "output.m"
              output__SelfSeconds_45 = generate_output__checked_float_divide_2_f_0(output__Self_25, output__FloatTotalCalls_42);
            }
#line 417 "output.m"
            {
#line 417 "output.m"
              output__DescSeconds_46 = generate_output__checked_float_divide_2_f_0(output__Descendant_26, output__FloatTotalCalls_42);
            }
#line 418 "output.m"
            output__SelfMs_47 = (((MR_Float) 1000.0000000000000) * output__SelfSeconds_45);
#line 419 "output.m"
            output__DescMs_48 = (((MR_Float) 1000.0000000000000) * output__DescSeconds_46);
#line 421 "output.m"
            {
#line 421 "output.m"
              output__FullName_49 = output__construct_name_2_f_0(output__Name_21, output__CycleNum_22);
            }
#line 422 "output.m"
            {
#line 422 "output.m"
              mercury__string__int_to_string_2_p_0(output__Index_20, &output__IndexStr0_50);
            }
#line 423 "output.m"
            {
#line 423 "output.m"
              output__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 423 "output.m"
              MR_hl_field(MR_mktag(1), output__V_61_61, 0) = ((MR_Box) (output__IndexStr0_50));
#line 423 "output.m"
              MR_hl_field(MR_mktag(1), output__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &output_scalar_common_3[0])));
#line 423 "output.m"
            }
#line 423 "output.m"
            {
#line 423 "output.m"
              output__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 423 "output.m"
              MR_hl_field(MR_mktag(1), output__V_59_59, 0) = ((MR_Box) ((MR_String) "["));
#line 423 "output.m"
              MR_hl_field(MR_mktag(1), output__V_59_59, 1) = ((MR_Box) (output__V_61_61));
#line 423 "output.m"
            }
#line 423 "output.m"
            {
#line 423 "output.m"
              mercury__string__append_list_2_p_0(output__V_59_59, &output__IndexStr_51);
            }
#line 1409 "output.c"
            output__V_95_95 = (MR_Word) &output_scalar_common_1[0];
#line 425 "output.m"
            {
#line 425 "output.m"
              mercury__string__format__format_float_component_width_prec_6_p_0(output__V_95_95, (MR_Integer) 5, (MR_Integer) 1, (MR_Integer) 2, output__Percentage_24, &output__V_89_89);
            }
#line 425 "output.m"
            {
#line 425 "output.m"
              mercury__io__write_string_3_p_0(output__V_89_89);
            }
#line 424 "output.m"
            {
#line 424 "output.m"
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
#line 425 "output.m"
            {
#line 425 "output.m"
              mercury__string__format__format_float_component_width_prec_6_p_0(output__V_95_95, (MR_Integer) 10, (MR_Integer) 2, (MR_Integer) 2, output__CumTime_44, &output__V_102_102);
            }
#line 425 "output.m"
            {
#line 425 "output.m"
              mercury__io__write_string_3_p_0(output__V_102_102);
            }
#line 424 "output.m"
            {
#line 424 "output.m"
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
#line 425 "output.m"
            {
#line 425 "output.m"
              mercury__string__format__format_float_component_width_prec_6_p_0(output__V_95_95, (MR_Integer) 8, (MR_Integer) 2, (MR_Integer) 2, output__Self_25, &output__V_115_115);
            }
#line 425 "output.m"
            {
#line 425 "output.m"
              mercury__io__write_string_3_p_0(output__V_115_115);
            }
#line 424 "output.m"
            {
#line 424 "output.m"
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
#line 425 "output.m"
            {
#line 425 "output.m"
              mercury__string__format__format_signed_int_component_width_noprec_4_p_0(output__V_95_95, (MR_Integer) 8, output__Calls_43, &output__V_128_128);
            }
#line 425 "output.m"
            {
#line 425 "output.m"
              mercury__io__write_string_3_p_0(output__V_128_128);
            }
#line 424 "output.m"
            {
#line 424 "output.m"
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
#line 426 "output.m"
            {
#line 426 "output.m"
              mercury__string__format__format_float_component_width_prec_6_p_0(output__V_95_95, (MR_Integer) 8, (MR_Integer) 2, (MR_Integer) 2, output__SelfMs_47, &output__V_139_139);
            }
#line 426 "output.m"
            {
#line 426 "output.m"
              mercury__io__write_string_3_p_0(output__V_139_139);
            }
#line 424 "output.m"
            {
#line 424 "output.m"
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
#line 426 "output.m"
            {
#line 426 "output.m"
              mercury__string__format__format_float_component_width_prec_6_p_0(output__V_95_95, (MR_Integer) 8, (MR_Integer) 2, (MR_Integer) 2, output__DescMs_48, &output__V_152_152);
            }
#line 426 "output.m"
            {
#line 426 "output.m"
              mercury__io__write_string_3_p_0(output__V_152_152);
            }
#line 424 "output.m"
            {
#line 424 "output.m"
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
#line 426 "output.m"
            {
#line 426 "output.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(output__V_95_95, output__FullName_49, &output__V_165_165);
            }
#line 426 "output.m"
            {
#line 426 "output.m"
              mercury__io__write_string_3_p_0(output__V_165_165);
            }
#line 424 "output.m"
            {
#line 424 "output.m"
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
#line 426 "output.m"
            {
#line 426 "output.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(output__V_95_95, output__IndexStr_51, &output__V_175_175);
            }
#line 426 "output.m"
            {
#line 426 "output.m"
              mercury__io__write_string_3_p_0(output__V_175_175);
            }
#line 424 "output.m"
            {
#line 424 "output.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 429 "output.m"
            /* direct tailcall eliminated */
#line 429 "output.m"
            {
#line 429 "output.m"
              MR_Word output__HeadVar__1__tmp_copy_1 = output__LNs_14;
#line 429 "output.m"
              MR_Float output__CumTime0__tmp_copy_2 = output__CumTime_44;

#line 429 "output.m"
              output__CumTime0_2 = output__CumTime0__tmp_copy_2;
#line 429 "output.m"
              output__HeadVar__1_1 = output__HeadVar__1__tmp_copy_1;
#line 429 "output.m"
            }
#line 429 "output.m"
            continue;
#line 396 "output.m"
          }
#line 395 "output.m"
      }
#line 395 "output.m"
      break;
#line 395 "output.m"
    }
#line 392 "output.m"
}

#line 341 "output.m"
static void MR_CALL 
output__flat_headers_2_p_0(void)
#line 341 "output.m"
{
#line 343 "output.m"
  {
#line 343 "output.m"
    MR_bool output__succeeded;
#line 343 "output.m"
    MR_Word output__Globals_4;
#line 343 "output.m"
    MR_Word output__WhatToProfile_5;
#line 343 "output.m"
    MR_Word output__Category_6;
#line 343 "output.m"
    MR_String output__ShortWhat_7;
#line 343 "output.m"
    MR_String output__LongWhat_9;
#line 343 "output.m"
    MR_String output__ShortUnits_10;
#line 343 "output.m"
    MR_String output__Units_11;
#line 343 "output.m"
    MR_String output__MilliUnits_12;
#line 343 "output.m"
    MR_String output__MilliUnitsPerCall_13;
#line 343 "output.m"
    MR_String output__SpentIn_14;
#line 343 "output.m"
    MR_String output__V_102_102;
#line 343 "output.m"
    MR_Word output__V_108_108;
#line 343 "output.m"
    MR_String output__V_111_111;
#line 343 "output.m"
    MR_String output__V_122_122;
#line 343 "output.m"
    MR_String output__V_131_131;
#line 343 "output.m"
    MR_String output__V_142_142;
#line 343 "output.m"
    MR_String output__V_151_151;
#line 343 "output.m"
    MR_String output__V_162_162;
#line 343 "output.m"
    MR_String output__V_172_172;
#line 343 "output.m"
    MR_String output__V_181_181;
#line 343 "output.m"
    MR_String output__V_192_192;
#line 343 "output.m"
    MR_String output__V_202_202;
#line 343 "output.m"
    MR_String output__V_211_211;
#line 343 "output.m"
    MR_String output__V_222_222;
#line 343 "output.m"
    MR_String output__V_233_233;
#line 343 "output.m"
    MR_String output__V_244_244;
#line 343 "output.m"
    MR_String output__V_255_255;
#line 343 "output.m"
    MR_String output__V_266_266;
#line 347 "output.m"
    MR_String output___What_8;

#line 344 "output.m"
    {
#line 344 "output.m"
      globals__io_get_globals_3_p_0(&output__Globals_4);
    }
#line 345 "output.m"
    {
#line 345 "output.m"
      globals__get_what_to_profile_2_p_0(output__Globals_4, &output__WhatToProfile_5);
    }
#line 346 "output.m"
    {
#line 346 "output.m"
      output__Category_6 = output__classify_profile_1_f_0(output__WhatToProfile_5);
    }
#line 347 "output.m"
    {
#line 347 "output.m"
      output__units_9_p_0(output__Category_6, &output__ShortWhat_7, &output___What_8, &output__LongWhat_9, &output__ShortUnits_10, &output__Units_11, &output__MilliUnits_12, &output__MilliUnitsPerCall_13, &output__SpentIn_14);
    }
#line 350 "output.m"
    {
#line 350 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "\nflat profile:\n\n");
    }
#line 352 "output.m"
    {
#line 352 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "%\t\tthe percentage of total ");
    }
#line 1657 "output.c"
    output__V_108_108 = (MR_Word) &output_scalar_common_1[0];
#line 353 "output.m"
    {
#line 353 "output.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(output__V_108_108, output__LongWhat_9, &output__V_102_102);
    }
#line 353 "output.m"
    {
#line 353 "output.m"
      mercury__io__write_string_3_p_0(output__V_102_102);
    }
#line 352 "output.m"
    {
#line 352 "output.m"
      mercury__io__write_string_3_p_0((MR_String) " of the program\n");
    }
#line 355 "output.m"
    {
#line 355 "output.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(output__V_108_108, output__ShortWhat_7, &output__V_111_111);
    }
#line 355 "output.m"
    {
#line 355 "output.m"
      mercury__io__write_string_3_p_0(output__V_111_111);
    }
#line 354 "output.m"
    {
#line 354 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tused by this procedure.\n\n");
    }
#line 357 "output.m"
    {
#line 357 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "cumulative\tthe total number of ");
    }
#line 359 "output.m"
    {
#line 359 "output.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(output__V_108_108, output__Units_11, &output__V_122_122);
    }
#line 359 "output.m"
    {
#line 359 "output.m"
      mercury__io__write_string_3_p_0(output__V_122_122);
    }
#line 357 "output.m"
    {
#line 357 "output.m"
      mercury__io__write_string_3_p_0((MR_String) " for the current procedure and\n");
    }
#line 361 "output.m"
    {
#line 361 "output.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(output__V_108_108, output__ShortUnits_10, &output__V_131_131);
    }
#line 361 "output.m"
    {
#line 361 "output.m"
      mercury__io__write_string_3_p_0(output__V_131_131);
    }
#line 360 "output.m"
    {
#line 360 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tthe ones listed above it.\n\n");
    }
#line 363 "output.m"
    {
#line 363 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "self\t\tthe number of ");
    }
#line 365 "output.m"
    {
#line 365 "output.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(output__V_108_108, output__Units_11, &output__V_142_142);
    }
#line 365 "output.m"
    {
#line 365 "output.m"
      mercury__io__write_string_3_p_0(output__V_142_142);
    }
#line 363 "output.m"
    {
#line 363 "output.m"
      mercury__io__write_string_3_p_0((MR_String) " accounted for by this procedure alone.\n");
    }
#line 367 "output.m"
    {
#line 367 "output.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(output__V_108_108, output__ShortUnits_10, &output__V_151_151);
    }
#line 367 "output.m"
    {
#line 367 "output.m"
      mercury__io__write_string_3_p_0(output__V_151_151);
    }
#line 366 "output.m"
    {
#line 366 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tThe listing is sorted on this row.\n\n");
    }
#line 369 "output.m"
    {
#line 369 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "calls\t\tthe number of times this procedure was called.\n\n");
    }
#line 372 "output.m"
    {
#line 372 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "self\t\tthe average number of ");
    }
#line 373 "output.m"
    {
#line 373 "output.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(output__V_108_108, output__MilliUnits_12, &output__V_162_162);
    }
#line 373 "output.m"
    {
#line 373 "output.m"
      mercury__io__write_string_3_p_0(output__V_162_162);
    }
#line 372 "output.m"
    {
#line 372 "output.m"
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
#line 373 "output.m"
    {
#line 373 "output.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(output__V_108_108, output__SpentIn_14, &output__V_172_172);
    }
#line 373 "output.m"
    {
#line 373 "output.m"
      mercury__io__write_string_3_p_0(output__V_172_172);
    }
#line 372 "output.m"
    {
#line 372 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 375 "output.m"
    {
#line 375 "output.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(output__V_108_108, output__MilliUnitsPerCall_13, &output__V_181_181);
    }
#line 375 "output.m"
    {
#line 375 "output.m"
      mercury__io__write_string_3_p_0(output__V_181_181);
    }
#line 374 "output.m"
    {
#line 374 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "  \tthis procedure per call.\n\n");
    }
#line 377 "output.m"
    {
#line 377 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "total\t\tthe average number of ");
    }
#line 379 "output.m"
    {
#line 379 "output.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(output__V_108_108, output__MilliUnits_12, &output__V_192_192);
    }
#line 379 "output.m"
    {
#line 379 "output.m"
      mercury__io__write_string_3_p_0(output__V_192_192);
    }
#line 377 "output.m"
    {
#line 377 "output.m"
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
#line 379 "output.m"
    {
#line 379 "output.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(output__V_108_108, output__SpentIn_14, &output__V_202_202);
    }
#line 379 "output.m"
    {
#line 379 "output.m"
      mercury__io__write_string_3_p_0(output__V_202_202);
    }
#line 377 "output.m"
    {
#line 377 "output.m"
      mercury__io__write_string_3_p_0((MR_String) " this procedure and its\n");
    }
#line 381 "output.m"
    {
#line 381 "output.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(output__V_108_108, output__MilliUnitsPerCall_13, &output__V_211_211);
    }
#line 381 "output.m"
    {
#line 381 "output.m"
      mercury__io__write_string_3_p_0(output__V_211_211);
    }
#line 380 "output.m"
    {
#line 380 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "  \tdescendents per call.\n\n");
    }
#line 383 "output.m"
    {
#line 383 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "name\t\tthe name of the procedure followed by its index number.\n\n");
    }
#line 386 "output.m"
    {
#line 386 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "   %  cumulative    self              self");
    }
#line 387 "output.m"
    {
#line 387 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "    total\n");
    }
#line 388 "output.m"
    {
#line 388 "output.m"
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
#line 389 "output.m"
    {
#line 389 "output.m"
      mercury__string__format__format_string_component_width_noprec_4_p_0(output__V_108_108, (MR_Integer) 4, output__ShortWhat_7, &output__V_222_222);
    }
#line 389 "output.m"
    {
#line 389 "output.m"
      mercury__io__write_string_3_p_0(output__V_222_222);
    }
#line 388 "output.m"
    {
#line 388 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "    ");
    }
#line 389 "output.m"
    {
#line 389 "output.m"
      mercury__string__format__format_string_component_width_noprec_4_p_0(output__V_108_108, (MR_Integer) 7, output__ShortUnits_10, &output__V_233_233);
    }
#line 389 "output.m"
    {
#line 389 "output.m"
      mercury__io__write_string_3_p_0(output__V_233_233);
    }
#line 388 "output.m"
    {
#line 388 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "  ");
    }
#line 389 "output.m"
    {
#line 389 "output.m"
      mercury__string__format__format_string_component_width_noprec_4_p_0(output__V_108_108, (MR_Integer) 7, output__ShortUnits_10, &output__V_244_244);
    }
#line 389 "output.m"
    {
#line 389 "output.m"
      mercury__io__write_string_3_p_0(output__V_244_244);
    }
#line 388 "output.m"
    {
#line 388 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "    calls ");
    }
#line 390 "output.m"
    {
#line 390 "output.m"
      mercury__string__format__format_string_component_width_noprec_4_p_0(output__V_108_108, (MR_Integer) 8, output__MilliUnitsPerCall_13, &output__V_255_255);
    }
#line 390 "output.m"
    {
#line 390 "output.m"
      mercury__io__write_string_3_p_0(output__V_255_255);
    }
#line 388 "output.m"
    {
#line 388 "output.m"
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
#line 390 "output.m"
    {
#line 390 "output.m"
      mercury__string__format__format_string_component_width_noprec_4_p_0(output__V_108_108, (MR_Integer) 8, output__MilliUnitsPerCall_13, &output__V_266_266);
    }
#line 390 "output.m"
    {
#line 390 "output.m"
      mercury__io__write_string_3_p_0(output__V_266_266);
    }
#line 388 "output.m"
    {
#line 388 "output.m"
      mercury__io__write_string_3_p_0((MR_String) " name\n");
#line 388 "output.m"
      return;
    }
#line 343 "output.m"
  }
#line 341 "output.m"
}

#line 330 "output.m"
static void MR_CALL 
output__output_formatted_child_list_4_p_0_1(
#line 330 "output.m"
  MR_Box output__closure_arg,
#line 330 "output.m"
  MR_Box output__wrapper_arg_1,
#line 330 "output.m"
  MR_Box output__wrapper_arg_2,
#line 330 "output.m"
  MR_Box * output__wrapper_arg_3)
#line 330 "output.m"
{
#line 330 "output.m"
  {
#line 330 "output.m"
    MR_Box output__closure = output__closure_arg;

#line 330 "output.m"
    {
#line 330 "output.m"
      output__IntroducedFrom__pred__output_formatted_child_list__330__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), output__closure, (MR_Integer) 3))), ((MR_Word) output__wrapper_arg_1));
#line 330 "output.m"
      return;
    }
#line 330 "output.m"
  }
#line 330 "output.m"
}

#line 326 "output.m"
static void MR_CALL 
output__output_formatted_child_list_4_p_0(
#line 326 "output.m"
  MR_Word output__Children_5,
#line 326 "output.m"
  MR_Word output__IndexMap_6)
#line 326 "output.m"
{
#line 329 "output.m"
  {
#line 329 "output.m"
    MR_bool output__succeeded;
#line 329 "output.m"
    MR_Word output__V_20_20;
#line 330 "output.m"
    MR_Box output__conv0_STATE_VARIABLE_IO_19;

#line 330 "output.m"
    {
#line 330 "output.m"
      output__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 330 "output.m"
      MR_hl_field(MR_mktag(0), output__V_20_20, 0) = ((MR_Box) (&output_scalar_common_4[1]));
#line 330 "output.m"
      MR_hl_field(MR_mktag(0), output__V_20_20, 1) = ((MR_Box) (output__output_formatted_child_list_4_p_0_1));
#line 330 "output.m"
      MR_hl_field(MR_mktag(0), output__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 330 "output.m"
      MR_hl_field(MR_mktag(0), output__V_20_20, 3) = ((MR_Box) (output__IndexMap_6));
#line 330 "output.m"
    }
#line 330 "output.m"
    {
#line 330 "output.m"
      mercury__list__foldl_4_p_2((MR_Word) &output_prof_info__output_prof_info__type_ctor_info_child_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, output__V_20_20, output__Children_5, ((MR_Box) ((MR_Integer) 0)), &output__conv0_STATE_VARIABLE_IO_19);
    }
#line 329 "output.m"
  }
#line 326 "output.m"
}

#line 310 "output.m"
static void MR_CALL 
output__output_formatted_cycle_child_list_4_p_0(
#line 310 "output.m"
  MR_Word output__HeadVar__1_1,
#line 310 "output.m"
  MR_Word output__IndexMap_2)
#line 310 "output.m"
{
#line 313 "output.m"
  while (MR_TRUE)
#line 313 "output.m"
    {
#line 313 "output.m"
      /* tailcall optimized into a loop */
#line 313 "output.m"
      {
#line 313 "output.m"
        MR_bool output__succeeded;

#line 313 "output.m"
        if ((output__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 313 "output.m"
          {
#line 313 "output.m"
          }
#line 313 "output.m"
        else
#line 314 "output.m"
          {
#line 314 "output.m"
            MR_Word output__Child_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), output__HeadVar__1_1, (MR_Integer) 0)));
#line 314 "output.m"
            MR_Word output__Childs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), output__HeadVar__1_1, (MR_Integer) 1)));
#line 314 "output.m"
            MR_String output__LabelName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), output__Child_9, (MR_Integer) 0)));
#line 314 "output.m"
            MR_Integer output__CycleNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__Child_9, (MR_Integer) 1)));
#line 314 "output.m"
            MR_Integer output__Calls_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__Child_9, (MR_Integer) 4)));
#line 314 "output.m"
            MR_String output__Name_19;
#line 314 "output.m"
            MR_Integer output__Index_20;
#line 314 "output.m"
            MR_String output__V_36_36;
#line 314 "output.m"
            MR_Word output__V_42_42;
#line 314 "output.m"
            MR_String output__V_47_47;
#line 314 "output.m"
            MR_String output__V_57_57;
#line 315 "output.m"
            MR_Float output___Self_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), output__Child_9, (MR_Integer) 2)));
#line 315 "output.m"
            MR_Float output___Descendant_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), output__Child_9, (MR_Integer) 3)));
#line 315 "output.m"
            MR_Integer output__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__Child_9, (MR_Integer) 5)));
#line 317 "output.m"
            MR_Box output__conv0_Index_20;

#line 458 "output.m"
            output__succeeded = (output__CycleNum_14 == (MR_Integer) 0);
#line 460 "output.m"
            if (output__succeeded)
#line 459 "output.m"
              output__Name_19 = output__LabelName_13;
#line 460 "output.m"
            else
#line 461 "output.m"
              {
#line 461 "output.m"
                MR_String output__CycleStr_68;
#line 461 "output.m"
                MR_Word output__V_69_69;
#line 461 "output.m"
                MR_Word output__V_70_70;
#line 461 "output.m"
                MR_Word output__V_72_72;

#line 461 "output.m"
                {
#line 461 "output.m"
                  mercury__string__int_to_string_2_p_0(output__CycleNum_14, &output__CycleStr_68);
                }
#line 462 "output.m"
                {
#line 462 "output.m"
                  output__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "output.m"
                  MR_hl_field(MR_mktag(1), output__V_72_72, 0) = ((MR_Box) (output__CycleStr_68));
#line 462 "output.m"
                  MR_hl_field(MR_mktag(1), output__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &output_scalar_common_3[1])));
#line 462 "output.m"
                }
#line 462 "output.m"
                {
#line 462 "output.m"
                  output__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "output.m"
                  MR_hl_field(MR_mktag(1), output__V_70_70, 0) = ((MR_Box) ((MR_String) "  <cycle "));
#line 462 "output.m"
                  MR_hl_field(MR_mktag(1), output__V_70_70, 1) = ((MR_Box) (output__V_72_72));
#line 462 "output.m"
                }
#line 462 "output.m"
                {
#line 462 "output.m"
                  output__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "output.m"
                  MR_hl_field(MR_mktag(1), output__V_69_69, 0) = ((MR_Box) (output__LabelName_13));
#line 462 "output.m"
                  MR_hl_field(MR_mktag(1), output__V_69_69, 1) = ((MR_Box) (output__V_70_70));
#line 462 "output.m"
                }
#line 462 "output.m"
                {
#line 462 "output.m"
                  mercury__string__append_list_2_p_0(output__V_69_69, &output__Name_19);
                }
#line 461 "output.m"
              }
#line 317 "output.m"
            {
#line 317 "output.m"
              output__conv0_Index_20 = mercury__map__det_elem_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (output__LabelName_13)), output__IndexMap_2);
            }
#line 317 "output.m"
            output__Index_20 = ((MR_Integer) output__conv0_Index_20);
#line 2167 "output.c"
            output__V_42_42 = (MR_Word) &output_scalar_common_1[0];
#line 319 "output.m"
            {
#line 319 "output.m"
              mercury__string__format__format_signed_int_component_width_noprec_4_p_0(output__V_42_42, (MR_Integer) 40, output__Calls_17, &output__V_36_36);
            }
#line 319 "output.m"
            {
#line 319 "output.m"
              mercury__io__write_string_3_p_0(output__V_36_36);
            }
#line 318 "output.m"
            {
#line 318 "output.m"
              mercury__io__write_string_3_p_0((MR_String) "             ");
            }
#line 319 "output.m"
            {
#line 319 "output.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(output__V_42_42, output__Name_19, &output__V_47_47);
            }
#line 319 "output.m"
            {
#line 319 "output.m"
              mercury__io__write_string_3_p_0(output__V_47_47);
            }
#line 318 "output.m"
            {
#line 318 "output.m"
              mercury__io__write_string_3_p_0((MR_String) " [");
            }
#line 319 "output.m"
            {
#line 319 "output.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(output__V_42_42, output__Index_20, &output__V_57_57);
            }
#line 319 "output.m"
            {
#line 319 "output.m"
              mercury__io__write_string_3_p_0(output__V_57_57);
            }
#line 318 "output.m"
            {
#line 318 "output.m"
              mercury__io__write_string_3_p_0((MR_String) "]\n");
            }
#line 320 "output.m"
            /* direct tailcall eliminated */
#line 320 "output.m"
            {
#line 320 "output.m"
              MR_Word output__HeadVar__1__tmp_copy_1 = output__Childs_10;

#line 320 "output.m"
              output__HeadVar__1_1 = output__HeadVar__1__tmp_copy_1;
#line 320 "output.m"
            }
#line 320 "output.m"
            continue;
#line 314 "output.m"
          }
#line 313 "output.m"
      }
#line 313 "output.m"
      break;
#line 313 "output.m"
    }
#line 310 "output.m"
}

#line 293 "output.m"
static void MR_CALL 
output__output_formatted_parent_list_5_p_0(
#line 293 "output.m"
  MR_Word output__HeadVar__1_1,
#line 293 "output.m"
  MR_Word output__IndexMap_2,
#line 293 "output.m"
  MR_Integer output__TotalCalls_3)
#line 293 "output.m"
{
#line 296 "output.m"
  while (MR_TRUE)
#line 296 "output.m"
    {
#line 296 "output.m"
      /* tailcall optimized into a loop */
#line 296 "output.m"
      {
#line 296 "output.m"
        MR_bool output__succeeded;

#line 296 "output.m"
        if ((output__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 296 "output.m"
          {
#line 296 "output.m"
          }
#line 296 "output.m"
        else
#line 297 "output.m"
          {
#line 297 "output.m"
            MR_Word output__Parent_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), output__HeadVar__1_1, (MR_Integer) 0)));
#line 297 "output.m"
            MR_Word output__Parents_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), output__HeadVar__1_1, (MR_Integer) 1)));
#line 297 "output.m"
            MR_String output__LabelName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), output__Parent_11, (MR_Integer) 0)));
#line 297 "output.m"
            MR_Integer output__CycleNum_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__Parent_11, (MR_Integer) 1)));
#line 297 "output.m"
            MR_Float output__Self_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), output__Parent_11, (MR_Integer) 2)));
#line 297 "output.m"
            MR_Float output__Descendant_19 = MR_unbox_float((MR_hl_field(MR_mktag(0), output__Parent_11, (MR_Integer) 3)));
#line 297 "output.m"
            MR_Integer output__Calls_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__Parent_11, (MR_Integer) 4)));
#line 297 "output.m"
            MR_String output__Name_21;
#line 297 "output.m"
            MR_Integer output__Index_22;
#line 297 "output.m"
            MR_String output__V_44_44;
#line 297 "output.m"
            MR_Word output__V_50_50;
#line 297 "output.m"
            MR_String output__V_57_57;
#line 297 "output.m"
            MR_String output__V_70_70;
#line 297 "output.m"
            MR_String output__V_81_81;
#line 297 "output.m"
            MR_String output__V_92_92;
#line 297 "output.m"
            MR_String output__V_102_102;
#line 300 "output.m"
            MR_Box output__conv0_Index_22;

#line 299 "output.m"
            {
#line 299 "output.m"
              output__Name_21 = output__construct_name_2_f_0(output__LabelName_16, output__CycleNum_17);
            }
#line 300 "output.m"
            {
#line 300 "output.m"
              output__conv0_Index_22 = mercury__map__det_elem_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (output__LabelName_16)), output__IndexMap_2);
            }
#line 300 "output.m"
            output__Index_22 = ((MR_Integer) output__conv0_Index_22);
#line 2317 "output.c"
            output__V_50_50 = (MR_Word) &output_scalar_common_1[0];
#line 302 "output.m"
            {
#line 302 "output.m"
              mercury__string__format__format_float_component_width_prec_6_p_0(output__V_50_50, (MR_Integer) 20, (MR_Integer) 2, (MR_Integer) 2, output__Self_18, &output__V_44_44);
            }
#line 302 "output.m"
            {
#line 302 "output.m"
              mercury__io__write_string_3_p_0(output__V_44_44);
            }
#line 301 "output.m"
            {
#line 301 "output.m"
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
#line 302 "output.m"
            {
#line 302 "output.m"
              mercury__string__format__format_float_component_width_prec_6_p_0(output__V_50_50, (MR_Integer) 11, (MR_Integer) 2, (MR_Integer) 2, output__Descendant_19, &output__V_57_57);
            }
#line 302 "output.m"
            {
#line 302 "output.m"
              mercury__io__write_string_3_p_0(output__V_57_57);
            }
#line 301 "output.m"
            {
#line 301 "output.m"
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
#line 302 "output.m"
            {
#line 302 "output.m"
              mercury__string__format__format_signed_int_component_width_noprec_4_p_0(output__V_50_50, (MR_Integer) 7, output__Calls_20, &output__V_70_70);
            }
#line 302 "output.m"
            {
#line 302 "output.m"
              mercury__io__write_string_3_p_0(output__V_70_70);
            }
#line 301 "output.m"
            {
#line 301 "output.m"
              mercury__io__write_string_3_p_0((MR_String) "/");
            }
#line 302 "output.m"
            {
#line 302 "output.m"
              mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) &output_scalar_common_1[1], (MR_Integer) 11, output__TotalCalls_3, &output__V_81_81);
            }
#line 302 "output.m"
            {
#line 302 "output.m"
              mercury__io__write_string_3_p_0(output__V_81_81);
            }
#line 301 "output.m"
            {
#line 301 "output.m"
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
#line 302 "output.m"
            {
#line 302 "output.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(output__V_50_50, output__Name_21, &output__V_92_92);
            }
#line 302 "output.m"
            {
#line 302 "output.m"
              mercury__io__write_string_3_p_0(output__V_92_92);
            }
#line 301 "output.m"
            {
#line 301 "output.m"
              mercury__io__write_string_3_p_0((MR_String) " [");
            }
#line 302 "output.m"
            {
#line 302 "output.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(output__V_50_50, output__Index_22, &output__V_102_102);
            }
#line 302 "output.m"
            {
#line 302 "output.m"
              mercury__io__write_string_3_p_0(output__V_102_102);
            }
#line 301 "output.m"
            {
#line 301 "output.m"
              mercury__io__write_string_3_p_0((MR_String) "]\n");
            }
#line 304 "output.m"
            /* direct tailcall eliminated */
#line 304 "output.m"
            {
#line 304 "output.m"
              MR_Word output__HeadVar__1__tmp_copy_1 = output__Parents_12;

#line 304 "output.m"
              output__HeadVar__1_1 = output__HeadVar__1__tmp_copy_1;
#line 304 "output.m"
            }
#line 304 "output.m"
            continue;
#line 297 "output.m"
          }
#line 296 "output.m"
      }
#line 296 "output.m"
      break;
#line 296 "output.m"
    }
#line 293 "output.m"
}

#line 282 "output.m"
static void MR_CALL 
output__output_formatted_cycle_parent_list_4_p_0_1(
#line 282 "output.m"
  MR_Box output__closure_arg,
#line 282 "output.m"
  MR_Box output__wrapper_arg_1,
#line 282 "output.m"
  MR_Box output__wrapper_arg_2,
#line 282 "output.m"
  MR_Box * output__wrapper_arg_3)
#line 282 "output.m"
{
#line 282 "output.m"
  {
#line 282 "output.m"
    MR_Box output__closure = output__closure_arg;

#line 282 "output.m"
    {
#line 282 "output.m"
      output__IntroducedFrom__pred__output_formatted_cycle_parent_list__282__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), output__closure, (MR_Integer) 3))), ((MR_Word) output__wrapper_arg_1));
#line 282 "output.m"
      return;
    }
#line 282 "output.m"
  }
#line 282 "output.m"
}

#line 278 "output.m"
static void MR_CALL 
output__output_formatted_cycle_parent_list_4_p_0(
#line 278 "output.m"
  MR_Word output__Parents_5,
#line 278 "output.m"
  MR_Word output__IndexMap_6)
#line 278 "output.m"
{
#line 281 "output.m"
  {
#line 281 "output.m"
    MR_bool output__succeeded;
#line 281 "output.m"
    MR_Word output__V_18_18;
#line 282 "output.m"
    MR_Box output__conv0_STATE_VARIABLE_IO_17;

#line 282 "output.m"
    {
#line 282 "output.m"
      output__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 282 "output.m"
      MR_hl_field(MR_mktag(0), output__V_18_18, 0) = ((MR_Box) (&output_scalar_common_4[0]));
#line 282 "output.m"
      MR_hl_field(MR_mktag(0), output__V_18_18, 1) = ((MR_Box) (output__output_formatted_cycle_parent_list_4_p_0_1));
#line 282 "output.m"
      MR_hl_field(MR_mktag(0), output__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 282 "output.m"
      MR_hl_field(MR_mktag(0), output__V_18_18, 3) = ((MR_Box) (output__IndexMap_6));
#line 282 "output.m"
    }
#line 282 "output.m"
    {
#line 282 "output.m"
      mercury__list__foldl_4_p_2((MR_Word) &output_prof_info__output_prof_info__type_ctor_info_parent_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, output__V_18_18, output__Parents_5, ((MR_Box) ((MR_Integer) 0)), &output__conv0_STATE_VARIABLE_IO_17);
    }
#line 281 "output.m"
  }
#line 278 "output.m"
}

#line 212 "output.m"
static void MR_CALL 
output__output_formatted_prof_node_5_p_0(
#line 212 "output.m"
  MR_Word output__ProfNode_6,
#line 212 "output.m"
  MR_Integer output__Index_7,
#line 212 "output.m"
  MR_Word output__IndexMap_8)
#line 212 "output.m"
{
#line 215 "output.m"
  {
#line 215 "output.m"
    MR_bool output__succeeded;
#line 215 "output.m"
    MR_Word output__TypeCtorInfo_96_96;
#line 215 "output.m"
    MR_String output__Name_10;
#line 215 "output.m"
    MR_Integer output__CycleNum_11;
#line 215 "output.m"
    MR_Float output__Percentage_12;
#line 215 "output.m"
    MR_Float output__Self_14;
#line 215 "output.m"
    MR_Float output__Descendant_15;
#line 215 "output.m"
    MR_Integer output__TotalCalls_16;
#line 215 "output.m"
    MR_Integer output__SelfCalls_17;
#line 215 "output.m"
    MR_Word output__ParentList_18;
#line 215 "output.m"
    MR_Word output__ChildList_19;
#line 215 "output.m"
    MR_Word output__CycleParentList_20;
#line 215 "output.m"
    MR_Word output__CycleChildList_21;
#line 215 "output.m"
    MR_String output__FullName_31;
#line 215 "output.m"
    MR_String output__IndexStr0_32;
#line 215 "output.m"
    MR_String output__IndexStr_33;
#line 215 "output.m"
    MR_String output__SelfCallsString_34;
#line 215 "output.m"
    MR_String output__InitMiddleStr_35;
#line 215 "output.m"
    MR_Word output__SortedChildList_38;
#line 215 "output.m"
    MR_Word output__SortedCycleChildList_39;
#line 215 "output.m"
    MR_Word output__V_43_43;
#line 215 "output.m"
    MR_Word output__V_45_45;
#line 215 "output.m"
    MR_String output__V_86_86;
#line 215 "output.m"
    MR_String output__V_88_88;
#line 215 "output.m"
    MR_String output__V_90_90;
#line 215 "output.m"
    MR_String output__V_98_98;
#line 215 "output.m"
    MR_Word output__V_104_104;
#line 215 "output.m"
    MR_String output__V_105_105;
#line 215 "output.m"
    MR_String output__V_107_107;
#line 215 "output.m"
    MR_String output__V_108_108;
#line 215 "output.m"
    MR_String output__V_115_115;
#line 215 "output.m"
    MR_String output__V_117_117;
#line 215 "output.m"
    MR_String output__V_118_118;
#line 215 "output.m"
    MR_String output__V_126_126;
#line 215 "output.m"
    MR_String output__V_135_135;
#line 215 "output.m"
    MR_String output__V_136_136;
#line 215 "output.m"
    MR_String output__V_146_146;
#line 215 "output.m"
    MR_String output__V_148_148;
#line 215 "output.m"
    MR_String output__V_149_149;
#line 215 "output.m"
    MR_String output__V_159_159;
#line 215 "output.m"
    MR_String output__V_161_161;
#line 215 "output.m"
    MR_String output__V_162_162;
#line 215 "output.m"
    MR_String output__V_172_172;
#line 215 "output.m"
    MR_String output__V_174_174;
#line 215 "output.m"
    MR_String output__V_175_175;
#line 215 "output.m"
    MR_Word output__V_181_181;

#line 220 "output.m"
    if (((MR_tag((MR_Word) output__ProfNode_6)) == (MR_mktag((MR_Integer) 1))))
#line 221 "output.m"
      {
#line 222 "output.m"
        {
#line 222 "output.m"
          mercury__require__error_1_p_0((MR_String) "output_formatted_prof_node: Cannot have output_cycle_prof\n");
#line 222 "output.m"
          return;
        }
#line 221 "output.m"
      }
#line 220 "output.m"
    else
#line 217 "output.m"
      {
#line 217 "output.m"
        MR_Float output__V_13_13;

#line 217 "output.m"
        output__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(0), output__ProfNode_6, (MR_Integer) 0)));
#line 217 "output.m"
        output__CycleNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__ProfNode_6, (MR_Integer) 1)));
#line 217 "output.m"
        output__Percentage_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), output__ProfNode_6, (MR_Integer) 2)));
#line 217 "output.m"
        output__V_13_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), output__ProfNode_6, (MR_Integer) 3)));
#line 217 "output.m"
        output__Self_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), output__ProfNode_6, (MR_Integer) 4)));
#line 217 "output.m"
        output__Descendant_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), output__ProfNode_6, (MR_Integer) 5)));
#line 217 "output.m"
        output__TotalCalls_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__ProfNode_6, (MR_Integer) 6)));
#line 217 "output.m"
        output__SelfCalls_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__ProfNode_6, (MR_Integer) 7)));
#line 217 "output.m"
        output__ParentList_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), output__ProfNode_6, (MR_Integer) 8)));
#line 217 "output.m"
        output__ChildList_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), output__ProfNode_6, (MR_Integer) 9)));
#line 217 "output.m"
        output__CycleParentList_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), output__ProfNode_6, (MR_Integer) 10)));
#line 217 "output.m"
        output__CycleChildList_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), output__ProfNode_6, (MR_Integer) 11)));
#line 217 "output.m"
      }
#line 226 "output.m"
    {
#line 226 "output.m"
      output__FullName_31 = output__construct_name_2_f_0(output__Name_10, output__CycleNum_11);
    }
#line 227 "output.m"
    {
#line 227 "output.m"
      mercury__string__int_to_string_2_p_0(output__Index_7, &output__IndexStr0_32);
    }
#line 228 "output.m"
    {
#line 228 "output.m"
      output__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "output.m"
      MR_hl_field(MR_mktag(1), output__V_45_45, 0) = ((MR_Box) (output__IndexStr0_32));
#line 228 "output.m"
      MR_hl_field(MR_mktag(1), output__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &output_scalar_common_3[0])));
#line 228 "output.m"
    }
#line 228 "output.m"
    {
#line 228 "output.m"
      output__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "output.m"
      MR_hl_field(MR_mktag(1), output__V_43_43, 0) = ((MR_Box) ((MR_String) "["));
#line 228 "output.m"
      MR_hl_field(MR_mktag(1), output__V_43_43, 1) = ((MR_Box) (output__V_45_45));
#line 228 "output.m"
    }
#line 228 "output.m"
    {
#line 228 "output.m"
      mercury__string__append_list_2_p_0(output__V_43_43, &output__IndexStr_33);
    }
#line 2692 "output.c"
    output__V_104_104 = (MR_Word) &output_scalar_common_1[0];
#line 230 "output.m"
    {
#line 230 "output.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(output__V_104_104, output__Index_7, &output__V_98_98);
    }
#line 229 "output.m"
    {
#line 229 "output.m"
      output__V_105_105 = mercury__string__f_43_43_2_f_0(output__V_98_98, (MR_String) "]\n");
    }
#line 229 "output.m"
    {
#line 229 "output.m"
      output__V_107_107 = mercury__string__f_43_43_2_f_0((MR_String) " [", output__V_105_105);
    }
#line 230 "output.m"
    {
#line 230 "output.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(output__V_104_104, output__FullName_31, &output__V_108_108);
    }
#line 229 "output.m"
    {
#line 229 "output.m"
      output__V_115_115 = mercury__string__f_43_43_2_f_0(output__V_108_108, output__V_107_107);
    }
#line 229 "output.m"
    {
#line 229 "output.m"
      output__V_117_117 = mercury__string__f_43_43_2_f_0((MR_String) "             ", output__V_115_115);
    }
#line 230 "output.m"
    {
#line 230 "output.m"
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0(output__V_104_104, (MR_Integer) 40, output__SelfCalls_17, &output__V_118_118);
    }
#line 229 "output.m"
    {
#line 229 "output.m"
      output__SelfCallsString_34 = mercury__string__f_43_43_2_f_0(output__V_118_118, output__V_117_117);
    }
#line 232 "output.m"
    {
#line 232 "output.m"
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0(output__V_104_104, (MR_Integer) 7, output__TotalCalls_16, &output__V_126_126);
    }
#line 231 "output.m"
    {
#line 231 "output.m"
      output__V_135_135 = mercury__string__f_43_43_2_f_0((MR_String) " ", output__V_126_126);
    }
#line 232 "output.m"
    {
#line 232 "output.m"
      mercury__string__format__format_float_component_width_prec_6_p_0(output__V_104_104, (MR_Integer) 11, (MR_Integer) 2, (MR_Integer) 2, output__Descendant_15, &output__V_136_136);
    }
#line 231 "output.m"
    {
#line 231 "output.m"
      output__V_146_146 = mercury__string__f_43_43_2_f_0(output__V_136_136, output__V_135_135);
    }
#line 231 "output.m"
    {
#line 231 "output.m"
      output__V_148_148 = mercury__string__f_43_43_2_f_0((MR_String) " ", output__V_146_146);
    }
#line 232 "output.m"
    {
#line 232 "output.m"
      mercury__string__format__format_float_component_width_prec_6_p_0(output__V_104_104, (MR_Integer) 7, (MR_Integer) 2, (MR_Integer) 2, output__Self_14, &output__V_149_149);
    }
#line 231 "output.m"
    {
#line 231 "output.m"
      output__V_159_159 = mercury__string__f_43_43_2_f_0(output__V_149_149, output__V_148_148);
    }
#line 231 "output.m"
    {
#line 231 "output.m"
      output__V_161_161 = mercury__string__f_43_43_2_f_0((MR_String) " ", output__V_159_159);
    }
#line 232 "output.m"
    {
#line 232 "output.m"
      mercury__string__format__format_float_component_width_prec_6_p_0(output__V_104_104, (MR_Integer) 5, (MR_Integer) 1, (MR_Integer) 2, output__Percentage_12, &output__V_162_162);
    }
#line 231 "output.m"
    {
#line 231 "output.m"
      output__V_172_172 = mercury__string__f_43_43_2_f_0(output__V_162_162, output__V_161_161);
    }
#line 231 "output.m"
    {
#line 231 "output.m"
      output__V_174_174 = mercury__string__f_43_43_2_f_0((MR_String) " ", output__V_172_172);
    }
#line 2789 "output.c"
    output__V_181_181 = (MR_Word) &output_scalar_common_1[1];
#line 231 "output.m"
    {
#line 231 "output.m"
      mercury__string__format__format_string_component_width_noprec_4_p_0(output__V_181_181, (MR_Integer) 6, output__IndexStr_33, &output__V_175_175);
    }
#line 231 "output.m"
    {
#line 231 "output.m"
      output__InitMiddleStr_35 = mercury__string__f_43_43_2_f_0(output__V_175_175, output__V_174_174);
    }
#line 234 "output.m"
    output__succeeded = (output__SelfCalls_17 == (MR_Integer) 0);
#line 234 "output.m"
    output__succeeded = !(output__succeeded);
#line 236 "output.m"
    if (output__succeeded)
#line 235 "output.m"
      {
#line 235 "output.m"
        mercury__io__write_string_3_p_0(output__SelfCallsString_34);
      }
#line 236 "output.m"
    else
#line 236 "output.m"
      {
#line 236 "output.m"
      }
#line 241 "output.m"
    output__succeeded = (output__CycleParentList_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 241 "output.m"
    if (output__succeeded)
#line 242 "output.m"
      output__succeeded = (output__ParentList_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 245 "output.m"
    if (output__succeeded)
#line 244 "output.m"
      {
#line 244 "output.m"
        MR_String output__V_183_183;

#line 244 "output.m"
        {
#line 244 "output.m"
          mercury__string__format__format_string_component_width_noprec_4_p_0(output__V_104_104, (MR_Integer) 67, (MR_String) "<spontaneous>\n", &output__V_183_183);
        }
#line 244 "output.m"
        {
#line 244 "output.m"
          mercury__io__write_string_3_p_0(output__V_183_183);
        }
#line 244 "output.m"
      }
#line 245 "output.m"
    else
#line 246 "output.m"
      {
#line 246 "output.m"
        MR_Word output__TypeCtorInfo_95_95 = (MR_Word) &output_prof_info__output_prof_info__type_ctor_info_parent_0;
#line 246 "output.m"
        MR_Word output__SortedCycleParentList_36;
#line 246 "output.m"
        MR_Word output__SortedParentList_37;

#line 246 "output.m"
        {
#line 246 "output.m"
          mercury__list__sort_2_p_0(output__TypeCtorInfo_95_95, output__CycleParentList_20, &output__SortedCycleParentList_36);
        }
#line 247 "output.m"
        {
#line 247 "output.m"
          output__output_formatted_cycle_parent_list_4_p_0(output__SortedCycleParentList_36, output__IndexMap_8);
        }
#line 249 "output.m"
        {
#line 249 "output.m"
          mercury__list__sort_2_p_0(output__TypeCtorInfo_95_95, output__ParentList_18, &output__SortedParentList_37);
        }
#line 250 "output.m"
        {
#line 250 "output.m"
          output__output_formatted_parent_list_5_p_0(output__SortedParentList_37, output__IndexMap_8, output__TotalCalls_16);
        }
#line 246 "output.m"
      }
#line 256 "output.m"
    {
#line 256 "output.m"
      mercury__io__write_string_3_p_0(output__InitMiddleStr_35);
    }
#line 257 "output.m"
    output__succeeded = (output__SelfCalls_17 == (MR_Integer) 0);
#line 259 "output.m"
    if (output__succeeded)
#line 258 "output.m"
      {
#line 258 "output.m"
        {
#line 258 "output.m"
          mercury__io__write_string_3_p_0((MR_String) "         ");
        }
#line 258 "output.m"
      }
#line 259 "output.m"
    else
#line 260 "output.m"
      {
#line 260 "output.m"
        MR_String output__V_193_193;

#line 260 "output.m"
        {
#line 260 "output.m"
          mercury__io__write_string_3_p_0((MR_String) "+");
        }
#line 260 "output.m"
        {
#line 260 "output.m"
          mercury__string__format__format_signed_int_component_width_noprec_4_p_0(output__V_181_181, (MR_Integer) 7, output__SelfCalls_17, &output__V_193_193);
        }
#line 260 "output.m"
        {
#line 260 "output.m"
          mercury__io__write_string_3_p_0(output__V_193_193);
        }
#line 260 "output.m"
      }
#line 262 "output.m"
    {
#line 262 "output.m"
      output__V_90_90 = mercury__string__f_43_43_2_f_0(output__IndexStr_33, (MR_String) "\n");
    }
#line 262 "output.m"
    {
#line 262 "output.m"
      output__V_88_88 = mercury__string__f_43_43_2_f_0((MR_String) " ", output__V_90_90);
    }
#line 262 "output.m"
    {
#line 262 "output.m"
      output__V_86_86 = mercury__string__f_43_43_2_f_0(output__FullName_31, output__V_88_88);
    }
#line 262 "output.m"
    {
#line 262 "output.m"
      mercury__io__write_string_3_p_0(output__V_86_86);
    }
#line 2938 "output.c"
    output__TypeCtorInfo_96_96 = (MR_Word) &output_prof_info__output_prof_info__type_ctor_info_child_0;
#line 264 "output.m"
    {
#line 264 "output.m"
      mercury__list__sort_2_p_0(output__TypeCtorInfo_96_96, output__ChildList_19, &output__SortedChildList_38);
    }
#line 265 "output.m"
    {
#line 265 "output.m"
      output__output_formatted_child_list_4_p_0(output__SortedChildList_38, output__IndexMap_8);
    }
#line 266 "output.m"
    {
#line 266 "output.m"
      mercury__list__sort_2_p_0(output__TypeCtorInfo_96_96, output__CycleChildList_21, &output__SortedCycleChildList_39);
    }
#line 267 "output.m"
    {
#line 267 "output.m"
      output__output_formatted_cycle_child_list_4_p_0(output__SortedCycleChildList_39, output__IndexMap_8);
    }
#line 269 "output.m"
    output__succeeded = (output__SelfCalls_17 == (MR_Integer) 0);
#line 269 "output.m"
    output__succeeded = !(output__succeeded);
#line 271 "output.m"
    if (output__succeeded)
#line 270 "output.m"
      {
#line 270 "output.m"
        mercury__io__write_string_3_p_0(output__SelfCallsString_34);
#line 270 "output.m"
        return;
      }
#line 271 "output.m"
    else
#line 271 "output.m"
      {
#line 271 "output.m"
      }
#line 215 "output.m"
  }
#line 212 "output.m"
}

#line 200 "output.m"
static void MR_CALL 
output__output_call_graph_5_p_0(
#line 200 "output.m"
  MR_Word output__HeadVar__1_1,
#line 200 "output.m"
  MR_Word output__InfoMap_2,
#line 200 "output.m"
  MR_Word output__IndexMap_3)
#line 200 "output.m"
{
#line 203 "output.m"
  while (MR_TRUE)
#line 203 "output.m"
    {
#line 203 "output.m"
      /* tailcall optimized into a loop */
#line 203 "output.m"
      {
#line 203 "output.m"
        MR_bool output__succeeded;

#line 203 "output.m"
        if ((output__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 203 "output.m"
          {
#line 203 "output.m"
          }
#line 203 "output.m"
        else
#line 204 "output.m"
          {
#line 204 "output.m"
            MR_Word output__TypeCtorInfo_24_24 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 204 "output.m"
            MR_String output__LabelName_11 = ((MR_String) (MR_hl_field(MR_mktag(1), output__HeadVar__1_1, (MR_Integer) 0)));
#line 204 "output.m"
            MR_Word output__LNs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), output__HeadVar__1_1, (MR_Integer) 1)));
#line 204 "output.m"
            MR_Word output__PN_16;
#line 204 "output.m"
            MR_Integer output__Index_17;
#line 205 "output.m"
            MR_Box output__conv0_PN_16;
#line 206 "output.m"
            MR_Box output__conv1_Index_17;

#line 205 "output.m"
            {
#line 205 "output.m"
              mercury__map__lookup_3_p_0(output__TypeCtorInfo_24_24, (MR_Word) &output_prof_info__output_prof_info__type_ctor_info_output_prof_0, output__InfoMap_2, ((MR_Box) (output__LabelName_11)), &output__conv0_PN_16);
            }
#line 205 "output.m"
            output__PN_16 = ((MR_Word) output__conv0_PN_16);
#line 206 "output.m"
            {
#line 206 "output.m"
              mercury__map__lookup_3_p_0(output__TypeCtorInfo_24_24, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, output__IndexMap_3, ((MR_Box) (output__LabelName_11)), &output__conv1_Index_17);
            }
#line 206 "output.m"
            output__Index_17 = ((MR_Integer) output__conv1_Index_17);
#line 207 "output.m"
            {
#line 207 "output.m"
              output__output_formatted_prof_node_5_p_0(output__PN_16, output__Index_17, output__IndexMap_3);
            }
#line 208 "output.m"
            {
#line 208 "output.m"
              mercury__io__write_string_3_p_0((MR_String) "\n-----------------------------------------------\n\n");
            }
#line 210 "output.m"
            /* direct tailcall eliminated */
#line 210 "output.m"
            {
#line 210 "output.m"
              MR_Word output__HeadVar__1__tmp_copy_1 = output__LNs_12;

#line 210 "output.m"
              output__HeadVar__1_1 = output__HeadVar__1__tmp_copy_1;
#line 210 "output.m"
            }
#line 210 "output.m"
            continue;
#line 204 "output.m"
          }
#line 203 "output.m"
      }
#line 203 "output.m"
      break;
#line 203 "output.m"
    }
#line 200 "output.m"
}

#line 97 "output.m"
static void MR_CALL 
output__call_graph_headers_2_p_0(void)
#line 97 "output.m"
{
#line 99 "output.m"
  {
#line 99 "output.m"
    MR_bool output__succeeded;
#line 99 "output.m"
    MR_Word output__Globals_4;
#line 99 "output.m"
    MR_Word output__WhatToProfile_5;
#line 99 "output.m"
    MR_Word output__Category_6;
#line 99 "output.m"
    MR_String output__ShortWhat_7;
#line 99 "output.m"
    MR_String output__What_8;
#line 99 "output.m"
    MR_String output__LongWhat_9;
#line 99 "output.m"
    MR_String output__Units_11;
#line 99 "output.m"
    MR_String output__SpentIn_14;
#line 99 "output.m"
    MR_String output__V_149_149;
#line 99 "output.m"
    MR_String output__V_161_161;
#line 99 "output.m"
    MR_Word output__V_167_167;
#line 99 "output.m"
    MR_String output__V_172_172;
#line 99 "output.m"
    MR_String output__V_182_182;
#line 99 "output.m"
    MR_String output__V_193_193;
#line 99 "output.m"
    MR_String output__V_204_204;
#line 99 "output.m"
    MR_String output__V_214_214;
#line 99 "output.m"
    MR_String output__V_225_225;
#line 99 "output.m"
    MR_String output__V_235_235;
#line 99 "output.m"
    MR_String output__V_246_246;
#line 99 "output.m"
    MR_String output__V_257_257;
#line 99 "output.m"
    MR_String output__V_268_268;
#line 99 "output.m"
    MR_String output__V_279_279;
#line 99 "output.m"
    MR_String output__V_290_290;
#line 99 "output.m"
    MR_String output__V_300_300;
#line 99 "output.m"
    MR_String output__V_311_311;
#line 99 "output.m"
    MR_String output__V_321_321;
#line 99 "output.m"
    MR_String output__V_332_332;
#line 103 "output.m"
    MR_String output___ShortUnits_10;
#line 103 "output.m"
    MR_String output___MilliUnits_12;
#line 103 "output.m"
    MR_String output___MilliUnitsPerCall_13;

#line 100 "output.m"
    {
#line 100 "output.m"
      globals__io_get_globals_3_p_0(&output__Globals_4);
    }
#line 101 "output.m"
    {
#line 101 "output.m"
      globals__get_what_to_profile_2_p_0(output__Globals_4, &output__WhatToProfile_5);
    }
#line 102 "output.m"
    {
#line 102 "output.m"
      output__Category_6 = output__classify_profile_1_f_0(output__WhatToProfile_5);
    }
#line 103 "output.m"
    {
#line 103 "output.m"
      output__units_9_p_0(output__Category_6, &output__ShortWhat_7, &output__What_8, &output__LongWhat_9, &output___ShortUnits_10, &output__Units_11, &output___MilliUnits_12, &output___MilliUnitsPerCall_13, &output__SpentIn_14);
    }
#line 106 "output.m"
    {
#line 106 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "call graph profile:\n");
    }
#line 107 "output.m"
    {
#line 107 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "\tSorted on the %");
    }
#line 3179 "output.c"
    output__V_167_167 = (MR_Word) &output_scalar_common_1[0];
#line 107 "output.m"
    {
#line 107 "output.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(output__V_167_167, output__ShortWhat_7, &output__V_161_161);
    }
#line 107 "output.m"
    {
#line 107 "output.m"
      mercury__io__write_string_3_p_0(output__V_161_161);
    }
#line 107 "output.m"
    {
#line 107 "output.m"
      mercury__io__write_string_3_p_0((MR_String) " field.\n\n");
    }
#line 109 "output.m"
    {
#line 109 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "\tprocedure entries:\n\n");
    }
#line 111 "output.m"
    {
#line 111 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "index\t\tthe index number of the procedure in the call graph\n");
    }
#line 113 "output.m"
    {
#line 113 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tlisting.\n\n");
    }
#line 115 "output.m"
    {
#line 115 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "%");
    }
#line 116 "output.m"
    {
#line 116 "output.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(output__V_167_167, output__ShortWhat_7, &output__V_172_172);
    }
#line 116 "output.m"
    {
#line 116 "output.m"
      mercury__io__write_string_3_p_0(output__V_172_172);
    }
#line 115 "output.m"
    {
#line 115 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tthe percentage of the total ");
    }
#line 116 "output.m"
    {
#line 116 "output.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(output__V_167_167, output__LongWhat_9, &output__V_182_182);
    }
#line 116 "output.m"
    {
#line 116 "output.m"
      mercury__io__write_string_3_p_0(output__V_182_182);
    }
#line 115 "output.m"
    {
#line 115 "output.m"
      mercury__io__write_string_3_p_0((MR_String) " of\n");
    }
#line 117 "output.m"
    {
#line 117 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tthe program ");
    }
#line 118 "output.m"
    {
#line 118 "output.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(output__V_167_167, output__SpentIn_14, &output__V_193_193);
    }
#line 118 "output.m"
    {
#line 118 "output.m"
      mercury__io__write_string_3_p_0(output__V_193_193);
    }
#line 117 "output.m"
    {
#line 117 "output.m"
      mercury__io__write_string_3_p_0((MR_String) " this procedure and its\n");
    }
#line 119 "output.m"
    {
#line 119 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tdescendents.\n\n");
    }
#line 121 "output.m"
    {
#line 121 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "self\t\tthe number of ");
    }
#line 122 "output.m"
    {
#line 122 "output.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(output__V_167_167, output__Units_11, &output__V_204_204);
    }
#line 122 "output.m"
    {
#line 122 "output.m"
      mercury__io__write_string_3_p_0(output__V_204_204);
    }
#line 121 "output.m"
    {
#line 121 "output.m"
      mercury__io__write_string_3_p_0((MR_String) " actually ");
    }
#line 122 "output.m"
    {
#line 122 "output.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(output__V_167_167, output__SpentIn_14, &output__V_214_214);
    }
#line 122 "output.m"
    {
#line 122 "output.m"
      mercury__io__write_string_3_p_0(output__V_214_214);
    }
#line 121 "output.m"
    {
#line 121 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 123 "output.m"
    {
#line 123 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tthe procedure\'s own code.\n\n");
    }
#line 125 "output.m"
    {
#line 125 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "descendents\tthe number of ");
    }
#line 126 "output.m"
    {
#line 126 "output.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(output__V_167_167, output__Units_11, &output__V_225_225);
    }
#line 126 "output.m"
    {
#line 126 "output.m"
      mercury__io__write_string_3_p_0(output__V_225_225);
    }
#line 125 "output.m"
    {
#line 125 "output.m"
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
#line 126 "output.m"
    {
#line 126 "output.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(output__V_167_167, output__SpentIn_14, &output__V_235_235);
    }
#line 126 "output.m"
    {
#line 126 "output.m"
      mercury__io__write_string_3_p_0(output__V_235_235);
    }
#line 125 "output.m"
    {
#line 125 "output.m"
      mercury__io__write_string_3_p_0((MR_String) " the\n");
    }
#line 127 "output.m"
    {
#line 127 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tdescendents of the current procedure.\n\n");
    }
#line 129 "output.m"
    {
#line 129 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "called\t\tthe number of times the current procedure is\n");
    }
#line 131 "output.m"
    {
#line 131 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tcalled (not counting self recursive calls).\n\n");
    }
#line 133 "output.m"
    {
#line 133 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "self\t\tthe number of self recursive calls.\n\n");
    }
#line 135 "output.m"
    {
#line 135 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "name\t\tthe name of the current procedure.\n\n");
    }
#line 137 "output.m"
    {
#line 137 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "index\t\tan index number to locate the function easily.\n\n\n\n");
    }
#line 141 "output.m"
    {
#line 141 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "\tparent listings:\n\n");
    }
#line 143 "output.m"
    {
#line 143 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "self*\t\tthe number of ");
    }
#line 144 "output.m"
    {
#line 144 "output.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(output__V_167_167, output__Units_11, &output__V_246_246);
    }
#line 144 "output.m"
    {
#line 144 "output.m"
      mercury__io__write_string_3_p_0(output__V_246_246);
    }
#line 143 "output.m"
    {
#line 143 "output.m"
      mercury__io__write_string_3_p_0((MR_String) " of the current procedure\'s self\n");
    }
#line 145 "output.m"
    {
#line 145 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\t");
    }
#line 146 "output.m"
    {
#line 146 "output.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(output__V_167_167, output__What_8, &output__V_257_257);
    }
#line 146 "output.m"
    {
#line 146 "output.m"
      mercury__io__write_string_3_p_0(output__V_257_257);
    }
#line 145 "output.m"
    {
#line 145 "output.m"
      mercury__io__write_string_3_p_0((MR_String) " due to calls from this parent.\n\n");
    }
#line 148 "output.m"
    {
#line 148 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "descendents*\tthe number of ");
    }
#line 150 "output.m"
    {
#line 150 "output.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(output__V_167_167, output__Units_11, &output__V_268_268);
    }
#line 150 "output.m"
    {
#line 150 "output.m"
      mercury__io__write_string_3_p_0(output__V_268_268);
    }
#line 148 "output.m"
    {
#line 148 "output.m"
      mercury__io__write_string_3_p_0((MR_String) " of the current procedure\'s descendent\n");
    }
#line 151 "output.m"
    {
#line 151 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\t");
    }
#line 152 "output.m"
    {
#line 152 "output.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(output__V_167_167, output__What_8, &output__V_279_279);
    }
#line 152 "output.m"
    {
#line 152 "output.m"
      mercury__io__write_string_3_p_0(output__V_279_279);
    }
#line 151 "output.m"
    {
#line 151 "output.m"
      mercury__io__write_string_3_p_0((MR_String) " which is due to calls from this parent.\n\n");
    }
#line 154 "output.m"
    {
#line 154 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "called*\t\tthe number of times the current procedure is called\n");
    }
#line 157 "output.m"
    {
#line 157 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tby this parent.\n\n");
    }
#line 159 "output.m"
    {
#line 159 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "total\t\tthe number of times this procedure is called by its parents.\n\n");
    }
#line 162 "output.m"
    {
#line 162 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "parents\t\tthe name of this parent.\n\n");
    }
#line 164 "output.m"
    {
#line 164 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "index\t\tthe index number of the parent procedure\n\n\n\n");
    }
#line 167 "output.m"
    {
#line 167 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "children listings:\n\n");
    }
#line 169 "output.m"
    {
#line 169 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "self*\t\tthe number of ");
    }
#line 170 "output.m"
    {
#line 170 "output.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(output__V_167_167, output__Units_11, &output__V_290_290);
    }
#line 170 "output.m"
    {
#line 170 "output.m"
      mercury__io__write_string_3_p_0(output__V_290_290);
    }
#line 169 "output.m"
    {
#line 169 "output.m"
      mercury__io__write_string_3_p_0((MR_String) " of this child\'s self ");
    }
#line 170 "output.m"
    {
#line 170 "output.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(output__V_167_167, output__What_8, &output__V_300_300);
    }
#line 170 "output.m"
    {
#line 170 "output.m"
      mercury__io__write_string_3_p_0(output__V_300_300);
    }
#line 169 "output.m"
    {
#line 169 "output.m"
      mercury__io__write_string_3_p_0((MR_String) " which is\n");
    }
#line 171 "output.m"
    {
#line 171 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tdue to being called by the current procedure.\n\n");
    }
#line 174 "output.m"
    {
#line 174 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "descendent*\tthe number of ");
    }
#line 176 "output.m"
    {
#line 176 "output.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(output__V_167_167, output__Units_11, &output__V_311_311);
    }
#line 176 "output.m"
    {
#line 176 "output.m"
      mercury__io__write_string_3_p_0(output__V_311_311);
    }
#line 174 "output.m"
    {
#line 174 "output.m"
      mercury__io__write_string_3_p_0((MR_String) " of this child\'s descendent ");
    }
#line 176 "output.m"
    {
#line 176 "output.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(output__V_167_167, output__What_8, &output__V_321_321);
    }
#line 176 "output.m"
    {
#line 176 "output.m"
      mercury__io__write_string_3_p_0(output__V_321_321);
    }
#line 174 "output.m"
    {
#line 174 "output.m"
      mercury__io__write_string_3_p_0((MR_String) " which\n");
    }
#line 177 "output.m"
    {
#line 177 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tis due to the current procedure.\n\n");
    }
#line 179 "output.m"
    {
#line 179 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "called*\t\tthe number of times this child is called by the current\n");
    }
#line 182 "output.m"
    {
#line 182 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tprocedure.\n\n");
    }
#line 184 "output.m"
    {
#line 184 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "total*\t\tthe number of times this child is called by all procedures.\n\n");
    }
#line 187 "output.m"
    {
#line 187 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "children\tthe name of this child.\n\n");
    }
#line 189 "output.m"
    {
#line 189 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "index\t\tthe index number of the child.\n\n\n\n");
    }
#line 191 "output.m"
    {
#line 191 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "                                  called/total");
    }
#line 192 "output.m"
    {
#line 192 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "       parents\n");
    }
#line 194 "output.m"
    {
#line 194 "output.m"
      output__V_149_149 = mercury__string__f_43_43_2_f_0((MR_String) "%", output__ShortWhat_7);
    }
#line 193 "output.m"
    {
#line 193 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "index ");
    }
#line 194 "output.m"
    {
#line 194 "output.m"
      mercury__string__format__format_string_component_width_noprec_4_p_0(output__V_167_167, (MR_Integer) 6, output__V_149_149, &output__V_332_332);
    }
#line 194 "output.m"
    {
#line 194 "output.m"
      mercury__io__write_string_3_p_0(output__V_332_332);
    }
#line 193 "output.m"
    {
#line 193 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "    self descendents  called+self");
    }
#line 195 "output.m"
    {
#line 195 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "    name           index\n");
    }
#line 196 "output.m"
    {
#line 196 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "                                  called/total");
    }
#line 197 "output.m"
    {
#line 197 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "       children\n\n");
#line 197 "output.m"
      return;
    }
#line 99 "output.m"
  }
#line 97 "output.m"
}

#line 86 "output.m"
static void MR_CALL 
output__units_9_p_0(
#line 86 "output.m"
  MR_Word output__HeadVar__1_1,
#line 86 "output.m"
  MR_String * output__HeadVar__2_2,
#line 86 "output.m"
  MR_String * output__HeadVar__3_3,
#line 86 "output.m"
  MR_String * output__HeadVar__4_4,
#line 86 "output.m"
  MR_String * output__HeadVar__5_5,
#line 86 "output.m"
  MR_String * output__HeadVar__6_6,
#line 86 "output.m"
  MR_String * output__HeadVar__7_7,
#line 86 "output.m"
  MR_String * output__HeadVar__8_8,
#line 86 "output.m"
  MR_String * output__HeadVar__9_9)
#line 86 "output.m"
{
#line 89 "output.m"
  {
#line 89 "output.m"
    MR_bool output__succeeded;

#line 89 "output.m"
#line 89 "output.m"
    switch (output__HeadVar__1_1) {
#line 89 "output.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 89 "output.m"
      case (MR_Integer) 2:
#line 93 "output.m"
        {
#line 93 "output.m"
          *output__HeadVar__2_2 = (MR_String) "cells";
#line 93 "output.m"
          *output__HeadVar__3_3 = (MR_String) "allocations";
#line 94 "output.m"
          *output__HeadVar__4_4 = (MR_String) "number of memory allocations";
#line 94 "output.m"
          *output__HeadVar__5_5 = (MR_String) "k-cells";
#line 94 "output.m"
          *output__HeadVar__6_6 = (MR_String) "kilocells";
#line 94 "output.m"
          *output__HeadVar__7_7 = (MR_String) "cells";
#line 95 "output.m"
          *output__HeadVar__8_8 = (MR_String) "cls/call";
#line 95 "output.m"
          *output__HeadVar__9_9 = (MR_String) "occurring in";
#line 93 "output.m"
        }
#line 89 "output.m"
        break;
#line 89 "output.m"
      case (MR_Integer) 1:
#line 91 "output.m"
        {
#line 91 "output.m"
          *output__HeadVar__2_2 = (MR_String) "mem";
#line 91 "output.m"
          *output__HeadVar__3_3 = (MR_String) "memory";
#line 91 "output.m"
          *output__HeadVar__4_4 = (MR_String) "allocated memory";
#line 92 "output.m"
          *output__HeadVar__5_5 = (MR_String) "k-words";
#line 92 "output.m"
          *output__HeadVar__6_6 = (MR_String) "kilowords";
#line 92 "output.m"
          *output__HeadVar__7_7 = (MR_String) "words";
#line 92 "output.m"
          *output__HeadVar__8_8 = (MR_String) "wds/call";
#line 92 "output.m"
          *output__HeadVar__9_9 = (MR_String) "allocated by";
#line 91 "output.m"
        }
#line 89 "output.m"
        break;
#line 89 "output.m"
      case (MR_Integer) 0:
#line 89 "output.m"
        {
#line 89 "output.m"
          *output__HeadVar__2_2 = (MR_String) "time";
#line 89 "output.m"
          *output__HeadVar__3_3 = (MR_String) "time";
#line 89 "output.m"
          *output__HeadVar__4_4 = (MR_String) "running time";
#line 89 "output.m"
          *output__HeadVar__5_5 = (MR_String) "seconds";
#line 89 "output.m"
          *output__HeadVar__6_6 = (MR_String) "seconds";
#line 90 "output.m"
          *output__HeadVar__7_7 = (MR_String) "milliseconds";
#line 90 "output.m"
          *output__HeadVar__8_8 = (MR_String) "ms/call";
#line 90 "output.m"
          *output__HeadVar__9_9 = (MR_String) "spent executing";
#line 89 "output.m"
        }
#line 89 "output.m"
        break;
#line 89 "output.m"
    }
#line 89 "output.m"
  }
#line 86 "output.m"
}

#line 77 "output.m"
static MR_Word MR_CALL 
output__classify_profile_1_f_0(
#line 77 "output.m"
  MR_Word output__HeadVar__1_1)
#line 77 "output.m"
{
#line 79 "output.m"
  {
#line 79 "output.m"
    MR_bool output__succeeded;
#line 79 "output.m"
    MR_Word output__HeadVar__2_2 = ((&output_vector_common_2[0 + output__HeadVar__1_1]))->output__vector_common_type_2_0__vct_2_f_0;

#line 79 "output.m"
    return output__HeadVar__2_2;
#line 79 "output.m"
  }
#line 77 "output.m"
}

#line 27 "output.m"
void MR_CALL 
output__output_profile_4_p_0(
#line 27 "output.m"
  MR_Word output__Output_5,
#line 27 "output.m"
  MR_Word output__IndexMap_6)
#line 27 "output.m"
{
#line 50 "output.m"
  {
#line 50 "output.m"
    MR_bool output__succeeded;
#line 50 "output.m"
    MR_Word output__Globals_8;
#line 50 "output.m"
    MR_Word output__WhatToProfile_9;
#line 50 "output.m"
    MR_String output__WhatToProfileString_10;
#line 50 "output.m"
    MR_Word output__InfoMap_11;
#line 50 "output.m"
    MR_Word output__CallList_12;
#line 50 "output.m"
    MR_Word output__FlatList_13;
#line 50 "output.m"
    MR_Word output__CallGraphOpt_14;
#line 50 "output.m"
    MR_String output__V_35_35;
#line 50 "output.m"
    MR_Word output__IndexList_52;

#line 51 "output.m"
    {
#line 51 "output.m"
      globals__io_get_globals_3_p_0(&output__Globals_8);
    }
#line 52 "output.m"
    {
#line 52 "output.m"
      globals__get_what_to_profile_2_p_0(output__Globals_8, &output__WhatToProfile_9);
    }
#line 53 "output.m"
    {
#line 53 "output.m"
      globals__what_to_profile_2_p_1(&output__WhatToProfileString_10, output__WhatToProfile_9);
    }
#line 54 "output.m"
    {
#line 54 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "*** profiling ");
    }
#line 54 "output.m"
    {
#line 54 "output.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &output_scalar_common_1[0], output__WhatToProfileString_10, &output__V_35_35);
    }
#line 54 "output.m"
    {
#line 54 "output.m"
      mercury__io__write_string_3_p_0(output__V_35_35);
    }
#line 54 "output.m"
    {
#line 54 "output.m"
      mercury__io__write_string_3_p_0((MR_String) " ***\n\n");
    }
#line 56 "output.m"
    output__InfoMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), output__Output_5, (MR_Integer) 0)));
#line 56 "output.m"
    output__CallList_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), output__Output_5, (MR_Integer) 1)));
#line 56 "output.m"
    output__FlatList_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), output__Output_5, (MR_Integer) 2)));
#line 57 "output.m"
    {
#line 57 "output.m"
      globals__io_lookup_bool_option_4_p_0((MR_Integer) 3, &output__CallGraphOpt_14);
    }
#line 62 "output.m"
#line 62 "output.m"
    switch (output__CallGraphOpt_14) {
#line 62 "output.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 62 "output.m"
      case (MR_Integer) 0:
#line 63 "output.m"
        {
#line 63 "output.m"
        }
#line 62 "output.m"
        break;
#line 62 "output.m"
      case (MR_Integer) 1:
#line 59 "output.m"
        {
#line 60 "output.m"
          {
#line 60 "output.m"
            output__call_graph_headers_2_p_0();
          }
#line 61 "output.m"
          {
#line 61 "output.m"
            output__output_call_graph_5_p_0(output__CallList_12, output__InfoMap_11, output__IndexMap_6);
          }
#line 59 "output.m"
        }
#line 62 "output.m"
        break;
#line 62 "output.m"
    }
#line 66 "output.m"
    {
#line 66 "output.m"
      output__flat_headers_2_p_0();
    }
#line 67 "output.m"
    {
#line 67 "output.m"
      output__flat_profile_6_p_0(output__FlatList_13, (MR_Float) 0.0000000000000000, output__InfoMap_11, output__IndexMap_6);
    }
#line 434 "output.m"
    {
#line 434 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "\n\n\nalphabetic listing:\n\n");
    }
#line 439 "output.m"
    {
#line 439 "output.m"
      output__IndexList_52 = mercury__map__to_assoc_list_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, output__IndexMap_6);
    }
#line 440 "output.m"
    {
#line 440 "output.m"
      output__output_alphabet_listing_2_3_p_0(output__IndexList_52);
#line 440 "output.m"
      return;
    }
#line 50 "output.m"
  }
#line 27 "output.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module output. */
