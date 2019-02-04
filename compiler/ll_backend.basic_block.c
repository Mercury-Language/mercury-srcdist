/*
** Automatically generated from `basic_block.m'
** by the Mercury compiler,
** version rotd-2018-03-14
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


// :- module ll_backend.basic_block.
// :- implementation.

/*
INIT mercury__ll_backend__basic_block__init
ENDINIT
*/

#include "ll_backend.basic_block.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.opt_util.mih"
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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__basic_block__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__basic_block__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__basic_block__list__ti_list_1ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__basic_block__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0;

static const MR_PseudoTypeInfo ll_backend__basic_block__ll_backend__basic_block__field_types_block_info_0_0[7];

static const MR_ConstString ll_backend__basic_block__ll_backend__basic_block__field_names_block_info_0_0[7];

static const MR_DuFunctorDesc ll_backend__basic_block__ll_backend__basic_block__du_functor_desc_block_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__basic_block__ll_backend__basic_block__du_stag_ordered_block_info_0_0[1];

static const MR_DuPtagLayout ll_backend__basic_block__ll_backend__basic_block__du_ptag_ordered_block_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__basic_block__ll_backend__basic_block__du_name_ordered_block_info_0[1];

static const MR_Integer ll_backend__basic_block__ll_backend__basic_block__functor_number_map_block_info_0[1];

static const MR_FA_TypeInfo_Struct2 ll_backend__basic_block__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__basic_block__type_ctor_info_block_info_0;

static MR_bool MR_CALL 
ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__228__1_2_p_0(
  MR_Word NextBlockFallInto_30,
  MR_Word HeadVar__2_54);

static MR_bool MR_CALL 
ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__226__1_2_p_0(
  MR_Word BlockMaybeFallThrough_25,
  MR_Word HeadVar__2_49);

static MR_bool MR_CALL 
ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__224__1_2_p_0(
  MR_Word NextLabel_15,
  MR_Word NextBlockLabel_26);

static MR_bool MR_CALL 
ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__222__1_2_p_0(
  MR_Word Label_10,
  MR_Word BlockLabel_19);

static MR_bool MR_CALL 
ll_backend__basic_block__extend_basic_blocks_5_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__basic_block__extend_basic_blocks_5_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__basic_block__extend_basic_blocks_5_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__basic_block__extend_basic_blocks_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__basic_block__build_block_map_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word ProcLabel_3,
  MR_Word FallInto_4,
  MR_Word STATE_VARIABLE_BlockMap_0_5,
  MR_Word * STATE_VARIABLE_BlockMap_6,
  MR_Word STATE_VARIABLE_NewLabels_0_7,
  MR_Word * STATE_VARIABLE_NewLabels_8,
  MR_Word STATE_VARIABLE_C_0_9,
  MR_Word * STATE_VARIABLE_C_10);

static void MR_CALL 
ll_backend__basic_block__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_110_100_95_99_111_117_110_116_95_108_105_115_116_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_List_0_2,
  MR_Word * STATE_VARIABLE_List_3,
  MR_Integer STATE_VARIABLE_N_0_4,
  MR_Integer * STATE_VARIABLE_N_5);

static void MR_CALL 
ll_backend__basic_block__take_until_end_of_block_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevBlockInstrs_0_2,
  MR_Word * STATE_VARIABLE_RevBlockInstrs_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
ll_backend__basic_block____Unify____block_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__basic_block____Compare____block_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__basic_block____Unify____block_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__basic_block____Compare____block_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__basic_block_scalar_common_1[3][2];

static /* final */ const MR_Box ll_backend__basic_block_scalar_common_2[1][3];

static /* final */ const MR_Box ll_backend__basic_block_scalar_common_3[3][5];




static /* final */ const MR_Box ll_backend__basic_block_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
};

static /* final */ const MR_Box ll_backend__basic_block_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0))
  },
};

static /* final */ const MR_Box ll_backend__basic_block_scalar_common_3[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__basic_block__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__basic_block__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__basic_block__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__basic_block__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__basic_block__list__ti_list_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__basic_block__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

static const MR_PseudoTypeInfo ll_backend__basic_block__ll_backend__basic_block__field_types_block_info_0_0[7] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0,
  (MR_PseudoTypeInfo) &ll_backend__basic_block__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__basic_block__list__ti_list_1ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__basic_block__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0
};

static const MR_ConstString ll_backend__basic_block__ll_backend__basic_block__field_names_block_info_0_0[7] = {
  (MR_String) "bi_starting_label",
  (MR_String) "bi_label_instr",
  (MR_String) "bi_later_instrs",
  (MR_String) "bi_num_later_instrs",
  (MR_String) "bi_fallen_into",
  (MR_String) "bi_jump_dests",
  (MR_String) "bi_fall_dest"
};

static const MR_DuFunctorDesc ll_backend__basic_block__ll_backend__basic_block__du_functor_desc_block_info_0_0 = {
  (MR_String) "block_info",
  (MR_Integer) 7,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__basic_block__ll_backend__basic_block__field_types_block_info_0_0,
  ll_backend__basic_block__ll_backend__basic_block__field_names_block_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__basic_block__ll_backend__basic_block__du_stag_ordered_block_info_0_0[1] = {
  &ll_backend__basic_block__ll_backend__basic_block__du_functor_desc_block_info_0_0
};

static const MR_DuPtagLayout ll_backend__basic_block__ll_backend__basic_block__du_ptag_ordered_block_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__basic_block__ll_backend__basic_block__du_stag_ordered_block_info_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__basic_block__ll_backend__basic_block__du_name_ordered_block_info_0[1] = {
  &ll_backend__basic_block__ll_backend__basic_block__du_functor_desc_block_info_0_0
};

static const MR_Integer ll_backend__basic_block__ll_backend__basic_block__functor_number_map_block_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__basic_block____Unify____block_info_0_0_10001)),
  ((MR_Box) (ll_backend__basic_block____Compare____block_info_0_0_10001)),
  (MR_String) "ll_backend.basic_block",
  (MR_String) "block_info",
  {     ll_backend__basic_block__ll_backend__basic_block__du_name_ordered_block_info_0 },
  {     ll_backend__basic_block__ll_backend__basic_block__du_ptag_ordered_block_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__basic_block__ll_backend__basic_block__functor_number_map_block_info_0
};

static const MR_FA_TypeInfo_Struct2 ll_backend__basic_block__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__basic_block__type_ctor_info_block_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0
  }
};

const MR_TypeCtorInfo_Struct ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__basic_block____Unify____block_map_0_0_10001)),
  ((MR_Box) (ll_backend__basic_block____Compare____block_map_0_0_10001)),
  (MR_String) "ll_backend.basic_block",
  (MR_String) "block_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__basic_block__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__basic_block__type_ctor_info_block_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__228__1_2_p_0(
  MR_Word NextBlockFallInto_30,
  MR_Word HeadVar__2_54)
{
  {
    MR_bool succeeded = (NextBlockFallInto_30 == HeadVar__2_54);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__226__1_2_p_0(
  MR_Word BlockMaybeFallThrough_25,
  MR_Word HeadVar__2_49)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__basic_block_scalar_common_1[0], ((MR_Box) (BlockMaybeFallThrough_25)), ((MR_Box) (HeadVar__2_49)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__224__1_2_p_0(
  MR_Word NextLabel_15,
  MR_Word NextBlockLabel_26)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__llds____Unify____label_0_0(NextBlockLabel_26, NextLabel_15);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__222__1_2_p_0(
  MR_Word Label_10,
  MR_Word BlockLabel_19)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__llds____Unify____label_0_0(BlockLabel_19, Label_10);
    return succeeded;
  }
}

void MR_CALL 
ll_backend__basic_block____Compare____block_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__basic_block_scalar_common_2[0], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
ll_backend__basic_block____Unify____block_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__basic_block_scalar_common_2[0], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
ll_backend__basic_block____Compare____block_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_24 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_25 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_24 == CastY_25);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Integer ArgX4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Integer ArgY4_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Word ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6)));
      MR_Word Var_18;

      ll_backend__llds____Compare____label_0_0(&Var_18, ArgX1_4, ArgY1_5);
      succeeded = (Var_18 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_18;
      else
      {
        MR_Word Var_19;

        ll_backend__llds____Compare____instruction_0_0(&Var_19, ArgX2_6, ArgY2_7);
        succeeded = (Var_19 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_19;
        else
        {
          MR_Word Var_20;

          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__basic_block_scalar_common_1[1], &Var_20, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_20 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_20;
          else
          {
            MR_Word Var_21;

            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_21, ArgX4_10, ArgY4_11);
            succeeded = (Var_21 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_21;
            else
            {
              MR_Word Var_22;
              MR_Integer Var_33 = (MR_Integer) ArgX5_12;
              MR_Integer Var_34 = (MR_Integer) ArgY5_13;

              mercury__private_builtin__builtin_compare_int_3_p_0(&Var_22, Var_33, Var_34);
              succeeded = (Var_22 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_22;
              else
              {
                MR_Word Var_23;

                mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__basic_block_scalar_common_1[2], &Var_23, ((MR_Box) (ArgX6_14)), ((MR_Box) (ArgY6_15)));
                succeeded = (Var_23 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_23;
                else
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__basic_block_scalar_common_1[0], HeadVar__1_1, ((MR_Box) (ArgX7_16)), ((MR_Box) (ArgY7_17)));
                }
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
ll_backend__basic_block____Unify____block_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_18 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_21_21;
      MR_Word TypeInfo_22_22;
      MR_Word TypeInfo_23_23;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ArgX4_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Integer ArgY4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));
      MR_Word ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));

      succeeded = ll_backend__llds____Unify____label_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = ll_backend__llds____Unify____instruction_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeInfo_21_21 = (MR_Word) &ll_backend__basic_block_scalar_common_1[1];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              succeeded = (ArgX5_11 == ArgY5_12);
              if (succeeded)
              {
                TypeInfo_22_22 = (MR_Word) &ll_backend__basic_block_scalar_common_1[2];
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_23_23 = (MR_Word) &ll_backend__basic_block_scalar_common_1[0];
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
ll_backend__basic_block__flatten_basic_blocks_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word BlockMap_2,
  MR_Word * HeadVar__3_3,
  MR_Integer * HeadVar__4_4)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__4_4 = (MR_Integer) 0;
  }
  else
  {
    MR_Word Label_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Labels_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word RestInstrs_11;
    MR_Integer RestNumInstrs_12;
    MR_Word BlockInfo_13;
    MR_Word BlockLabelInstr_15;
    MR_Word BlockInstrs_16;
    MR_Integer NumBlockInstrs_17;
    MR_Word Var_21;
    MR_Box conv0_BlockInfo_13;
    MR_Word Var_14;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    ll_backend__basic_block__flatten_basic_blocks_4_p_0(Labels_7, BlockMap_2, &RestInstrs_11, &RestNumInstrs_12);
    mercury__map__lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0, BlockMap_2, ((MR_Box) (Label_6)), &conv0_BlockInfo_13);
    BlockInfo_13 = ((MR_Word) conv0_BlockInfo_13);
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), BlockInfo_13, (MR_Integer) 0)));
    BlockLabelInstr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), BlockInfo_13, (MR_Integer) 1)));
    BlockInstrs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), BlockInfo_13, (MR_Integer) 2)));
    NumBlockInstrs_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BlockInfo_13, (MR_Integer) 3)));
    Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), BlockInfo_13, (MR_Integer) 4)));
    Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), BlockInfo_13, (MR_Integer) 5)));
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), BlockInfo_13, (MR_Integer) 6)));
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (BlockLabelInstr_15));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (BlockInstrs_16));
    }
    *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, Var_21, RestInstrs_11);
    *HeadVar__4_4 = (NumBlockInstrs_17 + RestNumInstrs_12);
  }
}

static MR_bool MR_CALL 
ll_backend__basic_block__extend_basic_blocks_5_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__228__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__basic_block__extend_basic_blocks_5_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__226__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__basic_block__extend_basic_blocks_5_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__224__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__basic_block__extend_basic_blocks_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__222__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

void MR_CALL 
ll_backend__basic_block__extend_basic_blocks_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_BlockMap_0_3,
  MR_Word * STATE_VARIABLE_BlockMap_4,
  MR_Word HeadVar__5_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_BlockMap_4 = STATE_VARIABLE_BlockMap_0_3;
    }
    else
    {
      MR_Word Label_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Labels_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word NextLabel_15;
      MR_Word RestLabels_16;
      MR_Word TypeCtorInfo_63_63;

      succeeded = ((MR_tag((MR_Word) Labels_11)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        NextLabel_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Labels_11, (MR_Integer) 0)));
        RestLabels_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Labels_11, (MR_Integer) 1)));
        TypeCtorInfo_63_63 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
        succeeded = mercury__set__member_2_p_0(TypeCtorInfo_63_63, ((MR_Box) (NextLabel_15)), HeadVar__5_5);
      }
      if (succeeded)
      {
        MR_Word TypeCtorInfo_64_64 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
        MR_Word TypeCtorInfo_65_65 = (MR_Word) &ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0;
        MR_Word BlockInfo_17;
        MR_Word NextBlockInfo_18;
        MR_Word BlockLabel_19;
        MR_Word BlockLabelInstr_20;
        MR_Word BlockInstrs_21;
        MR_Integer NumBlockInstrs_22;
        MR_Word BlockFallInto_23;
        MR_Word BlockSideLabels_24;
        MR_Word BlockMaybeFallThrough_25;
        MR_Word NextBlockLabel_26;
        MR_Word NextBlockInstrs_28;
        MR_Integer NumNextBlockInstrs_29;
        MR_Word NextBlockFallInto_30;
        MR_Word NextBlockSideLabels_31;
        MR_Word NextBlockMaybeFallThrough_32;
        MR_Word NewBlockInfo_33;
        MR_Word Var_37;
        MR_Word Var_41;
        MR_Word Var_45;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_55;
        MR_Integer Var_56;
        MR_Word Var_57;
        MR_Word STATE_VARIABLE_BlockMap_58_58;
        MR_Word STATE_VARIABLE_BlockMap_59_59;
        MR_Word Var_60;
        MR_Box conv0_BlockInfo_17;
        MR_Box conv1_NextBlockInfo_18;
        MR_Word Var_27;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_STATE_VARIABLE_BlockMap_0_3;

        mercury__map__lookup_3_p_0(TypeCtorInfo_64_64, TypeCtorInfo_65_65, STATE_VARIABLE_BlockMap_0_3, ((MR_Box) (Label_10)), &conv0_BlockInfo_17);
        BlockInfo_17 = ((MR_Word) conv0_BlockInfo_17);
        mercury__map__lookup_3_p_0(TypeCtorInfo_64_64, TypeCtorInfo_65_65, STATE_VARIABLE_BlockMap_0_3, ((MR_Box) (NextLabel_15)), &conv1_NextBlockInfo_18);
        NextBlockInfo_18 = ((MR_Word) conv1_NextBlockInfo_18);
        BlockLabel_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), BlockInfo_17, (MR_Integer) 0)));
        BlockLabelInstr_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), BlockInfo_17, (MR_Integer) 1)));
        BlockInstrs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), BlockInfo_17, (MR_Integer) 2)));
        NumBlockInstrs_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BlockInfo_17, (MR_Integer) 3)));
        BlockFallInto_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), BlockInfo_17, (MR_Integer) 4)));
        BlockSideLabels_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), BlockInfo_17, (MR_Integer) 5)));
        BlockMaybeFallThrough_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), BlockInfo_17, (MR_Integer) 6)));
        NextBlockLabel_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), NextBlockInfo_18, (MR_Integer) 0)));
        Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), NextBlockInfo_18, (MR_Integer) 1)));
        NextBlockInstrs_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), NextBlockInfo_18, (MR_Integer) 2)));
        NumNextBlockInstrs_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), NextBlockInfo_18, (MR_Integer) 3)));
        NextBlockFallInto_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), NextBlockInfo_18, (MR_Integer) 4)));
        NextBlockSideLabels_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), NextBlockInfo_18, (MR_Integer) 5)));
        NextBlockMaybeFallThrough_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), NextBlockInfo_18, (MR_Integer) 6)));
        {
          Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&ll_backend__basic_block_scalar_common_3[0]));
          MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (ll_backend__basic_block__extend_basic_blocks_5_p_0_1));
          MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (Label_10));
          MR_hl_field(MR_mktag(0), Var_37, 4) = ((MR_Box) (BlockLabel_19));
        }
        mercury__require__expect_4_p_0(Var_37, (MR_String) "ll_backend.basic_block", (MR_String) "predicate \140ll_backend.basic_block.extend_basic_blocks\'/5", (MR_String) "block label mismatch");
        {
          Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&ll_backend__basic_block_scalar_common_3[0]));
          MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (ll_backend__basic_block__extend_basic_blocks_5_p_0_2));
          MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (NextLabel_15));
          MR_hl_field(MR_mktag(0), Var_41, 4) = ((MR_Box) (NextBlockLabel_26));
        }
        mercury__require__expect_4_p_0(Var_41, (MR_String) "ll_backend.basic_block", (MR_String) "predicate \140ll_backend.basic_block.extend_basic_blocks\'/5", (MR_String) "next block label mismatch");
        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (NextLabel_15));
        }
        {
          Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&ll_backend__basic_block_scalar_common_3[1]));
          MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (ll_backend__basic_block__extend_basic_blocks_5_p_0_3));
          MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (BlockMaybeFallThrough_25));
          MR_hl_field(MR_mktag(0), Var_45, 4) = ((MR_Box) (Var_49));
        }
        mercury__require__expect_4_p_0(Var_45, (MR_String) "ll_backend.basic_block", (MR_String) "predicate \140ll_backend.basic_block.extend_basic_blocks\'/5", (MR_String) "fall through mismatch");
        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&ll_backend__basic_block_scalar_common_3[2]));
          MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (ll_backend__basic_block__extend_basic_blocks_5_p_0_4));
          MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (NextBlockFallInto_30));
          MR_hl_field(MR_mktag(0), Var_50, 4) = ((MR_Box) ((MR_Integer) 1));
        }
        mercury__require__expect_4_p_0(Var_50, (MR_String) "ll_backend.basic_block", (MR_String) "predicate \140ll_backend.basic_block.extend_basic_blocks\'/5", (MR_String) "fall into mismatch");
        Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, BlockInstrs_21, NextBlockInstrs_28);
        Var_56 = (NumBlockInstrs_22 + NumNextBlockInstrs_29);
        Var_57 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_64_64, BlockSideLabels_24, NextBlockSideLabels_31);
        {
          NewBlockInfo_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), NewBlockInfo_33, 0) = ((MR_Box) (BlockLabel_19));
          MR_hl_field(MR_mktag(0), NewBlockInfo_33, 1) = ((MR_Box) (BlockLabelInstr_20));
          MR_hl_field(MR_mktag(0), NewBlockInfo_33, 2) = ((MR_Box) (Var_55));
          MR_hl_field(MR_mktag(0), NewBlockInfo_33, 3) = ((MR_Box) (Var_56));
          MR_hl_field(MR_mktag(0), NewBlockInfo_33, 4) = ((MR_Box) (BlockFallInto_23));
          MR_hl_field(MR_mktag(0), NewBlockInfo_33, 5) = ((MR_Box) (Var_57));
          MR_hl_field(MR_mktag(0), NewBlockInfo_33, 6) = ((MR_Box) (NextBlockMaybeFallThrough_32));
        }
        mercury__map__det_update_4_p_0(TypeCtorInfo_64_64, TypeCtorInfo_65_65, ((MR_Box) (Label_10)), ((MR_Box) (NewBlockInfo_33)), STATE_VARIABLE_BlockMap_0_3, &STATE_VARIABLE_BlockMap_58_58);
        mercury__map__delete_3_p_0(TypeCtorInfo_64_64, TypeCtorInfo_65_65, ((MR_Box) (NextLabel_15)), STATE_VARIABLE_BlockMap_58_58, &STATE_VARIABLE_BlockMap_59_59);
        {
          Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Label_10));
          MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (RestLabels_16));
        }
        // direct tailcall eliminated
        next_value_of_HeadVar__1_1 = Var_60;
        next_value_of_STATE_VARIABLE_BlockMap_0_3 = STATE_VARIABLE_BlockMap_59_59;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_BlockMap_0_3 = next_value_of_STATE_VARIABLE_BlockMap_0_3;
        continue;
      }
      else
      {
        MR_Word LabelSeqTail_34;

        ll_backend__basic_block__extend_basic_blocks_5_p_0(Labels_11, &LabelSeqTail_34, STATE_VARIABLE_BlockMap_0_3, STATE_VARIABLE_BlockMap_4, HeadVar__5_5);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Label_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LabelSeqTail_34));
        }
      }
    }
    break;
  }
}

void MR_CALL 
ll_backend__basic_block__create_basic_blocks_8_p_0(
  MR_Word Instrs0_9,
  MR_Word * Comments_10,
  MR_Word ProcLabel_11,
  MR_Word STATE_VARIABLE_C_0_19,
  MR_Word * STATE_VARIABLE_C_20,
  MR_Word * NewLabels_13,
  MR_Word * LabelSeq_14,
  MR_Word * BlockMap_15)
{
  {
    MR_Word TypeCtorInfo_25_25;
    MR_Word LabelInstr_16;
    MR_Word AfterLabelInstrs_17;
    MR_Word Instrs1_18;
    MR_Word Var_22;
    MR_Word Var_23;

    ll_backend__opt_util__get_prologue_4_p_0(Instrs0_9, &LabelInstr_16, Comments_10, &AfterLabelInstrs_17);
    {
      Instrs1_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Instrs1_18, 0) = ((MR_Box) (LabelInstr_16));
      MR_hl_field(MR_mktag(1), Instrs1_18, 1) = ((MR_Box) (AfterLabelInstrs_17));
    }
    TypeCtorInfo_25_25 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
    Var_22 = mercury__map__init_0_f_0(TypeCtorInfo_25_25, (MR_Word) &ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0);
    Var_23 = mercury__set__init_0_f_0(TypeCtorInfo_25_25);
    ll_backend__basic_block__build_block_map_10_p_0(Instrs1_18, LabelSeq_14, ProcLabel_11, (MR_Integer) 0, Var_22, BlockMap_15, Var_23, NewLabels_13, STATE_VARIABLE_C_0_19, STATE_VARIABLE_C_20);
  }
}

static void MR_CALL 
ll_backend__basic_block__build_block_map_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word ProcLabel_3,
  MR_Word FallInto_4,
  MR_Word STATE_VARIABLE_BlockMap_0_5,
  MR_Word * STATE_VARIABLE_BlockMap_6,
  MR_Word STATE_VARIABLE_NewLabels_0_7,
  MR_Word * STATE_VARIABLE_NewLabels_8,
  MR_Word STATE_VARIABLE_C_0_9,
  MR_Word * STATE_VARIABLE_C_10)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_C_10 = STATE_VARIABLE_C_0_9;
      *STATE_VARIABLE_NewLabels_8 = STATE_VARIABLE_NewLabels_0_7;
      *STATE_VARIABLE_BlockMap_6 = STATE_VARIABLE_BlockMap_0_5;
    }
    else
    {
      MR_Word OrigInstr0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word OrigInstrs0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Label_32;
      MR_Word LabelInstr_33;
      MR_Word RestInstrs_34;
      MR_Word RevBlockInstrs_36;
      MR_Word Instrs1_37;
      MR_Word LabelSeq1_38;
      MR_Word NextFallInto_39;
      MR_Word BlockInstrs_42;
      MR_Integer NumBlockInstrs_43;
      MR_Word SideLabels_46;
      MR_Word MaybeFallThrough_48;
      MR_Word BlockInfo_49;
      MR_Word STATE_VARIABLE_C_57_57;
      MR_Word STATE_VARIABLE_NewLabels_58_58;
      MR_Word STATE_VARIABLE_BlockMap_62_62;
      MR_Word OrigLabel_30;
      MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrigInstr0_22, (MR_Integer) 0)));
      MR_String Var_31 = ((MR_String) (MR_hl_field(MR_mktag(0), OrigInstr0_22, (MR_Integer) 1)));

      succeeded = ((((MR_tag((MR_Word) Var_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_56, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        OrigLabel_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_56, (MR_Integer) 1)));
        Label_32 = OrigLabel_30;
        LabelInstr_33 = OrigInstr0_22;
        RestInstrs_34 = OrigInstrs0_23;
        STATE_VARIABLE_C_57_57 = STATE_VARIABLE_C_0_9;
        STATE_VARIABLE_NewLabels_58_58 = STATE_VARIABLE_NewLabels_0_7;
      }
      else
      {
        MR_Integer N_35;
        MR_Word Var_59;

        mercury__counter__allocate_3_p_0(&N_35, STATE_VARIABLE_C_0_9, &STATE_VARIABLE_C_57_57);
        {
          Label_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Label_32, 0) = ((MR_Box) (N_35));
          MR_hl_field(MR_mktag(0), Label_32, 1) = ((MR_Box) (ProcLabel_3));
        }
        mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (Label_32)), STATE_VARIABLE_NewLabels_0_7, &STATE_VARIABLE_NewLabels_58_58);
        {
          Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (Label_32));
        }
        {
          LabelInstr_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), LabelInstr_33, 0) = ((MR_Box) (Var_59));
          MR_hl_field(MR_mktag(0), LabelInstr_33, 1) = ((MR_Box) ((MR_String) ""));
        }
        RestInstrs_34 = HeadVar__1_1;
      }
      ll_backend__basic_block__take_until_end_of_block_4_p_0(RestInstrs_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &RevBlockInstrs_36, &Instrs1_37);
      if ((RevBlockInstrs_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        BlockInstrs_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        NumBlockInstrs_43 = (MR_Integer) 0;
        SideLabels_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        NextFallInto_39 = (MR_Integer) 1;
      }
      else
      {
        MR_Word LastUinstr_44;
        MR_Word X_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), RevBlockInstrs_36, (MR_Integer) 0)));
        MR_Word Xs_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), RevBlockInstrs_36, (MR_Integer) 1)));
        MR_Word STATE_VARIABLE_List_20_90;
        MR_String Var_45;
        MR_Word _SideCodeAddrs_47;

        {
          STATE_VARIABLE_List_20_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_List_20_90, 0) = ((MR_Box) (X_82));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_List_20_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        ll_backend__basic_block__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_110_100_95_99_111_117_110_116_95_108_105_115_116_95_95_91_49_93_95_48_5_p_0(Xs_83, STATE_VARIABLE_List_20_90, &BlockInstrs_42, ((MR_Integer) 0 + (MR_Integer) 1), &NumBlockInstrs_43);
        LastUinstr_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_82, (MR_Integer) 0)));
        Var_45 = ((MR_String) (MR_hl_field(MR_mktag(0), X_82, (MR_Integer) 1)));
        ll_backend__opt_util__possible_targets_3_p_0(LastUinstr_44, &SideLabels_46, &_SideCodeAddrs_47);
        NextFallInto_39 = ll_backend__opt_util__can_instr_fall_through_1_f_0(LastUinstr_44);
      }
      ll_backend__basic_block__build_block_map_10_p_0(Instrs1_37, &LabelSeq1_38, ProcLabel_3, NextFallInto_39, STATE_VARIABLE_BlockMap_0_5, &STATE_VARIABLE_BlockMap_62_62, STATE_VARIABLE_NewLabels_58_58, STATE_VARIABLE_NewLabels_8, STATE_VARIABLE_C_57_57, STATE_VARIABLE_C_10);
      switch (NextFallInto_39) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MaybeFallThrough_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
        case (MR_Integer) 1:
          if ((LabelSeq1_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            MaybeFallThrough_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
          {
            MR_Word NextLabel_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), LabelSeq1_38, (MR_Integer) 0)));
            MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), LabelSeq1_38, (MR_Integer) 1)));

            {
              MaybeFallThrough_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeFallThrough_48, 0) = ((MR_Box) (NextLabel_74));
            }
          }
          break;
      }
      {
        BlockInfo_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), BlockInfo_49, 0) = ((MR_Box) (Label_32));
        MR_hl_field(MR_mktag(0), BlockInfo_49, 1) = ((MR_Box) (LabelInstr_33));
        MR_hl_field(MR_mktag(0), BlockInfo_49, 2) = ((MR_Box) (BlockInstrs_42));
        MR_hl_field(MR_mktag(0), BlockInfo_49, 3) = ((MR_Box) (NumBlockInstrs_43));
        MR_hl_field(MR_mktag(0), BlockInfo_49, 4) = ((MR_Box) (FallInto_4));
        MR_hl_field(MR_mktag(0), BlockInfo_49, 5) = ((MR_Box) (SideLabels_46));
        MR_hl_field(MR_mktag(0), BlockInfo_49, 6) = ((MR_Box) (MaybeFallThrough_48));
      }
      mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0, ((MR_Box) (Label_32)), ((MR_Box) (BlockInfo_49)), STATE_VARIABLE_BlockMap_62_62, STATE_VARIABLE_BlockMap_6);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Label_32));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LabelSeq1_38));
      }
    }
  }
}

static void MR_CALL 
ll_backend__basic_block__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_110_100_95_99_111_117_110_116_95_108_105_115_116_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_List_0_2,
  MR_Word * STATE_VARIABLE_List_3,
  MR_Integer STATE_VARIABLE_N_0_4,
  MR_Integer * STATE_VARIABLE_N_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_N_5 = STATE_VARIABLE_N_0_4;
      *STATE_VARIABLE_List_3 = STATE_VARIABLE_List_0_2;
    }
    else
    {
      MR_Box X_12 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word Xs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_List_20_20;
      MR_Integer STATE_VARIABLE_N_21_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_List_0_2;
      MR_Integer next_value_of_STATE_VARIABLE_N_0_4;

      {
        STATE_VARIABLE_List_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_List_20_20, 0) = X_12;
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_List_20_20, 1) = ((MR_Box) (STATE_VARIABLE_List_0_2));
      }
      STATE_VARIABLE_N_21_21 = (STATE_VARIABLE_N_0_4 + (MR_Integer) 1);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Xs_13;
      next_value_of_STATE_VARIABLE_List_0_2 = STATE_VARIABLE_List_20_20;
      next_value_of_STATE_VARIABLE_N_0_4 = STATE_VARIABLE_N_21_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_List_0_2 = next_value_of_STATE_VARIABLE_List_0_2;
      STATE_VARIABLE_N_0_4 = next_value_of_STATE_VARIABLE_N_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__basic_block__take_until_end_of_block_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevBlockInstrs_0_2,
  MR_Word * STATE_VARIABLE_RevBlockInstrs_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_RevBlockInstrs_3 = STATE_VARIABLE_RevBlockInstrs_0_2;
    }
    else
    {
      MR_Word Instr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Instrs0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Uinstr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instr0_8, (MR_Integer) 0)));
      MR_String _Comment_13 = ((MR_String) (MR_hl_field(MR_mktag(0), Instr0_8, (MR_Integer) 1)));
      MR_Word Var_14;

      succeeded = ((((MR_tag((MR_Word) Uinstr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Uinstr0_12, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr0_12, (MR_Integer) 1)));
        *HeadVar__4_4 = HeadVar__1_1;
        *STATE_VARIABLE_RevBlockInstrs_3 = STATE_VARIABLE_RevBlockInstrs_0_2;
      }
      else
      {
        MR_Word Var_17;

        Var_17 = ll_backend__opt_util__can_instr_branch_away_1_f_0(Uinstr0_12);
        succeeded = (Var_17 == (MR_Integer) 1);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_RevBlockInstrs_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr0_8));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevBlockInstrs_0_2));
          }
          *HeadVar__4_4 = Instrs0_9;
        }
        else
        {
          MR_Word STATE_VARIABLE_RevBlockInstrs_19_19;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word next_value_of_STATE_VARIABLE_RevBlockInstrs_0_2;

          {
            STATE_VARIABLE_RevBlockInstrs_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevBlockInstrs_19_19, 0) = ((MR_Box) (Instr0_8));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevBlockInstrs_19_19, 1) = ((MR_Box) (STATE_VARIABLE_RevBlockInstrs_0_2));
          }
          // direct tailcall eliminated
          next_value_of_HeadVar__1_1 = Instrs0_9;
          next_value_of_STATE_VARIABLE_RevBlockInstrs_0_2 = STATE_VARIABLE_RevBlockInstrs_19_19;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          STATE_VARIABLE_RevBlockInstrs_0_2 = next_value_of_STATE_VARIABLE_RevBlockInstrs_0_2;
          continue;
        }
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__basic_block____Unify____block_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__basic_block____Unify____block_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__basic_block____Compare____block_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__basic_block____Compare____block_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__basic_block____Unify____block_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__basic_block____Unify____block_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__basic_block____Compare____block_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__basic_block____Compare____block_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ll_backend__basic_block__init(void)
{
}

void mercury__ll_backend__basic_block__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0);
	MR_register_type_ctor_info(&ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_map_0);
}

void mercury__ll_backend__basic_block__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__basic_block__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.basic_block.
