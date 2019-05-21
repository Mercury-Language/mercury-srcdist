/*
** Automatically generated from `graph_colour.m'
** by the Mercury compiler,
** version rotd-2018-02-06
** configured for x86_64-pc-linux-gnu.
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


// :- module libs.graph_colour.
// :- implementation.

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
  MR_Word TypeInfo_for_T_13,
  MR_Word ConstraintList_4,
  MR_Word Vars_5,
  MR_Word * ColourList_6);

static void MR_CALL 
libs__graph_colour__next_colour_4_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word Vars0_5,
  MR_Word ConstraintList_6,
  MR_Word * Remainder_7,
  MR_Word * SameColour_8);

static void MR_CALL 
libs__graph_colour__divide_constraints_6_p_0(
  MR_Word TypeInfo_for_T_24,
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Vars_0_5,
  MR_Word * STATE_VARIABLE_Vars_6);







#include "io.mh"
#include "string.mh"
#include "time.mh"



void MR_CALL 
libs__graph_colour__group_elements_2_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word STATE_VARIABLE_Constraints_0_11,
  MR_Word * Colours_4)
{
  {
    MR_Word TypeInfo_18_18;
    MR_Word AllVars_5;
    MR_Word EmptySet_6;
    MR_Word ConstraintList_7;
    MR_Word ColourList_8;
    MR_Word STATE_VARIABLE_Constraints_12_12;
    MR_Word conv0_STATE_VARIABLE_Constraints_12_12;
    MR_Word conv1_ConstraintList_7;
    MR_Word conv2_Colours_4;

    mercury__set__power_union_2_p_0(TypeInfo_for_T_16, STATE_VARIABLE_Constraints_0_11, &AllVars_5);
    mercury__set__init_1_p_0(TypeInfo_for_T_16, &EmptySet_6);
    {
      TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_18_18, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
      MR_hl_field(MR_mktag(0), TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_16));
    }
    mercury__set__delete_3_p_0(TypeInfo_18_18, ((MR_Box) (EmptySet_6)), (MR_Word) STATE_VARIABLE_Constraints_0_11, &conv0_STATE_VARIABLE_Constraints_12_12);
    STATE_VARIABLE_Constraints_12_12 = (MR_Word) conv0_STATE_VARIABLE_Constraints_12_12;
    mercury__set__to_sorted_list_2_p_0(TypeInfo_18_18, (MR_Word) STATE_VARIABLE_Constraints_12_12, &conv1_ConstraintList_7);
    ConstraintList_7 = (MR_Word) conv1_ConstraintList_7;
    libs__graph_colour__find_all_colours_3_p_0(TypeInfo_for_T_16, ConstraintList_7, AllVars_5, &ColourList_8);
    mercury__set__list_to_set_2_p_0(TypeInfo_18_18, (MR_Word) ColourList_8, &conv2_Colours_4);
    *Colours_4 = (MR_Word) conv2_Colours_4;
  }
}

static void MR_CALL 
libs__graph_colour__find_all_colours_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word ConstraintList_4,
  MR_Word Vars_5,
  MR_Word * ColourList_6)
{
  if ((ConstraintList_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *ColourList_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word RemainingConstraints_9;
    MR_Word Colour_10;
    MR_Word RestVars_11;
    MR_Word ColourList0_12;

    libs__graph_colour__next_colour_4_p_0(TypeInfo_for_T_13, Vars_5, ConstraintList_4, &RemainingConstraints_9, &Colour_10);
    mercury__set__difference_3_p_0(TypeInfo_for_T_13, Vars_5, Colour_10, &RestVars_11);
    libs__graph_colour__find_all_colours_3_p_0(TypeInfo_for_T_13, RemainingConstraints_9, RestVars_11, &ColourList0_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ColourList_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Colour_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ColourList0_12));
    }
  }
}

static void MR_CALL 
libs__graph_colour__next_colour_4_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word Vars0_5,
  MR_Word ConstraintList_6,
  MR_Word * Remainder_7,
  MR_Word * SameColour_8)
{
  {
    MR_bool succeeded;

    if ((ConstraintList_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *Remainder_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      mercury__set__init_1_p_0(TypeInfo_for_T_20, SameColour_8);
    }
    else
    {
      MR_Word TypeInfo_22_22;
      MR_Box Var_11;
      MR_Word Vars1_12;
      MR_Word WereContaining_13;
      MR_Word NotContaining_14;
      MR_Word RestVars_15;
      MR_Word ResidueSets_18;
      MR_Box VarPrime_26;
      MR_Word VarsPrime_27;
      MR_Word conv0_Remainder_7;

      succeeded = mercury__set__remove_least_3_p_0(TypeInfo_for_T_20, &VarPrime_26, Vars0_5, &VarsPrime_27);
      if (succeeded)
      {
        Var_11 = VarPrime_26;
        Vars1_12 = VarsPrime_27;
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "libs.graph_colour", (MR_String) "predicate \140libs.graph_colour.choose_var\'/3", (MR_String) "no vars!");
          return;
        }
      }
      libs__graph_colour__divide_constraints_6_p_0(TypeInfo_for_T_20, Var_11, ConstraintList_6, &WereContaining_13, &NotContaining_14, Vars1_12, &RestVars_15);
      if ((NotContaining_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *SameColour_8 = mercury__set__make_singleton_set_1_f_0(TypeInfo_for_T_20, Var_11);
        ResidueSets_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      else
      {
        succeeded = mercury__set__is_empty_1_p_0(TypeInfo_for_T_20, RestVars_15);
        if (succeeded)
        {
          *SameColour_8 = mercury__set__make_singleton_set_1_f_0(TypeInfo_for_T_20, Var_11);
          ResidueSets_18 = NotContaining_14;
        }
        else
        {
          MR_Word SameColour0_19;

          libs__graph_colour__next_colour_4_p_0(TypeInfo_for_T_20, RestVars_15, NotContaining_14, &ResidueSets_18, &SameColour0_19);
          mercury__set__insert_3_p_0(TypeInfo_for_T_20, Var_11, SameColour0_19, SameColour_8);
        }
      }
      {
        TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_22_22, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
        MR_hl_field(MR_mktag(0), TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_T_20));
      }
      mercury__list__append_3_p_1(TypeInfo_22_22, (MR_Word) ResidueSets_18, (MR_Word) WereContaining_13, &conv0_Remainder_7);
      *Remainder_7 = (MR_Word) conv0_Remainder_7;
    }
  }
}

static void MR_CALL 
libs__graph_colour__divide_constraints_6_p_0(
  MR_Word TypeInfo_for_T_24,
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Vars_0_5,
  MR_Word * STATE_VARIABLE_Vars_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_Vars_6 = STATE_VARIABLE_Vars_0_5;
    }
    else
    {
      MR_Word S_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Ss_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word C0_17;
      MR_Word NC0_18;
      MR_Word STATE_VARIABLE_Vars_22_22;

      libs__graph_colour__divide_constraints_6_p_0(TypeInfo_for_T_24, HeadVar__1_1, Ss_13, &C0_17, &NC0_18, STATE_VARIABLE_Vars_0_5, &STATE_VARIABLE_Vars_22_22);
      succeeded = mercury__set__member_2_p_0(TypeInfo_for_T_24, HeadVar__1_1, S_12);
      if (succeeded)
      {
        MR_Word T_19;

        mercury__set__delete_3_p_0(TypeInfo_for_T_24, HeadVar__1_1, S_12, &T_19);
        succeeded = mercury__set__is_empty_1_p_0(TypeInfo_for_T_24, T_19);
        if (succeeded)
          *HeadVar__3_3 = C0_17;
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (T_19));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (C0_17));
          }
        *HeadVar__4_4 = NC0_18;
        mercury__set__difference_3_p_0(TypeInfo_for_T_24, STATE_VARIABLE_Vars_22_22, T_19, STATE_VARIABLE_Vars_6);
      }
      else
      {
        *HeadVar__3_3 = C0_17;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (S_12));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (NC0_18));
        }
        *STATE_VARIABLE_Vars_6 = STATE_VARIABLE_Vars_22_22;
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

// :- end_module libs.graph_colour.
