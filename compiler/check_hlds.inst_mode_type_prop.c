/*
** Automatically generated from `inst_mode_type_prop.m'
** by the Mercury compiler,
** version rotd-2021-12-16
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
check_hlds__inst_mode_type_prop__propagate_ctor_info_char_2_p_0(
  MR_Word BoundInst0_3,
  MR_Word * BoundInst_4);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_ctor_info_tuple_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word TupleArgTypes_6,
  MR_Word BoundInst0_7,
  MR_Word * BoundInst_8);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Subst_7,
  MR_Word Type_8,
  MR_Word Inst0_9,
  MR_Word * Inst_10);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_ctor_info_lazily_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Subst_7,
  MR_Word Type0_8,
  MR_Word Inst0_9,
  MR_Word * Inst_10);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_ctor_info_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Type_7,
  MR_Word Constructors_8,
  MR_Word Inst0_9,
  MR_Word * Inst_10);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_ctor_info_into_bound_functors_7_p_0(
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
check_hlds__inst_mode_type_prop__propagate_ctor_info_into_bound_inst_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_ctor_info_into_bound_inst_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_mode_type_prop__apply_type_subst_3_p_0(
  MR_Word Type0_4,
  MR_Word Subst_5,
  MR_Word * Type_6);

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
check_hlds__inst_mode_type_prop__construct_new_bound_inst_5_p_0(
  MR_Word Uniq_6,
  MR_Word InstResults0_7,
  MR_Word PropagatedResult_8,
  MR_Word BoundInsts_9,
  MR_Word * Inst_10);


static /* final */ const MR_Box check_hlds__inst_mode_type_prop_scalar_common_1[5][2];

static /* final */ const MR_Box check_hlds__inst_mode_type_prop_scalar_common_2[2][3];

static /* final */ const MR_Box check_hlds__inst_mode_type_prop_scalar_common_3[1][7];

static /* final */ const MR_Box check_hlds__inst_mode_type_prop_scalar_common_4[1][5];




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
    ((MR_Box) (&check_hlds__inst_mode_type_prop_scalar_common_4[0])),
    ((MR_Box) (check_hlds__inst_mode_type_prop__propagate_ctor_info_into_bound_inst_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__inst_mode_type_prop_scalar_common_3[1][7] = {
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

static /* final */ const MR_Box check_hlds__inst_mode_type_prop_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
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
check_hlds__inst_mode_type_prop__propagate_ctor_info_char_2_p_0(
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
check_hlds__inst_mode_type_prop__propagate_ctor_info_tuple_4_p_0(
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
      check_hlds__inst_mode_type_prop__propagate_types_into_inst_list_5_p_0(ModuleInfo_5, Subst_14, TupleArgTypes_6, ArgInsts0_10, &ArgInsts_15);
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
    MR_Word Subst_11;
    MR_Word InitialInst_12;
    MR_Word FinalInst_13;

    check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_5, Mode0_7, &InitialInst0_9, &FinalInst0_10);
    mercury__map__init_1_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &Subst_11);
    check_hlds__inst_mode_type_prop__propagate_ctor_info_lazily_5_p_0(ModuleInfo_5, Subst_11, Type_6, InitialInst0_9, &InitialInst_12);
    check_hlds__inst_mode_type_prop__propagate_ctor_info_lazily_5_p_0(ModuleInfo_5, Subst_11, Type_6, FinalInst0_10, &FinalInst_13);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Mode_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InitialInst_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FinalInst_13));
    }
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Subst_7,
  MR_Word Type_8,
  MR_Word Inst0_9,
  MR_Word * Inst_10)
{
  check_hlds__inst_mode_type_prop__propagate_ctor_info_lazily_5_p_0(ModuleInfo_6, Subst_7, Type_8, Inst0_9, Inst_10);
}

void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_inst_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Subst_7,
  MR_Word Type0_8,
  MR_Word Inst0_9,
  MR_Word * Inst_10)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__semidet_fail_0_p_0();
    if (succeeded)
    {
      MR_Word Type_11;
      MR_Word Constructors_12;

      succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Subst_7);
      if (succeeded)
        Type_11 = Type0_8;
      else
        parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(Subst_7, Type0_8, &Type_11);
      succeeded = check_hlds__type_util__type_constructors_3_p_0(ModuleInfo_6, Type_11, &Constructors_12);
      if (succeeded)
        check_hlds__inst_mode_type_prop__propagate_ctor_info_5_p_0(ModuleInfo_6, Type_11, Constructors_12, Inst0_9, Inst_10);
      else
        *Inst_10 = Inst0_9;
    }
    else
      check_hlds__inst_mode_type_prop__propagate_ctor_info_lazily_5_p_0(ModuleInfo_6, Subst_7, Type0_8, Inst0_9, Inst_10);
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_ctor_info_lazily_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Subst_7,
  MR_Word Type0_8,
  MR_Word Inst0_9,
  MR_Word * Inst_10)
{
  {
    MR_bool succeeded;

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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_mode_type_prop.propagate_ctor_info_lazily\'/5", (MR_String) "typeinfo already present");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst0_9, (MR_Integer) 1))));
          MR_Word Var_91 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst0_9, (MR_Integer) 0))) & (MR_Integer) 7);

          if ((Var_90 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Type_62;
            MR_Word ArgTypes_59;
            MR_Word Var_87;
            MR_Word Var_18;

            check_hlds__inst_mode_type_prop__apply_type_subst_3_p_0(Type0_8, Subst_7, &Type_62);
            succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_62, &Var_18, &Var_87, &ArgTypes_59);
            if (succeeded)
              succeeded = ((MR_Integer) 1 == Var_87);
            if (succeeded)
            {
              MR_Word Var_50;
              MR_Word HOInstInfo_58;

              check_hlds__inst_mode_type_prop__default_higher_order_func_inst_3_p_0(ModuleInfo_6, ArgTypes_59, &HOInstInfo_58);
              Var_50 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (HOInstInfo_58)));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Inst_10 = base;
                MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Var_91));
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_50));
              }
            }
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Inst_10 = base;
                MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Var_91));
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
          }
          else
          {
            MR_Word Var_45;
            MR_Word Type_71;
            MR_Word PredInstInfo0_73 = (MR_Word) (MR_body((MR_Word) (Var_90), (MR_Integer) 1));
            MR_Word PredOrFunc_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo0_73, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word Modes0_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo0_73, (MR_Integer) 1))));
            MR_Word MaybeArgRegs_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo0_73, (MR_Integer) 2))));
            MR_Word Det_77 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo0_73, (MR_Integer) 3))) & (MR_Integer) 7);
            MR_Word Modes_78;
            MR_Word PredInstInfo_79;
            MR_Word ArgTypes_69;
            MR_Word TypeCtorInfo_84_84;
            MR_Word TypeCtorInfo_85_85;
            MR_Word Var_89;
            MR_Word Var_29;

            check_hlds__inst_mode_type_prop__apply_type_subst_3_p_0(Type0_8, Subst_7, &Type_71);
            succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_71, &Var_29, &Var_89, &ArgTypes_69);
            if (succeeded)
            {
              succeeded = (PredOrFunc_74 == Var_89);
              if (succeeded)
              {
                TypeCtorInfo_84_84 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                TypeCtorInfo_85_85 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
                succeeded = mercury__list__same_length_2_p_0(TypeCtorInfo_84_84, TypeCtorInfo_85_85, ArgTypes_69, Modes0_75);
              }
            }
            if (succeeded)
              check_hlds__inst_mode_type_prop__propagate_types_into_mode_list_4_p_0(ModuleInfo_6, ArgTypes_69, Modes0_75, &Modes_78);
            else
              Modes_78 = Modes0_75;
            {
              PredInstInfo_79 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredInstInfo_79, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_74));
              MR_hl_field(MR_mktag(0), PredInstInfo_79, 1) = ((MR_Box) (Modes_78));
              MR_hl_field(MR_mktag(0), PredInstInfo_79, 2) = ((MR_Box) (MaybeArgRegs_76));
              MR_hl_field(MR_mktag(0), PredInstInfo_79, 3) = (MR_Box) ((MR_Unsigned) (Det_77));
            }
            Var_45 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (PredInstInfo_79)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Inst_10 = base;
              MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Var_91));
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_45));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Type_80;

              check_hlds__inst_mode_type_prop__apply_type_subst_3_p_0(Type0_8, Subst_7, &Type_80);
              check_hlds__inst_mode_type_prop__propagate_ctor_info_into_bound_inst_4_p_0(ModuleInfo_6, Type_80, Inst0_9, Inst_10);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 2))));
              MR_Word Var_93 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 1))) & (MR_Integer) 7);

              if ((Var_92 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Type_13;
                MR_Word ArgTypes_16;
                MR_Word Var_86;
                MR_Word Var_14;

                check_hlds__inst_mode_type_prop__apply_type_subst_3_p_0(Type0_8, Subst_7, &Type_13);
                succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_13, &Var_14, &Var_86, &ArgTypes_16);
                if (succeeded)
                  succeeded = ((MR_Integer) 1 == Var_86);
                if (succeeded)
                {
                  MR_Word HOInstInfo_17;
                  MR_Word Var_54;

                  check_hlds__inst_mode_type_prop__default_higher_order_func_inst_3_p_0(ModuleInfo_6, ArgTypes_16, &HOInstInfo_17);
                  Var_54 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (HOInstInfo_17)));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Var_93));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_54));
                  }
                }
                else
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Var_93));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
              }
              else
              {
                MR_Word PredInstInfo0_20 = (MR_Word) (MR_body((MR_Word) (Var_92), (MR_Integer) 1));
                MR_Word PredOrFunc_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo0_20, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Word Modes0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo0_20, (MR_Integer) 1))));
                MR_Word MaybeArgRegs_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo0_20, (MR_Integer) 2))));
                MR_Word Det_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo0_20, (MR_Integer) 3))) & (MR_Integer) 7);
                MR_Word Modes_27;
                MR_Word PredInstInfo_28;
                MR_Word Var_47;
                MR_Word Type_67;
                MR_Word ArgTypes_65;
                MR_Word TypeCtorInfo_82_82;
                MR_Word TypeCtorInfo_83_83;
                MR_Word Var_88;
                MR_Word Var_25;

                check_hlds__inst_mode_type_prop__apply_type_subst_3_p_0(Type0_8, Subst_7, &Type_67);
                succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_67, &Var_25, &Var_88, &ArgTypes_65);
                if (succeeded)
                {
                  succeeded = (PredOrFunc_21 == Var_88);
                  if (succeeded)
                  {
                    TypeCtorInfo_82_82 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                    TypeCtorInfo_83_83 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
                    succeeded = mercury__list__same_length_2_p_0(TypeCtorInfo_82_82, TypeCtorInfo_83_83, ArgTypes_65, Modes0_22);
                  }
                }
                if (succeeded)
                  check_hlds__inst_mode_type_prop__propagate_types_into_mode_list_4_p_0(ModuleInfo_6, ArgTypes_65, Modes0_22, &Modes_27);
                else
                  Modes_27 = Modes0_22;
                {
                  PredInstInfo_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), PredInstInfo_28, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_21));
                  MR_hl_field(MR_mktag(0), PredInstInfo_28, 1) = ((MR_Box) (Modes_27));
                  MR_hl_field(MR_mktag(0), PredInstInfo_28, 2) = ((MR_Box) (MaybeArgRegs_23));
                  MR_hl_field(MR_mktag(0), PredInstInfo_28, 3) = (MR_Box) ((MR_Unsigned) (Det_24));
                }
                Var_47 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (PredInstInfo_28)));
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_10 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Var_93));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_47));
                }
              }
            }
            break;
          case (MR_Integer) 2:
            *Inst_10 = Inst0_9;
            break;
          case (MR_Integer) 3:
            {
              MR_Word V_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 1))));
              MR_Word SubInst0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 2))));
              MR_Word SubInst_37;

              check_hlds__inst_mode_type_prop__propagate_ctor_info_lazily_5_p_0(ModuleInfo_6, Subst_7, Type0_8, SubInst0_36, &SubInst_37);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (V_35));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubInst_37));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 1))));
              MR_Word InstName_43;
              MR_Word Type_81;

              check_hlds__inst_mode_type_prop__apply_type_subst_3_p_0(Type0_8, Subst_7, &Type_81);
              succeeded = ((((MR_tag((MR_Word) InstName0_40)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstName0_40, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (succeeded)
                InstName_43 = InstName0_40;
              else
                {
                  InstName_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), InstName_43, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), InstName_43, 1) = ((MR_Box) (Type_81));
                  MR_hl_field(MR_mktag(3), InstName_43, 2) = ((MR_Box) (InstName0_40));
                }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Inst_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (InstName_43));
              }
            }
            break;
          case (MR_Integer) 5:
            *Inst_10 = Inst0_9;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_ctor_info_5_p_0(
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_mode_type_prop.propagate_ctor_info\'/5", (MR_String) "type info already present");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst0_9, (MR_Integer) 1))));
          MR_Word Var_121 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst0_9, (MR_Integer) 0))) & (MR_Integer) 7);

          if ((Var_120 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word ArgTypes_79;
            MR_Word Var_117;
            MR_Word Var_21;

            succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_7, &Var_21, &Var_117, &ArgTypes_79);
            if (succeeded)
              succeeded = ((MR_Integer) 1 == Var_117);
            if (succeeded)
            {
              MR_Word PredInstInfo_23;
              MR_Word Var_51;

              check_hlds__inst_mode_type_prop__default_higher_order_func_inst_3_p_0(ModuleInfo_6, ArgTypes_79, &PredInstInfo_23);
              Var_51 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (PredInstInfo_23)));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Inst_10 = base;
                MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Var_121));
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_51));
              }
            }
            else
            {
              MR_Word Var_54;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Word Var_57;
              MR_Word Var_58;
              MR_Word Var_59;
              MR_Word Var_60;
              MR_Word TypeCtor_75;
              MR_Word BoundInsts0_76;
              MR_Word BoundInsts_77;
              MR_Word InstResults_78;

              parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_7, &TypeCtor_75);
              check_hlds__mode_util__constructors_to_bound_any_insts_5_p_0(ModuleInfo_6, Var_121, TypeCtor_75, Constructors_8, &BoundInsts0_76);
              mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), BoundInsts0_76, &BoundInsts_77);
              Var_55 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
              {
                Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
              }
              Var_57 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[1]));
              {
                Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
              }
              Var_59 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
              {
                Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
              }
              Var_60 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (TypeCtor_75)));
              {
                InstResults_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), InstResults_78, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 2)) | (MR_Unsigned) ((MR_Integer) 2)));
                MR_hl_field(MR_mktag(1), InstResults_78, 1) = ((MR_Box) (Var_54));
                MR_hl_field(MR_mktag(1), InstResults_78, 2) = ((MR_Box) (Var_56));
                MR_hl_field(MR_mktag(1), InstResults_78, 3) = ((MR_Box) (Var_58));
                MR_hl_field(MR_mktag(1), InstResults_78, 4) = ((MR_Box) (Var_60));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Inst_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Var_121));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResults_78));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_77));
              }
            }
          }
          else
          {
            MR_Word Var_46;
            MR_Word PredInstInfo_97;
            MR_Word PredInstInfo0_98 = (MR_Word) (MR_body((MR_Word) (Var_120), (MR_Integer) 1));
            MR_Word PredOrFunc_99 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo0_98, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word Modes0_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo0_98, (MR_Integer) 1))));
            MR_Word MaybeArgRegs_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo0_98, (MR_Integer) 2))));
            MR_Word Det_102 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo0_98, (MR_Integer) 3))) & (MR_Integer) 7);
            MR_Word Modes_103;
            MR_Word ArgTypes_94;
            MR_Word TypeCtorInfo_114_114;
            MR_Word TypeCtorInfo_115_115;
            MR_Word Var_119;
            MR_Word Var_32;

            succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_7, &Var_32, &Var_119, &ArgTypes_94);
            if (succeeded)
            {
              succeeded = (PredOrFunc_99 == Var_119);
              if (succeeded)
              {
                TypeCtorInfo_114_114 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                TypeCtorInfo_115_115 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
                succeeded = mercury__list__same_length_2_p_0(TypeCtorInfo_114_114, TypeCtorInfo_115_115, ArgTypes_94, Modes0_100);
              }
            }
            if (succeeded)
              check_hlds__inst_mode_type_prop__propagate_types_into_mode_list_4_p_0(ModuleInfo_6, ArgTypes_94, Modes0_100, &Modes_103);
            else
              Modes_103 = Modes0_100;
            {
              PredInstInfo_97 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredInstInfo_97, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_99));
              MR_hl_field(MR_mktag(0), PredInstInfo_97, 1) = ((MR_Box) (Modes_103));
              MR_hl_field(MR_mktag(0), PredInstInfo_97, 2) = ((MR_Box) (MaybeArgRegs_101));
              MR_hl_field(MR_mktag(0), PredInstInfo_97, 3) = (MR_Box) ((MR_Unsigned) (Det_102));
            }
            Var_46 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (PredInstInfo_97)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Inst_10 = base;
              MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Var_121));
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_46));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            check_hlds__inst_mode_type_prop__propagate_ctor_info_into_bound_inst_4_p_0(ModuleInfo_6, Type_7, Inst0_9, Inst_10);
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 2))));
              MR_Word Var_123 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 1))) & (MR_Integer) 7);

              if ((Var_122 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word ArgTypes_15;
                MR_Word Var_116;
                MR_Word Var_13;

                succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_7, &Var_13, &Var_116, &ArgTypes_15);
                if (succeeded)
                  succeeded = ((MR_Integer) 1 == Var_116);
                if (succeeded)
                {
                  MR_Word HigherOrderInstInfo_16;
                  MR_Word Var_63;

                  check_hlds__inst_mode_type_prop__default_higher_order_func_inst_3_p_0(ModuleInfo_6, ArgTypes_15, &HigherOrderInstInfo_16);
                  Var_63 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (HigherOrderInstInfo_16)));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Var_123));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_63));
                  }
                }
                else
                {
                  MR_Word TypeCtor_17;
                  MR_Word BoundInsts0_18;
                  MR_Word BoundInsts_19;
                  MR_Word InstResults_20;
                  MR_Word Var_66;
                  MR_Word Var_67;
                  MR_Word Var_68;
                  MR_Word Var_69;
                  MR_Word Var_70;
                  MR_Word Var_71;
                  MR_Word Var_72;

                  parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_7, &TypeCtor_17);
                  check_hlds__mode_util__constructors_to_bound_insts_5_p_0(ModuleInfo_6, Var_123, TypeCtor_17, Constructors_8, &BoundInsts0_18);
                  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), BoundInsts0_18, &BoundInsts_19);
                  Var_67 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
                  {
                    Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
                  }
                  Var_69 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[1]));
                  {
                    Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
                  }
                  Var_71 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
                  {
                    Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
                  }
                  Var_72 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (TypeCtor_17)));
                  {
                    InstResults_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), InstResults_20, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 0)));
                    MR_hl_field(MR_mktag(1), InstResults_20, 1) = ((MR_Box) (Var_66));
                    MR_hl_field(MR_mktag(1), InstResults_20, 2) = ((MR_Box) (Var_68));
                    MR_hl_field(MR_mktag(1), InstResults_20, 3) = ((MR_Box) (Var_70));
                    MR_hl_field(MR_mktag(1), InstResults_20, 4) = ((MR_Box) (Var_72));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Var_123));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResults_20));
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_19));
                  }
                }
              }
              else
              {
                MR_Word PredInstInfo0_24 = (MR_Word) (MR_body((MR_Word) (Var_122), (MR_Integer) 1));
                MR_Word PredOrFunc_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo0_24, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Word Modes0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo0_24, (MR_Integer) 1))));
                MR_Word MaybeArgRegs_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo0_24, (MR_Integer) 2))));
                MR_Word Det_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo0_24, (MR_Integer) 3))) & (MR_Integer) 7);
                MR_Word Modes_31;
                MR_Word Var_48;
                MR_Word PredInstInfo_93;
                MR_Word ArgTypes_90;
                MR_Word TypeCtorInfo_112_112;
                MR_Word TypeCtorInfo_113_113;
                MR_Word Var_118;
                MR_Word Var_29;

                succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_7, &Var_29, &Var_118, &ArgTypes_90);
                if (succeeded)
                {
                  succeeded = (PredOrFunc_25 == Var_118);
                  if (succeeded)
                  {
                    TypeCtorInfo_112_112 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                    TypeCtorInfo_113_113 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
                    succeeded = mercury__list__same_length_2_p_0(TypeCtorInfo_112_112, TypeCtorInfo_113_113, ArgTypes_90, Modes0_26);
                  }
                }
                if (succeeded)
                  check_hlds__inst_mode_type_prop__propagate_types_into_mode_list_4_p_0(ModuleInfo_6, ArgTypes_90, Modes0_26, &Modes_31);
                else
                  Modes_31 = Modes0_26;
                {
                  PredInstInfo_93 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), PredInstInfo_93, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_25));
                  MR_hl_field(MR_mktag(0), PredInstInfo_93, 1) = ((MR_Box) (Modes_31));
                  MR_hl_field(MR_mktag(0), PredInstInfo_93, 2) = ((MR_Box) (MaybeArgRegs_27));
                  MR_hl_field(MR_mktag(0), PredInstInfo_93, 3) = (MR_Box) ((MR_Unsigned) (Det_28));
                }
                Var_48 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (PredInstInfo_93)));
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_10 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Var_123));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_48));
                }
              }
            }
            break;
          case (MR_Integer) 2:
            *Inst_10 = Inst0_9;
            break;
          case (MR_Integer) 3:
            {
              MR_Word V_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 1))));
              MR_Word SubInst0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 2))));
              MR_Word SubInst_40;

              check_hlds__inst_mode_type_prop__propagate_ctor_info_5_p_0(ModuleInfo_6, Type_7, Constructors_8, SubInst0_39, &SubInst_40);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (V_38));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubInst_40));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 1))));
              MR_Word NamedInst_44;
              MR_Word next_value_of_Inst0_9;

              check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_6, InstName_43, &NamedInst_44);
              // direct tailcall eliminated
              ;
              next_value_of_Inst0_9 = NamedInst_44;
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
check_hlds__inst_mode_type_prop__propagate_ctor_info_into_bound_functors_7_p_0(
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
        check_hlds__inst_mode_type_prop__propagate_types_into_inst_list_5_p_0(ModuleInfo_1, Subst_2, ArgTypes_38, ArgInsts0_23, &ArgInsts_39);
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
      check_hlds__inst_mode_type_prop__propagate_ctor_info_into_bound_functors_7_p_0(ModuleInfo_1, Subst_2, TypeCtor_3, TypeModule_4, Constructors_5, BoundInsts0_19, &BoundInsts_21);
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
    check_hlds__inst_mode_type_prop__propagate_types_into_mode_list_4_p_0(ModuleInfo_4, PredArgTypes_5, PredArgModes0_14, &PredArgModes_15);
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

void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_types_into_mode_list_4_p_0(
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_mode_type_prop.propagate_types_into_mode_list\'/4", (MR_String) "length mismatch");
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_mode_type_prop.propagate_types_into_mode_list\'/4", (MR_String) "length mismatch");
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
      MR_Word Subst_31;
      MR_Word InitialInst_32;
      MR_Word FinalInst_33;

      check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_1, Mode0_19, &InitialInst0_29, &FinalInst0_30);
      mercury__map__init_1_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &Subst_31);
      check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_5_p_0(ModuleInfo_1, Subst_31, Var_24, InitialInst0_29, &InitialInst_32);
      check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_5_p_0(ModuleInfo_1, Subst_31, Var_24, FinalInst0_30, &FinalInst_33);
      {
        Mode_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Mode_21, 0) = ((MR_Box) (InitialInst_32));
        MR_hl_field(MR_mktag(0), Mode_21, 1) = ((MR_Box) (FinalInst_33));
      }
      check_hlds__inst_mode_type_prop__propagate_types_into_mode_list_4_p_0(ModuleInfo_1, Var_23, Modes0_20, &Modes_22);
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
check_hlds__inst_mode_type_prop__propagate_ctor_info_into_bound_inst_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_BoundInst_4;

    check_hlds__inst_mode_type_prop__propagate_ctor_info_char_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_BoundInst_4);
    *wrapper_arg_2 = ((MR_Box) (conv1_BoundInst_4));
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_ctor_info_into_bound_inst_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_BoundInst_8;

    check_hlds__inst_mode_type_prop__propagate_ctor_info_tuple_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_BoundInst_8);
    *wrapper_arg_2 = ((MR_Box) (conv0_BoundInst_8));
  }
}

void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_ctor_info_into_bound_inst_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word Inst0_7,
  MR_Word * Inst_8)
{
  {
    MR_bool succeeded;
    MR_Word Uniq_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_7, (MR_Integer) 1))) & (MR_Integer) 7);
    MR_Word InstResults0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_7, (MR_Integer) 2))));
    MR_Word BoundInsts0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_7, (MR_Integer) 3))));
    MR_Word TypeCtor_12;
    MR_Word TypeArgs_13;
    MR_Word TypeModule_14;
    MR_Word TypeParams_19;
    MR_Word OoMConstructors_22;
    MR_Word TypeTable_17;
    MR_Word TypeDefn_18;
    MR_Word TypeBody_20;
    MR_Word TypeBodyDu_21;
    MR_Word Var_36;

    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_6, &TypeCtor_12, &TypeArgs_13);
    if (succeeded)
    {
      Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_12, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_36)) == (MR_Integer) 1);
      if (succeeded)
      {
        TypeModule_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_36, (MR_Integer) 0))));
        hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_5, &TypeTable_17);
        succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_17, TypeCtor_12, &TypeDefn_18);
        if (succeeded)
        {
          hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_18, &TypeParams_19);
          hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_18, &TypeBody_20);
          succeeded = ((MR_tag((MR_Word) TypeBody_20)) == (MR_Integer) 0);
          if (succeeded)
          {
            TypeBodyDu_21 = (MR_Word) ((MR_Word) (TypeBody_20));
            OoMConstructors_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu_21, (MR_Integer) 0))));
            succeeded = MR_TRUE;
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word PropagatedResult0_28;
      MR_Word PropagatedTypeCtor0_29;

      succeeded = ((MR_tag((MR_Word) InstResults0_10)) == (MR_Integer) 1);
      if (succeeded)
      {
        PropagatedResult0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstResults0_10, (MR_Integer) 4))));
        succeeded = (PropagatedResult0_28 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          PropagatedTypeCtor0_29 = (MR_Word) (MR_body((MR_Word) (PropagatedResult0_28), (MR_Integer) 1));
          succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(PropagatedTypeCtor0_29, TypeCtor_12);
          if (succeeded)
            succeeded = (TypeParams_19 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
      if (succeeded)
        *Inst_8 = Inst0_7;
      else
      {
        MR_Word ArgSubst_30;
        MR_Word Constructors_31;
        MR_Word BoundInsts1_32;
        MR_Word BoundInsts_33;
        MR_Word PropagatedResult_34;

        mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_19, TypeArgs_13, &ArgSubst_30);
        Constructors_31 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMConstructors_22);
        check_hlds__inst_mode_type_prop__propagate_ctor_info_into_bound_functors_7_p_0(ModuleInfo_5, ArgSubst_30, TypeCtor_12, TypeModule_14, Constructors_31, BoundInsts0_11, &BoundInsts1_32);
        mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), BoundInsts1_32, &BoundInsts_33);
        PropagatedResult_34 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (TypeCtor_12)));
        if ((BoundInsts_33 == (MR_Word) ((MR_Unsigned) 0U)))
          *Inst_8 = (MR_Word) ((MR_Unsigned) 4U);
        else
        {
          MR_Word InstResults_70;

          switch (MR_tag((MR_Word) InstResults0_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(InstResults0_10)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    InstResults_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), InstResults_70, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 2)) | (MR_Unsigned) ((MR_Integer) 2)));
                    MR_hl_field(MR_mktag(1), InstResults_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(1), InstResults_70, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(1), InstResults_70, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(1), InstResults_70, 4) = ((MR_Box) (PropagatedResult_34));
                  }
                  break;
                case (MR_Integer) 1:
                  InstResults_70 = InstResults0_10;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstResults0_10, (MR_Integer) 0)));

                {
                  InstResults_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), InstResults_70, 0) = (MR_Box) (packed_word_2);
                  MR_hl_field(MR_mktag(1), InstResults_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), InstResults_70, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), InstResults_70, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), InstResults_70, 4) = ((MR_Box) (PropagatedResult_34));
                }
              }
              break;
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *Inst_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_9));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResults_70));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_33));
          }
        }
      }
    }
    else
    {
      MR_Word TupleArgTypes_35;

      succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(Type_6, &TupleArgTypes_35);
      if (succeeded)
      {
        MR_Word Var_37;
        MR_Word BoundInsts_40;

        {
          Var_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&check_hlds__inst_mode_type_prop_scalar_common_3[0]));
          MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (check_hlds__inst_mode_type_prop__propagate_ctor_info_into_bound_inst_4_p_0_1));
          MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (ModuleInfo_5));
          MR_hl_field(MR_mktag(0), Var_37, 4) = ((MR_Box) (TupleArgTypes_35));
        }
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), Var_37, BoundInsts0_11, &BoundInsts_40);
        check_hlds__inst_mode_type_prop__construct_new_bound_inst_5_p_0(Uniq_9, InstResults0_10, (MR_Word) ((MR_Unsigned) 0U), BoundInsts_40, Inst_8);
      }
      else
      {
        MR_Word Var_38;

        succeeded = ((MR_tag((MR_Word) Type_6)) == (MR_Integer) 2);
        if (succeeded)
        {
          Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_6, (MR_Integer) 0))));
          succeeded = (Var_38 == (MR_Word) ((MR_Unsigned) 8U));
        }
        if (succeeded)
        {
          MR_Word BoundInsts_42;

          mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_2[1]), BoundInsts0_11, &BoundInsts_42);
          check_hlds__inst_mode_type_prop__construct_new_bound_inst_5_p_0(Uniq_9, InstResults0_10, (MR_Word) ((MR_Unsigned) 0U), BoundInsts_42, Inst_8);
        }
        else
          *Inst_8 = Inst0_7;
      }
    }
  }
}

void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_types_into_inst_list_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Subst_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_mode_type_prop.propagate_types_into_inst_list\'/5", (MR_String) "length mismatch");
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_mode_type_prop.propagate_types_into_inst_list\'/5", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word Inst0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Insts0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Inst_26;
      MR_Word Insts_27;

      check_hlds__inst_mode_type_prop__propagate_type_into_inst_5_p_0(ModuleInfo_1, Subst_2, Var_29, Inst0_24, &Inst_26);
      check_hlds__inst_mode_type_prop__propagate_types_into_inst_list_5_p_0(ModuleInfo_1, Subst_2, Var_28, Insts0_25, &Insts_27);
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
