/*
** Automatically generated from `make.util.m'
** by the Mercury compiler,
** version rotd-2025-07-06
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


// :- module make.util.
// :- implementation.

/*
INIT mercury__make__util__init
ENDINIT
*/

#include "make.util.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "make.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "version_hash_table.mih"
#include "backend_libs.compile_target_code.mih"
#include "backend_libs.link_target_code.mih"
#include "io.file.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.deps_cache.mih"
#include "make.deps_set.mih"
#include "make.file_names.mih"
#include "make.make_info.mih"
#include "make.options_file.mih"
#include "make.timestamp.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_EnumFunctorDesc make__util__make__util__enum_functor_desc_maybe_grade_dependent_0_0;

static const MR_EnumFunctorDesc make__util__make__util__enum_functor_desc_maybe_grade_dependent_0_1;

static const MR_EnumFunctorDescPtr make__util__make__util__enum_ordinal_ordered_maybe_grade_dependent_0[2];

static const MR_EnumFunctorDescPtr make__util__make__util__enum_name_ordered_maybe_grade_dependent_0[2];

static const MR_Integer make__util__make__util__functor_number_map_maybe_grade_dependent_0[2];

static const MR_EnumFunctorDesc make__util__make__util__enum_functor_desc_stop_or_continue_0_0;

static const MR_EnumFunctorDesc make__util__make__util__enum_functor_desc_stop_or_continue_0_1;

static const MR_EnumFunctorDescPtr make__util__make__util__enum_ordinal_ordered_stop_or_continue_0[2];

static const MR_EnumFunctorDescPtr make__util__make__util__enum_name_ordered_stop_or_continue_0[2];

static const MR_Integer make__util__make__util__functor_number_map_stop_or_continue_0[2];

static MR_Word MR_CALL 
make__util__IntroducedFrom__func__make_dependency_list__296__1_2_f_0(
  MR_Word TargetType_5,
  MR_Word LambdaHeadVar__1_8);

static MR_Word MR_CALL 
make__util__IntroducedFrom__func__make_target_file_list__292__1_2_f_0(
  MR_Word TargetType_5,
  MR_Word LambdaHeadVar__1_8);

static MR_Box MR_CALL 
make__util__make_dependency_list_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__util__make_target_file_list_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
make__util____Unify____maybe_grade_dependent_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__util____Compare____maybe_grade_dependent_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__util____Unify____stop_or_continue_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__util____Compare____stop_or_continue_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box make__util_scalar_common_1[1][2];

static /* final */ const MR_Box make__util_scalar_common_2[1][3];

static /* final */ const MR_Box make__util_scalar_common_3[1][4];

static /* final */ const MR_Box make__util_scalar_common_4[2][6];




static /* final */ const MR_Box make__util_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__util_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__util_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__util_scalar_common_1[0])),
    ((MR_Box) (&make__util_scalar_common_2[0]))
  },
};

static /* final */ const MR_Box make__util_scalar_common_4[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_file_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.stream_ops.mh"
#include "make.build.mh"
#include "make.util.mh"


static const MR_EnumFunctorDesc make__util__make__util__enum_functor_desc_maybe_grade_dependent_0_0 = {
  (MR_String) "not_grade_dependent",
  INT32_C(0)
};

static const MR_EnumFunctorDesc make__util__make__util__enum_functor_desc_maybe_grade_dependent_0_1 = {
  (MR_String) "grade_dependent",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr make__util__make__util__enum_ordinal_ordered_maybe_grade_dependent_0[2] = {
  &make__util__make__util__enum_functor_desc_maybe_grade_dependent_0_0,
  &make__util__make__util__enum_functor_desc_maybe_grade_dependent_0_1
};

static const MR_EnumFunctorDescPtr make__util__make__util__enum_name_ordered_maybe_grade_dependent_0[2] = {
  &make__util__make__util__enum_functor_desc_maybe_grade_dependent_0_1,
  &make__util__make__util__enum_functor_desc_maybe_grade_dependent_0_0
};

static const MR_Integer make__util__make__util__functor_number_map_maybe_grade_dependent_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__util__make__util__type_ctor_info_maybe_grade_dependent_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__util____Unify____maybe_grade_dependent_0_0_10001)),
  ((MR_Box) (make__util____Compare____maybe_grade_dependent_0_0_10001)),
  (MR_String) "make.util",
  (MR_String) "maybe_grade_dependent",
  { make__util__make__util__enum_name_ordered_maybe_grade_dependent_0 },
  { make__util__make__util__enum_ordinal_ordered_maybe_grade_dependent_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__util__make__util__functor_number_map_maybe_grade_dependent_0,

};

static const MR_EnumFunctorDesc make__util__make__util__enum_functor_desc_stop_or_continue_0_0 = {
  (MR_String) "soc_stop",
  INT32_C(0)
};

static const MR_EnumFunctorDesc make__util__make__util__enum_functor_desc_stop_or_continue_0_1 = {
  (MR_String) "soc_continue",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr make__util__make__util__enum_ordinal_ordered_stop_or_continue_0[2] = {
  &make__util__make__util__enum_functor_desc_stop_or_continue_0_0,
  &make__util__make__util__enum_functor_desc_stop_or_continue_0_1
};

static const MR_EnumFunctorDescPtr make__util__make__util__enum_name_ordered_stop_or_continue_0[2] = {
  &make__util__make__util__enum_functor_desc_stop_or_continue_0_1,
  &make__util__make__util__enum_functor_desc_stop_or_continue_0_0
};

static const MR_Integer make__util__make__util__functor_number_map_stop_or_continue_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__util__make__util__type_ctor_info_stop_or_continue_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__util____Unify____stop_or_continue_0_0_10001)),
  ((MR_Box) (make__util____Compare____stop_or_continue_0_0_10001)),
  (MR_String) "make.util",
  (MR_String) "stop_or_continue",
  { make__util__make__util__enum_name_ordered_stop_or_continue_0 },
  { make__util__make__util__enum_ordinal_ordered_stop_or_continue_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__util__make__util__functor_number_map_stop_or_continue_0,

};

static MR_Word MR_CALL 
make__util__IntroducedFrom__func__make_dependency_list__296__1_2_f_0(
  MR_Word TargetType_5,
  MR_Word LambdaHeadVar__1_8)
{
  MR_Word LambdaHeadVar__2_9;
  MR_Word Var_10;

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (LambdaHeadVar__1_8));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (TargetType_5));
  }
  LambdaHeadVar__2_9 = (MR_Word) ((MR_Word) (Var_10));
  return LambdaHeadVar__2_9;
}

static MR_Word MR_CALL 
make__util__IntroducedFrom__func__make_target_file_list__292__1_2_f_0(
  MR_Word TargetType_5,
  MR_Word LambdaHeadVar__1_8)
{
  MR_Word LambdaHeadVar__2_9;

  {
    LambdaHeadVar__2_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__2_9, 0) = ((MR_Box) (LambdaHeadVar__1_8));
    MR_hl_field(0, LambdaHeadVar__2_9, 1) = ((MR_Box) (TargetType_5));
  }
  return LambdaHeadVar__2_9;
}

void MR_CALL 
make__util____Compare____stop_or_continue_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
make__util____Unify____stop_or_continue_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
make__util____Compare____maybe_grade_dependent_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
make__util____Unify____maybe_grade_dependent_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
make__util__get_real_milliseconds_3_p_0(
  MR_Integer * Time_1)
{
{
#define MR_PROC_LABEL make__util__get_real_milliseconds_3_p_0

	MR_Integer Time;

		{

    Time = MR_get_real_milliseconds();


		;}
#undef MR_PROC_LABEL
	*Time_1  = Time;
}
}

void MR_CALL 
make__util__maybe_write_msg_locked_5_p_0(
  MR_Word OutStream_6,
  MR_Word Info_7,
  MR_String Msg_8)
{
  MR_bool succeeded = (strcmp(Msg_8, (MR_String) "") == 0);

  if (!(succeeded))
  {
    MR_Word MaybeLock_10;

    MaybeLock_10 = make__make_info__make_info_get_maybe_stdout_lock_1_f_0(Info_7);
    if ((MaybeLock_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_4_p_0(OutStream_6, Msg_8);
      mercury__io__flush_output_3_p_0(OutStream_6);
    }
    else
    {
      MR_Box Lock_11 = ((MR_Box) ((MR_hl_field(1, MaybeLock_10, 0))));

      make__build__lock_stdout_3_p_0(Lock_11);
      mercury__io__write_string_4_p_0(OutStream_6, Msg_8);
      mercury__io__flush_output_3_p_0(OutStream_6);
      make__build__unlock_stdout_3_p_0(Lock_11);
    }
  }
}

void MR_CALL 
make__util__maybe_write_msg_4_p_0(
  MR_Word OutStream_5,
  MR_String Msg_6)
{
  MR_bool succeeded = (strcmp(Msg_6, (MR_String) "") == 0);

  if (!(succeeded))
  {
    mercury__io__write_string_4_p_0(OutStream_5, Msg_6);
    mercury__io__flush_output_3_p_0(OutStream_5);
  }
}

void MR_CALL 
make__util__maybe_symlink_or_copy_linked_target_msg_3_p_0(
  MR_Word Globals_4,
  MR_String FileName_5,
  MR_String * Msg_6)
{
  MR_Word VerboseMake_7;

  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 137, &VerboseMake_7);
  switch (VerboseMake_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Msg_6 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      {
        MR_String Var_14;

        Var_14 = mercury__string__f_43_43_2_f_0(FileName_5, (MR_String) "\n");
        *Msg_6 = mercury__string__f_43_43_2_f_0((MR_String) "Made symlink/copy of ", Var_14);
      }
      break;
  }
}

void MR_CALL 
make__util__maybe_warn_up_to_date_target_msg_6_p_0(
  MR_Word Globals_7,
  MR_Word Target_8,
  MR_String FileName_9,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16,
  MR_String * Msg_11)
{
  MR_bool succeeded;
  MR_Word Warn_12;
  MR_Word CmdLineTargets0_13;
  MR_Word CmdLineTargets_14;

  libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 269, &Warn_12);
  CmdLineTargets0_13 = make__make_info__make_info_get_command_line_targets_1_f_0(STATE_VARIABLE_Info_0_15);
  switch (Warn_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Msg_11 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      {
        succeeded = mercury__set__member_2_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0), ((MR_Box) (Target_8)), CmdLineTargets0_13);
        if (succeeded)
        {
          MR_String Var_25;

          Var_25 = mercury__string__f_43_43_2_f_0(FileName_9, (MR_String) "\'.\n");
          *Msg_11 = mercury__string__f_43_43_2_f_0((MR_String) "** Nothing to be done for \140", Var_25);
        }
        else
          *Msg_11 = (MR_String) "";
      }
      break;
  }
  mercury__set__delete_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0), ((MR_Box) (Target_8)), CmdLineTargets0_13, &CmdLineTargets_14);
  make__make_info__make_info_set_command_line_targets_3_p_0(CmdLineTargets_14, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
}

void MR_CALL 
make__util__file_error_msg_2_p_0(
  MR_String FileName_3,
  MR_String * Msg_4)
{
  MR_String Var_10;

  Var_10 = mercury__string__f_43_43_2_f_0(FileName_3, (MR_String) "\'.\n");
  *Msg_4 = mercury__string__f_43_43_2_f_0((MR_String) "** Error making \140", Var_10);
}

void MR_CALL 
make__util__maybe_reanalyse_modules_msg_2_p_0(
  MR_Word Globals_3,
  MR_String * Msg_4)
{
  MR_Word VerboseMake_5;

  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 137, &VerboseMake_5);
  switch (VerboseMake_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Msg_4 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      *Msg_4 = (MR_String) "Reanalysing invalid/suboptimal modules\n";
      break;
  }
}

void MR_CALL 
make__util__maybe_making_filename_msg_3_p_0(
  MR_Word Globals_4,
  MR_String FileName_5,
  MR_String * Msg_6)
{
  MR_Word VerboseMake_7;

  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 137, &VerboseMake_7);
  switch (VerboseMake_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Msg_6 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      {
        MR_String Var_14;

        Var_14 = mercury__string__f_43_43_2_f_0(FileName_5, (MR_String) "\n");
        *Msg_6 = mercury__string__f_43_43_2_f_0((MR_String) "Making ", Var_14);
      }
      break;
  }
}

void MR_CALL 
make__util__option_set_one_part_msg_4_p_0(
  MR_Word Globals_5,
  MR_Word Option_6,
  MR_String Part1_7,
  MR_String * Msg_8)
{
  MR_Word OptionValue_9;

  libs__globals__lookup_bool_option_3_p_0(Globals_5, Option_6, &OptionValue_9);
  switch (OptionValue_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Msg_8 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      *Msg_8 = mercury__string__f_43_43_2_f_0(Part1_7, (MR_String) "\n");
      break;
  }
}

void MR_CALL 
make__util__verbose_make_four_part_msg_6_p_0(
  MR_Word Globals_7,
  MR_String Part1_8,
  MR_String Part2_9,
  MR_String Part3_10,
  MR_String Part4_11,
  MR_String * Msg_12)
{
  make__util__option_set_four_part_msg_7_p_0(Globals_7, (MR_Integer) 137, Part1_8, Part2_9, Part3_10, Part4_11, Msg_12);
}

void MR_CALL 
make__util__option_set_four_part_msg_7_p_0(
  MR_Word Globals_8,
  MR_Word Option_9,
  MR_String Part1_10,
  MR_String Part2_11,
  MR_String Part3_12,
  MR_String Part4_13,
  MR_String * Msg_14)
{
  MR_Word OptionValue_15;

  libs__globals__lookup_bool_option_3_p_0(Globals_8, Option_9, &OptionValue_15);
  switch (OptionValue_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Msg_14 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      {
        MR_String Var_27;
        MR_String Var_29;
        MR_String Var_30;
        MR_String Var_32;
        MR_String Var_33;
        MR_String Var_35;

        Var_27 = mercury__string__f_43_43_2_f_0(Part4_13, (MR_String) "\n");
        Var_29 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_27);
        Var_30 = mercury__string__f_43_43_2_f_0(Part3_12, Var_29);
        Var_32 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_30);
        Var_33 = mercury__string__f_43_43_2_f_0(Part2_11, Var_32);
        Var_35 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_33);
        *Msg_14 = mercury__string__f_43_43_2_f_0(Part1_10, Var_35);
      }
      break;
  }
}

void MR_CALL 
make__util__verbose_make_three_part_msg_5_p_0(
  MR_Word Globals_6,
  MR_String Part1_7,
  MR_String Part2_8,
  MR_String Part3_9,
  MR_String * Msg_10)
{
  make__util__option_set_three_part_msg_6_p_0(Globals_6, (MR_Integer) 137, Part1_7, Part2_8, Part3_9, Msg_10);
}

void MR_CALL 
make__util__option_set_three_part_msg_6_p_0(
  MR_Word Globals_7,
  MR_Word Option_8,
  MR_String Part1_9,
  MR_String Part2_10,
  MR_String Part3_11,
  MR_String * Msg_12)
{
  MR_Word OptionValue_13;

  libs__globals__lookup_bool_option_3_p_0(Globals_7, Option_8, &OptionValue_13);
  switch (OptionValue_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Msg_12 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      {
        MR_String Var_23;
        MR_String Var_25;
        MR_String Var_26;
        MR_String Var_28;

        Var_23 = mercury__string__f_43_43_2_f_0(Part3_11, (MR_String) "\n");
        Var_25 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_23);
        Var_26 = mercury__string__f_43_43_2_f_0(Part2_10, Var_25);
        Var_28 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_26);
        *Msg_12 = mercury__string__f_43_43_2_f_0(Part1_9, Var_28);
      }
      break;
  }
}

void MR_CALL 
make__util__verbose_make_two_part_msg_4_p_0(
  MR_Word Globals_5,
  MR_String Part1_6,
  MR_String Part2_7,
  MR_String * Msg_8)
{
  make__util__option_set_two_part_msg_5_p_0(Globals_5, (MR_Integer) 137, Part1_6, Part2_7, Msg_8);
}

void MR_CALL 
make__util__verbose_make_one_part_msg_3_p_0(
  MR_Word Globals_4,
  MR_String Part1_5,
  MR_String * Msg_6)
{
  MR_Word OptionValue_8;

  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 137, &OptionValue_8);
  switch (OptionValue_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Msg_6 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      *Msg_6 = mercury__string__f_43_43_2_f_0(Part1_5, (MR_String) "\n");
      break;
  }
}

void MR_CALL 
make__util__debug_make_msg_3_p_0(
  MR_Word Globals_4,
  MR_Word MakeMsgPred_5,
  MR_String * Msg_6)
{
  MR_Word DebugMake_7;

  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 179, &DebugMake_7);
  switch (DebugMake_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Msg_6 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *)) ((MR_hl_field(0, MakeMsgPred_5, 1))));
        MR_Box conv1_Msg_6;

        func_0(((MR_Box) (MakeMsgPred_5)), &conv1_Msg_6);
        *Msg_6 = ((MR_String) (conv1_Msg_6));
      }
      break;
  }
}

void MR_CALL 
make__util__should_we_stop_or_continue_5_p_0(
  MR_Word KeepGoing_6,
  MR_Word JobSucceeded_7,
  MR_Word * StopOrContinue_8,
  MR_Word STATE_VARIABLE_Succeeded_0_10,
  MR_Word * STATE_VARIABLE_Succeeded_11)
{
  switch (JobSucceeded_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_Succeeded_11 = (MR_Integer) 0;
        switch (KeepGoing_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            *StopOrContinue_8 = (MR_Integer) 1;
            break;
          case (MR_Integer) 0:
            *StopOrContinue_8 = (MR_Integer) 0;
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *StopOrContinue_8 = (MR_Integer) 1;
        *STATE_VARIABLE_Succeeded_11 = STATE_VARIABLE_Succeeded_0_10;
      }
      break;
  }
}

MR_Word MR_CALL 
make__util__is_target_grade_dependent_1_f_0(
  MR_Word Target_3)
{
  MR_Word IsDependent_4;

  switch (MR_tag((MR_Word) Target_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Target_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          IsDependent_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          IsDependent_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          IsDependent_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 3:
          IsDependent_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 4:
          IsDependent_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 5:
          IsDependent_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 6:
          IsDependent_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 7:
          IsDependent_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 8:
          IsDependent_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 9:
          IsDependent_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 10:
          IsDependent_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 11:
          IsDependent_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 12:
          IsDependent_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 13:
          IsDependent_4 = (MR_Integer) 0;
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_10 = ((MR_Unsigned) ((MR_hl_field(1, Target_3, 0))) & (MR_Integer) 1);

        switch (Var_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            IsDependent_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            IsDependent_4 = (MR_Integer) 1;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      IsDependent_4 = (MR_Integer) 1;
      break;
    case (MR_Integer) 3:
      IsDependent_4 = (MR_Integer) 1;
      break;
  }
  return IsDependent_4;
}

static MR_Box MR_CALL 
make__util__make_dependency_list_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_9;

  conv0_LambdaHeadVar__2_9 = make__util__IntroducedFrom__func__make_dependency_list__296__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_9));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
make__util__make_dependency_list_2_f_0(
  MR_Word ModuleNames_4,
  MR_Word TargetType_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_7;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_7, 0) = ((MR_Box) (&make__util_scalar_common_4[1]));
    MR_hl_field(0, Var_7, 1) = ((MR_Box) (make__util__make_dependency_list_2_f_0_1));
    MR_hl_field(0, Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_7, 3) = ((MR_Box) (TargetType_5));
  }
  HeadVar__3_3 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), Var_7, ModuleNames_4);
  return HeadVar__3_3;
}

static MR_Box MR_CALL 
make__util__make_target_file_list_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_9;

  conv0_LambdaHeadVar__2_9 = make__util__IntroducedFrom__func__make_target_file_list__292__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_9));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
make__util__make_target_file_list_2_f_0(
  MR_Word ModuleNames_4,
  MR_Word TargetType_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_7;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_7, 0) = ((MR_Box) (&make__util_scalar_common_4[0]));
    MR_hl_field(0, Var_7, 1) = ((MR_Box) (make__util__make_target_file_list_2_f_0_1));
    MR_hl_field(0, Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_7, 3) = ((MR_Box) (TargetType_5));
  }
  HeadVar__3_3 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), Var_7, ModuleNames_4);
  return HeadVar__3_3;
}

void MR_CALL 
make__util__remove_module_file_for_make_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word VerboseOption_12,
  MR_Word ModuleName_13,
  MR_Word Ext_14,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_String FileNameLegacy_17;
  MR_String FileNameProposed_18;
  MR_Word STATE_VARIABLE_Info_1_24;

  parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_11, (MR_String) "predicate \140make.util.remove_module_file_for_make\'/9", Ext_14, ModuleName_13, &FileNameLegacy_17, &FileNameProposed_18);
  make__util__remove_file_for_make_8_p_0(ProgressStream_10, Globals_11, VerboseOption_12, FileNameLegacy_17, STATE_VARIABLE_Info_0_19, &STATE_VARIABLE_Info_1_24);
  make__util__remove_file_for_make_8_p_0(ProgressStream_10, Globals_11, VerboseOption_12, FileNameProposed_18, STATE_VARIABLE_Info_1_24, STATE_VARIABLE_Info_20);
}

void MR_CALL 
make__util__remove_make_target_file_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_String From_12,
  MR_Word VerboseOption_13,
  MR_Word Target_14,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(0, Target_14, 0))));
  MR_Word TargetType_18 = ((MR_Word) ((MR_hl_field(0, Target_14, 1))));

  make__util__remove_make_target_file_by_name_10_p_0(ProgressStream_10, Globals_11, From_12, VerboseOption_13, ModuleName_17, TargetType_18, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20);
}

void MR_CALL 
make__util__remove_make_target_file_by_name_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_String From_13,
  MR_Word VerboseOption_14,
  MR_Word ModuleName_15,
  MR_Word TargetType_16,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_bool succeeded;
  MR_String FileNameLegacy_19;
  MR_String FileNameProposed_20;
  MR_Word STATE_VARIABLE_Info_1_27;
  MR_Word STATE_VARIABLE_Info_2_29;
  MR_Word TimestampExt_21;

  make__file_names__module_target_to_file_name_8_p_0(Globals_12, From_13, TargetType_16, ModuleName_15, &FileNameLegacy_19, &FileNameProposed_20);
  make__util__remove_file_for_make_8_p_0(ProgressStream_11, Globals_12, VerboseOption_14, FileNameLegacy_19, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_1_27);
  make__util__remove_file_for_make_8_p_0(ProgressStream_11, Globals_12, VerboseOption_14, FileNameProposed_20, STATE_VARIABLE_Info_1_27, &STATE_VARIABLE_Info_2_29);
  succeeded = make__file_names__date_file_extension_2_p_0(TargetType_16, &TimestampExt_21);
  if (succeeded)
  {
    MR_String FileNameLegacy_31;
    MR_String FileNameProposed_32;
    MR_Word STATE_VARIABLE_Info_1_34;

    parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_12, (MR_String) "predicate \140make.util.remove_module_file_for_make\'/9", TimestampExt_21, ModuleName_15, &FileNameLegacy_31, &FileNameProposed_32);
    make__util__remove_file_for_make_8_p_0(ProgressStream_11, Globals_12, VerboseOption_14, FileNameLegacy_31, STATE_VARIABLE_Info_2_29, &STATE_VARIABLE_Info_1_34);
    make__util__remove_file_for_make_8_p_0(ProgressStream_11, Globals_12, VerboseOption_14, FileNameProposed_32, STATE_VARIABLE_Info_1_34, STATE_VARIABLE_Info_23);
  }
  else
    *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_2_29;
}

void MR_CALL 
make__util__remove_file_for_make_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word VerboseOption_11,
  MR_String FileName_12,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_bool succeeded;
  MR_String RemovingMsg_15;
  MR_Word FileTimestampMap0_17;
  MR_Word FileTimestampMap_18;
  MR_Word STATE_VARIABLE_Info_1_26;
  MR_Word Var_27;
  MR_Word Var_16;

  make__util__option_set_two_part_msg_5_p_0(Globals_10, VerboseOption_11, (MR_String) "Removing", FileName_12, &RemovingMsg_15);
  succeeded = (strcmp(RemovingMsg_15, (MR_String) "") == 0);
  if (!(succeeded))
  {
    mercury__io__write_string_4_p_0(ProgressStream_9, RemovingMsg_15);
    mercury__io__flush_output_3_p_0(ProgressStream_9);
  }
  mercury__io__file__remove_file_recursively_4_p_0(FileName_12, &Var_16);
  FileTimestampMap0_17 = make__make_info__make_info_get_file_timestamp_map_1_f_0(STATE_VARIABLE_Info_0_19);
  mercury__map__delete_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__util_scalar_common_3[0]), ((MR_Box) (FileName_12)), FileTimestampMap0_17, &FileTimestampMap_18);
  make__make_info__make_info_set_file_timestamp_map_3_p_0(FileTimestampMap_18, STATE_VARIABLE_Info_0_19, &STATE_VARIABLE_Info_1_26);
  Var_27 = make__timestamp__init_target_file_timestamp_map_0_f_0();
  make__make_info__make_info_set_target_file_timestamp_map_3_p_0(Var_27, STATE_VARIABLE_Info_1_26, STATE_VARIABLE_Info_20);
}

void MR_CALL 
make__util__option_set_two_part_msg_5_p_0(
  MR_Word Globals_6,
  MR_Word Option_7,
  MR_String Part1_8,
  MR_String Part2_9,
  MR_String * Msg_10)
{
  MR_Word OptionValue_11;

  libs__globals__lookup_bool_option_3_p_0(Globals_6, Option_7, &OptionValue_11);
  switch (OptionValue_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Msg_10 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      {
        MR_String Var_19;
        MR_String Var_21;

        Var_19 = mercury__string__f_43_43_2_f_0(Part2_9, (MR_String) "\n");
        Var_21 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_19);
        *Msg_10 = mercury__string__f_43_43_2_f_0(Part1_8, Var_21);
      }
      break;
  }
}

static MR_bool MR_CALL 
make__util____Unify____maybe_grade_dependent_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__util____Unify____maybe_grade_dependent_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__util____Compare____maybe_grade_dependent_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__util____Compare____maybe_grade_dependent_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__util____Unify____stop_or_continue_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__util____Unify____stop_or_continue_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__util____Compare____stop_or_continue_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__util____Compare____stop_or_continue_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__make__util__init(void)
{
}

void mercury__make__util__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&make__util__make__util__type_ctor_info_maybe_grade_dependent_0);
  MR_register_type_ctor_info(&make__util__make__util__type_ctor_info_stop_or_continue_0);
}

void mercury__make__util__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__util__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module make.util.
