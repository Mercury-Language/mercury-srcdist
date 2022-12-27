/*
** Automatically generated from `wrap_blocks.m'
** by the Mercury compiler,
** version 22.01.5-beta-2022-12-27
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


// :- module ll_backend.wrap_blocks.
// :- implementation.

/*
INIT mercury__ll_backend__wrap_blocks__init
ENDINIT
*/

#include "ll_backend.wrap_blocks.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "counter.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "term.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "libs.globals.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.opt_util.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"




static void MR_CALL 
ll_backend__wrap_blocks__wrap_instrs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word RevSofar_4,
  MR_Word * HeadVar__5_5);







#include "array.mh"



void MR_CALL 
ll_backend__wrap_blocks__wrap_blocks_2_p_0(
  MR_Word Instrs0_3,
  MR_Word * Instrs_4)
{
  ll_backend__wrap_blocks__wrap_instrs_5_p_0(Instrs0_3, (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Instrs_4);
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

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      if ((RevSofar_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        succeeded = (HeadVar__2_2 > (MR_Integer) 0);
        if (!(succeeded))
          succeeded = (HeadVar__3_3 > (MR_Integer) 0);
        if (succeeded)
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.wrap_blocks.wrap_instrs\'/5", (MR_String) "procedure ends without closing block");
            return;
          }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.wrap_blocks.wrap_instrs\'/5", (MR_String) "procedure ends with fallthrough");
          return;
        }
    }
    else
    {
      MR_Word Instr0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instrs0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Uinstr0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_17, (MR_Integer) 0))));
      MR_Integer R1_25;
      MR_Integer F1_26;

      ll_backend__opt_util__count_temps_instr_5_p_0(Uinstr0_23, HeadVar__2_2, &R1_25, HeadVar__3_3, &F1_26);
      succeeded = (R1_25 > (MR_Integer) 0);
      if (!(succeeded))
        succeeded = (F1_26 > (MR_Integer) 0);
      if (succeeded)
      {
        if (((((MR_tag((MR_Word) Uinstr0_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr0_23, (MR_Integer) 0)))) == (MR_Integer) 5))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Uinstr0_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr0_23, (MR_Integer) 0)))) == (MR_Integer) 3))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          MR_Word BlockInstrs_34;
          MR_Word Instrs1_35;
          MR_Word BlockInstr_36;
          MR_Word Var_42;
          MR_Word Var_44;

          mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RevSofar_4, &BlockInstrs_34);
          ll_backend__wrap_blocks__wrap_instrs_5_p_0(Instrs0_18, (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &Instrs1_35);
          {
            Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (R1_25));
            MR_hl_field(MR_mktag(3), Var_42, 2) = ((MR_Box) (F1_26));
            MR_hl_field(MR_mktag(3), Var_42, 3) = ((MR_Box) (BlockInstrs_34));
          }
          {
            BlockInstr_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), BlockInstr_36, 0) = ((MR_Box) (Var_42));
            MR_hl_field(MR_mktag(0), BlockInstr_36, 1) = ((MR_Box) ((MR_String) ""));
          }
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Instr0_17));
            MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Instrs1_35));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__5_5 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BlockInstr_36));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_44));
          }
        }
        else
        {
          MR_Word Var_45;

          Var_45 = ll_backend__opt_util__can_instr_fall_through_1_f_0(Uinstr0_23);
          succeeded = (Var_45 == (MR_Integer) 0);
          if (succeeded)
          {
            MR_Word Var_46;
            MR_Word Var_50;
            MR_Word BlockInstrs_56;
            MR_Word Instrs1_57;
            MR_Word BlockInstr_58;

            {
              Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Instr0_17));
              MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (RevSofar_4));
            }
            mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_46, &BlockInstrs_56);
            ll_backend__wrap_blocks__wrap_instrs_5_p_0(Instrs0_18, (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &Instrs1_57);
            {
              Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (R1_25));
              MR_hl_field(MR_mktag(3), Var_50, 2) = ((MR_Box) (F1_26));
              MR_hl_field(MR_mktag(3), Var_50, 3) = ((MR_Box) (BlockInstrs_56));
            }
            {
              BlockInstr_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), BlockInstr_58, 0) = ((MR_Box) (Var_50));
              MR_hl_field(MR_mktag(0), BlockInstr_58, 1) = ((MR_Box) ((MR_String) ""));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BlockInstr_58));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Instrs1_57));
            }
          }
          else
          {
            MR_Word Var_52;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Integer next_value_of_HeadVar__2_2;
            MR_Integer next_value_of_HeadVar__3_3;
            MR_Word next_value_of_RevSofar_4;

            {
              Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Instr0_17));
              MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (RevSofar_4));
            }
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Instrs0_18;
            next_value_of_HeadVar__2_2 = R1_25;
            next_value_of_HeadVar__3_3 = F1_26;
            next_value_of_RevSofar_4 = Var_52;
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
        MR_Word Instrs1_62;

        ll_backend__wrap_blocks__wrap_instrs_5_p_0(Instrs0_18, (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &Instrs1_62);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr0_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Instrs1_62));
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

// :- end_module ll_backend.wrap_blocks.
