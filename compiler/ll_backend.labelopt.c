/*
** Automatically generated from `labelopt.m'
** by the Mercury compiler,
** version rotd-2025-06-09
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


// :- module ll_backend.labelopt.
// :- implementation.

/*
INIT mercury__ll_backend__labelopt__init
ENDINIT
*/

#include "ll_backend.labelopt.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "cord.mih"
#include "counter.mih"
#include "enum.mih"
#include "hlds.mih"
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
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "hlds.code_model.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "libs.trace_params.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.opt_util.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"




static void MR_CALL 
ll_backend__labelopt__opt_labels_in_instr_list_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevInstrs_0_2,
  MR_Word * STATE_VARIABLE_RevInstrs_3,
  MR_Word STATE_VARIABLE_Mod_0_4,
  MR_Word * STATE_VARIABLE_Mod_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7);







#include "array.mh"


void MR_CALL 
ll_backend__labelopt__labelopt_main_5_p_0(
  MR_Word Final_6,
  MR_Word LayoutLabelSet_7,
  MR_Word Instrs0_8,
  MR_Word * Instrs_9,
  MR_Word * Mod_10)
{
  MR_bool succeeded;
  MR_Word Useset_11;
  MR_Word Instrs1_12;
  MR_Word RevInstrs_15;

  ll_backend__labelopt__build_useset_3_p_0(Instrs0_8, LayoutLabelSet_7, &Useset_11);
  ll_backend__labelopt__opt_labels_in_instr_list_2_7_p_0(Instrs0_8, (MR_Word) ((MR_Unsigned) 0U), &RevInstrs_15, (MR_Integer) 0, Mod_10, (MR_Integer) 1, Useset_11);
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RevInstrs_15, &Instrs1_12);
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

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Mod_5 = STATE_VARIABLE_Mod_0_4;
      *STATE_VARIABLE_RevInstrs_3 = STATE_VARIABLE_RevInstrs_0_2;
    }
    else
    {
      MR_Word Instr0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Instrs0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Uinstr0_22 = ((MR_Word) ((MR_hl_field(0, Instr0_16, 0))));
      MR_Word STATE_VARIABLE_RevInstrs_1_34;
      MR_Word STATE_VARIABLE_Fallthrough_1_35;
      MR_Word STATE_VARIABLE_Mod_1_38;
      MR_Word Label_24;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevInstrs_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Mod_0_4;
      MR_Word next_value_of_HeadVar__6_6;

      succeeded = ((((MR_tag((MR_Word) Uinstr0_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr0_22, 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        Label_24 = ((MR_Word) ((MR_hl_field(3, Uinstr0_22, 1))));
        {
          MR_Word EntryType_25;

          succeeded = ((MR_tag((MR_Word) Label_24)) == (MR_Integer) 1);
          if (succeeded)
          {
            EntryType_25 = ((MR_Unsigned) ((MR_hl_field(1, Label_24, 0))) & (MR_Integer) 3);
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
          succeeded = mercury__set_tree234__member_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ((MR_Box) (Label_24)), HeadVar__7_7);
        if (succeeded)
        {
          {
            STATE_VARIABLE_RevInstrs_1_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_RevInstrs_1_34, 0) = ((MR_Box) (Instr0_16));
            MR_hl_field(1, STATE_VARIABLE_RevInstrs_1_34, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_2));
          }
          STATE_VARIABLE_Fallthrough_1_35 = (MR_Integer) 1;
          STATE_VARIABLE_Mod_1_38 = STATE_VARIABLE_Mod_0_4;
        }
        else
        {
          STATE_VARIABLE_Mod_1_38 = (MR_Integer) 1;
          STATE_VARIABLE_RevInstrs_1_34 = STATE_VARIABLE_RevInstrs_0_2;
          STATE_VARIABLE_Fallthrough_1_35 = HeadVar__6_6;
        }
      }
      else
      {
        MR_Word Canfallthrough_28;

        switch (HeadVar__6_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              STATE_VARIABLE_Mod_1_38 = (MR_Integer) 1;
              STATE_VARIABLE_RevInstrs_1_34 = STATE_VARIABLE_RevInstrs_0_2;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                STATE_VARIABLE_RevInstrs_1_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_RevInstrs_1_34, 0) = ((MR_Box) (Instr0_16));
                MR_hl_field(1, STATE_VARIABLE_RevInstrs_1_34, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_2));
              }
              STATE_VARIABLE_Mod_1_38 = STATE_VARIABLE_Mod_0_4;
            }
            break;
        }
        Canfallthrough_28 = ll_backend__opt_util__can_instr_fall_through_1_f_0(Uinstr0_22);
        switch (Canfallthrough_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Fallthrough_1_35 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Fallthrough_1_35 = HeadVar__6_6;
            break;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Instrs0_17;
      next_value_of_STATE_VARIABLE_RevInstrs_0_2 = STATE_VARIABLE_RevInstrs_1_34;
      next_value_of_STATE_VARIABLE_Mod_0_4 = STATE_VARIABLE_Mod_1_38;
      next_value_of_HeadVar__6_6 = STATE_VARIABLE_Fallthrough_1_35;
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
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Useset_3 = STATE_VARIABLE_Useset_0_2;
    else
    {
      MR_Word Instr_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Instructions_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Uinstr_10 = ((MR_Word) ((MR_hl_field(0, Instr_7, 0))));
      MR_Word Labels_12;
      MR_Word STATE_VARIABLE_Useset_1_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Useset_0_2;

      ll_backend__opt_util__instr_labels_only_2_p_0(Uinstr_10, &Labels_12);
      mercury__set_tree234__insert_list_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), Labels_12, STATE_VARIABLE_Useset_0_2, &STATE_VARIABLE_Useset_1_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Instructions_8;
      next_value_of_STATE_VARIABLE_Useset_0_2 = STATE_VARIABLE_Useset_1_15;
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

// :- end_module ll_backend.labelopt.
