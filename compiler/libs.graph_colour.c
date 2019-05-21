/*
** Automatically generated from `graph_colour.m'
** by the Mercury compiler,
** version rotd-2017-08-08
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


/* :- module libs.graph_colour. */
/* :- implementation. */

/*
INIT mercury__libs__graph_colour__init
ENDINIT
*/

#include "libs.graph_colour.mih"


#include "libs.mih"
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




static void MR_CALL 
libs__graph_colour__find_all_colours_3_p_0(
  MR_Word libs__graph_colour__TypeInfo_for_T_13,
  MR_Word libs__graph_colour__ConstraintList_4,
  MR_Word libs__graph_colour__Vars_5,
  MR_Word * libs__graph_colour__ColourList_6);

static void MR_CALL 
libs__graph_colour__next_colour_4_p_0(
  MR_Word libs__graph_colour__TypeInfo_for_T_20,
  MR_Word libs__graph_colour__Vars0_5,
  MR_Word libs__graph_colour__ConstraintList_6,
  MR_Word * libs__graph_colour__Remainder_7,
  MR_Word * libs__graph_colour__SameColour_8);

static void MR_CALL 
libs__graph_colour__divide_constraints_6_p_0(
  MR_Word libs__graph_colour__TypeInfo_for_T_24,
  MR_Box libs__graph_colour__HeadVar__1_1,
  MR_Word libs__graph_colour__HeadVar__2_2,
  MR_Word * libs__graph_colour__HeadVar__3_3,
  MR_Word * libs__graph_colour__HeadVar__4_4,
  MR_Word libs__graph_colour__STATE_VARIABLE_Vars_0_5,
  MR_Word * libs__graph_colour__STATE_VARIABLE_Vars_6);







#include "io.mh"
#include "string.mh"
#include "time.mh"



void MR_CALL 
libs__graph_colour__group_elements_2_p_0(
  MR_Word libs__graph_colour__TypeInfo_for_T_16,
  MR_Word libs__graph_colour__STATE_VARIABLE_Constraints_0_11,
  MR_Word * libs__graph_colour__Colours_4)
{
  {
    MR_Word libs__graph_colour__TypeInfo_18_18;
    MR_Word libs__graph_colour__AllVars_5;
    MR_Word libs__graph_colour__EmptySet_6;
    MR_Word libs__graph_colour__ConstraintList_7;
    MR_Word libs__graph_colour__ColourList_8;
    MR_Word libs__graph_colour__STATE_VARIABLE_Constraints_12_12;
    MR_Word libs__graph_colour__conv0_STATE_VARIABLE_Constraints_12_12;
    MR_Word libs__graph_colour__conv1_ConstraintList_7;
    MR_Word libs__graph_colour__conv2_Colours_4;

    mercury__set__power_union_2_p_0(libs__graph_colour__TypeInfo_for_T_16, libs__graph_colour__STATE_VARIABLE_Constraints_0_11, &libs__graph_colour__AllVars_5);
    mercury__set__init_1_p_0(libs__graph_colour__TypeInfo_for_T_16, &libs__graph_colour__EmptySet_6);
    {
      libs__graph_colour__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), libs__graph_colour__TypeInfo_18_18, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
      MR_hl_field(MR_mktag(0), libs__graph_colour__TypeInfo_18_18, 1) = ((MR_Box) (libs__graph_colour__TypeInfo_for_T_16));
    }
    mercury__set__delete_3_p_0(libs__graph_colour__TypeInfo_18_18, ((MR_Box) (libs__graph_colour__EmptySet_6)), (MR_Word) libs__graph_colour__STATE_VARIABLE_Constraints_0_11, &libs__graph_colour__conv0_STATE_VARIABLE_Constraints_12_12);
    libs__graph_colour__STATE_VARIABLE_Constraints_12_12 = (MR_Word) libs__graph_colour__conv0_STATE_VARIABLE_Constraints_12_12;
    mercury__set__to_sorted_list_2_p_0(libs__graph_colour__TypeInfo_18_18, (MR_Word) libs__graph_colour__STATE_VARIABLE_Constraints_12_12, &libs__graph_colour__conv1_ConstraintList_7);
    libs__graph_colour__ConstraintList_7 = (MR_Word) libs__graph_colour__conv1_ConstraintList_7;
    libs__graph_colour__find_all_colours_3_p_0(libs__graph_colour__TypeInfo_for_T_16, libs__graph_colour__ConstraintList_7, libs__graph_colour__AllVars_5, &libs__graph_colour__ColourList_8);
    mercury__set__list_to_set_2_p_0(libs__graph_colour__TypeInfo_18_18, (MR_Word) libs__graph_colour__ColourList_8, &libs__graph_colour__conv2_Colours_4);
    *libs__graph_colour__Colours_4 = (MR_Word) libs__graph_colour__conv2_Colours_4;
  }
}

static void MR_CALL 
libs__graph_colour__find_all_colours_3_p_0(
  MR_Word libs__graph_colour__TypeInfo_for_T_13,
  MR_Word libs__graph_colour__ConstraintList_4,
  MR_Word libs__graph_colour__Vars_5,
  MR_Word * libs__graph_colour__ColourList_6)
{
  if ((libs__graph_colour__ConstraintList_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *libs__graph_colour__ColourList_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word libs__graph_colour__RemainingConstraints_9;
    MR_Word libs__graph_colour__Colour_10;
    MR_Word libs__graph_colour__RestVars_11;
    MR_Word libs__graph_colour__ColourList0_12;

    libs__graph_colour__next_colour_4_p_0(libs__graph_colour__TypeInfo_for_T_13, libs__graph_colour__Vars_5, libs__graph_colour__ConstraintList_4, &libs__graph_colour__RemainingConstraints_9, &libs__graph_colour__Colour_10);
    mercury__set__difference_3_p_0(libs__graph_colour__TypeInfo_for_T_13, libs__graph_colour__Vars_5, libs__graph_colour__Colour_10, &libs__graph_colour__RestVars_11);
    libs__graph_colour__find_all_colours_3_p_0(libs__graph_colour__TypeInfo_for_T_13, libs__graph_colour__RemainingConstraints_9, libs__graph_colour__RestVars_11, &libs__graph_colour__ColourList0_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *libs__graph_colour__ColourList_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__graph_colour__Colour_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__graph_colour__ColourList0_12));
    }
  }
}

static void MR_CALL 
libs__graph_colour__next_colour_4_p_0(
  MR_Word libs__graph_colour__TypeInfo_for_T_20,
  MR_Word libs__graph_colour__Vars0_5,
  MR_Word libs__graph_colour__ConstraintList_6,
  MR_Word * libs__graph_colour__Remainder_7,
  MR_Word * libs__graph_colour__SameColour_8)
{
  {
    MR_bool libs__graph_colour__succeeded;

    if ((libs__graph_colour__ConstraintList_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *libs__graph_colour__Remainder_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      mercury__set__init_1_p_0(libs__graph_colour__TypeInfo_for_T_20, libs__graph_colour__SameColour_8);
    }
    else
    {
      MR_Word libs__graph_colour__TypeInfo_22_22;
      MR_Box libs__graph_colour__Var_11;
      MR_Word libs__graph_colour__Vars1_12;
      MR_Word libs__graph_colour__WereContaining_13;
      MR_Word libs__graph_colour__NotContaining_14;
      MR_Word libs__graph_colour__RestVars_15;
      MR_Word libs__graph_colour__ResidueSets_18;
      MR_Box libs__graph_colour__VarPrime_26;
      MR_Word libs__graph_colour__VarsPrime_27;
      MR_Word libs__graph_colour__conv0_Remainder_7;

      libs__graph_colour__succeeded = mercury__set__remove_least_3_p_0(libs__graph_colour__TypeInfo_for_T_20, &libs__graph_colour__VarPrime_26, libs__graph_colour__Vars0_5, &libs__graph_colour__VarsPrime_27);
      if (libs__graph_colour__succeeded)
      {
        libs__graph_colour__Var_11 = libs__graph_colour__VarPrime_26;
        libs__graph_colour__Vars1_12 = libs__graph_colour__VarsPrime_27;
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "libs.graph_colour", (MR_String) "predicate \140libs.graph_colour.choose_var\'/3", (MR_String) "no vars!");
          return;
        }
      }
      libs__graph_colour__divide_constraints_6_p_0(libs__graph_colour__TypeInfo_for_T_20, libs__graph_colour__Var_11, libs__graph_colour__ConstraintList_6, &libs__graph_colour__WereContaining_13, &libs__graph_colour__NotContaining_14, libs__graph_colour__Vars1_12, &libs__graph_colour__RestVars_15);
      if ((libs__graph_colour__NotContaining_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *libs__graph_colour__SameColour_8 = mercury__set__make_singleton_set_1_f_0(libs__graph_colour__TypeInfo_for_T_20, libs__graph_colour__Var_11);
        libs__graph_colour__ResidueSets_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      else
      {
        libs__graph_colour__succeeded = mercury__set__is_empty_1_p_0(libs__graph_colour__TypeInfo_for_T_20, libs__graph_colour__RestVars_15);
        if (libs__graph_colour__succeeded)
        {
          *libs__graph_colour__SameColour_8 = mercury__set__make_singleton_set_1_f_0(libs__graph_colour__TypeInfo_for_T_20, libs__graph_colour__Var_11);
          libs__graph_colour__ResidueSets_18 = libs__graph_colour__NotContaining_14;
        }
        else
        {
          MR_Word libs__graph_colour__SameColour0_19;

          libs__graph_colour__next_colour_4_p_0(libs__graph_colour__TypeInfo_for_T_20, libs__graph_colour__RestVars_15, libs__graph_colour__NotContaining_14, &libs__graph_colour__ResidueSets_18, &libs__graph_colour__SameColour0_19);
          mercury__set__insert_3_p_0(libs__graph_colour__TypeInfo_for_T_20, libs__graph_colour__Var_11, libs__graph_colour__SameColour0_19, libs__graph_colour__SameColour_8);
        }
      }
      {
        libs__graph_colour__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), libs__graph_colour__TypeInfo_22_22, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
        MR_hl_field(MR_mktag(0), libs__graph_colour__TypeInfo_22_22, 1) = ((MR_Box) (libs__graph_colour__TypeInfo_for_T_20));
      }
      mercury__list__append_3_p_1(libs__graph_colour__TypeInfo_22_22, (MR_Word) libs__graph_colour__ResidueSets_18, (MR_Word) libs__graph_colour__WereContaining_13, &libs__graph_colour__conv0_Remainder_7);
      *libs__graph_colour__Remainder_7 = (MR_Word) libs__graph_colour__conv0_Remainder_7;
    }
  }
}

static void MR_CALL 
libs__graph_colour__divide_constraints_6_p_0(
  MR_Word libs__graph_colour__TypeInfo_for_T_24,
  MR_Box libs__graph_colour__HeadVar__1_1,
  MR_Word libs__graph_colour__HeadVar__2_2,
  MR_Word * libs__graph_colour__HeadVar__3_3,
  MR_Word * libs__graph_colour__HeadVar__4_4,
  MR_Word libs__graph_colour__STATE_VARIABLE_Vars_0_5,
  MR_Word * libs__graph_colour__STATE_VARIABLE_Vars_6)
{
  {
    MR_bool libs__graph_colour__succeeded;

    if ((libs__graph_colour__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *libs__graph_colour__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *libs__graph_colour__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *libs__graph_colour__STATE_VARIABLE_Vars_6 = libs__graph_colour__STATE_VARIABLE_Vars_0_5;
    }
    else
    {
      MR_Word libs__graph_colour__S_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__graph_colour__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word libs__graph_colour__Ss_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__graph_colour__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word libs__graph_colour__C0_17;
      MR_Word libs__graph_colour__NC0_18;
      MR_Word libs__graph_colour__STATE_VARIABLE_Vars_22_22;

      libs__graph_colour__divide_constraints_6_p_0(libs__graph_colour__TypeInfo_for_T_24, libs__graph_colour__HeadVar__1_1, libs__graph_colour__Ss_13, &libs__graph_colour__C0_17, &libs__graph_colour__NC0_18, libs__graph_colour__STATE_VARIABLE_Vars_0_5, &libs__graph_colour__STATE_VARIABLE_Vars_22_22);
      libs__graph_colour__succeeded = mercury__set__member_2_p_0(libs__graph_colour__TypeInfo_for_T_24, libs__graph_colour__HeadVar__1_1, libs__graph_colour__S_12);
      if (libs__graph_colour__succeeded)
      {
        MR_Word libs__graph_colour__T_19;

        mercury__set__delete_3_p_0(libs__graph_colour__TypeInfo_for_T_24, libs__graph_colour__HeadVar__1_1, libs__graph_colour__S_12, &libs__graph_colour__T_19);
        libs__graph_colour__succeeded = mercury__set__is_empty_1_p_0(libs__graph_colour__TypeInfo_for_T_24, libs__graph_colour__T_19);
        if (libs__graph_colour__succeeded)
          *libs__graph_colour__HeadVar__3_3 = libs__graph_colour__C0_17;
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *libs__graph_colour__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__graph_colour__T_19));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__graph_colour__C0_17));
          }
        *libs__graph_colour__HeadVar__4_4 = libs__graph_colour__NC0_18;
        mercury__set__difference_3_p_0(libs__graph_colour__TypeInfo_for_T_24, libs__graph_colour__STATE_VARIABLE_Vars_22_22, libs__graph_colour__T_19, libs__graph_colour__STATE_VARIABLE_Vars_6);
      }
      else
      {
        *libs__graph_colour__HeadVar__3_3 = libs__graph_colour__C0_17;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *libs__graph_colour__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__graph_colour__S_12));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__graph_colour__NC0_18));
        }
        *libs__graph_colour__STATE_VARIABLE_Vars_6 = libs__graph_colour__STATE_VARIABLE_Vars_22_22;
      }
    }
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__libs__graph_colour__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module libs.graph_colour. */
