/*
** Automatically generated from `term_osi_util.m'
** by the Mercury compiler,
** version rotd-2026-09-06
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


// :- module termination.term_osi.term_osi_util.
// :- implementation.

/*
INIT mercury__termination__term_osi__term_osi_util__init
ENDINIT
*/

#include "termination.term_osi.term_osi_util.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
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
#include "integer.mih"
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
#include "term.mih"
#include "term_context.mih"
#include "termination.mih"
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
#include "hlds.hlds_proc.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.inst_test.mih"
#include "hlds.instmap.mih"
#include "hlds.mode_test.mih"
#include "hlds.pred_info_types.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_proc_id.mih"
#include "hlds.pred_table.mih"
#include "hlds.proc_info_types.mih"
#include "hlds.proc_table_struct.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "termination.term_constr.mih"
#include "termination.term_norm.mih"
#include "termination.term_osi.mih"
#include "parse_tree.module_qual.mq_info.mih"
#include "termination.term_constr.term_constr_errors.mih"
#include "termination.term_constr.term_constr_main_types.mih"
#include "termination.term_osi.term_osi_errors.mih"




static const MR_FA_TypeInfo_Struct1 termination__term_osi__term_osi_util__list__ti_list_1termination__term_osi__term_osi_errors__type_ctor_info_term_error_0;

static const MR_FA_TypeInfo_Struct1 termination__term_osi__term_osi_util__parse_tree__prog_data_pragma__ti_generic_arg_size_info_1list__ti_list_1termination__term_osi__term_osi_errors__type_ctor_info_term_error_0;

static const MR_PseudoTypeInfo termination__term_osi__term_osi_util__termination__term_osi__term_osi_util__field_types_pass_info_0_0[3];

static const MR_DuFunctorDesc termination__term_osi__term_osi_util__termination__term_osi__term_osi_util__du_functor_desc_pass_info_0_0;

static const MR_DuFunctorDescPtr termination__term_osi__term_osi_util__termination__term_osi__term_osi_util__du_stag_ordered_pass_info_0_0[1];

static const MR_DuPtagLayout termination__term_osi__term_osi_util__termination__term_osi__term_osi_util__du_ptag_ordered_pass_info_0[1];

static const MR_DuFunctorDescPtr termination__term_osi__term_osi_util__termination__term_osi__term_osi_util__du_name_ordered_pass_info_0[1];

static const MR_Integer termination__term_osi__term_osi_util__termination__term_osi__term_osi_util__functor_number_map_pass_info_0[1];

static const MR_FA_TypeInfo_Struct2 termination__term_osi__term_osi_util__parse_tree__prog_data_pragma__ti_generic_termination_info_2unit__type_ctor_info_unit_0list__ti_list_1termination__term_osi__term_osi_errors__type_ctor_info_term_error_0;

static const MR_FA_TypeInfo_Struct1 termination__term_osi__term_osi_util__list__ti_list_1bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct2 termination__term_osi__term_osi_util__tree234__ti_tree234_2hlds__pred_proc_id__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0;

static void MR_CALL 
termination__term_osi__term_osi_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Bools_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
termination__term_osi__term_osi_util__partition_call_args_2_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static MR_bool MR_CALL 
termination__term_osi__term_osi_util____Unify____arg_size_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
termination__term_osi__term_osi_util____Compare____arg_size_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
termination__term_osi__term_osi_util____Unify____pass_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
termination__term_osi__term_osi_util____Compare____pass_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
termination__term_osi__term_osi_util____Unify____termination_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
termination__term_osi__term_osi_util____Compare____termination_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
termination__term_osi__term_osi_util____Unify____used_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
termination__term_osi__term_osi_util____Compare____used_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box termination__term_osi__term_osi_util_scalar_common_1[4][2];

static /* final */ const MR_Box termination__term_osi__term_osi_util_scalar_common_2[2][3];

static /* final */ const MR_Box termination__term_osi__term_osi_util_scalar_common_3[2][1];




static /* final */ const MR_Box termination__term_osi__term_osi_util_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&termination__term_osi__term_osi_errors__termination__term_osi__term_osi_errors__type_ctor_info_term_error_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_generic_arg_size_info_1)),
    ((MR_Box) (&termination__term_osi__term_osi_util_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box termination__term_osi__term_osi_util_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_generic_termination_info_2)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&termination__term_osi__term_osi_util_scalar_common_1[1]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&termination__term_osi__term_osi_util_scalar_common_1[3]))
  },
};

static /* final */ const MR_Box termination__term_osi__term_osi_util_scalar_common_3[2][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   1 */
  { ((MR_Box) (&termination__term_osi__term_osi_util_scalar_common_3[0])) },
};



#include "array.mh"


static const MR_FA_TypeInfo_Struct1 termination__term_osi__term_osi_util__list__ti_list_1termination__term_osi__term_osi_errors__type_ctor_info_term_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&termination__term_osi__term_osi_errors__termination__term_osi__term_osi_errors__type_ctor_info_term_error_0) }
};

static const MR_FA_TypeInfo_Struct1 termination__term_osi__term_osi_util__parse_tree__prog_data_pragma__ti_generic_arg_size_info_1list__ti_list_1termination__term_osi__term_osi_errors__type_ctor_info_term_error_0 = {
  &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_generic_arg_size_info_1,
  { (MR_TypeInfo) (&termination__term_osi__term_osi_util__list__ti_list_1termination__term_osi__term_osi_errors__type_ctor_info_term_error_0) }
};

const MR_TypeCtorInfo_Struct termination__term_osi__term_osi_util__termination__term_osi__term_osi_util__type_ctor_info_arg_size_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (termination__term_osi__term_osi_util____Unify____arg_size_info_0_0_10001)),
  ((MR_Box) (termination__term_osi__term_osi_util____Compare____arg_size_info_0_0_10001)),
  (MR_String) "termination.term_osi.term_osi_util",
  (MR_String) "arg_size_info",
  { NULL },
  { (MR_PseudoTypeInfo) (&termination__term_osi__term_osi_util__parse_tree__prog_data_pragma__ti_generic_arg_size_info_1list__ti_list_1termination__term_osi__term_osi_errors__type_ctor_info_term_error_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo termination__term_osi__term_osi_util__termination__term_osi__term_osi_util__field_types_pass_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&termination__term_norm__termination__term_norm__type_ctor_info_functor_info_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc termination__term_osi__term_osi_util__termination__term_osi__term_osi_util__du_functor_desc_pass_info_0_0 = {
  (MR_String) "pass_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  termination__term_osi__term_osi_util__termination__term_osi__term_osi_util__field_types_pass_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr termination__term_osi__term_osi_util__termination__term_osi__term_osi_util__du_stag_ordered_pass_info_0_0[1] = { &termination__term_osi__term_osi_util__termination__term_osi__term_osi_util__du_functor_desc_pass_info_0_0 };

static const MR_DuPtagLayout termination__term_osi__term_osi_util__termination__term_osi__term_osi_util__du_ptag_ordered_pass_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    termination__term_osi__term_osi_util__termination__term_osi__term_osi_util__du_stag_ordered_pass_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr termination__term_osi__term_osi_util__termination__term_osi__term_osi_util__du_name_ordered_pass_info_0[1] = { &termination__term_osi__term_osi_util__termination__term_osi__term_osi_util__du_functor_desc_pass_info_0_0 };

static const MR_Integer termination__term_osi__term_osi_util__termination__term_osi__term_osi_util__functor_number_map_pass_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct termination__term_osi__term_osi_util__termination__term_osi__term_osi_util__type_ctor_info_pass_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (termination__term_osi__term_osi_util____Unify____pass_info_0_0_10001)),
  ((MR_Box) (termination__term_osi__term_osi_util____Compare____pass_info_0_0_10001)),
  (MR_String) "termination.term_osi.term_osi_util",
  (MR_String) "pass_info",
  { termination__term_osi__term_osi_util__termination__term_osi__term_osi_util__du_name_ordered_pass_info_0 },
  { termination__term_osi__term_osi_util__termination__term_osi__term_osi_util__du_ptag_ordered_pass_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  termination__term_osi__term_osi_util__termination__term_osi__term_osi_util__functor_number_map_pass_info_0,

};

static const MR_FA_TypeInfo_Struct2 termination__term_osi__term_osi_util__parse_tree__prog_data_pragma__ti_generic_termination_info_2unit__type_ctor_info_unit_0list__ti_list_1termination__term_osi__term_osi_errors__type_ctor_info_term_error_0 = {
  &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_generic_termination_info_2,
  {
    (MR_TypeInfo) (&mercury__unit__unit__type_ctor_info_unit_0),
    (MR_TypeInfo) (&termination__term_osi__term_osi_util__list__ti_list_1termination__term_osi__term_osi_errors__type_ctor_info_term_error_0)
  }
};

const MR_TypeCtorInfo_Struct termination__term_osi__term_osi_util__termination__term_osi__term_osi_util__type_ctor_info_termination_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (termination__term_osi__term_osi_util____Unify____termination_info_0_0_10001)),
  ((MR_Box) (termination__term_osi__term_osi_util____Compare____termination_info_0_0_10001)),
  (MR_String) "termination.term_osi.term_osi_util",
  (MR_String) "termination_info",
  { NULL },
  { (MR_PseudoTypeInfo) (&termination__term_osi__term_osi_util__parse_tree__prog_data_pragma__ti_generic_termination_info_2unit__type_ctor_info_unit_0list__ti_list_1termination__term_osi__term_osi_errors__type_ctor_info_term_error_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 termination__term_osi__term_osi_util__list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0) }
};

static const MR_FA_TypeInfo_Struct2 termination__term_osi__term_osi_util__tree234__ti_tree234_2hlds__pred_proc_id__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&termination__term_osi__term_osi_util__list__ti_list_1bool__type_ctor_info_bool_0)
  }
};

const MR_TypeCtorInfo_Struct termination__term_osi__term_osi_util__termination__term_osi__term_osi_util__type_ctor_info_used_args_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (termination__term_osi__term_osi_util____Unify____used_args_0_0_10001)),
  ((MR_Box) (termination__term_osi__term_osi_util____Compare____used_args_0_0_10001)),
  (MR_String) "termination.term_osi.term_osi_util",
  (MR_String) "used_args",
  { NULL },
  { (MR_PseudoTypeInfo) (&termination__term_osi__term_osi_util__tree234__ti_tree234_2hlds__pred_proc_id__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
termination__term_osi__term_osi_util____Compare____used_args_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&termination__term_osi__term_osi_util_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
termination__term_osi__term_osi_util____Unify____used_args_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&termination__term_osi__term_osi_util_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
termination__term_osi__term_osi_util____Compare____termination_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&termination__term_osi__term_osi_util_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
termination__term_osi__term_osi_util____Unify____termination_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&termination__term_osi__term_osi_util_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
termination__term_osi__term_osi_util____Compare____pass_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    termination__term_norm____Compare____functor_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

MR_bool MR_CALL 
termination__term_osi__term_osi_util____Unify____pass_info_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = termination__term_norm____Unify____functor_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
termination__term_osi__term_osi_util____Compare____arg_size_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&termination__term_osi__term_osi_util_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
termination__term_osi__term_osi_util____Unify____arg_size_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&termination__term_osi__term_osi_util_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
termination__term_osi__term_osi_util__add_context_to_arg_size_info_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Context_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    if (((MR_tag((MR_Word) Var_18)) == (MR_Integer) 0))
      *HeadVar__3_3 = (MR_Word) (HeadVar__1_1);
    else
    {
      MR_Word Var_13;
      MR_Word Var_14;
      MR_Word Var_15;

      {
        Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_15, 0) = ((MR_Box) (Context_2));
        MR_hl_field(0, Var_15, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      }
      {
        Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_14, 0) = ((MR_Box) (Var_15));
        MR_hl_field(1, Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_13, 0) = ((MR_Box) (Var_14));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_13));
      }
    }
  }
}

void MR_CALL 
termination__term_osi__term_osi_util__add_context_to_termination_info_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Context_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    if (((MR_tag((MR_Word) Var_18)) == (MR_Integer) 1))
    {
      MR_Word Var_13;
      MR_Word Var_14;
      MR_Word Var_15;

      {
        Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_15, 0) = ((MR_Box) (Context_2));
        MR_hl_field(0, Var_15, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      }
      {
        Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_14, 0) = ((MR_Box) (Var_15));
        MR_hl_field(1, Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_13, 0) = ((MR_Box) (Var_14));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_13));
      }
    }
    else
      *HeadVar__3_3 = (MR_Word) (MR_mkword(1, &termination__term_osi__term_osi_util_scalar_common_3[1]));
  }
}

void MR_CALL 
termination__term_osi__term_osi_util__set_pred_proc_ids_termination_info_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
    else
    {
      MR_Word PPId_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word PPIds_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word PredId_13 = ((MR_Word) ((MR_hl_field(0, PPId_9, 0))));
      MR_Integer ProcId_14 = ((MR_Integer) ((MR_hl_field(0, PPId_9, 1))));
      MR_Word PredInfo0_15;
      MR_Word ProcInfo0_16;
      MR_Word ProcInfo_17;
      MR_Word PredInfo_18;
      MR_Word Var_21;
      MR_Word STATE_VARIABLE_ModuleInfo_1_22;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3;

      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_3, PredId_13, &PredInfo0_15);
      hlds__hlds_pred__pred_info_proc_info_3_p_0(PredInfo0_15, ProcId_14, &ProcInfo0_16);
      {
        Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_21, 0) = ((MR_Box) (HeadVar__2_2));
      }
      hlds__hlds_proc__proc_info_set_maybe_termination_info_3_p_0(Var_21, ProcInfo0_16, &ProcInfo_17);
      hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_14, ProcInfo_17, PredInfo0_15, &PredInfo_18);
      hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_13, PredInfo_18, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_1_22);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PPIds_10;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_1_22;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_3 = next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
termination__term_osi__term_osi_util__set_pred_proc_ids_arg_size_info_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
    else
    {
      MR_Word PPId_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word PPIds_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word PredId_13 = ((MR_Word) ((MR_hl_field(0, PPId_9, 0))));
      MR_Integer ProcId_14 = ((MR_Integer) ((MR_hl_field(0, PPId_9, 1))));
      MR_Word PredInfo0_15;
      MR_Word ProcInfo0_16;
      MR_Word ProcInfo_17;
      MR_Word PredInfo_18;
      MR_Word Var_21;
      MR_Word STATE_VARIABLE_ModuleInfo_1_22;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3;

      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_3, PredId_13, &PredInfo0_15);
      hlds__hlds_pred__pred_info_proc_info_3_p_0(PredInfo0_15, ProcId_14, &ProcInfo0_16);
      {
        Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_21, 0) = ((MR_Box) (HeadVar__2_2));
      }
      hlds__hlds_proc__proc_info_set_maybe_arg_size_info_3_p_0(Var_21, ProcInfo0_16, &ProcInfo_17);
      hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_14, ProcInfo_17, PredInfo0_15, &PredInfo_18);
      hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_13, PredInfo_18, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_1_22);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PPIds_10;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_1_22;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_3 = next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
termination__term_osi__term_osi_util__pred_proc_id_terminates_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word PPId_4)
{
  MR_bool succeeded;
  MR_Word ProcInfo_6;
  MR_Word TerminationInfo_7;
  MR_Word Var_9;
  MR_Word Var_5;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_3, PPId_4, &Var_5, &ProcInfo_6);
  hlds__hlds_proc__proc_info_get_maybe_termination_info_2_p_0(ProcInfo_6, &TerminationInfo_7);
  succeeded = (TerminationInfo_7 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_9 = ((MR_Word) ((MR_hl_field(1, TerminationInfo_7, 0))));
    succeeded = ((MR_tag((MR_Word) Var_9)) == (MR_Integer) 0);
  }
  return succeeded;
}

MR_bool MR_CALL 
termination__term_osi__term_osi_util__is_termination_known_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word PPId_4)
{
  MR_bool succeeded;
  MR_Word ProcInfo_6;
  MR_Word Var_9;
  MR_Word Var_5;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_3, PPId_4, &Var_5, &ProcInfo_6);
  hlds__hlds_proc__proc_info_get_maybe_termination_info_2_p_0(ProcInfo_6, &Var_9);
  succeeded = (Var_9 != (MR_Word) ((MR_Unsigned) 0U));
  return succeeded;
}

void MR_CALL 
termination__term_osi__term_osi_util__lookup_proc_arg_size_info_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PPId_5,
  MR_Word * MaybeArgSize_6)
{
  MR_Word ProcInfo_8;
  MR_Word Var_7;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_4, PPId_5, &Var_7, &ProcInfo_8);
  hlds__hlds_proc__proc_info_get_maybe_arg_size_info_2_p_0(ProcInfo_8, MaybeArgSize_6);
}

void MR_CALL 
termination__term_osi__term_osi_util__lookup_proc_termination_info_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PPId_5,
  MR_Word * MaybeTermination_6)
{
  MR_Word ProcInfo_8;
  MR_Word Var_7;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_4, PPId_5, &Var_7, &ProcInfo_8);
  hlds__hlds_proc__proc_info_get_maybe_termination_info_2_p_0(ProcInfo_8, MaybeTermination_6);
}

MR_bool MR_CALL 
termination__term_osi__term_osi_util__some_var_is_higher_order_2_p_0(
  MR_Word VarTable_3,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Var_4;
    MR_Word Vars_5;
    MR_Word Type_6;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      Vars_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      parse_tree__var_table__lookup_var_type_3_p_0(VarTable_3, Var_4, &Type_6);
      succeeded = parse_tree__prog_type_test__type_is_higher_order_1_p_0(Type_6);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Vars_5;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
termination__term_osi__term_osi_util__make_bool_list_3_p_0(
  MR_Word TypeInfo_for__T_12,
  MR_Word HeadVars0_4,
  MR_Word Bools_5,
  MR_Word * Out_6)
{
  MR_bool succeeded;
  MR_Integer Arity_7;
  MR_Word HeadVars_9;
  MR_Word HeadVars1_8;

  mercury__list__length_2_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Bools_5, &Arity_7);
  succeeded = mercury__list__drop_3_p_0(TypeInfo_for__T_12, Arity_7, HeadVars0_4, &HeadVars1_8);
  if (succeeded)
    HeadVars_9 = HeadVars1_8;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140termination.term_osi.term_osi_util.make_bool_list\'/3", (MR_String) "unmatched variables");
      return;
    }
  termination__term_osi__term_osi_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(HeadVars_9, Bools_5, Out_6);
}

static void MR_CALL 
termination__term_osi__term_osi_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Bools_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = Bools_2;
  else
  {
    MR_Word Vars_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Out_8;

    termination__term_osi__term_osi_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(Vars_6, Bools_2, &Out_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(1, base, 1) = ((MR_Box) (Out_8));
    }
  }
}

void MR_CALL 
termination__term_osi__term_osi_util__split_unification_vars_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__bag__init_1_p_0((MR_Word) (&termination__term_osi__term_osi_util_scalar_common_1[0]), HeadVar__4_4);
      *HeadVar__5_5 = *HeadVar__4_4;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140termination.term_osi.term_osi_util.split_unification_vars\'/5", (MR_String) "unmatched variables");
        return;
      }
  else
  {
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140termination.term_osi.term_osi_util.split_unification_vars\'/5", (MR_String) "unmatched variables");
        return;
      }
    else
    {
      MR_Word ArgMode_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word ArgModes_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word InVars0_29;
      MR_Word OutVars0_30;
      MR_Word ArgInit_33;
      MR_Word ArgFinal_34;

      termination__term_osi__term_osi_util__split_unification_vars_5_p_0(ModuleInfo_1, Var_38, ArgModes_26, &InVars0_29, &OutVars0_30);
      ArgInit_33 = ((MR_Word) ((MR_hl_field(0, ArgMode_25, 2))));
      ArgFinal_34 = ((MR_Word) ((MR_hl_field(0, ArgMode_25, 3))));
      succeeded = hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_1, ArgInit_33);
      if (succeeded)
      {
        mercury__bag__insert_3_p_0((MR_Word) (&termination__term_osi__term_osi_util_scalar_common_1[0]), ((MR_Box) (Var_39)), InVars0_29, HeadVar__4_4);
        *HeadVar__5_5 = OutVars0_30;
      }
      else
      {
        succeeded = hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_1, ArgInit_33);
        if (succeeded)
          succeeded = hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_1, ArgFinal_34);
        if (succeeded)
        {
          *HeadVar__4_4 = InVars0_29;
          mercury__bag__insert_3_p_0((MR_Word) (&termination__term_osi__term_osi_util_scalar_common_1[0]), ((MR_Box) (Var_39)), OutVars0_30, HeadVar__5_5);
        }
        else
        {
          *HeadVar__4_4 = InVars0_29;
          *HeadVar__5_5 = OutVars0_30;
        }
      }
    }
  }
}

void MR_CALL 
termination__term_osi__term_osi_util__partition_call_args_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ArgModes_7,
  MR_Word Args_8,
  MR_Word * InVarsBag_9,
  MR_Word * OutVarsBag_10)
{
  MR_Word InVars_11;
  MR_Word OutVars_12;

  termination__term_osi__term_osi_util__partition_call_args_2_5_p_0(ModuleInfo_6, ArgModes_7, Args_8, &InVars_11, &OutVars_12);
  mercury__bag__from_list_2_p_0((MR_Word) (&termination__term_osi__term_osi_util_scalar_common_1[0]), InVars_11, InVarsBag_9);
  mercury__bag__from_list_2_p_0((MR_Word) (&termination__term_osi__term_osi_util_scalar_common_1[0]), OutVars_12, OutVarsBag_10);
}

static void MR_CALL 
termination__term_osi__term_osi_util__partition_call_args_2_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140termination.term_osi.term_osi_util.partition_call_args_2\'/5", (MR_String) "unmatched variables");
        return;
      }
  else
  {
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140termination.term_osi.term_osi_util.partition_call_args_2\'/5", (MR_String) "unmatched variables");
        return;
      }
    else
    {
      MR_Word Arg_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Args_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word InputArgs1_28;
      MR_Word OutputArgs1_29;

      termination__term_osi__term_osi_util__partition_call_args_2_5_p_0(ModuleInfo_1, Var_30, Args_25, &InputArgs1_28, &OutputArgs1_29);
      succeeded = hlds__mode_test__mode_is_input_2_p_0(ModuleInfo_1, Var_31);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Arg_24));
          MR_hl_field(1, base, 1) = ((MR_Box) (InputArgs1_28));
        }
        *HeadVar__5_5 = OutputArgs1_29;
      }
      else
      {
        succeeded = hlds__mode_test__mode_is_output_2_p_0(ModuleInfo_1, Var_31);
        if (succeeded)
        {
          *HeadVar__4_4 = InputArgs1_28;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__5_5 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Arg_24));
            MR_hl_field(1, base, 1) = ((MR_Box) (OutputArgs1_29));
          }
        }
        else
        {
          *HeadVar__4_4 = InputArgs1_28;
          *HeadVar__5_5 = OutputArgs1_29;
        }
      }
    }
  }
}

static MR_bool MR_CALL 
termination__term_osi__term_osi_util____Unify____arg_size_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = termination__term_osi__term_osi_util____Unify____arg_size_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
termination__term_osi__term_osi_util____Compare____arg_size_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  termination__term_osi__term_osi_util____Compare____arg_size_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
termination__term_osi__term_osi_util____Unify____pass_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = termination__term_osi__term_osi_util____Unify____pass_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
termination__term_osi__term_osi_util____Compare____pass_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  termination__term_osi__term_osi_util____Compare____pass_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
termination__term_osi__term_osi_util____Unify____termination_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = termination__term_osi__term_osi_util____Unify____termination_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
termination__term_osi__term_osi_util____Compare____termination_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  termination__term_osi__term_osi_util____Compare____termination_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
termination__term_osi__term_osi_util____Unify____used_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = termination__term_osi__term_osi_util____Unify____used_args_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
termination__term_osi__term_osi_util____Compare____used_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  termination__term_osi__term_osi_util____Compare____used_args_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__termination__term_osi__term_osi_util__init(void)
{
}

void mercury__termination__term_osi__term_osi_util__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&termination__term_osi__term_osi_util__termination__term_osi__term_osi_util__type_ctor_info_arg_size_info_0);
  MR_register_type_ctor_info(&termination__term_osi__term_osi_util__termination__term_osi__term_osi_util__type_ctor_info_pass_info_0);
  MR_register_type_ctor_info(&termination__term_osi__term_osi_util__termination__term_osi__term_osi_util__type_ctor_info_termination_info_0);
  MR_register_type_ctor_info(&termination__term_osi__term_osi_util__termination__term_osi__term_osi_util__type_ctor_info_used_args_0);
}

void mercury__termination__term_osi__term_osi_util__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__termination__term_osi__term_osi_util__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module termination.term_osi.term_osi_util.
