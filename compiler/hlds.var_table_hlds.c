/*
** Automatically generated from `var_table_hlds.m'
** by the Mercury compiler,
** version rotd-2024-07-12
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


// :- module hlds.var_table_hlds.
// :- implementation.

/*
INIT mercury__hlds__var_table_hlds__init
ENDINIT
*/

#include "hlds.var_table_hlds.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "counter.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
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
#include "require.mih"
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
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
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "parse_tree.module_qual.mq_info.mih"




static MR_bool MR_CALL 
hlds__var_table_hlds__IntroducedFrom__pred__split_var_table__175__1_2_p_0(
  MR_Integer NextVarNum_17,
  MR_Integer HeadVar__2_25);

static void MR_CALL 
hlds__var_table_hlds__corresponding_vars_types_to_vars_entries_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_VarsEntries_0_5,
  MR_Word * STATE_VARIABLE_VarsEntries_6);

static void MR_CALL 
hlds__var_table_hlds__vars_types_to_vars_entries_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_VarsEntries_0_4,
  MR_Word * STATE_VARIABLE_VarsEntries_5);

static MR_bool MR_CALL 
hlds__var_table_hlds__split_var_table_3_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__var_table_hlds__split_var_table_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevVarTypes_0_2,
  MR_Word * STATE_VARIABLE_RevVarTypes_3,
  MR_Word STATE_VARIABLE_RevVarNames_0_4,
  MR_Word * STATE_VARIABLE_RevVarNames_5);

static void MR_CALL 
hlds__var_table_hlds__extend_var_table_loop_5_p_0(
  MR_Word VarSet_6,
  MR_Integer CurVarNum_7,
  MR_Integer MaxVarNum_8,
  MR_Word STATE_VARIABLE_RevVarTableAL_0_10,
  MR_Word * STATE_VARIABLE_RevVarTableAL_11);

static void MR_CALL 
hlds__var_table_hlds__make_var_table_loop_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarSet_2,
  MR_Integer CurVarNum_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevVarTableAL_0_5,
  MR_Word * STATE_VARIABLE_RevVarTableAL_6);


static /* final */ const MR_Box hlds__var_table_hlds_scalar_common_1[1][2];

static /* final */ const MR_Box hlds__var_table_hlds_scalar_common_2[1][3];

static /* final */ const MR_Box hlds__var_table_hlds_scalar_common_3[1][5];




static /* final */ const MR_Box hlds__var_table_hlds_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__var_table_hlds_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__var_table_hlds_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0))
  },
};

static /* final */ const MR_Box hlds__var_table_hlds_scalar_common_3[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "array.mh"


static MR_bool MR_CALL 
hlds__var_table_hlds__IntroducedFrom__pred__split_var_table__175__1_2_p_0(
  MR_Integer NextVarNum_17,
  MR_Integer HeadVar__2_25)
{
  MR_bool succeeded = (HeadVar__2_25 == NextVarNum_17);

  return succeeded;
}

void MR_CALL 
hlds__var_table_hlds__corresponding_vars_types_to_var_table_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarSet_7,
  MR_Word Vars_8,
  MR_Word Types_9,
  MR_Word * VarTable_10)
{
  MR_Word VarsEntries_11;
  MR_Word SortedVarsEntries_12;

  hlds__var_table_hlds__corresponding_vars_types_to_vars_entries_6_p_0(ModuleInfo_6, VarSet_7, Vars_8, Types_9, (MR_Word) ((MR_Unsigned) 0U), &VarsEntries_11);
  mercury__list__sort_2_p_0((MR_Word) (&hlds__var_table_hlds_scalar_common_2[0]), VarsEntries_11, &SortedVarsEntries_12);
  parse_tree__var_table__var_table_from_sorted_assoc_list_2_p_0(SortedVarsEntries_12, VarTable_10);
}

static void MR_CALL 
hlds__var_table_hlds__corresponding_vars_types_to_vars_entries_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_VarsEntries_0_5,
  MR_Word * STATE_VARIABLE_VarsEntries_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_VarsEntries_6 = STATE_VARIABLE_VarsEntries_0_5;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.var_table_hlds.corresponding_vars_types_to_vars_entries\'/6", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_46 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_47 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.var_table_hlds.corresponding_vars_types_to_vars_entries\'/6", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word Type_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
        MR_Word Types_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
        MR_String Name_38;
        MR_Word IsDummy_39;
        MR_Word Entry_40;
        MR_Word STATE_VARIABLE_VarsEntries_43_43;
        MR_Word Var_44;
        MR_String Name0_37;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_VarsEntries_0_5;

        succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_2, Var_47, &Name0_37);
        if (succeeded)
          Name_38 = Name0_37;
        else
          Name_38 = (MR_String) "";
        IsDummy_39 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_1, Type_34);
        {
          Entry_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Entry_40, 0) = ((MR_Box) (Name_38));
          MR_hl_field(0, Entry_40, 1) = ((MR_Box) (Type_34));
          MR_hl_field(0, Entry_40, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_39));
        }
        {
          Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_44, 0) = ((MR_Box) (Var_47));
          MR_hl_field(0, Var_44, 1) = ((MR_Box) (Entry_40));
        }
        {
          STATE_VARIABLE_VarsEntries_43_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_VarsEntries_43_43, 0) = ((MR_Box) (Var_44));
          MR_hl_field(1, STATE_VARIABLE_VarsEntries_43_43, 1) = ((MR_Box) (STATE_VARIABLE_VarsEntries_0_5));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = Var_46;
        next_value_of_HeadVar__4_4 = Types_35;
        next_value_of_STATE_VARIABLE_VarsEntries_0_5 = STATE_VARIABLE_VarsEntries_43_43;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_VarsEntries_0_5 = next_value_of_STATE_VARIABLE_VarsEntries_0_5;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
hlds__var_table_hlds__vars_types_to_var_table_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word VarSet_6,
  MR_Word VarsTypes_7,
  MR_Word * VarTable_8)
{
  MR_Word VarsEntries_9;
  MR_Word SortedVarsEntries_10;

  hlds__var_table_hlds__vars_types_to_vars_entries_5_p_0(ModuleInfo_5, VarSet_6, VarsTypes_7, (MR_Word) ((MR_Unsigned) 0U), &VarsEntries_9);
  mercury__list__sort_2_p_0((MR_Word) (&hlds__var_table_hlds_scalar_common_2[0]), VarsEntries_9, &SortedVarsEntries_10);
  parse_tree__var_table__var_table_from_sorted_assoc_list_2_p_0(SortedVarsEntries_10, VarTable_8);
}

static void MR_CALL 
hlds__var_table_hlds__vars_types_to_vars_entries_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_VarsEntries_0_4,
  MR_Word * STATE_VARIABLE_VarsEntries_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_VarsEntries_5 = STATE_VARIABLE_VarsEntries_0_4;
    else
    {
      MR_Word Var_13;
      MR_Word Type_14;
      MR_Word VarsTypes_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_String Name_18;
      MR_Word IsDummy_19;
      MR_Word Entry_20;
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_VarsEntries_24_24;
      MR_Word Var_25;
      MR_String Name0_17;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_VarsEntries_0_4;

      Var_13 = ((MR_Word) ((MR_hl_field(0, Var_23, (MR_Integer) 0))));
      Type_14 = ((MR_Word) ((MR_hl_field(0, Var_23, (MR_Integer) 1))));
      succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_2, Var_13, &Name0_17);
      if (succeeded)
        Name_18 = Name0_17;
      else
        Name_18 = (MR_String) "";
      IsDummy_19 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_1, Type_14);
      {
        Entry_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Entry_20, 0) = ((MR_Box) (Name_18));
        MR_hl_field(0, Entry_20, 1) = ((MR_Box) (Type_14));
        MR_hl_field(0, Entry_20, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_19));
      }
      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_25, 0) = ((MR_Box) (Var_13));
        MR_hl_field(0, Var_25, 1) = ((MR_Box) (Entry_20));
      }
      {
        STATE_VARIABLE_VarsEntries_24_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_VarsEntries_24_24, 0) = ((MR_Box) (Var_25));
        MR_hl_field(1, STATE_VARIABLE_VarsEntries_24_24, 1) = ((MR_Box) (STATE_VARIABLE_VarsEntries_0_4));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = VarsTypes_15;
      next_value_of_STATE_VARIABLE_VarsEntries_0_4 = STATE_VARIABLE_VarsEntries_24_24;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_VarsEntries_0_4 = next_value_of_STATE_VARIABLE_VarsEntries_0_4;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__var_table_hlds__split_var_table_3_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__var_table_hlds__IntroducedFrom__pred__split_var_table__175__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
hlds__var_table_hlds__split_var_table_3_p_0(
  MR_Word VarTable_4,
  MR_Word * VarSet_5,
  MR_Word * VarTypes_6)
{
  MR_bool succeeded;
  MR_Word Counter_7;
  MR_Word VarTableMap_8;
  MR_Word VarsEntries_9;
  MR_Word RevVarTypes_10;
  MR_Word RevVarNames_11;
  MR_Word VarNameMap_12;
  MR_Integer LastVarNum_13;
  MR_Integer NextVarNum_17;
  MR_Word Var_22;
  MR_Integer Var_25;
  MR_Word Var_18;

  parse_tree__var_table__deconstruct_var_table_3_p_0(VarTable_4, &Counter_7, &VarTableMap_8);
  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&hlds__var_table_hlds_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), VarTableMap_8, &VarsEntries_9);
  hlds__var_table_hlds__split_var_table_loop_5_p_0(VarsEntries_9, (MR_Word) ((MR_Unsigned) 0U), &RevVarTypes_10, (MR_Word) ((MR_Unsigned) 0U), &RevVarNames_11);
  parse_tree__vartypes__vartypes_from_rev_sorted_assoc_list_2_p_0(RevVarTypes_10, VarTypes_6);
  mercury__map__from_rev_sorted_assoc_list_2_p_0((MR_Word) (&hlds__var_table_hlds_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevVarNames_11, &VarNameMap_12);
  if ((RevVarTypes_10 == (MR_Word) ((MR_Unsigned) 0U)))
    LastVarNum_13 = (MR_Integer) 0;
  else
  {
    MR_Word Var_14;
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, RevVarTypes_10, (MR_Integer) 0))));

    Var_14 = ((MR_Word) ((MR_hl_field(0, Var_21, (MR_Integer) 0))));
    LastVarNum_13 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_14);
  }
  mercury__counter__allocate_3_p_0(&NextVarNum_17, Counter_7, &Var_18);
  Var_25 = (MR_Integer) ((MR_Unsigned) LastVarNum_13 + (MR_Unsigned) 1);
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (&hlds__var_table_hlds_scalar_common_3[0]));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) (hlds__var_table_hlds__split_var_table_3_p_0_1));
    MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_22, 3) = ((MR_Box) (NextVarNum_17));
    MR_hl_field(0, Var_22, 4) = ((MR_Box) (Var_25));
  }
  mercury__require__expect_3_p_0(Var_22, (MR_String) "predicate \140hlds.var_table_hlds.split_var_table\'/3", (MR_String) "LastVarNum + 1 != NextVarNum");
  mercury__varset__construct_varset_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LastVarNum_13, VarNameMap_12, VarSet_5);
}

static void MR_CALL 
hlds__var_table_hlds__split_var_table_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevVarTypes_0_2,
  MR_Word * STATE_VARIABLE_RevVarTypes_3,
  MR_Word STATE_VARIABLE_RevVarNames_0_4,
  MR_Word * STATE_VARIABLE_RevVarNames_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RevVarNames_5 = STATE_VARIABLE_RevVarNames_0_4;
      *STATE_VARIABLE_RevVarTypes_3 = STATE_VARIABLE_RevVarTypes_0_2;
    }
    else
    {
      MR_Word Var_12;
      MR_Word Entry_13;
      MR_Word VarsEntries_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_String Name_17;
      MR_Word Type_18;
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_RevVarTypes_25_25;
      MR_Word Var_26;
      MR_Word STATE_VARIABLE_RevVarNames_27_27;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevVarTypes_0_2;
      MR_Word next_value_of_STATE_VARIABLE_RevVarNames_0_4;

      Var_12 = ((MR_Word) ((MR_hl_field(0, Var_24, (MR_Integer) 0))));
      Entry_13 = ((MR_Word) ((MR_hl_field(0, Var_24, (MR_Integer) 1))));
      Name_17 = ((MR_String) ((MR_hl_field(0, Entry_13, (MR_Integer) 0))));
      Type_18 = ((MR_Word) ((MR_hl_field(0, Entry_13, (MR_Integer) 1))));
      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_26, 0) = ((MR_Box) (Var_12));
        MR_hl_field(0, Var_26, 1) = ((MR_Box) (Type_18));
      }
      {
        STATE_VARIABLE_RevVarTypes_25_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevVarTypes_25_25, 0) = ((MR_Box) (Var_26));
        MR_hl_field(1, STATE_VARIABLE_RevVarTypes_25_25, 1) = ((MR_Box) (STATE_VARIABLE_RevVarTypes_0_2));
      }
      succeeded = (strcmp(Name_17, (MR_String) "") == 0);
      if (succeeded)
        STATE_VARIABLE_RevVarNames_27_27 = STATE_VARIABLE_RevVarNames_0_4;
      else
      {
        MR_Word Var_28;

        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_28, 0) = ((MR_Box) (Var_12));
          MR_hl_field(0, Var_28, 1) = ((MR_Box) (Name_17));
        }
        {
          STATE_VARIABLE_RevVarNames_27_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevVarNames_27_27, 0) = ((MR_Box) (Var_28));
          MR_hl_field(1, STATE_VARIABLE_RevVarNames_27_27, 1) = ((MR_Box) (STATE_VARIABLE_RevVarNames_0_4));
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = VarsEntries_14;
      next_value_of_STATE_VARIABLE_RevVarTypes_0_2 = STATE_VARIABLE_RevVarTypes_25_25;
      next_value_of_STATE_VARIABLE_RevVarNames_0_4 = STATE_VARIABLE_RevVarNames_27_27;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevVarTypes_0_2 = next_value_of_STATE_VARIABLE_RevVarTypes_0_2;
      STATE_VARIABLE_RevVarNames_0_4 = next_value_of_STATE_VARIABLE_RevVarNames_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__var_table_hlds__make_var_table_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word VarSet_6,
  MR_Word VarTypes_7,
  MR_Word * VarTable_8)
{
  MR_bool succeeded;
  MR_Word VarTypesAL_9;
  MR_Word RevVarTableAL0_10;
  MR_Integer LastAllocVarNum0_11;
  MR_Word MaxVarInVarSet_15;
  MR_Integer MaxVarNumInVarSet_16;
  MR_Integer LastAllocVarNum_17;
  MR_Word RevVarTableAL_18;
  MR_Word Counter_19;
  MR_Word VarTableMap_20;
  MR_Integer Var_26;

  parse_tree__vartypes__vartypes_to_sorted_assoc_list_2_p_0(VarTypes_7, &VarTypesAL_9);
  hlds__var_table_hlds__make_var_table_loop_6_p_0(ModuleInfo_5, VarSet_6, (MR_Integer) 1, VarTypesAL_9, (MR_Word) ((MR_Unsigned) 0U), &RevVarTableAL0_10);
  if ((RevVarTableAL0_10 == (MR_Word) ((MR_Unsigned) 0U)))
    LastAllocVarNum0_11 = (MR_Integer) 0;
  else
  {
    MR_Word Var_12;
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, RevVarTableAL0_10, (MR_Integer) 0))));

    Var_12 = ((MR_Word) ((MR_hl_field(0, Var_23, (MR_Integer) 0))));
    LastAllocVarNum0_11 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_12);
  }
  MaxVarInVarSet_15 = mercury__varset__max_var_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6);
  MaxVarNumInVarSet_16 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MaxVarInVarSet_15);
  succeeded = (MaxVarNumInVarSet_16 > LastAllocVarNum0_11);
  if (succeeded)
  {
    MR_Integer Var_24;

    LastAllocVarNum_17 = MaxVarNumInVarSet_16;
    Var_24 = (MR_Integer) ((MR_Unsigned) LastAllocVarNum0_11 + (MR_Unsigned) 1);
    hlds__var_table_hlds__extend_var_table_loop_5_p_0(VarSet_6, Var_24, LastAllocVarNum_17, RevVarTableAL0_10, &RevVarTableAL_18);
  }
  else
  {
    LastAllocVarNum_17 = LastAllocVarNum0_11;
    RevVarTableAL_18 = RevVarTableAL0_10;
  }
  Var_26 = (MR_Integer) ((MR_Unsigned) LastAllocVarNum_17 + (MR_Unsigned) 1);
  mercury__counter__init_2_p_0(Var_26, &Counter_19);
  mercury__map__from_rev_sorted_assoc_list_2_p_0((MR_Word) (&hlds__var_table_hlds_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), RevVarTableAL_18, &VarTableMap_20);
  parse_tree__var_table__construct_var_table_3_p_0(Counter_19, VarTableMap_20, VarTable_8);
}

static void MR_CALL 
hlds__var_table_hlds__extend_var_table_loop_5_p_0(
  MR_Word VarSet_6,
  MR_Integer CurVarNum_7,
  MR_Integer MaxVarNum_8,
  MR_Word STATE_VARIABLE_RevVarTableAL_0_10,
  MR_Word * STATE_VARIABLE_RevVarTableAL_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (CurVarNum_7 <= MaxVarNum_8);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_RevVarTableAL_12_12;
      MR_Integer Var_13;
      MR_Word Var_16;
      MR_String Name_18;
      MR_Word VarEntry_19;
      MR_Word Var_20;
      MR_Word Var_22;
      MR_String NamePrime_17;
      MR_Integer next_value_of_CurVarNum_7;
      MR_Word next_value_of_STATE_VARIABLE_RevVarTableAL_0_10;

      Var_16 = mercury__term__force_construct_var_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CurVarNum_7);
      succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, Var_16, &NamePrime_17);
      if (succeeded)
        Name_18 = NamePrime_17;
      else
        Name_18 = (MR_String) "";
      Var_20 = parse_tree__builtin_lib_types__void_type_0_f_0();
      {
        VarEntry_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, VarEntry_19, 0) = ((MR_Box) (Name_18));
        MR_hl_field(0, VarEntry_19, 1) = ((MR_Box) (Var_20));
        MR_hl_field(0, VarEntry_19, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      {
        Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_22, 0) = ((MR_Box) (Var_16));
        MR_hl_field(0, Var_22, 1) = ((MR_Box) (VarEntry_19));
      }
      {
        STATE_VARIABLE_RevVarTableAL_12_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevVarTableAL_12_12, 0) = ((MR_Box) (Var_22));
        MR_hl_field(1, STATE_VARIABLE_RevVarTableAL_12_12, 1) = ((MR_Box) (STATE_VARIABLE_RevVarTableAL_0_10));
      }
      Var_13 = (MR_Integer) ((MR_Unsigned) CurVarNum_7 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurVarNum_7 = Var_13;
      next_value_of_STATE_VARIABLE_RevVarTableAL_0_10 = STATE_VARIABLE_RevVarTableAL_12_12;
      CurVarNum_7 = next_value_of_CurVarNum_7;
      STATE_VARIABLE_RevVarTableAL_0_10 = next_value_of_STATE_VARIABLE_RevVarTableAL_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_RevVarTableAL_11 = STATE_VARIABLE_RevVarTableAL_0_10;
    break;
  }
}

static void MR_CALL 
hlds__var_table_hlds__make_var_table_loop_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarSet_2,
  MR_Integer CurVarNum_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevVarTableAL_0_5,
  MR_Word * STATE_VARIABLE_RevVarTableAL_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevVarTableAL_6 = STATE_VARIABLE_RevVarTableAL_0_5;
    else
    {
      MR_Word Var_16;
      MR_Word Type_17;
      MR_Word VarsTypes0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Integer VarNum_20;
      MR_Word VarsTypes_25;
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_RevVarTableAL_29_29;
      MR_Integer Var_35;
      MR_Integer next_value_of_CurVarNum_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevVarTableAL_0_5;

      Var_16 = ((MR_Word) ((MR_hl_field(0, Var_28, (MR_Integer) 0))));
      Type_17 = ((MR_Word) ((MR_hl_field(0, Var_28, (MR_Integer) 1))));
      VarNum_20 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_16);
      succeeded = (CurVarNum_3 == VarNum_20);
      if (succeeded)
      {
        MR_String Name_22;
        MR_Word IsDummy_23;
        MR_Word Entry_24;
        MR_Word Var_30;
        MR_String NamePrime_21;

        succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_2, Var_16, &NamePrime_21);
        if (succeeded)
          Name_22 = NamePrime_21;
        else
          Name_22 = (MR_String) "";
        IsDummy_23 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_1, Type_17);
        {
          Entry_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Entry_24, 0) = ((MR_Box) (Name_22));
          MR_hl_field(0, Entry_24, 1) = ((MR_Box) (Type_17));
          MR_hl_field(0, Entry_24, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_23));
        }
        {
          Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_30, 0) = ((MR_Box) (Var_16));
          MR_hl_field(0, Var_30, 1) = ((MR_Box) (Entry_24));
        }
        {
          STATE_VARIABLE_RevVarTableAL_29_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevVarTableAL_29_29, 0) = ((MR_Box) (Var_30));
          MR_hl_field(1, STATE_VARIABLE_RevVarTableAL_29_29, 1) = ((MR_Box) (STATE_VARIABLE_RevVarTableAL_0_5));
        }
        VarsTypes_25 = VarsTypes0_18;
      }
      else
      {
        succeeded = (CurVarNum_3 < VarNum_20);
        if (succeeded)
        {
          MR_Word Var_39;
          MR_String Name_41;
          MR_Word VarEntry_42;
          MR_Word Var_43;
          MR_Word Var_45;
          MR_String NamePrime_40;

          Var_39 = mercury__term__force_construct_var_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CurVarNum_3);
          succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_2, Var_39, &NamePrime_40);
          if (succeeded)
            Name_41 = NamePrime_40;
          else
            Name_41 = (MR_String) "";
          Var_43 = parse_tree__builtin_lib_types__void_type_0_f_0();
          {
            VarEntry_42 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, VarEntry_42, 0) = ((MR_Box) (Name_41));
            MR_hl_field(0, VarEntry_42, 1) = ((MR_Box) (Var_43));
            MR_hl_field(0, VarEntry_42, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          {
            Var_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_45, 0) = ((MR_Box) (Var_39));
            MR_hl_field(0, Var_45, 1) = ((MR_Box) (VarEntry_42));
          }
          {
            STATE_VARIABLE_RevVarTableAL_29_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_RevVarTableAL_29_29, 0) = ((MR_Box) (Var_45));
            MR_hl_field(1, STATE_VARIABLE_RevVarTableAL_29_29, 1) = ((MR_Box) (STATE_VARIABLE_RevVarTableAL_0_5));
          }
          VarsTypes_25 = HeadVar__4_4;
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.var_table_hlds.make_var_table_loop\'/6", (MR_String) "CurVarNum > VarNum");
            return;
          }
      }
      Var_35 = (MR_Integer) ((MR_Unsigned) CurVarNum_3 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurVarNum_3 = Var_35;
      next_value_of_HeadVar__4_4 = VarsTypes_25;
      next_value_of_STATE_VARIABLE_RevVarTableAL_0_5 = STATE_VARIABLE_RevVarTableAL_29_29;
      CurVarNum_3 = next_value_of_CurVarNum_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_RevVarTableAL_0_5 = next_value_of_STATE_VARIABLE_RevVarTableAL_0_5;
      continue;
    }
    break;
  }
}

void mercury__hlds__var_table_hlds__init(void)
{
}

void mercury__hlds__var_table_hlds__init_type_tables(void)
{
}

void mercury__hlds__var_table_hlds__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__var_table_hlds__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.var_table_hlds.
