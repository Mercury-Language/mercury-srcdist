/*
** Automatically generated from `typecheck_error_arg_vector.m'
** by the Mercury compiler,
** version rotd-2026-05-17
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


// :- module check_hlds.typecheck_error_arg_vector.
// :- implementation.

/*
INIT mercury__check_hlds__typecheck_error_arg_vector__init
ENDINIT
*/

#include "check_hlds.typecheck_error_arg_vector.mih"


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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
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
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_assign.mih"
#include "check_hlds.typecheck_error_builtin.mih"
#include "check_hlds.typecheck_error_type_assign.mih"
#include "check_hlds.typecheck_error_util.mih"
#include "check_hlds.typecheck_info.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
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
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_type_util.mih"
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
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_arg_vector__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_builtin_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_arg_vector__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_error_arg_vector__check_hlds__typecheck_error_arg_vector__field_types_arg_vector_type_error_0_0[3];

static const MR_DuFunctorDesc check_hlds__typecheck_error_arg_vector__check_hlds__typecheck_error_arg_vector__du_functor_desc_arg_vector_type_error_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_arg_vector__check_hlds__typecheck_error_arg_vector__du_stag_ordered_arg_vector_type_error_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck_error_arg_vector__check_hlds__typecheck_error_arg_vector__du_ptag_ordered_arg_vector_type_error_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_arg_vector__check_hlds__typecheck_error_arg_vector__du_name_ordered_arg_vector_type_error_0[1];

static const MR_Integer check_hlds__typecheck_error_arg_vector__check_hlds__typecheck_error_arg_vector__functor_number_map_arg_vector_type_error_0[1];

static void MR_CALL 
check_hlds__typecheck_error_arg_vector__acc_builtin_types_of_arg_vector_type_error_3_p_0(
  MR_Word Error_4,
  MR_Word STATE_VARIABLE_BuiltinTypes_0_15,
  MR_Word * STATE_VARIABLE_BuiltinTypes_16);

static void MR_CALL 
check_hlds__typecheck_error_arg_vector__report_error_wrong_types_in_arg_vector_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_error_arg_vector__arg_vector_type_errors_to_pieces_5_p_0(
  MR_Word VarSet_6,
  MR_Word AllErrors_7,
  MR_Word HeadError_8,
  MR_Word TailErrors_9,
  MR_Word * Pieces_10);

static void MR_CALL 
check_hlds__typecheck_error_arg_vector__find_expecteds_matching_actual_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
check_hlds__typecheck_error_arg_vector____Unify____arg_vector_type_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_error_arg_vector____Compare____arg_vector_type_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__typecheck_error_arg_vector_scalar_common_1[31][2];

static /* final */ const MR_Box check_hlds__typecheck_error_arg_vector_scalar_common_2[1][6];

static /* final */ const MR_Box check_hlds__typecheck_error_arg_vector_scalar_common_3[1][3];




static /* final */ const MR_Box check_hlds__typecheck_error_arg_vector_scalar_common_1[31][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_arg_vector_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in argument"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_arg_vector_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has type"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_arg_vector_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_arg_vector_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_arg_vector_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "expected type was"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_arg_vector_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_arg_vector_scalar_common_1[9])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_arg_vector_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_arg_vector_scalar_common_1[15])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "(the actual type is"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_arg_vector_scalar_common_1[17]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the same as"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_arg_vector_scalar_common_1[19]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the expected type of"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_arg_vector_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_arg_vector_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which is variable"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_arg_vector_scalar_common_1[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_arg_vector_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_arg_vector_scalar_common_1[29])))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_arg_vector_scalar_common_2[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__typecheck_error_arg_vector__check_hlds__typecheck_error_arg_vector__type_ctor_info_arg_vector_type_error_0)),
    ((MR_Box) (&check_hlds__typecheck_error_arg_vector__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_builtin_type_0)),
    ((MR_Box) (&check_hlds__typecheck_error_arg_vector__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_builtin_type_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_arg_vector_scalar_common_3[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_arg_vector_scalar_common_2[0])),
    ((MR_Box) (check_hlds__typecheck_error_arg_vector__report_error_wrong_types_in_arg_vector_5_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_arg_vector__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_builtin_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_arg_vector__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_error_arg_vector__check_hlds__typecheck_error_arg_vector__field_types_arg_vector_type_error_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_arg_vector__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_error_arg_vector__check_hlds__typecheck_error_arg_vector__du_functor_desc_arg_vector_type_error_0_0 = {
  (MR_String) "arg_vector_type_error",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_error_arg_vector__check_hlds__typecheck_error_arg_vector__field_types_arg_vector_type_error_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_arg_vector__check_hlds__typecheck_error_arg_vector__du_stag_ordered_arg_vector_type_error_0_0[1] = { &check_hlds__typecheck_error_arg_vector__check_hlds__typecheck_error_arg_vector__du_functor_desc_arg_vector_type_error_0_0 };

static const MR_DuPtagLayout check_hlds__typecheck_error_arg_vector__check_hlds__typecheck_error_arg_vector__du_ptag_ordered_arg_vector_type_error_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_error_arg_vector__check_hlds__typecheck_error_arg_vector__du_stag_ordered_arg_vector_type_error_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_arg_vector__check_hlds__typecheck_error_arg_vector__du_name_ordered_arg_vector_type_error_0[1] = { &check_hlds__typecheck_error_arg_vector__check_hlds__typecheck_error_arg_vector__du_functor_desc_arg_vector_type_error_0_0 };

static const MR_Integer check_hlds__typecheck_error_arg_vector__check_hlds__typecheck_error_arg_vector__functor_number_map_arg_vector_type_error_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__typecheck_error_arg_vector__check_hlds__typecheck_error_arg_vector__type_ctor_info_arg_vector_type_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_error_arg_vector____Unify____arg_vector_type_error_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_error_arg_vector____Compare____arg_vector_type_error_0_0_10001)),
  (MR_String) "check_hlds.typecheck_error_arg_vector",
  (MR_String) "arg_vector_type_error",
  { check_hlds__typecheck_error_arg_vector__check_hlds__typecheck_error_arg_vector__du_name_ordered_arg_vector_type_error_0 },
  { check_hlds__typecheck_error_arg_vector__check_hlds__typecheck_error_arg_vector__du_ptag_ordered_arg_vector_type_error_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__typecheck_error_arg_vector__check_hlds__typecheck_error_arg_vector__functor_number_map_arg_vector_type_error_0,

};

void MR_CALL 
check_hlds__typecheck_error_arg_vector____Compare____arg_vector_type_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_error_arg_vector_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        check_hlds__typecheck_error_type_assign____Compare____actual_expected_types_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

MR_bool MR_CALL 
check_hlds__typecheck_error_arg_vector____Unify____arg_vector_type_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_11_11;
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_11_11 = (MR_Word) (&check_hlds__typecheck_error_arg_vector_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
        succeeded = check_hlds__typecheck_error_type_assign____Unify____actual_expected_types_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_error_arg_vector__acc_builtin_types_of_arg_vector_type_error_3_p_0(
  MR_Word Error_4,
  MR_Word STATE_VARIABLE_BuiltinTypes_0_15,
  MR_Word * STATE_VARIABLE_BuiltinTypes_16)
{
  MR_Word ActualExpected_8 = ((MR_Word) ((MR_hl_field(0, Error_4, 2))));
  MR_Word ActualType_10 = ((MR_Word) ((MR_hl_field(0, ActualExpected_8, 1))));
  MR_Word ExpectedType_12 = ((MR_Word) ((MR_hl_field(0, ActualExpected_8, 3))));
  MR_Word STATE_VARIABLE_BuiltinTypes_1_17;

  check_hlds__typecheck_error_builtin__acc_builtin_type_3_p_0(ActualType_10, STATE_VARIABLE_BuiltinTypes_0_15, &STATE_VARIABLE_BuiltinTypes_1_17);
  check_hlds__typecheck_error_builtin__acc_builtin_type_3_p_0(ExpectedType_12, STATE_VARIABLE_BuiltinTypes_1_17, STATE_VARIABLE_BuiltinTypes_16);
}

static void MR_CALL 
check_hlds__typecheck_error_arg_vector__report_error_wrong_types_in_arg_vector_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_BuiltinTypes_16;

  check_hlds__typecheck_error_arg_vector__acc_builtin_types_of_arg_vector_type_error_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_BuiltinTypes_16);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_BuiltinTypes_16));
}

MR_Word MR_CALL 
check_hlds__typecheck_error_arg_vector__report_error_wrong_types_in_arg_vector_5_f_0(
  MR_Word Info_7,
  MR_Word Context_8,
  MR_Word ArgVectorKind_9,
  MR_Word TypeAssignSet_10,
  MR_Word ArgVectorTypeErrors0_11)
{
  MR_bool succeeded;
  MR_Word Spec_12;
  MR_Word ClauseContext_13;
  MR_Word InClauseForPieces_14;
  MR_Word ArgVectorTypeErrors_15;
  MR_Word ArgVectorKindPieces_16;
  MR_Word VarSet_17;
  MR_Word HeadArgVectorTypeErrors_18;
  MR_Word TailArgVectorTypeErrors_19;
  MR_Word ArgErrorPieces_20;
  MR_Word InvisIntPieces_28;
  MR_Word VerboseComponent_29;
  MR_Word Msg_30;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_47;
  MR_Word SymName_22;
  MR_Word PredFormArity_23;

  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(Info_7, &ClauseContext_13);
  InClauseForPieces_14 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_13);
  mercury__list__sort_2_p_0((MR_Word) (&check_hlds__typecheck_error_arg_vector__check_hlds__typecheck_error_arg_vector__type_ctor_info_arg_vector_type_error_0), ArgVectorTypeErrors0_11, &ArgVectorTypeErrors_15);
  ArgVectorKindPieces_16 = check_hlds__typecheck_error_util__arg_vector_kind_to_pieces_2_f_0(ClauseContext_13, ArgVectorKind_9);
  VarSet_17 = ((MR_Word) ((MR_hl_field(0, ClauseContext_13, 5))));
  if ((ArgVectorTypeErrors_15 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_error_arg_vector.report_error_wrong_types_in_arg_vector\'/5", (MR_String) "ArgVectorTypeErrors = []");
  else
  {
    HeadArgVectorTypeErrors_18 = ((MR_Word) ((MR_hl_field(1, ArgVectorTypeErrors_15, 0))));
    TailArgVectorTypeErrors_19 = ((MR_Word) ((MR_hl_field(1, ArgVectorTypeErrors_15, 1))));
  }
  check_hlds__typecheck_error_arg_vector__arg_vector_type_errors_to_pieces_5_p_0(VarSet_17, ArgVectorTypeErrors_15, HeadArgVectorTypeErrors_18, TailArgVectorTypeErrors_19, &ArgErrorPieces_20);
  if (((MR_tag((MR_Word) ArgVectorKind_9)) == (MR_Integer) 1))
  {
    MR_Word PredId_24 = ((MR_Word) ((MR_hl_field(1, ArgVectorKind_9, 0))));
    MR_Word ModuleInfo_25 = ((MR_Word) ((MR_hl_field(0, ClauseContext_13, 0))));
    MR_Word PredInfo_26;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_25, PredId_24, &PredInfo_26);
    hlds__hlds_pred__pred_info_get_sym_name_2_p_0(PredInfo_26, &SymName_22);
    PredFormArity_23 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_26);
    succeeded = MR_TRUE;
  }
  else
  if (((MR_tag((MR_Word) ArgVectorKind_9)) == (MR_Integer) 2))
  {
    MR_Word SymNamePredFormArity_21 = ((MR_Word) ((MR_hl_field(2, ArgVectorKind_9, 0))));

    SymName_22 = ((MR_Word) ((MR_hl_field(0, SymNamePredFormArity_21, 0))));
    PredFormArity_23 = ((MR_Word) ((MR_hl_field(0, SymNamePredFormArity_21, 1))));
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  if (succeeded)
    succeeded = check_hlds__typecheck_error_builtin__is_int_pred_op_2_p_0(SymName_22, PredFormArity_23);
  if (succeeded)
  {
    MR_Word BuiltinTypes_27;
    MR_Word Var_34;
    MR_Box conv1_BuiltinTypes_27;

    Var_34 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0));
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__typecheck_error_arg_vector__check_hlds__typecheck_error_arg_vector__type_ctor_info_arg_vector_type_error_0), (MR_Word) (&check_hlds__typecheck_error_arg_vector_scalar_common_1[0]), (MR_Word) (&check_hlds__typecheck_error_arg_vector_scalar_common_3[0]), ArgVectorTypeErrors_15, ((MR_Box) (Var_34)), &conv1_BuiltinTypes_27);
    BuiltinTypes_27 = ((MR_Word) (conv1_BuiltinTypes_27));
    InvisIntPieces_28 = check_hlds__typecheck_error_builtin__report_any_invisible_int_types_2_f_0(ClauseContext_13, BuiltinTypes_27);
  }
  else
    InvisIntPieces_28 = (MR_Word) ((MR_Unsigned) 0U);
  check_hlds__typecheck_error_type_assign__type_assign_set_msg_to_verbose_component_4_p_0(Info_7, VarSet_17, TypeAssignSet_10, &VerboseComponent_29);
  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_36, 0) = ((MR_Box) (InClauseForPieces_14));
  }
  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (ArgVectorKindPieces_16));
  }
  Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgErrorPieces_20, InvisIntPieces_28);
  {
    Var_40 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_40, 0) = ((MR_Box) (Var_41));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (VerboseComponent_29));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_42));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_39));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_37));
  }
  {
    Msg_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Msg_30, 0) = ((MR_Box) (Context_8));
    MR_hl_field(2, Msg_30, 1) = ((MR_Box) (Var_35));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (Msg_30));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_12, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_error_arg_vector.report_error_wrong_types_in_arg_vector\'/5"));
    MR_hl_field(2, Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(2, Spec_12, 3) = ((MR_Box) (Var_47));
  }
  return Spec_12;
}

static void MR_CALL 
check_hlds__typecheck_error_arg_vector__arg_vector_type_errors_to_pieces_5_p_0(
  MR_Word VarSet_6,
  MR_Word AllErrors_7,
  MR_Word HeadError_8,
  MR_Word TailErrors_9,
  MR_Word * Pieces_10)
{
  MR_Word SuffixPiece_11;
  MR_Word TailPieces_12;
  MR_Integer ArgNum_15;
  MR_Word Var_16;
  MR_Word ActualExpected_17;
  MR_Word ActualPieces_18;
  MR_Word ExpectedPieces0_20;
  MR_Word ExpectedPieces_25;
  MR_Word NlSwitchedPosPieces_26;
  MR_Word Var_43;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_51;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_72;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word SwitchedPosPieces_92;

  if ((TailErrors_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    SuffixPiece_11 = (MR_Word) (MR_mkword(3, &check_hlds__typecheck_error_arg_vector_scalar_common_1[2]));
    TailPieces_12 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word HeadTailError_13 = ((MR_Word) ((MR_hl_field(1, TailErrors_9, 0))));
    MR_Word TailTailErrors_14 = ((MR_Word) ((MR_hl_field(1, TailErrors_9, 1))));

    SuffixPiece_11 = (MR_Word) (MR_mkword(3, &check_hlds__typecheck_error_arg_vector_scalar_common_1[3]));
    check_hlds__typecheck_error_arg_vector__arg_vector_type_errors_to_pieces_5_p_0(VarSet_6, AllErrors_7, HeadTailError_13, TailTailErrors_14, &TailPieces_12);
  }
  ArgNum_15 = ((MR_Integer) ((MR_hl_field(0, HeadError_8, 0))));
  Var_16 = ((MR_Word) ((MR_hl_field(0, HeadError_8, 1))));
  ActualExpected_17 = ((MR_Word) ((MR_hl_field(0, HeadError_8, 2))));
  ActualPieces_18 = ((MR_Word) ((MR_hl_field(0, ActualExpected_17, 0))));
  ExpectedPieces0_20 = ((MR_Word) ((MR_hl_field(0, ActualExpected_17, 2))));
  check_hlds__typecheck_error_arg_vector__find_expecteds_matching_actual_4_p_0(VarSet_6, ActualPieces_18, AllErrors_7, &SwitchedPosPieces_92);
  if ((SwitchedPosPieces_92 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_31;

    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (SuffixPiece_11));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ExpectedPieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ExpectedPieces0_20, Var_31);
    NlSwitchedPosPieces_26 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_arg_vector_scalar_common_1[5]));
  }
  else
  {
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_105;
    MR_Word Var_110;
    MR_Word SwitchedPosPieces_122;

    Var_100 = parse_tree__error_spec__color_as_hint_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_arg_vector_scalar_common_1[20])));
    Var_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SwitchedPosPieces_92, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_arg_vector_scalar_common_1[24])));
    Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_arg_vector_scalar_common_1[22])), Var_110);
    Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_100, Var_105);
    SwitchedPosPieces_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_arg_vector_scalar_common_1[18])), Var_99);
    if ((SwitchedPosPieces_122 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_116;

      {
        Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_116, 0) = ((MR_Box) (SuffixPiece_11));
        MR_hl_field(1, Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      ExpectedPieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ExpectedPieces0_20, Var_116);
      NlSwitchedPosPieces_26 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_arg_vector_scalar_common_1[5]));
    }
    else
    {
      MR_Word Var_40;
      MR_Word Var_41;

      ExpectedPieces_25 = ExpectedPieces0_20;
      {
        Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_41, 0) = ((MR_Box) (SuffixPiece_11));
        MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SwitchedPosPieces_122, Var_41);
      NlSwitchedPosPieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_arg_vector_scalar_common_1[5])), Var_40);
    }
  }
  {
    Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_47, 1) = ((MR_Box) (ArgNum_15));
  }
  Var_55 = check_hlds__typecheck_error_util__argument_name_to_pieces_lc_3_f_0(VarSet_6, (MR_Integer) 0, Var_16);
  Var_54 = parse_tree__error_spec__color_as_subject_1_f_0(Var_55);
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_arg_vector_scalar_common_1[8])));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_54));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_arg_vector_scalar_common_1[7])));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_51));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_48));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_arg_vector_scalar_common_1[6])));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
  }
  Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ActualPieces_18, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_arg_vector_scalar_common_1[13])));
  Var_66 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_67);
  Var_84 = parse_tree__error_spec__color_as_correct_1_f_0(ExpectedPieces_25);
  {
    Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_86, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_arg_vector_scalar_common_1[4])));
    MR_hl_field(1, Var_86, 1) = ((MR_Box) (TailPieces_12));
  }
  Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NlSwitchedPosPieces_26, Var_86);
  Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_84, Var_85);
  Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_arg_vector_scalar_common_1[16])), Var_83);
  Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_66, Var_72);
  Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_arg_vector_scalar_common_1[11])), Var_65);
  *Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, Var_57);
}

static void MR_CALL 
check_hlds__typecheck_error_arg_vector__find_expecteds_matching_actual_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word HeadError_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word TailErrors_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word TailSwitchedPosPieces_12;
    MR_Integer ArgNum_13;
    MR_Word Var_14;
    MR_Word ActualExpected_15;
    MR_Word ExpectedPieces_18;

    check_hlds__typecheck_error_arg_vector__find_expecteds_matching_actual_4_p_0(HeadVar__1_1, HeadVar__2_2, TailErrors_10, &TailSwitchedPosPieces_12);
    ArgNum_13 = ((MR_Integer) ((MR_hl_field(0, HeadError_9, 0))));
    Var_14 = ((MR_Word) ((MR_hl_field(0, HeadError_9, 1))));
    ActualExpected_15 = ((MR_Word) ((MR_hl_field(0, HeadError_9, 2))));
    ExpectedPieces_18 = ((MR_Word) ((MR_hl_field(0, ActualExpected_15, 2))));
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_error_arg_vector_scalar_common_1[25]), ((MR_Box) (HeadVar__2_2)), ((MR_Box) (ExpectedPieces_18)));
    if (succeeded)
    {
      MR_Word HeadSwitchedPosPieces_23;
      MR_String Var_22;

      succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1, Var_14, &Var_22);
      if (succeeded)
      {
        MR_Word Var_29;
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Word Var_34;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_String Var_39;

        {
          Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_30, 1) = ((MR_Box) (ArgNum_13));
        }
        Var_39 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1, Var_14);
        {
          Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_38, 1) = ((MR_Box) (Var_39));
        }
        {
          Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
          MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_34, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_arg_vector_scalar_common_1[27])));
          MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
        }
        {
          Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_31, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_arg_vector_scalar_common_1[12])));
          MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_34));
        }
        {
          Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
          MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_31));
        }
        {
          HeadSwitchedPosPieces_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadSwitchedPosPieces_23, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_arg_vector_scalar_common_1[26])));
          MR_hl_field(1, HeadSwitchedPosPieces_23, 1) = ((MR_Box) (Var_29));
        }
      }
      else
      {
        MR_Word Var_43;
        MR_Word Var_44;

        {
          Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_44, 1) = ((MR_Box) (ArgNum_13));
        }
        {
          Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
          MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          HeadSwitchedPosPieces_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadSwitchedPosPieces_23, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_arg_vector_scalar_common_1[26])));
          MR_hl_field(1, HeadSwitchedPosPieces_23, 1) = ((MR_Box) (Var_43));
        }
      }
      if ((TailSwitchedPosPieces_12 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__4_4 = HeadSwitchedPosPieces_23;
      else
      {
        MR_Word Var_52;

        Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_arg_vector_scalar_common_1[30])), TailSwitchedPosPieces_12);
        *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadSwitchedPosPieces_23, Var_52);
      }
    }
    else
      *HeadVar__4_4 = TailSwitchedPosPieces_12;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_arg_vector____Unify____arg_vector_type_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_error_arg_vector____Unify____arg_vector_type_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_error_arg_vector____Compare____arg_vector_type_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_error_arg_vector____Compare____arg_vector_type_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__typecheck_error_arg_vector__init(void)
{
}

void mercury__check_hlds__typecheck_error_arg_vector__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__typecheck_error_arg_vector__check_hlds__typecheck_error_arg_vector__type_ctor_info_arg_vector_type_error_0);
}

void mercury__check_hlds__typecheck_error_arg_vector__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__typecheck_error_arg_vector__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.typecheck_error_arg_vector.
