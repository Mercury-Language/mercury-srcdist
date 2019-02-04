/*
** Automatically generated from `hlds_defns.m'
** by the Mercury compiler,
** version rotd-2019-01-20
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


// :- module hlds.hlds_defns.
// :- implementation.

/*
INIT mercury__hlds__hlds_defns__init
ENDINIT
*/

#include "hlds.hlds_defns.mih"


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
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_defns__list__pti_list_1__plain_hlds__hlds_defns__type_ctor_info_pred_line_count_0;

static const MR_PseudoTypeInfo hlds__hlds_defns__hlds__hlds_defns__field_types_name_arity_0_0[2];

static const MR_DuFunctorDesc hlds__hlds_defns__hlds__hlds_defns__du_functor_desc_name_arity_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_defns__hlds__hlds_defns__du_stag_ordered_name_arity_0_0[1];

static const MR_DuPtagLayout hlds__hlds_defns__hlds__hlds_defns__du_ptag_ordered_name_arity_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_defns__hlds__hlds_defns__du_name_ordered_name_arity_0[1];

static const MR_Integer hlds__hlds_defns__hlds__hlds_defns__functor_number_map_name_arity_0[1];

static const MR_PseudoTypeInfo hlds__hlds_defns__hlds__hlds_defns__field_types_pred_line_count_0_0[3];

static const MR_ConstString hlds__hlds_defns__hlds__hlds_defns__field_names_pred_line_count_0_0[3];

static const MR_DuFunctorDesc hlds__hlds_defns__hlds__hlds_defns__du_functor_desc_pred_line_count_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_defns__hlds__hlds_defns__du_stag_ordered_pred_line_count_0_0[1];

static const MR_DuPtagLayout hlds__hlds_defns__hlds__hlds_defns__du_ptag_ordered_pred_line_count_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_defns__hlds__hlds_defns__du_name_ordered_pred_line_count_0[1];

static const MR_Integer hlds__hlds_defns__hlds__hlds_defns__functor_number_map_pred_line_count_0[1];

static void MR_CALL 
hlds__hlds_defns____Compare____pred_line_count_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_defns____Unify____pred_line_count_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hlds_defns____Compare____name_arity_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_defns____Unify____name_arity_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hlds_defns__write_pred_line_count_4_p_0(
  MR_Word Stream_5,
  MR_Word PredLineCount_6);

static void MR_CALL 
hlds__hlds_defns__gather_pred_line_counts_4_p_0(
  MR_Word ModuleName_5,
  MR_Word PredInfo_6,
  MR_Word STATE_VARIABLE_PredLineCounts_0_32,
  MR_Word * STATE_VARIABLE_PredLineCounts_33);

static void MR_CALL 
hlds__hlds_defns__find_last_context_2_p_0(
  MR_Word Goal_3,
  MR_Word * FirstContext_4);

static void MR_CALL 
hlds__hlds_defns__find_first_context_2_p_0(
  MR_Word Goal_3,
  MR_Word * FirstContext_4);

static void MR_CALL 
hlds__hlds_defns__instance_type_to_desc_2_p_0(
  MR_Word Type_3,
  MR_String * TypeDesc_4);

static void MR_CALL 
hlds__hlds_defns__write_hlds_defn_line_counts_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_defns__write_hlds_defn_line_counts_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_defns__output_prefixed_strings_5_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
hlds__hlds_defns__output_prefixed_name_arities_5_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
hlds__hlds_defns__gather_local_instance_names_4_p_0(
  MR_Word ModuleName_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_InstanceDescs_0_3,
  MR_Word * STATE_VARIABLE_InstanceDescs_4);

static void MR_CALL 
hlds__hlds_defns__gather_local_instance_names_for_class_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__hlds_defns__gather_local_instance_names_for_class_5_p_0(
  MR_Word ModuleName_1,
  MR_Word ClassId_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_InstanceDescs_0_4,
  MR_Word * STATE_VARIABLE_InstanceDescs_5);

static void MR_CALL 
hlds__hlds_defns__gather_local_typeclass_names_4_p_0(
  MR_Word ModuleName_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ClassNameArities_0_3,
  MR_Word * STATE_VARIABLE_ClassNameArities_4);

static void MR_CALL 
hlds__hlds_defns__gather_local_pred_names_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_FuncNameArities_0_3,
  MR_Word * STATE_VARIABLE_FuncNameArities_4,
  MR_Word STATE_VARIABLE_PredNameArities_0_5,
  MR_Word * STATE_VARIABLE_PredNameArities_6);

static void MR_CALL 
hlds__hlds_defns__gather_local_mode_names_4_p_0(
  MR_Word ModuleName_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModeNameArities_0_3,
  MR_Word * STATE_VARIABLE_ModeNameArities_4);

static void MR_CALL 
hlds__hlds_defns__gather_local_inst_names_4_p_0(
  MR_Word ModuleName_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_InstNameArities_0_3,
  MR_Word * STATE_VARIABLE_InstNameArities_4);

static void MR_CALL 
hlds__hlds_defns__gather_local_type_names_4_p_0(
  MR_Word ModuleName_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_TypeNameArities_0_3,
  MR_Word * STATE_VARIABLE_TypeNameArities_4);

static MR_bool MR_CALL 
hlds__hlds_defns____Unify____name_arity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_defns____Compare____name_arity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_defns____Unify____pred_line_count_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_defns____Compare____pred_line_count_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_defns_scalar_common_1[2][2];

static /* final */ const MR_Box hlds__hlds_defns_scalar_common_2[1][5];

static /* final */ const MR_Box hlds__hlds_defns_scalar_common_3[1][3];

static /* final */ const MR_Box hlds__hlds_defns_scalar_common_4[2][1];

static /* final */ const MR_Box hlds__hlds_defns_scalar_common_5[2][7];




static /* final */ const MR_Box hlds__hlds_defns_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_pred_line_count_0))
  },
};

static /* final */ const MR_Box hlds__hlds_defns_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__hlds_defns_scalar_common_3[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__hlds_defns_scalar_common_2[0])),
    ((MR_Box) (hlds__hlds_defns__gather_local_instance_names_for_class_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_defns_scalar_common_4[2][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row 1 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 1U << 1))))))))
  },
};

static /* final */ const MR_Box hlds__hlds_defns_scalar_common_5[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_defns__list__pti_list_1__plain_hlds__hlds_defns__type_ctor_info_pred_line_count_0)),
    ((MR_Box) (&hlds__hlds_defns__list__pti_list_1__plain_hlds__hlds_defns__type_ctor_info_pred_line_count_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_pred_line_count_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_defns__list__pti_list_1__plain_hlds__hlds_defns__type_ctor_info_pred_line_count_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_pred_line_count_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_defns__hlds__hlds_defns__field_types_name_arity_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__hlds_defns__hlds__hlds_defns__du_functor_desc_name_arity_0_0 = {
  (MR_String) "name_arity",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_defns__hlds__hlds_defns__field_types_name_arity_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_defns__hlds__hlds_defns__du_stag_ordered_name_arity_0_0[1] = {
  &hlds__hlds_defns__hlds__hlds_defns__du_functor_desc_name_arity_0_0
};

static const MR_DuPtagLayout hlds__hlds_defns__hlds__hlds_defns__du_ptag_ordered_name_arity_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_defns__hlds__hlds_defns__du_stag_ordered_name_arity_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_defns__hlds__hlds_defns__du_name_ordered_name_arity_0[1] = {
  &hlds__hlds_defns__hlds__hlds_defns__du_functor_desc_name_arity_0_0
};

static const MR_Integer hlds__hlds_defns__hlds__hlds_defns__functor_number_map_name_arity_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_defns____Unify____name_arity_0_0_10001)),
  ((MR_Box) (hlds__hlds_defns____Compare____name_arity_0_0_10001)),
  (MR_String) "hlds.hlds_defns",
  (MR_String) "name_arity",
  {     hlds__hlds_defns__hlds__hlds_defns__du_name_ordered_name_arity_0 },
  {     hlds__hlds_defns__hlds__hlds_defns__du_ptag_ordered_name_arity_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__hlds_defns__hlds__hlds_defns__functor_number_map_name_arity_0
};

static const MR_PseudoTypeInfo hlds__hlds_defns__hlds__hlds_defns__field_types_pred_line_count_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString hlds__hlds_defns__hlds__hlds_defns__field_names_pred_line_count_0_0[3] = {
  (MR_String) "plc_name_arity",
  (MR_String) "plc_file_name",
  (MR_String) "plc_line_count"
};

static const MR_DuFunctorDesc hlds__hlds_defns__hlds__hlds_defns__du_functor_desc_pred_line_count_0_0 = {
  (MR_String) "pred_line_count",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_defns__hlds__hlds_defns__field_types_pred_line_count_0_0,
  hlds__hlds_defns__hlds__hlds_defns__field_names_pred_line_count_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_defns__hlds__hlds_defns__du_stag_ordered_pred_line_count_0_0[1] = {
  &hlds__hlds_defns__hlds__hlds_defns__du_functor_desc_pred_line_count_0_0
};

static const MR_DuPtagLayout hlds__hlds_defns__hlds__hlds_defns__du_ptag_ordered_pred_line_count_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_defns__hlds__hlds_defns__du_stag_ordered_pred_line_count_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_defns__hlds__hlds_defns__du_name_ordered_pred_line_count_0[1] = {
  &hlds__hlds_defns__hlds__hlds_defns__du_functor_desc_pred_line_count_0_0
};

static const MR_Integer hlds__hlds_defns__hlds__hlds_defns__functor_number_map_pred_line_count_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_pred_line_count_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_defns____Unify____pred_line_count_0_0_10001)),
  ((MR_Box) (hlds__hlds_defns____Compare____pred_line_count_0_0_10001)),
  (MR_String) "hlds.hlds_defns",
  (MR_String) "pred_line_count",
  {     hlds__hlds_defns__hlds__hlds_defns__du_name_ordered_pred_line_count_0 },
  {     hlds__hlds_defns__hlds__hlds_defns__du_ptag_ordered_pred_line_count_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__hlds_defns__hlds__hlds_defns__functor_number_map_pred_line_count_0
};

static void MR_CALL 
hlds__hlds_defns____Compare____pred_line_count_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      hlds__hlds_defns____Compare____name_arity_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
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
}

static MR_bool MR_CALL 
hlds__hlds_defns____Unify____pred_line_count_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = hlds__hlds_defns____Unify____name_arity_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_defns____Compare____name_arity_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        succeeded = (ArgX2_7 < ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX2_7 > ArgY2_8);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__hlds_defns____Unify____name_arity_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_defns__write_pred_line_count_4_p_0(
  MR_Word Stream_5,
  MR_Word PredLineCount_6)
{
  {
    MR_Word PredNameArity_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredLineCount_6, (MR_Integer) 0))));
    MR_String FileName_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredLineCount_6, (MR_Integer) 1))));
    MR_Integer LineCount_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredLineCount_6, (MR_Integer) 2))));
    MR_String PredName_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredNameArity_8, (MR_Integer) 0))));
    MR_Integer PredArity_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArity_8, (MR_Integer) 1))));
    MR_String PredNameArityStr_13;
    MR_String Var_31;
    MR_String Var_39;
    MR_String Var_41;
    MR_String Var_52;
    MR_String Var_63;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_defns_scalar_common_4[0]), PredArity_12, &Var_31);
    Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_31);
    PredNameArityStr_13 = mercury__string__f_43_43_2_f_0(PredName_11, Var_39);
    mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_defns_scalar_common_4[1]), (MR_Integer) 40, PredNameArityStr_13, &Var_41);
    mercury__io__write_string_4_p_0(Stream_5, Var_41);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) " ");
    mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_defns_scalar_common_4[1]), (MR_Integer) 30, FileName_9, &Var_52);
    mercury__io__write_string_4_p_0(Stream_5, Var_52);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) " ");
    mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_defns_scalar_common_4[0]), (MR_Integer) 6, LineCount_10, &Var_63);
    mercury__io__write_string_4_p_0(Stream_5, Var_63);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n");
  }
}

static void MR_CALL 
hlds__hlds_defns__gather_pred_line_counts_4_p_0(
  MR_Word ModuleName_5,
  MR_Word PredInfo_6,
  MR_Word STATE_VARIABLE_PredLineCounts_0_32,
  MR_Word * STATE_VARIABLE_PredLineCounts_33)
{
  {
    MR_bool succeeded;
    MR_Word PredModuleName_8;
    MR_Word Origin_9;

    hlds__hlds_pred__pred_info_get_module_name_2_p_0(PredInfo_6, &PredModuleName_8);
    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_6, &Origin_9);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(PredModuleName_8, ModuleName_5);
    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) Origin_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Origin_9, (MR_Integer) 0)))) == (MR_Integer) 6)));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_Word ClausesInfo_11;
      MR_Word ClausesRep_12;
      MR_Word Clauses_14;
      MR_Word _ItemNumbers_13;

      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_6, &ClausesInfo_11);
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo_11, &ClausesRep_12, &_ItemNumbers_13);
      hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(ClausesRep_12, &Clauses_14);
      if ((Clauses_14 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_PredLineCounts_33 = STATE_VARIABLE_PredLineCounts_0_32;
      else
      {
        MR_Word TailClauses_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Clauses_14, (MR_Integer) 1))));
        MR_Word FirstClause_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Clauses_14, (MR_Integer) 0))));
        MR_Word LastClause_19;
        MR_Word FirstContext_20;
        MR_Word LastContext_21;
        MR_String FirstFileName_22;
        MR_Integer FirstLineNumber_23;
        MR_String LastFileName_24;
        MR_Integer LastLineNumber_25;
        MR_Word Var_34;
        MR_Word Var_35;
        MR_Word LastClausePrime_18;
        MR_Box conv0_LastClausePrime_18;

        succeeded = mercury__list__last_2_p_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), TailClauses_16, &conv0_LastClausePrime_18);
        if (succeeded)
        {
          LastClausePrime_18 = ((MR_Word) (conv0_LastClausePrime_18));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          LastClause_19 = LastClausePrime_18;
        else
          LastClause_19 = FirstClause_17;
        Var_34 = hlds__hlds_clauses__clause_body_1_f_0(FirstClause_17);
        hlds__hlds_defns__find_first_context_2_p_0(Var_34, &FirstContext_20);
        Var_35 = hlds__hlds_clauses__clause_body_1_f_0(LastClause_19);
        hlds__hlds_defns__find_last_context_2_p_0(Var_35, &LastContext_21);
        FirstFileName_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), FirstContext_20, (MR_Integer) 0))));
        FirstLineNumber_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), FirstContext_20, (MR_Integer) 1))));
        LastFileName_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), LastContext_21, (MR_Integer) 0))));
        LastLineNumber_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LastContext_21, (MR_Integer) 1))));
        succeeded = (strcmp(FirstFileName_22, LastFileName_24) == 0);
        if (succeeded)
        {
          MR_String PredName_26;
          MR_Integer PredArity_27;
          MR_Word PredNameArity_28;
          MR_Integer Extent_29;
          MR_Integer LineCount_30;
          MR_Word PLC_31;
          MR_Integer Var_36;

          hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo_6, &PredName_26);
          PredArity_27 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_6);
          {
            PredNameArity_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), PredNameArity_28, 0) = ((MR_Box) (PredName_26));
            MR_hl_field(MR_mktag(0), PredNameArity_28, 1) = ((MR_Box) (PredArity_27));
          }
          Var_36 = (MR_Integer) ((MR_Unsigned) LastLineNumber_25 - (MR_Unsigned) FirstLineNumber_23);
          Extent_29 = (MR_Integer) ((MR_Unsigned) Var_36 + (MR_Unsigned) (MR_Integer) 1);
          LineCount_30 = mercury__int__abs_1_f_0(Extent_29);
          {
            PLC_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), PLC_31, 0) = ((MR_Box) (PredNameArity_28));
            MR_hl_field(MR_mktag(0), PLC_31, 1) = ((MR_Box) (FirstFileName_22));
            MR_hl_field(MR_mktag(0), PLC_31, 2) = ((MR_Box) (LineCount_30));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_PredLineCounts_33 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PLC_31));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_PredLineCounts_0_32));
          }
        }
        else
          *STATE_VARIABLE_PredLineCounts_33 = STATE_VARIABLE_PredLineCounts_0_32;
      }
    }
    else
      *STATE_VARIABLE_PredLineCounts_33 = STATE_VARIABLE_PredLineCounts_0_32;
  }
}

static void MR_CALL 
hlds__hlds_defns__find_last_context_2_p_0(
  MR_Word Goal_3,
  MR_Word * FirstContext_4)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 0))));
    MR_Word GoalInfo_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) GoalExpr_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_58 = (MR_Word) ((MR_Word) (GoalExpr_5));

          hlds__hlds_defns__find_first_context_2_p_0(SubGoal_58, FirstContext_4);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *FirstContext_4 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_6);
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *FirstContext_4 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_6);
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubGoals_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));
              MR_Word LastSubGoal_32;
              MR_Box conv0_LastSubGoal_32;

              succeeded = mercury__list__last_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SubGoals_31, &conv0_LastSubGoal_32);
              if (succeeded)
              {
                LastSubGoal_32 = ((MR_Word) (conv0_LastSubGoal_32));
                succeeded = MR_TRUE;
              }
              if (succeeded)
                hlds__hlds_defns__find_first_context_2_p_0(LastSubGoal_32, FirstContext_4);
              else
                *FirstContext_4 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_6);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubGoals_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));
              MR_Word LastSubGoal_66;
              MR_Box conv1_LastSubGoal_66;

              succeeded = mercury__list__last_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SubGoals_68, &conv1_LastSubGoal_66);
              if (succeeded)
              {
                LastSubGoal_66 = ((MR_Word) (conv1_LastSubGoal_66));
                succeeded = MR_TRUE;
              }
              if (succeeded)
                hlds__hlds_defns__find_first_context_2_p_0(LastSubGoal_66, FirstContext_4);
              else
                *FirstContext_4 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_6);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 3))));
              MR_Word LastCase_36;
              MR_Box conv3_LastCase_36;

              succeeded = mercury__list__last_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Cases_35, &conv3_LastCase_36);
              if (succeeded)
              {
                LastCase_36 = ((MR_Word) (conv3_LastCase_36));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word SubGoal_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LastCase_36, (MR_Integer) 2))));

                hlds__hlds_defns__find_first_context_2_p_0(SubGoal_39, FirstContext_4);
              }
              else
                *FirstContext_4 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_6);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoal_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));

              hlds__hlds_defns__find_first_context_2_p_0(SubGoal_71, FirstContext_4);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Else_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 4))));

              hlds__hlds_defns__find_first_context_2_p_0(Else_44, FirstContext_4);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Shorthand_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) Shorthand_45)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word SubGoalB_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Shorthand_45, (MR_Integer) 1))));

                    hlds__hlds_defns__find_first_context_2_p_0(SubGoalB_47, FirstContext_4);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_45, (MR_Integer) 4))));
                    MR_Word OrElseGoals_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_45, (MR_Integer) 5))));
                    MR_Word LastOrElseGoal_55;
                    MR_Box conv2_LastOrElseGoal_55;

                    succeeded = mercury__list__last_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), OrElseGoals_53, &conv2_LastOrElseGoal_55);
                    if (succeeded)
                    {
                      LastOrElseGoal_55 = ((MR_Word) (conv2_LastOrElseGoal_55));
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                      hlds__hlds_defns__find_first_context_2_p_0(LastOrElseGoal_55, FirstContext_4);
                    else
                      hlds__hlds_defns__find_first_context_2_p_0(MainGoal_52, FirstContext_4);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_59 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Shorthand_45, (MR_Integer) 2))));

                    hlds__hlds_defns__find_first_context_2_p_0(SubGoal_59, FirstContext_4);
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_defns__find_first_context_2_p_0(
  MR_Word Goal_3,
  MR_Word * FirstContext_4)
{
  while (MR_TRUE)
  {
    MR_Word GoalExpr_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 0))));
    MR_Word GoalInfo_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_59 = (MR_Word) ((MR_Word) (GoalExpr_5));
          MR_Word next_value_of_Goal_3 = SubGoal_59;

          // direct tailcall eliminated
          ;
          Goal_3 = next_value_of_Goal_3;
          continue;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *FirstContext_4 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_6);
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *FirstContext_4 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_6);
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubGoals_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));

              if ((SubGoals_31 == (MR_Word) ((MR_Unsigned) 0U)))
                *FirstContext_4 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_6);
              else
              {
                MR_Word HeadSubGoal_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubGoals_31, (MR_Integer) 0))));
                MR_Word next_value_of_Goal_3 = HeadSubGoal_32;

                // direct tailcall eliminated
                ;
                Goal_3 = next_value_of_Goal_3;
                continue;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubGoals_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));

              if ((SubGoals_68 == (MR_Word) ((MR_Unsigned) 0U)))
                *FirstContext_4 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_6);
              else
              {
                MR_Word HeadSubGoal_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubGoals_68, (MR_Integer) 0))));
                MR_Word next_value_of_Goal_3 = HeadSubGoal_64;

                // direct tailcall eliminated
                ;
                Goal_3 = next_value_of_Goal_3;
                continue;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 3))));

              if ((Cases_36 == (MR_Word) ((MR_Unsigned) 0U)))
                *FirstContext_4 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_6);
              else
              {
                MR_Word HeadCase_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cases_36, (MR_Integer) 0))));
                MR_Word SubGoal_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCase_37, (MR_Integer) 2))));
                MR_Word next_value_of_Goal_3 = SubGoal_41;

                // direct tailcall eliminated
                ;
                Goal_3 = next_value_of_Goal_3;
                continue;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoal_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));
              MR_Word next_value_of_Goal_3 = SubGoal_71;

              // direct tailcall eliminated
              ;
              Goal_3 = next_value_of_Goal_3;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));
              MR_Word next_value_of_Goal_3 = Cond_44;

              // direct tailcall eliminated
              ;
              Goal_3 = next_value_of_Goal_3;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Shorthand_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) Shorthand_47)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word SubGoalA_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Shorthand_47, (MR_Integer) 0))));
                    MR_Word next_value_of_Goal_3 = SubGoalA_48;

                    // direct tailcall eliminated
                    ;
                    Goal_3 = next_value_of_Goal_3;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_47, (MR_Integer) 4))));
                    MR_Word next_value_of_Goal_3 = MainGoal_54;

                    // direct tailcall eliminated
                    ;
                    Goal_3 = next_value_of_Goal_3;
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_60 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Shorthand_47, (MR_Integer) 2))));
                    MR_Word next_value_of_Goal_3 = SubGoal_60;

                    // direct tailcall eliminated
                    ;
                    Goal_3 = next_value_of_Goal_3;
                    continue;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_defns__instance_type_to_desc_2_p_0(
  MR_Word Type_3,
  MR_String * TypeDesc_4)
{
  {
    MR_Word TypeCtor_5;
    MR_Word TypeSymName_6;
    MR_Integer TypeArity_7;
    MR_String TypeName_8;
    MR_String Var_9;
    MR_String Var_11;

    parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_3, &TypeCtor_5);
    TypeSymName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_5, (MR_Integer) 0))));
    TypeArity_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_5, (MR_Integer) 1))));
    TypeName_8 = mdbcomp__sym_name__unqualify_name_1_f_0(TypeSymName_6);
    Var_11 = mercury__string__int_to_string_1_f_0(TypeArity_7);
    Var_9 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_11);
    *TypeDesc_4 = mercury__string__f_43_43_2_f_0(TypeName_8, Var_9);
  }
}

static void MR_CALL 
hlds__hlds_defns__write_hlds_defn_line_counts_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_defns__write_pred_line_count_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_defns__write_hlds_defn_line_counts_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_PredLineCounts_33;

    hlds__hlds_defns__gather_pred_line_counts_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_PredLineCounts_33);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_PredLineCounts_33));
  }
}

void MR_CALL 
hlds__hlds_defns__write_hlds_defn_line_counts_4_p_0(
  MR_Word Stream_5,
  MR_Word ModuleInfo_6)
{
  {
    MR_Word ModuleName_8;
    MR_Word Preds_9;
    MR_Word PredInfos_10;
    MR_Word PredLineCounts_11;
    MR_Word SortedPredLineCounts_12;
    MR_Word Var_15;
    MR_Word Var_17;
    MR_Box conv1_PredLineCounts_11;
    MR_Box conv2_STATE_VARIABLE_IO_14;

    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_6, &ModuleName_8);
    hlds__hlds_module__module_info_get_preds_2_p_0(ModuleInfo_6, &Preds_9);
    mercury__map__values_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds_9, &PredInfos_10);
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&hlds__hlds_defns_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (hlds__hlds_defns__write_hlds_defn_line_counts_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (ModuleName_8));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), (MR_Word) (&hlds__hlds_defns_scalar_common_1[1]), Var_15, PredInfos_10, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_PredLineCounts_11);
    PredLineCounts_11 = ((MR_Word) (conv1_PredLineCounts_11));
    mercury__list__sort_2_p_0((MR_Word) (&hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_pred_line_count_0), PredLineCounts_11, &SortedPredLineCounts_12);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&hlds__hlds_defns_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (hlds__hlds_defns__write_hlds_defn_line_counts_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Stream_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_pred_line_count_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_17, SortedPredLineCounts_12, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_14);
  }
}

void MR_CALL 
hlds__hlds_defns__write_hlds_defns_4_p_0(
  MR_Word Stream_5,
  MR_Word ModuleInfo_6)
{
  {
    MR_Word ModuleName_8;
    MR_Word TypeTable_9;
    MR_Word TypeCtorDefns_10;
    MR_Word TypeNameArities_11;
    MR_Word InstTable_12;
    MR_Word UserInstTable_13;
    MR_Word UserInstIds_14;
    MR_Word InstNameArities_15;
    MR_Word ModeTable_16;
    MR_Word ModeDefnMap_17;
    MR_Word ModeIds_18;
    MR_Word ModeNameArities_19;
    MR_Word Preds_20;
    MR_Word PredDefns_21;
    MR_Word FuncNameArities_22;
    MR_Word PredNameArities_23;
    MR_Word ClassTable_24;
    MR_Word ClassIds_25;
    MR_Word ClassNameArities_26;
    MR_Word InstanceTable_27;
    MR_Word InstanceDefns_28;
    MR_Word InstanceDescs_29;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_40;
    MR_Word Var_43;
    MR_Word Var_46;
    MR_Word Var_49;
    MR_Word Var_52;
    MR_Word Var_55;
    MR_Word Var_58;

    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_6, &ModuleName_8);
    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_6, &TypeTable_9);
    hlds__hlds_data__get_all_type_ctor_defns_2_p_0(TypeTable_9, &TypeCtorDefns_10);
    Var_32 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0));
    hlds__hlds_defns__gather_local_type_names_4_p_0(ModuleName_8, TypeCtorDefns_10, Var_32, &TypeNameArities_11);
    hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_6, &InstTable_12);
    hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable_12, &UserInstTable_13);
    mercury__map__keys_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable_13, &UserInstIds_14);
    Var_33 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0));
    hlds__hlds_defns__gather_local_inst_names_4_p_0(ModuleName_8, UserInstIds_14, Var_33, &InstNameArities_15);
    hlds__hlds_module__module_info_get_mode_table_2_p_0(ModuleInfo_6, &ModeTable_16);
    hlds__hlds_inst_mode__mode_table_get_mode_defns_2_p_0(ModeTable_16, &ModeDefnMap_17);
    mercury__map__keys_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0), ModeDefnMap_17, &ModeIds_18);
    Var_34 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0));
    hlds__hlds_defns__gather_local_mode_names_4_p_0(ModuleName_8, ModeIds_18, Var_34, &ModeNameArities_19);
    hlds__hlds_module__module_info_get_preds_2_p_0(ModuleInfo_6, &Preds_20);
    mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds_20, &PredDefns_21);
    Var_35 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0));
    Var_36 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0));
    hlds__hlds_defns__gather_local_pred_names_6_p_0(ModuleName_8, PredDefns_21, Var_35, &FuncNameArities_22, Var_36, &PredNameArities_23);
    hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_6, &ClassTable_24);
    mercury__map__keys_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_24, &ClassIds_25);
    Var_37 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0));
    hlds__hlds_defns__gather_local_typeclass_names_4_p_0(ModuleName_8, ClassIds_25, Var_37, &ClassNameArities_26);
    hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_6, &InstanceTable_27);
    mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_defns_scalar_common_1[0]), InstanceTable_27, &InstanceDefns_28);
    Var_38 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    hlds__hlds_defns__gather_local_instance_names_4_p_0(ModuleName_8, InstanceDefns_28, Var_38, &InstanceDescs_29);
    Var_40 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0), FuncNameArities_22);
    hlds__hlds_defns__output_prefixed_name_arities_5_p_0(Stream_5, (MR_String) "func ", Var_40);
    Var_43 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0), InstNameArities_15);
    hlds__hlds_defns__output_prefixed_name_arities_5_p_0(Stream_5, (MR_String) "inst ", Var_43);
    Var_46 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InstanceDescs_29);
    hlds__hlds_defns__output_prefixed_strings_5_p_0(Stream_5, (MR_String) "instance ", Var_46);
    Var_49 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0), ModeNameArities_19);
    hlds__hlds_defns__output_prefixed_name_arities_5_p_0(Stream_5, (MR_String) "mode ", Var_49);
    Var_52 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0), PredNameArities_23);
    hlds__hlds_defns__output_prefixed_name_arities_5_p_0(Stream_5, (MR_String) "pred ", Var_52);
    Var_55 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0), TypeNameArities_11);
    hlds__hlds_defns__output_prefixed_name_arities_5_p_0(Stream_5, (MR_String) "type ", Var_55);
    Var_58 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0), ClassNameArities_26);
    hlds__hlds_defns__output_prefixed_name_arities_5_p_0(Stream_5, (MR_String) "typeclass ", Var_58);
  }
}

static void MR_CALL 
hlds__hlds_defns__output_prefixed_strings_5_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String Str_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Strs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__3_3;

      mercury__io__write_string_4_p_0(HeadVar__1_1, HeadVar__2_2);
      mercury__io__write_string_4_p_0(HeadVar__1_1, Str_13);
      mercury__io__nl_3_p_0(HeadVar__1_1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Strs_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_defns__output_prefixed_name_arities_5_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word NameArity_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word NameArities_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_String Name_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), NameArity_13, (MR_Integer) 0))));
      MR_Integer Arity_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), NameArity_13, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__3_3;

      mercury__io__write_string_4_p_0(HeadVar__1_1, HeadVar__2_2);
      mercury__io__write_string_4_p_0(HeadVar__1_1, Name_16);
      mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "/");
      mercury__io__write_int_4_p_0(HeadVar__1_1, Arity_17);
      mercury__io__nl_3_p_0(HeadVar__1_1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = NameArities_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_defns__gather_local_instance_names_4_p_0(
  MR_Word ModuleName_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_InstanceDescs_0_3,
  MR_Word * STATE_VARIABLE_InstanceDescs_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_InstanceDescs_4 = STATE_VARIABLE_InstanceDescs_0_3;
    else
    {
      MR_Word InstancePair_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word InstancePairs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ClassId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstancePair_10, (MR_Integer) 0))));
      MR_Word InstanceDefns_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstancePair_10, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_InstanceDescs_17_17;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_InstanceDescs_0_3;

      hlds__hlds_defns__gather_local_instance_names_for_class_5_p_0(ModuleName_1, ClassId_13, InstanceDefns_14, STATE_VARIABLE_InstanceDescs_0_3, &STATE_VARIABLE_InstanceDescs_17_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = InstancePairs_11;
      next_value_of_STATE_VARIABLE_InstanceDescs_0_3 = STATE_VARIABLE_InstanceDescs_17_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_InstanceDescs_0_3 = next_value_of_STATE_VARIABLE_InstanceDescs_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_defns__gather_local_instance_names_for_class_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_TypeDesc_4;

    hlds__hlds_defns__instance_type_to_desc_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_TypeDesc_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_TypeDesc_4));
  }
}

static void MR_CALL 
hlds__hlds_defns__gather_local_instance_names_for_class_5_p_0(
  MR_Word ModuleName_1,
  MR_Word ClassId_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_InstanceDescs_0_4,
  MR_Word * STATE_VARIABLE_InstanceDescs_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_InstanceDescs_5 = STATE_VARIABLE_InstanceDescs_0_4;
    else
    {
      MR_Word InstanceDefn_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word InstanceDefns_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word InstanceModuleName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_13, (MR_Integer) 0))));
      MR_Word OrigTypes_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_13, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_InstanceDescs_44_44;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_InstanceDescs_0_4;

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(InstanceModuleName_16, ModuleName_1);
      if (succeeded)
      {
        MR_Word ClassSymName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_2, (MR_Integer) 0))));
        MR_Integer ClassArity_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassId_2, (MR_Integer) 1))));
        MR_String ClassName_28;
        MR_Word OrigTypeDescs_29;
        MR_String TypeVectorDesc_30;
        MR_String InstanceDesc_31;
        MR_String Var_51;
        MR_String Var_53;
        MR_String Var_54;
        MR_String Var_61;
        MR_String Var_63;

        ClassName_28 = mdbcomp__sym_name__unqualify_name_1_f_0(ClassSymName_26);
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_defns_scalar_common_3[0]), OrigTypes_18, &OrigTypeDescs_29);
        TypeVectorDesc_30 = mercury__string__join_list_2_f_0((MR_String) ", ", OrigTypeDescs_29);
        Var_51 = mercury__string__f_43_43_2_f_0(TypeVectorDesc_30, (MR_String) ">");
        Var_53 = mercury__string__f_43_43_2_f_0((MR_String) " <", Var_51);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_defns_scalar_common_4[0]), ClassArity_27, &Var_54);
        Var_61 = mercury__string__f_43_43_2_f_0(Var_54, Var_53);
        Var_63 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_61);
        InstanceDesc_31 = mercury__string__f_43_43_2_f_0(ClassName_28, Var_63);
        mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (InstanceDesc_31)), STATE_VARIABLE_InstanceDescs_0_4, &STATE_VARIABLE_InstanceDescs_44_44);
      }
      else
        STATE_VARIABLE_InstanceDescs_44_44 = STATE_VARIABLE_InstanceDescs_0_4;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = InstanceDefns_14;
      next_value_of_STATE_VARIABLE_InstanceDescs_0_4 = STATE_VARIABLE_InstanceDescs_44_44;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_InstanceDescs_0_4 = next_value_of_STATE_VARIABLE_InstanceDescs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_defns__gather_local_typeclass_names_4_p_0(
  MR_Word ModuleName_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ClassNameArities_0_3,
  MR_Word * STATE_VARIABLE_ClassNameArities_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ClassNameArities_4 = STATE_VARIABLE_ClassNameArities_0_3;
    else
    {
      MR_Word ClassId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ClassIds_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ClassSymName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_10, (MR_Integer) 0))));
      MR_Integer ClassArity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassId_10, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ClassNameArities_21_21;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ClassNameArities_0_3;

      if (((MR_tag((MR_Word) ClassSymName_13)) == (MR_Integer) 1))
      {
        MR_Word ClassModuleName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ClassSymName_13, (MR_Integer) 0))));
        MR_String ClassName_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), ClassSymName_13, (MR_Integer) 1))));

        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ClassModuleName_16, ModuleName_1);
        if (succeeded)
        {
          MR_Word Var_20;

          {
            Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (ClassName_17));
            MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (ClassArity_14));
          }
          mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0), ((MR_Box) (Var_20)), STATE_VARIABLE_ClassNameArities_0_3, &STATE_VARIABLE_ClassNameArities_21_21);
        }
        else
          STATE_VARIABLE_ClassNameArities_21_21 = STATE_VARIABLE_ClassNameArities_0_3;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_defns.gather_local_typeclass_names\'/4", (MR_String) "unqualified class_id name");
          return;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ClassIds_11;
      next_value_of_STATE_VARIABLE_ClassNameArities_0_3 = STATE_VARIABLE_ClassNameArities_21_21;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ClassNameArities_0_3 = next_value_of_STATE_VARIABLE_ClassNameArities_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_defns__gather_local_pred_names_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_FuncNameArities_0_3,
  MR_Word * STATE_VARIABLE_FuncNameArities_4,
  MR_Word STATE_VARIABLE_PredNameArities_0_5,
  MR_Word * STATE_VARIABLE_PredNameArities_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_PredNameArities_6 = STATE_VARIABLE_PredNameArities_0_5;
      *STATE_VARIABLE_FuncNameArities_4 = STATE_VARIABLE_FuncNameArities_0_3;
    }
    else
    {
      MR_Word PredDefn_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word PredDefns_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word PredInfo_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredDefn_15, (MR_Integer) 1))));
      MR_Word PredModuleName_21;
      MR_Word Origin_22;
      MR_Word STATE_VARIABLE_PredNameArities_32_32;
      MR_Word STATE_VARIABLE_FuncNameArities_33_33;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_FuncNameArities_0_3;
      MR_Word next_value_of_STATE_VARIABLE_PredNameArities_0_5;

      hlds__hlds_pred__pred_info_get_module_name_2_p_0(PredInfo_20, &PredModuleName_21);
      hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_20, &Origin_22);
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(PredModuleName_21, HeadVar__1_1);
      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) Origin_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Origin_22, (MR_Integer) 0)))) == (MR_Integer) 6)));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        MR_String PredName_24;
        MR_Integer PredArity_25;
        MR_Word NameArity_26;
        MR_Word PorF_27;

        hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo_20, &PredName_24);
        PredArity_25 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_20);
        {
          NameArity_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), NameArity_26, 0) = ((MR_Box) (PredName_24));
          MR_hl_field(MR_mktag(0), NameArity_26, 1) = ((MR_Box) (PredArity_25));
        }
        PorF_27 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_20);
        switch (PorF_27) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0), ((MR_Box) (NameArity_26)), STATE_VARIABLE_FuncNameArities_0_3, &STATE_VARIABLE_FuncNameArities_33_33);
              STATE_VARIABLE_PredNameArities_32_32 = STATE_VARIABLE_PredNameArities_0_5;
            }
            break;
          case (MR_Integer) 0:
            {
              mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0), ((MR_Box) (NameArity_26)), STATE_VARIABLE_PredNameArities_0_5, &STATE_VARIABLE_PredNameArities_32_32);
              STATE_VARIABLE_FuncNameArities_33_33 = STATE_VARIABLE_FuncNameArities_0_3;
            }
            break;
        }
      }
      else
      {
        STATE_VARIABLE_PredNameArities_32_32 = STATE_VARIABLE_PredNameArities_0_5;
        STATE_VARIABLE_FuncNameArities_33_33 = STATE_VARIABLE_FuncNameArities_0_3;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = PredDefns_16;
      next_value_of_STATE_VARIABLE_FuncNameArities_0_3 = STATE_VARIABLE_FuncNameArities_33_33;
      next_value_of_STATE_VARIABLE_PredNameArities_0_5 = STATE_VARIABLE_PredNameArities_32_32;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_FuncNameArities_0_3 = next_value_of_STATE_VARIABLE_FuncNameArities_0_3;
      STATE_VARIABLE_PredNameArities_0_5 = next_value_of_STATE_VARIABLE_PredNameArities_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_defns__gather_local_mode_names_4_p_0(
  MR_Word ModuleName_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModeNameArities_0_3,
  MR_Word * STATE_VARIABLE_ModeNameArities_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModeNameArities_4 = STATE_VARIABLE_ModeNameArities_0_3;
    else
    {
      MR_Word ModeId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ModeIds_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ModeSymName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeId_10, (MR_Integer) 0))));
      MR_Integer ModeArity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ModeId_10, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ModeNameArities_21_21;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ModeNameArities_0_3;

      if (((MR_tag((MR_Word) ModeSymName_13)) == (MR_Integer) 1))
      {
        MR_Word ModeModuleName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModeSymName_13, (MR_Integer) 0))));
        MR_String ModeName_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), ModeSymName_13, (MR_Integer) 1))));

        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModeModuleName_16, ModuleName_1);
        if (succeeded)
        {
          MR_Word Var_20;

          {
            Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (ModeName_17));
            MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (ModeArity_14));
          }
          mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0), ((MR_Box) (Var_20)), STATE_VARIABLE_ModeNameArities_0_3, &STATE_VARIABLE_ModeNameArities_21_21);
        }
        else
          STATE_VARIABLE_ModeNameArities_21_21 = STATE_VARIABLE_ModeNameArities_0_3;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_defns.gather_local_mode_names\'/4", (MR_String) "unqualified mode_id name");
          return;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ModeIds_11;
      next_value_of_STATE_VARIABLE_ModeNameArities_0_3 = STATE_VARIABLE_ModeNameArities_21_21;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ModeNameArities_0_3 = next_value_of_STATE_VARIABLE_ModeNameArities_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_defns__gather_local_inst_names_4_p_0(
  MR_Word ModuleName_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_InstNameArities_0_3,
  MR_Word * STATE_VARIABLE_InstNameArities_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_InstNameArities_4 = STATE_VARIABLE_InstNameArities_0_3;
    else
    {
      MR_Word InstId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word InstIds_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word InstSymName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstId_10, (MR_Integer) 0))));
      MR_Integer InstArity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), InstId_10, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_InstNameArities_21_21;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_InstNameArities_0_3;

      if (((MR_tag((MR_Word) InstSymName_13)) == (MR_Integer) 1))
      {
        MR_Word InstModuleName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstSymName_13, (MR_Integer) 0))));
        MR_String InstName_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), InstSymName_13, (MR_Integer) 1))));

        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(InstModuleName_16, ModuleName_1);
        if (succeeded)
        {
          MR_Word Var_20;

          {
            Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (InstName_17));
            MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (InstArity_14));
          }
          mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0), ((MR_Box) (Var_20)), STATE_VARIABLE_InstNameArities_0_3, &STATE_VARIABLE_InstNameArities_21_21);
        }
        else
          STATE_VARIABLE_InstNameArities_21_21 = STATE_VARIABLE_InstNameArities_0_3;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_defns.gather_local_inst_names\'/4", (MR_String) "unqualified inst_id name");
          return;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = InstIds_11;
      next_value_of_STATE_VARIABLE_InstNameArities_0_3 = STATE_VARIABLE_InstNameArities_21_21;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_InstNameArities_0_3 = next_value_of_STATE_VARIABLE_InstNameArities_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_defns__gather_local_type_names_4_p_0(
  MR_Word ModuleName_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_TypeNameArities_0_3,
  MR_Word * STATE_VARIABLE_TypeNameArities_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_TypeNameArities_4 = STATE_VARIABLE_TypeNameArities_0_3;
    else
    {
      MR_Word TypeCtor_10;
      MR_Word TypeCtorDefns_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word TypeCtorSymName_14;
      MR_Integer TypeCtorArity_15;
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_TypeNameArities_23_23;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_TypeNameArities_0_3;

      TypeCtor_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0))));
      TypeCtorSymName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_10, (MR_Integer) 0))));
      TypeCtorArity_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_10, (MR_Integer) 1))));
      if (((MR_tag((MR_Word) TypeCtorSymName_14)) == (MR_Integer) 1))
      {
        MR_Word TypeCtorModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCtorSymName_14, (MR_Integer) 0))));
        MR_String TypeCtorName_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), TypeCtorSymName_14, (MR_Integer) 1))));

        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(TypeCtorModuleName_17, ModuleName_1);
        if (succeeded)
        {
          MR_Word Var_22;

          {
            Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (TypeCtorName_18));
            MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (TypeCtorArity_15));
          }
          mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0), ((MR_Box) (Var_22)), STATE_VARIABLE_TypeNameArities_0_3, &STATE_VARIABLE_TypeNameArities_23_23);
        }
        else
          STATE_VARIABLE_TypeNameArities_23_23 = STATE_VARIABLE_TypeNameArities_0_3;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_defns.gather_local_type_names\'/4", (MR_String) "unqualified type_ctor name");
          return;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = TypeCtorDefns_12;
      next_value_of_STATE_VARIABLE_TypeNameArities_0_3 = STATE_VARIABLE_TypeNameArities_23_23;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_TypeNameArities_0_3 = next_value_of_STATE_VARIABLE_TypeNameArities_0_3;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__hlds_defns____Unify____name_arity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_defns____Unify____name_arity_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_defns____Compare____name_arity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_defns____Compare____name_arity_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_defns____Unify____pred_line_count_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_defns____Unify____pred_line_count_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_defns____Compare____pred_line_count_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_defns____Compare____pred_line_count_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__hlds__hlds_defns__init(void)
{
}

void mercury__hlds__hlds_defns__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0);
	MR_register_type_ctor_info(&hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_pred_line_count_0);
}

void mercury__hlds__hlds_defns__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_defns__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_defns.
