/*
** Automatically generated from `labelopt.m'
** by the Mercury compiler,
** version 2017-08-22
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


/* :- module ll_backend.labelopt. */
/* :- implementation. */

/*
INIT mercury__ll_backend__labelopt__init
ENDINIT
*/

#include "ll_backend.labelopt.mih"


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
ll_backend__labelopt__opt_labels_in_instr_list_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevInstrs_0_2,
  MR_Word * STATE_VARIABLE_RevInstrs_3,
  MR_Word STATE_VARIABLE_Mod_0_4,
  MR_Word * STATE_VARIABLE_Mod_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7);







#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



void MR_CALL 
ll_backend__labelopt__labelopt_main_5_p_0(
  MR_Word Final_6,
  MR_Word LayoutLabelSet_7,
  MR_Word Instrs0_8,
  MR_Word * Instrs_9,
  MR_Word * Mod_10)
{
  {
    MR_bool succeeded;
    MR_Word Useset_11;
    MR_Word Instrs1_12;
    MR_Word RevInstrs_19;

    ll_backend__labelopt__build_useset_3_p_0(Instrs0_8, LayoutLabelSet_7, &Useset_11);
    ll_backend__labelopt__opt_labels_in_instr_list_2_7_p_0(Instrs0_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &RevInstrs_19, (MR_Integer) 0, Mod_10, (MR_Integer) 1, Useset_11);
    mercury__list__reverse_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, RevInstrs_19, &Instrs1_12);
    succeeded = (Final_6 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (*Mod_10 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word Var_13;

      ll_backend__labelopt__labelopt_main_5_p_0(Final_6, LayoutLabelSet_7, Instrs1_12, Instrs_9, &Var_13);
    }
    else
      *Instrs_9 = Instrs1_12;
  }
}

static void MR_CALL 
ll_backend__labelopt__opt_labels_in_instr_list_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevInstrs_0_2,
  MR_Word * STATE_VARIABLE_RevInstrs_3,
  MR_Word STATE_VARIABLE_Mod_0_4,
  MR_Word * STATE_VARIABLE_Mod_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Mod_5 = STATE_VARIABLE_Mod_0_4;
      *STATE_VARIABLE_RevInstrs_3 = STATE_VARIABLE_RevInstrs_0_2;
    }
    else
    {
      MR_Word Instr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Instrs0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Uinstr0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instr0_16, (MR_Integer) 0)));
      MR_Word STATE_VARIABLE_RevInstrs_34_34;
      MR_Word STATE_VARIABLE_Fallthrough_35_35;
      MR_Word STATE_VARIABLE_Mod_38_38;
      MR_String _Comment_23 = ((MR_String) (MR_hl_field(MR_mktag(0), Instr0_16, (MR_Integer) 1)));
      MR_Word Label_24;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevInstrs_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Mod_0_4;
      MR_Word next_value_of_HeadVar__6_6;

      succeeded = ((((MR_tag((MR_Word) Uinstr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Uinstr0_22, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        Label_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr0_22, (MR_Integer) 1)));
        {
          MR_Word EntryType_25;
          MR_Word Var_26;

          succeeded = ((MR_tag((MR_Word) Label_24)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            EntryType_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Label_24, (MR_Integer) 0)));
            Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Label_24, (MR_Integer) 1)));
            switch (EntryType_25) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 1:
                succeeded = MR_TRUE;
                break;
            }
          }
        }
        if (!(succeeded))
        {
          succeeded = mercury__set_tree234__member_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (Label_24)), HeadVar__7_7);
        }
        if (succeeded)
        {
          {
            STATE_VARIABLE_RevInstrs_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_34_34, 0) = ((MR_Box) (Instr0_16));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_34_34, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_2));
          }
          STATE_VARIABLE_Fallthrough_35_35 = (MR_Integer) 1;
          STATE_VARIABLE_Mod_38_38 = STATE_VARIABLE_Mod_0_4;
        }
        else
        {
          STATE_VARIABLE_Mod_38_38 = (MR_Integer) 1;
          STATE_VARIABLE_RevInstrs_34_34 = STATE_VARIABLE_RevInstrs_0_2;
          STATE_VARIABLE_Fallthrough_35_35 = HeadVar__6_6;
        }
      }
      else
      {
        MR_Word Canfallthrough_28;

        switch (HeadVar__6_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              STATE_VARIABLE_Mod_38_38 = (MR_Integer) 1;
              STATE_VARIABLE_RevInstrs_34_34 = STATE_VARIABLE_RevInstrs_0_2;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                STATE_VARIABLE_RevInstrs_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_34_34, 0) = ((MR_Box) (Instr0_16));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_34_34, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_2));
              }
              STATE_VARIABLE_Mod_38_38 = STATE_VARIABLE_Mod_0_4;
            }
            break;
        }
        Canfallthrough_28 = ll_backend__opt_util__can_instr_fall_through_1_f_0(Uinstr0_22);
        switch (Canfallthrough_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Fallthrough_35_35 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Fallthrough_35_35 = HeadVar__6_6;
            break;
        }
      }
      /* direct tailcall eliminated */
      next_value_of_HeadVar__1_1 = Instrs0_17;
      next_value_of_STATE_VARIABLE_RevInstrs_0_2 = STATE_VARIABLE_RevInstrs_34_34;
      next_value_of_STATE_VARIABLE_Mod_0_4 = STATE_VARIABLE_Mod_38_38;
      next_value_of_HeadVar__6_6 = STATE_VARIABLE_Fallthrough_35_35;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevInstrs_0_2 = next_value_of_STATE_VARIABLE_RevInstrs_0_2;
      STATE_VARIABLE_Mod_0_4 = next_value_of_STATE_VARIABLE_Mod_0_4;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__labelopt__build_useset_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Useset_0_2,
  MR_Word * STATE_VARIABLE_Useset_3)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Useset_3 = STATE_VARIABLE_Useset_0_2;
    else
    {
      MR_Word Instr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Instructions_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Uinstr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instr_7, (MR_Integer) 0)));
      MR_Word Labels_12;
      MR_Word STATE_VARIABLE_Useset_15_15;
      MR_String _Comment_11 = ((MR_String) (MR_hl_field(MR_mktag(0), Instr_7, (MR_Integer) 1)));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Useset_0_2;

      ll_backend__opt_util__instr_labels_only_2_p_0(Uinstr_10, &Labels_12);
      mercury__set_tree234__insert_list_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, Labels_12, STATE_VARIABLE_Useset_0_2, &STATE_VARIABLE_Useset_15_15);
      /* direct tailcall eliminated */
      next_value_of_HeadVar__1_1 = Instructions_8;
      next_value_of_STATE_VARIABLE_Useset_0_2 = STATE_VARIABLE_Useset_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Useset_0_2 = next_value_of_STATE_VARIABLE_Useset_0_2;
      continue;
    }
    break;
  }
}

void mercury__ll_backend__labelopt__init(void)
{
}

void mercury__ll_backend__labelopt__init_type_tables(void)
{
}

void mercury__ll_backend__labelopt__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__labelopt__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ll_backend.labelopt. */
