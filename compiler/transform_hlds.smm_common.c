/*
** Automatically generated from `smm_common.m'
** by the Mercury compiler,
** version rotd-2025-10-23
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


// :- module transform_hlds.smm_common.
// :- implementation.

/*
INIT mercury__transform_hlds__smm_common__init
ENDINIT
*/

#include "transform_hlds.smm_common.mih"


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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "integer.mih"
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
#include "check_hlds.proc_requests.mih"
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
#include "hlds.type_util.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_output.mih"
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
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__smm_common__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_PseudoTypeInfo transform_hlds__smm_common__transform_hlds__smm_common__field_types_program_point_0_0[2];

static const MR_ConstString transform_hlds__smm_common__transform_hlds__smm_common__field_names_program_point_0_0[2];

static const MR_DuFunctorDesc transform_hlds__smm_common__transform_hlds__smm_common__du_functor_desc_program_point_0_0;

static const MR_DuFunctorDescPtr transform_hlds__smm_common__transform_hlds__smm_common__du_stag_ordered_program_point_0_0[1];

static const MR_DuPtagLayout transform_hlds__smm_common__transform_hlds__smm_common__du_ptag_ordered_program_point_0[1];

static const MR_DuFunctorDescPtr transform_hlds__smm_common__transform_hlds__smm_common__du_name_ordered_program_point_0[1];

static const MR_Integer transform_hlds__smm_common__transform_hlds__smm_common__functor_number_map_program_point_0[1];

static MR_bool MR_CALL 
transform_hlds__smm_common__IntroducedFrom__pred__some_special_preds_are_in_list__151__1_2_p_0(
  MR_Word SpecialPredIds_5,
  MR_Word LambdaHeadVar__1_13);

static MR_bool MR_CALL 
transform_hlds__smm_common__proc_not_defined_in_module_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
transform_hlds__smm_common__some_are_special_preds_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__smm_common__some_are_special_preds_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__smm_common__some_are_special_preds_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__smm_common__some_are_special_preds_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__smm_common____Unify____program_point_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__smm_common____Compare____program_point_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__smm_common_scalar_common_1[2][5];




static /* final */ const MR_Box transform_hlds__smm_common_scalar_common_1[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__smm_common__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__smm_common__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

static const MR_PseudoTypeInfo transform_hlds__smm_common__transform_hlds__smm_common__field_types_program_point_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)
};

static const MR_ConstString transform_hlds__smm_common__transform_hlds__smm_common__field_names_program_point_0_0[2] = {
  (MR_String) "pp_context",
  (MR_String) "pp_id"
};

static const MR_DuFunctorDesc transform_hlds__smm_common__transform_hlds__smm_common__du_functor_desc_program_point_0_0 = {
  (MR_String) "pp",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__smm_common__transform_hlds__smm_common__field_types_program_point_0_0,
  transform_hlds__smm_common__transform_hlds__smm_common__field_names_program_point_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__smm_common__transform_hlds__smm_common__du_stag_ordered_program_point_0_0[1] = { &transform_hlds__smm_common__transform_hlds__smm_common__du_functor_desc_program_point_0_0 };

static const MR_DuPtagLayout transform_hlds__smm_common__transform_hlds__smm_common__du_ptag_ordered_program_point_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__smm_common__transform_hlds__smm_common__du_stag_ordered_program_point_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__smm_common__transform_hlds__smm_common__du_name_ordered_program_point_0[1] = { &transform_hlds__smm_common__transform_hlds__smm_common__du_functor_desc_program_point_0_0 };

static const MR_Integer transform_hlds__smm_common__transform_hlds__smm_common__functor_number_map_program_point_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__smm_common____Unify____program_point_0_0_10001)),
  ((MR_Box) (transform_hlds__smm_common____Compare____program_point_0_0_10001)),
  (MR_String) "transform_hlds.smm_common",
  (MR_String) "program_point",
  { transform_hlds__smm_common__transform_hlds__smm_common__du_name_ordered_program_point_0 },
  { transform_hlds__smm_common__transform_hlds__smm_common__du_ptag_ordered_program_point_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__smm_common__transform_hlds__smm_common__functor_number_map_program_point_0,

};

static MR_bool MR_CALL 
transform_hlds__smm_common__IntroducedFrom__pred__some_special_preds_are_in_list__151__1_2_p_0(
  MR_Word SpecialPredIds_5,
  MR_Word LambdaHeadVar__1_13)
{
  MR_bool succeeded;
  MR_Word PredId_7 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_13, 0))));

  succeeded = mercury__list__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_7)), SpecialPredIds_5);
  return succeeded;
}

void MR_CALL 
transform_hlds__smm_common____Compare____program_point_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__term_context____Compare____term_context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mdbcomp__goal_path____Compare____reverse_goal_path_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
transform_hlds__smm_common____Unify____program_point_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__smm_common__proc_not_defined_in_module_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word PredId_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Word PredInfo_6;
  MR_Word PredStatus_7;
  MR_Word Var_8;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_3, PredId_4, &PredInfo_6);
  hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_6, &PredStatus_7);
  Var_8 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_7);
  succeeded = (Var_8 == (MR_Integer) 0);
  return succeeded;
}

void MR_CALL 
transform_hlds__smm_common__dump_program_point_4_p_0(
  MR_Word Stream_5,
  MR_Word HeadVar__2_2)
{
  MR_Word Context_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Word RevGoalPath_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
  MR_String Var_16;

  parse_tree__parse_tree_out_misc__write_context_4_p_0(Stream_5, Context_6);
  Var_16 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(RevGoalPath_7);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "--");
  mercury__io__write_string_4_p_0(Stream_5, Var_16);
}

MR_Word MR_CALL 
transform_hlds__smm_common__program_point_init_1_f_0(
  MR_Word GoalInfo_3)
{
  MR_Word ProgPoint_4;
  MR_Word Context_5;
  MR_Word RevGoalPath_6;

  Context_5 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_3);
  RevGoalPath_6 = hlds__hlds_goal__goal_info_get_reverse_goal_path_1_f_0(GoalInfo_3);
  {
    ProgPoint_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ProgPoint_4, 0) = ((MR_Box) (Context_5));
    MR_hl_field(0, ProgPoint_4, 1) = ((MR_Box) (RevGoalPath_6));
  }
  return ProgPoint_4;
}

static MR_bool MR_CALL 
transform_hlds__smm_common__some_are_special_preds_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__smm_common__proc_not_defined_in_module_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__smm_common__some_are_special_preds_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__smm_common__IntroducedFrom__pred__some_special_preds_are_in_list__151__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__smm_common__some_are_special_preds_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__smm_common__IntroducedFrom__pred__some_special_preds_are_in_list__151__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__smm_common__some_are_special_preds_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__smm_common__IntroducedFrom__pred__some_special_preds_are_in_list__151__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

MR_bool MR_CALL 
transform_hlds__smm_common__some_are_special_preds_2_p_0(
  MR_Word PPIds_3,
  MR_Word ModuleInfo_4)
{
  MR_bool succeeded;

  {
    MR_Word SpecialPredMaps_5;
    MR_Word UnifyMap_6;
    MR_Word IndexMap_7;
    MR_Word CompareMap_8;

    hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(ModuleInfo_4, &SpecialPredMaps_5);
    UnifyMap_6 = ((MR_Word) ((MR_hl_field(0, SpecialPredMaps_5, 0))));
    IndexMap_7 = ((MR_Word) ((MR_hl_field(0, SpecialPredMaps_5, 1))));
    CompareMap_8 = ((MR_Word) ((MR_hl_field(0, SpecialPredMaps_5, 2))));
    {
      MR_Word SpecialPredIds_15;
      MR_Word SpecialPPIds_16;
      MR_Word Var_19;

      mercury__map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), UnifyMap_6, &SpecialPredIds_15);
      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_19, 0) = ((MR_Box) (&transform_hlds__smm_common_scalar_common_1[0]));
        MR_hl_field(0, Var_19, 1) = ((MR_Box) (transform_hlds__smm_common__some_are_special_preds_2_p_0_1));
        MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_19, 3) = ((MR_Box) (SpecialPredIds_15));
      }
      mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_19, PPIds_3, &SpecialPPIds_16);
      succeeded = (SpecialPPIds_16 != (MR_Word) ((MR_Unsigned) 0U));
    }
    if (!(succeeded))
    {
      {
        MR_Word SpecialPredIds_23;
        MR_Word SpecialPPIds_24;
        MR_Word Var_27;

        mercury__map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), IndexMap_7, &SpecialPredIds_23);
        {
          Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_27, 0) = ((MR_Box) (&transform_hlds__smm_common_scalar_common_1[0]));
          MR_hl_field(0, Var_27, 1) = ((MR_Box) (transform_hlds__smm_common__some_are_special_preds_2_p_0_2));
          MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_27, 3) = ((MR_Box) (SpecialPredIds_23));
        }
        mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_27, PPIds_3, &SpecialPPIds_24);
        succeeded = (SpecialPPIds_24 != (MR_Word) ((MR_Unsigned) 0U));
      }
      if (!(succeeded))
      {
        MR_Word SpecialPredIds_31;
        MR_Word SpecialPPIds_32;
        MR_Word Var_35;

        mercury__map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), CompareMap_8, &SpecialPredIds_31);
        {
          Var_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_35, 0) = ((MR_Box) (&transform_hlds__smm_common_scalar_common_1[0]));
          MR_hl_field(0, Var_35, 1) = ((MR_Box) (transform_hlds__smm_common__some_are_special_preds_2_p_0_3));
          MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_35, 3) = ((MR_Box) (SpecialPredIds_31));
        }
        mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_35, PPIds_3, &SpecialPPIds_32);
        succeeded = (SpecialPPIds_32 != (MR_Word) ((MR_Unsigned) 0U));
      }
    }
  }
  if (!(succeeded))
  {
    MR_Word FilteredPPIds_9;
    MR_Word Var_12;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_12, 0) = ((MR_Box) (&transform_hlds__smm_common_scalar_common_1[1]));
      MR_hl_field(0, Var_12, 1) = ((MR_Box) (transform_hlds__smm_common__some_are_special_preds_2_p_0_4));
      MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_12, 3) = ((MR_Box) (ModuleInfo_4));
    }
    mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_12, PPIds_3, &FilteredPPIds_9);
    succeeded = (FilteredPPIds_9 != (MR_Word) ((MR_Unsigned) 0U));
  }
  return succeeded;
}

MR_bool MR_CALL 
transform_hlds__smm_common__check_type_of_node_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word StartType_5,
  MR_Word Selector_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((Selector_6 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Sel_7 = ((MR_Word) ((MR_hl_field(1, Selector_6, 0))));
      MR_Word Sels_8 = ((MR_Word) ((MR_hl_field(1, Selector_6, 1))));
      MR_Word SubType_11;
      MR_Word next_value_of_StartType_5;
      MR_Word next_value_of_Selector_6;

      if (((MR_tag((MR_Word) Sel_7)) == (MR_Integer) 0))
      {
        MR_Word TypeCtorInfo_12_13;
        MR_Word Cons_id_9 = ((MR_Word) ((MR_hl_field(0, Sel_7, 0))));
        MR_Integer Choice_10 = ((MR_Integer) ((MR_hl_field(0, Sel_7, 1))));
        MR_Word ArgTypes_12;
        MR_Box conv0_SubType_11;

        succeeded = hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(ModuleInfo_4, StartType_5, Cons_id_9, &ArgTypes_12);
        if (succeeded)
        {
          TypeCtorInfo_12_13 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
          succeeded = mercury__list__index1_3_p_0(TypeCtorInfo_12_13, ArgTypes_12, Choice_10, &conv0_SubType_11);
          if (succeeded)
          {
            SubType_11 = ((MR_Word) (conv0_SubType_11));
            succeeded = MR_TRUE;
          }
        }
      }
      else
      {
        SubType_11 = ((MR_Word) ((MR_hl_field(1, Sel_7, 0))));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_StartType_5 = SubType_11;
        next_value_of_Selector_6 = Sels_8;
        StartType_5 = next_value_of_StartType_5;
        Selector_6 = next_value_of_Selector_6;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__smm_common____Unify____program_point_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__smm_common____Unify____program_point_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__smm_common____Compare____program_point_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__smm_common____Compare____program_point_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module transform_hlds.smm_common.
