/*
** Automatically generated from `java_util.m'
** by the Mercury compiler,
** version rotd-2014-12-08
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
#include "array.mh"
#include "array.mh"
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
#line 101 "java_util.m"
  {
#line 101 "java_util.m"
    MR_bool ml_backend__java_util__succeeded;

#line 101 "java_util.m"
    if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 108 "java_util.m"
      {
#line 108 "java_util.m"
        *ml_backend__java_util__HeadVar__2_2 = (MR_String) "&";
#line 108 "java_util.m"
        ml_backend__java_util__succeeded = MR_TRUE;
#line 108 "java_util.m"
      }
#line 101 "java_util.m"
    else
#line 101 "java_util.m"
      if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 109 "java_util.m"
        {
#line 109 "java_util.m"
          *ml_backend__java_util__HeadVar__2_2 = (MR_String) "|";
#line 109 "java_util.m"
          ml_backend__java_util__succeeded = MR_TRUE;
#line 109 "java_util.m"
        }
#line 101 "java_util.m"
      else
#line 101 "java_util.m"
        if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 110 "java_util.m"
          {
#line 110 "java_util.m"
            *ml_backend__java_util__HeadVar__2_2 = (MR_String) "^";
#line 110 "java_util.m"
            ml_backend__java_util__succeeded = MR_TRUE;
#line 110 "java_util.m"
          }
#line 101 "java_util.m"
        else
#line 101 "java_util.m"
          if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 113 "java_util.m"
            {
#line 113 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "==";
#line 113 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 113 "java_util.m"
            }
#line 101 "java_util.m"
          else
#line 101 "java_util.m"
            if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 101 "java_util.m"
              {
#line 101 "java_util.m"
                *ml_backend__java_util__HeadVar__2_2 = (MR_String) "+";
#line 101 "java_util.m"
                ml_backend__java_util__succeeded = MR_TRUE;
#line 101 "java_util.m"
              }
#line 101 "java_util.m"
            else
#line 101 "java_util.m"
              if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 104 "java_util.m"
                {
#line 104 "java_util.m"
                  *ml_backend__java_util__HeadVar__2_2 = (MR_String) "/";
#line 104 "java_util.m"
                  ml_backend__java_util__succeeded = MR_TRUE;
#line 104 "java_util.m"
                }
#line 101 "java_util.m"
              else
#line 101 "java_util.m"
                if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25)))))
#line 118 "java_util.m"
                  {
#line 118 "java_util.m"
                    *ml_backend__java_util__HeadVar__2_2 = (MR_String) ">=";
#line 118 "java_util.m"
                    ml_backend__java_util__succeeded = MR_TRUE;
#line 118 "java_util.m"
                  }
#line 101 "java_util.m"
                else
#line 101 "java_util.m"
                  if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23)))))
#line 116 "java_util.m"
                    {
#line 116 "java_util.m"
                      *ml_backend__java_util__HeadVar__2_2 = (MR_String) ">";
#line 116 "java_util.m"
                      ml_backend__java_util__succeeded = MR_TRUE;
#line 116 "java_util.m"
                    }
#line 101 "java_util.m"
                  else
#line 101 "java_util.m"
                    if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24)))))
#line 117 "java_util.m"
                      {
#line 117 "java_util.m"
                        *ml_backend__java_util__HeadVar__2_2 = (MR_String) "<=";
#line 117 "java_util.m"
                        ml_backend__java_util__succeeded = MR_TRUE;
#line 117 "java_util.m"
                      }
#line 101 "java_util.m"
                    else
#line 101 "java_util.m"
                      if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22)))))
#line 115 "java_util.m"
                        {
#line 115 "java_util.m"
                          *ml_backend__java_util__HeadVar__2_2 = (MR_String) "<";
#line 115 "java_util.m"
                          ml_backend__java_util__succeeded = MR_TRUE;
#line 115 "java_util.m"
                        }
#line 101 "java_util.m"
                      else
#line 101 "java_util.m"
                        if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 105 "java_util.m"
                          {
#line 105 "java_util.m"
                            *ml_backend__java_util__HeadVar__2_2 = (MR_String) "%";
#line 105 "java_util.m"
                            ml_backend__java_util__succeeded = MR_TRUE;
#line 105 "java_util.m"
                          }
#line 101 "java_util.m"
                        else
#line 101 "java_util.m"
                          if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 103 "java_util.m"
                            {
#line 103 "java_util.m"
                              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "*";
#line 103 "java_util.m"
                              ml_backend__java_util__succeeded = MR_TRUE;
#line 103 "java_util.m"
                            }
#line 101 "java_util.m"
                          else
#line 101 "java_util.m"
                            if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 102 "java_util.m"
                              {
#line 102 "java_util.m"
                                *ml_backend__java_util__HeadVar__2_2 = (MR_String) "-";
#line 102 "java_util.m"
                                ml_backend__java_util__succeeded = MR_TRUE;
#line 102 "java_util.m"
                              }
#line 101 "java_util.m"
                            else
#line 101 "java_util.m"
                              if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 111 "java_util.m"
                                {
#line 111 "java_util.m"
                                  *ml_backend__java_util__HeadVar__2_2 = (MR_String) "&&";
#line 111 "java_util.m"
                                  ml_backend__java_util__succeeded = MR_TRUE;
#line 111 "java_util.m"
                                }
#line 101 "java_util.m"
                              else
#line 101 "java_util.m"
                                if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 112 "java_util.m"
                                  {
#line 112 "java_util.m"
                                    *ml_backend__java_util__HeadVar__2_2 = (MR_String) "||";
#line 112 "java_util.m"
                                    ml_backend__java_util__succeeded = MR_TRUE;
#line 112 "java_util.m"
                                  }
#line 101 "java_util.m"
                                else
#line 101 "java_util.m"
                                  if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 114 "java_util.m"
                                    {
#line 114 "java_util.m"
                                      *ml_backend__java_util__HeadVar__2_2 = (MR_String) "!=";
#line 114 "java_util.m"
                                      ml_backend__java_util__succeeded = MR_TRUE;
#line 114 "java_util.m"
                                    }
#line 101 "java_util.m"
                                  else
#line 101 "java_util.m"
                                    if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 106 "java_util.m"
                                      {
#line 106 "java_util.m"
                                        *ml_backend__java_util__HeadVar__2_2 = (MR_String) "<<";
#line 106 "java_util.m"
                                        ml_backend__java_util__succeeded = MR_TRUE;
#line 106 "java_util.m"
                                      }
#line 101 "java_util.m"
                                    else
#line 101 "java_util.m"
                                      if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 107 "java_util.m"
                                        {
#line 107 "java_util.m"
                                          *ml_backend__java_util__HeadVar__2_2 = (MR_String) ">>";
#line 107 "java_util.m"
                                          ml_backend__java_util__succeeded = MR_TRUE;
#line 107 "java_util.m"
                                        }
#line 101 "java_util.m"
                                      else
#line 101 "java_util.m"
                                        ml_backend__java_util__succeeded = MR_FALSE;
#line 101 "java_util.m"
    return ml_backend__java_util__succeeded;
#line 101 "java_util.m"
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
#line 89 "java_util.m"
  {
#line 89 "java_util.m"
    MR_bool ml_backend__java_util__succeeded;

#line 89 "java_util.m"
    if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 31)))))
#line 89 "java_util.m"
      {
#line 89 "java_util.m"
        *ml_backend__java_util__HeadVar__2_2 = (MR_String) "==";
#line 89 "java_util.m"
        ml_backend__java_util__succeeded = MR_TRUE;
#line 89 "java_util.m"
      }
#line 89 "java_util.m"
    else
#line 89 "java_util.m"
      if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 36)))))
#line 92 "java_util.m"
        {
#line 92 "java_util.m"
          *ml_backend__java_util__HeadVar__2_2 = (MR_String) ">=";
#line 92 "java_util.m"
          ml_backend__java_util__succeeded = MR_TRUE;
#line 92 "java_util.m"
        }
#line 89 "java_util.m"
      else
#line 89 "java_util.m"
        if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 34)))))
#line 94 "java_util.m"
          {
#line 94 "java_util.m"
            *ml_backend__java_util__HeadVar__2_2 = (MR_String) ">";
#line 94 "java_util.m"
            ml_backend__java_util__succeeded = MR_TRUE;
#line 94 "java_util.m"
          }
#line 89 "java_util.m"
        else
#line 89 "java_util.m"
          if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 35)))))
#line 91 "java_util.m"
            {
#line 91 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "<=";
#line 91 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 91 "java_util.m"
            }
#line 89 "java_util.m"
          else
#line 89 "java_util.m"
            if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 33)))))
#line 93 "java_util.m"
              {
#line 93 "java_util.m"
                *ml_backend__java_util__HeadVar__2_2 = (MR_String) "<";
#line 93 "java_util.m"
                ml_backend__java_util__succeeded = MR_TRUE;
#line 93 "java_util.m"
              }
#line 89 "java_util.m"
            else
#line 89 "java_util.m"
              if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 32)))))
#line 90 "java_util.m"
                {
#line 90 "java_util.m"
                  *ml_backend__java_util__HeadVar__2_2 = (MR_String) "!=";
#line 90 "java_util.m"
                  ml_backend__java_util__succeeded = MR_TRUE;
#line 90 "java_util.m"
                }
#line 89 "java_util.m"
              else
#line 89 "java_util.m"
                ml_backend__java_util__succeeded = MR_FALSE;
#line 89 "java_util.m"
    return ml_backend__java_util__succeeded;
#line 89 "java_util.m"
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
#line 96 "java_util.m"
  {
#line 96 "java_util.m"
    MR_bool ml_backend__java_util__succeeded;

#line 96 "java_util.m"
    if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 30)))))
#line 99 "java_util.m"
      {
#line 99 "java_util.m"
        *ml_backend__java_util__HeadVar__2_2 = (MR_String) "/";
#line 99 "java_util.m"
        ml_backend__java_util__succeeded = MR_TRUE;
#line 99 "java_util.m"
      }
#line 96 "java_util.m"
    else
#line 96 "java_util.m"
      if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 28)))))
#line 97 "java_util.m"
        {
#line 97 "java_util.m"
          *ml_backend__java_util__HeadVar__2_2 = (MR_String) "-";
#line 97 "java_util.m"
          ml_backend__java_util__succeeded = MR_TRUE;
#line 97 "java_util.m"
        }
#line 96 "java_util.m"
      else
#line 96 "java_util.m"
        if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 27)))))
#line 96 "java_util.m"
          {
#line 96 "java_util.m"
            *ml_backend__java_util__HeadVar__2_2 = (MR_String) "+";
#line 96 "java_util.m"
            ml_backend__java_util__succeeded = MR_TRUE;
#line 96 "java_util.m"
          }
#line 96 "java_util.m"
        else
#line 96 "java_util.m"
          if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 29)))))
#line 98 "java_util.m"
            {
#line 98 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "*";
#line 98 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 98 "java_util.m"
            }
#line 96 "java_util.m"
          else
#line 96 "java_util.m"
            ml_backend__java_util__succeeded = MR_FALSE;
#line 96 "java_util.m"
    return ml_backend__java_util__succeeded;
#line 96 "java_util.m"
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
#line 82 "java_util.m"
  {
#line 82 "java_util.m"
    MR_bool ml_backend__java_util__succeeded;

#line 82 "java_util.m"
    if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 82 "java_util.m"
      {
#line 82 "java_util.m"
        *ml_backend__java_util__HeadVar__2_2 = (MR_String) "==";
#line 82 "java_util.m"
        ml_backend__java_util__succeeded = MR_TRUE;
#line 82 "java_util.m"
      }
#line 82 "java_util.m"
    else
#line 82 "java_util.m"
      if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 20)))))
#line 85 "java_util.m"
        {
#line 85 "java_util.m"
          *ml_backend__java_util__HeadVar__2_2 = (MR_String) ">=";
#line 85 "java_util.m"
          ml_backend__java_util__succeeded = MR_TRUE;
#line 85 "java_util.m"
        }
#line 82 "java_util.m"
      else
#line 82 "java_util.m"
        if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18)))))
#line 87 "java_util.m"
          {
#line 87 "java_util.m"
            *ml_backend__java_util__HeadVar__2_2 = (MR_String) ">";
#line 87 "java_util.m"
            ml_backend__java_util__succeeded = MR_TRUE;
#line 87 "java_util.m"
          }
#line 82 "java_util.m"
        else
#line 82 "java_util.m"
          if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 19)))))
#line 84 "java_util.m"
            {
#line 84 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "<=";
#line 84 "java_util.m"
              ml_backend__java_util__succeeded = MR_TRUE;
#line 84 "java_util.m"
            }
#line 82 "java_util.m"
          else
#line 82 "java_util.m"
            if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 86 "java_util.m"
              {
#line 86 "java_util.m"
                *ml_backend__java_util__HeadVar__2_2 = (MR_String) "<";
#line 86 "java_util.m"
                ml_backend__java_util__succeeded = MR_TRUE;
#line 86 "java_util.m"
              }
#line 82 "java_util.m"
            else
#line 82 "java_util.m"
              if ((ml_backend__java_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 83 "java_util.m"
                {
#line 83 "java_util.m"
                  *ml_backend__java_util__HeadVar__2_2 = (MR_String) "!=";
#line 83 "java_util.m"
                  ml_backend__java_util__succeeded = MR_TRUE;
#line 83 "java_util.m"
                }
#line 82 "java_util.m"
              else
#line 82 "java_util.m"
                ml_backend__java_util__succeeded = MR_FALSE;
#line 82 "java_util.m"
    return ml_backend__java_util__succeeded;
#line 82 "java_util.m"
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
    if ((ml_backend__java_util__HeadVar__1_1 == (MR_Integer) 6))
#line 75 "java_util.m"
      *ml_backend__java_util__HeadVar__2_2 = (MR_String) "~";
#line 70 "java_util.m"
    else
#line 70 "java_util.m"
      if ((ml_backend__java_util__HeadVar__1_1 == (MR_Integer) 8))
#line 78 "java_util.m"
        *ml_backend__java_util__HeadVar__2_2 = (MR_String) "mercury.String.hash_1_f_0";
#line 70 "java_util.m"
      else
#line 70 "java_util.m"
        if ((ml_backend__java_util__HeadVar__1_1 == (MR_Integer) 9))
#line 79 "java_util.m"
          *ml_backend__java_util__HeadVar__2_2 = (MR_String) "mercury.String.hash2_1_f_0";
#line 70 "java_util.m"
        else
#line 70 "java_util.m"
          if ((ml_backend__java_util__HeadVar__1_1 == (MR_Integer) 10))
#line 80 "java_util.m"
            *ml_backend__java_util__HeadVar__2_2 = (MR_String) "mercury.String.hash3_1_f_0";
#line 70 "java_util.m"
          else
#line 70 "java_util.m"
            if ((ml_backend__java_util__HeadVar__1_1 == (MR_Integer) 7))
#line 76 "java_util.m"
              *ml_backend__java_util__HeadVar__2_2 = (MR_String) "!";
#line 70 "java_util.m"
            else
#line 70 "java_util.m"
              if ((ml_backend__java_util__HeadVar__1_1 == (MR_Integer) 4))
#line 73 "java_util.m"
                *ml_backend__java_util__HeadVar__2_2 = (MR_String) "/* mkbody */ ";
#line 70 "java_util.m"
              else
#line 70 "java_util.m"
                if ((ml_backend__java_util__HeadVar__1_1 == (MR_Integer) 0))
#line 70 "java_util.m"
                  *ml_backend__java_util__HeadVar__2_2 = (MR_String) "/* mktag */ ";
#line 70 "java_util.m"
                else
#line 70 "java_util.m"
                  if ((ml_backend__java_util__HeadVar__1_1 == (MR_Integer) 3))
#line 72 "java_util.m"
                    *ml_backend__java_util__HeadVar__2_2 = (MR_String) "/* strip_tag */ ";
#line 70 "java_util.m"
                  else
#line 70 "java_util.m"
                    if ((ml_backend__java_util__HeadVar__1_1 == (MR_Integer) 1))
#line 77 "java_util.m"
                      *ml_backend__java_util__HeadVar__2_2 = (MR_String) "";
#line 70 "java_util.m"
                    else
#line 70 "java_util.m"
                      if ((ml_backend__java_util__HeadVar__1_1 == (MR_Integer) 5))
#line 74 "java_util.m"
                        *ml_backend__java_util__HeadVar__2_2 = (MR_String) "/* unmkbody */ ";
#line 70 "java_util.m"
                      else
#line 71 "java_util.m"
                        *ml_backend__java_util__HeadVar__2_2 = (MR_String) "/* unmktag */ ";
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
