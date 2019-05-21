/*
** Automatically generated from `arg_pack.m'
** by the Mercury compiler,
** version rotd-2017-08-07
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


/* :- module backend_libs.arg_pack. */
/* :- implementation. */

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
backend_libs__arg_pack__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_110_101_120_116_95_119_111_114_100_95_95_91_49_93_95_48_5_p_0(
  MR_Word backend_libs__arg_pack__HeadVar__1_1,
  MR_Word * backend_libs__arg_pack__HeadVar__2_2,
  MR_Word backend_libs__arg_pack__HeadVar__3_3,
  MR_Word * backend_libs__arg_pack__HeadVar__4_4,
  MR_Word * backend_libs__arg_pack__XsTail_5);

static void MR_CALL 
backend_libs__arg_pack__pack_args_8_p_0_1(
  void * backend_libs__arg_pack__env_ptr_arg);

static void MR_CALL 
backend_libs__arg_pack__pack_args_8_p_0_3(
  void * backend_libs__arg_pack__env_ptr_arg);

static void MR_CALL 
backend_libs__arg_pack__pack_args_8_p_0_2(
  void * backend_libs__arg_pack__env_ptr_arg);

static void MR_CALL 
backend_libs__arg_pack__pack_args_8_p_0_4(
  void * backend_libs__arg_pack__env_ptr_arg);

static void MR_CALL 
backend_libs__arg_pack__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_p_0(
  MR_Word backend_libs__arg_pack__ShiftCombine_1,
  MR_Word backend_libs__arg_pack__HeadVar__2_2,
  MR_Word backend_libs__arg_pack__HeadVar__3_3,
  MR_Word * backend_libs__arg_pack__HeadVar__4_4,
  MR_Box backend_libs__arg_pack__STATE_VARIABLE_Acc1_0_5,
  MR_Box * backend_libs__arg_pack__STATE_VARIABLE_Acc1_6,
  MR_Box backend_libs__arg_pack__STATE_VARIABLE_Acc2_0_7,
  MR_Box * backend_libs__arg_pack__STATE_VARIABLE_Acc2_8);







#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



void MR_CALL 
backend_libs__arg_pack__group_same_word_elements_3_p_0(
  MR_Word backend_libs__arg_pack__TypeInfo_for_T_34,
  MR_Word backend_libs__arg_pack__HeadVar__1_1,
  MR_Word backend_libs__arg_pack__HeadVar__2_2,
  MR_Word * backend_libs__arg_pack__HeadVar__3_3)
{
  if ((backend_libs__arg_pack__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    if ((backend_libs__arg_pack__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *backend_libs__arg_pack__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "backend_libs.arg_pack", (MR_String) "predicate \140backend_libs.arg_pack.group_same_word_elements\'/3", (MR_String) "mismatched lists");
        return;
      }
    }
  else
  {
    MR_Word backend_libs__arg_pack__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word backend_libs__arg_pack__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__HeadVar__1_1, (MR_Integer) 0)));

    if ((backend_libs__arg_pack__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *backend_libs__arg_pack__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        mercury__require__unexpected_3_p_0((MR_String) "backend_libs.arg_pack", (MR_String) "predicate \140backend_libs.arg_pack.group_same_word_elements\'/3", (MR_String) "mismatched lists");
        return;
      }
    }
    else
    {
      MR_Box backend_libs__arg_pack__X_6 = (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__HeadVar__2_2, (MR_Integer) 0));
      MR_Word backend_libs__arg_pack__Xs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__HeadVar__2_2, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) backend_libs__arg_pack__Var_36)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word backend_libs__arg_pack__Xss0_9;
            MR_Word backend_libs__arg_pack__Var_20;

            backend_libs__arg_pack__group_same_word_elements_3_p_0(backend_libs__arg_pack__TypeInfo_for_T_34, backend_libs__arg_pack__Var_35, backend_libs__arg_pack__Xs_7, &backend_libs__arg_pack__Xss0_9);
            {
              backend_libs__arg_pack__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), backend_libs__arg_pack__Var_20, 0) = backend_libs__arg_pack__X_6;
              MR_hl_field(MR_mktag(1), backend_libs__arg_pack__Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *backend_libs__arg_pack__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__arg_pack__Var_20));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__arg_pack__Xss0_9));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word backend_libs__arg_pack__WsTail_11;
            MR_Word backend_libs__arg_pack__XsHead_12;
            MR_Word backend_libs__arg_pack__XsTail_13;
            MR_Word backend_libs__arg_pack__Var_19;
            MR_Word backend_libs__arg_pack__Xss0_22;

            backend_libs__arg_pack__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_110_101_120_116_95_119_111_114_100_95_95_91_49_93_95_48_5_p_0(backend_libs__arg_pack__Var_35, &backend_libs__arg_pack__WsTail_11, backend_libs__arg_pack__Xs_7, &backend_libs__arg_pack__XsHead_12, &backend_libs__arg_pack__XsTail_13);
            backend_libs__arg_pack__group_same_word_elements_3_p_0(backend_libs__arg_pack__TypeInfo_for_T_34, backend_libs__arg_pack__WsTail_11, backend_libs__arg_pack__XsTail_13, &backend_libs__arg_pack__Xss0_22);
            {
              backend_libs__arg_pack__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), backend_libs__arg_pack__Var_19, 0) = backend_libs__arg_pack__X_6;
              MR_hl_field(MR_mktag(1), backend_libs__arg_pack__Var_19, 1) = ((MR_Box) (backend_libs__arg_pack__XsHead_12));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *backend_libs__arg_pack__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__arg_pack__Var_19));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__arg_pack__Xss0_22));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.arg_pack", (MR_String) "predicate \140backend_libs.arg_pack.group_same_word_elements\'/3", (MR_String) "partial_word_shifted");
              return;
            }
          }
          break;
      }
    }
  }
}

static void MR_CALL 
backend_libs__arg_pack__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_110_101_120_116_95_119_111_114_100_95_95_91_49_93_95_48_5_p_0(
  MR_Word backend_libs__arg_pack__HeadVar__1_1,
  MR_Word * backend_libs__arg_pack__HeadVar__2_2,
  MR_Word backend_libs__arg_pack__HeadVar__3_3,
  MR_Word * backend_libs__arg_pack__HeadVar__4_4,
  MR_Word * backend_libs__arg_pack__XsTail_5)
{
  if ((backend_libs__arg_pack__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *backend_libs__arg_pack__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *backend_libs__arg_pack__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *backend_libs__arg_pack__XsTail_5 = backend_libs__arg_pack__HeadVar__3_3;
  }
  else
  {
    MR_Word backend_libs__arg_pack__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word backend_libs__arg_pack__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__HeadVar__1_1, (MR_Integer) 0)));

    if ((backend_libs__arg_pack__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "backend_libs.arg_pack", (MR_String) "predicate \140backend_libs.arg_pack.split_at_next_word\'/5", (MR_String) "mismatched lists");
        return;
      }
    }
    else
    {
      MR_Box backend_libs__arg_pack__X_10 = (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__HeadVar__3_3, (MR_Integer) 0));
      MR_Word backend_libs__arg_pack__Xs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__HeadVar__3_3, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) backend_libs__arg_pack__Var_28)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *backend_libs__arg_pack__HeadVar__2_2 = backend_libs__arg_pack__HeadVar__1_1;
            *backend_libs__arg_pack__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *backend_libs__arg_pack__XsTail_5 = backend_libs__arg_pack__HeadVar__3_3;
          }
          break;
        case (MR_Integer) 1:
          {
            *backend_libs__arg_pack__HeadVar__2_2 = backend_libs__arg_pack__HeadVar__1_1;
            *backend_libs__arg_pack__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *backend_libs__arg_pack__XsTail_5 = backend_libs__arg_pack__HeadVar__3_3;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word backend_libs__arg_pack__XsHead0_17;

            backend_libs__arg_pack__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_110_101_120_116_95_119_111_114_100_95_95_91_49_93_95_48_5_p_0(backend_libs__arg_pack__Var_27, backend_libs__arg_pack__HeadVar__2_2, backend_libs__arg_pack__Xs_11, &backend_libs__arg_pack__XsHead0_17, backend_libs__arg_pack__XsTail_5);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *backend_libs__arg_pack__HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = backend_libs__arg_pack__X_10;
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__arg_pack__XsHead0_17));
            }
          }
          break;
      }
    }
  }
}

MR_Integer MR_CALL 
backend_libs__arg_pack__count_distinct_words_1_f_0(
  MR_Word backend_libs__arg_pack__HeadVar__1_1)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_Integer backend_libs__arg_pack__HeadVar__2_2;

      if ((backend_libs__arg_pack__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        backend_libs__arg_pack__HeadVar__2_2 = (MR_Integer) 0;
      else
      {
        MR_Word backend_libs__arg_pack__H_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word backend_libs__arg_pack__T_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__HeadVar__1_1, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) backend_libs__arg_pack__H_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(backend_libs__arg_pack__H_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer backend_libs__arg_pack__Var_14;

                  backend_libs__arg_pack__Var_14 = backend_libs__arg_pack__count_distinct_words_1_f_0(backend_libs__arg_pack__T_4);
                  backend_libs__arg_pack__HeadVar__2_2 = ((MR_Integer) 1 + backend_libs__arg_pack__Var_14);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer backend_libs__arg_pack__Var_12;

                  backend_libs__arg_pack__Var_12 = backend_libs__arg_pack__count_distinct_words_1_f_0(backend_libs__arg_pack__T_4);
                  backend_libs__arg_pack__HeadVar__2_2 = ((MR_Integer) 2 + backend_libs__arg_pack__Var_12);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer backend_libs__arg_pack__Var_10;

              backend_libs__arg_pack__Var_10 = backend_libs__arg_pack__count_distinct_words_1_f_0(backend_libs__arg_pack__T_4);
              backend_libs__arg_pack__HeadVar__2_2 = ((MR_Integer) 1 + backend_libs__arg_pack__Var_10);
            }
            break;
          case (MR_Integer) 2:
            {
              /* direct tailcall eliminated */
              {
                MR_Word backend_libs__arg_pack__next_value_of_HeadVar__1_1 = backend_libs__arg_pack__T_4;

                backend_libs__arg_pack__HeadVar__1_1 = backend_libs__arg_pack__next_value_of_HeadVar__1_1;
              }
              continue;
            }
            break;
        }
      }
      return backend_libs__arg_pack__HeadVar__2_2;
    }
    break;
  }
}

static void MR_CALL 
backend_libs__arg_pack__pack_args_8_p_0_1(
  void * backend_libs__arg_pack__env_ptr_arg)
{
  {
    struct backend_libs__arg_pack__pack_args_8_p_0_env_0_s * backend_libs__arg_pack__env_ptr = (struct backend_libs__arg_pack__pack_args_8_p_0_env_0_s *) backend_libs__arg_pack__env_ptr_arg;

    MR_builtin_longjmp((backend_libs__arg_pack__env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
backend_libs__arg_pack__pack_args_8_p_0_3(
  void * backend_libs__arg_pack__env_ptr_arg)
{
  {
    struct backend_libs__arg_pack__pack_args_8_p_0_env_0_s * backend_libs__arg_pack__env_ptr = (struct backend_libs__arg_pack__pack_args_8_p_0_env_0_s *) backend_libs__arg_pack__env_ptr_arg;

    (backend_libs__arg_pack__env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__Var_29 = ((MR_Word) (backend_libs__arg_pack__env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__conv0_Var_29);
    backend_libs__arg_pack__pack_args_8_p_0_2(backend_libs__arg_pack__env_ptr);
  }
}

static void MR_CALL 
backend_libs__arg_pack__pack_args_8_p_0_2(
  void * backend_libs__arg_pack__env_ptr_arg)
{
  {
    struct backend_libs__arg_pack__pack_args_8_p_0_env_0_s * backend_libs__arg_pack__env_ptr = (struct backend_libs__arg_pack__pack_args_8_p_0_env_0_s *) backend_libs__arg_pack__env_ptr_arg;

    {
      MR_Integer backend_libs__arg_pack__ArgX1_34;

      (backend_libs__arg_pack__env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) (backend_libs__arg_pack__env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__Var_29)) == (MR_mktag((MR_Integer) 1)));
      if ((backend_libs__arg_pack__env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__succeeded)
      {
        backend_libs__arg_pack__ArgX1_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), (backend_libs__arg_pack__env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__Var_29, (MR_Integer) 0)));
        backend_libs__arg_pack__pack_args_8_p_0_1(backend_libs__arg_pack__env_ptr);
      }
    }
  }
}

static void MR_CALL 
backend_libs__arg_pack__pack_args_8_p_0_4(
  void * backend_libs__arg_pack__env_ptr_arg)
{
  {
    struct backend_libs__arg_pack__pack_args_8_p_0_env_0_s * backend_libs__arg_pack__env_ptr = (struct backend_libs__arg_pack__pack_args_8_p_0_env_0_s *) backend_libs__arg_pack__env_ptr_arg;

    if (MR_builtin_setjmp((backend_libs__arg_pack__env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, &(backend_libs__arg_pack__env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__conv0_Var_29, (backend_libs__arg_pack__env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__ArgWidths_10, backend_libs__arg_pack__pack_args_8_p_0_3, backend_libs__arg_pack__env_ptr);
        }
        (backend_libs__arg_pack__env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (backend_libs__arg_pack__env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
backend_libs__arg_pack__pack_args_8_p_0(
  MR_Word backend_libs__arg_pack__TypeInfo_for_T_25,
  MR_Word backend_libs__arg_pack__TypeInfo_for_Acc1_26,
  MR_Word backend_libs__arg_pack__TypeInfo_for_Acc2_27,
  MR_Word backend_libs__arg_pack__ShiftCombine_9,
  MR_Word backend_libs__arg_pack__ArgWidths_10,
  MR_Word backend_libs__arg_pack__STATE_VARIABLE_Args_0_15,
  MR_Word * backend_libs__arg_pack__STATE_VARIABLE_Args_16,
  MR_Box backend_libs__arg_pack__STATE_VARIABLE_Acc1_0_17,
  MR_Box * backend_libs__arg_pack__STATE_VARIABLE_Acc1_18,
  MR_Box backend_libs__arg_pack__STATE_VARIABLE_Acc2_0_19,
  MR_Box * backend_libs__arg_pack__STATE_VARIABLE_Acc2_20)
{
  {
    struct backend_libs__arg_pack__pack_args_8_p_0_env_0_s backend_libs__arg_pack__env;

    (backend_libs__arg_pack__env).backend_libs__arg_pack__pack_args_8_p_0_env_0__ArgWidths_10 = backend_libs__arg_pack__ArgWidths_10;
    backend_libs__arg_pack__pack_args_8_p_0_4(&backend_libs__arg_pack__env);
    if ((backend_libs__arg_pack__env).backend_libs__arg_pack__pack_args_8_p_0_env_0__succeeded)
      backend_libs__arg_pack__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_p_0(backend_libs__arg_pack__ShiftCombine_9, (backend_libs__arg_pack__env).backend_libs__arg_pack__pack_args_8_p_0_env_0__ArgWidths_10, backend_libs__arg_pack__STATE_VARIABLE_Args_0_15, backend_libs__arg_pack__STATE_VARIABLE_Args_16, backend_libs__arg_pack__STATE_VARIABLE_Acc1_0_17, backend_libs__arg_pack__STATE_VARIABLE_Acc1_18, backend_libs__arg_pack__STATE_VARIABLE_Acc2_0_19, backend_libs__arg_pack__STATE_VARIABLE_Acc2_20);
    else
    {
      *backend_libs__arg_pack__STATE_VARIABLE_Acc2_20 = backend_libs__arg_pack__STATE_VARIABLE_Acc2_0_19;
      *backend_libs__arg_pack__STATE_VARIABLE_Acc1_18 = backend_libs__arg_pack__STATE_VARIABLE_Acc1_0_17;
      *backend_libs__arg_pack__STATE_VARIABLE_Args_16 = backend_libs__arg_pack__STATE_VARIABLE_Args_0_15;
    }
  }
}

static void MR_CALL 
backend_libs__arg_pack__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_p_0(
  MR_Word backend_libs__arg_pack__ShiftCombine_1,
  MR_Word backend_libs__arg_pack__HeadVar__2_2,
  MR_Word backend_libs__arg_pack__HeadVar__3_3,
  MR_Word * backend_libs__arg_pack__HeadVar__4_4,
  MR_Box backend_libs__arg_pack__STATE_VARIABLE_Acc1_0_5,
  MR_Box * backend_libs__arg_pack__STATE_VARIABLE_Acc1_6,
  MR_Box backend_libs__arg_pack__STATE_VARIABLE_Acc2_0_7,
  MR_Box * backend_libs__arg_pack__STATE_VARIABLE_Acc2_8)
{
  {
    MR_bool backend_libs__arg_pack__succeeded;

    if ((backend_libs__arg_pack__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((backend_libs__arg_pack__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *backend_libs__arg_pack__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *backend_libs__arg_pack__STATE_VARIABLE_Acc2_8 = backend_libs__arg_pack__STATE_VARIABLE_Acc2_0_7;
        *backend_libs__arg_pack__STATE_VARIABLE_Acc1_6 = backend_libs__arg_pack__STATE_VARIABLE_Acc1_0_5;
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
      MR_Word backend_libs__arg_pack__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word backend_libs__arg_pack__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__HeadVar__2_2, (MR_Integer) 0)));

      if ((backend_libs__arg_pack__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.arg_pack", (MR_String) "predicate \140backend_libs.arg_pack.do_pack_args\'/8", (MR_String) "mismatched lists");
          return;
        }
      }
      else
      {
        MR_Box backend_libs__arg_pack__Arg0_19 = (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__HeadVar__3_3, (MR_Integer) 0));
        MR_Word backend_libs__arg_pack__Args0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__HeadVar__3_3, (MR_Integer) 1)));
        MR_Box backend_libs__arg_pack__Arg_21;
        MR_Word backend_libs__arg_pack__Args_22;
        MR_Integer backend_libs__arg_pack__Shift_25;
        MR_Word backend_libs__arg_pack__Next_79;
        MR_Word backend_libs__arg_pack__Var_80;
        MR_Integer backend_libs__arg_pack__Var_84;
        MR_Integer backend_libs__arg_pack__Var_85;

        switch (MR_tag((MR_Word) backend_libs__arg_pack__Var_77)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(backend_libs__arg_pack__Var_77)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                backend_libs__arg_pack__Shift_25 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                backend_libs__arg_pack__Shift_25 = (MR_Integer) 0;
                break;
            }
            break;
          case (MR_Integer) 1:
            backend_libs__arg_pack__Shift_25 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            {
              MR_Integer backend_libs__arg_pack___Mask_46;

              backend_libs__arg_pack__Shift_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__arg_pack__Var_77, (MR_Integer) 0)));
              backend_libs__arg_pack___Mask_46 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__arg_pack__Var_77, (MR_Integer) 1)));
            }
            break;
        }
        if (((MR_tag((MR_Word) backend_libs__arg_pack__Var_77)) == (MR_mktag((MR_Integer) 1))))
          backend_libs__arg_pack__succeeded = MR_TRUE;
        else
        if (((MR_tag((MR_Word) backend_libs__arg_pack__Var_77)) == (MR_mktag((MR_Integer) 2))))
          backend_libs__arg_pack__succeeded = MR_TRUE;
        else
          backend_libs__arg_pack__succeeded = MR_FALSE;
        if (backend_libs__arg_pack__succeeded)
        {
          backend_libs__arg_pack__succeeded = ((MR_tag((MR_Word) backend_libs__arg_pack__Var_76)) == (MR_mktag((MR_Integer) 1)));
          if (backend_libs__arg_pack__succeeded)
          {
            backend_libs__arg_pack__Next_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__Var_76, (MR_Integer) 0)));
            backend_libs__arg_pack__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__Var_76, (MR_Integer) 1)));
            backend_libs__arg_pack__succeeded = ((MR_tag((MR_Word) backend_libs__arg_pack__Next_79)) == (MR_mktag((MR_Integer) 2)));
            if (backend_libs__arg_pack__succeeded)
            {
              backend_libs__arg_pack__Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__arg_pack__Next_79, (MR_Integer) 0)));
              backend_libs__arg_pack__Var_85 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__arg_pack__Next_79, (MR_Integer) 1)));
            }
          }
        }
        if (backend_libs__arg_pack__succeeded)
        {
          MR_Word backend_libs__arg_pack__Args1_27;
          MR_Box backend_libs__arg_pack__STATE_VARIABLE_Acc1_33_33;
          MR_Box backend_libs__arg_pack__STATE_VARIABLE_Acc2_34_34;

          backend_libs__arg_pack__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_p_0(backend_libs__arg_pack__ShiftCombine_1, backend_libs__arg_pack__Var_76, backend_libs__arg_pack__Args0_20, &backend_libs__arg_pack__Args1_27, backend_libs__arg_pack__STATE_VARIABLE_Acc1_0_5, &backend_libs__arg_pack__STATE_VARIABLE_Acc1_33_33, backend_libs__arg_pack__STATE_VARIABLE_Acc2_0_7, &backend_libs__arg_pack__STATE_VARIABLE_Acc2_34_34);
          if ((backend_libs__arg_pack__Args1_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.arg_pack", (MR_String) "predicate \140backend_libs.arg_pack.do_pack_args\'/8", (MR_String) "mismatched lists");
              return;
            }
          }
          else
          {
            MR_Box backend_libs__arg_pack__SecondArg_28 = (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__Args1_27, (MR_Integer) 0));
            MR_Word backend_libs__arg_pack__Var_38;
            void MR_CALL (* backend_libs__arg_pack__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

            backend_libs__arg_pack__Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__Args1_27, (MR_Integer) 1)));
            {
              backend_libs__arg_pack__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), backend_libs__arg_pack__Var_38, 0) = backend_libs__arg_pack__SecondArg_28;
            }
            backend_libs__arg_pack__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), backend_libs__arg_pack__ShiftCombine_1, (MR_Integer) 1)));
            backend_libs__arg_pack__func_0(((MR_Box) backend_libs__arg_pack__ShiftCombine_1), backend_libs__arg_pack__Arg0_19, ((MR_Box) (backend_libs__arg_pack__Shift_25)), ((MR_Box) (backend_libs__arg_pack__Var_38)), &backend_libs__arg_pack__Arg_21, backend_libs__arg_pack__STATE_VARIABLE_Acc1_33_33, backend_libs__arg_pack__STATE_VARIABLE_Acc1_6, backend_libs__arg_pack__STATE_VARIABLE_Acc2_34_34, backend_libs__arg_pack__STATE_VARIABLE_Acc2_8);
          }
        }
        else
        {
          MR_Box backend_libs__arg_pack__STATE_VARIABLE_Acc1_42_42;
          MR_Box backend_libs__arg_pack__STATE_VARIABLE_Acc2_43_43;
          void MR_CALL (* backend_libs__arg_pack__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), backend_libs__arg_pack__ShiftCombine_1, (MR_Integer) 1)));

          backend_libs__arg_pack__func_1(((MR_Box) backend_libs__arg_pack__ShiftCombine_1), backend_libs__arg_pack__Arg0_19, ((MR_Box) (backend_libs__arg_pack__Shift_25)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &backend_libs__arg_pack__Arg_21, backend_libs__arg_pack__STATE_VARIABLE_Acc1_0_5, &backend_libs__arg_pack__STATE_VARIABLE_Acc1_42_42, backend_libs__arg_pack__STATE_VARIABLE_Acc2_0_7, &backend_libs__arg_pack__STATE_VARIABLE_Acc2_43_43);
          backend_libs__arg_pack__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_p_0(backend_libs__arg_pack__ShiftCombine_1, backend_libs__arg_pack__Var_76, backend_libs__arg_pack__Args0_20, &backend_libs__arg_pack__Args_22, backend_libs__arg_pack__STATE_VARIABLE_Acc1_42_42, backend_libs__arg_pack__STATE_VARIABLE_Acc1_6, backend_libs__arg_pack__STATE_VARIABLE_Acc2_43_43, backend_libs__arg_pack__STATE_VARIABLE_Acc2_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *backend_libs__arg_pack__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = backend_libs__arg_pack__Arg_21;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__arg_pack__Args_22));
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

/* :- end_module backend_libs.arg_pack. */
