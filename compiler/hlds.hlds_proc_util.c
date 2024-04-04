/*
** Automatically generated from `hlds_proc_util.m'
** by the Mercury compiler,
** version rotd-2024-04-04
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


// :- module hlds.hlds_proc_util.
// :- implementation.

/*
INIT mercury__hlds__hlds_proc_util__init
ENDINIT
*/

#include "hlds.hlds_proc_util.mih"


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
#include "hlds.mih"
#include "int.mih"
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
#include "check_hlds.inst_match.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_test.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
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
#include "libs.polyhedron.mih"
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
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_proc_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_proc_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc hlds__hlds_proc_util__hlds__hlds_proc_util__enum_functor_desc_can_proc_succeed_0_0;

static const MR_EnumFunctorDesc hlds__hlds_proc_util__hlds__hlds_proc_util__enum_functor_desc_can_proc_succeed_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_proc_util__hlds__hlds_proc_util__enum_ordinal_ordered_can_proc_succeed_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_proc_util__hlds__hlds_proc_util__enum_name_ordered_can_proc_succeed_0[2];

static const MR_Integer hlds__hlds_proc_util__hlds__hlds_proc_util__functor_number_map_can_proc_succeed_0[2];

static void MR_CALL 
hlds__hlds_proc_util__IntroducedFrom__pred__proc_info_create_vars_from_types__266__1_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word LambdaHeadVar__1_21,
  MR_Word * LambdaHeadVar__2_22,
  MR_Word LambdaHeadVar__3_23,
  MR_Word * LambdaHeadVar__4_24);

static MR_bool MR_CALL 
hlds__hlds_proc_util__IntroducedFrom__pred__proc_info_uninstantiated_head_vars__247__1_4_p_0(
  MR_Word ModuleInfo_4,
  MR_Word VarTable_9,
  MR_Word LambdaHeadVar__1_18,
  MR_Word * LambdaHeadVar__2_19);

static MR_bool MR_CALL 
hlds__hlds_proc_util__IntroducedFrom__pred__proc_info_instantiated_head_vars__232__1_4_p_0(
  MR_Word ModuleInfo_4,
  MR_Word VarTable_9,
  MR_Word LambdaHeadVar__1_18,
  MR_Word * LambdaHeadVar__2_19);

static void MR_CALL 
hlds__hlds_proc_util__find_lowest_unused_proc_id_loop_3_p_0(
  MR_Word ProcTable_4,
  MR_Integer TrialProcIdInt_5,
  MR_Integer * CloneProcId_6);

static MR_bool MR_CALL 
hlds__hlds_proc_util__proc_info_has_io_state_pair_2_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Integer ArgNum_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_MaybeIn_0_5,
  MR_Word * STATE_VARIABLE_MaybeIn_6,
  MR_Word STATE_VARIABLE_MaybeOut_0_7,
  MR_Word * STATE_VARIABLE_MaybeOut_8);

static void MR_CALL 
hlds__hlds_proc_util__ensure_all_headvars_are_named_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer SeqNum_2,
  MR_Word STATE_VARIABLE_VarTable_0_3,
  MR_Word * STATE_VARIABLE_VarTable_4);

static void MR_CALL 
hlds__hlds_proc_util__proc_info_create_vars_from_types_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
hlds__hlds_proc_util__proc_info_uninstantiated_head_vars_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
hlds__hlds_proc_util__proc_info_instantiated_head_vars_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
hlds__hlds_proc_util____Unify____can_proc_succeed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_proc_util____Compare____can_proc_succeed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_proc_util_scalar_common_1[1][2];

static /* final */ const MR_Box hlds__hlds_proc_util_scalar_common_2[1][3];

static /* final */ const MR_Box hlds__hlds_proc_util_scalar_common_4[1][7];

static /* final */ const MR_Box hlds__hlds_proc_util_scalar_common_5[1][8];


struct hlds__hlds_proc_util__vector_common_type_3_0_s {
  const MR_Word hlds__hlds_proc_util__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct hlds__hlds_proc_util__vector_common_type_3_0_s hlds__hlds_proc_util_vector_common_3[4];



static /* final */ const MR_Box hlds__hlds_proc_util_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__hlds_proc_util_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_proc_util_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box hlds__hlds_proc_util_scalar_common_4[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__hlds_proc_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&hlds__hlds_proc_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__hlds_proc_util_scalar_common_5[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_proc_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0))
  },
};


static /* final */ const struct hlds__hlds_proc_util__vector_common_type_3_0_s hlds__hlds_proc_util_vector_common_3[4] = {
  /* row   0 */   { (MR_Integer) 1 },
  /* row   1 */   { (MR_Integer) 0 },
  /* row   2 */   { (MR_Integer) 0 },
  /* row   3 */   { (MR_Integer) 0 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_proc_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_proc_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_proc_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_EnumFunctorDesc hlds__hlds_proc_util__hlds__hlds_proc_util__enum_functor_desc_can_proc_succeed_0_0 = {
  (MR_String) "proc_can_maybe_succeed",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__hlds_proc_util__hlds__hlds_proc_util__enum_functor_desc_can_proc_succeed_0_1 = {
  (MR_String) "proc_cannot_succeed",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__hlds_proc_util__hlds__hlds_proc_util__enum_ordinal_ordered_can_proc_succeed_0[2] = {
  &hlds__hlds_proc_util__hlds__hlds_proc_util__enum_functor_desc_can_proc_succeed_0_0,
  &hlds__hlds_proc_util__hlds__hlds_proc_util__enum_functor_desc_can_proc_succeed_0_1
};

static const MR_EnumFunctorDescPtr hlds__hlds_proc_util__hlds__hlds_proc_util__enum_name_ordered_can_proc_succeed_0[2] = {
  &hlds__hlds_proc_util__hlds__hlds_proc_util__enum_functor_desc_can_proc_succeed_0_0,
  &hlds__hlds_proc_util__hlds__hlds_proc_util__enum_functor_desc_can_proc_succeed_0_1
};

static const MR_Integer hlds__hlds_proc_util__hlds__hlds_proc_util__functor_number_map_can_proc_succeed_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__hlds_proc_util__hlds__hlds_proc_util__type_ctor_info_can_proc_succeed_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_proc_util____Unify____can_proc_succeed_0_0_10001)),
  ((MR_Box) (hlds__hlds_proc_util____Compare____can_proc_succeed_0_0_10001)),
  (MR_String) "hlds.hlds_proc_util",
  (MR_String) "can_proc_succeed",
  { hlds__hlds_proc_util__hlds__hlds_proc_util__enum_name_ordered_can_proc_succeed_0 },
  { hlds__hlds_proc_util__hlds__hlds_proc_util__enum_ordinal_ordered_can_proc_succeed_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__hlds_proc_util__hlds__hlds_proc_util__functor_number_map_can_proc_succeed_0,

};

static void MR_CALL 
hlds__hlds_proc_util__IntroducedFrom__pred__proc_info_create_vars_from_types__266__1_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word LambdaHeadVar__1_21,
  MR_Word * LambdaHeadVar__2_22,
  MR_Word LambdaHeadVar__3_23,
  MR_Word * LambdaHeadVar__4_24)
{
  MR_Word IsDummy_16;
  MR_Word Entry_17;

  IsDummy_16 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_6, LambdaHeadVar__1_21);
  {
    Entry_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_17, 0) = ((MR_Box) ((MR_String) ""));
    MR_hl_field(0, Entry_17, 1) = ((MR_Box) (LambdaHeadVar__1_21));
    MR_hl_field(0, Entry_17, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_16));
  }
  parse_tree__var_table__add_var_entry_4_p_0(Entry_17, LambdaHeadVar__2_22, LambdaHeadVar__3_23, LambdaHeadVar__4_24);
}

static MR_bool MR_CALL 
hlds__hlds_proc_util__IntroducedFrom__pred__proc_info_uninstantiated_head_vars__247__1_4_p_0(
  MR_Word ModuleInfo_4,
  MR_Word VarTable_9,
  MR_Word LambdaHeadVar__1_18,
  MR_Word * LambdaHeadVar__2_19)
{
  MR_bool succeeded;
  MR_Word Mode_14;
  MR_Word Type_15;
  MR_Word Inst1_16;
  MR_Word Inst2_17;

  *LambdaHeadVar__2_19 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_18, (MR_Integer) 0))));
  Mode_14 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_18, (MR_Integer) 1))));
  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_9, *LambdaHeadVar__2_19, &Type_15);
  check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_4, Mode_14, &Inst1_16, &Inst2_17);
  succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(ModuleInfo_4, Type_15, Inst1_16, Inst2_17);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_proc_util__IntroducedFrom__pred__proc_info_instantiated_head_vars__232__1_4_p_0(
  MR_Word ModuleInfo_4,
  MR_Word VarTable_9,
  MR_Word LambdaHeadVar__1_18,
  MR_Word * LambdaHeadVar__2_19)
{
  MR_bool succeeded;
  MR_Word Mode_14;
  MR_Word Type_15;
  MR_Word Inst1_16;
  MR_Word Inst2_17;

  *LambdaHeadVar__2_19 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_18, (MR_Integer) 0))));
  Mode_14 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_18, (MR_Integer) 1))));
  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_9, *LambdaHeadVar__2_19, &Type_15);
  check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_4, Mode_14, &Inst1_16, &Inst2_17);
  succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(ModuleInfo_4, Type_15, Inst1_16, Inst2_17);
  succeeded = !(succeeded);
  return succeeded;
}

void MR_CALL 
hlds__hlds_proc_util____Compare____can_proc_succeed_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
hlds__hlds_proc_util____Unify____can_proc_succeed_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__hlds_proc_util__clone_proc_id_3_p_0(
  MR_Word ProcTable_4,
  MR_Integer _ProcId_5,
  MR_Integer * CloneProcId_6)
{
  hlds__hlds_proc_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_111_110_101_95_112_114_111_99_95_105_100_95_95_91_50_93_95_48_3_p_0(ProcTable_4, CloneProcId_6);
}

void MR_CALL 
hlds__hlds_proc_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_111_110_101_95_112_114_111_99_95_105_100_95_95_91_50_93_95_48_3_p_0(
  MR_Word ProcTable_4,
  MR_Integer * CloneProcId_6)
{
  hlds__hlds_proc_util__find_lowest_unused_proc_id_loop_3_p_0(ProcTable_4, (MR_Integer) 0, CloneProcId_6);
}

static void MR_CALL 
hlds__hlds_proc_util__find_lowest_unused_proc_id_loop_3_p_0(
  MR_Word ProcTable_4,
  MR_Integer TrialProcIdInt_5,
  MR_Integer * CloneProcId_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer TrialProcId_7;
    MR_Box conv0_Var_8;

    // setup for model_det tailcalls optimized into a loop
    ;
    hlds__hlds_pred__proc_id_to_int_2_p_1(&TrialProcId_7, TrialProcIdInt_5);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_4, ((MR_Box) (TrialProcId_7)), &conv0_Var_8);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
    {
      MR_Integer Var_9 = (MR_Integer) ((MR_Unsigned) TrialProcIdInt_5 + (MR_Unsigned) 1);
      MR_Integer next_value_of_TrialProcIdInt_5 = Var_9;

      // direct tailcall eliminated
      ;
      TrialProcIdInt_5 = next_value_of_TrialProcIdInt_5;
      continue;
    }
    else
      *CloneProcId_6 = TrialProcId_7;
    break;
  }
}

MR_bool MR_CALL 
hlds__hlds_proc_util__proc_info_has_io_state_pair_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ProcInfo_6,
  MR_Integer * InArgNum_7,
  MR_Integer * OutArgNum_8)
{
  MR_bool succeeded;
  MR_Word HeadVars_9;
  MR_Word ArgModes_10;
  MR_Word VarTable_11;

  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_6, &HeadVars_9);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_6, &ArgModes_10);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_6, &VarTable_11);
  succeeded = hlds__hlds_proc_util__proc_info_has_io_state_pair_from_details_6_p_0(ModuleInfo_5, VarTable_11, HeadVars_9, ArgModes_10, InArgNum_7, OutArgNum_8);
  return succeeded;
}

MR_bool MR_CALL 
hlds__hlds_proc_util__proc_info_has_io_state_pair_from_details_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarTable_8,
  MR_Word HeadVars_9,
  MR_Word ArgModes_10,
  MR_Integer * InArgNum_11,
  MR_Integer * OutArgNum_12)
{
  MR_bool succeeded;
  MR_Word HeadVarsModes_13;
  MR_Word MaybeIn_14;
  MR_Word MaybeOut_15;

  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&hlds__hlds_proc_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), HeadVars_9, ArgModes_10, &HeadVarsModes_13);
  succeeded = hlds__hlds_proc_util__proc_info_has_io_state_pair_2_8_p_0(ModuleInfo_7, VarTable_8, (MR_Integer) 1, HeadVarsModes_13, (MR_Word) ((MR_Unsigned) 0U), &MaybeIn_14, (MR_Word) ((MR_Unsigned) 0U), &MaybeOut_15);
  if (succeeded)
  {
    succeeded = (MaybeIn_14 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *InArgNum_11 = ((MR_Integer) ((MR_hl_field(1, MaybeIn_14, (MR_Integer) 0))));
      succeeded = (MaybeOut_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        *OutArgNum_12 = ((MR_Integer) ((MR_hl_field(1, MaybeOut_15, (MR_Integer) 0))));
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_proc_util__proc_info_has_io_state_pair_2_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Integer ArgNum_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_MaybeIn_0_5,
  MR_Word * STATE_VARIABLE_MaybeIn_6,
  MR_Word STATE_VARIABLE_MaybeOut_0_7,
  MR_Word * STATE_VARIABLE_MaybeOut_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_MaybeOut_8 = STATE_VARIABLE_MaybeOut_0_7;
      *STATE_VARIABLE_MaybeIn_6 = STATE_VARIABLE_MaybeIn_0_5;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_21;
      MR_Word Mode_22;
      MR_Word VarModes_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_MaybeIn_34_34;
      MR_Word STATE_VARIABLE_MaybeOut_35_35;
      MR_Integer Var_36;
      MR_Integer Var_39;
      MR_Word VarType_26;
      MR_Integer next_value_of_ArgNum_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_MaybeIn_0_5;
      MR_Word next_value_of_STATE_VARIABLE_MaybeOut_0_7;

      Var_21 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 0))));
      Mode_22 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 1))));
      parse_tree__var_table__lookup_var_type_3_p_0(VarTable_2, Var_21, &VarType_26);
      succeeded = parse_tree__prog_type_test__type_is_io_state_1_p_0(VarType_26);
      if (succeeded)
      {
        succeeded = check_hlds__mode_test__mode_is_fully_input_2_p_0(ModuleInfo_1, Mode_22);
        if (succeeded)
        {
          succeeded = (STATE_VARIABLE_MaybeIn_0_5 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            STATE_VARIABLE_MaybeOut_35_35 = STATE_VARIABLE_MaybeOut_0_7;
            {
              STATE_VARIABLE_MaybeIn_34_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_MaybeIn_34_34, 0) = ((MR_Box) (ArgNum_3));
            }
            succeeded = MR_TRUE;
          }
        }
        else
        {
          succeeded = check_hlds__mode_test__mode_is_fully_output_2_p_0(ModuleInfo_1, Mode_22);
          if (succeeded)
          {
            succeeded = (STATE_VARIABLE_MaybeOut_0_7 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              STATE_VARIABLE_MaybeIn_34_34 = STATE_VARIABLE_MaybeIn_0_5;
              {
                STATE_VARIABLE_MaybeOut_35_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_MaybeOut_35_35, 0) = ((MR_Box) (ArgNum_3));
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
      else
      {
        STATE_VARIABLE_MaybeOut_35_35 = STATE_VARIABLE_MaybeOut_0_7;
        STATE_VARIABLE_MaybeIn_34_34 = STATE_VARIABLE_MaybeIn_0_5;
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        Var_39 = (MR_Integer) 1;
        Var_36 = (MR_Integer) ((MR_Unsigned) ArgNum_3 + (MR_Unsigned) Var_39);
        // direct tailcall eliminated
        ;
        next_value_of_ArgNum_3 = Var_36;
        next_value_of_HeadVar__4_4 = VarModes_23;
        next_value_of_STATE_VARIABLE_MaybeIn_0_5 = STATE_VARIABLE_MaybeIn_34_34;
        next_value_of_STATE_VARIABLE_MaybeOut_0_7 = STATE_VARIABLE_MaybeOut_35_35;
        ArgNum_3 = next_value_of_ArgNum_3;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_MaybeIn_0_5 = next_value_of_STATE_VARIABLE_MaybeIn_0_5;
        STATE_VARIABLE_MaybeOut_0_7 = next_value_of_STATE_VARIABLE_MaybeOut_0_7;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
hlds__hlds_proc_util__ensure_all_headvars_are_named_2_p_0(
  MR_Word STATE_VARIABLE_ProcInfo_0_7,
  MR_Word * STATE_VARIABLE_ProcInfo_8)
{
  MR_Word HeadVars_4;
  MR_Word VarTable0_5;
  MR_Word VarTable_6;

  hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_7, &HeadVars_4);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_7, &VarTable0_5);
  hlds__hlds_proc_util__ensure_all_headvars_are_named_loop_4_p_0(HeadVars_4, (MR_Integer) 1, VarTable0_5, &VarTable_6);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_6, STATE_VARIABLE_ProcInfo_0_7, STATE_VARIABLE_ProcInfo_8);
}

static void MR_CALL 
hlds__hlds_proc_util__ensure_all_headvars_are_named_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer SeqNum_2,
  MR_Word STATE_VARIABLE_VarTable_0_3,
  MR_Word * STATE_VARIABLE_VarTable_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_VarTable_4 = STATE_VARIABLE_VarTable_0_3;
    else
    {
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Entry0_13;
      MR_String Name0_14;
      MR_Word Type_15;
      MR_Word IsDummy_16;
      MR_Word STATE_VARIABLE_VarTable_23_23;
      MR_Integer Var_24;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_SeqNum_2;
      MR_Word next_value_of_STATE_VARIABLE_VarTable_0_3;

      parse_tree__var_table__lookup_var_entry_3_p_0(STATE_VARIABLE_VarTable_0_3, Var_9, &Entry0_13);
      Name0_14 = ((MR_String) ((MR_hl_field(0, Entry0_13, (MR_Integer) 0))));
      Type_15 = ((MR_Word) ((MR_hl_field(0, Entry0_13, (MR_Integer) 1))));
      IsDummy_16 = ((MR_Unsigned) ((MR_hl_field(0, Entry0_13, (MR_Integer) 2))) & (MR_Integer) 1);
      succeeded = (strcmp(Name0_14, (MR_String) "") == 0);
      if (succeeded)
      {
        MR_String Name_17;
        MR_Word Entry_18;
        MR_String Var_22;

        Var_22 = mercury__string__int_to_string_1_f_0(SeqNum_2);
        Name_17 = mercury__string__f_43_43_2_f_0((MR_String) "HeadVar__", Var_22);
        {
          Entry_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Entry_18, 0) = ((MR_Box) (Name_17));
          MR_hl_field(0, Entry_18, 1) = ((MR_Box) (Type_15));
          MR_hl_field(0, Entry_18, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_16));
        }
        parse_tree__var_table__update_var_entry_4_p_0(Var_9, Entry_18, STATE_VARIABLE_VarTable_0_3, &STATE_VARIABLE_VarTable_23_23);
      }
      else
        STATE_VARIABLE_VarTable_23_23 = STATE_VARIABLE_VarTable_0_3;
      Var_24 = (MR_Integer) ((MR_Unsigned) SeqNum_2 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vars_10;
      next_value_of_SeqNum_2 = Var_24;
      next_value_of_STATE_VARIABLE_VarTable_0_3 = STATE_VARIABLE_VarTable_23_23;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      SeqNum_2 = next_value_of_SeqNum_2;
      STATE_VARIABLE_VarTable_0_3 = next_value_of_STATE_VARIABLE_VarTable_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_proc_util__proc_info_create_vars_from_types_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_22;
  MR_Word conv0_LambdaHeadVar__4_24;

  hlds__hlds_proc_util__IntroducedFrom__pred__proc_info_create_vars_from_types__266__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_22, ((MR_Word) (wrapper_arg_3)), &conv0_LambdaHeadVar__4_24);
  *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_22));
  *wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_24));
}

void MR_CALL 
hlds__hlds_proc_util__proc_info_create_vars_from_types_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Types_7,
  MR_Word * Vars_8,
  MR_Word STATE_VARIABLE_ProcInfo_0_19,
  MR_Word * STATE_VARIABLE_ProcInfo_20)
{
  MR_Word VarTable0_10;
  MR_Word AddVar_11;
  MR_Word VarTable_18;
  MR_Box conv2_VarTable_18;

  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_19, &VarTable0_10);
  {
    AddVar_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, AddVar_11, 0) = ((MR_Box) (&hlds__hlds_proc_util_scalar_common_5[0]));
    MR_hl_field(0, AddVar_11, 1) = ((MR_Box) (hlds__hlds_proc_util__proc_info_create_vars_from_types_5_p_0_1));
    MR_hl_field(0, AddVar_11, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, AddVar_11, 3) = ((MR_Box) (ModuleInfo_6));
  }
  mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&hlds__hlds_proc_util_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), AddVar_11, Types_7, Vars_8, ((MR_Box) (VarTable0_10)), &conv2_VarTable_18);
  VarTable_18 = ((MR_Word) (conv2_VarTable_18));
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_18, STATE_VARIABLE_ProcInfo_0_19, STATE_VARIABLE_ProcInfo_20);
}

void MR_CALL 
hlds__hlds_proc_util__proc_info_create_var_from_type_6_p_0(
  MR_String Name_7,
  MR_Word Type_8,
  MR_Word IsDummy_9,
  MR_Word * Var_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_15,
  MR_Word * STATE_VARIABLE_ProcInfo_16)
{
  MR_Word VarTable0_12;
  MR_Word Entry_13;
  MR_Word VarTable_14;

  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_15, &VarTable0_12);
  {
    Entry_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_13, 0) = ((MR_Box) (Name_7));
    MR_hl_field(0, Entry_13, 1) = ((MR_Box) (Type_8));
    MR_hl_field(0, Entry_13, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_9));
  }
  parse_tree__var_table__add_var_entry_4_p_0(Entry_13, Var_10, VarTable0_12, &VarTable_14);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_14, STATE_VARIABLE_ProcInfo_0_15, STATE_VARIABLE_ProcInfo_16);
}

static MR_bool MR_CALL 
hlds__hlds_proc_util__proc_info_uninstantiated_head_vars_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_19;

  succeeded = hlds__hlds_proc_util__IntroducedFrom__pred__proc_info_uninstantiated_head_vars__247__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_19);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_19));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
hlds__hlds_proc_util__proc_info_uninstantiated_head_vars_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word ProcInfo_5,
  MR_Word * UnchangedInstHeadVars_6)
{
  MR_bool succeeded;
  MR_Word HeadVars_7;
  MR_Word ArgModes_8;
  MR_Word VarTable_9;
  MR_Word HeadVarModes_10;
  MR_Word IsInstUnchanged_11;

  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_5, &HeadVars_7);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_5, &ArgModes_8);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_5, &VarTable_9);
  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&hlds__hlds_proc_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), HeadVars_7, ArgModes_8, &HeadVarModes_10);
  {
    IsInstUnchanged_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, IsInstUnchanged_11, 0) = ((MR_Box) (&hlds__hlds_proc_util_scalar_common_4[0]));
    MR_hl_field(0, IsInstUnchanged_11, 1) = ((MR_Box) (hlds__hlds_proc_util__proc_info_uninstantiated_head_vars_3_p_0_1));
    MR_hl_field(0, IsInstUnchanged_11, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, IsInstUnchanged_11, 3) = ((MR_Box) (ModuleInfo_4));
    MR_hl_field(0, IsInstUnchanged_11, 4) = ((MR_Box) (VarTable_9));
  }
  mercury__list__filter_map_3_p_0((MR_Word) (&hlds__hlds_proc_util_scalar_common_2[0]), (MR_Word) (&hlds__hlds_proc_util_scalar_common_1[0]), IsInstUnchanged_11, HeadVarModes_10, UnchangedInstHeadVars_6);
}

static MR_bool MR_CALL 
hlds__hlds_proc_util__proc_info_instantiated_head_vars_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_19;

  succeeded = hlds__hlds_proc_util__IntroducedFrom__pred__proc_info_instantiated_head_vars__232__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_19);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_19));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
hlds__hlds_proc_util__proc_info_instantiated_head_vars_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word ProcInfo_5,
  MR_Word * ChangedInstHeadVars_6)
{
  MR_bool succeeded;
  MR_Word HeadVars_7;
  MR_Word ArgModes_8;
  MR_Word VarTable_9;
  MR_Word HeadVarModes_10;
  MR_Word IsInstChanged_11;

  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_5, &HeadVars_7);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_5, &ArgModes_8);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_5, &VarTable_9);
  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&hlds__hlds_proc_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), HeadVars_7, ArgModes_8, &HeadVarModes_10);
  {
    IsInstChanged_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, IsInstChanged_11, 0) = ((MR_Box) (&hlds__hlds_proc_util_scalar_common_4[0]));
    MR_hl_field(0, IsInstChanged_11, 1) = ((MR_Box) (hlds__hlds_proc_util__proc_info_instantiated_head_vars_3_p_0_1));
    MR_hl_field(0, IsInstChanged_11, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, IsInstChanged_11, 3) = ((MR_Box) (ModuleInfo_4));
    MR_hl_field(0, IsInstChanged_11, 4) = ((MR_Box) (VarTable_9));
  }
  mercury__list__filter_map_3_p_0((MR_Word) (&hlds__hlds_proc_util_scalar_common_2[0]), (MR_Word) (&hlds__hlds_proc_util_scalar_common_1[0]), IsInstChanged_11, HeadVarModes_10, ChangedInstHeadVars_6);
}

void MR_CALL 
hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word ProcInfo_5,
  MR_Word * InstMap_6)
{
  MR_Word HeadVars_7;
  MR_Word ArgModes_8;
  MR_Word InitialInsts_9;
  MR_Word InstAL_10;

  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_5, &HeadVars_7);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_5, &ArgModes_8);
  check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_4, ArgModes_8, &InitialInsts_9);
  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&hlds__hlds_proc_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), HeadVars_7, InitialInsts_9, &InstAL_10);
  *InstMap_6 = hlds__instmap__instmap_from_assoc_list_1_f_0(InstAL_10);
}

void MR_CALL 
hlds__hlds_proc_util__proc_info_arg_info_2_p_0(
  MR_Word ProcInfo_3,
  MR_Word * ArgInfo_4)
{
  MR_Word MaybeArgInfo0_5;

  hlds__hlds_pred__proc_info_get_maybe_arg_info_2_p_0(ProcInfo_3, &MaybeArgInfo0_5);
  if ((MaybeArgInfo0_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_proc_util.proc_info_arg_info\'/2", (MR_String) "arg_info not set");
      return;
    }
  else
    *ArgInfo_4 = ((MR_Word) ((MR_hl_field(1, MaybeArgInfo0_5, (MR_Integer) 0))));
}

void MR_CALL 
hlds__hlds_proc_util__proc_info_arglives_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word ProcInfo_5,
  MR_Word * ArgLives_6)
{
  MR_Word MaybeArgLives_7;

  hlds__hlds_pred__proc_info_get_maybe_arglives_2_p_0(ProcInfo_5, &MaybeArgLives_7);
  if ((MaybeArgLives_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Modes_9;

    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_5, &Modes_9);
    check_hlds__mode_util__get_arg_lives_3_p_0(ModuleInfo_4, Modes_9, ArgLives_6);
  }
  else
    *ArgLives_6 = ((MR_Word) ((MR_hl_field(1, MaybeArgLives_7, (MR_Integer) 0))));
}

void MR_CALL 
hlds__hlds_proc_util__proc_info_never_succeeds_2_p_0(
  MR_Word ProcInfo_3,
  MR_Word * CanSucceed_4)
{
  MR_Word DeclaredDeterminism_5;

  hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_3, &DeclaredDeterminism_5);
  if ((DeclaredDeterminism_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *CanSucceed_4 = (MR_Integer) 0;
  else
  {
    MR_Word Determinism_6 = ((MR_Word) ((MR_hl_field(1, DeclaredDeterminism_5, (MR_Integer) 0))));
    MR_Word MaxSoln_8;
    MR_Word Var_7;

    parse_tree__prog_data__determinism_components_3_p_0(Determinism_6, &Var_7, &MaxSoln_8);
    *CanSucceed_4 = ((&hlds__hlds_proc_util_vector_common_3[0 + MaxSoln_8]))->hlds__hlds_proc_util__vector_common_type_3_0__vct_3_f_0;
  }
}

void MR_CALL 
hlds__hlds_proc_util__proc_info_interface_determinism_2_p_0(
  MR_Word ProcInfo_3,
  MR_Word * Determinism_4)
{
  MR_Word MaybeDeterminism_5;

  hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_3, &MaybeDeterminism_5);
  if ((MaybeDeterminism_5 == (MR_Word) ((MR_Unsigned) 0U)))
    hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo_3, Determinism_4);
  else
    *Determinism_4 = ((MR_Word) ((MR_hl_field(1, MaybeDeterminism_5, (MR_Integer) 0))));
}

void MR_CALL 
hlds__hlds_proc_util__proc_info_declared_argmodes_2_p_0(
  MR_Word ProcInfo_3,
  MR_Word * ArgModes_4)
{
  MR_Word MaybeArgModes_5;

  hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(ProcInfo_3, &MaybeArgModes_5);
  if ((MaybeArgModes_5 == (MR_Word) ((MR_Unsigned) 0U)))
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_3, ArgModes_4);
  else
    *ArgModes_4 = ((MR_Word) ((MR_hl_field(1, MaybeArgModes_5, (MR_Integer) 0))));
}

void MR_CALL 
hlds__hlds_proc_util__proc_info_head_modes_constraint_2_p_0(
  MR_Word ProcInfo_3,
  MR_Word * HeadModesConstraint_4)
{
  MR_Word MaybeHeadModesConstraint_5;

  hlds__hlds_pred__proc_info_get_maybe_head_modes_constr_2_p_0(ProcInfo_3, &MaybeHeadModesConstraint_5);
  if ((MaybeHeadModesConstraint_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_proc_util.proc_info_head_modes_constraint\'/2", (MR_String) "no constraint");
      return;
    }
  else
    *HeadModesConstraint_4 = ((MR_Word) ((MR_hl_field(1, MaybeHeadModesConstraint_5, (MR_Integer) 0))));
}

static MR_bool MR_CALL 
hlds__hlds_proc_util____Unify____can_proc_succeed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_proc_util____Unify____can_proc_succeed_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_proc_util____Compare____can_proc_succeed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_proc_util____Compare____can_proc_succeed_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__hlds_proc_util__init(void)
{
}

void mercury__hlds__hlds_proc_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_proc_util__hlds__hlds_proc_util__type_ctor_info_can_proc_succeed_0);
}

void mercury__hlds__hlds_proc_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_proc_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_proc_util.
