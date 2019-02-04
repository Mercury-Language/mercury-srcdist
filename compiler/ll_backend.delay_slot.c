/*
** Automatically generated from `delay_slot.m'
** by the Mercury compiler,
** version rotd=2018-01-08
** configured for x86_64-pc-linux-gnu.
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


// :- module ll_backend.delay_slot.
// :- implementation.

/*
INIT mercury__ll_backend__delay_slot__init
ENDINIT
*/

#include "ll_backend.delay_slot.mih"


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





static /* final */ const MR_Box ll_backend__delay_slot_scalar_common_1[1][1];

static /* final */ const MR_Box ll_backend__delay_slot_scalar_common_2[1][2];

static /* final */ const MR_Box ll_backend__delay_slot_scalar_common_3[1][3];




static /* final */ const MR_Box ll_backend__delay_slot_scalar_common_1[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ll_backend__delay_slot_scalar_common_2[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__delay_slot_scalar_common_3[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__delay_slot_scalar_common_2[0]))),
    ((MR_Box) (&ll_backend__delay_slot_scalar_common_1[0]))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



void MR_CALL 
ll_backend__delay_slot__fill_branch_delay_slot_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word Instr0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Instrs0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Instr1_8;
      MR_Word Instr2_9;
      MR_Word Tail0_11;
      MR_String C2_19;
      MR_Word Instr3_10;
      MR_Integer Size_15;
      MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instr0_3, (MR_Integer) 0)));
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Integer Var_42;
      MR_String Var_7 = ((MR_String) (MR_hl_field(MR_mktag(0), Instr0_3, (MR_Integer) 1)));
      MR_Word Var_6;
      MR_String Var_14;
      MR_Word Var_12;
      MR_Word Var_13;
      MR_String Var_18;
      MR_String Var_16;
      MR_Word Var_17;

      succeeded = ((((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Instrs0_4)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Instr1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), Instrs0_4, (MR_Integer) 0)));
          Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Instrs0_4, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Instr2_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0)));
            Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Instr3_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0)));
              Tail0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1)));
              Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instr1_8, (MR_Integer) 0)));
              Var_14 = ((MR_String) (MR_hl_field(MR_mktag(0), Instr1_8, (MR_Integer) 1)));
              succeeded = ((((MR_tag((MR_Word) Var_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_27, (MR_Integer) 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_27, (MR_Integer) 1)));
                Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_27, (MR_Integer) 2)));
                Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instr2_9, (MR_Integer) 0)));
                Var_18 = ((MR_String) (MR_hl_field(MR_mktag(0), Instr2_9, (MR_Integer) 1)));
                succeeded = ((((MR_tag((MR_Word) Var_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_28, (MR_Integer) 0)))) == (MR_Integer) 24)));
                if (succeeded)
                {
                  Size_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_28, (MR_Integer) 1)));
                  Var_16 = ((MR_String) (MR_hl_field(MR_mktag(3), Var_28, (MR_Integer) 2)));
                  Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_28, (MR_Integer) 3)));
                  Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instr3_10, (MR_Integer) 0)));
                  C2_19 = ((MR_String) (MR_hl_field(MR_mktag(0), Instr3_10, (MR_Integer) 1)));
                  succeeded = ((((MR_tag((MR_Word) Var_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_29, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_29, (MR_Integer) 1)));
                    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_29, (MR_Integer) 2)));
                    succeeded = ((((MR_tag((MR_Word) Var_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_30, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_30, (MR_Integer) 1)));
                      succeeded = (Size_15 == Var_42);
                      if (succeeded)
                      {
                        succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_mktag((MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 0)));
                          succeeded = (Var_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word Tail1_20;
        MR_String NewC2_21;
        MR_Word EarlySave_22;
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Word Var_41;

        ll_backend__delay_slot__fill_branch_delay_slot_2_p_0(Tail0_11, &Tail1_20);
        mercury__string__append_3_p_2(C2_19, (MR_String) " (early save in delay slot)", &NewC2_21);
        {
          EarlySave_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), EarlySave_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__delay_slot_scalar_common_3[0])));
          MR_hl_field(MR_mktag(0), EarlySave_22, 1) = ((MR_Box) (NewC2_21));
        }
        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Instr2_9));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Tail1_20));
        }
        {
          Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Instr1_8));
          MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_41));
        }
        {
          Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (EarlySave_22));
          MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_40));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr0_3));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_39));
        }
      }
      else
      {
        MR_Word Instrs1_23;

        ll_backend__delay_slot__fill_branch_delay_slot_2_p_0(Instrs0_4, &Instrs1_23);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr0_3));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Instrs1_23));
        }
      }
    }
  }
}

void mercury__ll_backend__delay_slot__init(void)
{
}

void mercury__ll_backend__delay_slot__init_type_tables(void)
{
}

void mercury__ll_backend__delay_slot__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__delay_slot__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.delay_slot.
