/*
** Automatically generated from `post_term_analysis.m'
** by the Mercury compiler,
** version DEV
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module transform_hlds.post_term_analysis. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__post_term_analysis__init
ENDINIT
*/

#include "transform_hlds.post_term_analysis.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.foreign.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct2 transform_hlds__post_term_analysis__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__post_term_analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__post_term_analysis__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static void MR_CALL 
transform_hlds__post_term_analysis__warn_non_term_user_special_pred_kind_7_p_0(
  MR_Word transform_hlds__post_term_analysis__ModuleInfo_8,
  MR_Word transform_hlds__post_term_analysis__TypeTable_9,
  MR_Word transform_hlds__post_term_analysis__SpecialPredId_10,
  MR_Word transform_hlds__post_term_analysis__TypeCtor_11,
  MR_Word transform_hlds__post_term_analysis__PredId_12,
  MR_Word transform_hlds__post_term_analysis__STATE_VARIABLE_Specs_0_18,
  MR_Word * transform_hlds__post_term_analysis__STATE_VARIABLE_Specs_19);

static void MR_CALL 
transform_hlds__post_term_analysis__generate_non_term_user_special_warning_5_p_0(
  MR_Word transform_hlds__post_term_analysis__Context_6,
  MR_Word transform_hlds__post_term_analysis__SpecialPred_7,
  MR_Word transform_hlds__post_term_analysis__TypeCtor_8,
  MR_Word transform_hlds__post_term_analysis__STATE_VARIABLE_Specs_0_18,
  MR_Word * transform_hlds__post_term_analysis__STATE_VARIABLE_Specs_19);

static void MR_CALL 
transform_hlds__post_term_analysis__run_post_term_analysis_2_p_0_2(
  MR_Box transform_hlds__post_term_analysis__closure_arg,
  MR_Box transform_hlds__post_term_analysis__wrapper_arg_1,
  MR_Box transform_hlds__post_term_analysis__wrapper_arg_2,
  MR_Box transform_hlds__post_term_analysis__wrapper_arg_3,
  MR_Box * transform_hlds__post_term_analysis__wrapper_arg_4);

static void MR_CALL 
transform_hlds__post_term_analysis__run_post_term_analysis_2_p_0_1(
  MR_Box transform_hlds__post_term_analysis__closure_arg,
  MR_Box transform_hlds__post_term_analysis__wrapper_arg_1,
  MR_Box transform_hlds__post_term_analysis__wrapper_arg_2,
  MR_Box transform_hlds__post_term_analysis__wrapper_arg_3,
  MR_Box * transform_hlds__post_term_analysis__wrapper_arg_4);


static /* final */ const MR_Box transform_hlds__post_term_analysis_scalar_common_1[6][2];

static /* final */ const MR_Box transform_hlds__post_term_analysis_scalar_common_2[1][10];




static /* final */ const MR_Box transform_hlds__post_term_analysis_scalar_common_1[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "cannot be proven to terminate."))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__post_term_analysis_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__post_term_analysis_scalar_common_1[1])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: the user-defined"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for the type"))
  },
};

static /* final */ const MR_Box transform_hlds__post_term_analysis_scalar_common_2[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__post_term_analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__post_term_analysis__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__post_term_analysis__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct2 transform_hlds__post_term_analysis__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__post_term_analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &transform_hlds__post_term_analysis__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__post_term_analysis__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static void MR_CALL 
transform_hlds__post_term_analysis__warn_non_term_user_special_pred_kind_7_p_0(
  MR_Word transform_hlds__post_term_analysis__ModuleInfo_8,
  MR_Word transform_hlds__post_term_analysis__TypeTable_9,
  MR_Word transform_hlds__post_term_analysis__SpecialPredId_10,
  MR_Word transform_hlds__post_term_analysis__TypeCtor_11,
  MR_Word transform_hlds__post_term_analysis__PredId_12,
  MR_Word transform_hlds__post_term_analysis__STATE_VARIABLE_Specs_0_18,
  MR_Word * transform_hlds__post_term_analysis__STATE_VARIABLE_Specs_19)
{
  {
    MR_bool transform_hlds__post_term_analysis__succeeded;
    MR_Word transform_hlds__post_term_analysis__BuiltinTypeCtors_14;

    {
      transform_hlds__post_term_analysis__BuiltinTypeCtors_14 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
    }
    {
      transform_hlds__post_term_analysis__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (transform_hlds__post_term_analysis__TypeCtor_11)), transform_hlds__post_term_analysis__BuiltinTypeCtors_14);
    }
    if (transform_hlds__post_term_analysis__succeeded)
      *transform_hlds__post_term_analysis__STATE_VARIABLE_Specs_19 = transform_hlds__post_term_analysis__STATE_VARIABLE_Specs_0_18;
    else
      {
        MR_Word transform_hlds__post_term_analysis__TypeDefn_15;
        MR_Word transform_hlds__post_term_analysis__TypeStatus_16;
        MR_Word transform_hlds__post_term_analysis__DefinedThisModule_17;

        {
          hlds__hlds_data__lookup_type_ctor_defn_3_p_0(transform_hlds__post_term_analysis__TypeTable_9, transform_hlds__post_term_analysis__TypeCtor_11, &transform_hlds__post_term_analysis__TypeDefn_15);
        }
        {
          hlds__hlds_data__get_type_defn_status_2_p_0(transform_hlds__post_term_analysis__TypeDefn_15, &transform_hlds__post_term_analysis__TypeStatus_16);
        }
        {
          transform_hlds__post_term_analysis__DefinedThisModule_17 = hlds__status__type_status_defined_in_this_module_1_f_0(transform_hlds__post_term_analysis__TypeStatus_16);
        }
        switch (transform_hlds__post_term_analysis__DefinedThisModule_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *transform_hlds__post_term_analysis__STATE_VARIABLE_Specs_19 = transform_hlds__post_term_analysis__STATE_VARIABLE_Specs_0_18;
            break;
          case (MR_Integer) 1:
            {
              MR_Word transform_hlds__post_term_analysis__NeedsTermCheck_30;
              MR_Word transform_hlds__post_term_analysis__TypeBody_43;
              MR_Word transform_hlds__post_term_analysis__MaybeUnifyCompare_44;

              {
                hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__post_term_analysis__TypeDefn_15, &transform_hlds__post_term_analysis__TypeBody_43);
              }
              switch (MR_tag((MR_Word) transform_hlds__post_term_analysis__TypeBody_43)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word transform_hlds__post_term_analysis__ForeignTypeBody_66 = (MR_Word) MR_body(((MR_Word) transform_hlds__post_term_analysis__TypeBody_43), (MR_Integer) 0);
                    MR_Word transform_hlds__post_term_analysis__UnifyCompare_67;

                    {
                      transform_hlds__post_term_analysis__succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(transform_hlds__post_term_analysis__ModuleInfo_8, transform_hlds__post_term_analysis__ForeignTypeBody_66, &transform_hlds__post_term_analysis__UnifyCompare_67);
                    }
                    if (transform_hlds__post_term_analysis__succeeded)
                      {
                        transform_hlds__post_term_analysis__MaybeUnifyCompare_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__MaybeUnifyCompare_44, 0) = ((MR_Box) (transform_hlds__post_term_analysis__UnifyCompare_67));
                      }
                    else
                      transform_hlds__post_term_analysis__MaybeUnifyCompare_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word transform_hlds__post_term_analysis__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__TypeBody_43, (MR_Integer) 0)));
                    MR_Word transform_hlds__post_term_analysis__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__TypeBody_43, (MR_Integer) 1)));
                    MR_Word transform_hlds__post_term_analysis__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__TypeBody_43, (MR_Integer) 2)));
                    MR_Word transform_hlds__post_term_analysis__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__TypeBody_43, (MR_Integer) 3)));
                    MR_Word transform_hlds__post_term_analysis__Var_60;
                    MR_Word transform_hlds__post_term_analysis__Var_61;
                    MR_Word transform_hlds__post_term_analysis__Var_62;
                    MR_Word transform_hlds__post_term_analysis__Var_63;

                    transform_hlds__post_term_analysis__MaybeUnifyCompare_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__TypeBody_43, (MR_Integer) 4)));
                    transform_hlds__post_term_analysis__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__TypeBody_43, (MR_Integer) 5)));
                    transform_hlds__post_term_analysis__Var_61 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__TypeBody_43, (MR_Integer) 6)))) & (MR_Integer) 1);
                    transform_hlds__post_term_analysis__Var_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__TypeBody_43, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                    transform_hlds__post_term_analysis__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__TypeBody_43, (MR_Integer) 7)));
                  }
                  break;
                case (MR_Integer) 2:
                  transform_hlds__post_term_analysis__MaybeUnifyCompare_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__post_term_analysis__TypeBody_43, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word transform_hlds__post_term_analysis__DetailsSolver_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__post_term_analysis__TypeBody_43, (MR_Integer) 1)));
                        MR_Word transform_hlds__post_term_analysis__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__DetailsSolver_64, (MR_Integer) 0)));

                        transform_hlds__post_term_analysis__MaybeUnifyCompare_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__DetailsSolver_64, (MR_Integer) 1)));
                      }
                      break;
                    case (MR_Integer) 1:
                      transform_hlds__post_term_analysis__MaybeUnifyCompare_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      break;
                  }
                  break;
              }
              if ((transform_hlds__post_term_analysis__MaybeUnifyCompare_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                transform_hlds__post_term_analysis__NeedsTermCheck_30 = (MR_Integer) 0;
              else
                {
                  MR_Word transform_hlds__post_term_analysis__UnifyCompare_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__MaybeUnifyCompare_44, (MR_Integer) 0)));

                  if (((MR_tag((MR_Word) transform_hlds__post_term_analysis__UnifyCompare_45)) == (MR_mktag((MR_Integer) 1))))
                    {
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.post_term_analysis.special_pred_needs_term_check\'/3", (MR_String) "type is local and abstract_noncanonical");
                        return;
                      }
                    }
                  else
                    {
                      MR_Word transform_hlds__post_term_analysis__MaybeUnify_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__UnifyCompare_45, (MR_Integer) 0)));
                      MR_Word transform_hlds__post_term_analysis__MaybeCompare_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__UnifyCompare_45, (MR_Integer) 1)));

                      switch (transform_hlds__post_term_analysis__SpecialPredId_10) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 2:
                          if ((transform_hlds__post_term_analysis__MaybeCompare_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                            transform_hlds__post_term_analysis__NeedsTermCheck_30 = (MR_Integer) 0;
                          else
                            transform_hlds__post_term_analysis__NeedsTermCheck_30 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 1:
                          transform_hlds__post_term_analysis__NeedsTermCheck_30 = (MR_Integer) 0;
                          break;
                        case (MR_Integer) 0:
                          if ((transform_hlds__post_term_analysis__MaybeUnify_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                            transform_hlds__post_term_analysis__NeedsTermCheck_30 = (MR_Integer) 0;
                          else
                            transform_hlds__post_term_analysis__NeedsTermCheck_30 = (MR_Integer) 1;
                          break;
                      }
                    }
                }
              switch (transform_hlds__post_term_analysis__NeedsTermCheck_30) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *transform_hlds__post_term_analysis__STATE_VARIABLE_Specs_19 = transform_hlds__post_term_analysis__STATE_VARIABLE_Specs_0_18;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Integer transform_hlds__post_term_analysis__ProcId_31;
                    MR_Word transform_hlds__post_term_analysis__ProcInfo_33;
                    MR_Word transform_hlds__post_term_analysis__BodyGoal0_34;
                    MR_Word transform_hlds__post_term_analysis__BodyGoal_35;
                    MR_Word transform_hlds__post_term_analysis__Var_32;

                    {
                      hlds__hlds_pred__proc_id_to_int_2_p_1(&transform_hlds__post_term_analysis__ProcId_31, (MR_Integer) 0);
                    }
                    {
                      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__post_term_analysis__ModuleInfo_8, transform_hlds__post_term_analysis__PredId_12, transform_hlds__post_term_analysis__ProcId_31, &transform_hlds__post_term_analysis__Var_32, &transform_hlds__post_term_analysis__ProcInfo_33);
                    }
                    {
                      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__post_term_analysis__ProcInfo_33, &transform_hlds__post_term_analysis__BodyGoal0_34);
                    }
                    {
                      transform_hlds__post_term_analysis__BodyGoal_35 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(transform_hlds__post_term_analysis__BodyGoal0_34);
                    }
                    {
                      transform_hlds__post_term_analysis__succeeded = hlds__goal_form__goal_cannot_loop_2_p_0(transform_hlds__post_term_analysis__ModuleInfo_8, transform_hlds__post_term_analysis__BodyGoal_35);
                    }
                    if (transform_hlds__post_term_analysis__succeeded)
                      *transform_hlds__post_term_analysis__STATE_VARIABLE_Specs_19 = transform_hlds__post_term_analysis__STATE_VARIABLE_Specs_0_18;
                    else
                      {
                        MR_Word transform_hlds__post_term_analysis__Context_36;

                        {
                          hlds__hlds_data__get_type_defn_context_2_p_0(transform_hlds__post_term_analysis__TypeDefn_15, &transform_hlds__post_term_analysis__Context_36);
                        }
                        {
                          transform_hlds__post_term_analysis__generate_non_term_user_special_warning_5_p_0(transform_hlds__post_term_analysis__Context_36, transform_hlds__post_term_analysis__SpecialPredId_10, transform_hlds__post_term_analysis__TypeCtor_11, transform_hlds__post_term_analysis__STATE_VARIABLE_Specs_0_18, transform_hlds__post_term_analysis__STATE_VARIABLE_Specs_19);
                        }
                      }
                  }
                  break;
              }
            }
            break;
        }
      }
  }
}

static void MR_CALL 
transform_hlds__post_term_analysis__generate_non_term_user_special_warning_5_p_0(
  MR_Word transform_hlds__post_term_analysis__Context_6,
  MR_Word transform_hlds__post_term_analysis__SpecialPred_7,
  MR_Word transform_hlds__post_term_analysis__TypeCtor_8,
  MR_Word transform_hlds__post_term_analysis__STATE_VARIABLE_Specs_0_18,
  MR_Word * transform_hlds__post_term_analysis__STATE_VARIABLE_Specs_19)
{
  {
    MR_Word transform_hlds__post_term_analysis__TypeModule_10;
    MR_String transform_hlds__post_term_analysis__TypeName_11;
    MR_Integer transform_hlds__post_term_analysis__TypeArity_12;
    MR_String transform_hlds__post_term_analysis__SpecialPredStr_13;
    MR_Word transform_hlds__post_term_analysis__SNA_14;
    MR_Word transform_hlds__post_term_analysis__Pieces_15;
    MR_Word transform_hlds__post_term_analysis__Msg_16;
    MR_Word transform_hlds__post_term_analysis__Spec_17;
    MR_Word transform_hlds__post_term_analysis__Var_23;
    MR_Word transform_hlds__post_term_analysis__Var_26;
    MR_Word transform_hlds__post_term_analysis__Var_27;
    MR_String transform_hlds__post_term_analysis__Var_28;
    MR_Word transform_hlds__post_term_analysis__Var_30;
    MR_Word transform_hlds__post_term_analysis__Var_33;
    MR_Word transform_hlds__post_term_analysis__Var_34;
    MR_Word transform_hlds__post_term_analysis__Var_41;
    MR_Word transform_hlds__post_term_analysis__Var_42;
    MR_Word transform_hlds__post_term_analysis__Var_46;

    {
      check_hlds__type_util__type_ctor_module_name_arity_4_p_0(transform_hlds__post_term_analysis__TypeCtor_8, &transform_hlds__post_term_analysis__TypeModule_10, &transform_hlds__post_term_analysis__TypeName_11, &transform_hlds__post_term_analysis__TypeArity_12);
    }
    switch (transform_hlds__post_term_analysis__SpecialPred_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        transform_hlds__post_term_analysis__SpecialPredStr_13 = (MR_String) "comparison";
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.post_term_analysis", (MR_String) "predicate \140transform_hlds.post_term_analysis.generate_non_term_user_special_warning\'/5", (MR_String) "index predicate.");
            return;
          }
        }
        break;
      case (MR_Integer) 0:
        transform_hlds__post_term_analysis__SpecialPredStr_13 = (MR_String) "equality";
        break;
    }
    {
      transform_hlds__post_term_analysis__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__Var_23, 0) = ((MR_Box) (transform_hlds__post_term_analysis__TypeModule_10));
      MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__Var_23, 1) = ((MR_Box) (transform_hlds__post_term_analysis__TypeName_11));
    }
    {
      transform_hlds__post_term_analysis__SNA_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__SNA_14, 0) = ((MR_Box) (transform_hlds__post_term_analysis__Var_23));
      MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__SNA_14, 1) = ((MR_Box) (transform_hlds__post_term_analysis__TypeArity_12));
    }
    {
      transform_hlds__post_term_analysis__Var_28 = mercury__string__f_43_43_2_f_0(transform_hlds__post_term_analysis__SpecialPredStr_13, (MR_String) " predicate");
    }
    {
      transform_hlds__post_term_analysis__Var_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), transform_hlds__post_term_analysis__Var_27, 0) = ((MR_Box) (transform_hlds__post_term_analysis__Var_28));
    }
    {
      transform_hlds__post_term_analysis__Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__post_term_analysis__Var_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), transform_hlds__post_term_analysis__Var_34, 1) = ((MR_Box) (transform_hlds__post_term_analysis__SNA_14));
    }
    {
      transform_hlds__post_term_analysis__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__Var_33, 0) = ((MR_Box) (transform_hlds__post_term_analysis__Var_34));
      MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__post_term_analysis_scalar_common_1[3])));
    }
    {
      transform_hlds__post_term_analysis__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__post_term_analysis_scalar_common_1[5])));
      MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__Var_30, 1) = ((MR_Box) (transform_hlds__post_term_analysis__Var_33));
    }
    {
      transform_hlds__post_term_analysis__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__Var_26, 0) = ((MR_Box) (transform_hlds__post_term_analysis__Var_27));
      MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__Var_26, 1) = ((MR_Box) (transform_hlds__post_term_analysis__Var_30));
    }
    {
      transform_hlds__post_term_analysis__Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__post_term_analysis_scalar_common_1[4])));
      MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__Pieces_15, 1) = ((MR_Box) (transform_hlds__post_term_analysis__Var_26));
    }
    {
      transform_hlds__post_term_analysis__Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__Var_42, 0) = ((MR_Box) (transform_hlds__post_term_analysis__Pieces_15));
    }
    {
      transform_hlds__post_term_analysis__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__Var_41, 0) = ((MR_Box) (transform_hlds__post_term_analysis__Var_42));
      MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__post_term_analysis__Msg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__Msg_16, 0) = ((MR_Box) (transform_hlds__post_term_analysis__Context_6));
      MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__Msg_16, 1) = ((MR_Box) (transform_hlds__post_term_analysis__Var_41));
    }
    {
      transform_hlds__post_term_analysis__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__Var_46, 0) = ((MR_Box) (transform_hlds__post_term_analysis__Msg_16));
      MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__post_term_analysis__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14))));
      MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__Spec_17, 2) = ((MR_Box) (transform_hlds__post_term_analysis__Var_46));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *transform_hlds__post_term_analysis__STATE_VARIABLE_Specs_19 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__post_term_analysis__Spec_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__post_term_analysis__STATE_VARIABLE_Specs_0_18));
    }
  }
}

static void MR_CALL 
transform_hlds__post_term_analysis__run_post_term_analysis_2_p_0_2(
  MR_Box transform_hlds__post_term_analysis__closure_arg,
  MR_Box transform_hlds__post_term_analysis__wrapper_arg_1,
  MR_Box transform_hlds__post_term_analysis__wrapper_arg_2,
  MR_Box transform_hlds__post_term_analysis__wrapper_arg_3,
  MR_Box * transform_hlds__post_term_analysis__wrapper_arg_4)
{
  {
    MR_Box transform_hlds__post_term_analysis__closure = transform_hlds__post_term_analysis__closure_arg;
    MR_Word transform_hlds__post_term_analysis__conv2_STATE_VARIABLE_Specs_19;

    {
      transform_hlds__post_term_analysis__warn_non_term_user_special_pred_kind_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__post_term_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__post_term_analysis__wrapper_arg_2), ((MR_Word) transform_hlds__post_term_analysis__wrapper_arg_3), &transform_hlds__post_term_analysis__conv2_STATE_VARIABLE_Specs_19);
    }
    *transform_hlds__post_term_analysis__wrapper_arg_4 = ((MR_Box) (transform_hlds__post_term_analysis__conv2_STATE_VARIABLE_Specs_19));
  }
}

static void MR_CALL 
transform_hlds__post_term_analysis__run_post_term_analysis_2_p_0_1(
  MR_Box transform_hlds__post_term_analysis__closure_arg,
  MR_Box transform_hlds__post_term_analysis__wrapper_arg_1,
  MR_Box transform_hlds__post_term_analysis__wrapper_arg_2,
  MR_Box transform_hlds__post_term_analysis__wrapper_arg_3,
  MR_Box * transform_hlds__post_term_analysis__wrapper_arg_4)
{
  {
    MR_Box transform_hlds__post_term_analysis__closure = transform_hlds__post_term_analysis__closure_arg;
    MR_Word transform_hlds__post_term_analysis__conv0_STATE_VARIABLE_Specs_19;

    {
      transform_hlds__post_term_analysis__warn_non_term_user_special_pred_kind_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__post_term_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__post_term_analysis__wrapper_arg_2), ((MR_Word) transform_hlds__post_term_analysis__wrapper_arg_3), &transform_hlds__post_term_analysis__conv0_STATE_VARIABLE_Specs_19);
    }
    *transform_hlds__post_term_analysis__wrapper_arg_4 = ((MR_Box) (transform_hlds__post_term_analysis__conv0_STATE_VARIABLE_Specs_19));
  }
}

void MR_CALL 
transform_hlds__post_term_analysis__run_post_term_analysis_2_p_0(
  MR_Word transform_hlds__post_term_analysis__ModuleInfo_3,
  MR_Word * transform_hlds__post_term_analysis__Specs_4)
{
  {
    MR_bool transform_hlds__post_term_analysis__succeeded;
    MR_Word transform_hlds__post_term_analysis__Globals_8;
    MR_Word transform_hlds__post_term_analysis__OpMode_9;
    MR_Word transform_hlds__post_term_analysis__Termination_10;
    MR_Word transform_hlds__post_term_analysis__WarnSpecialPreds_11;
    MR_Word transform_hlds__post_term_analysis__TransIntermodOpt_12;
    MR_Word transform_hlds__post_term_analysis__STATE_VARIABLE_Specs_19_21;
    MR_Word transform_hlds__post_term_analysis__Var_22;
    MR_Word transform_hlds__post_term_analysis__Var_23;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__post_term_analysis__ModuleInfo_3, &transform_hlds__post_term_analysis__Globals_8);
    }
    {
      libs__globals__get_op_mode_2_p_0(transform_hlds__post_term_analysis__Globals_8, &transform_hlds__post_term_analysis__OpMode_9);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__post_term_analysis__Globals_8, (MR_Integer) 423, &transform_hlds__post_term_analysis__Termination_10);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__post_term_analysis__Globals_8, (MR_Integer) 40, &transform_hlds__post_term_analysis__WarnSpecialPreds_11);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__post_term_analysis__Globals_8, (MR_Integer) 336, &transform_hlds__post_term_analysis__TransIntermodOpt_12);
    }
    transform_hlds__post_term_analysis__STATE_VARIABLE_Specs_19_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    transform_hlds__post_term_analysis__succeeded = (transform_hlds__post_term_analysis__Termination_10 == (MR_Integer) 1);
    if (transform_hlds__post_term_analysis__succeeded)
      {
        transform_hlds__post_term_analysis__succeeded = (transform_hlds__post_term_analysis__WarnSpecialPreds_11 == (MR_Integer) 1);
        if (transform_hlds__post_term_analysis__succeeded)
          {
            transform_hlds__post_term_analysis__succeeded = (transform_hlds__post_term_analysis__TransIntermodOpt_12 == (MR_Integer) 1);
            if (transform_hlds__post_term_analysis__succeeded)
              {
                transform_hlds__post_term_analysis__succeeded = ((MR_tag((MR_Word) transform_hlds__post_term_analysis__OpMode_9)) == (MR_mktag((MR_Integer) 3)));
                if (transform_hlds__post_term_analysis__succeeded)
                  {
                    transform_hlds__post_term_analysis__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__post_term_analysis__OpMode_9, (MR_Integer) 0)));
                    transform_hlds__post_term_analysis__succeeded = ((MR_tag((MR_Word) transform_hlds__post_term_analysis__Var_22)) == (MR_mktag((MR_Integer) 1)));
                    if (transform_hlds__post_term_analysis__succeeded)
                      {
                        transform_hlds__post_term_analysis__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__Var_22, (MR_Integer) 0)));
                        transform_hlds__post_term_analysis__succeeded = (transform_hlds__post_term_analysis__Var_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
            transform_hlds__post_term_analysis__succeeded = !(transform_hlds__post_term_analysis__succeeded);
          }
      }
    if (transform_hlds__post_term_analysis__succeeded)
      {
        MR_Word transform_hlds__post_term_analysis__TypeCtorInfo_32_34;
        MR_Word transform_hlds__post_term_analysis__TypeCtorInfo_33_35;
        MR_Word transform_hlds__post_term_analysis__TypeInfo_34_36;
        MR_Word transform_hlds__post_term_analysis__TypeTable_13;
        MR_Word transform_hlds__post_term_analysis__SpecialPredMaps_14;
        MR_Word transform_hlds__post_term_analysis__UnifyMap_15;
        MR_Word transform_hlds__post_term_analysis__CompareMap_17;
        MR_Word transform_hlds__post_term_analysis__Var_24;
        MR_Word transform_hlds__post_term_analysis__STATE_VARIABLE_Specs_23_25;
        MR_Word transform_hlds__post_term_analysis__Var_27;
        MR_Word transform_hlds__post_term_analysis___IndexMap_16;
        MR_Box transform_hlds__post_term_analysis__conv1_STATE_VARIABLE_Specs_23_25;
        MR_Box transform_hlds__post_term_analysis__conv3_Specs_4;

        {
          hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__post_term_analysis__ModuleInfo_3, &transform_hlds__post_term_analysis__TypeTable_13);
        }
        {
          hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(transform_hlds__post_term_analysis__ModuleInfo_3, &transform_hlds__post_term_analysis__SpecialPredMaps_14);
        }
        transform_hlds__post_term_analysis__UnifyMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__SpecialPredMaps_14, (MR_Integer) 0)));
        transform_hlds__post_term_analysis___IndexMap_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__SpecialPredMaps_14, (MR_Integer) 1)));
        transform_hlds__post_term_analysis__CompareMap_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__SpecialPredMaps_14, (MR_Integer) 2)));
        {
          transform_hlds__post_term_analysis__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__Var_24, 0) = ((MR_Box) (&transform_hlds__post_term_analysis_scalar_common_2[0]));
          MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__Var_24, 1) = ((MR_Box) (transform_hlds__post_term_analysis__run_post_term_analysis_2_p_0_1));
          MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__Var_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__Var_24, 3) = ((MR_Box) (transform_hlds__post_term_analysis__ModuleInfo_3));
          MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__Var_24, 4) = ((MR_Box) (transform_hlds__post_term_analysis__TypeTable_13));
          MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__Var_24, 5) = ((MR_Box) ((MR_Integer) 0));
        }
        transform_hlds__post_term_analysis__TypeCtorInfo_32_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
        transform_hlds__post_term_analysis__TypeCtorInfo_33_35 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
        transform_hlds__post_term_analysis__TypeInfo_34_36 = (MR_Word) &transform_hlds__post_term_analysis_scalar_common_1[0];
        {
          mercury__map__foldl_4_p_0(transform_hlds__post_term_analysis__TypeCtorInfo_32_34, transform_hlds__post_term_analysis__TypeCtorInfo_33_35, transform_hlds__post_term_analysis__TypeInfo_34_36, transform_hlds__post_term_analysis__Var_24, transform_hlds__post_term_analysis__UnifyMap_15, ((MR_Box) (transform_hlds__post_term_analysis__STATE_VARIABLE_Specs_19_21)), &transform_hlds__post_term_analysis__conv1_STATE_VARIABLE_Specs_23_25);
        }
        transform_hlds__post_term_analysis__STATE_VARIABLE_Specs_23_25 = ((MR_Word) transform_hlds__post_term_analysis__conv1_STATE_VARIABLE_Specs_23_25);
        {
          transform_hlds__post_term_analysis__Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__Var_27, 0) = ((MR_Box) (&transform_hlds__post_term_analysis_scalar_common_2[0]));
          MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__Var_27, 1) = ((MR_Box) (transform_hlds__post_term_analysis__run_post_term_analysis_2_p_0_2));
          MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__Var_27, 3) = ((MR_Box) (transform_hlds__post_term_analysis__ModuleInfo_3));
          MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__Var_27, 4) = ((MR_Box) (transform_hlds__post_term_analysis__TypeTable_13));
          MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__Var_27, 5) = ((MR_Box) ((MR_Integer) 2));
        }
        {
          mercury__map__foldl_4_p_0(transform_hlds__post_term_analysis__TypeCtorInfo_32_34, transform_hlds__post_term_analysis__TypeCtorInfo_33_35, transform_hlds__post_term_analysis__TypeInfo_34_36, transform_hlds__post_term_analysis__Var_27, transform_hlds__post_term_analysis__CompareMap_17, ((MR_Box) (transform_hlds__post_term_analysis__STATE_VARIABLE_Specs_23_25)), &transform_hlds__post_term_analysis__conv3_Specs_4);
        }
        *transform_hlds__post_term_analysis__Specs_4 = ((MR_Word) transform_hlds__post_term_analysis__conv3_Specs_4);
      }
    else
      *transform_hlds__post_term_analysis__Specs_4 = transform_hlds__post_term_analysis__STATE_VARIABLE_Specs_19_21;
  }
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

/* :- end_module transform_hlds.post_term_analysis. */
