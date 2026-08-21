/*
** Automatically generated from `inst_lookup.m'
** by the Mercury compiler,
** version rotd-2026-08-21
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


// :- module hlds.inst_lookup.
// :- implementation.

/*
INIT mercury__hlds__inst_lookup__init
ENDINIT
*/

#include "hlds.inst_lookup.mih"


#include "analysis.mih"
#include "assoc_list.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "integer.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.inst_mode_type_prop.mih"
#include "hlds.pred_proc_id.mih"
#include "hlds.pred_table.mih"
#include "hlds.proc_info_types.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_to_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "recompilation.record_uses.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static MR_Word MR_CALL 
hlds__inst_lookup__make_missing_inst_name_2_f_0(
  MR_String Desc_4,
  MR_Word ArgInsts_5);

static MR_Word MR_CALL 
hlds__inst_lookup__make_unknown_inst_name_2_f_0(
  MR_String Desc_4,
  MR_Word ArgInsts_5);


static /* final */ const MR_Box hlds__inst_lookup_scalar_common_1[1][1];




static /* final */ const MR_Box hlds__inst_lookup_scalar_common_1[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};





void MR_CALL 
hlds__inst_lookup__inst_expand_and_remove_constrained_inst_vars_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Inst0_5,
  MR_Word * Inst_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *Inst_6 = Inst0_5;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst0_5, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_7 = ((MR_Word) ((MR_hl_field(3, Inst0_5, 1))));
              MR_Word Inst1_8;
              MR_Word next_value_of_Inst0_5;

              hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_4, InstName_7, &Inst1_8);
              // direct tailcall eliminated
              ;
              next_value_of_Inst0_5 = Inst1_8;
              Inst0_5 = next_value_of_Inst0_5;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Inst1_18 = ((MR_Word) ((MR_hl_field(3, Inst0_5, 2))));
              MR_Word next_value_of_Inst0_5 = Inst1_18;

              // direct tailcall eliminated
              ;
              Inst0_5 = next_value_of_Inst0_5;
              continue;
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *Inst_6 = Inst0_5;
            break;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
hlds__inst_lookup__inst_expand_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Inst0_5,
  MR_Word * Inst_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *Inst_6 = Inst0_5;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst0_5, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_7 = ((MR_Word) ((MR_hl_field(3, Inst0_5, 1))));
              MR_Word Inst1_8;
              MR_Word next_value_of_Inst0_5;

              hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_4, InstName_7, &Inst1_8);
              // direct tailcall eliminated
              ;
              next_value_of_Inst0_5 = Inst1_8;
              Inst0_5 = next_value_of_Inst0_5;
              continue;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *Inst_6 = Inst0_5;
            break;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
hlds__inst_lookup__inst_lookup_debug_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word InstName_5,
  MR_Word * Inst_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) InstName_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SymName_32 = ((MR_Word) ((MR_hl_field(0, InstName_5, 0))));
        MR_Word ArgInsts_33 = ((MR_Word) ((MR_hl_field(0, InstName_5, 1))));
        MR_Word UserInstTable_34;
        MR_Integer Arity_35;
        MR_Word InstCtor_36;
        MR_Word InstTable_154;
        MR_Word InstDefn_37;
        MR_Box conv0_InstDefn_37;

        hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_4, &InstTable_154);
        hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable_154, &UserInstTable_34);
        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts_33, &Arity_35);
        {
          InstCtor_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, InstCtor_36, 0) = ((MR_Box) (SymName_32));
          MR_hl_field(0, InstCtor_36, 1) = ((MR_Box) (Arity_35));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable_34, ((MR_Box) (InstCtor_36)), &conv0_InstDefn_37);
        if (succeeded)
        {
          InstDefn_37 = ((MR_Word) (conv0_InstDefn_37));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word InstParams_39 = ((MR_Word) ((MR_hl_field(0, InstDefn_37, 1))));
          MR_Word InstBody_40 = ((MR_Word) ((MR_hl_field(0, InstDefn_37, 2))));
          MR_Word Inst0_44 = (MR_Word) (InstBody_40);

          parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(InstParams_39, ArgInsts_33, Inst0_44, Inst_6);
        }
        else
        {
          succeeded = hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(InstName_5);
          if (succeeded)
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Inst_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 1) = ((MR_Box) (InstName_5));
            }
          else
          {
            MR_String NameStr_45;
            MR_String Msg_46;
            MR_String Var_163;
            MR_String Var_170;
            MR_String Var_172;
            MR_String Var_173;

            NameStr_45 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_32);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__inst_lookup_scalar_common_1[0]), Arity_35, &Var_163);
            Var_170 = mercury__string__f_43_43_2_f_0(Var_163, (MR_String) ">");
            Var_172 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_170);
            Var_173 = mercury__string__f_43_43_2_f_0(NameStr_45, Var_172);
            Msg_46 = mercury__string__f_43_43_2_f_0((MR_String) "reference to undefined inst <", Var_173);
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.inst_lookup.inst_lookup_debug\'/3", Msg_46);
              return;
            }
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Live_7 = ((((MR_Unsigned) ((MR_hl_field(1, InstName_5, 0))) >> 1)) & (MR_Integer) 1);
        MR_Word Real_8 = ((MR_Unsigned) ((MR_hl_field(1, InstName_5, 0))) & (MR_Integer) 1);
        MR_Word InstA_9 = ((MR_Word) ((MR_hl_field(1, InstName_5, 1))));
        MR_Word InstB_10 = ((MR_Word) ((MR_hl_field(1, InstName_5, 2))));
        MR_Word UnifyInstInfo_11;
        MR_Word InstTable_12;
        MR_Word UnifyInstTable_13;
        MR_String Desc_14;
        MR_String Var_52;
        MR_String Var_55;
        MR_String Var_176;
        MR_String Var_177;
        MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(1, InstName_5, 0)));
        MR_Word MaybeInstDet_15;

        {
          UnifyInstInfo_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, UnifyInstInfo_11, 0) = (MR_Box) (packed_word_3);
          MR_hl_field(0, UnifyInstInfo_11, 1) = ((MR_Box) (InstA_9));
          MR_hl_field(0, UnifyInstInfo_11, 2) = ((MR_Box) (InstB_10));
        }
        hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_4, &InstTable_12);
        hlds__hlds_inst_mode__inst_table_get_unify_insts_2_p_0(InstTable_12, &UnifyInstTable_13);
        Var_52 = parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(Live_7);
        Var_55 = parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(Real_8);
        Var_176 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_55);
        Var_177 = mercury__string__f_43_43_2_f_0(Var_52, Var_176);
        Desc_14 = mercury__string__f_43_43_2_f_0((MR_String) "unify_", Var_177);
        succeeded = hlds__hlds_inst_mode__search_unify_inst_3_p_0(UnifyInstTable_13, UnifyInstInfo_11, &MaybeInstDet_15);
        if (succeeded)
          if ((MaybeInstDet_15 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_57;
            MR_Word Var_58;

            {
              Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_58, 0) = ((MR_Box) (InstB_10));
              MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_57, 0) = ((MR_Box) (InstA_9));
              MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_58));
            }
            *Inst_6 = hlds__inst_lookup__make_unknown_inst_name_2_f_0(Desc_14, Var_57);
          }
          else
            *Inst_6 = ((MR_Word) ((MR_hl_field(1, MaybeInstDet_15, 0))));
        else
        {
          MR_Word Var_60;
          MR_Word Var_61;

          {
            Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_61, 0) = ((MR_Box) (InstB_10));
            MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_60, 0) = ((MR_Box) (InstA_9));
            MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_61));
          }
          *Inst_6 = hlds__inst_lookup__make_missing_inst_name_2_f_0(Desc_14, Var_60);
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word MergeInstInfo_17;
        MR_Word MergeInstTable_18;
        MR_Word InstA_131 = ((MR_Word) ((MR_hl_field(2, InstName_5, 0))));
        MR_Word InstB_132 = ((MR_Word) ((MR_hl_field(2, InstName_5, 1))));
        MR_Word InstTable_133;
        MR_Word MaybeInst_19;

        {
          MergeInstInfo_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MergeInstInfo_17, 0) = ((MR_Box) (InstA_131));
          MR_hl_field(0, MergeInstInfo_17, 1) = ((MR_Box) (InstB_132));
        }
        hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_4, &InstTable_133);
        hlds__hlds_inst_mode__inst_table_get_merge_insts_2_p_0(InstTable_133, &MergeInstTable_18);
        succeeded = hlds__hlds_inst_mode__search_merge_inst_3_p_0(MergeInstTable_18, MergeInstInfo_17, &MaybeInst_19);
        if (succeeded)
          if ((MaybeInst_19 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_64;
            MR_Word Var_65;

            {
              Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_65, 0) = ((MR_Box) (InstB_132));
              MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_64, 0) = ((MR_Box) (InstA_131));
              MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_65));
            }
            *Inst_6 = hlds__inst_lookup__make_unknown_inst_name_2_f_0((MR_String) "merge", Var_64);
          }
          else
            *Inst_6 = ((MR_Word) ((MR_hl_field(1, MaybeInst_19, 0))));
        else
        {
          MR_Word Var_68;
          MR_Word Var_69;

          {
            Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_69, 0) = ((MR_Box) (InstB_132));
            MR_hl_field(1, Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_68, 0) = ((MR_Box) (InstA_131));
            MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_69));
          }
          *Inst_6 = hlds__inst_lookup__make_missing_inst_name_2_f_0((MR_String) "merge", Var_68);
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, InstName_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubInstName_20 = ((MR_Word) ((MR_hl_field(3, InstName_5, 1))));
            MR_Word Uniq_21 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_5, 2))) >> 2)) & (MR_Integer) 7);
            MR_Word GroundInstInfo_22;
            MR_Word GroundInstTable_23;
            MR_String Var_74;
            MR_String Var_78;
            MR_String Var_81;
            MR_Word Live_135 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_5, 2))) >> 1)) & (MR_Integer) 1);
            MR_Word Real_136 = ((MR_Unsigned) ((MR_hl_field(3, InstName_5, 2))) & (MR_Integer) 1);
            MR_Word InstTable_137;
            MR_String Desc_138;
            MR_String Var_180;
            MR_String Var_181;
            MR_String Var_183;
            MR_String Var_184;
            MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(3, InstName_5, 2)));
            MR_Word MaybeInstDet_134;

            {
              GroundInstInfo_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, GroundInstInfo_22, 0) = ((MR_Box) (SubInstName_20));
              MR_hl_field(0, GroundInstInfo_22, 1) = (MR_Box) (packed_word_1);
            }
            hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_4, &InstTable_137);
            hlds__hlds_inst_mode__inst_table_get_ground_insts_2_p_0(InstTable_137, &GroundInstTable_23);
            Var_74 = parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(Uniq_21, (MR_String) "shared");
            Var_78 = parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(Live_135);
            Var_81 = parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(Real_136);
            Var_180 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_81);
            Var_181 = mercury__string__f_43_43_2_f_0(Var_78, Var_180);
            Var_183 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_181);
            Var_184 = mercury__string__f_43_43_2_f_0(Var_74, Var_183);
            Desc_138 = mercury__string__f_43_43_2_f_0((MR_String) "ground_", Var_184);
            succeeded = hlds__hlds_inst_mode__search_ground_inst_3_p_0(GroundInstTable_23, GroundInstInfo_22, &MaybeInstDet_134);
            if (succeeded)
              if ((MaybeInstDet_134 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_83;
                MR_Word Var_84;

                {
                  Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, Var_84, 1) = ((MR_Box) (SubInstName_20));
                }
                {
                  Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
                  MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                *Inst_6 = hlds__inst_lookup__make_unknown_inst_name_2_f_0(Desc_138, Var_83);
              }
              else
                *Inst_6 = ((MR_Word) ((MR_hl_field(1, MaybeInstDet_134, 0))));
            else
            {
              MR_Word Var_86;
              MR_Word Var_87;

              {
                Var_87 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_87, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_87, 1) = ((MR_Box) (SubInstName_20));
              }
              {
                Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_86, 0) = ((MR_Box) (Var_87));
                MR_hl_field(1, Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              *Inst_6 = hlds__inst_lookup__make_missing_inst_name_2_f_0(Desc_138, Var_86);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word AnyInstInfo_25;
            MR_Word AnyInstTable_26;
            MR_String Var_92;
            MR_String Var_96;
            MR_String Var_99;
            MR_Word Live_141 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_5, 2))) >> 1)) & (MR_Integer) 1);
            MR_Word Real_142 = ((MR_Unsigned) ((MR_hl_field(3, InstName_5, 2))) & (MR_Integer) 1);
            MR_Word InstTable_143;
            MR_String Desc_144;
            MR_Word SubInstName_146 = ((MR_Word) ((MR_hl_field(3, InstName_5, 1))));
            MR_Word Uniq_147 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_5, 2))) >> 2)) & (MR_Integer) 7);
            MR_String Var_187;
            MR_String Var_188;
            MR_String Var_190;
            MR_String Var_191;
            MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(3, InstName_5, 2)));
            MR_Word MaybeInstDet_140;

            {
              AnyInstInfo_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, AnyInstInfo_25, 0) = ((MR_Box) (SubInstName_146));
              MR_hl_field(0, AnyInstInfo_25, 1) = (MR_Box) (packed_word_0);
            }
            hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_4, &InstTable_143);
            hlds__hlds_inst_mode__inst_table_get_any_insts_2_p_0(InstTable_143, &AnyInstTable_26);
            Var_92 = parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(Uniq_147, (MR_String) "shared");
            Var_96 = parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(Live_141);
            Var_99 = parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(Real_142);
            Var_187 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_99);
            Var_188 = mercury__string__f_43_43_2_f_0(Var_96, Var_187);
            Var_190 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_188);
            Var_191 = mercury__string__f_43_43_2_f_0(Var_92, Var_190);
            Desc_144 = mercury__string__f_43_43_2_f_0((MR_String) "any_", Var_191);
            succeeded = hlds__hlds_inst_mode__search_any_inst_3_p_0(AnyInstTable_26, AnyInstInfo_25, &MaybeInstDet_140);
            if (succeeded)
              if ((MaybeInstDet_140 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_101;
                MR_Word Var_102;

                {
                  Var_102 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_102, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, Var_102, 1) = ((MR_Box) (SubInstName_146));
                }
                {
                  Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_101, 0) = ((MR_Box) (Var_102));
                  MR_hl_field(1, Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                *Inst_6 = hlds__inst_lookup__make_unknown_inst_name_2_f_0(Desc_144, Var_101);
              }
              else
                *Inst_6 = ((MR_Word) ((MR_hl_field(1, MaybeInstDet_140, 0))));
            else
            {
              MR_Word Var_104;
              MR_Word Var_105;

              {
                Var_105 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_105, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_105, 1) = ((MR_Box) (SubInstName_146));
              }
              {
                Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_104, 0) = ((MR_Box) (Var_105));
                MR_hl_field(1, Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              *Inst_6 = hlds__inst_lookup__make_missing_inst_name_2_f_0(Desc_144, Var_104);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SharedInstName_28 = ((MR_Word) ((MR_hl_field(3, InstName_5, 1))));
            MR_Word SharedInstTable_29;
            MR_Word InstTable_149;
            MR_Word MaybeInst_148;

            hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_4, &InstTable_149);
            hlds__hlds_inst_mode__inst_table_get_shared_insts_2_p_0(InstTable_149, &SharedInstTable_29);
            succeeded = hlds__hlds_inst_mode__search_shared_inst_3_p_0(SharedInstTable_29, SharedInstName_28, &MaybeInst_148);
            if (succeeded)
              if ((MaybeInst_148 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_108;
                MR_Word Var_109;

                {
                  Var_109 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_109, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, Var_109, 1) = ((MR_Box) (SharedInstName_28));
                }
                {
                  Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_108, 0) = ((MR_Box) (Var_109));
                  MR_hl_field(1, Var_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                *Inst_6 = hlds__inst_lookup__make_unknown_inst_name_2_f_0((MR_String) "shared", Var_108);
              }
              else
                *Inst_6 = ((MR_Word) ((MR_hl_field(1, MaybeInst_148, 0))));
            else
            {
              MR_Word Var_112;
              MR_Word Var_113;

              {
                Var_113 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_113, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_113, 1) = ((MR_Box) (SharedInstName_28));
              }
              {
                Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_112, 0) = ((MR_Box) (Var_113));
                MR_hl_field(1, Var_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              *Inst_6 = hlds__inst_lookup__make_missing_inst_name_2_f_0((MR_String) "shared", Var_112);
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word NondetLiveInstName_30 = ((MR_Word) ((MR_hl_field(3, InstName_5, 1))));
            MR_Word MostlyUniqInstTable_31;
            MR_Word InstTable_152;
            MR_Word MaybeInst_151;

            hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_4, &InstTable_152);
            hlds__hlds_inst_mode__inst_table_get_mostly_uniq_insts_2_p_0(InstTable_152, &MostlyUniqInstTable_31);
            succeeded = hlds__hlds_inst_mode__search_mostly_uniq_inst_3_p_0(MostlyUniqInstTable_31, NondetLiveInstName_30, &MaybeInst_151);
            if (succeeded)
              if ((MaybeInst_151 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_116;
                MR_Word Var_117;

                {
                  Var_117 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_117, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, Var_117, 1) = ((MR_Box) (NondetLiveInstName_30));
                }
                {
                  Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_116, 0) = ((MR_Box) (Var_117));
                  MR_hl_field(1, Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                *Inst_6 = hlds__inst_lookup__make_unknown_inst_name_2_f_0((MR_String) "mostly_uniq", Var_116);
              }
              else
                *Inst_6 = ((MR_Word) ((MR_hl_field(1, MaybeInst_151, 0))));
            else
            {
              MR_Word Var_120;
              MR_Word Var_121;

              {
                Var_121 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_121, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_121, 1) = ((MR_Box) (NondetLiveInstName_30));
              }
              {
                Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_120, 0) = ((MR_Box) (Var_121));
                MR_hl_field(1, Var_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              *Inst_6 = hlds__inst_lookup__make_missing_inst_name_2_f_0((MR_String) "mostly_uniq", Var_120);
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Type_47 = ((MR_Word) ((MR_hl_field(3, InstName_5, 2))));
            MR_Word Uniq_155 = ((MR_Unsigned) ((MR_hl_field(3, InstName_5, 1))) & (MR_Integer) 7);
            MR_Word Inst0_156;

            {
              Inst0_156 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Inst0_156, 0) = (MR_Box) ((MR_Unsigned) (Uniq_155));
              MR_hl_field(1, Inst0_156, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            hlds__inst_mode_type_prop__propagate_unchecked_type_into_inst_4_p_0(ModuleInfo_4, Type_47, Inst0_156, Inst_6);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word TypedInstName_48 = ((MR_Word) ((MR_hl_field(3, InstName_5, 2))));
            MR_Word Inst0_157;
            MR_Word Type_158 = ((MR_Word) ((MR_hl_field(3, InstName_5, 1))));

            hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_4, TypedInstName_48, &Inst0_157);
            hlds__inst_mode_type_prop__propagate_unchecked_type_into_inst_4_p_0(ModuleInfo_4, Type_158, Inst0_157, Inst_6);
          }
          break;
      }
      break;
  }
}

static MR_Word MR_CALL 
hlds__inst_lookup__make_missing_inst_name_2_f_0(
  MR_String Desc_4,
  MR_Word ArgInsts_5)
{
  MR_Word MissingInst_6;
  MR_String MissingInstNameStr_7;
  MR_Word MissingInstName_8;
  MR_Word Var_10;

  MissingInstNameStr_7 = mercury__string__f_43_43_2_f_0((MR_String) "MISSING_INST_", Desc_4);
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (MissingInstNameStr_7));
  }
  {
    MissingInstName_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MissingInstName_8, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, MissingInstName_8, 1) = ((MR_Box) (ArgInsts_5));
  }
  {
    MissingInst_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MissingInst_6, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MissingInst_6, 1) = ((MR_Box) (MissingInstName_8));
  }
  return MissingInst_6;
}

static MR_Word MR_CALL 
hlds__inst_lookup__make_unknown_inst_name_2_f_0(
  MR_String Desc_4,
  MR_Word ArgInsts_5)
{
  MR_Word UnknownInst_6;
  MR_String UnknownInstNameStr_7;
  MR_Word UnknownInstName_8;
  MR_Word Var_10;

  UnknownInstNameStr_7 = mercury__string__f_43_43_2_f_0((MR_String) "UNKNOWN_INST_", Desc_4);
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (UnknownInstNameStr_7));
  }
  {
    UnknownInstName_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UnknownInstName_8, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, UnknownInstName_8, 1) = ((MR_Box) (ArgInsts_5));
  }
  {
    UnknownInst_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, UnknownInst_6, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, UnknownInst_6, 1) = ((MR_Box) (UnknownInstName_8));
  }
  return UnknownInst_6;
}

MR_bool MR_CALL 
hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word SymName_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_String Name_4;

  succeeded = ((MR_tag((MR_Word) SymName_2)) == (MR_Integer) 0);
  if (succeeded)
  {
    Name_4 = ((MR_String) ((MR_hl_field(0, SymName_2, 0))));
    succeeded = mercury__string__prefix_2_p_0(Name_4, (MR_String) "UNKNOWN_INST_");
    if (!(succeeded))
      succeeded = mercury__string__prefix_2_p_0(Name_4, (MR_String) "MISSING_INST_");
  }
  return succeeded;
}

void MR_CALL 
hlds__inst_lookup__inst_lookup_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word InstName_5,
  MR_Word * Inst_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) InstName_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SymName_31 = ((MR_Word) ((MR_hl_field(0, InstName_5, 0))));
        MR_Word ArgInsts_32 = ((MR_Word) ((MR_hl_field(0, InstName_5, 1))));
        MR_Word UserInstTable_33;
        MR_Integer Arity_34;
        MR_Word InstCtor_35;
        MR_Word InstTable_73;
        MR_Word InstDefn_36;
        MR_Box conv0_InstDefn_36;

        hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_4, &InstTable_73);
        hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable_73, &UserInstTable_33);
        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts_32, &Arity_34);
        {
          InstCtor_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, InstCtor_35, 0) = ((MR_Box) (SymName_31));
          MR_hl_field(0, InstCtor_35, 1) = ((MR_Box) (Arity_34));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable_33, ((MR_Box) (InstCtor_35)), &conv0_InstDefn_36);
        if (succeeded)
        {
          InstDefn_36 = ((MR_Word) (conv0_InstDefn_36));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word InstParams_38 = ((MR_Word) ((MR_hl_field(0, InstDefn_36, 1))));
          MR_Word InstBody_39 = ((MR_Word) ((MR_hl_field(0, InstDefn_36, 2))));
          MR_Word Inst0_43 = (MR_Word) (InstBody_39);

          parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(InstParams_38, ArgInsts_32, Inst0_43, Inst_6);
        }
        else
        {
          MR_String NameStr_44;
          MR_String Msg_45;
          MR_String Var_82;
          MR_String Var_89;
          MR_String Var_91;
          MR_String Var_92;

          NameStr_44 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_31);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__inst_lookup_scalar_common_1[0]), Arity_34, &Var_82);
          Var_89 = mercury__string__f_43_43_2_f_0(Var_82, (MR_String) ">");
          Var_91 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_89);
          Var_92 = mercury__string__f_43_43_2_f_0(NameStr_44, Var_91);
          Msg_45 = mercury__string__f_43_43_2_f_0((MR_String) "reference to undefined inst <", Var_92);
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.inst_lookup.inst_lookup\'/3", Msg_45);
            return;
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word InstA_9 = ((MR_Word) ((MR_hl_field(1, InstName_5, 1))));
        MR_Word InstB_10 = ((MR_Word) ((MR_hl_field(1, InstName_5, 2))));
        MR_Word UnifyInstInfo_11;
        MR_Word InstTable_12;
        MR_Word UnifyInstTable_13;
        MR_Word MaybeInstDet_14;
        MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(1, InstName_5, 0)));

        {
          UnifyInstInfo_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, UnifyInstInfo_11, 0) = (MR_Box) (packed_word_3);
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
            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, base, 1) = ((MR_Box) (InstName_5));
          }
        else
          *Inst_6 = ((MR_Word) ((MR_hl_field(1, MaybeInstDet_14, 0))));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word MergeInstInfo_16;
        MR_Word MergeInstTable_17;
        MR_Word MaybeInst_18;
        MR_Word InstA_56 = ((MR_Word) ((MR_hl_field(2, InstName_5, 0))));
        MR_Word InstB_57 = ((MR_Word) ((MR_hl_field(2, InstName_5, 1))));
        MR_Word InstTable_58;

        {
          MergeInstInfo_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MergeInstInfo_16, 0) = ((MR_Box) (InstA_56));
          MR_hl_field(0, MergeInstInfo_16, 1) = ((MR_Box) (InstB_57));
        }
        hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_4, &InstTable_58);
        hlds__hlds_inst_mode__inst_table_get_merge_insts_2_p_0(InstTable_58, &MergeInstTable_17);
        hlds__hlds_inst_mode__lookup_merge_inst_3_p_0(MergeInstTable_17, MergeInstInfo_16, &MaybeInst_18);
        if ((MaybeInst_18 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Inst_6 = base;
            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, base, 1) = ((MR_Box) (InstName_5));
          }
        else
          *Inst_6 = ((MR_Word) ((MR_hl_field(1, MaybeInst_18, 0))));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, InstName_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubInstName_19 = ((MR_Word) ((MR_hl_field(3, InstName_5, 1))));
            MR_Word GroundInstInfo_21;
            MR_Word GroundInstTable_22;
            MR_Word InstTable_61;
            MR_Word MaybeInstDet_62;
            MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(3, InstName_5, 2)));

            {
              GroundInstInfo_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, GroundInstInfo_21, 0) = ((MR_Box) (SubInstName_19));
              MR_hl_field(0, GroundInstInfo_21, 1) = (MR_Box) (packed_word_1);
            }
            hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_4, &InstTable_61);
            hlds__hlds_inst_mode__inst_table_get_ground_insts_2_p_0(InstTable_61, &GroundInstTable_22);
            hlds__hlds_inst_mode__lookup_ground_inst_3_p_0(GroundInstTable_22, GroundInstInfo_21, &MaybeInstDet_62);
            if ((MaybeInstDet_62 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Inst_6 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, base, 1) = ((MR_Box) (InstName_5));
              }
            else
              *Inst_6 = ((MR_Word) ((MR_hl_field(1, MaybeInstDet_62, 0))));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word AnyInstInfo_24;
            MR_Word AnyInstTable_25;
            MR_Word InstTable_65;
            MR_Word MaybeInstDet_66;
            MR_Word SubInstName_67 = ((MR_Word) ((MR_hl_field(3, InstName_5, 1))));
            MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(3, InstName_5, 2)));

            {
              AnyInstInfo_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, AnyInstInfo_24, 0) = ((MR_Box) (SubInstName_67));
              MR_hl_field(0, AnyInstInfo_24, 1) = (MR_Box) (packed_word_0);
            }
            hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_4, &InstTable_65);
            hlds__hlds_inst_mode__inst_table_get_any_insts_2_p_0(InstTable_65, &AnyInstTable_25);
            hlds__hlds_inst_mode__lookup_any_inst_3_p_0(AnyInstTable_25, AnyInstInfo_24, &MaybeInstDet_66);
            if ((MaybeInstDet_66 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Inst_6 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, base, 1) = ((MR_Box) (InstName_5));
              }
            else
              *Inst_6 = ((MR_Word) ((MR_hl_field(1, MaybeInstDet_66, 0))));
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SharedInstName_27 = ((MR_Word) ((MR_hl_field(3, InstName_5, 1))));
            MR_Word SharedInstTable_28;
            MR_Word InstTable_69;
            MR_Word MaybeInst_70;

            hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_4, &InstTable_69);
            hlds__hlds_inst_mode__inst_table_get_shared_insts_2_p_0(InstTable_69, &SharedInstTable_28);
            hlds__hlds_inst_mode__lookup_shared_inst_3_p_0(SharedInstTable_28, SharedInstName_27, &MaybeInst_70);
            if ((MaybeInst_70 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Inst_6 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, base, 1) = ((MR_Box) (InstName_5));
              }
            else
              *Inst_6 = ((MR_Word) ((MR_hl_field(1, MaybeInst_70, 0))));
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word NondetLiveInstName_29 = ((MR_Word) ((MR_hl_field(3, InstName_5, 1))));
            MR_Word MostlyUniqInstTable_30;
            MR_Word InstTable_71;
            MR_Word MaybeInst_72;

            hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_4, &InstTable_71);
            hlds__hlds_inst_mode__inst_table_get_mostly_uniq_insts_2_p_0(InstTable_71, &MostlyUniqInstTable_30);
            hlds__hlds_inst_mode__lookup_mostly_uniq_inst_3_p_0(MostlyUniqInstTable_30, NondetLiveInstName_29, &MaybeInst_72);
            if ((MaybeInst_72 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Inst_6 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, base, 1) = ((MR_Box) (InstName_5));
              }
            else
              *Inst_6 = ((MR_Word) ((MR_hl_field(1, MaybeInst_72, 0))));
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Type_46 = ((MR_Word) ((MR_hl_field(3, InstName_5, 2))));
            MR_Word Uniq_74 = ((MR_Unsigned) ((MR_hl_field(3, InstName_5, 1))) & (MR_Integer) 7);
            MR_Word Inst0_75;

            {
              Inst0_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Inst0_75, 0) = (MR_Box) ((MR_Unsigned) (Uniq_74));
              MR_hl_field(1, Inst0_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            hlds__inst_mode_type_prop__propagate_unchecked_type_into_inst_4_p_0(ModuleInfo_4, Type_46, Inst0_75, Inst_6);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word TypedInstName_47 = ((MR_Word) ((MR_hl_field(3, InstName_5, 2))));
            MR_Word Inst0_76;
            MR_Word Type_77 = ((MR_Word) ((MR_hl_field(3, InstName_5, 1))));

            hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_4, TypedInstName_47, &Inst0_76);
            hlds__inst_mode_type_prop__propagate_unchecked_type_into_inst_4_p_0(ModuleInfo_4, Type_77, Inst0_76, Inst_6);
          }
          break;
      }
      break;
  }
}

void mercury__hlds__inst_lookup__init(void)
{
}

void mercury__hlds__inst_lookup__init_type_tables(void)
{
}

void mercury__hlds__inst_lookup__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__inst_lookup__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.inst_lookup.
