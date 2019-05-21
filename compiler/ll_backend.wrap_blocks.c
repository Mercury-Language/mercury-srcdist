/*
** Automatically generated from `wrap_blocks.m'
** by the Mercury compiler,
** version 2017-08-21
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
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "libs.dependency_graph.mih"
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
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word RevSofar_4,
  MR_Word * HeadVar__5_5);







#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



void MR_CALL 
ll_backend__wrap_blocks__wrap_blocks_2_p_0(
  MR_Word Instrs0_3,
  MR_Word * Instrs_4)
{
  {
    ll_backend__wrap_blocks__wrap_instrs_5_p_0(Instrs0_3, (MR_Integer) 0, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Instrs_4);
  }
}

static void MR_CALL 
ll_backend__wrap_blocks__wrap_instrs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word RevSofar_4,
  MR_Word * HeadVar__5_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      if ((RevSofar_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        succeeded = (HeadVar__2_2 > (MR_Integer) 0);
        if (!(succeeded))
        {
          succeeded = (HeadVar__3_3 > (MR_Integer) 0);
        }
        if (succeeded)
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
      MR_Word Instr0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Instrs0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Uinstr0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instr0_19, (MR_Integer) 0)));
      MR_Integer R1_27;
      MR_Integer F1_28;
      MR_String _Comment0_26 = ((MR_String) (MR_hl_field(MR_mktag(0), Instr0_19, (MR_Integer) 1)));

      ll_backend__opt_util__count_temps_instr_5_p_0(Uinstr0_25, HeadVar__2_2, &R1_27, HeadVar__3_3, &F1_28);
      succeeded = (R1_27 > (MR_Integer) 0);
      if (!(succeeded))
      {
        succeeded = (F1_28 > (MR_Integer) 0);
      }
      if (succeeded)
      {
        if (((((MR_tag((MR_Word) Uinstr0_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Uinstr0_25, (MR_Integer) 0)))) == (MR_Integer) 5))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Uinstr0_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Uinstr0_25, (MR_Integer) 0)))) == (MR_Integer) 3))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          MR_Word BlockInstrs_36;
          MR_Word Instrs1_37;
          MR_Word BlockInstr_38;
          MR_Word Var_44;
          MR_Word Var_46;

          mercury__list__reverse_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, RevSofar_4, &BlockInstrs_36);
          ll_backend__wrap_blocks__wrap_instrs_5_p_0(Instrs0_20, (MR_Integer) 0, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Instrs1_37);
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (R1_27));
            MR_hl_field(MR_mktag(3), Var_44, 2) = ((MR_Box) (F1_28));
            MR_hl_field(MR_mktag(3), Var_44, 3) = ((MR_Box) (BlockInstrs_36));
          }
          {
            BlockInstr_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), BlockInstr_38, 0) = ((MR_Box) (Var_44));
            MR_hl_field(MR_mktag(0), BlockInstr_38, 1) = ((MR_Box) ((MR_String) ""));
          }
          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Instr0_19));
            MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Instrs1_37));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__5_5 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BlockInstr_38));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_46));
          }
        }
        else
        {
          MR_Word Var_47;

          Var_47 = ll_backend__opt_util__can_instr_fall_through_1_f_0(Uinstr0_25);
          succeeded = (Var_47 == (MR_Integer) 0);
          if (succeeded)
          {
            MR_Word Var_48;
            MR_Word Var_52;
            MR_Word BlockInstrs_58;
            MR_Word Instrs1_59;
            MR_Word BlockInstr_60;

            {
              Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Instr0_19));
              MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (RevSofar_4));
            }
            mercury__list__reverse_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, Var_48, &BlockInstrs_58);
            ll_backend__wrap_blocks__wrap_instrs_5_p_0(Instrs0_20, (MR_Integer) 0, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Instrs1_59);
            {
              Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (R1_27));
              MR_hl_field(MR_mktag(3), Var_52, 2) = ((MR_Box) (F1_28));
              MR_hl_field(MR_mktag(3), Var_52, 3) = ((MR_Box) (BlockInstrs_58));
            }
            {
              BlockInstr_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), BlockInstr_60, 0) = ((MR_Box) (Var_52));
              MR_hl_field(MR_mktag(0), BlockInstr_60, 1) = ((MR_Box) ((MR_String) ""));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BlockInstr_60));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Instrs1_59));
            }
          }
          else
          {
            MR_Word Var_54;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Integer next_value_of_HeadVar__2_2;
            MR_Integer next_value_of_HeadVar__3_3;
            MR_Word next_value_of_RevSofar_4;

            {
              Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Instr0_19));
              MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (RevSofar_4));
            }
            /* direct tailcall eliminated */
            next_value_of_HeadVar__1_1 = Instrs0_20;
            next_value_of_HeadVar__2_2 = R1_27;
            next_value_of_HeadVar__3_3 = F1_28;
            next_value_of_RevSofar_4 = Var_54;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            RevSofar_4 = next_value_of_RevSofar_4;
            continue;
          }
        }
      }
      else
      {
        MR_Word Instrs1_64;

        ll_backend__wrap_blocks__wrap_instrs_5_p_0(Instrs0_20, (MR_Integer) 0, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Instrs1_64);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr0_19));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Instrs1_64));
        }
      }
    }
    break;
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

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__wrap_blocks__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ll_backend.wrap_blocks. */
