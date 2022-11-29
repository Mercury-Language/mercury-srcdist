/*
** Automatically generated from `unify_gen_util.m'
** by the Mercury compiler,
** version rotd-2022-11-29
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


// :- module ll_backend.unify_gen_util.
// :- implementation.

/*
INIT mercury__ll_backend__unify_gen_util__init
ENDINIT
*/

#include "ll_backend.unify_gen_util.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "counter.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "term.mih"
#include "term_context.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_top_functor.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
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
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_PseudoTypeInfo ll_backend__unify_gen_util__ll_backend__unify_gen_util__field_types_arg_and_width_1_0[2];

static const MR_DuFunctorDesc ll_backend__unify_gen_util__ll_backend__unify_gen_util__du_functor_desc_arg_and_width_1_0;

static const MR_DuFunctorDescPtr ll_backend__unify_gen_util__ll_backend__unify_gen_util__du_stag_ordered_arg_and_width_1_0[1];

static const MR_DuPtagLayout ll_backend__unify_gen_util__ll_backend__unify_gen_util__du_ptag_ordered_arg_and_width_1[1];

static const MR_DuFunctorDescPtr ll_backend__unify_gen_util__ll_backend__unify_gen_util__du_name_ordered_arg_and_width_1[1];

static const MR_Integer ll_backend__unify_gen_util__ll_backend__unify_gen_util__functor_number_map_arg_and_width_1[1];

static const MR_EnumFunctorDesc ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_functor_desc_assign_dir_0_0;

static const MR_EnumFunctorDesc ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_functor_desc_assign_dir_0_1;

static const MR_EnumFunctorDesc ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_functor_desc_assign_dir_0_2;

static const MR_EnumFunctorDescPtr ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_ordinal_ordered_assign_dir_0[3];

static const MR_EnumFunctorDescPtr ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_name_ordered_assign_dir_0[3];

static const MR_Integer ll_backend__unify_gen_util__ll_backend__unify_gen_util__functor_number_map_assign_dir_0[3];

static const MR_EnumFunctorDesc ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_functor_desc_maybe_zero_const_0_0;

static const MR_EnumFunctorDesc ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_functor_desc_maybe_zero_const_0_1;

static const MR_EnumFunctorDescPtr ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_ordinal_ordered_maybe_zero_const_0[2];

static const MR_EnumFunctorDescPtr ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_name_ordered_maybe_zero_const_0[2];

static const MR_Integer ll_backend__unify_gen_util__ll_backend__unify_gen_util__functor_number_map_maybe_zero_const_0[2];

static void MR_CALL 
ll_backend__unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_99_97_116_101_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_3_p_0(
  MR_Integer CurOffset_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ll_backend__unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_114_103_115_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__unify_gen_util____Unify____arg_and_width_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
ll_backend__unify_gen_util____Compare____arg_and_width_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
ll_backend__unify_gen_util____Unify____assign_dir_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__unify_gen_util____Compare____assign_dir_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__unify_gen_util____Unify____maybe_zero_const_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__unify_gen_util____Compare____maybe_zero_const_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__unify_gen_util_scalar_common_1[8][1];

static /* final */ const MR_Box ll_backend__unify_gen_util_scalar_common_2[4][2];




static /* final */ const MR_Box ll_backend__unify_gen_util_scalar_common_1[8][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    (MR_Box) ((MR_Unsigned) 5U)
  },
  /* row   2 */
  {
    (MR_Box) ((MR_Unsigned) 7U)
  },
  /* row   3 */
  {
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row   4 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   5 */
  {
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row   6 */
  {
    (MR_Box) ((MR_Unsigned) 6U)
  },
  /* row   7 */
  {
    (MR_Box) ((MR_Unsigned) 2U)
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_util_scalar_common_2[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__unify_gen_util_scalar_common_1[0])))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    (MR_Box) (((MR_Unsigned) 1U << 1))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) (((MR_Unsigned) 1U << 1))
  },
};



#include "array.mh"



static const MR_PseudoTypeInfo ll_backend__unify_gen_util__ll_backend__unify_gen_util__field_types_arg_and_width_1_0[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0)
};

static const MR_DuFunctorDesc ll_backend__unify_gen_util__ll_backend__unify_gen_util__du_functor_desc_arg_and_width_1_0 = {
  (MR_String) "arg_and_width",
  INT16_C(2),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__unify_gen_util__ll_backend__unify_gen_util__field_types_arg_and_width_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__unify_gen_util__ll_backend__unify_gen_util__du_stag_ordered_arg_and_width_1_0[1] = {
  &ll_backend__unify_gen_util__ll_backend__unify_gen_util__du_functor_desc_arg_and_width_1_0
};

static const MR_DuPtagLayout ll_backend__unify_gen_util__ll_backend__unify_gen_util__du_ptag_ordered_arg_and_width_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__unify_gen_util__ll_backend__unify_gen_util__du_stag_ordered_arg_and_width_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__unify_gen_util__ll_backend__unify_gen_util__du_name_ordered_arg_and_width_1[1] = {
  &ll_backend__unify_gen_util__ll_backend__unify_gen_util__du_functor_desc_arg_and_width_1_0
};

static const MR_Integer ll_backend__unify_gen_util__ll_backend__unify_gen_util__functor_number_map_arg_and_width_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__unify_gen_util__ll_backend__unify_gen_util__type_ctor_info_arg_and_width_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__unify_gen_util____Unify____arg_and_width_1_0_10001)),
  ((MR_Box) (ll_backend__unify_gen_util____Compare____arg_and_width_1_0_10001)),
  (MR_String) "ll_backend.unify_gen_util",
  (MR_String) "arg_and_width",
  { ll_backend__unify_gen_util__ll_backend__unify_gen_util__du_name_ordered_arg_and_width_1 },
  { ll_backend__unify_gen_util__ll_backend__unify_gen_util__du_ptag_ordered_arg_and_width_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__unify_gen_util__ll_backend__unify_gen_util__functor_number_map_arg_and_width_1,

};

static const MR_EnumFunctorDesc ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_functor_desc_assign_dir_0_0 = {
  (MR_String) "assign_left",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_functor_desc_assign_dir_0_1 = {
  (MR_String) "assign_right",
  INT32_C(1)
};

static const MR_EnumFunctorDesc ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_functor_desc_assign_dir_0_2 = {
  (MR_String) "assign_unused",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_ordinal_ordered_assign_dir_0[3] = {
  &ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_functor_desc_assign_dir_0_0,
  &ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_functor_desc_assign_dir_0_1,
  &ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_functor_desc_assign_dir_0_2
};

static const MR_EnumFunctorDescPtr ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_name_ordered_assign_dir_0[3] = {
  &ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_functor_desc_assign_dir_0_0,
  &ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_functor_desc_assign_dir_0_1,
  &ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_functor_desc_assign_dir_0_2
};

static const MR_Integer ll_backend__unify_gen_util__ll_backend__unify_gen_util__functor_number_map_assign_dir_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct ll_backend__unify_gen_util__ll_backend__unify_gen_util__type_ctor_info_assign_dir_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__unify_gen_util____Unify____assign_dir_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen_util____Compare____assign_dir_0_0_10001)),
  (MR_String) "ll_backend.unify_gen_util",
  (MR_String) "assign_dir",
  { ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_name_ordered_assign_dir_0 },
  { ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_ordinal_ordered_assign_dir_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  ll_backend__unify_gen_util__ll_backend__unify_gen_util__functor_number_map_assign_dir_0,

};

static const MR_EnumFunctorDesc ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_functor_desc_maybe_zero_const_0_0 = {
  (MR_String) "is_not_zero_const",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_functor_desc_maybe_zero_const_0_1 = {
  (MR_String) "is_zero_const",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_ordinal_ordered_maybe_zero_const_0[2] = {
  &ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_functor_desc_maybe_zero_const_0_0,
  &ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_functor_desc_maybe_zero_const_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_name_ordered_maybe_zero_const_0[2] = {
  &ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_functor_desc_maybe_zero_const_0_0,
  &ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_functor_desc_maybe_zero_const_0_1
};

static const MR_Integer ll_backend__unify_gen_util__ll_backend__unify_gen_util__functor_number_map_maybe_zero_const_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__unify_gen_util__ll_backend__unify_gen_util__type_ctor_info_maybe_zero_const_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__unify_gen_util____Unify____maybe_zero_const_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen_util____Compare____maybe_zero_const_0_0_10001)),
  (MR_String) "ll_backend.unify_gen_util",
  (MR_String) "maybe_zero_const",
  { ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_name_ordered_maybe_zero_const_0 },
  { ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_ordinal_ordered_maybe_zero_const_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__unify_gen_util__ll_backend__unify_gen_util__functor_number_map_maybe_zero_const_0,

};

void MR_CALL 
ll_backend__unify_gen_util____Compare____maybe_zero_const_0_0(
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
ll_backend__unify_gen_util____Unify____maybe_zero_const_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
ll_backend__unify_gen_util____Compare____assign_dir_0_0(
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
ll_backend__unify_gen_util____Unify____assign_dir_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
ll_backend__unify_gen_util____Compare____arg_and_width_1_0(
  MR_Word TypeInfo_for_Arg_11,
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
    MR_Box ArgX1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
    MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0(TypeInfo_for_Arg_11, &SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      parse_tree__prog_data____Compare____arg_pos_width_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
ll_backend__unify_gen_util____Unify____arg_and_width_1_0(
  MR_Word TypeInfo_for_Arg_9,
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
    MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Arg_9, ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = parse_tree__prog_data____Unify____arg_pos_width_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
ll_backend__unify_gen_util__compute_assign_direction_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ArgMode_6,
  MR_Word ArgType_7,
  MR_Word * Dir_8)
{
  MR_Word LeftInitInst_9 = ((MR_Word) ((MR_hl_field(0, ArgMode_6, (MR_Integer) 0))));
  MR_Word LeftFinalInst_10 = ((MR_Word) ((MR_hl_field(0, ArgMode_6, (MR_Integer) 1))));
  MR_Word RightInitInst_11 = ((MR_Word) ((MR_hl_field(0, ArgMode_6, (MR_Integer) 2))));
  MR_Word RightFinalInst_12 = ((MR_Word) ((MR_hl_field(0, ArgMode_6, (MR_Integer) 3))));
  MR_Word LeftTopMode_13;
  MR_Word RightTopMode_14;

  check_hlds__mode_top_functor__init_final_insts_to_top_functor_mode_5_p_0(ModuleInfo_5, LeftInitInst_9, LeftFinalInst_10, ArgType_7, &LeftTopMode_13);
  check_hlds__mode_top_functor__init_final_insts_to_top_functor_mode_5_p_0(ModuleInfo_5, RightInitInst_11, RightFinalInst_12, ArgType_7, &RightTopMode_14);
  switch (LeftTopMode_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (RightTopMode_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_util.compute_assign_direction\'/4", (MR_String) "test in arg of [de]construction");
            return;
          }
          break;
        case (MR_Integer) 1:
          *Dir_8 = (MR_Integer) 1;
          break;
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_util.compute_assign_direction\'/4", (MR_String) "some strange unify");
            return;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (RightTopMode_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Dir_8 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_util.compute_assign_direction\'/4", (MR_String) "some strange unify");
            return;
          }
          break;
      }
      break;
    case (MR_Integer) 2:
      switch (RightTopMode_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_util.compute_assign_direction\'/4", (MR_String) "some strange unify");
            return;
          }
          break;
        case (MR_Integer) 2:
          *Dir_8 = (MR_Integer) 2;
          break;
      }
      break;
  }
}

void MR_CALL 
ll_backend__unify_gen_util__maybe_cast_masked_off_rval_3_p_0(
  MR_Word Fill_4,
  MR_Word MaskedRval0_5,
  MR_Word * MaskedRval_6)
{
  switch (Fill_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 7:
    case (MR_Integer) 0:
      *MaskedRval_6 = MaskedRval0_5;
      break;
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *MaskedRval_6 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, base, 1) = ((MR_Box) (MR_mkword(2, &ll_backend__unify_gen_util_scalar_common_1[5])));
        MR_hl_field(3, base, 2) = ((MR_Box) (MaskedRval0_5));
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *MaskedRval_6 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, base, 1) = ((MR_Box) (MR_mkword(2, &ll_backend__unify_gen_util_scalar_common_1[6])));
        MR_hl_field(3, base, 2) = ((MR_Box) (MaskedRval0_5));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *MaskedRval_6 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, base, 1) = ((MR_Box) (MR_mkword(2, &ll_backend__unify_gen_util_scalar_common_1[7])));
        MR_hl_field(3, base, 2) = ((MR_Box) (MaskedRval0_5));
      }
      break;
    case (MR_Integer) 5:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *MaskedRval_6 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, base, 1) = ((MR_Box) (MR_mkword(2, &ll_backend__unify_gen_util_scalar_common_1[1])));
        MR_hl_field(3, base, 2) = ((MR_Box) (MaskedRval0_5));
      }
      break;
    case (MR_Integer) 6:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *MaskedRval_6 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, base, 1) = ((MR_Box) (MR_mkword(2, &ll_backend__unify_gen_util_scalar_common_1[2])));
        MR_hl_field(3, base, 2) = ((MR_Box) (MaskedRval0_5));
      }
      break;
    case (MR_Integer) 4:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *MaskedRval_6 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, base, 1) = ((MR_Box) (MR_mkword(2, &ll_backend__unify_gen_util_scalar_common_1[3])));
        MR_hl_field(3, base, 2) = ((MR_Box) (MaskedRval0_5));
      }
      break;
  }
}

MR_Word MR_CALL 
ll_backend__unify_gen_util__right_shift_rval_2_f_0(
  MR_Word Rval_4,
  MR_Word Shift_5)
{
  MR_Word ShiftedRval_6;
  MR_Integer ShiftInt_7 = (MR_Integer) (Shift_5);
  MR_Word Var_11;
  MR_Word Var_12;

  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (ShiftInt_7));
  }
  {
    Var_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_11, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_11, 1) = ((MR_Box) (Var_12));
  }
  {
    ShiftedRval_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ShiftedRval_6, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, ShiftedRval_6, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__unify_gen_util_scalar_common_2[3])));
    MR_hl_field(3, ShiftedRval_6, 2) = ((MR_Box) (Rval_4));
    MR_hl_field(3, ShiftedRval_6, 3) = ((MR_Box) (Var_11));
  }
  return ShiftedRval_6;
}

MR_Word MR_CALL 
ll_backend__unify_gen_util__left_shift_rval_3_f_0(
  MR_Word Rval_5,
  MR_Word Shift_6,
  MR_Word Fill_7)
{
  MR_bool succeeded;
  MR_Word ShiftedUnsignedRval_8;
  MR_Integer ShiftInt_9 = (MR_Integer) (Shift_6);
  MR_Word UnsignedRval_10;

  ll_backend__unify_gen_util__cast_to_unsigned_without_sign_extend_3_p_0(Fill_7, Rval_5, &UnsignedRval_10);
  succeeded = (ShiftInt_9 == (MR_Integer) 0);
  if (!(succeeded))
  {
    MR_Word Const_11;
    MR_Word Var_12;

    succeeded = ((((MR_tag((MR_Word) Rval_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Const_11 = ((MR_Word) ((MR_hl_field(3, Rval_5, (MR_Integer) 1))));
      Var_12 = ll_backend__unify_gen_util__is_zero_const_1_f_0(Const_11);
      succeeded = (Var_12 == (MR_Integer) 1);
    }
  }
  if (succeeded)
    ShiftedUnsignedRval_8 = UnsignedRval_10;
  else
  {
    MR_Word Var_16;
    MR_Word Var_17;

    {
      Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_17, 0) = ((MR_Box) (ShiftInt_9));
    }
    {
      Var_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_16, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_16, 1) = ((MR_Box) (Var_17));
    }
    {
      ShiftedUnsignedRval_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ShiftedUnsignedRval_8, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, ShiftedUnsignedRval_8, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__unify_gen_util_scalar_common_2[2])));
      MR_hl_field(3, ShiftedUnsignedRval_8, 2) = ((MR_Box) (UnsignedRval_10));
      MR_hl_field(3, ShiftedUnsignedRval_8, 3) = ((MR_Box) (Var_16));
    }
  }
  return ShiftedUnsignedRval_8;
}

void MR_CALL 
ll_backend__unify_gen_util__cast_to_unsigned_without_sign_extend_3_p_0(
  MR_Word Fill_4,
  MR_Word Rval0_5,
  MR_Word * Rval_6)
{
  MR_Word Rval1_7;

  switch (Fill_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 7:
    case (MR_Integer) 0:
    case (MR_Integer) 5:
    case (MR_Integer) 6:
    case (MR_Integer) 4:
      Rval1_7 = Rval0_5;
      break;
    case (MR_Integer) 2:
      {
        Rval1_7 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Rval1_7, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, Rval1_7, 1) = ((MR_Box) (MR_mkword(2, &ll_backend__unify_gen_util_scalar_common_1[1])));
        MR_hl_field(3, Rval1_7, 2) = ((MR_Box) (Rval0_5));
      }
      break;
    case (MR_Integer) 3:
      {
        Rval1_7 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Rval1_7, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, Rval1_7, 1) = ((MR_Box) (MR_mkword(2, &ll_backend__unify_gen_util_scalar_common_1[2])));
        MR_hl_field(3, Rval1_7, 2) = ((MR_Box) (Rval0_5));
      }
      break;
    case (MR_Integer) 1:
      {
        Rval1_7 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Rval1_7, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, Rval1_7, 1) = ((MR_Box) (MR_mkword(2, &ll_backend__unify_gen_util_scalar_common_1[3])));
        MR_hl_field(3, Rval1_7, 2) = ((MR_Box) (Rval0_5));
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *Rval_6 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, base, 1) = ((MR_Box) (MR_mkword(2, &ll_backend__unify_gen_util_scalar_common_1[4])));
    MR_hl_field(3, base, 2) = ((MR_Box) (Rval1_7));
  }
}

MR_Word MR_CALL 
ll_backend__unify_gen_util__is_zero_const_1_f_0(
  MR_Word Const_3)
{
  MR_bool succeeded;
  MR_Word IsZero_4;

  switch (MR_tag((MR_Word) Const_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      IsZero_4 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Int_5 = ((MR_Integer) ((MR_hl_field(1, Const_3, (MR_Integer) 0))));

        succeeded = (Int_5 == (MR_Integer) 0);
        if (succeeded)
          IsZero_4 = (MR_Integer) 1;
        else
          IsZero_4 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Unsigned Uint_6 = ((MR_Unsigned) ((MR_hl_field(2, Const_3, (MR_Integer) 0))));

        succeeded = (Uint_6 == (MR_Unsigned) 0U);
        if (succeeded)
          IsZero_4 = (MR_Integer) 1;
        else
          IsZero_4 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Const_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            int8_t Int8_7 = ((int8_t) (MR_Word) (MR_hl_field(3, Const_3, (MR_Integer) 1)));

            succeeded = (Int8_7 == INT8_C(0));
            if (succeeded)
              IsZero_4 = (MR_Integer) 1;
            else
              IsZero_4 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 1:
          {
            uint8_t Uint8_8 = ((uint8_t) (MR_Word) (MR_hl_field(3, Const_3, (MR_Integer) 1)));

            succeeded = (Uint8_8 == UINT8_C(0));
            if (succeeded)
              IsZero_4 = (MR_Integer) 1;
            else
              IsZero_4 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 2:
          {
            int16_t Int16_9 = ((int16_t) (MR_Word) (MR_hl_field(3, Const_3, (MR_Integer) 1)));

            succeeded = (Int16_9 == INT16_C(0));
            if (succeeded)
              IsZero_4 = (MR_Integer) 1;
            else
              IsZero_4 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 3:
          {
            uint16_t Uint16_10 = ((uint16_t) (MR_Word) (MR_hl_field(3, Const_3, (MR_Integer) 1)));

            succeeded = (Uint16_10 == UINT16_C(0));
            if (succeeded)
              IsZero_4 = (MR_Integer) 1;
            else
              IsZero_4 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 4:
          {
            int32_t Int32_11 = ((int32_t) (MR_Word) (MR_hl_field(3, Const_3, (MR_Integer) 1)));

            succeeded = (Int32_11 == INT32_C(0));
            if (succeeded)
              IsZero_4 = (MR_Integer) 1;
            else
              IsZero_4 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 5:
          {
            uint32_t Uint32_12 = ((uint32_t) (MR_Word) (MR_hl_field(3, Const_3, (MR_Integer) 1)));

            succeeded = (Uint32_12 == UINT32_C(0));
            if (succeeded)
              IsZero_4 = (MR_Integer) 1;
            else
              IsZero_4 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 6:
          {
            int64_t Int64_13 = MR_unbox_int64((MR_hl_field(3, Const_3, (MR_Integer) 1)));

            succeeded = (Int64_13 == INT64_C(0));
            if (succeeded)
              IsZero_4 = (MR_Integer) 1;
            else
              IsZero_4 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 7:
          {
            uint64_t Uint64_14 = MR_unbox_uint64((MR_hl_field(3, Const_3, (MR_Integer) 1)));

            succeeded = (Uint64_14 == UINT64_C(0));
            if (succeeded)
              IsZero_4 = (MR_Integer) 1;
            else
              IsZero_4 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 10:
        case (MR_Integer) 11:
        case (MR_Integer) 12:
        case (MR_Integer) 13:
          IsZero_4 = (MR_Integer) 0;
          break;
      }
      break;
  }
  return IsZero_4;
}

MR_Word MR_CALL 
ll_backend__unify_gen_util__bitwise_or_rvals_1_f_0(
  MR_Word Rvals_3)
{
  MR_Word OrAllRval_4;

  if ((Rvals_3 == (MR_Word) ((MR_Unsigned) 0U)))
    OrAllRval_4 = (MR_Word) (MR_mkword(3, &ll_backend__unify_gen_util_scalar_common_2[0]));
  else
  {
    MR_Word HeadRval_5 = ((MR_Word) ((MR_hl_field(1, Rvals_3, (MR_Integer) 0))));
    MR_Word TailRvals_6 = ((MR_Word) ((MR_hl_field(1, Rvals_3, (MR_Integer) 1))));

    OrAllRval_4 = ll_backend__unify_gen_util__bitwise_or_some_rvals_2_f_0(HeadRval_5, TailRvals_6);
  }
  return OrAllRval_4;
}

MR_Word MR_CALL 
ll_backend__unify_gen_util__bitwise_or_some_rvals_2_f_0(
  MR_Word HeadRval_4,
  MR_Word TailRvals_5)
{
  MR_Word OrAllRval_6;

  if ((TailRvals_5 == (MR_Word) ((MR_Unsigned) 0U)))
    OrAllRval_6 = HeadRval_4;
  else
  {
    MR_Word HeadTailRval_7 = ((MR_Word) ((MR_hl_field(1, TailRvals_5, (MR_Integer) 0))));
    MR_Word TailTailRvals_8 = ((MR_Word) ((MR_hl_field(1, TailRvals_5, (MR_Integer) 1))));
    MR_Word TailOrAllRval_9;

    TailOrAllRval_9 = ll_backend__unify_gen_util__bitwise_or_some_rvals_2_f_0(HeadTailRval_7, TailTailRvals_8);
    OrAllRval_6 = ll_backend__unify_gen_util__bitwise_or_two_rvals_2_f_0(HeadRval_4, TailOrAllRval_9);
  }
  return OrAllRval_6;
}

MR_Word MR_CALL 
ll_backend__unify_gen_util__bitwise_or_two_rvals_2_f_0(
  MR_Word RvalA_4,
  MR_Word RvalB_5)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) RvalA_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RvalA_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
  MR_Word OrRval_6;
  MR_Word Var_17;

  if (succeeded)
  {
    Var_17 = ((MR_Word) ((MR_hl_field(3, RvalA_4, (MR_Integer) 1))));
    if (((MR_tag((MR_Word) Var_17)) == (MR_Integer) 1))
    {
      MR_Integer Var_8 = ((MR_Integer) ((MR_hl_field(1, Var_17, (MR_Integer) 0))));

      succeeded = (Var_8 == (MR_Integer) 0);
    }
    else
    if (((MR_tag((MR_Word) Var_17)) == (MR_Integer) 2))
    {
      MR_Unsigned Var_10 = ((MR_Unsigned) ((MR_hl_field(2, Var_17, (MR_Integer) 0))));

      succeeded = (Var_10 == (MR_Unsigned) 0U);
    }
    else
      succeeded = MR_FALSE;
  }
  if (succeeded)
    OrRval_6 = RvalB_5;
  else
  {
    MR_Word Var_18;

    succeeded = ((((MR_tag((MR_Word) RvalB_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RvalB_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_18 = ((MR_Word) ((MR_hl_field(3, RvalB_5, (MR_Integer) 1))));
      if (((MR_tag((MR_Word) Var_18)) == (MR_Integer) 1))
      {
        MR_Integer Var_12 = ((MR_Integer) ((MR_hl_field(1, Var_18, (MR_Integer) 0))));

        succeeded = (Var_12 == (MR_Integer) 0);
      }
      else
      if (((MR_tag((MR_Word) Var_18)) == (MR_Integer) 2))
      {
        MR_Unsigned Var_14 = ((MR_Unsigned) ((MR_hl_field(2, Var_18, (MR_Integer) 0))));

        succeeded = (Var_14 == (MR_Unsigned) 0U);
      }
      else
        succeeded = MR_FALSE;
    }
    if (succeeded)
      OrRval_6 = RvalA_4;
    else
      {
        OrRval_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, OrRval_6, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, OrRval_6, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__unify_gen_util_scalar_common_2[1])));
        MR_hl_field(3, OrRval_6, 2) = ((MR_Box) (RvalA_4));
        MR_hl_field(3, OrRval_6, 3) = ((MR_Box) (RvalB_5));
      }
  }
  return OrRval_6;
}

void MR_CALL 
ll_backend__unify_gen_util__associate_cons_id_args_with_widths_4_p_0(
  MR_Word TypeInfo_for_Arg_41,
  MR_Word ModuleInfo_5,
  MR_Word ConsId_6,
  MR_Word AllArgs_7,
  MR_Word * AllArgsPosWidths_8)
{
  MR_bool succeeded;
  MR_Word ConsRepnDefn_9;

  succeeded = check_hlds__type_util__get_cons_repn_defn_3_p_0(ModuleInfo_5, ConsId_6, &ConsRepnDefn_9);
  if (succeeded)
  {
    MR_Word ConsArgRepns_10 = ((MR_Word) ((MR_hl_field(0, ConsRepnDefn_9, (MR_Integer) 4))));
    MR_Word ConsTag_11 = ((MR_Word) ((MR_hl_field(0, ConsRepnDefn_9, (MR_Integer) 3))));
    MR_Integer NumAllArgs_12;
    MR_Integer NumConsArgs_13;
    MR_Integer NumExtraArgs_14;

    mercury__list__length_2_p_0(TypeInfo_for_Arg_41, AllArgs_7, &NumAllArgs_12);
    mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), ConsArgRepns_10, &NumConsArgs_13);
    NumExtraArgs_14 = (MR_Integer) ((MR_Unsigned) NumAllArgs_12 - (MR_Unsigned) NumConsArgs_13);
    succeeded = (NumExtraArgs_14 == (MR_Integer) 0);
    if (succeeded)
      ll_backend__unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_114_103_115_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(AllArgs_7, ConsArgRepns_10, AllArgsPosWidths_8);
    else
    {
      succeeded = (NumExtraArgs_14 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word TypeInfo_44_44;
        MR_Word ExtraArgs_15;
        MR_Word ConsArgs_16;
        MR_Integer InitOffset_22;
        MR_Word ExtraArgsPosWidths_23;
        MR_Word ConsArgsPosWidths_24;
        MR_Word RemoteArgsTagInfo_17;
        MR_Word RemoteSecTag_19;
        MR_Word SectagSize_21;
        MR_Word conv0_AllArgsPosWidths_8;

        mercury__list__det_split_list_4_p_0(TypeInfo_for_Arg_41, NumExtraArgs_14, AllArgs_7, &ExtraArgs_15, &ConsArgs_16);
        succeeded = ((((MR_tag((MR_Word) ConsTag_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsTag_11, (MR_Integer) 0)))) == (MR_Integer) 11)));
        if (succeeded)
        {
          RemoteArgsTagInfo_17 = ((MR_Word) ((MR_hl_field(3, ConsTag_11, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) RemoteArgsTagInfo_17)) == (MR_Integer) 2);
          if (succeeded)
          {
            RemoteSecTag_19 = ((MR_Word) ((MR_hl_field(2, RemoteArgsTagInfo_17, (MR_Integer) 1))));
            SectagSize_21 = ((MR_Word) ((MR_hl_field(0, RemoteSecTag_19, (MR_Integer) 1))));
            succeeded = (SectagSize_21 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        if (succeeded)
          InitOffset_22 = (MR_Integer) 1;
        else
          InitOffset_22 = (MR_Integer) 0;
        ll_backend__unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_99_97_116_101_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_3_p_0(InitOffset_22, ExtraArgs_15, &ExtraArgsPosWidths_23);
        ll_backend__unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_114_103_115_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(ConsArgs_16, ConsArgRepns_10, &ConsArgsPosWidths_24);
        {
          TypeInfo_44_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_44_44, 0) = ((MR_Box) (&ll_backend__unify_gen_util__ll_backend__unify_gen_util__type_ctor_info_arg_and_width_1));
          MR_hl_field(0, TypeInfo_44_44, 1) = ((MR_Box) (TypeInfo_for_Arg_41));
        }
        conv0_AllArgsPosWidths_8 = mercury__list__f_43_43_2_f_0(TypeInfo_44_44, (MR_Word) (ExtraArgsPosWidths_23), (MR_Word) (ConsArgsPosWidths_24));
        *AllArgsPosWidths_8 = (MR_Word) (conv0_AllArgsPosWidths_8);
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_util.associate_cons_id_args_with_widths\'/4", (MR_String) "too few arguments");
          return;
        }
    }
  }
  else
    ll_backend__unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_99_97_116_101_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_3_p_0((MR_Integer) 0, AllArgs_7, AllArgsPosWidths_8);
}

static void MR_CALL 
ll_backend__unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_99_97_116_101_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_3_p_0(
  MR_Integer CurOffset_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Arg_6 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
    MR_Word Args_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgPosWidth_8;
    MR_Word ArgsPosWidths_9;
    MR_Word PosWidth_10;
    MR_Word Var_11 = (MR_Word) (CurOffset_1);
    MR_Word Var_12 = (MR_Word) (CurOffset_1);
    MR_Integer Var_13;

    {
      PosWidth_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, PosWidth_10, 0) = ((MR_Box) (Var_11));
      MR_hl_field(1, PosWidth_10, 1) = ((MR_Box) (Var_12));
    }
    {
      ArgPosWidth_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ArgPosWidth_8, 0) = Arg_6;
      MR_hl_field(0, ArgPosWidth_8, 1) = ((MR_Box) (PosWidth_10));
    }
    Var_13 = (MR_Integer) ((MR_Unsigned) CurOffset_1 + (MR_Unsigned) 1);
    ll_backend__unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_99_97_116_101_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_3_p_0(Var_13, Args_7, &ArgsPosWidths_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ArgPosWidth_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (ArgsPosWidths_9));
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_114_103_115_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_util.zip_args_widths\'/3", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Box Var_26 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_util.zip_args_widths\'/3", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word ConsArgRepn_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ConsArgRepns_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgTypeWidth_18;
      MR_Word ArgsTypesWidth_19;
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, ConsArgRepn_16, (MR_Integer) 2))));

      {
        ArgTypeWidth_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ArgTypeWidth_18, 0) = Var_26;
        MR_hl_field(0, ArgTypeWidth_18, 1) = ((MR_Box) (Var_20));
      }
      ll_backend__unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_114_103_115_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(Var_25, ConsArgRepns_17, &ArgsTypesWidth_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ArgTypeWidth_18));
        MR_hl_field(1, base, 1) = ((MR_Box) (ArgsTypesWidth_19));
      }
    }
  }
}

void MR_CALL 
ll_backend__unify_gen_util__int_tag_to_const_and_int_type_3_p_0(
  MR_Word IntTag_4,
  MR_Word * Const_5,
  MR_Word * Type_6)
{
  switch (MR_tag((MR_Word) IntTag_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer Int_7 = ((MR_Integer) ((MR_hl_field(0, IntTag_4, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Const_5 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Int_7));
        }
        *Type_6 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Unsigned UInt_8 = ((MR_Unsigned) ((MR_hl_field(1, IntTag_4, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Const_5 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (UInt_8));
        }
        *Type_6 = (MR_Integer) 1;
      }
      break;
    case (MR_Integer) 2:
      {
        int8_t Int8_9 = ((int8_t) (MR_Word) (MR_hl_field(2, IntTag_4, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Const_5 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, base, 1) = ((MR_Box) (MR_Word) (Int8_9));
        }
        *Type_6 = (MR_Integer) 2;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, IntTag_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            uint8_t UInt8_10 = ((uint8_t) (MR_Word) (MR_hl_field(3, IntTag_4, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Const_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = ((MR_Box) (MR_Word) (UInt8_10));
            }
            *Type_6 = (MR_Integer) 3;
          }
          break;
        case (MR_Integer) 1:
          {
            int16_t Int16_11 = ((int16_t) (MR_Word) (MR_hl_field(3, IntTag_4, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Const_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = ((MR_Box) (MR_Word) (Int16_11));
            }
            *Type_6 = (MR_Integer) 4;
          }
          break;
        case (MR_Integer) 2:
          {
            uint16_t UInt16_12 = ((uint16_t) (MR_Word) (MR_hl_field(3, IntTag_4, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Const_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (MR_Word) (UInt16_12));
            }
            *Type_6 = (MR_Integer) 5;
          }
          break;
        case (MR_Integer) 3:
          {
            int32_t Int32_13 = ((int32_t) (MR_Word) (MR_hl_field(3, IntTag_4, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Const_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, base, 1) = ((MR_Box) (MR_Word) (Int32_13));
            }
            *Type_6 = (MR_Integer) 6;
          }
          break;
        case (MR_Integer) 4:
          {
            uint32_t UInt32_14 = ((uint32_t) (MR_Word) (MR_hl_field(3, IntTag_4, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Const_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (MR_Word) (UInt32_14));
            }
            *Type_6 = (MR_Integer) 7;
          }
          break;
        case (MR_Integer) 5:
          {
            int64_t Int64_15 = MR_unbox_int64((MR_hl_field(3, IntTag_4, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Const_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = MR_box_int64(Int64_15);
            }
            *Type_6 = (MR_Integer) 8;
          }
          break;
        case (MR_Integer) 6:
          {
            uint64_t UInt64_16 = MR_unbox_uint64((MR_hl_field(3, IntTag_4, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Const_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, base, 1) = MR_box_uint64(UInt64_16);
            }
            *Type_6 = (MR_Integer) 9;
          }
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_util____Unify____arg_and_width_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = ll_backend__unify_gen_util____Unify____arg_and_width_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
ll_backend__unify_gen_util____Compare____arg_and_width_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__unify_gen_util____Compare____arg_and_width_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__unify_gen_util____Unify____assign_dir_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__unify_gen_util____Unify____assign_dir_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__unify_gen_util____Compare____assign_dir_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__unify_gen_util____Compare____assign_dir_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__unify_gen_util____Unify____maybe_zero_const_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__unify_gen_util____Unify____maybe_zero_const_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__unify_gen_util____Compare____maybe_zero_const_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__unify_gen_util____Compare____maybe_zero_const_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ll_backend__unify_gen_util__init(void)
{
}

void mercury__ll_backend__unify_gen_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__unify_gen_util__ll_backend__unify_gen_util__type_ctor_info_arg_and_width_1);
	MR_register_type_ctor_info(&ll_backend__unify_gen_util__ll_backend__unify_gen_util__type_ctor_info_assign_dir_0);
	MR_register_type_ctor_info(&ll_backend__unify_gen_util__ll_backend__unify_gen_util__type_ctor_info_maybe_zero_const_0);
}

void mercury__ll_backend__unify_gen_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__unify_gen_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.unify_gen_util.
