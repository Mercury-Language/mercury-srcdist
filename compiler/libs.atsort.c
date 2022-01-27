/*
** Automatically generated from `atsort.m'
** by the Mercury compiler,
** version rotd-2013-03-21, configured for x86_64-apple-darwin12.2.1.
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


/* :- module libs.atsort. */
/* :- implementation. */

/*
INIT mercury__libs__atsort__init
ENDINIT
*/

#include "libs.atsort.mih"


#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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




#line 63 "libs.atsort.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__atsort__list__pti_list_1__pseudo_1;

#line 66 "libs.atsort.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__atsort__tree234__pti_tree234_2__pseudo_1__pseudo_list__pti_list_1__pseudo_1;

#line 69 "libs.atsort.c"
static MR_bool MR_CALL 
libs__atsort____Unify____relmap_1_0_10001(
#line 72 "libs.atsort.c"
  MR_Box libs__atsort__wrapper_arg_1,
#line 74 "libs.atsort.c"
  MR_Box libs__atsort__wrapper_arg_2,
#line 76 "libs.atsort.c"
  MR_Box libs__atsort__wrapper_arg_3);

#line 79 "libs.atsort.c"
static void MR_CALL 
libs__atsort____Compare____relmap_1_0_10001(
#line 82 "libs.atsort.c"
  MR_Box libs__atsort__wrapper_arg_1,
#line 84 "libs.atsort.c"
  MR_Box * libs__atsort__wrapper_arg_2,
#line 86 "libs.atsort.c"
  MR_Box libs__atsort__wrapper_arg_3,
#line 88 "libs.atsort.c"
  MR_Box libs__atsort__wrapper_arg_4);

#line 87 "atsort.m"
static void MR_CALL 
libs__atsort__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_p_0(
#line 87 "atsort.m"
  MR_Word libs__atsort__TypeInfo_for_T_44,
#line 87 "atsort.m"
  MR_Word libs__atsort__Nodes0_8,
#line 87 "atsort.m"
  MR_Word libs__atsort__STATE_VARIABLE_Succmap_0_24,
#line 87 "atsort.m"
  MR_Word libs__atsort__STATE_VARIABLE_Predmap_0_25,
#line 87 "atsort.m"
  MR_Word libs__atsort__MustPredmap_12,
#line 87 "atsort.m"
  MR_Word libs__atsort__PrefOrder_13,
#line 87 "atsort.m"
  MR_Word * libs__atsort__Sorted_14);

#line 307 "atsort.m"
static void MR_CALL 
libs__atsort__atsort_maybe_insert_3_p_0(
#line 307 "atsort.m"
  MR_Word libs__atsort__TypeInfo_for_T_15,
#line 307 "atsort.m"
  MR_Word libs__atsort__HeadVar__1_1,
#line 307 "atsort.m"
  MR_Word libs__atsort__STATE_VARIABLE_List_0_2,
#line 307 "atsort.m"
  MR_Word * libs__atsort__STATE_VARIABLE_List_3);

#line 293 "atsort.m"
static void MR_CALL 
libs__atsort__atsort_closure_2_4_p_0(
#line 293 "atsort.m"
  MR_Word libs__atsort__TypeInfo_for_T_19,
#line 293 "atsort.m"
  MR_Word libs__atsort__HeadVar__1_1,
#line 293 "atsort.m"
  MR_Word libs__atsort__Map_2,
#line 293 "atsort.m"
  MR_Word libs__atsort__STATE_VARIABLE_Reachable_0_3,
#line 293 "atsort.m"
  MR_Word * libs__atsort__STATE_VARIABLE_Reachable_4);

#line 274 "atsort.m"
static void MR_CALL 
libs__atsort__atsort_map_delete_all_nodes_3_p_0(
#line 274 "atsort.m"
  MR_Word libs__atsort__TypeInfo_for_T_14,
#line 274 "atsort.m"
  MR_Word libs__atsort__HeadVar__1_1,
#line 274 "atsort.m"
  MR_Word libs__atsort__STATE_VARIABLE_Map_0_2,
#line 274 "atsort.m"
  MR_Word * libs__atsort__STATE_VARIABLE_Map_3);

#line 261 "atsort.m"
static void MR_CALL 
libs__atsort__atsort_map_delete_this_element_4_p_0(
#line 261 "atsort.m"
  MR_Word libs__atsort__TypeInfo_for_T_19,
#line 261 "atsort.m"
  MR_Word libs__atsort__HeadVar__1_1,
#line 261 "atsort.m"
  MR_Box libs__atsort__Elt_2,
#line 261 "atsort.m"
  MR_Word libs__atsort__STATE_VARIABLE_Map_0_3,
#line 261 "atsort.m"
  MR_Word * libs__atsort__STATE_VARIABLE_Map_4);

#line 252 "atsort.m"
static void MR_CALL 
libs__atsort__atsort_map_delete_all_sink_links_4_p_0(
#line 252 "atsort.m"
  MR_Word libs__atsort__TypeInfo_for_T_18,
#line 252 "atsort.m"
  MR_Word libs__atsort__HeadVar__1_1,
#line 252 "atsort.m"
  MR_Word libs__atsort__HeadVar__2_2,
#line 252 "atsort.m"
  MR_Word libs__atsort__STATE_VARIABLE_Succmap_0_3,
#line 252 "atsort.m"
  MR_Word * libs__atsort__STATE_VARIABLE_Succmap_4);

#line 243 "atsort.m"
static void MR_CALL 
libs__atsort__atsort_map_delete_all_source_links_4_p_0(
#line 243 "atsort.m"
  MR_Word libs__atsort__TypeInfo_for_T_18,
#line 243 "atsort.m"
  MR_Word libs__atsort__HeadVar__1_1,
#line 243 "atsort.m"
  MR_Word libs__atsort__HeadVar__2_2,
#line 243 "atsort.m"
  MR_Word libs__atsort__STATE_VARIABLE_Predmap_0_3,
#line 243 "atsort.m"
  MR_Word * libs__atsort__STATE_VARIABLE_Predmap_4);

#line 220 "atsort.m"
static void MR_CALL 
libs__atsort__atsort_source_sink_9_p_0(
#line 220 "atsort.m"
  MR_Word libs__atsort__TypeInfo_for_T_42,
#line 220 "atsort.m"
  MR_Word libs__atsort__HeadVar__1_1,
#line 220 "atsort.m"
  MR_Word libs__atsort__Succmap_2,
#line 220 "atsort.m"
  MR_Word libs__atsort__Predmap_3,
#line 220 "atsort.m"
  MR_Word libs__atsort__STATE_VARIABLE_Source_0_4,
#line 220 "atsort.m"
  MR_Word * libs__atsort__STATE_VARIABLE_Source_5,
#line 220 "atsort.m"
  MR_Word libs__atsort__STATE_VARIABLE_Mid_0_6,
#line 220 "atsort.m"
  MR_Word * libs__atsort__STATE_VARIABLE_Mid_7,
#line 220 "atsort.m"
  MR_Word libs__atsort__STATE_VARIABLE_Sink_0_8,
#line 220 "atsort.m"
  MR_Word * libs__atsort__STATE_VARIABLE_Sink_9);

#line 173 "atsort.m"
static void MR_CALL 
libs__atsort__atsort_repeat_source_sink_10_p_0(
#line 173 "atsort.m"
  MR_Word libs__atsort__TypeInfo_for_T_47,
#line 173 "atsort.m"
  MR_Word libs__atsort__Nodes0_11,
#line 173 "atsort.m"
  MR_Word libs__atsort__STATE_VARIABLE_Succmap_0_32,
#line 173 "atsort.m"
  MR_Word * libs__atsort__STATE_VARIABLE_Succmap_33,
#line 173 "atsort.m"
  MR_Word libs__atsort__STATE_VARIABLE_Predmap_0_34,
#line 173 "atsort.m"
  MR_Word * libs__atsort__STATE_VARIABLE_Predmap_35,
#line 173 "atsort.m"
  MR_Word libs__atsort__Source0_14,
#line 173 "atsort.m"
  MR_Word * libs__atsort__Source_15,
#line 173 "atsort.m"
  MR_Word * libs__atsort__Mid_16,
#line 173 "atsort.m"
  MR_Word libs__atsort__Sink0_17,
#line 173 "atsort.m"
  MR_Word * libs__atsort__Sink_18);

#line 160 "atsort.m"
static void MR_CALL 
libs__atsort__atsort_choose_pref_3_p_0(
#line 160 "atsort.m"
  MR_Word libs__atsort__TypeInfo_for_T_13,
#line 160 "atsort.m"
  MR_Word libs__atsort__HeadVar__1_1,
#line 160 "atsort.m"
  MR_Word libs__atsort__HeadVar__2_2,
#line 160 "atsort.m"
  MR_Box * libs__atsort__HeadVar__3_3);

#line 153 "atsort.m"
static MR_bool MR_CALL 
libs__atsort__atsort_must_avoid_2_p_0(
#line 153 "atsort.m"
  MR_Word libs__atsort__TypeInfo_for_T_7,
#line 153 "atsort.m"
  MR_Word libs__atsort__HeadVar__1_1,
#line 153 "atsort.m"
  MR_Word libs__atsort__Avoidlist_2);

#line 135 "atsort.m"
static void MR_CALL 
libs__atsort__atsort_can_choose_5_p_0(
#line 135 "atsort.m"
  MR_Word libs__atsort__TypeInfo_for_T_22,
#line 135 "atsort.m"
  MR_Word libs__atsort__HeadVar__1_1,
#line 135 "atsort.m"
  MR_Word libs__atsort__HeadVar__2_2,
#line 135 "atsort.m"
  MR_Word libs__atsort__HeadVar__3_3,
#line 135 "atsort.m"
  MR_Word libs__atsort__STATE_VARIABLE_CanChoose_0_4,
#line 135 "atsort.m"
  MR_Word * libs__atsort__STATE_VARIABLE_CanChoose_5);







#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 294 "libs.atsort.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__atsort__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 302 "libs.atsort.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__atsort__tree234__pti_tree234_2__pseudo_1__pseudo_list__pti_list_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &libs__atsort__list__pti_list_1__pseudo_1
  }
};

#line 311 "libs.atsort.c"
const MR_TypeCtorInfo_Struct libs__atsort__libs__atsort__type_ctor_info_relmap_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (libs__atsort____Unify____relmap_1_0_10001)),
  ((MR_Box) (libs__atsort____Compare____relmap_1_0_10001)),
  (MR_String) "libs.atsort",
  (MR_String) "relmap",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &libs__atsort__tree234__pti_tree234_2__pseudo_1__pseudo_list__pti_list_1__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 332 "libs.atsort.c"
static MR_bool MR_CALL 
libs__atsort____Unify____relmap_1_0_10001(
#line 335 "libs.atsort.c"
  MR_Box libs__atsort__wrapper_arg_1,
#line 337 "libs.atsort.c"
  MR_Box libs__atsort__wrapper_arg_2,
#line 339 "libs.atsort.c"
  MR_Box libs__atsort__wrapper_arg_3)
#line 341 "libs.atsort.c"
{
#line 343 "libs.atsort.c"
  {
#line 345 "libs.atsort.c"
    MR_bool libs__atsort__succeeded;

#line 348 "libs.atsort.c"
    {
#line 350 "libs.atsort.c"
      libs__atsort__succeeded = libs__atsort____Unify____relmap_1_0(((MR_Word) libs__atsort__wrapper_arg_1), ((MR_Word) libs__atsort__wrapper_arg_2), ((MR_Word) libs__atsort__wrapper_arg_3));
    }
#line 353 "libs.atsort.c"
    return libs__atsort__succeeded;
#line 355 "libs.atsort.c"
  }
#line 357 "libs.atsort.c"
}

#line 360 "libs.atsort.c"
static void MR_CALL 
libs__atsort____Compare____relmap_1_0_10001(
#line 363 "libs.atsort.c"
  MR_Box libs__atsort__wrapper_arg_1,
#line 365 "libs.atsort.c"
  MR_Box * libs__atsort__wrapper_arg_2,
#line 367 "libs.atsort.c"
  MR_Box libs__atsort__wrapper_arg_3,
#line 369 "libs.atsort.c"
  MR_Box libs__atsort__wrapper_arg_4)
#line 371 "libs.atsort.c"
{
#line 373 "libs.atsort.c"
  {
#line 375 "libs.atsort.c"
    MR_Word libs__atsort__conv0_HeadVar__1_1;

#line 378 "libs.atsort.c"
    {
#line 380 "libs.atsort.c"
      libs__atsort____Compare____relmap_1_0(((MR_Word) libs__atsort__wrapper_arg_1), &libs__atsort__conv0_HeadVar__1_1, ((MR_Word) libs__atsort__wrapper_arg_3), ((MR_Word) libs__atsort__wrapper_arg_4));
    }
#line 383 "libs.atsort.c"
    *libs__atsort__wrapper_arg_2 = ((MR_Box) (libs__atsort__conv0_HeadVar__1_1));
#line 385 "libs.atsort.c"
  }
#line 387 "libs.atsort.c"
}

#line 87 "atsort.m"
static void MR_CALL 
libs__atsort__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_p_0(
#line 87 "atsort.m"
  MR_Word libs__atsort__TypeInfo_for_T_44,
#line 87 "atsort.m"
  MR_Word libs__atsort__Nodes0_8,
#line 87 "atsort.m"
  MR_Word libs__atsort__STATE_VARIABLE_Succmap_0_24,
#line 87 "atsort.m"
  MR_Word libs__atsort__STATE_VARIABLE_Predmap_0_25,
#line 87 "atsort.m"
  MR_Word libs__atsort__MustPredmap_12,
#line 87 "atsort.m"
  MR_Word libs__atsort__PrefOrder_13,
#line 87 "atsort.m"
  MR_Word * libs__atsort__Sorted_14)
#line 87 "atsort.m"
{
#line 91 "atsort.m"
  {
#line 91 "atsort.m"
    MR_bool libs__atsort__succeeded;
#line 91 "atsort.m"
    MR_Word libs__atsort__Source1_15;
#line 91 "atsort.m"
    MR_Word libs__atsort__Mid1_16;
#line 91 "atsort.m"
    MR_Word libs__atsort__Sink1_17;
#line 91 "atsort.m"
    MR_Word libs__atsort__STATE_VARIABLE_Succmap_26_26;
#line 91 "atsort.m"
    MR_Word libs__atsort__STATE_VARIABLE_Predmap_27_27;

#line 92 "atsort.m"
    {
#line 92 "atsort.m"
      libs__atsort__atsort_repeat_source_sink_10_p_0(libs__atsort__TypeInfo_for_T_44, libs__atsort__Nodes0_8, libs__atsort__STATE_VARIABLE_Succmap_0_24, &libs__atsort__STATE_VARIABLE_Succmap_26_26, libs__atsort__STATE_VARIABLE_Predmap_0_25, &libs__atsort__STATE_VARIABLE_Predmap_27_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__atsort__Source1_15, &libs__atsort__Mid1_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__atsort__Sink1_17);
    }
#line 98 "atsort.m"
    if ((libs__atsort__Mid1_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 95 "atsort.m"
      {
#line 95 "atsort.m"
        MR_Word libs__atsort__TypeInfo_46_46;
#line 95 "atsort.m"
        MR_Word libs__atsort__Source1rev_18;
#line 96 "atsort.m"
        MR_Word libs__atsort__conv0_Source1rev_18;
#line 97 "atsort.m"
        MR_Word libs__atsort__conv1_Sorted_14;

#line 442 "libs.atsort.c"
        {
#line 444 "libs.atsort.c"
          libs__atsort__TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 446 "libs.atsort.c"
          MR_hl_field(MR_mktag(0), libs__atsort__TypeInfo_46_46, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 448 "libs.atsort.c"
          MR_hl_field(MR_mktag(0), libs__atsort__TypeInfo_46_46, 1) = ((MR_Box) (libs__atsort__TypeInfo_for_T_44));
#line 450 "libs.atsort.c"
        }
#line 96 "atsort.m"
        {
#line 96 "atsort.m"
          mercury__list__reverse_2_p_0(libs__atsort__TypeInfo_46_46, (MR_Word) libs__atsort__Source1_15, &libs__atsort__conv0_Source1rev_18);
        }
#line 96 "atsort.m"
        libs__atsort__Source1rev_18 = (MR_Word) libs__atsort__conv0_Source1rev_18;
#line 97 "atsort.m"
        {
#line 97 "atsort.m"
          mercury__list__append_3_p_1(libs__atsort__TypeInfo_46_46, (MR_Word) libs__atsort__Source1rev_18, (MR_Word) libs__atsort__Sink1_17, &libs__atsort__conv1_Sorted_14);
        }
#line 97 "atsort.m"
        *libs__atsort__Sorted_14 = (MR_Word) libs__atsort__conv1_Sorted_14;
#line 95 "atsort.m"
      }
#line 98 "atsort.m"
    else
#line 99 "atsort.m"
      {
#line 99 "atsort.m"
        MR_Word libs__atsort__TypeInfo_48_48;
#line 99 "atsort.m"
        MR_Word libs__atsort__Mid2_22;
#line 99 "atsort.m"
        MR_Word libs__atsort__MidSorted_23;
#line 99 "atsort.m"
        MR_Word libs__atsort__V_32_32;
#line 99 "atsort.m"
        MR_Word libs__atsort__V_33_33;
#line 99 "atsort.m"
        MR_Word libs__atsort__V_34_34;
#line 99 "atsort.m"
        MR_Word libs__atsort__V_38_38;
#line 99 "atsort.m"
        MR_Word libs__atsort__V_39_39;
#line 99 "atsort.m"
        MR_Word libs__atsort__Source1rev_41;
#line 99 "atsort.m"
        MR_Word libs__atsort__STATE_VARIABLE_Succmap_30_42;
#line 99 "atsort.m"
        MR_Word libs__atsort__STATE_VARIABLE_Predmap_31_43;
#line 99 "atsort.m"
        MR_Word libs__atsort__CanChoose_61;
#line 99 "atsort.m"
        MR_Word libs__atsort__V_65_65 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 99 "atsort.m"
        MR_Word libs__atsort__V_66_66;
#line 99 "atsort.m"
        MR_Word libs__atsort__STATE_VARIABLE_Predmap_29_67;
#line 99 "atsort.m"
        MR_Word libs__atsort__STATE_VARIABLE_Succmap_32_70;
#line 99 "atsort.m"
        MR_Box libs__atsort__Node_83 = (MR_hl_field(MR_mktag(1), libs__atsort__Mid1_16, (MR_Integer) 0));
#line 99 "atsort.m"
        MR_Word libs__atsort__Nodes_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__atsort__Mid1_16, (MR_Integer) 1)));
#line 99 "atsort.m"
        MR_Word libs__atsort__STATE_VARIABLE_CanChoose_19_91;
#line 99 "atsort.m"
        MR_Box libs__atsort__Source_104;
#line 99 "atsort.m"
        MR_Word libs__atsort__Succnodes_108;
#line 99 "atsort.m"
        MR_Box libs__atsort__Sink_134;
#line 99 "atsort.m"
        MR_Word libs__atsort__Prednodes_138;
#line 99 "atsort.m"
        MR_Box libs__atsort__Node_163;
#line 99 "atsort.m"
        MR_Box libs__atsort__Node_187;
#line 146 "atsort.m"
        MR_Word libs__atsort__MustPrednodes_88;
#line 140 "atsort.m"
        MR_Word libs__atsort__TypeInfo_24_95;
#line 140 "atsort.m"
        MR_Box libs__atsort__conv2_MustPrednodes_88;
#line 248 "atsort.m"
        MR_Box libs__atsort__conv3_Succnodes_108;
#line 256 "atsort.m"
        MR_Word libs__atsort__Sinks_135;
#line 257 "atsort.m"
        MR_Box libs__atsort__conv4_Prednodes_138;
#line 278 "atsort.m"
        MR_Word libs__atsort__Nodes_164;
#line 278 "atsort.m"
        MR_Word libs__atsort__Nodes_188;
#line 110 "atsort.m"
        MR_Word libs__atsort__conv5_Source1rev_41;
#line 111 "atsort.m"
        MR_Word libs__atsort__conv6_Sorted_14;

#line 543 "libs.atsort.c"
        {
#line 545 "libs.atsort.c"
          libs__atsort__TypeInfo_24_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 547 "libs.atsort.c"
          MR_hl_field(MR_mktag(0), libs__atsort__TypeInfo_24_95, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 549 "libs.atsort.c"
          MR_hl_field(MR_mktag(0), libs__atsort__TypeInfo_24_95, 1) = ((MR_Box) (libs__atsort__TypeInfo_for_T_44));
#line 551 "libs.atsort.c"
        }
#line 140 "atsort.m"
        {
#line 140 "atsort.m"
          libs__atsort__succeeded = mercury__map__search_3_p_0(libs__atsort__TypeInfo_for_T_44, libs__atsort__TypeInfo_24_95, libs__atsort__MustPredmap_12, libs__atsort__Node_83, &libs__atsort__conv2_MustPrednodes_88);
        }
#line 140 "atsort.m"
        if (libs__atsort__succeeded)
#line 140 "atsort.m"
          {
#line 140 "atsort.m"
            libs__atsort__MustPrednodes_88 = ((MR_Word) libs__atsort__conv2_MustPrednodes_88);
#line 140 "atsort.m"
            libs__atsort__succeeded = MR_TRUE;
#line 140 "atsort.m"
          }
#line 146 "atsort.m"
        if (libs__atsort__succeeded)
#line 143 "atsort.m"
          {
#line 156 "atsort.m"
            MR_Box libs__atsort__Head_97 = (MR_hl_field(MR_mktag(1), libs__atsort__Mid1_16, (MR_Integer) 0));
#line 156 "atsort.m"
            MR_Word libs__atsort__Tail_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__atsort__Mid1_16, (MR_Integer) 1)));

#line 157 "atsort.m"
            {
#line 157 "atsort.m"
              libs__atsort__succeeded = mercury__list__member_2_p_0(libs__atsort__TypeInfo_for_T_44, libs__atsort__Head_97, libs__atsort__MustPrednodes_88);
            }
#line 157 "atsort.m"
            libs__atsort__succeeded = !(libs__atsort__succeeded);
#line 156 "atsort.m"
            if (libs__atsort__succeeded)
#line 158 "atsort.m"
              {
#line 158 "atsort.m"
                libs__atsort__succeeded = libs__atsort__atsort_must_avoid_2_p_0(libs__atsort__TypeInfo_for_T_44, libs__atsort__Tail_98, libs__atsort__MustPrednodes_88);
              }
#line 143 "atsort.m"
            if (libs__atsort__succeeded)
#line 142 "atsort.m"
              {
#line 142 "atsort.m"
                libs__atsort__STATE_VARIABLE_CanChoose_19_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 142 "atsort.m"
                MR_hl_field(MR_mktag(1), libs__atsort__STATE_VARIABLE_CanChoose_19_91, 0) = libs__atsort__Node_83;
#line 142 "atsort.m"
                MR_hl_field(MR_mktag(1), libs__atsort__STATE_VARIABLE_CanChoose_19_91, 1) = ((MR_Box) (libs__atsort__V_65_65));
#line 142 "atsort.m"
              }
#line 143 "atsort.m"
            else
#line 142 "atsort.m"
              libs__atsort__STATE_VARIABLE_CanChoose_19_91 = libs__atsort__V_65_65;
#line 143 "atsort.m"
          }
#line 146 "atsort.m"
        else
#line 147 "atsort.m"
          {
#line 147 "atsort.m"
            libs__atsort__STATE_VARIABLE_CanChoose_19_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 147 "atsort.m"
            MR_hl_field(MR_mktag(1), libs__atsort__STATE_VARIABLE_CanChoose_19_91, 0) = libs__atsort__Node_83;
#line 147 "atsort.m"
            MR_hl_field(MR_mktag(1), libs__atsort__STATE_VARIABLE_CanChoose_19_91, 1) = ((MR_Box) (libs__atsort__V_65_65));
#line 147 "atsort.m"
          }
#line 149 "atsort.m"
        {
#line 149 "atsort.m"
          libs__atsort__atsort_can_choose_5_p_0(libs__atsort__TypeInfo_for_T_44, libs__atsort__Nodes_84, libs__atsort__Mid1_16, libs__atsort__MustPredmap_12, libs__atsort__STATE_VARIABLE_CanChoose_19_91, &libs__atsort__CanChoose_61);
        }
#line 123 "atsort.m"
        {
#line 123 "atsort.m"
          libs__atsort__atsort_choose_pref_3_p_0(libs__atsort__TypeInfo_for_T_44, libs__atsort__PrefOrder_13, libs__atsort__CanChoose_61, &libs__atsort__Source_104);
        }
#line 124 "atsort.m"
        {
#line 124 "atsort.m"
          mercury__list__delete_all_3_p_1(libs__atsort__TypeInfo_for_T_44, libs__atsort__Mid1_16, libs__atsort__Source_104, &libs__atsort__Mid2_22);
        }
#line 127 "atsort.m"
        {
#line 127 "atsort.m"
          libs__atsort__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 127 "atsort.m"
          MR_hl_field(MR_mktag(1), libs__atsort__V_66_66, 0) = libs__atsort__Source_104;
#line 127 "atsort.m"
          MR_hl_field(MR_mktag(1), libs__atsort__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 127 "atsort.m"
        }
#line 646 "libs.atsort.c"
        {
#line 648 "libs.atsort.c"
          libs__atsort__TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 650 "libs.atsort.c"
          MR_hl_field(MR_mktag(0), libs__atsort__TypeInfo_48_48, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 652 "libs.atsort.c"
          MR_hl_field(MR_mktag(0), libs__atsort__TypeInfo_48_48, 1) = ((MR_Box) (libs__atsort__TypeInfo_for_T_44));
#line 654 "libs.atsort.c"
        }
#line 248 "atsort.m"
        {
#line 248 "atsort.m"
          mercury__map__lookup_3_p_0(libs__atsort__TypeInfo_for_T_44, libs__atsort__TypeInfo_48_48, libs__atsort__STATE_VARIABLE_Succmap_26_26, libs__atsort__Source_104, &libs__atsort__conv3_Succnodes_108);
        }
#line 248 "atsort.m"
        libs__atsort__Succnodes_108 = ((MR_Word) libs__atsort__conv3_Succnodes_108);
#line 249 "atsort.m"
        {
#line 249 "atsort.m"
          libs__atsort__atsort_map_delete_this_element_4_p_0(libs__atsort__TypeInfo_for_T_44, libs__atsort__Succnodes_108, libs__atsort__Source_104, libs__atsort__STATE_VARIABLE_Predmap_27_27, &libs__atsort__STATE_VARIABLE_Predmap_29_67);
        }
#line 256 "atsort.m"
        libs__atsort__Sink_134 = (MR_hl_field(MR_mktag(1), libs__atsort__V_66_66, (MR_Integer) 0));
#line 256 "atsort.m"
        libs__atsort__Sinks_135 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__atsort__V_66_66, (MR_Integer) 1)));
#line 257 "atsort.m"
        {
#line 257 "atsort.m"
          mercury__map__lookup_3_p_0(libs__atsort__TypeInfo_for_T_44, libs__atsort__TypeInfo_48_48, libs__atsort__STATE_VARIABLE_Predmap_27_27, libs__atsort__Sink_134, &libs__atsort__conv4_Prednodes_138);
        }
#line 257 "atsort.m"
        libs__atsort__Prednodes_138 = ((MR_Word) libs__atsort__conv4_Prednodes_138);
#line 258 "atsort.m"
        {
#line 258 "atsort.m"
          libs__atsort__atsort_map_delete_this_element_4_p_0(libs__atsort__TypeInfo_for_T_44, libs__atsort__Prednodes_138, libs__atsort__Sink_134, libs__atsort__STATE_VARIABLE_Succmap_26_26, &libs__atsort__STATE_VARIABLE_Succmap_32_70);
        }
#line 278 "atsort.m"
        libs__atsort__Node_163 = (MR_hl_field(MR_mktag(1), libs__atsort__V_66_66, (MR_Integer) 0));
#line 278 "atsort.m"
        libs__atsort__Nodes_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__atsort__V_66_66, (MR_Integer) 1)));
#line 279 "atsort.m"
        {
#line 279 "atsort.m"
          mercury__map__delete_3_p_0(libs__atsort__TypeInfo_for_T_44, libs__atsort__TypeInfo_48_48, libs__atsort__Node_163, libs__atsort__STATE_VARIABLE_Succmap_32_70, &libs__atsort__STATE_VARIABLE_Succmap_30_42);
        }
#line 278 "atsort.m"
        libs__atsort__Node_187 = (MR_hl_field(MR_mktag(1), libs__atsort__V_66_66, (MR_Integer) 0));
#line 278 "atsort.m"
        libs__atsort__Nodes_188 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__atsort__V_66_66, (MR_Integer) 1)));
#line 279 "atsort.m"
        {
#line 279 "atsort.m"
          mercury__map__delete_3_p_0(libs__atsort__TypeInfo_for_T_44, libs__atsort__TypeInfo_48_48, libs__atsort__Node_187, libs__atsort__STATE_VARIABLE_Predmap_29_67, &libs__atsort__STATE_VARIABLE_Predmap_31_43);
        }
#line 108 "atsort.m"
        {
#line 108 "atsort.m"
          libs__atsort__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_p_0(libs__atsort__TypeInfo_for_T_44, libs__atsort__Mid2_22, libs__atsort__STATE_VARIABLE_Succmap_30_42, libs__atsort__STATE_VARIABLE_Predmap_31_43, libs__atsort__MustPredmap_12, libs__atsort__PrefOrder_13, &libs__atsort__MidSorted_23);
        }
#line 110 "atsort.m"
        {
#line 110 "atsort.m"
          mercury__list__reverse_2_p_0(libs__atsort__TypeInfo_48_48, (MR_Word) libs__atsort__Source1_15, &libs__atsort__conv5_Source1rev_41);
        }
#line 110 "atsort.m"
        libs__atsort__Source1rev_41 = (MR_Word) libs__atsort__conv5_Source1rev_41;
#line 111 "atsort.m"
        {
#line 111 "atsort.m"
          libs__atsort__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 111 "atsort.m"
          MR_hl_field(MR_mktag(1), libs__atsort__V_34_34, 0) = ((MR_Box) (libs__atsort__V_66_66));
#line 111 "atsort.m"
          MR_hl_field(MR_mktag(1), libs__atsort__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 111 "atsort.m"
        }
#line 111 "atsort.m"
        {
#line 111 "atsort.m"
          libs__atsort__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 111 "atsort.m"
          MR_hl_field(MR_mktag(1), libs__atsort__V_39_39, 0) = ((MR_Box) (libs__atsort__Sink1_17));
#line 111 "atsort.m"
          MR_hl_field(MR_mktag(1), libs__atsort__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 111 "atsort.m"
        }
#line 111 "atsort.m"
        {
#line 111 "atsort.m"
          libs__atsort__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 111 "atsort.m"
          MR_hl_field(MR_mktag(1), libs__atsort__V_38_38, 0) = ((MR_Box) (libs__atsort__MidSorted_23));
#line 111 "atsort.m"
          MR_hl_field(MR_mktag(1), libs__atsort__V_38_38, 1) = ((MR_Box) (libs__atsort__V_39_39));
#line 111 "atsort.m"
        }
#line 111 "atsort.m"
        {
#line 111 "atsort.m"
          libs__atsort__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 111 "atsort.m"
          MR_hl_field(MR_mktag(1), libs__atsort__V_33_33, 0) = ((MR_Box) (libs__atsort__V_34_34));
#line 111 "atsort.m"
          MR_hl_field(MR_mktag(1), libs__atsort__V_33_33, 1) = ((MR_Box) (libs__atsort__V_38_38));
#line 111 "atsort.m"
        }
#line 111 "atsort.m"
        {
#line 111 "atsort.m"
          libs__atsort__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 111 "atsort.m"
          MR_hl_field(MR_mktag(1), libs__atsort__V_32_32, 0) = ((MR_Box) (libs__atsort__Source1rev_41));
#line 111 "atsort.m"
          MR_hl_field(MR_mktag(1), libs__atsort__V_32_32, 1) = ((MR_Box) (libs__atsort__V_33_33));
#line 111 "atsort.m"
        }
#line 111 "atsort.m"
        {
#line 111 "atsort.m"
          mercury__list__condense_2_p_0(libs__atsort__TypeInfo_48_48, (MR_Word) libs__atsort__V_32_32, &libs__atsort__conv6_Sorted_14);
        }
#line 111 "atsort.m"
        *libs__atsort__Sorted_14 = (MR_Word) libs__atsort__conv6_Sorted_14;
#line 99 "atsort.m"
      }
#line 91 "atsort.m"
  }
#line 87 "atsort.m"
}

#line 34 "atsort.m"
void MR_CALL 
libs__atsort__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_95_91_52_93_95_48_6_p_0(
#line 34 "atsort.m"
  MR_Word libs__atsort__TypeInfo_for_T_19,
#line 34 "atsort.m"
  MR_Word libs__atsort__Succmap_7,
#line 34 "atsort.m"
  MR_Word libs__atsort__Predmap_8,
#line 34 "atsort.m"
  MR_Word libs__atsort__MustPredmap_10,
#line 34 "atsort.m"
  MR_Word libs__atsort__PrefOrder_11,
#line 34 "atsort.m"
  MR_Word * libs__atsort__Sortlist_12)
#line 34 "atsort.m"
{
#line 76 "atsort.m"
  {
#line 76 "atsort.m"
    MR_bool libs__atsort__succeeded;
#line 76 "atsort.m"
    MR_Word libs__atsort__TypeInfo_21_21;
#line 76 "atsort.m"
    MR_Word libs__atsort__Snodelist_13;
#line 76 "atsort.m"
    MR_Word libs__atsort__Pnodelist_14;
#line 76 "atsort.m"
    MR_Word libs__atsort__Nodelist_15;

#line 808 "libs.atsort.c"
    {
#line 810 "libs.atsort.c"
      libs__atsort__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 812 "libs.atsort.c"
      MR_hl_field(MR_mktag(0), libs__atsort__TypeInfo_21_21, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 814 "libs.atsort.c"
      MR_hl_field(MR_mktag(0), libs__atsort__TypeInfo_21_21, 1) = ((MR_Box) (libs__atsort__TypeInfo_for_T_19));
#line 816 "libs.atsort.c"
    }
#line 77 "atsort.m"
    {
#line 77 "atsort.m"
      mercury__map__keys_2_p_0(libs__atsort__TypeInfo_for_T_19, libs__atsort__TypeInfo_21_21, libs__atsort__Succmap_7, &libs__atsort__Snodelist_13);
    }
#line 78 "atsort.m"
    {
#line 78 "atsort.m"
      mercury__map__keys_2_p_0(libs__atsort__TypeInfo_for_T_19, libs__atsort__TypeInfo_21_21, libs__atsort__Predmap_8, &libs__atsort__Pnodelist_14);
    }
#line 79 "atsort.m"
    {
#line 79 "atsort.m"
      libs__atsort__succeeded = mercury__list____Unify____list_1_0(libs__atsort__TypeInfo_for_T_19, libs__atsort__Snodelist_13, libs__atsort__Pnodelist_14);
    }
#line 81 "atsort.m"
    if (libs__atsort__succeeded)
#line 80 "atsort.m"
      libs__atsort__Nodelist_15 = libs__atsort__Snodelist_13;
#line 81 "atsort.m"
    else
#line 82 "atsort.m"
      {
#line 82 "atsort.m"
        {
#line 82 "atsort.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.atsort", (MR_String) "predicate \140libs.atsort.atsort\'/6", (MR_String) "succ and pred nodelists differ");
#line 82 "atsort.m"
          return;
        }
#line 82 "atsort.m"
      }
#line 84 "atsort.m"
    {
#line 84 "atsort.m"
      libs__atsort__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_p_0(libs__atsort__TypeInfo_for_T_19, libs__atsort__Nodelist_15, libs__atsort__Succmap_7, libs__atsort__Predmap_8, libs__atsort__MustPredmap_10, libs__atsort__PrefOrder_11, libs__atsort__Sortlist_12);
#line 84 "atsort.m"
      return;
    }
#line 76 "atsort.m"
  }
#line 34 "atsort.m"
}

#line 23 "atsort.m"
void MR_CALL 
libs__atsort____Compare____relmap_1_0(
#line 23 "atsort.m"
  MR_Word libs__atsort__TypeInfo_for_T_6,
#line 23 "atsort.m"
  MR_Word * libs__atsort__HeadVar__1_1,
#line 23 "atsort.m"
  MR_Word libs__atsort__HeadVar__2_2,
#line 23 "atsort.m"
  MR_Word libs__atsort__HeadVar__3_3)
#line 23 "atsort.m"
{
#line 23 "atsort.m"
  {
#line 23 "atsort.m"
    MR_bool libs__atsort__succeeded;
#line 23 "atsort.m"
    MR_Word libs__atsort__TypeInfo_8_8;
#line 23 "atsort.m"
    MR_Word libs__atsort__Cast_HeadVar1_4 = libs__atsort__HeadVar__2_2;
#line 23 "atsort.m"
    MR_Word libs__atsort__Cast_HeadVar2_5 = libs__atsort__HeadVar__3_3;

#line 886 "libs.atsort.c"
    {
#line 888 "libs.atsort.c"
      libs__atsort__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 890 "libs.atsort.c"
      MR_hl_field(MR_mktag(0), libs__atsort__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 892 "libs.atsort.c"
      MR_hl_field(MR_mktag(0), libs__atsort__TypeInfo_8_8, 1) = ((MR_Box) (libs__atsort__TypeInfo_for_T_6));
#line 894 "libs.atsort.c"
    }
#line 23 "atsort.m"
    {
#line 23 "atsort.m"
      mercury__tree234____Compare____tree234_2_0(libs__atsort__TypeInfo_for_T_6, libs__atsort__TypeInfo_8_8, libs__atsort__HeadVar__1_1, libs__atsort__Cast_HeadVar1_4, libs__atsort__Cast_HeadVar2_5);
#line 23 "atsort.m"
      return;
    }
#line 23 "atsort.m"
  }
#line 23 "atsort.m"
}

#line 23 "atsort.m"
MR_bool MR_CALL 
libs__atsort____Unify____relmap_1_0(
#line 23 "atsort.m"
  MR_Word libs__atsort__TypeInfo_for_T_5,
#line 23 "atsort.m"
  MR_Word libs__atsort__HeadVar__1_1,
#line 23 "atsort.m"
  MR_Word libs__atsort__HeadVar__2_2)
#line 23 "atsort.m"
{
#line 23 "atsort.m"
  {
#line 23 "atsort.m"
    MR_bool libs__atsort__succeeded;
#line 23 "atsort.m"
    MR_Word libs__atsort__TypeInfo_7_7;
#line 23 "atsort.m"
    MR_Word libs__atsort__Cast_HeadVar1_3 = libs__atsort__HeadVar__1_1;
#line 23 "atsort.m"
    MR_Word libs__atsort__Cast_HeadVar2_4 = libs__atsort__HeadVar__2_2;

#line 930 "libs.atsort.c"
    {
#line 932 "libs.atsort.c"
      libs__atsort__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 934 "libs.atsort.c"
      MR_hl_field(MR_mktag(0), libs__atsort__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 936 "libs.atsort.c"
      MR_hl_field(MR_mktag(0), libs__atsort__TypeInfo_7_7, 1) = ((MR_Box) (libs__atsort__TypeInfo_for_T_5));
#line 938 "libs.atsort.c"
    }
#line 23 "atsort.m"
    {
#line 23 "atsort.m"
      return libs__atsort__succeeded = mercury__tree234____Unify____tree234_2_0(libs__atsort__TypeInfo_for_T_5, libs__atsort__TypeInfo_7_7, libs__atsort__Cast_HeadVar1_3, libs__atsort__Cast_HeadVar2_4);
    }
#line 23 "atsort.m"
    return libs__atsort__succeeded;
#line 23 "atsort.m"
  }
#line 23 "atsort.m"
}

#line 307 "atsort.m"
static void MR_CALL 
libs__atsort__atsort_maybe_insert_3_p_0(
#line 307 "atsort.m"
  MR_Word libs__atsort__TypeInfo_for_T_15,
#line 307 "atsort.m"
  MR_Word libs__atsort__HeadVar__1_1,
#line 307 "atsort.m"
  MR_Word libs__atsort__STATE_VARIABLE_List_0_2,
#line 307 "atsort.m"
  MR_Word * libs__atsort__STATE_VARIABLE_List_3)
#line 307 "atsort.m"
{
#line 309 "atsort.m"
  while (MR_TRUE)
#line 309 "atsort.m"
    {
#line 309 "atsort.m"
      /* tailcall optimized into a loop */
#line 309 "atsort.m"
      {
#line 309 "atsort.m"
        MR_bool libs__atsort__succeeded;

#line 309 "atsort.m"
        if ((libs__atsort__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 309 "atsort.m"
          *libs__atsort__STATE_VARIABLE_List_3 = libs__atsort__STATE_VARIABLE_List_0_2;
#line 309 "atsort.m"
        else
#line 310 "atsort.m"
          {
#line 310 "atsort.m"
            MR_Box libs__atsort__Node_7 = (MR_hl_field(MR_mktag(1), libs__atsort__HeadVar__1_1, (MR_Integer) 0));
#line 310 "atsort.m"
            MR_Word libs__atsort__Nodes_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__atsort__HeadVar__1_1, (MR_Integer) 1)));
#line 310 "atsort.m"
            MR_Word libs__atsort__STATE_VARIABLE_List_12_12;

#line 311 "atsort.m"
            {
#line 311 "atsort.m"
              libs__atsort__succeeded = mercury__list__member_2_p_0(libs__atsort__TypeInfo_for_T_15, libs__atsort__Node_7, libs__atsort__STATE_VARIABLE_List_0_2);
            }
#line 313 "atsort.m"
            if (libs__atsort__succeeded)
#line 312 "atsort.m"
              libs__atsort__STATE_VARIABLE_List_12_12 = libs__atsort__STATE_VARIABLE_List_0_2;
#line 313 "atsort.m"
            else
#line 314 "atsort.m"
              {
#line 314 "atsort.m"
                libs__atsort__STATE_VARIABLE_List_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "atsort.m"
                MR_hl_field(MR_mktag(1), libs__atsort__STATE_VARIABLE_List_12_12, 0) = libs__atsort__Node_7;
#line 314 "atsort.m"
                MR_hl_field(MR_mktag(1), libs__atsort__STATE_VARIABLE_List_12_12, 1) = ((MR_Box) (libs__atsort__STATE_VARIABLE_List_0_2));
#line 314 "atsort.m"
              }
#line 316 "atsort.m"
            /* direct tailcall eliminated */
#line 316 "atsort.m"
            {
#line 316 "atsort.m"
              MR_Word libs__atsort__HeadVar__1__tmp_copy_1 = libs__atsort__Nodes_8;
#line 316 "atsort.m"
              MR_Word libs__atsort__STATE_VARIABLE_List_0__tmp_copy_2 = libs__atsort__STATE_VARIABLE_List_12_12;

#line 316 "atsort.m"
              libs__atsort__STATE_VARIABLE_List_0_2 = libs__atsort__STATE_VARIABLE_List_0__tmp_copy_2;
#line 316 "atsort.m"
              libs__atsort__HeadVar__1_1 = libs__atsort__HeadVar__1__tmp_copy_1;
#line 316 "atsort.m"
            }
#line 316 "atsort.m"
            continue;
#line 310 "atsort.m"
          }
#line 309 "atsort.m"
      }
#line 309 "atsort.m"
      break;
#line 309 "atsort.m"
    }
#line 307 "atsort.m"
}

#line 293 "atsort.m"
static void MR_CALL 
libs__atsort__atsort_closure_2_4_p_0(
#line 293 "atsort.m"
  MR_Word libs__atsort__TypeInfo_for_T_19,
#line 293 "atsort.m"
  MR_Word libs__atsort__HeadVar__1_1,
#line 293 "atsort.m"
  MR_Word libs__atsort__Map_2,
#line 293 "atsort.m"
  MR_Word libs__atsort__STATE_VARIABLE_Reachable_0_3,
#line 293 "atsort.m"
  MR_Word * libs__atsort__STATE_VARIABLE_Reachable_4)
#line 293 "atsort.m"
{
#line 296 "atsort.m"
  while (MR_TRUE)
#line 296 "atsort.m"
    {
#line 296 "atsort.m"
      /* tailcall optimized into a loop */
#line 296 "atsort.m"
      {
#line 296 "atsort.m"
        MR_bool libs__atsort__succeeded;

#line 296 "atsort.m"
        if ((libs__atsort__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 296 "atsort.m"
          *libs__atsort__STATE_VARIABLE_Reachable_4 = libs__atsort__STATE_VARIABLE_Reachable_0_3;
#line 296 "atsort.m"
        else
#line 297 "atsort.m"
          {
#line 297 "atsort.m"
            MR_Box libs__atsort__Node_9 = (MR_hl_field(MR_mktag(1), libs__atsort__HeadVar__1_1, (MR_Integer) 0));
#line 297 "atsort.m"
            MR_Word libs__atsort__Nodes0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__atsort__HeadVar__1_1, (MR_Integer) 1)));
#line 297 "atsort.m"
            MR_Word libs__atsort__Nodes1_13;
#line 297 "atsort.m"
            MR_Word libs__atsort__STATE_VARIABLE_Reachable_17_17;

#line 298 "atsort.m"
            {
#line 298 "atsort.m"
              libs__atsort__succeeded = mercury__list__member_2_p_0(libs__atsort__TypeInfo_for_T_19, libs__atsort__Node_9, libs__atsort__STATE_VARIABLE_Reachable_0_3);
            }
#line 300 "atsort.m"
            if (libs__atsort__succeeded)
#line 299 "atsort.m"
              {
#line 299 "atsort.m"
                libs__atsort__Nodes1_13 = libs__atsort__Nodes0_10;
#line 299 "atsort.m"
                libs__atsort__STATE_VARIABLE_Reachable_17_17 = libs__atsort__STATE_VARIABLE_Reachable_0_3;
#line 299 "atsort.m"
              }
#line 300 "atsort.m"
            else
#line 301 "atsort.m"
              {
#line 301 "atsort.m"
                MR_Word libs__atsort__TypeInfo_21_21;
#line 301 "atsort.m"
                MR_Word libs__atsort__Neighbours_14;
#line 301 "atsort.m"
                MR_Box libs__atsort__conv0_Neighbours_14;

#line 1109 "libs.atsort.c"
                {
#line 1111 "libs.atsort.c"
                  libs__atsort__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1113 "libs.atsort.c"
                  MR_hl_field(MR_mktag(0), libs__atsort__TypeInfo_21_21, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 1115 "libs.atsort.c"
                  MR_hl_field(MR_mktag(0), libs__atsort__TypeInfo_21_21, 1) = ((MR_Box) (libs__atsort__TypeInfo_for_T_19));
#line 1117 "libs.atsort.c"
                }
#line 301 "atsort.m"
                {
#line 301 "atsort.m"
                  mercury__map__lookup_3_p_0(libs__atsort__TypeInfo_for_T_19, libs__atsort__TypeInfo_21_21, libs__atsort__Map_2, libs__atsort__Node_9, &libs__atsort__conv0_Neighbours_14);
                }
#line 301 "atsort.m"
                libs__atsort__Neighbours_14 = ((MR_Word) libs__atsort__conv0_Neighbours_14);
#line 302 "atsort.m"
                {
#line 302 "atsort.m"
                  libs__atsort__atsort_maybe_insert_3_p_0(libs__atsort__TypeInfo_for_T_19, libs__atsort__Neighbours_14, libs__atsort__Nodes0_10, &libs__atsort__Nodes1_13);
                }
#line 303 "atsort.m"
                {
#line 303 "atsort.m"
                  libs__atsort__STATE_VARIABLE_Reachable_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 303 "atsort.m"
                  MR_hl_field(MR_mktag(1), libs__atsort__STATE_VARIABLE_Reachable_17_17, 0) = libs__atsort__Node_9;
#line 303 "atsort.m"
                  MR_hl_field(MR_mktag(1), libs__atsort__STATE_VARIABLE_Reachable_17_17, 1) = ((MR_Box) (libs__atsort__STATE_VARIABLE_Reachable_0_3));
#line 303 "atsort.m"
                }
#line 301 "atsort.m"
              }
#line 305 "atsort.m"
            /* direct tailcall eliminated */
#line 305 "atsort.m"
            {
#line 305 "atsort.m"
              MR_Word libs__atsort__HeadVar__1__tmp_copy_1 = libs__atsort__Nodes1_13;
#line 305 "atsort.m"
              MR_Word libs__atsort__STATE_VARIABLE_Reachable_0__tmp_copy_3 = libs__atsort__STATE_VARIABLE_Reachable_17_17;

#line 305 "atsort.m"
              libs__atsort__STATE_VARIABLE_Reachable_0_3 = libs__atsort__STATE_VARIABLE_Reachable_0__tmp_copy_3;
#line 305 "atsort.m"
              libs__atsort__HeadVar__1_1 = libs__atsort__HeadVar__1__tmp_copy_1;
#line 305 "atsort.m"
            }
#line 305 "atsort.m"
            continue;
#line 297 "atsort.m"
          }
#line 296 "atsort.m"
      }
#line 296 "atsort.m"
      break;
#line 296 "atsort.m"
    }
#line 293 "atsort.m"
}

#line 274 "atsort.m"
static void MR_CALL 
libs__atsort__atsort_map_delete_all_nodes_3_p_0(
#line 274 "atsort.m"
  MR_Word libs__atsort__TypeInfo_for_T_14,
#line 274 "atsort.m"
  MR_Word libs__atsort__HeadVar__1_1,
#line 274 "atsort.m"
  MR_Word libs__atsort__STATE_VARIABLE_Map_0_2,
#line 274 "atsort.m"
  MR_Word * libs__atsort__STATE_VARIABLE_Map_3)
#line 274 "atsort.m"
{
#line 277 "atsort.m"
  while (MR_TRUE)
#line 277 "atsort.m"
    {
#line 277 "atsort.m"
      /* tailcall optimized into a loop */
#line 277 "atsort.m"
      {
#line 277 "atsort.m"
        MR_bool libs__atsort__succeeded;

#line 277 "atsort.m"
        if ((libs__atsort__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 277 "atsort.m"
          *libs__atsort__STATE_VARIABLE_Map_3 = libs__atsort__STATE_VARIABLE_Map_0_2;
#line 277 "atsort.m"
        else
#line 278 "atsort.m"
          {
#line 278 "atsort.m"
            MR_Word libs__atsort__TypeInfo_16_16;
#line 278 "atsort.m"
            MR_Box libs__atsort__Node_7 = (MR_hl_field(MR_mktag(1), libs__atsort__HeadVar__1_1, (MR_Integer) 0));
#line 278 "atsort.m"
            MR_Word libs__atsort__Nodes_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__atsort__HeadVar__1_1, (MR_Integer) 1)));
#line 278 "atsort.m"
            MR_Word libs__atsort__STATE_VARIABLE_Map_12_12;

#line 1212 "libs.atsort.c"
            {
#line 1214 "libs.atsort.c"
              libs__atsort__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1216 "libs.atsort.c"
              MR_hl_field(MR_mktag(0), libs__atsort__TypeInfo_16_16, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 1218 "libs.atsort.c"
              MR_hl_field(MR_mktag(0), libs__atsort__TypeInfo_16_16, 1) = ((MR_Box) (libs__atsort__TypeInfo_for_T_14));
#line 1220 "libs.atsort.c"
            }
#line 279 "atsort.m"
            {
#line 279 "atsort.m"
              mercury__map__delete_3_p_0(libs__atsort__TypeInfo_for_T_14, libs__atsort__TypeInfo_16_16, libs__atsort__Node_7, libs__atsort__STATE_VARIABLE_Map_0_2, &libs__atsort__STATE_VARIABLE_Map_12_12);
            }
#line 280 "atsort.m"
            /* direct tailcall eliminated */
#line 280 "atsort.m"
            {
#line 280 "atsort.m"
              MR_Word libs__atsort__HeadVar__1__tmp_copy_1 = libs__atsort__Nodes_8;
#line 280 "atsort.m"
              MR_Word libs__atsort__STATE_VARIABLE_Map_0__tmp_copy_2 = libs__atsort__STATE_VARIABLE_Map_12_12;

#line 280 "atsort.m"
              libs__atsort__STATE_VARIABLE_Map_0_2 = libs__atsort__STATE_VARIABLE_Map_0__tmp_copy_2;
#line 280 "atsort.m"
              libs__atsort__HeadVar__1_1 = libs__atsort__HeadVar__1__tmp_copy_1;
#line 280 "atsort.m"
            }
#line 280 "atsort.m"
            continue;
#line 278 "atsort.m"
          }
#line 277 "atsort.m"
      }
#line 277 "atsort.m"
      break;
#line 277 "atsort.m"
    }
#line 274 "atsort.m"
}

#line 261 "atsort.m"
static void MR_CALL 
libs__atsort__atsort_map_delete_this_element_4_p_0(
#line 261 "atsort.m"
  MR_Word libs__atsort__TypeInfo_for_T_19,
#line 261 "atsort.m"
  MR_Word libs__atsort__HeadVar__1_1,
#line 261 "atsort.m"
  MR_Box libs__atsort__Elt_2,
#line 261 "atsort.m"
  MR_Word libs__atsort__STATE_VARIABLE_Map_0_3,
#line 261 "atsort.m"
  MR_Word * libs__atsort__STATE_VARIABLE_Map_4)
#line 261 "atsort.m"
{
#line 264 "atsort.m"
  while (MR_TRUE)
#line 264 "atsort.m"
    {
#line 264 "atsort.m"
      /* tailcall optimized into a loop */
#line 264 "atsort.m"
      {
#line 264 "atsort.m"
        MR_bool libs__atsort__succeeded;

#line 264 "atsort.m"
        if ((libs__atsort__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 264 "atsort.m"
          *libs__atsort__STATE_VARIABLE_Map_4 = libs__atsort__STATE_VARIABLE_Map_0_3;
#line 264 "atsort.m"
        else
#line 265 "atsort.m"
          {
#line 265 "atsort.m"
            MR_Box libs__atsort__Node_9 = (MR_hl_field(MR_mktag(1), libs__atsort__HeadVar__1_1, (MR_Integer) 0));
#line 265 "atsort.m"
            MR_Word libs__atsort__Nodes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__atsort__HeadVar__1_1, (MR_Integer) 1)));
#line 265 "atsort.m"
            MR_Word libs__atsort__STATE_VARIABLE_Map_17_17;
#line 269 "atsort.m"
            MR_Word libs__atsort__TypeInfo_21_21;
#line 269 "atsort.m"
            MR_Word libs__atsort__List0_13;
#line 266 "atsort.m"
            MR_Box libs__atsort__conv0_List0_13;

#line 1302 "libs.atsort.c"
            {
#line 1304 "libs.atsort.c"
              libs__atsort__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1306 "libs.atsort.c"
              MR_hl_field(MR_mktag(0), libs__atsort__TypeInfo_21_21, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 1308 "libs.atsort.c"
              MR_hl_field(MR_mktag(0), libs__atsort__TypeInfo_21_21, 1) = ((MR_Box) (libs__atsort__TypeInfo_for_T_19));
#line 1310 "libs.atsort.c"
            }
#line 266 "atsort.m"
            {
#line 266 "atsort.m"
              libs__atsort__succeeded = mercury__map__search_3_p_0(libs__atsort__TypeInfo_for_T_19, libs__atsort__TypeInfo_21_21, libs__atsort__STATE_VARIABLE_Map_0_3, libs__atsort__Node_9, &libs__atsort__conv0_List0_13);
            }
#line 266 "atsort.m"
            if (libs__atsort__succeeded)
#line 266 "atsort.m"
              {
#line 266 "atsort.m"
                libs__atsort__List0_13 = ((MR_Word) libs__atsort__conv0_List0_13);
#line 266 "atsort.m"
                libs__atsort__succeeded = MR_TRUE;
#line 266 "atsort.m"
              }
#line 269 "atsort.m"
            if (libs__atsort__succeeded)
#line 267 "atsort.m"
              {
#line 267 "atsort.m"
                MR_Word libs__atsort__List1_14;

#line 267 "atsort.m"
                {
#line 267 "atsort.m"
                  mercury__list__delete_all_3_p_1(libs__atsort__TypeInfo_for_T_19, libs__atsort__List0_13, libs__atsort__Elt_2, &libs__atsort__List1_14);
                }
#line 268 "atsort.m"
                {
#line 268 "atsort.m"
                  mercury__map__det_update_4_p_0(libs__atsort__TypeInfo_for_T_19, libs__atsort__TypeInfo_21_21, libs__atsort__Node_9, ((MR_Box) (libs__atsort__List1_14)), libs__atsort__STATE_VARIABLE_Map_0_3, &libs__atsort__STATE_VARIABLE_Map_17_17);
                }
#line 267 "atsort.m"
              }
#line 269 "atsort.m"
            else
#line 268 "atsort.m"
              libs__atsort__STATE_VARIABLE_Map_17_17 = libs__atsort__STATE_VARIABLE_Map_0_3;
#line 272 "atsort.m"
            /* direct tailcall eliminated */
#line 272 "atsort.m"
            {
#line 272 "atsort.m"
              MR_Word libs__atsort__HeadVar__1__tmp_copy_1 = libs__atsort__Nodes_10;
#line 272 "atsort.m"
              MR_Word libs__atsort__STATE_VARIABLE_Map_0__tmp_copy_3 = libs__atsort__STATE_VARIABLE_Map_17_17;

#line 272 "atsort.m"
              libs__atsort__STATE_VARIABLE_Map_0_3 = libs__atsort__STATE_VARIABLE_Map_0__tmp_copy_3;
#line 272 "atsort.m"
              libs__atsort__HeadVar__1_1 = libs__atsort__HeadVar__1__tmp_copy_1;
#line 272 "atsort.m"
            }
#line 272 "atsort.m"
            continue;
#line 265 "atsort.m"
          }
#line 264 "atsort.m"
      }
#line 264 "atsort.m"
      break;
#line 264 "atsort.m"
    }
#line 261 "atsort.m"
}

#line 252 "atsort.m"
static void MR_CALL 
libs__atsort__atsort_map_delete_all_sink_links_4_p_0(
#line 252 "atsort.m"
  MR_Word libs__atsort__TypeInfo_for_T_18,
#line 252 "atsort.m"
  MR_Word libs__atsort__HeadVar__1_1,
#line 252 "atsort.m"
  MR_Word libs__atsort__HeadVar__2_2,
#line 252 "atsort.m"
  MR_Word libs__atsort__STATE_VARIABLE_Succmap_0_3,
#line 252 "atsort.m"
  MR_Word * libs__atsort__STATE_VARIABLE_Succmap_4)
#line 252 "atsort.m"
{
#line 255 "atsort.m"
  while (MR_TRUE)
#line 255 "atsort.m"
    {
#line 255 "atsort.m"
      /* tailcall optimized into a loop */
#line 255 "atsort.m"
      {
#line 255 "atsort.m"
        MR_bool libs__atsort__succeeded;

#line 255 "atsort.m"
        if ((libs__atsort__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 255 "atsort.m"
          *libs__atsort__STATE_VARIABLE_Succmap_4 = libs__atsort__STATE_VARIABLE_Succmap_0_3;
#line 255 "atsort.m"
        else
#line 256 "atsort.m"
          {
#line 256 "atsort.m"
            MR_Word libs__atsort__TypeInfo_20_20;
#line 256 "atsort.m"
            MR_Box libs__atsort__Sink_9 = (MR_hl_field(MR_mktag(1), libs__atsort__HeadVar__1_1, (MR_Integer) 0));
#line 256 "atsort.m"
            MR_Word libs__atsort__Sinks_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__atsort__HeadVar__1_1, (MR_Integer) 1)));
#line 256 "atsort.m"
            MR_Word libs__atsort__Prednodes_13;
#line 256 "atsort.m"
            MR_Word libs__atsort__STATE_VARIABLE_Succmap_16_16;
#line 257 "atsort.m"
            MR_Box libs__atsort__conv0_Prednodes_13;

#line 1425 "libs.atsort.c"
            {
#line 1427 "libs.atsort.c"
              libs__atsort__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1429 "libs.atsort.c"
              MR_hl_field(MR_mktag(0), libs__atsort__TypeInfo_20_20, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 1431 "libs.atsort.c"
              MR_hl_field(MR_mktag(0), libs__atsort__TypeInfo_20_20, 1) = ((MR_Box) (libs__atsort__TypeInfo_for_T_18));
#line 1433 "libs.atsort.c"
            }
#line 257 "atsort.m"
            {
#line 257 "atsort.m"
              mercury__map__lookup_3_p_0(libs__atsort__TypeInfo_for_T_18, libs__atsort__TypeInfo_20_20, libs__atsort__HeadVar__2_2, libs__atsort__Sink_9, &libs__atsort__conv0_Prednodes_13);
            }
#line 257 "atsort.m"
            libs__atsort__Prednodes_13 = ((MR_Word) libs__atsort__conv0_Prednodes_13);
#line 258 "atsort.m"
            {
#line 258 "atsort.m"
              libs__atsort__atsort_map_delete_this_element_4_p_0(libs__atsort__TypeInfo_for_T_18, libs__atsort__Prednodes_13, libs__atsort__Sink_9, libs__atsort__STATE_VARIABLE_Succmap_0_3, &libs__atsort__STATE_VARIABLE_Succmap_16_16);
            }
#line 259 "atsort.m"
            /* direct tailcall eliminated */
#line 259 "atsort.m"
            {
#line 259 "atsort.m"
              MR_Word libs__atsort__HeadVar__1__tmp_copy_1 = libs__atsort__Sinks_10;
#line 259 "atsort.m"
              MR_Word libs__atsort__STATE_VARIABLE_Succmap_0__tmp_copy_3 = libs__atsort__STATE_VARIABLE_Succmap_16_16;

#line 259 "atsort.m"
              libs__atsort__STATE_VARIABLE_Succmap_0_3 = libs__atsort__STATE_VARIABLE_Succmap_0__tmp_copy_3;
#line 259 "atsort.m"
              libs__atsort__HeadVar__1_1 = libs__atsort__HeadVar__1__tmp_copy_1;
#line 259 "atsort.m"
            }
#line 259 "atsort.m"
            continue;
#line 256 "atsort.m"
          }
#line 255 "atsort.m"
      }
#line 255 "atsort.m"
      break;
#line 255 "atsort.m"
    }
#line 252 "atsort.m"
}

#line 243 "atsort.m"
static void MR_CALL 
libs__atsort__atsort_map_delete_all_source_links_4_p_0(
#line 243 "atsort.m"
  MR_Word libs__atsort__TypeInfo_for_T_18,
#line 243 "atsort.m"
  MR_Word libs__atsort__HeadVar__1_1,
#line 243 "atsort.m"
  MR_Word libs__atsort__HeadVar__2_2,
#line 243 "atsort.m"
  MR_Word libs__atsort__STATE_VARIABLE_Predmap_0_3,
#line 243 "atsort.m"
  MR_Word * libs__atsort__STATE_VARIABLE_Predmap_4)
#line 243 "atsort.m"
{
#line 246 "atsort.m"
  while (MR_TRUE)
#line 246 "atsort.m"
    {
#line 246 "atsort.m"
      /* tailcall optimized into a loop */
#line 246 "atsort.m"
      {
#line 246 "atsort.m"
        MR_bool libs__atsort__succeeded;

#line 246 "atsort.m"
        if ((libs__atsort__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 246 "atsort.m"
          *libs__atsort__STATE_VARIABLE_Predmap_4 = libs__atsort__STATE_VARIABLE_Predmap_0_3;
#line 246 "atsort.m"
        else
#line 247 "atsort.m"
          {
#line 247 "atsort.m"
            MR_Word libs__atsort__TypeInfo_20_20;
#line 247 "atsort.m"
            MR_Box libs__atsort__Source_9 = (MR_hl_field(MR_mktag(1), libs__atsort__HeadVar__1_1, (MR_Integer) 0));
#line 247 "atsort.m"
            MR_Word libs__atsort__Sources_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__atsort__HeadVar__1_1, (MR_Integer) 1)));
#line 247 "atsort.m"
            MR_Word libs__atsort__Succnodes_13;
#line 247 "atsort.m"
            MR_Word libs__atsort__STATE_VARIABLE_Predmap_16_16;
#line 248 "atsort.m"
            MR_Box libs__atsort__conv0_Succnodes_13;

#line 1522 "libs.atsort.c"
            {
#line 1524 "libs.atsort.c"
              libs__atsort__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1526 "libs.atsort.c"
              MR_hl_field(MR_mktag(0), libs__atsort__TypeInfo_20_20, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 1528 "libs.atsort.c"
              MR_hl_field(MR_mktag(0), libs__atsort__TypeInfo_20_20, 1) = ((MR_Box) (libs__atsort__TypeInfo_for_T_18));
#line 1530 "libs.atsort.c"
            }
#line 248 "atsort.m"
            {
#line 248 "atsort.m"
              mercury__map__lookup_3_p_0(libs__atsort__TypeInfo_for_T_18, libs__atsort__TypeInfo_20_20, libs__atsort__HeadVar__2_2, libs__atsort__Source_9, &libs__atsort__conv0_Succnodes_13);
            }
#line 248 "atsort.m"
            libs__atsort__Succnodes_13 = ((MR_Word) libs__atsort__conv0_Succnodes_13);
#line 249 "atsort.m"
            {
#line 249 "atsort.m"
              libs__atsort__atsort_map_delete_this_element_4_p_0(libs__atsort__TypeInfo_for_T_18, libs__atsort__Succnodes_13, libs__atsort__Source_9, libs__atsort__STATE_VARIABLE_Predmap_0_3, &libs__atsort__STATE_VARIABLE_Predmap_16_16);
            }
#line 250 "atsort.m"
            /* direct tailcall eliminated */
#line 250 "atsort.m"
            {
#line 250 "atsort.m"
              MR_Word libs__atsort__HeadVar__1__tmp_copy_1 = libs__atsort__Sources_10;
#line 250 "atsort.m"
              MR_Word libs__atsort__STATE_VARIABLE_Predmap_0__tmp_copy_3 = libs__atsort__STATE_VARIABLE_Predmap_16_16;

#line 250 "atsort.m"
              libs__atsort__STATE_VARIABLE_Predmap_0_3 = libs__atsort__STATE_VARIABLE_Predmap_0__tmp_copy_3;
#line 250 "atsort.m"
              libs__atsort__HeadVar__1_1 = libs__atsort__HeadVar__1__tmp_copy_1;
#line 250 "atsort.m"
            }
#line 250 "atsort.m"
            continue;
#line 247 "atsort.m"
          }
#line 246 "atsort.m"
      }
#line 246 "atsort.m"
      break;
#line 246 "atsort.m"
    }
#line 243 "atsort.m"
}

#line 220 "atsort.m"
static void MR_CALL 
libs__atsort__atsort_source_sink_9_p_0(
#line 220 "atsort.m"
  MR_Word libs__atsort__TypeInfo_for_T_42,
#line 220 "atsort.m"
  MR_Word libs__atsort__HeadVar__1_1,
#line 220 "atsort.m"
  MR_Word libs__atsort__Succmap_2,
#line 220 "atsort.m"
  MR_Word libs__atsort__Predmap_3,
#line 220 "atsort.m"
  MR_Word libs__atsort__STATE_VARIABLE_Source_0_4,
#line 220 "atsort.m"
  MR_Word * libs__atsort__STATE_VARIABLE_Source_5,
#line 220 "atsort.m"
  MR_Word libs__atsort__STATE_VARIABLE_Mid_0_6,
#line 220 "atsort.m"
  MR_Word * libs__atsort__STATE_VARIABLE_Mid_7,
#line 220 "atsort.m"
  MR_Word libs__atsort__STATE_VARIABLE_Sink_0_8,
#line 220 "atsort.m"
  MR_Word * libs__atsort__STATE_VARIABLE_Sink_9)
#line 220 "atsort.m"
{
#line 224 "atsort.m"
  while (MR_TRUE)
#line 224 "atsort.m"
    {
#line 224 "atsort.m"
      /* tailcall optimized into a loop */
#line 224 "atsort.m"
      {
#line 224 "atsort.m"
        MR_bool libs__atsort__succeeded;

#line 224 "atsort.m"
        if ((libs__atsort__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 224 "atsort.m"
          {
#line 224 "atsort.m"
            *libs__atsort__STATE_VARIABLE_Sink_9 = libs__atsort__STATE_VARIABLE_Sink_0_8;
#line 224 "atsort.m"
            *libs__atsort__STATE_VARIABLE_Mid_7 = libs__atsort__STATE_VARIABLE_Mid_0_6;
#line 224 "atsort.m"
            *libs__atsort__STATE_VARIABLE_Source_5 = libs__atsort__STATE_VARIABLE_Source_0_4;
#line 224 "atsort.m"
          }
#line 224 "atsort.m"
        else
#line 225 "atsort.m"
          {
#line 225 "atsort.m"
            MR_Box libs__atsort__Node_21 = (MR_hl_field(MR_mktag(1), libs__atsort__HeadVar__1_1, (MR_Integer) 0));
#line 225 "atsort.m"
            MR_Word libs__atsort__Nodes_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__atsort__HeadVar__1_1, (MR_Integer) 1)));
#line 225 "atsort.m"
            MR_Word libs__atsort__STATE_VARIABLE_Sink_36_36;
#line 225 "atsort.m"
            MR_Word libs__atsort__STATE_VARIABLE_Source_37_37;
#line 225 "atsort.m"
            MR_Word libs__atsort__STATE_VARIABLE_Mid_38_38;
#line 227 "atsort.m"
            MR_Word libs__atsort__TypeInfo_44_44;
#line 227 "atsort.m"
            MR_Word libs__atsort__Succnodes_28;
#line 227 "atsort.m"
            MR_Box libs__atsort__conv0_Succnodes_28;

#line 1641 "libs.atsort.c"
            {
#line 1643 "libs.atsort.c"
              libs__atsort__TypeInfo_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1645 "libs.atsort.c"
              MR_hl_field(MR_mktag(0), libs__atsort__TypeInfo_44_44, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 1647 "libs.atsort.c"
              MR_hl_field(MR_mktag(0), libs__atsort__TypeInfo_44_44, 1) = ((MR_Box) (libs__atsort__TypeInfo_for_T_42));
#line 1649 "libs.atsort.c"
            }
#line 227 "atsort.m"
            {
#line 227 "atsort.m"
              libs__atsort__succeeded = mercury__map__search_3_p_0(libs__atsort__TypeInfo_for_T_42, libs__atsort__TypeInfo_44_44, libs__atsort__Succmap_2, libs__atsort__Node_21, &libs__atsort__conv0_Succnodes_28);
            }
#line 227 "atsort.m"
            if (libs__atsort__succeeded)
#line 227 "atsort.m"
              {
#line 227 "atsort.m"
                libs__atsort__Succnodes_28 = ((MR_Word) libs__atsort__conv0_Succnodes_28);
#line 227 "atsort.m"
                libs__atsort__succeeded = MR_TRUE;
#line 227 "atsort.m"
              }
#line 227 "atsort.m"
            if (libs__atsort__succeeded)
#line 228 "atsort.m"
              libs__atsort__succeeded = (libs__atsort__Succnodes_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 231 "atsort.m"
            if (libs__atsort__succeeded)
#line 230 "atsort.m"
              {
#line 230 "atsort.m"
                {
#line 230 "atsort.m"
                  libs__atsort__STATE_VARIABLE_Sink_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "atsort.m"
                  MR_hl_field(MR_mktag(1), libs__atsort__STATE_VARIABLE_Sink_36_36, 0) = libs__atsort__Node_21;
#line 230 "atsort.m"
                  MR_hl_field(MR_mktag(1), libs__atsort__STATE_VARIABLE_Sink_36_36, 1) = ((MR_Box) (libs__atsort__STATE_VARIABLE_Sink_0_8));
#line 230 "atsort.m"
                }
#line 230 "atsort.m"
                libs__atsort__STATE_VARIABLE_Mid_38_38 = libs__atsort__STATE_VARIABLE_Mid_0_6;
#line 230 "atsort.m"
                libs__atsort__STATE_VARIABLE_Source_37_37 = libs__atsort__STATE_VARIABLE_Source_0_4;
#line 230 "atsort.m"
              }
#line 231 "atsort.m"
            else
#line 236 "atsort.m"
              {
#line 232 "atsort.m"
                MR_Word libs__atsort__TypeInfo_46_46;
#line 232 "atsort.m"
                MR_Word libs__atsort__Prednodes_29;
#line 232 "atsort.m"
                MR_Box libs__atsort__conv1_Prednodes_29;

#line 1701 "libs.atsort.c"
                {
#line 1703 "libs.atsort.c"
                  libs__atsort__TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1705 "libs.atsort.c"
                  MR_hl_field(MR_mktag(0), libs__atsort__TypeInfo_46_46, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 1707 "libs.atsort.c"
                  MR_hl_field(MR_mktag(0), libs__atsort__TypeInfo_46_46, 1) = ((MR_Box) (libs__atsort__TypeInfo_for_T_42));
#line 1709 "libs.atsort.c"
                }
#line 232 "atsort.m"
                {
#line 232 "atsort.m"
                  libs__atsort__succeeded = mercury__map__search_3_p_0(libs__atsort__TypeInfo_for_T_42, libs__atsort__TypeInfo_46_46, libs__atsort__Predmap_3, libs__atsort__Node_21, &libs__atsort__conv1_Prednodes_29);
                }
#line 232 "atsort.m"
                if (libs__atsort__succeeded)
#line 232 "atsort.m"
                  {
#line 232 "atsort.m"
                    libs__atsort__Prednodes_29 = ((MR_Word) libs__atsort__conv1_Prednodes_29);
#line 232 "atsort.m"
                    libs__atsort__succeeded = MR_TRUE;
#line 232 "atsort.m"
                  }
#line 232 "atsort.m"
                if (libs__atsort__succeeded)
#line 233 "atsort.m"
                  libs__atsort__succeeded = (libs__atsort__Prednodes_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 236 "atsort.m"
                if (libs__atsort__succeeded)
#line 235 "atsort.m"
                  {
#line 235 "atsort.m"
                    {
#line 235 "atsort.m"
                      libs__atsort__STATE_VARIABLE_Source_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 235 "atsort.m"
                      MR_hl_field(MR_mktag(1), libs__atsort__STATE_VARIABLE_Source_37_37, 0) = libs__atsort__Node_21;
#line 235 "atsort.m"
                      MR_hl_field(MR_mktag(1), libs__atsort__STATE_VARIABLE_Source_37_37, 1) = ((MR_Box) (libs__atsort__STATE_VARIABLE_Source_0_4));
#line 235 "atsort.m"
                    }
#line 235 "atsort.m"
                    libs__atsort__STATE_VARIABLE_Mid_38_38 = libs__atsort__STATE_VARIABLE_Mid_0_6;
#line 235 "atsort.m"
                  }
#line 236 "atsort.m"
                else
#line 237 "atsort.m"
                  {
#line 237 "atsort.m"
                    {
#line 237 "atsort.m"
                      libs__atsort__STATE_VARIABLE_Mid_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 237 "atsort.m"
                      MR_hl_field(MR_mktag(1), libs__atsort__STATE_VARIABLE_Mid_38_38, 0) = libs__atsort__Node_21;
#line 237 "atsort.m"
                      MR_hl_field(MR_mktag(1), libs__atsort__STATE_VARIABLE_Mid_38_38, 1) = ((MR_Box) (libs__atsort__STATE_VARIABLE_Mid_0_6));
#line 237 "atsort.m"
                    }
#line 237 "atsort.m"
                    libs__atsort__STATE_VARIABLE_Source_37_37 = libs__atsort__STATE_VARIABLE_Source_0_4;
#line 237 "atsort.m"
                  }
#line 237 "atsort.m"
                libs__atsort__STATE_VARIABLE_Sink_36_36 = libs__atsort__STATE_VARIABLE_Sink_0_8;
#line 236 "atsort.m"
              }
#line 239 "atsort.m"
            /* direct tailcall eliminated */
#line 239 "atsort.m"
            {
#line 239 "atsort.m"
              MR_Word libs__atsort__HeadVar__1__tmp_copy_1 = libs__atsort__Nodes_22;
#line 239 "atsort.m"
              MR_Word libs__atsort__STATE_VARIABLE_Source_0__tmp_copy_4 = libs__atsort__STATE_VARIABLE_Source_37_37;
#line 239 "atsort.m"
              MR_Word libs__atsort__STATE_VARIABLE_Mid_0__tmp_copy_6 = libs__atsort__STATE_VARIABLE_Mid_38_38;
#line 239 "atsort.m"
              MR_Word libs__atsort__STATE_VARIABLE_Sink_0__tmp_copy_8 = libs__atsort__STATE_VARIABLE_Sink_36_36;

#line 239 "atsort.m"
              libs__atsort__STATE_VARIABLE_Sink_0_8 = libs__atsort__STATE_VARIABLE_Sink_0__tmp_copy_8;
#line 239 "atsort.m"
              libs__atsort__STATE_VARIABLE_Mid_0_6 = libs__atsort__STATE_VARIABLE_Mid_0__tmp_copy_6;
#line 239 "atsort.m"
              libs__atsort__STATE_VARIABLE_Source_0_4 = libs__atsort__STATE_VARIABLE_Source_0__tmp_copy_4;
#line 239 "atsort.m"
              libs__atsort__HeadVar__1_1 = libs__atsort__HeadVar__1__tmp_copy_1;
#line 239 "atsort.m"
            }
#line 239 "atsort.m"
            continue;
#line 225 "atsort.m"
          }
#line 224 "atsort.m"
      }
#line 224 "atsort.m"
      break;
#line 224 "atsort.m"
    }
#line 220 "atsort.m"
}

#line 173 "atsort.m"
static void MR_CALL 
libs__atsort__atsort_repeat_source_sink_10_p_0(
#line 173 "atsort.m"
  MR_Word libs__atsort__TypeInfo_for_T_47,
#line 173 "atsort.m"
  MR_Word libs__atsort__Nodes0_11,
#line 173 "atsort.m"
  MR_Word libs__atsort__STATE_VARIABLE_Succmap_0_32,
#line 173 "atsort.m"
  MR_Word * libs__atsort__STATE_VARIABLE_Succmap_33,
#line 173 "atsort.m"
  MR_Word libs__atsort__STATE_VARIABLE_Predmap_0_34,
#line 173 "atsort.m"
  MR_Word * libs__atsort__STATE_VARIABLE_Predmap_35,
#line 173 "atsort.m"
  MR_Word libs__atsort__Source0_14,
#line 173 "atsort.m"
  MR_Word * libs__atsort__Source_15,
#line 173 "atsort.m"
  MR_Word * libs__atsort__Mid_16,
#line 173 "atsort.m"
  MR_Word libs__atsort__Sink0_17,
#line 173 "atsort.m"
  MR_Word * libs__atsort__Sink_18)
#line 173 "atsort.m"
{
#line 179 "atsort.m"
  while (MR_TRUE)
#line 179 "atsort.m"
    {
#line 179 "atsort.m"
      /* tailcall optimized into a loop */
#line 179 "atsort.m"
      {
#line 179 "atsort.m"
        MR_bool libs__atsort__succeeded;
#line 179 "atsort.m"
        MR_Word libs__atsort__Source1_19;
#line 179 "atsort.m"
        MR_Word libs__atsort__Mid1_20;
#line 179 "atsort.m"
        MR_Word libs__atsort__Sink1_21;

#line 180 "atsort.m"
        {
#line 180 "atsort.m"
          libs__atsort__atsort_source_sink_9_p_0(libs__atsort__TypeInfo_for_T_47, libs__atsort__Nodes0_11, libs__atsort__STATE_VARIABLE_Succmap_0_32, libs__atsort__STATE_VARIABLE_Predmap_0_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__atsort__Source1_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__atsort__Mid1_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__atsort__Sink1_21);
        }
#line 183 "atsort.m"
        libs__atsort__succeeded = (libs__atsort__Source1_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 183 "atsort.m"
        if (libs__atsort__succeeded)
#line 184 "atsort.m"
          libs__atsort__succeeded = (libs__atsort__Sink1_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 189 "atsort.m"
        if (libs__atsort__succeeded)
#line 186 "atsort.m"
          {
#line 186 "atsort.m"
            *libs__atsort__Source_15 = libs__atsort__Source0_14;
#line 187 "atsort.m"
            *libs__atsort__Sink_18 = libs__atsort__Sink0_17;
#line 188 "atsort.m"
            *libs__atsort__Mid_16 = libs__atsort__Mid1_20;
#line 188 "atsort.m"
            *libs__atsort__STATE_VARIABLE_Predmap_35 = libs__atsort__STATE_VARIABLE_Predmap_0_34;
#line 188 "atsort.m"
            *libs__atsort__STATE_VARIABLE_Succmap_33 = libs__atsort__STATE_VARIABLE_Succmap_0_32;
#line 186 "atsort.m"
          }
#line 189 "atsort.m"
        else
#line 190 "atsort.m"
          {
#line 190 "atsort.m"
            MR_Word libs__atsort__Nodes1_22;
#line 190 "atsort.m"
            MR_Word libs__atsort__Nodes2_23;
#line 190 "atsort.m"
            MR_Word libs__atsort__Source2_26;
#line 190 "atsort.m"
            MR_Word libs__atsort__Sink2_29;
#line 190 "atsort.m"
            MR_Word libs__atsort__STATE_VARIABLE_Predmap_39_39;
#line 190 "atsort.m"
            MR_Word libs__atsort__STATE_VARIABLE_Succmap_40_40;
#line 190 "atsort.m"
            MR_Word libs__atsort__STATE_VARIABLE_Succmap_41_41;
#line 190 "atsort.m"
            MR_Word libs__atsort__STATE_VARIABLE_Predmap_42_42;
#line 190 "atsort.m"
            MR_Word libs__atsort__STATE_VARIABLE_Succmap_43_43;
#line 190 "atsort.m"
            MR_Word libs__atsort__STATE_VARIABLE_Predmap_44_44;

#line 190 "atsort.m"
            {
#line 190 "atsort.m"
              mercury__list__delete_elems_3_p_0(libs__atsort__TypeInfo_for_T_47, libs__atsort__Nodes0_11, libs__atsort__Source1_19, &libs__atsort__Nodes1_22);
            }
#line 191 "atsort.m"
            {
#line 191 "atsort.m"
              mercury__list__delete_elems_3_p_0(libs__atsort__TypeInfo_for_T_47, libs__atsort__Nodes1_22, libs__atsort__Sink1_21, &libs__atsort__Nodes2_23);
            }
#line 194 "atsort.m"
            {
#line 194 "atsort.m"
              libs__atsort__atsort_map_delete_all_source_links_4_p_0(libs__atsort__TypeInfo_for_T_47, libs__atsort__Source1_19, libs__atsort__STATE_VARIABLE_Succmap_0_32, libs__atsort__STATE_VARIABLE_Predmap_0_34, &libs__atsort__STATE_VARIABLE_Predmap_39_39);
            }
#line 195 "atsort.m"
            {
#line 195 "atsort.m"
              libs__atsort__atsort_map_delete_all_sink_links_4_p_0(libs__atsort__TypeInfo_for_T_47, libs__atsort__Sink1_21, libs__atsort__STATE_VARIABLE_Predmap_0_34, libs__atsort__STATE_VARIABLE_Succmap_0_32, &libs__atsort__STATE_VARIABLE_Succmap_40_40);
            }
#line 196 "atsort.m"
            {
#line 196 "atsort.m"
              libs__atsort__atsort_map_delete_all_nodes_3_p_0(libs__atsort__TypeInfo_for_T_47, libs__atsort__Source1_19, libs__atsort__STATE_VARIABLE_Succmap_40_40, &libs__atsort__STATE_VARIABLE_Succmap_41_41);
            }
#line 197 "atsort.m"
            {
#line 197 "atsort.m"
              libs__atsort__atsort_map_delete_all_nodes_3_p_0(libs__atsort__TypeInfo_for_T_47, libs__atsort__Source1_19, libs__atsort__STATE_VARIABLE_Predmap_39_39, &libs__atsort__STATE_VARIABLE_Predmap_42_42);
            }
#line 198 "atsort.m"
            {
#line 198 "atsort.m"
              libs__atsort__atsort_map_delete_all_nodes_3_p_0(libs__atsort__TypeInfo_for_T_47, libs__atsort__Sink1_21, libs__atsort__STATE_VARIABLE_Succmap_41_41, &libs__atsort__STATE_VARIABLE_Succmap_43_43);
            }
#line 199 "atsort.m"
            {
#line 199 "atsort.m"
              libs__atsort__atsort_map_delete_all_nodes_3_p_0(libs__atsort__TypeInfo_for_T_47, libs__atsort__Sink1_21, libs__atsort__STATE_VARIABLE_Predmap_42_42, &libs__atsort__STATE_VARIABLE_Predmap_44_44);
            }
#line 203 "atsort.m"
            if ((libs__atsort__Source1_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 202 "atsort.m"
              libs__atsort__Source2_26 = libs__atsort__Source0_14;
#line 203 "atsort.m"
            else
#line 205 "atsort.m"
              {
#line 205 "atsort.m"
                libs__atsort__Source2_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "atsort.m"
                MR_hl_field(MR_mktag(1), libs__atsort__Source2_26, 0) = ((MR_Box) (libs__atsort__Source1_19));
#line 205 "atsort.m"
                MR_hl_field(MR_mktag(1), libs__atsort__Source2_26, 1) = ((MR_Box) (libs__atsort__Source0_14));
#line 205 "atsort.m"
              }
#line 210 "atsort.m"
            if ((libs__atsort__Sink1_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 209 "atsort.m"
              libs__atsort__Sink2_29 = libs__atsort__Sink0_17;
#line 210 "atsort.m"
            else
#line 212 "atsort.m"
              {
#line 212 "atsort.m"
                libs__atsort__Sink2_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "atsort.m"
                MR_hl_field(MR_mktag(1), libs__atsort__Sink2_29, 0) = ((MR_Box) (libs__atsort__Sink1_21));
#line 212 "atsort.m"
                MR_hl_field(MR_mktag(1), libs__atsort__Sink2_29, 1) = ((MR_Box) (libs__atsort__Sink0_17));
#line 212 "atsort.m"
              }
#line 214 "atsort.m"
            /* direct tailcall eliminated */
#line 214 "atsort.m"
            {
#line 214 "atsort.m"
              MR_Word libs__atsort__Nodes0__tmp_copy_11 = libs__atsort__Nodes2_23;
#line 214 "atsort.m"
              MR_Word libs__atsort__STATE_VARIABLE_Succmap_0__tmp_copy_32 = libs__atsort__STATE_VARIABLE_Succmap_43_43;
#line 214 "atsort.m"
              MR_Word libs__atsort__STATE_VARIABLE_Predmap_0__tmp_copy_34 = libs__atsort__STATE_VARIABLE_Predmap_44_44;
#line 214 "atsort.m"
              MR_Word libs__atsort__Source0__tmp_copy_14 = libs__atsort__Source2_26;
#line 214 "atsort.m"
              MR_Word libs__atsort__Sink0__tmp_copy_17 = libs__atsort__Sink2_29;

#line 214 "atsort.m"
              libs__atsort__Sink0_17 = libs__atsort__Sink0__tmp_copy_17;
#line 214 "atsort.m"
              libs__atsort__Source0_14 = libs__atsort__Source0__tmp_copy_14;
#line 214 "atsort.m"
              libs__atsort__STATE_VARIABLE_Predmap_0_34 = libs__atsort__STATE_VARIABLE_Predmap_0__tmp_copy_34;
#line 214 "atsort.m"
              libs__atsort__STATE_VARIABLE_Succmap_0_32 = libs__atsort__STATE_VARIABLE_Succmap_0__tmp_copy_32;
#line 214 "atsort.m"
              libs__atsort__Nodes0_11 = libs__atsort__Nodes0__tmp_copy_11;
#line 214 "atsort.m"
            }
#line 214 "atsort.m"
            continue;
#line 190 "atsort.m"
          }
#line 179 "atsort.m"
      }
#line 179 "atsort.m"
      break;
#line 179 "atsort.m"
    }
#line 173 "atsort.m"
}

#line 160 "atsort.m"
static void MR_CALL 
libs__atsort__atsort_choose_pref_3_p_0(
#line 160 "atsort.m"
  MR_Word libs__atsort__TypeInfo_for_T_13,
#line 160 "atsort.m"
  MR_Word libs__atsort__HeadVar__1_1,
#line 160 "atsort.m"
  MR_Word libs__atsort__HeadVar__2_2,
#line 160 "atsort.m"
  MR_Box * libs__atsort__HeadVar__3_3)
#line 160 "atsort.m"
{
#line 162 "atsort.m"
  while (MR_TRUE)
#line 162 "atsort.m"
    {
#line 162 "atsort.m"
      /* tailcall optimized into a loop */
#line 162 "atsort.m"
      {
#line 162 "atsort.m"
        MR_bool libs__atsort__succeeded;

#line 162 "atsort.m"
        if ((libs__atsort__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 162 "atsort.m"
          {
#line 163 "atsort.m"
            {
#line 163 "atsort.m"
              mercury__require__unexpected_3_p_0((MR_String) "libs.atsort", (MR_String) "predicate \140libs.atsort.atsort_choose_pref\'/3", (MR_String) "cannot choose any node in atsort");
#line 163 "atsort.m"
              return;
            }
#line 162 "atsort.m"
          }
#line 162 "atsort.m"
        else
#line 164 "atsort.m"
          {
#line 164 "atsort.m"
            MR_Box libs__atsort__Pref_9 = (MR_hl_field(MR_mktag(1), libs__atsort__HeadVar__1_1, (MR_Integer) 0));
#line 164 "atsort.m"
            MR_Word libs__atsort__Prefs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__atsort__HeadVar__1_1, (MR_Integer) 1)));

#line 165 "atsort.m"
            {
#line 165 "atsort.m"
              libs__atsort__succeeded = mercury__list__member_2_p_0(libs__atsort__TypeInfo_for_T_13, libs__atsort__Pref_9, libs__atsort__HeadVar__2_2);
            }
#line 167 "atsort.m"
            if (libs__atsort__succeeded)
#line 166 "atsort.m"
              *libs__atsort__HeadVar__3_3 = libs__atsort__Pref_9;
#line 167 "atsort.m"
            else
#line 168 "atsort.m"
              {
#line 168 "atsort.m"
                /* direct tailcall eliminated */
#line 168 "atsort.m"
                {
#line 168 "atsort.m"
                  MR_Word libs__atsort__HeadVar__1__tmp_copy_1 = libs__atsort__Prefs_10;

#line 168 "atsort.m"
                  libs__atsort__HeadVar__1_1 = libs__atsort__HeadVar__1__tmp_copy_1;
#line 168 "atsort.m"
                }
#line 168 "atsort.m"
                continue;
#line 168 "atsort.m"
              }
#line 164 "atsort.m"
          }
#line 162 "atsort.m"
      }
#line 162 "atsort.m"
      break;
#line 162 "atsort.m"
    }
#line 160 "atsort.m"
}

#line 153 "atsort.m"
static MR_bool MR_CALL 
libs__atsort__atsort_must_avoid_2_p_0(
#line 153 "atsort.m"
  MR_Word libs__atsort__TypeInfo_for_T_7,
#line 153 "atsort.m"
  MR_Word libs__atsort__HeadVar__1_1,
#line 153 "atsort.m"
  MR_Word libs__atsort__Avoidlist_2)
#line 153 "atsort.m"
{
#line 155 "atsort.m"
  while (MR_TRUE)
#line 155 "atsort.m"
    {
#line 155 "atsort.m"
      /* tailcall optimized into a loop */
#line 155 "atsort.m"
      {
#line 155 "atsort.m"
        MR_bool libs__atsort__succeeded;

#line 155 "atsort.m"
        if ((libs__atsort__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 155 "atsort.m"
          libs__atsort__succeeded = MR_TRUE;
#line 155 "atsort.m"
        else
#line 156 "atsort.m"
          {
#line 156 "atsort.m"
            MR_Box libs__atsort__Head_4 = (MR_hl_field(MR_mktag(1), libs__atsort__HeadVar__1_1, (MR_Integer) 0));
#line 156 "atsort.m"
            MR_Word libs__atsort__Tail_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__atsort__HeadVar__1_1, (MR_Integer) 1)));

#line 157 "atsort.m"
            {
#line 157 "atsort.m"
              libs__atsort__succeeded = mercury__list__member_2_p_0(libs__atsort__TypeInfo_for_T_7, libs__atsort__Head_4, libs__atsort__Avoidlist_2);
            }
#line 157 "atsort.m"
            libs__atsort__succeeded = !(libs__atsort__succeeded);
#line 156 "atsort.m"
            if (libs__atsort__succeeded)
#line 158 "atsort.m"
              {
#line 158 "atsort.m"
                /* direct tailcall eliminated */
#line 158 "atsort.m"
                {
#line 158 "atsort.m"
                  MR_Word libs__atsort__HeadVar__1__tmp_copy_1 = libs__atsort__Tail_5;

#line 158 "atsort.m"
                  libs__atsort__HeadVar__1_1 = libs__atsort__HeadVar__1__tmp_copy_1;
#line 158 "atsort.m"
                }
#line 158 "atsort.m"
                continue;
#line 158 "atsort.m"
              }
#line 156 "atsort.m"
          }
#line 155 "atsort.m"
        return libs__atsort__succeeded;
#line 155 "atsort.m"
      }
#line 155 "atsort.m"
      break;
#line 155 "atsort.m"
    }
#line 153 "atsort.m"
}

#line 135 "atsort.m"
static void MR_CALL 
libs__atsort__atsort_can_choose_5_p_0(
#line 135 "atsort.m"
  MR_Word libs__atsort__TypeInfo_for_T_22,
#line 135 "atsort.m"
  MR_Word libs__atsort__HeadVar__1_1,
#line 135 "atsort.m"
  MR_Word libs__atsort__HeadVar__2_2,
#line 135 "atsort.m"
  MR_Word libs__atsort__HeadVar__3_3,
#line 135 "atsort.m"
  MR_Word libs__atsort__STATE_VARIABLE_CanChoose_0_4,
#line 135 "atsort.m"
  MR_Word * libs__atsort__STATE_VARIABLE_CanChoose_5)
#line 135 "atsort.m"
{
#line 138 "atsort.m"
  while (MR_TRUE)
#line 138 "atsort.m"
    {
#line 138 "atsort.m"
      /* tailcall optimized into a loop */
#line 138 "atsort.m"
      {
#line 138 "atsort.m"
        MR_bool libs__atsort__succeeded;

#line 138 "atsort.m"
        if ((libs__atsort__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 138 "atsort.m"
          *libs__atsort__STATE_VARIABLE_CanChoose_5 = libs__atsort__STATE_VARIABLE_CanChoose_0_4;
#line 138 "atsort.m"
        else
#line 139 "atsort.m"
          {
#line 139 "atsort.m"
            MR_Box libs__atsort__Node_11 = (MR_hl_field(MR_mktag(1), libs__atsort__HeadVar__1_1, (MR_Integer) 0));
#line 139 "atsort.m"
            MR_Word libs__atsort__Nodes_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__atsort__HeadVar__1_1, (MR_Integer) 1)));
#line 139 "atsort.m"
            MR_Word libs__atsort__STATE_VARIABLE_CanChoose_19_19;
#line 146 "atsort.m"
            MR_Word libs__atsort__MustPrednodes_16;
#line 140 "atsort.m"
            MR_Word libs__atsort__TypeInfo_24_24;
#line 140 "atsort.m"
            MR_Box libs__atsort__conv0_MustPrednodes_16;

#line 2222 "libs.atsort.c"
            {
#line 2224 "libs.atsort.c"
              libs__atsort__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2226 "libs.atsort.c"
              MR_hl_field(MR_mktag(0), libs__atsort__TypeInfo_24_24, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 2228 "libs.atsort.c"
              MR_hl_field(MR_mktag(0), libs__atsort__TypeInfo_24_24, 1) = ((MR_Box) (libs__atsort__TypeInfo_for_T_22));
#line 2230 "libs.atsort.c"
            }
#line 140 "atsort.m"
            {
#line 140 "atsort.m"
              libs__atsort__succeeded = mercury__map__search_3_p_0(libs__atsort__TypeInfo_for_T_22, libs__atsort__TypeInfo_24_24, libs__atsort__HeadVar__3_3, libs__atsort__Node_11, &libs__atsort__conv0_MustPrednodes_16);
            }
#line 140 "atsort.m"
            if (libs__atsort__succeeded)
#line 140 "atsort.m"
              {
#line 140 "atsort.m"
                libs__atsort__MustPrednodes_16 = ((MR_Word) libs__atsort__conv0_MustPrednodes_16);
#line 140 "atsort.m"
                libs__atsort__succeeded = MR_TRUE;
#line 140 "atsort.m"
              }
#line 146 "atsort.m"
            if (libs__atsort__succeeded)
#line 143 "atsort.m"
              {
#line 141 "atsort.m"
                {
#line 141 "atsort.m"
                  libs__atsort__succeeded = libs__atsort__atsort_must_avoid_2_p_0(libs__atsort__TypeInfo_for_T_22, libs__atsort__HeadVar__2_2, libs__atsort__MustPrednodes_16);
                }
#line 143 "atsort.m"
                if (libs__atsort__succeeded)
#line 142 "atsort.m"
                  {
#line 142 "atsort.m"
                    libs__atsort__STATE_VARIABLE_CanChoose_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 142 "atsort.m"
                    MR_hl_field(MR_mktag(1), libs__atsort__STATE_VARIABLE_CanChoose_19_19, 0) = libs__atsort__Node_11;
#line 142 "atsort.m"
                    MR_hl_field(MR_mktag(1), libs__atsort__STATE_VARIABLE_CanChoose_19_19, 1) = ((MR_Box) (libs__atsort__STATE_VARIABLE_CanChoose_0_4));
#line 142 "atsort.m"
                  }
#line 143 "atsort.m"
                else
#line 142 "atsort.m"
                  libs__atsort__STATE_VARIABLE_CanChoose_19_19 = libs__atsort__STATE_VARIABLE_CanChoose_0_4;
#line 143 "atsort.m"
              }
#line 146 "atsort.m"
            else
#line 147 "atsort.m"
              {
#line 147 "atsort.m"
                libs__atsort__STATE_VARIABLE_CanChoose_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 147 "atsort.m"
                MR_hl_field(MR_mktag(1), libs__atsort__STATE_VARIABLE_CanChoose_19_19, 0) = libs__atsort__Node_11;
#line 147 "atsort.m"
                MR_hl_field(MR_mktag(1), libs__atsort__STATE_VARIABLE_CanChoose_19_19, 1) = ((MR_Box) (libs__atsort__STATE_VARIABLE_CanChoose_0_4));
#line 147 "atsort.m"
              }
#line 149 "atsort.m"
            /* direct tailcall eliminated */
#line 149 "atsort.m"
            {
#line 149 "atsort.m"
              MR_Word libs__atsort__HeadVar__1__tmp_copy_1 = libs__atsort__Nodes_12;
#line 149 "atsort.m"
              MR_Word libs__atsort__STATE_VARIABLE_CanChoose_0__tmp_copy_4 = libs__atsort__STATE_VARIABLE_CanChoose_19_19;

#line 149 "atsort.m"
              libs__atsort__STATE_VARIABLE_CanChoose_0_4 = libs__atsort__STATE_VARIABLE_CanChoose_0__tmp_copy_4;
#line 149 "atsort.m"
              libs__atsort__HeadVar__1_1 = libs__atsort__HeadVar__1__tmp_copy_1;
#line 149 "atsort.m"
            }
#line 149 "atsort.m"
            continue;
#line 139 "atsort.m"
          }
#line 138 "atsort.m"
      }
#line 138 "atsort.m"
      break;
#line 138 "atsort.m"
    }
#line 135 "atsort.m"
}

#line 43 "atsort.m"
void MR_CALL 
libs__atsort__atsort_closure_3_p_0(
#line 43 "atsort.m"
  MR_Word libs__atsort__TypeInfo_for_T_8,
#line 43 "atsort.m"
  MR_Word libs__atsort__Nodes_4,
#line 43 "atsort.m"
  MR_Word libs__atsort__Map_5,
#line 43 "atsort.m"
  MR_Word * libs__atsort__Reachable_6)
#line 43 "atsort.m"
{
#line 284 "atsort.m"
  {
#line 284 "atsort.m"
    MR_bool libs__atsort__succeeded;

#line 285 "atsort.m"
    {
#line 285 "atsort.m"
      libs__atsort__atsort_closure_2_4_p_0(libs__atsort__TypeInfo_for_T_8, libs__atsort__Nodes_4, libs__atsort__Map_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__atsort__Reachable_6);
#line 285 "atsort.m"
      return;
    }
#line 284 "atsort.m"
  }
#line 43 "atsort.m"
}

#line 34 "atsort.m"
void MR_CALL 
libs__atsort__atsort_6_p_0(
#line 34 "atsort.m"
  MR_Word libs__atsort__TypeInfo_for_T_19,
#line 34 "atsort.m"
  MR_Word libs__atsort__Succmap_7,
#line 34 "atsort.m"
  MR_Word libs__atsort__Predmap_8,
#line 34 "atsort.m"
  MR_Word libs__atsort__MustSuccmap_9,
#line 34 "atsort.m"
  MR_Word libs__atsort__MustPredmap_10,
#line 34 "atsort.m"
  MR_Word libs__atsort__PrefOrder_11,
#line 34 "atsort.m"
  MR_Word * libs__atsort__Sortlist_12)
#line 34 "atsort.m"
{
#line 76 "atsort.m"
  {
#line 76 "atsort.m"
    MR_bool libs__atsort__succeeded;

#line 76 "atsort.m"
    {
#line 76 "atsort.m"
      libs__atsort__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_95_91_52_93_95_48_6_p_0(libs__atsort__TypeInfo_for_T_19, libs__atsort__Succmap_7, libs__atsort__Predmap_8, libs__atsort__MustPredmap_10, libs__atsort__PrefOrder_11, libs__atsort__Sortlist_12);
#line 76 "atsort.m"
      return;
    }
#line 76 "atsort.m"
  }
#line 34 "atsort.m"
}

void mercury__libs__atsort__init(void)
{
}

void mercury__libs__atsort__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&libs__atsort__libs__atsort__type_ctor_info_relmap_1);
}

void mercury__libs__atsort__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module libs.atsort. */
