/*
** Automatically generated from `shell_util.m'
** by the Mercury compiler,
** version rotd-2024-12-17
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


// :- module libs.shell_util.
// :- implementation.

/*
INIT mercury__libs__shell_util__init
ENDINIT
*/

#include "libs.shell_util.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "dir.mih"
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
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"



struct libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0_s {
  MR_bool libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__succeeded;
  MR_Word libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__ArgList_5;
  jmp_buf libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__commit_0;
  MR_Char libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__Char_8;
  MR_Box libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__conv0_Char_8;
};


static MR_bool MR_CALL 
libs__shell_util__quote_shell_cmd_arg_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
libs__shell_util__quote_shell_cmd_arg_1_f_0_2(
  void * env_ptr_arg);

static void MR_CALL 
libs__shell_util__quote_shell_cmd_arg_1_f_0_4(
  void * env_ptr_arg);

static void MR_CALL 
libs__shell_util__quote_shell_cmd_arg_1_f_0_3(
  void * env_ptr_arg);

static void MR_CALL 
libs__shell_util__quote_shell_cmd_arg_1_f_0_5(
  void * env_ptr_arg);

static MR_Word MR_CALL 
libs__shell_util__quote_arg_unix_1_f_0(
  MR_Word HeadVar__1_1);


static /* final */ const MR_Box libs__shell_util_scalar_common_1[1][4];

static /* final */ const MR_Box libs__shell_util_scalar_common_2[1][3];




static /* final */ const MR_Box libs__shell_util_scalar_common_1[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box libs__shell_util_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&libs__shell_util_scalar_common_1[0])),
    ((MR_Box) (libs__shell_util__quote_shell_cmd_arg_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static MR_bool MR_CALL 
libs__shell_util__quote_shell_cmd_arg_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

static void MR_CALL 
libs__shell_util__quote_shell_cmd_arg_1_f_0_2(
  void * env_ptr_arg)
{
  struct libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0_s * env_ptr = (struct libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__commit_0, 1);
}

static void MR_CALL 
libs__shell_util__quote_shell_cmd_arg_1_f_0_4(
  void * env_ptr_arg)
{
  struct libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0_s * env_ptr = (struct libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__Char_8 = ((MR_Char) (MR_Word) (env_ptr)->libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__conv0_Char_8);
  libs__shell_util__quote_shell_cmd_arg_1_f_0_3(env_ptr);
}

static void MR_CALL 
libs__shell_util__quote_shell_cmd_arg_1_f_0_3(
  void * env_ptr_arg)
{
  struct libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0_s * env_ptr = (struct libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0_s *) (env_ptr_arg);

  if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) (env_ptr)->libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__Char_8 - (MR_Unsigned) 44))) <= ((MR_Unsigned) 14)))
    if (((MR_Unsigned) 16399U & (((MR_Integer) 1 << ((MR_Integer) ((MR_Unsigned) (env_ptr)->libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__Char_8 - (MR_Unsigned) 44))))))
      (env_ptr)->libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__succeeded = MR_TRUE;
    else
      (env_ptr)->libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__succeeded = MR_FALSE;
  else
    (env_ptr)->libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__succeeded = MR_FALSE;
  if (!((env_ptr)->libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__succeeded))
    (env_ptr)->libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__succeeded = mercury__char__is_alnum_or_underscore_1_p_0((env_ptr)->libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__Char_8);
  (env_ptr)->libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__succeeded = !((env_ptr)->libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__succeeded);
  if ((env_ptr)->libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__succeeded)
    libs__shell_util__quote_shell_cmd_arg_1_f_0_2(env_ptr);
}

static void MR_CALL 
libs__shell_util__quote_shell_cmd_arg_1_f_0_5(
  void * env_ptr_arg)
{
  struct libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0_s * env_ptr = (struct libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), &(env_ptr)->libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__conv0_Char_8, (env_ptr)->libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__ArgList_5, libs__shell_util__quote_shell_cmd_arg_1_f_0_4, env_ptr);
      (env_ptr)->libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__succeeded = MR_TRUE;
}

MR_String MR_CALL 
libs__shell_util__quote_shell_cmd_arg_1_f_0(
  MR_String Arg0_3)
{
  struct libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0_s env;

  {
    MR_String Arg_4;

    (env).libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__succeeded = mercury__dir__use_windows_paths_0_p_0();
    if ((env).libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__succeeded)
    {
      (env).libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__succeeded = mercury__string__contains_match_2_p_0((MR_Word) (&libs__shell_util_scalar_common_2[0]), Arg0_3);
      if (!((env).libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__succeeded))
        (env).libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__succeeded = (strcmp(Arg0_3, (MR_String) "") == 0);
      if ((env).libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__succeeded)
      {
        MR_String Var_11;

        Var_11 = mercury__string__f_43_43_2_f_0(Arg0_3, (MR_String) "\"");
        Arg_4 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_11);
      }
      else
        Arg_4 = Arg0_3;
    }
    else
    {
      MR_Word Var_13;

      Var_13 = mercury__string__to_char_list_1_f_0(Arg0_3);
      (env).libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__ArgList_5 = libs__shell_util__quote_arg_unix_1_f_0(Var_13);
      if (((env).libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__ArgList_5 == (MR_Word) ((MR_Unsigned) 0U)))
        Arg_4 = (MR_String) "\"\"";
      else
      {
        libs__shell_util__quote_shell_cmd_arg_1_f_0_5(&env);
        if ((env).libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__succeeded)
        {
          MR_String Var_15;
          MR_String Var_16;

          Var_16 = mercury__string__from_char_list_1_f_0((env).libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__ArgList_5);
          Var_15 = mercury__string__f_43_43_2_f_0(Var_16, (MR_String) "\"");
          Arg_4 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_15);
        }
        else
          Arg_4 = mercury__string__from_char_list_1_f_0((env).libs__shell_util__quote_shell_cmd_arg_2_f_0_env_0__ArgList_5);
      }
    }
    return Arg_4;
  }
}

static MR_Word MR_CALL 
libs__shell_util__quote_arg_unix_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Char Char_3 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Chars0_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Chars1_6;

    Chars1_6 = libs__shell_util__quote_arg_unix_1_f_0(Chars0_4);
    switch (Char_3) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Char) 34:
        succeeded = MR_TRUE;
        break;
      case (MR_Char) 36:
        succeeded = MR_TRUE;
        break;
      case (MR_Char) 92:
        succeeded = MR_TRUE;
        break;
      case (MR_Char) 96:
        succeeded = MR_TRUE;
        break;
    }
    if (succeeded)
    {
      MR_Word Var_8;

      {
        Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_8, 0) = ((MR_Box) (MR_Word) (Char_3));
        MR_hl_field(1, Var_8, 1) = ((MR_Box) (Chars1_6));
      }
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
        MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_8));
      }
    }
    else
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (MR_Word) (Char_3));
        MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Chars1_6));
      }
  }
  return HeadVar__2_2;
}

void mercury__libs__shell_util__init(void)
{
}

void mercury__libs__shell_util__init_type_tables(void)
{
}

void mercury__libs__shell_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__shell_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module libs.shell_util.
