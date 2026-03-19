/*
** Automatically generated from `output_imports_graph.m'
** by the Mercury compiler,
** version rotd-2026-03-19
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


// :- module parse_tree.output_imports_graph.
// :- implementation.

/*
INIT mercury__parse_tree__output_imports_graph__init
ENDINIT
*/

#include "parse_tree.output_imports_graph.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__output_imports_graph__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__output_imports_graph__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static void MR_CALL 
parse_tree__output_imports_graph__write_edge_5_p_0(
  MR_Word Stream_6,
  MR_Word A_7,
  MR_Word B_8);

static void MR_CALL 
parse_tree__output_imports_graph__write_node_4_p_0(
  MR_Word Stream_5,
  MR_Word Node_6);

static void MR_CALL 
parse_tree__output_imports_graph__filter_imports_graph_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_DepsGraph_0_9,
  MR_Word * STATE_VARIABLE_DepsGraph_10);

static void MR_CALL 
parse_tree__output_imports_graph__maybe_output_imports_graph_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__output_imports_graph__maybe_output_imports_graph_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__output_imports_graph__maybe_output_imports_graph_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__output_imports_graph__maybe_output_imports_graph_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box parse_tree__output_imports_graph_scalar_common_1[3][3];

static /* final */ const MR_Box parse_tree__output_imports_graph_scalar_common_2[1][2];

static /* final */ const MR_Box parse_tree__output_imports_graph_scalar_common_3[1][6];

static /* final */ const MR_Box parse_tree__output_imports_graph_scalar_common_4[1][7];

static /* final */ const MR_Box parse_tree__output_imports_graph_scalar_common_5[1][8];




static /* final */ const MR_Box parse_tree__output_imports_graph_scalar_common_1[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__output_imports_graph_scalar_common_3[0])),
    ((MR_Box) (parse_tree__output_imports_graph__maybe_output_imports_graph_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__output_imports_graph_scalar_common_3[0])),
    ((MR_Box) (parse_tree__output_imports_graph__maybe_output_imports_graph_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__output_imports_graph_scalar_common_2[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__output_imports_graph_scalar_common_3[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__output_imports_graph__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__output_imports_graph__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__output_imports_graph__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__output_imports_graph_scalar_common_4[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__output_imports_graph_scalar_common_5[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
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


static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__output_imports_graph__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__output_imports_graph__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static void MR_CALL 
parse_tree__output_imports_graph__write_edge_5_p_0(
  MR_Word Stream_6,
  MR_Word A_7,
  MR_Word B_8)
{
  MR_String Var_16;
  MR_String Var_19;
  MR_String Var_27;
  MR_String Var_28;
  MR_String Var_32;
  MR_String Var_33;

  Var_28 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(A_7, (MR_String) "__");
  Var_27 = mercury__string__f_43_43_2_f_0(Var_28, (MR_String) "\"");
  Var_16 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_27);
  Var_33 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(B_8, (MR_String) "__");
  Var_32 = mercury__string__f_43_43_2_f_0(Var_33, (MR_String) "\"");
  Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_32);
  mercury__io__write_string_4_p_0(Stream_6, Var_16);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) " -> ");
  mercury__io__write_string_4_p_0(Stream_6, Var_19);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ";\n");
}

static void MR_CALL 
parse_tree__output_imports_graph__write_node_4_p_0(
  MR_Word Stream_5,
  MR_Word Node_6)
{
  MR_String Var_14;
  MR_String Var_19;
  MR_String Var_20;

  Var_20 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(Node_6, (MR_String) "__");
  Var_19 = mercury__string__f_43_43_2_f_0(Var_20, (MR_String) "\"");
  Var_14 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_19);
  mercury__io__write_string_4_p_0(Stream_5, Var_14);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ";\n");
}

static void MR_CALL 
parse_tree__output_imports_graph__filter_imports_graph_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_DepsGraph_0_9,
  MR_Word * STATE_VARIABLE_DepsGraph_10)
{
  MR_bool succeeded;
  MR_Word A_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Word B_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));

  succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(B_5);
  if (!(succeeded))
  {
    MR_String Var_7;
    MR_String Var_8;

    succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(A_4, &Var_7);
    if (succeeded)
      succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(B_5, &Var_8);
  }
  if (succeeded)
    *STATE_VARIABLE_DepsGraph_10 = STATE_VARIABLE_DepsGraph_0_9;
  else
    mercury__digraph__add_vertices_and_edge_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (A_4)), ((MR_Box) (B_5)), STATE_VARIABLE_DepsGraph_0_9, STATE_VARIABLE_DepsGraph_10);
}

static void MR_CALL 
parse_tree__output_imports_graph__maybe_output_imports_graph_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__output_imports_graph__write_edge_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__output_imports_graph__maybe_output_imports_graph_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__output_imports_graph__write_node_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__output_imports_graph__maybe_output_imports_graph_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_DepsGraph_10;

  parse_tree__output_imports_graph__filter_imports_graph_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_DepsGraph_10);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_DepsGraph_10));
}

static void MR_CALL 
parse_tree__output_imports_graph__maybe_output_imports_graph_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_DepsGraph_10;

  parse_tree__output_imports_graph__filter_imports_graph_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DepsGraph_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DepsGraph_10));
}

void MR_CALL 
parse_tree__output_imports_graph__maybe_output_imports_graph_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word IntDepsGraph_11,
  MR_Word ImpDepsGraph_12)
{
  MR_Word ShowImportsGraph_14;

  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 270, &ShowImportsGraph_14);
  switch (ShowImportsGraph_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String ImportsGraphFileName_15;
        MR_Word Verbose_16;
        MR_Word ImportsGraphOpenResult_17;

        parse_tree__file_names__module_name_to_cur_dir_file_name_3_p_0((MR_Integer) 5, ModuleName_10, &ImportsGraphFileName_15);
        libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 131, &Verbose_16);
        switch (Verbose_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "% Creating imports graph file \140");
              mercury__io__write_string_4_p_0(ProgressStream_8, ImportsGraphFileName_15);
              mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "\'...");
            }
            break;
        }
        mercury__io__open_output_4_p_0(ImportsGraphFileName_15, &ImportsGraphOpenResult_17);
        if (((MR_tag((MR_Word) ImportsGraphOpenResult_17)) == (MR_Integer) 1))
        {
          MR_Word IOError_22 = ((MR_Word) ((MR_hl_field(1, ImportsGraphOpenResult_17, 0))));

          switch (Verbose_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) " failed.\n");
                mercury__io__flush_output_3_p_0(ProgressStream_8);
              }
              break;
          }
          libs__file_util__report_cannot_open_file_for_output_6_p_0(ProgressStream_8, Globals_9, ImportsGraphFileName_15, IOError_22);
        }
        else
        {
          MR_Word ImportsGraphStream_18 = ((MR_Word) ((MR_hl_field(0, ImportsGraphOpenResult_17, 0))));
          MR_Word DepsGraph0_19;
          MR_Word DepsGraph1_20;
          MR_Word DepsGraph_21;
          MR_Word Var_35;
          MR_Word Var_37;
          MR_Word Var_71;
          MR_Word Var_72;
          MR_Box conv1_DepsGraph1_20;
          MR_Box conv3_DepsGraph_21;
          MR_Box conv4_STATE_VARIABLE_IO_4_73;

          mercury__digraph__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &DepsGraph0_19);
          Var_35 = mercury__digraph__to_assoc_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntDepsGraph_11);
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__output_imports_graph_scalar_common_1[0]), (MR_Word) (&parse_tree__output_imports_graph_scalar_common_2[0]), (MR_Word) (&parse_tree__output_imports_graph_scalar_common_1[1]), Var_35, ((MR_Box) (DepsGraph0_19)), &conv1_DepsGraph1_20);
          DepsGraph1_20 = ((MR_Word) (conv1_DepsGraph1_20));
          Var_37 = mercury__digraph__to_assoc_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDepsGraph_12);
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__output_imports_graph_scalar_common_1[0]), (MR_Word) (&parse_tree__output_imports_graph_scalar_common_2[0]), (MR_Word) (&parse_tree__output_imports_graph_scalar_common_1[2]), Var_37, ((MR_Box) (DepsGraph1_20)), &conv3_DepsGraph_21);
          DepsGraph_21 = ((MR_Word) (conv3_DepsGraph_21));
          mercury__io__write_string_4_p_0(ImportsGraphStream_18, (MR_String) "digraph imports {\n");
          mercury__io__write_string_4_p_0(ImportsGraphStream_18, (MR_String) "label=\"imports\";\n");
          mercury__io__write_string_4_p_0(ImportsGraphStream_18, (MR_String) "center=true;\n");
          {
            Var_71 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_71, 0) = ((MR_Box) (&parse_tree__output_imports_graph_scalar_common_4[0]));
            MR_hl_field(0, Var_71, 1) = ((MR_Box) (parse_tree__output_imports_graph__maybe_output_imports_graph_7_p_0_3));
            MR_hl_field(0, Var_71, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_71, 3) = ((MR_Box) (ImportsGraphStream_18));
          }
          {
            Var_72 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_72, 0) = ((MR_Box) (&parse_tree__output_imports_graph_scalar_common_5[0]));
            MR_hl_field(0, Var_72, 1) = ((MR_Box) (parse_tree__output_imports_graph__maybe_output_imports_graph_7_p_0_4));
            MR_hl_field(0, Var_72, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_72, 3) = ((MR_Box) (ImportsGraphStream_18));
          }
          mercury__digraph__traverse_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), DepsGraph_21, Var_71, Var_72, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_4_73);
          mercury__io__write_string_4_p_0(ImportsGraphStream_18, (MR_String) "}\n");
          mercury__io__close_output_3_p_0(ImportsGraphStream_18);
          switch (Verbose_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) " done.\n");
              break;
          }
        }
      }
      break;
  }
}

void mercury__parse_tree__output_imports_graph__init(void)
{
}

void mercury__parse_tree__output_imports_graph__init_type_tables(void)
{
}

void mercury__parse_tree__output_imports_graph__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__output_imports_graph__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.output_imports_graph.
