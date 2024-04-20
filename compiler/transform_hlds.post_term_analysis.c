/*
** Automatically generated from `post_term_analysis.m'
** by the Mercury compiler,
** version rotd-2024-04-20
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


// :- module transform_hlds.post_term_analysis.
// :- implementation.

/*
INIT mercury__transform_hlds__post_term_analysis__init
ENDINIT
*/

#include "transform_hlds.post_term_analysis.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
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
#include "ops.mih"
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
#include "backend_libs.foreign.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_TypeInfo_Struct2 transform_hlds__post_term_analysis__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__post_term_analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__post_term_analysis__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static void MR_CALL 
transform_hlds__post_term_analysis__warn_non_term_user_special_pred_kind_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word TypeTable_9,
  MR_Word SpecialPredId_10,
  MR_Word TypeCtor_11,
  MR_Word PredId_12,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static void MR_CALL 
transform_hlds__post_term_analysis__run_post_term_analysis_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__post_term_analysis__run_post_term_analysis_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);


static /* final */ const MR_Box transform_hlds__post_term_analysis_scalar_common_1[6][2];

static /* final */ const MR_Box transform_hlds__post_term_analysis_scalar_common_2[1][10];




static /* final */ const MR_Box transform_hlds__post_term_analysis_scalar_common_1[6][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning: the user-defined"))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for the type"))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "cannot be proven to terminate."))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__post_term_analysis_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__post_term_analysis_scalar_common_1[3])))
  },
};

static /* final */ const MR_Box transform_hlds__post_term_analysis_scalar_common_2[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__post_term_analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__post_term_analysis__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__post_term_analysis__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct2 transform_hlds__post_term_analysis__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__post_term_analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&transform_hlds__post_term_analysis__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__post_term_analysis__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static void MR_CALL 
transform_hlds__post_term_analysis__warn_non_term_user_special_pred_kind_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word TypeTable_9,
  MR_Word SpecialPredId_10,
  MR_Word TypeCtor_11,
  MR_Word PredId_12,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  MR_bool succeeded;
  MR_Word BuiltinTypeCtors_14;

  BuiltinTypeCtors_14 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
  succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_11)), BuiltinTypeCtors_14);
  if (succeeded)
    *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
  else
  {
    MR_Word TypeDefn_15;
    MR_Word TypeStatus_16;
    MR_Word DefinedThisModule_17;

    hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_9, TypeCtor_11, &TypeDefn_15);
    hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_15, &TypeStatus_16);
    DefinedThisModule_17 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_16);
    switch (DefinedThisModule_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeBody_29;
          MR_Word MaybeCanonical_30;

          hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_15, &TypeBody_29);
          switch (MR_tag((MR_Word) TypeBody_29)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_57 = (MR_Word) ((MR_Word) (TypeBody_29));

                MaybeCanonical_30 = ((MR_Word) ((MR_hl_field(0, Var_57, (MR_Integer) 2))));
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ForeignTypeBody_53 = (MR_Word) (MR_body((MR_Word) (TypeBody_29), (MR_Integer) 1));
                MR_Word NonCanonical_54;

                succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(ModuleInfo_8, ForeignTypeBody_53, &NonCanonical_54);
                if (succeeded)
                  {
                    MaybeCanonical_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, MaybeCanonical_30, 0) = ((MR_Box) (NonCanonical_54));
                  }
                else
                  MaybeCanonical_30 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 2:
              MaybeCanonical_30 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, TypeBody_29, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word DetailsSolver_51 = ((MR_Word) ((MR_hl_field(3, TypeBody_29, (MR_Integer) 1))));

                    MaybeCanonical_30 = ((MR_Word) ((MR_hl_field(0, DetailsSolver_51, (MR_Integer) 1))));
                  }
                  break;
                case (MR_Integer) 1:
                  MaybeCanonical_30 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
              }
              break;
          }
          if ((MaybeCanonical_30 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
          else
          {
            MR_Word NonCanonical_31 = ((MR_Word) ((MR_hl_field(1, MaybeCanonical_30, (MR_Integer) 0))));
            MR_Word NeedsTermCheck_114;

            switch (MR_tag((MR_Word) NonCanonical_31)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                NeedsTermCheck_114 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                switch (SpecialPredId_10) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 2:
                    NeedsTermCheck_114 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    NeedsTermCheck_114 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 0:
                    NeedsTermCheck_114 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 2:
                switch (SpecialPredId_10) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 2:
                    NeedsTermCheck_114 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    NeedsTermCheck_114 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 0:
                    NeedsTermCheck_114 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, NonCanonical_31, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (SpecialPredId_10) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 2:
                        NeedsTermCheck_114 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        NeedsTermCheck_114 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 0:
                        NeedsTermCheck_114 = (MR_Integer) 0;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.post_term_analysis.special_pred_needs_term_check\'/3", (MR_String) "type is local yet it is noncanon_abstract");
                      return;
                    }
                    break;
                }
                break;
            }
            switch (NeedsTermCheck_114) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ProcId_22;
                  MR_Word ProcInfo_24;
                  MR_Word BodyGoal0_25;
                  MR_Word BodyGoal_26;
                  MR_Word Var_23;

                  hlds__hlds_pred__proc_id_to_int_2_p_1(&ProcId_22, (MR_Integer) 0);
                  hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_8, PredId_12, ProcId_22, &Var_23, &ProcInfo_24);
                  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_24, &BodyGoal0_25);
                  BodyGoal_26 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(BodyGoal0_25);
                  succeeded = hlds__goal_form__goal_cannot_loop_term_info_2_p_0(ModuleInfo_8, BodyGoal_26);
                  if (succeeded)
                    *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
                  else
                  {
                    MR_Word Context_27;
                    MR_Word TypeModule_58;
                    MR_String TypeName_59;
                    MR_Integer TypeArity_60;
                    MR_String SpecialPredStr_61;
                    MR_Word SNA_62;
                    MR_Word Pieces_63;
                    MR_Word Spec_64;
                    MR_Word Var_67;
                    MR_Word Var_70;
                    MR_Word Var_71;
                    MR_String Var_72;
                    MR_Word Var_74;
                    MR_Word Var_77;
                    MR_Word Var_78;

                    hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_15, &Context_27);
                    check_hlds__type_util__type_ctor_module_name_arity_4_p_0(TypeCtor_11, &TypeModule_58, &TypeName_59, &TypeArity_60);
                    switch (SpecialPredId_10) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 2:
                        SpecialPredStr_61 = (MR_String) "comparison";
                        break;
                      case (MR_Integer) 1:
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.post_term_analysis.generate_non_term_user_special_warning\'/5", (MR_String) "index predicate.");
                          return;
                        }
                        break;
                      case (MR_Integer) 0:
                        SpecialPredStr_61 = (MR_String) "equality";
                        break;
                    }
                    {
                      Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_67, 0) = ((MR_Box) (TypeModule_58));
                      MR_hl_field(1, Var_67, 1) = ((MR_Box) (TypeName_59));
                    }
                    {
                      SNA_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, SNA_62, 0) = ((MR_Box) (Var_67));
                      MR_hl_field(0, SNA_62, 1) = ((MR_Box) (TypeArity_60));
                    }
                    Var_72 = mercury__string__f_43_43_2_f_0(SpecialPredStr_61, (MR_String) " predicate");
                    {
                      Var_71 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_71, 0) = ((MR_Box) (Var_72));
                    }
                    {
                      Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                      MR_hl_field(3, Var_78, 1) = ((MR_Box) (SNA_62));
                    }
                    {
                      Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_78));
                      MR_hl_field(1, Var_77, 1) = ((MR_Box) (MR_mkword(1, &transform_hlds__post_term_analysis_scalar_common_1[5])));
                    }
                    {
                      Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_74, 0) = ((MR_Box) (MR_mkword(3, &transform_hlds__post_term_analysis_scalar_common_1[2])));
                      MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_77));
                    }
                    {
                      Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
                      MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_74));
                    }
                    {
                      Pieces_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Pieces_63, 0) = ((MR_Box) (MR_mkword(3, &transform_hlds__post_term_analysis_scalar_common_1[1])));
                      MR_hl_field(1, Pieces_63, 1) = ((MR_Box) (Var_70));
                    }
                    {
                      Spec_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Spec_64, 0) = ((MR_Box) ((MR_String) "predicate \140transform_hlds.post_term_analysis.generate_non_term_user_special_warning\'/5"));
                      MR_hl_field(1, Spec_64, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(1, Spec_64, 2) = ((MR_Box) ((MR_Unsigned) 92U));
                      MR_hl_field(1, Spec_64, 3) = ((MR_Box) (Context_27));
                      MR_hl_field(1, Spec_64, 4) = ((MR_Box) (Pieces_63));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *STATE_VARIABLE_Specs_19 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_64));
                      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_18));
                    }
                  }
                }
                break;
            }
          }
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__post_term_analysis__run_post_term_analysis_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Specs_19;

  transform_hlds__post_term_analysis__warn_non_term_user_special_pred_kind_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_Specs_19);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_19));
}

static void MR_CALL 
transform_hlds__post_term_analysis__run_post_term_analysis_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Specs_19;

  transform_hlds__post_term_analysis__warn_non_term_user_special_pred_kind_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Specs_19);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_19));
}

void MR_CALL 
transform_hlds__post_term_analysis__run_post_term_analysis_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * Specs_4)
{
  MR_bool succeeded;
  MR_Word Globals_5;
  MR_Word OpMode_6;
  MR_Word Termination_7;
  MR_Word WarnSpecialPreds_8;
  MR_Word TransIntermodOpt_9;
  MR_Word Var_20;
  MR_Word Var_21;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_3, &Globals_5);
  libs__globals__get_op_mode_2_p_0(Globals_5, &OpMode_6);
  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 522, &Termination_7);
  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 45, &WarnSpecialPreds_8);
  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 506, &TransIntermodOpt_9);
  succeeded = (Termination_7 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = (WarnSpecialPreds_8 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (TransIntermodOpt_9 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) OpMode_6)) == (MR_Integer) 3);
        if (succeeded)
        {
          Var_20 = ((MR_Word) ((MR_hl_field(3, OpMode_6, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 3);
          if (succeeded)
          {
            Var_21 = ((MR_Word) ((MR_hl_field(3, Var_20, (MR_Integer) 0))));
            succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
      succeeded = !(succeeded);
    }
  }
  if (succeeded)
  {
    MR_Word TypeTable_11;
    MR_Word SpecialPredMaps_12;
    MR_Word UnifyMap_13;
    MR_Word CompareMap_15;
    MR_Word Var_22;
    MR_Word STATE_VARIABLE_Specs_24_23;
    MR_Word Var_25;
    MR_Box conv1_STATE_VARIABLE_Specs_24_23;
    MR_Box conv3_Specs_4;

    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_3, &TypeTable_11);
    hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(ModuleInfo_3, &SpecialPredMaps_12);
    UnifyMap_13 = ((MR_Word) ((MR_hl_field(0, SpecialPredMaps_12, (MR_Integer) 0))));
    CompareMap_15 = ((MR_Word) ((MR_hl_field(0, SpecialPredMaps_12, (MR_Integer) 2))));
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_22, 0) = ((MR_Box) (&transform_hlds__post_term_analysis_scalar_common_2[0]));
      MR_hl_field(0, Var_22, 1) = ((MR_Box) (transform_hlds__post_term_analysis__run_post_term_analysis_2_p_0_1));
      MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_22, 3) = ((MR_Box) (ModuleInfo_3));
      MR_hl_field(0, Var_22, 4) = ((MR_Box) (TypeTable_11));
      MR_hl_field(0, Var_22, 5) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__post_term_analysis_scalar_common_1[0]), Var_22, UnifyMap_13, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_STATE_VARIABLE_Specs_24_23);
    STATE_VARIABLE_Specs_24_23 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_24_23));
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_25, 0) = ((MR_Box) (&transform_hlds__post_term_analysis_scalar_common_2[0]));
      MR_hl_field(0, Var_25, 1) = ((MR_Box) (transform_hlds__post_term_analysis__run_post_term_analysis_2_p_0_2));
      MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_25, 3) = ((MR_Box) (ModuleInfo_3));
      MR_hl_field(0, Var_25, 4) = ((MR_Box) (TypeTable_11));
      MR_hl_field(0, Var_25, 5) = ((MR_Box) ((MR_Integer) 2));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__post_term_analysis_scalar_common_1[0]), Var_25, CompareMap_15, ((MR_Box) (STATE_VARIABLE_Specs_24_23)), &conv3_Specs_4);
    *Specs_4 = ((MR_Word) (conv3_Specs_4));
  }
  else
    *Specs_4 = (MR_Word) ((MR_Unsigned) 0U);
}

void mercury__transform_hlds__post_term_analysis__init(void)
{
}

void mercury__transform_hlds__post_term_analysis__init_type_tables(void)
{
}

void mercury__transform_hlds__post_term_analysis__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__post_term_analysis__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.post_term_analysis.
