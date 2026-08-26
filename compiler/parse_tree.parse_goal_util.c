/*
** Automatically generated from `parse_goal_util.m'
** by the Mercury compiler,
** version rotd-2026-08-26
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


// :- module parse_tree.parse_goal_util.
// :- implementation.

/*
INIT mercury__parse_tree__parse_goal_util__init
ENDINIT
*/

#include "parse_tree.parse_goal_util.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.options.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_rare.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_inst_mode.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_pred_proc_id.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "string.builder.mih"




static const MR_FA_TypeInfo_Struct1 parse_tree__parse_goal_util__list__ti_list_1parse_tree__error_spec__type_ctor_info_warn_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_goal_util__one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0;

static const MR_VA_TypeInfo_Struct2 parse_tree__parse_goal_util____vti_tuple_2one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0list__ti_list_1parse_tree__error_spec__type_ctor_info_warn_spec_0;

static const MR_FA_TypeInfo_Struct3 parse_tree__parse_goal_util__parse_tree__maybe_error__ti_maybe2_3parse_tree__prog_item__type_ctor_info_goal_0list__ti_list_1parse_tree__error_spec__type_ctor_info_warn_spec_0__vti_tuple_2one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0list__ti_list_1parse_tree__error_spec__type_ctor_info_warn_spec_0;

static MR_Word MR_CALL 
parse_tree__parse_goal_util__bad_purity_goal_3_f_0(
  MR_Word GoalTerm0_5,
  MR_Word Context_6,
  MR_Word Purity_7);

static MR_bool MR_CALL 
parse_tree__parse_goal_util____Unify____goal_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_goal_util____Compare____goal_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_goal_util_scalar_common_1[31][2];

static /* final */ const MR_Box parse_tree__parse_goal_util_scalar_common_2[2][4];




static /* final */ const MR_Box parse_tree__parse_goal_util_scalar_common_1[31][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_util_scalar_common_1[2]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_util_scalar_common_1[3])))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should have no arguments."))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_util_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the prefix operator"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_util_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_util_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_util_scalar_common_1[9])))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_util_scalar_common_1[10])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should precede a single goal."))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_util_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the infix operator"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_util_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_util_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_util_scalar_common_1[15])))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_util_scalar_common_1[16])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should have two terms as arguments."))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_util_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should have two goals as arguments."))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_util_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the binary prefix operator"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_util_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_util_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_util_scalar_common_1[23])))
  },
  /* row  25 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_util_scalar_common_1[24])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should precede"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and a goal."))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_util_scalar_common_1[27]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should precede a call."))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_util_scalar_common_1[29]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__parse_goal_util_scalar_common_2[2][4] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_goal_util_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__parse_goal_util_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0)),
    ((MR_Box) (&parse_tree__parse_goal_util_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__parse_goal_util_scalar_common_2[0]))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 parse_tree__parse_goal_util__list__ti_list_1parse_tree__error_spec__type_ctor_info_warn_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_goal_util__one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0) }
};

static const MR_VA_TypeInfo_Struct2 parse_tree__parse_goal_util____vti_tuple_2one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0list__ti_list_1parse_tree__error_spec__type_ctor_info_warn_spec_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) (&parse_tree__parse_goal_util__one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0),
    (MR_TypeInfo) (&parse_tree__parse_goal_util__list__ti_list_1parse_tree__error_spec__type_ctor_info_warn_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct3 parse_tree__parse_goal_util__parse_tree__maybe_error__ti_maybe2_3parse_tree__prog_item__type_ctor_info_goal_0list__ti_list_1parse_tree__error_spec__type_ctor_info_warn_spec_0__vti_tuple_2one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0list__ti_list_1parse_tree__error_spec__type_ctor_info_warn_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_3,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0),
    (MR_TypeInfo) (&parse_tree__parse_goal_util__list__ti_list_1parse_tree__error_spec__type_ctor_info_warn_spec_0),
    (MR_TypeInfo) (&parse_tree__parse_goal_util____vti_tuple_2one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0list__ti_list_1parse_tree__error_spec__type_ctor_info_warn_spec_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__parse_goal_util__parse_tree__parse_goal_util__type_ctor_info_goal_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__parse_goal_util____Unify____goal_result_0_0_10001)),
  ((MR_Box) (parse_tree__parse_goal_util____Compare____goal_result_0_0_10001)),
  (MR_String) "parse_tree.parse_goal_util",
  (MR_String) "goal_result",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__parse_goal_util__parse_tree__maybe_error__ti_maybe2_3parse_tree__prog_item__type_ctor_info_goal_0list__ti_list_1parse_tree__error_spec__type_ctor_info_warn_spec_0__vti_tuple_2one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0list__ti_list_1parse_tree__error_spec__type_ctor_info_warn_spec_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
parse_tree__parse_goal_util____Compare____goal_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_goal_util_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__parse_goal_util____Unify____goal_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_goal_util_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__parse_goal_util__apply_purity_marker_to_maybe_goal_4_p_0(
  MR_Word GoalTerm_5,
  MR_Word Purity_6,
  MR_Word MaybeGoal0_7,
  MR_Word * MaybeGoal_8)
{
  if (((MR_tag((MR_Word) MaybeGoal0_7)) == (MR_Integer) 0))
    *MaybeGoal_8 = MaybeGoal0_7;
  else
  {
    MR_Word Goal0_9 = ((MR_Word) ((MR_hl_field(1, MaybeGoal0_7, 0))));
    MR_Word WarningSpecs0_10 = ((MR_Word) ((MR_hl_field(1, MaybeGoal0_7, 1))));
    MR_Word Goal_15;

    switch (MR_tag((MR_Word) Goal0_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ProgTerm1_16 = ((MR_Word) ((MR_hl_field(0, Goal0_9, 1))));
          MR_Word ProgTerm2_17 = ((MR_Word) ((MR_hl_field(0, Goal0_9, 2))));
          MR_Word Context_108 = ((MR_Word) ((MR_hl_field(0, Goal0_9, 0))));
          MR_Word Purity0_109 = ((MR_Unsigned) ((MR_hl_field(0, Goal0_9, 3))) & (MR_Integer) 3);

          switch (Purity0_109) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              Goal_15 = parse_tree__parse_goal_util__bad_purity_goal_3_f_0(GoalTerm_5, Context_108, Purity_6);
              break;
            case (MR_Integer) 0:
              {
                Goal_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Goal_15, 0) = ((MR_Box) (Context_108));
                MR_hl_field(0, Goal_15, 1) = ((MR_Box) (ProgTerm1_16));
                MR_hl_field(0, Goal_15, 2) = ((MR_Box) (ProgTerm2_17));
                MR_hl_field(0, Goal_15, 3) = (MR_Box) ((MR_Unsigned) (Purity_6));
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Context_11 = ((MR_Word) ((MR_hl_field(1, Goal0_9, 0))));
          MR_Word Pred_12 = ((MR_Word) ((MR_hl_field(1, Goal0_9, 1))));
          MR_Word Args_13 = ((MR_Word) ((MR_hl_field(1, Goal0_9, 2))));
          MR_Word Purity0_14 = ((MR_Unsigned) ((MR_hl_field(1, Goal0_9, 3))) & (MR_Integer) 3);

          switch (Purity0_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              Goal_15 = parse_tree__parse_goal_util__bad_purity_goal_3_f_0(GoalTerm_5, Context_11, Purity_6);
              break;
            case (MR_Integer) 0:
              {
                Goal_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Goal_15, 0) = ((MR_Box) (Context_11));
                MR_hl_field(1, Goal_15, 1) = ((MR_Box) (Pred_12));
                MR_hl_field(1, Goal_15, 2) = ((MR_Box) (Args_13));
                MR_hl_field(1, Goal_15, 3) = (MR_Box) ((MR_Unsigned) (Purity_6));
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          MR_Word Var_107;

          Var_107 = parse_tree__prog_item__get_goal_context_1_f_0(Goal0_9);
          Goal_15 = parse_tree__parse_goal_util__bad_purity_goal_3_f_0(GoalTerm_5, Var_107, Purity_6);
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MaybeGoal_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (WarningSpecs0_10));
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_goal_util__bad_purity_goal_3_f_0(
  MR_Word GoalTerm0_5,
  MR_Word Context_6,
  MR_Word Purity_7)
{
  MR_Word Goal_8;
  MR_Word GoalTerm_9;
  MR_String PurityString_10;
  MR_Word Var_11;
  MR_Word Var_12;

  mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalTerm0_5, &GoalTerm_9);
  parse_tree__parse_tree_out_misc__purity_name_2_p_0(Purity_7, &PurityString_10);
  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (PurityString_10));
  }
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (GoalTerm_9));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Goal_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Goal_8, 0) = ((MR_Box) (Context_6));
    MR_hl_field(1, Goal_8, 1) = ((MR_Box) (Var_11));
    MR_hl_field(1, Goal_8, 2) = ((MR_Box) (Var_12));
    MR_hl_field(1, Goal_8, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  return Goal_8;
}

MR_Word MR_CALL 
parse_tree__parse_goal_util__should_have_one_call_prefix_3_f_0(
  MR_Word ContextPieces_5,
  MR_Word Context_6,
  MR_String Functor_7)
{
  MR_Word Spec_8;
  MR_Word Pieces_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_26;
  MR_Word Var_27;

  Var_10 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_5);
  {
    Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_24, 1) = ((MR_Box) (Functor_7));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_22 = parse_tree__error_spec__color_as_subject_1_f_0(Var_23);
  Var_27 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_util_scalar_common_1[30])));
  Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_util_scalar_common_1[7])));
  Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_22, Var_26);
  Var_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_util_scalar_common_1[11])), Var_21);
  Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_10, Var_11);
  {
    Spec_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_goal_util.should_have_one_call_prefix\'/3"));
    MR_hl_field(0, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 28U));
    MR_hl_field(0, Spec_8, 3) = ((MR_Box) (Context_6));
    MR_hl_field(0, Spec_8, 4) = ((MR_Box) (Pieces_9));
  }
  return Spec_8;
}

MR_Word MR_CALL 
parse_tree__parse_goal_util__should_have_one_x_one_goal_prefix_4_f_0(
  MR_Word ContextPieces_6,
  MR_Word Context_7,
  MR_String X_8,
  MR_String Functor_9)
{
  MR_Word Spec_10;
  MR_Word Pieces_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_33;
  MR_Word Var_34;

  Var_12 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_6);
  {
    Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_26, 1) = ((MR_Box) (Functor_9));
  }
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_26));
    MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_24 = parse_tree__error_spec__color_as_subject_1_f_0(Var_25);
  {
    Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_34, 1) = ((MR_Box) (X_8));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_util_scalar_common_1[28])));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_util_scalar_common_1[26])));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_33));
  }
  Var_29 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_30);
  Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_util_scalar_common_1[7])));
  Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_24, Var_28);
  Var_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_util_scalar_common_1[25])), Var_23);
  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_12, Var_13);
  {
    Spec_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_10, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_goal_util.should_have_one_x_one_goal_prefix\'/4"));
    MR_hl_field(0, Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_10, 2) = ((MR_Box) ((MR_Unsigned) 28U));
    MR_hl_field(0, Spec_10, 3) = ((MR_Box) (Context_7));
    MR_hl_field(0, Spec_10, 4) = ((MR_Box) (Pieces_11));
  }
  return Spec_10;
}

MR_Word MR_CALL 
parse_tree__parse_goal_util__should_have_two_goals_infix_3_f_0(
  MR_Word ContextPieces_5,
  MR_Word Context_6,
  MR_String Functor_7)
{
  MR_Word Spec_8;
  MR_Word Pieces_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_26;
  MR_Word Var_27;

  Var_10 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_5);
  {
    Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_24, 1) = ((MR_Box) (Functor_7));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_22 = parse_tree__error_spec__color_as_subject_1_f_0(Var_23);
  Var_27 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_util_scalar_common_1[21])));
  Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_util_scalar_common_1[7])));
  Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_22, Var_26);
  Var_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_util_scalar_common_1[17])), Var_21);
  Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_10, Var_11);
  {
    Spec_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_goal_util.should_have_two_goals_infix\'/3"));
    MR_hl_field(0, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 28U));
    MR_hl_field(0, Spec_8, 3) = ((MR_Box) (Context_6));
    MR_hl_field(0, Spec_8, 4) = ((MR_Box) (Pieces_9));
  }
  return Spec_8;
}

MR_Word MR_CALL 
parse_tree__parse_goal_util__should_have_two_terms_infix_3_f_0(
  MR_Word ContextPieces_5,
  MR_Word Context_6,
  MR_String Functor_7)
{
  MR_Word Spec_8;
  MR_Word Pieces_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_26;
  MR_Word Var_27;

  Var_10 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_5);
  {
    Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_24, 1) = ((MR_Box) (Functor_7));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_22 = parse_tree__error_spec__color_as_subject_1_f_0(Var_23);
  Var_27 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_util_scalar_common_1[19])));
  Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_util_scalar_common_1[7])));
  Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_22, Var_26);
  Var_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_util_scalar_common_1[17])), Var_21);
  Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_10, Var_11);
  {
    Spec_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_goal_util.should_have_two_terms_infix\'/3"));
    MR_hl_field(0, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 28U));
    MR_hl_field(0, Spec_8, 3) = ((MR_Box) (Context_6));
    MR_hl_field(0, Spec_8, 4) = ((MR_Box) (Pieces_9));
  }
  return Spec_8;
}

MR_Word MR_CALL 
parse_tree__parse_goal_util__should_have_one_goal_prefix_3_f_0(
  MR_Word ContextPieces_5,
  MR_Word Context_6,
  MR_String Functor_7)
{
  MR_Word Spec_8;
  MR_Word Pieces_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_26;
  MR_Word Var_27;

  Var_10 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_5);
  {
    Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_24, 1) = ((MR_Box) (Functor_7));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_22 = parse_tree__error_spec__color_as_subject_1_f_0(Var_23);
  Var_27 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_util_scalar_common_1[13])));
  Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_util_scalar_common_1[7])));
  Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_22, Var_26);
  Var_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_util_scalar_common_1[11])), Var_21);
  Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_10, Var_11);
  {
    Spec_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_goal_util.should_have_one_goal_prefix\'/3"));
    MR_hl_field(0, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 28U));
    MR_hl_field(0, Spec_8, 3) = ((MR_Box) (Context_6));
    MR_hl_field(0, Spec_8, 4) = ((MR_Box) (Pieces_9));
  }
  return Spec_8;
}

MR_Word MR_CALL 
parse_tree__parse_goal_util__should_have_no_args_3_f_0(
  MR_Word ContextPieces_5,
  MR_Word Context_6,
  MR_String Functor_7)
{
  MR_Word Spec_8;
  MR_Word Pieces_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_23;
  MR_Word Var_24;

  Var_10 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_5);
  {
    Var_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_21, 1) = ((MR_Box) (Functor_7));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (Var_21));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_19 = parse_tree__error_spec__color_as_subject_1_f_0(Var_20);
  Var_24 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_util_scalar_common_1[6])));
  Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_24, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_util_scalar_common_1[7])));
  Var_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_19, Var_23);
  Var_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_util_scalar_common_1[4])), Var_18);
  Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_10, Var_11);
  {
    Spec_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_goal_util.should_have_no_args\'/3"));
    MR_hl_field(0, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 28U));
    MR_hl_field(0, Spec_8, 3) = ((MR_Box) (Context_6));
    MR_hl_field(0, Spec_8, 4) = ((MR_Box) (Pieces_9));
  }
  return Spec_8;
}

static MR_bool MR_CALL 
parse_tree__parse_goal_util____Unify____goal_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_goal_util____Unify____goal_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_goal_util____Compare____goal_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_goal_util____Compare____goal_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__parse_goal_util__init(void)
{
}

void mercury__parse_tree__parse_goal_util__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__parse_goal_util__parse_tree__parse_goal_util__type_ctor_info_goal_result_0);
}

void mercury__parse_tree__parse_goal_util__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_goal_util__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_goal_util.
