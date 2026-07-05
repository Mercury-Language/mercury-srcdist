/*
** Automatically generated from `link_target_util.m'
** by the Mercury compiler,
** version rotd-2026-07-05
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


// :- module backend_libs.link_target_util.
// :- implementation.

/*
INIT mercury__backend_libs__link_target_util__init
ENDINIT
*/

#include "backend_libs.link_target_util.mih"


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
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
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
#include "io.file.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_EnumFunctorDesc backend_libs__link_target_util__backend_libs__link_target_util__enum_functor_desc_linked_target_type_0_0;

static const MR_EnumFunctorDesc backend_libs__link_target_util__backend_libs__link_target_util__enum_functor_desc_linked_target_type_0_1;

static const MR_EnumFunctorDesc backend_libs__link_target_util__backend_libs__link_target_util__enum_functor_desc_linked_target_type_0_2;

static const MR_EnumFunctorDesc backend_libs__link_target_util__backend_libs__link_target_util__enum_functor_desc_linked_target_type_0_3;

static const MR_EnumFunctorDesc backend_libs__link_target_util__backend_libs__link_target_util__enum_functor_desc_linked_target_type_0_4;

static const MR_EnumFunctorDesc backend_libs__link_target_util__backend_libs__link_target_util__enum_functor_desc_linked_target_type_0_5;

static const MR_EnumFunctorDesc backend_libs__link_target_util__backend_libs__link_target_util__enum_functor_desc_linked_target_type_0_6;

static const MR_EnumFunctorDescPtr backend_libs__link_target_util__backend_libs__link_target_util__enum_ordinal_ordered_linked_target_type_0[7];

static const MR_EnumFunctorDescPtr backend_libs__link_target_util__backend_libs__link_target_util__enum_name_ordered_linked_target_type_0[7];

static const MR_Integer backend_libs__link_target_util__backend_libs__link_target_util__functor_number_map_linked_target_type_0[7];

static MR_bool MR_CALL 
backend_libs__link_target_util____Unify____linked_target_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__link_target_util____Compare____linked_target_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box backend_libs__link_target_util_scalar_common_1[6][2];

static /* final */ const MR_Box backend_libs__link_target_util_scalar_common_2[2][1];


struct backend_libs__link_target_util__vector_common_type_3_0_s {
  const MR_Word backend_libs__link_target_util__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct backend_libs__link_target_util__vector_common_type_3_0_s backend_libs__link_target_util_vector_common_3[5];



static /* final */ const MR_Box backend_libs__link_target_util_scalar_common_1[6][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 8U)
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 7U)
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
};

static /* final */ const MR_Box backend_libs__link_target_util_scalar_common_2[2][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 1U) },
};


static /* final */ const struct backend_libs__link_target_util__vector_common_type_3_0_s backend_libs__link_target_util_vector_common_3[5] = {
  /* row   0 */   { (MR_Word) (MR_mkword(3, &backend_libs__link_target_util_scalar_common_1[4])) },
  /* row   1 */   { (MR_Word) (MR_mkword(3, &backend_libs__link_target_util_scalar_common_1[4])) },
  /* row   2 */   { (MR_Word) (MR_mkword(3, &backend_libs__link_target_util_scalar_common_1[4])) },
  /* row   3 */   { (MR_Word) (MR_mkword(3, &backend_libs__link_target_util_scalar_common_1[5])) },
  /* row   4 */   { (MR_Word) (MR_mkword(3, &backend_libs__link_target_util_scalar_common_1[5])) },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_EnumFunctorDesc backend_libs__link_target_util__backend_libs__link_target_util__enum_functor_desc_linked_target_type_0_0 = {
  (MR_String) "c_executable",
  INT32_C(0)
};

static const MR_EnumFunctorDesc backend_libs__link_target_util__backend_libs__link_target_util__enum_functor_desc_linked_target_type_0_1 = {
  (MR_String) "c_static_library",
  INT32_C(1)
};

static const MR_EnumFunctorDesc backend_libs__link_target_util__backend_libs__link_target_util__enum_functor_desc_linked_target_type_0_2 = {
  (MR_String) "c_shared_library",
  INT32_C(2)
};

static const MR_EnumFunctorDesc backend_libs__link_target_util__backend_libs__link_target_util__enum_functor_desc_linked_target_type_0_3 = {
  (MR_String) "csharp_executable",
  INT32_C(3)
};

static const MR_EnumFunctorDesc backend_libs__link_target_util__backend_libs__link_target_util__enum_functor_desc_linked_target_type_0_4 = {
  (MR_String) "csharp_library",
  INT32_C(4)
};

static const MR_EnumFunctorDesc backend_libs__link_target_util__backend_libs__link_target_util__enum_functor_desc_linked_target_type_0_5 = {
  (MR_String) "java_executable",
  INT32_C(5)
};

static const MR_EnumFunctorDesc backend_libs__link_target_util__backend_libs__link_target_util__enum_functor_desc_linked_target_type_0_6 = {
  (MR_String) "java_archive",
  INT32_C(6)
};

static const MR_EnumFunctorDescPtr backend_libs__link_target_util__backend_libs__link_target_util__enum_ordinal_ordered_linked_target_type_0[7] = {
  &backend_libs__link_target_util__backend_libs__link_target_util__enum_functor_desc_linked_target_type_0_0,
  &backend_libs__link_target_util__backend_libs__link_target_util__enum_functor_desc_linked_target_type_0_1,
  &backend_libs__link_target_util__backend_libs__link_target_util__enum_functor_desc_linked_target_type_0_2,
  &backend_libs__link_target_util__backend_libs__link_target_util__enum_functor_desc_linked_target_type_0_3,
  &backend_libs__link_target_util__backend_libs__link_target_util__enum_functor_desc_linked_target_type_0_4,
  &backend_libs__link_target_util__backend_libs__link_target_util__enum_functor_desc_linked_target_type_0_5,
  &backend_libs__link_target_util__backend_libs__link_target_util__enum_functor_desc_linked_target_type_0_6
};

static const MR_EnumFunctorDescPtr backend_libs__link_target_util__backend_libs__link_target_util__enum_name_ordered_linked_target_type_0[7] = {
  &backend_libs__link_target_util__backend_libs__link_target_util__enum_functor_desc_linked_target_type_0_0,
  &backend_libs__link_target_util__backend_libs__link_target_util__enum_functor_desc_linked_target_type_0_2,
  &backend_libs__link_target_util__backend_libs__link_target_util__enum_functor_desc_linked_target_type_0_1,
  &backend_libs__link_target_util__backend_libs__link_target_util__enum_functor_desc_linked_target_type_0_3,
  &backend_libs__link_target_util__backend_libs__link_target_util__enum_functor_desc_linked_target_type_0_4,
  &backend_libs__link_target_util__backend_libs__link_target_util__enum_functor_desc_linked_target_type_0_6,
  &backend_libs__link_target_util__backend_libs__link_target_util__enum_functor_desc_linked_target_type_0_5
};

static const MR_Integer backend_libs__link_target_util__backend_libs__link_target_util__functor_number_map_linked_target_type_0[7] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 6,
  (MR_Integer) 5
};

const MR_TypeCtorInfo_Struct backend_libs__link_target_util__backend_libs__link_target_util__type_ctor_info_linked_target_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__link_target_util____Unify____linked_target_type_0_0_10001)),
  ((MR_Box) (backend_libs__link_target_util____Compare____linked_target_type_0_0_10001)),
  (MR_String) "backend_libs.link_target_util",
  (MR_String) "linked_target_type",
  { backend_libs__link_target_util__backend_libs__link_target_util__enum_name_ordered_linked_target_type_0 },
  { backend_libs__link_target_util__backend_libs__link_target_util__enum_ordinal_ordered_linked_target_type_0 },
  (MR_Integer) 7,
  UINT16_C(12),
  backend_libs__link_target_util__backend_libs__link_target_util__functor_number_map_linked_target_type_0,

};

void MR_CALL 
backend_libs__link_target_util____Compare____linked_target_type_0_0(
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
backend_libs__link_target_util____Unify____linked_target_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
backend_libs__link_target_util__post_link_maybe_make_symlink_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word LinkedTargetType_13,
  MR_Word ModuleName_14,
  MR_String FullOutputFileName_15,
  MR_String CurDirOutputFileName_16,
  MR_Word LinkSucceeded_17,
  MR_Word * Succeeded_18)
{
  switch (LinkSucceeded_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Succeeded_18 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      {
        MR_Word _MadeSymlinkOrCopy_20;

        backend_libs__link_target_util__post_link_maybe_make_symlink_or_copy_10_p_0(ProgressStream_11, Globals_12, LinkedTargetType_13, ModuleName_14, FullOutputFileName_15, CurDirOutputFileName_16, Succeeded_18, &_MadeSymlinkOrCopy_20);
      }
      break;
  }
}

void MR_CALL 
backend_libs__link_target_util__post_link_maybe_make_symlink_or_copy_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word LinkedTargetType_13,
  MR_Word ModuleName_14,
  MR_String FullFileName_15,
  MR_String CurDirFileName_16,
  MR_Word * Succeeded_17,
  MR_Word * MadeSymlinkOrCopy_18)
{
  MR_bool succeeded = (strcmp(FullFileName_15, CurDirFileName_16) == 0);

  if (succeeded)
  {
    *Succeeded_17 = (MR_Integer) 1;
    *MadeSymlinkOrCopy_18 = (MR_Integer) 0;
  }
  else
  {
    MR_Word Succeeded0_21;

    succeeded = (strcmp(FullFileName_15, CurDirFileName_16) == 0);
    if (succeeded)
    {
      MR_Word FullTimeResult_38;

      mercury__io__file__file_modification_time_4_p_0(FullFileName_15, &FullTimeResult_38);
      if (((MR_tag((MR_Word) FullTimeResult_38)) == (MR_Integer) 1))
      {
        MR_Word Var_22;

        mercury__io__file__remove_file_recursively_4_p_0(CurDirFileName_16, &Var_22);
        parse_tree__module_cmds__make_symlink_or_copy_file_7_p_0(Globals_12, ProgressStream_11, FullFileName_15, CurDirFileName_16, &Succeeded0_21);
        *MadeSymlinkOrCopy_18 = (MR_Integer) 1;
      }
      else
      {
        Succeeded0_21 = (MR_Integer) 1;
        *MadeSymlinkOrCopy_18 = (MR_Integer) 0;
      }
    }
    else
    {
      MR_Word MaybeCmp_41;
      MR_Word Var_42;

      libs__file_util__compare_file_timestamps_5_p_0(FullFileName_15, CurDirFileName_16, &MaybeCmp_41);
      succeeded = (MaybeCmp_41 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_42 = ((MR_Word) ((MR_hl_field(1, MaybeCmp_41, 0))));
        succeeded = (Var_42 == (MR_Integer) 0);
      }
      if (succeeded)
      {
        Succeeded0_21 = (MR_Integer) 1;
        *MadeSymlinkOrCopy_18 = (MR_Integer) 0;
      }
      else
      {
        MR_Word Var_59;

        mercury__io__file__remove_file_recursively_4_p_0(CurDirFileName_16, &Var_59);
        parse_tree__module_cmds__make_symlink_or_copy_file_7_p_0(Globals_12, ProgressStream_11, FullFileName_15, CurDirFileName_16, &Succeeded0_21);
        *MadeSymlinkOrCopy_18 = (MR_Integer) 1;
      }
    }
    succeeded = (Succeeded0_21 == (MR_Integer) 1);
    if (succeeded)
      switch (LinkedTargetType_13) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 3:
          {
            MR_Word TargetEnvType_23;

            libs__globals__get_target_env_type_2_p_0(Globals_12, &TargetEnvType_23);
            succeeded = (TargetEnvType_23 == (MR_Integer) 0);
          }
          break;
        case (MR_Integer) 5:
          succeeded = MR_TRUE;
          break;
      }
    if (succeeded)
    {
      MR_Word ScriptExt_24;
      MR_String FullLauncherName_25;
      MR_String CurDirLauncherName_27;
      MR_Word TargetEnvType_43;
      MR_String _FullLauncherNameProposed_26;

      libs__globals__get_target_env_type_2_p_0(Globals_12, &TargetEnvType_43);
      ScriptExt_24 = ((&backend_libs__link_target_util_vector_common_3[0 + TargetEnvType_43]))->backend_libs__link_target_util__vector_common_type_3_0__vct_3_f_0;
      parse_tree__file_names__module_name_to_file_name_full_curdir_7_p_0(Globals_12, (MR_String) "predicate \140backend_libs.link_target_util.post_link_maybe_make_symlink_or_copy\'/10", ScriptExt_24, ModuleName_14, &FullLauncherName_25, &_FullLauncherNameProposed_26, &CurDirLauncherName_27);
      succeeded = (strcmp(FullLauncherName_25, CurDirLauncherName_27) == 0);
      if (succeeded)
      {
        MR_Word FullTimeResult_46;

        mercury__io__file__file_modification_time_4_p_0(FullLauncherName_25, &FullTimeResult_46);
        if (((MR_tag((MR_Word) FullTimeResult_46)) == (MR_Integer) 1))
        {
          MR_Word Var_29;

          mercury__io__file__remove_file_recursively_4_p_0(CurDirLauncherName_27, &Var_29);
          parse_tree__module_cmds__make_symlink_or_copy_file_7_p_0(Globals_12, ProgressStream_11, FullLauncherName_25, CurDirLauncherName_27, Succeeded_17);
        }
        else
          *Succeeded_17 = (MR_Integer) 1;
      }
      else
      {
        MR_Word MaybeCmp_49;
        MR_Word Var_50;

        libs__file_util__compare_file_timestamps_5_p_0(FullLauncherName_25, CurDirLauncherName_27, &MaybeCmp_49);
        succeeded = (MaybeCmp_49 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_50 = ((MR_Word) ((MR_hl_field(1, MaybeCmp_49, 0))));
          succeeded = (Var_50 == (MR_Integer) 0);
        }
        if (succeeded)
          *Succeeded_17 = (MR_Integer) 1;
        else
        {
          MR_Word Var_67;

          mercury__io__file__remove_file_recursively_4_p_0(CurDirLauncherName_27, &Var_67);
          parse_tree__module_cmds__make_symlink_or_copy_file_7_p_0(Globals_12, ProgressStream_11, FullLauncherName_25, CurDirLauncherName_27, Succeeded_17);
        }
      }
    }
    else
      *Succeeded_17 = Succeeded0_21;
  }
}

void MR_CALL 
backend_libs__link_target_util__post_link_msg_4_p_0(
  MR_Word ProgressStream_5,
  MR_Word Globals_6)
{
  MR_Word Stats_8;

  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 133, &Stats_8);
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_5, Stats_8);
}

void MR_CALL 
backend_libs__link_target_util__pre_link_msg_4_p_0(
  MR_Word ProgressStream_5,
  MR_Word Globals_6)
{
  MR_Word Verbose_8;

  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 131, &Verbose_8);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_5, Verbose_8, (MR_String) "% Linking...\n");
}

void MR_CALL 
backend_libs__link_target_util__linked_target_file_name_full_curdir_7_p_0(
  MR_Word Globals_8,
  MR_Word MainModuleName_9,
  MR_Word LinkedTargetType_10,
  MR_String * FullFileName_11,
  MR_String * CurDirFileName_12)
{
  switch (LinkedTargetType_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String _FullFileNameProposed_15;

        parse_tree__file_names__module_name_to_file_name_full_curdir_create_dirs_9_p_0(Globals_8, (MR_String) "predicate \140backend_libs.link_target_util.linked_target_file_name_full_curdir\'/7", (MR_Word) (MR_mkword(3, &backend_libs__link_target_util_scalar_common_1[0])), MainModuleName_9, FullFileName_11, &_FullFileNameProposed_15, CurDirFileName_12);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_String _FullFileNameProposed_37;

        parse_tree__file_names__module_name_to_file_name_full_curdir_create_dirs_9_p_0(Globals_8, (MR_String) "predicate \140backend_libs.link_target_util.linked_target_file_name_full_curdir\'/7", (MR_Word) (MR_mkword(3, &backend_libs__link_target_util_scalar_common_1[1])), MainModuleName_9, FullFileName_11, &_FullFileNameProposed_37, CurDirFileName_12);
      }
      break;
    case (MR_Integer) 4:
      {
        MR_String _FullFileNameProposed_41;

        parse_tree__file_names__module_name_to_file_name_full_curdir_create_dirs_9_p_0(Globals_8, (MR_String) "predicate \140backend_libs.link_target_util.linked_target_file_name_full_curdir\'/7", (MR_Word) (MR_mkword(2, &backend_libs__link_target_util_scalar_common_2[0])), MainModuleName_9, FullFileName_11, &_FullFileNameProposed_41, CurDirFileName_12);
      }
      break;
    case (MR_Integer) 6:
      {
        MR_String _FullFileNameProposed_45;

        parse_tree__file_names__module_name_to_file_name_full_curdir_create_dirs_9_p_0(Globals_8, (MR_String) "predicate \140backend_libs.link_target_util.linked_target_file_name_full_curdir\'/7", (MR_Word) (MR_mkword(2, &backend_libs__link_target_util_scalar_common_2[1])), MainModuleName_9, FullFileName_11, &_FullFileNameProposed_45, CurDirFileName_12);
      }
      break;
    case (MR_Integer) 5:
      {
        MR_String _FullFileNameProposed_49;

        parse_tree__file_names__module_name_to_file_name_full_curdir_create_dirs_9_p_0(Globals_8, (MR_String) "predicate \140backend_libs.link_target_util.linked_target_file_name_full_curdir\'/7", (MR_Word) (MR_mkword(2, &backend_libs__link_target_util_scalar_common_2[1])), MainModuleName_9, FullFileName_11, &_FullFileNameProposed_49, CurDirFileName_12);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String _FullFileNameProposed_30;

        parse_tree__file_names__module_name_to_lib_file_name_full_curdir_create_dirs_10_p_0(Globals_8, (MR_String) "predicate \140backend_libs.link_target_util.linked_target_file_name_full_curdir\'/7", (MR_String) "lib", (MR_Word) (MR_mkword(3, &backend_libs__link_target_util_scalar_common_1[2])), MainModuleName_9, FullFileName_11, &_FullFileNameProposed_30, CurDirFileName_12);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String _FullFileNameProposed_32;

        parse_tree__file_names__module_name_to_lib_file_name_full_curdir_create_dirs_10_p_0(Globals_8, (MR_String) "predicate \140backend_libs.link_target_util.linked_target_file_name_full_curdir\'/7", (MR_String) "lib", (MR_Word) (MR_mkword(3, &backend_libs__link_target_util_scalar_common_1[3])), MainModuleName_9, FullFileName_11, &_FullFileNameProposed_32, CurDirFileName_12);
      }
      break;
  }
}

static MR_bool MR_CALL 
backend_libs__link_target_util____Unify____linked_target_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__link_target_util____Unify____linked_target_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__link_target_util____Compare____linked_target_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__link_target_util____Compare____linked_target_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__backend_libs__link_target_util__init(void)
{
}

void mercury__backend_libs__link_target_util__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&backend_libs__link_target_util__backend_libs__link_target_util__type_ctor_info_linked_target_type_0);
}

void mercury__backend_libs__link_target_util__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__link_target_util__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module backend_libs.link_target_util.
