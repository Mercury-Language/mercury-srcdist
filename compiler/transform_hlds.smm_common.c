/*
** Automatically generated from `smm_common.m'
** by the Mercury compiler,
** version rotd-2017-01-16
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


/* :- module transform_hlds.smm_common. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__smm_common__init
ENDINIT
*/

#include "transform_hlds.smm_common.mih"


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
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
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
#include "parse_tree.prog_out.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__smm_common__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_PseudoTypeInfo transform_hlds__smm_common__transform_hlds__smm_common__field_types_program_point_0_0[2];

static const MR_ConstString transform_hlds__smm_common__transform_hlds__smm_common__field_names_program_point_0_0[2];

static const MR_DuFunctorDesc transform_hlds__smm_common__transform_hlds__smm_common__du_functor_desc_program_point_0_0;

static const MR_DuFunctorDescPtr transform_hlds__smm_common__transform_hlds__smm_common__du_stag_ordered_program_point_0_0[1];

static const MR_DuPtagLayout transform_hlds__smm_common__transform_hlds__smm_common__du_ptag_ordered_program_point_0[1];

static const MR_DuFunctorDescPtr transform_hlds__smm_common__transform_hlds__smm_common__du_name_ordered_program_point_0[1];

static const MR_Integer transform_hlds__smm_common__transform_hlds__smm_common__functor_number_map_program_point_0[1];

static MR_bool MR_CALL 
transform_hlds__smm_common____Unify____program_point_0_0_10001(
  MR_Box transform_hlds__smm_common__wrapper_arg_1,
  MR_Box transform_hlds__smm_common__wrapper_arg_2);

static void MR_CALL 
transform_hlds__smm_common____Compare____program_point_0_0_10001(
  MR_Box * transform_hlds__smm_common__wrapper_arg_1,
  MR_Box transform_hlds__smm_common__wrapper_arg_2,
  MR_Box transform_hlds__smm_common__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__smm_common__IntroducedFrom__pred__some_special_preds_are_in_list__133__1_2_p_0(
  MR_Word transform_hlds__smm_common__SpecialPredIds_5,
  MR_Word transform_hlds__smm_common__LambdaHeadVar__1_13);

static MR_bool MR_CALL 
transform_hlds__smm_common__proc_not_defined_in_module_2_p_0(
  MR_Word transform_hlds__smm_common__ModuleInfo_3,
  MR_Word transform_hlds__smm_common__HeadVar__2_2);

static MR_bool MR_CALL 
transform_hlds__smm_common__some_are_special_preds_2_p_0_4(
  MR_Box transform_hlds__smm_common__closure_arg,
  MR_Box transform_hlds__smm_common__wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__smm_common__some_are_special_preds_2_p_0_3(
  MR_Box transform_hlds__smm_common__closure_arg,
  MR_Box transform_hlds__smm_common__wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__smm_common__some_are_special_preds_2_p_0_2(
  MR_Box transform_hlds__smm_common__closure_arg,
  MR_Box transform_hlds__smm_common__wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__smm_common__some_are_special_preds_2_p_0_1(
  MR_Box transform_hlds__smm_common__closure_arg,
  MR_Box transform_hlds__smm_common__wrapper_arg_1);


static /* final */ const MR_Box transform_hlds__smm_common_scalar_common_1[2][5];




static /* final */ const MR_Box transform_hlds__smm_common_scalar_common_1[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__smm_common__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__smm_common__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__smm_common__transform_hlds__smm_common__field_types_program_point_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
};

static const MR_ConstString transform_hlds__smm_common__transform_hlds__smm_common__field_names_program_point_0_0[2] = {
  (MR_String) "pp_context",
  (MR_String) "pp_id"
};

static const MR_DuFunctorDesc transform_hlds__smm_common__transform_hlds__smm_common__du_functor_desc_program_point_0_0 = {
  (MR_String) "pp",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__smm_common__transform_hlds__smm_common__field_types_program_point_0_0,
  transform_hlds__smm_common__transform_hlds__smm_common__field_names_program_point_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__smm_common__transform_hlds__smm_common__du_stag_ordered_program_point_0_0[1] = {
  &transform_hlds__smm_common__transform_hlds__smm_common__du_functor_desc_program_point_0_0
};

static const MR_DuPtagLayout transform_hlds__smm_common__transform_hlds__smm_common__du_ptag_ordered_program_point_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__smm_common__transform_hlds__smm_common__du_stag_ordered_program_point_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__smm_common__transform_hlds__smm_common__du_name_ordered_program_point_0[1] = {
  &transform_hlds__smm_common__transform_hlds__smm_common__du_functor_desc_program_point_0_0
};

static const MR_Integer transform_hlds__smm_common__transform_hlds__smm_common__functor_number_map_program_point_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__smm_common____Unify____program_point_0_0_10001)),
  ((MR_Box) (transform_hlds__smm_common____Compare____program_point_0_0_10001)),
  (MR_String) "transform_hlds.smm_common",
  (MR_String) "program_point",
  {     transform_hlds__smm_common__transform_hlds__smm_common__du_name_ordered_program_point_0 },
  {     transform_hlds__smm_common__transform_hlds__smm_common__du_ptag_ordered_program_point_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__smm_common__transform_hlds__smm_common__functor_number_map_program_point_0
};

static MR_bool MR_CALL 
transform_hlds__smm_common____Unify____program_point_0_0_10001(
  MR_Box transform_hlds__smm_common__wrapper_arg_1,
  MR_Box transform_hlds__smm_common__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__smm_common__succeeded;

    {
      transform_hlds__smm_common__succeeded = transform_hlds__smm_common____Unify____program_point_0_0(((MR_Word) transform_hlds__smm_common__wrapper_arg_1), ((MR_Word) transform_hlds__smm_common__wrapper_arg_2));
    }
    return transform_hlds__smm_common__succeeded;
  }
}

static void MR_CALL 
transform_hlds__smm_common____Compare____program_point_0_0_10001(
  MR_Box * transform_hlds__smm_common__wrapper_arg_1,
  MR_Box transform_hlds__smm_common__wrapper_arg_2,
  MR_Box transform_hlds__smm_common__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__smm_common__conv0_HeadVar__1_1;

    {
      transform_hlds__smm_common____Compare____program_point_0_0(&transform_hlds__smm_common__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__smm_common__wrapper_arg_2), ((MR_Word) transform_hlds__smm_common__wrapper_arg_3));
    }
    *transform_hlds__smm_common__wrapper_arg_1 = ((MR_Box) (transform_hlds__smm_common__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__smm_common__IntroducedFrom__pred__some_special_preds_are_in_list__133__1_2_p_0(
  MR_Word transform_hlds__smm_common__SpecialPredIds_5,
  MR_Word transform_hlds__smm_common__LambdaHeadVar__1_13)
{
  {
    MR_bool transform_hlds__smm_common__succeeded;
    MR_Word transform_hlds__smm_common__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__LambdaHeadVar__1_13, (MR_Integer) 0)));
    MR_Integer transform_hlds__smm_common__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__LambdaHeadVar__1_13, (MR_Integer) 1)));

    {
      transform_hlds__smm_common__succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (transform_hlds__smm_common__PredId_7)), transform_hlds__smm_common__SpecialPredIds_5);
    }
    return transform_hlds__smm_common__succeeded;
  }
}

void MR_CALL 
transform_hlds__smm_common____Compare____program_point_0_0(
  MR_Word * transform_hlds__smm_common__HeadVar__1_1,
  MR_Word transform_hlds__smm_common__HeadVar__2_2,
  MR_Word transform_hlds__smm_common__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__smm_common__succeeded;
    MR_Integer transform_hlds__smm_common__CastX_9 = (MR_Integer) transform_hlds__smm_common__HeadVar__2_2;
    MR_Integer transform_hlds__smm_common__CastY_10 = (MR_Integer) transform_hlds__smm_common__HeadVar__3_3;

    transform_hlds__smm_common__succeeded = (transform_hlds__smm_common__CastX_9 == transform_hlds__smm_common__CastY_10);
    if (transform_hlds__smm_common__succeeded)
      *transform_hlds__smm_common__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__smm_common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__smm_common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__smm_common__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__smm_common__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__smm_common__V_8_8;

        {
          mercury__term____Compare____context_0_0(&transform_hlds__smm_common__V_8_8, transform_hlds__smm_common__V_4_4, transform_hlds__smm_common__V_6_6);
        }
        transform_hlds__smm_common__succeeded = (transform_hlds__smm_common__V_8_8 == (MR_Integer) 0);
        transform_hlds__smm_common__succeeded = !(transform_hlds__smm_common__succeeded);
        if (transform_hlds__smm_common__succeeded)
          *transform_hlds__smm_common__HeadVar__1_1 = transform_hlds__smm_common__V_8_8;
        else
          {
            mdbcomp__goal_path____Compare____reverse_goal_path_0_0(transform_hlds__smm_common__HeadVar__1_1, transform_hlds__smm_common__V_5_5, transform_hlds__smm_common__V_7_7);
          }
      }
  }
}

MR_bool MR_CALL 
transform_hlds__smm_common____Unify____program_point_0_0(
  MR_Word transform_hlds__smm_common__HeadVar__1_1,
  MR_Word transform_hlds__smm_common__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__smm_common__succeeded;
    MR_Integer transform_hlds__smm_common__CastX_7 = (MR_Integer) transform_hlds__smm_common__HeadVar__1_1;
    MR_Integer transform_hlds__smm_common__CastY_8 = (MR_Integer) transform_hlds__smm_common__HeadVar__2_2;

    transform_hlds__smm_common__succeeded = (transform_hlds__smm_common__CastX_7 == transform_hlds__smm_common__CastY_8);
    if (transform_hlds__smm_common__succeeded)
      transform_hlds__smm_common__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__smm_common__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__smm_common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__smm_common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__smm_common__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__HeadVar__2_2, (MR_Integer) 1)));

        {
          transform_hlds__smm_common__succeeded = mercury__term____Unify____context_0_0(transform_hlds__smm_common__V_3_3, transform_hlds__smm_common__V_5_5);
        }
        if (transform_hlds__smm_common__succeeded)
          {
            transform_hlds__smm_common__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(transform_hlds__smm_common__V_4_4, transform_hlds__smm_common__V_6_6);
          }
      }
    return transform_hlds__smm_common__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__smm_common__proc_not_defined_in_module_2_p_0(
  MR_Word transform_hlds__smm_common__ModuleInfo_3,
  MR_Word transform_hlds__smm_common__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__smm_common__succeeded;
    MR_Word transform_hlds__smm_common__PredId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word transform_hlds__smm_common__PredInfo_6;
    MR_Word transform_hlds__smm_common__PredStatus_7;
    MR_Word transform_hlds__smm_common__V_8_8;
    MR_Integer transform_hlds__smm_common__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__HeadVar__2_2, (MR_Integer) 1)));

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__smm_common__ModuleInfo_3, transform_hlds__smm_common__PredId_4, &transform_hlds__smm_common__PredInfo_6);
    }
    {
      hlds__hlds_pred__pred_info_get_status_2_p_0(transform_hlds__smm_common__PredInfo_6, &transform_hlds__smm_common__PredStatus_7);
    }
    {
      transform_hlds__smm_common__V_8_8 = hlds__status__pred_status_defined_in_this_module_1_f_0(transform_hlds__smm_common__PredStatus_7);
    }
    transform_hlds__smm_common__succeeded = (transform_hlds__smm_common__V_8_8 == (MR_Integer) 0);
    return transform_hlds__smm_common__succeeded;
  }
}

void MR_CALL 
transform_hlds__smm_common__dump_program_point_3_p_0(
  MR_Word transform_hlds__smm_common__HeadVar__1_1)
{
  {
    MR_bool transform_hlds__smm_common__succeeded;
    MR_Word transform_hlds__smm_common__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word transform_hlds__smm_common__RevGoalPath_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__HeadVar__1_1, (MR_Integer) 1)));
    MR_String transform_hlds__smm_common__V_12_12;

    {
      parse_tree__prog_out__write_context_3_p_0(transform_hlds__smm_common__Context_4);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "--");
    }
    {
      transform_hlds__smm_common__V_12_12 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(transform_hlds__smm_common__RevGoalPath_5);
    }
    {
      mercury__io__write_string_3_p_0(transform_hlds__smm_common__V_12_12);
    }
  }
}

MR_Word MR_CALL 
transform_hlds__smm_common__program_point_init_1_f_0(
  MR_Word transform_hlds__smm_common__GoalInfo_3)
{
  {
    MR_bool transform_hlds__smm_common__succeeded;
    MR_Word transform_hlds__smm_common__ProgPoint_4;
    MR_Word transform_hlds__smm_common__Context_5;
    MR_Word transform_hlds__smm_common__RevGoalPath_6;

    {
      transform_hlds__smm_common__Context_5 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__smm_common__GoalInfo_3);
    }
    {
      transform_hlds__smm_common__RevGoalPath_6 = hlds__hlds_goal__goal_info_get_reverse_goal_path_1_f_0(transform_hlds__smm_common__GoalInfo_3);
    }
    {
      transform_hlds__smm_common__ProgPoint_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__smm_common__ProgPoint_4, 0) = ((MR_Box) (transform_hlds__smm_common__Context_5));
      MR_hl_field(MR_mktag(0), transform_hlds__smm_common__ProgPoint_4, 1) = ((MR_Box) (transform_hlds__smm_common__RevGoalPath_6));
    }
    return transform_hlds__smm_common__ProgPoint_4;
  }
}

static MR_bool MR_CALL 
transform_hlds__smm_common__some_are_special_preds_2_p_0_4(
  MR_Box transform_hlds__smm_common__closure_arg,
  MR_Box transform_hlds__smm_common__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__smm_common__succeeded;
    MR_Box transform_hlds__smm_common__closure = transform_hlds__smm_common__closure_arg;

    {
      transform_hlds__smm_common__succeeded = transform_hlds__smm_common__proc_not_defined_in_module_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__smm_common__wrapper_arg_1));
    }
    return transform_hlds__smm_common__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__smm_common__some_are_special_preds_2_p_0_3(
  MR_Box transform_hlds__smm_common__closure_arg,
  MR_Box transform_hlds__smm_common__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__smm_common__succeeded;
    MR_Box transform_hlds__smm_common__closure = transform_hlds__smm_common__closure_arg;

    {
      transform_hlds__smm_common__succeeded = transform_hlds__smm_common__IntroducedFrom__pred__some_special_preds_are_in_list__133__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__smm_common__wrapper_arg_1));
    }
    return transform_hlds__smm_common__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__smm_common__some_are_special_preds_2_p_0_2(
  MR_Box transform_hlds__smm_common__closure_arg,
  MR_Box transform_hlds__smm_common__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__smm_common__succeeded;
    MR_Box transform_hlds__smm_common__closure = transform_hlds__smm_common__closure_arg;

    {
      transform_hlds__smm_common__succeeded = transform_hlds__smm_common__IntroducedFrom__pred__some_special_preds_are_in_list__133__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__smm_common__wrapper_arg_1));
    }
    return transform_hlds__smm_common__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__smm_common__some_are_special_preds_2_p_0_1(
  MR_Box transform_hlds__smm_common__closure_arg,
  MR_Box transform_hlds__smm_common__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__smm_common__succeeded;
    MR_Box transform_hlds__smm_common__closure = transform_hlds__smm_common__closure_arg;

    {
      transform_hlds__smm_common__succeeded = transform_hlds__smm_common__IntroducedFrom__pred__some_special_preds_are_in_list__133__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__smm_common__wrapper_arg_1));
    }
    return transform_hlds__smm_common__succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__smm_common__some_are_special_preds_2_p_0(
  MR_Word transform_hlds__smm_common__PPIds_3,
  MR_Word transform_hlds__smm_common__ModuleInfo_4)
{
  {
    MR_bool transform_hlds__smm_common__succeeded;

    {
      MR_Word transform_hlds__smm_common__SpecialPredMaps_5;
      MR_Word transform_hlds__smm_common__UnifyMap_6;
      MR_Word transform_hlds__smm_common__IndexMap_7;
      MR_Word transform_hlds__smm_common__CompareMap_8;

      {
        hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(transform_hlds__smm_common__ModuleInfo_4, &transform_hlds__smm_common__SpecialPredMaps_5);
      }
      transform_hlds__smm_common__UnifyMap_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__SpecialPredMaps_5, (MR_Integer) 0)));
      transform_hlds__smm_common__IndexMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__SpecialPredMaps_5, (MR_Integer) 1)));
      transform_hlds__smm_common__CompareMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__SpecialPredMaps_5, (MR_Integer) 2)));
      {
        MR_Word transform_hlds__smm_common__SpecialPredIds_17;
        MR_Word transform_hlds__smm_common__SpecialPPIds_21;
        MR_Word transform_hlds__smm_common__V_24_24;
        MR_Word transform_hlds__smm_common__V_22_22;
        MR_Word transform_hlds__smm_common__V_23_23;

        {
          mercury__map__values_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__smm_common__UnifyMap_6, &transform_hlds__smm_common__SpecialPredIds_17);
        }
        {
          transform_hlds__smm_common__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_24_24, 0) = ((MR_Box) (&transform_hlds__smm_common_scalar_common_1[0]));
          MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_24_24, 1) = ((MR_Box) (transform_hlds__smm_common__some_are_special_preds_2_p_0_1));
          MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_24_24, 3) = ((MR_Box) (transform_hlds__smm_common__SpecialPredIds_17));
        }
        {
          mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__smm_common__V_24_24, transform_hlds__smm_common__PPIds_3, &transform_hlds__smm_common__SpecialPPIds_21);
        }
        transform_hlds__smm_common__succeeded = ((MR_tag((MR_Word) transform_hlds__smm_common__SpecialPPIds_21)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__smm_common__succeeded)
          {
            transform_hlds__smm_common__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__smm_common__SpecialPPIds_21, (MR_Integer) 0)));
            transform_hlds__smm_common__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__smm_common__SpecialPPIds_21, (MR_Integer) 1)));
          }
      }
      if (!(transform_hlds__smm_common__succeeded))
        {
          {
            MR_Word transform_hlds__smm_common__SpecialPredIds_33;
            MR_Word transform_hlds__smm_common__SpecialPPIds_37;
            MR_Word transform_hlds__smm_common__V_40_40;
            MR_Word transform_hlds__smm_common__V_38_38;
            MR_Word transform_hlds__smm_common__V_39_39;

            {
              mercury__map__values_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__smm_common__IndexMap_7, &transform_hlds__smm_common__SpecialPredIds_33);
            }
            {
              transform_hlds__smm_common__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_40_40, 0) = ((MR_Box) (&transform_hlds__smm_common_scalar_common_1[0]));
              MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_40_40, 1) = ((MR_Box) (transform_hlds__smm_common__some_are_special_preds_2_p_0_2));
              MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_40_40, 3) = ((MR_Box) (transform_hlds__smm_common__SpecialPredIds_33));
            }
            {
              mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__smm_common__V_40_40, transform_hlds__smm_common__PPIds_3, &transform_hlds__smm_common__SpecialPPIds_37);
            }
            transform_hlds__smm_common__succeeded = ((MR_tag((MR_Word) transform_hlds__smm_common__SpecialPPIds_37)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__smm_common__succeeded)
              {
                transform_hlds__smm_common__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__smm_common__SpecialPPIds_37, (MR_Integer) 0)));
                transform_hlds__smm_common__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__smm_common__SpecialPPIds_37, (MR_Integer) 1)));
              }
          }
          if (!(transform_hlds__smm_common__succeeded))
            {
              MR_Word transform_hlds__smm_common__SpecialPredIds_49;
              MR_Word transform_hlds__smm_common__SpecialPPIds_53;
              MR_Word transform_hlds__smm_common__V_56_56;
              MR_Word transform_hlds__smm_common__V_54_54;
              MR_Word transform_hlds__smm_common__V_55_55;

              {
                mercury__map__values_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__smm_common__CompareMap_8, &transform_hlds__smm_common__SpecialPredIds_49);
              }
              {
                transform_hlds__smm_common__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_56_56, 0) = ((MR_Box) (&transform_hlds__smm_common_scalar_common_1[0]));
                MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_56_56, 1) = ((MR_Box) (transform_hlds__smm_common__some_are_special_preds_2_p_0_3));
                MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_56_56, 3) = ((MR_Box) (transform_hlds__smm_common__SpecialPredIds_49));
              }
              {
                mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__smm_common__V_56_56, transform_hlds__smm_common__PPIds_3, &transform_hlds__smm_common__SpecialPPIds_53);
              }
              transform_hlds__smm_common__succeeded = ((MR_tag((MR_Word) transform_hlds__smm_common__SpecialPPIds_53)) == (MR_mktag((MR_Integer) 1)));
              if (transform_hlds__smm_common__succeeded)
                {
                  transform_hlds__smm_common__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__smm_common__SpecialPPIds_53, (MR_Integer) 0)));
                  transform_hlds__smm_common__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__smm_common__SpecialPPIds_53, (MR_Integer) 1)));
                }
            }
        }
    }
    if (!(transform_hlds__smm_common__succeeded))
      {
        MR_Word transform_hlds__smm_common__FilteredPPIds_9;
        MR_Word transform_hlds__smm_common__V_12_12;
        MR_Word transform_hlds__smm_common__V_10_10;
        MR_Word transform_hlds__smm_common__V_11_11;

        {
          transform_hlds__smm_common__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_12_12, 0) = ((MR_Box) (&transform_hlds__smm_common_scalar_common_1[1]));
          MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_12_12, 1) = ((MR_Box) (transform_hlds__smm_common__some_are_special_preds_2_p_0_4));
          MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_12_12, 3) = ((MR_Box) (transform_hlds__smm_common__ModuleInfo_4));
        }
        {
          mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__smm_common__V_12_12, transform_hlds__smm_common__PPIds_3, &transform_hlds__smm_common__FilteredPPIds_9);
        }
        transform_hlds__smm_common__succeeded = ((MR_tag((MR_Word) transform_hlds__smm_common__FilteredPPIds_9)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__smm_common__succeeded)
          {
            transform_hlds__smm_common__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__smm_common__FilteredPPIds_9, (MR_Integer) 0)));
            transform_hlds__smm_common__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__smm_common__FilteredPPIds_9, (MR_Integer) 1)));
          }
      }
    return transform_hlds__smm_common__succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__smm_common__check_type_of_node_3_p_0(
  MR_Word transform_hlds__smm_common__ModuleInfo_4,
  MR_Word transform_hlds__smm_common__StartType_5,
  MR_Word transform_hlds__smm_common__Selector_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__smm_common__succeeded;

        if ((transform_hlds__smm_common__Selector_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          transform_hlds__smm_common__succeeded = MR_TRUE;
        else
          {
            MR_Word transform_hlds__smm_common__Sel_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__smm_common__Selector_6, (MR_Integer) 0)));
            MR_Word transform_hlds__smm_common__Sels_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__smm_common__Selector_6, (MR_Integer) 1)));
            MR_Word transform_hlds__smm_common__SubType_11;

            if (((MR_tag((MR_Word) transform_hlds__smm_common__Sel_7)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word transform_hlds__smm_common__TypeCtorInfo_12_18;
                MR_Word transform_hlds__smm_common__Cons_id_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__Sel_7, (MR_Integer) 0)));
                MR_Integer transform_hlds__smm_common__Choice_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__Sel_7, (MR_Integer) 1)));
                MR_Word transform_hlds__smm_common__ArgTypes_17;
                MR_Box transform_hlds__smm_common__conv0_SubType_11;

                {
                  transform_hlds__smm_common__succeeded = check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(transform_hlds__smm_common__ModuleInfo_4, transform_hlds__smm_common__StartType_5, transform_hlds__smm_common__Cons_id_9, &transform_hlds__smm_common__ArgTypes_17);
                }
                if (transform_hlds__smm_common__succeeded)
                  {
                    transform_hlds__smm_common__TypeCtorInfo_12_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                    {
                      transform_hlds__smm_common__succeeded = mercury__list__index1_3_p_0(transform_hlds__smm_common__TypeCtorInfo_12_18, transform_hlds__smm_common__ArgTypes_17, transform_hlds__smm_common__Choice_10, &transform_hlds__smm_common__conv0_SubType_11);
                    }
                    if (transform_hlds__smm_common__succeeded)
                      {
                        transform_hlds__smm_common__SubType_11 = ((MR_Word) transform_hlds__smm_common__conv0_SubType_11);
                        transform_hlds__smm_common__succeeded = MR_TRUE;
                      }
                  }
              }
            else
              {
                transform_hlds__smm_common__SubType_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__smm_common__Sel_7, (MR_Integer) 0)));
                transform_hlds__smm_common__succeeded = MR_TRUE;
              }
            if (transform_hlds__smm_common__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__smm_common__StartType__tmp_copy_5 = transform_hlds__smm_common__SubType_11;
                  MR_Word transform_hlds__smm_common__Selector__tmp_copy_6 = transform_hlds__smm_common__Sels_8;

                  transform_hlds__smm_common__Selector_6 = transform_hlds__smm_common__Selector__tmp_copy_6;
                  transform_hlds__smm_common__StartType_5 = transform_hlds__smm_common__StartType__tmp_copy_5;
                }
                continue;
              }
          }
        return transform_hlds__smm_common__succeeded;
      }
      break;
    }
}

void mercury__transform_hlds__smm_common__init(void)
{
}

void mercury__transform_hlds__smm_common__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0);
}

void mercury__transform_hlds__smm_common__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__smm_common__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module transform_hlds.smm_common. */
