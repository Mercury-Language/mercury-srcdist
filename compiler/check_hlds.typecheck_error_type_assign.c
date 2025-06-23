/*
** Automatically generated from `typecheck_error_type_assign.m'
** by the Mercury compiler,
** version rotd-2025-06-23
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


// :- module check_hlds.typecheck_error_type_assign.
// :- implementation.

/*
INIT mercury__check_hlds__typecheck_error_type_assign__init
ENDINIT
*/

#include "check_hlds.typecheck_error_type_assign.mih"


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
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_assign.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.typecheck_error_util.mih"
#include "check_hlds.typecheck_info.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_type_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_out_type.mih"
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
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_type_assign__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_type_assign__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_type_assign__maybe__ti_maybe_1check_hlds__type_assign__type_ctor_info_args_type_assign_source_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__field_types_actual_expected_types_0_0[6];

static const MR_ConstString check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__field_names_actual_expected_types_0_0[6];

static const MR_DuFunctorDesc check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_functor_desc_actual_expected_types_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_stag_ordered_actual_expected_types_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_ptag_ordered_actual_expected_types_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_name_ordered_actual_expected_types_0[1];

static const MR_Integer check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__functor_number_map_actual_expected_types_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_type_assign__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__field_types_arg_type_stuff_0_0[5];

static const MR_ConstString check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__field_names_arg_type_stuff_0_0[5];

static const MR_DuFunctorDesc check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_functor_desc_arg_type_stuff_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_stag_ordered_arg_type_stuff_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_ptag_ordered_arg_type_stuff_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_name_ordered_arg_type_stuff_0[1];

static const MR_Integer check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__functor_number_map_arg_type_stuff_0[1];

static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_error_type_assign__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__field_types_type_stuff_0_0[4];

static const MR_ConstString check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__field_names_type_stuff_0_0[4];

static const MR_DuFunctorDesc check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_functor_desc_type_stuff_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_stag_ordered_type_stuff_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_ptag_ordered_type_stuff_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_name_ordered_type_stuff_0[1];

static const MR_Integer check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__functor_number_map_type_stuff_0[1];

static void MR_CALL 
check_hlds__typecheck_error_type_assign__get_all_type_stuffs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_Word MR_CALL 
check_hlds__typecheck_error_type_assign__args_type_assign_set_to_pieces_4_f_0(
  MR_Word ModuleInfo_1,
  MR_Word VarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word MaybeSeq_4);

static MR_Word MR_CALL 
check_hlds__typecheck_error_type_assign__type_assign_set_to_pieces_4_f_0(
  MR_Word ModuleInfo_1,
  MR_Word VarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word MaybeSeq_4);

static MR_Word MR_CALL 
check_hlds__typecheck_error_type_assign__type_assign_to_pieces_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Word VarSet_8,
  MR_Word TypeAssign_9,
  MR_Word MaybeSource_10,
  MR_Word MaybeSeq_11);

static MR_Word MR_CALL 
check_hlds__typecheck_error_type_assign__type_assign_constraints_to_pieces_list_5_f_0(
  MR_String Operator_1,
  MR_Word HeadVar__2_2,
  MR_Word TypeBindings_3,
  MR_Word TypeVarSet_4,
  MR_Word FoundOne_5);

static void MR_CALL 
check_hlds__typecheck_error_type_assign__acc_type_assign_type_pieces_9_p_0(
  MR_Word VarSet_1,
  MR_Word VarTypes_2,
  MR_Word TypeVarSet_3,
  MR_Word TypeBindings_4,
  MR_Word HeadVar__5_5,
  MR_Integer STATE_VARIABLE_MaxVarNameLen_0_6,
  MR_Integer * STATE_VARIABLE_MaxVarNameLen_7,
  MR_Word HeadVar__8_8,
  MR_Word * HeadVar__9_9);

static void MR_CALL 
check_hlds__typecheck_error_type_assign__align_and_unreverse_type_assign_pieces_4_p_0(
  MR_Integer LeftLen_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Pieces_0_3,
  MR_Word * STATE_VARIABLE_Pieces_4);

static MR_bool MR_CALL 
check_hlds__typecheck_error_type_assign____Unify____actual_expected_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_error_type_assign____Compare____actual_expected_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_error_type_assign____Unify____arg_type_stuff_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_error_type_assign____Compare____arg_type_stuff_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_error_type_assign____Unify____type_stuff_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_error_type_assign____Compare____type_stuff_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__typecheck_error_type_assign_scalar_common_1[16][2];

static /* final */ const MR_Box check_hlds__typecheck_error_type_assign_scalar_common_2[2][3];

static /* final */ const MR_Box check_hlds__typecheck_error_type_assign_scalar_common_3[2][1];




static /* final */ const MR_Box check_hlds__typecheck_error_type_assign_scalar_common_1[16][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck_error_type_assign_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_source_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_type_assign_scalar_common_1[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "derived from"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Type assignment"))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_type_assign_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_type_assign_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "(No variables were assigned a type)"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_type_assign_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_type_assign_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__typecheck_error_type_assign_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_type_assign_scalar_common_3[1])),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_type_assign_scalar_common_3[2][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 1)) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "<any>")) },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_type_assign__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_type_assign__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__typecheck_error_type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_type_assign__maybe__ti_maybe_1check_hlds__type_assign__type_ctor_info_args_type_assign_source_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_source_0) }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__field_types_actual_expected_types_0_0[6] = {
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_type_assign__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_type_assign__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_type_assign__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_type_assign__maybe__ti_maybe_1check_hlds__type_assign__type_ctor_info_args_type_assign_source_0)
};

static const MR_ConstString check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__field_names_actual_expected_types_0_0[6] = {
  (MR_String) "actual_type_pieces",
  (MR_String) "actual_type",
  (MR_String) "expected_type_pieces",
  (MR_String) "expected_type",
  (MR_String) "existq_tvars",
  (MR_String) "expectation_source"
};

static const MR_DuFunctorDesc check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_functor_desc_actual_expected_types_0_0 = {
  (MR_String) "actual_expected_types",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__field_types_actual_expected_types_0_0,
  check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__field_names_actual_expected_types_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_stag_ordered_actual_expected_types_0_0[1] = { &check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_functor_desc_actual_expected_types_0_0 };

static const MR_DuPtagLayout check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_ptag_ordered_actual_expected_types_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_stag_ordered_actual_expected_types_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_name_ordered_actual_expected_types_0[1] = { &check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_functor_desc_actual_expected_types_0_0 };

static const MR_Integer check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__functor_number_map_actual_expected_types_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_error_type_assign____Unify____actual_expected_types_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_error_type_assign____Compare____actual_expected_types_0_0_10001)),
  (MR_String) "check_hlds.typecheck_error_type_assign",
  (MR_String) "actual_expected_types",
  { check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_name_ordered_actual_expected_types_0 },
  { check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_ptag_ordered_actual_expected_types_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__functor_number_map_actual_expected_types_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_type_assign__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__field_types_arg_type_stuff_0_0[5] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_source_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_type_assign__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_type_assign__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
};

static const MR_ConstString check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__field_names_arg_type_stuff_0_0[5] = {
  (MR_String) "arg_type_stuff_var_type",
  (MR_String) "arg_type_stuff_source",
  (MR_String) "arg_type_stuff_arg_type",
  (MR_String) "arg_type_stuff_tvarset",
  (MR_String) "arg_type_stuff_existq_tvars"
};

static const MR_DuFunctorDesc check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_functor_desc_arg_type_stuff_0_0 = {
  (MR_String) "arg_type_stuff",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__field_types_arg_type_stuff_0_0,
  check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__field_names_arg_type_stuff_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_stag_ordered_arg_type_stuff_0_0[1] = { &check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_functor_desc_arg_type_stuff_0_0 };

static const MR_DuPtagLayout check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_ptag_ordered_arg_type_stuff_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_stag_ordered_arg_type_stuff_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_name_ordered_arg_type_stuff_0[1] = { &check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_functor_desc_arg_type_stuff_0_0 };

static const MR_Integer check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__functor_number_map_arg_type_stuff_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_arg_type_stuff_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_error_type_assign____Unify____arg_type_stuff_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_error_type_assign____Compare____arg_type_stuff_0_0_10001)),
  (MR_String) "check_hlds.typecheck_error_type_assign",
  (MR_String) "arg_type_stuff",
  { check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_name_ordered_arg_type_stuff_0 },
  { check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_ptag_ordered_arg_type_stuff_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__functor_number_map_arg_type_stuff_0,

};

static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_error_type_assign__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__typecheck_error_type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__field_types_type_stuff_0_0[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_type_assign__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_type_assign__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_type_assign__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
};

static const MR_ConstString check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__field_names_type_stuff_0_0[4] = {
  (MR_String) "type_stuff_base_type",
  (MR_String) "type_stuff_tvarset",
  (MR_String) "type_stuff_binding",
  (MR_String) "type_stuff_existq_tvars"
};

static const MR_DuFunctorDesc check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_functor_desc_type_stuff_0_0 = {
  (MR_String) "type_stuff",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__field_types_type_stuff_0_0,
  check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__field_names_type_stuff_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_stag_ordered_type_stuff_0_0[1] = { &check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_functor_desc_type_stuff_0_0 };

static const MR_DuPtagLayout check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_ptag_ordered_type_stuff_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_stag_ordered_type_stuff_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_name_ordered_type_stuff_0[1] = { &check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_functor_desc_type_stuff_0_0 };

static const MR_Integer check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__functor_number_map_type_stuff_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_type_stuff_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_error_type_assign____Unify____type_stuff_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_error_type_assign____Compare____type_stuff_0_0_10001)),
  (MR_String) "check_hlds.typecheck_error_type_assign",
  (MR_String) "type_stuff",
  { check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_name_ordered_type_stuff_0 },
  { check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__du_ptag_ordered_type_stuff_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__functor_number_map_type_stuff_0,

};

void MR_CALL 
check_hlds__typecheck_error_type_assign____Compare____type_stuff_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;

    parse_tree__prog_data____Compare____mer_type_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign_scalar_common_1[4]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign_scalar_common_2[0]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__typecheck_error_type_assign____Unify____type_stuff_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&check_hlds__typecheck_error_type_assign_scalar_common_1[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&check_hlds__typecheck_error_type_assign_scalar_common_2[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&check_hlds__typecheck_error_type_assign_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__typecheck_error_type_assign____Compare____arg_type_stuff_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word SubResult1_6;

    parse_tree__prog_data____Compare____mer_type_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      check_hlds__type_assign____Compare____args_type_assign_source_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        parse_tree__prog_data____Compare____mer_type_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign_scalar_common_1[4]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__typecheck_error_type_assign____Unify____arg_type_stuff_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_18_18;
    MR_Word TypeInfo_19_19;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));

    succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = check_hlds__type_assign____Unify____args_type_assign_source_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_18_18 = (MR_Word) (&check_hlds__typecheck_error_type_assign_scalar_common_1[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_19_19 = (MR_Word) (&check_hlds__typecheck_error_type_assign_scalar_common_1[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__typecheck_error_type_assign____Compare____actual_expected_types_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      parse_tree__prog_data____Compare____mer_type_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign_scalar_common_1[0]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          parse_tree__prog_data____Compare____mer_type_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign_scalar_common_1[2]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__typecheck_error_type_assign____Unify____actual_expected_types_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_19_19;
    MR_Word TypeInfo_21_21;
    MR_Word TypeInfo_22_22;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_19_19 = (MR_Word) (&check_hlds__typecheck_error_type_assign_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            TypeInfo_21_21 = (MR_Word) (&check_hlds__typecheck_error_type_assign_scalar_common_1[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_22_22 = (MR_Word) (&check_hlds__typecheck_error_type_assign_scalar_common_1[3]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_error_type_assign__get_all_type_stuffs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TypeAssign_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word TypeAssigns_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word TypeStuff_8;
    MR_Word TypeStuffs_9;
    MR_Word ExistQTVars_10;
    MR_Word TypeBindings_11;
    MR_Word TVarSet_12;
    MR_Word VarTypes_13;
    MR_Word Type_15;
    MR_Word Type0_14;

    check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(TypeAssign_5, &ExistQTVars_10);
    check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_5, &TypeBindings_11);
    check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign_5, &TVarSet_12);
    check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign_5, &VarTypes_13);
    succeeded = parse_tree__vartypes__search_var_type_3_p_0(VarTypes_13, HeadVar__2_2, &Type0_14);
    if (succeeded)
      Type_15 = Type0_14;
    else
      Type_15 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_type_assign_scalar_common_2[1]));
    {
      TypeStuff_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeStuff_8, 0) = ((MR_Box) (Type_15));
      MR_hl_field(0, TypeStuff_8, 1) = ((MR_Box) (TVarSet_12));
      MR_hl_field(0, TypeStuff_8, 2) = ((MR_Box) (TypeBindings_11));
      MR_hl_field(0, TypeStuff_8, 3) = ((MR_Box) (ExistQTVars_10));
    }
    check_hlds__typecheck_error_type_assign__get_all_type_stuffs_3_p_0(TypeAssigns_6, HeadVar__2_2, &TypeStuffs_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (TypeStuff_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (TypeStuffs_9));
    }
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_error_type_assign__arg_type_stuff_to_actual_expected_3_f_0(
  MR_Word AddQuotes_5,
  MR_Word InstVarSet_6,
  MR_Word ArgTypeStuff_7)
{
  MR_bool succeeded;
  MR_Word ActualExpected_8;
  MR_Word VarType_9 = ((MR_Word) ((MR_hl_field(0, ArgTypeStuff_7, 0))));
  MR_Word Source_10 = ((MR_Word) ((MR_hl_field(0, ArgTypeStuff_7, 1))));
  MR_Word ExpectedType_11 = ((MR_Word) ((MR_hl_field(0, ArgTypeStuff_7, 2))));
  MR_Word TVarSet_12 = ((MR_Word) ((MR_hl_field(0, ArgTypeStuff_7, 3))));
  MR_Word ExistQTVars_13 = ((MR_Word) ((MR_hl_field(0, ArgTypeStuff_7, 4))));
  MR_Word StrippedVarType_14;
  MR_Word StrippedExpectedType_15;
  MR_Word ActualPieces0_16;
  MR_Word ExpectedPieces0_17;

  parse_tree__prog_type__strip_module_names_from_type_4_p_0((MR_Integer) 0, (MR_Integer) 1, VarType_9, &StrippedVarType_14);
  parse_tree__prog_type__strip_module_names_from_type_4_p_0((MR_Integer) 0, (MR_Integer) 1, ExpectedType_11, &StrippedExpectedType_15);
  ActualPieces0_16 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_12, InstVarSet_6, (MR_Integer) 0, AddQuotes_5, ExistQTVars_13, StrippedVarType_14);
  ExpectedPieces0_17 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_12, InstVarSet_6, (MR_Integer) 0, AddQuotes_5, ExistQTVars_13, StrippedExpectedType_15);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign_scalar_common_1[0]), ((MR_Box) (ActualPieces0_16)), ((MR_Box) (ExpectedPieces0_17)));
  if (succeeded)
  {
    MR_Word ActualPieces_18;
    MR_Word ExpectedPieces_19;
    MR_Word Var_28;

    ActualPieces_18 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_12, InstVarSet_6, (MR_Integer) 1, AddQuotes_5, ExistQTVars_13, VarType_9);
    ExpectedPieces_19 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_12, InstVarSet_6, (MR_Integer) 1, AddQuotes_5, ExistQTVars_13, ExpectedType_11);
    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (Source_10));
    }
    {
      ActualExpected_8 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ActualExpected_8, 0) = ((MR_Box) (ActualPieces_18));
      MR_hl_field(0, ActualExpected_8, 1) = ((MR_Box) (VarType_9));
      MR_hl_field(0, ActualExpected_8, 2) = ((MR_Box) (ExpectedPieces_19));
      MR_hl_field(0, ActualExpected_8, 3) = ((MR_Box) (ExpectedType_11));
      MR_hl_field(0, ActualExpected_8, 4) = ((MR_Box) (ExistQTVars_13));
      MR_hl_field(0, ActualExpected_8, 5) = ((MR_Box) (Var_28));
    }
  }
  else
  {
    MR_Word Var_29;

    {
      Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_29, 0) = ((MR_Box) (Source_10));
    }
    {
      ActualExpected_8 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ActualExpected_8, 0) = ((MR_Box) (ActualPieces0_16));
      MR_hl_field(0, ActualExpected_8, 1) = ((MR_Box) (VarType_9));
      MR_hl_field(0, ActualExpected_8, 2) = ((MR_Box) (ExpectedPieces0_17));
      MR_hl_field(0, ActualExpected_8, 3) = ((MR_Box) (ExpectedType_11));
      MR_hl_field(0, ActualExpected_8, 4) = ((MR_Box) (ExistQTVars_13));
      MR_hl_field(0, ActualExpected_8, 5) = ((MR_Box) (Var_29));
    }
  }
  return ActualExpected_8;
}

MR_Word MR_CALL 
check_hlds__typecheck_error_type_assign__type_stuff_to_actual_expected_4_f_0(
  MR_Word AddQuotes_6,
  MR_Word InstVarSet_7,
  MR_Word ExpectedType_8,
  MR_Word VarTypeStuff_9)
{
  MR_bool succeeded;
  MR_Word ActualExpected_10;
  MR_Word VarType_11 = ((MR_Word) ((MR_hl_field(0, VarTypeStuff_9, 0))));
  MR_Word TVarSet_12 = ((MR_Word) ((MR_hl_field(0, VarTypeStuff_9, 1))));
  MR_Word TypeBinding_13 = ((MR_Word) ((MR_hl_field(0, VarTypeStuff_9, 2))));
  MR_Word ExistQTVars_14 = ((MR_Word) ((MR_hl_field(0, VarTypeStuff_9, 3))));
  MR_Word StrippedVarType_15;
  MR_Word StrippedExpectedType_16;
  MR_Word ActualPieces0_17;
  MR_Word ExpectedPieces0_18;
  MR_Word Type_32;
  MR_Word Type_33;

  parse_tree__prog_type__strip_module_names_from_type_4_p_0((MR_Integer) 0, (MR_Integer) 1, VarType_11, &StrippedVarType_15);
  parse_tree__prog_type__strip_module_names_from_type_4_p_0((MR_Integer) 0, (MR_Integer) 1, ExpectedType_8, &StrippedExpectedType_16);
  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBinding_13, StrippedVarType_15, &Type_32);
  ActualPieces0_17 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_12, InstVarSet_7, (MR_Integer) 0, AddQuotes_6, ExistQTVars_14, Type_32);
  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBinding_13, StrippedExpectedType_16, &Type_33);
  ExpectedPieces0_18 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_12, InstVarSet_7, (MR_Integer) 0, AddQuotes_6, ExistQTVars_14, Type_33);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign_scalar_common_1[0]), ((MR_Box) (ActualPieces0_17)), ((MR_Box) (ExpectedPieces0_18)));
  if (succeeded)
  {
    MR_Word ActualPieces_19;
    MR_Word ExpectedPieces_20;
    MR_Word Type_34;
    MR_Word Type_35;

    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBinding_13, VarType_11, &Type_34);
    ActualPieces_19 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_12, InstVarSet_7, (MR_Integer) 1, AddQuotes_6, ExistQTVars_14, Type_34);
    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBinding_13, ExpectedType_8, &Type_35);
    ExpectedPieces_20 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_12, InstVarSet_7, (MR_Integer) 1, AddQuotes_6, ExistQTVars_14, Type_35);
    {
      ActualExpected_10 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ActualExpected_10, 0) = ((MR_Box) (ActualPieces_19));
      MR_hl_field(0, ActualExpected_10, 1) = ((MR_Box) (VarType_11));
      MR_hl_field(0, ActualExpected_10, 2) = ((MR_Box) (ExpectedPieces_20));
      MR_hl_field(0, ActualExpected_10, 3) = ((MR_Box) (ExpectedType_8));
      MR_hl_field(0, ActualExpected_10, 4) = ((MR_Box) (ExistQTVars_14));
      MR_hl_field(0, ActualExpected_10, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
    {
      ActualExpected_10 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ActualExpected_10, 0) = ((MR_Box) (ActualPieces0_17));
      MR_hl_field(0, ActualExpected_10, 1) = ((MR_Box) (StrippedVarType_15));
      MR_hl_field(0, ActualExpected_10, 2) = ((MR_Box) (ExpectedPieces0_18));
      MR_hl_field(0, ActualExpected_10, 3) = ((MR_Box) (StrippedExpectedType_16));
      MR_hl_field(0, ActualExpected_10, 4) = ((MR_Box) (ExistQTVars_14));
      MR_hl_field(0, ActualExpected_10, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  return ActualExpected_10;
}

MR_Word MR_CALL 
check_hlds__typecheck_error_type_assign__typestuff_to_pieces_3_f_0(
  MR_Word AddQuotes_5,
  MR_Word InstVarSet_6,
  MR_Word TypeStuff_7)
{
  MR_Word Pieces_8;
  MR_Word Type_9;
  MR_Word TypeVarSet_11;
  MR_Word ExistQTVars_13;
  MR_Word Type0_15 = ((MR_Word) ((MR_hl_field(0, TypeStuff_7, 0))));
  MR_Word TypeBindings_17 = ((MR_Word) ((MR_hl_field(0, TypeStuff_7, 2))));
  MR_Word Type1_19;

  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_17, Type0_15, &Type1_19);
  parse_tree__prog_type__strip_module_names_from_type_4_p_0((MR_Integer) 0, (MR_Integer) 1, Type1_19, &Type_9);
  TypeVarSet_11 = ((MR_Word) ((MR_hl_field(0, TypeStuff_7, 1))));
  ExistQTVars_13 = ((MR_Word) ((MR_hl_field(0, TypeStuff_7, 3))));
  Pieces_8 = parse_tree__error_type_util__type_to_pieces_6_f_0(TypeVarSet_11, InstVarSet_6, (MR_Integer) 0, AddQuotes_5, ExistQTVars_13, Type_9);
  return Pieces_8;
}

MR_Word MR_CALL 
check_hlds__typecheck_error_type_assign__typestuff_to_type_1_f_0(
  MR_Word TypeStuff_3)
{
  MR_Word Type_4;
  MR_Word Type0_5 = ((MR_Word) ((MR_hl_field(0, TypeStuff_3, 0))));
  MR_Word TypeBindings_7 = ((MR_Word) ((MR_hl_field(0, TypeStuff_3, 2))));
  MR_Word Type1_9;

  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_7, Type0_5, &Type1_9);
  parse_tree__prog_type__strip_module_names_from_type_4_p_0((MR_Integer) 0, (MR_Integer) 1, Type1_9, &Type_4);
  return Type_4;
}

void MR_CALL 
check_hlds__typecheck_error_type_assign__get_arg_type_stuffs_4_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ArgTypeAssign_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word ArgTypeAssigns_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word TailArgTypeStuffs_12;
    MR_Word TypeAssign_13;
    MR_Word ArgTypes_14;
    MR_Word Source_16;
    MR_Word VarTypes_17;
    MR_Word VarType_19;
    MR_Word ArgType_20;
    MR_Word TypeBindings_21;
    MR_Word RecSubstVarType_22;
    MR_Word RecSubstArgType_23;
    MR_Word TVarSet_24;
    MR_Word ExistQTVars_25;
    MR_Word ArgTypeStuff_26;
    MR_Word VarType0_18;
    MR_Box conv0_ArgType_20;

    check_hlds__typecheck_error_type_assign__get_arg_type_stuffs_4_p_0(HeadVar__1_1, HeadVar__2_2, ArgTypeAssigns_10, &TailArgTypeStuffs_12);
    TypeAssign_13 = ((MR_Word) ((MR_hl_field(0, ArgTypeAssign_9, 0))));
    ArgTypes_14 = ((MR_Word) ((MR_hl_field(0, ArgTypeAssign_9, 1))));
    Source_16 = ((MR_Word) ((MR_hl_field(0, ArgTypeAssign_9, 3))));
    check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign_13, &VarTypes_17);
    succeeded = parse_tree__vartypes__search_var_type_3_p_0(VarTypes_17, HeadVar__2_2, &VarType0_18);
    if (succeeded)
      VarType_19 = VarType0_18;
    else
      VarType_19 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_type_assign_scalar_common_2[1]));
    mercury__list__det_index1_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_14, HeadVar__1_1, &conv0_ArgType_20);
    ArgType_20 = ((MR_Word) (conv0_ArgType_20));
    check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_13, &TypeBindings_21);
    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_21, VarType_19, &RecSubstVarType_22);
    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_21, ArgType_20, &RecSubstArgType_23);
    check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign_13, &TVarSet_24);
    check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(TypeAssign_13, &ExistQTVars_25);
    {
      ArgTypeStuff_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ArgTypeStuff_26, 0) = ((MR_Box) (RecSubstVarType_22));
      MR_hl_field(0, ArgTypeStuff_26, 1) = ((MR_Box) (Source_16));
      MR_hl_field(0, ArgTypeStuff_26, 2) = ((MR_Box) (RecSubstArgType_23));
      MR_hl_field(0, ArgTypeStuff_26, 3) = ((MR_Box) (TVarSet_24));
      MR_hl_field(0, ArgTypeStuff_26, 4) = ((MR_Box) (ExistQTVars_25));
    }
    succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_arg_type_stuff_0), ((MR_Box) (ArgTypeStuff_26)), TailArgTypeStuffs_12);
    if (succeeded)
      *HeadVar__4_4 = TailArgTypeStuffs_12;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ArgTypeStuff_26));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailArgTypeStuffs_12));
      }
  }
}

void MR_CALL 
check_hlds__typecheck_error_type_assign__get_all_transformed_type_stuffs_4_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TypeAssign_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word TypeAssigns_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Box Result_11;
    MR_Word Results_12;
    MR_Word TypeStuff_13;
    MR_Word ExistQTVars_15;
    MR_Word TypeBindings_16;
    MR_Word TVarSet_17;
    MR_Word VarTypes_18;
    MR_Word Type_20;
    MR_Word Type0_19;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);

    check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(TypeAssign_8, &ExistQTVars_15);
    check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_8, &TypeBindings_16);
    check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign_8, &TVarSet_17);
    check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign_8, &VarTypes_18);
    succeeded = parse_tree__vartypes__search_var_type_3_p_0(VarTypes_18, HeadVar__3_3, &Type0_19);
    if (succeeded)
      Type_20 = Type0_19;
    else
      Type_20 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_type_assign_scalar_common_2[1]));
    {
      TypeStuff_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeStuff_13, 0) = ((MR_Box) (Type_20));
      MR_hl_field(0, TypeStuff_13, 1) = ((MR_Box) (TVarSet_17));
      MR_hl_field(0, TypeStuff_13, 2) = ((MR_Box) (TypeBindings_16));
      MR_hl_field(0, TypeStuff_13, 3) = ((MR_Box) (ExistQTVars_15));
    }
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, HeadVar__1_1, 1))));
    Result_11 = func_0(((MR_Box) (HeadVar__1_1)), ((MR_Box) (TypeStuff_13)));
    check_hlds__typecheck_error_type_assign__get_all_transformed_type_stuffs_4_p_0(TypeInfo_for_T_14, HeadVar__1_1, TypeAssigns_9, HeadVar__3_3, &Results_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = Result_11;
      MR_hl_field(1, base, 1) = ((MR_Box) (Results_12));
    }
  }
}

void MR_CALL 
check_hlds__typecheck_error_type_assign__get_all_type_stuffs_remove_dups_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TypeAssign_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word TypeAssigns_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word TailTypeStuffs_9;
    MR_Word TypeStuff_10;
    MR_Word ExistQTVars_12;
    MR_Word TypeBindings_13;
    MR_Word TVarSet_14;
    MR_Word VarTypes_15;
    MR_Word Type_17;
    MR_Word Type0_16;

    check_hlds__typecheck_error_type_assign__get_all_type_stuffs_remove_dups_3_p_0(TypeAssigns_6, HeadVar__2_2, &TailTypeStuffs_9);
    check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(TypeAssign_5, &ExistQTVars_12);
    check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_5, &TypeBindings_13);
    check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign_5, &TVarSet_14);
    check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign_5, &VarTypes_15);
    succeeded = parse_tree__vartypes__search_var_type_3_p_0(VarTypes_15, HeadVar__2_2, &Type0_16);
    if (succeeded)
      Type_17 = Type0_16;
    else
      Type_17 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_type_assign_scalar_common_2[1]));
    {
      TypeStuff_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeStuff_10, 0) = ((MR_Box) (Type_17));
      MR_hl_field(0, TypeStuff_10, 1) = ((MR_Box) (TVarSet_14));
      MR_hl_field(0, TypeStuff_10, 2) = ((MR_Box) (TypeBindings_13));
      MR_hl_field(0, TypeStuff_10, 3) = ((MR_Box) (ExistQTVars_12));
    }
    succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_type_stuff_0), ((MR_Box) (TypeStuff_10)), TailTypeStuffs_9);
    if (succeeded)
      *HeadVar__3_3 = TailTypeStuffs_9;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (TypeStuff_10));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailTypeStuffs_9));
      }
  }
}

void MR_CALL 
check_hlds__typecheck_error_type_assign__arg_type_assign_set_msg_to_verbose_component_4_p_0(
  MR_Word Info_5,
  MR_Word VarSet_6,
  MR_Word ArgTypeAssignSet_7,
  MR_Word * VerboseComponent_8)
{
  MR_bool succeeded;
  MR_Word VerboseErrors_9;
  MR_Word VerbosePieces_10;

  check_hlds__typecheck_info__typecheck_info_get_verbose_errors_2_p_0(Info_5, &VerboseErrors_9);
  switch (VerboseErrors_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      VerbosePieces_10 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleInfo_11;
        MR_String FirstWords_14;
        MR_Word MaybeSeq_15;
        MR_Word SortedArgTypeAssignSet_16;
        MR_Word LaterPieces_17;
        MR_Word Var_20;
        MR_Word Var_21;
        MR_Word Var_22;
        MR_Word Var_18;

        check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(Info_5, &ModuleInfo_11);
        succeeded = (ArgTypeAssignSet_7 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_18 = ((MR_Word) ((MR_hl_field(1, ArgTypeAssignSet_7, 1))));
          succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          FirstWords_14 = (MR_String) "The partial type assignment was:";
          MaybeSeq_15 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          FirstWords_14 = (MR_String) "The possible partial type assignments were:";
          MaybeSeq_15 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_type_assign_scalar_common_3[0]));
        }
        mercury__list__sort_2_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0), ArgTypeAssignSet_7, &SortedArgTypeAssignSet_16);
        LaterPieces_17 = check_hlds__typecheck_error_type_assign__args_type_assign_set_to_pieces_4_f_0(ModuleInfo_11, VarSet_6, SortedArgTypeAssignSet_16, MaybeSeq_15);
        {
          Var_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_21, 1) = ((MR_Box) (FirstWords_14));
        }
        {
          Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_22, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_type_assign_scalar_common_1[5])));
          MR_hl_field(1, Var_22, 1) = ((MR_Box) (LaterPieces_17));
        }
        {
          Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_20, 0) = ((MR_Box) (Var_21));
          MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_22));
        }
        VerbosePieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_20, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_type_assign_scalar_common_1[7])));
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *VerboseComponent_8 = base;
    MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(2, base, 1) = ((MR_Box) (VerbosePieces_10));
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_type_assign__args_type_assign_set_to_pieces_4_f_0(
  MR_Word ModuleInfo_1,
  MR_Word VarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word MaybeSeq_4)
{
  MR_Word HeadVar__5_5;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ArgTypeAssign_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word ArgTypeAssigns_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word TypeAssign_15 = ((MR_Word) ((MR_hl_field(0, ArgTypeAssign_11, 0))));
    MR_Word Source_18 = ((MR_Word) ((MR_hl_field(0, ArgTypeAssign_11, 3))));
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    {
      Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_20, 0) = ((MR_Box) (Source_18));
    }
    Var_19 = check_hlds__typecheck_error_type_assign__type_assign_to_pieces_5_f_0(ModuleInfo_1, VarSet_2, TypeAssign_15, Var_20, MaybeSeq_4);
    if ((MaybeSeq_4 == (MR_Word) ((MR_Unsigned) 0U)))
      Var_22 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer N_24 = ((MR_Integer) ((MR_hl_field(1, MaybeSeq_4, 0))));
      MR_Integer Var_25 = (MR_Integer) ((MR_Unsigned) N_24 + (MR_Unsigned) 1);

      {
        Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_25));
      }
    }
    Var_21 = check_hlds__typecheck_error_type_assign__args_type_assign_set_to_pieces_4_f_0(ModuleInfo_1, VarSet_2, ArgTypeAssigns_12, Var_22);
    HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_19, Var_21);
  }
  return HeadVar__5_5;
}

void MR_CALL 
check_hlds__typecheck_error_type_assign__type_assign_set_msg_to_verbose_component_4_p_0(
  MR_Word Info_5,
  MR_Word VarSet_6,
  MR_Word TypeAssignSet_7,
  MR_Word * VerboseComponent_8)
{
  MR_bool succeeded;
  MR_Word VerboseErrors_9;
  MR_Word VerbosePieces_10;

  check_hlds__typecheck_info__typecheck_info_get_verbose_errors_2_p_0(Info_5, &VerboseErrors_9);
  switch (VerboseErrors_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      VerbosePieces_10 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleInfo_11;
        MR_String FirstWords_14;
        MR_Word MaybeSeq_15;
        MR_Word SortedTypeAssignSet_16;
        MR_Word LaterPieces_17;
        MR_Word Var_20;
        MR_Word Var_21;
        MR_Word Var_22;
        MR_Word Var_18;

        check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(Info_5, &ModuleInfo_11);
        succeeded = (TypeAssignSet_7 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_18 = ((MR_Word) ((MR_hl_field(1, TypeAssignSet_7, 1))));
          succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          FirstWords_14 = (MR_String) "The partial type assignment was:";
          MaybeSeq_15 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          FirstWords_14 = (MR_String) "The possible partial type assignments were:";
          MaybeSeq_15 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_type_assign_scalar_common_3[0]));
        }
        mercury__list__sort_2_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), TypeAssignSet_7, &SortedTypeAssignSet_16);
        LaterPieces_17 = check_hlds__typecheck_error_type_assign__type_assign_set_to_pieces_4_f_0(ModuleInfo_11, VarSet_6, SortedTypeAssignSet_16, MaybeSeq_15);
        {
          Var_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_21, 1) = ((MR_Box) (FirstWords_14));
        }
        {
          Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_22, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_type_assign_scalar_common_1[5])));
          MR_hl_field(1, Var_22, 1) = ((MR_Box) (LaterPieces_17));
        }
        {
          Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_20, 0) = ((MR_Box) (Var_21));
          MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_22));
        }
        VerbosePieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_20, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_type_assign_scalar_common_1[7])));
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *VerboseComponent_8 = base;
    MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(2, base, 1) = ((MR_Box) (VerbosePieces_10));
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_type_assign__type_assign_set_to_pieces_4_f_0(
  MR_Word ModuleInfo_1,
  MR_Word VarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word MaybeSeq_4)
{
  MR_Word HeadVar__5_5;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TypeAssign_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word TypeAssigns_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Var_14;
    MR_Word Var_16;
    MR_Word Var_17;

    Var_14 = check_hlds__typecheck_error_type_assign__type_assign_to_pieces_5_f_0(ModuleInfo_1, VarSet_2, TypeAssign_11, (MR_Word) ((MR_Unsigned) 0U), MaybeSeq_4);
    if ((MaybeSeq_4 == (MR_Word) ((MR_Unsigned) 0U)))
      Var_17 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer N_19 = ((MR_Integer) ((MR_hl_field(1, MaybeSeq_4, 0))));
      MR_Integer Var_20 = (MR_Integer) ((MR_Unsigned) N_19 + (MR_Unsigned) 1);

      {
        Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_20));
      }
    }
    Var_16 = check_hlds__typecheck_error_type_assign__type_assign_set_to_pieces_4_f_0(ModuleInfo_1, VarSet_2, TypeAssigns_12, Var_17);
    HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_14, Var_16);
  }
  return HeadVar__5_5;
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_type_assign__type_assign_to_pieces_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Word VarSet_8,
  MR_Word TypeAssign_9,
  MR_Word MaybeSource_10,
  MR_Word MaybeSeq_11)
{
  MR_bool succeeded;
  MR_Word Pieces_12;
  MR_Word SeqPieces_20;
  MR_Word ExistQTVars_21;
  MR_Word VarTypes_22;
  MR_Word Constraints_23;
  MR_Word TypeBindings_24;
  MR_Word TypeVarSet_25;
  MR_Word Vars_26;
  MR_Word HeadPieces_27;
  MR_Word TypePieces_31;
  MR_Word ConstraintPieces_32;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Integer MaxVarNameLen0_67;
  MR_Word RevNameTypePairs_68;
  MR_Word Pieces1_81;
  MR_Word Pieces2_82;
  MR_Word ConstraintsToProve_83;
  MR_Word AssumedConstraints_84;
  MR_Word PiecesList1_87;
  MR_Word PiecesList2_88;
  MR_Word LinePieces1_89;
  MR_Word LinePieces2_90;

  if ((MaybeSeq_11 == (MR_Word) ((MR_Unsigned) 0U)))
    SeqPieces_20 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Integer N_13 = ((MR_Integer) ((MR_hl_field(1, MaybeSeq_11, 0))));
    MR_Word SourcePieces_18;
    MR_Word SeqPieces0_19;
    MR_Word Var_38;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_44;
    MR_Word SourcePieces0_15;
    MR_Word Source_14;

    succeeded = (MaybeSource_10 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Source_14 = ((MR_Word) ((MR_hl_field(1, MaybeSource_10, 0))));
      SourcePieces0_15 = check_hlds__typecheck_error_util__describe_args_type_assign_source_2_f_0(ModuleInfo_7, Source_14);
      succeeded = (SourcePieces0_15 != (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Word Var_35;

      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_type_assign_scalar_common_1[9])));
        MR_hl_field(1, Var_35, 1) = ((MR_Box) (SourcePieces0_15));
      }
      {
        SourcePieces_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SourcePieces_18, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_type_assign_scalar_common_1[8])));
        MR_hl_field(1, SourcePieces_18, 1) = ((MR_Box) (Var_35));
      }
    }
    else
      SourcePieces_18 = (MR_Word) ((MR_Unsigned) 0U);
    {
      Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_42, 1) = ((MR_Box) (N_13));
    }
    {
      Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_type_assign_scalar_common_1[10])));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_41));
    }
    Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SourcePieces_18, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_type_assign_scalar_common_1[13])));
    SeqPieces0_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_38, Var_44);
    succeeded = (N_13 > (MR_Integer) 1);
    if (succeeded)
      {
        SeqPieces_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SeqPieces_20, 0) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(1, SeqPieces_20, 1) = ((MR_Box) (SeqPieces0_19));
      }
    else
      SeqPieces_20 = SeqPieces0_19;
  }
  check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(TypeAssign_9, &ExistQTVars_21);
  check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign_9, &VarTypes_22);
  check_hlds__type_assign__type_assign_get_typeclass_constraints_2_p_0(TypeAssign_9, &Constraints_23);
  check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_9, &TypeBindings_24);
  check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign_9, &TypeVarSet_25);
  parse_tree__vartypes__vartypes_vars_2_p_0(VarTypes_22, &Vars_26);
  if ((ExistQTVars_21 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadPieces_27 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String VarsStr_30;
    MR_Word Var_54;
    MR_String Var_55;
    MR_String Var_57;

    VarsStr_30 = parse_tree__parse_tree_out_term__mercury_vars_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_25, (MR_Integer) 1, ExistQTVars_21);
    Var_57 = mercury__string__f_43_43_2_f_0(VarsStr_30, (MR_String) "]");
    Var_55 = mercury__string__f_43_43_2_f_0((MR_String) "some [", Var_57);
    {
      Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_54, 1) = ((MR_Box) (Var_55));
    }
    {
      HeadPieces_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadPieces_27, 0) = ((MR_Box) (Var_54));
      MR_hl_field(1, HeadPieces_27, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_type_assign_scalar_common_1[11])));
    }
  }
  check_hlds__typecheck_error_type_assign__acc_type_assign_type_pieces_9_p_0(VarSet_8, VarTypes_22, TypeVarSet_25, TypeBindings_24, Vars_26, (MR_Integer) -1, &MaxVarNameLen0_67, (MR_Word) ((MR_Unsigned) 0U), &RevNameTypePairs_68);
  if ((RevNameTypePairs_68 == (MR_Word) ((MR_Unsigned) 0U)))
    TypePieces_31 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_type_assign_scalar_common_1[15]));
  else
  {
    MR_Integer MaxVarNameLen_71;
    MR_Integer LeftLen_72;

    mercury__int__min_3_p_0((MR_Integer) 15, MaxVarNameLen0_67, &MaxVarNameLen_71);
    LeftLen_72 = (MR_Integer) ((MR_Unsigned) MaxVarNameLen_71 + (MR_Unsigned) 1);
    check_hlds__typecheck_error_type_assign__align_and_unreverse_type_assign_pieces_4_p_0(LeftLen_72, RevNameTypePairs_68, (MR_Word) ((MR_Unsigned) 0U), &TypePieces_31);
  }
  ConstraintsToProve_83 = ((MR_Word) ((MR_hl_field(0, Constraints_23, 0))));
  AssumedConstraints_84 = ((MR_Word) ((MR_hl_field(0, Constraints_23, 1))));
  PiecesList1_87 = check_hlds__typecheck_error_type_assign__type_assign_constraints_to_pieces_list_5_f_0((MR_String) "&", AssumedConstraints_84, TypeBindings_24, TypeVarSet_25, (MR_Integer) 0);
  PiecesList2_88 = check_hlds__typecheck_error_type_assign__type_assign_constraints_to_pieces_list_5_f_0((MR_String) "<=", ConstraintsToProve_83, TypeBindings_24, TypeVarSet_25, (MR_Integer) 0);
  LinePieces1_89 = parse_tree__error_spec__pieces_list_to_line_pieces_1_f_0(PiecesList1_87);
  LinePieces2_90 = parse_tree__error_spec__pieces_list_to_line_pieces_1_f_0(PiecesList2_88);
  Pieces1_81 = parse_tree__error_spec__add_suffix_if_nonempty_2_f_0(LinePieces1_89, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_type_assign_scalar_common_1[11])));
  Pieces2_82 = parse_tree__error_spec__add_suffix_if_nonempty_2_f_0(LinePieces2_90, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_type_assign_scalar_common_1[11])));
  ConstraintPieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces1_81, Pieces2_82);
  Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TypePieces_31, ConstraintPieces_32);
  Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadPieces_27, Var_63);
  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SeqPieces_20, Var_62);
  return Pieces_12;
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_type_assign__type_assign_constraints_to_pieces_list_5_f_0(
  MR_String Operator_1,
  MR_Word HeadVar__2_2,
  MR_Word TypeBindings_3,
  MR_Word TypeVarSet_4,
  MR_Word FoundOne_5)
{
  MR_Word HeadVar__6_6;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Constraint_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Constraints_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word ThisPieces_17;
    MR_Word TailPieceLists_18;
    MR_String Prefix_19;
    MR_Word BoundConstraint_20;
    MR_Word ProgConstraint_21;
    MR_Word Var_22;
    MR_Word Var_25;
    MR_String Var_26;
    MR_String Var_27;

    switch (FoundOne_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Prefix_19 = mercury__string__f_43_43_2_f_0(Operator_1, (MR_String) " ");
        break;
      case (MR_Integer) 1:
        Prefix_19 = (MR_String) "   ";
        break;
    }
    check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(TypeBindings_3, Constraint_12, &BoundConstraint_20);
    hlds__hlds_class__retrieve_prog_constraint_2_p_0(BoundConstraint_20, &ProgConstraint_21);
    Var_27 = parse_tree__parse_tree_out_type__mercury_constraint_to_string_3_f_0(TypeVarSet_4, (MR_Integer) 0, ProgConstraint_21);
    Var_26 = mercury__string__f_43_43_2_f_0(Prefix_19, Var_27);
    {
      Var_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_25, 0) = ((MR_Box) (Var_26));
    }
    {
      ThisPieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ThisPieces_17, 0) = ((MR_Box) (Var_25));
      MR_hl_field(1, ThisPieces_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_22, 0) = ((MR_Box) (ThisPieces_17));
      MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    TailPieceLists_18 = check_hlds__typecheck_error_type_assign__type_assign_constraints_to_pieces_list_5_f_0(Operator_1, Constraints_13, TypeBindings_3, TypeVarSet_4, (MR_Integer) 1);
    HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck_error_type_assign_scalar_common_1[0]), Var_22, TailPieceLists_18);
  }
  return HeadVar__6_6;
}

static void MR_CALL 
check_hlds__typecheck_error_type_assign__acc_type_assign_type_pieces_9_p_0(
  MR_Word VarSet_1,
  MR_Word VarTypes_2,
  MR_Word TypeVarSet_3,
  MR_Word TypeBindings_4,
  MR_Word HeadVar__5_5,
  MR_Integer STATE_VARIABLE_MaxVarNameLen_0_6,
  MR_Integer * STATE_VARIABLE_MaxVarNameLen_7,
  MR_Word HeadVar__8_8,
  MR_Word * HeadVar__9_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__9_9 = HeadVar__8_8;
      *STATE_VARIABLE_MaxVarNameLen_7 = STATE_VARIABLE_MaxVarNameLen_0_6;
    }
    else
    {
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word Vars_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Integer STATE_VARIABLE_MaxVarNameLen_1_38;
      MR_Word STATE_VARIABLE_RevNameTypePairs_1_40;
      MR_Word Type_28;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Integer next_value_of_STATE_VARIABLE_MaxVarNameLen_0_6;
      MR_Word next_value_of_HeadVar__8_8;

      succeeded = parse_tree__vartypes__search_var_type_3_p_0(VarTypes_2, Var_24, &Type_28);
      if (succeeded)
      {
        MR_String VarNameStr_29;
        MR_Integer VarNameLen_30;
        MR_String TypeStr_31;
        MR_Tuple NameTypePair_32;
        MR_Word Var_39;
        MR_Word Type1_42;
        MR_Word Type_43;

        VarNameStr_29 = parse_tree__parse_tree_out_term__mercury_var_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_1, (MR_Integer) 1, Var_24);
        mercury__string__count_code_points_2_p_0(VarNameStr_29, &VarNameLen_30);
        succeeded = (VarNameLen_30 > STATE_VARIABLE_MaxVarNameLen_0_6);
        if (succeeded)
          STATE_VARIABLE_MaxVarNameLen_1_38 = VarNameLen_30;
        else
          STATE_VARIABLE_MaxVarNameLen_1_38 = STATE_VARIABLE_MaxVarNameLen_0_6;
        parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_4, Type_28, &Type1_42);
        parse_tree__prog_type__strip_module_names_from_type_4_p_0((MR_Integer) 0, (MR_Integer) 1, Type1_42, &Type_43);
        TypeStr_31 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TypeVarSet_3, (MR_Integer) 0, Type_43);
        {
          Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_39, 1) = ((MR_Box) (TypeStr_31));
        }
        {
          NameTypePair_32 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, NameTypePair_32, 0) = ((MR_Box) (VarNameStr_29));
          MR_hl_field(0, NameTypePair_32, 1) = ((MR_Box) (Var_39));
        }
        {
          STATE_VARIABLE_RevNameTypePairs_1_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevNameTypePairs_1_40, 0) = ((MR_Box) (NameTypePair_32));
          MR_hl_field(1, STATE_VARIABLE_RevNameTypePairs_1_40, 1) = ((MR_Box) (HeadVar__8_8));
        }
      }
      else
      {
        STATE_VARIABLE_RevNameTypePairs_1_40 = HeadVar__8_8;
        STATE_VARIABLE_MaxVarNameLen_1_38 = STATE_VARIABLE_MaxVarNameLen_0_6;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = Vars_25;
      next_value_of_STATE_VARIABLE_MaxVarNameLen_0_6 = STATE_VARIABLE_MaxVarNameLen_1_38;
      next_value_of_HeadVar__8_8 = STATE_VARIABLE_RevNameTypePairs_1_40;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_MaxVarNameLen_0_6 = next_value_of_STATE_VARIABLE_MaxVarNameLen_0_6;
      HeadVar__8_8 = next_value_of_HeadVar__8_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_error_type_assign__align_and_unreverse_type_assign_pieces_4_p_0(
  MR_Integer LeftLen_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Pieces_0_3,
  MR_Word * STATE_VARIABLE_Pieces_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Pieces_4 = STATE_VARIABLE_Pieces_0_3;
    else
    {
      MR_Tuple Pair_10 = ((MR_Tuple) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Pairs_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_String VarName_13 = ((MR_String) ((MR_hl_field(0, Pair_10, 0))));
      MR_Word TypePiece_14 = ((MR_Word) ((MR_hl_field(0, Pair_10, 1))));
      MR_String LeftStr_15;
      MR_Word PairPieces_16;
      MR_String Var_19;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word STATE_VARIABLE_Pieces_1_27;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Pieces_0_3;

      Var_19 = mercury__string__f_43_43_2_f_0(VarName_13, (MR_String) ":");
      mercury__string__pad_right_4_p_0(Var_19, (MR_Char) 32, LeftLen_1, &LeftStr_15);
      {
        Var_22 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_22, 0) = ((MR_Box) (LeftStr_15));
      }
      {
        Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_23, 0) = ((MR_Box) (TypePiece_14));
        MR_hl_field(1, Var_23, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_type_assign_scalar_common_1[11])));
      }
      {
        PairPieces_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, PairPieces_16, 0) = ((MR_Box) (Var_22));
        MR_hl_field(1, PairPieces_16, 1) = ((MR_Box) (Var_23));
      }
      STATE_VARIABLE_Pieces_1_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PairPieces_16, STATE_VARIABLE_Pieces_0_3);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Pairs_11;
      next_value_of_STATE_VARIABLE_Pieces_0_3 = STATE_VARIABLE_Pieces_1_27;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Pieces_0_3 = next_value_of_STATE_VARIABLE_Pieces_0_3;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_type_assign____Unify____actual_expected_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_error_type_assign____Unify____actual_expected_types_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_error_type_assign____Compare____actual_expected_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_error_type_assign____Compare____actual_expected_types_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_type_assign____Unify____arg_type_stuff_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_error_type_assign____Unify____arg_type_stuff_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_error_type_assign____Compare____arg_type_stuff_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_error_type_assign____Compare____arg_type_stuff_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_type_assign____Unify____type_stuff_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_error_type_assign____Unify____type_stuff_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_error_type_assign____Compare____type_stuff_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_error_type_assign____Compare____type_stuff_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__typecheck_error_type_assign__init(void)
{
}

void mercury__check_hlds__typecheck_error_type_assign__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0);
  MR_register_type_ctor_info(&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_arg_type_stuff_0);
  MR_register_type_ctor_info(&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_type_stuff_0);
}

void mercury__check_hlds__typecheck_error_type_assign__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__typecheck_error_type_assign__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.typecheck_error_type_assign.
