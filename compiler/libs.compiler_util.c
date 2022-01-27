/*
** Automatically generated from `compiler_util.m'
** by the Mercury compiler,
** version rotd-2013-03-21, configured for x86_64-apple-darwin12.2.1.
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


/* :- module libs.compiler_util. */
/* :- implementation. */

/*
INIT mercury__libs__compiler_util__init
ENDINIT
*/

#include "libs.compiler_util.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"










#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 38 "compiler_util.m"
void MR_CALL 
libs__compiler_util__report_warning_to_stream_5_p_0(
#line 38 "compiler_util.m"
  MR_Word libs__compiler_util__Globals_6,
#line 38 "compiler_util.m"
  MR_Word libs__compiler_util__Stream_7,
#line 38 "compiler_util.m"
  MR_String libs__compiler_util__Message_8)
#line 38 "compiler_util.m"
{
#line 65 "compiler_util.m"
  {
#line 65 "compiler_util.m"
    MR_bool libs__compiler_util__succeeded;
#line 65 "compiler_util.m"
    MR_Word libs__compiler_util__HaltAtWarn_18;

#line 53 "compiler_util.m"
    {
#line 53 "compiler_util.m"
      libs__globals__lookup_bool_option_3_p_0(libs__compiler_util__Globals_6, (MR_Integer) 2, &libs__compiler_util__HaltAtWarn_18);
    }
#line 57 "compiler_util.m"
    if ((libs__compiler_util__HaltAtWarn_18 == (MR_Integer) 0))
#line 58 "compiler_util.m"
      {
#line 58 "compiler_util.m"
      }
#line 57 "compiler_util.m"
    else
#line 55 "compiler_util.m"
      {
#line 56 "compiler_util.m"
        {
#line 56 "compiler_util.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 55 "compiler_util.m"
      }
#line 67 "compiler_util.m"
    {
#line 67 "compiler_util.m"
      mercury__io__write_string_4_p_0(libs__compiler_util__Stream_7, libs__compiler_util__Message_8);
#line 67 "compiler_util.m"
      return;
    }
#line 65 "compiler_util.m"
  }
#line 38 "compiler_util.m"
}

#line 33 "compiler_util.m"
void MR_CALL 
libs__compiler_util__report_warning_4_p_0(
#line 33 "compiler_util.m"
  MR_Word libs__compiler_util__Globals_5,
#line 33 "compiler_util.m"
  MR_String libs__compiler_util__Message_6)
#line 33 "compiler_util.m"
{
#line 61 "compiler_util.m"
  {
#line 61 "compiler_util.m"
    MR_bool libs__compiler_util__succeeded;
#line 61 "compiler_util.m"
    MR_Word libs__compiler_util__HaltAtWarn_16;

#line 53 "compiler_util.m"
    {
#line 53 "compiler_util.m"
      libs__globals__lookup_bool_option_3_p_0(libs__compiler_util__Globals_5, (MR_Integer) 2, &libs__compiler_util__HaltAtWarn_16);
    }
#line 57 "compiler_util.m"
    if ((libs__compiler_util__HaltAtWarn_16 == (MR_Integer) 0))
#line 58 "compiler_util.m"
      {
#line 58 "compiler_util.m"
      }
#line 57 "compiler_util.m"
    else
#line 55 "compiler_util.m"
      {
#line 56 "compiler_util.m"
        {
#line 56 "compiler_util.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 55 "compiler_util.m"
      }
#line 63 "compiler_util.m"
    {
#line 63 "compiler_util.m"
      mercury__io__write_string_3_p_0(libs__compiler_util__Message_6);
#line 63 "compiler_util.m"
      return;
    }
#line 61 "compiler_util.m"
  }
#line 33 "compiler_util.m"
}

#line 28 "compiler_util.m"
void MR_CALL 
libs__compiler_util__record_warning_3_p_0(
#line 28 "compiler_util.m"
  MR_Word libs__compiler_util__Globals_4)
#line 28 "compiler_util.m"
{
#line 52 "compiler_util.m"
  {
#line 52 "compiler_util.m"
    MR_bool libs__compiler_util__succeeded;
#line 52 "compiler_util.m"
    MR_Word libs__compiler_util__HaltAtWarn_6;

#line 53 "compiler_util.m"
    {
#line 53 "compiler_util.m"
      libs__globals__lookup_bool_option_3_p_0(libs__compiler_util__Globals_4, (MR_Integer) 2, &libs__compiler_util__HaltAtWarn_6);
    }
#line 57 "compiler_util.m"
    if ((libs__compiler_util__HaltAtWarn_6 == (MR_Integer) 0))
#line 58 "compiler_util.m"
      {
#line 58 "compiler_util.m"
      }
#line 57 "compiler_util.m"
    else
#line 55 "compiler_util.m"
      {
#line 56 "compiler_util.m"
        {
#line 56 "compiler_util.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 56 "compiler_util.m"
          return;
        }
#line 55 "compiler_util.m"
      }
#line 52 "compiler_util.m"
  }
#line 28 "compiler_util.m"
}

void mercury__libs__compiler_util__init(void)
{
}

void mercury__libs__compiler_util__init_type_tables(void)
{
}

void mercury__libs__compiler_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module libs.compiler_util. */
