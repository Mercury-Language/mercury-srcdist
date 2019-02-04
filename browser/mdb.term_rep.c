/*
** Automatically generated from `term_rep.m'
** by the Mercury compiler,
** version 2018-09-19
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


// :- module mdb.term_rep.
// :- implementation.

/*
INIT mercury__mdb__term_rep__init
ENDINIT
*/

#include "mdb.term_rep.mih"


#include "mdb.mih"
#include "mdbcomp.mih"
#include "mdb.browser_info.mih"
#include "mdb.browser_term.mih"
#include "mdb.declarative_analyser.mih"
#include "mdb.declarative_debugger.mih"
#include "mdb.declarative_edt.mih"
#include "mdb.declarative_execution.mih"
#include "mdb.declarative_oracle.mih"
#include "mdb.declarative_tree.mih"
#include "mdb.declarative_user.mih"
#include "mdb.help.mih"
#include "mdb.io_action.mih"
#include "mdb.parse.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "exception.mih"
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
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"




static const MR_PseudoTypeInfo mdb__term_rep__mdb__term_rep__field_types_term_rep_0_0[1];

static const MR_DuFunctorDesc mdb__term_rep__mdb__term_rep__du_functor_desc_term_rep_0_0;

static const MR_DuFunctorDescPtr mdb__term_rep__mdb__term_rep__du_stag_ordered_term_rep_0_0[1];

static const MR_DuPtagLayout mdb__term_rep__mdb__term_rep__du_ptag_ordered_term_rep_0[1];

static const MR_DuFunctorDescPtr mdb__term_rep__mdb__term_rep__du_name_ordered_term_rep_0[1];

static const MR_Integer mdb__term_rep__mdb__term_rep__functor_number_map_term_rep_0[1];

static void MR_CALL 
mdb__term_rep__find_functor_6_p_0(
  MR_Integer Current_7,
  MR_Integer NumFunctors_8,
  MR_Word Type_9,
  MR_String FunctorName_10,
  MR_Integer Arity_11,
  MR_Word * MaybeFunctorNum_12);

static MR_bool MR_CALL 
mdb__term_rep____Unify____term_rep_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__term_rep____Compare____term_rep_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdb__term_rep_scalar_common_1[3][2];




static /* final */ const MR_Box mdb__term_rep_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "field_pos")),
    ((MR_Box) ((MR_String) "find_functor couldn\'t find functor"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "field_pos")),
    ((MR_Box) ((MR_String) "get_functor_with_names couldn\'t find functor"))
  },
};



#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_PseudoTypeInfo mdb__term_rep__mdb__term_rep__field_types_term_rep_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0)
};

static const MR_DuFunctorDesc mdb__term_rep__mdb__term_rep__du_functor_desc_term_rep_0_0 = {
  (MR_String) "term_rep",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__term_rep__mdb__term_rep__field_types_term_rep_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__term_rep__mdb__term_rep__du_stag_ordered_term_rep_0_0[1] = {
  &mdb__term_rep__mdb__term_rep__du_functor_desc_term_rep_0_0
};

static const MR_DuPtagLayout mdb__term_rep__mdb__term_rep__du_ptag_ordered_term_rep_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__term_rep__mdb__term_rep__du_stag_ordered_term_rep_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__term_rep__mdb__term_rep__du_name_ordered_term_rep_0[1] = {
  &mdb__term_rep__mdb__term_rep__du_functor_desc_term_rep_0_0
};

static const MR_Integer mdb__term_rep__mdb__term_rep__functor_number_map_term_rep_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU_USEREQ,
  ((MR_Box) (mdb__term_rep____Unify____term_rep_0_0_10001)),
  ((MR_Box) (mdb__term_rep____Compare____term_rep_0_0_10001)),
  (MR_String) "mdb.term_rep",
  (MR_String) "term_rep",
  {     mdb__term_rep__mdb__term_rep__du_name_ordered_term_rep_0 },
  {     mdb__term_rep__mdb__term_rep__du_ptag_ordered_term_rep_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__term_rep__mdb__term_rep__functor_number_map_term_rep_0
};

void MR_CALL 
mdb__term_rep____Compare____term_rep_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_4 == CastY_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      mercury__builtin__compare_representation_3_p_0((MR_Word) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0), HeadVar__1_1, ((MR_Box) (HeadVar__2_2)), ((MR_Box) (HeadVar__3_3)));
    }
  }
}

MR_bool MR_CALL 
mdb__term_rep____Unify____term_rep_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_3 == CastY_4);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word Result_7;

      mercury__builtin__compare_representation_3_p_0((MR_Word) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0), &Result_7, ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadVar__2_2)));
      succeeded = (Result_7 == (MR_Integer) 0);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mdb__term_rep__field_pos_3_p_0(
  MR_String FieldName_4,
  MR_Word Term_5,
  MR_Integer * Pos_6)
{
  {
    MR_bool succeeded;
    MR_Word MaybePos_7;
    MR_Word TypeInfo_33_33;
    MR_Word Univ_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
    MR_Box Value_9;
    MR_String Functor_10;
    MR_Integer Arity_11;
    MR_Word Type_13;
    MR_Word _Args_12;
    MR_Integer NumFunctors_14;

    Value_9 = mercury__univ__univ_value_1_f_0(&TypeInfo_33_33, Univ_8);
    mercury__deconstruct__deconstruct_5_p_2(TypeInfo_33_33, Value_9, (MR_Integer) 2, &Functor_10, &Arity_11, &_Args_12);
    Type_13 = mercury__type_desc__type_of_1_f_0(TypeInfo_33_33);
    succeeded = mercury__construct__num_functors_1_f_0(Type_13, &NumFunctors_14);
    if (succeeded)
    {
      MR_Word MaybeFunctorNum_15;

      mdb__term_rep__find_functor_6_p_0((MR_Integer) 1, NumFunctors_14, Type_13, Functor_10, Arity_11, &MaybeFunctorNum_15);
      if ((MaybeFunctorNum_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__term_rep_scalar_common_1[1])));
      }
      else
      {
        MR_Integer FunctorNum_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeFunctorNum_15, (MR_Integer) 0))));
        MR_Word ArgNames_20;
        MR_Integer Var_27 = (MR_Integer) ((MR_Unsigned) FunctorNum_16 - (MR_Unsigned) (MR_Integer) 1);
        MR_String _FunctorName_17;
        MR_Integer _Arity_18;
        MR_Word _ArgTypes_19;

        succeeded = mercury__construct__get_functor_with_names_6_p_0(Type_13, Var_27, &_FunctorName_17, &_Arity_18, &_ArgTypes_19, &ArgNames_20);
        if (succeeded)
        {
          MR_Integer Pos0_21;
          MR_Word Var_29;

          {
            Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (FieldName_4));
          }
          succeeded = mercury__list__index1_of_first_occurrence_3_p_0((MR_Word) (&mdb__term_rep_scalar_common_1[0]), ArgNames_20, ((MR_Box) (Var_29)), &Pos0_21);
          if (succeeded)
            {
              MaybePos_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybePos_7, 0) = ((MR_Box) (Pos0_21));
            }
          else
            MaybePos_7 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__term_rep_scalar_common_1[2])));
        }
      }
    }
    else
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__term_rep_scalar_common_1[1])));
    }
    succeeded = ((MR_tag((MR_Word) MaybePos_7)) == (MR_Integer) 1);
    if (succeeded)
      *Pos_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePos_7, (MR_Integer) 0))));
    return succeeded;
  }
}

static void MR_CALL 
mdb__term_rep__find_functor_6_p_0(
  MR_Integer Current_7,
  MR_Integer NumFunctors_8,
  MR_Word Type_9,
  MR_String FunctorName_10,
  MR_Integer Arity_11,
  MR_Word * MaybeFunctorNum_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Current_7 <= NumFunctors_8);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) Current_7 - (MR_Unsigned) (MR_Integer) 1);
      MR_String Var_18;
      MR_Integer Var_19;
      MR_Word Var_13;

      succeeded = mercury__construct__get_functor_5_p_0(Type_9, Var_14, &Var_18, &Var_19, &Var_13);
      if (succeeded)
      {
        succeeded = (strcmp(FunctorName_10, Var_18) == 0);
        if (succeeded)
          succeeded = (Arity_11 == Var_19);
      }
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeFunctorNum_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Current_7));
        }
      else
      {
        MR_Integer Var_16 = (MR_Integer) ((MR_Unsigned) Current_7 + (MR_Unsigned) (MR_Integer) 1);
        MR_Integer next_value_of_Current_7 = Var_16;

        // direct tailcall eliminated
        ;
        Current_7 = next_value_of_Current_7;
        continue;
      }
    }
    else
      *MaybeFunctorNum_12 = (MR_Word) ((MR_Unsigned) 0U);
    break;
  }
}

MR_bool MR_CALL 
mdb__term_rep__deref_path_3_p_0(
  MR_Word Term_4,
  MR_Word Path_5,
  MR_Word * SubTerm_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((Path_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *SubTerm_6 = Term_4;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Integer Head_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Path_5, (MR_Integer) 0))));
      MR_Word Tail_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Path_5, (MR_Integer) 1))));
      MR_Word NextSubTerm_9;
      MR_Word next_value_of_Term_4;
      MR_Word next_value_of_Path_5;

      succeeded = mdb__term_rep__argument_3_p_0(Term_4, Head_7, &NextSubTerm_9);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_Term_4 = NextSubTerm_9;
        next_value_of_Path_5 = Tail_8;
        Term_4 = next_value_of_Term_4;
        Path_5 = next_value_of_Path_5;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mdb__term_rep__argument_3_p_0(
  MR_Word Term_4,
  MR_Integer N_5,
  MR_Word * Arg_6)
{
  {
    MR_bool succeeded;
    MR_Word MaybeArg_7;
    MR_Word TypeInfo_16_16;
    MR_Word Univ_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_4, (MR_Integer) 0))));
    MR_Word MaybeSubUniv_9;
    MR_Box Var_12;
    MR_Integer Var_13;

    Var_12 = mercury__univ__univ_value_1_f_0(&TypeInfo_16_16, Univ_8);
    Var_13 = (MR_Integer) ((MR_Unsigned) N_5 - (MR_Unsigned) (MR_Integer) 1);
    mercury__deconstruct__arg_cc_3_p_0(TypeInfo_16_16, Var_12, Var_13, &MaybeSubUniv_9);
    if ((MaybeSubUniv_9 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeArg_7 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word TypeInfo_17_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubUniv_9, (MR_Integer) 0))));
      MR_Box SubValue_10 = (MR_hl_field(MR_mktag(1), MaybeSubUniv_9, (MR_Integer) 1));
      MR_Word Arg0_11;
      MR_Word Var_15;
      MR_Word Univ_21;
      MR_Box conv0_Univ_21;

      Var_15 = mercury__univ__univ_1_f_0(TypeInfo_17_17, SubValue_10);
      mercury__builtin__cc_multi_equal_2_p_1((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), ((MR_Box) (Var_15)), &conv0_Univ_21);
      Univ_21 = ((MR_Word) (conv0_Univ_21));
      {
        Arg0_11 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Arg0_11, 0) = ((MR_Box) (Univ_21));
      }
      {
        MaybeArg_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeArg_7, 0) = ((MR_Box) (Arg0_11));
      }
    }
    succeeded = ((MR_tag((MR_Word) MaybeArg_7)) == (MR_Integer) 1);
    if (succeeded)
      *Arg_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArg_7, (MR_Integer) 0))));
    return succeeded;
  }
}

void MR_CALL 
mdb__term_rep__rep_to_univ_2_p_0(
  MR_Word Rep_3,
  MR_Word * Univ_4)
{
  *Univ_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Rep_3, (MR_Integer) 0))));
}

void MR_CALL 
mdb__term_rep__univ_to_rep_2_p_0(
  MR_Word Univ0_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word Univ_4;
    MR_Box conv0_Univ_4;

    mercury__builtin__cc_multi_equal_2_p_1((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), ((MR_Box) (Univ0_3)), &conv0_Univ_4);
    Univ_4 = ((MR_Word) (conv0_Univ_4));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Univ_4));
    }
  }
}

static MR_bool MR_CALL 
mdb__term_rep____Unify____term_rep_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__term_rep____Unify____term_rep_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__term_rep____Compare____term_rep_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__term_rep____Compare____term_rep_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__mdb__term_rep__init(void)
{
}

void mercury__mdb__term_rep__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0);
}

void mercury__mdb__term_rep__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__term_rep__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdb.term_rep.
