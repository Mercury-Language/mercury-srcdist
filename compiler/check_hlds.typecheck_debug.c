/*
** Automatically generated from `typecheck_debug.m'
** by the Mercury compiler,
** version rotd-2022-09-29
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


// :- module check_hlds.typecheck_debug.
// :- implementation.

/*
INIT mercury__check_hlds__typecheck_debug__init
ENDINIT
*/

#include "check_hlds.typecheck_debug.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
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
#include "set_tree234.mih"
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
#include "check_hlds.type_assign.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.typecheck_info.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_succeeded.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static void MR_CALL 
check_hlds__typecheck_debug__write_type_assign_set_5_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2,
  MR_Word VarSet_3);

static void MR_CALL 
check_hlds__typecheck_debug__write_type_assign_constraints_7_p_0(
  MR_Word Stream_1,
  MR_Word TypeVarSet_2,
  MR_Word TypeBindings_3,
  MR_Word HeadVar__4_4,
  MR_String MaybeOperator_5);

static void MR_CALL 
check_hlds__typecheck_debug__write_type_assign_types_9_p_0(
  MR_Word Stream_1,
  MR_Word VarSet_2,
  MR_Word TypeVarSet_3,
  MR_Word VarTypes_4,
  MR_Word TypeBindings_5,
  MR_Word FoundOne_6,
  MR_Word HeadVar__7_7);


static /* final */ const MR_Box check_hlds__typecheck_debug_scalar_common_1[1][2];

static /* final */ const MR_Box check_hlds__typecheck_debug_scalar_common_2[1][1];




static /* final */ const MR_Box check_hlds__typecheck_debug_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_debug_scalar_common_2[1][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



void MR_CALL 
check_hlds__typecheck_debug__type_checkpoint_6_p_0(
  MR_String Msg_7,
  MR_Word Info_8,
  MR_Word VarSet_9,
  MR_Word TypeAssignSet_10)
{
  MR_bool succeeded;
  MR_Word Debug_12;

  check_hlds__typecheck_info__typecheck_info_get_debug_info_2_p_0(Info_8, &Debug_12);
  if (!((Debug_12 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word DetailedStats_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Debug_12, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word Stream_14;
    MR_Word TypeAssign_18;

    mercury__io__output_stream_3_p_0(&Stream_14);
    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "At ");
    mercury__io__write_string_4_p_0(Stream_14, Msg_7);
    mercury__io__write_string_4_p_0(Stream_14, (MR_String) ":");
    libs__file_util__maybe_report_stats_4_p_0(Stream_14, DetailedStats_13);
    mercury__io__nl_3_p_0(Stream_14);
    succeeded = (DetailedStats_13 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (TypeAssignSet_10 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        TypeAssign_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeAssignSet_10, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word VarTypes_20;
      MR_Integer VarTypesCount_21;
      MR_Word TypeBindings_22;
      MR_Integer TypeBindingsCount_23;
      MR_String Var_50;
      MR_String Var_61;

      check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign_18, &VarTypes_20);
      parse_tree__vartypes__vartypes_count_2_p_0(VarTypes_20, &VarTypesCount_21);
      mercury__io__write_string_4_p_0(Stream_14, (MR_String) "\t\140var -> type\' map: count = ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__typecheck_debug_scalar_common_2[0]), VarTypesCount_21, &Var_50);
      mercury__io__write_string_4_p_0(Stream_14, Var_50);
      mercury__io__write_string_4_p_0(Stream_14, (MR_String) "\n");
      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_18, &TypeBindings_22);
      mercury__map__count_2_p_0((MR_Word) (&check_hlds__typecheck_debug_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeBindings_22, &TypeBindingsCount_23);
      mercury__io__write_string_4_p_0(Stream_14, (MR_String) "\t\140type var -> type\' map: count = ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__typecheck_debug_scalar_common_2[0]), TypeBindingsCount_23, &Var_61);
      mercury__io__write_string_4_p_0(Stream_14, Var_61);
      mercury__io__write_string_4_p_0(Stream_14, (MR_String) "\n");
    }
    check_hlds__typecheck_debug__write_type_assign_set_5_p_0(Stream_14, TypeAssignSet_10, VarSet_9);
  }
}

static void MR_CALL 
check_hlds__typecheck_debug__write_type_assign_set_5_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2,
  MR_Word VarSet_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word TypeAssign_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TypeAssigns_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ExternalTypeParams_23;
      MR_Word VarTypes_24;
      MR_Word Constraints_25;
      MR_Word TypeBindings_26;
      MR_Word TypeVarSet_27;
      MR_Word Vars_28;
      MR_Word ConstraintsToProve_42;
      MR_Word AssumedConstraints_43;
      MR_Word next_value_of_HeadVar__2_2;

      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\t");
      check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(TypeAssign_12, &ExternalTypeParams_23);
      check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign_12, &VarTypes_24);
      check_hlds__type_assign__type_assign_get_typeclass_constraints_2_p_0(TypeAssign_12, &Constraints_25);
      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_12, &TypeBindings_26);
      check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign_12, &TypeVarSet_27);
      parse_tree__vartypes__vartypes_vars_2_p_0(VarTypes_24, &Vars_28);
      if (!((ExternalTypeParams_23 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) "some [");
        parse_tree__parse_tree_out_term__mercury_output_vars_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_27, (MR_Integer) 1, ExternalTypeParams_23, Stream_1);
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) "]\n\t");
      }
      check_hlds__typecheck_debug__write_type_assign_types_9_p_0(Stream_1, VarSet_3, TypeVarSet_27, VarTypes_24, TypeBindings_26, (MR_Integer) 0, Vars_28);
      ConstraintsToProve_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints_25, (MR_Integer) 0))));
      AssumedConstraints_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints_25, (MR_Integer) 1))));
      check_hlds__typecheck_debug__write_type_assign_constraints_7_p_0(Stream_1, TypeVarSet_27, TypeBindings_26, AssumedConstraints_43, (MR_String) "&");
      check_hlds__typecheck_debug__write_type_assign_constraints_7_p_0(Stream_1, TypeVarSet_27, TypeBindings_26, ConstraintsToProve_42, (MR_String) "<=");
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\n");
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = TypeAssigns_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_debug__write_type_assign_constraints_7_p_0(
  MR_Word Stream_1,
  MR_Word TypeVarSet_2,
  MR_Word TypeBindings_3,
  MR_Word HeadVar__4_4,
  MR_String MaybeOperator_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Constraint_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Constraints_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word BoundConstraint_22;
      MR_Word ProgConstraint_23;
      MR_Word next_value_of_HeadVar__4_4;

      succeeded = (strcmp(MaybeOperator_5, (MR_String) "") == 0);
      if (succeeded)
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) ",\n\t   ");
      else
      {
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\n\t");
        mercury__io__write_string_4_p_0(Stream_1, MaybeOperator_5);
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) " ");
      }
      check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(TypeBindings_3, Constraint_18, &BoundConstraint_22);
      hlds__hlds_class__retrieve_prog_constraint_2_p_0(BoundConstraint_22, &ProgConstraint_23);
      parse_tree__mercury_to_mercury__mercury_output_constraint_6_p_0(TypeVarSet_2, (MR_Integer) 1, ProgConstraint_23, Stream_1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Constraints_19;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      MaybeOperator_5 = (MR_String) "";
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_debug__write_type_assign_types_9_p_0(
  MR_Word Stream_1,
  MR_Word VarSet_2,
  MR_Word TypeVarSet_3,
  MR_Word VarTypes_4,
  MR_Word TypeBindings_5,
  MR_Word FoundOne_6,
  MR_Word HeadVar__7_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
      switch (FoundOne_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) "(No variables were assigned a type)");
          break;
        case (MR_Integer) 1:
          {
          }
          break;
      }
    else
    {
      MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__7_7, (MR_Integer) 0))));
      MR_Word Vars_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__7_7, (MR_Integer) 1))));
      MR_Word Type_30;

      succeeded = parse_tree__vartypes__search_var_type_3_p_0(VarTypes_4, Var_27, &Type_30);
      if (succeeded)
      {
        MR_Word Type1_42;
        MR_Word Type_43;
        MR_Word next_value_of_HeadVar__7_7;

        switch (FoundOne_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\n\t");
            break;
        }
        parse_tree__parse_tree_out_term__mercury_output_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_2, (MR_Integer) 1, Var_27, Stream_1);
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) ": ");
        parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_5, Type_30, &Type1_42);
        parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(Type1_42, &Type_43);
        parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(TypeVarSet_3, (MR_Integer) 1, Type_43, Stream_1);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__7_7 = Vars_28;
        FoundOne_6 = (MR_Integer) 1;
        HeadVar__7_7 = next_value_of_HeadVar__7_7;
        continue;
      }
      else
      {
        MR_Word next_value_of_HeadVar__7_7 = Vars_28;

        // direct tailcall eliminated
        ;
        HeadVar__7_7 = next_value_of_HeadVar__7_7;
        continue;
      }
    }
    break;
  }
}

void mercury__check_hlds__typecheck_debug__init(void)
{
}

void mercury__check_hlds__typecheck_debug__init_type_tables(void)
{
}

void mercury__check_hlds__typecheck_debug__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__typecheck_debug__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.typecheck_debug.
