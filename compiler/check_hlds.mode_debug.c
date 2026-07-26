/*
** Automatically generated from `mode_debug.m'
** by the Mercury compiler,
** version rotd-2026-07-26
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


// :- module check_hlds.mode_debug.
// :- implementation.

/*
INIT mercury__check_hlds__mode_debug__init
ENDINIT
*/

#include "check_hlds.mode_debug.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
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
#include "int.mih"
#include "integer.mih"
#include "io.mih"
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
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "hlds.hlds_out.hlds_out_mode.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_TypeInfo_Struct1 check_hlds__mode_debug__one_or_more__ti_one_or_more_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_debug__maybe__ti_maybe_1one_or_more__ti_one_or_more_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0;

static const MR_PseudoTypeInfo check_hlds__mode_debug__check_hlds__mode_debug__field_types_maybe_print_insts_stats_0_0[1];

static const MR_DuFunctorDesc check_hlds__mode_debug__check_hlds__mode_debug__du_functor_desc_maybe_print_insts_stats_0_0;

static const MR_DuFunctorDesc check_hlds__mode_debug__check_hlds__mode_debug__du_functor_desc_maybe_print_insts_stats_0_1;

static const MR_DuFunctorDescPtr check_hlds__mode_debug__check_hlds__mode_debug__du_stag_ordered_maybe_print_insts_stats_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__mode_debug__check_hlds__mode_debug__du_stag_ordered_maybe_print_insts_stats_0_1[1];

static const MR_DuPtagLayout check_hlds__mode_debug__check_hlds__mode_debug__du_ptag_ordered_maybe_print_insts_stats_0[2];

static const MR_DuFunctorDescPtr check_hlds__mode_debug__check_hlds__mode_debug__du_name_ordered_maybe_print_insts_stats_0[2];

static const MR_Integer check_hlds__mode_debug__check_hlds__mode_debug__functor_number_map_maybe_print_insts_stats_0[2];

static const MR_EnumFunctorDesc check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_mode_checkpoint_port_0_0;

static const MR_EnumFunctorDesc check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_mode_checkpoint_port_0_1;

static const MR_EnumFunctorDesc check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_mode_checkpoint_port_0_2;

static const MR_EnumFunctorDescPtr check_hlds__mode_debug__check_hlds__mode_debug__enum_ordinal_ordered_mode_checkpoint_port_0[3];

static const MR_EnumFunctorDescPtr check_hlds__mode_debug__check_hlds__mode_debug__enum_name_ordered_mode_checkpoint_port_0[3];

static const MR_Integer check_hlds__mode_debug__check_hlds__mode_debug__functor_number_map_mode_checkpoint_port_0[3];

static void MR_CALL 
check_hlds__mode_debug____Compare____maybe_print_insts_stats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mode_debug____Unify____maybe_print_insts_stats_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__mode_debug__identical_insts_2_p_0(
  MR_Word InstA_1,
  MR_Word InstB_2);

static void MR_CALL 
check_hlds__mode_debug__mode_checkpoint_tail_wakeups_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word DebugFlags_2,
  MR_Word STATE_VARIABLE_ModeInfo_0_3,
  MR_Word * STATE_VARIABLE_ModeInfo_4);

static void MR_CALL 
check_hlds__mode_debug__do_mode_checkpoint_6_p_0(
  MR_Word Port_7,
  MR_String Msg_8,
  MR_Word GoalInfo_9,
  MR_Word DebugFlags_10,
  MR_Word STATE_VARIABLE_ModeInfo_0_42,
  MR_Word * STATE_VARIABLE_ModeInfo_43);

static void MR_CALL 
check_hlds__mode_debug__write_var_list_6_p_0(
  MR_Word DebugStream_7,
  MR_Word VarTable_8,
  MR_String Desc_9,
  MR_Word Vars_10);

static void MR_CALL 
check_hlds__mode_debug__write_error_vars_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4);

static void MR_CALL 
check_hlds__mode_debug__write_var_insts_9_p_0(
  MR_Word Stream_1,
  MR_Word VarTable_2,
  MR_Word InstVarSet_3,
  MR_Word OldInstMap_4,
  MR_Word DebugVerbose_5,
  MR_Word DebugMinimal_6,
  MR_Word HeadVar__7_7);

static MR_bool MR_CALL 
check_hlds__mode_debug____Unify____maybe_print_insts_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_debug____Compare____maybe_print_insts_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_debug____Unify____mode_checkpoint_port_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_debug____Compare____mode_checkpoint_port_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__mode_debug_scalar_common_1[2][2];

static /* final */ const MR_Box check_hlds__mode_debug_scalar_common_2[3][1];




static /* final */ const MR_Box check_hlds__mode_debug_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__mode_debug_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box check_hlds__mode_debug_scalar_common_2[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   1 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   2 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 1U << 1)))))))) },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "check_hlds.mode_debug.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 check_hlds__mode_debug__one_or_more__ti_one_or_more_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_debug__maybe__ti_maybe_1one_or_more__ti_one_or_more_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&check_hlds__mode_debug__one_or_more__ti_one_or_more_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0) }
};

static const MR_PseudoTypeInfo check_hlds__mode_debug__check_hlds__mode_debug__field_types_maybe_print_insts_stats_0_0[1] = { (MR_PseudoTypeInfo) (&check_hlds__mode_debug__maybe__ti_maybe_1one_or_more__ti_one_or_more_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0) };

static const MR_DuFunctorDesc check_hlds__mode_debug__check_hlds__mode_debug__du_functor_desc_maybe_print_insts_stats_0_0 = {
  (MR_String) "do_not_print_insts_stats",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__mode_debug__check_hlds__mode_debug__field_types_maybe_print_insts_stats_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__mode_debug__check_hlds__mode_debug__du_functor_desc_maybe_print_insts_stats_0_1 = {
  (MR_String) "print_insts_stats",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mode_debug__check_hlds__mode_debug__du_stag_ordered_maybe_print_insts_stats_0_0[1] = { &check_hlds__mode_debug__check_hlds__mode_debug__du_functor_desc_maybe_print_insts_stats_0_1 };

static const MR_DuFunctorDescPtr check_hlds__mode_debug__check_hlds__mode_debug__du_stag_ordered_maybe_print_insts_stats_0_1[1] = { &check_hlds__mode_debug__check_hlds__mode_debug__du_functor_desc_maybe_print_insts_stats_0_0 };

static const MR_DuPtagLayout check_hlds__mode_debug__check_hlds__mode_debug__du_ptag_ordered_maybe_print_insts_stats_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__mode_debug__check_hlds__mode_debug__du_stag_ordered_maybe_print_insts_stats_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_debug__check_hlds__mode_debug__du_stag_ordered_maybe_print_insts_stats_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_debug__check_hlds__mode_debug__du_name_ordered_maybe_print_insts_stats_0[2] = {
  &check_hlds__mode_debug__check_hlds__mode_debug__du_functor_desc_maybe_print_insts_stats_0_0,
  &check_hlds__mode_debug__check_hlds__mode_debug__du_functor_desc_maybe_print_insts_stats_0_1
};

static const MR_Integer check_hlds__mode_debug__check_hlds__mode_debug__functor_number_map_maybe_print_insts_stats_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__mode_debug__check_hlds__mode_debug__type_ctor_info_maybe_print_insts_stats_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_debug____Unify____maybe_print_insts_stats_0_0_10001)),
  ((MR_Box) (check_hlds__mode_debug____Compare____maybe_print_insts_stats_0_0_10001)),
  (MR_String) "check_hlds.mode_debug",
  (MR_String) "maybe_print_insts_stats",
  { check_hlds__mode_debug__check_hlds__mode_debug__du_name_ordered_maybe_print_insts_stats_0 },
  { check_hlds__mode_debug__check_hlds__mode_debug__du_ptag_ordered_maybe_print_insts_stats_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__mode_debug__check_hlds__mode_debug__functor_number_map_maybe_print_insts_stats_0,

};

static const MR_EnumFunctorDesc check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_mode_checkpoint_port_0_0 = {
  (MR_String) "enter",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_mode_checkpoint_port_0_1 = {
  (MR_String) "exit",
  INT32_C(1)
};

static const MR_EnumFunctorDesc check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_mode_checkpoint_port_0_2 = {
  (MR_String) "wakeup",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr check_hlds__mode_debug__check_hlds__mode_debug__enum_ordinal_ordered_mode_checkpoint_port_0[3] = {
  &check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_mode_checkpoint_port_0_0,
  &check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_mode_checkpoint_port_0_1,
  &check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_mode_checkpoint_port_0_2
};

static const MR_EnumFunctorDescPtr check_hlds__mode_debug__check_hlds__mode_debug__enum_name_ordered_mode_checkpoint_port_0[3] = {
  &check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_mode_checkpoint_port_0_0,
  &check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_mode_checkpoint_port_0_1,
  &check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_mode_checkpoint_port_0_2
};

static const MR_Integer check_hlds__mode_debug__check_hlds__mode_debug__functor_number_map_mode_checkpoint_port_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__mode_debug__check_hlds__mode_debug__type_ctor_info_mode_checkpoint_port_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_debug____Unify____mode_checkpoint_port_0_0_10001)),
  ((MR_Box) (check_hlds__mode_debug____Compare____mode_checkpoint_port_0_0_10001)),
  (MR_String) "check_hlds.mode_debug",
  (MR_String) "mode_checkpoint_port",
  { check_hlds__mode_debug__check_hlds__mode_debug__enum_name_ordered_mode_checkpoint_port_0 },
  { check_hlds__mode_debug__check_hlds__mode_debug__enum_ordinal_ordered_mode_checkpoint_port_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__mode_debug__check_hlds__mode_debug__functor_number_map_mode_checkpoint_port_0,

};

void MR_CALL 
check_hlds__mode_debug____Compare____mode_checkpoint_port_0_0(
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
check_hlds__mode_debug____Unify____mode_checkpoint_port_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__mode_debug____Compare____maybe_print_insts_stats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_debug_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_debug____Unify____maybe_print_insts_stats_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      TypeInfo_9_9 = (MR_Word) (&check_hlds__mode_debug_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__mode_debug__identical_insts_2_p_0(
  MR_Word InstA_1,
  MR_Word InstB_2)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL check_hlds__mode_debug__identical_insts_2_p_0

	MR_Word InstA;
	MR_Word InstB;
	MR_bool SUCCESS_INDICATOR;

	InstA = InstA_1 ;
	InstB = InstB_2 ;
		{

    if (InstA == InstB) {
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

void MR_CALL 
check_hlds__mode_debug__mode_checkpoint_wakeups_4_p_0(
  MR_Word HeadWokenGoal_5,
  MR_Word TailWokenGoals_6,
  MR_Word STATE_VARIABLE_ModeInfo_0_12,
  MR_Word * STATE_VARIABLE_ModeInfo_13)
{
  MR_Word DebugModes_8;

  check_hlds__mode_info__mode_info_get_debug_modes_2_p_0(STATE_VARIABLE_ModeInfo_0_12, &DebugModes_8);
  if ((DebugModes_8 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_ModeInfo_13 = STATE_VARIABLE_ModeInfo_0_12;
  else
  {
    MR_Word DebugFlags_9 = ((MR_Word) ((MR_hl_field(1, DebugModes_8, 0))));
    MR_Word HeadWokenGoalInfo_11 = ((MR_Word) ((MR_hl_field(0, HeadWokenGoal_5, 1))));
    MR_Word STATE_VARIABLE_ModeInfo_1_16;

    check_hlds__mode_debug__do_mode_checkpoint_6_p_0((MR_Integer) 2, (MR_String) "first goal", HeadWokenGoalInfo_11, DebugFlags_9, STATE_VARIABLE_ModeInfo_0_12, &STATE_VARIABLE_ModeInfo_1_16);
    check_hlds__mode_debug__mode_checkpoint_tail_wakeups_4_p_0(TailWokenGoals_6, DebugFlags_9, STATE_VARIABLE_ModeInfo_1_16, STATE_VARIABLE_ModeInfo_13);
  }
}

static void MR_CALL 
check_hlds__mode_debug__mode_checkpoint_tail_wakeups_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word DebugFlags_2,
  MR_Word STATE_VARIABLE_ModeInfo_0_3,
  MR_Word * STATE_VARIABLE_ModeInfo_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModeInfo_4 = STATE_VARIABLE_ModeInfo_0_3;
    else
    {
      MR_Word WokenGoal_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word WokenGoals_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word WokenGoalInfo_14 = ((MR_Word) ((MR_hl_field(0, WokenGoal_9, 1))));
      MR_Word STATE_VARIABLE_ModeInfo_1_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModeInfo_0_3;

      check_hlds__mode_debug__do_mode_checkpoint_6_p_0((MR_Integer) 2, (MR_String) "later goal", WokenGoalInfo_14, DebugFlags_2, STATE_VARIABLE_ModeInfo_0_3, &STATE_VARIABLE_ModeInfo_1_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = WokenGoals_10;
      next_value_of_STATE_VARIABLE_ModeInfo_0_3 = STATE_VARIABLE_ModeInfo_1_19;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModeInfo_0_3 = next_value_of_STATE_VARIABLE_ModeInfo_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
check_hlds__mode_debug__mode_checkpoint_sn_6_p_0(
  MR_Word Port_7,
  MR_String MsgA_8,
  MR_Word SymName_9,
  MR_Word GoalInfo_10,
  MR_Word STATE_VARIABLE_ModeInfo_0_15,
  MR_Word * STATE_VARIABLE_ModeInfo_16)
{
  MR_Word DebugModes_12;

  check_hlds__mode_info__mode_info_get_debug_modes_2_p_0(STATE_VARIABLE_ModeInfo_0_15, &DebugModes_12);
  if ((DebugModes_12 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_ModeInfo_16 = STATE_VARIABLE_ModeInfo_0_15;
  else
  {
    MR_Word DebugFlags_13 = ((MR_Word) ((MR_hl_field(1, DebugModes_12, 0))));
    MR_String Msg_14;
    MR_String Var_17;
    MR_String Var_19;

    Var_19 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_9);
    Var_17 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_19);
    Msg_14 = mercury__string__f_43_43_2_f_0(MsgA_8, Var_17);
    check_hlds__mode_debug__do_mode_checkpoint_6_p_0(Port_7, Msg_14, GoalInfo_10, DebugFlags_13, STATE_VARIABLE_ModeInfo_0_15, STATE_VARIABLE_ModeInfo_16);
  }
}

void MR_CALL 
check_hlds__mode_debug__mode_checkpoint_5_p_0(
  MR_Word Port_6,
  MR_String Msg_7,
  MR_Word GoalInfo_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_12,
  MR_Word * STATE_VARIABLE_ModeInfo_13)
{
  MR_Word DebugModes_10;

  check_hlds__mode_info__mode_info_get_debug_modes_2_p_0(STATE_VARIABLE_ModeInfo_0_12, &DebugModes_10);
  if ((DebugModes_10 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_ModeInfo_13 = STATE_VARIABLE_ModeInfo_0_12;
  else
  {
    MR_Word DebugFlags_11 = ((MR_Word) ((MR_hl_field(1, DebugModes_10, 0))));

    check_hlds__mode_debug__do_mode_checkpoint_6_p_0(Port_6, Msg_7, GoalInfo_8, DebugFlags_11, STATE_VARIABLE_ModeInfo_0_12, STATE_VARIABLE_ModeInfo_13);
  }
}

static void MR_CALL 
check_hlds__mode_debug__do_mode_checkpoint_6_p_0(
  MR_Word Port_7,
  MR_String Msg_8,
  MR_Word GoalInfo_9,
  MR_Word DebugFlags_10,
  MR_Word STATE_VARIABLE_ModeInfo_0_42,
  MR_Word * STATE_VARIABLE_ModeInfo_43)
{
  MR_bool succeeded;
  MR_String UniquePrefix_18 = ((MR_String) ((MR_hl_field(0, DebugFlags_10, 0))));
  MR_Word Statistics_19;
  MR_Word DebugVerbose_20 = ((((MR_Unsigned) ((MR_hl_field(0, DebugFlags_10, 2))) >> 3)) & (MR_Integer) 1);
  MR_Word DebugMinimal_21 = ((((MR_Unsigned) ((MR_hl_field(0, DebugFlags_10, 2))) >> 2)) & (MR_Integer) 1);
  MR_Word DebugGoalId_22 = ((((MR_Unsigned) ((MR_hl_field(0, DebugFlags_10, 2))) >> 1)) & (MR_Integer) 1);
  MR_Word DebugDelayVars_23 = ((MR_Unsigned) ((MR_hl_field(0, DebugFlags_10, 2))) & (MR_Integer) 1);
  MR_String GoalIdStr_24;
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, DebugFlags_10, 1))));

  Statistics_19 = (MR_Word) (Var_46);
  switch (DebugGoalId_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Unsigned GoalId_25;
        MR_Word Var_47;
        MR_String Var_107;
        MR_String Var_114;

        Var_47 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_9);
        GoalId_25 = (MR_Unsigned) (Var_47);
        mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&check_hlds__mode_debug_scalar_common_2[1]), (MR_Integer) 1, GoalId_25, &Var_107);
        Var_114 = mercury__string__f_43_43_2_f_0(Var_107, (MR_String) ": ");
        GoalIdStr_24 = mercury__string__f_43_43_2_f_0((MR_String) "for goal #", Var_114);
      }
      break;
    case (MR_Integer) 0:
      GoalIdStr_24 = (MR_String) "";
      break;
  }
  switch (Port_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word InstMap_26;
        MR_Word ModuleInfo_92;
        MR_Word Globals_93;
        MR_Word ModuleName_94;
        MR_Word DebugStream_95;

        check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_42, &InstMap_26);
        check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_42, &ModuleInfo_92);
        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_92, &Globals_93);
        hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_92, &ModuleName_94);
        libs__globals__get_debug_output_stream_5_p_0(Globals_93, ModuleName_94, &DebugStream_95);
        mercury__io__write_string_4_p_0(DebugStream_95, (MR_String) "\n");
        mercury__io__write_string_4_p_0(DebugStream_95, (MR_String) "Enter ");
        mercury__io__write_string_4_p_0(DebugStream_95, GoalIdStr_24);
        mercury__io__write_string_4_p_0(DebugStream_95, UniquePrefix_18);
        mercury__io__write_string_4_p_0(DebugStream_95, Msg_8);
        mercury__io__write_string_4_p_0(DebugStream_95, (MR_String) ":\n");
        libs__file_util__maybe_report_stats_4_p_0(DebugStream_95, Statistics_19);
        libs__file_util__maybe_flush_output_4_p_0(DebugStream_95, Statistics_19);
        succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap_26);
        if (succeeded)
        {
          MR_Word NewInsts_32;
          MR_Word OldInstMap_33;
          MR_Word InstVarSet_35;
          MR_Word VarTable_90;

          hlds__instmap__instmap_to_assoc_list_2_p_0(InstMap_26, &NewInsts_32);
          check_hlds__mode_info__mode_info_get_last_checkpoint_insts_2_p_0(STATE_VARIABLE_ModeInfo_0_42, &OldInstMap_33);
          check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_0_42, &VarTable_90);
          check_hlds__mode_info__mode_info_get_instvarset_2_p_0(STATE_VARIABLE_ModeInfo_0_42, &InstVarSet_35);
          check_hlds__mode_debug__write_var_insts_9_p_0(DebugStream_95, VarTable_90, InstVarSet_35, OldInstMap_33, DebugVerbose_20, DebugMinimal_21, NewInsts_32);
        }
        else
          mercury__io__write_string_4_p_0(DebugStream_95, (MR_String) "\tUnreachable\n");
        mercury__io__flush_output_3_p_0(DebugStream_95);
        check_hlds__mode_info__mode_info_set_last_checkpoint_insts_3_p_0(InstMap_26, STATE_VARIABLE_ModeInfo_0_42, STATE_VARIABLE_ModeInfo_43);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Errors0_14;

        check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_0_42, &Errors0_14);
        if ((Errors0_14 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word InstMap_186;
          MR_Word ModuleInfo_152;
          MR_Word Globals_153;
          MR_Word ModuleName_154;
          MR_Word DebugStream_155;

          check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_42, &InstMap_186);
          check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_42, &ModuleInfo_152);
          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_152, &Globals_153);
          hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_152, &ModuleName_154);
          libs__globals__get_debug_output_stream_5_p_0(Globals_153, ModuleName_154, &DebugStream_155);
          mercury__io__write_string_4_p_0(DebugStream_155, (MR_String) "\n");
          mercury__io__write_string_4_p_0(DebugStream_155, (MR_String) "Exit ");
          mercury__io__write_string_4_p_0(DebugStream_155, GoalIdStr_24);
          mercury__io__write_string_4_p_0(DebugStream_155, UniquePrefix_18);
          mercury__io__write_string_4_p_0(DebugStream_155, Msg_8);
          mercury__io__write_string_4_p_0(DebugStream_155, (MR_String) ":\n");
          libs__file_util__maybe_report_stats_4_p_0(DebugStream_155, Statistics_19);
          libs__file_util__maybe_flush_output_4_p_0(DebugStream_155, Statistics_19);
          succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap_186);
          if (succeeded)
          {
            MR_Word NewInsts_130;
            MR_Word OldInstMap_131;
            MR_Word InstVarSet_132;
            MR_Word VarTable_133;

            hlds__instmap__instmap_to_assoc_list_2_p_0(InstMap_186, &NewInsts_130);
            check_hlds__mode_info__mode_info_get_last_checkpoint_insts_2_p_0(STATE_VARIABLE_ModeInfo_0_42, &OldInstMap_131);
            check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_0_42, &VarTable_133);
            check_hlds__mode_info__mode_info_get_instvarset_2_p_0(STATE_VARIABLE_ModeInfo_0_42, &InstVarSet_132);
            check_hlds__mode_debug__write_var_insts_9_p_0(DebugStream_155, VarTable_133, InstVarSet_132, OldInstMap_131, DebugVerbose_20, DebugMinimal_21, NewInsts_130);
          }
          else
            mercury__io__write_string_4_p_0(DebugStream_155, (MR_String) "\tUnreachable\n");
          mercury__io__flush_output_3_p_0(DebugStream_155);
          check_hlds__mode_info__mode_info_set_last_checkpoint_insts_3_p_0(InstMap_186, STATE_VARIABLE_ModeInfo_0_42, STATE_VARIABLE_ModeInfo_43);
        }
        else
        {
          MR_Word ModuleInfo_101;
          MR_Word Globals_102;
          MR_Word ModuleName_103;
          MR_Word DebugStream_104;

          check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_42, &ModuleInfo_101);
          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_101, &Globals_102);
          hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_101, &ModuleName_103);
          libs__globals__get_debug_output_stream_5_p_0(Globals_102, ModuleName_103, &DebugStream_104);
          mercury__io__write_string_4_p_0(DebugStream_104, (MR_String) "\n");
          mercury__io__write_string_4_p_0(DebugStream_104, (MR_String) "Delay ");
          mercury__io__write_string_4_p_0(DebugStream_104, GoalIdStr_24);
          mercury__io__write_string_4_p_0(DebugStream_104, UniquePrefix_18);
          mercury__io__write_string_4_p_0(DebugStream_104, Msg_8);
          mercury__io__write_string_4_p_0(DebugStream_104, (MR_String) ":\n");
          switch (DebugDelayVars_23) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word NonLocals_38;
                MR_Word VarTable_97;

                check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_0_42, &VarTable_97);
                NonLocals_38 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
                check_hlds__mode_debug__write_var_list_6_p_0(DebugStream_104, VarTable_97, (MR_String) "nonlocal vars:", NonLocals_38);
                check_hlds__mode_debug__write_error_vars_6_p_0(DebugStream_104, VarTable_97, (MR_Integer) 1, Errors0_14);
              }
              break;
            case (MR_Integer) 0:
              {
              }
              break;
          }
          mercury__io__flush_output_3_p_0(DebugStream_104);
          *STATE_VARIABLE_ModeInfo_43 = STATE_VARIABLE_ModeInfo_0_42;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word MaybeHeadError_346 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &check_hlds__mode_debug_scalar_common_2[0])), 0))));
        MR_Word ModuleInfo_308;
        MR_Word Globals_309;
        MR_Word ModuleName_310;
        MR_Word DebugStream_311;

        check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_42, &ModuleInfo_308);
        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_308, &Globals_309);
        hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_308, &ModuleName_310);
        libs__globals__get_debug_output_stream_5_p_0(Globals_309, ModuleName_310, &DebugStream_311);
        mercury__io__write_string_4_p_0(DebugStream_311, (MR_String) "\n");
        mercury__io__write_string_4_p_0(DebugStream_311, (MR_String) "Wake ");
        mercury__io__write_string_4_p_0(DebugStream_311, GoalIdStr_24);
        mercury__io__write_string_4_p_0(DebugStream_311, UniquePrefix_18);
        mercury__io__write_string_4_p_0(DebugStream_311, Msg_8);
        mercury__io__write_string_4_p_0(DebugStream_311, (MR_String) ":\n");
        if (!((MaybeHeadError_346 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word OoMErrors_276 = ((MR_Word) ((MR_hl_field(1, MaybeHeadError_346, 0))));

          switch (DebugDelayVars_23) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word NonLocals_260;
                MR_Word HeadError_262;
                MR_Word TailErrors_263;
                MR_Word Var_266;
                MR_Word VarTable_267;

                check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_0_42, &VarTable_267);
                NonLocals_260 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
                check_hlds__mode_debug__write_var_list_6_p_0(DebugStream_311, VarTable_267, (MR_String) "nonlocal vars:", NonLocals_260);
                HeadError_262 = ((MR_Word) ((MR_hl_field(0, OoMErrors_276, 0))));
                TailErrors_263 = ((MR_Word) ((MR_hl_field(0, OoMErrors_276, 1))));
                {
                  Var_266 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_266, 0) = ((MR_Box) (HeadError_262));
                  MR_hl_field(1, Var_266, 1) = ((MR_Box) (TailErrors_263));
                }
                check_hlds__mode_debug__write_error_vars_6_p_0(DebugStream_311, VarTable_267, (MR_Integer) 1, Var_266);
              }
              break;
            case (MR_Integer) 0:
              {
              }
              break;
          }
        }
        mercury__io__flush_output_3_p_0(DebugStream_311);
        *STATE_VARIABLE_ModeInfo_43 = STATE_VARIABLE_ModeInfo_0_42;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__mode_debug__write_var_list_6_p_0(
  MR_Word DebugStream_7,
  MR_Word VarTable_8,
  MR_String Desc_9,
  MR_Word Vars_10)
{
  MR_Word Var_20;
  MR_String Var_23;

  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&check_hlds__mode_debug_scalar_common_2[2]), (MR_Integer) 20, Desc_9, &Var_23);
  mercury__io__write_string_4_p_0(DebugStream_7, Var_23);
  Var_20 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_10);
  parse_tree__parse_tree_out_term__mercury_output_vars_6_p_0(VarTable_8, (MR_Integer) 1, Var_20, DebugStream_7);
  mercury__io__nl_3_p_0(DebugStream_7);
}

static void MR_CALL 
check_hlds__mode_debug__write_error_vars_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Error_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word Errors_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_String Desc_19;
      MR_Word Vars_20;
      MR_Integer Var_31;
      MR_String Var_35;
      MR_String Var_42;
      MR_Word Var_50;
      MR_String Var_53;
      MR_Integer next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__4_4;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__mode_debug_scalar_common_2[1]), HeadVar__3_3, &Var_35);
      Var_42 = mercury__string__f_43_43_2_f_0(Var_35, (MR_String) ":");
      Desc_19 = mercury__string__f_43_43_2_f_0((MR_String) "vars for error #", Var_42);
      Vars_20 = ((MR_Word) ((MR_hl_field(0, Error_16, 0))));
      mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&check_hlds__mode_debug_scalar_common_2[2]), (MR_Integer) 20, Desc_19, &Var_53);
      mercury__io__write_string_4_p_0(HeadVar__1_1, Var_53);
      Var_50 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_20);
      parse_tree__parse_tree_out_term__mercury_output_vars_6_p_0(HeadVar__2_2, (MR_Integer) 1, Var_50, HeadVar__1_1);
      mercury__io__nl_3_p_0(HeadVar__1_1);
      Var_31 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Var_31;
      next_value_of_HeadVar__4_4 = Errors_17;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__mode_debug__write_var_insts_9_p_0(
  MR_Word Stream_1,
  MR_Word VarTable_2,
  MR_Word InstVarSet_3,
  MR_Word OldInstMap_4,
  MR_Word DebugVerbose_5,
  MR_Word DebugMinimal_6,
  MR_Word HeadVar__7_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_25;
      MR_Word Inst_26;
      MR_Word VarInsts_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 1))));
      MR_Word OldInst_29;
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 0))));
      MR_Word next_value_of_HeadVar__7_7;

      Var_25 = ((MR_Word) ((MR_hl_field(0, Var_32, 0))));
      Inst_26 = ((MR_Word) ((MR_hl_field(0, Var_32, 1))));
      hlds__instmap__instmap_lookup_var_3_p_0(OldInstMap_4, Var_25, &OldInst_29);
{
#define MR_PROC_LABEL check_hlds__mode_debug__write_var_insts_9_p_0

	MR_Word InstA;
	MR_Word InstB;
	MR_bool SUCCESS_INDICATOR;

	InstA = Inst_26 ;
	InstB = OldInst_29 ;
		{

    if (InstA == InstB) {
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
      if (!(succeeded))
        succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(Inst_26, OldInst_29);
      if (succeeded)
        switch (DebugVerbose_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\t");
              parse_tree__parse_tree_out_term__mercury_output_var_6_p_0(VarTable_2, (MR_Integer) 0, Var_25, Stream_1);
              mercury__io__write_string_4_p_0(Stream_1, (MR_String) " :: unchanged");
            }
            break;
        }
      else
      {
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\t");
        parse_tree__parse_tree_out_term__mercury_output_var_6_p_0(VarTable_2, (MR_Integer) 0, Var_25, Stream_1);
        switch (DebugMinimal_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) " :: changed\n");
            break;
          case (MR_Integer) 0:
            {
              mercury__io__write_string_4_p_0(Stream_1, (MR_String) " ::\n");
              hlds__hlds_out__hlds_out_mode__mercury_output_structured_inst_8_p_0(Stream_1, (MR_Integer) 1, InstVarSet_3, (MR_Integer) 0, (MR_Unsigned) 2U, Inst_26);
            }
            break;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__7_7 = VarInsts_27;
      HeadVar__7_7 = next_value_of_HeadVar__7_7;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__mode_debug____Unify____maybe_print_insts_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_debug____Unify____maybe_print_insts_stats_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_debug____Compare____maybe_print_insts_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_debug____Compare____maybe_print_insts_stats_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mode_debug____Unify____mode_checkpoint_port_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_debug____Unify____mode_checkpoint_port_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_debug____Compare____mode_checkpoint_port_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_debug____Compare____mode_checkpoint_port_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__mode_debug__init(void)
{
}

void mercury__check_hlds__mode_debug__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__mode_debug__check_hlds__mode_debug__type_ctor_info_maybe_print_insts_stats_0);
  MR_register_type_ctor_info(&check_hlds__mode_debug__check_hlds__mode_debug__type_ctor_info_mode_checkpoint_port_0);
}

void mercury__check_hlds__mode_debug__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__mode_debug__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.mode_debug.
