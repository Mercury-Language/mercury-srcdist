/*
** Automatically generated from `arg_pack.m'
** by the Mercury compiler,
** version rotd-2018-03-13
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


// :- module backend_libs.arg_pack.
// :- implementation.

/*
INIT mercury__backend_libs__arg_pack__init
ENDINIT
*/

#include "backend_libs.arg_pack.mih"


#include "backend_libs.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
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
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct backend_libs__arg_pack__pack_args_8_p_0_env_0_s {
  MR_Word backend_libs__arg_pack__pack_args_8_p_0_env_0__ArgWidths_10;
  MR_bool backend_libs__arg_pack__pack_args_8_p_0_env_0__succeeded;
  jmp_buf backend_libs__arg_pack__pack_args_8_p_0_env_0__commit_0;
  MR_Word backend_libs__arg_pack__pack_args_8_p_0_env_0__Var_29;
  MR_Box backend_libs__arg_pack__pack_args_8_p_0_env_0__conv0_Var_29;
};


static void MR_CALL 
backend_libs__arg_pack__pack_args_8_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
backend_libs__arg_pack__pack_args_8_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
backend_libs__arg_pack__pack_args_8_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
backend_libs__arg_pack__pack_args_8_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
backend_libs__arg_pack__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_p_0(
  MR_Word ShiftCombine_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Box STATE_VARIABLE_Acc1_0_5,
  MR_Box * STATE_VARIABLE_Acc1_6,
  MR_Box STATE_VARIABLE_Acc2_0_7,
  MR_Box * STATE_VARIABLE_Acc2_8);







#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



MR_Integer MR_CALL 
backend_libs__arg_pack__count_distinct_words_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_Integer HeadVar__2_2;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word H_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word T_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) H_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(H_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer Var_14;

                Var_14 = backend_libs__arg_pack__count_distinct_words_1_f_0(T_4);
                HeadVar__2_2 = ((MR_Integer) 1 + Var_14);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Var_12;

                Var_12 = backend_libs__arg_pack__count_distinct_words_1_f_0(T_4);
                HeadVar__2_2 = ((MR_Integer) 2 + Var_12);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Var_10;

            Var_10 = backend_libs__arg_pack__count_distinct_words_1_f_0(T_4);
            HeadVar__2_2 = ((MR_Integer) 1 + Var_10);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_HeadVar__1_1 = T_4;

            // direct tailcall eliminated
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
      }
    }
    return HeadVar__2_2;
    break;
  }
}

static void MR_CALL 
backend_libs__arg_pack__pack_args_8_p_0_1(
  void * env_ptr_arg)
{
  {
    struct backend_libs__arg_pack__pack_args_8_p_0_env_0_s * env_ptr = (struct backend_libs__arg_pack__pack_args_8_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
backend_libs__arg_pack__pack_args_8_p_0_3(
  void * env_ptr_arg)
{
  {
    struct backend_libs__arg_pack__pack_args_8_p_0_env_0_s * env_ptr = (struct backend_libs__arg_pack__pack_args_8_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__Var_29 = ((MR_Word) (env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__conv0_Var_29);
    backend_libs__arg_pack__pack_args_8_p_0_2(env_ptr);
  }
}

static void MR_CALL 
backend_libs__arg_pack__pack_args_8_p_0_2(
  void * env_ptr_arg)
{
  {
    struct backend_libs__arg_pack__pack_args_8_p_0_env_0_s * env_ptr = (struct backend_libs__arg_pack__pack_args_8_p_0_env_0_s *) env_ptr_arg;

    {
      MR_Integer ArgX1_34;

      (env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__Var_29)) == (MR_mktag((MR_Integer) 1)));
      if ((env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__succeeded)
      {
        ArgX1_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), (env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__Var_29, (MR_Integer) 0)));
        backend_libs__arg_pack__pack_args_8_p_0_1(env_ptr);
      }
    }
  }
}

static void MR_CALL 
backend_libs__arg_pack__pack_args_8_p_0_4(
  void * env_ptr_arg)
{
  {
    struct backend_libs__arg_pack__pack_args_8_p_0_env_0_s * env_ptr = (struct backend_libs__arg_pack__pack_args_8_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, &(env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__conv0_Var_29, (env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__ArgWidths_10, backend_libs__arg_pack__pack_args_8_p_0_3, env_ptr);
        }
        (env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
backend_libs__arg_pack__pack_args_8_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeInfo_for_Acc1_26,
  MR_Word TypeInfo_for_Acc2_27,
  MR_Word ShiftCombine_9,
  MR_Word ArgWidths_10,
  MR_Word STATE_VARIABLE_Args_0_15,
  MR_Word * STATE_VARIABLE_Args_16,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20)
{
  {
    struct backend_libs__arg_pack__pack_args_8_p_0_env_0_s env;

    (env).backend_libs__arg_pack__pack_args_8_p_0_env_0__ArgWidths_10 = ArgWidths_10;
    backend_libs__arg_pack__pack_args_8_p_0_4(&env);
    if ((env).backend_libs__arg_pack__pack_args_8_p_0_env_0__succeeded)
      backend_libs__arg_pack__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_p_0(ShiftCombine_9, (env).backend_libs__arg_pack__pack_args_8_p_0_env_0__ArgWidths_10, STATE_VARIABLE_Args_0_15, STATE_VARIABLE_Args_16, STATE_VARIABLE_Acc1_0_17, STATE_VARIABLE_Acc1_18, STATE_VARIABLE_Acc2_0_19, STATE_VARIABLE_Acc2_20);
    else
    {
      *STATE_VARIABLE_Acc2_20 = STATE_VARIABLE_Acc2_0_19;
      *STATE_VARIABLE_Acc1_18 = STATE_VARIABLE_Acc1_0_17;
      *STATE_VARIABLE_Args_16 = STATE_VARIABLE_Args_0_15;
    }
  }
}

static void MR_CALL 
backend_libs__arg_pack__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_p_0(
  MR_Word ShiftCombine_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Box STATE_VARIABLE_Acc1_0_5,
  MR_Box * STATE_VARIABLE_Acc1_6,
  MR_Box STATE_VARIABLE_Acc2_0_7,
  MR_Box * STATE_VARIABLE_Acc2_8)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *STATE_VARIABLE_Acc2_8 = STATE_VARIABLE_Acc2_0_7;
        *STATE_VARIABLE_Acc1_6 = STATE_VARIABLE_Acc1_0_5;
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.arg_pack", (MR_String) "predicate \140backend_libs.arg_pack.do_pack_args\'/8", (MR_String) "mismatched lists");
          return;
        }
      }
    else
    {
      MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.arg_pack", (MR_String) "predicate \140backend_libs.arg_pack.do_pack_args\'/8", (MR_String) "mismatched lists");
          return;
        }
      }
      else
      {
        MR_Box Arg0_19 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
        MR_Word Args0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        MR_Box Arg_21;
        MR_Word Args_22;
        MR_Integer Shift_25;
        MR_Word Next_79;
        MR_Word Var_80;
        MR_Integer Var_84;
        MR_Integer Var_85;

        switch (MR_tag((MR_Word) Var_77)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(Var_77)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Shift_25 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                Shift_25 = (MR_Integer) 0;
                break;
            }
            break;
          case (MR_Integer) 1:
            Shift_25 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            {
              MR_Integer _Mask_46;

              Shift_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Var_77, (MR_Integer) 0)));
              _Mask_46 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Var_77, (MR_Integer) 1)));
            }
            break;
        }
        if (((MR_tag((MR_Word) Var_77)) == (MR_mktag((MR_Integer) 1))))
          succeeded = MR_TRUE;
        else
        if (((MR_tag((MR_Word) Var_77)) == (MR_mktag((MR_Integer) 2))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_76)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Next_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_76, (MR_Integer) 0)));
            Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_76, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Next_79)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Next_79, (MR_Integer) 0)));
              Var_85 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Next_79, (MR_Integer) 1)));
            }
          }
        }
        if (succeeded)
        {
          MR_Word Args1_27;
          MR_Box STATE_VARIABLE_Acc1_33_33;
          MR_Box STATE_VARIABLE_Acc2_34_34;

          backend_libs__arg_pack__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_p_0(ShiftCombine_1, Var_76, Args0_20, &Args1_27, STATE_VARIABLE_Acc1_0_5, &STATE_VARIABLE_Acc1_33_33, STATE_VARIABLE_Acc2_0_7, &STATE_VARIABLE_Acc2_34_34);
          if ((Args1_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.arg_pack", (MR_String) "predicate \140backend_libs.arg_pack.do_pack_args\'/8", (MR_String) "mismatched lists");
              return;
            }
          }
          else
          {
            MR_Box SecondArg_28 = (MR_hl_field(MR_mktag(1), Args1_27, (MR_Integer) 0));
            MR_Word Var_38;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

            Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args1_27, (MR_Integer) 1)));
            {
              Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_38, 0) = SecondArg_28;
            }
            func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ShiftCombine_1, (MR_Integer) 1)));
            func_0(((MR_Box) ShiftCombine_1), Arg0_19, ((MR_Box) (Shift_25)), ((MR_Box) (Var_38)), &Arg_21, STATE_VARIABLE_Acc1_33_33, STATE_VARIABLE_Acc1_6, STATE_VARIABLE_Acc2_34_34, STATE_VARIABLE_Acc2_8);
          }
        }
        else
        {
          MR_Box STATE_VARIABLE_Acc1_42_42;
          MR_Box STATE_VARIABLE_Acc2_43_43;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ShiftCombine_1, (MR_Integer) 1)));

          func_1(((MR_Box) ShiftCombine_1), Arg0_19, ((MR_Box) (Shift_25)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &Arg_21, STATE_VARIABLE_Acc1_0_5, &STATE_VARIABLE_Acc1_42_42, STATE_VARIABLE_Acc2_0_7, &STATE_VARIABLE_Acc2_43_43);
          backend_libs__arg_pack__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_p_0(ShiftCombine_1, Var_76, Args0_20, &Args_22, STATE_VARIABLE_Acc1_42_42, STATE_VARIABLE_Acc1_6, STATE_VARIABLE_Acc2_43_43, STATE_VARIABLE_Acc2_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = Arg_21;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Args_22));
        }
      }
    }
  }
}

void mercury__backend_libs__arg_pack__init(void)
{
}

void mercury__backend_libs__arg_pack__init_type_tables(void)
{
}

void mercury__backend_libs__arg_pack__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__arg_pack__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module backend_libs.arg_pack.
