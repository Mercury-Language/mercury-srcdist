/*
** Automatically generated from `inst_mode_type_prop.m'
** by the Mercury compiler,
** version rotd-2021-12-27
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


// :- module check_hlds.inst_mode_type_prop.
// :- implementation.

/*
INIT mercury__check_hlds__inst_mode_type_prop__init
ENDINIT
*/

#include "check_hlds.inst_mode_type_prop.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
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
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.inst_lookup.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_mode_type_prop__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_char_type_2_p_0(
  MR_Word BoundInst0_3,
  MR_Word * BoundInst_4);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_types_into_tuple_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word TupleArgTypes_6,
  MR_Word BoundInst0_7,
  MR_Word * BoundInst_8);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word Inst0_7,
  MR_Word * Inst_8);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_inst_eagerly_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Type_7,
  MR_Word Constructors_8,
  MR_Word Inst0_9,
  MR_Word * Inst_10);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_bound_inst_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_bound_inst_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_subst_type_ctor_into_bound_insts_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Subst_2,
  MR_Word TypeCtor_3,
  MR_Word TypeModule_4,
  MR_Word Constructors_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
check_hlds__inst_mode_type_prop__default_higher_order_func_inst_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PredArgTypes_5,
  MR_Word * PredInstInfo_6);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_subst_types_into_insts_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Subst_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
check_hlds__inst_mode_type_prop__get_constructor_arg_types_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop__find_first_matching_constructor_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
check_hlds__inst_mode_type_prop__apply_type_subst_3_p_0(
  MR_Word Type0_4,
  MR_Word Subst_5,
  MR_Word * Type_6);

static void MR_CALL 
check_hlds__inst_mode_type_prop__construct_new_bound_inst_5_p_0(
  MR_Word Uniq_6,
  MR_Word InstResults0_7,
  MR_Word PropagatedResult_8,
  MR_Word BoundInsts_9,
  MR_Word * Inst_10);


static /* final */ const MR_Box check_hlds__inst_mode_type_prop_scalar_common_1[5][2];

static /* final */ const MR_Box check_hlds__inst_mode_type_prop_scalar_common_2[2][3];

static /* final */ const MR_Box check_hlds__inst_mode_type_prop_scalar_common_3[1][5];

static /* final */ const MR_Box check_hlds__inst_mode_type_prop_scalar_common_4[1][7];




static /* final */ const MR_Box check_hlds__inst_mode_type_prop_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_mode_type_prop_scalar_common_2[0])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_mode_type_prop_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_mode_type_prop_scalar_common_2[0])))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__inst_mode_type_prop_scalar_common_1[2])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__inst_mode_type_prop_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__inst_mode_type_prop_scalar_common_3[0])),
    ((MR_Box) (check_hlds__inst_mode_type_prop__propagate_type_into_bound_inst_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__inst_mode_type_prop_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0))
  },
};

static /* final */ const MR_Box check_hlds__inst_mode_type_prop_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__inst_mode_type_prop__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0))
  },
};



#include "array.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_mode_type_prop__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_char_type_2_p_0(
  MR_Word BoundInst0_3,
  MR_Word * BoundInst_4)
{
  {
    MR_bool succeeded;
    MR_Word Functor0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst0_3, (MR_Integer) 0))));
    MR_Word ArgInsts0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst0_3, (MR_Integer) 1))));
    MR_Char NameChar_10;
    MR_String Name_7;
    MR_Word NameChars_9;
    MR_Word Var_12;
    MR_Integer Var_13;
    MR_Word Var_14;

    succeeded = ((((MR_tag((MR_Word) Functor0_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor0_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor0_5, (MR_Integer) 1))));
      Var_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor0_5, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_Integer) 0);
      if (succeeded)
      {
        Name_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0))));
        succeeded = (Var_13 == (MR_Integer) 0);
        if (succeeded)
        {
          mercury__string__to_char_list_2_p_0(Name_7, &NameChars_9);
          succeeded = (NameChars_9 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NameChar_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), NameChars_9, (MR_Integer) 0)));
            Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NameChars_9, (MR_Integer) 1))));
            succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              succeeded = (ArgInsts0_6 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Functor_11;

      {
        Functor_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Functor_11, 0) = ((MR_Box) ((MR_Unsigned) 7U));
        MR_hl_field(MR_mktag(3), Functor_11, 1) = ((MR_Box) (MR_Word) (NameChar_10));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *BoundInst_4 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Functor_11));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgInsts0_6));
      }
    }
    else
      *BoundInst_4 = BoundInst0_3;
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_types_into_tuple_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word TupleArgTypes_6,
  MR_Word BoundInst0_7,
  MR_Word * BoundInst_8)
{
  {
    MR_bool succeeded;
    MR_Word Functor_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst0_7, (MR_Integer) 0))));
    MR_Word ArgInsts0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst0_7, (MR_Integer) 1))));
    MR_Word ArgInsts_15;
    MR_Word TypeCtorInfo_16_16;
    MR_Word TypeCtorInfo_17_17;
    MR_Integer ArgInstsLen_12;
    MR_Integer TupleArgTypesLen_13;

    succeeded = ((((MR_tag((MR_Word) Functor_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_9, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (succeeded)
    {
      TypeCtorInfo_16_16 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
      mercury__list__length_2_p_0(TypeCtorInfo_16_16, ArgInsts0_10, &ArgInstsLen_12);
      TypeCtorInfo_17_17 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
      mercury__list__length_2_p_0(TypeCtorInfo_17_17, TupleArgTypes_6, &TupleArgTypesLen_13);
      succeeded = (ArgInstsLen_12 == TupleArgTypesLen_13);
    }
    if (succeeded)
    {
      MR_Word Subst_14;

      mercury__map__init_1_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &Subst_14);
      check_hlds__inst_mode_type_prop__propagate_subst_types_into_insts_5_p_0(ModuleInfo_5, Subst_14, TupleArgTypes_6, ArgInsts0_10, &ArgInsts_15);
    }
    else
      ArgInsts_15 = ArgInsts0_10;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *BoundInst_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Functor_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgInsts_15));
    }
  }
}

void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_mode_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word Mode0_7,
  MR_Word * Mode_8)
{
  {
    MR_Word InitialInst0_9;
    MR_Word FinalInst0_10;
    MR_Word InitialInst_11;
    MR_Word FinalInst_12;

    check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_5, Mode0_7, &InitialInst0_9, &FinalInst0_10);
    check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_4_p_0(ModuleInfo_5, Type_6, InitialInst0_9, &InitialInst_11);
    check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_4_p_0(ModuleInfo_5, Type_6, FinalInst0_10, &FinalInst_12);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Mode_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InitialInst_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FinalInst_12));
    }
  }
}

void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_inst_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word Inst0_7,
  MR_Word * Inst_8)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__semidet_fail_0_p_0();
    if (succeeded)
    {
      MR_Word Constructors_9;

      succeeded = check_hlds__type_util__type_constructors_3_p_0(ModuleInfo_5, Type_6, &Constructors_9);
      if (succeeded)
        check_hlds__inst_mode_type_prop__propagate_type_into_inst_eagerly_5_p_0(ModuleInfo_5, Type_6, Constructors_9, Inst0_7, Inst_8);
      else
        *Inst_8 = Inst0_7;
    }
    else
      check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_4_p_0(ModuleInfo_5, Type_6, Inst0_7, Inst_8);
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word Inst0_7,
  MR_Word * Inst_8)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Inst0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst0_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Inst_8 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            *Inst_8 = Inst0_7;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_mode_type_prop.propagate_type_into_inst_lazily\'/4", (MR_String) "typeinfo already present");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Uniq_77 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst0_7, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word HOInstInfo0_78 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst0_7, (MR_Integer) 1))));

          if ((HOInstInfo0_78 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word ArgTypes_55;
            MR_Word Var_94;
            MR_Word Var_25;

            succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_6, &Var_25, &Var_94, &ArgTypes_55);
            if (succeeded)
              succeeded = ((MR_Integer) 1 == Var_94);
            if (succeeded)
            {
              MR_Word Var_44;
              MR_Word HOInstInfo_54;

              check_hlds__inst_mode_type_prop__default_higher_order_func_inst_3_p_0(ModuleInfo_5, ArgTypes_55, &HOInstInfo_54);
              Var_44 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (HOInstInfo_54)));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Inst_8 = base;
                MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_77));
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_44));
              }
            }
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Inst_8 = base;
                MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_77));
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
          }
          else
          {
            MR_Word Var_42;
            MR_Word PredInstInfo0_61 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_78), (MR_Integer) 1));
            MR_Word PredOrFunc_62 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo0_61, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word Modes0_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo0_61, (MR_Integer) 1))));
            MR_Word MaybeArgRegs_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo0_61, (MR_Integer) 2))));
            MR_Word Detism_65 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo0_61, (MR_Integer) 3))) & (MR_Integer) 7);
            MR_Word Modes_66;
            MR_Word PredInstInfo_67;
            MR_Word ArgTypes_59;
            MR_Word TypeCtorInfo_90_90;
            MR_Word TypeCtorInfo_91_91;
            MR_Word Var_95;
            MR_Word Var_27;

            succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_6, &Var_27, &Var_95, &ArgTypes_59);
            if (succeeded)
            {
              succeeded = (PredOrFunc_62 == Var_95);
              if (succeeded)
              {
                TypeCtorInfo_90_90 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                TypeCtorInfo_91_91 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
                succeeded = mercury__list__same_length_2_p_0(TypeCtorInfo_90_90, TypeCtorInfo_91_91, ArgTypes_59, Modes0_63);
              }
            }
            if (succeeded)
              check_hlds__inst_mode_type_prop__propagate_types_into_modes_4_p_0(ModuleInfo_5, ArgTypes_59, Modes0_63, &Modes_66);
            else
              Modes_66 = Modes0_63;
            {
              PredInstInfo_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredInstInfo_67, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_62));
              MR_hl_field(MR_mktag(0), PredInstInfo_67, 1) = ((MR_Box) (Modes_66));
              MR_hl_field(MR_mktag(0), PredInstInfo_67, 2) = ((MR_Box) (MaybeArgRegs_64));
              MR_hl_field(MR_mktag(0), PredInstInfo_67, 3) = (MR_Box) ((MR_Unsigned) (Detism_65));
            }
            Var_42 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (PredInstInfo_67)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Inst_8 = base;
              MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_77));
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_42));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst0_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            check_hlds__inst_mode_type_prop__propagate_type_into_bound_inst_4_p_0(ModuleInfo_5, Type_6, Inst0_7, Inst_8);
            break;
          case (MR_Integer) 1:
            {
              MR_Word Uniq_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_7, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_7, (MR_Integer) 2))));

              if ((HOInstInfo0_11 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word ArgTypes_14;
                MR_Word Var_92;
                MR_Word Var_12;

                succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_6, &Var_12, &Var_92, &ArgTypes_14);
                if (succeeded)
                  succeeded = ((MR_Integer) 1 == Var_92);
                if (succeeded)
                {
                  MR_Word HOInstInfo_15;
                  MR_Word Var_48;

                  check_hlds__inst_mode_type_prop__default_higher_order_func_inst_3_p_0(ModuleInfo_5, ArgTypes_14, &HOInstInfo_15);
                  Var_48 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (HOInstInfo_15)));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_8 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_10));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_48));
                  }
                }
                else
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_8 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_10));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
              }
              else
              {
                MR_Word PredInstInfo0_16 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_11), (MR_Integer) 1));
                MR_Word PredOrFunc_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo0_16, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Word Modes0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo0_16, (MR_Integer) 1))));
                MR_Word MaybeArgRegs_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo0_16, (MR_Integer) 2))));
                MR_Word Detism_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo0_16, (MR_Integer) 3))) & (MR_Integer) 7);
                MR_Word Modes_23;
                MR_Word PredInstInfo_24;
                MR_Word Var_46;
                MR_Word ArgTypes_52;
                MR_Word TypeCtorInfo_88_88;
                MR_Word TypeCtorInfo_89_89;
                MR_Word Var_93;
                MR_Word Var_21;

                succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_6, &Var_21, &Var_93, &ArgTypes_52);
                if (succeeded)
                {
                  succeeded = (PredOrFunc_17 == Var_93);
                  if (succeeded)
                  {
                    TypeCtorInfo_88_88 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                    TypeCtorInfo_89_89 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
                    succeeded = mercury__list__same_length_2_p_0(TypeCtorInfo_88_88, TypeCtorInfo_89_89, ArgTypes_52, Modes0_18);
                  }
                }
                if (succeeded)
                  check_hlds__inst_mode_type_prop__propagate_types_into_modes_4_p_0(ModuleInfo_5, ArgTypes_52, Modes0_18, &Modes_23);
                else
                  Modes_23 = Modes0_18;
                {
                  PredInstInfo_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), PredInstInfo_24, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
                  MR_hl_field(MR_mktag(0), PredInstInfo_24, 1) = ((MR_Box) (Modes_23));
                  MR_hl_field(MR_mktag(0), PredInstInfo_24, 2) = ((MR_Box) (MaybeArgRegs_19));
                  MR_hl_field(MR_mktag(0), PredInstInfo_24, 3) = (MR_Box) ((MR_Unsigned) (Detism_20));
                }
                Var_46 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (PredInstInfo_24)));
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_8 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_10));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_46));
                }
              }
            }
            break;
          case (MR_Integer) 2:
            *Inst_8 = Inst0_7;
            break;
          case (MR_Integer) 3:
            {
              MR_Word InstVars_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_7, (MR_Integer) 1))));
              MR_Word SubInst0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_7, (MR_Integer) 2))));
              MR_Word SubInst_35;

              check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_4_p_0(ModuleInfo_5, Type_6, SubInst0_34, &SubInst_35);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (InstVars_33));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubInst_35));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_7, (MR_Integer) 1))));

              succeeded = ((((MR_tag((MR_Word) InstName0_38)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstName0_38, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (succeeded)
                *Inst_8 = Inst0_7;
              else
              {
                MR_Word InstName_41;

                {
                  InstName_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), InstName_41, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), InstName_41, 1) = ((MR_Box) (Type_6));
                  MR_hl_field(MR_mktag(3), InstName_41, 2) = ((MR_Box) (InstName0_38));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_8 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (InstName_41));
                }
              }
            }
            break;
          case (MR_Integer) 5:
            *Inst_8 = Inst0_7;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_inst_eagerly_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Type_7,
  MR_Word Constructors_8,
  MR_Word Inst0_9,
  MR_Word * Inst_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst0_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst0_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Inst_10 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            *Inst_10 = Inst0_9;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_mode_type_prop.propagate_type_into_inst_eagerly\'/5", (MR_String) "type info already present");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Uniq_112 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst0_9, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word HOInstInfo0_113 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst0_9, (MR_Integer) 1))));

          if ((HOInstInfo0_113 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word ArgTypes_79;
            MR_Word Var_140;
            MR_Word Var_31;

            succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_7, &Var_31, &Var_140, &ArgTypes_79);
            if (succeeded)
              succeeded = ((MR_Integer) 1 == Var_140);
            if (succeeded)
            {
              MR_Word Var_48;
              MR_Word PredInstInfo_74;

              check_hlds__inst_mode_type_prop__default_higher_order_func_inst_3_p_0(ModuleInfo_6, ArgTypes_79, &PredInstInfo_74);
              Var_48 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (PredInstInfo_74)));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Inst_10 = base;
                MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_112));
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_48));
              }
            }
            else
            {
              MR_Word Var_51;
              MR_Word Var_52;
              MR_Word Var_53;
              MR_Word Var_54;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Word Var_57;
              MR_Word TypeCtor_75;
              MR_Word BoundInsts0_76;
              MR_Word BoundInsts_77;
              MR_Word InstResults_78;

              parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_7, &TypeCtor_75);
              check_hlds__mode_util__constructors_to_bound_any_insts_5_p_0(ModuleInfo_6, Uniq_112, TypeCtor_75, Constructors_8, &BoundInsts0_76);
              mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), BoundInsts0_76, &BoundInsts_77);
              Var_52 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
              {
                Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
              }
              Var_54 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[1]));
              {
                Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
              }
              Var_56 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
              {
                Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
              }
              Var_57 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (TypeCtor_75)));
              {
                InstResults_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), InstResults_78, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 2)) | (MR_Unsigned) ((MR_Integer) 2)));
                MR_hl_field(MR_mktag(1), InstResults_78, 1) = ((MR_Box) (Var_51));
                MR_hl_field(MR_mktag(1), InstResults_78, 2) = ((MR_Box) (Var_53));
                MR_hl_field(MR_mktag(1), InstResults_78, 3) = ((MR_Box) (Var_55));
                MR_hl_field(MR_mktag(1), InstResults_78, 4) = ((MR_Box) (Var_57));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Inst_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_112));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResults_78));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_77));
              }
            }
          }
          else
          {
            MR_Word Var_46;
            MR_Word PredInstInfo0_93 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_113), (MR_Integer) 1));
            MR_Word PredOrFunc_94 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo0_93, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word Modes0_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo0_93, (MR_Integer) 1))));
            MR_Word MaybeArgRegs_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo0_93, (MR_Integer) 2))));
            MR_Word Detism_97 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo0_93, (MR_Integer) 3))) & (MR_Integer) 7);
            MR_Word Modes_98;
            MR_Word PredInstInfo_99;
            MR_Word ArgTypes_91;
            MR_Word TypeCtorInfo_136_136;
            MR_Word TypeCtorInfo_137_137;
            MR_Word Var_141;
            MR_Word Var_33;

            succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_7, &Var_33, &Var_141, &ArgTypes_91);
            if (succeeded)
            {
              succeeded = (PredOrFunc_94 == Var_141);
              if (succeeded)
              {
                TypeCtorInfo_136_136 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                TypeCtorInfo_137_137 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
                succeeded = mercury__list__same_length_2_p_0(TypeCtorInfo_136_136, TypeCtorInfo_137_137, ArgTypes_91, Modes0_95);
              }
            }
            if (succeeded)
              check_hlds__inst_mode_type_prop__propagate_types_into_modes_4_p_0(ModuleInfo_6, ArgTypes_91, Modes0_95, &Modes_98);
            else
              Modes_98 = Modes0_95;
            {
              PredInstInfo_99 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredInstInfo_99, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_94));
              MR_hl_field(MR_mktag(0), PredInstInfo_99, 1) = ((MR_Box) (Modes_98));
              MR_hl_field(MR_mktag(0), PredInstInfo_99, 2) = ((MR_Box) (MaybeArgRegs_96));
              MR_hl_field(MR_mktag(0), PredInstInfo_99, 3) = (MR_Box) ((MR_Unsigned) (Detism_97));
            }
            Var_46 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (PredInstInfo_99)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Inst_10 = base;
              MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_112));
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_46));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            check_hlds__inst_mode_type_prop__propagate_type_into_bound_inst_4_p_0(ModuleInfo_6, Type_7, Inst0_9, Inst_10);
            break;
          case (MR_Integer) 1:
            {
              MR_Word Uniq_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 2))));

              if ((HOInstInfo0_13 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word ArgTypes_16;
                MR_Word Var_138;
                MR_Word Var_14;

                succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_7, &Var_14, &Var_138, &ArgTypes_16);
                if (succeeded)
                  succeeded = ((MR_Integer) 1 == Var_138);
                if (succeeded)
                {
                  MR_Word HigherOrderInstInfo_17;
                  MR_Word Var_60;

                  check_hlds__inst_mode_type_prop__default_higher_order_func_inst_3_p_0(ModuleInfo_6, ArgTypes_16, &HigherOrderInstInfo_17);
                  Var_60 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (HigherOrderInstInfo_17)));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_12));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_60));
                  }
                }
                else
                {
                  MR_Word TypeCtor_18;
                  MR_Word BoundInsts0_19;
                  MR_Word BoundInsts_20;
                  MR_Word InstResults_21;
                  MR_Word Var_63;
                  MR_Word Var_64;
                  MR_Word Var_65;
                  MR_Word Var_66;
                  MR_Word Var_67;
                  MR_Word Var_68;
                  MR_Word Var_69;

                  parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_7, &TypeCtor_18);
                  check_hlds__mode_util__constructors_to_bound_insts_5_p_0(ModuleInfo_6, Uniq_12, TypeCtor_18, Constructors_8, &BoundInsts0_19);
                  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), BoundInsts0_19, &BoundInsts_20);
                  Var_64 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
                  {
                    Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
                  }
                  Var_66 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[1]));
                  {
                    Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
                  }
                  Var_68 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
                  {
                    Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
                  }
                  Var_69 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (TypeCtor_18)));
                  {
                    InstResults_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), InstResults_21, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 0)));
                    MR_hl_field(MR_mktag(1), InstResults_21, 1) = ((MR_Box) (Var_63));
                    MR_hl_field(MR_mktag(1), InstResults_21, 2) = ((MR_Box) (Var_65));
                    MR_hl_field(MR_mktag(1), InstResults_21, 3) = ((MR_Box) (Var_67));
                    MR_hl_field(MR_mktag(1), InstResults_21, 4) = ((MR_Box) (Var_69));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_12));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResults_21));
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_20));
                  }
                }
              }
              else
              {
                MR_Word PredInstInfo0_22 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_13), (MR_Integer) 1));
                MR_Word PredOrFunc_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo0_22, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Word Modes0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo0_22, (MR_Integer) 1))));
                MR_Word MaybeArgRegs_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo0_22, (MR_Integer) 2))));
                MR_Word Detism_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo0_22, (MR_Integer) 3))) & (MR_Integer) 7);
                MR_Word Modes_29;
                MR_Word PredInstInfo_30;
                MR_Word Var_58;
                MR_Word ArgTypes_72;
                MR_Word TypeCtorInfo_130_130;
                MR_Word TypeCtorInfo_131_131;
                MR_Word Var_139;
                MR_Word Var_27;

                succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_7, &Var_27, &Var_139, &ArgTypes_72);
                if (succeeded)
                {
                  succeeded = (PredOrFunc_23 == Var_139);
                  if (succeeded)
                  {
                    TypeCtorInfo_130_130 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                    TypeCtorInfo_131_131 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
                    succeeded = mercury__list__same_length_2_p_0(TypeCtorInfo_130_130, TypeCtorInfo_131_131, ArgTypes_72, Modes0_24);
                  }
                }
                if (succeeded)
                  check_hlds__inst_mode_type_prop__propagate_types_into_modes_4_p_0(ModuleInfo_6, ArgTypes_72, Modes0_24, &Modes_29);
                else
                  Modes_29 = Modes0_24;
                {
                  PredInstInfo_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), PredInstInfo_30, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_23));
                  MR_hl_field(MR_mktag(0), PredInstInfo_30, 1) = ((MR_Box) (Modes_29));
                  MR_hl_field(MR_mktag(0), PredInstInfo_30, 2) = ((MR_Box) (MaybeArgRegs_25));
                  MR_hl_field(MR_mktag(0), PredInstInfo_30, 3) = (MR_Box) ((MR_Unsigned) (Detism_26));
                }
                Var_58 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (PredInstInfo_30)));
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_10 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_12));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_58));
                }
              }
            }
            break;
          case (MR_Integer) 2:
            *Inst_10 = Inst0_9;
            break;
          case (MR_Integer) 3:
            {
              MR_Word InstVars_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 1))));
              MR_Word SubInst0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 2))));
              MR_Word SubInst_41;

              check_hlds__inst_mode_type_prop__propagate_type_into_inst_eagerly_5_p_0(ModuleInfo_6, Type_7, Constructors_8, SubInst0_40, &SubInst_41);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (InstVars_39));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubInst_41));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 1))));
              MR_Word NamedInst_45;
              MR_Word next_value_of_Inst0_9;

              check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_6, InstName_44, &NamedInst_45);
              // direct tailcall eliminated
              ;
              next_value_of_Inst0_9 = NamedInst_45;
              Inst0_9 = next_value_of_Inst0_9;
              continue;
            }
            break;
          case (MR_Integer) 5:
            *Inst_10 = Inst0_9;
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_bound_inst_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_BoundInst_8;

    check_hlds__inst_mode_type_prop__propagate_types_into_tuple_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_BoundInst_8);
    *wrapper_arg_2 = ((MR_Box) (conv1_BoundInst_8));
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_bound_inst_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_BoundInst_4;

    check_hlds__inst_mode_type_prop__propagate_char_type_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_BoundInst_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_BoundInst_4));
  }
}

void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_bound_inst_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word Inst0_7,
  MR_Word * Inst_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Uniq_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_7, (MR_Integer) 1))) & (MR_Integer) 7);
    MR_Word InstResults0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_7, (MR_Integer) 2))));
    MR_Word BoundInsts0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_7, (MR_Integer) 3))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Type_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Inst_8 = Inst0_7;
        break;
      case (MR_Integer) 1:
        {
          MR_Word SymName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type_6, (MR_Integer) 0))));
          MR_Word ArgTypes_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type_6, (MR_Integer) 1))));
          MR_Word TypeModule_29;
          MR_Word TypeCtor_32;
          MR_Word TypeParams_34;
          MR_Word TypeBodyDu_36;
          MR_Word TypeCtorInfo_77_77;
          MR_Word TypeTable_31;
          MR_Word TypeDefn_33;
          MR_Word TypeBody_35;
          MR_Integer Var_49;

          succeeded = ((MR_tag((MR_Word) SymName_28)) == (MR_Integer) 1);
          if (succeeded)
          {
            TypeModule_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_28, (MR_Integer) 0))));
            hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_5, &TypeTable_31);
            TypeCtorInfo_77_77 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
            Var_49 = mercury__list__length_1_f_0(TypeCtorInfo_77_77, ArgTypes_63);
            {
              TypeCtor_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeCtor_32, 0) = ((MR_Box) (SymName_28));
              MR_hl_field(MR_mktag(0), TypeCtor_32, 1) = ((MR_Box) (Var_49));
            }
            succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_31, TypeCtor_32, &TypeDefn_33);
            if (succeeded)
            {
              hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_33, &TypeParams_34);
              hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_33, &TypeBody_35);
              succeeded = ((MR_tag((MR_Word) TypeBody_35)) == (MR_Integer) 0);
              if (succeeded)
                TypeBodyDu_36 = (MR_Word) ((MR_Word) (TypeBody_35));
            }
          }
          if (succeeded)
          {
            MR_Word PropagatedResult0_42;
            MR_Word PropagatedTypeCtor0_43;

            succeeded = ((MR_tag((MR_Word) InstResults0_10)) == (MR_Integer) 1);
            if (succeeded)
            {
              PropagatedResult0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstResults0_10, (MR_Integer) 4))));
              succeeded = (PropagatedResult0_42 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                PropagatedTypeCtor0_43 = (MR_Word) (MR_body((MR_Word) (PropagatedResult0_42), (MR_Integer) 1));
                succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(PropagatedTypeCtor0_43, TypeCtor_32);
                if (succeeded)
                  succeeded = (TypeParams_34 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
            if (succeeded)
              *Inst_8 = Inst0_7;
            else
            {
              MR_Word ArgSubst_44;
              MR_Word OoMConstructors_45;
              MR_Word Constructors_46;
              MR_Word BoundInsts1_47;
              MR_Word BoundInsts_55;
              MR_Word PropagatedResult_56;

              mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_34, ArgTypes_63, &ArgSubst_44);
              OoMConstructors_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu_36, (MR_Integer) 0))));
              Constructors_46 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMConstructors_45);
              check_hlds__inst_mode_type_prop__propagate_subst_type_ctor_into_bound_insts_7_p_0(ModuleInfo_5, ArgSubst_44, TypeCtor_32, TypeModule_29, Constructors_46, BoundInsts0_11, &BoundInsts1_47);
              mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), BoundInsts1_47, &BoundInsts_55);
              PropagatedResult_56 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (TypeCtor_32)));
              check_hlds__inst_mode_type_prop__construct_new_bound_inst_5_p_0(Uniq_9, InstResults0_10, PropagatedResult_56, BoundInsts_55, Inst_8);
            }
          }
          else
            *Inst_8 = Inst0_7;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BuiltinType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_6, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) BuiltinType_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(BuiltinType_12)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  *Inst_8 = Inst0_7;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word BoundInsts_13;

                    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_2[1]), BoundInsts0_11, &BoundInsts_13);
                    check_hlds__inst_mode_type_prop__construct_new_bound_inst_5_p_0(Uniq_9, InstResults0_10, (MR_Word) ((MR_Unsigned) 0U), BoundInsts_13, Inst_8);
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              *Inst_8 = Inst0_7;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgTypes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_6, (MR_Integer) 1))));
              MR_Word Var_50;
              MR_Word BoundInsts_52;

              {
                Var_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&check_hlds__inst_mode_type_prop_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (check_hlds__inst_mode_type_prop__propagate_type_into_bound_inst_4_p_0_2));
                MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (ModuleInfo_5));
                MR_hl_field(MR_mktag(0), Var_50, 4) = ((MR_Box) (ArgTypes_16));
              }
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), Var_50, BoundInsts0_11, &BoundInsts_52);
              check_hlds__inst_mode_type_prop__construct_new_bound_inst_5_p_0(Uniq_9, InstResults0_10, (MR_Word) ((MR_Unsigned) 0U), BoundInsts_52, Inst_8);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *Inst_8 = Inst0_7;
            break;
          case (MR_Integer) 3:
            {
              MR_Word KindedType_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_6, (MR_Integer) 1))));
              MR_Word next_value_of_Type_6 = KindedType_48;

              // direct tailcall eliminated
              ;
              Type_6 = next_value_of_Type_6;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_subst_type_ctor_into_bound_insts_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Subst_2,
  MR_Word TypeCtor_3,
  MR_Word TypeModule_4,
  MR_Word Constructors_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word BoundInst0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word BoundInsts0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word BoundInst_20;
      MR_Word BoundInsts_21;
      MR_Word ConsId0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst0_18, (MR_Integer) 0))));
      MR_Word ArgInsts0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst0_18, (MR_Integer) 1))));
      MR_Word ConsId_27;
      MR_String Name_24;
      MR_Integer ConsArity_25;
      MR_Word Var_40;
      MR_Word MatchingConstructor_31;
      MR_Word ConsName_28;
      MR_Integer Arity_29;

      succeeded = ((((MR_tag((MR_Word) ConsId0_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId0_22, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId0_22, (MR_Integer) 1))));
        ConsArity_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId0_22, (MR_Integer) 2))));
        succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_Integer) 0);
        if (succeeded)
          Name_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word Var_41;

        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (TypeModule_4));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Name_24));
        }
        {
          ConsId_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConsId_27, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), ConsId_27, 1) = ((MR_Box) (Var_41));
          MR_hl_field(MR_mktag(3), ConsId_27, 2) = ((MR_Box) (ConsArity_25));
          MR_hl_field(MR_mktag(3), ConsId_27, 3) = ((MR_Box) (TypeCtor_3));
        }
      }
      else
        ConsId_27 = ConsId0_22;
      succeeded = ((((MR_tag((MR_Word) ConsId_27)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_27, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        ConsName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_27, (MR_Integer) 1))));
        Arity_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_27, (MR_Integer) 2))));
        succeeded = check_hlds__inst_mode_type_prop__find_first_matching_constructor_4_p_0(ConsName_28, Arity_29, Constructors_5, &MatchingConstructor_31);
      }
      if (succeeded)
      {
        MR_Word Args_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MatchingConstructor_31, (MR_Integer) 3))));
        MR_Word ArgTypes_38;
        MR_Word ArgInsts_39;

        check_hlds__inst_mode_type_prop__get_constructor_arg_types_2_p_0(Args_35, &ArgTypes_38);
        check_hlds__inst_mode_type_prop__propagate_subst_types_into_insts_5_p_0(ModuleInfo_1, Subst_2, ArgTypes_38, ArgInsts0_23, &ArgInsts_39);
        {
          BoundInst_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), BoundInst_20, 0) = ((MR_Box) (ConsId_27));
          MR_hl_field(MR_mktag(0), BoundInst_20, 1) = ((MR_Box) (ArgInsts_39));
        }
      }
      else
        {
          BoundInst_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), BoundInst_20, 0) = ((MR_Box) (ConsId_27));
          MR_hl_field(MR_mktag(0), BoundInst_20, 1) = ((MR_Box) (ArgInsts0_23));
        }
      check_hlds__inst_mode_type_prop__propagate_subst_type_ctor_into_bound_insts_7_p_0(ModuleInfo_1, Subst_2, TypeCtor_3, TypeModule_4, Constructors_5, BoundInsts0_19, &BoundInsts_21);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__7_7 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BoundInst_20));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BoundInsts_21));
      }
    }
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__default_higher_order_func_inst_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PredArgTypes_5,
  MR_Word * PredInstInfo_6)
{
  {
    MR_Integer NumPredArgs_10;
    MR_Integer NumFuncArgs_11;
    MR_Word FuncArgModes_12;
    MR_Word PredArgModes0_14;
    MR_Word PredArgModes_15;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), PredArgTypes_5, &NumPredArgs_10);
    NumFuncArgs_11 = (MR_Integer) ((MR_Unsigned) NumPredArgs_10 - (MR_Unsigned) 1);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumFuncArgs_11, ((MR_Box) (&check_hlds__inst_mode_type_prop_scalar_common_1[3])), &FuncArgModes_12);
    mercury__list__append_3_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), FuncArgModes_12, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__inst_mode_type_prop_scalar_common_1[4])), &PredArgModes0_14);
    check_hlds__inst_mode_type_prop__propagate_types_into_modes_4_p_0(ModuleInfo_4, PredArgTypes_5, PredArgModes0_14, &PredArgModes_15);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *PredInstInfo_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PredArgModes_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_subst_types_into_insts_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Subst_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_mode_type_prop.propagate_subst_types_into_insts\'/5", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_mode_type_prop.propagate_subst_types_into_insts\'/5", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word Inst0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
        MR_Word Insts0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
        MR_Word Inst_26;
        MR_Word Insts_27;
        MR_Word Type_35;

        check_hlds__inst_mode_type_prop__apply_type_subst_3_p_0(Var_29, Subst_2, &Type_35);
        succeeded = mercury__builtin__semidet_fail_0_p_0();
        if (succeeded)
        {
          MR_Word Constructors_36;

          succeeded = check_hlds__type_util__type_constructors_3_p_0(ModuleInfo_1, Type_35, &Constructors_36);
          if (succeeded)
            check_hlds__inst_mode_type_prop__propagate_type_into_inst_eagerly_5_p_0(ModuleInfo_1, Type_35, Constructors_36, Inst0_24, &Inst_26);
          else
            Inst_26 = Inst0_24;
        }
        else
          check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_4_p_0(ModuleInfo_1, Type_35, Inst0_24, &Inst_26);
        check_hlds__inst_mode_type_prop__propagate_subst_types_into_insts_5_p_0(ModuleInfo_1, Subst_2, Var_28, Insts0_25, &Insts_27);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_26));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_27));
        }
      }
    }
  }
}

void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_types_into_modes_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_mode_type_prop.propagate_types_into_modes\'/4", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_mode_type_prop.propagate_types_into_modes\'/4", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word Mode0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Modes0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Mode_21;
      MR_Word Modes_22;
      MR_Word InitialInst0_29;
      MR_Word FinalInst0_30;
      MR_Word InitialInst_31;
      MR_Word FinalInst_32;

      check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_1, Mode0_19, &InitialInst0_29, &FinalInst0_30);
      check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_4_p_0(ModuleInfo_1, Var_24, InitialInst0_29, &InitialInst_31);
      check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_4_p_0(ModuleInfo_1, Var_24, FinalInst0_30, &FinalInst_32);
      {
        Mode_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Mode_21, 0) = ((MR_Box) (InitialInst_31));
        MR_hl_field(MR_mktag(0), Mode_21, 1) = ((MR_Box) (FinalInst_32));
      }
      check_hlds__inst_mode_type_prop__propagate_types_into_modes_4_p_0(ModuleInfo_1, Var_23, Modes0_20, &Modes_22);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Mode_21));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Modes_22));
      }
    }
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__get_constructor_arg_types_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Arg_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Args_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgType_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_3, (MR_Integer) 1))));
    MR_Word ArgTypes_6;

    check_hlds__inst_mode_type_prop__get_constructor_arg_types_2_p_0(Args_4, &ArgTypes_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgType_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgTypes_6));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop__find_first_matching_constructor_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Ctor_10;
    MR_Word Ctors_11;
    MR_Word Var_17;
    MR_Integer Var_18;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Ctor_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      Ctors_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 2))));
      Var_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 4))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(HeadVar__1_1, Var_17);
      if (succeeded)
        succeeded = (HeadVar__2_2 == Var_18);
      if (succeeded)
      {
        *HeadVar__4_4 = Ctor_10;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__3_3 = Ctors_11;

        // direct tailcall eliminated
        ;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__apply_type_subst_3_p_0(
  MR_Word Type0_4,
  MR_Word Subst_5,
  MR_Word * Type_6)
{
  {
    MR_bool succeeded;

    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Subst_5);
    if (succeeded)
      *Type_6 = Type0_4;
    else
      parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(Subst_5, Type0_4, Type_6);
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__construct_new_bound_inst_5_p_0(
  MR_Word Uniq_6,
  MR_Word InstResults0_7,
  MR_Word PropagatedResult_8,
  MR_Word BoundInsts_9,
  MR_Word * Inst_10)
{
  if ((BoundInsts_9 == (MR_Word) ((MR_Unsigned) 0U)))
    *Inst_10 = (MR_Word) ((MR_Unsigned) 4U);
  else
  {
    MR_Word InstResults_13;

    switch (MR_tag((MR_Word) InstResults0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(InstResults0_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              InstResults_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), InstResults_13, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 2)) | (MR_Unsigned) ((MR_Integer) 2)));
              MR_hl_field(MR_mktag(1), InstResults_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), InstResults_13, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), InstResults_13, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), InstResults_13, 4) = ((MR_Box) (PropagatedResult_8));
            }
            break;
          case (MR_Integer) 1:
            InstResults_13 = InstResults0_7;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstResults0_7, (MR_Integer) 0)));

          {
            InstResults_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), InstResults_13, 0) = (MR_Box) (packed_word_0);
            MR_hl_field(MR_mktag(1), InstResults_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), InstResults_13, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), InstResults_13, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), InstResults_13, 4) = ((MR_Box) (PropagatedResult_8));
          }
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      *Inst_10 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_6));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResults_13));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_9));
    }
  }
}

void mercury__check_hlds__inst_mode_type_prop__init(void)
{
}

void mercury__check_hlds__inst_mode_type_prop__init_type_tables(void)
{
}

void mercury__check_hlds__inst_mode_type_prop__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__inst_mode_type_prop__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.inst_mode_type_prop.
