/*
** Automatically generated from `output.m'
** by the Mercury compiler,
** version 13.05, configured for x86_64-apple-darwin12.3.0.
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




#line 72 "output.c"
static const MR_FA_PseudoTypeInfo_Struct2 output__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0;

#line 75 "output.c"
static const MR_EnumFunctorDesc output__output__enum_functor_desc_header_category_0_0;

#line 78 "output.c"
static const MR_EnumFunctorDesc output__output__enum_functor_desc_header_category_0_1;

#line 81 "output.c"
static const MR_EnumFunctorDesc output__output__enum_functor_desc_header_category_0_2;

#line 84 "output.c"
static const MR_EnumFunctorDescPtr output__output__enum_value_ordered_header_category_0[3];

#line 87 "output.c"
static const MR_EnumFunctorDescPtr output__output__enum_name_ordered_header_category_0[3];

#line 90 "output.c"
static const MR_Integer output__output__functor_number_map_header_category_0[3];

#line 93 "output.c"
static MR_bool MR_CALL 
output____Unify____header_category_0_0_10001(
#line 96 "output.c"
  MR_Box output__wrapper_arg_1,
#line 98 "output.c"
  MR_Box output__wrapper_arg_2);

#line 101 "output.c"
static void MR_CALL 
output____Compare____header_category_0_0_10001(
#line 104 "output.c"
  MR_Box * output__wrapper_arg_1,
#line 106 "output.c"
  MR_Box output__wrapper_arg_2,
#line 108 "output.c"
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


static /* final */ const MR_Box output_scalar_common_1[3][2];

static /* final */ const MR_Box output_scalar_common_2[1][1];

static /* final */ const MR_Box output_scalar_common_3[2][7];




static /* final */ const MR_Box output_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "] ")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &output_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) ">")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box output_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "<spontaneous>\n"))
  },
};

static /* final */ const MR_Box output_scalar_common_3[2][7] = {
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



#line 358 "output.c"
static const MR_FA_PseudoTypeInfo_Struct2 output__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 367 "output.c"
static const MR_EnumFunctorDesc output__output__enum_functor_desc_header_category_0_0 = {
  (MR_String) "time_headers",
  (MR_Integer) 0
};

#line 373 "output.c"
static const MR_EnumFunctorDesc output__output__enum_functor_desc_header_category_0_1 = {
  (MR_String) "memory_words_headers",
  (MR_Integer) 1
};

#line 379 "output.c"
static const MR_EnumFunctorDesc output__output__enum_functor_desc_header_category_0_2 = {
  (MR_String) "memory_cells_headers",
  (MR_Integer) 2
};

#line 385 "output.c"
static const MR_EnumFunctorDescPtr output__output__enum_value_ordered_header_category_0[3] = {
  &output__output__enum_functor_desc_header_category_0_0,
  &output__output__enum_functor_desc_header_category_0_1,
  &output__output__enum_functor_desc_header_category_0_2
};

#line 392 "output.c"
static const MR_EnumFunctorDescPtr output__output__enum_name_ordered_header_category_0[3] = {
  &output__output__enum_functor_desc_header_category_0_2,
  &output__output__enum_functor_desc_header_category_0_1,
  &output__output__enum_functor_desc_header_category_0_0
};

#line 399 "output.c"
static const MR_Integer output__output__functor_number_map_header_category_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 406 "output.c"
const MR_TypeCtorInfo_Struct output__output__type_ctor_info_header_category_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (output____Unify____header_category_0_0_10001)),
  ((MR_Box) (output____Compare____header_category_0_0_10001)),
  (MR_String) "output",
  (MR_String) "header_category",
  {
    output__output__enum_name_ordered_header_category_0
  },
  {
    output__output__enum_value_ordered_header_category_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  output__output__functor_number_map_header_category_0
};

#line 427 "output.c"
static MR_bool MR_CALL 
output____Unify____header_category_0_0_10001(
#line 430 "output.c"
  MR_Box output__wrapper_arg_1,
#line 432 "output.c"
  MR_Box output__wrapper_arg_2)
#line 434 "output.c"
{
#line 436 "output.c"
  {
#line 438 "output.c"
    MR_bool output__succeeded;

#line 441 "output.c"
    {
#line 443 "output.c"
      output__succeeded = output____Unify____header_category_0_0(((MR_Word) output__wrapper_arg_1), ((MR_Word) output__wrapper_arg_2));
    }
#line 446 "output.c"
    return output__succeeded;
#line 448 "output.c"
  }
#line 450 "output.c"
}

#line 453 "output.c"
static void MR_CALL 
output____Compare____header_category_0_0_10001(
#line 456 "output.c"
  MR_Box * output__wrapper_arg_1,
#line 458 "output.c"
  MR_Box output__wrapper_arg_2,
#line 460 "output.c"
  MR_Box output__wrapper_arg_3)
#line 462 "output.c"
{
#line 464 "output.c"
  {
#line 466 "output.c"
    MR_Word output__conv0_HeadVar__1_1;

#line 469 "output.c"
    {
#line 471 "output.c"
      output____Compare____header_category_0_0(&output__conv0_HeadVar__1_1, ((MR_Word) output__wrapper_arg_2), ((MR_Word) output__wrapper_arg_3));
    }
#line 474 "output.c"
    *output__wrapper_arg_1 = ((MR_Box) (output__conv0_HeadVar__1_1));
#line 476 "output.c"
  }
#line 478 "output.c"
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
          MR_hl_field(MR_mktag(1), output__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &output_scalar_common_1[2])));
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
#line 336 "output.m"
    {
#line 336 "output.m"
      output__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "output.m"
      MR_hl_field(MR_mktag(1), output__V_36_36, 0) = ((MR_Box) (output__V_37_37));
#line 336 "output.m"
      MR_hl_field(MR_mktag(1), output__V_36_36, 1) = ((MR_Box) (output__V_38_38));
#line 336 "output.m"
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
#line 335 "output.m"
    {
#line 335 "output.m"
      output__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "output.m"
      MR_hl_field(MR_mktag(1), output__V_28_28, 0) = ((MR_Box) (output__V_29_29));
#line 335 "output.m"
      MR_hl_field(MR_mktag(1), output__V_28_28, 1) = ((MR_Box) (output__V_30_30));
#line 335 "output.m"
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
          MR_hl_field(MR_mktag(1), output__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &output_scalar_common_1[2])));
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
#line 286 "output.m"
    {
#line 286 "output.m"
      output__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 286 "output.m"
      MR_hl_field(MR_mktag(1), output__V_26_26, 0) = ((MR_Box) (output__V_28_28));
#line 286 "output.m"
      MR_hl_field(MR_mktag(1), output__V_26_26, 1) = ((MR_Box) (output__V_29_29));
#line 286 "output.m"
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
#line 949 "output.c"
  {
#line 951 "output.c"
    MR_bool output__succeeded = (output__HeadVar__2_1 == output__HeadVar__2_2);

#line 954 "output.c"
    return output__succeeded;
#line 956 "output.c"
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
          MR_hl_field(MR_mktag(1), output__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &output_scalar_common_1[2])));
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
            MR_Word output__V_16_16;
#line 447 "output.m"
            MR_Word output__V_18_18;
#line 447 "output.m"
            MR_Word output__V_19_19;
#line 447 "output.m"
            MR_Word output__V_20_20;

#line 447 "output.m"
            output__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), output__V_14_14, (MR_Integer) 0)));
#line 447 "output.m"
            output__Index_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output__V_14_14, (MR_Integer) 1)));
#line 448 "output.m"
            {
#line 448 "output.m"
              output__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 448 "output.m"
              MR_hl_field(MR_mktag(1), output__V_18_18, 0) = ((MR_Box) (output__Index_9));
#line 448 "output.m"
            }
#line 448 "output.m"
            {
#line 448 "output.m"
              output__V_20_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 448 "output.m"
              MR_hl_field(MR_mktag(2), output__V_20_20, 0) = ((MR_Box) (output__Name_8));
#line 448 "output.m"
            }
#line 448 "output.m"
            {
#line 448 "output.m"
              output__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "output.m"
              MR_hl_field(MR_mktag(1), output__V_19_19, 0) = ((MR_Box) (output__V_20_20));
#line 448 "output.m"
              MR_hl_field(MR_mktag(1), output__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 448 "output.m"
            }
#line 448 "output.m"
            {
#line 448 "output.m"
              output__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "output.m"
              MR_hl_field(MR_mktag(1), output__V_16_16, 0) = ((MR_Box) (output__V_18_18));
#line 448 "output.m"
              MR_hl_field(MR_mktag(1), output__V_16_16, 1) = ((MR_Box) (output__V_19_19));
#line 448 "output.m"
            }
#line 448 "output.m"
            {
#line 448 "output.m"
              mercury__io__format_4_p_0((MR_String) "[%d]\t%-30s\n", output__V_16_16);
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
            MR_Word output__V_66_66;
#line 396 "output.m"
            MR_Word output__V_68_68;
#line 396 "output.m"
            MR_Word output__V_69_69;
#line 396 "output.m"
            MR_Word output__V_70_70;
#line 396 "output.m"
            MR_Word output__V_71_71;
#line 396 "output.m"
            MR_Word output__V_72_72;
#line 396 "output.m"
            MR_Word output__V_73_73;
#line 396 "output.m"
            MR_Word output__V_74_74;
#line 396 "output.m"
            MR_Word output__V_75_75;
#line 396 "output.m"
            MR_Word output__V_76_76;
#line 396 "output.m"
            MR_Word output__V_77_77;
#line 396 "output.m"
            MR_Word output__V_78_78;
#line 396 "output.m"
            MR_Word output__V_79_79;
#line 396 "output.m"
            MR_Word output__V_80_80;
#line 396 "output.m"
            MR_Word output__V_81_81;
#line 396 "output.m"
            MR_Word output__V_82_82;
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
              MR_hl_field(MR_mktag(1), output__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &output_scalar_common_1[0])));
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
#line 425 "output.m"
            {
#line 425 "output.m"
              output__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 425 "output.m"
              MR_hl_field(MR_mktag(0), output__V_68_68, 0) = MR_box_float(output__Percentage_24);
#line 425 "output.m"
            }
#line 425 "output.m"
            {
#line 425 "output.m"
              output__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 425 "output.m"
              MR_hl_field(MR_mktag(0), output__V_70_70, 0) = MR_box_float(output__CumTime_44);
#line 425 "output.m"
            }
#line 425 "output.m"
            {
#line 425 "output.m"
              output__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 425 "output.m"
              MR_hl_field(MR_mktag(0), output__V_72_72, 0) = MR_box_float(output__Self_25);
#line 425 "output.m"
            }
#line 425 "output.m"
            {
#line 425 "output.m"
              output__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 425 "output.m"
              MR_hl_field(MR_mktag(1), output__V_74_74, 0) = ((MR_Box) (output__Calls_43));
#line 425 "output.m"
            }
#line 426 "output.m"
            {
#line 426 "output.m"
              output__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 426 "output.m"
              MR_hl_field(MR_mktag(0), output__V_76_76, 0) = MR_box_float(output__SelfMs_47);
#line 426 "output.m"
            }
#line 426 "output.m"
            {
#line 426 "output.m"
              output__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 426 "output.m"
              MR_hl_field(MR_mktag(0), output__V_78_78, 0) = MR_box_float(output__DescMs_48);
#line 426 "output.m"
            }
#line 426 "output.m"
            {
#line 426 "output.m"
              output__V_80_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 426 "output.m"
              MR_hl_field(MR_mktag(2), output__V_80_80, 0) = ((MR_Box) (output__FullName_49));
#line 426 "output.m"
            }
#line 426 "output.m"
            {
#line 426 "output.m"
              output__V_82_82 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 426 "output.m"
              MR_hl_field(MR_mktag(2), output__V_82_82, 0) = ((MR_Box) (output__IndexStr_51));
#line 426 "output.m"
            }
#line 426 "output.m"
            {
#line 426 "output.m"
              output__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "output.m"
              MR_hl_field(MR_mktag(1), output__V_81_81, 0) = ((MR_Box) (output__V_82_82));
#line 426 "output.m"
              MR_hl_field(MR_mktag(1), output__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 426 "output.m"
            }
#line 426 "output.m"
            {
#line 426 "output.m"
              output__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "output.m"
              MR_hl_field(MR_mktag(1), output__V_79_79, 0) = ((MR_Box) (output__V_80_80));
#line 426 "output.m"
              MR_hl_field(MR_mktag(1), output__V_79_79, 1) = ((MR_Box) (output__V_81_81));
#line 426 "output.m"
            }
#line 426 "output.m"
            {
#line 426 "output.m"
              output__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "output.m"
              MR_hl_field(MR_mktag(1), output__V_77_77, 0) = ((MR_Box) (output__V_78_78));
#line 426 "output.m"
              MR_hl_field(MR_mktag(1), output__V_77_77, 1) = ((MR_Box) (output__V_79_79));
#line 426 "output.m"
            }
#line 425 "output.m"
            {
#line 425 "output.m"
              output__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 425 "output.m"
              MR_hl_field(MR_mktag(1), output__V_75_75, 0) = ((MR_Box) (output__V_76_76));
#line 425 "output.m"
              MR_hl_field(MR_mktag(1), output__V_75_75, 1) = ((MR_Box) (output__V_77_77));
#line 425 "output.m"
            }
#line 425 "output.m"
            {
#line 425 "output.m"
              output__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 425 "output.m"
              MR_hl_field(MR_mktag(1), output__V_73_73, 0) = ((MR_Box) (output__V_74_74));
#line 425 "output.m"
              MR_hl_field(MR_mktag(1), output__V_73_73, 1) = ((MR_Box) (output__V_75_75));
#line 425 "output.m"
            }
#line 425 "output.m"
            {
#line 425 "output.m"
              output__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 425 "output.m"
              MR_hl_field(MR_mktag(1), output__V_71_71, 0) = ((MR_Box) (output__V_72_72));
#line 425 "output.m"
              MR_hl_field(MR_mktag(1), output__V_71_71, 1) = ((MR_Box) (output__V_73_73));
#line 425 "output.m"
            }
#line 425 "output.m"
            {
#line 425 "output.m"
              output__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 425 "output.m"
              MR_hl_field(MR_mktag(1), output__V_69_69, 0) = ((MR_Box) (output__V_70_70));
#line 425 "output.m"
              MR_hl_field(MR_mktag(1), output__V_69_69, 1) = ((MR_Box) (output__V_71_71));
#line 425 "output.m"
            }
#line 424 "output.m"
            {
#line 424 "output.m"
              output__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 424 "output.m"
              MR_hl_field(MR_mktag(1), output__V_66_66, 0) = ((MR_Box) (output__V_68_68));
#line 424 "output.m"
              MR_hl_field(MR_mktag(1), output__V_66_66, 1) = ((MR_Box) (output__V_69_69));
#line 424 "output.m"
            }
#line 424 "output.m"
            {
#line 424 "output.m"
              mercury__io__format_4_p_0((MR_String) "%5.1f %10.2f %8.2f %8d %8.2f %8.2f %s %s\n", output__V_66_66);
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
    MR_Word output__V_87_87;
#line 343 "output.m"
    MR_Word output__V_89_89;
#line 343 "output.m"
    MR_Word output__V_90_90;
#line 343 "output.m"
    MR_Word output__V_91_91;
#line 343 "output.m"
    MR_Word output__V_92_92;
#line 343 "output.m"
    MR_Word output__V_94_94;
#line 343 "output.m"
    MR_Word output__V_95_95;
#line 343 "output.m"
    MR_Word output__V_96_96;
#line 343 "output.m"
    MR_String output__V_100_100;
#line 343 "output.m"
    MR_String output__V_102_102;
#line 343 "output.m"
    MR_String output__V_104_104;
#line 343 "output.m"
    MR_String output__V_106_106;
#line 343 "output.m"
    MR_String output__V_108_108;
#line 343 "output.m"
    MR_String output__V_110_110;
#line 343 "output.m"
    MR_String output__V_112_112;
#line 343 "output.m"
    MR_String output__V_114_114;
#line 343 "output.m"
    MR_String output__V_116_116;
#line 343 "output.m"
    MR_String output__V_118_118;
#line 343 "output.m"
    MR_String output__V_120_120;
#line 343 "output.m"
    MR_String output__V_121_121;
#line 343 "output.m"
    MR_String output__V_123_123;
#line 343 "output.m"
    MR_String output__V_125_125;
#line 343 "output.m"
    MR_String output__V_127_127;
#line 343 "output.m"
    MR_String output__V_129_129;
#line 343 "output.m"
    MR_String output__V_130_130;
#line 343 "output.m"
    MR_String output__V_132_132;
#line 343 "output.m"
    MR_String output__V_134_134;
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
#line 1704 "output.c"
    {
#line 1706 "output.c"
      output__V_100_100 = mercury__string__f_43_43_2_f_0(output__LongWhat_9, (MR_String) " of the program\n");
    }
#line 1709 "output.c"
    {
#line 1711 "output.c"
      output__V_102_102 = mercury__string__f_43_43_2_f_0((MR_String) "%\t\tthe percentage of total ", output__V_100_100);
    }
#line 1714 "output.c"
    {
#line 1716 "output.c"
      mercury__io__write_string_3_p_0(output__V_102_102);
    }
#line 1719 "output.c"
    {
#line 1721 "output.c"
      output__V_104_104 = mercury__string__f_43_43_2_f_0(output__ShortWhat_7, (MR_String) "\t\tused by this procedure.\n\n");
    }
#line 1724 "output.c"
    {
#line 1726 "output.c"
      mercury__io__write_string_3_p_0(output__V_104_104);
    }
#line 1729 "output.c"
    {
#line 1731 "output.c"
      output__V_106_106 = mercury__string__f_43_43_2_f_0(output__Units_11, (MR_String) " for the current procedure and\n");
    }
#line 1734 "output.c"
    {
#line 1736 "output.c"
      output__V_108_108 = mercury__string__f_43_43_2_f_0((MR_String) "cumulative\tthe total number of ", output__V_106_106);
    }
#line 1739 "output.c"
    {
#line 1741 "output.c"
      mercury__io__write_string_3_p_0(output__V_108_108);
    }
#line 1744 "output.c"
    {
#line 1746 "output.c"
      output__V_110_110 = mercury__string__f_43_43_2_f_0(output__ShortUnits_10, (MR_String) "\t\tthe ones listed above it.\n\n");
    }
#line 1749 "output.c"
    {
#line 1751 "output.c"
      mercury__io__write_string_3_p_0(output__V_110_110);
    }
#line 1754 "output.c"
    {
#line 1756 "output.c"
      output__V_112_112 = mercury__string__f_43_43_2_f_0(output__Units_11, (MR_String) " accounted for by this procedure alone.\n");
    }
#line 1759 "output.c"
    {
#line 1761 "output.c"
      output__V_114_114 = mercury__string__f_43_43_2_f_0((MR_String) "self\t\tthe number of ", output__V_112_112);
    }
#line 1764 "output.c"
    {
#line 1766 "output.c"
      mercury__io__write_string_3_p_0(output__V_114_114);
    }
#line 1769 "output.c"
    {
#line 1771 "output.c"
      output__V_116_116 = mercury__string__f_43_43_2_f_0(output__ShortUnits_10, (MR_String) "\t\tThe listing is sorted on this row.\n\n");
    }
#line 1774 "output.c"
    {
#line 1776 "output.c"
      mercury__io__write_string_3_p_0(output__V_116_116);
    }
#line 369 "output.m"
    {
#line 369 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "calls\t\tthe number of times this procedure was called.\n\n");
    }
#line 1784 "output.c"
    {
#line 1786 "output.c"
      output__V_118_118 = mercury__string__f_43_43_2_f_0(output__SpentIn_14, (MR_String) "\n");
    }
#line 1789 "output.c"
    {
#line 1791 "output.c"
      output__V_120_120 = mercury__string__f_43_43_2_f_0((MR_String) " ", output__V_118_118);
    }
#line 1794 "output.c"
    {
#line 1796 "output.c"
      output__V_121_121 = mercury__string__f_43_43_2_f_0(output__MilliUnits_12, output__V_120_120);
    }
#line 1799 "output.c"
    {
#line 1801 "output.c"
      output__V_123_123 = mercury__string__f_43_43_2_f_0((MR_String) "self\t\tthe average number of ", output__V_121_121);
    }
#line 1804 "output.c"
    {
#line 1806 "output.c"
      mercury__io__write_string_3_p_0(output__V_123_123);
    }
#line 1809 "output.c"
    {
#line 1811 "output.c"
      output__V_125_125 = mercury__string__f_43_43_2_f_0(output__MilliUnitsPerCall_13, (MR_String) "  \tthis procedure per call.\n\n");
    }
#line 1814 "output.c"
    {
#line 1816 "output.c"
      mercury__io__write_string_3_p_0(output__V_125_125);
    }
#line 1819 "output.c"
    {
#line 1821 "output.c"
      output__V_127_127 = mercury__string__f_43_43_2_f_0(output__SpentIn_14, (MR_String) " this procedure and its\n");
    }
#line 1824 "output.c"
    {
#line 1826 "output.c"
      output__V_129_129 = mercury__string__f_43_43_2_f_0((MR_String) " ", output__V_127_127);
    }
#line 1829 "output.c"
    {
#line 1831 "output.c"
      output__V_130_130 = mercury__string__f_43_43_2_f_0(output__MilliUnits_12, output__V_129_129);
    }
#line 1834 "output.c"
    {
#line 1836 "output.c"
      output__V_132_132 = mercury__string__f_43_43_2_f_0((MR_String) "total\t\tthe average number of ", output__V_130_130);
    }
#line 1839 "output.c"
    {
#line 1841 "output.c"
      mercury__io__write_string_3_p_0(output__V_132_132);
    }
#line 1844 "output.c"
    {
#line 1846 "output.c"
      output__V_134_134 = mercury__string__f_43_43_2_f_0(output__MilliUnitsPerCall_13, (MR_String) "  \tdescendents per call.\n\n");
    }
#line 1849 "output.c"
    {
#line 1851 "output.c"
      mercury__io__write_string_3_p_0(output__V_134_134);
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
#line 389 "output.m"
    {
#line 389 "output.m"
      output__V_89_89 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 389 "output.m"
      MR_hl_field(MR_mktag(2), output__V_89_89, 0) = ((MR_Box) (output__ShortWhat_7));
#line 389 "output.m"
    }
#line 389 "output.m"
    {
#line 389 "output.m"
      output__V_91_91 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 389 "output.m"
      MR_hl_field(MR_mktag(2), output__V_91_91, 0) = ((MR_Box) (output__ShortUnits_10));
#line 389 "output.m"
    }
#line 390 "output.m"
    {
#line 390 "output.m"
      output__V_95_95 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 390 "output.m"
      MR_hl_field(MR_mktag(2), output__V_95_95, 0) = ((MR_Box) (output__MilliUnitsPerCall_13));
#line 390 "output.m"
    }
#line 390 "output.m"
    {
#line 390 "output.m"
      output__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "output.m"
      MR_hl_field(MR_mktag(1), output__V_96_96, 0) = ((MR_Box) (output__V_95_95));
#line 390 "output.m"
      MR_hl_field(MR_mktag(1), output__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 390 "output.m"
    }
#line 389 "output.m"
    {
#line 389 "output.m"
      output__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "output.m"
      MR_hl_field(MR_mktag(1), output__V_94_94, 0) = ((MR_Box) (output__V_95_95));
#line 389 "output.m"
      MR_hl_field(MR_mktag(1), output__V_94_94, 1) = ((MR_Box) (output__V_96_96));
#line 389 "output.m"
    }
#line 389 "output.m"
    {
#line 389 "output.m"
      output__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "output.m"
      MR_hl_field(MR_mktag(1), output__V_92_92, 0) = ((MR_Box) (output__V_91_91));
#line 389 "output.m"
      MR_hl_field(MR_mktag(1), output__V_92_92, 1) = ((MR_Box) (output__V_94_94));
#line 389 "output.m"
    }
#line 389 "output.m"
    {
#line 389 "output.m"
      output__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "output.m"
      MR_hl_field(MR_mktag(1), output__V_90_90, 0) = ((MR_Box) (output__V_91_91));
#line 389 "output.m"
      MR_hl_field(MR_mktag(1), output__V_90_90, 1) = ((MR_Box) (output__V_92_92));
#line 389 "output.m"
    }
#line 388 "output.m"
    {
#line 388 "output.m"
      output__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "output.m"
      MR_hl_field(MR_mktag(1), output__V_87_87, 0) = ((MR_Box) (output__V_89_89));
#line 388 "output.m"
      MR_hl_field(MR_mktag(1), output__V_87_87, 1) = ((MR_Box) (output__V_90_90));
#line 388 "output.m"
    }
#line 388 "output.m"
    {
#line 388 "output.m"
      mercury__io__format_4_p_0((MR_String) " %4s    %7s  %7s    calls %8s %8s name\n", output__V_87_87);
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
      MR_hl_field(MR_mktag(0), output__V_20_20, 0) = ((MR_Box) (&output_scalar_common_3[1]));
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
            MR_Word output__V_24_24;
#line 314 "output.m"
            MR_Word output__V_26_26;
#line 314 "output.m"
            MR_Word output__V_27_27;
#line 314 "output.m"
            MR_Word output__V_28_28;
#line 314 "output.m"
            MR_Word output__V_29_29;
#line 314 "output.m"
            MR_Word output__V_30_30;
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
                MR_String output__CycleStr_38;
#line 461 "output.m"
                MR_Word output__V_39_39;
#line 461 "output.m"
                MR_Word output__V_40_40;
#line 461 "output.m"
                MR_Word output__V_42_42;

#line 461 "output.m"
                {
#line 461 "output.m"
                  mercury__string__int_to_string_2_p_0(output__CycleNum_14, &output__CycleStr_38);
                }
#line 462 "output.m"
                {
#line 462 "output.m"
                  output__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "output.m"
                  MR_hl_field(MR_mktag(1), output__V_42_42, 0) = ((MR_Box) (output__CycleStr_38));
#line 462 "output.m"
                  MR_hl_field(MR_mktag(1), output__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &output_scalar_common_1[2])));
#line 462 "output.m"
                }
#line 462 "output.m"
                {
#line 462 "output.m"
                  output__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "output.m"
                  MR_hl_field(MR_mktag(1), output__V_40_40, 0) = ((MR_Box) ((MR_String) "  <cycle "));
#line 462 "output.m"
                  MR_hl_field(MR_mktag(1), output__V_40_40, 1) = ((MR_Box) (output__V_42_42));
#line 462 "output.m"
                }
#line 462 "output.m"
                {
#line 462 "output.m"
                  output__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "output.m"
                  MR_hl_field(MR_mktag(1), output__V_39_39, 0) = ((MR_Box) (output__LabelName_13));
#line 462 "output.m"
                  MR_hl_field(MR_mktag(1), output__V_39_39, 1) = ((MR_Box) (output__V_40_40));
#line 462 "output.m"
                }
#line 462 "output.m"
                {
#line 462 "output.m"
                  mercury__string__append_list_2_p_0(output__V_39_39, &output__Name_19);
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
#line 319 "output.m"
            {
#line 319 "output.m"
              output__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 319 "output.m"
              MR_hl_field(MR_mktag(1), output__V_26_26, 0) = ((MR_Box) (output__Calls_17));
#line 319 "output.m"
            }
#line 319 "output.m"
            {
#line 319 "output.m"
              output__V_28_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 319 "output.m"
              MR_hl_field(MR_mktag(2), output__V_28_28, 0) = ((MR_Box) (output__Name_19));
#line 319 "output.m"
            }
#line 319 "output.m"
            {
#line 319 "output.m"
              output__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 319 "output.m"
              MR_hl_field(MR_mktag(1), output__V_30_30, 0) = ((MR_Box) (output__Index_20));
#line 319 "output.m"
            }
#line 319 "output.m"
            {
#line 319 "output.m"
              output__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "output.m"
              MR_hl_field(MR_mktag(1), output__V_29_29, 0) = ((MR_Box) (output__V_30_30));
#line 319 "output.m"
              MR_hl_field(MR_mktag(1), output__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 319 "output.m"
            }
#line 319 "output.m"
            {
#line 319 "output.m"
              output__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "output.m"
              MR_hl_field(MR_mktag(1), output__V_27_27, 0) = ((MR_Box) (output__V_28_28));
#line 319 "output.m"
              MR_hl_field(MR_mktag(1), output__V_27_27, 1) = ((MR_Box) (output__V_29_29));
#line 319 "output.m"
            }
#line 318 "output.m"
            {
#line 318 "output.m"
              output__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "output.m"
              MR_hl_field(MR_mktag(1), output__V_24_24, 0) = ((MR_Box) (output__V_26_26));
#line 318 "output.m"
              MR_hl_field(MR_mktag(1), output__V_24_24, 1) = ((MR_Box) (output__V_27_27));
#line 318 "output.m"
            }
#line 318 "output.m"
            {
#line 318 "output.m"
              mercury__io__format_4_p_0((MR_String) "%40d             %s [%d]\n", output__V_24_24);
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
            MR_Word output__V_26_26;
#line 297 "output.m"
            MR_Word output__V_28_28;
#line 297 "output.m"
            MR_Word output__V_29_29;
#line 297 "output.m"
            MR_Word output__V_30_30;
#line 297 "output.m"
            MR_Word output__V_31_31;
#line 297 "output.m"
            MR_Word output__V_32_32;
#line 297 "output.m"
            MR_Word output__V_33_33;
#line 297 "output.m"
            MR_Word output__V_34_34;
#line 297 "output.m"
            MR_Word output__V_35_35;
#line 297 "output.m"
            MR_Word output__V_36_36;
#line 297 "output.m"
            MR_Word output__V_37_37;
#line 297 "output.m"
            MR_Word output__V_38_38;
#line 300 "output.m"
            MR_Box output__conv0_Index_22;

#line 458 "output.m"
            output__succeeded = (output__CycleNum_17 == (MR_Integer) 0);
#line 460 "output.m"
            if (output__succeeded)
#line 459 "output.m"
              output__Name_21 = output__LabelName_16;
#line 460 "output.m"
            else
#line 461 "output.m"
              {
#line 461 "output.m"
                MR_String output__CycleStr_46;
#line 461 "output.m"
                MR_Word output__V_47_47;
#line 461 "output.m"
                MR_Word output__V_48_48;
#line 461 "output.m"
                MR_Word output__V_50_50;

#line 461 "output.m"
                {
#line 461 "output.m"
                  mercury__string__int_to_string_2_p_0(output__CycleNum_17, &output__CycleStr_46);
                }
#line 462 "output.m"
                {
#line 462 "output.m"
                  output__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "output.m"
                  MR_hl_field(MR_mktag(1), output__V_50_50, 0) = ((MR_Box) (output__CycleStr_46));
#line 462 "output.m"
                  MR_hl_field(MR_mktag(1), output__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &output_scalar_common_1[2])));
#line 462 "output.m"
                }
#line 462 "output.m"
                {
#line 462 "output.m"
                  output__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "output.m"
                  MR_hl_field(MR_mktag(1), output__V_48_48, 0) = ((MR_Box) ((MR_String) "  <cycle "));
#line 462 "output.m"
                  MR_hl_field(MR_mktag(1), output__V_48_48, 1) = ((MR_Box) (output__V_50_50));
#line 462 "output.m"
                }
#line 462 "output.m"
                {
#line 462 "output.m"
                  output__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "output.m"
                  MR_hl_field(MR_mktag(1), output__V_47_47, 0) = ((MR_Box) (output__LabelName_16));
#line 462 "output.m"
                  MR_hl_field(MR_mktag(1), output__V_47_47, 1) = ((MR_Box) (output__V_48_48));
#line 462 "output.m"
                }
#line 462 "output.m"
                {
#line 462 "output.m"
                  mercury__string__append_list_2_p_0(output__V_47_47, &output__Name_21);
                }
#line 461 "output.m"
              }
#line 300 "output.m"
            {
#line 300 "output.m"
              output__conv0_Index_22 = mercury__map__det_elem_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (output__LabelName_16)), output__IndexMap_2);
            }
#line 300 "output.m"
            output__Index_22 = ((MR_Integer) output__conv0_Index_22);
#line 302 "output.m"
            {
#line 302 "output.m"
              output__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 302 "output.m"
              MR_hl_field(MR_mktag(0), output__V_28_28, 0) = MR_box_float(output__Self_18);
#line 302 "output.m"
            }
#line 302 "output.m"
            {
#line 302 "output.m"
              output__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 302 "output.m"
              MR_hl_field(MR_mktag(0), output__V_30_30, 0) = MR_box_float(output__Descendant_19);
#line 302 "output.m"
            }
#line 302 "output.m"
            {
#line 302 "output.m"
              output__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 302 "output.m"
              MR_hl_field(MR_mktag(1), output__V_32_32, 0) = ((MR_Box) (output__Calls_20));
#line 302 "output.m"
            }
#line 302 "output.m"
            {
#line 302 "output.m"
              output__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 302 "output.m"
              MR_hl_field(MR_mktag(1), output__V_34_34, 0) = ((MR_Box) (output__TotalCalls_3));
#line 302 "output.m"
            }
#line 302 "output.m"
            {
#line 302 "output.m"
              output__V_36_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 302 "output.m"
              MR_hl_field(MR_mktag(2), output__V_36_36, 0) = ((MR_Box) (output__Name_21));
#line 302 "output.m"
            }
#line 302 "output.m"
            {
#line 302 "output.m"
              output__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 302 "output.m"
              MR_hl_field(MR_mktag(1), output__V_38_38, 0) = ((MR_Box) (output__Index_22));
#line 302 "output.m"
            }
#line 302 "output.m"
            {
#line 302 "output.m"
              output__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 302 "output.m"
              MR_hl_field(MR_mktag(1), output__V_37_37, 0) = ((MR_Box) (output__V_38_38));
#line 302 "output.m"
              MR_hl_field(MR_mktag(1), output__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 302 "output.m"
            }
#line 302 "output.m"
            {
#line 302 "output.m"
              output__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 302 "output.m"
              MR_hl_field(MR_mktag(1), output__V_35_35, 0) = ((MR_Box) (output__V_36_36));
#line 302 "output.m"
              MR_hl_field(MR_mktag(1), output__V_35_35, 1) = ((MR_Box) (output__V_37_37));
#line 302 "output.m"
            }
#line 302 "output.m"
            {
#line 302 "output.m"
              output__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 302 "output.m"
              MR_hl_field(MR_mktag(1), output__V_33_33, 0) = ((MR_Box) (output__V_34_34));
#line 302 "output.m"
              MR_hl_field(MR_mktag(1), output__V_33_33, 1) = ((MR_Box) (output__V_35_35));
#line 302 "output.m"
            }
#line 302 "output.m"
            {
#line 302 "output.m"
              output__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 302 "output.m"
              MR_hl_field(MR_mktag(1), output__V_31_31, 0) = ((MR_Box) (output__V_32_32));
#line 302 "output.m"
              MR_hl_field(MR_mktag(1), output__V_31_31, 1) = ((MR_Box) (output__V_33_33));
#line 302 "output.m"
            }
#line 302 "output.m"
            {
#line 302 "output.m"
              output__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 302 "output.m"
              MR_hl_field(MR_mktag(1), output__V_29_29, 0) = ((MR_Box) (output__V_30_30));
#line 302 "output.m"
              MR_hl_field(MR_mktag(1), output__V_29_29, 1) = ((MR_Box) (output__V_31_31));
#line 302 "output.m"
            }
#line 301 "output.m"
            {
#line 301 "output.m"
              output__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 301 "output.m"
              MR_hl_field(MR_mktag(1), output__V_26_26, 0) = ((MR_Box) (output__V_28_28));
#line 301 "output.m"
              MR_hl_field(MR_mktag(1), output__V_26_26, 1) = ((MR_Box) (output__V_29_29));
#line 301 "output.m"
            }
#line 301 "output.m"
            {
#line 301 "output.m"
              mercury__io__format_4_p_0((MR_String) "%20.2f %11.2f %7d/%-11d %s [%d]\n", output__V_26_26);
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
      MR_hl_field(MR_mktag(0), output__V_18_18, 0) = ((MR_Box) (&output_scalar_common_3[0]));
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
    MR_Word output__V_50_50;
#line 215 "output.m"
    MR_Word output__V_51_51;
#line 215 "output.m"
    MR_Word output__V_52_52;
#line 215 "output.m"
    MR_Word output__V_53_53;
#line 215 "output.m"
    MR_Word output__V_54_54;
#line 215 "output.m"
    MR_Word output__V_55_55;
#line 215 "output.m"
    MR_Word output__V_58_58;
#line 215 "output.m"
    MR_Word output__V_59_59;
#line 215 "output.m"
    MR_Word output__V_60_60;
#line 215 "output.m"
    MR_Word output__V_61_61;
#line 215 "output.m"
    MR_Word output__V_62_62;
#line 215 "output.m"
    MR_Word output__V_63_63;
#line 215 "output.m"
    MR_Word output__V_64_64;
#line 215 "output.m"
    MR_Word output__V_65_65;
#line 215 "output.m"
    MR_Word output__V_66_66;
#line 215 "output.m"
    MR_Word output__V_67_67;
#line 215 "output.m"
    MR_String output__V_86_86;
#line 215 "output.m"
    MR_String output__V_88_88;
#line 215 "output.m"
    MR_String output__V_90_90;

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
      MR_hl_field(MR_mktag(1), output__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &output_scalar_common_1[0])));
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
#line 230 "output.m"
    {
#line 230 "output.m"
      output__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 230 "output.m"
      MR_hl_field(MR_mktag(1), output__V_51_51, 0) = ((MR_Box) (output__SelfCalls_17));
#line 230 "output.m"
    }
#line 230 "output.m"
    {
#line 230 "output.m"
      output__V_53_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 230 "output.m"
      MR_hl_field(MR_mktag(2), output__V_53_53, 0) = ((MR_Box) (output__FullName_31));
#line 230 "output.m"
    }
#line 230 "output.m"
    {
#line 230 "output.m"
      output__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 230 "output.m"
      MR_hl_field(MR_mktag(1), output__V_55_55, 0) = ((MR_Box) (output__Index_7));
#line 230 "output.m"
    }
#line 230 "output.m"
    {
#line 230 "output.m"
      output__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "output.m"
      MR_hl_field(MR_mktag(1), output__V_54_54, 0) = ((MR_Box) (output__V_55_55));
#line 230 "output.m"
      MR_hl_field(MR_mktag(1), output__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 230 "output.m"
    }
#line 230 "output.m"
    {
#line 230 "output.m"
      output__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "output.m"
      MR_hl_field(MR_mktag(1), output__V_52_52, 0) = ((MR_Box) (output__V_53_53));
#line 230 "output.m"
      MR_hl_field(MR_mktag(1), output__V_52_52, 1) = ((MR_Box) (output__V_54_54));
#line 230 "output.m"
    }
#line 229 "output.m"
    {
#line 229 "output.m"
      output__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "output.m"
      MR_hl_field(MR_mktag(1), output__V_50_50, 0) = ((MR_Box) (output__V_51_51));
#line 229 "output.m"
      MR_hl_field(MR_mktag(1), output__V_50_50, 1) = ((MR_Box) (output__V_52_52));
#line 229 "output.m"
    }
#line 229 "output.m"
    {
#line 229 "output.m"
      mercury__string__format_3_p_0((MR_String) "%40d             %s [%d]\n", output__V_50_50, &output__SelfCallsString_34);
    }
#line 231 "output.m"
    {
#line 231 "output.m"
      output__V_59_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 231 "output.m"
      MR_hl_field(MR_mktag(2), output__V_59_59, 0) = ((MR_Box) (output__IndexStr_33));
#line 231 "output.m"
    }
#line 232 "output.m"
    {
#line 232 "output.m"
      output__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 232 "output.m"
      MR_hl_field(MR_mktag(0), output__V_61_61, 0) = MR_box_float(output__Percentage_12);
#line 232 "output.m"
    }
#line 232 "output.m"
    {
#line 232 "output.m"
      output__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 232 "output.m"
      MR_hl_field(MR_mktag(0), output__V_63_63, 0) = MR_box_float(output__Self_14);
#line 232 "output.m"
    }
#line 232 "output.m"
    {
#line 232 "output.m"
      output__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 232 "output.m"
      MR_hl_field(MR_mktag(0), output__V_65_65, 0) = MR_box_float(output__Descendant_15);
#line 232 "output.m"
    }
#line 232 "output.m"
    {
#line 232 "output.m"
      output__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 232 "output.m"
      MR_hl_field(MR_mktag(1), output__V_67_67, 0) = ((MR_Box) (output__TotalCalls_16));
#line 232 "output.m"
    }
#line 232 "output.m"
    {
#line 232 "output.m"
      output__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "output.m"
      MR_hl_field(MR_mktag(1), output__V_66_66, 0) = ((MR_Box) (output__V_67_67));
#line 232 "output.m"
      MR_hl_field(MR_mktag(1), output__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 232 "output.m"
    }
#line 232 "output.m"
    {
#line 232 "output.m"
      output__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "output.m"
      MR_hl_field(MR_mktag(1), output__V_64_64, 0) = ((MR_Box) (output__V_65_65));
#line 232 "output.m"
      MR_hl_field(MR_mktag(1), output__V_64_64, 1) = ((MR_Box) (output__V_66_66));
#line 232 "output.m"
    }
#line 232 "output.m"
    {
#line 232 "output.m"
      output__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "output.m"
      MR_hl_field(MR_mktag(1), output__V_62_62, 0) = ((MR_Box) (output__V_63_63));
#line 232 "output.m"
      MR_hl_field(MR_mktag(1), output__V_62_62, 1) = ((MR_Box) (output__V_64_64));
#line 232 "output.m"
    }
#line 231 "output.m"
    {
#line 231 "output.m"
      output__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "output.m"
      MR_hl_field(MR_mktag(1), output__V_60_60, 0) = ((MR_Box) (output__V_61_61));
#line 231 "output.m"
      MR_hl_field(MR_mktag(1), output__V_60_60, 1) = ((MR_Box) (output__V_62_62));
#line 231 "output.m"
    }
#line 231 "output.m"
    {
#line 231 "output.m"
      output__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "output.m"
      MR_hl_field(MR_mktag(1), output__V_58_58, 0) = ((MR_Box) (output__V_59_59));
#line 231 "output.m"
      MR_hl_field(MR_mktag(1), output__V_58_58, 1) = ((MR_Box) (output__V_60_60));
#line 231 "output.m"
    }
#line 231 "output.m"
    {
#line 231 "output.m"
      mercury__string__format_3_p_0((MR_String) "%-6s %5.1f %7.2f %11.2f %7d", output__V_58_58, &output__InitMiddleStr_35);
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
#line 235 "output.m"
      {
#line 235 "output.m"
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
        {
#line 244 "output.m"
          mercury__io__format_4_p_0((MR_String) "%67s", (MR_Word) MR_mkword(MR_mktag(1), &output_scalar_common_1[1]));
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
        MR_Word output__V_82_82;

#line 260 "output.m"
        {
#line 260 "output.m"
          output__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 260 "output.m"
          MR_hl_field(MR_mktag(1), output__V_82_82, 0) = ((MR_Box) (output__V_51_51));
#line 260 "output.m"
          MR_hl_field(MR_mktag(1), output__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 260 "output.m"
        }
#line 260 "output.m"
        {
#line 260 "output.m"
          mercury__io__format_4_p_0((MR_String) "+%-7d", output__V_82_82);
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
#line 3057 "output.c"
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
#line 270 "output.m"
      {
#line 270 "output.m"
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
    MR_Word output__V_146_146;
#line 99 "output.m"
    MR_Word output__V_148_148;
#line 99 "output.m"
    MR_String output__V_149_149;
#line 99 "output.m"
    MR_String output__V_159_159;
#line 99 "output.m"
    MR_String output__V_161_161;
#line 99 "output.m"
    MR_String output__V_163_163;
#line 99 "output.m"
    MR_String output__V_165_165;
#line 99 "output.m"
    MR_String output__V_166_166;
#line 99 "output.m"
    MR_String output__V_168_168;
#line 99 "output.m"
    MR_String output__V_170_170;
#line 99 "output.m"
    MR_String output__V_172_172;
#line 99 "output.m"
    MR_String output__V_174_174;
#line 99 "output.m"
    MR_String output__V_176_176;
#line 99 "output.m"
    MR_String output__V_177_177;
#line 99 "output.m"
    MR_String output__V_179_179;
#line 99 "output.m"
    MR_String output__V_181_181;
#line 99 "output.m"
    MR_String output__V_183_183;
#line 99 "output.m"
    MR_String output__V_184_184;
#line 99 "output.m"
    MR_String output__V_186_186;
#line 99 "output.m"
    MR_String output__V_188_188;
#line 99 "output.m"
    MR_String output__V_190_190;
#line 99 "output.m"
    MR_String output__V_192_192;
#line 99 "output.m"
    MR_String output__V_194_194;
#line 99 "output.m"
    MR_String output__V_196_196;
#line 99 "output.m"
    MR_String output__V_198_198;
#line 99 "output.m"
    MR_String output__V_200_200;
#line 99 "output.m"
    MR_String output__V_202_202;
#line 99 "output.m"
    MR_String output__V_203_203;
#line 99 "output.m"
    MR_String output__V_205_205;
#line 99 "output.m"
    MR_String output__V_207_207;
#line 99 "output.m"
    MR_String output__V_209_209;
#line 99 "output.m"
    MR_String output__V_210_210;
#line 99 "output.m"
    MR_String output__V_212_212;
#line 99 "output.m"
    MR_String output__V_214_214;
#line 99 "output.m"
    MR_String output__V_216_216;
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
#line 3325 "output.c"
    {
#line 3327 "output.c"
      output__V_159_159 = mercury__string__f_43_43_2_f_0(output__ShortWhat_7, (MR_String) " field.\n\n");
    }
#line 3330 "output.c"
    {
#line 3332 "output.c"
      output__V_161_161 = mercury__string__f_43_43_2_f_0((MR_String) "\tSorted on the %", output__V_159_159);
    }
#line 3335 "output.c"
    {
#line 3337 "output.c"
      mercury__io__write_string_3_p_0(output__V_161_161);
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
#line 3355 "output.c"
    {
#line 3357 "output.c"
      output__V_163_163 = mercury__string__f_43_43_2_f_0(output__LongWhat_9, (MR_String) " of\n");
    }
#line 3360 "output.c"
    {
#line 3362 "output.c"
      output__V_165_165 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tthe percentage of the total ", output__V_163_163);
    }
#line 3365 "output.c"
    {
#line 3367 "output.c"
      output__V_166_166 = mercury__string__f_43_43_2_f_0(output__ShortWhat_7, output__V_165_165);
    }
#line 3370 "output.c"
    {
#line 3372 "output.c"
      output__V_168_168 = mercury__string__f_43_43_2_f_0((MR_String) "%", output__V_166_166);
    }
#line 3375 "output.c"
    {
#line 3377 "output.c"
      mercury__io__write_string_3_p_0(output__V_168_168);
    }
#line 3380 "output.c"
    {
#line 3382 "output.c"
      output__V_170_170 = mercury__string__f_43_43_2_f_0(output__SpentIn_14, (MR_String) " this procedure and its\n");
    }
#line 3385 "output.c"
    {
#line 3387 "output.c"
      output__V_172_172 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tthe program ", output__V_170_170);
    }
#line 3390 "output.c"
    {
#line 3392 "output.c"
      mercury__io__write_string_3_p_0(output__V_172_172);
    }
#line 119 "output.m"
    {
#line 119 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tdescendents.\n\n");
    }
#line 3400 "output.c"
    {
#line 3402 "output.c"
      output__V_174_174 = mercury__string__f_43_43_2_f_0(output__SpentIn_14, (MR_String) "\n");
    }
#line 3405 "output.c"
    {
#line 3407 "output.c"
      output__V_176_176 = mercury__string__f_43_43_2_f_0((MR_String) " actually ", output__V_174_174);
    }
#line 3410 "output.c"
    {
#line 3412 "output.c"
      output__V_177_177 = mercury__string__f_43_43_2_f_0(output__Units_11, output__V_176_176);
    }
#line 3415 "output.c"
    {
#line 3417 "output.c"
      output__V_179_179 = mercury__string__f_43_43_2_f_0((MR_String) "self\t\tthe number of ", output__V_177_177);
    }
#line 3420 "output.c"
    {
#line 3422 "output.c"
      mercury__io__write_string_3_p_0(output__V_179_179);
    }
#line 123 "output.m"
    {
#line 123 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tthe procedure\'s own code.\n\n");
    }
#line 3430 "output.c"
    {
#line 3432 "output.c"
      output__V_181_181 = mercury__string__f_43_43_2_f_0(output__SpentIn_14, (MR_String) " the\n");
    }
#line 3435 "output.c"
    {
#line 3437 "output.c"
      output__V_183_183 = mercury__string__f_43_43_2_f_0((MR_String) " ", output__V_181_181);
    }
#line 3440 "output.c"
    {
#line 3442 "output.c"
      output__V_184_184 = mercury__string__f_43_43_2_f_0(output__Units_11, output__V_183_183);
    }
#line 3445 "output.c"
    {
#line 3447 "output.c"
      output__V_186_186 = mercury__string__f_43_43_2_f_0((MR_String) "descendents\tthe number of ", output__V_184_184);
    }
#line 3450 "output.c"
    {
#line 3452 "output.c"
      mercury__io__write_string_3_p_0(output__V_186_186);
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
#line 3490 "output.c"
    {
#line 3492 "output.c"
      output__V_188_188 = mercury__string__f_43_43_2_f_0(output__Units_11, (MR_String) " of the current procedure\'s self\n");
    }
#line 3495 "output.c"
    {
#line 3497 "output.c"
      output__V_190_190 = mercury__string__f_43_43_2_f_0((MR_String) "self*\t\tthe number of ", output__V_188_188);
    }
#line 3500 "output.c"
    {
#line 3502 "output.c"
      mercury__io__write_string_3_p_0(output__V_190_190);
    }
#line 3505 "output.c"
    {
#line 3507 "output.c"
      output__V_192_192 = mercury__string__f_43_43_2_f_0(output__What_8, (MR_String) " due to calls from this parent.\n\n");
    }
#line 3510 "output.c"
    {
#line 3512 "output.c"
      output__V_194_194 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", output__V_192_192);
    }
#line 3515 "output.c"
    {
#line 3517 "output.c"
      mercury__io__write_string_3_p_0(output__V_194_194);
    }
#line 3520 "output.c"
    {
#line 3522 "output.c"
      output__V_214_214 = mercury__string__f_43_43_2_f_0(output__Units_11, (MR_String) " of the current procedure\'s descendent\n");
    }
#line 3525 "output.c"
    {
#line 3527 "output.c"
      output__V_216_216 = mercury__string__f_43_43_2_f_0((MR_String) "descendents*\tthe number of ", output__V_214_214);
    }
#line 3530 "output.c"
    {
#line 3532 "output.c"
      mercury__io__write_string_3_p_0(output__V_216_216);
    }
#line 3535 "output.c"
    {
#line 3537 "output.c"
      output__V_196_196 = mercury__string__f_43_43_2_f_0(output__What_8, (MR_String) " which is due to calls from this parent.\n\n");
    }
#line 3540 "output.c"
    {
#line 3542 "output.c"
      output__V_198_198 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", output__V_196_196);
    }
#line 3545 "output.c"
    {
#line 3547 "output.c"
      mercury__io__write_string_3_p_0(output__V_198_198);
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
#line 3580 "output.c"
    {
#line 3582 "output.c"
      output__V_200_200 = mercury__string__f_43_43_2_f_0(output__What_8, (MR_String) " which is\n");
    }
#line 3585 "output.c"
    {
#line 3587 "output.c"
      output__V_202_202 = mercury__string__f_43_43_2_f_0((MR_String) " of this child\'s self ", output__V_200_200);
    }
#line 3590 "output.c"
    {
#line 3592 "output.c"
      output__V_203_203 = mercury__string__f_43_43_2_f_0(output__Units_11, output__V_202_202);
    }
#line 3595 "output.c"
    {
#line 3597 "output.c"
      output__V_205_205 = mercury__string__f_43_43_2_f_0((MR_String) "self*\t\tthe number of ", output__V_203_203);
    }
#line 3600 "output.c"
    {
#line 3602 "output.c"
      mercury__io__write_string_3_p_0(output__V_205_205);
    }
#line 171 "output.m"
    {
#line 171 "output.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tdue to being called by the current procedure.\n\n");
    }
#line 3610 "output.c"
    {
#line 3612 "output.c"
      output__V_207_207 = mercury__string__f_43_43_2_f_0(output__What_8, (MR_String) " which\n");
    }
#line 3615 "output.c"
    {
#line 3617 "output.c"
      output__V_209_209 = mercury__string__f_43_43_2_f_0((MR_String) " of this child\'s descendent ", output__V_207_207);
    }
#line 3620 "output.c"
    {
#line 3622 "output.c"
      output__V_210_210 = mercury__string__f_43_43_2_f_0(output__Units_11, output__V_209_209);
    }
#line 3625 "output.c"
    {
#line 3627 "output.c"
      output__V_212_212 = mercury__string__f_43_43_2_f_0((MR_String) "descendent*\tthe number of ", output__V_210_210);
    }
#line 3630 "output.c"
    {
#line 3632 "output.c"
      mercury__io__write_string_3_p_0(output__V_212_212);
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
#line 194 "output.m"
    {
#line 194 "output.m"
      output__V_148_148 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 194 "output.m"
      MR_hl_field(MR_mktag(2), output__V_148_148, 0) = ((MR_Box) (output__V_149_149));
#line 194 "output.m"
    }
#line 193 "output.m"
    {
#line 193 "output.m"
      output__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "output.m"
      MR_hl_field(MR_mktag(1), output__V_146_146, 0) = ((MR_Box) (output__V_148_148));
#line 193 "output.m"
      MR_hl_field(MR_mktag(1), output__V_146_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 193 "output.m"
    }
#line 193 "output.m"
    {
#line 193 "output.m"
      mercury__io__format_4_p_0((MR_String) "index %6s    self descendents  called+self", output__V_146_146);
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
    if ((output__HeadVar__1_1 == (MR_Integer) 2))
#line 93 "output.m"
      {
#line 93 "output.m"
        *output__HeadVar__2_2 = (MR_String) "cells";
#line 93 "output.m"
        *output__HeadVar__3_3 = (MR_String) "allocations";
#line 93 "output.m"
        *output__HeadVar__4_4 = (MR_String) "number of memory allocations";
#line 93 "output.m"
        *output__HeadVar__5_5 = (MR_String) "k-cells";
#line 93 "output.m"
        *output__HeadVar__6_6 = (MR_String) "kilocells";
#line 93 "output.m"
        *output__HeadVar__7_7 = (MR_String) "cells";
#line 93 "output.m"
        *output__HeadVar__8_8 = (MR_String) "cls/call";
#line 93 "output.m"
        *output__HeadVar__9_9 = (MR_String) "occurring in";
#line 93 "output.m"
      }
#line 89 "output.m"
    else
#line 89 "output.m"
      if ((output__HeadVar__1_1 == (MR_Integer) 1))
#line 91 "output.m"
        {
#line 91 "output.m"
          *output__HeadVar__2_2 = (MR_String) "mem";
#line 91 "output.m"
          *output__HeadVar__3_3 = (MR_String) "memory";
#line 91 "output.m"
          *output__HeadVar__4_4 = (MR_String) "allocated memory";
#line 91 "output.m"
          *output__HeadVar__5_5 = (MR_String) "k-words";
#line 91 "output.m"
          *output__HeadVar__6_6 = (MR_String) "kilowords";
#line 91 "output.m"
          *output__HeadVar__7_7 = (MR_String) "words";
#line 91 "output.m"
          *output__HeadVar__8_8 = (MR_String) "wds/call";
#line 91 "output.m"
          *output__HeadVar__9_9 = (MR_String) "allocated by";
#line 91 "output.m"
        }
#line 89 "output.m"
      else
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
#line 89 "output.m"
          *output__HeadVar__7_7 = (MR_String) "milliseconds";
#line 89 "output.m"
          *output__HeadVar__8_8 = (MR_String) "ms/call";
#line 89 "output.m"
          *output__HeadVar__9_9 = (MR_String) "spent executing";
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
    MR_Word output__HeadVar__2_2;

#line 79 "output.m"
    if ((output__HeadVar__1_1 == (MR_Integer) 1))
#line 83 "output.m"
      output__HeadVar__2_2 = (MR_Integer) 2;
#line 79 "output.m"
    else
#line 79 "output.m"
      if ((output__HeadVar__1_1 == (MR_Integer) 2))
#line 84 "output.m"
        output__HeadVar__2_2 = (MR_Integer) 2;
#line 79 "output.m"
      else
#line 79 "output.m"
        if ((output__HeadVar__1_1 == (MR_Integer) 0))
#line 82 "output.m"
          output__HeadVar__2_2 = (MR_Integer) 1;
#line 79 "output.m"
        else
#line 79 "output.m"
          if ((output__HeadVar__1_1 == (MR_Integer) 5))
#line 81 "output.m"
            output__HeadVar__2_2 = (MR_Integer) 0;
#line 79 "output.m"
          else
#line 79 "output.m"
            if ((output__HeadVar__1_1 == (MR_Integer) 3))
#line 80 "output.m"
              output__HeadVar__2_2 = (MR_Integer) 0;
#line 79 "output.m"
            else
#line 79 "output.m"
              output__HeadVar__2_2 = (MR_Integer) 0;
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
    MR_String output__V_33_33;
#line 50 "output.m"
    MR_String output__V_35_35;
#line 50 "output.m"
    MR_Word output__IndexList_45;

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
#line 3928 "output.c"
    {
#line 3930 "output.c"
      output__V_33_33 = mercury__string__f_43_43_2_f_0(output__WhatToProfileString_10, (MR_String) " ***\n\n");
    }
#line 3933 "output.c"
    {
#line 3935 "output.c"
      output__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) "*** profiling ", output__V_33_33);
    }
#line 3938 "output.c"
    {
#line 3940 "output.c"
      mercury__io__write_string_3_p_0(output__V_35_35);
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
    if ((output__CallGraphOpt_14 == (MR_Integer) 0))
#line 63 "output.m"
      {
#line 63 "output.m"
      }
#line 62 "output.m"
    else
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
      output__IndexList_45 = mercury__map__to_assoc_list_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, output__IndexMap_6);
    }
#line 440 "output.m"
    {
#line 440 "output.m"
      output__output_alphabet_listing_2_3_p_0(output__IndexList_45);
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
