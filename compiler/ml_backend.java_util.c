/*
** Automatically generated from `java_util.m'
** by the Mercury compiler,
** version DEV
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


/* :- module ml_backend.java_util. */
/* :- implementation. */

/*
INIT mercury__ml_backend__java_util__init
ENDINIT
*/

#include "ml_backend.java_util.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
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
#include "queue.mih"
#include "random.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"






/* sealed */ struct ml_backend__java_util__vector_common_type_1_0_s {
  const MR_String ml_backend__java_util__vector_common_type_1_0__vct_1_f_0;
};

static /* final */ const struct ml_backend__java_util__vector_common_type_1_0_s ml_backend__java_util_vector_common_1[14];




static /* final */ const struct ml_backend__java_util__vector_common_type_1_0_s ml_backend__java_util_vector_common_1[14] = {
  /* row 0 */   {     (MR_String) "/* mktag */ " },
  /* row 1 */   {     (MR_String) "" },
  /* row 2 */   {     (MR_String) "/* unmktag */ " },
  /* row 3 */   {     (MR_String) "/* strip_tag */ " },
  /* row 4 */   {     (MR_String) "/* mkbody */ " },
  /* row 5 */   {     (MR_String) "/* unmkbody */ " },
  /* row 6 */   {     (MR_String) "~" },
  /* row 7 */   {     (MR_String) "!" },
  /* row 8 */   {     (MR_String) "mercury.String.hash_1_f_0" },
  /* row 9 */   {     (MR_String) "mercury.String.hash2_1_f_0" },
  /* row 10 */   {     (MR_String) "mercury.String.hash3_1_f_0" },
  /* row 11 */   {     (MR_String) "mercury.String.hash4_1_f_0" },
  /* row 12 */   {     (MR_String) "mercury.String.hash5_1_f_0" },
  /* row 13 */   {     (MR_String) "mercury.String.hash6_1_f_0" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



MR_bool MR_CALL 
ml_backend__java_util__java_binary_infix_op_2_p_0(
  MR_Word ml_backend__java_util__HeadVar__1_1,
  MR_String * ml_backend__java_util__HeadVar__2_2)
{
  {
    MR_bool ml_backend__java_util__succeeded;

    switch (MR_tag((MR_Word) ml_backend__java_util__HeadVar__1_1)) {
      default:
        ml_backend__java_util__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(ml_backend__java_util__HeadVar__1_1)) {
          default:
            ml_backend__java_util__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "+";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "-";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "*";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "/";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 4:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "%";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 5:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "<<";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 6:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) ">>";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 7:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "&";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 8:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "|";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 9:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "^";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 10:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "&&";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 11:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "||";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 12:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "==";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 13:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "!=";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 23:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "<";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 24:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) ">";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 25:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "<=";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 26:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) ">=";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    return ml_backend__java_util__succeeded;
  }
}

MR_bool MR_CALL 
ml_backend__java_util__java_float_compare_op_2_p_0(
  MR_Word ml_backend__java_util__HeadVar__1_1,
  MR_String * ml_backend__java_util__HeadVar__2_2)
{
  {
    MR_bool ml_backend__java_util__succeeded;

    switch (MR_tag((MR_Word) ml_backend__java_util__HeadVar__1_1)) {
      default:
        ml_backend__java_util__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(ml_backend__java_util__HeadVar__1_1)) {
          default:
            ml_backend__java_util__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 32:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "==";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 33:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "!=";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 34:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "<";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 35:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) ">";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 36:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "<=";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 37:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) ">=";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    return ml_backend__java_util__succeeded;
  }
}

MR_bool MR_CALL 
ml_backend__java_util__java_float_op_2_p_0(
  MR_Word ml_backend__java_util__HeadVar__1_1,
  MR_String * ml_backend__java_util__HeadVar__2_2)
{
  {
    MR_bool ml_backend__java_util__succeeded;

    switch (MR_tag((MR_Word) ml_backend__java_util__HeadVar__1_1)) {
      default:
        ml_backend__java_util__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(ml_backend__java_util__HeadVar__1_1)) {
          default:
            ml_backend__java_util__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 28:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "+";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 29:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "-";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 30:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "*";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 31:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "/";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    return ml_backend__java_util__succeeded;
  }
}

MR_bool MR_CALL 
ml_backend__java_util__java_string_compare_op_2_p_0(
  MR_Word ml_backend__java_util__HeadVar__1_1,
  MR_String * ml_backend__java_util__HeadVar__2_2)
{
  {
    MR_bool ml_backend__java_util__succeeded;

    switch (MR_tag((MR_Word) ml_backend__java_util__HeadVar__1_1)) {
      default:
        ml_backend__java_util__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(ml_backend__java_util__HeadVar__1_1)) {
          default:
            ml_backend__java_util__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 16:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "==";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 17:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "!=";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 18:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "<";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 19:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) ">";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 20:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "<=";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 21:
            {
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) ">=";
              ml_backend__java_util__succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    return ml_backend__java_util__succeeded;
  }
}

void MR_CALL 
ml_backend__java_util__java_unary_prefix_op_2_p_0(
  MR_Word ml_backend__java_util__HeadVar__1_1,
  MR_String * ml_backend__java_util__HeadVar__2_2)
{
  {
    MR_bool ml_backend__java_util__succeeded;

    *ml_backend__java_util__HeadVar__2_2 = ((&ml_backend__java_util_vector_common_1[0 + ml_backend__java_util__HeadVar__1_1]))->ml_backend__java_util__vector_common_type_1_0__vct_1_f_0;
  }
}

void mercury__ml_backend__java_util__init(void)
{
}

void mercury__ml_backend__java_util__init_type_tables(void)
{
}

void mercury__ml_backend__java_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.java_util. */
