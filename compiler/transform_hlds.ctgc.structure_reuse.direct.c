/*
** Automatically generated from `structure_reuse.direct.m'
** by the Mercury compiler,
** version rotd-2020-06-03
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


// :- module transform_hlds.ctgc.structure_reuse.direct.
// :- implementation.

/*
INIT mercury__transform_hlds__ctgc__structure_reuse__direct__init
ENDINIT
*/

#include "transform_hlds.ctgc.structure_reuse.direct.mih"


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
#include "getopt_io.mih"
#include "hlds.mih"
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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
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
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "transform_hlds.ctgc.livedata.mih"
#include "transform_hlds.ctgc.structure_reuse.mih"
#include "transform_hlds.ctgc.structure_sharing.mih"
#include "transform_hlds.ctgc.util.mih"
#include "transform_hlds.ctgc.structure_reuse.domain.mih"
#include "transform_hlds.ctgc.structure_sharing.domain.mih"
#include "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.mih"
#include "transform_hlds.ctgc.structure_reuse.direct.detect_garbage.mih"




static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_conditionals_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_specific_procs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct____Unify____dead_cell_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct____Compare____dead_cell_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_scalar_common_1[3][3];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_scalar_common_2[1][5];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_scalar_common_3[3][9];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_scalar_common_4[1][10];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_scalar_common_5[2][7];




static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_scalar_common_1[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_conditionals_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_scalar_common_3[3][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_scalar_common_4[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_scalar_common_5[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_TypeInfo) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__direct__transform_hlds__ctgc__structure_reuse__direct__type_ctor_info_dead_cell_table_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct____Unify____dead_cell_table_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct____Compare____dead_cell_table_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.direct",
  (MR_String) "dead_cell_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__direct__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct____Compare____dead_cell_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct____Unify____dead_cell_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_entry_dump_4_p_0(
  MR_Word PP_5,
  MR_Word Cond_6)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_condition_is_conditional_1_p_0(Cond_6);
    if (succeeded)
      mercury__io__write_string_3_p_0((MR_String) "\t\t|  cond  |\t");
    else
      mercury__io__write_string_3_p_0((MR_String) "\t\t| always |\t");
    transform_hlds__smm_common__dump_program_point_3_p_0(PP_5);
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_add_unconditional_4_p_0(
  MR_Word PP_5,
  MR_Word C_6,
  MR_Word STATE_VARIABLE_Table_0_8,
  MR_Word * STATE_VARIABLE_Table_9)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_condition_is_conditional_1_p_0(C_6);
    if (succeeded)
      *STATE_VARIABLE_Table_9 = STATE_VARIABLE_Table_0_8;
    else
      mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0), ((MR_Box) (PP_5)), ((MR_Box) (C_6)), STATE_VARIABLE_Table_0_8, STATE_VARIABLE_Table_9);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_conditionals_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Table_9;

    transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_add_unconditional_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Table_9);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Table_9));
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_conditionals_2_p_0(
  MR_Word STATE_VARIABLE_Table_0_4,
  MR_Word * STATE_VARIABLE_Table_5)
{
  {
    MR_Word Var_7;
    MR_Box conv1_STATE_VARIABLE_Table_5;

    Var_7 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0));
    mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_1[2]), STATE_VARIABLE_Table_0_4, ((MR_Box) (Var_7)), &conv1_STATE_VARIABLE_Table_5);
    *STATE_VARIABLE_Table_5 = ((MR_Word) (conv1_STATE_VARIABLE_Table_5));
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_3_p_0(
  MR_Word PP_4,
  MR_Word STATE_VARIABLE_Table_0_7,
  MR_Word * STATE_VARIABLE_Table_8)
{
  {
    MR_Box conv0_Var_6;

    mercury__map__det_remove_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0), ((MR_Box) (PP_4)), &conv0_Var_6, STATE_VARIABLE_Table_0_7, STATE_VARIABLE_Table_8);
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_set_4_p_0(
  MR_Word PP_5,
  MR_Word RC_6,
  MR_Word STATE_VARIABLE_Table_0_8,
  MR_Word * STATE_VARIABLE_Table_9)
{
  mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0), ((MR_Box) (PP_5)), ((MR_Box) (RC_6)), STATE_VARIABLE_Table_0_8, STATE_VARIABLE_Table_9);
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_search_2_f_0(
  MR_Word PP_4,
  MR_Word Table_5,
  MR_Word * ReuseCond_6)
{
  {
    MR_bool succeeded;
    MR_Box conv0_ReuseCond_6;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0), Table_5, ((MR_Box) (PP_4)), &conv0_ReuseCond_6);
    if (succeeded)
    {
      *ReuseCond_6 = ((MR_Word) (conv0_ReuseCond_6));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_is_empty_1_p_0(
  MR_Word Table_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0), Table_2);
    return succeeded;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_init_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;

    HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0));
    return HeadVar__1_1;
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_ppid_6_p_0(
  MR_Word SharingTable_7,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13,
  MR_Word STATE_VARIABLE_ReuseTable_0_14,
  MR_Word * STATE_VARIABLE_ReuseTable_15)
{
  {
    MR_Word PredId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ProcId_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

    transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_p_0(SharingTable_7, PredId_8, ProcId_9, STATE_VARIABLE_ModuleInfo_0_12, STATE_VARIABLE_ModuleInfo_13, STATE_VARIABLE_ReuseTable_0_14, STATE_VARIABLE_ReuseTable_15);
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_p_0(
  MR_Word SharingTable_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25,
  MR_Word STATE_VARIABLE_ReuseTable_0_26,
  MR_Word * STATE_VARIABLE_ReuseTable_27)
{
  {
    MR_Word Preds0_13;
    MR_Word Pred0_14;
    MR_Word Procs0_15;
    MR_Word Proc0_16;
    MR_Word Proc_17;
    MR_Word ReuseAs_18;
    MR_Word AsAndStatus_20;
    MR_Word Procs_21;
    MR_Word Pred_22;
    MR_Word Preds_23;
    MR_Word Var_28;
    MR_Box conv0_Pred0_14;
    MR_Box conv1_Proc0_16;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_24, &Preds0_13);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds0_13, ((MR_Box) (PredId_9)), &conv0_Pred0_14);
    Pred0_14 = ((MR_Word) (conv0_Pred0_14));
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(Pred0_14, &Procs0_15);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs0_15, ((MR_Box) (ProcId_10)), &conv1_Proc0_16);
    Proc0_16 = ((MR_Word) (conv1_Proc0_16));
    transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_2_8_p_0(SharingTable_8, PredId_9, ProcId_10, STATE_VARIABLE_ModuleInfo_0_24, Pred0_14, Proc0_16, &Proc_17, &ReuseAs_18);
    {
      AsAndStatus_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), AsAndStatus_20, 0) = ((MR_Box) (ReuseAs_18));
      MR_hl_field(MR_mktag(0), AsAndStatus_20, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    }
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (PredId_9));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (ProcId_10));
    }
    transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_set_4_p_0(Var_28, AsAndStatus_20, STATE_VARIABLE_ReuseTable_0_26, STATE_VARIABLE_ReuseTable_27);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_10)), ((MR_Box) (Proc_17)), Procs0_15, &Procs_21);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(Procs_21, Pred0_14, &Pred_22);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_9)), ((MR_Box) (Pred_22)), Preds0_13, &Preds_23);
    hlds__hlds_module__module_info_set_preds_3_p_0(Preds_23, STATE_VARIABLE_ModuleInfo_0_24, STATE_VARIABLE_ModuleInfo_25);
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_2_8_p_0(
  MR_Word SharingTable_9,
  MR_Word PredId_10,
  MR_Integer ProcId_11,
  MR_Word ModuleInfo_12,
  MR_Word PredInfo_13,
  MR_Word STATE_VARIABLE_ProcInfo_0_22,
  MR_Word * STATE_VARIABLE_ProcInfo_23,
  MR_Word * ReuseAs_15)
{
  {
    MR_Word Globals_16;
    MR_Word VeryVerbose_17;
    MR_Word Goal0_19;
    MR_Word DeadCellTable_20;
    MR_Word Goal_21;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_12, &Globals_16);
    libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 66, &VeryVerbose_17);
    hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Direct reuse analysis of ", PredId_10, ProcId_11, ModuleInfo_12);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_22, &Goal0_19);
    transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_p_0(ModuleInfo_12, PredInfo_13, STATE_VARIABLE_ProcInfo_0_22, SharingTable_9, Goal0_19, &DeadCellTable_20);
    transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_p_0(VeryVerbose_17, DeadCellTable_20);
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__determine_reuse_6_p_0(ModuleInfo_12, STATE_VARIABLE_ProcInfo_0_22, DeadCellTable_20, Goal0_19, &Goal_21, ReuseAs_15);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_21, STATE_VARIABLE_ProcInfo_0_22, STATE_VARIABLE_ProcInfo_23);
    libs__file_util__maybe_write_string_4_p_0(VeryVerbose_17, (MR_String) "% reuse analysis done.\n");
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    transform_hlds__ctgc__structure_reuse__direct__dead_cell_entry_dump_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_p_0(
  MR_Word MaybeDump_5,
  MR_Word Table_6)
{
  switch (MaybeDump_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box conv0_STATE_VARIABLE_IO_13_13;

        mercury__io__write_string_3_p_0((MR_String) "\t\t|--------|\n");
        mercury__map__foldl_4_p_2((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_1[1]), Table_6, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13_13);
        mercury__io__write_string_3_p_0((MR_String) "\t\t|--------|\n");
      }
      break;
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__set_external_pred_reuse_as_6_p_0(
  MR_Word PredId_7,
  MR_Word ReuseAs_8,
  MR_Word Status_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ReuseTable_0_12,
  MR_Word * STATE_VARIABLE_ReuseTable_13)
{
  {
    MR_Word Var_14;
    MR_Word Var_15;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (PredId_7));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (ProcId_10));
    }
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (ReuseAs_8));
      MR_hl_field(MR_mktag(0), Var_15, 1) = (MR_Box) ((MR_Unsigned) (Status_9));
    }
    transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_set_4_p_0(Var_14, Var_15, STATE_VARIABLE_ReuseTable_0_12, STATE_VARIABLE_ReuseTable_13);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_ModuleInfo_25;
    MR_Word conv2_STATE_VARIABLE_ReuseTable_27;

    transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_ModuleInfo_25, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_ReuseTable_27);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_ModuleInfo_25));
    *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_ReuseTable_27));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ReuseTable_13;

    transform_hlds__ctgc__structure_reuse__direct__set_external_pred_reuse_as_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ReuseTable_13);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ReuseTable_13));
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_p_0(
  MR_Word SharingTable_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * STATE_VARIABLE_ModuleInfo_19,
  MR_Word STATE_VARIABLE_ReuseTable_0_20,
  MR_Word * STATE_VARIABLE_ReuseTable_21)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo0_11;
    MR_Word Origin_12;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_18, PredId_8, &PredInfo0_11);
    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo0_11, &Origin_12);
    succeeded = ((MR_tag((MR_Word) Origin_12)) == (MR_Integer) 1);
    if (succeeded)
    {
      *STATE_VARIABLE_ReuseTable_21 = STATE_VARIABLE_ReuseTable_0_20;
      *STATE_VARIABLE_ModuleInfo_19 = STATE_VARIABLE_ModuleInfo_0_18;
    }
    else
    {
      MR_Word PredStatus_15;
      MR_Word Var_22;

      hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_11, &PredStatus_15);
      Var_22 = (MR_Word) (PredStatus_15);
      succeeded = ((MR_tag((MR_Word) Var_22)) == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word Var_23;
        MR_Word Var_24;
        MR_Word Var_26;
        MR_Box conv1_STATE_VARIABLE_ReuseTable_21;

        Var_26 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_0_f_0();
        {
          Var_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_3[2]));
          MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_p_0_1));
          MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (PredId_8));
          MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (Var_26));
          MR_hl_field(MR_mktag(0), Var_23, 5) = ((MR_Box) ((MR_Integer) 2));
        }
        Var_24 = hlds__hlds_pred__pred_info_procids_1_f_0(PredInfo0_11);
        mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0), Var_23, Var_24, ((MR_Box) (STATE_VARIABLE_ReuseTable_0_20)), &conv1_STATE_VARIABLE_ReuseTable_21);
        *STATE_VARIABLE_ReuseTable_21 = ((MR_Word) (conv1_STATE_VARIABLE_ReuseTable_21));
        *STATE_VARIABLE_ModuleInfo_19 = STATE_VARIABLE_ModuleInfo_0_18;
      }
      else
      {
        MR_Word ProcIds_17;
        MR_Word Var_28;
        MR_Box conv5_STATE_VARIABLE_ModuleInfo_19;
        MR_Box conv4_STATE_VARIABLE_ReuseTable_21;

        ProcIds_17 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(PredInfo0_11);
        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_p_0_2));
          MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (SharingTable_7));
          MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) (PredId_8));
        }
        mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0), Var_28, ProcIds_17, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_18)), &conv5_STATE_VARIABLE_ModuleInfo_19, ((MR_Box) (STATE_VARIABLE_ReuseTable_0_20)), &conv4_STATE_VARIABLE_ReuseTable_21);
        *STATE_VARIABLE_ModuleInfo_19 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_19));
        *STATE_VARIABLE_ReuseTable_21 = ((MR_Word) (conv4_STATE_VARIABLE_ReuseTable_21));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_specific_procs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ModuleInfo_13;
    MR_Word conv0_STATE_VARIABLE_ReuseTable_15;

    transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_ppid_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_13, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ReuseTable_15);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_13));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ReuseTable_15));
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_specific_procs_6_p_0(
  MR_Word SharingTable_7,
  MR_Word PPIds_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12,
  MR_Word STATE_VARIABLE_ReuseTable_0_13,
  MR_Word * STATE_VARIABLE_ReuseTable_14)
{
  {
    MR_Word Var_15;
    MR_Box conv3_STATE_VARIABLE_ModuleInfo_12;
    MR_Box conv2_STATE_VARIABLE_ReuseTable_14;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_specific_procs_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (SharingTable_7));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0), Var_15, PPIds_8, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_11)), &conv3_STATE_VARIABLE_ModuleInfo_12, ((MR_Box) (STATE_VARIABLE_ReuseTable_0_13)), &conv2_STATE_VARIABLE_ReuseTable_14);
    *STATE_VARIABLE_ModuleInfo_12 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_12));
    *STATE_VARIABLE_ReuseTable_14 = ((MR_Word) (conv2_STATE_VARIABLE_ReuseTable_14));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ModuleInfo_19;
    MR_Word conv0_STATE_VARIABLE_ReuseTable_21;

    transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_19, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ReuseTable_21);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_19));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ReuseTable_21));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__ctgc__util__pred_requires_analysis_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_p_0(
  MR_Word SharingTable_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12,
  MR_Word STATE_VARIABLE_ReuseTable_0_13,
  MR_Word * STATE_VARIABLE_ReuseTable_14)
{
  {
    MR_bool succeeded;
    MR_Word AllPredIds_9;
    MR_Word ToBeAnalysedPredIds_10;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Box conv3_STATE_VARIABLE_ModuleInfo_12;
    MR_Box conv2_STATE_VARIABLE_ReuseTable_14;

    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_11, &AllPredIds_9);
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_11));
    }
    mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_15, AllPredIds_9, &ToBeAnalysedPredIds_10);
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (SharingTable_6));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0), Var_16, ToBeAnalysedPredIds_10, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_11)), &conv3_STATE_VARIABLE_ModuleInfo_12, ((MR_Box) (STATE_VARIABLE_ReuseTable_0_13)), &conv2_STATE_VARIABLE_ReuseTable_14);
    *STATE_VARIABLE_ModuleInfo_12 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_12));
    *STATE_VARIABLE_ReuseTable_14 = ((MR_Word) (conv2_STATE_VARIABLE_ReuseTable_14));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct____Unify____dead_cell_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_reuse__direct____Unify____dead_cell_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct____Compare____dead_cell_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__structure_reuse__direct____Compare____dead_cell_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__transform_hlds__ctgc__structure_reuse__direct__init(void)
{
}

void mercury__transform_hlds__ctgc__structure_reuse__direct__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__direct__transform_hlds__ctgc__structure_reuse__direct__type_ctor_info_dead_cell_table_0);
}

void mercury__transform_hlds__ctgc__structure_reuse__direct__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__ctgc__structure_reuse__direct__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.ctgc.structure_reuse.direct.
