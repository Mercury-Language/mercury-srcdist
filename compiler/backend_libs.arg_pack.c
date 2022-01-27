/*
** Automatically generated from `arg_pack.m'
** by the Mercury compiler,
** version rotd-2015-05-05
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


/* :- module backend_libs.arg_pack. */
/* :- implementation. */

/*
INIT mercury__backend_libs__arg_pack__init
ENDINIT
*/

#include "backend_libs.arg_pack.mih"


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
#include "int.mih"
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
#include "require.mih"
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



#line 35 "arg_pack.m"
struct backend_libs__arg_pack__pack_args_8_p_0_env_0_s {
#line 35 "arg_pack.m"
  MR_Word backend_libs__arg_pack__pack_args_8_p_0_env_0__ArgWidths_10;
#line 65 "arg_pack.m"
  MR_bool backend_libs__arg_pack__pack_args_8_p_0_env_0__succeeded;
#line 63 "arg_pack.m"
  jmp_buf backend_libs__arg_pack__pack_args_8_p_0_env_0__commit_0;
#line 63 "arg_pack.m"
  MR_Word backend_libs__arg_pack__pack_args_8_p_0_env_0__V_29_29;
#line 63 "arg_pack.m"
  MR_Box backend_libs__arg_pack__pack_args_8_p_0_env_0__conv0_V_29_29;
#line 35 "arg_pack.m"
};


#line 157 "arg_pack.m"
static void MR_CALL 
backend_libs__arg_pack__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_110_101_120_116_95_119_111_114_100_95_95_91_49_93_95_48_5_p_0(
#line 157 "arg_pack.m"
  MR_Word backend_libs__arg_pack__HeadVar__1_1,
#line 157 "arg_pack.m"
  MR_Word * backend_libs__arg_pack__HeadVar__2_2,
#line 157 "arg_pack.m"
  MR_Word backend_libs__arg_pack__HeadVar__3_3,
#line 157 "arg_pack.m"
  MR_Word * backend_libs__arg_pack__HeadVar__4_4,
#line 157 "arg_pack.m"
  MR_Word * backend_libs__arg_pack__XsTail_5);

#line 69 "arg_pack.m"
static void MR_CALL 
backend_libs__arg_pack__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_p_0(
#line 69 "arg_pack.m"
  MR_Word backend_libs__arg_pack__ShiftCombine_1,
#line 69 "arg_pack.m"
  MR_Word backend_libs__arg_pack__HeadVar__2_2,
#line 69 "arg_pack.m"
  MR_Word backend_libs__arg_pack__HeadVar__3_3,
#line 69 "arg_pack.m"
  MR_Word * backend_libs__arg_pack__HeadVar__4_4,
#line 69 "arg_pack.m"
  MR_Box backend_libs__arg_pack__STATE_VARIABLE_Acc1_0_5,
#line 69 "arg_pack.m"
  MR_Box * backend_libs__arg_pack__STATE_VARIABLE_Acc1_6,
#line 69 "arg_pack.m"
  MR_Box backend_libs__arg_pack__STATE_VARIABLE_Acc2_0_7,
#line 69 "arg_pack.m"
  MR_Box * backend_libs__arg_pack__STATE_VARIABLE_Acc2_8);

#line 63 "arg_pack.m"
static void MR_CALL 
backend_libs__arg_pack__pack_args_8_p_0_1(
#line 63 "arg_pack.m"
  void * backend_libs__arg_pack__env_ptr_arg);

#line 63 "arg_pack.m"
static void MR_CALL 
backend_libs__arg_pack__pack_args_8_p_0_3(
#line 63 "arg_pack.m"
  void * backend_libs__arg_pack__env_ptr_arg);

#line 63 "arg_pack.m"
static void MR_CALL 
backend_libs__arg_pack__pack_args_8_p_0_2(
#line 63 "arg_pack.m"
  void * backend_libs__arg_pack__env_ptr_arg);

#line 63 "arg_pack.m"
static void MR_CALL 
backend_libs__arg_pack__pack_args_8_p_0_4(
#line 63 "arg_pack.m"
  void * backend_libs__arg_pack__env_ptr_arg);







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



#line 157 "arg_pack.m"
static void MR_CALL 
backend_libs__arg_pack__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_110_101_120_116_95_119_111_114_100_95_95_91_49_93_95_48_5_p_0(
#line 157 "arg_pack.m"
  MR_Word backend_libs__arg_pack__HeadVar__1_1,
#line 157 "arg_pack.m"
  MR_Word * backend_libs__arg_pack__HeadVar__2_2,
#line 157 "arg_pack.m"
  MR_Word backend_libs__arg_pack__HeadVar__3_3,
#line 157 "arg_pack.m"
  MR_Word * backend_libs__arg_pack__HeadVar__4_4,
#line 157 "arg_pack.m"
  MR_Word * backend_libs__arg_pack__XsTail_5)
#line 157 "arg_pack.m"
{
#line 160 "arg_pack.m"
  {
#line 160 "arg_pack.m"
    MR_bool backend_libs__arg_pack__succeeded;

#line 160 "arg_pack.m"
    if ((backend_libs__arg_pack__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 160 "arg_pack.m"
      {
#line 160 "arg_pack.m"
        *backend_libs__arg_pack__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 160 "arg_pack.m"
        *backend_libs__arg_pack__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 160 "arg_pack.m"
        *backend_libs__arg_pack__XsTail_5 = backend_libs__arg_pack__HeadVar__3_3;
#line 160 "arg_pack.m"
      }
#line 160 "arg_pack.m"
    else
#line 160 "arg_pack.m"
      {
#line 160 "arg_pack.m"
        MR_Word backend_libs__arg_pack__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__HeadVar__1_1, (MR_Integer) 1)));
#line 160 "arg_pack.m"
        MR_Word backend_libs__arg_pack__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__HeadVar__1_1, (MR_Integer) 0)));

#line 160 "arg_pack.m"
        if ((backend_libs__arg_pack__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 175 "arg_pack.m"
          {
#line 176 "arg_pack.m"
            {
#line 176 "arg_pack.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.arg_pack", (MR_String) "predicate \140backend_libs.arg_pack.split_at_next_word\'/5", (MR_String) "mismatched lists");
#line 176 "arg_pack.m"
              return;
            }
#line 175 "arg_pack.m"
          }
#line 160 "arg_pack.m"
        else
#line 161 "arg_pack.m"
          {
#line 161 "arg_pack.m"
            MR_Box backend_libs__arg_pack__X_10 = (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__HeadVar__3_3, (MR_Integer) 0));
#line 161 "arg_pack.m"
            MR_Word backend_libs__arg_pack__Xs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__HeadVar__3_3, (MR_Integer) 1)));

#line 170 "arg_pack.m"
            if (((MR_tag((MR_Word) backend_libs__arg_pack__V_28_28)) == (MR_mktag((MR_Integer) 2))))
#line 171 "arg_pack.m"
              {
#line 171 "arg_pack.m"
                MR_Word backend_libs__arg_pack__XsHead0_17;

#line 172 "arg_pack.m"
                {
#line 172 "arg_pack.m"
                  backend_libs__arg_pack__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_110_101_120_116_95_119_111_114_100_95_95_91_49_93_95_48_5_p_0(backend_libs__arg_pack__V_27_27, backend_libs__arg_pack__HeadVar__2_2, backend_libs__arg_pack__Xs_11, &backend_libs__arg_pack__XsHead0_17, backend_libs__arg_pack__XsTail_5);
                }
#line 173 "arg_pack.m"
                {
#line 173 "arg_pack.m"
                  MR_Word base;
#line 173 "arg_pack.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 173 "arg_pack.m"
                  *backend_libs__arg_pack__HeadVar__4_4 = base;
#line 173 "arg_pack.m"
                  MR_hl_field(MR_mktag(1), base, 0) = backend_libs__arg_pack__X_10;
#line 173 "arg_pack.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__arg_pack__XsHead0_17));
#line 173 "arg_pack.m"
                }
#line 171 "arg_pack.m"
              }
#line 170 "arg_pack.m"
            else
#line 166 "arg_pack.m"
              {
#line 167 "arg_pack.m"
                *backend_libs__arg_pack__HeadVar__2_2 = backend_libs__arg_pack__HeadVar__1_1;
#line 168 "arg_pack.m"
                *backend_libs__arg_pack__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 169 "arg_pack.m"
                *backend_libs__arg_pack__XsTail_5 = backend_libs__arg_pack__HeadVar__3_3;
#line 166 "arg_pack.m"
              }
#line 161 "arg_pack.m"
          }
#line 160 "arg_pack.m"
      }
#line 160 "arg_pack.m"
  }
#line 157 "arg_pack.m"
}

#line 69 "arg_pack.m"
static void MR_CALL 
backend_libs__arg_pack__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_p_0(
#line 69 "arg_pack.m"
  MR_Word backend_libs__arg_pack__ShiftCombine_1,
#line 69 "arg_pack.m"
  MR_Word backend_libs__arg_pack__HeadVar__2_2,
#line 69 "arg_pack.m"
  MR_Word backend_libs__arg_pack__HeadVar__3_3,
#line 69 "arg_pack.m"
  MR_Word * backend_libs__arg_pack__HeadVar__4_4,
#line 69 "arg_pack.m"
  MR_Box backend_libs__arg_pack__STATE_VARIABLE_Acc1_0_5,
#line 69 "arg_pack.m"
  MR_Box * backend_libs__arg_pack__STATE_VARIABLE_Acc1_6,
#line 69 "arg_pack.m"
  MR_Box backend_libs__arg_pack__STATE_VARIABLE_Acc2_0_7,
#line 69 "arg_pack.m"
  MR_Box * backend_libs__arg_pack__STATE_VARIABLE_Acc2_8)
#line 69 "arg_pack.m"
{
#line 74 "arg_pack.m"
  {
#line 74 "arg_pack.m"
    MR_bool backend_libs__arg_pack__succeeded;

#line 74 "arg_pack.m"
    if ((backend_libs__arg_pack__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 74 "arg_pack.m"
      if ((backend_libs__arg_pack__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 74 "arg_pack.m"
        {
#line 74 "arg_pack.m"
          *backend_libs__arg_pack__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 74 "arg_pack.m"
          *backend_libs__arg_pack__STATE_VARIABLE_Acc2_8 = backend_libs__arg_pack__STATE_VARIABLE_Acc2_0_7;
#line 74 "arg_pack.m"
          *backend_libs__arg_pack__STATE_VARIABLE_Acc1_6 = backend_libs__arg_pack__STATE_VARIABLE_Acc1_0_5;
#line 74 "arg_pack.m"
        }
#line 74 "arg_pack.m"
      else
#line 102 "arg_pack.m"
        {
#line 103 "arg_pack.m"
          {
#line 103 "arg_pack.m"
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.arg_pack", (MR_String) "predicate \140backend_libs.arg_pack.do_pack_args\'/8", (MR_String) "mismatched lists");
#line 103 "arg_pack.m"
            return;
          }
#line 102 "arg_pack.m"
        }
#line 74 "arg_pack.m"
    else
#line 74 "arg_pack.m"
      {
#line 74 "arg_pack.m"
        MR_Word backend_libs__arg_pack__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__HeadVar__2_2, (MR_Integer) 1)));
#line 74 "arg_pack.m"
        MR_Word backend_libs__arg_pack__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__HeadVar__2_2, (MR_Integer) 0)));

#line 74 "arg_pack.m"
        if ((backend_libs__arg_pack__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 104 "arg_pack.m"
          {
#line 105 "arg_pack.m"
            {
#line 105 "arg_pack.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.arg_pack", (MR_String) "predicate \140backend_libs.arg_pack.do_pack_args\'/8", (MR_String) "mismatched lists");
#line 105 "arg_pack.m"
              return;
            }
#line 104 "arg_pack.m"
          }
#line 74 "arg_pack.m"
        else
#line 76 "arg_pack.m"
          {
#line 76 "arg_pack.m"
            MR_Box backend_libs__arg_pack__Arg0_19 = (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__HeadVar__3_3, (MR_Integer) 0));
#line 76 "arg_pack.m"
            MR_Word backend_libs__arg_pack__Args0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__HeadVar__3_3, (MR_Integer) 1)));
#line 76 "arg_pack.m"
            MR_Box backend_libs__arg_pack__Arg_21;
#line 76 "arg_pack.m"
            MR_Word backend_libs__arg_pack__Args_22;
#line 76 "arg_pack.m"
            MR_Integer backend_libs__arg_pack__Shift_25;
#line 109 "arg_pack.m"
            MR_Word backend_libs__arg_pack__Next_79;
#line 109 "arg_pack.m"
            MR_Word backend_libs__arg_pack__V_80_80;
#line 113 "arg_pack.m"
            MR_Integer backend_libs__arg_pack__V_84_84;
#line 113 "arg_pack.m"
            MR_Integer backend_libs__arg_pack__V_85_85;

#line 80 "arg_pack.m"
            if ((backend_libs__arg_pack__V_77_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 81 "arg_pack.m"
              backend_libs__arg_pack__Shift_25 = (MR_Integer) 0;
#line 80 "arg_pack.m"
            else
#line 80 "arg_pack.m"
              if ((backend_libs__arg_pack__V_77_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 78 "arg_pack.m"
                backend_libs__arg_pack__Shift_25 = (MR_Integer) 0;
#line 80 "arg_pack.m"
              else
#line 80 "arg_pack.m"
                if (((MR_tag((MR_Word) backend_libs__arg_pack__V_77_77)) == (MR_mktag((MR_Integer) 1))))
#line 85 "arg_pack.m"
                  backend_libs__arg_pack__Shift_25 = (MR_Integer) 0;
#line 80 "arg_pack.m"
                else
#line 87 "arg_pack.m"
                  {
#line 87 "arg_pack.m"
                    MR_Integer backend_libs__arg_pack___Mask_46;

#line 87 "arg_pack.m"
                    backend_libs__arg_pack__Shift_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__arg_pack__V_77_77, (MR_Integer) 0)));
#line 87 "arg_pack.m"
                    backend_libs__arg_pack___Mask_46 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__arg_pack__V_77_77, (MR_Integer) 1)));
#line 87 "arg_pack.m"
                  }
#line 111 "arg_pack.m"
            if (((MR_tag((MR_Word) backend_libs__arg_pack__V_77_77)) == (MR_mktag((MR_Integer) 1))))
#line 110 "arg_pack.m"
              backend_libs__arg_pack__succeeded = MR_TRUE;
#line 111 "arg_pack.m"
            else
#line 111 "arg_pack.m"
              if (((MR_tag((MR_Word) backend_libs__arg_pack__V_77_77)) == (MR_mktag((MR_Integer) 2))))
#line 111 "arg_pack.m"
                backend_libs__arg_pack__succeeded = MR_TRUE;
#line 111 "arg_pack.m"
              else
#line 111 "arg_pack.m"
                backend_libs__arg_pack__succeeded = MR_FALSE;
#line 109 "arg_pack.m"
            if (backend_libs__arg_pack__succeeded)
#line 109 "arg_pack.m"
              {
#line 109 "arg_pack.m"
                backend_libs__arg_pack__succeeded = ((MR_tag((MR_Word) backend_libs__arg_pack__V_76_76)) == (MR_mktag((MR_Integer) 1)));
#line 109 "arg_pack.m"
                if (backend_libs__arg_pack__succeeded)
#line 109 "arg_pack.m"
                  {
#line 109 "arg_pack.m"
                    backend_libs__arg_pack__Next_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__V_76_76, (MR_Integer) 0)));
#line 109 "arg_pack.m"
                    backend_libs__arg_pack__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__V_76_76, (MR_Integer) 1)));
#line 113 "arg_pack.m"
                    backend_libs__arg_pack__succeeded = ((MR_tag((MR_Word) backend_libs__arg_pack__Next_79)) == (MR_mktag((MR_Integer) 2)));
#line 113 "arg_pack.m"
                    if (backend_libs__arg_pack__succeeded)
#line 113 "arg_pack.m"
                      {
#line 113 "arg_pack.m"
                        backend_libs__arg_pack__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__arg_pack__Next_79, (MR_Integer) 0)));
#line 113 "arg_pack.m"
                        backend_libs__arg_pack__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__arg_pack__Next_79, (MR_Integer) 1)));
#line 113 "arg_pack.m"
                      }
#line 109 "arg_pack.m"
                  }
#line 109 "arg_pack.m"
              }
#line 98 "arg_pack.m"
            if (backend_libs__arg_pack__succeeded)
#line 90 "arg_pack.m"
              {
#line 90 "arg_pack.m"
                MR_Word backend_libs__arg_pack__Args1_27;
#line 90 "arg_pack.m"
                MR_Box backend_libs__arg_pack__STATE_VARIABLE_Acc1_33_33;
#line 90 "arg_pack.m"
                MR_Box backend_libs__arg_pack__STATE_VARIABLE_Acc2_34_34;

#line 90 "arg_pack.m"
                {
#line 90 "arg_pack.m"
                  backend_libs__arg_pack__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_p_0(backend_libs__arg_pack__ShiftCombine_1, backend_libs__arg_pack__V_76_76, backend_libs__arg_pack__Args0_20, &backend_libs__arg_pack__Args1_27, backend_libs__arg_pack__STATE_VARIABLE_Acc1_0_5, &backend_libs__arg_pack__STATE_VARIABLE_Acc1_33_33, backend_libs__arg_pack__STATE_VARIABLE_Acc2_0_7, &backend_libs__arg_pack__STATE_VARIABLE_Acc2_34_34);
                }
#line 94 "arg_pack.m"
                if ((backend_libs__arg_pack__Args1_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 95 "arg_pack.m"
                  {
#line 96 "arg_pack.m"
                    {
#line 96 "arg_pack.m"
                      mercury__require__unexpected_3_p_0((MR_String) "backend_libs.arg_pack", (MR_String) "predicate \140backend_libs.arg_pack.do_pack_args\'/8", (MR_String) "mismatched lists");
#line 96 "arg_pack.m"
                      return;
                    }
#line 95 "arg_pack.m"
                  }
#line 94 "arg_pack.m"
                else
#line 92 "arg_pack.m"
                  {
#line 92 "arg_pack.m"
                    MR_Box backend_libs__arg_pack__SecondArg_28 = (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__Args1_27, (MR_Integer) 0));
#line 92 "arg_pack.m"
                    MR_Word backend_libs__arg_pack__V_38_38;
#line 93 "arg_pack.m"
                    void MR_CALL (* backend_libs__arg_pack__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 92 "arg_pack.m"
                    backend_libs__arg_pack__Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__Args1_27, (MR_Integer) 1)));
#line 93 "arg_pack.m"
                    {
#line 93 "arg_pack.m"
                      backend_libs__arg_pack__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 93 "arg_pack.m"
                      MR_hl_field(MR_mktag(1), backend_libs__arg_pack__V_38_38, 0) = backend_libs__arg_pack__SecondArg_28;
#line 93 "arg_pack.m"
                    }
#line 93 "arg_pack.m"
                    backend_libs__arg_pack__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), backend_libs__arg_pack__ShiftCombine_1, (MR_Integer) 1)));
#line 93 "arg_pack.m"
                    {
#line 93 "arg_pack.m"
                      backend_libs__arg_pack__func_0(((MR_Box) backend_libs__arg_pack__ShiftCombine_1), backend_libs__arg_pack__Arg0_19, ((MR_Box) (backend_libs__arg_pack__Shift_25)), ((MR_Box) (backend_libs__arg_pack__V_38_38)), &backend_libs__arg_pack__Arg_21, backend_libs__arg_pack__STATE_VARIABLE_Acc1_33_33, backend_libs__arg_pack__STATE_VARIABLE_Acc1_6, backend_libs__arg_pack__STATE_VARIABLE_Acc2_34_34, backend_libs__arg_pack__STATE_VARIABLE_Acc2_8);
                    }
#line 92 "arg_pack.m"
                  }
#line 90 "arg_pack.m"
              }
#line 98 "arg_pack.m"
            else
#line 99 "arg_pack.m"
              {
#line 99 "arg_pack.m"
                MR_Box backend_libs__arg_pack__STATE_VARIABLE_Acc1_42_42;
#line 99 "arg_pack.m"
                MR_Box backend_libs__arg_pack__STATE_VARIABLE_Acc2_43_43;
#line 99 "arg_pack.m"
                void MR_CALL (* backend_libs__arg_pack__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), backend_libs__arg_pack__ShiftCombine_1, (MR_Integer) 1)));

#line 99 "arg_pack.m"
                {
#line 99 "arg_pack.m"
                  backend_libs__arg_pack__func_1(((MR_Box) backend_libs__arg_pack__ShiftCombine_1), backend_libs__arg_pack__Arg0_19, ((MR_Box) (backend_libs__arg_pack__Shift_25)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &backend_libs__arg_pack__Arg_21, backend_libs__arg_pack__STATE_VARIABLE_Acc1_0_5, &backend_libs__arg_pack__STATE_VARIABLE_Acc1_42_42, backend_libs__arg_pack__STATE_VARIABLE_Acc2_0_7, &backend_libs__arg_pack__STATE_VARIABLE_Acc2_43_43);
                }
#line 100 "arg_pack.m"
                {
#line 100 "arg_pack.m"
                  backend_libs__arg_pack__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_p_0(backend_libs__arg_pack__ShiftCombine_1, backend_libs__arg_pack__V_76_76, backend_libs__arg_pack__Args0_20, &backend_libs__arg_pack__Args_22, backend_libs__arg_pack__STATE_VARIABLE_Acc1_42_42, backend_libs__arg_pack__STATE_VARIABLE_Acc1_6, backend_libs__arg_pack__STATE_VARIABLE_Acc2_43_43, backend_libs__arg_pack__STATE_VARIABLE_Acc2_8);
                }
#line 99 "arg_pack.m"
              }
#line 75 "arg_pack.m"
            {
#line 75 "arg_pack.m"
              MR_Word base;
#line 75 "arg_pack.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 75 "arg_pack.m"
              *backend_libs__arg_pack__HeadVar__4_4 = base;
#line 75 "arg_pack.m"
              MR_hl_field(MR_mktag(1), base, 0) = backend_libs__arg_pack__Arg_21;
#line 75 "arg_pack.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__arg_pack__Args_22));
#line 75 "arg_pack.m"
            }
#line 76 "arg_pack.m"
          }
#line 74 "arg_pack.m"
      }
#line 74 "arg_pack.m"
  }
#line 69 "arg_pack.m"
}

#line 49 "arg_pack.m"
void MR_CALL 
backend_libs__arg_pack__group_same_word_elements_3_p_0(
#line 49 "arg_pack.m"
  MR_Word backend_libs__arg_pack__TypeInfo_for_T_34,
#line 49 "arg_pack.m"
  MR_Word backend_libs__arg_pack__HeadVar__1_1,
#line 49 "arg_pack.m"
  MR_Word backend_libs__arg_pack__HeadVar__2_2,
#line 49 "arg_pack.m"
  MR_Word * backend_libs__arg_pack__HeadVar__3_3)
#line 49 "arg_pack.m"
{
#line 135 "arg_pack.m"
  {
#line 135 "arg_pack.m"
    MR_bool backend_libs__arg_pack__succeeded;

#line 135 "arg_pack.m"
    if ((backend_libs__arg_pack__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 135 "arg_pack.m"
      if ((backend_libs__arg_pack__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 135 "arg_pack.m"
        *backend_libs__arg_pack__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 135 "arg_pack.m"
      else
#line 152 "arg_pack.m"
        {
#line 153 "arg_pack.m"
          {
#line 153 "arg_pack.m"
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.arg_pack", (MR_String) "predicate \140backend_libs.arg_pack.group_same_word_elements\'/3", (MR_String) "mismatched lists");
#line 153 "arg_pack.m"
            return;
          }
#line 152 "arg_pack.m"
        }
#line 135 "arg_pack.m"
    else
#line 135 "arg_pack.m"
      {
#line 135 "arg_pack.m"
        MR_Word backend_libs__arg_pack__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__HeadVar__1_1, (MR_Integer) 1)));
#line 135 "arg_pack.m"
        MR_Word backend_libs__arg_pack__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__HeadVar__1_1, (MR_Integer) 0)));

#line 135 "arg_pack.m"
        if ((backend_libs__arg_pack__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 154 "arg_pack.m"
          {
#line 154 "arg_pack.m"
            *backend_libs__arg_pack__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 155 "arg_pack.m"
            {
#line 155 "arg_pack.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.arg_pack", (MR_String) "predicate \140backend_libs.arg_pack.group_same_word_elements\'/3", (MR_String) "mismatched lists");
#line 155 "arg_pack.m"
              return;
            }
#line 154 "arg_pack.m"
          }
#line 135 "arg_pack.m"
        else
#line 136 "arg_pack.m"
          {
#line 136 "arg_pack.m"
            MR_Box backend_libs__arg_pack__X_6 = (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__HeadVar__2_2, (MR_Integer) 0));
#line 136 "arg_pack.m"
            MR_Word backend_libs__arg_pack__Xs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__HeadVar__2_2, (MR_Integer) 1)));

#line 143 "arg_pack.m"
            if ((((backend_libs__arg_pack__V_36_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))) || ((backend_libs__arg_pack__V_36_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))))
#line 140 "arg_pack.m"
              {
#line 140 "arg_pack.m"
                MR_Word backend_libs__arg_pack__Xss0_9;
#line 140 "arg_pack.m"
                MR_Word backend_libs__arg_pack__V_20_20;

#line 141 "arg_pack.m"
                {
#line 141 "arg_pack.m"
                  backend_libs__arg_pack__group_same_word_elements_3_p_0(backend_libs__arg_pack__TypeInfo_for_T_34, backend_libs__arg_pack__V_35_35, backend_libs__arg_pack__Xs_7, &backend_libs__arg_pack__Xss0_9);
                }
#line 142 "arg_pack.m"
                {
#line 142 "arg_pack.m"
                  backend_libs__arg_pack__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 142 "arg_pack.m"
                  MR_hl_field(MR_mktag(1), backend_libs__arg_pack__V_20_20, 0) = backend_libs__arg_pack__X_6;
#line 142 "arg_pack.m"
                  MR_hl_field(MR_mktag(1), backend_libs__arg_pack__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 142 "arg_pack.m"
                }
#line 142 "arg_pack.m"
                {
#line 142 "arg_pack.m"
                  MR_Word base;
#line 142 "arg_pack.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 142 "arg_pack.m"
                  *backend_libs__arg_pack__HeadVar__3_3 = base;
#line 142 "arg_pack.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__arg_pack__V_20_20));
#line 142 "arg_pack.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__arg_pack__Xss0_9));
#line 142 "arg_pack.m"
                }
#line 140 "arg_pack.m"
              }
#line 143 "arg_pack.m"
            else
#line 143 "arg_pack.m"
              if (((MR_tag((MR_Word) backend_libs__arg_pack__V_36_36)) == (MR_mktag((MR_Integer) 1))))
#line 144 "arg_pack.m"
                {
#line 144 "arg_pack.m"
                  MR_Word backend_libs__arg_pack__WsTail_11;
#line 144 "arg_pack.m"
                  MR_Word backend_libs__arg_pack__XsHead_12;
#line 144 "arg_pack.m"
                  MR_Word backend_libs__arg_pack__XsTail_13;
#line 144 "arg_pack.m"
                  MR_Word backend_libs__arg_pack__V_19_19;
#line 144 "arg_pack.m"
                  MR_Word backend_libs__arg_pack__Xss0_22;

#line 145 "arg_pack.m"
                  {
#line 145 "arg_pack.m"
                    backend_libs__arg_pack__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_110_101_120_116_95_119_111_114_100_95_95_91_49_93_95_48_5_p_0(backend_libs__arg_pack__V_35_35, &backend_libs__arg_pack__WsTail_11, backend_libs__arg_pack__Xs_7, &backend_libs__arg_pack__XsHead_12, &backend_libs__arg_pack__XsTail_13);
                  }
#line 146 "arg_pack.m"
                  {
#line 146 "arg_pack.m"
                    backend_libs__arg_pack__group_same_word_elements_3_p_0(backend_libs__arg_pack__TypeInfo_for_T_34, backend_libs__arg_pack__WsTail_11, backend_libs__arg_pack__XsTail_13, &backend_libs__arg_pack__Xss0_22);
                  }
#line 147 "arg_pack.m"
                  {
#line 147 "arg_pack.m"
                    backend_libs__arg_pack__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 147 "arg_pack.m"
                    MR_hl_field(MR_mktag(1), backend_libs__arg_pack__V_19_19, 0) = backend_libs__arg_pack__X_6;
#line 147 "arg_pack.m"
                    MR_hl_field(MR_mktag(1), backend_libs__arg_pack__V_19_19, 1) = ((MR_Box) (backend_libs__arg_pack__XsHead_12));
#line 147 "arg_pack.m"
                  }
#line 147 "arg_pack.m"
                  {
#line 147 "arg_pack.m"
                    MR_Word base;
#line 147 "arg_pack.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 147 "arg_pack.m"
                    *backend_libs__arg_pack__HeadVar__3_3 = base;
#line 147 "arg_pack.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__arg_pack__V_19_19));
#line 147 "arg_pack.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__arg_pack__Xss0_22));
#line 147 "arg_pack.m"
                  }
#line 144 "arg_pack.m"
                }
#line 143 "arg_pack.m"
              else
#line 149 "arg_pack.m"
                {
#line 150 "arg_pack.m"
                  {
#line 150 "arg_pack.m"
                    mercury__require__unexpected_3_p_0((MR_String) "backend_libs.arg_pack", (MR_String) "predicate \140backend_libs.arg_pack.group_same_word_elements\'/3", (MR_String) "partial_word_shifted");
#line 150 "arg_pack.m"
                    return;
                  }
#line 149 "arg_pack.m"
                }
#line 136 "arg_pack.m"
          }
#line 135 "arg_pack.m"
      }
#line 135 "arg_pack.m"
  }
#line 49 "arg_pack.m"
}

#line 43 "arg_pack.m"
MR_Integer MR_CALL 
backend_libs__arg_pack__count_distinct_words_1_f_0(
#line 43 "arg_pack.m"
  MR_Word backend_libs__arg_pack__HeadVar__1_1)
#line 43 "arg_pack.m"
{
#line 117 "arg_pack.m"
  while (MR_TRUE)
#line 117 "arg_pack.m"
    {
#line 117 "arg_pack.m"
      /* tailcall optimized into a loop */
#line 117 "arg_pack.m"
      {
#line 117 "arg_pack.m"
        MR_bool backend_libs__arg_pack__succeeded;
#line 117 "arg_pack.m"
        MR_Integer backend_libs__arg_pack__HeadVar__2_2;

#line 117 "arg_pack.m"
        if ((backend_libs__arg_pack__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 117 "arg_pack.m"
          backend_libs__arg_pack__HeadVar__2_2 = (MR_Integer) 0;
#line 117 "arg_pack.m"
        else
#line 118 "arg_pack.m"
          {
#line 118 "arg_pack.m"
            MR_Word backend_libs__arg_pack__H_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__HeadVar__1_1, (MR_Integer) 0)));
#line 118 "arg_pack.m"
            MR_Word backend_libs__arg_pack__T_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__arg_pack__HeadVar__1_1, (MR_Integer) 1)));

#line 122 "arg_pack.m"
            if ((backend_libs__arg_pack__H_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 123 "arg_pack.m"
              {
#line 123 "arg_pack.m"
                MR_Integer backend_libs__arg_pack__V_12_12;

#line 124 "arg_pack.m"
                {
#line 124 "arg_pack.m"
                  backend_libs__arg_pack__V_12_12 = backend_libs__arg_pack__count_distinct_words_1_f_0(backend_libs__arg_pack__T_4);
                }
#line 124 "arg_pack.m"
                backend_libs__arg_pack__HeadVar__2_2 = ((MR_Integer) 2 + backend_libs__arg_pack__V_12_12);
#line 123 "arg_pack.m"
              }
#line 122 "arg_pack.m"
            else
#line 122 "arg_pack.m"
              if ((backend_libs__arg_pack__H_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 120 "arg_pack.m"
                {
#line 120 "arg_pack.m"
                  MR_Integer backend_libs__arg_pack__V_14_14;

#line 121 "arg_pack.m"
                  {
#line 121 "arg_pack.m"
                    backend_libs__arg_pack__V_14_14 = backend_libs__arg_pack__count_distinct_words_1_f_0(backend_libs__arg_pack__T_4);
                  }
#line 121 "arg_pack.m"
                  backend_libs__arg_pack__HeadVar__2_2 = ((MR_Integer) 1 + backend_libs__arg_pack__V_14_14);
#line 120 "arg_pack.m"
                }
#line 122 "arg_pack.m"
              else
#line 122 "arg_pack.m"
                if (((MR_tag((MR_Word) backend_libs__arg_pack__H_3)) == (MR_mktag((MR_Integer) 1))))
#line 126 "arg_pack.m"
                  {
#line 126 "arg_pack.m"
                    MR_Integer backend_libs__arg_pack__V_10_10;

#line 127 "arg_pack.m"
                    {
#line 127 "arg_pack.m"
                      backend_libs__arg_pack__V_10_10 = backend_libs__arg_pack__count_distinct_words_1_f_0(backend_libs__arg_pack__T_4);
                    }
#line 127 "arg_pack.m"
                    backend_libs__arg_pack__HeadVar__2_2 = ((MR_Integer) 1 + backend_libs__arg_pack__V_10_10);
#line 126 "arg_pack.m"
                  }
#line 122 "arg_pack.m"
                else
#line 130 "arg_pack.m"
                  {
#line 130 "arg_pack.m"
                    /* direct tailcall eliminated */
#line 130 "arg_pack.m"
                    {
#line 130 "arg_pack.m"
                      MR_Word backend_libs__arg_pack__HeadVar__1__tmp_copy_1 = backend_libs__arg_pack__T_4;

#line 130 "arg_pack.m"
                      backend_libs__arg_pack__HeadVar__1_1 = backend_libs__arg_pack__HeadVar__1__tmp_copy_1;
#line 130 "arg_pack.m"
                    }
#line 130 "arg_pack.m"
                    continue;
#line 130 "arg_pack.m"
                  }
#line 118 "arg_pack.m"
          }
#line 117 "arg_pack.m"
        return backend_libs__arg_pack__HeadVar__2_2;
#line 117 "arg_pack.m"
      }
#line 117 "arg_pack.m"
      break;
#line 117 "arg_pack.m"
    }
#line 43 "arg_pack.m"
}

#line 63 "arg_pack.m"
static void MR_CALL 
backend_libs__arg_pack__pack_args_8_p_0_1(
#line 63 "arg_pack.m"
  void * backend_libs__arg_pack__env_ptr_arg)
#line 63 "arg_pack.m"
{
#line 63 "arg_pack.m"
  {
#line 63 "arg_pack.m"
    struct backend_libs__arg_pack__pack_args_8_p_0_env_0_s * backend_libs__arg_pack__env_ptr = (struct backend_libs__arg_pack__pack_args_8_p_0_env_0_s *) backend_libs__arg_pack__env_ptr_arg;

#line 63 "arg_pack.m"
    MR_builtin_longjmp((backend_libs__arg_pack__env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__commit_0, 1);
#line 63 "arg_pack.m"
  }
#line 63 "arg_pack.m"
}

#line 63 "arg_pack.m"
static void MR_CALL 
backend_libs__arg_pack__pack_args_8_p_0_3(
#line 63 "arg_pack.m"
  void * backend_libs__arg_pack__env_ptr_arg)
#line 63 "arg_pack.m"
{
#line 63 "arg_pack.m"
  {
#line 63 "arg_pack.m"
    struct backend_libs__arg_pack__pack_args_8_p_0_env_0_s * backend_libs__arg_pack__env_ptr = (struct backend_libs__arg_pack__pack_args_8_p_0_env_0_s *) backend_libs__arg_pack__env_ptr_arg;

#line 63 "arg_pack.m"
    (backend_libs__arg_pack__env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__V_29_29 = ((MR_Word) (backend_libs__arg_pack__env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__conv0_V_29_29);
#line 63 "arg_pack.m"
    {
#line 63 "arg_pack.m"
      backend_libs__arg_pack__pack_args_8_p_0_2(backend_libs__arg_pack__env_ptr);
#line 63 "arg_pack.m"
      return;
    }
#line 63 "arg_pack.m"
  }
#line 63 "arg_pack.m"
}

#line 63 "arg_pack.m"
static void MR_CALL 
backend_libs__arg_pack__pack_args_8_p_0_2(
#line 63 "arg_pack.m"
  void * backend_libs__arg_pack__env_ptr_arg)
#line 63 "arg_pack.m"
{
#line 63 "arg_pack.m"
  {
#line 63 "arg_pack.m"
    struct backend_libs__arg_pack__pack_args_8_p_0_env_0_s * backend_libs__arg_pack__env_ptr = (struct backend_libs__arg_pack__pack_args_8_p_0_env_0_s *) backend_libs__arg_pack__env_ptr_arg;

#line 63 "arg_pack.m"
    {
#line 63 "arg_pack.m"
      MR_Integer backend_libs__arg_pack__V_35_35;

#line 63 "arg_pack.m"
      (backend_libs__arg_pack__env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) (backend_libs__arg_pack__env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 63 "arg_pack.m"
      if ((backend_libs__arg_pack__env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__succeeded)
#line 63 "arg_pack.m"
        {
#line 63 "arg_pack.m"
          backend_libs__arg_pack__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), (backend_libs__arg_pack__env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__V_29_29, (MR_Integer) 0)));
#line 63 "arg_pack.m"
          {
#line 63 "arg_pack.m"
            backend_libs__arg_pack__pack_args_8_p_0_1(backend_libs__arg_pack__env_ptr);
#line 63 "arg_pack.m"
            return;
          }
#line 63 "arg_pack.m"
        }
#line 63 "arg_pack.m"
    }
#line 63 "arg_pack.m"
  }
#line 63 "arg_pack.m"
}

#line 63 "arg_pack.m"
static void MR_CALL 
backend_libs__arg_pack__pack_args_8_p_0_4(
#line 63 "arg_pack.m"
  void * backend_libs__arg_pack__env_ptr_arg)
#line 63 "arg_pack.m"
{
#line 63 "arg_pack.m"
  {
#line 63 "arg_pack.m"
    struct backend_libs__arg_pack__pack_args_8_p_0_env_0_s * backend_libs__arg_pack__env_ptr = (struct backend_libs__arg_pack__pack_args_8_p_0_env_0_s *) backend_libs__arg_pack__env_ptr_arg;

#line 63 "arg_pack.m"
    if (MR_builtin_setjmp((backend_libs__arg_pack__env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__commit_0) == 0)
#line 63 "arg_pack.m"
      {
#line 63 "arg_pack.m"
        {
#line 63 "arg_pack.m"
          {
#line 63 "arg_pack.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, &(backend_libs__arg_pack__env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__conv0_V_29_29, (backend_libs__arg_pack__env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__ArgWidths_10, backend_libs__arg_pack__pack_args_8_p_0_3, backend_libs__arg_pack__env_ptr);
          }
#line 63 "arg_pack.m"
        }
#line 63 "arg_pack.m"
        (backend_libs__arg_pack__env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__succeeded = MR_FALSE;
#line 63 "arg_pack.m"
      }
#line 63 "arg_pack.m"
    else
#line 63 "arg_pack.m"
      (backend_libs__arg_pack__env_ptr)->backend_libs__arg_pack__pack_args_8_p_0_env_0__succeeded = MR_TRUE;
#line 63 "arg_pack.m"
  }
#line 63 "arg_pack.m"
}

#line 35 "arg_pack.m"
void MR_CALL 
backend_libs__arg_pack__pack_args_8_p_0(
#line 35 "arg_pack.m"
  MR_Word backend_libs__arg_pack__TypeInfo_for_T_25,
#line 35 "arg_pack.m"
  MR_Word backend_libs__arg_pack__TypeInfo_for_Acc1_26,
#line 35 "arg_pack.m"
  MR_Word backend_libs__arg_pack__TypeInfo_for_Acc2_27,
#line 35 "arg_pack.m"
  MR_Word backend_libs__arg_pack__ShiftCombine_9,
#line 35 "arg_pack.m"
  MR_Word backend_libs__arg_pack__ArgWidths_10,
#line 35 "arg_pack.m"
  MR_Word backend_libs__arg_pack__STATE_VARIABLE_Args_0_15,
#line 35 "arg_pack.m"
  MR_Word * backend_libs__arg_pack__STATE_VARIABLE_Args_16,
#line 35 "arg_pack.m"
  MR_Box backend_libs__arg_pack__STATE_VARIABLE_Acc1_0_17,
#line 35 "arg_pack.m"
  MR_Box * backend_libs__arg_pack__STATE_VARIABLE_Acc1_18,
#line 35 "arg_pack.m"
  MR_Box backend_libs__arg_pack__STATE_VARIABLE_Acc2_0_19,
#line 35 "arg_pack.m"
  MR_Box * backend_libs__arg_pack__STATE_VARIABLE_Acc2_20)
#line 35 "arg_pack.m"
{
#line 35 "arg_pack.m"
  {
#line 35 "arg_pack.m"
    struct backend_libs__arg_pack__pack_args_8_p_0_env_0_s backend_libs__arg_pack__env;

#line 35 "arg_pack.m"
    (backend_libs__arg_pack__env).backend_libs__arg_pack__pack_args_8_p_0_env_0__ArgWidths_10 = backend_libs__arg_pack__ArgWidths_10;
#line 63 "arg_pack.m"
    {
#line 63 "arg_pack.m"
      backend_libs__arg_pack__pack_args_8_p_0_4(&backend_libs__arg_pack__env);
    }
#line 65 "arg_pack.m"
    if ((backend_libs__arg_pack__env).backend_libs__arg_pack__pack_args_8_p_0_env_0__succeeded)
#line 64 "arg_pack.m"
      {
#line 64 "arg_pack.m"
        backend_libs__arg_pack__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_p_0(backend_libs__arg_pack__ShiftCombine_9, (backend_libs__arg_pack__env).backend_libs__arg_pack__pack_args_8_p_0_env_0__ArgWidths_10, backend_libs__arg_pack__STATE_VARIABLE_Args_0_15, backend_libs__arg_pack__STATE_VARIABLE_Args_16, backend_libs__arg_pack__STATE_VARIABLE_Acc1_0_17, backend_libs__arg_pack__STATE_VARIABLE_Acc1_18, backend_libs__arg_pack__STATE_VARIABLE_Acc2_0_19, backend_libs__arg_pack__STATE_VARIABLE_Acc2_20);
#line 64 "arg_pack.m"
        return;
      }
#line 65 "arg_pack.m"
    else
#line 66 "arg_pack.m"
      {
#line 66 "arg_pack.m"
        *backend_libs__arg_pack__STATE_VARIABLE_Acc2_20 = backend_libs__arg_pack__STATE_VARIABLE_Acc2_0_19;
#line 66 "arg_pack.m"
        *backend_libs__arg_pack__STATE_VARIABLE_Acc1_18 = backend_libs__arg_pack__STATE_VARIABLE_Acc1_0_17;
#line 66 "arg_pack.m"
        *backend_libs__arg_pack__STATE_VARIABLE_Args_16 = backend_libs__arg_pack__STATE_VARIABLE_Args_0_15;
#line 66 "arg_pack.m"
      }
#line 35 "arg_pack.m"
  }
#line 35 "arg_pack.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module backend_libs.arg_pack. */
