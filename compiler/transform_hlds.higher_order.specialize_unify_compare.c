/*
** Automatically generated from `higher_order.specialize_unify_compare.m'
** by the Mercury compiler,
** version rotd-2025-07-10
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


// :- module transform_hlds.higher_order.specialize_unify_compare.
// :- implementation.

/*
INIT mercury__transform_hlds__higher_order__specialize_unify_compare__init
ENDINIT
*/

#include "transform_hlds.higher_order.specialize_unify_compare.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "io.mih"
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
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.add_special_pred.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_construct.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.higher_order.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"
#include "transform_hlds.higher_order.higher_order_global_info.mih"
#include "transform_hlds.higher_order.higher_order_info.mih"




static void MR_CALL 
transform_hlds__higher_order__specialize_unify_compare__specialize_unify_or_compare_pred_for_no_tag_12_p_0(
  MR_Word OuterType_13,
  MR_Word WrappedType_14,
  MR_Word WrappedTypeIsDummy_15,
  MR_Word Constructor_16,
  MR_Word MaybeResult_17,
  MR_Word Arg1_18,
  MR_Word Arg2_19,
  MR_Word MaybeContext_20,
  MR_Word OrigGoalInfo_21,
  MR_Word * GoalExpr_22,
  MR_Word STATE_VARIABLE_Info_0_54,
  MR_Word * STATE_VARIABLE_Info_55);

static void MR_CALL 
transform_hlds__higher_order__specialize_unify_compare__create_goal_to_unwrap_no_tag_arg_10_p_0(
  MR_Word OuterType_11,
  MR_Word WrappedType_12,
  MR_Word IsDummy_13,
  MR_Word Context_14,
  MR_Word Constructor_15,
  MR_Word Arg_16,
  MR_Word * UnwrappedArg_17,
  MR_Word * Goal_18,
  MR_Word STATE_VARIABLE_ProcInfo_0_30,
  MR_Word * STATE_VARIABLE_ProcInfo_31);

static void MR_CALL 
transform_hlds__higher_order__specialize_unify_compare__generate_unsafe_type_cast_8_p_0(
  MR_Word Context_9,
  MR_Word ToType_10,
  MR_Word IsDummy_11,
  MR_Word Arg_12,
  MR_Word * CastArg_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_ProcInfo_0_16,
  MR_Word * STATE_VARIABLE_ProcInfo_17);

static void MR_CALL 
transform_hlds__higher_order__specialize_unify_compare__find_builtin_type_with_equivalent_compare_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word * EqvType_7,
  MR_Word * NeedIntCast_8);

static void MR_CALL 
transform_hlds__higher_order__specialize_unify_compare__specialize_unify_or_compare_pred_for_atomic_9_p_0(
  MR_Word SpecialPredType_10,
  MR_Word MaybeResult_11,
  MR_Word Arg1_12,
  MR_Word Arg2_13,
  MR_Word MaybeContext_14,
  MR_Word OrigGoalInfo_15,
  MR_Word * GoalExpr_16,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_unify_compare__create_goal_to_call_type_specific_unify_or_compare_8_p_0(
  MR_Word SpecialPredType_9,
  MR_Word SpecialId_10,
  MR_Word TypeInfoArgs_11,
  MR_Word SpecialPredArgs_12,
  MR_Word MaybeContext_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);


static /* final */ const MR_Box transform_hlds__higher_order__specialize_unify_compare_scalar_common_1[5][2];

static /* final */ const MR_Box transform_hlds__higher_order__specialize_unify_compare_scalar_common_2[1][3];

static /* final */ const MR_Box transform_hlds__higher_order__specialize_unify_compare_scalar_common_3[1][1];

static /* final */ const MR_Box transform_hlds__higher_order__specialize_unify_compare_scalar_common_4[1][4];




static /* final */ const MR_Box transform_hlds__higher_order__specialize_unify_compare_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) (&transform_hlds__higher_order__specialize_unify_compare_scalar_common_3[0])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__higher_order__specialize_unify_compare_scalar_common_4[0])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box transform_hlds__higher_order__specialize_unify_compare_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box transform_hlds__higher_order__specialize_unify_compare_scalar_common_3[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "int")) },
};

static /* final */ const MR_Box transform_hlds__higher_order__specialize_unify_compare_scalar_common_4[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (MR_mkword(1, &transform_hlds__higher_order__specialize_unify_compare_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__higher_order__specialize_unify_compare_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &transform_hlds__higher_order__specialize_unify_compare_scalar_common_1[3])))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


MR_bool MR_CALL 
transform_hlds__higher_order__specialize_unify_compare__specialize_call_to_unify_or_compare_8_p_0(
  MR_Word CalleePredInfo_9,
  MR_Integer CalleeProcId_10,
  MR_Word Args_11,
  MR_Word MaybeContext_12,
  MR_Word OrigGoalInfo_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_Info_0_50,
  MR_Word * STATE_VARIABLE_Info_51)
{
  MR_bool succeeded;
  MR_Word TypeInfo_61_61;
  MR_Word TypeCtorInfo_62_62;
  MR_Word ModuleInfo_16;
  MR_Word ProcInfo0_17;
  MR_Word KnownVarMap_18;
  MR_Word VarTable_19;
  MR_String PredName_20;
  MR_Integer PredFormArityInt_21;
  MR_Word SpecialId_22;
  MR_Word Var_24;
  MR_Word Type_25;
  MR_Word TypeInfoVar_30;
  MR_Word SpecialPredArgs_31;
  MR_Word KnownConst_32;
  MR_Word TypeInfoVarArgs_34;
  MR_Word TypeCtor_35;
  MR_Integer TypeArity_37;
  MR_Word TypeInfoArgs_38;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_63;
  MR_Integer Var_64;
  MR_String Var_23;
  MR_Box conv0_KnownConst_32;
  MR_Word Arg1_42;
  MR_Word Arg2_43;
  MR_Word MaybeResult_44;
  MR_Integer CalleeProcIdInt_41;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_40;

  Var_52 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(STATE_VARIABLE_Info_0_50);
  ModuleInfo_16 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(Var_52);
  ProcInfo0_17 = transform_hlds__higher_order__higher_order_info__hoi_get_proc_info_1_f_0(STATE_VARIABLE_Info_0_50);
  KnownVarMap_18 = transform_hlds__higher_order__higher_order_info__hoi_get_known_var_map_1_f_0(STATE_VARIABLE_Info_0_50);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo0_17, &VarTable_19);
  Var_53 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  Var_63 = hlds__hlds_pred__pred_info_module_1_f_0(CalleePredInfo_9);
  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_53, Var_63);
  if (succeeded)
  {
    PredName_20 = hlds__hlds_pred__pred_info_name_1_f_0(CalleePredInfo_9);
    hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(CalleePredInfo_9, &Var_54);
    PredFormArityInt_21 = (MR_Integer) (Var_54);
    succeeded = mdbcomp__prim_data__special_pred_name_arity_4_p_1(&SpecialId_22, PredName_20, &Var_23, &Var_64);
    if (succeeded)
    {
      succeeded = (PredFormArityInt_21 == Var_64);
      if (succeeded)
      {
        succeeded = hlds__special_pred__special_pred_get_type_3_p_0(SpecialId_22, Args_11, &Var_24);
        if (succeeded)
        {
          parse_tree__var_table__lookup_var_type_3_p_0(VarTable_19, Var_24, &Type_25);
          succeeded = ((MR_tag((MR_Word) Type_25)) != (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = ((((MR_tag((MR_Word) Type_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_25, 0)))) == (MR_Integer) 0)));
            succeeded = !(succeeded);
            if (succeeded)
            {
              succeeded = (Args_11 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TypeInfoVar_30 = ((MR_Word) ((MR_hl_field(1, Args_11, 0))));
                SpecialPredArgs_31 = ((MR_Word) ((MR_hl_field(1, Args_11, 1))));
                TypeInfo_61_61 = (MR_Word) (&transform_hlds__higher_order__specialize_unify_compare_scalar_common_1[0]);
                TypeCtorInfo_62_62 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0);
                succeeded = mercury__map__search_3_p_0(TypeInfo_61_61, TypeCtorInfo_62_62, KnownVarMap_18, ((MR_Box) (TypeInfoVar_30)), &conv0_KnownConst_32);
                if (succeeded)
                {
                  KnownConst_32 = ((MR_Word) (conv0_KnownConst_32));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  TypeInfoVarArgs_34 = ((MR_Word) ((MR_hl_field(0, KnownConst_32, 1))));
                  succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_25, &TypeCtor_35);
                  if (succeeded)
                  {
                    TypeArity_37 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_35, 1))));
                    succeeded = (TypeArity_37 == (MR_Integer) 0);
                    if (succeeded)
                    {
                      TypeInfoArgs_38 = (MR_Word) ((MR_Unsigned) 0U);
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (TypeInfoVarArgs_34 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                        TypeInfoArgs_38 = ((MR_Word) ((MR_hl_field(1, TypeInfoVarArgs_34, 1))));
                    }
                    if (succeeded)
                    {
                      succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(ModuleInfo_16, Type_25, &Var_40);
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        hlds__hlds_pred__proc_id_to_int_2_p_0(CalleeProcId_10, &CalleeProcIdInt_41);
                        succeeded = (CalleeProcIdInt_41 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (SpecialPredArgs_31 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_66 = ((MR_Word) ((MR_hl_field(1, SpecialPredArgs_31, 0))));
                            Var_65 = ((MR_Word) ((MR_hl_field(1, SpecialPredArgs_31, 1))));
                            succeeded = (Var_65 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              Var_68 = ((MR_Word) ((MR_hl_field(1, Var_65, 0))));
                              Var_67 = ((MR_Word) ((MR_hl_field(1, Var_65, 1))));
                              if ((Var_67 == (MR_Word) ((MR_Unsigned) 0U)))
                              {
                                succeeded = (SpecialId_22 == (MR_Integer) 0);
                                if (succeeded)
                                {
                                  Arg1_42 = Var_66;
                                  Arg2_43 = Var_68;
                                  MaybeResult_44 = (MR_Word) ((MR_Unsigned) 0U);
                                  succeeded = MR_TRUE;
                                }
                              }
                              else
                              {
                                MR_Word Var_59;

                                succeeded = (SpecialId_22 == (MR_Integer) 2);
                                if (succeeded)
                                {
                                  Arg1_42 = Var_68;
                                  Arg2_43 = ((MR_Word) ((MR_hl_field(1, Var_67, 0))));
                                  Var_59 = ((MR_Word) ((MR_hl_field(1, Var_67, 1))));
                                  succeeded = (Var_59 == (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    {
                                      MaybeResult_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(1, MaybeResult_44, 0) = ((MR_Box) (Var_66));
                                    }
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      if (succeeded)
                      {
                        MR_Word Var_60;

                        Var_60 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_16, Type_25);
                        succeeded = (Var_60 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          if ((MaybeResult_44 == (MR_Word) ((MR_Unsigned) 0U)))
                            *Goal_14 = (MR_Word) (MR_mkword(3, &transform_hlds__higher_order__specialize_unify_compare_scalar_common_2[0]));
                          else
                          {
                            MR_Word ComparisonResult_70 = ((MR_Word) ((MR_hl_field(1, MaybeResult_44, 0))));
                            MR_Word Builtin_71;
                            MR_Word TypeCtor_72;
                            MR_Word Eq_73;
                            MR_Word Goal_74;
                            MR_Word Var_78;
                            MR_Word Var_81;
                            MR_Word Var_82;
                            MR_Word Var_85;

                            Builtin_71 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                            {
                              Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_78, 0) = ((MR_Box) (Builtin_71));
                              MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_String) "comparison_result"));
                            }
                            {
                              TypeCtor_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, TypeCtor_72, 0) = ((MR_Box) (Var_78));
                              MR_hl_field(0, TypeCtor_72, 1) = ((MR_Box) ((MR_Integer) 0));
                            }
                            {
                              Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_82, 0) = ((MR_Box) (Builtin_71));
                              MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_String) "="));
                            }
                            {
                              Var_81 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, Var_81, 0) = ((MR_Box) (Var_82));
                              MR_hl_field(0, Var_81, 1) = ((MR_Box) ((MR_Integer) 0));
                              MR_hl_field(0, Var_81, 2) = ((MR_Box) (TypeCtor_72));
                            }
                            Eq_73 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_81)));
                            Var_85 = mercury__term_context__dummy_context_0_f_0();
                            hlds__make_goal__make_const_construction_4_p_0(Var_85, ComparisonResult_70, Eq_73, &Goal_74);
                            *Goal_14 = ((MR_Word) ((MR_hl_field(0, Goal_74, 0))));
                          }
                          *STATE_VARIABLE_Info_51 = STATE_VARIABLE_Info_0_50;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = check_hlds__type_util__type_is_atomic_2_p_0(ModuleInfo_16, Type_25);
                          if (succeeded)
                          {
                            transform_hlds__higher_order__specialize_unify_compare__specialize_unify_or_compare_pred_for_atomic_9_p_0(Type_25, MaybeResult_44, Arg1_42, Arg2_43, MaybeContext_12, OrigGoalInfo_13, Goal_14, STATE_VARIABLE_Info_0_50, STATE_VARIABLE_Info_51);
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            MR_Word Constructor_46;
                            MR_Word WrappedType_47;
                            MR_Word Var_48;

                            succeeded = check_hlds__type_util__type_is_no_tag_type_4_p_0(ModuleInfo_16, Type_25, &Constructor_46, &WrappedType_47);
                            if (succeeded)
                            {
                              succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(ModuleInfo_16, WrappedType_47, &Var_48);
                              succeeded = !(succeeded);
                              if (succeeded)
                                succeeded = check_hlds__type_util__type_is_atomic_2_p_0(ModuleInfo_16, WrappedType_47);
                            }
                            if (succeeded)
                            {
                              MR_Word WrappedTypeIsDummy_49;

                              WrappedTypeIsDummy_49 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_16, WrappedType_47);
                              transform_hlds__higher_order__specialize_unify_compare__specialize_unify_or_compare_pred_for_no_tag_12_p_0(Type_25, WrappedType_47, WrappedTypeIsDummy_49, Constructor_46, MaybeResult_44, Arg1_42, Arg2_43, MaybeContext_12, OrigGoalInfo_13, Goal_14, STATE_VARIABLE_Info_0_50, STATE_VARIABLE_Info_51);
                              succeeded = MR_TRUE;
                            }
                            else
                              succeeded = transform_hlds__higher_order__specialize_unify_compare__create_goal_to_call_type_specific_unify_or_compare_8_p_0(Type_25, SpecialId_22, TypeInfoArgs_38, SpecialPredArgs_31, MaybeContext_12, Goal_14, STATE_VARIABLE_Info_0_50, STATE_VARIABLE_Info_51);
                          }
                        }
                      }
                      else
                        succeeded = transform_hlds__higher_order__specialize_unify_compare__create_goal_to_call_type_specific_unify_or_compare_8_p_0(Type_25, SpecialId_22, TypeInfoArgs_38, SpecialPredArgs_31, MaybeContext_12, Goal_14, STATE_VARIABLE_Info_0_50, STATE_VARIABLE_Info_51);
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
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_unify_compare__specialize_unify_or_compare_pred_for_no_tag_12_p_0(
  MR_Word OuterType_13,
  MR_Word WrappedType_14,
  MR_Word WrappedTypeIsDummy_15,
  MR_Word Constructor_16,
  MR_Word MaybeResult_17,
  MR_Word Arg1_18,
  MR_Word Arg2_19,
  MR_Word MaybeContext_20,
  MR_Word OrigGoalInfo_21,
  MR_Word * GoalExpr_22,
  MR_Word STATE_VARIABLE_Info_0_54,
  MR_Word * STATE_VARIABLE_Info_55)
{
  MR_Word ModuleInfo_24;
  MR_Word ProcInfo0_25;
  MR_Word Context_26;
  MR_Word UnwrappedArg1_27;
  MR_Word ExtractGoal1_28;
  MR_Word ProcInfo1_29;
  MR_Word UnwrappedArg2_30;
  MR_Word ExtractGoal2_31;
  MR_Word ProcInfo2_32;
  MR_Word NonLocals0_33;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;

  Var_56 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(STATE_VARIABLE_Info_0_54);
  ModuleInfo_24 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(Var_56);
  ProcInfo0_25 = transform_hlds__higher_order__higher_order_info__hoi_get_proc_info_1_f_0(STATE_VARIABLE_Info_0_54);
  Context_26 = hlds__hlds_goal__goal_info_get_context_1_f_0(OrigGoalInfo_21);
  transform_hlds__higher_order__specialize_unify_compare__create_goal_to_unwrap_no_tag_arg_10_p_0(OuterType_13, WrappedType_14, WrappedTypeIsDummy_15, Context_26, Constructor_16, Arg1_18, &UnwrappedArg1_27, &ExtractGoal1_28, ProcInfo0_25, &ProcInfo1_29);
  transform_hlds__higher_order__specialize_unify_compare__create_goal_to_unwrap_no_tag_arg_10_p_0(OuterType_13, WrappedType_14, WrappedTypeIsDummy_15, Context_26, Constructor_16, Arg2_19, &UnwrappedArg2_30, &ExtractGoal2_31, ProcInfo1_29, &ProcInfo2_32);
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (UnwrappedArg2_30));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (UnwrappedArg1_27));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_58));
  }
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_57, &NonLocals0_33);
  if ((MaybeResult_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word InstMapDelta_35;
    MR_Word UnifyMode_37;
    MR_Word SpecialGoal_38;
    MR_Word GoalInfo_39;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;

    hlds__instmap__instmap_delta_init_reachable_1_p_0(&InstMapDelta_35);
    Var_60 = parse_tree__prog_mode__ground_inst_0_f_0();
    Var_61 = parse_tree__prog_mode__ground_inst_0_f_0();
    Var_62 = parse_tree__prog_mode__ground_inst_0_f_0();
    Var_63 = parse_tree__prog_mode__ground_inst_0_f_0();
    {
      UnifyMode_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, UnifyMode_37, 0) = ((MR_Box) (Var_60));
      MR_hl_field(0, UnifyMode_37, 1) = ((MR_Box) (Var_61));
      MR_hl_field(0, UnifyMode_37, 2) = ((MR_Box) (Var_62));
      MR_hl_field(0, UnifyMode_37, 3) = ((MR_Box) (Var_63));
    }
    {
      Var_64 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_64, 0) = ((MR_Box) (UnwrappedArg2_30));
    }
    {
      Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_65, 1) = ((MR_Box) (UnwrappedArg1_27));
      MR_hl_field(3, Var_65, 2) = ((MR_Box) (UnwrappedArg2_30));
    }
    {
      SpecialGoal_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SpecialGoal_38, 0) = ((MR_Box) (UnwrappedArg1_27));
      MR_hl_field(1, SpecialGoal_38, 1) = ((MR_Box) (Var_64));
      MR_hl_field(1, SpecialGoal_38, 2) = ((MR_Box) (UnifyMode_37));
      MR_hl_field(1, SpecialGoal_38, 3) = ((MR_Box) (Var_65));
      MR_hl_field(1, SpecialGoal_38, 4) = ((MR_Box) (&transform_hlds__higher_order__specialize_unify_compare_scalar_common_1[1]));
    }
    hlds__hlds_goal__goal_info_init_6_p_0(NonLocals0_33, InstMapDelta_35, (MR_Integer) 1, (MR_Integer) 0, Context_26, &GoalInfo_39);
    {
      Var_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_74, 0) = ((MR_Box) (SpecialGoal_38));
      MR_hl_field(0, Var_74, 1) = ((MR_Box) (GoalInfo_39));
    }
    {
      Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_73, 0) = ((MR_Box) (Var_74));
      MR_hl_field(1, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_72, 0) = ((MR_Box) (ExtractGoal2_31));
      MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_73));
    }
    {
      Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_71, 0) = ((MR_Box) (ExtractGoal1_28));
      MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_72));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *GoalExpr_22 = base;
      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, base, 2) = ((MR_Box) (Var_71));
    }
    transform_hlds__higher_order__higher_order_info__hoi_set_proc_info_3_p_0(ProcInfo2_32, STATE_VARIABLE_Info_0_54, STATE_VARIABLE_Info_55);
  }
  else
  {
    MR_Word ComparisonResult_40 = ((MR_Word) ((MR_hl_field(1, MaybeResult_17, 0))));
    MR_Word CompareType_41;
    MR_Word NeedIntCast_42;
    MR_Word CompareTypeCtor_43;
    MR_Word SymName_44;
    MR_Word SpecialPredId_45;
    MR_Integer SpecialProcId_46;
    MR_Word NonLocals_113;
    MR_Word InstMapDelta_114;

    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ComparisonResult_40, NonLocals0_33, &NonLocals_113);
    InstMapDelta_114 = hlds__instmap__instmap_delta_bind_var_1_f_0(ComparisonResult_40);
    transform_hlds__higher_order__specialize_unify_compare__find_builtin_type_with_equivalent_compare_4_p_0(ModuleInfo_24, WrappedType_14, &CompareType_41, &NeedIntCast_42);
    parse_tree__prog_type__type_to_ctor_det_2_p_0(CompareType_41, &CompareTypeCtor_43);
    hlds__special_pred__get_special_proc_det_6_p_0(ModuleInfo_24, CompareTypeCtor_43, (MR_Integer) 2, &SymName_44, &SpecialPredId_45, &SpecialProcId_46);
    switch (NeedIntCast_42) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word NewCallArgs_47;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Word Var_86;
          MR_Word Var_87;
          MR_Word SpecialGoal_106;
          MR_Word GoalInfo_107;

          {
            NewCallArgs_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, NewCallArgs_47, 0) = ((MR_Box) (ComparisonResult_40));
            MR_hl_field(1, NewCallArgs_47, 1) = ((MR_Box) (Var_57));
          }
          {
            SpecialGoal_106 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, SpecialGoal_106, 0) = ((MR_Box) (SpecialPredId_45));
            MR_hl_field(2, SpecialGoal_106, 1) = ((MR_Box) (SpecialProcId_46));
            MR_hl_field(2, SpecialGoal_106, 2) = ((MR_Box) (NewCallArgs_47));
            MR_hl_field(2, SpecialGoal_106, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(2, SpecialGoal_106, 4) = ((MR_Box) (MaybeContext_20));
            MR_hl_field(2, SpecialGoal_106, 5) = ((MR_Box) (SymName_44));
          }
          hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_113, InstMapDelta_114, (MR_Integer) 0, (MR_Integer) 0, Context_26, &GoalInfo_107);
          {
            Var_87 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_87, 0) = ((MR_Box) (SpecialGoal_106));
            MR_hl_field(0, Var_87, 1) = ((MR_Box) (GoalInfo_107));
          }
          {
            Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_86, 0) = ((MR_Box) (Var_87));
            MR_hl_field(1, Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_85, 0) = ((MR_Box) (ExtractGoal2_31));
            MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_86));
          }
          {
            Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_84, 0) = ((MR_Box) (ExtractGoal1_28));
            MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_85));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_22 = base;
            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(3, base, 2) = ((MR_Box) (Var_84));
          }
          transform_hlds__higher_order__higher_order_info__hoi_set_proc_info_3_p_0(ProcInfo2_32, STATE_VARIABLE_Info_0_54, STATE_VARIABLE_Info_55);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CastArg1_48;
          MR_Word CastGoal1_49;
          MR_Word ProcInfo3_50;
          MR_Word CastArg2_51;
          MR_Word CastGoal2_52;
          MR_Word ProcInfo4_53;
          MR_Word Var_92;
          MR_Word Var_93;
          MR_Word Var_98;
          MR_Word Var_99;
          MR_Word Var_100;
          MR_Word Var_101;
          MR_Word Var_102;
          MR_Word Var_103;
          MR_Word SpecialGoal_108;
          MR_Word GoalInfo_109;
          MR_Word NewCallArgs_110;

          transform_hlds__higher_order__specialize_unify_compare__generate_unsafe_type_cast_8_p_0(Context_26, CompareType_41, (MR_Integer) 1, UnwrappedArg1_27, &CastArg1_48, &CastGoal1_49, ProcInfo2_32, &ProcInfo3_50);
          transform_hlds__higher_order__specialize_unify_compare__generate_unsafe_type_cast_8_p_0(Context_26, CompareType_41, (MR_Integer) 1, UnwrappedArg2_30, &CastArg2_51, &CastGoal2_52, ProcInfo3_50, &ProcInfo4_53);
          {
            Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_93, 0) = ((MR_Box) (CastArg2_51));
            MR_hl_field(1, Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_92, 0) = ((MR_Box) (CastArg1_48));
            MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_93));
          }
          {
            NewCallArgs_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, NewCallArgs_110, 0) = ((MR_Box) (ComparisonResult_40));
            MR_hl_field(1, NewCallArgs_110, 1) = ((MR_Box) (Var_92));
          }
          {
            SpecialGoal_108 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, SpecialGoal_108, 0) = ((MR_Box) (SpecialPredId_45));
            MR_hl_field(2, SpecialGoal_108, 1) = ((MR_Box) (SpecialProcId_46));
            MR_hl_field(2, SpecialGoal_108, 2) = ((MR_Box) (NewCallArgs_110));
            MR_hl_field(2, SpecialGoal_108, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(2, SpecialGoal_108, 4) = ((MR_Box) (MaybeContext_20));
            MR_hl_field(2, SpecialGoal_108, 5) = ((MR_Box) (SymName_44));
          }
          hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_113, InstMapDelta_114, (MR_Integer) 0, (MR_Integer) 0, Context_26, &GoalInfo_109);
          {
            Var_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_103, 0) = ((MR_Box) (SpecialGoal_108));
            MR_hl_field(0, Var_103, 1) = ((MR_Box) (GoalInfo_109));
          }
          {
            Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_102, 0) = ((MR_Box) (Var_103));
            MR_hl_field(1, Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_101, 0) = ((MR_Box) (CastGoal2_52));
            MR_hl_field(1, Var_101, 1) = ((MR_Box) (Var_102));
          }
          {
            Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_100, 0) = ((MR_Box) (ExtractGoal2_31));
            MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_101));
          }
          {
            Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_99, 0) = ((MR_Box) (CastGoal1_49));
            MR_hl_field(1, Var_99, 1) = ((MR_Box) (Var_100));
          }
          {
            Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_98, 0) = ((MR_Box) (ExtractGoal1_28));
            MR_hl_field(1, Var_98, 1) = ((MR_Box) (Var_99));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_22 = base;
            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(3, base, 2) = ((MR_Box) (Var_98));
          }
          transform_hlds__higher_order__higher_order_info__hoi_set_proc_info_3_p_0(ProcInfo4_53, STATE_VARIABLE_Info_0_54, STATE_VARIABLE_Info_55);
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_unify_compare__create_goal_to_unwrap_no_tag_arg_10_p_0(
  MR_Word OuterType_11,
  MR_Word WrappedType_12,
  MR_Word IsDummy_13,
  MR_Word Context_14,
  MR_Word Constructor_15,
  MR_Word Arg_16,
  MR_Word * UnwrappedArg_17,
  MR_Word * Goal_18,
  MR_Word STATE_VARIABLE_ProcInfo_0_30,
  MR_Word * STATE_VARIABLE_ProcInfo_31)
{
  MR_Word OuterTypeCtor_20;
  MR_Word ConsId_21;
  MR_Word NonLocals_25;
  MR_Word InstMapDelta_26;
  MR_Word GoalInfo_27;
  MR_Word Unification_28;
  MR_Word GoalExpr_29;
  MR_Word Var_34;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_51;

  hlds__hlds_proc_util__proc_info_create_var_from_type_6_p_0((MR_String) "", WrappedType_12, IsDummy_13, UnwrappedArg_17, STATE_VARIABLE_ProcInfo_0_30, STATE_VARIABLE_ProcInfo_31);
  parse_tree__prog_type__type_to_ctor_det_2_p_0(OuterType_11, &OuterTypeCtor_20);
  {
    Var_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_34, 0) = ((MR_Box) (Constructor_15));
    MR_hl_field(0, Var_34, 1) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_34, 2) = ((MR_Box) (OuterTypeCtor_20));
  }
  ConsId_21 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_34)));
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (*UnwrappedArg_17));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (Arg_16));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_43));
  }
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_42, &NonLocals_25);
  InstMapDelta_26 = hlds__instmap__instmap_delta_bind_var_1_f_0(*UnwrappedArg_17);
  hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_25, InstMapDelta_26, (MR_Integer) 0, (MR_Integer) 0, Context_14, &GoalInfo_27);
  {
    Unification_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Unification_28, 0) = ((MR_Box) (Arg_16));
    MR_hl_field(1, Unification_28, 1) = ((MR_Box) (ConsId_21));
    MR_hl_field(1, Unification_28, 2) = ((MR_Box) (Var_43));
    MR_hl_field(1, Unification_28, 3) = ((MR_Box) (MR_mkword(1, &transform_hlds__higher_order__specialize_unify_compare_scalar_common_1[4])));
    MR_hl_field(1, Unification_28, 4) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (ConsId_21));
    MR_hl_field(1, Var_51, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(1, Var_51, 2) = ((MR_Box) (Var_43));
  }
  {
    GoalExpr_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, GoalExpr_29, 0) = ((MR_Box) (Arg_16));
    MR_hl_field(1, GoalExpr_29, 1) = ((MR_Box) (Var_51));
    MR_hl_field(1, GoalExpr_29, 2) = ((MR_Box) (&transform_hlds__higher_order__specialize_unify_compare_scalar_common_4[0]));
    MR_hl_field(1, GoalExpr_29, 3) = ((MR_Box) (Unification_28));
    MR_hl_field(1, GoalExpr_29, 4) = ((MR_Box) (&transform_hlds__higher_order__specialize_unify_compare_scalar_common_1[1]));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_18 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_29));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_27));
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_unify_compare__generate_unsafe_type_cast_8_p_0(
  MR_Word Context_9,
  MR_Word ToType_10,
  MR_Word IsDummy_11,
  MR_Word Arg_12,
  MR_Word * CastArg_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_ProcInfo_0_16,
  MR_Word * STATE_VARIABLE_ProcInfo_17)
{
  hlds__hlds_proc_util__proc_info_create_var_from_type_6_p_0((MR_String) "", ToType_10, IsDummy_11, CastArg_13, STATE_VARIABLE_ProcInfo_0_16, STATE_VARIABLE_ProcInfo_17);
  hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, Arg_12, *CastArg_13, Context_9, Goal_14);
}

static void MR_CALL 
transform_hlds__higher_order__specialize_unify_compare__find_builtin_type_with_equivalent_compare_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word * EqvType_7,
  MR_Word * NeedIntCast_8)
{
  MR_Word CtorCat_9;

  CtorCat_9 = check_hlds__type_util__classify_type_2_f_0(ModuleInfo_5, Type_6);
  switch (MR_tag((MR_Word) CtorCat_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 3:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_unify_compare.find_builtin_type_with_equivalent_compare\'/4", (MR_String) "bad type");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        *EqvType_7 = Type_6;
        *NeedIntCast_8 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 2:
      {
        parse_tree__prog_type_construct__construct_type_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_unify_compare_scalar_common_1[2]), (MR_Word) ((MR_Unsigned) 0U), EqvType_7);
        *NeedIntCast_8 = (MR_Integer) 1;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_unify_compare__specialize_unify_or_compare_pred_for_atomic_9_p_0(
  MR_Word SpecialPredType_10,
  MR_Word MaybeResult_11,
  MR_Word Arg1_12,
  MR_Word Arg2_13,
  MR_Word MaybeContext_14,
  MR_Word OrigGoalInfo_15,
  MR_Word * GoalExpr_16,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42)
{
  MR_Word ModuleInfo_18;
  MR_Word ProcInfo0_19;
  MR_Word Var_43;

  Var_43 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(STATE_VARIABLE_Info_0_41);
  ModuleInfo_18 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(Var_43);
  ProcInfo0_19 = transform_hlds__higher_order__higher_order_info__hoi_get_proc_info_1_f_0(STATE_VARIABLE_Info_0_41);
  if ((MaybeResult_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word UnifyMode_20;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;

    Var_44 = parse_tree__prog_mode__ground_inst_0_f_0();
    Var_45 = parse_tree__prog_mode__ground_inst_0_f_0();
    Var_46 = parse_tree__prog_mode__ground_inst_0_f_0();
    Var_47 = parse_tree__prog_mode__ground_inst_0_f_0();
    {
      UnifyMode_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, UnifyMode_20, 0) = ((MR_Box) (Var_44));
      MR_hl_field(0, UnifyMode_20, 1) = ((MR_Box) (Var_45));
      MR_hl_field(0, UnifyMode_20, 2) = ((MR_Box) (Var_46));
      MR_hl_field(0, UnifyMode_20, 3) = ((MR_Box) (Var_47));
    }
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_48, 0) = ((MR_Box) (Arg2_13));
    }
    {
      Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_49, 1) = ((MR_Box) (Arg1_12));
      MR_hl_field(3, Var_49, 2) = ((MR_Box) (Arg2_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      *GoalExpr_16 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Arg1_12));
      MR_hl_field(1, base, 1) = ((MR_Box) (Var_48));
      MR_hl_field(1, base, 2) = ((MR_Box) (UnifyMode_20));
      MR_hl_field(1, base, 3) = ((MR_Box) (Var_49));
      MR_hl_field(1, base, 4) = ((MR_Box) (&transform_hlds__higher_order__specialize_unify_compare_scalar_common_1[1]));
    }
    *STATE_VARIABLE_Info_42 = STATE_VARIABLE_Info_0_41;
  }
  else
  {
    MR_Word ComparisonResult_21 = ((MR_Word) ((MR_hl_field(1, MaybeResult_11, 0))));
    MR_Word CtorCat_78;

    CtorCat_78 = check_hlds__type_util__classify_type_2_f_0(ModuleInfo_18, SpecialPredType_10);
    switch (MR_tag((MR_Word) CtorCat_78)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 3:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_unify_compare.find_builtin_type_with_equivalent_compare\'/4", (MR_String) "bad type");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CompareTypeCtor_24;
          MR_Word SymName_25;
          MR_Word SpecialPredId_26;
          MR_Integer SpecialProcId_27;
          MR_Word NewCallArgs_28;
          MR_Word Var_54;
          MR_Word Var_55;

          parse_tree__prog_type__type_to_ctor_det_2_p_0(SpecialPredType_10, &CompareTypeCtor_24);
          hlds__special_pred__get_special_proc_det_6_p_0(ModuleInfo_18, CompareTypeCtor_24, (MR_Integer) 2, &SymName_25, &SpecialPredId_26, &SpecialProcId_27);
          {
            Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_55, 0) = ((MR_Box) (Arg2_13));
            MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_54, 0) = ((MR_Box) (Arg1_12));
            MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_55));
          }
          {
            NewCallArgs_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, NewCallArgs_28, 0) = ((MR_Box) (ComparisonResult_21));
            MR_hl_field(1, NewCallArgs_28, 1) = ((MR_Box) (Var_54));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_16 = base;
            MR_hl_field(2, base, 0) = ((MR_Box) (SpecialPredId_26));
            MR_hl_field(2, base, 1) = ((MR_Box) (SpecialProcId_27));
            MR_hl_field(2, base, 2) = ((MR_Box) (NewCallArgs_28));
            MR_hl_field(2, base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(2, base, 4) = ((MR_Box) (MaybeContext_14));
            MR_hl_field(2, base, 5) = ((MR_Box) (SymName_25));
          }
          *STATE_VARIABLE_Info_42 = STATE_VARIABLE_Info_0_41;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Context_29;
          MR_Word CastArg1_30;
          MR_Word CastGoal1_31;
          MR_Word ProcInfo1_32;
          MR_Word CastArg2_33;
          MR_Word CastGoal2_34;
          MR_Word ProcInfo_35;
          MR_Word Call_36;
          MR_Word NonLocals_37;
          MR_Word InstMapDelta_38;
          MR_Word GoalInfo_40;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_70;
          MR_Word Var_71;
          MR_Word Var_72;
          MR_Word Var_73;
          MR_Word NewCallArgs_76;
          MR_Word CompareType_95;
          MR_Word CompareTypeCtor_97;
          MR_Word SymName_98;
          MR_Word SpecialPredId_99;
          MR_Integer SpecialProcId_100;

          parse_tree__prog_type_construct__construct_type_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_unify_compare_scalar_common_1[2]), (MR_Word) ((MR_Unsigned) 0U), &CompareType_95);
          parse_tree__prog_type__type_to_ctor_det_2_p_0(CompareType_95, &CompareTypeCtor_97);
          hlds__special_pred__get_special_proc_det_6_p_0(ModuleInfo_18, CompareTypeCtor_97, (MR_Integer) 2, &SymName_98, &SpecialPredId_99, &SpecialProcId_100);
          Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(OrigGoalInfo_15);
          hlds__hlds_proc_util__proc_info_create_var_from_type_6_p_0((MR_String) "", CompareType_95, (MR_Integer) 1, &CastArg1_30, ProcInfo0_19, &ProcInfo1_32);
          hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, Arg1_12, CastArg1_30, Context_29, &CastGoal1_31);
          hlds__hlds_proc_util__proc_info_create_var_from_type_6_p_0((MR_String) "", CompareType_95, (MR_Integer) 1, &CastArg2_33, ProcInfo1_32, &ProcInfo_35);
          hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, Arg2_13, CastArg2_33, Context_29, &CastGoal2_34);
          {
            Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_61, 0) = ((MR_Box) (CastArg2_33));
            MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_60, 0) = ((MR_Box) (CastArg1_30));
            MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_61));
          }
          {
            NewCallArgs_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, NewCallArgs_76, 0) = ((MR_Box) (ComparisonResult_21));
            MR_hl_field(1, NewCallArgs_76, 1) = ((MR_Box) (Var_60));
          }
          {
            Call_36 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Call_36, 0) = ((MR_Box) (SpecialPredId_99));
            MR_hl_field(2, Call_36, 1) = ((MR_Box) (SpecialProcId_100));
            MR_hl_field(2, Call_36, 2) = ((MR_Box) (NewCallArgs_76));
            MR_hl_field(2, Call_36, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(2, Call_36, 4) = ((MR_Box) (MaybeContext_14));
            MR_hl_field(2, Call_36, 5) = ((MR_Box) (SymName_98));
          }
          {
            Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_66, 0) = ((MR_Box) (Arg2_13));
            MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_65, 0) = ((MR_Box) (Arg1_12));
            MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_66));
          }
          {
            Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_64, 0) = ((MR_Box) (ComparisonResult_21));
            MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_65));
          }
          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_64, &NonLocals_37);
          InstMapDelta_38 = hlds__instmap__instmap_delta_bind_var_1_f_0(ComparisonResult_21);
          hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_37, InstMapDelta_38, (MR_Integer) 0, (MR_Integer) 0, Context_29, &GoalInfo_40);
          {
            Var_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_73, 0) = ((MR_Box) (Call_36));
            MR_hl_field(0, Var_73, 1) = ((MR_Box) (GoalInfo_40));
          }
          {
            Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
            MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_71, 0) = ((MR_Box) (CastGoal2_34));
            MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_72));
          }
          {
            Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_70, 0) = ((MR_Box) (CastGoal1_31));
            MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_71));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_16 = base;
            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(3, base, 2) = ((MR_Box) (Var_70));
          }
          transform_hlds__higher_order__higher_order_info__hoi_set_proc_info_3_p_0(ProcInfo_35, STATE_VARIABLE_Info_0_41, STATE_VARIABLE_Info_42);
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_unify_compare__create_goal_to_call_type_specific_unify_or_compare_8_p_0(
  MR_Word SpecialPredType_9,
  MR_Word SpecialId_10,
  MR_Word TypeInfoArgs_11,
  MR_Word SpecialPredArgs_12,
  MR_Word MaybeContext_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_bool succeeded;
  MR_Word SpecialPredTypeCtor_16;
  MR_Word SymName_17;
  MR_Word SpecialPredId_18;
  MR_Integer SpecialProcId_19;
  MR_Word CallArgs_20;
  MR_Word Var_24;
  MR_Word ModuleInfo0_26;
  MR_Word Var_36;
  MR_Word SymName0_27;
  MR_Word PredId0_28;
  MR_Integer ProcId0_29;

  parse_tree__prog_type__type_to_ctor_det_2_p_0(SpecialPredType_9, &SpecialPredTypeCtor_16);
  Var_36 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(STATE_VARIABLE_Info_0_21);
  ModuleInfo0_26 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(Var_36);
  succeeded = hlds__special_pred__get_special_proc_6_p_0(ModuleInfo0_26, SpecialPredTypeCtor_16, SpecialId_10, &SymName0_27, &PredId0_28, &ProcId0_29);
  if (succeeded)
  {
    SymName_17 = SymName0_27;
    SpecialPredId_18 = PredId0_28;
    SpecialProcId_19 = ProcId0_29;
    *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word ModuleInfo_30;
    MR_Word PredInfo_31;
    MR_Word ModuleName_32;
    MR_String Name_33;
    MR_Word GlobalInfo1_34;
    MR_Word GlobalInfo_35;

    succeeded = hlds__special_pred__special_pred_is_generated_lazily_2_p_0(ModuleInfo0_26, SpecialPredTypeCtor_16);
    if (succeeded)
    {
      switch (SpecialId_10) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 2:
          {
            hlds__add_special_pred__add_lazily_generated_compare_pred_decl_4_p_0(SpecialPredTypeCtor_16, &SpecialPredId_18, ModuleInfo0_26, &ModuleInfo_30);
            SpecialProcId_19 = hlds__hlds_pred__initial_proc_id_0_f_0();
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 0:
          {
            hlds__add_special_pred__add_lazily_generated_unify_pred_4_p_0(SpecialPredTypeCtor_16, &SpecialPredId_18, ModuleInfo0_26, &ModuleInfo_30);
            hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&SpecialProcId_19);
            succeeded = MR_TRUE;
          }
          break;
      }
      if (succeeded)
      {
        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_30, SpecialPredId_18, &PredInfo_31);
        ModuleName_32 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_31);
        Name_33 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_31);
        {
          SymName_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SymName_17, 0) = ((MR_Box) (ModuleName_32));
          MR_hl_field(1, SymName_17, 1) = ((MR_Box) (Name_33));
        }
        GlobalInfo1_34 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(STATE_VARIABLE_Info_0_21);
        transform_hlds__higher_order__higher_order_global_info__hogi_set_module_info_3_p_0(ModuleInfo_30, GlobalInfo1_34, &GlobalInfo_35);
        transform_hlds__higher_order__higher_order_info__hoi_set_global_info_3_p_0(GlobalInfo_35, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
        succeeded = MR_TRUE;
      }
    }
  }
  if (succeeded)
  {
    succeeded = parse_tree__prog_type_test__type_is_higher_order_1_p_0(SpecialPredType_9);
    if (succeeded)
      CallArgs_20 = SpecialPredArgs_12;
    else
      CallArgs_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__higher_order__specialize_unify_compare_scalar_common_1[0]), TypeInfoArgs_11, SpecialPredArgs_12);
    Var_24 = (MR_Integer) 1;
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      *Goal_14 = base;
      MR_hl_field(2, base, 0) = ((MR_Box) (SpecialPredId_18));
      MR_hl_field(2, base, 1) = ((MR_Box) (SpecialProcId_19));
      MR_hl_field(2, base, 2) = ((MR_Box) (CallArgs_20));
      MR_hl_field(2, base, 3) = (MR_Box) ((MR_Unsigned) (Var_24));
      MR_hl_field(2, base, 4) = ((MR_Box) (MaybeContext_13));
      MR_hl_field(2, base, 5) = ((MR_Box) (SymName_17));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void mercury__transform_hlds__higher_order__specialize_unify_compare__init(void)
{
}

void mercury__transform_hlds__higher_order__specialize_unify_compare__init_type_tables(void)
{
}

void mercury__transform_hlds__higher_order__specialize_unify_compare__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__higher_order__specialize_unify_compare__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.higher_order.specialize_unify_compare.
