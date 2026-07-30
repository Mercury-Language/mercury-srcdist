/*
** Automatically generated from `term_subst.m'
** by the Mercury compiler,
** version rotd-2026-07-30
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


// :- module term_subst.
// :- implementation.

/*
INIT mercury__term_subst__init
ENDINIT
*/

#include "term_subst.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "calendar.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
#include "fat_sparse_bitset.mih"
#include "fatter_sparse_bitset.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_conversion.mih"
#include "term_int.mih"
#include "term_io.mih"
#include "term_unify.mih"
#include "term_vars.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.error_util.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"





static /* final */ const MR_Box mercury__term_subst_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__term_subst_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__term_subst_scalar_common_3[1][5];

static /* final */ const MR_Box mercury__term_subst_scalar_common_4[1][2];




static /* final */ const MR_Box mercury__term_subst_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_subst_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_subst_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_subst_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_subst_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_subst_scalar_common_4[1][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "benchmarking.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "int.mh"
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
#include "int8.mh"
#include "io.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"
#include "io.environment.mh"
#include "io.error_util.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"


MR_Word MR_CALL 
mercury__term_subst__var_list_to_term_list_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Vs_3)
{
  MR_Word Ts_4;

  mercury__term_subst__var_list_to_term_list_2_p_0(TypeInfo_for_T_5, Vs_3, &Ts_4);
  return Ts_4;
}

void MR_CALL 
mercury__term_subst__var_list_to_term_list_2_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Vars_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Var_6;
    MR_Word * AddrTerms_11;

    {
      Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_6, 0) = ((MR_Box) (Var_3));
      MR_hl_field(1, Var_6, 1) = ((MR_Box) (&mercury__term_subst_scalar_common_4[0]));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_6));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrTerms_11 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__2_2, 1)));
    mercury__term_subst__LCMC__pred__var_list_to_term_list__1_2_p_0(TypeInfo_for_T_8, Vars_4, AddrTerms_11);
  }
}

void MR_CALL 
mercury__term_subst__LCMC__pred__var_list_to_term_list__1_2_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__2_12 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Vars_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_6;
      MR_Word * AddrTerms_11;
      MR_Word HeadVar__2_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word * next_value_of_AddrOfHeadVar__2_12;

      {
        Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_6, 0) = ((MR_Box) (Var_3));
        MR_hl_field(1, Var_6, 1) = ((MR_Box) (&mercury__term_subst_scalar_common_4[0]));
      }
      {
        HeadVar__2_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__2_13, 0) = ((MR_Box) (Var_6));
        MR_hl_field(1, HeadVar__2_13, 1) = NULL;
      }
      AddrTerms_11 = (MR_Word *) (&(MR_hl_field(1, HeadVar__2_13, 1)));
      *AddrOfHeadVar__2_12 = HeadVar__2_13;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vars_4;
      next_value_of_AddrOfHeadVar__2_12 = AddrTerms_11;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      AddrOfHeadVar__2_12 = next_value_of_AddrOfHeadVar__2_12;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__term_subst__term_list_to_var_list_1_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word Terms_3)
{
  MR_bool succeeded;
  MR_Word Vars_4;
  MR_Word VarsPrime_5;

  succeeded = mercury__term_subst__term_list_to_var_list_2_p_0(TypeInfo_for_T_8, Terms_3, &VarsPrime_5);
  if (succeeded)
    Vars_4 = VarsPrime_5;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140term_subst.term_list_to_var_list\'/1", (MR_String) "not all vars");
  return Vars_4;
}

MR_bool MR_CALL 
mercury__term_subst__term_list_to_var_list_2_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Var_3;
    MR_Word Terms_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word * AddrVars_9;

    succeeded = ((MR_tag((MR_Word) Var_7)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_3 = ((MR_Word) ((MR_hl_field(1, Var_7, 0))));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_3));
        MR_hl_field(1, base, 1) = NULL;
      }
      AddrVars_9 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__2_2, 1)));
      succeeded = mercury__term_subst__LCMC__pred__term_list_to_var_list__1_2_p_0(TypeInfo_for_T_8, Terms_5, AddrVars_9);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__term_subst__LCMC__pred__term_list_to_var_list__1_2_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__2_10 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_3;
      MR_Word Terms_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word * AddrVars_9;
      MR_Word HeadVar__2_11;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word * next_value_of_AddrOfHeadVar__2_10;

      succeeded = ((MR_tag((MR_Word) Var_7)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_3 = ((MR_Word) ((MR_hl_field(1, Var_7, 0))));
        {
          HeadVar__2_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__2_11, 0) = ((MR_Box) (Var_3));
          MR_hl_field(1, HeadVar__2_11, 1) = NULL;
        }
        AddrVars_9 = (MR_Word *) (&(MR_hl_field(1, HeadVar__2_11, 1)));
        *AddrOfHeadVar__2_10 = HeadVar__2_11;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Terms_5;
        next_value_of_AddrOfHeadVar__2_10 = AddrVars_9;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        AddrOfHeadVar__2_10 = next_value_of_AddrOfHeadVar__2_10;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__term_subst__apply_rec_substitution_in_terms_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Term0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Terms0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Term_8;
    MR_Word * AddrTerms_11;

    mercury__term_subst__apply_rec_substitution_in_term_3_p_0(TypeInfo_for_T_10, HeadVar__1_1, Term0_6, &Term_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Term_8));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrTerms_11 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, 1)));
    mercury__term_subst__LCMC__pred__apply_rec_substitution_in_terms__1_3_p_0(TypeInfo_for_T_10, HeadVar__1_1, Terms0_7, AddrTerms_11);
  }
}

void MR_CALL 
mercury__term_subst__LCMC__pred__apply_rec_substitution_in_terms__1_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_12 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Term0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Terms0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Term_8;
      MR_Word * AddrTerms_11;
      MR_Word HeadVar__3_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_12;

      mercury__term_subst__apply_rec_substitution_in_term_3_p_0(TypeInfo_for_T_10, HeadVar__1_1, Term0_6, &Term_8);
      {
        HeadVar__3_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_13, 0) = ((MR_Box) (Term_8));
        MR_hl_field(1, HeadVar__3_13, 1) = NULL;
      }
      AddrTerms_11 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_13, 1)));
      *AddrOfHeadVar__3_12 = HeadVar__3_13;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Terms0_7;
      next_value_of_AddrOfHeadVar__3_12 = AddrTerms_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_12 = next_value_of_AddrOfHeadVar__3_12;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__term_subst__apply_rec_substitution_in_term_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word Subst_4,
  MR_Word Term0_5,
  MR_Word * Term_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Term0_5)) == (MR_Integer) 0))
    {
      MR_Word Name_10 = ((MR_Word) ((MR_hl_field(0, Term0_5, 0))));
      MR_Word ArgTerms0_11 = ((MR_Word) ((MR_hl_field(0, Term0_5, 1))));
      MR_Word Context_12 = ((MR_Word) ((MR_hl_field(0, Term0_5, 2))));
      MR_Word * AddrArgTerms_20;

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *Term_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Name_10));
        MR_hl_field(0, base, 1) = NULL;
        MR_hl_field(0, base, 2) = ((MR_Box) (Context_12));
      }
      AddrArgTerms_20 = (MR_Word *) (&(MR_hl_field(0, *Term_6, 1)));
      mercury__term_subst__LCMC__pred__apply_rec_substitution_in_terms__1_3_p_0(TypeInfo_for_T_14, Subst_4, ArgTerms0_11, AddrArgTerms_20);
    }
    else
    {
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, Term0_5, 0))));
      MR_Word ReplacementTerm_9;
      MR_Word TypeInfo_16_16;
      MR_Word TypeInfo_18_18;
      MR_Box conv0_ReplacementTerm_9;

      {
        TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_16_16, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_for_T_14));
      }
      {
        TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
        MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_14));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_14, TypeInfo_16_16, TypeInfo_18_18, (MR_Word) (Subst_4), Var_7, &conv0_ReplacementTerm_9);
      if (succeeded)
      {
        ReplacementTerm_9 = ((MR_Word) (conv0_ReplacementTerm_9));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word next_value_of_Term0_5 = ReplacementTerm_9;

        // direct tailcall eliminated
        ;
        Term0_5 = next_value_of_Term0_5;
        continue;
      }
      else
        *Term_6 = Term0_5;
    }
    break;
  }
}

void MR_CALL 
mercury__term_subst__substitute_corresponding_in_terms_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Vars_5,
  MR_Word ReplacementTerms_6,
  MR_Word Terms0_7,
  MR_Word * Terms_8)
{
  MR_Word Subst_10;

  mercury__term_subst__build_subst_4_p_0(TypeInfo_for_T_11, Vars_5, ReplacementTerms_6, (MR_Word) ((MR_Unsigned) 0U), &Subst_10);
  mercury__term_subst__apply_substitution_in_terms_3_p_0(TypeInfo_for_T_11, Subst_10, Terms0_7, Terms_8);
}

void MR_CALL 
mercury__term_subst__apply_substitution_in_terms_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Term0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Terms0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Term_8;
    MR_Word * AddrTerms_11;

    mercury__term_subst__apply_substitution_in_term_3_p_0(TypeInfo_for_T_10, HeadVar__1_1, Term0_6, &Term_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Term_8));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrTerms_11 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, 1)));
    mercury__term_subst__LCMC__pred__apply_substitution_in_terms__1_3_p_0(TypeInfo_for_T_10, HeadVar__1_1, Terms0_7, AddrTerms_11);
  }
}

void MR_CALL 
mercury__term_subst__substitute_corresponding_in_term_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Vars_5,
  MR_Word ReplacementTerms_6,
  MR_Word Term0_7,
  MR_Word * Term_8)
{
  MR_Word Subst_10;

  mercury__term_subst__build_subst_4_p_0(TypeInfo_for_T_11, Vars_5, ReplacementTerms_6, (MR_Word) ((MR_Unsigned) 0U), &Subst_10);
  mercury__term_subst__apply_substitution_in_term_3_p_0(TypeInfo_for_T_11, Subst_10, Term0_7, Term_8);
}

void MR_CALL 
mercury__term_subst__build_subst_4_p_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Subst_0_3,
  MR_Word * STATE_VARIABLE_Subst_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Subst_4 = STATE_VARIABLE_Subst_0_3;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140term_subst.build_subst\'/4", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140term_subst.build_subst\'/4", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word TypeInfo_32_32;
        MR_Word TypeInfo_34_34;
        MR_Word Term_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
        MR_Word Terms_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
        MR_Word STATE_VARIABLE_Subst_1_29;
        MR_Word conv0_STATE_VARIABLE_Subst_1_29;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_Subst_0_3;

        {
          TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_32_32, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(0, TypeInfo_32_32, 1) = ((MR_Box) (TypeInfo_for_T_30));
        }
        {
          TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_34_34, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
          MR_hl_field(0, TypeInfo_34_34, 1) = ((MR_Box) (TypeInfo_for_T_30));
        }
        mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_30, TypeInfo_32_32, TypeInfo_34_34, Var_36, ((MR_Box) (Term_24)), (MR_Word) (STATE_VARIABLE_Subst_0_3), &conv0_STATE_VARIABLE_Subst_1_29);
        STATE_VARIABLE_Subst_1_29 = (MR_Word) (conv0_STATE_VARIABLE_Subst_1_29);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_35;
        next_value_of_HeadVar__2_2 = Terms_25;
        next_value_of_STATE_VARIABLE_Subst_0_3 = STATE_VARIABLE_Subst_1_29;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Subst_0_3 = next_value_of_STATE_VARIABLE_Subst_0_3;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__term_subst__LCMC__pred__apply_substitution_in_terms__1_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_12 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Term0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Terms0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Term_8;
      MR_Word * AddrTerms_11;
      MR_Word HeadVar__3_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_12;

      mercury__term_subst__apply_substitution_in_term_3_p_0(TypeInfo_for_T_10, HeadVar__1_1, Term0_6, &Term_8);
      {
        HeadVar__3_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_13, 0) = ((MR_Box) (Term_8));
        MR_hl_field(1, HeadVar__3_13, 1) = NULL;
      }
      AddrTerms_11 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_13, 1)));
      *AddrOfHeadVar__3_12 = HeadVar__3_13;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Terms0_7;
      next_value_of_AddrOfHeadVar__3_12 = AddrTerms_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_12 = next_value_of_AddrOfHeadVar__3_12;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__term_subst__apply_substitution_in_term_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word Subst_4,
  MR_Word Term0_5,
  MR_Word * Term_6)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Term0_5)) == (MR_Integer) 0))
  {
    MR_Word Name_10 = ((MR_Word) ((MR_hl_field(0, Term0_5, 0))));
    MR_Word ArgTerms0_11 = ((MR_Word) ((MR_hl_field(0, Term0_5, 1))));
    MR_Word Context_12 = ((MR_Word) ((MR_hl_field(0, Term0_5, 2))));
    MR_Word * AddrArgTerms_20;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Term_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Name_10));
      MR_hl_field(0, base, 1) = NULL;
      MR_hl_field(0, base, 2) = ((MR_Box) (Context_12));
    }
    AddrArgTerms_20 = (MR_Word *) (&(MR_hl_field(0, *Term_6, 1)));
    mercury__term_subst__LCMC__pred__apply_substitution_in_terms__1_3_p_0(TypeInfo_for_T_14, Subst_4, ArgTerms0_11, AddrArgTerms_20);
  }
  else
  {
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, Term0_5, 0))));
    MR_Word ReplacementTerm_9;
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_18_18;
    MR_Box conv0_ReplacementTerm_9;

    {
      TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_16_16, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_for_T_14));
    }
    {
      TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
      MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_14));
    }
    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_14, TypeInfo_16_16, TypeInfo_18_18, (MR_Word) (Subst_4), Var_7, &conv0_ReplacementTerm_9);
    if (succeeded)
    {
      ReplacementTerm_9 = ((MR_Word) (conv0_ReplacementTerm_9));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *Term_6 = ReplacementTerm_9;
    else
      *Term_6 = Term0_5;
  }
}

void MR_CALL 
mercury__term_subst__substitute_var_in_terms_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Term0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Terms0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Term_11;
    MR_Word * AddrTerms_14;

    mercury__term_subst__substitute_var_in_term_4_p_0(TypeInfo_for_T_13, HeadVar__1_1, HeadVar__2_2, Term0_9, &Term_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Term_11));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrTerms_14 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, 1)));
    mercury__term_subst__LCMC__pred__substitute_var_in_terms__1_4_p_0(TypeInfo_for_T_13, HeadVar__1_1, HeadVar__2_2, Terms0_10, AddrTerms_14);
  }
}

void MR_CALL 
mercury__term_subst__LCMC__pred__substitute_var_in_terms__1_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_15)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__4_15 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Term0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Terms0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Term_11;
      MR_Word * AddrTerms_14;
      MR_Word HeadVar__4_16;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_15;

      mercury__term_subst__substitute_var_in_term_4_p_0(TypeInfo_for_T_13, HeadVar__1_1, HeadVar__2_2, Term0_9, &Term_11);
      {
        HeadVar__4_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_16, 0) = ((MR_Box) (Term_11));
        MR_hl_field(1, HeadVar__4_16, 1) = NULL;
      }
      AddrTerms_14 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_16, 1)));
      *AddrOfHeadVar__4_15 = HeadVar__4_16;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Terms0_10;
      next_value_of_AddrOfHeadVar__4_15 = AddrTerms_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_15 = next_value_of_AddrOfHeadVar__4_15;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__term_subst__substitute_var_in_term_4_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word Var_5,
  MR_Word ReplacementTerm_6,
  MR_Word Term0_7,
  MR_Word * Term_8)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Term0_7)) == (MR_Integer) 0))
  {
    MR_Word Name_11 = ((MR_Word) ((MR_hl_field(0, Term0_7, 0))));
    MR_Word ArgTerms0_12 = ((MR_Word) ((MR_hl_field(0, Term0_7, 1))));
    MR_Word Context_13 = ((MR_Word) ((MR_hl_field(0, Term0_7, 2))));
    MR_Word * AddrArgTerms_20;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Term_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Name_11));
      MR_hl_field(0, base, 1) = NULL;
      MR_hl_field(0, base, 2) = ((MR_Box) (Context_13));
    }
    AddrArgTerms_20 = (MR_Word *) (&(MR_hl_field(0, *Term_8, 1)));
    mercury__term_subst__LCMC__pred__substitute_var_in_terms__1_4_p_0(TypeInfo_for_T_15, Var_5, ReplacementTerm_6, ArgTerms0_12, AddrArgTerms_20);
  }
  else
  {
    MR_Word Var0_9 = ((MR_Word) ((MR_hl_field(1, Term0_7, 0))));
    MR_Integer Var_18 = (MR_Integer) (Var0_9);
    MR_Integer Var_19 = (MR_Integer) (Var_5);

    succeeded = (Var_18 == Var_19);
    if (succeeded)
      *Term_8 = ReplacementTerm_6;
    else
      *Term_8 = Term0_7;
  }
}

void MR_CALL 
mercury__term_subst__apply_renaming_in_term_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word Renaming_4,
  MR_Word Term0_5,
  MR_Word * Term_6)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Term0_5)) == (MR_Integer) 0))
  {
    MR_Word Name_10 = ((MR_Word) ((MR_hl_field(0, Term0_5, 0))));
    MR_Word ArgTerms0_11 = ((MR_Word) ((MR_hl_field(0, Term0_5, 1))));
    MR_Word ArgTerms_12;
    MR_Word Context_13 = ((MR_Word) ((MR_hl_field(0, Term0_5, 2))));

    mercury__term_subst__apply_renaming_in_terms_3_p_0(TypeInfo_for_T_14, Renaming_4, ArgTerms0_11, &ArgTerms_12);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Term_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Name_10));
      MR_hl_field(0, base, 1) = ((MR_Box) (ArgTerms_12));
      MR_hl_field(0, base, 2) = ((MR_Box) (Context_13));
    }
  }
  else
  {
    MR_Word Var0_7 = ((MR_Word) ((MR_hl_field(1, Term0_5, 0))));
    MR_Word Context_8 = ((MR_Word) ((MR_hl_field(1, Term0_5, 1))));
    MR_Word Var_9;
    MR_Word NewVar_15;
    MR_Word TypeInfo_10_17;
    MR_Box conv0_NewVar_15;

    {
      TypeInfo_10_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_10_17, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_10_17, 1) = ((MR_Box) (TypeInfo_for_T_14));
    }
    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_14, TypeInfo_10_17, TypeInfo_10_17, (MR_Word) (Renaming_4), Var0_7, &conv0_NewVar_15);
    if (succeeded)
    {
      NewVar_15 = ((MR_Word) (conv0_NewVar_15));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      Var_9 = NewVar_15;
    else
      Var_9 = Var0_7;
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Term_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(1, base, 1) = ((MR_Box) (Context_8));
    }
  }
}

void MR_CALL 
mercury__term_subst__LCMC__pred__apply_renaming_in_terms__1_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word Renaming_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_23 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Term0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Terms0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Term_8;
      MR_Word * AddrTerms_22;
      MR_Word HeadVar__3_24;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_23;

      if (((MR_tag((MR_Word) Term0_6)) == (MR_Integer) 0))
      {
        MR_Word Name_14 = ((MR_Word) ((MR_hl_field(0, Term0_6, 0))));
        MR_Word ArgTerms0_15 = ((MR_Word) ((MR_hl_field(0, Term0_6, 1))));
        MR_Word ArgTerms_16;
        MR_Word Context_17 = ((MR_Word) ((MR_hl_field(0, Term0_6, 2))));

        mercury__term_subst__apply_renaming_in_terms_3_p_0(TypeInfo_for_T_10, Renaming_1, ArgTerms0_15, &ArgTerms_16);
        {
          Term_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Term_8, 0) = ((MR_Box) (Name_14));
          MR_hl_field(0, Term_8, 1) = ((MR_Box) (ArgTerms_16));
          MR_hl_field(0, Term_8, 2) = ((MR_Box) (Context_17));
        }
      }
      else
      {
        MR_Word Var0_11 = ((MR_Word) ((MR_hl_field(1, Term0_6, 0))));
        MR_Word Context_12 = ((MR_Word) ((MR_hl_field(1, Term0_6, 1))));
        MR_Word Var_13;
        MR_Word NewVar_18;
        MR_Word TypeInfo_10_20;
        MR_Box conv0_NewVar_18;

        {
          TypeInfo_10_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_10_20, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(0, TypeInfo_10_20, 1) = ((MR_Box) (TypeInfo_for_T_10));
        }
        succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_10, TypeInfo_10_20, TypeInfo_10_20, (MR_Word) (Renaming_1), Var0_11, &conv0_NewVar_18);
        if (succeeded)
        {
          NewVar_18 = ((MR_Word) (conv0_NewVar_18));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          Var_13 = NewVar_18;
        else
          Var_13 = Var0_11;
        {
          Term_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Term_8, 0) = ((MR_Box) (Var_13));
          MR_hl_field(1, Term_8, 1) = ((MR_Box) (Context_12));
        }
      }
      {
        HeadVar__3_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_24, 0) = ((MR_Box) (Term_8));
        MR_hl_field(1, HeadVar__3_24, 1) = NULL;
      }
      AddrTerms_22 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_24, 1)));
      *AddrOfHeadVar__3_23 = HeadVar__3_24;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Terms0_7;
      next_value_of_AddrOfHeadVar__3_23 = AddrTerms_22;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_23 = next_value_of_AddrOfHeadVar__3_23;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__term_subst__apply_renaming_in_terms_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word Renaming_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Term0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Terms0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Term_8;
    MR_Word * AddrTerms_22;

    if (((MR_tag((MR_Word) Term0_6)) == (MR_Integer) 0))
    {
      MR_Word Name_14 = ((MR_Word) ((MR_hl_field(0, Term0_6, 0))));
      MR_Word ArgTerms0_15 = ((MR_Word) ((MR_hl_field(0, Term0_6, 1))));
      MR_Word ArgTerms_16;
      MR_Word Context_17 = ((MR_Word) ((MR_hl_field(0, Term0_6, 2))));

      mercury__term_subst__apply_renaming_in_terms_3_p_0(TypeInfo_for_T_10, Renaming_1, ArgTerms0_15, &ArgTerms_16);
      {
        Term_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Term_8, 0) = ((MR_Box) (Name_14));
        MR_hl_field(0, Term_8, 1) = ((MR_Box) (ArgTerms_16));
        MR_hl_field(0, Term_8, 2) = ((MR_Box) (Context_17));
      }
    }
    else
    {
      MR_Word Var0_11 = ((MR_Word) ((MR_hl_field(1, Term0_6, 0))));
      MR_Word Context_12 = ((MR_Word) ((MR_hl_field(1, Term0_6, 1))));
      MR_Word Var_13;
      MR_Word NewVar_18;
      MR_Word TypeInfo_10_20;
      MR_Box conv0_NewVar_18;

      {
        TypeInfo_10_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_10_20, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_10_20, 1) = ((MR_Box) (TypeInfo_for_T_10));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_10, TypeInfo_10_20, TypeInfo_10_20, (MR_Word) (Renaming_1), Var0_11, &conv0_NewVar_18);
      if (succeeded)
      {
        NewVar_18 = ((MR_Word) (conv0_NewVar_18));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        Var_13 = NewVar_18;
      else
        Var_13 = Var0_11;
      {
        Term_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Term_8, 0) = ((MR_Box) (Var_13));
        MR_hl_field(1, Term_8, 1) = ((MR_Box) (Context_12));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Term_8));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrTerms_22 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, 1)));
    mercury__term_subst__LCMC__pred__apply_renaming_in_terms__1_3_p_0(TypeInfo_for_T_10, Renaming_1, Terms0_7, AddrTerms_22);
  }
}

void MR_CALL 
mercury__term_subst__apply_renaming_in_vars_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Vars0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Var_8;
    MR_Word NewVar_11;
    MR_Word TypeInfo_10_13;
    MR_Box conv0_NewVar_11;
    MR_Word * AddrVars_15;

    {
      TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_10_13, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_10_13, 1) = ((MR_Box) (TypeInfo_for_T_10));
    }
    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_10, TypeInfo_10_13, TypeInfo_10_13, (MR_Word) (HeadVar__1_1), Var0_6, &conv0_NewVar_11);
    if (succeeded)
    {
      NewVar_11 = ((MR_Word) (conv0_NewVar_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      Var_8 = NewVar_11;
    else
      Var_8 = Var0_6;
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrVars_15 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, 1)));
    mercury__term_subst__LCMC__pred__apply_renaming_in_vars__1_3_p_0(TypeInfo_for_T_10, HeadVar__1_1, Vars0_7, AddrVars_15);
  }
}

void MR_CALL 
mercury__term_subst__LCMC__pred__apply_renaming_in_vars__1_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_16 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Vars0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Var_8;
      MR_Word NewVar_11;
      MR_Word TypeInfo_10_13;
      MR_Box conv0_NewVar_11;
      MR_Word * AddrVars_15;
      MR_Word HeadVar__3_17;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_16;

      {
        TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_10_13, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_10_13, 1) = ((MR_Box) (TypeInfo_for_T_10));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_10, TypeInfo_10_13, TypeInfo_10_13, (MR_Word) (HeadVar__1_1), Var0_6, &conv0_NewVar_11);
      if (succeeded)
      {
        NewVar_11 = ((MR_Word) (conv0_NewVar_11));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        Var_8 = NewVar_11;
      else
        Var_8 = Var0_6;
      {
        HeadVar__3_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_17, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_17, 1) = NULL;
      }
      AddrVars_15 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_17, 1)));
      *AddrOfHeadVar__3_16 = HeadVar__3_17;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Vars0_7;
      next_value_of_AddrOfHeadVar__3_16 = AddrVars_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_16 = next_value_of_AddrOfHeadVar__3_16;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__term_subst__apply_renaming_in_var_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word Renaming_4,
  MR_Word Var0_5,
  MR_Word * Var_6)
{
  MR_bool succeeded;
  MR_Word NewVar_7;
  MR_Word TypeInfo_10_10;
  MR_Box conv0_NewVar_7;

  {
    TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_10_10, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_T_8));
  }
  succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_8, TypeInfo_10_10, TypeInfo_10_10, (MR_Word) (Renaming_4), Var0_5, &conv0_NewVar_7);
  if (succeeded)
  {
    NewVar_7 = ((MR_Word) (conv0_NewVar_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    *Var_6 = NewVar_7;
  else
    *Var_6 = Var0_5;
}

void MR_CALL 
mercury__term_subst__rename_var_in_terms_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Term0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Terms0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Term_11;
    MR_Word * AddrTerms_14;

    mercury__term_subst__rename_var_in_term_4_p_0(TypeInfo_for_T_13, HeadVar__1_1, HeadVar__2_2, Term0_9, &Term_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Term_11));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrTerms_14 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, 1)));
    mercury__term_subst__LCMC__pred__rename_var_in_terms__1_4_p_0(TypeInfo_for_T_13, HeadVar__1_1, HeadVar__2_2, Terms0_10, AddrTerms_14);
  }
}

void MR_CALL 
mercury__term_subst__LCMC__pred__rename_var_in_terms__1_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_15)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__4_15 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Term0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Terms0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Term_11;
      MR_Word * AddrTerms_14;
      MR_Word HeadVar__4_16;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_15;

      mercury__term_subst__rename_var_in_term_4_p_0(TypeInfo_for_T_13, HeadVar__1_1, HeadVar__2_2, Term0_9, &Term_11);
      {
        HeadVar__4_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_16, 0) = ((MR_Box) (Term_11));
        MR_hl_field(1, HeadVar__4_16, 1) = NULL;
      }
      AddrTerms_14 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_16, 1)));
      *AddrOfHeadVar__4_15 = HeadVar__4_16;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Terms0_10;
      next_value_of_AddrOfHeadVar__4_15 = AddrTerms_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_15 = next_value_of_AddrOfHeadVar__4_15;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__term_subst__rename_var_in_term_4_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word Var_5,
  MR_Word ReplacementVar_6,
  MR_Word Term0_7,
  MR_Word * Term_8)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Term0_7)) == (MR_Integer) 0))
  {
    MR_Word Name_11 = ((MR_Word) ((MR_hl_field(0, Term0_7, 0))));
    MR_Word ArgTerms0_12 = ((MR_Word) ((MR_hl_field(0, Term0_7, 1))));
    MR_Word Context_14 = ((MR_Word) ((MR_hl_field(0, Term0_7, 2))));
    MR_Word * AddrArgTerms_20;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Term_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Name_11));
      MR_hl_field(0, base, 1) = NULL;
      MR_hl_field(0, base, 2) = ((MR_Box) (Context_14));
    }
    AddrArgTerms_20 = (MR_Word *) (&(MR_hl_field(0, *Term_8, 1)));
    mercury__term_subst__LCMC__pred__rename_var_in_terms__1_4_p_0(TypeInfo_for_T_15, Var_5, ReplacementVar_6, ArgTerms0_12, AddrArgTerms_20);
  }
  else
  {
    MR_Word Var0_9 = ((MR_Word) ((MR_hl_field(1, Term0_7, 0))));
    MR_Word Context_10 = ((MR_Word) ((MR_hl_field(1, Term0_7, 1))));
    MR_Integer Var_18 = (MR_Integer) (Var0_9);
    MR_Integer Var_19 = (MR_Integer) (Var_5);

    succeeded = (Var_18 == Var_19);
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Term_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ReplacementVar_6));
        MR_hl_field(1, base, 1) = ((MR_Box) (Context_10));
      }
    else
      *Term_8 = Term0_7;
  }
}

MR_bool MR_CALL 
mercury__term_subst__term_is_ground_in_bindings_2_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Term_3,
  MR_Word Bindings_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0))
    {
      MR_Word ArgTerms_9 = ((MR_Word) ((MR_hl_field(0, Term_3, 1))));

      succeeded = mercury__term_subst__terms_are_ground_in_bindings_2_p_0(TypeInfo_for_T_11, ArgTerms_9, Bindings_4);
    }
    else
    {
      MR_Word TypeInfo_13_13;
      MR_Word TypeInfo_15_15;
      MR_Word Var_5 = ((MR_Word) ((MR_hl_field(1, Term_3, 0))));
      MR_Word BoundTerm_7;
      MR_Box conv0_BoundTerm_7;
      MR_Word next_value_of_Term_3;

      {
        TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_13_13, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_for_T_11));
      }
      {
        TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_15_15, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
        MR_hl_field(0, TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_11));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_11, TypeInfo_13_13, TypeInfo_15_15, (MR_Word) (Bindings_4), Var_5, &conv0_BoundTerm_7);
      if (succeeded)
      {
        BoundTerm_7 = ((MR_Word) (conv0_BoundTerm_7));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_Term_3 = BoundTerm_7;
        Term_3 = next_value_of_Term_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__term_subst__terms_are_ground_in_bindings_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Term_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Terms_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = mercury__term_subst__term_is_ground_in_bindings_2_p_0(TypeInfo_for_T_7, Term_4, HeadVar__2_2);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Terms_5;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__term_subst__term_is_ground_1_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0);
  MR_Word ArgTerms_3;

  if (succeeded)
  {
    ArgTerms_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    succeeded = mercury__term_subst__terms_are_ground_1_p_0(TypeInfo_for_T_5, ArgTerms_3);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__term_subst__terms_are_ground_1_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Term_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Terms_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word ArgTerms_6;
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = ((MR_tag((MR_Word) Term_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgTerms_6 = ((MR_Word) ((MR_hl_field(0, Term_2, 1))));
        succeeded = mercury__term_subst__terms_are_ground_1_p_0(TypeInfo_for_T_4, ArgTerms_6);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Terms_3;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__term_subst__var_occurs_in_subst_term_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Var_4,
  MR_Word Subst_5,
  MR_Word Term_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Term_6)) == (MR_Integer) 0))
    {
      MR_Word ArgTerms_11 = ((MR_Word) ((MR_hl_field(0, Term_6, 1))));

      succeeded = mercury__term_subst__var_occurs_in_subst_terms_3_p_0(TypeInfo_for_T_13, Var_4, Subst_5, ArgTerms_11);
    }
    else
    {
      MR_Word X_7 = ((MR_Word) ((MR_hl_field(1, Term_6, 0))));
      MR_Integer Var_20 = (MR_Integer) (X_7);
      MR_Integer Var_21 = (MR_Integer) (Var_4);

      succeeded = (Var_20 == Var_21);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word TypeInfo_15_15;
        MR_Word TypeInfo_17_17;
        MR_Word TermBoundToX_9;
        MR_Box conv0_TermBoundToX_9;
        MR_Word next_value_of_Term_6;

        {
          TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_15_15, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(0, TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_13));
        }
        {
          TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_17_17, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
          MR_hl_field(0, TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_T_13));
        }
        succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_13, TypeInfo_15_15, TypeInfo_17_17, (MR_Word) (Subst_5), X_7, &conv0_TermBoundToX_9);
        if (succeeded)
        {
          TermBoundToX_9 = ((MR_Word) (conv0_TermBoundToX_9));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_Term_6 = TermBoundToX_9;
          Term_6 = next_value_of_Term_6;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__term_subst__var_occurs_in_subst_terms_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word Var_4,
  MR_Word Subst_5,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Term_6;
    MR_Word Terms_7;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Term_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      Terms_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      succeeded = mercury__term_subst__var_occurs_in_subst_term_3_p_0(TypeInfo_for_T_8, Var_4, Subst_5, Term_6);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word next_value_of_HeadVar__3_3 = Terms_7;

        // direct tailcall eliminated
        ;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void mercury__term_subst__init(void)
{
}

void mercury__term_subst__init_type_tables(void)
{
}

void mercury__term_subst__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__term_subst__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module term_subst.
