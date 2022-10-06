/*
** Automatically generated from `inst_lookup.m'
** by the Mercury compiler,
** version rotd-2022-10-06
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


// :- module check_hlds.inst_lookup.
// :- implementation.

/*
INIT mercury__check_hlds__inst_lookup__init
ENDINIT
*/

#include "check_hlds.inst_lookup.mih"


#include "analysis.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
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
#include "check_hlds.inst_mode_type_prop.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.set_of_var.mih"













void MR_CALL 
check_hlds__inst_lookup__inst_expand_and_remove_constrained_inst_vars_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_Inst_0_8,
  MR_Word * STATE_VARIABLE_Inst_9)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) STATE_VARIABLE_Inst_0_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, STATE_VARIABLE_Inst_0_8, (MR_Integer) 0)))) == (MR_Integer) 4)));
  MR_Word InstName_6;

  if (succeeded)
  {
    InstName_6 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_Inst_0_8, (MR_Integer) 1))));
    {
      MR_Word STATE_VARIABLE_Inst_10_10;

      check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_4, InstName_6, &STATE_VARIABLE_Inst_10_10);
      check_hlds__inst_lookup__inst_expand_3_p_0(ModuleInfo_4, STATE_VARIABLE_Inst_10_10, STATE_VARIABLE_Inst_9);
    }
  }
  else
  {
    MR_Word STATE_VARIABLE_Inst_12_12;

    succeeded = ((((MR_tag((MR_Word) STATE_VARIABLE_Inst_0_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, STATE_VARIABLE_Inst_0_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (succeeded)
    {
      STATE_VARIABLE_Inst_12_12 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_Inst_0_8, (MR_Integer) 2))));
      check_hlds__inst_lookup__inst_expand_3_p_0(ModuleInfo_4, STATE_VARIABLE_Inst_12_12, STATE_VARIABLE_Inst_9);
    }
    else
      *STATE_VARIABLE_Inst_9 = STATE_VARIABLE_Inst_0_8;
  }
}

void MR_CALL 
check_hlds__inst_lookup__inst_expand_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_Inst_0_7,
  MR_Word * STATE_VARIABLE_Inst_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) STATE_VARIABLE_Inst_0_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, STATE_VARIABLE_Inst_0_7, (MR_Integer) 0)))) == (MR_Integer) 4)));
    MR_Word InstName_6;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      InstName_6 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_Inst_0_7, (MR_Integer) 1))));
      {
        MR_Word STATE_VARIABLE_Inst_9_9;
        MR_Word next_value_of_STATE_VARIABLE_Inst_0_7;

        check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_4, InstName_6, &STATE_VARIABLE_Inst_9_9);
        // direct tailcall eliminated
        ;
        next_value_of_STATE_VARIABLE_Inst_0_7 = STATE_VARIABLE_Inst_9_9;
        STATE_VARIABLE_Inst_0_7 = next_value_of_STATE_VARIABLE_Inst_0_7;
        continue;
      }
    }
    else
      *STATE_VARIABLE_Inst_8 = STATE_VARIABLE_Inst_0_7;
    break;
  }
}

void MR_CALL 
check_hlds__inst_lookup__inst_lookup_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word InstName_5,
  MR_Word * Inst_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) InstName_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Name_31 = ((MR_Word) ((MR_hl_field(0, InstName_5, (MR_Integer) 0))));
        MR_Word Args_32 = ((MR_Word) ((MR_hl_field(0, InstName_5, (MR_Integer) 1))));
        MR_Word UserInstTable_33;
        MR_Integer Arity_34;
        MR_Word InstTable_64;
        MR_Word InstDefn_35;
        MR_Word Var_45;
        MR_Box conv0_InstDefn_35;

        hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_4, &InstTable_64);
        hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable_64, &UserInstTable_33);
        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Args_32, &Arity_34);
        {
          Var_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_45, 0) = ((MR_Box) (Name_31));
          MR_hl_field(0, Var_45, 1) = ((MR_Box) (Arity_34));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable_33, ((MR_Box) (Var_45)), &conv0_InstDefn_35);
        if (succeeded)
        {
          InstDefn_35 = ((MR_Word) (conv0_InstDefn_35));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Params_37 = ((MR_Word) ((MR_hl_field(0, InstDefn_35, (MR_Integer) 1))));
          MR_Word InstBody_38 = ((MR_Word) ((MR_hl_field(0, InstDefn_35, (MR_Integer) 2))));
          MR_Word Inst0_42 = (MR_Word) (InstBody_38);

          parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(Params_37, Args_32, Inst0_42, Inst_6);
        }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *Inst_6 = base;
            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(3, base, 1) = ((MR_Box) (Name_31));
            MR_hl_field(3, base, 2) = ((MR_Box) (Args_32));
          }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word InstA_9 = ((MR_Word) ((MR_hl_field(1, InstName_5, (MR_Integer) 1))));
        MR_Word InstB_10 = ((MR_Word) ((MR_hl_field(1, InstName_5, (MR_Integer) 2))));
        MR_Word UnifyInstInfo_11;
        MR_Word InstTable_12;
        MR_Word UnifyInstTable_13;
        MR_Word MaybeInstDet_14;
        MR_Unsigned packed_word_5 = (MR_Unsigned) ((MR_hl_field(1, InstName_5, (MR_Integer) 0)));

        {
          UnifyInstInfo_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, UnifyInstInfo_11, 0) = (MR_Box) (packed_word_5);
          MR_hl_field(0, UnifyInstInfo_11, 1) = ((MR_Box) (InstA_9));
          MR_hl_field(0, UnifyInstInfo_11, 2) = ((MR_Box) (InstB_10));
        }
        hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_4, &InstTable_12);
        hlds__hlds_inst_mode__inst_table_get_unify_insts_2_p_0(InstTable_12, &UnifyInstTable_13);
        hlds__hlds_inst_mode__lookup_unify_inst_3_p_0(UnifyInstTable_13, UnifyInstInfo_11, &MaybeInstDet_14);
        if ((MaybeInstDet_14 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Inst_6 = base;
            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, base, 1) = ((MR_Box) (InstName_5));
          }
        else
          *Inst_6 = ((MR_Word) ((MR_hl_field(1, MaybeInstDet_14, (MR_Integer) 0))));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word MergeInstInfo_16;
        MR_Word MergeInstTable_17;
        MR_Word MaybeInst_18;
        MR_Word InstA_47 = ((MR_Word) ((MR_hl_field(2, InstName_5, (MR_Integer) 0))));
        MR_Word InstB_48 = ((MR_Word) ((MR_hl_field(2, InstName_5, (MR_Integer) 1))));
        MR_Word InstTable_49;

        {
          MergeInstInfo_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MergeInstInfo_16, 0) = ((MR_Box) (InstA_47));
          MR_hl_field(0, MergeInstInfo_16, 1) = ((MR_Box) (InstB_48));
        }
        hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_4, &InstTable_49);
        hlds__hlds_inst_mode__inst_table_get_merge_insts_2_p_0(InstTable_49, &MergeInstTable_17);
        hlds__hlds_inst_mode__lookup_merge_inst_3_p_0(MergeInstTable_17, MergeInstInfo_16, &MaybeInst_18);
        if ((MaybeInst_18 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Inst_6 = base;
            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, base, 1) = ((MR_Box) (InstName_5));
          }
        else
          *Inst_6 = ((MR_Word) ((MR_hl_field(1, MaybeInst_18, (MR_Integer) 0))));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, InstName_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubInstName_19 = ((MR_Word) ((MR_hl_field(3, InstName_5, (MR_Integer) 1))));
            MR_Word GroundInstInfo_21;
            MR_Word GroundInstTable_22;
            MR_Word InstTable_52;
            MR_Word MaybeInstDet_53;
            MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(3, InstName_5, (MR_Integer) 2)));

            {
              GroundInstInfo_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, GroundInstInfo_21, 0) = ((MR_Box) (SubInstName_19));
              MR_hl_field(0, GroundInstInfo_21, 1) = (MR_Box) (packed_word_2);
            }
            hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_4, &InstTable_52);
            hlds__hlds_inst_mode__inst_table_get_ground_insts_2_p_0(InstTable_52, &GroundInstTable_22);
            hlds__hlds_inst_mode__lookup_ground_inst_3_p_0(GroundInstTable_22, GroundInstInfo_21, &MaybeInstDet_53);
            if ((MaybeInstDet_53 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Inst_6 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, base, 1) = ((MR_Box) (InstName_5));
              }
            else
              *Inst_6 = ((MR_Word) ((MR_hl_field(1, MaybeInstDet_53, (MR_Integer) 0))));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word AnyInstInfo_24;
            MR_Word AnyInstTable_25;
            MR_Word InstTable_56;
            MR_Word MaybeInstDet_57;
            MR_Word SubInstName_58 = ((MR_Word) ((MR_hl_field(3, InstName_5, (MR_Integer) 1))));
            MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(3, InstName_5, (MR_Integer) 2)));

            {
              AnyInstInfo_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, AnyInstInfo_24, 0) = ((MR_Box) (SubInstName_58));
              MR_hl_field(0, AnyInstInfo_24, 1) = (MR_Box) (packed_word_0);
            }
            hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_4, &InstTable_56);
            hlds__hlds_inst_mode__inst_table_get_any_insts_2_p_0(InstTable_56, &AnyInstTable_25);
            hlds__hlds_inst_mode__lookup_any_inst_3_p_0(AnyInstTable_25, AnyInstInfo_24, &MaybeInstDet_57);
            if ((MaybeInstDet_57 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Inst_6 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, base, 1) = ((MR_Box) (InstName_5));
              }
            else
              *Inst_6 = ((MR_Word) ((MR_hl_field(1, MaybeInstDet_57, (MR_Integer) 0))));
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SharedInstName_27 = ((MR_Word) ((MR_hl_field(3, InstName_5, (MR_Integer) 1))));
            MR_Word SharedInstTable_28;
            MR_Word InstTable_60;
            MR_Word MaybeInst_61;

            hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_4, &InstTable_60);
            hlds__hlds_inst_mode__inst_table_get_shared_insts_2_p_0(InstTable_60, &SharedInstTable_28);
            hlds__hlds_inst_mode__lookup_shared_inst_3_p_0(SharedInstTable_28, SharedInstName_27, &MaybeInst_61);
            if ((MaybeInst_61 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Inst_6 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, base, 1) = ((MR_Box) (InstName_5));
              }
            else
              *Inst_6 = ((MR_Word) ((MR_hl_field(1, MaybeInst_61, (MR_Integer) 0))));
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word NondetLiveInstName_29 = ((MR_Word) ((MR_hl_field(3, InstName_5, (MR_Integer) 1))));
            MR_Word MostlyUniqInstTable_30;
            MR_Word InstTable_62;
            MR_Word MaybeInst_63;

            hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_4, &InstTable_62);
            hlds__hlds_inst_mode__inst_table_get_mostly_uniq_insts_2_p_0(InstTable_62, &MostlyUniqInstTable_30);
            hlds__hlds_inst_mode__lookup_mostly_uniq_inst_3_p_0(MostlyUniqInstTable_30, NondetLiveInstName_29, &MaybeInst_63);
            if ((MaybeInst_63 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Inst_6 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, base, 1) = ((MR_Box) (InstName_5));
              }
            else
              *Inst_6 = ((MR_Word) ((MR_hl_field(1, MaybeInst_63, (MR_Integer) 0))));
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Type_43 = ((MR_Word) ((MR_hl_field(3, InstName_5, (MR_Integer) 2))));
            MR_Word Uniq_65 = ((MR_Unsigned) ((MR_hl_field(3, InstName_5, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word Inst0_66;

            {
              Inst0_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Inst0_66, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Inst0_66, 1) = (MR_Box) ((MR_Unsigned) (Uniq_65));
              MR_hl_field(3, Inst0_66, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            check_hlds__inst_mode_type_prop__propagate_unchecked_type_into_inst_4_p_0(ModuleInfo_4, Type_43, Inst0_66, Inst_6);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word TypedInstName_44 = ((MR_Word) ((MR_hl_field(3, InstName_5, (MR_Integer) 2))));
            MR_Word Inst0_67;
            MR_Word Type_68 = ((MR_Word) ((MR_hl_field(3, InstName_5, (MR_Integer) 1))));

            check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_4, TypedInstName_44, &Inst0_67);
            check_hlds__inst_mode_type_prop__propagate_unchecked_type_into_inst_4_p_0(ModuleInfo_4, Type_68, Inst0_67, Inst_6);
          }
          break;
      }
      break;
  }
}

void mercury__check_hlds__inst_lookup__init(void)
{
}

void mercury__check_hlds__inst_lookup__init_type_tables(void)
{
}

void mercury__check_hlds__inst_lookup__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__inst_lookup__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.inst_lookup.
