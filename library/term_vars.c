/*
** Automatically generated from `term_vars.m'
** by the Mercury compiler,
** version rotd-2022-11-01
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


// :- module term_vars.
// :- implementation.

/*
INIT mercury__term_vars__init
ENDINIT
*/

#include "term_vars.mih"


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
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
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
#include "std_util.mih"
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
#include "term_subst.mih"
#include "term_unify.mih"
#include "time.mih"
#include "tree234.mih"
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
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"





static /* final */ const MR_Box mercury__term_vars_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__term_vars_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__term_vars_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__term_vars_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_vars_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_vars_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_vars_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_vars_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_vars_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"



void MR_CALL 
mercury__term_vars__term_contains_var_2_p_1(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Word * Var_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word ArgTerms_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

    mercury__term_vars__terms_contain_var_2_p_1(TypeInfo_for_T_9, ArgTerms_6, Var_2, cont, cont_env_ptr);
  }
  else
  {
    *Var_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    cont(cont_env_ptr);
  }
}

void MR_CALL 
mercury__term_vars__terms_contain_var_2_p_1(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Word * Var_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Var_10;
    MR_Word Var_11;

    // setup for model_non tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      if (((MR_tag((MR_Word) Var_11)) == (MR_Integer) 0))
      {
        MR_Word ArgTerms_15 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 1))));

        mercury__term_vars__terms_contain_var_2_p_1(TypeInfo_for_T_9, ArgTerms_15, Var_2, cont, cont_env_ptr);
      }
      else
      {
        *Var_2 = ((MR_Word) ((MR_hl_field(1, Var_11, (MR_Integer) 0))));
        cont(cont_env_ptr);
      }
      {
        MR_Word next_value_of_HeadVar__1_1 = Var_10;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__term_vars__term_contains_var_2_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Word Var_2)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word ArgTerms_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

    succeeded = mercury__term_vars__terms_contain_var_2_p_0(TypeInfo_for_T_9, ArgTerms_6, Var_2);
  }
  else
  {
    MR_Word Var_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer Var_12 = (MR_Integer) (Var_2);
    MR_Integer Var_13 = (MR_Integer) (Var_3);

    succeeded = (Var_12 == Var_13);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__term_vars__terms_contain_var_2_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Word Var_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Var_10;
    MR_Word Var_11;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      succeeded = mercury__term_vars__term_contains_var_2_p_0(TypeInfo_for_T_9, Var_11, Var_2);
      if (!(succeeded))
      {
        MR_Word next_value_of_HeadVar__1_1 = Var_10;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__term_vars__vars_in_terms_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word Terms_3,
  MR_Word * Vars_4)
{
  mercury__term_vars__vars_in_terms_acc_3_p_0(TypeInfo_for_T_6, Terms_3, (MR_Word) ((MR_Unsigned) 0U), Vars_4);
}

MR_Word MR_CALL 
mercury__term_vars__vars_in_terms_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Terms_3)
{
  MR_Word Vars_4;

  mercury__term_vars__vars_in_terms_acc_3_p_0(TypeInfo_for_T_5, Terms_3, (MR_Word) ((MR_Unsigned) 0U), &Vars_4);
  return Vars_4;
}

void MR_CALL 
mercury__term_vars__vars_in_term_acc_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Term_4,
  MR_Word STATE_VARIABLE_Vars_0_11,
  MR_Word * STATE_VARIABLE_Vars_12)
{
  if (((MR_tag((MR_Word) Term_4)) == (MR_Integer) 0))
  {
    MR_Word ArgTerms_9 = ((MR_Word) ((MR_hl_field(0, Term_4, (MR_Integer) 1))));

    mercury__term_vars__vars_in_terms_acc_3_p_0(TypeInfo_for_T_13, ArgTerms_9, STATE_VARIABLE_Vars_0_11, STATE_VARIABLE_Vars_12);
  }
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, Term_4, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Vars_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_6));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Vars_0_11));
    }
  }
}

void MR_CALL 
mercury__term_vars__vars_in_term_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word Term_3,
  MR_Word * Vars_4)
{
  if (((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0))
  {
    MR_Word ArgTerms_10 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));

    mercury__term_vars__vars_in_terms_acc_3_p_0(TypeInfo_for_T_6, ArgTerms_10, (MR_Word) ((MR_Unsigned) 0U), Vars_4);
  }
  else
  {
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, Term_3, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Vars_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_7));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

MR_Word MR_CALL 
mercury__term_vars__vars_in_term_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Term_3)
{
  MR_Word Vars_4;

  if (((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0))
  {
    MR_Word ArgTerms_10 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));

    mercury__term_vars__vars_in_terms_acc_3_p_0(TypeInfo_for_T_5, ArgTerms_10, (MR_Word) ((MR_Unsigned) 0U), &Vars_4);
  }
  else
  {
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, Term_3, (MR_Integer) 0))));

    {
      Vars_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Vars_4, 0) = ((MR_Box) (Var_7));
      MR_hl_field(1, Vars_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  return Vars_4;
}

void MR_CALL 
mercury__term_vars__vars_in_terms_acc_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Vars_0_2,
  MR_Word * STATE_VARIABLE_Vars_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Vars_3 = STATE_VARIABLE_Vars_0_2;
    else
    {
      MR_Word Term_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Terms_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Vars_12_12;

      mercury__term_vars__vars_in_terms_acc_3_p_0(TypeInfo_for_T_13, Terms_8, STATE_VARIABLE_Vars_0_2, &STATE_VARIABLE_Vars_12_12);
      if (((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0))
      {
        MR_Word ArgTerms_17 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 1))));
        MR_Word next_value_of_HeadVar__1_1 = ArgTerms_17;
        MR_Word next_value_of_STATE_VARIABLE_Vars_0_2 = STATE_VARIABLE_Vars_12_12;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_Vars_0_2 = next_value_of_STATE_VARIABLE_Vars_0_2;
        continue;
      }
      else
      {
        MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, Term_7, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Vars_3 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_14));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Vars_12_12));
        }
      }
    }
    break;
  }
}

void mercury__term_vars__init(void)
{
}

void mercury__term_vars__init_type_tables(void)
{
}

void mercury__term_vars__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__term_vars__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module term_vars.
