/*
** Automatically generated from `io.environment.m'
** by the Mercury compiler,
** version rotd-2026-02-16
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


// :- module io.environment.
// :- implementation.

/*
INIT mercury__io__environment__init
ENDINIT
*/

#include "io.environment.mih"
#include "io.environment.mh"


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
#include "term_subst.mih"
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




static const MR_FA_TypeInfo_Struct2 mercury__io__environment__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 mercury__io__environment__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0;

static MR_bool MR_CALL 
mercury__io__environment__setenv_2_p_0(
  MR_String Var_1,
  MR_String Value_2);

static void MR_CALL 
mercury__io__environment__record_env_var_and_value_4_p_0(
  MR_String EnvVarName_5,
  MR_String EnvVarValue_6,
  MR_Word STATE_VARIABLE_EnvVarAL_0_8,
  MR_Word * STATE_VARIABLE_EnvVarAL_9);

static void MR_CALL 
mercury__io__environment__record_env_var_equal_value_3_p_0(
  MR_String EnvVarNameEqValue_4,
  MR_Word STATE_VARIABLE_EnvVarAL_0_11,
  MR_Word * STATE_VARIABLE_EnvVarAL_12);

static MR_bool MR_CALL 
mercury__io__environment____Unify____env_var_assoc_list_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io__environment____Compare____env_var_assoc_list_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__io__environment_scalar_common_1[2][3];

static /* final */ const MR_Box mercury__io__environment_scalar_common_2[1][2];

static /* final */ const MR_Box mercury__io__environment_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__io__environment_scalar_common_4[1][5];

static /* final */ const MR_Box mercury__io__environment_scalar_common_5[2][1];




static /* final */ const MR_Box mercury__io__environment_scalar_common_1[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io__environment_scalar_common_2[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__io__environment_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box mercury__io__environment_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__environment_scalar_common_1[1])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io__environment_scalar_common_4[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__environment_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io__environment_scalar_common_5[2][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "Cannot set environment variables on this platform")) },
  /* row   1 */
  { ((MR_Box) (&mercury__io__environment_scalar_common_5[0])) },
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

#line 210 "io.environment.m"
void 
ML_record_env_var_equal_value(
  MR_String EnvVarNameEqValue_4,
  MR_Word STATE_VARIABLE_EnvVarAL_0_11,
  MR_Word * STATE_VARIABLE_EnvVarAL_12)
#line 210 "io.environment.m"
{
#line 210 "io.environment.m"
	mercury__io__environment__record_env_var_equal_value_3_p_0((MR_String) EnvVarNameEqValue_4, (MR_Word) STATE_VARIABLE_EnvVarAL_0_11, (MR_Word *) STATE_VARIABLE_EnvVarAL_12);
}


static const MR_FA_TypeInfo_Struct2 mercury__io__environment__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 mercury__io__environment__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__io__environment__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0) }
};

const MR_TypeCtorInfo_Struct mercury__io__environment__io__environment__type_ctor_info_env_var_assoc_list_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__io__environment____Unify____env_var_assoc_list_0_0_10001)),
  ((MR_Box) (mercury__io__environment____Compare____env_var_assoc_list_0_0_10001)),
  (MR_String) "io.environment",
  (MR_String) "env_var_assoc_list",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__io__environment__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
mercury__io__environment____Compare____env_var_assoc_list_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mercury__io__environment_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mercury__io__environment____Unify____env_var_assoc_list_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mercury__io__environment_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static MR_bool MR_CALL 
mercury__io__environment__setenv_2_p_0(
  MR_String Var_1,
  MR_String Value_2)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__environment__setenv_2_p_0

	MR_String Var;
	MR_String Value;
	MR_bool SUCCESS_INDICATOR;

	Var = Var_1 ;
	Value = Value_2 ;
		{

#ifdef MR_WIN32
    SUCCESS_INDICATOR =
        (_wputenv_s(MR_utf8_to_wide(Var), MR_utf8_to_wide(Value)) == 0);
#else
    SUCCESS_INDICATOR = (setenv(Var, Value, 1) == 0);
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_bool MR_CALL 
mercury__io__environment__getenv_2_p_0(
  MR_String Var_1,
  MR_String * Value_2)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__environment__getenv_2_p_0

	MR_String Var;
	MR_String Value;
	MR_bool SUCCESS_INDICATOR;

	Var = Var_1 ;
		{

#ifdef MR_WIN32
    wchar_t *ValueW = _wgetenv(MR_utf8_to_wide(Var));
    if (ValueW != NULL) {
        Value = MR_wide_to_utf8(ValueW, MR_ALLOC_ID);
    } else {
        Value = NULL;
    }
#else
    Value = getenv(Var);
#endif
    SUCCESS_INDICATOR = (Value != 0);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*Value_2  = Value;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

static void MR_CALL 
mercury__io__environment__record_env_var_and_value_4_p_0(
  MR_String EnvVarName_5,
  MR_String EnvVarValue_6,
  MR_Word STATE_VARIABLE_EnvVarAL_0_8,
  MR_Word * STATE_VARIABLE_EnvVarAL_9)
{
  MR_Word Var_11;

  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (EnvVarName_5));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (EnvVarValue_6));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_EnvVarAL_9 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_EnvVarAL_0_8));
  }
}

static void MR_CALL 
mercury__io__environment__record_env_var_equal_value_3_p_0(
  MR_String EnvVarNameEqValue_4,
  MR_Word STATE_VARIABLE_EnvVarAL_0_11,
  MR_Word * STATE_VARIABLE_EnvVarAL_12)
{
  MR_bool succeeded;
  MR_String EnvVarName_7;
  MR_String EnvVarValue_10;
  MR_Integer IndexOfEq_6;
  MR_String EqEnvVarValue_8;
  MR_Char _Eq_9;

  succeeded = mercury__string__sub_string_search_start_4_p_0(EnvVarNameEqValue_4, (MR_String) "=", (MR_Integer) 0, &IndexOfEq_6);
  if (succeeded)
  {
    mercury__string__split_4_p_0(EnvVarNameEqValue_4, IndexOfEq_6, &EnvVarName_7, &EqEnvVarValue_8);
    succeeded = mercury__string__first_char_3_p_3(EqEnvVarValue_8, &_Eq_9, &EnvVarValue_10);
  }
  if (succeeded)
  {
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_15, 0) = ((MR_Box) (EnvVarName_7));
      MR_hl_field(0, Var_15, 1) = ((MR_Box) (EnvVarValue_10));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_EnvVarAL_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_EnvVarAL_0_11));
    }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140io.environment.record_env_var_equal_value\'/3", (MR_String) "No = in environment entry");
      return;
    }
}

void MR_CALL 
mercury__io__environment__get_environment_var_assoc_list_4_p_0(
  MR_Word EnvVarAL0_1,
  MR_Word * EnvVarAL_2)
{
{
#define MR_PROC_LABEL mercury__io__environment__get_environment_var_assoc_list_4_p_0

	MR_Word EnvVarAL0;
	MR_Word EnvVarAL;

	EnvVarAL0 = EnvVarAL0_1 ;
		{

    MR_Word cur_env = EnvVarAL0;
    MR_Word next_env;
    int     i;
    char    **environ_vars;

    // See the comments about the environ global below
    // for an explanation of this.
    #if defined(MR_MAC_OSX)
        environ_vars = (*_NSGetEnviron());
    #else
        environ_vars = environ;
    #endif

    for (i = 0; environ_vars[i] != NULL; i++) {
        ML_record_env_var_equal_value(environ_vars[i], cur_env, &next_env);
        cur_env = next_env;
    }

    EnvVarAL = cur_env;


		;}
#undef MR_PROC_LABEL
	*EnvVarAL_2  = EnvVarAL;
}
}

void MR_CALL 
mercury__io__environment__get_environment_var_map_3_p_0(
  MR_Word * EnvVarMap_4)
{
  MR_Word EnvVarAL_6;

{
#define MR_PROC_LABEL mercury__io__environment__get_environment_var_map_3_p_0

	MR_Word EnvVarAL0;
	MR_Word EnvVarAL;

	EnvVarAL0 = (MR_Word) ((MR_Unsigned) 0U) ;
		{

    MR_Word cur_env = EnvVarAL0;
    MR_Word next_env;
    int     i;
    char    **environ_vars;

    // See the comments about the environ global below
    // for an explanation of this.
    #if defined(MR_MAC_OSX)
        environ_vars = (*_NSGetEnviron());
    #else
        environ_vars = environ;
    #endif

    for (i = 0; environ_vars[i] != NULL; i++) {
        ML_record_env_var_equal_value(environ_vars[i], cur_env, &next_env);
        cur_env = next_env;
    }

    EnvVarAL = cur_env;


		;}
#undef MR_PROC_LABEL
	EnvVarAL_6  = EnvVarAL;
}
  mercury__tree234__assoc_list_to_tree234_acc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), EnvVarAL_6, (MR_Word) ((MR_Unsigned) 0U), EnvVarMap_4);
}

MR_bool MR_CALL 
mercury__io__environment__have_set_environment_var_0_p_0(void)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__environment__have_set_environment_var_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

void MR_CALL 
mercury__io__environment__set_environment_var_4_p_0(
  MR_String Var_5,
  MR_String Value_6)
{
  MR_Word Res_9;

  mercury__io__environment__set_environment_var_5_p_0(Var_5, Value_6, &Res_9);
  if (!((Res_9 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word ErrorCode_11 = ((MR_Word) ((MR_hl_field(1, Res_9, 0))));
    MR_String Var_12;

    mercury__io__error_message_2_p_0(ErrorCode_11, &Var_12);
    {
      mercury__require__error_1_p_0(Var_12);
      return;
    }
  }
}

void MR_CALL 
mercury__io__environment__set_environment_var_5_p_0(
  MR_String Var_6,
  MR_String Value_7,
  MR_Word * Res_8)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__environment__set_environment_var_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__io__environment__set_environment_var_5_p_0

	MR_String Var;
	MR_String Value;
	MR_bool SUCCESS_INDICATOR;

	Var = Var_6 ;
	Value = Value_7 ;
		{

#ifdef MR_WIN32
    SUCCESS_INDICATOR =
        (_wputenv_s(MR_utf8_to_wide(Var), MR_utf8_to_wide(Value)) == 0);
#else
    SUCCESS_INDICATOR = (setenv(Var, Value, 1) == 0);
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      *Res_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String Message_10;
      MR_Word Var_17;
      MR_String Var_21;

      mercury__string__append_3_p_2(Var_6, (MR_String) "\'", &Var_21);
      mercury__string__append_3_p_2((MR_String) "Could not set environment variable \140", Var_21, &Message_10);
      {
        Var_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_17, 0) = ((MR_Box) (Message_10));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Res_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_17));
      }
    }
  }
  else
    *Res_8 = (MR_Word) (MR_mkword(1, &mercury__io__environment_scalar_common_5[1]));
}

void MR_CALL 
mercury__io__environment__get_environment_var_4_p_0(
  MR_String Var_5,
  MR_Word * OptValue_6)
{
  MR_bool succeeded;
  MR_String Value_8;

{
#define MR_PROC_LABEL mercury__io__environment__get_environment_var_4_p_0

	MR_String Var;
	MR_String Value;
	MR_bool SUCCESS_INDICATOR;

	Var = Var_5 ;
		{

#ifdef MR_WIN32
    wchar_t *ValueW = _wgetenv(MR_utf8_to_wide(Var));
    if (ValueW != NULL) {
        Value = MR_wide_to_utf8(ValueW, MR_ALLOC_ID);
    } else {
        Value = NULL;
    }
#else
    Value = getenv(Var);
#endif
    SUCCESS_INDICATOR = (Value != 0);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Value_8  = Value;
	}
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *OptValue_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Value_8));
    }
  else
    *OptValue_6 = (MR_Word) ((MR_Unsigned) 0U);
}

static MR_bool MR_CALL 
mercury__io__environment____Unify____env_var_assoc_list_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io__environment____Unify____env_var_assoc_list_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__io__environment____Compare____env_var_assoc_list_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io__environment____Compare____env_var_assoc_list_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__io__environment__init(void)
{
}

void mercury__io__environment__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&mercury__io__environment__io__environment__type_ctor_info_env_var_assoc_list_0);
}

void mercury__io__environment__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__io__environment__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module io.environment.
