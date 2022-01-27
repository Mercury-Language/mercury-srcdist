/*
** Automatically generated from `java_util.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"






#line 70 "java_util.m"
/* sealed */ struct ml_backend__java_util__vector_common_type_1_0_s {
#line 70 "java_util.m"
  const MR_String ml_backend__java_util__vector_common_type_1_0__vct_1_f_0;
#line 70 "java_util.m"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 57 "java_util.m"
MR_bool MR_CALL 
ml_backend__java_util__java_binary_infix_op_2_p_0(
#line 57 "java_util.m"
  MR_Word ml_backend__java_util__HeadVar__1_1,
#line 57 "java_util.m"
  MR_String * ml_backend__java_util__HeadVar__2_2)
#line 57 "java_util.m"
{
#line 104 "java_util.m"
  {
#line 104 "java_util.m"
    MR_bool ml_backend__java_util__succeeded;

#line 104 "java_util.m"
#line 104 "java_util.m"
    switch (MR_tag((MR_Word) ml_backend__java_util__HeadVar__1_1)) {
#line 104 "java_util.m"
      default:
#line 104 "java_util.m"
        ml_backend__java_util__succeeded = MR_FALSE;
#line 104 "java_util.m"
        break;
#line 104 "java_util.m"
      case (MR_Integer) 0:
#line 104 "java_util.m"
#line 104 "java_util.m"
        switch (MR_unmkbody(ml_backend__java_util__HeadVar__1_1)) {
#line 104 "java_util.m"
          default:
#line 104 "java_util.m"
            ml_backend__java_util__succeeded = MR_FALSE;
#line 104 "java_util.m"
            break;
#line 104 "java_util.m"
          case (MR_Integer) 0:
#line 104 "java_util.m"
            {
#line 104 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "+";
#line 104 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 104 "java_util.m"
            }
#line 104 "java_util.m"
            break;
#line 104 "java_util.m"
          case (MR_Integer) 1:
#line 105 "java_util.m"
            {
#line 105 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "-";
#line 105 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 105 "java_util.m"
            }
#line 104 "java_util.m"
            break;
#line 104 "java_util.m"
          case (MR_Integer) 2:
#line 106 "java_util.m"
            {
#line 106 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "*";
#line 106 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 106 "java_util.m"
            }
#line 104 "java_util.m"
            break;
#line 104 "java_util.m"
          case (MR_Integer) 3:
#line 107 "java_util.m"
            {
#line 107 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "/";
#line 107 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 107 "java_util.m"
            }
#line 104 "java_util.m"
            break;
#line 104 "java_util.m"
          case (MR_Integer) 4:
#line 108 "java_util.m"
            {
#line 108 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "%";
#line 108 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 108 "java_util.m"
            }
#line 104 "java_util.m"
            break;
#line 104 "java_util.m"
          case (MR_Integer) 5:
#line 109 "java_util.m"
            {
#line 109 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "<<";
#line 109 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 109 "java_util.m"
            }
#line 104 "java_util.m"
            break;
#line 104 "java_util.m"
          case (MR_Integer) 6:
#line 110 "java_util.m"
            {
#line 110 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) ">>";
#line 110 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 110 "java_util.m"
            }
#line 104 "java_util.m"
            break;
#line 104 "java_util.m"
          case (MR_Integer) 7:
#line 111 "java_util.m"
            {
#line 111 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "&";
#line 111 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 111 "java_util.m"
            }
#line 104 "java_util.m"
            break;
#line 104 "java_util.m"
          case (MR_Integer) 8:
#line 112 "java_util.m"
            {
#line 112 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "|";
#line 112 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 112 "java_util.m"
            }
#line 104 "java_util.m"
            break;
#line 104 "java_util.m"
          case (MR_Integer) 9:
#line 113 "java_util.m"
            {
#line 113 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "^";
#line 113 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 113 "java_util.m"
            }
#line 104 "java_util.m"
            break;
#line 104 "java_util.m"
          case (MR_Integer) 10:
#line 114 "java_util.m"
            {
#line 114 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "&&";
#line 114 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 114 "java_util.m"
            }
#line 104 "java_util.m"
            break;
#line 104 "java_util.m"
          case (MR_Integer) 11:
#line 115 "java_util.m"
            {
#line 115 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "||";
#line 115 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 115 "java_util.m"
            }
#line 104 "java_util.m"
            break;
#line 104 "java_util.m"
          case (MR_Integer) 12:
#line 116 "java_util.m"
            {
#line 116 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "==";
#line 116 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 116 "java_util.m"
            }
#line 104 "java_util.m"
            break;
#line 104 "java_util.m"
          case (MR_Integer) 13:
#line 117 "java_util.m"
            {
#line 117 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "!=";
#line 117 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 117 "java_util.m"
            }
#line 104 "java_util.m"
            break;
#line 104 "java_util.m"
          case (MR_Integer) 23:
#line 118 "java_util.m"
            {
#line 118 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "<";
#line 118 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 118 "java_util.m"
            }
#line 104 "java_util.m"
            break;
#line 104 "java_util.m"
          case (MR_Integer) 24:
#line 119 "java_util.m"
            {
#line 119 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) ">";
#line 119 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 119 "java_util.m"
            }
#line 104 "java_util.m"
            break;
#line 104 "java_util.m"
          case (MR_Integer) 25:
#line 120 "java_util.m"
            {
#line 120 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "<=";
#line 120 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 120 "java_util.m"
            }
#line 104 "java_util.m"
            break;
#line 104 "java_util.m"
          case (MR_Integer) 26:
#line 121 "java_util.m"
            {
#line 121 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) ">=";
#line 121 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 121 "java_util.m"
            }
#line 104 "java_util.m"
            break;
#line 104 "java_util.m"
        }
#line 104 "java_util.m"
        break;
#line 104 "java_util.m"
    }
#line 104 "java_util.m"
    return ml_backend__java_util__succeeded;
#line 104 "java_util.m"
  }
#line 57 "java_util.m"
}

#line 51 "java_util.m"
MR_bool MR_CALL 
ml_backend__java_util__java_float_compare_op_2_p_0(
#line 51 "java_util.m"
  MR_Word ml_backend__java_util__HeadVar__1_1,
#line 51 "java_util.m"
  MR_String * ml_backend__java_util__HeadVar__2_2)
#line 51 "java_util.m"
{
#line 92 "java_util.m"
  {
#line 92 "java_util.m"
    MR_bool ml_backend__java_util__succeeded;

#line 92 "java_util.m"
#line 92 "java_util.m"
    switch (MR_tag((MR_Word) ml_backend__java_util__HeadVar__1_1)) {
#line 92 "java_util.m"
      default:
#line 92 "java_util.m"
        ml_backend__java_util__succeeded = MR_FALSE;
#line 92 "java_util.m"
        break;
#line 92 "java_util.m"
      case (MR_Integer) 0:
#line 92 "java_util.m"
#line 92 "java_util.m"
        switch (MR_unmkbody(ml_backend__java_util__HeadVar__1_1)) {
#line 92 "java_util.m"
          default:
#line 92 "java_util.m"
            ml_backend__java_util__succeeded = MR_FALSE;
#line 92 "java_util.m"
            break;
#line 92 "java_util.m"
          case (MR_Integer) 32:
#line 92 "java_util.m"
            {
#line 92 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "==";
#line 92 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 92 "java_util.m"
            }
#line 92 "java_util.m"
            break;
#line 92 "java_util.m"
          case (MR_Integer) 33:
#line 93 "java_util.m"
            {
#line 93 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "!=";
#line 93 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 93 "java_util.m"
            }
#line 92 "java_util.m"
            break;
#line 92 "java_util.m"
          case (MR_Integer) 34:
#line 96 "java_util.m"
            {
#line 96 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "<";
#line 96 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 96 "java_util.m"
            }
#line 92 "java_util.m"
            break;
#line 92 "java_util.m"
          case (MR_Integer) 35:
#line 97 "java_util.m"
            {
#line 97 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) ">";
#line 97 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 97 "java_util.m"
            }
#line 92 "java_util.m"
            break;
#line 92 "java_util.m"
          case (MR_Integer) 36:
#line 94 "java_util.m"
            {
#line 94 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "<=";
#line 94 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 94 "java_util.m"
            }
#line 92 "java_util.m"
            break;
#line 92 "java_util.m"
          case (MR_Integer) 37:
#line 95 "java_util.m"
            {
#line 95 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) ">=";
#line 95 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 95 "java_util.m"
            }
#line 92 "java_util.m"
            break;
#line 92 "java_util.m"
        }
#line 92 "java_util.m"
        break;
#line 92 "java_util.m"
    }
#line 92 "java_util.m"
    return ml_backend__java_util__succeeded;
#line 92 "java_util.m"
  }
#line 51 "java_util.m"
}

#line 46 "java_util.m"
MR_bool MR_CALL 
ml_backend__java_util__java_float_op_2_p_0(
#line 46 "java_util.m"
  MR_Word ml_backend__java_util__HeadVar__1_1,
#line 46 "java_util.m"
  MR_String * ml_backend__java_util__HeadVar__2_2)
#line 46 "java_util.m"
{
#line 99 "java_util.m"
  {
#line 99 "java_util.m"
    MR_bool ml_backend__java_util__succeeded;

#line 99 "java_util.m"
#line 99 "java_util.m"
    switch (MR_tag((MR_Word) ml_backend__java_util__HeadVar__1_1)) {
#line 99 "java_util.m"
      default:
#line 99 "java_util.m"
        ml_backend__java_util__succeeded = MR_FALSE;
#line 99 "java_util.m"
        break;
#line 99 "java_util.m"
      case (MR_Integer) 0:
#line 99 "java_util.m"
#line 99 "java_util.m"
        switch (MR_unmkbody(ml_backend__java_util__HeadVar__1_1)) {
#line 99 "java_util.m"
          default:
#line 99 "java_util.m"
            ml_backend__java_util__succeeded = MR_FALSE;
#line 99 "java_util.m"
            break;
#line 99 "java_util.m"
          case (MR_Integer) 28:
#line 99 "java_util.m"
            {
#line 99 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "+";
#line 99 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 99 "java_util.m"
            }
#line 99 "java_util.m"
            break;
#line 99 "java_util.m"
          case (MR_Integer) 29:
#line 100 "java_util.m"
            {
#line 100 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "-";
#line 100 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 100 "java_util.m"
            }
#line 99 "java_util.m"
            break;
#line 99 "java_util.m"
          case (MR_Integer) 30:
#line 101 "java_util.m"
            {
#line 101 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "*";
#line 101 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 101 "java_util.m"
            }
#line 99 "java_util.m"
            break;
#line 99 "java_util.m"
          case (MR_Integer) 31:
#line 102 "java_util.m"
            {
#line 102 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "/";
#line 102 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 102 "java_util.m"
            }
#line 99 "java_util.m"
            break;
#line 99 "java_util.m"
        }
#line 99 "java_util.m"
        break;
#line 99 "java_util.m"
    }
#line 99 "java_util.m"
    return ml_backend__java_util__succeeded;
#line 99 "java_util.m"
  }
#line 46 "java_util.m"
}

#line 41 "java_util.m"
MR_bool MR_CALL 
ml_backend__java_util__java_string_compare_op_2_p_0(
#line 41 "java_util.m"
  MR_Word ml_backend__java_util__HeadVar__1_1,
#line 41 "java_util.m"
  MR_String * ml_backend__java_util__HeadVar__2_2)
#line 41 "java_util.m"
{
#line 85 "java_util.m"
  {
#line 85 "java_util.m"
    MR_bool ml_backend__java_util__succeeded;

#line 85 "java_util.m"
#line 85 "java_util.m"
    switch (MR_tag((MR_Word) ml_backend__java_util__HeadVar__1_1)) {
#line 85 "java_util.m"
      default:
#line 85 "java_util.m"
        ml_backend__java_util__succeeded = MR_FALSE;
#line 85 "java_util.m"
        break;
#line 85 "java_util.m"
      case (MR_Integer) 0:
#line 85 "java_util.m"
#line 85 "java_util.m"
        switch (MR_unmkbody(ml_backend__java_util__HeadVar__1_1)) {
#line 85 "java_util.m"
          default:
#line 85 "java_util.m"
            ml_backend__java_util__succeeded = MR_FALSE;
#line 85 "java_util.m"
            break;
#line 85 "java_util.m"
          case (MR_Integer) 16:
#line 85 "java_util.m"
            {
#line 85 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "==";
#line 85 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 85 "java_util.m"
            }
#line 85 "java_util.m"
            break;
#line 85 "java_util.m"
          case (MR_Integer) 17:
#line 86 "java_util.m"
            {
#line 86 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "!=";
#line 86 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 86 "java_util.m"
            }
#line 85 "java_util.m"
            break;
#line 85 "java_util.m"
          case (MR_Integer) 18:
#line 89 "java_util.m"
            {
#line 89 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "<";
#line 89 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 89 "java_util.m"
            }
#line 85 "java_util.m"
            break;
#line 85 "java_util.m"
          case (MR_Integer) 19:
#line 90 "java_util.m"
            {
#line 90 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) ">";
#line 90 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 90 "java_util.m"
            }
#line 85 "java_util.m"
            break;
#line 85 "java_util.m"
          case (MR_Integer) 20:
#line 87 "java_util.m"
            {
#line 87 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "<=";
#line 87 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 87 "java_util.m"
            }
#line 85 "java_util.m"
            break;
#line 85 "java_util.m"
          case (MR_Integer) 21:
#line 88 "java_util.m"
            {
#line 88 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) ">=";
#line 88 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 88 "java_util.m"
            }
#line 85 "java_util.m"
            break;
#line 85 "java_util.m"
        }
#line 85 "java_util.m"
        break;
#line 85 "java_util.m"
    }
#line 85 "java_util.m"
    return ml_backend__java_util__succeeded;
#line 85 "java_util.m"
  }
#line 41 "java_util.m"
}

#line 36 "java_util.m"
void MR_CALL 
ml_backend__java_util__java_unary_prefix_op_2_p_0(
#line 36 "java_util.m"
  MR_Word ml_backend__java_util__HeadVar__1_1,
#line 36 "java_util.m"
  MR_String * ml_backend__java_util__HeadVar__2_2)
#line 36 "java_util.m"
{
#line 70 "java_util.m"
  {
#line 70 "java_util.m"
    MR_bool ml_backend__java_util__succeeded;

#line 70 "java_util.m"
    *ml_backend__java_util__HeadVar__2_2 = ((&ml_backend__java_util_vector_common_1[0 + ml_backend__java_util__HeadVar__1_1]))->ml_backend__java_util__vector_common_type_1_0__vct_1_f_0;
#line 70 "java_util.m"
  }
#line 36 "java_util.m"
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
