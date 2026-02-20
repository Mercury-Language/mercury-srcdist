/*
** Automatically generated from `write_trace_counts.m'
** by the Mercury compiler,
** version rotd-2026-02-20
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


// :- module mdbcomp.write_trace_counts.
// :- implementation.

/*
INIT mercury__mdbcomp__write_trace_counts__init
ENDINIT
*/

#include "mdbcomp.write_trace_counts.mih"


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
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__write_trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

static MR_bool MR_CALL 
mdbcomp__write_trace_counts__IntroducedFrom__pred__write_proc_label_and_check__108__1_2_p_0(
  MR_Word ModuleNameSym_7,
  MR_Word DefModuleSym_10);

static void MR_CALL 
mdbcomp__write_trace_counts__write_path_port_count_5_p_0(
  MR_Word OutputStream_6,
  MR_Word PathPort_7,
  MR_Word LineNoAndCount_8);

static void MR_CALL 
mdbcomp__write_trace_counts__write_proc_label_and_file_trace_counts_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mdbcomp__write_trace_counts__write_proc_label_and_file_trace_counts_9_p_0(
  MR_Word OutputStream_10,
  MR_Word ProcLabelInContext_11,
  MR_Word PathPortCounts_12,
  MR_Word STATE_VARIABLE_CurModuleNameSym_0_20,
  MR_Word * STATE_VARIABLE_CurModuleNameSym_21,
  MR_String STATE_VARIABLE_CurFileName_0_22,
  MR_String * STATE_VARIABLE_CurFileName_23);

static MR_bool MR_CALL 
mdbcomp__write_trace_counts__write_proc_label_and_check_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
mdbcomp__write_trace_counts__write_proc_label_and_check_5_p_0(
  MR_Word OutputStream_6,
  MR_Word ModuleNameSym_7,
  MR_Word ProcLabel_8);

static void MR_CALL 
mdbcomp__write_trace_counts__write_trace_counts_to_file_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);


static /* final */ const MR_Box mdbcomp__write_trace_counts_scalar_common_1[2][3];

static /* final */ const MR_Box mdbcomp__write_trace_counts_scalar_common_2[1][4];

static /* final */ const MR_Box mdbcomp__write_trace_counts_scalar_common_3[2][5];

static /* final */ const MR_Box mdbcomp__write_trace_counts_scalar_common_4[2][1];

static /* final */ const MR_Box mdbcomp__write_trace_counts_scalar_common_5[1][12];

static /* final */ const MR_Box mdbcomp__write_trace_counts_scalar_common_6[1][8];




static /* final */ const MR_Box mdbcomp__write_trace_counts_scalar_common_1[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mdbcomp__write_trace_counts_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mdbcomp__write_trace_counts_scalar_common_1[1])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mdbcomp__write_trace_counts_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mdbcomp__write_trace_counts_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box mdbcomp__write_trace_counts_scalar_common_4[2][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "")) },
  /* row   1 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box mdbcomp__write_trace_counts_scalar_common_5[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0)),
    ((MR_Box) (&mdbcomp__write_trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mdbcomp__write_trace_counts_scalar_common_6[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "mdbcomp.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__write_trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0),
    (MR_PseudoTypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)
  }
};

static MR_bool MR_CALL 
mdbcomp__write_trace_counts__IntroducedFrom__pred__write_proc_label_and_check__108__1_2_p_0(
  MR_Word ModuleNameSym_7,
  MR_Word DefModuleSym_10)
{
  MR_bool succeeded;

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleNameSym_7, DefModuleSym_10);
  return succeeded;
}

static void MR_CALL 
mdbcomp__write_trace_counts__write_path_port_count_5_p_0(
  MR_Word OutputStream_6,
  MR_Word PathPort_7,
  MR_Word LineNoAndCount_8)
{
  MR_Integer LineNo_10 = ((MR_Integer) ((MR_hl_field(0, LineNoAndCount_8, 0))));
  MR_Integer ExecCount_11 = ((MR_Integer) ((MR_hl_field(0, LineNoAndCount_8, 1))));
  MR_Integer NumTests_12 = ((MR_Integer) ((MR_hl_field(0, LineNoAndCount_8, 2))));

  switch (MR_tag((MR_Word) PathPort_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Port_13 = ((MR_Unsigned) ((MR_hl_field(0, PathPort_7, 0))) & (MR_Integer) 15);
        MR_String PortStr_14;
        MR_String Var_62;
        MR_String Var_72;
        MR_String Var_82;

        mdbcomp__prim_data__string_to_trace_port_2_p_1(&PortStr_14, Port_13);
        mercury__io__write_string_4_p_0(OutputStream_6, PortStr_14);
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__write_trace_counts_scalar_common_4[1]), LineNo_10, &Var_62);
        mercury__io__write_string_4_p_0(OutputStream_6, Var_62);
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__write_trace_counts_scalar_common_4[1]), ExecCount_11, &Var_72);
        mercury__io__write_string_4_p_0(OutputStream_6, Var_72);
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__write_trace_counts_scalar_common_4[1]), NumTests_12, &Var_82);
        mercury__io__write_string_4_p_0(OutputStream_6, Var_82);
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\n");
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Path_15 = ((MR_Word) ((MR_hl_field(1, PathPort_7, 0))));
        MR_String Var_33;
        MR_String Var_131;
        MR_String Var_141;
        MR_String Var_151;

        Var_33 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(Path_15);
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "<");
        mercury__io__write_string_4_p_0(OutputStream_6, Var_33);
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "> ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__write_trace_counts_scalar_common_4[1]), LineNo_10, &Var_131);
        mercury__io__write_string_4_p_0(OutputStream_6, Var_131);
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__write_trace_counts_scalar_common_4[1]), ExecCount_11, &Var_141);
        mercury__io__write_string_4_p_0(OutputStream_6, Var_141);
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__write_trace_counts_scalar_common_4[1]), NumTests_12, &Var_151);
        mercury__io__write_string_4_p_0(OutputStream_6, Var_151);
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\n");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String Var_47;
        MR_Word Port_55 = ((MR_Unsigned) ((MR_hl_field(2, PathPort_7, 0))) & (MR_Integer) 15);
        MR_String PortStr_56;
        MR_Word Path_57 = ((MR_Word) ((MR_hl_field(2, PathPort_7, 1))));
        MR_String Var_97;
        MR_String Var_107;
        MR_String Var_117;

        mdbcomp__prim_data__string_to_trace_port_2_p_1(&PortStr_56, Port_55);
        Var_47 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(Path_57);
        mercury__io__write_string_4_p_0(OutputStream_6, PortStr_56);
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " <");
        mercury__io__write_string_4_p_0(OutputStream_6, Var_47);
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "> ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__write_trace_counts_scalar_common_4[1]), LineNo_10, &Var_97);
        mercury__io__write_string_4_p_0(OutputStream_6, Var_97);
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__write_trace_counts_scalar_common_4[1]), ExecCount_11, &Var_107);
        mercury__io__write_string_4_p_0(OutputStream_6, Var_107);
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__write_trace_counts_scalar_common_4[1]), NumTests_12, &Var_117);
        mercury__io__write_string_4_p_0(OutputStream_6, Var_117);
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\n");
      }
      break;
  }
}

static void MR_CALL 
mdbcomp__write_trace_counts__write_proc_label_and_file_trace_counts_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mdbcomp__write_trace_counts__write_path_port_count_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
mdbcomp__write_trace_counts__write_proc_label_and_file_trace_counts_9_p_0(
  MR_Word OutputStream_10,
  MR_Word ProcLabelInContext_11,
  MR_Word PathPortCounts_12,
  MR_Word STATE_VARIABLE_CurModuleNameSym_0_20,
  MR_Word * STATE_VARIABLE_CurModuleNameSym_21,
  MR_String STATE_VARIABLE_CurFileName_0_22,
  MR_String * STATE_VARIABLE_CurFileName_23)
{
  MR_bool succeeded;
  MR_Word ModuleNameSym_16 = ((MR_Word) ((MR_hl_field(0, ProcLabelInContext_11, 0))));
  MR_String FileName_17 = ((MR_String) ((MR_hl_field(0, ProcLabelInContext_11, 1))));
  MR_Word ProcLabel_18 = ((MR_Word) ((MR_hl_field(0, ProcLabelInContext_11, 2))));
  MR_Word Var_39;
  MR_Box conv0_STATE_VARIABLE_IO_25;

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleNameSym_16, STATE_VARIABLE_CurModuleNameSym_0_20);
  if (succeeded)
    *STATE_VARIABLE_CurModuleNameSym_21 = STATE_VARIABLE_CurModuleNameSym_0_20;
  else
  {
    MR_String ModuleName_19;

    ModuleName_19 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleNameSym_16);
    mercury__io__write_string_4_p_0(OutputStream_10, (MR_String) "module ");
    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&mdbcomp__write_trace_counts_scalar_common_3[0]), OutputStream_10, ModuleName_19);
    mercury__io__write_string_4_p_0(OutputStream_10, (MR_String) "\n");
    *STATE_VARIABLE_CurModuleNameSym_21 = ModuleNameSym_16;
  }
  succeeded = (strcmp(FileName_17, STATE_VARIABLE_CurFileName_0_22) == 0);
  if (succeeded)
    *STATE_VARIABLE_CurFileName_23 = STATE_VARIABLE_CurFileName_0_22;
  else
  {
    mercury__io__write_string_4_p_0(OutputStream_10, (MR_String) "file ");
    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&mdbcomp__write_trace_counts_scalar_common_3[0]), OutputStream_10, FileName_17);
    mercury__io__write_string_4_p_0(OutputStream_10, (MR_String) "\n");
    *STATE_VARIABLE_CurFileName_23 = FileName_17;
  }
  mdbcomp__write_trace_counts__write_proc_label_and_check_5_p_0(OutputStream_10, ModuleNameSym_16, ProcLabel_18);
  {
    Var_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_39, 0) = ((MR_Box) (&mdbcomp__write_trace_counts_scalar_common_6[0]));
    MR_hl_field(0, Var_39, 1) = ((MR_Box) (mdbcomp__write_trace_counts__write_proc_label_and_file_trace_counts_9_p_0_1));
    MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_39, 3) = ((MR_Box) (OutputStream_10));
  }
  mercury__map__foldl_4_p_2((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_39, PathPortCounts_12, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_25);
}

static MR_bool MR_CALL 
mdbcomp__write_trace_counts__write_proc_label_and_check_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mdbcomp__write_trace_counts__IntroducedFrom__pred__write_proc_label_and_check__108__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
mdbcomp__write_trace_counts__write_proc_label_and_check_5_p_0(
  MR_Word OutputStream_6,
  MR_Word ModuleNameSym_7,
  MR_Word ProcLabel_8)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) ProcLabel_8)) == (MR_Integer) 0))
  {
    MR_Word DefModuleSym_10 = ((MR_Word) ((MR_hl_field(0, ProcLabel_8, 0))));
    MR_Word Var_24;
    MR_Word DefModuleSym_27;
    MR_Word PredOrFunc_28;
    MR_Word DeclModuleSym_29;
    MR_String Name_30;
    MR_Integer Arity_31;
    MR_Integer Mode_32;
    MR_String Var_66;
    MR_String Var_76;

    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_24, 0) = ((MR_Box) (&mdbcomp__write_trace_counts_scalar_common_3[1]));
      MR_hl_field(0, Var_24, 1) = ((MR_Box) (mdbcomp__write_trace_counts__write_proc_label_and_check_5_p_0_1));
      MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_24, 3) = ((MR_Box) (ModuleNameSym_7));
      MR_hl_field(0, Var_24, 4) = ((MR_Box) (DefModuleSym_10));
    }
    mercury__require__require_2_p_0(Var_24, (MR_String) "write_proc_label_and_check: module mismatch");
    DefModuleSym_27 = ((MR_Word) ((MR_hl_field(0, ProcLabel_8, 0))));
    PredOrFunc_28 = ((MR_Unsigned) ((MR_hl_field(0, ProcLabel_8, 1))) & (MR_Integer) 1);
    DeclModuleSym_29 = ((MR_Word) ((MR_hl_field(0, ProcLabel_8, 2))));
    Name_30 = ((MR_String) ((MR_hl_field(0, ProcLabel_8, 3))));
    Arity_31 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_8, 4))));
    Mode_32 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_8, 5))));
    switch (PredOrFunc_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(DeclModuleSym_29, DefModuleSym_27);
          if (succeeded)
            mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "fproc ");
          else
          {
            MR_String DeclModule_59;

            DeclModule_59 = mdbcomp__sym_name__sym_name_to_string_1_f_0(DeclModuleSym_29);
            mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "fprocdecl ");
            mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&mdbcomp__write_trace_counts_scalar_common_3[0]), OutputStream_6, DeclModule_59);
            mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " ");
          }
        }
        break;
      case (MR_Integer) 0:
        {
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(DeclModuleSym_29, DefModuleSym_27);
          if (succeeded)
            mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "pproc ");
          else
          {
            MR_String DeclModule_33;

            DeclModule_33 = mdbcomp__sym_name__sym_name_to_string_1_f_0(DeclModuleSym_29);
            mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "pprocdecl ");
            mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&mdbcomp__write_trace_counts_scalar_common_3[0]), OutputStream_6, DeclModule_33);
            mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " ");
          }
        }
        break;
    }
    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&mdbcomp__write_trace_counts_scalar_common_3[0]), OutputStream_6, Name_30);
    mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__write_trace_counts_scalar_common_4[1]), Arity_31, &Var_66);
    mercury__io__write_string_4_p_0(OutputStream_6, Var_66);
    mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__write_trace_counts_scalar_common_4[1]), Mode_32, &Var_76);
    mercury__io__write_string_4_p_0(OutputStream_6, Var_76);
    mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\n");
  }
  else
    {
      mercury__require__error_1_p_0((MR_String) "write_proc_label: special_pred");
      return;
    }
}

static void MR_CALL 
mdbcomp__write_trace_counts__write_trace_counts_to_file_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_CurModuleNameSym_21;
  MR_String conv0_STATE_VARIABLE_CurFileName_23;

  mdbcomp__write_trace_counts__write_proc_label_and_file_trace_counts_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_CurModuleNameSym_21, ((MR_String) (wrapper_arg_5)), &conv0_STATE_VARIABLE_CurFileName_23);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_CurModuleNameSym_21));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_CurFileName_23));
}

void MR_CALL 
mdbcomp__write_trace_counts__write_trace_counts_to_file_6_p_0(
  MR_Word FileType_7,
  MR_Word TraceCounts_8,
  MR_String FileName_9,
  MR_Word * Result_10)
{
  MR_Word FileResult_12;

  mercury__io__open_output_4_p_0(FileName_9, &FileResult_12);
  if (((MR_tag((MR_Word) FileResult_12)) == (MR_Integer) 1))
  {
    MR_Word Error_14 = ((MR_Word) ((MR_hl_field(1, FileResult_12, 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Error_14));
    }
  }
  else
  {
    MR_Word FileStream_13 = ((MR_Word) ((MR_hl_field(0, FileResult_12, 0))));
    MR_String Var_18;
    MR_Word Var_27;
    MR_Box conv4_Var_22;
    MR_Box conv3_Var_23;
    MR_Box conv2_STATE_VARIABLE_IO_4_21;

    *Result_10 = (MR_Word) ((MR_Unsigned) 0U);
    Var_18 = mdbcomp__trace_counts__trace_count_file_id_0_f_0();
    mercury__io__write_string_4_p_0(FileStream_13, Var_18);
    mercury__io__nl_3_p_0(FileStream_13);
    mercury__io__write_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0), FileStream_13, ((MR_Box) (FileType_7)));
    mercury__io__write_string_4_p_0(FileStream_13, (MR_String) ".\n");
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_27, 0) = ((MR_Box) (&mdbcomp__write_trace_counts_scalar_common_5[0]));
      MR_hl_field(0, Var_27, 1) = ((MR_Box) (mdbcomp__write_trace_counts__write_trace_counts_to_file_6_p_0_1));
      MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_27, 3) = ((MR_Box) (FileStream_13));
    }
    mercury__map__foldl3_8_p_2((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__write_trace_counts_scalar_common_1[0]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_27, TraceCounts_8, ((MR_Box) (&mdbcomp__write_trace_counts_scalar_common_4[0])), &conv4_Var_22, ((MR_Box) ((MR_String) "")), &conv3_Var_23, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_4_21);
    mercury__io__close_output_3_p_0(FileStream_13);
  }
}

void mercury__mdbcomp__write_trace_counts__init(void)
{
}

void mercury__mdbcomp__write_trace_counts__init_type_tables(void)
{
}

void mercury__mdbcomp__write_trace_counts__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdbcomp__write_trace_counts__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module mdbcomp.write_trace_counts.
