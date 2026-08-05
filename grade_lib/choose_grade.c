/*
** Automatically generated from `choose_grade.m'
** by the Mercury compiler,
** version rotd-2026-08-05
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


// :- module choose_grade.
// :- implementation.

/*
INIT mercury__choose_grade__init
ENDINIT
*/

#include "choose_grade.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "grade_lib.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "var_value_names.mih"
#include "grade_lib.grade_setup.mih"
#include "grade_lib.grade_solver.mih"
#include "grade_lib.grade_spec.mih"
#include "grade_lib.grade_state.mih"
#include "grade_lib.grade_string.mih"
#include "grade_lib.grade_structure.mih"
#include "grade_lib.grade_vars.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static void MR_CALL 
main_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
choose_grade__process_arguments_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_BadArgLines_0_2,
  MR_Word * STATE_VARIABLE_BadArgLines_3,
  MR_Word STATE_VARIABLE_SolverInfo_0_4,
  MR_Word * STATE_VARIABLE_SolverInfo_5);


static /* final */ const MR_Box choose_grade_scalar_common_1[1][1];

static /* final */ const MR_Box choose_grade_scalar_common_2[1][7];




static /* final */ const MR_Box choose_grade_scalar_common_1[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 1U << 6)) | (((((MR_Unsigned) 1U << 5)) | (((((MR_Unsigned) 1U << 4)) | (((((MR_Unsigned) 2U << 2)) | (((MR_Unsigned) 0U << 1)))))))))) },
};

static /* final */ const MR_Box choose_grade_scalar_common_2[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static void MR_CALL 
main_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mercury__io__write_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
}

void MR_CALL 
main_2_p_0(void)
{
  MR_Word SolverInfo0_6;
  MR_Word Args_7;
  MR_Word BadArgLinesCord_8;
  MR_Word SolverInfo1_9;
  MR_Word BadArgLines_10;
  MR_Word OutStream_11;
  MR_Word Var_33;

  grade_lib__grade_setup__setup_solver_info_3_p_0((MR_Integer) 1, (MR_Word) (&choose_grade_scalar_common_1[0]), &SolverInfo0_6);
  mercury__io__command_line_arguments_3_p_0(&Args_7);
  Var_33 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  choose_grade__process_arguments_5_p_0(Args_7, Var_33, &BadArgLinesCord_8, SolverInfo0_6, &SolverInfo1_9);
  BadArgLines_10 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), BadArgLinesCord_8);
  mercury__io__output_stream_3_p_0(&OutStream_11);
  if ((BadArgLines_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Soln_18;
    MR_String Var_44;
    MR_Word _SolveCounts_17;

    grade_lib__grade_solver__solve_absolute_3_p_0(SolverInfo1_9, &_SolveCounts_17, &Soln_18);
    Var_44 = grade_lib__grade_solver__soln_to_str_2_f_0((MR_String) "", Soln_18);
    mercury__io__write_string_4_p_0(OutStream_11, Var_44);
    if (!(((MR_tag((MR_Word) Soln_18)) == (MR_Integer) 0)))
    {
      MR_Word SuccMap_20 = ((MR_Word) ((MR_hl_field(1, Soln_18, 0))));
      MR_Word GradeVars_21;
      MR_Word GradeStructure_22;
      MR_String GradeStr_23;

      GradeVars_21 = grade_lib__grade_vars__success_map_to_grade_vars_1_f_0(SuccMap_20);
      GradeStructure_22 = grade_lib__grade_structure__grade_vars_to_grade_structure_1_f_0(GradeVars_21);
      GradeStr_23 = grade_lib__grade_string__grade_structure_to_grade_string_2_f_0((MR_Integer) 1, GradeStructure_22);
      mercury__io__write_string_4_p_0(OutStream_11, (MR_String) "GRADE ");
      mercury__io__write_string_4_p_0(OutStream_11, GradeStr_23);
      mercury__io__write_string_4_p_0(OutStream_11, (MR_String) "\n");
    }
  }
  else
  {
    MR_Word Var_37;
    MR_Box conv0_STATE_VARIABLE_IO_25;

    mercury__io__write_string_4_p_0(OutStream_11, (MR_String) "unrecognized arguments:\n");
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_37, 0) = ((MR_Box) (&choose_grade_scalar_common_2[0]));
      MR_hl_field(0, Var_37, 1) = ((MR_Box) (main_2_p_0_1));
      MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_37, 3) = ((MR_Box) (OutStream_11));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_37, BadArgLines_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_25);
  }
}

static void MR_CALL 
choose_grade__process_arguments_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_BadArgLines_0_2,
  MR_Word * STATE_VARIABLE_BadArgLines_3,
  MR_Word STATE_VARIABLE_SolverInfo_0_4,
  MR_Word * STATE_VARIABLE_SolverInfo_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_SolverInfo_5 = STATE_VARIABLE_SolverInfo_0_4;
      *STATE_VARIABLE_BadArgLines_3 = STATE_VARIABLE_BadArgLines_0_2;
    }
    else
    {
      MR_String Arg_12 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Args_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word WhyNot_17;
      MR_String ArgSuffix_18;
      MR_Word STATE_VARIABLE_SolverInfo_1_56;
      MR_Word STATE_VARIABLE_BadArgLines_1_62;
      MR_String ArgSuffixPrime_16;
      MR_Word SetTo_22;
      MR_String VarName_23;
      MR_String ValueName_24;
      MR_String VarNamePrime_20;
      MR_String ValueNamePrime_21;
      MR_Word NeqComponents_19;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_BadArgLines_0_2;
      MR_Word next_value_of_STATE_VARIABLE_SolverInfo_0_4;

      succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "CONFIG", Arg_12, &ArgSuffixPrime_16);
      if (succeeded)
      {
        WhyNot_17 = (MR_Word) ((MR_Unsigned) 0U);
        ArgSuffix_18 = ArgSuffixPrime_16;
      }
      else
      {
        WhyNot_17 = (MR_Word) ((MR_Unsigned) 4U);
        ArgSuffix_18 = Arg_12;
      }
      NeqComponents_19 = mercury__string__split_at_string_2_f_0((MR_String) "!=", ArgSuffix_18);
      succeeded = (NeqComponents_19 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        VarNamePrime_20 = ((MR_String) ((MR_hl_field(1, NeqComponents_19, 0))));
        Var_43 = ((MR_Word) ((MR_hl_field(1, NeqComponents_19, 1))));
        succeeded = (Var_43 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ValueNamePrime_21 = ((MR_String) ((MR_hl_field(1, Var_43, 0))));
          Var_44 = ((MR_Word) ((MR_hl_field(1, Var_43, 1))));
          succeeded = (Var_44 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
      if (succeeded)
      {
        SetTo_22 = (MR_Integer) 0;
        VarName_23 = VarNamePrime_20;
        ValueName_24 = ValueNamePrime_21;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word EqComponents_25;
        MR_Word Var_46;
        MR_Word Var_47;

        EqComponents_25 = mercury__string__split_at_string_2_f_0((MR_String) "=", ArgSuffix_18);
        succeeded = (EqComponents_25 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          VarName_23 = ((MR_String) ((MR_hl_field(1, EqComponents_25, 0))));
          Var_46 = ((MR_Word) ((MR_hl_field(1, EqComponents_25, 1))));
          succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ValueName_24 = ((MR_String) ((MR_hl_field(1, Var_46, 0))));
            Var_47 = ((MR_Word) ((MR_hl_field(1, Var_46, 1))));
            succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              SetTo_22 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word MaybeVarId_27;
        MR_String VarErrorMsg_28;
        MR_Word MaybeValueId_30;
        MR_String ValueErrorMsg_31;
        MR_Word VarId0_26;
        MR_Word ValueId0_29;
        MR_Word VarId_32;
        MR_Word ValueId_33;

        succeeded = var_value_names__solver_var_name_2_p_0(VarName_23, &VarId0_26);
        if (succeeded)
        {
          {
            MaybeVarId_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeVarId_27, 0) = ((MR_Box) (VarId0_26));
          }
          VarErrorMsg_28 = (MR_String) "";
        }
        else
        {
          MR_String Var_69;

          MaybeVarId_27 = (MR_Word) ((MR_Unsigned) 0U);
          Var_69 = mercury__string__f_43_43_2_f_0(VarName_23, (MR_String) "\n");
          VarErrorMsg_28 = mercury__string__f_43_43_2_f_0((MR_String) "there is no solver variable named ", Var_69);
        }
        succeeded = var_value_names__solver_var_value_name_2_p_0(ValueName_24, &ValueId0_29);
        if (succeeded)
        {
          {
            MaybeValueId_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeValueId_30, 0) = ((MR_Box) (ValueId0_29));
          }
          ValueErrorMsg_31 = (MR_String) "";
        }
        else
        {
          MR_String Var_72;

          MaybeValueId_30 = (MR_Word) ((MR_Unsigned) 0U);
          Var_72 = mercury__string__f_43_43_2_f_0(ValueName_24, (MR_String) "\n");
          ValueErrorMsg_31 = mercury__string__f_43_43_2_f_0((MR_String) "there is no solver var value named ", Var_72);
        }
        succeeded = (MaybeVarId_27 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          VarId_32 = ((MR_Word) ((MR_hl_field(1, MaybeVarId_27, 0))));
          succeeded = (MaybeValueId_30 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            ValueId_33 = ((MR_Word) ((MR_hl_field(1, MaybeValueId_30, 0))));
        }
        if (succeeded)
        {
          MR_Word MaybeError_34;

          grade_lib__grade_setup__set_solver_var_9_p_0(VarName_23, ValueName_24, VarId_32, ValueId_33, SetTo_22, WhyNot_17, &MaybeError_34, STATE_VARIABLE_SolverInfo_0_4, &STATE_VARIABLE_SolverInfo_1_56);
          if ((MaybeError_34 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_BadArgLines_1_62 = STATE_VARIABLE_BadArgLines_0_2;
          else
          {
            MR_String Msg_36 = ((MR_String) ((MR_hl_field(1, MaybeError_34, 0))));

            STATE_VARIABLE_BadArgLines_1_62 = mercury__cord__snoc_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_BadArgLines_0_2, ((MR_Box) (Msg_36)));
          }
        }
        else
        {
          MR_String Msg_83;

          Msg_83 = mercury__string__f_43_43_2_f_0(VarErrorMsg_28, ValueErrorMsg_31);
          STATE_VARIABLE_SolverInfo_1_56 = STATE_VARIABLE_SolverInfo_0_4;
          STATE_VARIABLE_BadArgLines_1_62 = mercury__cord__snoc_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_BadArgLines_0_2, ((MR_Box) (Msg_83)));
        }
      }
      else
      {
        MR_String Var_75;
        MR_String Msg_79;

        Var_75 = mercury__string__f_43_43_2_f_0(Arg_12, (MR_String) "\' is neither an equation nor a disequation\n");
        Msg_79 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_75);
        STATE_VARIABLE_SolverInfo_1_56 = STATE_VARIABLE_SolverInfo_0_4;
        STATE_VARIABLE_BadArgLines_1_62 = mercury__cord__snoc_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_BadArgLines_0_2, ((MR_Box) (Msg_79)));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Args_13;
      next_value_of_STATE_VARIABLE_BadArgLines_0_2 = STATE_VARIABLE_BadArgLines_1_62;
      next_value_of_STATE_VARIABLE_SolverInfo_0_4 = STATE_VARIABLE_SolverInfo_1_56;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_BadArgLines_0_2 = next_value_of_STATE_VARIABLE_BadArgLines_0_2;
      STATE_VARIABLE_SolverInfo_0_4 = next_value_of_STATE_VARIABLE_SolverInfo_0_4;
      continue;
    }
    break;
  }
}

void mercury__choose_grade__init(void)
{
}

void mercury__choose_grade__init_type_tables(void)
{
}

void mercury__choose_grade__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__choose_grade__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module choose_grade.
