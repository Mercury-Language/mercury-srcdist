/*
** Automatically generated from `wrap_blocks.m'
** by the Mercury compiler,
** version rotd-2016-03-21
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


/* :- module ll_backend.wrap_blocks. */
/* :- implementation. */

/*
INIT mercury__ll_backend__wrap_blocks__init
ENDINIT
*/

#include "ll_backend.wrap_blocks.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
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
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.opt_util.mih"
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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
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
#include "queue.mih"
#include "random.mih"
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
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static void MR_CALL 
ll_backend__wrap_blocks__wrap_instrs_5_p_0(
  MR_Word ll_backend__wrap_blocks__HeadVar__1_1,
  MR_Integer ll_backend__wrap_blocks__HeadVar__2_2,
  MR_Integer ll_backend__wrap_blocks__HeadVar__3_3,
  MR_Word ll_backend__wrap_blocks__RevSofar_4,
  MR_Word * ll_backend__wrap_blocks__HeadVar__5_5);







#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static void MR_CALL 
ll_backend__wrap_blocks__wrap_instrs_5_p_0(
  MR_Word ll_backend__wrap_blocks__HeadVar__1_1,
  MR_Integer ll_backend__wrap_blocks__HeadVar__2_2,
  MR_Integer ll_backend__wrap_blocks__HeadVar__3_3,
  MR_Word ll_backend__wrap_blocks__RevSofar_4,
  MR_Word * ll_backend__wrap_blocks__HeadVar__5_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__wrap_blocks__succeeded;

        if ((ll_backend__wrap_blocks__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__wrap_blocks__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            if ((ll_backend__wrap_blocks__RevSofar_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                ll_backend__wrap_blocks__succeeded = (ll_backend__wrap_blocks__HeadVar__2_2 > (MR_Integer) 0);
                if (!(ll_backend__wrap_blocks__succeeded))
                  {
                    ll_backend__wrap_blocks__succeeded = (ll_backend__wrap_blocks__HeadVar__3_3 > (MR_Integer) 0);
                  }
                if (ll_backend__wrap_blocks__succeeded)
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.wrap_blocks", (MR_String) "predicate \140ll_backend.wrap_blocks.wrap_instrs\'/5", (MR_String) "procedure ends without closing block");
                      return;
                    }
                  }
                else
                  {
                  }
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.wrap_blocks", (MR_String) "predicate \140ll_backend.wrap_blocks.wrap_instrs\'/5", (MR_String) "procedure ends with fallthrough");
                  return;
                }
              }
          }
        else
          {
            MR_Word ll_backend__wrap_blocks__Instr0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__wrap_blocks__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__wrap_blocks__Instrs0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__wrap_blocks__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__wrap_blocks__Uinstr0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__wrap_blocks__Instr0_19, (MR_Integer) 0)));
            MR_Integer ll_backend__wrap_blocks__R1_27;
            MR_Integer ll_backend__wrap_blocks__F1_28;
            MR_String ll_backend__wrap_blocks___Comment0_26 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__wrap_blocks__Instr0_19, (MR_Integer) 1)));

            {
              ll_backend__opt_util__count_temps_instr_5_p_0(ll_backend__wrap_blocks__Uinstr0_25, ll_backend__wrap_blocks__HeadVar__2_2, &ll_backend__wrap_blocks__R1_27, ll_backend__wrap_blocks__HeadVar__3_3, &ll_backend__wrap_blocks__F1_28);
            }
            ll_backend__wrap_blocks__succeeded = (ll_backend__wrap_blocks__R1_27 > (MR_Integer) 0);
            if (!(ll_backend__wrap_blocks__succeeded))
              {
                ll_backend__wrap_blocks__succeeded = (ll_backend__wrap_blocks__F1_28 > (MR_Integer) 0);
              }
            if (ll_backend__wrap_blocks__succeeded)
              {
                if (((((MR_tag((MR_Word) ll_backend__wrap_blocks__Uinstr0_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__wrap_blocks__Uinstr0_25, (MR_Integer) 0)))) == (MR_Integer) 5))))
                  ll_backend__wrap_blocks__succeeded = MR_TRUE;
                else
                if (((((MR_tag((MR_Word) ll_backend__wrap_blocks__Uinstr0_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__wrap_blocks__Uinstr0_25, (MR_Integer) 0)))) == (MR_Integer) 3))))
                  ll_backend__wrap_blocks__succeeded = MR_TRUE;
                else
                  ll_backend__wrap_blocks__succeeded = MR_FALSE;
                if (ll_backend__wrap_blocks__succeeded)
                  {
                    MR_Word ll_backend__wrap_blocks__BlockInstrs_36;
                    MR_Word ll_backend__wrap_blocks__Instrs1_37;
                    MR_Word ll_backend__wrap_blocks__BlockInstr_38;
                    MR_Word ll_backend__wrap_blocks__V_44_44;
                    MR_Word ll_backend__wrap_blocks__V_46_46;

                    {
                      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__wrap_blocks__RevSofar_4, &ll_backend__wrap_blocks__BlockInstrs_36);
                    }
                    {
                      ll_backend__wrap_blocks__wrap_instrs_5_p_0(ll_backend__wrap_blocks__Instrs0_20, (MR_Integer) 0, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__wrap_blocks__Instrs1_37);
                    }
                    {
                      ll_backend__wrap_blocks__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ll_backend__wrap_blocks__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), ll_backend__wrap_blocks__V_44_44, 1) = ((MR_Box) (ll_backend__wrap_blocks__R1_27));
                      MR_hl_field(MR_mktag(3), ll_backend__wrap_blocks__V_44_44, 2) = ((MR_Box) (ll_backend__wrap_blocks__F1_28));
                      MR_hl_field(MR_mktag(3), ll_backend__wrap_blocks__V_44_44, 3) = ((MR_Box) (ll_backend__wrap_blocks__BlockInstrs_36));
                    }
                    {
                      ll_backend__wrap_blocks__BlockInstr_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ll_backend__wrap_blocks__BlockInstr_38, 0) = ((MR_Box) (ll_backend__wrap_blocks__V_44_44));
                      MR_hl_field(MR_mktag(0), ll_backend__wrap_blocks__BlockInstr_38, 1) = ((MR_Box) ((MR_String) ""));
                    }
                    {
                      ll_backend__wrap_blocks__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__wrap_blocks__V_46_46, 0) = ((MR_Box) (ll_backend__wrap_blocks__Instr0_19));
                      MR_hl_field(MR_mktag(1), ll_backend__wrap_blocks__V_46_46, 1) = ((MR_Box) (ll_backend__wrap_blocks__Instrs1_37));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *ll_backend__wrap_blocks__HeadVar__5_5 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__wrap_blocks__BlockInstr_38));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__wrap_blocks__V_46_46));
                    }
                  }
                else
                  {
                    MR_Word ll_backend__wrap_blocks__V_47_47;

                    {
                      ll_backend__wrap_blocks__V_47_47 = ll_backend__opt_util__can_instr_fall_through_1_f_0(ll_backend__wrap_blocks__Uinstr0_25);
                    }
                    ll_backend__wrap_blocks__succeeded = (ll_backend__wrap_blocks__V_47_47 == (MR_Integer) 0);
                    if (ll_backend__wrap_blocks__succeeded)
                      {
                        MR_Word ll_backend__wrap_blocks__V_48_48;
                        MR_Word ll_backend__wrap_blocks__V_52_52;
                        MR_Word ll_backend__wrap_blocks__BlockInstrs_58;
                        MR_Word ll_backend__wrap_blocks__Instrs1_59;
                        MR_Word ll_backend__wrap_blocks__BlockInstr_60;

                        {
                          ll_backend__wrap_blocks__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__wrap_blocks__V_48_48, 0) = ((MR_Box) (ll_backend__wrap_blocks__Instr0_19));
                          MR_hl_field(MR_mktag(1), ll_backend__wrap_blocks__V_48_48, 1) = ((MR_Box) (ll_backend__wrap_blocks__RevSofar_4));
                        }
                        {
                          mercury__list__reverse_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__wrap_blocks__V_48_48, &ll_backend__wrap_blocks__BlockInstrs_58);
                        }
                        {
                          ll_backend__wrap_blocks__wrap_instrs_5_p_0(ll_backend__wrap_blocks__Instrs0_20, (MR_Integer) 0, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__wrap_blocks__Instrs1_59);
                        }
                        {
                          ll_backend__wrap_blocks__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ll_backend__wrap_blocks__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), ll_backend__wrap_blocks__V_52_52, 1) = ((MR_Box) (ll_backend__wrap_blocks__R1_27));
                          MR_hl_field(MR_mktag(3), ll_backend__wrap_blocks__V_52_52, 2) = ((MR_Box) (ll_backend__wrap_blocks__F1_28));
                          MR_hl_field(MR_mktag(3), ll_backend__wrap_blocks__V_52_52, 3) = ((MR_Box) (ll_backend__wrap_blocks__BlockInstrs_58));
                        }
                        {
                          ll_backend__wrap_blocks__BlockInstr_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ll_backend__wrap_blocks__BlockInstr_60, 0) = ((MR_Box) (ll_backend__wrap_blocks__V_52_52));
                          MR_hl_field(MR_mktag(0), ll_backend__wrap_blocks__BlockInstr_60, 1) = ((MR_Box) ((MR_String) ""));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *ll_backend__wrap_blocks__HeadVar__5_5 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__wrap_blocks__BlockInstr_60));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__wrap_blocks__Instrs1_59));
                        }
                      }
                    else
                      {
                        MR_Word ll_backend__wrap_blocks__V_54_54;

                        {
                          ll_backend__wrap_blocks__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__wrap_blocks__V_54_54, 0) = ((MR_Box) (ll_backend__wrap_blocks__Instr0_19));
                          MR_hl_field(MR_mktag(1), ll_backend__wrap_blocks__V_54_54, 1) = ((MR_Box) (ll_backend__wrap_blocks__RevSofar_4));
                        }
                        /* direct tailcall eliminated */
                        {
                          MR_Word ll_backend__wrap_blocks__HeadVar__1__tmp_copy_1 = ll_backend__wrap_blocks__Instrs0_20;
                          MR_Integer ll_backend__wrap_blocks__HeadVar__2__tmp_copy_2 = ll_backend__wrap_blocks__R1_27;
                          MR_Integer ll_backend__wrap_blocks__HeadVar__3__tmp_copy_3 = ll_backend__wrap_blocks__F1_28;
                          MR_Word ll_backend__wrap_blocks__RevSofar__tmp_copy_4 = ll_backend__wrap_blocks__V_54_54;

                          ll_backend__wrap_blocks__RevSofar_4 = ll_backend__wrap_blocks__RevSofar__tmp_copy_4;
                          ll_backend__wrap_blocks__HeadVar__3_3 = ll_backend__wrap_blocks__HeadVar__3__tmp_copy_3;
                          ll_backend__wrap_blocks__HeadVar__2_2 = ll_backend__wrap_blocks__HeadVar__2__tmp_copy_2;
                          ll_backend__wrap_blocks__HeadVar__1_1 = ll_backend__wrap_blocks__HeadVar__1__tmp_copy_1;
                        }
                        continue;
                      }
                  }
              }
            else
              {
                MR_Word ll_backend__wrap_blocks__Instrs1_64;

                {
                  ll_backend__wrap_blocks__wrap_instrs_5_p_0(ll_backend__wrap_blocks__Instrs0_20, (MR_Integer) 0, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__wrap_blocks__Instrs1_64);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ll_backend__wrap_blocks__HeadVar__5_5 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__wrap_blocks__Instr0_19));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__wrap_blocks__Instrs1_64));
                }
              }
          }
      }
      break;
    }
}

void MR_CALL 
ll_backend__wrap_blocks__wrap_blocks_2_p_0(
  MR_Word ll_backend__wrap_blocks__Instrs0_3,
  MR_Word * ll_backend__wrap_blocks__Instrs_4)
{
  {
    MR_bool ll_backend__wrap_blocks__succeeded;

    {
      ll_backend__wrap_blocks__wrap_instrs_5_p_0(ll_backend__wrap_blocks__Instrs0_3, (MR_Integer) 0, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__wrap_blocks__Instrs_4);
    }
  }
}

void mercury__ll_backend__wrap_blocks__init(void)
{
}

void mercury__ll_backend__wrap_blocks__init_type_tables(void)
{
}

void mercury__ll_backend__wrap_blocks__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.wrap_blocks. */
