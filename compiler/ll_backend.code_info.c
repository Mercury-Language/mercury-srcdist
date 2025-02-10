/*
** Automatically generated from `code_info.m'
** by the Mercury compiler,
** version rotd-2025-02-10
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


// :- module ll_backend.code_info.
// :- implementation.

/*
INIT mercury__ll_backend__code_info__init
ENDINIT
*/

#include "ll_backend.code_info.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "ll_backend.mih"
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
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.proc_label.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
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
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc_util.mih"
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
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
#include "mdbcomp.feedback.mih"
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
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__code_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo ll_backend__code_info__ll_backend__code_info__field_types_code_info_0_0[2];

static const MR_ConstString ll_backend__code_info__ll_backend__code_info__field_names_code_info_0_0[2];

static const MR_DuFunctorDesc ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_0_0[1];

static const MR_DuPtagLayout ll_backend__code_info__ll_backend__code_info__du_ptag_ordered_code_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_name_ordered_code_info_0[1];

static const MR_Integer ll_backend__code_info__ll_backend__code_info__functor_number_map_code_info_0[1];

static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__continuation_info__type_ctor_info_internal_layout_info_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0ll_backend__continuation_info__type_ctor_info_slot_contents_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__list__ti_list_1ll_backend__layout__type_ctor_info_closure_proc_id_data_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__set_tree234__ti_set_tree234_1ll_backend__layout__type_ctor_info_alloc_site_info_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0;

static const MR_PseudoTypeInfo ll_backend__code_info__ll_backend__code_info__field_types_code_info_persistent_0_0[18];

static const MR_ConstString ll_backend__code_info__ll_backend__code_info__field_names_code_info_persistent_0_0[18];

static const MR_DuArgLocn ll_backend__code_info__ll_backend__code_info__field_locns_code_info_persistent_0_0[18];

static const MR_DuFunctorDesc ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_persistent_0_0;

static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_persistent_0_0[1];

static const MR_DuPtagLayout ll_backend__code_info__ll_backend__code_info__du_ptag_ordered_code_info_persistent_0[1];

static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_name_ordered_code_info_persistent_0[1];

static const MR_Integer ll_backend__code_info__ll_backend__code_info__functor_number_map_code_info_persistent_0[1];

static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__maybe__ti_maybe_1ll_backend__trace_gen__type_ctor_info_trace_info_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__maybe__ti_maybe_1tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_typed_rval_0;

static const MR_PseudoTypeInfo ll_backend__code_info__ll_backend__code_info__field_types_code_info_static_0_0[26];

static const MR_ConstString ll_backend__code_info__ll_backend__code_info__field_names_code_info_static_0_0[26];

static const MR_DuArgLocn ll_backend__code_info__ll_backend__code_info__field_locns_code_info_static_0_0[26];

static const MR_DuFunctorDesc ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_static_0_0;

static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_static_0_0[1];

static const MR_DuPtagLayout ll_backend__code_info__ll_backend__code_info__du_ptag_ordered_code_info_static_0[1];

static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_name_ordered_code_info_static_0[1];

static const MR_Integer ll_backend__code_info__ll_backend__code_info__functor_number_map_code_info_static_0[1];

static const MR_EnumFunctorDesc ll_backend__code_info__ll_backend__code_info__enum_functor_desc_for_call_or_closure_0_0;

static const MR_EnumFunctorDesc ll_backend__code_info__ll_backend__code_info__enum_functor_desc_for_call_or_closure_0_1;

static const MR_EnumFunctorDescPtr ll_backend__code_info__ll_backend__code_info__enum_ordinal_ordered_for_call_or_closure_0[2];

static const MR_EnumFunctorDescPtr ll_backend__code_info__ll_backend__code_info__enum_name_ordered_for_call_or_closure_0[2];

static const MR_Integer ll_backend__code_info__ll_backend__code_info__functor_number_map_for_call_or_closure_0[2];

static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_static_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__code_info____Compare____code_info_persistent_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ll_backend__code_info____Compare____code_info_static_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_persistent_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__code_info__filter_region_vars_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__code_info__max_var_slot_2_p_0(
  MR_Word StackSlots_3,
  MR_Integer * SlotCount_4);

static void MR_CALL 
ll_backend__code_info__max_var_slot_loop_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_Max_0_2,
  MR_Integer * STATE_VARIABLE_Max_3);

static void MR_CALL 
ll_backend__code_info__init_maybe_trace_info_6_p_0(
  MR_Word Globals_7,
  MR_Word ProcInfo_8,
  MR_Word EffTraceLevel_9,
  MR_Word * TraceSlotInfo_10,
  MR_Word STATE_VARIABLE_CI_0_19,
  MR_Word * STATE_VARIABLE_CI_20);

static MR_Word MR_CALL 
ll_backend__code_info__init_exprn_opts_1_f_0(
  MR_Word Globals_3);

static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__code_info____Compare____code_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_persistent_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__code_info____Compare____code_info_persistent_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_static_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__code_info____Compare____code_info_static_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__code_info____Unify____for_call_or_closure_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__code_info____Compare____for_call_or_closure_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__code_info_scalar_common_1[9][2];

static /* final */ const MR_Box ll_backend__code_info_scalar_common_2[4][3];

static /* final */ const MR_Box ll_backend__code_info_scalar_common_3[1][1];

static /* final */ const MR_Box ll_backend__code_info_scalar_common_4[1][6];

static /* final */ const MR_Box ll_backend__code_info_scalar_common_5[1][5];




static /* final */ const MR_Box ll_backend__code_info_scalar_common_1[9][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_closure_proc_id_data_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_trace_info_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__code_info_scalar_common_2[2]))
  },
};

static /* final */ const MR_Box ll_backend__code_info_scalar_common_2[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0))
  },
};

static /* final */ const MR_Box ll_backend__code_info_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box ll_backend__code_info_scalar_common_4[1][6] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box ll_backend__code_info_scalar_common_5[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&ll_backend__code_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__code_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo ll_backend__code_info__ll_backend__code_info__field_types_code_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_static_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_persistent_0)
};

static const MR_ConstString ll_backend__code_info__ll_backend__code_info__field_names_code_info_0_0[2] = {
  (MR_String) "code_info_static",
  (MR_String) "code_info_persistent"
};

static const MR_DuFunctorDesc ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_0_0 = {
  (MR_String) "code_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__code_info__ll_backend__code_info__field_types_code_info_0_0,
  ll_backend__code_info__ll_backend__code_info__field_names_code_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_0_0[1] = { &ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_0_0 };

static const MR_DuPtagLayout ll_backend__code_info__ll_backend__code_info__du_ptag_ordered_code_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_name_ordered_code_info_0[1] = { &ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_0_0 };

static const MR_Integer ll_backend__code_info__ll_backend__code_info__functor_number_map_code_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__code_info____Unify____code_info_0_0_10001)),
  ((MR_Box) (ll_backend__code_info____Compare____code_info_0_0_10001)),
  (MR_String) "ll_backend.code_info",
  (MR_String) "code_info",
  { ll_backend__code_info__ll_backend__code_info__du_name_ordered_code_info_0 },
  { ll_backend__code_info__ll_backend__code_info__du_ptag_ordered_code_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__code_info__ll_backend__code_info__functor_number_map_code_info_0,

};

static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__continuation_info__type_ctor_info_internal_layout_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0ll_backend__continuation_info__type_ctor_info_slot_contents_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
    (MR_TypeInfo) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__list__ti_list_1ll_backend__layout__type_ctor_info_closure_proc_id_data_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__layout__ll_backend__layout__type_ctor_info_closure_proc_id_data_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__set_tree234__ti_set_tree234_1ll_backend__layout__type_ctor_info_alloc_site_info_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_TypeInfo) (&ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0) }
};

static const MR_PseudoTypeInfo ll_backend__code_info__ll_backend__code_info__field_types_code_info_persistent_0_0[18] = {
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__continuation_info__type_ctor_info_internal_layout_info_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_info__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0ll_backend__continuation_info__type_ctor_info_slot_contents_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_info__list__ti_list_1ll_backend__layout__type_ctor_info_closure_proc_id_data_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_info__set_tree234__ti_set_tree234_1ll_backend__layout__type_ctor_info_alloc_site_info_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_info__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_info__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0)
};

static const MR_ConstString ll_backend__code_info__ll_backend__code_info__field_names_code_info_persistent_0_0[18] = {
  (MR_String) "cip_label_num_src",
  (MR_String) "cip_store_succip",
  (MR_String) "cip_label_layout_info",
  (MR_String) "cip_proc_trace_events",
  (MR_String) "cip_max_reg_r_used",
  (MR_String) "cip_max_reg_f_used",
  (MR_String) "cip_stackslot_max",
  (MR_String) "cip_temp_content_map",
  (MR_String) "cip_persistent_temps",
  (MR_String) "cip_closure_layout_seq",
  (MR_String) "cip_closure_layouts",
  (MR_String) "cip_created_temp_frame",
  (MR_String) "cip_static_cell_info",
  (MR_String) "cip_alloc_sites",
  (MR_String) "cip_used_env_vars",
  (MR_String) "cip_ts_string_table_size",
  (MR_String) "cip_ts_rev_string_table",
  (MR_String) "cip_out_of_line_code"
};

static const MR_DuArgLocn ll_backend__code_info__ll_backend__code_info__field_locns_code_info_persistent_0_0[18] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 13,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 14,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 15,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 16,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 17,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_persistent_0_0 = {
  (MR_String) "code_info_persistent",
  INT16_C(18),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__code_info__ll_backend__code_info__field_types_code_info_persistent_0_0,
  ll_backend__code_info__ll_backend__code_info__field_names_code_info_persistent_0_0,
  ll_backend__code_info__ll_backend__code_info__field_locns_code_info_persistent_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_persistent_0_0[1] = { &ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_persistent_0_0 };

static const MR_DuPtagLayout ll_backend__code_info__ll_backend__code_info__du_ptag_ordered_code_info_persistent_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_persistent_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_name_ordered_code_info_persistent_0[1] = { &ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_persistent_0_0 };

static const MR_Integer ll_backend__code_info__ll_backend__code_info__functor_number_map_code_info_persistent_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_persistent_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__code_info____Unify____code_info_persistent_0_0_10001)),
  ((MR_Box) (ll_backend__code_info____Compare____code_info_persistent_0_0_10001)),
  (MR_String) "ll_backend.code_info",
  (MR_String) "code_info_persistent",
  { ll_backend__code_info__ll_backend__code_info__du_name_ordered_code_info_persistent_0 },
  { ll_backend__code_info__ll_backend__code_info__du_ptag_ordered_code_info_persistent_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__code_info__ll_backend__code_info__functor_number_map_code_info_persistent_0,

};

static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__maybe__ti_maybe_1ll_backend__trace_gen__type_ctor_info_trace_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_trace_info_0) }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__maybe__ti_maybe_1tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&ll_backend__code_info__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0) }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_typed_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__code_info__ll_backend__code_info__field_types_code_info_static_0_0[26] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_exprn_opts_0),
  (MR_PseudoTypeInfo) (&libs__trace_params__libs__trace_params__type_ctor_info_eff_trace_level_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0),
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_info__maybe__ti_maybe_1ll_backend__trace_gen__type_ctor_info_trace_info_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_add_trail_ops_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_add_region_ops_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_opt_lcmc_null_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_may_use_atomic_alloc_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint8_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_gc_method_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_info__maybe__ti_maybe_1tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_typed_rval_0),
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0)
};

static const MR_ConstString ll_backend__code_info__ll_backend__code_info__field_names_code_info_static_0_0[26] = {
  (MR_String) "cis_module_info",
  (MR_String) "cis_globals",
  (MR_String) "cis_exprn_opts",
  (MR_String) "cis_eff_trace_level",
  (MR_String) "cis_pred_id",
  (MR_String) "cis_proc_id",
  (MR_String) "cis_pred_info",
  (MR_String) "cis_proc_info",
  (MR_String) "cis_proc_label",
  (MR_String) "cis_var_table",
  (MR_String) "cis_var_slot_count",
  (MR_String) "cis_maybe_trace_info",
  (MR_String) "cis_opt_no_return_calls",
  (MR_String) "cis_emit_trail_ops",
  (MR_String) "cis_opt_trail_ops",
  (MR_String) "cis_emit_region_ops",
  (MR_String) "cis_opt_region_ops",
  (MR_String) "cis_auto_comments",
  (MR_String) "cis_lcmc_null",
  (MR_String) "cis_profile_memory",
  (MR_String) "cis_may_use_atomic_alloc",
  (MR_String) "cis_num_ptag_bits",
  (MR_String) "cis_gc_method",
  (MR_String) "cis_containing_goal_map",
  (MR_String) "cis_const_struct_map",
  (MR_String) "cis_progress_stream"
};

static const MR_DuArgLocn ll_backend__code_info__ll_backend__code_info__field_locns_code_info_static_0_0[26] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 8,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 7,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 6,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 5,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 13,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 14,
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 15,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 16,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 17,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_static_0_0 = {
  (MR_String) "code_info_static",
  INT16_C(26),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__code_info__ll_backend__code_info__field_types_code_info_static_0_0,
  ll_backend__code_info__ll_backend__code_info__field_names_code_info_static_0_0,
  ll_backend__code_info__ll_backend__code_info__field_locns_code_info_static_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_static_0_0[1] = { &ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_static_0_0 };

static const MR_DuPtagLayout ll_backend__code_info__ll_backend__code_info__du_ptag_ordered_code_info_static_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_static_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_name_ordered_code_info_static_0[1] = { &ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_static_0_0 };

static const MR_Integer ll_backend__code_info__ll_backend__code_info__functor_number_map_code_info_static_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_static_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__code_info____Unify____code_info_static_0_0_10001)),
  ((MR_Box) (ll_backend__code_info____Compare____code_info_static_0_0_10001)),
  (MR_String) "ll_backend.code_info",
  (MR_String) "code_info_static",
  { ll_backend__code_info__ll_backend__code_info__du_name_ordered_code_info_static_0 },
  { ll_backend__code_info__ll_backend__code_info__du_ptag_ordered_code_info_static_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__code_info__ll_backend__code_info__functor_number_map_code_info_static_0,

};

static const MR_EnumFunctorDesc ll_backend__code_info__ll_backend__code_info__enum_functor_desc_for_call_or_closure_0_0 = {
  (MR_String) "for_immediate_call",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__code_info__ll_backend__code_info__enum_functor_desc_for_call_or_closure_0_1 = {
  (MR_String) "for_closure",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__code_info__ll_backend__code_info__enum_ordinal_ordered_for_call_or_closure_0[2] = {
  &ll_backend__code_info__ll_backend__code_info__enum_functor_desc_for_call_or_closure_0_0,
  &ll_backend__code_info__ll_backend__code_info__enum_functor_desc_for_call_or_closure_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__code_info__ll_backend__code_info__enum_name_ordered_for_call_or_closure_0[2] = {
  &ll_backend__code_info__ll_backend__code_info__enum_functor_desc_for_call_or_closure_0_1,
  &ll_backend__code_info__ll_backend__code_info__enum_functor_desc_for_call_or_closure_0_0
};

static const MR_Integer ll_backend__code_info__ll_backend__code_info__functor_number_map_for_call_or_closure_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__code_info__ll_backend__code_info__type_ctor_info_for_call_or_closure_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__code_info____Unify____for_call_or_closure_0_0_10001)),
  ((MR_Box) (ll_backend__code_info____Compare____for_call_or_closure_0_0_10001)),
  (MR_String) "ll_backend.code_info",
  (MR_String) "for_call_or_closure",
  { ll_backend__code_info__ll_backend__code_info__enum_name_ordered_for_call_or_closure_0 },
  { ll_backend__code_info__ll_backend__code_info__enum_ordinal_ordered_for_call_or_closure_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__code_info__ll_backend__code_info__functor_number_map_for_call_or_closure_0,

};

void MR_CALL 
ll_backend__code_info____Compare____for_call_or_closure_0_0(
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
ll_backend__code_info____Unify____for_call_or_closure_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_static_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_55 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_56 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_55 == CastY_56);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_67_67;
    MR_Word TypeInfo_68_68;
    MR_Word TypeInfo_69_69;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 7);
    MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 7);
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer ArgX6_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Integer ArgY6_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 9))));
    MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Integer ArgX11_23 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 10))));
    MR_Integer ArgY11_24 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 11))));
    MR_Word ArgY12_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 11))));
    MR_Word ArgX13_27 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 12))) >> 8)) & (MR_Integer) 1);
    MR_Word ArgY13_28 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))) >> 8)) & (MR_Integer) 1);
    MR_Word ArgX14_29 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 12))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgY14_30 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgX15_31 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 12))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgY15_32 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgX16_33 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 12))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgY16_34 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgX17_35 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 12))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgY17_36 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgX18_37 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 12))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY18_38 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX19_39 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 12))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY19_40 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX20_41 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 12))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY20_42 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX21_43 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 12))) & (MR_Integer) 1);
    MR_Word ArgY21_44 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))) & (MR_Integer) 1);
    uint8_t ArgX22_45 = ((uint8_t) (MR_Word) (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 13)));
    uint8_t ArgY22_46 = ((uint8_t) (MR_Word) (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13)));
    MR_Word ArgX23_47 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 14))) & (MR_Integer) 7);
    MR_Word ArgY23_48 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 14))) & (MR_Integer) 7);
    MR_Word ArgX24_49 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 15))));
    MR_Word ArgY24_50 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 15))));
    MR_Word ArgX25_51 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 16))));
    MR_Word ArgY25_52 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 16))));
    MR_Word ArgX26_53 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 17))));
    MR_Word ArgY26_54 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 17))));

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = libs__globals____Unify____globals_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = ll_backend__llds____Unify____exprn_opts_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = libs__trace_params____Unify____eff_trace_level_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
            {
              succeeded = (ArgX6_13 == ArgY6_14);
              if (succeeded)
              {
                succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX7_15, ArgY7_16);
                if (succeeded)
                {
                  succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ArgX8_17, ArgY8_18);
                  if (succeeded)
                  {
                    succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ArgX9_19, ArgY9_20);
                    if (succeeded)
                    {
                      succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX10_21, ArgY10_22);
                      if (succeeded)
                      {
                        succeeded = (ArgX11_23 == ArgY11_24);
                        if (succeeded)
                        {
                          TypeInfo_67_67 = (MR_Word) (&ll_backend__code_info_scalar_common_1[7]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_67_67, ((MR_Box) (ArgX12_25)), ((MR_Box) (ArgY12_26)));
                          if (succeeded)
                          {
                            succeeded = (ArgX13_27 == ArgY13_28);
                            if (succeeded)
                            {
                              succeeded = (ArgX14_29 == ArgY14_30);
                              if (succeeded)
                              {
                                succeeded = (ArgX15_31 == ArgY15_32);
                                if (succeeded)
                                {
                                  succeeded = (ArgX16_33 == ArgY16_34);
                                  if (succeeded)
                                  {
                                    succeeded = (ArgX17_35 == ArgY17_36);
                                    if (succeeded)
                                    {
                                      succeeded = (ArgX18_37 == ArgY18_38);
                                      if (succeeded)
                                      {
                                        succeeded = (ArgX19_39 == ArgY19_40);
                                        if (succeeded)
                                        {
                                          succeeded = (ArgX20_41 == ArgY20_42);
                                          if (succeeded)
                                          {
                                            succeeded = (ArgX21_43 == ArgY21_44);
                                            if (succeeded)
                                            {
                                              succeeded = (ArgX22_45 == ArgY22_46);
                                              if (succeeded)
                                              {
                                                succeeded = (ArgX23_47 == ArgY23_48);
                                                if (succeeded)
                                                {
                                                  TypeInfo_68_68 = (MR_Word) (&ll_backend__code_info_scalar_common_1[8]);
                                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_68_68, ((MR_Box) (ArgX24_49)), ((MR_Box) (ArgY24_50)));
                                                  if (succeeded)
                                                  {
                                                    TypeInfo_69_69 = (MR_Word) (&ll_backend__code_info_scalar_common_2[3]);
                                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_69_69, ((MR_Box) (ArgX25_51)), ((MR_Box) (ArgY25_52)));
                                                    if (succeeded)
                                                      succeeded = mercury__io____Unify____text_output_stream_0_0(ArgX26_53, ArgY26_54);
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__code_info____Compare____code_info_persistent_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_57 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_58 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_57 == CastY_58);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Integer ArgX6_19 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Integer ArgY6_20 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Integer ArgX7_22 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Integer ArgY7_23 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 8))));
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 9))));
    MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 10))));
    MR_Word ArgX12_37 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 11))) & (MR_Integer) 1);
    MR_Word ArgY12_38 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 11))) & (MR_Integer) 1);
    MR_Word ArgX13_40 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))));
    MR_Word ArgY13_41 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 12))));
    MR_Word ArgX14_43 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))));
    MR_Word ArgY14_44 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 13))));
    MR_Word ArgX15_46 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 14))));
    MR_Word ArgY15_47 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 14))));
    MR_Integer ArgX16_49 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 15))));
    MR_Integer ArgY16_50 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 15))));
    MR_Word ArgX17_52 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 16))));
    MR_Word ArgY17_53 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 16))));
    MR_Word ArgX18_55 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 17))));
    MR_Word ArgY18_56 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 17))));
    MR_Word SubResult1_6;

    mercury__counter____Compare____counter_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_77 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_78 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_77 < Var_78);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_77 > Var_78);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_info_scalar_common_2[0]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;
          MR_Integer Var_79 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_80 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_79 < Var_80);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_79 > Var_80);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            succeeded = (ArgX5_16 < ArgY5_17);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (ArgX5_16 > ArgY5_17);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              succeeded = (ArgX6_19 < ArgY6_20);
              if (succeeded)
              {
                SubResult6_21 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (ArgX6_19 > ArgY6_20);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult6_21 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                succeeded = (ArgX7_22 < ArgY7_23);
                if (succeeded)
                {
                  SubResult7_24 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (ArgX7_22 > ArgY7_23);
                  if (succeeded)
                  {
                    SubResult7_24 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult7_24 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_info_scalar_common_2[1]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_info_scalar_common_1[1]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;

                      mercury__counter____Compare____counter_0_0(&SubResult10_33, ArgX10_31, ArgY10_32);
                      succeeded = (SubResult10_33 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;

                        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_info_scalar_common_1[2]), &SubResult11_36, ((MR_Box) (ArgX11_34)), ((MR_Box) (ArgY11_35)));
                        succeeded = (SubResult11_36 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                        {
                          MR_Word SubResult12_39;
                          MR_Integer Var_81 = (MR_Integer) (ArgX12_37);
                          MR_Integer Var_82 = (MR_Integer) (ArgY12_38);

                          succeeded = (Var_81 < Var_82);
                          if (succeeded)
                          {
                            SubResult12_39 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_81 > Var_82);
                            if (succeeded)
                            {
                              SubResult12_39 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult12_39 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult12_39;
                          else
                          {
                            MR_Word SubResult13_42;

                            ll_backend__global_data____Compare____static_cell_info_0_0(&SubResult13_42, ArgX13_40, ArgY13_41);
                            succeeded = (SubResult13_42 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult13_42;
                            else
                            {
                              MR_Word SubResult14_45;

                              mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_info_scalar_common_1[3]), &SubResult14_45, ((MR_Box) (ArgX14_43)), ((MR_Box) (ArgY14_44)));
                              succeeded = (SubResult14_45 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult14_45;
                              else
                              {
                                MR_Word SubResult15_48;

                                mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_info_scalar_common_1[4]), &SubResult15_48, ((MR_Box) (ArgX15_46)), ((MR_Box) (ArgY15_47)));
                                succeeded = (SubResult15_48 != (MR_Integer) 0);
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult15_48;
                                else
                                {
                                  MR_Word SubResult16_51;

                                  succeeded = (ArgX16_49 < ArgY16_50);
                                  if (succeeded)
                                  {
                                    SubResult16_51 = (MR_Integer) 1;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = (ArgX16_49 > ArgY16_50);
                                    if (succeeded)
                                    {
                                      SubResult16_51 = (MR_Integer) 2;
                                      succeeded = MR_TRUE;
                                    }
                                    else
                                    {
                                      succeeded = MR_TRUE;
                                      succeeded = !(succeeded);
                                      if (succeeded)
                                      {
                                        SubResult16_51 = (MR_Integer) 0;
                                        succeeded = MR_TRUE;
                                      }
                                    }
                                  }
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult16_51;
                                  else
                                  {
                                    MR_Word SubResult17_54;

                                    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_info_scalar_common_1[5]), &SubResult17_54, ((MR_Box) (ArgX17_52)), ((MR_Box) (ArgY17_53)));
                                    succeeded = (SubResult17_54 != (MR_Integer) 0);
                                    if (succeeded)
                                      *HeadVar__1_1 = SubResult17_54;
                                    else
                                      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_info_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (ArgX18_55)), ((MR_Box) (ArgY18_56)));
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

void MR_CALL 
ll_backend__code_info____Compare____code_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    ll_backend__code_info____Compare____code_info_static_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Integer CastX_66 = (MR_Integer) (ArgX2_7);
      MR_Integer CastY_67 = (MR_Integer) (ArgY2_8);

      succeeded = (CastX_66 == CastY_67);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
      {
        MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(0, ArgX2_7, (MR_Integer) 0))));
        MR_Word ArgY1_14 = ((MR_Word) ((MR_hl_field(0, ArgY2_8, (MR_Integer) 0))));
        MR_Word ArgX2_16 = ((MR_Unsigned) ((MR_hl_field(0, ArgX2_7, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Word ArgY2_17 = ((MR_Unsigned) ((MR_hl_field(0, ArgY2_8, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Word ArgX3_19 = ((MR_Word) ((MR_hl_field(0, ArgX2_7, (MR_Integer) 2))));
        MR_Word ArgY3_20 = ((MR_Word) ((MR_hl_field(0, ArgY2_8, (MR_Integer) 2))));
        MR_Word ArgX4_22 = ((MR_Unsigned) ((MR_hl_field(0, ArgX2_7, (MR_Integer) 3))) & (MR_Integer) 1);
        MR_Word ArgY4_23 = ((MR_Unsigned) ((MR_hl_field(0, ArgY2_8, (MR_Integer) 3))) & (MR_Integer) 1);
        MR_Integer ArgX5_25 = ((MR_Integer) ((MR_hl_field(0, ArgX2_7, (MR_Integer) 4))));
        MR_Integer ArgY5_26 = ((MR_Integer) ((MR_hl_field(0, ArgY2_8, (MR_Integer) 4))));
        MR_Integer ArgX6_28 = ((MR_Integer) ((MR_hl_field(0, ArgX2_7, (MR_Integer) 5))));
        MR_Integer ArgY6_29 = ((MR_Integer) ((MR_hl_field(0, ArgY2_8, (MR_Integer) 5))));
        MR_Integer ArgX7_31 = ((MR_Integer) ((MR_hl_field(0, ArgX2_7, (MR_Integer) 6))));
        MR_Integer ArgY7_32 = ((MR_Integer) ((MR_hl_field(0, ArgY2_8, (MR_Integer) 6))));
        MR_Word ArgX8_34 = ((MR_Word) ((MR_hl_field(0, ArgX2_7, (MR_Integer) 7))));
        MR_Word ArgY8_35 = ((MR_Word) ((MR_hl_field(0, ArgY2_8, (MR_Integer) 7))));
        MR_Word ArgX9_37 = ((MR_Word) ((MR_hl_field(0, ArgX2_7, (MR_Integer) 8))));
        MR_Word ArgY9_38 = ((MR_Word) ((MR_hl_field(0, ArgY2_8, (MR_Integer) 8))));
        MR_Word ArgX10_40 = ((MR_Word) ((MR_hl_field(0, ArgX2_7, (MR_Integer) 9))));
        MR_Word ArgY10_41 = ((MR_Word) ((MR_hl_field(0, ArgY2_8, (MR_Integer) 9))));
        MR_Word ArgX11_43 = ((MR_Word) ((MR_hl_field(0, ArgX2_7, (MR_Integer) 10))));
        MR_Word ArgY11_44 = ((MR_Word) ((MR_hl_field(0, ArgY2_8, (MR_Integer) 10))));
        MR_Word ArgX12_46 = ((MR_Unsigned) ((MR_hl_field(0, ArgX2_7, (MR_Integer) 11))) & (MR_Integer) 1);
        MR_Word ArgY12_47 = ((MR_Unsigned) ((MR_hl_field(0, ArgY2_8, (MR_Integer) 11))) & (MR_Integer) 1);
        MR_Word ArgX13_49 = ((MR_Word) ((MR_hl_field(0, ArgX2_7, (MR_Integer) 12))));
        MR_Word ArgY13_50 = ((MR_Word) ((MR_hl_field(0, ArgY2_8, (MR_Integer) 12))));
        MR_Word ArgX14_52 = ((MR_Word) ((MR_hl_field(0, ArgX2_7, (MR_Integer) 13))));
        MR_Word ArgY14_53 = ((MR_Word) ((MR_hl_field(0, ArgY2_8, (MR_Integer) 13))));
        MR_Word ArgX15_55 = ((MR_Word) ((MR_hl_field(0, ArgX2_7, (MR_Integer) 14))));
        MR_Word ArgY15_56 = ((MR_Word) ((MR_hl_field(0, ArgY2_8, (MR_Integer) 14))));
        MR_Integer ArgX16_58 = ((MR_Integer) ((MR_hl_field(0, ArgX2_7, (MR_Integer) 15))));
        MR_Integer ArgY16_59 = ((MR_Integer) ((MR_hl_field(0, ArgY2_8, (MR_Integer) 15))));
        MR_Word ArgX17_61 = ((MR_Word) ((MR_hl_field(0, ArgX2_7, (MR_Integer) 16))));
        MR_Word ArgY17_62 = ((MR_Word) ((MR_hl_field(0, ArgY2_8, (MR_Integer) 16))));
        MR_Word ArgX18_64 = ((MR_Word) ((MR_hl_field(0, ArgX2_7, (MR_Integer) 17))));
        MR_Word ArgY18_65 = ((MR_Word) ((MR_hl_field(0, ArgY2_8, (MR_Integer) 17))));
        MR_Word SubResult1_15;

        mercury__counter____Compare____counter_0_0(&SubResult1_15, ArgX1_13, ArgY1_14);
        succeeded = (SubResult1_15 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_15;
        else
        {
          MR_Word SubResult2_18;
          MR_Integer Var_86 = (MR_Integer) (ArgX2_16);
          MR_Integer Var_87 = (MR_Integer) (ArgY2_17);

          succeeded = (Var_86 < Var_87);
          if (succeeded)
          {
            SubResult2_18 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_86 > Var_87);
            if (succeeded)
            {
              SubResult2_18 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult2_18 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult2_18;
          else
          {
            MR_Word SubResult3_21;

            mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_info_scalar_common_2[0]), &SubResult3_21, ((MR_Box) (ArgX3_19)), ((MR_Box) (ArgY3_20)));
            succeeded = (SubResult3_21 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult3_21;
            else
            {
              MR_Word SubResult4_24;
              MR_Integer Var_88 = (MR_Integer) (ArgX4_22);
              MR_Integer Var_89 = (MR_Integer) (ArgY4_23);

              succeeded = (Var_88 < Var_89);
              if (succeeded)
              {
                SubResult4_24 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_88 > Var_89);
                if (succeeded)
                {
                  SubResult4_24 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult4_24 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult4_24;
              else
              {
                MR_Word SubResult5_27;

                succeeded = (ArgX5_25 < ArgY5_26);
                if (succeeded)
                {
                  SubResult5_27 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (ArgX5_25 > ArgY5_26);
                  if (succeeded)
                  {
                    SubResult5_27 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult5_27 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult5_27;
                else
                {
                  MR_Word SubResult6_30;

                  succeeded = (ArgX6_28 < ArgY6_29);
                  if (succeeded)
                  {
                    SubResult6_30 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (ArgX6_28 > ArgY6_29);
                    if (succeeded)
                    {
                      SubResult6_30 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult6_30 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult6_30;
                  else
                  {
                    MR_Word SubResult7_33;

                    succeeded = (ArgX7_31 < ArgY7_32);
                    if (succeeded)
                    {
                      SubResult7_33 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX7_31 > ArgY7_32);
                      if (succeeded)
                      {
                        SubResult7_33 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult7_33 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult7_33;
                    else
                    {
                      MR_Word SubResult8_36;

                      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_info_scalar_common_2[1]), &SubResult8_36, ((MR_Box) (ArgX8_34)), ((MR_Box) (ArgY8_35)));
                      succeeded = (SubResult8_36 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult8_36;
                      else
                      {
                        MR_Word SubResult9_39;

                        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_info_scalar_common_1[1]), &SubResult9_39, ((MR_Box) (ArgX9_37)), ((MR_Box) (ArgY9_38)));
                        succeeded = (SubResult9_39 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult9_39;
                        else
                        {
                          MR_Word SubResult10_42;

                          mercury__counter____Compare____counter_0_0(&SubResult10_42, ArgX10_40, ArgY10_41);
                          succeeded = (SubResult10_42 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult10_42;
                          else
                          {
                            MR_Word SubResult11_45;

                            mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_info_scalar_common_1[2]), &SubResult11_45, ((MR_Box) (ArgX11_43)), ((MR_Box) (ArgY11_44)));
                            succeeded = (SubResult11_45 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult11_45;
                            else
                            {
                              MR_Word SubResult12_48;
                              MR_Integer Var_90 = (MR_Integer) (ArgX12_46);
                              MR_Integer Var_91 = (MR_Integer) (ArgY12_47);

                              succeeded = (Var_90 < Var_91);
                              if (succeeded)
                              {
                                SubResult12_48 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = (Var_90 > Var_91);
                                if (succeeded)
                                {
                                  SubResult12_48 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = MR_TRUE;
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    SubResult12_48 = (MR_Integer) 0;
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                              if (succeeded)
                                *HeadVar__1_1 = SubResult12_48;
                              else
                              {
                                MR_Word SubResult13_51;

                                ll_backend__global_data____Compare____static_cell_info_0_0(&SubResult13_51, ArgX13_49, ArgY13_50);
                                succeeded = (SubResult13_51 != (MR_Integer) 0);
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult13_51;
                                else
                                {
                                  MR_Word SubResult14_54;

                                  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_info_scalar_common_1[3]), &SubResult14_54, ((MR_Box) (ArgX14_52)), ((MR_Box) (ArgY14_53)));
                                  succeeded = (SubResult14_54 != (MR_Integer) 0);
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult14_54;
                                  else
                                  {
                                    MR_Word SubResult15_57;

                                    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_info_scalar_common_1[4]), &SubResult15_57, ((MR_Box) (ArgX15_55)), ((MR_Box) (ArgY15_56)));
                                    succeeded = (SubResult15_57 != (MR_Integer) 0);
                                    if (succeeded)
                                      *HeadVar__1_1 = SubResult15_57;
                                    else
                                    {
                                      MR_Word SubResult16_60;

                                      succeeded = (ArgX16_58 < ArgY16_59);
                                      if (succeeded)
                                      {
                                        SubResult16_60 = (MR_Integer) 1;
                                        succeeded = MR_TRUE;
                                      }
                                      else
                                      {
                                        succeeded = (ArgX16_58 > ArgY16_59);
                                        if (succeeded)
                                        {
                                          SubResult16_60 = (MR_Integer) 2;
                                          succeeded = MR_TRUE;
                                        }
                                        else
                                        {
                                          succeeded = MR_TRUE;
                                          succeeded = !(succeeded);
                                          if (succeeded)
                                          {
                                            SubResult16_60 = (MR_Integer) 0;
                                            succeeded = MR_TRUE;
                                          }
                                        }
                                      }
                                      if (succeeded)
                                        *HeadVar__1_1 = SubResult16_60;
                                      else
                                      {
                                        MR_Word SubResult17_63;

                                        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_info_scalar_common_1[5]), &SubResult17_63, ((MR_Box) (ArgX17_61)), ((MR_Box) (ArgY17_62)));
                                        succeeded = (SubResult17_63 != (MR_Integer) 0);
                                        if (succeeded)
                                          *HeadVar__1_1 = SubResult17_63;
                                        else
                                          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_info_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (ArgX18_64)), ((MR_Box) (ArgY18_65)));
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
ll_backend__code_info____Compare____code_info_static_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_81 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_82 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_81 == CastY_82);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 7);
    MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 7);
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Integer ArgX6_19 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Integer ArgY6_20 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 8))));
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 9))));
    MR_Integer ArgX11_34 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Integer ArgY11_35 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 10))));
    MR_Word ArgX12_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 11))));
    MR_Word ArgY12_38 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 11))));
    MR_Word ArgX13_40 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))) >> 8)) & (MR_Integer) 1);
    MR_Word ArgY13_41 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 12))) >> 8)) & (MR_Integer) 1);
    MR_Word ArgX14_43 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgY14_44 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 12))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgX15_46 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgY15_47 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 12))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgX16_49 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgY16_50 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 12))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgX17_52 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgY17_53 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 12))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgX18_55 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY18_56 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 12))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX19_58 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY19_59 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 12))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX20_61 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY20_62 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 12))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX21_64 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))) & (MR_Integer) 1);
    MR_Word ArgY21_65 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 12))) & (MR_Integer) 1);
    uint8_t ArgX22_67 = ((uint8_t) (MR_Word) (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13)));
    uint8_t ArgY22_68 = ((uint8_t) (MR_Word) (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 13)));
    MR_Word ArgX23_70 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 14))) & (MR_Integer) 7);
    MR_Word ArgY23_71 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 14))) & (MR_Integer) 7);
    MR_Word ArgX24_73 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 15))));
    MR_Word ArgY24_74 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 15))));
    MR_Word ArgX25_76 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 16))));
    MR_Word ArgY25_77 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 16))));
    MR_Word ArgX26_79 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 17))));
    MR_Word ArgY26_80 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 17))));
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      libs__globals____Compare____globals_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        ll_backend__llds____Compare____exprn_opts_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          libs__trace_params____Compare____eff_trace_level_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            hlds__hlds_pred____Compare____pred_id_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              succeeded = (ArgX6_19 < ArgY6_20);
              if (succeeded)
              {
                SubResult6_21 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (ArgX6_19 > ArgY6_20);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult6_21 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                hlds__hlds_pred____Compare____pred_info_0_0(&SubResult7_24, ArgX7_22, ArgY7_23);
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  hlds__hlds_pred____Compare____proc_info_0_0(&SubResult8_27, ArgX8_25, ArgY8_26);
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    mdbcomp__prim_data____Compare____proc_label_0_0(&SubResult9_30, ArgX9_28, ArgY9_29);
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;

                      parse_tree__var_table____Compare____var_table_0_0(&SubResult10_33, ArgX10_31, ArgY10_32);
                      succeeded = (SubResult10_33 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;

                        succeeded = (ArgX11_34 < ArgY11_35);
                        if (succeeded)
                        {
                          SubResult11_36 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (ArgX11_34 > ArgY11_35);
                          if (succeeded)
                          {
                            SubResult11_36 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult11_36 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                        {
                          MR_Word SubResult12_39;

                          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_info_scalar_common_1[7]), &SubResult12_39, ((MR_Box) (ArgX12_37)), ((MR_Box) (ArgY12_38)));
                          succeeded = (SubResult12_39 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult12_39;
                          else
                          {
                            MR_Word SubResult13_42;
                            MR_Integer Var_109 = (MR_Integer) (ArgX13_40);
                            MR_Integer Var_110 = (MR_Integer) (ArgY13_41);

                            succeeded = (Var_109 < Var_110);
                            if (succeeded)
                            {
                              SubResult13_42 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (Var_109 > Var_110);
                              if (succeeded)
                              {
                                SubResult13_42 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult13_42 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                            if (succeeded)
                              *HeadVar__1_1 = SubResult13_42;
                            else
                            {
                              MR_Word SubResult14_45;
                              MR_Integer Var_111 = (MR_Integer) (ArgX14_43);
                              MR_Integer Var_112 = (MR_Integer) (ArgY14_44);

                              succeeded = (Var_111 < Var_112);
                              if (succeeded)
                              {
                                SubResult14_45 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = (Var_111 > Var_112);
                                if (succeeded)
                                {
                                  SubResult14_45 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = MR_TRUE;
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    SubResult14_45 = (MR_Integer) 0;
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                              if (succeeded)
                                *HeadVar__1_1 = SubResult14_45;
                              else
                              {
                                MR_Word SubResult15_48;
                                MR_Integer Var_113 = (MR_Integer) (ArgX15_46);
                                MR_Integer Var_114 = (MR_Integer) (ArgY15_47);

                                succeeded = (Var_113 < Var_114);
                                if (succeeded)
                                {
                                  SubResult15_48 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = (Var_113 > Var_114);
                                  if (succeeded)
                                  {
                                    SubResult15_48 = (MR_Integer) 2;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = MR_TRUE;
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                    {
                                      SubResult15_48 = (MR_Integer) 0;
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult15_48;
                                else
                                {
                                  MR_Word SubResult16_51;
                                  MR_Integer Var_115 = (MR_Integer) (ArgX16_49);
                                  MR_Integer Var_116 = (MR_Integer) (ArgY16_50);

                                  succeeded = (Var_115 < Var_116);
                                  if (succeeded)
                                  {
                                    SubResult16_51 = (MR_Integer) 1;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = (Var_115 > Var_116);
                                    if (succeeded)
                                    {
                                      SubResult16_51 = (MR_Integer) 2;
                                      succeeded = MR_TRUE;
                                    }
                                    else
                                    {
                                      succeeded = MR_TRUE;
                                      succeeded = !(succeeded);
                                      if (succeeded)
                                      {
                                        SubResult16_51 = (MR_Integer) 0;
                                        succeeded = MR_TRUE;
                                      }
                                    }
                                  }
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult16_51;
                                  else
                                  {
                                    MR_Word SubResult17_54;
                                    MR_Integer Var_117 = (MR_Integer) (ArgX17_52);
                                    MR_Integer Var_118 = (MR_Integer) (ArgY17_53);

                                    succeeded = (Var_117 < Var_118);
                                    if (succeeded)
                                    {
                                      SubResult17_54 = (MR_Integer) 1;
                                      succeeded = MR_TRUE;
                                    }
                                    else
                                    {
                                      succeeded = (Var_117 > Var_118);
                                      if (succeeded)
                                      {
                                        SubResult17_54 = (MR_Integer) 2;
                                        succeeded = MR_TRUE;
                                      }
                                      else
                                      {
                                        succeeded = MR_TRUE;
                                        succeeded = !(succeeded);
                                        if (succeeded)
                                        {
                                          SubResult17_54 = (MR_Integer) 0;
                                          succeeded = MR_TRUE;
                                        }
                                      }
                                    }
                                    if (succeeded)
                                      *HeadVar__1_1 = SubResult17_54;
                                    else
                                    {
                                      MR_Word SubResult18_57;
                                      MR_Integer Var_119 = (MR_Integer) (ArgX18_55);
                                      MR_Integer Var_120 = (MR_Integer) (ArgY18_56);

                                      succeeded = (Var_119 < Var_120);
                                      if (succeeded)
                                      {
                                        SubResult18_57 = (MR_Integer) 1;
                                        succeeded = MR_TRUE;
                                      }
                                      else
                                      {
                                        succeeded = (Var_119 > Var_120);
                                        if (succeeded)
                                        {
                                          SubResult18_57 = (MR_Integer) 2;
                                          succeeded = MR_TRUE;
                                        }
                                        else
                                        {
                                          succeeded = MR_TRUE;
                                          succeeded = !(succeeded);
                                          if (succeeded)
                                          {
                                            SubResult18_57 = (MR_Integer) 0;
                                            succeeded = MR_TRUE;
                                          }
                                        }
                                      }
                                      if (succeeded)
                                        *HeadVar__1_1 = SubResult18_57;
                                      else
                                      {
                                        MR_Word SubResult19_60;
                                        MR_Integer Var_121 = (MR_Integer) (ArgX19_58);
                                        MR_Integer Var_122 = (MR_Integer) (ArgY19_59);

                                        succeeded = (Var_121 < Var_122);
                                        if (succeeded)
                                        {
                                          SubResult19_60 = (MR_Integer) 1;
                                          succeeded = MR_TRUE;
                                        }
                                        else
                                        {
                                          succeeded = (Var_121 > Var_122);
                                          if (succeeded)
                                          {
                                            SubResult19_60 = (MR_Integer) 2;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            succeeded = MR_TRUE;
                                            succeeded = !(succeeded);
                                            if (succeeded)
                                            {
                                              SubResult19_60 = (MR_Integer) 0;
                                              succeeded = MR_TRUE;
                                            }
                                          }
                                        }
                                        if (succeeded)
                                          *HeadVar__1_1 = SubResult19_60;
                                        else
                                        {
                                          MR_Word SubResult20_63;
                                          MR_Integer Var_123 = (MR_Integer) (ArgX20_61);
                                          MR_Integer Var_124 = (MR_Integer) (ArgY20_62);

                                          succeeded = (Var_123 < Var_124);
                                          if (succeeded)
                                          {
                                            SubResult20_63 = (MR_Integer) 1;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            succeeded = (Var_123 > Var_124);
                                            if (succeeded)
                                            {
                                              SubResult20_63 = (MR_Integer) 2;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              succeeded = MR_TRUE;
                                              succeeded = !(succeeded);
                                              if (succeeded)
                                              {
                                                SubResult20_63 = (MR_Integer) 0;
                                                succeeded = MR_TRUE;
                                              }
                                            }
                                          }
                                          if (succeeded)
                                            *HeadVar__1_1 = SubResult20_63;
                                          else
                                          {
                                            MR_Word SubResult21_66;
                                            MR_Integer Var_125 = (MR_Integer) (ArgX21_64);
                                            MR_Integer Var_126 = (MR_Integer) (ArgY21_65);

                                            succeeded = (Var_125 < Var_126);
                                            if (succeeded)
                                            {
                                              SubResult21_66 = (MR_Integer) 1;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              succeeded = (Var_125 > Var_126);
                                              if (succeeded)
                                              {
                                                SubResult21_66 = (MR_Integer) 2;
                                                succeeded = MR_TRUE;
                                              }
                                              else
                                              {
                                                succeeded = MR_TRUE;
                                                succeeded = !(succeeded);
                                                if (succeeded)
                                                {
                                                  SubResult21_66 = (MR_Integer) 0;
                                                  succeeded = MR_TRUE;
                                                }
                                              }
                                            }
                                            if (succeeded)
                                              *HeadVar__1_1 = SubResult21_66;
                                            else
                                            {
                                              MR_Word SubResult22_69;

                                              succeeded = (ArgX22_67 < ArgY22_68);
                                              if (succeeded)
                                              {
                                                SubResult22_69 = (MR_Integer) 1;
                                                succeeded = MR_TRUE;
                                              }
                                              else
                                              {
                                                succeeded = (ArgX22_67 > ArgY22_68);
                                                if (succeeded)
                                                {
                                                  SubResult22_69 = (MR_Integer) 2;
                                                  succeeded = MR_TRUE;
                                                }
                                                else
                                                {
                                                  succeeded = MR_TRUE;
                                                  succeeded = !(succeeded);
                                                  if (succeeded)
                                                  {
                                                    SubResult22_69 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
                                                }
                                              }
                                              if (succeeded)
                                                *HeadVar__1_1 = SubResult22_69;
                                              else
                                              {
                                                MR_Word SubResult23_72;
                                                MR_Integer Var_127 = (MR_Integer) (ArgX23_70);
                                                MR_Integer Var_128 = (MR_Integer) (ArgY23_71);

                                                succeeded = (Var_127 < Var_128);
                                                if (succeeded)
                                                {
                                                  SubResult23_72 = (MR_Integer) 1;
                                                  succeeded = MR_TRUE;
                                                }
                                                else
                                                {
                                                  succeeded = (Var_127 > Var_128);
                                                  if (succeeded)
                                                  {
                                                    SubResult23_72 = (MR_Integer) 2;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  else
                                                  {
                                                    succeeded = MR_TRUE;
                                                    succeeded = !(succeeded);
                                                    if (succeeded)
                                                    {
                                                      SubResult23_72 = (MR_Integer) 0;
                                                      succeeded = MR_TRUE;
                                                    }
                                                  }
                                                }
                                                if (succeeded)
                                                  *HeadVar__1_1 = SubResult23_72;
                                                else
                                                {
                                                  MR_Word SubResult24_75;

                                                  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_info_scalar_common_1[8]), &SubResult24_75, ((MR_Box) (ArgX24_73)), ((MR_Box) (ArgY24_74)));
                                                  succeeded = (SubResult24_75 != (MR_Integer) 0);
                                                  if (succeeded)
                                                    *HeadVar__1_1 = SubResult24_75;
                                                  else
                                                  {
                                                    MR_Word SubResult25_78;

                                                    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_info_scalar_common_2[3]), &SubResult25_78, ((MR_Box) (ArgX25_76)), ((MR_Box) (ArgY25_77)));
                                                    succeeded = (SubResult25_78 != (MR_Integer) 0);
                                                    if (succeeded)
                                                      *HeadVar__1_1 = SubResult25_78;
                                                    else
                                                      mercury__io____Compare____text_output_stream_0_0(HeadVar__1_1, ArgX26_79, ArgY26_80);
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
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
ll_backend__code_info____Unify____code_info_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer CastX_61 = (MR_Integer) (ArgX1_3);
    MR_Integer CastY_62 = (MR_Integer) (ArgY1_4);

    succeeded = (CastX_61 == CastY_62);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_67_73;
      MR_Word TypeInfo_68_74;
      MR_Word TypeInfo_69_75;
      MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 0))));
      MR_Word ArgY1_10 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 0))));
      MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 1))));
      MR_Word ArgY2_12 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 1))));
      MR_Word ArgX3_13 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 2))));
      MR_Word ArgY3_14 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 2))));
      MR_Word ArgX4_15 = ((MR_Unsigned) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 3))) & (MR_Integer) 7);
      MR_Word ArgY4_16 = ((MR_Unsigned) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 3))) & (MR_Integer) 7);
      MR_Word ArgX5_17 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 4))));
      MR_Word ArgY5_18 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 4))));
      MR_Integer ArgX6_19 = ((MR_Integer) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 5))));
      MR_Integer ArgY6_20 = ((MR_Integer) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 5))));
      MR_Word ArgX7_21 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 6))));
      MR_Word ArgY7_22 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 6))));
      MR_Word ArgX8_23 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 7))));
      MR_Word ArgY8_24 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 7))));
      MR_Word ArgX9_25 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 8))));
      MR_Word ArgY9_26 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 8))));
      MR_Word ArgX10_27 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 9))));
      MR_Word ArgY10_28 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 9))));
      MR_Integer ArgX11_29 = ((MR_Integer) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 10))));
      MR_Integer ArgY11_30 = ((MR_Integer) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 10))));
      MR_Word ArgX12_31 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 11))));
      MR_Word ArgY12_32 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 11))));
      MR_Word ArgX13_33 = ((((MR_Unsigned) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 12))) >> 8)) & (MR_Integer) 1);
      MR_Word ArgY13_34 = ((((MR_Unsigned) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 12))) >> 8)) & (MR_Integer) 1);
      MR_Word ArgX14_35 = ((((MR_Unsigned) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 12))) >> 7)) & (MR_Integer) 1);
      MR_Word ArgY14_36 = ((((MR_Unsigned) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 12))) >> 7)) & (MR_Integer) 1);
      MR_Word ArgX15_37 = ((((MR_Unsigned) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 12))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgY15_38 = ((((MR_Unsigned) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 12))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgX16_39 = ((((MR_Unsigned) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 12))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgY16_40 = ((((MR_Unsigned) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 12))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgX17_41 = ((((MR_Unsigned) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 12))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgY17_42 = ((((MR_Unsigned) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 12))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgX18_43 = ((((MR_Unsigned) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 12))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgY18_44 = ((((MR_Unsigned) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 12))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgX19_45 = ((((MR_Unsigned) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 12))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY19_46 = ((((MR_Unsigned) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 12))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX20_47 = ((((MR_Unsigned) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 12))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY20_48 = ((((MR_Unsigned) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 12))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX21_49 = ((MR_Unsigned) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 12))) & (MR_Integer) 1);
      MR_Word ArgY21_50 = ((MR_Unsigned) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 12))) & (MR_Integer) 1);
      uint8_t ArgX22_51 = ((uint8_t) (MR_Word) (MR_hl_field(0, ArgX1_3, (MR_Integer) 13)));
      uint8_t ArgY22_52 = ((uint8_t) (MR_Word) (MR_hl_field(0, ArgY1_4, (MR_Integer) 13)));
      MR_Word ArgX23_53 = ((MR_Unsigned) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 14))) & (MR_Integer) 7);
      MR_Word ArgY23_54 = ((MR_Unsigned) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 14))) & (MR_Integer) 7);
      MR_Word ArgX24_55 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 15))));
      MR_Word ArgY24_56 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 15))));
      MR_Word ArgX25_57 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 16))));
      MR_Word ArgY25_58 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 16))));
      MR_Word ArgX26_59 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 17))));
      MR_Word ArgY26_60 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 17))));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_9, ArgY1_10);
      if (succeeded)
      {
        succeeded = libs__globals____Unify____globals_0_0(ArgX2_11, ArgY2_12);
        if (succeeded)
        {
          succeeded = ll_backend__llds____Unify____exprn_opts_0_0(ArgX3_13, ArgY3_14);
          if (succeeded)
          {
            succeeded = libs__trace_params____Unify____eff_trace_level_0_0(ArgX4_15, ArgY4_16);
            if (succeeded)
            {
              succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX5_17, ArgY5_18);
              if (succeeded)
              {
                succeeded = (ArgX6_19 == ArgY6_20);
                if (succeeded)
                {
                  succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX7_21, ArgY7_22);
                  if (succeeded)
                  {
                    succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ArgX8_23, ArgY8_24);
                    if (succeeded)
                    {
                      succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ArgX9_25, ArgY9_26);
                      if (succeeded)
                      {
                        succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX10_27, ArgY10_28);
                        if (succeeded)
                        {
                          succeeded = (ArgX11_29 == ArgY11_30);
                          if (succeeded)
                          {
                            TypeInfo_67_73 = (MR_Word) (&ll_backend__code_info_scalar_common_1[7]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_67_73, ((MR_Box) (ArgX12_31)), ((MR_Box) (ArgY12_32)));
                            if (succeeded)
                            {
                              succeeded = (ArgX13_33 == ArgY13_34);
                              if (succeeded)
                              {
                                succeeded = (ArgX14_35 == ArgY14_36);
                                if (succeeded)
                                {
                                  succeeded = (ArgX15_37 == ArgY15_38);
                                  if (succeeded)
                                  {
                                    succeeded = (ArgX16_39 == ArgY16_40);
                                    if (succeeded)
                                    {
                                      succeeded = (ArgX17_41 == ArgY17_42);
                                      if (succeeded)
                                      {
                                        succeeded = (ArgX18_43 == ArgY18_44);
                                        if (succeeded)
                                        {
                                          succeeded = (ArgX19_45 == ArgY19_46);
                                          if (succeeded)
                                          {
                                            succeeded = (ArgX20_47 == ArgY20_48);
                                            if (succeeded)
                                            {
                                              succeeded = (ArgX21_49 == ArgY21_50);
                                              if (succeeded)
                                              {
                                                succeeded = (ArgX22_51 == ArgY22_52);
                                                if (succeeded)
                                                {
                                                  succeeded = (ArgX23_53 == ArgY23_54);
                                                  if (succeeded)
                                                  {
                                                    TypeInfo_68_74 = (MR_Word) (&ll_backend__code_info_scalar_common_1[8]);
                                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_68_74, ((MR_Box) (ArgX24_55)), ((MR_Box) (ArgY24_56)));
                                                    if (succeeded)
                                                    {
                                                      TypeInfo_69_75 = (MR_Word) (&ll_backend__code_info_scalar_common_2[3]);
                                                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_69_75, ((MR_Box) (ArgX25_57)), ((MR_Box) (ArgY25_58)));
                                                      if (succeeded)
                                                        succeeded = mercury__io____Unify____text_output_stream_0_0(ArgX26_59, ArgY26_60);
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
      succeeded = ll_backend__code_info____Unify____code_info_persistent_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_persistent_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_39 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_40 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_39 == CastY_40);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_42_42;
    MR_Word TypeInfo_43_43;
    MR_Word TypeInfo_44_44;
    MR_Word TypeInfo_46_46;
    MR_Word TypeInfo_48_48;
    MR_Word TypeInfo_49_49;
    MR_Word TypeInfo_50_50;
    MR_Word TypeInfo_51_51;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer ArgX6_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Integer ArgY6_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Integer ArgX7_15 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Integer ArgY7_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 9))));
    MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 10))));
    MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Word ArgX12_25 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 11))) & (MR_Integer) 1);
    MR_Word ArgY12_26 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 11))) & (MR_Integer) 1);
    MR_Word ArgX13_27 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 12))));
    MR_Word ArgY13_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))));
    MR_Word ArgX14_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 13))));
    MR_Word ArgY14_30 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))));
    MR_Word ArgX15_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 14))));
    MR_Word ArgY15_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 14))));
    MR_Integer ArgX16_33 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 15))));
    MR_Integer ArgY16_34 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 15))));
    MR_Word ArgX17_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 16))));
    MR_Word ArgY17_36 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 16))));
    MR_Word ArgX18_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 17))));
    MR_Word ArgY18_38 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 17))));

    succeeded = mercury__counter____Unify____counter_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        TypeInfo_42_42 = (MR_Word) (&ll_backend__code_info_scalar_common_2[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_42_42, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
            {
              succeeded = (ArgX6_13 == ArgY6_14);
              if (succeeded)
              {
                succeeded = (ArgX7_15 == ArgY7_16);
                if (succeeded)
                {
                  TypeInfo_43_43 = (MR_Word) (&ll_backend__code_info_scalar_common_2[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_43_43, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  if (succeeded)
                  {
                    TypeInfo_44_44 = (MR_Word) (&ll_backend__code_info_scalar_common_1[1]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_44_44, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    if (succeeded)
                    {
                      succeeded = mercury__counter____Unify____counter_0_0(ArgX10_21, ArgY10_22);
                      if (succeeded)
                      {
                        TypeInfo_46_46 = (MR_Word) (&ll_backend__code_info_scalar_common_1[2]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_46_46, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
                        if (succeeded)
                        {
                          succeeded = (ArgX12_25 == ArgY12_26);
                          if (succeeded)
                          {
                            succeeded = ll_backend__global_data____Unify____static_cell_info_0_0(ArgX13_27, ArgY13_28);
                            if (succeeded)
                            {
                              TypeInfo_48_48 = (MR_Word) (&ll_backend__code_info_scalar_common_1[3]);
                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_48_48, ((MR_Box) (ArgX14_29)), ((MR_Box) (ArgY14_30)));
                              if (succeeded)
                              {
                                TypeInfo_49_49 = (MR_Word) (&ll_backend__code_info_scalar_common_1[4]);
                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_49_49, ((MR_Box) (ArgX15_31)), ((MR_Box) (ArgY15_32)));
                                if (succeeded)
                                {
                                  succeeded = (ArgX16_33 == ArgY16_34);
                                  if (succeeded)
                                  {
                                    TypeInfo_50_50 = (MR_Word) (&ll_backend__code_info_scalar_common_1[5]);
                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_50_50, ((MR_Box) (ArgX17_35)), ((MR_Box) (ArgY17_36)));
                                    if (succeeded)
                                    {
                                      TypeInfo_51_51 = (MR_Word) (&ll_backend__code_info_scalar_common_1[6]);
                                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_51_51, ((MR_Box) (ArgX18_37)), ((MR_Box) (ArgY18_38)));
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

MR_Integer MR_CALL 
ll_backend__code_info__round_det_stack_frame_size_2_f_0(
  MR_Word CI_4,
  MR_Integer NumSlots_5)
{
  MR_bool succeeded;
  MR_Integer NumSlotsRoundup_6;
  MR_Word ExprnOpts_7;
  MR_Word Var_8;
  MR_Word Var_10;

  succeeded = mercury__int__odd_1_p_0(NumSlots_5);
  if (succeeded)
  {
    Var_10 = ((MR_Word) ((MR_hl_field(0, CI_4, (MR_Integer) 0))));
    ExprnOpts_7 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 2))));
    Var_8 = ll_backend__llds__get_det_stack_float_width_1_f_0(ExprnOpts_7);
    succeeded = (Var_8 == (MR_Integer) 1);
  }
  if (succeeded)
    NumSlotsRoundup_6 = (MR_Integer) ((MR_Unsigned) NumSlots_5 + (MR_Unsigned) 1);
  else
    NumSlotsRoundup_6 = NumSlots_5;
  return NumSlotsRoundup_6;
}

void MR_CALL 
ll_backend__code_info__get_total_stackslot_count_2_p_0(
  MR_Word CI_3,
  MR_Integer * NumSlots_4)
{
  MR_Integer SlotsForVars_5;
  MR_Integer SlotsForTemps_6;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 1))));

  SlotsForVars_5 = ((MR_Integer) ((MR_hl_field(0, Var_7, (MR_Integer) 10))));
  SlotsForTemps_6 = ((MR_Integer) ((MR_hl_field(0, Var_8, (MR_Integer) 6))));
  *NumSlots_4 = (MR_Integer) ((MR_Unsigned) SlotsForVars_5 + (MR_Unsigned) SlotsForTemps_6);
}

void MR_CALL 
ll_backend__code_info__get_variable_slot_3_p_0(
  MR_Word CI_4,
  MR_Word Var_5,
  MR_Word * Slot_6)
{
  MR_bool succeeded;
  MR_Word StackSlots_7;
  MR_Word ProcInfo_37;
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, CI_4, (MR_Integer) 0))));
  MR_Word SlotLocn_8;
  MR_Box conv0_SlotLocn_8;

  ProcInfo_37 = ((MR_Word) ((MR_hl_field(0, Var_38, (MR_Integer) 7))));
  hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(ProcInfo_37, &StackSlots_7);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__code_info_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), StackSlots_7, ((MR_Box) (Var_5)), &conv0_SlotLocn_8);
  if (succeeded)
  {
    SlotLocn_8 = ((MR_Word) (conv0_SlotLocn_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    *Slot_6 = ll_backend__llds__stack_slot_to_lval_1_f_0(SlotLocn_8);
  else
  {
    MR_Word VarTable_9;
    MR_Word Entry_10;
    MR_String Name_11;
    MR_Integer VarNum_12;
    MR_String Msg_13;
    MR_String Var_25;
    MR_String Var_32;
    MR_String Var_34;
    MR_String Var_35;
    MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, CI_4, (MR_Integer) 0))));

    VarTable_9 = ((MR_Word) ((MR_hl_field(0, Var_65, (MR_Integer) 9))));
    parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_9, Var_5, &Entry_10);
    Name_11 = parse_tree__var_table__var_entry_name_2_f_0(Var_5, Entry_10);
    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_5, &VarNum_12);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__code_info_scalar_common_3[0]), VarNum_12, &Var_25);
    Var_32 = mercury__string__f_43_43_2_f_0(Var_25, (MR_String) ") not found");
    Var_34 = mercury__string__f_43_43_2_f_0((MR_String) "\' (", Var_32);
    Var_35 = mercury__string__f_43_43_2_f_0(Name_11, Var_34);
    Msg_13 = mercury__string__f_43_43_2_f_0((MR_String) "variable \140", Var_35);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.code_info.get_variable_slot\'/3", Msg_13);
      return;
    }
  }
}

void MR_CALL 
ll_backend__code_info__should_trace_code_gen_2_p_0(
  MR_Word CI_3,
  MR_Word * ShouldDebug_4)
{
  MR_bool succeeded;
  MR_Word PredId_5;
  MR_Integer PredIdInt_6;
  MR_Word ModuleInfo_7;
  MR_Word Globals_8;
  MR_Integer DebugPredIdInt_9;
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));
  MR_Word Var_39;

  PredId_5 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 4))));
  hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_5, &PredIdInt_6);
  Var_39 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));
  ModuleInfo_7 = ((MR_Word) ((MR_hl_field(0, Var_39, (MR_Integer) 0))));
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_8);
  libs__globals__lookup_int_option_3_p_0(Globals_8, (MR_Integer) 117, &DebugPredIdInt_9);
  succeeded = (PredIdInt_6 == DebugPredIdInt_9);
  if (succeeded)
  {
    MR_Word ProgressStream_10;
    MR_Word Var_66 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));

    ProgressStream_10 = ((MR_Word) ((MR_hl_field(0, Var_66, (MR_Integer) 17))));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *ShouldDebug_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ProgressStream_10));
    }
  }
  else
    *ShouldDebug_4 = (MR_Word) ((MR_Unsigned) 0U);
}

void MR_CALL 
ll_backend__code_info__add_out_of_line_code_3_p_0(
  MR_Word NewCode_4,
  MR_Word STATE_VARIABLE_CI_0_8,
  MR_Word * STATE_VARIABLE_CI_9)
{
  MR_Word Code0_6;
  MR_Word Code_7;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_8, (MR_Integer) 1))));
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Integer Var_37;
  MR_Integer Var_38;
  MR_Integer Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Integer Var_48;
  MR_Word Var_49;

  Code0_6 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 17))));
  Code_7 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Code0_6, NewCode_4);
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_8, (MR_Integer) 0))));
  Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_8, (MR_Integer) 1))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 0))));
  Var_34 = ((MR_Unsigned) ((MR_hl_field(0, Var_12, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_35 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 2))));
  Var_36 = ((MR_Unsigned) ((MR_hl_field(0, Var_12, (MR_Integer) 3))) & (MR_Integer) 1);
  Var_37 = ((MR_Integer) ((MR_hl_field(0, Var_12, (MR_Integer) 4))));
  Var_38 = ((MR_Integer) ((MR_hl_field(0, Var_12, (MR_Integer) 5))));
  Var_39 = ((MR_Integer) ((MR_hl_field(0, Var_12, (MR_Integer) 6))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 7))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 8))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 9))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 10))));
  Var_44 = ((MR_Unsigned) ((MR_hl_field(0, Var_12, (MR_Integer) 11))) & (MR_Integer) 1);
  Var_45 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 12))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 13))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 14))));
  Var_48 = ((MR_Integer) ((MR_hl_field(0, Var_12, (MR_Integer) 15))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 16))));
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (18 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_13, 1) = (MR_Box) ((MR_Unsigned) (Var_34));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_13, 3) = (MR_Box) ((MR_Unsigned) (Var_36));
    MR_hl_field(0, Var_13, 4) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_13, 5) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_13, 6) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_13, 7) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_13, 8) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_13, 9) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_13, 10) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_13, 11) = (MR_Box) ((MR_Unsigned) (Var_44));
    MR_hl_field(0, Var_13, 12) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_13, 13) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_13, 14) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_13, 15) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_13, 16) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_13, 17) = ((MR_Box) (Code_7));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CI_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_13));
  }
}

void MR_CALL 
ll_backend__code_info__get_containing_goal_map_2_p_0(
  MR_Word CI_3,
  MR_Word * ContainingGoalMap_4)
{
  MR_Word MaybeContainingGoalMap_5;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));

  MaybeContainingGoalMap_5 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 15))));
  if ((MaybeContainingGoalMap_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.code_info.get_containing_goal_map\'/2", (MR_String) "no map");
      return;
    }
  else
    *ContainingGoalMap_4 = ((MR_Word) ((MR_hl_field(1, MaybeContainingGoalMap_5, (MR_Integer) 0))));
}

MR_Word MR_CALL 
ll_backend__code_info__should_add_region_ops_2_f_0(
  MR_Word CodeInfo_4,
  MR_Word _GoalInfo_5)
{
  MR_Word AddRegionOps_6;

  AddRegionOps_6 = ll_backend__code_info__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_104_111_117_108_100_95_97_100_100_95_114_101_103_105_111_110_95_111_112_115_95_95_91_50_93_95_48_2_f_0(CodeInfo_4);
  return AddRegionOps_6;
}

MR_Word MR_CALL 
ll_backend__code_info__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_104_111_117_108_100_95_97_100_100_95_114_101_103_105_111_110_95_111_112_115_95_95_91_50_93_95_48_2_f_0(
  MR_Word CodeInfo_4)
{
  MR_Word AddRegionOps_6;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, CodeInfo_4, (MR_Integer) 0))));

  AddRegionOps_6 = ((((MR_Unsigned) ((MR_hl_field(0, Var_7, (MR_Integer) 12))) >> 5)) & (MR_Integer) 1);
  return AddRegionOps_6;
}

MR_Word MR_CALL 
ll_backend__code_info__should_add_trail_ops_2_f_0(
  MR_Word CodeInfo_4,
  MR_Word _GoalInfo_5)
{
  MR_Word AddTrailOps_6;

  AddTrailOps_6 = ll_backend__code_info__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_104_111_117_108_100_95_97_100_100_95_116_114_97_105_108_95_111_112_115_95_95_91_50_93_95_48_2_f_0(CodeInfo_4);
  return AddTrailOps_6;
}

MR_Word MR_CALL 
ll_backend__code_info__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_104_111_117_108_100_95_97_100_100_95_116_114_97_105_108_95_111_112_115_95_95_91_50_93_95_48_2_f_0(
  MR_Word CodeInfo_4)
{
  MR_Word AddTrailOps_6;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, CodeInfo_4, (MR_Integer) 0))));

  AddTrailOps_6 = ((((MR_Unsigned) ((MR_hl_field(0, Var_7, (MR_Integer) 12))) >> 7)) & (MR_Integer) 1);
  return AddTrailOps_6;
}

void MR_CALL 
ll_backend__code_info__maybe_add_alloc_site_info_6_p_0(
  MR_Word Context_7,
  MR_String VarTypeMsg_8,
  MR_Integer Size_9,
  MR_Word * MaybeAllocId_10,
  MR_Word STATE_VARIABLE_CI_0_14,
  MR_Word * STATE_VARIABLE_CI_15)
{
  MR_Word ProfileMemory_12;
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_14, (MR_Integer) 0))));

  ProfileMemory_12 = ((((MR_Unsigned) ((MR_hl_field(0, Var_16, (MR_Integer) 12))) >> 1)) & (MR_Integer) 1);
  switch (ProfileMemory_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *MaybeAllocId_10 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_CI_15 = STATE_VARIABLE_CI_0_14;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word AllocId_13;

        ll_backend__code_info__add_alloc_site_info_6_p_0(Context_7, VarTypeMsg_8, Size_9, &AllocId_13, STATE_VARIABLE_CI_0_14, STATE_VARIABLE_CI_15);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeAllocId_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (AllocId_13));
        }
      }
      break;
  }
}

void MR_CALL 
ll_backend__code_info__add_alloc_site_info_6_p_0(
  MR_Word Context_7,
  MR_String VarTypeMsg_8,
  MR_Integer Size_9,
  MR_Word * AllocId_10,
  MR_Word STATE_VARIABLE_CI_0_16,
  MR_Word * STATE_VARIABLE_CI_17)
{
  MR_Word ProcLabel_12;
  MR_Word AllocSite_13;
  MR_Word AllocSites0_14;
  MR_Word AllocSites_15;
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_16, (MR_Integer) 0))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_16, (MR_Integer) 1))));
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Integer Var_72;
  MR_Integer Var_73;
  MR_Integer Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_82;
  MR_Integer Var_83;
  MR_Word Var_84;
  MR_Word Var_85;

  ProcLabel_12 = ((MR_Word) ((MR_hl_field(0, Var_19, (MR_Integer) 8))));
  {
    AllocSite_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, AllocSite_13, 0) = ((MR_Box) (ProcLabel_12));
    MR_hl_field(0, AllocSite_13, 1) = ((MR_Box) (Context_7));
    MR_hl_field(0, AllocSite_13, 2) = ((MR_Box) (VarTypeMsg_8));
    MR_hl_field(0, AllocSite_13, 3) = ((MR_Box) (Size_9));
  }
  *AllocId_10 = (MR_Word) (AllocSite_13);
  AllocSites0_14 = ((MR_Word) ((MR_hl_field(0, Var_20, (MR_Integer) 13))));
  mercury__set_tree234__insert_3_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0), ((MR_Box) (AllocSite_13)), AllocSites0_14, &AllocSites_15);
  Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_16, (MR_Integer) 0))));
  Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_16, (MR_Integer) 1))));
  Var_68 = ((MR_Word) ((MR_hl_field(0, Var_65, (MR_Integer) 0))));
  Var_69 = ((MR_Unsigned) ((MR_hl_field(0, Var_65, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_70 = ((MR_Word) ((MR_hl_field(0, Var_65, (MR_Integer) 2))));
  Var_71 = ((MR_Unsigned) ((MR_hl_field(0, Var_65, (MR_Integer) 3))) & (MR_Integer) 1);
  Var_72 = ((MR_Integer) ((MR_hl_field(0, Var_65, (MR_Integer) 4))));
  Var_73 = ((MR_Integer) ((MR_hl_field(0, Var_65, (MR_Integer) 5))));
  Var_74 = ((MR_Integer) ((MR_hl_field(0, Var_65, (MR_Integer) 6))));
  Var_75 = ((MR_Word) ((MR_hl_field(0, Var_65, (MR_Integer) 7))));
  Var_76 = ((MR_Word) ((MR_hl_field(0, Var_65, (MR_Integer) 8))));
  Var_77 = ((MR_Word) ((MR_hl_field(0, Var_65, (MR_Integer) 9))));
  Var_78 = ((MR_Word) ((MR_hl_field(0, Var_65, (MR_Integer) 10))));
  Var_79 = ((MR_Unsigned) ((MR_hl_field(0, Var_65, (MR_Integer) 11))) & (MR_Integer) 1);
  Var_80 = ((MR_Word) ((MR_hl_field(0, Var_65, (MR_Integer) 12))));
  Var_82 = ((MR_Word) ((MR_hl_field(0, Var_65, (MR_Integer) 14))));
  Var_83 = ((MR_Integer) ((MR_hl_field(0, Var_65, (MR_Integer) 15))));
  Var_84 = ((MR_Word) ((MR_hl_field(0, Var_65, (MR_Integer) 16))));
  Var_85 = ((MR_Word) ((MR_hl_field(0, Var_65, (MR_Integer) 17))));
  {
    Var_66 = (MR_Word) MR_new_object(MR_Word, (18 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_66, 0) = ((MR_Box) (Var_68));
    MR_hl_field(0, Var_66, 1) = (MR_Box) ((MR_Unsigned) (Var_69));
    MR_hl_field(0, Var_66, 2) = ((MR_Box) (Var_70));
    MR_hl_field(0, Var_66, 3) = (MR_Box) ((MR_Unsigned) (Var_71));
    MR_hl_field(0, Var_66, 4) = ((MR_Box) (Var_72));
    MR_hl_field(0, Var_66, 5) = ((MR_Box) (Var_73));
    MR_hl_field(0, Var_66, 6) = ((MR_Box) (Var_74));
    MR_hl_field(0, Var_66, 7) = ((MR_Box) (Var_75));
    MR_hl_field(0, Var_66, 8) = ((MR_Box) (Var_76));
    MR_hl_field(0, Var_66, 9) = ((MR_Box) (Var_77));
    MR_hl_field(0, Var_66, 10) = ((MR_Box) (Var_78));
    MR_hl_field(0, Var_66, 11) = (MR_Box) ((MR_Unsigned) (Var_79));
    MR_hl_field(0, Var_66, 12) = ((MR_Box) (Var_80));
    MR_hl_field(0, Var_66, 13) = ((MR_Box) (AllocSites_15));
    MR_hl_field(0, Var_66, 14) = ((MR_Box) (Var_82));
    MR_hl_field(0, Var_66, 15) = ((MR_Box) (Var_83));
    MR_hl_field(0, Var_66, 16) = ((MR_Box) (Var_84));
    MR_hl_field(0, Var_66, 17) = ((MR_Box) (Var_85));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CI_17 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_67));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_66));
  }
}

void MR_CALL 
ll_backend__code_info__add_vector_static_cell_5_p_0(
  MR_Word Types_6,
  MR_Word Vector_7,
  MR_Word * DataAddr_8,
  MR_Word STATE_VARIABLE_CI_0_12,
  MR_Word * STATE_VARIABLE_CI_13)
{
  MR_Word StaticCellInfo0_10;
  MR_Word StaticCellInfo_11;
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_12, (MR_Integer) 1))));
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Integer Var_40;
  MR_Integer Var_41;
  MR_Integer Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Integer Var_51;
  MR_Word Var_52;
  MR_Word Var_53;

  StaticCellInfo0_10 = ((MR_Word) ((MR_hl_field(0, Var_14, (MR_Integer) 12))));
  ll_backend__global_data__add_vector_static_cell_5_p_0(Types_6, Vector_7, DataAddr_8, StaticCellInfo0_10, &StaticCellInfo_11);
  Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_12, (MR_Integer) 0))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_12, (MR_Integer) 1))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 0))));
  Var_37 = ((MR_Unsigned) ((MR_hl_field(0, Var_33, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_38 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 2))));
  Var_39 = ((MR_Unsigned) ((MR_hl_field(0, Var_33, (MR_Integer) 3))) & (MR_Integer) 1);
  Var_40 = ((MR_Integer) ((MR_hl_field(0, Var_33, (MR_Integer) 4))));
  Var_41 = ((MR_Integer) ((MR_hl_field(0, Var_33, (MR_Integer) 5))));
  Var_42 = ((MR_Integer) ((MR_hl_field(0, Var_33, (MR_Integer) 6))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 7))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 8))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 9))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 10))));
  Var_47 = ((MR_Unsigned) ((MR_hl_field(0, Var_33, (MR_Integer) 11))) & (MR_Integer) 1);
  Var_49 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 13))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 14))));
  Var_51 = ((MR_Integer) ((MR_hl_field(0, Var_33, (MR_Integer) 15))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 16))));
  Var_53 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 17))));
  {
    Var_34 = (MR_Word) MR_new_object(MR_Word, (18 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_34, 0) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_34, 1) = (MR_Box) ((MR_Unsigned) (Var_37));
    MR_hl_field(0, Var_34, 2) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_34, 3) = (MR_Box) ((MR_Unsigned) (Var_39));
    MR_hl_field(0, Var_34, 4) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_34, 5) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_34, 6) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_34, 7) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_34, 8) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_34, 9) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_34, 10) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_34, 11) = (MR_Box) ((MR_Unsigned) (Var_47));
    MR_hl_field(0, Var_34, 12) = ((MR_Box) (StaticCellInfo_11));
    MR_hl_field(0, Var_34, 13) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_34, 14) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_34, 15) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_34, 16) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_34, 17) = ((MR_Box) (Var_53));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CI_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_35));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_34));
  }
}

void MR_CALL 
ll_backend__code_info__add_scalar_static_cell_natural_types_4_p_0(
  MR_Word Rvals_5,
  MR_Word * DataAddr_6,
  MR_Word STATE_VARIABLE_CI_0_10,
  MR_Word * STATE_VARIABLE_CI_11)
{
  MR_Word StaticCellInfo0_8;
  MR_Word StaticCellInfo_9;
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_10, (MR_Integer) 1))));
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Integer Var_38;
  MR_Integer Var_39;
  MR_Integer Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Integer Var_49;
  MR_Word Var_50;
  MR_Word Var_51;

  StaticCellInfo0_8 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 12))));
  ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(Rvals_5, DataAddr_6, StaticCellInfo0_8, &StaticCellInfo_9);
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_10, (MR_Integer) 0))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_10, (MR_Integer) 1))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 0))));
  Var_35 = ((MR_Unsigned) ((MR_hl_field(0, Var_31, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_36 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 2))));
  Var_37 = ((MR_Unsigned) ((MR_hl_field(0, Var_31, (MR_Integer) 3))) & (MR_Integer) 1);
  Var_38 = ((MR_Integer) ((MR_hl_field(0, Var_31, (MR_Integer) 4))));
  Var_39 = ((MR_Integer) ((MR_hl_field(0, Var_31, (MR_Integer) 5))));
  Var_40 = ((MR_Integer) ((MR_hl_field(0, Var_31, (MR_Integer) 6))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 7))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 8))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 9))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 10))));
  Var_45 = ((MR_Unsigned) ((MR_hl_field(0, Var_31, (MR_Integer) 11))) & (MR_Integer) 1);
  Var_47 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 13))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 14))));
  Var_49 = ((MR_Integer) ((MR_hl_field(0, Var_31, (MR_Integer) 15))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 16))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 17))));
  {
    Var_32 = (MR_Word) MR_new_object(MR_Word, (18 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_32, 0) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_32, 1) = (MR_Box) ((MR_Unsigned) (Var_35));
    MR_hl_field(0, Var_32, 2) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_32, 3) = (MR_Box) ((MR_Unsigned) (Var_37));
    MR_hl_field(0, Var_32, 4) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_32, 5) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_32, 6) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_32, 7) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_32, 8) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_32, 9) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_32, 10) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_32, 11) = (MR_Box) ((MR_Unsigned) (Var_45));
    MR_hl_field(0, Var_32, 12) = ((MR_Box) (StaticCellInfo_9));
    MR_hl_field(0, Var_32, 13) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_32, 14) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_32, 15) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_32, 16) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_32, 17) = ((MR_Box) (Var_51));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CI_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_32));
  }
}

void MR_CALL 
ll_backend__code_info__add_scalar_static_cell_4_p_0(
  MR_Word RvalsTypes_5,
  MR_Word * DataAddr_6,
  MR_Word STATE_VARIABLE_CI_0_10,
  MR_Word * STATE_VARIABLE_CI_11)
{
  MR_Word StaticCellInfo0_8;
  MR_Word StaticCellInfo_9;
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_10, (MR_Integer) 1))));
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Integer Var_38;
  MR_Integer Var_39;
  MR_Integer Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Integer Var_49;
  MR_Word Var_50;
  MR_Word Var_51;

  StaticCellInfo0_8 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 12))));
  ll_backend__global_data__add_scalar_static_cell_4_p_0(RvalsTypes_5, DataAddr_6, StaticCellInfo0_8, &StaticCellInfo_9);
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_10, (MR_Integer) 0))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_10, (MR_Integer) 1))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 0))));
  Var_35 = ((MR_Unsigned) ((MR_hl_field(0, Var_31, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_36 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 2))));
  Var_37 = ((MR_Unsigned) ((MR_hl_field(0, Var_31, (MR_Integer) 3))) & (MR_Integer) 1);
  Var_38 = ((MR_Integer) ((MR_hl_field(0, Var_31, (MR_Integer) 4))));
  Var_39 = ((MR_Integer) ((MR_hl_field(0, Var_31, (MR_Integer) 5))));
  Var_40 = ((MR_Integer) ((MR_hl_field(0, Var_31, (MR_Integer) 6))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 7))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 8))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 9))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 10))));
  Var_45 = ((MR_Unsigned) ((MR_hl_field(0, Var_31, (MR_Integer) 11))) & (MR_Integer) 1);
  Var_47 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 13))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 14))));
  Var_49 = ((MR_Integer) ((MR_hl_field(0, Var_31, (MR_Integer) 15))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 16))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 17))));
  {
    Var_32 = (MR_Word) MR_new_object(MR_Word, (18 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_32, 0) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_32, 1) = (MR_Box) ((MR_Unsigned) (Var_35));
    MR_hl_field(0, Var_32, 2) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_32, 3) = (MR_Box) ((MR_Unsigned) (Var_37));
    MR_hl_field(0, Var_32, 4) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_32, 5) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_32, 6) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_32, 7) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_32, 8) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_32, 9) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_32, 10) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_32, 11) = (MR_Box) ((MR_Unsigned) (Var_45));
    MR_hl_field(0, Var_32, 12) = ((MR_Box) (StaticCellInfo_9));
    MR_hl_field(0, Var_32, 13) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_32, 14) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_32, 15) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_32, 16) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_32, 17) = ((MR_Box) (Var_51));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CI_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_32));
  }
}

void MR_CALL 
ll_backend__code_info__get_threadscope_rev_string_table_3_p_0(
  MR_Word CI_4,
  MR_Word * RevTable_5,
  MR_Integer * TableSize_6)
{
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, CI_4, (MR_Integer) 1))));

  *TableSize_6 = ((MR_Integer) ((MR_hl_field(0, Var_7, (MR_Integer) 15))));
  *RevTable_5 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 16))));
}

void MR_CALL 
ll_backend__code_info__add_threadscope_string_4_p_0(
  MR_String String_5,
  MR_Integer * SlotNum_6,
  MR_Word STATE_VARIABLE_CI_0_15,
  MR_Word * STATE_VARIABLE_CI_16)
{
  MR_Word Persistent0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_15, (MR_Integer) 1))));
  MR_Word RevTable0_10;
  MR_Integer Size_11;
  MR_Word RevTable_12;
  MR_Word Persistent_14;
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_15, (MR_Integer) 0))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Persistent0_8, (MR_Integer) 0))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, Persistent0_8, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Persistent0_8, (MR_Integer) 2))));
  MR_Word Var_22 = ((MR_Unsigned) ((MR_hl_field(0, Persistent0_8, (MR_Integer) 3))) & (MR_Integer) 1);
  MR_Integer Var_23 = ((MR_Integer) ((MR_hl_field(0, Persistent0_8, (MR_Integer) 4))));
  MR_Integer Var_24 = ((MR_Integer) ((MR_hl_field(0, Persistent0_8, (MR_Integer) 5))));
  MR_Integer Var_25 = ((MR_Integer) ((MR_hl_field(0, Persistent0_8, (MR_Integer) 6))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Persistent0_8, (MR_Integer) 7))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Persistent0_8, (MR_Integer) 8))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Persistent0_8, (MR_Integer) 9))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Persistent0_8, (MR_Integer) 10))));
  MR_Word Var_30 = ((MR_Unsigned) ((MR_hl_field(0, Persistent0_8, (MR_Integer) 11))) & (MR_Integer) 1);
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, Persistent0_8, (MR_Integer) 12))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Persistent0_8, (MR_Integer) 13))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Persistent0_8, (MR_Integer) 14))));
  MR_Word Var_35;

  *SlotNum_6 = ((MR_Integer) ((MR_hl_field(0, Persistent0_8, (MR_Integer) 15))));
  RevTable0_10 = ((MR_Word) ((MR_hl_field(0, Persistent0_8, (MR_Integer) 16))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, Persistent0_8, (MR_Integer) 17))));
  Size_11 = (MR_Integer) ((MR_Unsigned) *SlotNum_6 + (MR_Unsigned) 1);
  {
    RevTable_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RevTable_12, 0) = ((MR_Box) (String_5));
    MR_hl_field(1, RevTable_12, 1) = ((MR_Box) (RevTable0_10));
  }
  {
    Persistent_14 = (MR_Word) MR_new_object(MR_Word, (18 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Persistent_14, 0) = ((MR_Box) (Var_19));
    MR_hl_field(0, Persistent_14, 1) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, Persistent_14, 2) = ((MR_Box) (Var_21));
    MR_hl_field(0, Persistent_14, 3) = (MR_Box) ((MR_Unsigned) (Var_22));
    MR_hl_field(0, Persistent_14, 4) = ((MR_Box) (Var_23));
    MR_hl_field(0, Persistent_14, 5) = ((MR_Box) (Var_24));
    MR_hl_field(0, Persistent_14, 6) = ((MR_Box) (Var_25));
    MR_hl_field(0, Persistent_14, 7) = ((MR_Box) (Var_26));
    MR_hl_field(0, Persistent_14, 8) = ((MR_Box) (Var_27));
    MR_hl_field(0, Persistent_14, 9) = ((MR_Box) (Var_28));
    MR_hl_field(0, Persistent_14, 10) = ((MR_Box) (Var_29));
    MR_hl_field(0, Persistent_14, 11) = (MR_Box) ((MR_Unsigned) (Var_30));
    MR_hl_field(0, Persistent_14, 12) = ((MR_Box) (Var_31));
    MR_hl_field(0, Persistent_14, 13) = ((MR_Box) (Var_32));
    MR_hl_field(0, Persistent_14, 14) = ((MR_Box) (Var_33));
    MR_hl_field(0, Persistent_14, 15) = ((MR_Box) (Size_11));
    MR_hl_field(0, Persistent_14, 16) = ((MR_Box) (RevTable_12));
    MR_hl_field(0, Persistent_14, 17) = ((MR_Box) (Var_35));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CI_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (Persistent_14));
  }
}

void MR_CALL 
ll_backend__code_info__add_closure_layout_3_p_0(
  MR_Word ClosureLayout_4,
  MR_Word STATE_VARIABLE_CI_0_7,
  MR_Word * STATE_VARIABLE_CI_8)
{
  MR_Word ClosureLayouts_6;
  MR_Word Var_9;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_7, (MR_Integer) 1))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_7, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 0))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, Var_10, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 2))));
  MR_Word Var_15 = ((MR_Unsigned) ((MR_hl_field(0, Var_10, (MR_Integer) 3))) & (MR_Integer) 1);
  MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(0, Var_10, (MR_Integer) 4))));
  MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(0, Var_10, (MR_Integer) 5))));
  MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(0, Var_10, (MR_Integer) 6))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 7))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 8))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 9))));
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Integer Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_30;

  ClosureLayouts_6 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 10))));
  Var_22 = ((MR_Unsigned) ((MR_hl_field(0, Var_10, (MR_Integer) 11))) & (MR_Integer) 1);
  Var_23 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 12))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 13))));
  Var_25 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 14))));
  Var_26 = ((MR_Integer) ((MR_hl_field(0, Var_10, (MR_Integer) 15))));
  Var_27 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 16))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 17))));
  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (ClosureLayout_4));
    MR_hl_field(1, Var_9, 1) = ((MR_Box) (ClosureLayouts_6));
  }
  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (18 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_30, 0) = ((MR_Box) (Var_12));
    MR_hl_field(0, Var_30, 1) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, Var_30, 2) = ((MR_Box) (Var_14));
    MR_hl_field(0, Var_30, 3) = (MR_Box) ((MR_Unsigned) (Var_15));
    MR_hl_field(0, Var_30, 4) = ((MR_Box) (Var_16));
    MR_hl_field(0, Var_30, 5) = ((MR_Box) (Var_17));
    MR_hl_field(0, Var_30, 6) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_30, 7) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_30, 8) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_30, 9) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_30, 10) = ((MR_Box) (Var_9));
    MR_hl_field(0, Var_30, 11) = (MR_Box) ((MR_Unsigned) (Var_22));
    MR_hl_field(0, Var_30, 12) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_30, 13) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_30, 14) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_30, 15) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_30, 16) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_30, 17) = ((MR_Box) (Var_28));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CI_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_30));
  }
}

void MR_CALL 
ll_backend__code_info__add_resume_layout_for_label_4_p_0(
  MR_Word Label_5,
  MR_Word LayoutInfo_6,
  MR_Word STATE_VARIABLE_CI_0_21,
  MR_Word * STATE_VARIABLE_CI_22)
{
  MR_bool succeeded;
  MR_Word Internals0_8;
  MR_Word Resume_9;
  MR_Integer LabelNum_10;
  MR_Word Internals_20;
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_21, (MR_Integer) 1))));
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Internal0_14;
  MR_Box conv0_Internal0_14;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_62;
  MR_Integer Var_63;
  MR_Integer Var_64;
  MR_Integer Var_65;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Integer Var_74;
  MR_Word Var_75;
  MR_Word Var_76;

  Internals0_8 = ((MR_Word) ((MR_hl_field(0, Var_37, (MR_Integer) 2))));
  {
    Resume_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Resume_9, 0) = ((MR_Box) (LayoutInfo_6));
  }
  if (((MR_tag((MR_Word) Label_5)) == (MR_Integer) 1))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.code_info.add_resume_layout_for_label\'/4", (MR_String) "entry");
      return;
    }
  else
    LabelNum_10 = ((MR_Integer) ((MR_hl_field(0, Label_5, (MR_Integer) 0))));
  succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0), Internals0_8, LabelNum_10, &conv0_Internal0_14);
  if (succeeded)
  {
    Internal0_14 = ((MR_Word) (conv0_Internal0_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Exec_15 = ((MR_Word) ((MR_hl_field(0, Internal0_14, (MR_Integer) 0))));
    MR_Word Resume0_16 = ((MR_Word) ((MR_hl_field(0, Internal0_14, (MR_Integer) 1))));
    MR_Word Return_17 = ((MR_Word) ((MR_hl_field(0, Internal0_14, (MR_Integer) 2))));
    MR_Word Internal_19;

    if (!((Resume0_16 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.code_info.add_resume_layout_for_label\'/4", (MR_String) "already known label");
        return;
      }
    {
      Internal_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Internal_19, 0) = ((MR_Box) (Exec_15));
      MR_hl_field(0, Internal_19, 1) = ((MR_Box) (Resume_9));
      MR_hl_field(0, Internal_19, 2) = ((MR_Box) (Return_17));
    }
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0), LabelNum_10, ((MR_Box) (Internal_19)), Internals0_8, &Internals_20);
  }
  else
  {
    MR_Word Internal_30;

    {
      Internal_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Internal_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Internal_30, 1) = ((MR_Box) (Resume_9));
      MR_hl_field(0, Internal_30, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0), LabelNum_10, ((MR_Box) (Internal_30)), Internals0_8, &Internals_20);
  }
  Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_21, (MR_Integer) 0))));
  Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_21, (MR_Integer) 1))));
  Var_59 = ((MR_Word) ((MR_hl_field(0, Var_56, (MR_Integer) 0))));
  Var_60 = ((MR_Unsigned) ((MR_hl_field(0, Var_56, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_62 = ((MR_Unsigned) ((MR_hl_field(0, Var_56, (MR_Integer) 3))) & (MR_Integer) 1);
  Var_63 = ((MR_Integer) ((MR_hl_field(0, Var_56, (MR_Integer) 4))));
  Var_64 = ((MR_Integer) ((MR_hl_field(0, Var_56, (MR_Integer) 5))));
  Var_65 = ((MR_Integer) ((MR_hl_field(0, Var_56, (MR_Integer) 6))));
  Var_66 = ((MR_Word) ((MR_hl_field(0, Var_56, (MR_Integer) 7))));
  Var_67 = ((MR_Word) ((MR_hl_field(0, Var_56, (MR_Integer) 8))));
  Var_68 = ((MR_Word) ((MR_hl_field(0, Var_56, (MR_Integer) 9))));
  Var_69 = ((MR_Word) ((MR_hl_field(0, Var_56, (MR_Integer) 10))));
  Var_70 = ((MR_Unsigned) ((MR_hl_field(0, Var_56, (MR_Integer) 11))) & (MR_Integer) 1);
  Var_71 = ((MR_Word) ((MR_hl_field(0, Var_56, (MR_Integer) 12))));
  Var_72 = ((MR_Word) ((MR_hl_field(0, Var_56, (MR_Integer) 13))));
  Var_73 = ((MR_Word) ((MR_hl_field(0, Var_56, (MR_Integer) 14))));
  Var_74 = ((MR_Integer) ((MR_hl_field(0, Var_56, (MR_Integer) 15))));
  Var_75 = ((MR_Word) ((MR_hl_field(0, Var_56, (MR_Integer) 16))));
  Var_76 = ((MR_Word) ((MR_hl_field(0, Var_56, (MR_Integer) 17))));
  {
    Var_57 = (MR_Word) MR_new_object(MR_Word, (18 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_57, 0) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_57, 1) = (MR_Box) ((MR_Unsigned) (Var_60));
    MR_hl_field(0, Var_57, 2) = ((MR_Box) (Internals_20));
    MR_hl_field(0, Var_57, 3) = (MR_Box) ((MR_Unsigned) (Var_62));
    MR_hl_field(0, Var_57, 4) = ((MR_Box) (Var_63));
    MR_hl_field(0, Var_57, 5) = ((MR_Box) (Var_64));
    MR_hl_field(0, Var_57, 6) = ((MR_Box) (Var_65));
    MR_hl_field(0, Var_57, 7) = ((MR_Box) (Var_66));
    MR_hl_field(0, Var_57, 8) = ((MR_Box) (Var_67));
    MR_hl_field(0, Var_57, 9) = ((MR_Box) (Var_68));
    MR_hl_field(0, Var_57, 10) = ((MR_Box) (Var_69));
    MR_hl_field(0, Var_57, 11) = (MR_Box) ((MR_Unsigned) (Var_70));
    MR_hl_field(0, Var_57, 12) = ((MR_Box) (Var_71));
    MR_hl_field(0, Var_57, 13) = ((MR_Box) (Var_72));
    MR_hl_field(0, Var_57, 14) = ((MR_Box) (Var_73));
    MR_hl_field(0, Var_57, 15) = ((MR_Box) (Var_74));
    MR_hl_field(0, Var_57, 16) = ((MR_Box) (Var_75));
    MR_hl_field(0, Var_57, 17) = ((MR_Box) (Var_76));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CI_22 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_58));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_57));
  }
}

void MR_CALL 
ll_backend__code_info__get_next_closure_seq_no_3_p_0(
  MR_Integer * SeqNo_4,
  MR_Word STATE_VARIABLE_CI_0_8,
  MR_Word * STATE_VARIABLE_CI_9)
{
  MR_Word C0_6;
  MR_Word C_7;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_8, (MR_Integer) 1))));
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Integer Var_36;
  MR_Integer Var_37;
  MR_Integer Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Integer Var_47;
  MR_Word Var_48;
  MR_Word Var_49;

  C0_6 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 9))));
  mercury__counter__allocate_3_p_0(SeqNo_4, C0_6, &C_7);
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_8, (MR_Integer) 0))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_8, (MR_Integer) 1))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, Var_29, (MR_Integer) 0))));
  Var_33 = ((MR_Unsigned) ((MR_hl_field(0, Var_29, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_34 = ((MR_Word) ((MR_hl_field(0, Var_29, (MR_Integer) 2))));
  Var_35 = ((MR_Unsigned) ((MR_hl_field(0, Var_29, (MR_Integer) 3))) & (MR_Integer) 1);
  Var_36 = ((MR_Integer) ((MR_hl_field(0, Var_29, (MR_Integer) 4))));
  Var_37 = ((MR_Integer) ((MR_hl_field(0, Var_29, (MR_Integer) 5))));
  Var_38 = ((MR_Integer) ((MR_hl_field(0, Var_29, (MR_Integer) 6))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, Var_29, (MR_Integer) 7))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, Var_29, (MR_Integer) 8))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, Var_29, (MR_Integer) 10))));
  Var_43 = ((MR_Unsigned) ((MR_hl_field(0, Var_29, (MR_Integer) 11))) & (MR_Integer) 1);
  Var_44 = ((MR_Word) ((MR_hl_field(0, Var_29, (MR_Integer) 12))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, Var_29, (MR_Integer) 13))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, Var_29, (MR_Integer) 14))));
  Var_47 = ((MR_Integer) ((MR_hl_field(0, Var_29, (MR_Integer) 15))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, Var_29, (MR_Integer) 16))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, Var_29, (MR_Integer) 17))));
  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (18 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_30, 0) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_30, 1) = (MR_Box) ((MR_Unsigned) (Var_33));
    MR_hl_field(0, Var_30, 2) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_30, 3) = (MR_Box) ((MR_Unsigned) (Var_35));
    MR_hl_field(0, Var_30, 4) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_30, 5) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_30, 6) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_30, 7) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_30, 8) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_30, 9) = ((MR_Box) (C_7));
    MR_hl_field(0, Var_30, 10) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_30, 11) = (MR_Box) ((MR_Unsigned) (Var_43));
    MR_hl_field(0, Var_30, 12) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_30, 13) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_30, 14) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_30, 15) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_30, 16) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_30, 17) = ((MR_Box) (Var_49));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CI_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_30));
  }
}

void MR_CALL 
ll_backend__code_info__add_trace_layout_for_label_9_p_0(
  MR_Word Label_10,
  MR_Word Context_11,
  MR_Word Port_12,
  MR_Word IsHidden_13,
  MR_Word GoalPath_14,
  MR_Word MaybeSolverEventInfo_15,
  MR_Word Layout_16,
  MR_Word STATE_VARIABLE_CI_0_31,
  MR_Word * STATE_VARIABLE_CI_32)
{
  MR_bool succeeded;
  MR_Word Internals0_18;
  MR_Word Exec_19;
  MR_Integer LabelNum_20;
  MR_Word Internals_30;
  MR_Word Var_33;
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_31, (MR_Integer) 1))));
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Internal0_24;
  MR_Box conv0_Internal0_24;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_73;
  MR_Integer Var_74;
  MR_Integer Var_75;
  MR_Integer Var_76;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Integer Var_85;
  MR_Word Var_86;
  MR_Word Var_87;

  Internals0_18 = ((MR_Word) ((MR_hl_field(0, Var_48, (MR_Integer) 2))));
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) (Context_11));
    MR_hl_field(0, Var_33, 1) = (MR_Box) (((((MR_Unsigned) (Port_12) << 1)) | (MR_Unsigned) (IsHidden_13)));
    MR_hl_field(0, Var_33, 2) = ((MR_Box) (GoalPath_14));
    MR_hl_field(0, Var_33, 3) = ((MR_Box) (MaybeSolverEventInfo_15));
    MR_hl_field(0, Var_33, 4) = ((MR_Box) (Layout_16));
  }
  {
    Exec_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Exec_19, 0) = ((MR_Box) (Var_33));
  }
  if (((MR_tag((MR_Word) Label_10)) == (MR_Integer) 1))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.code_info.add_trace_layout_for_label\'/9", (MR_String) "entry");
      return;
    }
  else
    LabelNum_20 = ((MR_Integer) ((MR_hl_field(0, Label_10, (MR_Integer) 0))));
  succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0), Internals0_18, LabelNum_20, &conv0_Internal0_24);
  if (succeeded)
  {
    Internal0_24 = ((MR_Word) (conv0_Internal0_24));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Exec0_25 = ((MR_Word) ((MR_hl_field(0, Internal0_24, (MR_Integer) 0))));
    MR_Word Resume_26 = ((MR_Word) ((MR_hl_field(0, Internal0_24, (MR_Integer) 1))));
    MR_Word Return_27 = ((MR_Word) ((MR_hl_field(0, Internal0_24, (MR_Integer) 2))));
    MR_Word Internal_29;

    if (!((Exec0_25 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.code_info.add_trace_layout_for_label\'/9", (MR_String) "already known label");
        return;
      }
    {
      Internal_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Internal_29, 0) = ((MR_Box) (Exec_19));
      MR_hl_field(0, Internal_29, 1) = ((MR_Box) (Resume_26));
      MR_hl_field(0, Internal_29, 2) = ((MR_Box) (Return_27));
    }
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0), LabelNum_20, ((MR_Box) (Internal_29)), Internals0_18, &Internals_30);
  }
  else
  {
    MR_Word Internal_41;

    {
      Internal_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Internal_41, 0) = ((MR_Box) (Exec_19));
      MR_hl_field(0, Internal_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Internal_41, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0), LabelNum_20, ((MR_Box) (Internal_41)), Internals0_18, &Internals_30);
  }
  Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_31, (MR_Integer) 0))));
  Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_31, (MR_Integer) 1))));
  Var_70 = ((MR_Word) ((MR_hl_field(0, Var_67, (MR_Integer) 0))));
  Var_71 = ((MR_Unsigned) ((MR_hl_field(0, Var_67, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_73 = ((MR_Unsigned) ((MR_hl_field(0, Var_67, (MR_Integer) 3))) & (MR_Integer) 1);
  Var_74 = ((MR_Integer) ((MR_hl_field(0, Var_67, (MR_Integer) 4))));
  Var_75 = ((MR_Integer) ((MR_hl_field(0, Var_67, (MR_Integer) 5))));
  Var_76 = ((MR_Integer) ((MR_hl_field(0, Var_67, (MR_Integer) 6))));
  Var_77 = ((MR_Word) ((MR_hl_field(0, Var_67, (MR_Integer) 7))));
  Var_78 = ((MR_Word) ((MR_hl_field(0, Var_67, (MR_Integer) 8))));
  Var_79 = ((MR_Word) ((MR_hl_field(0, Var_67, (MR_Integer) 9))));
  Var_80 = ((MR_Word) ((MR_hl_field(0, Var_67, (MR_Integer) 10))));
  Var_81 = ((MR_Unsigned) ((MR_hl_field(0, Var_67, (MR_Integer) 11))) & (MR_Integer) 1);
  Var_82 = ((MR_Word) ((MR_hl_field(0, Var_67, (MR_Integer) 12))));
  Var_83 = ((MR_Word) ((MR_hl_field(0, Var_67, (MR_Integer) 13))));
  Var_84 = ((MR_Word) ((MR_hl_field(0, Var_67, (MR_Integer) 14))));
  Var_85 = ((MR_Integer) ((MR_hl_field(0, Var_67, (MR_Integer) 15))));
  Var_86 = ((MR_Word) ((MR_hl_field(0, Var_67, (MR_Integer) 16))));
  Var_87 = ((MR_Word) ((MR_hl_field(0, Var_67, (MR_Integer) 17))));
  {
    Var_68 = (MR_Word) MR_new_object(MR_Word, (18 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_68, 0) = ((MR_Box) (Var_70));
    MR_hl_field(0, Var_68, 1) = (MR_Box) ((MR_Unsigned) (Var_71));
    MR_hl_field(0, Var_68, 2) = ((MR_Box) (Internals_30));
    MR_hl_field(0, Var_68, 3) = (MR_Box) ((MR_Unsigned) (Var_73));
    MR_hl_field(0, Var_68, 4) = ((MR_Box) (Var_74));
    MR_hl_field(0, Var_68, 5) = ((MR_Box) (Var_75));
    MR_hl_field(0, Var_68, 6) = ((MR_Box) (Var_76));
    MR_hl_field(0, Var_68, 7) = ((MR_Box) (Var_77));
    MR_hl_field(0, Var_68, 8) = ((MR_Box) (Var_78));
    MR_hl_field(0, Var_68, 9) = ((MR_Box) (Var_79));
    MR_hl_field(0, Var_68, 10) = ((MR_Box) (Var_80));
    MR_hl_field(0, Var_68, 11) = (MR_Box) ((MR_Unsigned) (Var_81));
    MR_hl_field(0, Var_68, 12) = ((MR_Box) (Var_82));
    MR_hl_field(0, Var_68, 13) = ((MR_Box) (Var_83));
    MR_hl_field(0, Var_68, 14) = ((MR_Box) (Var_84));
    MR_hl_field(0, Var_68, 15) = ((MR_Box) (Var_85));
    MR_hl_field(0, Var_68, 16) = ((MR_Box) (Var_86));
    MR_hl_field(0, Var_68, 17) = ((MR_Box) (Var_87));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CI_32 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_69));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_68));
  }
}

void MR_CALL 
ll_backend__code_info__succip_is_used_2_p_0(
  MR_Word STATE_VARIABLE_CI_0_4,
  MR_Word * STATE_VARIABLE_CI_5)
{
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_4, (MR_Integer) 1))));
  MR_Word Var_8;
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_4, (MR_Integer) 0))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, Var_7, (MR_Integer) 3))) & (MR_Integer) 1);
  MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(0, Var_7, (MR_Integer) 4))));
  MR_Integer Var_15 = ((MR_Integer) ((MR_hl_field(0, Var_7, (MR_Integer) 5))));
  MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(0, Var_7, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 10))));
  MR_Word Var_21 = ((MR_Unsigned) ((MR_hl_field(0, Var_7, (MR_Integer) 11))) & (MR_Integer) 1);
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 12))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 13))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 14))));
  MR_Integer Var_25 = ((MR_Integer) ((MR_hl_field(0, Var_7, (MR_Integer) 15))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 16))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 17))));

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (18 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, Var_8, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, Var_8, 3) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, Var_8, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, Var_8, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, Var_8, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, Var_8, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, Var_8, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_8, 9) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_8, 10) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_8, 11) = (MR_Box) ((MR_Unsigned) (Var_21));
    MR_hl_field(0, Var_8, 12) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_8, 13) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_8, 14) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_8, 15) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_8, 16) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_8, 17) = ((MR_Box) (Var_27));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CI_5 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_8));
  }
}

MR_Word MR_CALL 
ll_backend__code_info__make_proc_entry_label_5_f_0(
  MR_Word CI_7,
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word CallOrClosure_11)
{
  MR_Word CodeAddr_12;
  MR_Word ForFromWhere_13;

  switch (CallOrClosure_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      ForFromWhere_13 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 0:
      {
        MR_Word Globals_14;
        MR_Word OptTuple_15;
        MR_Word UseJustOneCFunc_16;
        MR_Word CurPredId_17;
        MR_Integer CurProcId_18;

        ll_backend__code_info__get_globals_2_p_0(CI_7, &Globals_14);
        libs__globals__get_opt_tuple_2_p_0(Globals_14, &OptTuple_15);
        UseJustOneCFunc_16 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_15, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
        ll_backend__code_info__get_pred_id_2_p_0(CI_7, &CurPredId_17);
        ll_backend__code_info__get_proc_id_2_p_0(CI_7, &CurProcId_18);
        {
          ForFromWhere_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ForFromWhere_13, 0) = (MR_Box) ((MR_Unsigned) (UseJustOneCFunc_16));
          MR_hl_field(1, ForFromWhere_13, 1) = ((MR_Box) (CurPredId_17));
          MR_hl_field(1, ForFromWhere_13, 2) = ((MR_Box) (CurProcId_18));
        }
      }
      break;
  }
  CodeAddr_12 = ll_backend__code_util__make_entry_label_4_f_0(ModuleInfo_8, PredId_9, ProcId_10, ForFromWhere_13);
  return CodeAddr_12;
}

MR_Word MR_CALL 
ll_backend__code_info__get_pred_proc_arginfo_3_f_0(
  MR_Word CI_5,
  MR_Word PredId_6,
  MR_Integer ProcId_7)
{
  MR_Word ArgInfo_8;
  MR_Word ModuleInfo_9;
  MR_Word ProcInfo_11;
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, CI_5, (MR_Integer) 0))));
  MR_Word Var_10;

  ModuleInfo_9 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 0))));
  hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_9, PredId_6, ProcId_7, &Var_10, &ProcInfo_11);
  hlds__hlds_proc_util__proc_info_arg_info_2_p_0(ProcInfo_11, &ArgInfo_8);
  return ArgInfo_8;
}

MR_Word MR_CALL 
ll_backend__code_info__get_arginfo_1_f_0(
  MR_Word CI_3)
{
  MR_Word ArgInfo_4;
  MR_Word PredId_5;
  MR_Integer ProcId_6;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));
  MR_Word ModuleInfo_61 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 0))));
  MR_Word ProcInfo_63;
  MR_Word Var_62;

  PredId_5 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 4))));
  ProcId_6 = ((MR_Integer) ((MR_hl_field(0, Var_7, (MR_Integer) 5))));
  hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_61, PredId_5, ProcId_6, &Var_62, &ProcInfo_63);
  hlds__hlds_proc_util__proc_info_arg_info_2_p_0(ProcInfo_63, &ArgInfo_4);
  return ArgInfo_4;
}

MR_Word MR_CALL 
ll_backend__code_info__get_headvars_1_f_0(
  MR_Word CI_3)
{
  MR_Word HeadVars_4;
  MR_Word ModuleInfo_5;
  MR_Word PredId_6;
  MR_Integer ProcId_7;
  MR_Word ProcInfo_9;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));
  MR_Word Var_8;

  ModuleInfo_5 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 0))));
  PredId_6 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 4))));
  ProcId_7 = ((MR_Integer) ((MR_hl_field(0, Var_10, (MR_Integer) 5))));
  hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_5, PredId_6, ProcId_7, &Var_8, &ProcInfo_9);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_9, &HeadVars_4);
  return HeadVars_4;
}

MR_Word MR_CALL 
ll_backend__code_info__get_proc_model_1_f_0(
  MR_Word CI_3)
{
  MR_Word CodeModel_4;
  MR_Word ProcInfo_5;
  MR_Word Var_6 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));

  ProcInfo_5 = ((MR_Word) ((MR_hl_field(0, Var_6, (MR_Integer) 7))));
  CodeModel_4 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_5);
  return CodeModel_4;
}

static MR_bool MR_CALL 
ll_backend__code_info__filter_region_vars_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__type_util__is_region_var_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

MR_Word MR_CALL 
ll_backend__code_info__filter_region_vars_2_f_0(
  MR_Word CI_4,
  MR_Word ForwardLiveVarsBeforeGoal_5)
{
  MR_bool succeeded;
  MR_Word RegionVars_6;
  MR_Word VarTable_7;
  MR_Word Var_8;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, CI_4, (MR_Integer) 0))));

  VarTable_7 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 9))));
  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&ll_backend__code_info_scalar_common_5[0]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (ll_backend__code_info__filter_region_vars_2_f_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (VarTable_7));
  }
  RegionVars_6 = parse_tree__set_of_var__filter_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_8, ForwardLiveVarsBeforeGoal_5);
  return RegionVars_6;
}

MR_Word MR_CALL 
ll_backend__code_info__lookup_cheaper_tag_test_2_f_0(
  MR_Word CI_4,
  MR_Word Type_5)
{
  MR_bool succeeded;
  MR_Word CheaperTagTest_6;
  MR_Word Repn_14;
  MR_Word TypeDefn_7;
  MR_Word TypeBody_8;
  MR_Word MaybeRepn_12;
  MR_Word Var_15;
  MR_Word ModuleInfo_20;
  MR_Word TypeCtor_21;
  MR_Word TypeTable_22;
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, CI_4, (MR_Integer) 0))));

  ModuleInfo_20 = ((MR_Word) ((MR_hl_field(0, Var_23, (MR_Integer) 0))));
  parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_5, &TypeCtor_21);
  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_20, &TypeTable_22);
  succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_22, TypeCtor_21, &TypeDefn_7);
  if (succeeded)
  {
    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_7, &TypeBody_8);
    succeeded = ((MR_tag((MR_Word) TypeBody_8)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_15 = (MR_Word) ((MR_Word) (TypeBody_8));
      MaybeRepn_12 = ((MR_Word) ((MR_hl_field(0, Var_15, (MR_Integer) 3))));
      succeeded = (MaybeRepn_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        Repn_14 = ((MR_Word) ((MR_hl_field(1, MaybeRepn_12, (MR_Integer) 0))));
    }
  }
  if (succeeded)
    CheaperTagTest_6 = ((MR_Word) ((MR_hl_field(0, Repn_14, (MR_Integer) 2))));
  else
    CheaperTagTest_6 = (MR_Word) ((MR_Unsigned) 0U);
  return CheaperTagTest_6;
}

MR_Word MR_CALL 
ll_backend__code_info__lookup_type_defn_2_f_0(
  MR_Word CI_4,
  MR_Word Type_5)
{
  MR_bool succeeded;
  MR_Word TypeDefn_6;
  MR_Word TypeDefnPrime_7;
  MR_Word ModuleInfo_10;
  MR_Word TypeCtor_11;
  MR_Word TypeTable_12;
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, CI_4, (MR_Integer) 0))));

  ModuleInfo_10 = ((MR_Word) ((MR_hl_field(0, Var_13, (MR_Integer) 0))));
  parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_5, &TypeCtor_11);
  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_10, &TypeTable_12);
  succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_12, TypeCtor_11, &TypeDefnPrime_7);
  if (succeeded)
    TypeDefn_6 = TypeDefnPrime_7;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.code_info.lookup_type_defn\'/2", (MR_String) "type ctor has no definition");
  return TypeDefn_6;
}

MR_bool MR_CALL 
ll_backend__code_info__search_type_defn_3_p_0(
  MR_Word CI_4,
  MR_Word Type_5,
  MR_Word * TypeDefn_6)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_7;
  MR_Word TypeCtor_8;
  MR_Word TypeTable_9;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, CI_4, (MR_Integer) 0))));

  ModuleInfo_7 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 0))));
  parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_5, &TypeCtor_8);
  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_7, &TypeTable_9);
  succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_9, TypeCtor_8, TypeDefn_6);
  return succeeded;
}

MR_Word MR_CALL 
ll_backend__code_info__variable_type_2_f_0(
  MR_Word CI_4,
  MR_Word Var_5)
{
  MR_Word Type_6;
  MR_Word VarTable_7;
  MR_Word Entry_8;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, CI_4, (MR_Integer) 0))));

  VarTable_7 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 9))));
  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_7, Var_5, &Entry_8);
  Type_6 = ((MR_Word) ((MR_hl_field(0, Entry_8, (MR_Integer) 1))));
  return Type_6;
}

MR_Word MR_CALL 
ll_backend__code_info__body_typeinfo_liveness_1_f_0(
  MR_Word CI_3)
{
  MR_Word TypeInfoLiveness_4;
  MR_Word ModuleInfo_5;
  MR_Word PredId_6;
  MR_Word PredInfo_7;
  MR_Word Globals_8;
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));
  MR_Word Var_63;

  ModuleInfo_5 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  PredId_6 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_6, &PredInfo_7);
  Var_63 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));
  Globals_8 = ((MR_Word) ((MR_hl_field(0, Var_63, (MR_Integer) 1))));
  hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(PredInfo_7, Globals_8, &TypeInfoLiveness_4);
  return TypeInfoLiveness_4;
}

void MR_CALL 
ll_backend__code_info__get_stack_slots_2_p_0(
  MR_Word CI_3,
  MR_Word * StackSlots_4)
{
  MR_Word ProcInfo_5;
  MR_Word Var_6 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));

  ProcInfo_5 = ((MR_Word) ((MR_hl_field(0, Var_6, (MR_Integer) 7))));
  hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(ProcInfo_5, StackSlots_4);
}

void MR_CALL 
ll_backend__code_info__set_used_env_vars_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_CI_0_6,
  MR_Word * STATE_VARIABLE_CI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_15 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 3))) & (MR_Integer) 1);
  MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 10))));
  MR_Word Var_23 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 11))) & (MR_Integer) 1);
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Integer Var_27 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (18 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_12));
    MR_hl_field(0, Var_10, 1) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_14));
    MR_hl_field(0, Var_10, 3) = (MR_Box) ((MR_Unsigned) (Var_15));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_16));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_17));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 11) = (MR_Box) ((MR_Unsigned) (Var_23));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_29));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
ll_backend__code_info__set_alloc_sites_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_CI_0_6,
  MR_Word * STATE_VARIABLE_CI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_15 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 3))) & (MR_Integer) 1);
  MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 10))));
  MR_Word Var_23 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 11))) & (MR_Integer) 1);
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Integer Var_27 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (18 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_12));
    MR_hl_field(0, Var_10, 1) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_14));
    MR_hl_field(0, Var_10, 3) = (MR_Box) ((MR_Unsigned) (Var_15));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_16));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_17));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 11) = (MR_Box) ((MR_Unsigned) (Var_23));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_29));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
ll_backend__code_info__set_static_cell_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_CI_0_6,
  MR_Word * STATE_VARIABLE_CI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_15 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 3))) & (MR_Integer) 1);
  MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 10))));
  MR_Word Var_23 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 11))) & (MR_Integer) 1);
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Integer Var_27 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (18 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_12));
    MR_hl_field(0, Var_10, 1) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_14));
    MR_hl_field(0, Var_10, 3) = (MR_Box) ((MR_Unsigned) (Var_15));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_16));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_17));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 11) = (MR_Box) ((MR_Unsigned) (Var_23));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_29));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
ll_backend__code_info__set_created_temp_frame_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_CI_0_6,
  MR_Word * STATE_VARIABLE_CI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_15 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 3))) & (MR_Integer) 1);
  MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 10))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Integer Var_27 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (18 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_12));
    MR_hl_field(0, Var_10, 1) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_14));
    MR_hl_field(0, Var_10, 3) = (MR_Box) ((MR_Unsigned) (Var_15));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_16));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_17));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 11) = (MR_Box) ((MR_Unsigned) (X_4));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_29));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
ll_backend__code_info__set_persistent_temps_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_CI_0_6,
  MR_Word * STATE_VARIABLE_CI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_15 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 3))) & (MR_Integer) 1);
  MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 10))));
  MR_Word Var_23 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 11))) & (MR_Integer) 1);
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Integer Var_27 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (18 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_12));
    MR_hl_field(0, Var_10, 1) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_14));
    MR_hl_field(0, Var_10, 3) = (MR_Box) ((MR_Unsigned) (Var_15));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_16));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_17));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 11) = (MR_Box) ((MR_Unsigned) (Var_23));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_29));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
ll_backend__code_info__set_temp_content_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_CI_0_6,
  MR_Word * STATE_VARIABLE_CI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_15 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 3))) & (MR_Integer) 1);
  MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 10))));
  MR_Word Var_23 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 11))) & (MR_Integer) 1);
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Integer Var_27 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (18 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_12));
    MR_hl_field(0, Var_10, 1) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_14));
    MR_hl_field(0, Var_10, 3) = (MR_Box) ((MR_Unsigned) (Var_15));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_16));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_17));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 11) = (MR_Box) ((MR_Unsigned) (Var_23));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_29));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
ll_backend__code_info__set_max_temp_slot_count_3_p_0(
  MR_Integer X_4,
  MR_Word STATE_VARIABLE_CI_0_6,
  MR_Word * STATE_VARIABLE_CI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_15 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 3))) & (MR_Integer) 1);
  MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 10))));
  MR_Word Var_23 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 11))) & (MR_Integer) 1);
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Integer Var_27 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (18 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_12));
    MR_hl_field(0, Var_10, 1) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_14));
    MR_hl_field(0, Var_10, 3) = (MR_Box) ((MR_Unsigned) (Var_15));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_16));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_17));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 11) = (MR_Box) ((MR_Unsigned) (Var_23));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_29));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
ll_backend__code_info__set_max_regs_in_use_at_trace_4_p_0(
  MR_Integer MR_5,
  MR_Integer MF_6,
  MR_Word STATE_VARIABLE_CI_0_8,
  MR_Word * STATE_VARIABLE_CI_9)
{
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_8, (MR_Integer) 1))));
  MR_Word Var_15;
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_8, (MR_Integer) 0))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 0))));
  MR_Word Var_18 = ((MR_Unsigned) ((MR_hl_field(0, Var_11, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 2))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, Var_11, (MR_Integer) 3))) & (MR_Integer) 1);
  MR_Integer Var_23 = ((MR_Integer) ((MR_hl_field(0, Var_11, (MR_Integer) 6))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 7))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 8))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 9))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 10))));
  MR_Word Var_28 = ((MR_Unsigned) ((MR_hl_field(0, Var_11, (MR_Integer) 11))) & (MR_Integer) 1);
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 12))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 13))));
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 14))));
  MR_Integer Var_32 = ((MR_Integer) ((MR_hl_field(0, Var_11, (MR_Integer) 15))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 16))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 17))));

  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (18 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (Var_17));
    MR_hl_field(0, Var_15, 1) = (MR_Box) ((MR_Unsigned) (Var_18));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_15, 3) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, Var_15, 4) = ((MR_Box) (MR_5));
    MR_hl_field(0, Var_15, 5) = ((MR_Box) (MF_6));
    MR_hl_field(0, Var_15, 6) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_15, 7) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_15, 8) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_15, 9) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_15, 10) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_15, 11) = (MR_Box) ((MR_Unsigned) (Var_28));
    MR_hl_field(0, Var_15, 12) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_15, 13) = ((MR_Box) (Var_30));
    MR_hl_field(0, Var_15, 14) = ((MR_Box) (Var_31));
    MR_hl_field(0, Var_15, 15) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_15, 16) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_15, 17) = ((MR_Box) (Var_34));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CI_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_15));
  }
}

void MR_CALL 
ll_backend__code_info__set_proc_trace_events_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_CI_0_6,
  MR_Word * STATE_VARIABLE_CI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 10))));
  MR_Word Var_23 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 11))) & (MR_Integer) 1);
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Integer Var_27 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (18 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_12));
    MR_hl_field(0, Var_10, 1) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_14));
    MR_hl_field(0, Var_10, 3) = (MR_Box) ((MR_Unsigned) (X_4));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_16));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_17));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 11) = (MR_Box) ((MR_Unsigned) (Var_23));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_29));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
ll_backend__code_info__get_out_of_line_code_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 17))));
}

void MR_CALL 
ll_backend__code_info__get_used_env_vars_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 14))));
}

void MR_CALL 
ll_backend__code_info__get_alloc_sites_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 13))));
}

void MR_CALL 
ll_backend__code_info__get_static_cell_info_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 12))));
}

void MR_CALL 
ll_backend__code_info__get_closure_layouts_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 10))));
}

void MR_CALL 
ll_backend__code_info__get_persistent_temps_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 8))));
}

void MR_CALL 
ll_backend__code_info__get_temp_content_map_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 7))));
}

void MR_CALL 
ll_backend__code_info__get_max_temp_slot_count_2_p_0(
  MR_Word CI_3,
  MR_Integer * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Integer) ((MR_hl_field(0, Var_5, (MR_Integer) 6))));
}

void MR_CALL 
ll_backend__code_info__get_created_temp_frame_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 11))) & (MR_Integer) 1);
}

void MR_CALL 
ll_backend__code_info__get_max_regs_in_use_at_trace_3_p_0(
  MR_Word CI_4,
  MR_Integer * MaxRegR_5,
  MR_Integer * MaxRegF_6)
{
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, CI_4, (MR_Integer) 1))));

  *MaxRegR_5 = ((MR_Integer) ((MR_hl_field(0, Var_7, (MR_Integer) 4))));
  *MaxRegF_6 = ((MR_Integer) ((MR_hl_field(0, Var_7, (MR_Integer) 5))));
}

void MR_CALL 
ll_backend__code_info__get_proc_trace_events_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 3))) & (MR_Integer) 1);
}

void MR_CALL 
ll_backend__code_info__get_layout_info_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 2))));
}

void MR_CALL 
ll_backend__code_info__get_succip_used_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 1))) & (MR_Integer) 1);
}

void MR_CALL 
ll_backend__code_info__get_label_counter_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 0))));
}

void MR_CALL 
ll_backend__code_info__get_const_struct_map_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 16))));
}

void MR_CALL 
ll_backend__code_info__get_maybe_containing_goal_map_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 15))));
}

void MR_CALL 
ll_backend__code_info__get_gc_method_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));

  *X_4 = ((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 14))) & (MR_Integer) 7);
}

void MR_CALL 
ll_backend__code_info__get_num_ptag_bits_2_p_0(
  MR_Word CI_3,
  uint8_t * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));

  *X_4 = ((uint8_t) (MR_Word) (MR_hl_field(0, Var_5, (MR_Integer) 13)));
}

void MR_CALL 
ll_backend__code_info__get_may_use_atomic_alloc_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));

  *X_4 = ((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 12))) & (MR_Integer) 1);
}

void MR_CALL 
ll_backend__code_info__get_profile_memory_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 12))) >> 1)) & (MR_Integer) 1);
}

void MR_CALL 
ll_backend__code_info__get_lcmc_null_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 12))) >> 2)) & (MR_Integer) 1);
}

void MR_CALL 
ll_backend__code_info__get_auto_comments_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 12))) >> 3)) & (MR_Integer) 1);
}

void MR_CALL 
ll_backend__code_info__get_opt_region_ops_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 12))) >> 4)) & (MR_Integer) 1);
}

void MR_CALL 
ll_backend__code_info__get_emit_region_ops_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 12))) >> 5)) & (MR_Integer) 1);
}

void MR_CALL 
ll_backend__code_info__get_opt_trail_ops_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 12))) >> 6)) & (MR_Integer) 1);
}

void MR_CALL 
ll_backend__code_info__get_emit_trail_ops_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 12))) >> 7)) & (MR_Integer) 1);
}

void MR_CALL 
ll_backend__code_info__get_opt_no_return_calls_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 12))) >> 8)) & (MR_Integer) 1);
}

void MR_CALL 
ll_backend__code_info__get_maybe_trace_info_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 11))));
}

void MR_CALL 
ll_backend__code_info__get_var_slot_count_2_p_0(
  MR_Word CI_3,
  MR_Integer * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));

  *X_4 = ((MR_Integer) ((MR_hl_field(0, Var_5, (MR_Integer) 10))));
}

void MR_CALL 
ll_backend__code_info__get_var_table_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 9))));
}

void MR_CALL 
ll_backend__code_info__get_proc_label_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 8))));
}

void MR_CALL 
ll_backend__code_info__get_proc_info_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 7))));
}

void MR_CALL 
ll_backend__code_info__get_pred_info_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 6))));
}

void MR_CALL 
ll_backend__code_info__get_proc_id_2_p_0(
  MR_Word CI_3,
  MR_Integer * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));

  *X_4 = ((MR_Integer) ((MR_hl_field(0, Var_5, (MR_Integer) 5))));
}

void MR_CALL 
ll_backend__code_info__get_pred_id_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 4))));
}

void MR_CALL 
ll_backend__code_info__get_eff_trace_level_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));

  *X_4 = ((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 3))) & (MR_Integer) 7);
}

void MR_CALL 
ll_backend__code_info__get_exprn_opts_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 2))));
}

void MR_CALL 
ll_backend__code_info__get_globals_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 1))));
}

void MR_CALL 
ll_backend__code_info__get_module_info_2_p_0(
  MR_Word CI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 0))));
}

void MR_CALL 
ll_backend__code_info__code_info_init_15_p_0(
  MR_Word ModuleInfo_16,
  MR_Word PredId_17,
  MR_Integer ProcId_18,
  MR_Word PredInfo_19,
  MR_Word ProcInfo_20,
  MR_Word VarTable_21,
  MR_Word SaveSuccip_22,
  MR_Word StaticCellInfo_23,
  MR_Word ConstStructMap_24,
  MR_Word ProgressStream_25,
  MR_Word MaybeContainingGoalMap_26,
  MR_Word TSRevStringTable_27,
  MR_Integer TSStringTableSize_28,
  MR_Word * TraceSlotInfo_29,
  MR_Word * CodeInfo_30)
{
  MR_bool succeeded;
  MR_Word Globals_31;
  MR_Word ExprnOpts_32;
  MR_Word ProcLabel_33;
  MR_Word StackSlots_34;
  MR_Integer VarSlotMax_35;
  MR_Word TraceLevel_36;
  MR_Word EffTraceLevel_37;
  MR_Integer FixedSlots_38;
  MR_Integer SlotMax_40;
  MR_Word OptNoReturnCalls_42;
  MR_Word UseTrail_43;
  MR_Word DisableTrailOps_44;
  MR_Word EmitTrailOps_45;
  MR_Word OptTrailOps_46;
  MR_Word OptTuple_47;
  MR_Word UseRegions_48;
  MR_Word EmitRegionOps_49;
  MR_Word OptRegionOps_50;
  MR_Word AutoComments_51;
  MR_Word LCMCNull_52;
  MR_Word ProfileMemory_53;
  MR_Word UseAtomicCells_54;
  MR_Word InitMayUseAtomic_55;
  MR_Integer NumPtagBitsInt_56;
  uint8_t NumPtagBits_57;
  MR_Word GCMethod_58;
  MR_Word CodeInfoStatic0_59;
  MR_Word LabelNumCounter0_60;
  MR_Word LayoutMap_61;
  MR_Word TempContentMap_66;
  MR_Word PersistentTemps_67;
  MR_Word ClosureLayoutSeqNumCounter0_68;
  MR_Word AllocSitesMap0_71;
  MR_Word UsedEnvVars_72;
  MR_Word OutOfLineCode_73;
  MR_Word CodeInfoPersistent0_74;
  MR_Word CodeInfo0_75;
  MR_Word Var_39;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_16, &Globals_31);
  ExprnOpts_32 = ll_backend__code_info__init_exprn_opts_1_f_0(Globals_31);
  ProcLabel_33 = backend_libs__proc_label__make_proc_label_3_f_0(ModuleInfo_16, PredId_17, ProcId_18);
  hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(ProcInfo_20, &StackSlots_34);
  ll_backend__code_info__max_var_slot_2_p_0(StackSlots_34, &VarSlotMax_35);
  libs__globals__get_trace_level_2_p_0(Globals_31, &TraceLevel_36);
  EffTraceLevel_37 = libs__trace_params__eff_trace_level_for_proc_4_f_0(ModuleInfo_16, PredInfo_19, ProcInfo_20, TraceLevel_36);
  ll_backend__trace_gen__trace_reserved_slots_5_p_0(Globals_31, ProcInfo_20, EffTraceLevel_37, &FixedSlots_38, &Var_39);
  mercury__int__max_3_p_0(VarSlotMax_35, FixedSlots_38, &SlotMax_40);
  libs__globals__lookup_bool_option_3_p_0(Globals_31, (MR_Integer) 390, &OptNoReturnCalls_42);
  libs__globals__lookup_bool_option_3_p_0(Globals_31, (MR_Integer) 291, &UseTrail_43);
  libs__globals__lookup_bool_option_3_p_0(Globals_31, (MR_Integer) 357, &DisableTrailOps_44);
  succeeded = (UseTrail_43 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (DisableTrailOps_44 == (MR_Integer) 0);
  if (succeeded)
    EmitTrailOps_45 = (MR_Integer) 0;
  else
    EmitTrailOps_45 = (MR_Integer) 1;
  libs__globals__lookup_bool_option_3_p_0(Globals_31, (MR_Integer) 531, &OptTrailOps_46);
  libs__globals__get_opt_tuple_2_p_0(Globals_31, &OptTuple_47);
  UseRegions_48 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 1))) >> 20)) & (MR_Integer) 1);
  switch (UseRegions_48) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      EmitRegionOps_49 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      EmitRegionOps_49 = (MR_Integer) 1;
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_31, (MR_Integer) 532, &OptRegionOps_50);
  libs__globals__lookup_bool_option_3_p_0(Globals_31, (MR_Integer) 199, &AutoComments_51);
  LCMCNull_52 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 1))) >> 29)) & (MR_Integer) 1);
  libs__globals__lookup_bool_option_3_p_0(Globals_31, (MR_Integer) 267, &ProfileMemory_53);
  UseAtomicCells_54 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 1))) >> 8)) & (MR_Integer) 1);
  switch (UseAtomicCells_54) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      InitMayUseAtomic_55 = (MR_Integer) 1;
      break;
    case (MR_Integer) 0:
      InitMayUseAtomic_55 = (MR_Integer) 0;
      break;
  }
  libs__globals__lookup_int_option_3_p_0(Globals_31, (MR_Integer) 308, &NumPtagBitsInt_56);
  NumPtagBits_57 = mercury__uint8__det_from_int_1_f_0(NumPtagBitsInt_56);
  libs__globals__get_gc_method_2_p_0(Globals_31, &GCMethod_58);
  {
    CodeInfoStatic0_59 = (MR_Word) MR_new_object(MR_Word, (18 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CodeInfoStatic0_59, 0) = ((MR_Box) (ModuleInfo_16));
    MR_hl_field(0, CodeInfoStatic0_59, 1) = ((MR_Box) (Globals_31));
    MR_hl_field(0, CodeInfoStatic0_59, 2) = ((MR_Box) (ExprnOpts_32));
    MR_hl_field(0, CodeInfoStatic0_59, 3) = (MR_Box) ((MR_Unsigned) (EffTraceLevel_37));
    MR_hl_field(0, CodeInfoStatic0_59, 4) = ((MR_Box) (PredId_17));
    MR_hl_field(0, CodeInfoStatic0_59, 5) = ((MR_Box) (ProcId_18));
    MR_hl_field(0, CodeInfoStatic0_59, 6) = ((MR_Box) (PredInfo_19));
    MR_hl_field(0, CodeInfoStatic0_59, 7) = ((MR_Box) (ProcInfo_20));
    MR_hl_field(0, CodeInfoStatic0_59, 8) = ((MR_Box) (ProcLabel_33));
    MR_hl_field(0, CodeInfoStatic0_59, 9) = ((MR_Box) (VarTable_21));
    MR_hl_field(0, CodeInfoStatic0_59, 10) = ((MR_Box) (SlotMax_40));
    MR_hl_field(0, CodeInfoStatic0_59, 11) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, CodeInfoStatic0_59, 12) = (MR_Box) (((((MR_Unsigned) (OptNoReturnCalls_42) << 8)) | (((((MR_Unsigned) (EmitTrailOps_45) << 7)) | (((((MR_Unsigned) (OptTrailOps_46) << 6)) | (((((MR_Unsigned) (EmitRegionOps_49) << 5)) | (((((MR_Unsigned) (OptRegionOps_50) << 4)) | (((((MR_Unsigned) (AutoComments_51) << 3)) | (((((MR_Unsigned) (LCMCNull_52) << 2)) | (((((MR_Unsigned) (ProfileMemory_53) << 1)) | (MR_Unsigned) (InitMayUseAtomic_55)))))))))))))))));
    MR_hl_field(0, CodeInfoStatic0_59, 13) = ((MR_Box) (MR_Word) (NumPtagBits_57));
    MR_hl_field(0, CodeInfoStatic0_59, 14) = (MR_Box) ((MR_Unsigned) (GCMethod_58));
    MR_hl_field(0, CodeInfoStatic0_59, 15) = ((MR_Box) (MaybeContainingGoalMap_26));
    MR_hl_field(0, CodeInfoStatic0_59, 16) = ((MR_Box) (ConstStructMap_24));
    MR_hl_field(0, CodeInfoStatic0_59, 17) = ((MR_Box) (ProgressStream_25));
  }
  LabelNumCounter0_60 = mercury__counter__init_1_f_0((MR_Integer) 1);
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0), &LayoutMap_61);
  mercury__map__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0), &TempContentMap_66);
  mercury__set__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), &PersistentTemps_67);
  ClosureLayoutSeqNumCounter0_68 = mercury__counter__init_1_f_0((MR_Integer) 1);
  AllocSitesMap0_71 = mercury__set_tree234__init_0_f_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0));
  mercury__set__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &UsedEnvVars_72);
  OutOfLineCode_73 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
  {
    CodeInfoPersistent0_74 = (MR_Word) MR_new_object(MR_Word, (18 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CodeInfoPersistent0_74, 0) = ((MR_Box) (LabelNumCounter0_60));
    MR_hl_field(0, CodeInfoPersistent0_74, 1) = (MR_Box) ((MR_Unsigned) (SaveSuccip_22));
    MR_hl_field(0, CodeInfoPersistent0_74, 2) = ((MR_Box) (LayoutMap_61));
    MR_hl_field(0, CodeInfoPersistent0_74, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, CodeInfoPersistent0_74, 4) = ((MR_Box) ((MR_Integer) -1));
    MR_hl_field(0, CodeInfoPersistent0_74, 5) = ((MR_Box) ((MR_Integer) -1));
    MR_hl_field(0, CodeInfoPersistent0_74, 6) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, CodeInfoPersistent0_74, 7) = ((MR_Box) (TempContentMap_66));
    MR_hl_field(0, CodeInfoPersistent0_74, 8) = ((MR_Box) (PersistentTemps_67));
    MR_hl_field(0, CodeInfoPersistent0_74, 9) = ((MR_Box) (ClosureLayoutSeqNumCounter0_68));
    MR_hl_field(0, CodeInfoPersistent0_74, 10) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, CodeInfoPersistent0_74, 11) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, CodeInfoPersistent0_74, 12) = ((MR_Box) (StaticCellInfo_23));
    MR_hl_field(0, CodeInfoPersistent0_74, 13) = ((MR_Box) (AllocSitesMap0_71));
    MR_hl_field(0, CodeInfoPersistent0_74, 14) = ((MR_Box) (UsedEnvVars_72));
    MR_hl_field(0, CodeInfoPersistent0_74, 15) = ((MR_Box) (TSStringTableSize_28));
    MR_hl_field(0, CodeInfoPersistent0_74, 16) = ((MR_Box) (TSRevStringTable_27));
    MR_hl_field(0, CodeInfoPersistent0_74, 17) = ((MR_Box) (OutOfLineCode_73));
  }
  {
    CodeInfo0_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CodeInfo0_75, 0) = ((MR_Box) (CodeInfoStatic0_59));
    MR_hl_field(0, CodeInfo0_75, 1) = ((MR_Box) (CodeInfoPersistent0_74));
  }
  ll_backend__code_info__init_maybe_trace_info_6_p_0(Globals_31, ProcInfo_20, EffTraceLevel_37, TraceSlotInfo_29, CodeInfo0_75, CodeInfo_30);
}

static void MR_CALL 
ll_backend__code_info__max_var_slot_2_p_0(
  MR_Word StackSlots_3,
  MR_Integer * SlotCount_4)
{
  MR_Word StackSlotList_5;

  mercury__map__values_2_p_0((MR_Word) (&ll_backend__code_info_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), StackSlots_3, &StackSlotList_5);
  ll_backend__code_info__max_var_slot_loop_3_p_0(StackSlotList_5, (MR_Integer) 0, SlotCount_4);
}

static void MR_CALL 
ll_backend__code_info__max_var_slot_loop_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_Max_0_2,
  MR_Integer * STATE_VARIABLE_Max_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Max_3 = STATE_VARIABLE_Max_0_2;
    else
    {
      MR_Word Slot_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Slots_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer STATE_VARIABLE_Max_14_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_Max_0_2;

      switch (MR_tag((MR_Word) Slot_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer N_10 = ((MR_Integer) ((MR_hl_field(0, Slot_7, (MR_Integer) 0))));
            MR_Word Width_11 = ((MR_Unsigned) ((MR_hl_field(0, Slot_7, (MR_Integer) 1))) & (MR_Integer) 1);

            switch (Width_11) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Integer Var_15 = (MR_Integer) ((MR_Unsigned) N_10 + (MR_Unsigned) 1);

                  mercury__int__max_3_p_0(Var_15, STATE_VARIABLE_Max_0_2, &STATE_VARIABLE_Max_14_14);
                }
                break;
              case (MR_Integer) 0:
                mercury__int__max_3_p_0(N_10, STATE_VARIABLE_Max_0_2, &STATE_VARIABLE_Max_14_14);
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer N_25 = ((MR_Integer) ((MR_hl_field(1, Slot_7, (MR_Integer) 0))));
            MR_Word Width_26 = ((MR_Unsigned) ((MR_hl_field(1, Slot_7, (MR_Integer) 1))) & (MR_Integer) 1);

            switch (Width_26) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Integer Var_21 = (MR_Integer) ((MR_Unsigned) N_25 + (MR_Unsigned) 1);

                  mercury__int__max_3_p_0(Var_21, STATE_VARIABLE_Max_0_2, &STATE_VARIABLE_Max_14_14);
                }
                break;
              case (MR_Integer) 0:
                mercury__int__max_3_p_0(N_25, STATE_VARIABLE_Max_0_2, &STATE_VARIABLE_Max_14_14);
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer N_19 = ((MR_Integer) ((MR_hl_field(2, Slot_7, (MR_Integer) 0))));

            mercury__int__max_3_p_0(N_19, STATE_VARIABLE_Max_0_2, &STATE_VARIABLE_Max_14_14);
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Slots_8;
      next_value_of_STATE_VARIABLE_Max_0_2 = STATE_VARIABLE_Max_14_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Max_0_2 = next_value_of_STATE_VARIABLE_Max_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__code_info__init_maybe_trace_info_6_p_0(
  MR_Word Globals_7,
  MR_Word ProcInfo_8,
  MR_Word EffTraceLevel_9,
  MR_Word * TraceSlotInfo_10,
  MR_Word STATE_VARIABLE_CI_0_19,
  MR_Word * STATE_VARIABLE_CI_20)
{
  MR_Word TraceEnabled_12;

  TraceEnabled_12 = libs__trace_params__is_exec_trace_enabled_at_eff_trace_level_1_f_0(EffTraceLevel_9);
  switch (TraceEnabled_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word HasTailRecCall_13;
        MR_Word HasSelfTailRecCall_14;
        MR_Word MaybeTailRecLabel_17;
        MR_Word TraceInfo_18;
        MR_Word STATE_VARIABLE_CI_21_21;
        MR_Word STATE_VARIABLE_CI_22_22;
        MR_Word Var_23;
        MR_Word Var_24;
        MR_Word Var_25;
        MR_Word Var_26;
        MR_Word Var_27;
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Integer Var_32;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Var_35;
        MR_Word Var_36;
        MR_Integer Var_37;
        uint8_t Var_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Unsigned packed_word_2;

        hlds__hlds_pred__proc_info_get_has_tail_rec_call_2_p_0(ProcInfo_8, &HasTailRecCall_13);
        HasSelfTailRecCall_14 = ((((MR_Unsigned) ((MR_hl_field(0, HasTailRecCall_13, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
        switch (HasSelfTailRecCall_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MaybeTailRecLabel_17 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_CI_21_21 = STATE_VARIABLE_CI_0_19;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word TailRecLabel_16;

              ll_backend__code_info__get_next_label_3_p_0(&TailRecLabel_16, STATE_VARIABLE_CI_0_19, &STATE_VARIABLE_CI_21_21);
              {
                MaybeTailRecLabel_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeTailRecLabel_17, 0) = ((MR_Box) (TailRecLabel_16));
              }
            }
            break;
        }
        ll_backend__trace_gen__trace_setup_8_p_0(Globals_7, ProcInfo_8, EffTraceLevel_9, MaybeTailRecLabel_17, TraceSlotInfo_10, &TraceInfo_18, STATE_VARIABLE_CI_21_21, &STATE_VARIABLE_CI_22_22);
        {
          Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_23, 0) = ((MR_Box) (TraceInfo_18));
        }
        Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_22_22, (MR_Integer) 0))));
        Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_22_22, (MR_Integer) 1))));
        Var_27 = ((MR_Word) ((MR_hl_field(0, Var_24, (MR_Integer) 0))));
        Var_28 = ((MR_Word) ((MR_hl_field(0, Var_24, (MR_Integer) 1))));
        Var_29 = ((MR_Word) ((MR_hl_field(0, Var_24, (MR_Integer) 2))));
        Var_30 = ((MR_Unsigned) ((MR_hl_field(0, Var_24, (MR_Integer) 3))) & (MR_Integer) 7);
        Var_31 = ((MR_Word) ((MR_hl_field(0, Var_24, (MR_Integer) 4))));
        Var_32 = ((MR_Integer) ((MR_hl_field(0, Var_24, (MR_Integer) 5))));
        Var_33 = ((MR_Word) ((MR_hl_field(0, Var_24, (MR_Integer) 6))));
        Var_34 = ((MR_Word) ((MR_hl_field(0, Var_24, (MR_Integer) 7))));
        Var_35 = ((MR_Word) ((MR_hl_field(0, Var_24, (MR_Integer) 8))));
        Var_36 = ((MR_Word) ((MR_hl_field(0, Var_24, (MR_Integer) 9))));
        Var_37 = ((MR_Integer) ((MR_hl_field(0, Var_24, (MR_Integer) 10))));
        packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, Var_24, (MR_Integer) 12)));
        Var_48 = ((uint8_t) (MR_Word) (MR_hl_field(0, Var_24, (MR_Integer) 13)));
        Var_49 = ((MR_Unsigned) ((MR_hl_field(0, Var_24, (MR_Integer) 14))) & (MR_Integer) 7);
        Var_50 = ((MR_Word) ((MR_hl_field(0, Var_24, (MR_Integer) 15))));
        Var_51 = ((MR_Word) ((MR_hl_field(0, Var_24, (MR_Integer) 16))));
        Var_52 = ((MR_Word) ((MR_hl_field(0, Var_24, (MR_Integer) 17))));
        {
          Var_25 = (MR_Word) MR_new_object(MR_Word, (18 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_25, 0) = ((MR_Box) (Var_27));
          MR_hl_field(0, Var_25, 1) = ((MR_Box) (Var_28));
          MR_hl_field(0, Var_25, 2) = ((MR_Box) (Var_29));
          MR_hl_field(0, Var_25, 3) = (MR_Box) ((MR_Unsigned) (Var_30));
          MR_hl_field(0, Var_25, 4) = ((MR_Box) (Var_31));
          MR_hl_field(0, Var_25, 5) = ((MR_Box) (Var_32));
          MR_hl_field(0, Var_25, 6) = ((MR_Box) (Var_33));
          MR_hl_field(0, Var_25, 7) = ((MR_Box) (Var_34));
          MR_hl_field(0, Var_25, 8) = ((MR_Box) (Var_35));
          MR_hl_field(0, Var_25, 9) = ((MR_Box) (Var_36));
          MR_hl_field(0, Var_25, 10) = ((MR_Box) (Var_37));
          MR_hl_field(0, Var_25, 11) = ((MR_Box) (Var_23));
          MR_hl_field(0, Var_25, 12) = (MR_Box) (packed_word_2);
          MR_hl_field(0, Var_25, 13) = ((MR_Box) (MR_Word) (Var_48));
          MR_hl_field(0, Var_25, 14) = (MR_Box) ((MR_Unsigned) (Var_49));
          MR_hl_field(0, Var_25, 15) = ((MR_Box) (Var_50));
          MR_hl_field(0, Var_25, 16) = ((MR_Box) (Var_51));
          MR_hl_field(0, Var_25, 17) = ((MR_Box) (Var_52));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_CI_20 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_25));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_26));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        *TraceSlotInfo_10 = (MR_Word) (&ll_backend__code_info_scalar_common_4[0]);
        *STATE_VARIABLE_CI_20 = STATE_VARIABLE_CI_0_19;
      }
      break;
  }
}

void MR_CALL 
ll_backend__code_info__get_next_label_3_p_0(
  MR_Word * Label_4,
  MR_Word STATE_VARIABLE_CI_0_10,
  MR_Word * STATE_VARIABLE_CI_11)
{
  MR_Word ProcLabel_6;
  MR_Word C0_7;
  MR_Integer N_8;
  MR_Word C_9;
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_10, (MR_Integer) 0))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_10, (MR_Integer) 1))));
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Integer Var_65;
  MR_Integer Var_66;
  MR_Integer Var_67;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Integer Var_76;
  MR_Word Var_77;
  MR_Word Var_78;

  ProcLabel_6 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 8))));
  C0_7 = ((MR_Word) ((MR_hl_field(0, Var_13, (MR_Integer) 0))));
  mercury__counter__allocate_3_p_0(&N_8, C0_7, &C_9);
  Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_10, (MR_Integer) 0))));
  Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_10, (MR_Integer) 1))));
  Var_62 = ((MR_Unsigned) ((MR_hl_field(0, Var_58, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_63 = ((MR_Word) ((MR_hl_field(0, Var_58, (MR_Integer) 2))));
  Var_64 = ((MR_Unsigned) ((MR_hl_field(0, Var_58, (MR_Integer) 3))) & (MR_Integer) 1);
  Var_65 = ((MR_Integer) ((MR_hl_field(0, Var_58, (MR_Integer) 4))));
  Var_66 = ((MR_Integer) ((MR_hl_field(0, Var_58, (MR_Integer) 5))));
  Var_67 = ((MR_Integer) ((MR_hl_field(0, Var_58, (MR_Integer) 6))));
  Var_68 = ((MR_Word) ((MR_hl_field(0, Var_58, (MR_Integer) 7))));
  Var_69 = ((MR_Word) ((MR_hl_field(0, Var_58, (MR_Integer) 8))));
  Var_70 = ((MR_Word) ((MR_hl_field(0, Var_58, (MR_Integer) 9))));
  Var_71 = ((MR_Word) ((MR_hl_field(0, Var_58, (MR_Integer) 10))));
  Var_72 = ((MR_Unsigned) ((MR_hl_field(0, Var_58, (MR_Integer) 11))) & (MR_Integer) 1);
  Var_73 = ((MR_Word) ((MR_hl_field(0, Var_58, (MR_Integer) 12))));
  Var_74 = ((MR_Word) ((MR_hl_field(0, Var_58, (MR_Integer) 13))));
  Var_75 = ((MR_Word) ((MR_hl_field(0, Var_58, (MR_Integer) 14))));
  Var_76 = ((MR_Integer) ((MR_hl_field(0, Var_58, (MR_Integer) 15))));
  Var_77 = ((MR_Word) ((MR_hl_field(0, Var_58, (MR_Integer) 16))));
  Var_78 = ((MR_Word) ((MR_hl_field(0, Var_58, (MR_Integer) 17))));
  {
    Var_59 = (MR_Word) MR_new_object(MR_Word, (18 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_59, 0) = ((MR_Box) (C_9));
    MR_hl_field(0, Var_59, 1) = (MR_Box) ((MR_Unsigned) (Var_62));
    MR_hl_field(0, Var_59, 2) = ((MR_Box) (Var_63));
    MR_hl_field(0, Var_59, 3) = (MR_Box) ((MR_Unsigned) (Var_64));
    MR_hl_field(0, Var_59, 4) = ((MR_Box) (Var_65));
    MR_hl_field(0, Var_59, 5) = ((MR_Box) (Var_66));
    MR_hl_field(0, Var_59, 6) = ((MR_Box) (Var_67));
    MR_hl_field(0, Var_59, 7) = ((MR_Box) (Var_68));
    MR_hl_field(0, Var_59, 8) = ((MR_Box) (Var_69));
    MR_hl_field(0, Var_59, 9) = ((MR_Box) (Var_70));
    MR_hl_field(0, Var_59, 10) = ((MR_Box) (Var_71));
    MR_hl_field(0, Var_59, 11) = (MR_Box) ((MR_Unsigned) (Var_72));
    MR_hl_field(0, Var_59, 12) = ((MR_Box) (Var_73));
    MR_hl_field(0, Var_59, 13) = ((MR_Box) (Var_74));
    MR_hl_field(0, Var_59, 14) = ((MR_Box) (Var_75));
    MR_hl_field(0, Var_59, 15) = ((MR_Box) (Var_76));
    MR_hl_field(0, Var_59, 16) = ((MR_Box) (Var_77));
    MR_hl_field(0, Var_59, 17) = ((MR_Box) (Var_78));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CI_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_60));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_59));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Label_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (N_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (ProcLabel_6));
  }
}

static MR_Word MR_CALL 
ll_backend__code_info__init_exprn_opts_1_f_0(
  MR_Word Globals_3)
{
  MR_Word ExprnOpts_4;
  MR_Word OptNLG_5;
  MR_Word NLG_6;
  MR_Word OptASM_7;
  MR_Word ASM_8;
  MR_Word OptTuple_9;
  MR_Word OptSGCell_10;
  MR_Word SGCell_11;
  MR_Word OptUBF_12;
  MR_Word UBF_13;
  MR_Word OptFloatRegs_14;
  MR_Word UseFloatRegs_15;
  MR_Word FloatDwords_16;
  MR_Word DetStackFloatWidth_17;
  MR_Word OptUBI64s_18;
  MR_Word UBI64s_19;
  MR_Word OptSGFloat_20;
  MR_Word SGFloat_21;
  MR_Word OptSGInt64s_22;
  MR_Word SGInt64s_23;
  MR_Word OptStaticCodeAddr_24;
  MR_Word StaticCodeAddrs_25;

  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 328, &OptNLG_5);
  switch (OptNLG_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      NLG_6 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      NLG_6 = (MR_Integer) 0;
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 330, &OptASM_7);
  switch (OptASM_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ASM_8 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      ASM_8 = (MR_Integer) 0;
      break;
  }
  libs__globals__get_opt_tuple_2_p_0(Globals_3, &OptTuple_9);
  OptSGCell_10 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_9, (MR_Integer) 1))) >> 12)) & (MR_Integer) 1);
  switch (OptSGCell_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      SGCell_11 = (MR_Integer) 1;
      break;
    case (MR_Integer) 0:
      SGCell_11 = (MR_Integer) 0;
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 312, &OptUBF_12);
  switch (OptUBF_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      UBF_13 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      UBF_13 = (MR_Integer) 0;
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 331, &OptFloatRegs_14);
  switch (OptFloatRegs_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      UseFloatRegs_15 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      UseFloatRegs_15 = (MR_Integer) 0;
      break;
  }
  libs__globals__double_width_floats_on_det_stack_2_p_0(Globals_3, &FloatDwords_16);
  switch (FloatDwords_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      DetStackFloatWidth_17 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      DetStackFloatWidth_17 = (MR_Integer) 1;
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 313, &OptUBI64s_18);
  switch (OptUBI64s_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      UBI64s_19 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      UBI64s_19 = (MR_Integer) 0;
      break;
  }
  OptSGFloat_20 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_9, (MR_Integer) 1))) >> 11)) & (MR_Integer) 1);
  OptSGInt64s_22 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_9, (MR_Integer) 1))) >> 10)) & (MR_Integer) 1);
  OptStaticCodeAddr_24 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_9, (MR_Integer) 1))) >> 9)) & (MR_Integer) 1);
  switch (OptSGFloat_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      SGFloat_21 = (MR_Integer) 1;
      break;
    case (MR_Integer) 0:
      SGFloat_21 = (MR_Integer) 0;
      break;
  }
  switch (OptSGInt64s_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      SGInt64s_23 = (MR_Integer) 1;
      break;
    case (MR_Integer) 0:
      SGInt64s_23 = (MR_Integer) 0;
      break;
  }
  switch (OptStaticCodeAddr_24) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      StaticCodeAddrs_25 = (MR_Integer) 1;
      break;
    case (MR_Integer) 0:
      StaticCodeAddrs_25 = (MR_Integer) 0;
      break;
  }
  {
    ExprnOpts_4 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ExprnOpts_4, 0) = (MR_Box) (((((MR_Unsigned) (NLG_6) << 9)) | (((((MR_Unsigned) (ASM_8) << 8)) | (((((MR_Unsigned) (UBF_13) << 7)) | (((((MR_Unsigned) (UseFloatRegs_15) << 6)) | (((((MR_Unsigned) (DetStackFloatWidth_17) << 5)) | (((((MR_Unsigned) (UBI64s_19) << 4)) | (((((MR_Unsigned) (SGCell_11) << 3)) | (((((MR_Unsigned) (SGFloat_21) << 2)) | (((((MR_Unsigned) (SGInt64s_23) << 1)) | (MR_Unsigned) (StaticCodeAddrs_25)))))))))))))))))));
  }
  return ExprnOpts_4;
}

static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__code_info____Unify____code_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__code_info____Compare____code_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__code_info____Compare____code_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_persistent_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__code_info____Unify____code_info_persistent_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__code_info____Compare____code_info_persistent_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__code_info____Compare____code_info_persistent_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_static_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__code_info____Unify____code_info_static_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__code_info____Compare____code_info_static_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__code_info____Compare____code_info_static_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__code_info____Unify____for_call_or_closure_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__code_info____Unify____for_call_or_closure_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__code_info____Compare____for_call_or_closure_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__code_info____Compare____for_call_or_closure_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ll_backend__code_info__init(void)
{
}

void mercury__ll_backend__code_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0);
	MR_register_type_ctor_info(&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_persistent_0);
	MR_register_type_ctor_info(&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_static_0);
	MR_register_type_ctor_info(&ll_backend__code_info__ll_backend__code_info__type_ctor_info_for_call_or_closure_0);
}

void mercury__ll_backend__code_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__code_info__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.code_info.
