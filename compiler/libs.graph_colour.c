/*
** Automatically generated from `graph_colour.m'
** by the Mercury compiler,
** version 13.05.2, configured for x86_64-apple-darwin12.5.0.
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


/* :- module libs.graph_colour. */
/* :- implementation. */

/*
INIT mercury__libs__graph_colour__init
ENDINIT
*/

#include "libs.graph_colour.mih"


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




#line 152 "graph_colour.m"
static void MR_CALL 
libs__graph_colour__divide_constraints_6_p_0(
#line 152 "graph_colour.m"
  MR_Word libs__graph_colour__TypeInfo_for_T_24,
#line 152 "graph_colour.m"
  MR_Box libs__graph_colour__HeadVar__1_1,
#line 152 "graph_colour.m"
  MR_Word libs__graph_colour__HeadVar__2_2,
#line 152 "graph_colour.m"
  MR_Word * libs__graph_colour__HeadVar__3_3,
#line 152 "graph_colour.m"
  MR_Word * libs__graph_colour__HeadVar__4_4,
#line 152 "graph_colour.m"
  MR_Word libs__graph_colour__STATE_VARIABLE_Vars_0_5,
#line 152 "graph_colour.m"
  MR_Word * libs__graph_colour__STATE_VARIABLE_Vars_6);

#line 87 "graph_colour.m"
static void MR_CALL 
libs__graph_colour__next_colour_4_p_0(
#line 87 "graph_colour.m"
  MR_Word libs__graph_colour__TypeInfo_for_T_20,
#line 87 "graph_colour.m"
  MR_Word libs__graph_colour__Vars0_5,
#line 87 "graph_colour.m"
  MR_Word libs__graph_colour__ConstraintList_6,
#line 87 "graph_colour.m"
  MR_Word * libs__graph_colour__Remainder_7,
#line 87 "graph_colour.m"
  MR_Word * libs__graph_colour__SameColour_8);

#line 70 "graph_colour.m"
static void MR_CALL 
libs__graph_colour__find_all_colours_3_p_0(
#line 70 "graph_colour.m"
  MR_Word libs__graph_colour__TypeInfo_for_T_13,
#line 70 "graph_colour.m"
  MR_Word libs__graph_colour__ConstraintList_4,
#line 70 "graph_colour.m"
  MR_Word libs__graph_colour__Vars_5,
#line 70 "graph_colour.m"
  MR_Word * libs__graph_colour__ColourList_6);







#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 152 "graph_colour.m"
static void MR_CALL 
libs__graph_colour__divide_constraints_6_p_0(
#line 152 "graph_colour.m"
  MR_Word libs__graph_colour__TypeInfo_for_T_24,
#line 152 "graph_colour.m"
  MR_Box libs__graph_colour__HeadVar__1_1,
#line 152 "graph_colour.m"
  MR_Word libs__graph_colour__HeadVar__2_2,
#line 152 "graph_colour.m"
  MR_Word * libs__graph_colour__HeadVar__3_3,
#line 152 "graph_colour.m"
  MR_Word * libs__graph_colour__HeadVar__4_4,
#line 152 "graph_colour.m"
  MR_Word libs__graph_colour__STATE_VARIABLE_Vars_0_5,
#line 152 "graph_colour.m"
  MR_Word * libs__graph_colour__STATE_VARIABLE_Vars_6)
#line 152 "graph_colour.m"
{
#line 155 "graph_colour.m"
  {
#line 155 "graph_colour.m"
    MR_bool libs__graph_colour__succeeded;

#line 155 "graph_colour.m"
    if ((libs__graph_colour__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 155 "graph_colour.m"
      {
#line 155 "graph_colour.m"
        *libs__graph_colour__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 155 "graph_colour.m"
        *libs__graph_colour__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 155 "graph_colour.m"
        *libs__graph_colour__STATE_VARIABLE_Vars_6 = libs__graph_colour__STATE_VARIABLE_Vars_0_5;
#line 155 "graph_colour.m"
      }
#line 155 "graph_colour.m"
    else
#line 156 "graph_colour.m"
      {
#line 156 "graph_colour.m"
        MR_Word libs__graph_colour__S_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__graph_colour__HeadVar__2_2, (MR_Integer) 0)));
#line 156 "graph_colour.m"
        MR_Word libs__graph_colour__Ss_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__graph_colour__HeadVar__2_2, (MR_Integer) 1)));
#line 156 "graph_colour.m"
        MR_Word libs__graph_colour__C0_17;
#line 156 "graph_colour.m"
        MR_Word libs__graph_colour__NC0_18;
#line 156 "graph_colour.m"
        MR_Word libs__graph_colour__STATE_VARIABLE_Vars_22_22;

#line 157 "graph_colour.m"
        {
#line 157 "graph_colour.m"
          libs__graph_colour__divide_constraints_6_p_0(libs__graph_colour__TypeInfo_for_T_24, libs__graph_colour__HeadVar__1_1, libs__graph_colour__Ss_13, &libs__graph_colour__C0_17, &libs__graph_colour__NC0_18, libs__graph_colour__STATE_VARIABLE_Vars_0_5, &libs__graph_colour__STATE_VARIABLE_Vars_22_22);
        }
#line 158 "graph_colour.m"
        {
#line 158 "graph_colour.m"
          libs__graph_colour__succeeded = mercury__set__member_2_p_0(libs__graph_colour__TypeInfo_for_T_24, libs__graph_colour__HeadVar__1_1, libs__graph_colour__S_12);
        }
#line 167 "graph_colour.m"
        if (libs__graph_colour__succeeded)
#line 159 "graph_colour.m"
          {
#line 159 "graph_colour.m"
            MR_Word libs__graph_colour__T_19;

#line 159 "graph_colour.m"
            {
#line 159 "graph_colour.m"
              mercury__set__delete_3_p_0(libs__graph_colour__TypeInfo_for_T_24, libs__graph_colour__HeadVar__1_1, libs__graph_colour__S_12, &libs__graph_colour__T_19);
            }
#line 160 "graph_colour.m"
            {
#line 160 "graph_colour.m"
              libs__graph_colour__succeeded = mercury__set__empty_1_p_0(libs__graph_colour__TypeInfo_for_T_24, libs__graph_colour__T_19);
            }
#line 162 "graph_colour.m"
            if (libs__graph_colour__succeeded)
#line 161 "graph_colour.m"
              *libs__graph_colour__HeadVar__3_3 = libs__graph_colour__C0_17;
#line 162 "graph_colour.m"
            else
#line 163 "graph_colour.m"
              {
#line 163 "graph_colour.m"
                MR_Word base;
#line 163 "graph_colour.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 163 "graph_colour.m"
                *libs__graph_colour__HeadVar__3_3 = base;
#line 163 "graph_colour.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__graph_colour__T_19));
#line 163 "graph_colour.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__graph_colour__C0_17));
#line 163 "graph_colour.m"
              }
#line 165 "graph_colour.m"
            *libs__graph_colour__HeadVar__4_4 = libs__graph_colour__NC0_18;
#line 166 "graph_colour.m"
            {
#line 166 "graph_colour.m"
              mercury__set__difference_3_p_0(libs__graph_colour__TypeInfo_for_T_24, libs__graph_colour__STATE_VARIABLE_Vars_22_22, libs__graph_colour__T_19, libs__graph_colour__STATE_VARIABLE_Vars_6);
#line 166 "graph_colour.m"
              return;
            }
#line 159 "graph_colour.m"
          }
#line 167 "graph_colour.m"
        else
#line 168 "graph_colour.m"
          {
#line 168 "graph_colour.m"
            *libs__graph_colour__HeadVar__3_3 = libs__graph_colour__C0_17;
#line 169 "graph_colour.m"
            {
#line 169 "graph_colour.m"
              MR_Word base;
#line 169 "graph_colour.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 169 "graph_colour.m"
              *libs__graph_colour__HeadVar__4_4 = base;
#line 169 "graph_colour.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__graph_colour__S_12));
#line 169 "graph_colour.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__graph_colour__NC0_18));
#line 169 "graph_colour.m"
            }
#line 169 "graph_colour.m"
            *libs__graph_colour__STATE_VARIABLE_Vars_6 = libs__graph_colour__STATE_VARIABLE_Vars_22_22;
#line 168 "graph_colour.m"
          }
#line 156 "graph_colour.m"
      }
#line 155 "graph_colour.m"
  }
#line 152 "graph_colour.m"
}

#line 87 "graph_colour.m"
static void MR_CALL 
libs__graph_colour__next_colour_4_p_0(
#line 87 "graph_colour.m"
  MR_Word libs__graph_colour__TypeInfo_for_T_20,
#line 87 "graph_colour.m"
  MR_Word libs__graph_colour__Vars0_5,
#line 87 "graph_colour.m"
  MR_Word libs__graph_colour__ConstraintList_6,
#line 87 "graph_colour.m"
  MR_Word * libs__graph_colour__Remainder_7,
#line 87 "graph_colour.m"
  MR_Word * libs__graph_colour__SameColour_8)
#line 87 "graph_colour.m"
{
#line 135 "graph_colour.m"
  {
#line 135 "graph_colour.m"
    MR_bool libs__graph_colour__succeeded;

#line 135 "graph_colour.m"
    if ((libs__graph_colour__ConstraintList_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 137 "graph_colour.m"
      {
#line 138 "graph_colour.m"
        *libs__graph_colour__Remainder_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 139 "graph_colour.m"
        {
#line 139 "graph_colour.m"
          mercury__set__init_1_p_0(libs__graph_colour__TypeInfo_for_T_20, libs__graph_colour__SameColour_8);
#line 139 "graph_colour.m"
          return;
        }
#line 137 "graph_colour.m"
      }
#line 135 "graph_colour.m"
    else
#line 93 "graph_colour.m"
      {
#line 93 "graph_colour.m"
        MR_Word libs__graph_colour__TypeInfo_22_22;
#line 93 "graph_colour.m"
        MR_Box libs__graph_colour__Var_11;
#line 93 "graph_colour.m"
        MR_Word libs__graph_colour__Vars1_12;
#line 93 "graph_colour.m"
        MR_Word libs__graph_colour__WereContaining_13;
#line 93 "graph_colour.m"
        MR_Word libs__graph_colour__NotContaining_14;
#line 93 "graph_colour.m"
        MR_Word libs__graph_colour__RestVars_15;
#line 93 "graph_colour.m"
        MR_Word libs__graph_colour__ResidueSets_18;
#line 183 "graph_colour.m"
        MR_Box libs__graph_colour__VarPrime_26;
#line 183 "graph_colour.m"
        MR_Word libs__graph_colour__VarsPrime_27;
#line 134 "graph_colour.m"
        MR_Word libs__graph_colour__conv0_Remainder_7;

#line 180 "graph_colour.m"
        {
#line 180 "graph_colour.m"
          libs__graph_colour__succeeded = mercury__set__remove_least_3_p_0(libs__graph_colour__TypeInfo_for_T_20, &libs__graph_colour__VarPrime_26, libs__graph_colour__Vars0_5, &libs__graph_colour__VarsPrime_27);
        }
#line 183 "graph_colour.m"
        if (libs__graph_colour__succeeded)
#line 181 "graph_colour.m"
          {
#line 181 "graph_colour.m"
            libs__graph_colour__Var_11 = libs__graph_colour__VarPrime_26;
#line 182 "graph_colour.m"
            libs__graph_colour__Vars1_12 = libs__graph_colour__VarsPrime_27;
#line 181 "graph_colour.m"
          }
#line 183 "graph_colour.m"
        else
#line 184 "graph_colour.m"
          {
#line 184 "graph_colour.m"
            {
#line 184 "graph_colour.m"
              mercury__require__unexpected_3_p_0((MR_String) "libs.graph_colour", (MR_String) "predicate \140libs.graph_colour.choose_var\'/3", (MR_String) "no vars!");
#line 184 "graph_colour.m"
              return;
            }
#line 184 "graph_colour.m"
          }
#line 100 "graph_colour.m"
        {
#line 100 "graph_colour.m"
          libs__graph_colour__divide_constraints_6_p_0(libs__graph_colour__TypeInfo_for_T_20, libs__graph_colour__Var_11, libs__graph_colour__ConstraintList_6, &libs__graph_colour__WereContaining_13, &libs__graph_colour__NotContaining_14, libs__graph_colour__Vars1_12, &libs__graph_colour__RestVars_15);
        }
#line 121 "graph_colour.m"
        if ((libs__graph_colour__NotContaining_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 122 "graph_colour.m"
          {
#line 127 "graph_colour.m"
            {
#line 127 "graph_colour.m"
              *libs__graph_colour__SameColour_8 = mercury__set__make_singleton_set_1_f_0(libs__graph_colour__TypeInfo_for_T_20, libs__graph_colour__Var_11);
            }
#line 128 "graph_colour.m"
            libs__graph_colour__ResidueSets_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 122 "graph_colour.m"
          }
#line 121 "graph_colour.m"
        else
#line 111 "graph_colour.m"
          {
#line 106 "graph_colour.m"
            {
#line 106 "graph_colour.m"
              libs__graph_colour__succeeded = mercury__set__empty_1_p_0(libs__graph_colour__TypeInfo_for_T_20, libs__graph_colour__RestVars_15);
            }
#line 111 "graph_colour.m"
            if (libs__graph_colour__succeeded)
#line 109 "graph_colour.m"
              {
#line 109 "graph_colour.m"
                {
#line 109 "graph_colour.m"
                  *libs__graph_colour__SameColour_8 = mercury__set__make_singleton_set_1_f_0(libs__graph_colour__TypeInfo_for_T_20, libs__graph_colour__Var_11);
                }
#line 110 "graph_colour.m"
                libs__graph_colour__ResidueSets_18 = libs__graph_colour__NotContaining_14;
#line 109 "graph_colour.m"
              }
#line 111 "graph_colour.m"
            else
#line 116 "graph_colour.m"
              {
#line 116 "graph_colour.m"
                MR_Word libs__graph_colour__SameColour0_19;

#line 116 "graph_colour.m"
                {
#line 116 "graph_colour.m"
                  libs__graph_colour__next_colour_4_p_0(libs__graph_colour__TypeInfo_for_T_20, libs__graph_colour__RestVars_15, libs__graph_colour__NotContaining_14, &libs__graph_colour__ResidueSets_18, &libs__graph_colour__SameColour0_19);
                }
#line 119 "graph_colour.m"
                {
#line 119 "graph_colour.m"
                  mercury__set__insert_3_p_0(libs__graph_colour__TypeInfo_for_T_20, libs__graph_colour__Var_11, libs__graph_colour__SameColour0_19, libs__graph_colour__SameColour_8);
                }
#line 116 "graph_colour.m"
              }
#line 111 "graph_colour.m"
          }
#line 413 "libs.graph_colour.c"
        {
#line 415 "libs.graph_colour.c"
          libs__graph_colour__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 417 "libs.graph_colour.c"
          MR_hl_field(MR_mktag(0), libs__graph_colour__TypeInfo_22_22, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
#line 419 "libs.graph_colour.c"
          MR_hl_field(MR_mktag(0), libs__graph_colour__TypeInfo_22_22, 1) = ((MR_Box) (libs__graph_colour__TypeInfo_for_T_20));
#line 421 "libs.graph_colour.c"
        }
#line 134 "graph_colour.m"
        {
#line 134 "graph_colour.m"
          mercury__list__append_3_p_1(libs__graph_colour__TypeInfo_22_22, (MR_Word) libs__graph_colour__ResidueSets_18, (MR_Word) libs__graph_colour__WereContaining_13, &libs__graph_colour__conv0_Remainder_7);
        }
#line 134 "graph_colour.m"
        *libs__graph_colour__Remainder_7 = (MR_Word) libs__graph_colour__conv0_Remainder_7;
#line 93 "graph_colour.m"
      }
#line 135 "graph_colour.m"
  }
#line 87 "graph_colour.m"
}

#line 70 "graph_colour.m"
static void MR_CALL 
libs__graph_colour__find_all_colours_3_p_0(
#line 70 "graph_colour.m"
  MR_Word libs__graph_colour__TypeInfo_for_T_13,
#line 70 "graph_colour.m"
  MR_Word libs__graph_colour__ConstraintList_4,
#line 70 "graph_colour.m"
  MR_Word libs__graph_colour__Vars_5,
#line 70 "graph_colour.m"
  MR_Word * libs__graph_colour__ColourList_6)
#line 70 "graph_colour.m"
{
#line 77 "graph_colour.m"
  {
#line 77 "graph_colour.m"
    MR_bool libs__graph_colour__succeeded;

#line 77 "graph_colour.m"
    if ((libs__graph_colour__ConstraintList_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 76 "graph_colour.m"
      *libs__graph_colour__ColourList_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 77 "graph_colour.m"
    else
#line 78 "graph_colour.m"
      {
#line 78 "graph_colour.m"
        MR_Word libs__graph_colour__RemainingConstraints_9;
#line 78 "graph_colour.m"
        MR_Word libs__graph_colour__Colour_10;
#line 78 "graph_colour.m"
        MR_Word libs__graph_colour__RestVars_11;
#line 78 "graph_colour.m"
        MR_Word libs__graph_colour__ColourList0_12;

#line 79 "graph_colour.m"
        {
#line 79 "graph_colour.m"
          libs__graph_colour__next_colour_4_p_0(libs__graph_colour__TypeInfo_for_T_13, libs__graph_colour__Vars_5, libs__graph_colour__ConstraintList_4, &libs__graph_colour__RemainingConstraints_9, &libs__graph_colour__Colour_10);
        }
#line 80 "graph_colour.m"
        {
#line 80 "graph_colour.m"
          mercury__set__difference_3_p_0(libs__graph_colour__TypeInfo_for_T_13, libs__graph_colour__Vars_5, libs__graph_colour__Colour_10, &libs__graph_colour__RestVars_11);
        }
#line 81 "graph_colour.m"
        {
#line 81 "graph_colour.m"
          libs__graph_colour__find_all_colours_3_p_0(libs__graph_colour__TypeInfo_for_T_13, libs__graph_colour__RemainingConstraints_9, libs__graph_colour__RestVars_11, &libs__graph_colour__ColourList0_12);
        }
#line 82 "graph_colour.m"
        {
#line 82 "graph_colour.m"
          MR_Word base;
#line 82 "graph_colour.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "graph_colour.m"
          *libs__graph_colour__ColourList_6 = base;
#line 82 "graph_colour.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__graph_colour__Colour_10));
#line 82 "graph_colour.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__graph_colour__ColourList0_12));
#line 82 "graph_colour.m"
        }
#line 78 "graph_colour.m"
      }
#line 77 "graph_colour.m"
  }
#line 70 "graph_colour.m"
}

#line 35 "graph_colour.m"
void MR_CALL 
libs__graph_colour__group_elements_2_p_0(
#line 35 "graph_colour.m"
  MR_Word libs__graph_colour__TypeInfo_for_T_11,
#line 35 "graph_colour.m"
  MR_Word libs__graph_colour__STATE_VARIABLE_Constraints_0_9,
#line 35 "graph_colour.m"
  MR_Word * libs__graph_colour__Colours_4)
#line 35 "graph_colour.m"
{
#line 47 "graph_colour.m"
  {
#line 47 "graph_colour.m"
    MR_bool libs__graph_colour__succeeded;
#line 47 "graph_colour.m"
    MR_Word libs__graph_colour__TypeInfo_13_13;
#line 47 "graph_colour.m"
    MR_Word libs__graph_colour__AllVars_5;
#line 47 "graph_colour.m"
    MR_Word libs__graph_colour__EmptySet_6;
#line 47 "graph_colour.m"
    MR_Word libs__graph_colour__ConstraintList_7;
#line 47 "graph_colour.m"
    MR_Word libs__graph_colour__ColourList_8;
#line 47 "graph_colour.m"
    MR_Word libs__graph_colour__STATE_VARIABLE_Constraints_10_10;
#line 50 "graph_colour.m"
    MR_Word libs__graph_colour__conv0_STATE_VARIABLE_Constraints_10_10;
#line 51 "graph_colour.m"
    MR_Word libs__graph_colour__conv1_ConstraintList_7;
#line 53 "graph_colour.m"
    MR_Word libs__graph_colour__conv2_Colours_4;

#line 48 "graph_colour.m"
    {
#line 48 "graph_colour.m"
      mercury__set__power_union_2_p_0(libs__graph_colour__TypeInfo_for_T_11, libs__graph_colour__STATE_VARIABLE_Constraints_0_9, &libs__graph_colour__AllVars_5);
    }
#line 49 "graph_colour.m"
    {
#line 49 "graph_colour.m"
      mercury__set__init_1_p_0(libs__graph_colour__TypeInfo_for_T_11, &libs__graph_colour__EmptySet_6);
    }
#line 552 "libs.graph_colour.c"
    {
#line 554 "libs.graph_colour.c"
      libs__graph_colour__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 556 "libs.graph_colour.c"
      MR_hl_field(MR_mktag(0), libs__graph_colour__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
#line 558 "libs.graph_colour.c"
      MR_hl_field(MR_mktag(0), libs__graph_colour__TypeInfo_13_13, 1) = ((MR_Box) (libs__graph_colour__TypeInfo_for_T_11));
#line 560 "libs.graph_colour.c"
    }
#line 50 "graph_colour.m"
    {
#line 50 "graph_colour.m"
      mercury__set__delete_3_p_0(libs__graph_colour__TypeInfo_13_13, ((MR_Box) (libs__graph_colour__EmptySet_6)), (MR_Word) libs__graph_colour__STATE_VARIABLE_Constraints_0_9, &libs__graph_colour__conv0_STATE_VARIABLE_Constraints_10_10);
    }
#line 50 "graph_colour.m"
    libs__graph_colour__STATE_VARIABLE_Constraints_10_10 = (MR_Word) libs__graph_colour__conv0_STATE_VARIABLE_Constraints_10_10;
#line 51 "graph_colour.m"
    {
#line 51 "graph_colour.m"
      mercury__set__to_sorted_list_2_p_0(libs__graph_colour__TypeInfo_13_13, (MR_Word) libs__graph_colour__STATE_VARIABLE_Constraints_10_10, &libs__graph_colour__conv1_ConstraintList_7);
    }
#line 51 "graph_colour.m"
    libs__graph_colour__ConstraintList_7 = (MR_Word) libs__graph_colour__conv1_ConstraintList_7;
#line 52 "graph_colour.m"
    {
#line 52 "graph_colour.m"
      libs__graph_colour__find_all_colours_3_p_0(libs__graph_colour__TypeInfo_for_T_11, libs__graph_colour__ConstraintList_7, libs__graph_colour__AllVars_5, &libs__graph_colour__ColourList_8);
    }
#line 53 "graph_colour.m"
    {
#line 53 "graph_colour.m"
      mercury__set__list_to_set_2_p_0(libs__graph_colour__TypeInfo_13_13, (MR_Word) libs__graph_colour__ColourList_8, &libs__graph_colour__conv2_Colours_4);
    }
#line 53 "graph_colour.m"
    *libs__graph_colour__Colours_4 = (MR_Word) libs__graph_colour__conv2_Colours_4;
#line 47 "graph_colour.m"
  }
#line 35 "graph_colour.m"
}

void mercury__libs__graph_colour__init(void)
{
}

void mercury__libs__graph_colour__init_type_tables(void)
{
}

void mercury__libs__graph_colour__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module libs.graph_colour. */
