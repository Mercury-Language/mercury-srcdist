/*
** Automatically generated from `make.int_opt.m'
** by the Mercury compiler,
** version rotd-2026-07-11
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


// :- module make.int_opt.
// :- implementation.

/*
INIT mercury__make__int_opt__init
ENDINIT
*/

#include "make.int_opt.mih"


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
#include "backend_libs.link_target_util.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.index_set.mih"
#include "make.make_info.mih"
#include "make.options_file.mih"
#include "make.order.mih"
#include "make.prereqs_cache.mih"
#include "make.util.mih"
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
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_EnumFunctorDesc make__int_opt__make__int_opt__enum_functor_desc_build_what_0_0;

static const MR_EnumFunctorDesc make__int_opt__make__int_opt__enum_functor_desc_build_what_0_1;

static const MR_EnumFunctorDesc make__int_opt__make__int_opt__enum_functor_desc_build_what_0_2;

static const MR_EnumFunctorDesc make__int_opt__make__int_opt__enum_functor_desc_build_what_0_3;

static const MR_EnumFunctorDescPtr make__int_opt__make__int_opt__enum_ordinal_ordered_build_what_0[4];

static const MR_EnumFunctorDescPtr make__int_opt__make__int_opt__enum_name_ordered_build_what_0[4];

static const MR_Integer make__int_opt__make__int_opt__functor_number_map_build_what_0[4];

static MR_bool MR_CALL 
make__int_opt____Unify____build_what_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__int_opt____Compare____build_what_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);







#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.stream_ops.mh"
#include "make.build.mh"


static const MR_EnumFunctorDesc make__int_opt__make__int_opt__enum_functor_desc_build_what_0_0 = {
  (MR_String) "build_int3s",
  INT32_C(0)
};

static const MR_EnumFunctorDesc make__int_opt__make__int_opt__enum_functor_desc_build_what_0_1 = {
  (MR_String) "build_int3s_int0s",
  INT32_C(1)
};

static const MR_EnumFunctorDesc make__int_opt__make__int_opt__enum_functor_desc_build_what_0_2 = {
  (MR_String) "build_all_ints",
  INT32_C(2)
};

static const MR_EnumFunctorDesc make__int_opt__make__int_opt__enum_functor_desc_build_what_0_3 = {
  (MR_String) "build_all_ints_opts",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr make__int_opt__make__int_opt__enum_ordinal_ordered_build_what_0[4] = {
  &make__int_opt__make__int_opt__enum_functor_desc_build_what_0_0,
  &make__int_opt__make__int_opt__enum_functor_desc_build_what_0_1,
  &make__int_opt__make__int_opt__enum_functor_desc_build_what_0_2,
  &make__int_opt__make__int_opt__enum_functor_desc_build_what_0_3
};

static const MR_EnumFunctorDescPtr make__int_opt__make__int_opt__enum_name_ordered_build_what_0[4] = {
  &make__int_opt__make__int_opt__enum_functor_desc_build_what_0_2,
  &make__int_opt__make__int_opt__enum_functor_desc_build_what_0_3,
  &make__int_opt__make__int_opt__enum_functor_desc_build_what_0_0,
  &make__int_opt__make__int_opt__enum_functor_desc_build_what_0_1
};

static const MR_Integer make__int_opt__make__int_opt__functor_number_map_build_what_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct make__int_opt__make__int_opt__type_ctor_info_build_what_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__int_opt____Unify____build_what_0_0_10001)),
  ((MR_Box) (make__int_opt____Compare____build_what_0_0_10001)),
  (MR_String) "make.int_opt",
  (MR_String) "build_what",
  { make__int_opt__make__int_opt__enum_name_ordered_build_what_0 },
  { make__int_opt__make__int_opt__enum_ordinal_ordered_build_what_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  make__int_opt__make__int_opt__functor_number_map_build_what_0,

};

void MR_CALL 
make__int_opt____Compare____build_what_0_0(
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
make__int_opt____Unify____build_what_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
make__int_opt__build_int_opt_files_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word BuildWhat_12,
  MR_Word AllModules0_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  MR_bool succeeded;
  MR_Word NonnestedModules_17;
  MR_Word ParentModules_18;
  MR_Word Int3s_19;
  MR_Word Int0s_20;
  MR_Word Int1s_21;
  MR_Word AnyIntermod_22;
  MR_Word Opts_23;
  MR_Word KeepGoing_24;
  MR_Word Succeeded0_25;
  MR_Word STATE_VARIABLE_Info_1_32;
  MR_Word STATE_VARIABLE_Info_2_39;

  make__order__get_nonnested_and_parent_modules_9_p_0(ProgressStream_10, Globals_11, AllModules0_13, &NonnestedModules_17, &ParentModules_18, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_1_32);
  Int3s_19 = make__util__make_target_id_list_2_f_0(NonnestedModules_17, (MR_Word) ((MR_Unsigned) 20U));
  Int0s_20 = make__util__make_target_id_list_2_f_0(ParentModules_18, (MR_Word) ((MR_Unsigned) 8U));
  Int1s_21 = make__util__make_target_id_list_2_f_0(NonnestedModules_17, (MR_Word) ((MR_Unsigned) 12U));
  libs__globals__get_any_intermod_2_p_0(Globals_11, &AnyIntermod_22);
  switch (AnyIntermod_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Opts_23 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      Opts_23 = make__util__make_target_id_list_2_f_0(NonnestedModules_17, (MR_Word) ((MR_Unsigned) 24U));
      break;
  }
  KeepGoing_24 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_1_32);
  make__build__foldl2_make_module_targets_maybe_parallel_10_p_0(KeepGoing_24, (MR_Word) ((MR_Unsigned) 0U), ProgressStream_10, Globals_11, Int3s_19, &Succeeded0_25, STATE_VARIABLE_Info_1_32, &STATE_VARIABLE_Info_2_39);
  succeeded = (Succeeded0_25 == (MR_Integer) 0);
  if (!(succeeded))
    succeeded = (BuildWhat_12 == (MR_Integer) 0);
  if (succeeded)
  {
    *Succeeded_14 = Succeeded0_25;
    *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_2_39;
  }
  else
  {
    MR_Word Succeeded1_26;
    MR_Word STATE_VARIABLE_Info_3_42;

    make__build__foldl2_make_module_targets_10_p_0(KeepGoing_24, (MR_Word) ((MR_Unsigned) 0U), ProgressStream_10, Globals_11, Int0s_20, &Succeeded1_26, STATE_VARIABLE_Info_2_39, &STATE_VARIABLE_Info_3_42);
    succeeded = (Succeeded1_26 == (MR_Integer) 0);
    if (!(succeeded))
      succeeded = (BuildWhat_12 == (MR_Integer) 1);
    if (succeeded)
    {
      *Succeeded_14 = Succeeded1_26;
      *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_3_42;
    }
    else
    {
      MR_Word Succeeded2_27;
      MR_Word STATE_VARIABLE_Info_4_45;

      make__build__foldl2_make_module_targets_maybe_parallel_10_p_0(KeepGoing_24, (MR_Word) ((MR_Unsigned) 0U), ProgressStream_10, Globals_11, Int1s_21, &Succeeded2_27, STATE_VARIABLE_Info_3_42, &STATE_VARIABLE_Info_4_45);
      succeeded = (Succeeded2_27 == (MR_Integer) 0);
      if (!(succeeded))
        succeeded = (BuildWhat_12 == (MR_Integer) 2);
      if (succeeded)
      {
        *Succeeded_14 = Succeeded2_27;
        *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_4_45;
      }
      else
        make__build__foldl2_make_module_targets_maybe_parallel_10_p_0(KeepGoing_24, (MR_Word) ((MR_Unsigned) 0U), ProgressStream_10, Globals_11, Opts_23, Succeeded_14, STATE_VARIABLE_Info_4_45, STATE_VARIABLE_Info_29);
    }
  }
}

static MR_bool MR_CALL 
make__int_opt____Unify____build_what_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__int_opt____Unify____build_what_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__int_opt____Compare____build_what_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__int_opt____Compare____build_what_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__make__int_opt__init(void)
{
}

void mercury__make__int_opt__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&make__int_opt__make__int_opt__type_ctor_info_build_what_0);
}

void mercury__make__int_opt__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__int_opt__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module make.int_opt.
