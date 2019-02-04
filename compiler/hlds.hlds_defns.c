/*
** Automatically generated from `hlds_defns.m'
** by the Mercury compiler,
** version rotd-2017-06-13
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


/* :- module hlds.hlds_defns. */
/* :- implementation. */

/*
INIT mercury__hlds__hlds_defns__init
ENDINIT
*/

#include "hlds.hlds_defns.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_PseudoTypeInfo hlds__hlds_defns__hlds__hlds_defns__field_types_name_arity_0_0[2];

static const MR_DuFunctorDesc hlds__hlds_defns__hlds__hlds_defns__du_functor_desc_name_arity_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_defns__hlds__hlds_defns__du_stag_ordered_name_arity_0_0[1];

static const MR_DuPtagLayout hlds__hlds_defns__hlds__hlds_defns__du_ptag_ordered_name_arity_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_defns__hlds__hlds_defns__du_name_ordered_name_arity_0[1];

static const MR_Integer hlds__hlds_defns__hlds__hlds_defns__functor_number_map_name_arity_0[1];

static MR_bool MR_CALL 
hlds__hlds_defns____Unify____name_arity_0_0_10001(
  MR_Box hlds__hlds_defns__wrapper_arg_1,
  MR_Box hlds__hlds_defns__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_defns____Compare____name_arity_0_0_10001(
  MR_Box * hlds__hlds_defns__wrapper_arg_1,
  MR_Box hlds__hlds_defns__wrapper_arg_2,
  MR_Box hlds__hlds_defns__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_defns____Compare____name_arity_0_0(
  MR_Word * hlds__hlds_defns__HeadVar__1_1,
  MR_Word hlds__hlds_defns__HeadVar__2_2,
  MR_Word hlds__hlds_defns__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_defns____Unify____name_arity_0_0(
  MR_Word hlds__hlds_defns__HeadVar__1_1,
  MR_Word hlds__hlds_defns__HeadVar__2_2);

static void MR_CALL 
hlds__hlds_defns__output_prefixed_strings_5_p_0(
  MR_Word hlds__hlds_defns__HeadVar__1_1,
  MR_String hlds__hlds_defns__HeadVar__2_2,
  MR_Word hlds__hlds_defns__HeadVar__3_3);

static void MR_CALL 
hlds__hlds_defns__output_prefixed_name_arities_5_p_0(
  MR_Word hlds__hlds_defns__HeadVar__1_1,
  MR_String hlds__hlds_defns__HeadVar__2_2,
  MR_Word hlds__hlds_defns__HeadVar__3_3);

static void MR_CALL 
hlds__hlds_defns__instance_type_to_desc_2_p_0(
  MR_Word hlds__hlds_defns__Type_3,
  MR_String * hlds__hlds_defns__TypeDesc_4);

static void MR_CALL 
hlds__hlds_defns__gather_local_instance_names_for_class_5_p_0_1(
  MR_Box hlds__hlds_defns__closure_arg,
  MR_Box hlds__hlds_defns__wrapper_arg_1,
  MR_Box * hlds__hlds_defns__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_defns__gather_local_instance_names_for_class_5_p_0(
  MR_Word hlds__hlds_defns__ModuleName_1,
  MR_Word hlds__hlds_defns__ClassId_2,
  MR_Word hlds__hlds_defns__HeadVar__3_3,
  MR_Word hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_0_4,
  MR_Word * hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_5);

static void MR_CALL 
hlds__hlds_defns__gather_local_instance_names_4_p_0(
  MR_Word hlds__hlds_defns__ModuleName_1,
  MR_Word hlds__hlds_defns__HeadVar__2_2,
  MR_Word hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_0_3,
  MR_Word * hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_4);

static void MR_CALL 
hlds__hlds_defns__gather_local_typeclass_names_4_p_0(
  MR_Word hlds__hlds_defns__ModuleName_1,
  MR_Word hlds__hlds_defns__HeadVar__2_2,
  MR_Word hlds__hlds_defns__STATE_VARIABLE_ClassNameArities_0_3,
  MR_Word * hlds__hlds_defns__STATE_VARIABLE_ClassNameArities_4);

static void MR_CALL 
hlds__hlds_defns__gather_local_pred_names_6_p_0(
  MR_Word hlds__hlds_defns__HeadVar__1_1,
  MR_Word hlds__hlds_defns__HeadVar__2_2,
  MR_Word hlds__hlds_defns__STATE_VARIABLE_FuncNameArities_0_3,
  MR_Word * hlds__hlds_defns__STATE_VARIABLE_FuncNameArities_4,
  MR_Word hlds__hlds_defns__STATE_VARIABLE_PredNameArities_0_5,
  MR_Word * hlds__hlds_defns__STATE_VARIABLE_PredNameArities_6);

static void MR_CALL 
hlds__hlds_defns__gather_local_mode_names_4_p_0(
  MR_Word hlds__hlds_defns__ModuleName_1,
  MR_Word hlds__hlds_defns__HeadVar__2_2,
  MR_Word hlds__hlds_defns__STATE_VARIABLE_ModeNameArities_0_3,
  MR_Word * hlds__hlds_defns__STATE_VARIABLE_ModeNameArities_4);

static void MR_CALL 
hlds__hlds_defns__gather_local_inst_names_4_p_0(
  MR_Word hlds__hlds_defns__ModuleName_1,
  MR_Word hlds__hlds_defns__HeadVar__2_2,
  MR_Word hlds__hlds_defns__STATE_VARIABLE_InstNameArities_0_3,
  MR_Word * hlds__hlds_defns__STATE_VARIABLE_InstNameArities_4);

static void MR_CALL 
hlds__hlds_defns__gather_local_type_names_4_p_0(
  MR_Word hlds__hlds_defns__ModuleName_1,
  MR_Word hlds__hlds_defns__HeadVar__2_2,
  MR_Word hlds__hlds_defns__STATE_VARIABLE_TypeNameArities_0_3,
  MR_Word * hlds__hlds_defns__STATE_VARIABLE_TypeNameArities_4);


static /* final */ const MR_Box hlds__hlds_defns_scalar_common_1[1][2];

static /* final */ const MR_Box hlds__hlds_defns_scalar_common_2[1][5];

static /* final */ const MR_Box hlds__hlds_defns_scalar_common_3[1][3];

static /* final */ const MR_Box hlds__hlds_defns_scalar_common_4[1][1];




static /* final */ const MR_Box hlds__hlds_defns_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0))
  },
};

static /* final */ const MR_Box hlds__hlds_defns_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__hlds_defns_scalar_common_3[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__hlds_defns_scalar_common_2[0])),
    ((MR_Box) (hlds__hlds_defns__gather_local_instance_names_for_class_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_defns_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_PseudoTypeInfo hlds__hlds_defns__hlds__hlds_defns__field_types_name_arity_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc hlds__hlds_defns__hlds__hlds_defns__du_functor_desc_name_arity_0_0 = {
  (MR_String) "name_arity",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_defns__hlds__hlds_defns__field_types_name_arity_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__hlds_defns__hlds__hlds_defns__du_stag_ordered_name_arity_0_0[1] = {
  &hlds__hlds_defns__hlds__hlds_defns__du_functor_desc_name_arity_0_0
};

static const MR_DuPtagLayout hlds__hlds_defns__hlds__hlds_defns__du_ptag_ordered_name_arity_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_defns__hlds__hlds_defns__du_stag_ordered_name_arity_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_defns__hlds__hlds_defns__du_name_ordered_name_arity_0[1] = {
  &hlds__hlds_defns__hlds__hlds_defns__du_functor_desc_name_arity_0_0
};

static const MR_Integer hlds__hlds_defns__hlds__hlds_defns__functor_number_map_name_arity_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_defns____Unify____name_arity_0_0_10001)),
  ((MR_Box) (hlds__hlds_defns____Compare____name_arity_0_0_10001)),
  (MR_String) "hlds.hlds_defns",
  (MR_String) "name_arity",
  {     hlds__hlds_defns__hlds__hlds_defns__du_name_ordered_name_arity_0 },
  {     hlds__hlds_defns__hlds__hlds_defns__du_ptag_ordered_name_arity_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_defns__hlds__hlds_defns__functor_number_map_name_arity_0
};

static MR_bool MR_CALL 
hlds__hlds_defns____Unify____name_arity_0_0_10001(
  MR_Box hlds__hlds_defns__wrapper_arg_1,
  MR_Box hlds__hlds_defns__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_defns__succeeded;

    {
      hlds__hlds_defns__succeeded = hlds__hlds_defns____Unify____name_arity_0_0(((MR_Word) hlds__hlds_defns__wrapper_arg_1), ((MR_Word) hlds__hlds_defns__wrapper_arg_2));
    }
    return hlds__hlds_defns__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_defns____Compare____name_arity_0_0_10001(
  MR_Box * hlds__hlds_defns__wrapper_arg_1,
  MR_Box hlds__hlds_defns__wrapper_arg_2,
  MR_Box hlds__hlds_defns__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_defns__conv0_HeadVar__1_1;

    {
      hlds__hlds_defns____Compare____name_arity_0_0(&hlds__hlds_defns__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_defns__wrapper_arg_2), ((MR_Word) hlds__hlds_defns__wrapper_arg_3));
    }
    *hlds__hlds_defns__wrapper_arg_1 = ((MR_Box) (hlds__hlds_defns__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
hlds__hlds_defns____Compare____name_arity_0_0(
  MR_Word * hlds__hlds_defns__HeadVar__1_1,
  MR_Word hlds__hlds_defns__HeadVar__2_2,
  MR_Word hlds__hlds_defns__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_defns__succeeded;
    MR_Integer hlds__hlds_defns__CastX_9 = (MR_Integer) hlds__hlds_defns__HeadVar__2_2;
    MR_Integer hlds__hlds_defns__CastY_10 = (MR_Integer) hlds__hlds_defns__HeadVar__3_3;

    hlds__hlds_defns__succeeded = (hlds__hlds_defns__CastX_9 == hlds__hlds_defns__CastY_10);
    if (hlds__hlds_defns__succeeded)
      *hlds__hlds_defns__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String hlds__hlds_defns__Var_4 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer hlds__hlds_defns__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__HeadVar__2_2, (MR_Integer) 1)));
        MR_String hlds__hlds_defns__Var_6 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer hlds__hlds_defns__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__hlds_defns__Var_8;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&hlds__hlds_defns__Var_8, hlds__hlds_defns__Var_4, hlds__hlds_defns__Var_6);
        }
        hlds__hlds_defns__succeeded = (hlds__hlds_defns__Var_8 == (MR_Integer) 0);
        hlds__hlds_defns__succeeded = !(hlds__hlds_defns__succeeded);
        if (hlds__hlds_defns__succeeded)
          *hlds__hlds_defns__HeadVar__1_1 = hlds__hlds_defns__Var_8;
        else
          {
            mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_defns__HeadVar__1_1, hlds__hlds_defns__Var_5, hlds__hlds_defns__Var_7);
          }
      }
  }
}

static MR_bool MR_CALL 
hlds__hlds_defns____Unify____name_arity_0_0(
  MR_Word hlds__hlds_defns__HeadVar__1_1,
  MR_Word hlds__hlds_defns__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_defns__succeeded;
    MR_Integer hlds__hlds_defns__CastX_7 = (MR_Integer) hlds__hlds_defns__HeadVar__1_1;
    MR_Integer hlds__hlds_defns__CastY_8 = (MR_Integer) hlds__hlds_defns__HeadVar__2_2;

    hlds__hlds_defns__succeeded = (hlds__hlds_defns__CastX_7 == hlds__hlds_defns__CastY_8);
    if (hlds__hlds_defns__succeeded)
      hlds__hlds_defns__succeeded = MR_TRUE;
    else
      {
        MR_String hlds__hlds_defns__Var_3 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer hlds__hlds_defns__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__HeadVar__1_1, (MR_Integer) 1)));
        MR_String hlds__hlds_defns__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer hlds__hlds_defns__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__HeadVar__2_2, (MR_Integer) 1)));

        hlds__hlds_defns__succeeded = (strcmp(hlds__hlds_defns__Var_3, hlds__hlds_defns__Var_5) == 0);
        if (hlds__hlds_defns__succeeded)
          hlds__hlds_defns__succeeded = (hlds__hlds_defns__Var_4 == hlds__hlds_defns__Var_6);
      }
    return hlds__hlds_defns__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_defns__output_prefixed_strings_5_p_0(
  MR_Word hlds__hlds_defns__HeadVar__1_1,
  MR_String hlds__hlds_defns__HeadVar__2_2,
  MR_Word hlds__hlds_defns__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_defns__succeeded;

        if ((hlds__hlds_defns__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_String hlds__hlds_defns__Str_13 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word hlds__hlds_defns__Strs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__3_3, (MR_Integer) 1)));

            {
              mercury__io__write_string_4_p_0(hlds__hlds_defns__HeadVar__1_1, hlds__hlds_defns__HeadVar__2_2);
            }
            {
              mercury__io__write_string_4_p_0(hlds__hlds_defns__HeadVar__1_1, hlds__hlds_defns__Str_13);
            }
            {
              mercury__io__nl_3_p_0(hlds__hlds_defns__HeadVar__1_1);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_defns__next_value_of_HeadVar__3_3 = hlds__hlds_defns__Strs_14;

              hlds__hlds_defns__HeadVar__3_3 = hlds__hlds_defns__next_value_of_HeadVar__3_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_defns__output_prefixed_name_arities_5_p_0(
  MR_Word hlds__hlds_defns__HeadVar__1_1,
  MR_String hlds__hlds_defns__HeadVar__2_2,
  MR_Word hlds__hlds_defns__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_defns__succeeded;

        if ((hlds__hlds_defns__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word hlds__hlds_defns__NameArity_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word hlds__hlds_defns__NameArities_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__3_3, (MR_Integer) 1)));
            MR_String hlds__hlds_defns__Name_16 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__NameArity_13, (MR_Integer) 0)));
            MR_Integer hlds__hlds_defns__Arity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__NameArity_13, (MR_Integer) 1)));

            {
              mercury__io__write_string_4_p_0(hlds__hlds_defns__HeadVar__1_1, hlds__hlds_defns__HeadVar__2_2);
            }
            {
              mercury__io__write_string_4_p_0(hlds__hlds_defns__HeadVar__1_1, hlds__hlds_defns__Name_16);
            }
            {
              mercury__io__write_string_4_p_0(hlds__hlds_defns__HeadVar__1_1, (MR_String) "/");
            }
            {
              mercury__io__write_int_4_p_0(hlds__hlds_defns__HeadVar__1_1, hlds__hlds_defns__Arity_17);
            }
            {
              mercury__io__nl_3_p_0(hlds__hlds_defns__HeadVar__1_1);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_defns__next_value_of_HeadVar__3_3 = hlds__hlds_defns__NameArities_14;

              hlds__hlds_defns__HeadVar__3_3 = hlds__hlds_defns__next_value_of_HeadVar__3_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_defns__instance_type_to_desc_2_p_0(
  MR_Word hlds__hlds_defns__Type_3,
  MR_String * hlds__hlds_defns__TypeDesc_4)
{
  {
    MR_bool hlds__hlds_defns__succeeded;
    MR_Word hlds__hlds_defns__TypeCtor_5;
    MR_Word hlds__hlds_defns__TypeSymName_6;
    MR_Integer hlds__hlds_defns__TypeArity_7;
    MR_String hlds__hlds_defns__TypeName_8;
    MR_String hlds__hlds_defns__Var_9;
    MR_String hlds__hlds_defns__Var_11;

    {
      parse_tree__prog_type__type_to_ctor_det_2_p_0(hlds__hlds_defns__Type_3, &hlds__hlds_defns__TypeCtor_5);
    }
    hlds__hlds_defns__TypeSymName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__TypeCtor_5, (MR_Integer) 0)));
    hlds__hlds_defns__TypeArity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__TypeCtor_5, (MR_Integer) 1)));
    {
      hlds__hlds_defns__TypeName_8 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__hlds_defns__TypeSymName_6);
    }
    {
      hlds__hlds_defns__Var_11 = mercury__string__int_to_string_1_f_0(hlds__hlds_defns__TypeArity_7);
    }
    {
      hlds__hlds_defns__Var_9 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_defns__Var_11);
    }
    {
      *hlds__hlds_defns__TypeDesc_4 = mercury__string__f_43_43_2_f_0(hlds__hlds_defns__TypeName_8, hlds__hlds_defns__Var_9);
    }
  }
}

static void MR_CALL 
hlds__hlds_defns__gather_local_instance_names_for_class_5_p_0_1(
  MR_Box hlds__hlds_defns__closure_arg,
  MR_Box hlds__hlds_defns__wrapper_arg_1,
  MR_Box * hlds__hlds_defns__wrapper_arg_2)
{
  {
    MR_Box hlds__hlds_defns__closure = hlds__hlds_defns__closure_arg;
    MR_String hlds__hlds_defns__conv0_TypeDesc_4;

    {
      hlds__hlds_defns__instance_type_to_desc_2_p_0(((MR_Word) hlds__hlds_defns__wrapper_arg_1), &hlds__hlds_defns__conv0_TypeDesc_4);
    }
    *hlds__hlds_defns__wrapper_arg_2 = ((MR_Box) (hlds__hlds_defns__conv0_TypeDesc_4));
  }
}

static void MR_CALL 
hlds__hlds_defns__gather_local_instance_names_for_class_5_p_0(
  MR_Word hlds__hlds_defns__ModuleName_1,
  MR_Word hlds__hlds_defns__ClassId_2,
  MR_Word hlds__hlds_defns__HeadVar__3_3,
  MR_Word hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_0_4,
  MR_Word * hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_defns__succeeded;

        if ((hlds__hlds_defns__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_5 = hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_0_4;
        else
          {
            MR_Word hlds__hlds_defns__InstanceDefn_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word hlds__hlds_defns__InstanceDefns_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word hlds__hlds_defns__InstanceModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__InstanceDefn_13, (MR_Integer) 0)));
            MR_Word hlds__hlds_defns__OrigTypes_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__InstanceDefn_13, (MR_Integer) 2)));
            MR_Word hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_44_44;
            MR_Word hlds__hlds_defns___Types_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__InstanceDefn_13, (MR_Integer) 1)));
            MR_Word hlds__hlds_defns___Status_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__InstanceDefn_13, (MR_Integer) 3)));
            MR_Word hlds__hlds_defns___Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__InstanceDefn_13, (MR_Integer) 4)));
            MR_Word hlds__hlds_defns___Constraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__InstanceDefn_13, (MR_Integer) 5)));
            MR_Word hlds__hlds_defns___Body_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__InstanceDefn_13, (MR_Integer) 6)));
            MR_Word hlds__hlds_defns___Interface_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__InstanceDefn_13, (MR_Integer) 7)));
            MR_Word hlds__hlds_defns___TVarSet_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__InstanceDefn_13, (MR_Integer) 8)));
            MR_Word hlds__hlds_defns___Proofs_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__InstanceDefn_13, (MR_Integer) 9)));

            {
              hlds__hlds_defns__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__hlds_defns__InstanceModuleName_16, hlds__hlds_defns__ModuleName_1);
            }
            if (hlds__hlds_defns__succeeded)
              {
                MR_Word hlds__hlds_defns__TypeCtorInfo_49_49;
                MR_Word hlds__hlds_defns__ClassSymName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__ClassId_2, (MR_Integer) 0)));
                MR_Integer hlds__hlds_defns__ClassArity_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__ClassId_2, (MR_Integer) 1)));
                MR_String hlds__hlds_defns__ClassName_28;
                MR_Word hlds__hlds_defns__OrigTypeDescs_29;
                MR_String hlds__hlds_defns__TypeVectorDesc_30;
                MR_String hlds__hlds_defns__InstanceDesc_31;
                MR_String hlds__hlds_defns__Var_51;
                MR_String hlds__hlds_defns__Var_53;
                MR_String hlds__hlds_defns__Var_54;
                MR_String hlds__hlds_defns__Var_61;
                MR_String hlds__hlds_defns__Var_63;

                {
                  hlds__hlds_defns__ClassName_28 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__hlds_defns__ClassSymName_26);
                }
                hlds__hlds_defns__TypeCtorInfo_49_49 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                {
                  mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_defns__TypeCtorInfo_49_49, (MR_Word) &hlds__hlds_defns_scalar_common_3[0], hlds__hlds_defns__OrigTypes_18, &hlds__hlds_defns__OrigTypeDescs_29);
                }
                {
                  hlds__hlds_defns__TypeVectorDesc_30 = mercury__string__join_list_2_f_0((MR_String) ", ", hlds__hlds_defns__OrigTypeDescs_29);
                }
                {
                  hlds__hlds_defns__Var_51 = mercury__string__f_43_43_2_f_0(hlds__hlds_defns__TypeVectorDesc_30, (MR_String) ">");
                }
                {
                  hlds__hlds_defns__Var_53 = mercury__string__f_43_43_2_f_0((MR_String) " <", hlds__hlds_defns__Var_51);
                }
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_defns_scalar_common_4[0], hlds__hlds_defns__ClassArity_27, &hlds__hlds_defns__Var_54);
                }
                {
                  hlds__hlds_defns__Var_61 = mercury__string__f_43_43_2_f_0(hlds__hlds_defns__Var_54, hlds__hlds_defns__Var_53);
                }
                {
                  hlds__hlds_defns__Var_63 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_defns__Var_61);
                }
                {
                  hlds__hlds_defns__InstanceDesc_31 = mercury__string__f_43_43_2_f_0(hlds__hlds_defns__ClassName_28, hlds__hlds_defns__Var_63);
                }
                {
                  mercury__set__insert_3_p_0(hlds__hlds_defns__TypeCtorInfo_49_49, ((MR_Box) (hlds__hlds_defns__InstanceDesc_31)), hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_0_4, &hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_44_44);
                }
              }
            else
              hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_44_44 = hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_0_4;
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_defns__next_value_of_HeadVar__3_3 = hlds__hlds_defns__InstanceDefns_14;
              MR_Word hlds__hlds_defns__next_value_of_STATE_VARIABLE_InstanceDescs_0_4 = hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_44_44;

              hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_0_4 = hlds__hlds_defns__next_value_of_STATE_VARIABLE_InstanceDescs_0_4;
              hlds__hlds_defns__HeadVar__3_3 = hlds__hlds_defns__next_value_of_HeadVar__3_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_defns__gather_local_instance_names_4_p_0(
  MR_Word hlds__hlds_defns__ModuleName_1,
  MR_Word hlds__hlds_defns__HeadVar__2_2,
  MR_Word hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_0_3,
  MR_Word * hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_defns__succeeded;

        if ((hlds__hlds_defns__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_4 = hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_0_3;
        else
          {
            MR_Word hlds__hlds_defns__InstancePair_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__hlds_defns__InstancePairs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__hlds_defns__ClassId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__InstancePair_10, (MR_Integer) 0)));
            MR_Word hlds__hlds_defns__InstanceDefns_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__InstancePair_10, (MR_Integer) 1)));
            MR_Word hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_17_17;

            {
              hlds__hlds_defns__gather_local_instance_names_for_class_5_p_0(hlds__hlds_defns__ModuleName_1, hlds__hlds_defns__ClassId_13, hlds__hlds_defns__InstanceDefns_14, hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_0_3, &hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_17_17);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_defns__next_value_of_HeadVar__2_2 = hlds__hlds_defns__InstancePairs_11;
              MR_Word hlds__hlds_defns__next_value_of_STATE_VARIABLE_InstanceDescs_0_3 = hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_17_17;

              hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_0_3 = hlds__hlds_defns__next_value_of_STATE_VARIABLE_InstanceDescs_0_3;
              hlds__hlds_defns__HeadVar__2_2 = hlds__hlds_defns__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_defns__gather_local_typeclass_names_4_p_0(
  MR_Word hlds__hlds_defns__ModuleName_1,
  MR_Word hlds__hlds_defns__HeadVar__2_2,
  MR_Word hlds__hlds_defns__STATE_VARIABLE_ClassNameArities_0_3,
  MR_Word * hlds__hlds_defns__STATE_VARIABLE_ClassNameArities_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_defns__succeeded;

        if ((hlds__hlds_defns__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__hlds_defns__STATE_VARIABLE_ClassNameArities_4 = hlds__hlds_defns__STATE_VARIABLE_ClassNameArities_0_3;
        else
          {
            MR_Word hlds__hlds_defns__ClassId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__hlds_defns__ClassIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__hlds_defns__ClassSymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__ClassId_10, (MR_Integer) 0)));
            MR_Integer hlds__hlds_defns__ClassArity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__ClassId_10, (MR_Integer) 1)));
            MR_Word hlds__hlds_defns__STATE_VARIABLE_ClassNameArities_21_21;

            if (((MR_tag((MR_Word) hlds__hlds_defns__ClassSymName_13)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Word hlds__hlds_defns__ClassModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__ClassSymName_13, (MR_Integer) 0)));
                MR_String hlds__hlds_defns__ClassName_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__ClassSymName_13, (MR_Integer) 1)));

                {
                  hlds__hlds_defns__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__hlds_defns__ClassModuleName_16, hlds__hlds_defns__ModuleName_1);
                }
                if (hlds__hlds_defns__succeeded)
                  {
                    MR_Word hlds__hlds_defns__Var_20;

                    {
                      hlds__hlds_defns__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__hlds_defns__Var_20, 0) = ((MR_Box) (hlds__hlds_defns__ClassName_17));
                      MR_hl_field(MR_mktag(0), hlds__hlds_defns__Var_20, 1) = ((MR_Box) (hlds__hlds_defns__ClassArity_14));
                    }
                    {
                      mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0, ((MR_Box) (hlds__hlds_defns__Var_20)), hlds__hlds_defns__STATE_VARIABLE_ClassNameArities_0_3, &hlds__hlds_defns__STATE_VARIABLE_ClassNameArities_21_21);
                    }
                  }
                else
                  hlds__hlds_defns__STATE_VARIABLE_ClassNameArities_21_21 = hlds__hlds_defns__STATE_VARIABLE_ClassNameArities_0_3;
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_defns", (MR_String) "predicate \140hlds.hlds_defns.gather_local_typeclass_names\'/4", (MR_String) "unqualified class_id name");
                  return;
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_defns__next_value_of_HeadVar__2_2 = hlds__hlds_defns__ClassIds_11;
              MR_Word hlds__hlds_defns__next_value_of_STATE_VARIABLE_ClassNameArities_0_3 = hlds__hlds_defns__STATE_VARIABLE_ClassNameArities_21_21;

              hlds__hlds_defns__STATE_VARIABLE_ClassNameArities_0_3 = hlds__hlds_defns__next_value_of_STATE_VARIABLE_ClassNameArities_0_3;
              hlds__hlds_defns__HeadVar__2_2 = hlds__hlds_defns__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_defns__gather_local_pred_names_6_p_0(
  MR_Word hlds__hlds_defns__HeadVar__1_1,
  MR_Word hlds__hlds_defns__HeadVar__2_2,
  MR_Word hlds__hlds_defns__STATE_VARIABLE_FuncNameArities_0_3,
  MR_Word * hlds__hlds_defns__STATE_VARIABLE_FuncNameArities_4,
  MR_Word hlds__hlds_defns__STATE_VARIABLE_PredNameArities_0_5,
  MR_Word * hlds__hlds_defns__STATE_VARIABLE_PredNameArities_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_defns__succeeded;

        if ((hlds__hlds_defns__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__hlds_defns__STATE_VARIABLE_PredNameArities_6 = hlds__hlds_defns__STATE_VARIABLE_PredNameArities_0_5;
            *hlds__hlds_defns__STATE_VARIABLE_FuncNameArities_4 = hlds__hlds_defns__STATE_VARIABLE_FuncNameArities_0_3;
          }
        else
          {
            MR_Word hlds__hlds_defns__PredDefn_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__hlds_defns__PredDefns_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__hlds_defns__PredInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__PredDefn_15, (MR_Integer) 1)));
            MR_Word hlds__hlds_defns__PredModuleName_21;
            MR_Word hlds__hlds_defns__Origin_22;
            MR_Word hlds__hlds_defns__STATE_VARIABLE_PredNameArities_32_32;
            MR_Word hlds__hlds_defns__STATE_VARIABLE_FuncNameArities_33_33;
            MR_Word hlds__hlds_defns___PredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__PredDefn_15, (MR_Integer) 0)));
            MR_Word hlds__hlds_defns__Var_23;

            {
              hlds__hlds_pred__pred_info_get_module_name_2_p_0(hlds__hlds_defns__PredInfo_20, &hlds__hlds_defns__PredModuleName_21);
            }
            {
              hlds__hlds_pred__pred_info_get_origin_2_p_0(hlds__hlds_defns__PredInfo_20, &hlds__hlds_defns__Origin_22);
            }
            {
              hlds__hlds_defns__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__hlds_defns__PredModuleName_21, hlds__hlds_defns__HeadVar__1_1);
            }
            if (hlds__hlds_defns__succeeded)
              {
                hlds__hlds_defns__succeeded = ((((MR_tag((MR_Word) hlds__hlds_defns__Origin_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_defns__Origin_22, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (hlds__hlds_defns__succeeded)
                  hlds__hlds_defns__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_defns__Origin_22, (MR_Integer) 1)));
              }
            if (hlds__hlds_defns__succeeded)
              {
                MR_String hlds__hlds_defns__PredName_24;
                MR_Integer hlds__hlds_defns__PredArity_25;
                MR_Word hlds__hlds_defns__NameArity_26;
                MR_Word hlds__hlds_defns__PorF_27;

                {
                  hlds__hlds_pred__pred_info_get_name_2_p_0(hlds__hlds_defns__PredInfo_20, &hlds__hlds_defns__PredName_24);
                }
                {
                  hlds__hlds_defns__PredArity_25 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__hlds_defns__PredInfo_20);
                }
                {
                  hlds__hlds_defns__NameArity_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__hlds_defns__NameArity_26, 0) = ((MR_Box) (hlds__hlds_defns__PredName_24));
                  MR_hl_field(MR_mktag(0), hlds__hlds_defns__NameArity_26, 1) = ((MR_Box) (hlds__hlds_defns__PredArity_25));
                }
                {
                  hlds__hlds_defns__PorF_27 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__hlds_defns__PredInfo_20);
                }
                switch (hlds__hlds_defns__PorF_27) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0, ((MR_Box) (hlds__hlds_defns__NameArity_26)), hlds__hlds_defns__STATE_VARIABLE_FuncNameArities_0_3, &hlds__hlds_defns__STATE_VARIABLE_FuncNameArities_33_33);
                      }
                      hlds__hlds_defns__STATE_VARIABLE_PredNameArities_32_32 = hlds__hlds_defns__STATE_VARIABLE_PredNameArities_0_5;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0, ((MR_Box) (hlds__hlds_defns__NameArity_26)), hlds__hlds_defns__STATE_VARIABLE_PredNameArities_0_5, &hlds__hlds_defns__STATE_VARIABLE_PredNameArities_32_32);
                      }
                      hlds__hlds_defns__STATE_VARIABLE_FuncNameArities_33_33 = hlds__hlds_defns__STATE_VARIABLE_FuncNameArities_0_3;
                    }
                    break;
                }
              }
            else
              {
                hlds__hlds_defns__STATE_VARIABLE_PredNameArities_32_32 = hlds__hlds_defns__STATE_VARIABLE_PredNameArities_0_5;
                hlds__hlds_defns__STATE_VARIABLE_FuncNameArities_33_33 = hlds__hlds_defns__STATE_VARIABLE_FuncNameArities_0_3;
              }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_defns__next_value_of_HeadVar__2_2 = hlds__hlds_defns__PredDefns_16;
              MR_Word hlds__hlds_defns__next_value_of_STATE_VARIABLE_FuncNameArities_0_3 = hlds__hlds_defns__STATE_VARIABLE_FuncNameArities_33_33;
              MR_Word hlds__hlds_defns__next_value_of_STATE_VARIABLE_PredNameArities_0_5 = hlds__hlds_defns__STATE_VARIABLE_PredNameArities_32_32;

              hlds__hlds_defns__STATE_VARIABLE_PredNameArities_0_5 = hlds__hlds_defns__next_value_of_STATE_VARIABLE_PredNameArities_0_5;
              hlds__hlds_defns__STATE_VARIABLE_FuncNameArities_0_3 = hlds__hlds_defns__next_value_of_STATE_VARIABLE_FuncNameArities_0_3;
              hlds__hlds_defns__HeadVar__2_2 = hlds__hlds_defns__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_defns__gather_local_mode_names_4_p_0(
  MR_Word hlds__hlds_defns__ModuleName_1,
  MR_Word hlds__hlds_defns__HeadVar__2_2,
  MR_Word hlds__hlds_defns__STATE_VARIABLE_ModeNameArities_0_3,
  MR_Word * hlds__hlds_defns__STATE_VARIABLE_ModeNameArities_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_defns__succeeded;

        if ((hlds__hlds_defns__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__hlds_defns__STATE_VARIABLE_ModeNameArities_4 = hlds__hlds_defns__STATE_VARIABLE_ModeNameArities_0_3;
        else
          {
            MR_Word hlds__hlds_defns__ModeId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__hlds_defns__ModeIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__hlds_defns__ModeSymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__ModeId_10, (MR_Integer) 0)));
            MR_Integer hlds__hlds_defns__ModeArity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__ModeId_10, (MR_Integer) 1)));
            MR_Word hlds__hlds_defns__STATE_VARIABLE_ModeNameArities_21_21;

            if (((MR_tag((MR_Word) hlds__hlds_defns__ModeSymName_13)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Word hlds__hlds_defns__ModeModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__ModeSymName_13, (MR_Integer) 0)));
                MR_String hlds__hlds_defns__ModeName_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__ModeSymName_13, (MR_Integer) 1)));

                {
                  hlds__hlds_defns__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__hlds_defns__ModeModuleName_16, hlds__hlds_defns__ModuleName_1);
                }
                if (hlds__hlds_defns__succeeded)
                  {
                    MR_Word hlds__hlds_defns__Var_20;

                    {
                      hlds__hlds_defns__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__hlds_defns__Var_20, 0) = ((MR_Box) (hlds__hlds_defns__ModeName_17));
                      MR_hl_field(MR_mktag(0), hlds__hlds_defns__Var_20, 1) = ((MR_Box) (hlds__hlds_defns__ModeArity_14));
                    }
                    {
                      mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0, ((MR_Box) (hlds__hlds_defns__Var_20)), hlds__hlds_defns__STATE_VARIABLE_ModeNameArities_0_3, &hlds__hlds_defns__STATE_VARIABLE_ModeNameArities_21_21);
                    }
                  }
                else
                  hlds__hlds_defns__STATE_VARIABLE_ModeNameArities_21_21 = hlds__hlds_defns__STATE_VARIABLE_ModeNameArities_0_3;
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_defns", (MR_String) "predicate \140hlds.hlds_defns.gather_local_mode_names\'/4", (MR_String) "unqualified mode_id name");
                  return;
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_defns__next_value_of_HeadVar__2_2 = hlds__hlds_defns__ModeIds_11;
              MR_Word hlds__hlds_defns__next_value_of_STATE_VARIABLE_ModeNameArities_0_3 = hlds__hlds_defns__STATE_VARIABLE_ModeNameArities_21_21;

              hlds__hlds_defns__STATE_VARIABLE_ModeNameArities_0_3 = hlds__hlds_defns__next_value_of_STATE_VARIABLE_ModeNameArities_0_3;
              hlds__hlds_defns__HeadVar__2_2 = hlds__hlds_defns__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_defns__gather_local_inst_names_4_p_0(
  MR_Word hlds__hlds_defns__ModuleName_1,
  MR_Word hlds__hlds_defns__HeadVar__2_2,
  MR_Word hlds__hlds_defns__STATE_VARIABLE_InstNameArities_0_3,
  MR_Word * hlds__hlds_defns__STATE_VARIABLE_InstNameArities_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_defns__succeeded;

        if ((hlds__hlds_defns__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__hlds_defns__STATE_VARIABLE_InstNameArities_4 = hlds__hlds_defns__STATE_VARIABLE_InstNameArities_0_3;
        else
          {
            MR_Word hlds__hlds_defns__InstId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__hlds_defns__InstIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__hlds_defns__InstSymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__InstId_10, (MR_Integer) 0)));
            MR_Integer hlds__hlds_defns__InstArity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__InstId_10, (MR_Integer) 1)));
            MR_Word hlds__hlds_defns__STATE_VARIABLE_InstNameArities_21_21;

            if (((MR_tag((MR_Word) hlds__hlds_defns__InstSymName_13)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Word hlds__hlds_defns__InstModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__InstSymName_13, (MR_Integer) 0)));
                MR_String hlds__hlds_defns__InstName_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__InstSymName_13, (MR_Integer) 1)));

                {
                  hlds__hlds_defns__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__hlds_defns__InstModuleName_16, hlds__hlds_defns__ModuleName_1);
                }
                if (hlds__hlds_defns__succeeded)
                  {
                    MR_Word hlds__hlds_defns__Var_20;

                    {
                      hlds__hlds_defns__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__hlds_defns__Var_20, 0) = ((MR_Box) (hlds__hlds_defns__InstName_17));
                      MR_hl_field(MR_mktag(0), hlds__hlds_defns__Var_20, 1) = ((MR_Box) (hlds__hlds_defns__InstArity_14));
                    }
                    {
                      mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0, ((MR_Box) (hlds__hlds_defns__Var_20)), hlds__hlds_defns__STATE_VARIABLE_InstNameArities_0_3, &hlds__hlds_defns__STATE_VARIABLE_InstNameArities_21_21);
                    }
                  }
                else
                  hlds__hlds_defns__STATE_VARIABLE_InstNameArities_21_21 = hlds__hlds_defns__STATE_VARIABLE_InstNameArities_0_3;
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_defns", (MR_String) "predicate \140hlds.hlds_defns.gather_local_inst_names\'/4", (MR_String) "unqualified inst_id name");
                  return;
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_defns__next_value_of_HeadVar__2_2 = hlds__hlds_defns__InstIds_11;
              MR_Word hlds__hlds_defns__next_value_of_STATE_VARIABLE_InstNameArities_0_3 = hlds__hlds_defns__STATE_VARIABLE_InstNameArities_21_21;

              hlds__hlds_defns__STATE_VARIABLE_InstNameArities_0_3 = hlds__hlds_defns__next_value_of_STATE_VARIABLE_InstNameArities_0_3;
              hlds__hlds_defns__HeadVar__2_2 = hlds__hlds_defns__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_defns__gather_local_type_names_4_p_0(
  MR_Word hlds__hlds_defns__ModuleName_1,
  MR_Word hlds__hlds_defns__HeadVar__2_2,
  MR_Word hlds__hlds_defns__STATE_VARIABLE_TypeNameArities_0_3,
  MR_Word * hlds__hlds_defns__STATE_VARIABLE_TypeNameArities_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_defns__succeeded;

        if ((hlds__hlds_defns__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__hlds_defns__STATE_VARIABLE_TypeNameArities_4 = hlds__hlds_defns__STATE_VARIABLE_TypeNameArities_0_3;
        else
          {
            MR_Word hlds__hlds_defns__TypeCtor_10;
            MR_Word hlds__hlds_defns__TypeCtorDefns_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__hlds_defns__TypeCtorSymName_14;
            MR_Integer hlds__hlds_defns__TypeCtorArity_15;
            MR_Word hlds__hlds_defns__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__hlds_defns__STATE_VARIABLE_TypeNameArities_23_23;
            MR_Word hlds__hlds_defns___Defn_11;

            hlds__hlds_defns__TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__Var_21, (MR_Integer) 0)));
            hlds__hlds_defns___Defn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__Var_21, (MR_Integer) 1)));
            hlds__hlds_defns__TypeCtorSymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__TypeCtor_10, (MR_Integer) 0)));
            hlds__hlds_defns__TypeCtorArity_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__TypeCtor_10, (MR_Integer) 1)));
            if (((MR_tag((MR_Word) hlds__hlds_defns__TypeCtorSymName_14)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Word hlds__hlds_defns__TypeCtorModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__TypeCtorSymName_14, (MR_Integer) 0)));
                MR_String hlds__hlds_defns__TypeCtorName_18 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__TypeCtorSymName_14, (MR_Integer) 1)));

                {
                  hlds__hlds_defns__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__hlds_defns__TypeCtorModuleName_17, hlds__hlds_defns__ModuleName_1);
                }
                if (hlds__hlds_defns__succeeded)
                  {
                    MR_Word hlds__hlds_defns__Var_22;

                    {
                      hlds__hlds_defns__Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__hlds_defns__Var_22, 0) = ((MR_Box) (hlds__hlds_defns__TypeCtorName_18));
                      MR_hl_field(MR_mktag(0), hlds__hlds_defns__Var_22, 1) = ((MR_Box) (hlds__hlds_defns__TypeCtorArity_15));
                    }
                    {
                      mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0, ((MR_Box) (hlds__hlds_defns__Var_22)), hlds__hlds_defns__STATE_VARIABLE_TypeNameArities_0_3, &hlds__hlds_defns__STATE_VARIABLE_TypeNameArities_23_23);
                    }
                  }
                else
                  hlds__hlds_defns__STATE_VARIABLE_TypeNameArities_23_23 = hlds__hlds_defns__STATE_VARIABLE_TypeNameArities_0_3;
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_defns", (MR_String) "predicate \140hlds.hlds_defns.gather_local_type_names\'/4", (MR_String) "unqualified type_ctor name");
                  return;
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_defns__next_value_of_HeadVar__2_2 = hlds__hlds_defns__TypeCtorDefns_12;
              MR_Word hlds__hlds_defns__next_value_of_STATE_VARIABLE_TypeNameArities_0_3 = hlds__hlds_defns__STATE_VARIABLE_TypeNameArities_23_23;

              hlds__hlds_defns__STATE_VARIABLE_TypeNameArities_0_3 = hlds__hlds_defns__next_value_of_STATE_VARIABLE_TypeNameArities_0_3;
              hlds__hlds_defns__HeadVar__2_2 = hlds__hlds_defns__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
hlds__hlds_defns__write_hlds_defns_4_p_0(
  MR_Word hlds__hlds_defns__Stream_5,
  MR_Word hlds__hlds_defns__ModuleInfo_6)
{
  {
    MR_bool hlds__hlds_defns__succeeded;
    MR_Word hlds__hlds_defns__TypeCtorInfo_60_60;
    MR_Word hlds__hlds_defns__TypeCtorInfo_67_67;
    MR_Word hlds__hlds_defns__TypeCtorInfo_70_70;
    MR_Word hlds__hlds_defns__ModuleName_8;
    MR_Word hlds__hlds_defns__TypeTable_9;
    MR_Word hlds__hlds_defns__TypeCtorDefns_10;
    MR_Word hlds__hlds_defns__TypeNameArities_11;
    MR_Word hlds__hlds_defns__InstTable_12;
    MR_Word hlds__hlds_defns__UserInstTable_13;
    MR_Word hlds__hlds_defns__UserInstIds_14;
    MR_Word hlds__hlds_defns__InstNameArities_15;
    MR_Word hlds__hlds_defns__ModeTable_16;
    MR_Word hlds__hlds_defns__ModeDefnMap_17;
    MR_Word hlds__hlds_defns__ModeIds_18;
    MR_Word hlds__hlds_defns__ModeNameArities_19;
    MR_Word hlds__hlds_defns__Preds_20;
    MR_Word hlds__hlds_defns__PredDefns_21;
    MR_Word hlds__hlds_defns__FuncNameArities_22;
    MR_Word hlds__hlds_defns__PredNameArities_23;
    MR_Word hlds__hlds_defns__ClassTable_24;
    MR_Word hlds__hlds_defns__ClassIds_25;
    MR_Word hlds__hlds_defns__ClassNameArities_26;
    MR_Word hlds__hlds_defns__InstanceTable_27;
    MR_Word hlds__hlds_defns__InstanceDefns_28;
    MR_Word hlds__hlds_defns__InstanceDescs_29;
    MR_Word hlds__hlds_defns__Var_32;
    MR_Word hlds__hlds_defns__Var_33;
    MR_Word hlds__hlds_defns__Var_34;
    MR_Word hlds__hlds_defns__Var_35;
    MR_Word hlds__hlds_defns__Var_36;
    MR_Word hlds__hlds_defns__Var_37;
    MR_Word hlds__hlds_defns__Var_38;
    MR_Word hlds__hlds_defns__Var_40;
    MR_Word hlds__hlds_defns__Var_43;
    MR_Word hlds__hlds_defns__Var_46;
    MR_Word hlds__hlds_defns__Var_49;
    MR_Word hlds__hlds_defns__Var_52;
    MR_Word hlds__hlds_defns__Var_55;
    MR_Word hlds__hlds_defns__Var_58;

    {
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__hlds_defns__ModuleInfo_6, &hlds__hlds_defns__ModuleName_8);
    }
    {
      hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__hlds_defns__ModuleInfo_6, &hlds__hlds_defns__TypeTable_9);
    }
    {
      hlds__hlds_data__get_all_type_ctor_defns_2_p_0(hlds__hlds_defns__TypeTable_9, &hlds__hlds_defns__TypeCtorDefns_10);
    }
    hlds__hlds_defns__TypeCtorInfo_60_60 = (MR_Word) &hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0;
    {
      hlds__hlds_defns__Var_32 = mercury__set__init_0_f_0(hlds__hlds_defns__TypeCtorInfo_60_60);
    }
    {
      hlds__hlds_defns__gather_local_type_names_4_p_0(hlds__hlds_defns__ModuleName_8, hlds__hlds_defns__TypeCtorDefns_10, hlds__hlds_defns__Var_32, &hlds__hlds_defns__TypeNameArities_11);
    }
    {
      hlds__hlds_module__module_info_get_inst_table_2_p_0(hlds__hlds_defns__ModuleInfo_6, &hlds__hlds_defns__InstTable_12);
    }
    {
      hlds__hlds_data__inst_table_get_user_insts_2_p_0(hlds__hlds_defns__InstTable_12, &hlds__hlds_defns__UserInstTable_13);
    }
    {
      mercury__map__keys_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0, hlds__hlds_defns__UserInstTable_13, &hlds__hlds_defns__UserInstIds_14);
    }
    {
      hlds__hlds_defns__Var_33 = mercury__set__init_0_f_0(hlds__hlds_defns__TypeCtorInfo_60_60);
    }
    {
      hlds__hlds_defns__gather_local_inst_names_4_p_0(hlds__hlds_defns__ModuleName_8, hlds__hlds_defns__UserInstIds_14, hlds__hlds_defns__Var_33, &hlds__hlds_defns__InstNameArities_15);
    }
    {
      hlds__hlds_module__module_info_get_mode_table_2_p_0(hlds__hlds_defns__ModuleInfo_6, &hlds__hlds_defns__ModeTable_16);
    }
    {
      hlds__hlds_data__mode_table_get_mode_defns_2_p_0(hlds__hlds_defns__ModeTable_16, &hlds__hlds_defns__ModeDefnMap_17);
    }
    {
      mercury__map__keys_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0, hlds__hlds_defns__ModeDefnMap_17, &hlds__hlds_defns__ModeIds_18);
    }
    {
      hlds__hlds_defns__Var_34 = mercury__set__init_0_f_0(hlds__hlds_defns__TypeCtorInfo_60_60);
    }
    {
      hlds__hlds_defns__gather_local_mode_names_4_p_0(hlds__hlds_defns__ModuleName_8, hlds__hlds_defns__ModeIds_18, hlds__hlds_defns__Var_34, &hlds__hlds_defns__ModeNameArities_19);
    }
    {
      hlds__hlds_module__module_info_get_preds_2_p_0(hlds__hlds_defns__ModuleInfo_6, &hlds__hlds_defns__Preds_20);
    }
    {
      mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__hlds_defns__Preds_20, &hlds__hlds_defns__PredDefns_21);
    }
    {
      hlds__hlds_defns__Var_35 = mercury__set__init_0_f_0(hlds__hlds_defns__TypeCtorInfo_60_60);
    }
    {
      hlds__hlds_defns__Var_36 = mercury__set__init_0_f_0(hlds__hlds_defns__TypeCtorInfo_60_60);
    }
    {
      hlds__hlds_defns__gather_local_pred_names_6_p_0(hlds__hlds_defns__ModuleName_8, hlds__hlds_defns__PredDefns_21, hlds__hlds_defns__Var_35, &hlds__hlds_defns__FuncNameArities_22, hlds__hlds_defns__Var_36, &hlds__hlds_defns__PredNameArities_23);
    }
    {
      hlds__hlds_module__module_info_get_class_table_2_p_0(hlds__hlds_defns__ModuleInfo_6, &hlds__hlds_defns__ClassTable_24);
    }
    hlds__hlds_defns__TypeCtorInfo_67_67 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
    {
      mercury__map__keys_2_p_0(hlds__hlds_defns__TypeCtorInfo_67_67, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, hlds__hlds_defns__ClassTable_24, &hlds__hlds_defns__ClassIds_25);
    }
    {
      hlds__hlds_defns__Var_37 = mercury__set__init_0_f_0(hlds__hlds_defns__TypeCtorInfo_60_60);
    }
    {
      hlds__hlds_defns__gather_local_typeclass_names_4_p_0(hlds__hlds_defns__ModuleName_8, hlds__hlds_defns__ClassIds_25, hlds__hlds_defns__Var_37, &hlds__hlds_defns__ClassNameArities_26);
    }
    {
      hlds__hlds_module__module_info_get_instance_table_2_p_0(hlds__hlds_defns__ModuleInfo_6, &hlds__hlds_defns__InstanceTable_27);
    }
    {
      mercury__map__to_sorted_assoc_list_2_p_0(hlds__hlds_defns__TypeCtorInfo_67_67, (MR_Word) &hlds__hlds_defns_scalar_common_1[0], hlds__hlds_defns__InstanceTable_27, &hlds__hlds_defns__InstanceDefns_28);
    }
    hlds__hlds_defns__TypeCtorInfo_70_70 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      hlds__hlds_defns__Var_38 = mercury__set__init_0_f_0(hlds__hlds_defns__TypeCtorInfo_70_70);
    }
    {
      hlds__hlds_defns__gather_local_instance_names_4_p_0(hlds__hlds_defns__ModuleName_8, hlds__hlds_defns__InstanceDefns_28, hlds__hlds_defns__Var_38, &hlds__hlds_defns__InstanceDescs_29);
    }
    {
      hlds__hlds_defns__Var_40 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_defns__TypeCtorInfo_60_60, hlds__hlds_defns__FuncNameArities_22);
    }
    {
      hlds__hlds_defns__output_prefixed_name_arities_5_p_0(hlds__hlds_defns__Stream_5, (MR_String) "func ", hlds__hlds_defns__Var_40);
    }
    {
      hlds__hlds_defns__Var_43 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_defns__TypeCtorInfo_60_60, hlds__hlds_defns__InstNameArities_15);
    }
    {
      hlds__hlds_defns__output_prefixed_name_arities_5_p_0(hlds__hlds_defns__Stream_5, (MR_String) "inst ", hlds__hlds_defns__Var_43);
    }
    {
      hlds__hlds_defns__Var_46 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_defns__TypeCtorInfo_70_70, hlds__hlds_defns__InstanceDescs_29);
    }
    {
      hlds__hlds_defns__output_prefixed_strings_5_p_0(hlds__hlds_defns__Stream_5, (MR_String) "instance ", hlds__hlds_defns__Var_46);
    }
    {
      hlds__hlds_defns__Var_49 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_defns__TypeCtorInfo_60_60, hlds__hlds_defns__ModeNameArities_19);
    }
    {
      hlds__hlds_defns__output_prefixed_name_arities_5_p_0(hlds__hlds_defns__Stream_5, (MR_String) "mode ", hlds__hlds_defns__Var_49);
    }
    {
      hlds__hlds_defns__Var_52 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_defns__TypeCtorInfo_60_60, hlds__hlds_defns__PredNameArities_23);
    }
    {
      hlds__hlds_defns__output_prefixed_name_arities_5_p_0(hlds__hlds_defns__Stream_5, (MR_String) "pred ", hlds__hlds_defns__Var_52);
    }
    {
      hlds__hlds_defns__Var_55 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_defns__TypeCtorInfo_60_60, hlds__hlds_defns__TypeNameArities_11);
    }
    {
      hlds__hlds_defns__output_prefixed_name_arities_5_p_0(hlds__hlds_defns__Stream_5, (MR_String) "type ", hlds__hlds_defns__Var_55);
    }
    {
      hlds__hlds_defns__Var_58 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_defns__TypeCtorInfo_60_60, hlds__hlds_defns__ClassNameArities_26);
    }
    {
      hlds__hlds_defns__output_prefixed_name_arities_5_p_0(hlds__hlds_defns__Stream_5, (MR_String) "typeclass ", hlds__hlds_defns__Var_58);
    }
  }
}

void mercury__hlds__hlds_defns__init(void)
{
}

void mercury__hlds__hlds_defns__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0);
}

void mercury__hlds__hlds_defns__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_defns__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module hlds.hlds_defns. */
