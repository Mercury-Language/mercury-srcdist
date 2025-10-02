/*
** Automatically generated from `mode_top_functor.m'
** by the Mercury compiler,
** version rotd-2025-10-02
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


// :- module check_hlds.mode_top_functor.
// :- implementation.

/*
INIT mercury__check_hlds__mode_top_functor__init
ENDINIT
*/

#include "check_hlds.mode_top_functor.mih"


#include "analysis.mih"
#include "array.mih"
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
#include "integer.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
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
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "term.mih"
#include "term_context.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.inst_lookup.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static void MR_CALL 
check_hlds__mode_top_functor__find_top_functor_mode_loop_over_notags_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Type_8,
  MR_Word ContainingTypes_9,
  MR_Word InitialInst_10,
  MR_Word FinalInst_11,
  MR_Word * TopFunctorMode_12);

static void MR_CALL 
check_hlds__mode_top_functor__get_single_arg_inst_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Inst_6,
  MR_Word ConsId_7,
  MR_Word * ArgInst_8);

static MR_bool MR_CALL 
check_hlds__mode_top_functor__get_single_arg_inst_in_bound_functors_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ConsId_6,
  MR_Word * ArgInst_7);







#include "array.mh"


void MR_CALL 
check_hlds__mode_top_functor__modes_to_top_functor_modes_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mode_top_functor.modes_to_top_functor_modes\'/4", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mode_top_functor.modes_to_top_functor_modes\'/4", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word Type_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Types_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word TopFunctorMode_23;
      MR_Word TopFunctorModes_24;
      MR_Word InitialInst_27;
      MR_Word FinalInst_28;

      check_hlds__mode_util__mode_get_insts_4_p_0(HeadVar__1_1, Var_26, &InitialInst_27, &FinalInst_28);
      check_hlds__mode_top_functor__find_top_functor_mode_loop_over_notags_6_p_0(HeadVar__1_1, Type_21, (MR_Word) ((MR_Unsigned) 0U), InitialInst_27, FinalInst_28, &TopFunctorMode_23);
      check_hlds__mode_top_functor__modes_to_top_functor_modes_4_p_0(HeadVar__1_1, Var_25, Types_22, &TopFunctorModes_24);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (TopFunctorMode_23));
        MR_hl_field(1, base, 1) = ((MR_Box) (TopFunctorModes_24));
      }
    }
  }
}

void MR_CALL 
check_hlds__mode_top_functor__init_final_insts_to_top_functor_mode_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word InitialInst_7,
  MR_Word FinalInst_8,
  MR_Word Type_9,
  MR_Word * TopFunctorMode_10)
{
  check_hlds__mode_top_functor__find_top_functor_mode_loop_over_notags_6_p_0(ModuleInfo_6, Type_9, (MR_Word) ((MR_Unsigned) 0U), InitialInst_7, FinalInst_8, TopFunctorMode_10);
}

void MR_CALL 
check_hlds__mode_top_functor__mode_to_top_functor_mode_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Mode_6,
  MR_Word Type_7,
  MR_Word * TopFunctorMode_8)
{
  MR_Word InitialInst_9;
  MR_Word FinalInst_10;

  check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_5, Mode_6, &InitialInst_9, &FinalInst_10);
  check_hlds__mode_top_functor__find_top_functor_mode_loop_over_notags_6_p_0(ModuleInfo_5, Type_7, (MR_Word) ((MR_Unsigned) 0U), InitialInst_9, FinalInst_10, TopFunctorMode_8);
}

static void MR_CALL 
check_hlds__mode_top_functor__find_top_functor_mode_loop_over_notags_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Type_8,
  MR_Word ContainingTypes_9,
  MR_Word InitialInst_10,
  MR_Word FinalInst_11,
  MR_Word * TopFunctorMode_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word FunctorName_13;
    MR_Word ArgType_14;
    MR_Word TypeCtor_15;
    MR_Word TypeCtorInfo_22_22;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = check_hlds__type_util__type_is_no_tag_type_4_p_0(ModuleInfo_7, Type_8, &FunctorName_13, &ArgType_14);
    if (succeeded)
    {
      succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_8, &TypeCtor_15);
      if (succeeded)
      {
        TypeCtorInfo_22_22 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
        succeeded = mercury__list__member_2_p_0(TypeCtorInfo_22_22, ((MR_Box) (TypeCtor_15)), ContainingTypes_9);
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
    {
      MR_Word ConsId_16;
      MR_Word InitialArgInst_17;
      MR_Word FinalArgInst_18;
      MR_Word Var_19;
      MR_Word Var_21;
      MR_Word next_value_of_Type_8;
      MR_Word next_value_of_ContainingTypes_9;
      MR_Word next_value_of_InitialInst_10;
      MR_Word next_value_of_FinalInst_11;

      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_19, 0) = ((MR_Box) (FunctorName_13));
        MR_hl_field(0, Var_19, 1) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_19, 2) = ((MR_Box) (TypeCtor_15));
      }
      ConsId_16 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_19)));
      check_hlds__mode_top_functor__get_single_arg_inst_4_p_0(ModuleInfo_7, InitialInst_10, ConsId_16, &InitialArgInst_17);
      check_hlds__mode_top_functor__get_single_arg_inst_4_p_0(ModuleInfo_7, FinalInst_11, ConsId_16, &FinalArgInst_18);
      {
        Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_21, 0) = ((MR_Box) (TypeCtor_15));
        MR_hl_field(1, Var_21, 1) = ((MR_Box) (ContainingTypes_9));
      }
      // direct tailcall eliminated
      ;
      next_value_of_Type_8 = ArgType_14;
      next_value_of_ContainingTypes_9 = Var_21;
      next_value_of_InitialInst_10 = InitialArgInst_17;
      next_value_of_FinalInst_11 = FinalArgInst_18;
      Type_8 = next_value_of_Type_8;
      ContainingTypes_9 = next_value_of_ContainingTypes_9;
      InitialInst_10 = next_value_of_InitialInst_10;
      FinalInst_11 = next_value_of_FinalInst_11;
      continue;
    }
    else
    {
      succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_7, InitialInst_10);
      if (succeeded)
        *TopFunctorMode_12 = (MR_Integer) 0;
      else
      {
        succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_7, FinalInst_11);
        if (succeeded)
          *TopFunctorMode_12 = (MR_Integer) 1;
        else
          *TopFunctorMode_12 = (MR_Integer) 2;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__mode_top_functor__get_single_arg_inst_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Inst_6,
  MR_Word ConsId_7,
  MR_Word * ArgInst_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *ArgInst_8 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            *ArgInst_8 = (MR_Word) ((MR_Unsigned) 4U);
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Uniq_11 = ((MR_Unsigned) ((MR_hl_field(1, Inst_6, 0))) & (MR_Integer) 7);

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *ArgInst_8 = base;
            MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_11));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BoundFunctors_15 = ((MR_Word) ((MR_hl_field(2, Inst_6, 2))));
          MR_Word ArgInst0_16;

          succeeded = check_hlds__mode_top_functor__get_single_arg_inst_in_bound_functors_3_p_0(BoundFunctors_15, ConsId_7, &ArgInst0_16);
          if (succeeded)
            *ArgInst_8 = ArgInst0_16;
          else
            *ArgInst_8 = (MR_Word) ((MR_Unsigned) 4U);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_6, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_9 = ((MR_Word) ((MR_hl_field(3, Inst_6, 1))));
              MR_Word NamedInst_10;
              MR_Word next_value_of_Inst_6;

              check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_5, InstName_9, &NamedInst_10);
              // direct tailcall eliminated
              ;
              next_value_of_Inst_6 = NamedInst_10;
              Inst_6 = next_value_of_Inst_6;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word InsideInst_20 = ((MR_Word) ((MR_hl_field(3, Inst_6, 2))));
              MR_Word next_value_of_Inst_6 = InsideInst_20;

              // direct tailcall eliminated
              ;
              Inst_6 = next_value_of_Inst_6;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Uniq_25 = ((MR_Unsigned) ((MR_hl_field(3, Inst_6, 1))) & (MR_Integer) 7);

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *ArgInst_8 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_25));
                MR_hl_field(3, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mode_top_functor.get_single_arg_inst\'/4", (MR_String) "inst_var");
              return;
            }
            break;
        }
        break;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__mode_top_functor__get_single_arg_inst_in_bound_functors_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ConsId_6,
  MR_Word * ArgInst_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word BoundFunctor_4;
    MR_Word BoundFunctors_5;
    MR_Word ArgInst0_9;
    MR_Word InstConsId_8;
    MR_Word Var_10;
    MR_Word Var_11;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      BoundFunctor_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      BoundFunctors_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      InstConsId_8 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_4, 0))));
      Var_10 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_4, 1))));
      succeeded = (Var_10 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgInst0_9 = ((MR_Word) ((MR_hl_field(1, Var_10, 0))));
        Var_11 = ((MR_Word) ((MR_hl_field(1, Var_10, 1))));
        succeeded = (Var_11 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(ConsId_6, InstConsId_8);
      }
      if (succeeded)
      {
        *ArgInst_7 = ArgInst0_9;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = BoundFunctors_5;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void mercury__check_hlds__mode_top_functor__init(void)
{
}

void mercury__check_hlds__mode_top_functor__init_type_tables(void)
{
}

void mercury__check_hlds__mode_top_functor__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__mode_top_functor__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.mode_top_functor.
