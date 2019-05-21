/*
** Automatically generated from `arg_pack.m'
** by the Mercury compiler,
** version rotd-2018-04-02
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
