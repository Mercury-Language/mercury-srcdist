/*
** Automatically generated from `delay_slot.m'
** by the Mercury compiler,
** version rotd-2025-06-03
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


// :- module ll_backend.delay_slot.
// :- implementation.

/*
INIT mercury__ll_backend__delay_slot__init
ENDINIT
*/

#include "ll_backend.delay_slot.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "string.mih"
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





static /* final */ const MR_Box ll_backend__delay_slot_scalar_common_1[1][1];

static /* final */ const MR_Box ll_backend__delay_slot_scalar_common_2[1][2];

static /* final */ const MR_Box ll_backend__delay_slot_scalar_common_3[1][3];




static /* final */ const MR_Box ll_backend__delay_slot_scalar_common_1[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
};

static /* final */ const MR_Box ll_backend__delay_slot_scalar_common_2[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__delay_slot_scalar_common_3[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__delay_slot_scalar_common_2[0]))),
    ((MR_Box) (&ll_backend__delay_slot_scalar_common_1[0]))
  },
};



#include "array.mh"


void MR_CALL 
ll_backend__delay_slot__fill_branch_delay_slot_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Instr0_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Instrs0_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Instr1_8;
    MR_Word Instr2_9;
    MR_Word Tail0_11;
    MR_String C2_19;
    MR_Word Instr3_10;
    MR_Integer Size_15;
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Instr0_3, 0))));
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Integer Var_42;

    succeeded = ((((MR_tag((MR_Word) Var_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_24, 0)))) == (MR_Integer) 5)));
    if (succeeded)
    {
      succeeded = (Instrs0_4 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Instr1_8 = ((MR_Word) ((MR_hl_field(1, Instrs0_4, 0))));
        Var_25 = ((MR_Word) ((MR_hl_field(1, Instrs0_4, 1))));
        succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Instr2_9 = ((MR_Word) ((MR_hl_field(1, Var_25, 0))));
          Var_26 = ((MR_Word) ((MR_hl_field(1, Var_25, 1))));
          succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Instr3_10 = ((MR_Word) ((MR_hl_field(1, Var_26, 0))));
            Tail0_11 = ((MR_Word) ((MR_hl_field(1, Var_26, 1))));
            Var_27 = ((MR_Word) ((MR_hl_field(0, Instr1_8, 0))));
            succeeded = ((((MR_tag((MR_Word) Var_27)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_27, 0)))) == (MR_Integer) 9)));
            if (succeeded)
            {
              Var_28 = ((MR_Word) ((MR_hl_field(0, Instr2_9, 0))));
              succeeded = ((((MR_tag((MR_Word) Var_28)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_28, 0)))) == (MR_Integer) 24)));
              if (succeeded)
              {
                Size_15 = ((MR_Integer) ((MR_hl_field(3, Var_28, 1))));
                Var_29 = ((MR_Word) ((MR_hl_field(0, Instr3_10, 0))));
                C2_19 = ((MR_String) ((MR_hl_field(0, Instr3_10, 1))));
                succeeded = ((((MR_tag((MR_Word) Var_29)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_29, 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_30 = ((MR_Word) ((MR_hl_field(3, Var_29, 1))));
                  Var_31 = ((MR_Word) ((MR_hl_field(3, Var_29, 2))));
                  succeeded = ((((MR_tag((MR_Word) Var_30)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_30, 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_42 = ((MR_Integer) ((MR_hl_field(3, Var_30, 1))));
                    succeeded = (Size_15 == Var_42);
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_32 = ((MR_Word) ((MR_hl_field(0, Var_31, 0))));
                        succeeded = (Var_32 == (MR_Word) ((MR_Unsigned) 0U));
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
        EarlySave_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, EarlySave_22, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__delay_slot_scalar_common_3[0])));
        MR_hl_field(0, EarlySave_22, 1) = ((MR_Box) (NewC2_21));
      }
      {
        Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_41, 0) = ((MR_Box) (Instr2_9));
        MR_hl_field(1, Var_41, 1) = ((MR_Box) (Tail1_20));
      }
      {
        Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_40, 0) = ((MR_Box) (Instr1_8));
        MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_41));
      }
      {
        Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_39, 0) = ((MR_Box) (EarlySave_22));
        MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_40));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_3));
        MR_hl_field(1, base, 1) = ((MR_Box) (Var_39));
      }
    }
    else
    {
      MR_Word Instrs1_23;

      ll_backend__delay_slot__fill_branch_delay_slot_2_p_0(Instrs0_4, &Instrs1_23);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_3));
        MR_hl_field(1, base, 1) = ((MR_Box) (Instrs1_23));
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
